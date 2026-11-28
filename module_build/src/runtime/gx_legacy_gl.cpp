#include "gx_dolphin_gl.hpp"

void Ggsea4RenderDevice::SubmitDecodedDraw(const moderngekko::GxDrawPacket& packet,
                       const moderngekko::GxDecodedDraw& decoded,
                       const moderngekko::GxStateView& state)  {
#if defined(_WIN32)
    ScopedPerfQpc prof_submit(g_perf.gl_submit_qpc);
    if (g_perf.enabled) {
        ++g_perf.draws;
    }
#endif
    ++m_draw_count;
    m_vertex_count += decoded.vertices.size();

    if (m_audit_dolphin_shaders &&
        (m_draw_count <= 5 || (m_draw_count >= 60 && m_draw_count <= 75) || m_draw_count == 80 || m_draw_count == 83 || m_draw_count == 8842 || m_draw_count == 8843 || m_draw_count == 8850)) {
        std::printf("[DRAW-DISPATCH %llu] vtxs=%zu topology=%d\n",
                    static_cast<unsigned long long>(m_draw_count), decoded.vertices.size(), static_cast<int>(decoded.topology));
        std::printf("  Packet raw bytes (%zu bytes, vtx_size=%u, count=%u, vat=%u):\n    ",
                    packet.vertex_data.size(), packet.vertex_size, packet.vertex_count, packet.vat);
        for (size_t b = 0; b < packet.vertex_data.size(); ++b) {
            std::printf("%02X ", packet.vertex_data[b]);
            if ((b + 1) % 16 == 0) std::printf("\n    ");
        }
        std::printf("\n");
        const uint32_t vcd_l = (state.cp.size() > 0x50u) ? state.cp[0x50u] : 0u;
        const uint32_t vcd_h = (state.cp.size() > 0x60u) ? state.cp[0x60u] : 0u;
        const uint32_t vat_idx = packet.vat & 7u;
        const uint32_t vat_g0 = (state.cp.size() > 0x70u + vat_idx) ? state.cp[0x70u + vat_idx] : 0u;
        const uint32_t vat_g1 = (state.cp.size() > 0x80u + vat_idx) ? state.cp[0x80u + vat_idx] : 0u;
        const uint32_t vat_g2 = (state.cp.size() > 0x90u + vat_idx) ? state.cp[0x90u + vat_idx] : 0u;
        std::printf("  CP VCD: low=0x%08X high=0x%08X | VAT%u: g0=0x%08X g1=0x%08X g2=0x%08X\n",
                    vcd_l, vcd_h, vat_idx, vat_g0, vat_g1, vat_g2);
        if (g_active_cpu) {
            u32 sp = g_active_cpu->gpr[1];
            std::printf("  Guest CPU: PC=0x%08X LR=0x%08X SP=0x%08X\n", g_active_cpu->pc, g_active_cpu->lr, sp);
            for (int k = 0; k < 6; ++k) {
                u32 plr = mem_read32(g_active_cpu, sp + 4u);
                u32 nsp = mem_read32(g_active_cpu, sp);
                std::printf("    Depth %d: SP=0x%08X LR=0x%08X (rel_off=0x%08X)\n",
                            k, sp, plr, (plr >= 0x7F008000u ? plr - 0x7F008000u : plr));
                if (nsp >= 0x80000000u && nsp <= 0x817FFFF0u && nsp > sp) sp = nsp;
                else break;
            }
        }
    }

    // 1. Maintain DolphinVideo shader telemetry and cache when applicable
    if (m_audit_dolphin_shaders) {
        const auto pipeline_key = moderngekko::GxPipelineKey::FromState(decoded.topology, state);
        const std::uint64_t key_hash = pipeline_key.Hash();
        if (!m_compiled_pipelines.contains(key_hash)) {
            const moderngekko::DolphinShaderBundle bundle = moderngekko::DolphinShaderCompiler::Compile(
                state, decoded.topology, packet.vat, moderngekko::DolphinShaderApi::OpenGl);
            m_compiled_pipelines.emplace(key_hash, bundle);
            ++m_shader_compile_count;
        }
    }

#if defined(_WIN32)
    if (decoded.indices.empty() || decoded.vertices.empty() || state.bp.size() < 256u) {
        return;
    }

    if (m_use_dolphin_pipeline && SubmitDolphinDraw(packet, decoded, state)) {
        return;
    }

    if (m_dolphin_clip_enabled) {
        glDisable(GL_CLIP_DISTANCE0);
        glDisable(GL_CLIP_DISTANCE1);
        glDisable(GL_DEPTH_CLAMP);
        m_dolphin_clip_enabled = false;
    }
    m_dolphin_state_valid = false;

    const uint32_t genmode = state.bp[0x00u];
    const uint32_t cull_mode = (genmode >> 14) & 3u;
    // CullMode::All (3) discards triangles/quads on Flipper hardware
    if (cull_mode == 3u && decoded.topology == moderngekko::GxTopology::Triangles) {
        return;
    }

    GLenum gl_mode = GL_TRIANGLES;
    if (decoded.topology == moderngekko::GxTopology::Lines) {
        gl_mode = GL_LINES;
    } else if (decoded.topology == moderngekko::GxTopology::Points) {
        gl_mode = GL_POINTS;
    }

    // 2. Pre-calculate GX Viewport (xf[0x101A..0x101F]) and Scissor (bp[0x20..0x21], bp[0x59]) in local variables
    const float* xf_floats = reinterpret_cast<const float*>(state.xf.data());
    const uint32_t sc_off = state.bp[0x59u];
    const int x_off = (sc_off != 0u) ? static_cast<int>((sc_off & 0x1FFu) << 1) : 342;
    const int y_off = (sc_off != 0u) ? static_cast<int>(((sc_off >> 10) & 0x1FFu) << 1) : 342;
    float vp_wd_half = m_cached_vp_wd_half;
    float vp_ht_half = m_cached_vp_ht_half;
    float vp_zrange  = m_cached_vp_zrange;
    float vp_farz    = m_cached_vp_farz;
    float efb_vp_left = m_cached_efb_vp_left;
    float efb_vp_top  = m_cached_efb_vp_top;
    GLint new_vp_x = m_cached_vp_gl_x;
    GLint new_vp_y = m_cached_vp_gl_y;
    GLsizei new_vp_w = m_cached_vp_gl_w;
    GLsizei new_vp_h = m_cached_vp_gl_h;
    double new_depth_n = m_cached_depth_n;
    double new_depth_f = m_cached_depth_f;
    if (!(m_vp_cache_valid && state.xf.size() >= 0x1020u &&
          std::memcmp(m_cached_xf_vp, &state.xf[0x101Au], 24) == 0 &&
          m_cached_vp_sc_off == sc_off &&
          m_cached_vp_disp_w == m_last_disp_w && m_cached_vp_disp_h == m_last_disp_h)) {
        vp_wd_half = (state.xf.size() >= 0x1020u) ? xf_floats[0x101Au] : 320.0f;
        vp_ht_half = (state.xf.size() >= 0x1020u) ? xf_floats[0x101Bu] : -240.0f;
        vp_zrange  = (state.xf.size() >= 0x1020u) ? xf_floats[0x101Cu] : 16777215.0f;
        float vp_xorig = (state.xf.size() >= 0x1020u) ? (xf_floats[0x101Du] - static_cast<float>(x_off)) : 320.0f;
        float vp_yorig = (state.xf.size() >= 0x1020u) ? (xf_floats[0x101Eu] - static_cast<float>(y_off)) : 240.0f;
        vp_farz    = (state.xf.size() >= 0x1020u) ? xf_floats[0x101Fu] : 16777215.0f;

        const bool vp_is_valid = std::isfinite(vp_wd_half) && std::isfinite(vp_ht_half) &&
                                 std::isfinite(vp_xorig) && std::isfinite(vp_yorig) &&
                                 std::fabs(vp_wd_half) >= 0.5f && std::fabs(vp_wd_half) <= 2048.0f &&
                                 std::fabs(vp_ht_half) >= 0.5f && std::fabs(vp_ht_half) <= 2048.0f &&
                                 vp_xorig >= -2048.0f && vp_xorig <= 2048.0f &&
                                 vp_yorig >= -2048.0f && vp_yorig <= 2048.0f;

        if (!vp_is_valid) {
            const float target_w = (m_last_disp_w > 0 && m_last_disp_w <= EFB_WIDTH) ? static_cast<float>(m_last_disp_w) : 512.0f;
            const float target_h = (m_last_disp_h > 0 && m_last_disp_h <= EFB_HEIGHT) ? static_cast<float>(m_last_disp_h) : 448.0f;
            vp_wd_half = target_w * 0.5f;
            vp_ht_half = -target_h * 0.5f;
            vp_xorig   = vp_wd_half;
            vp_yorig   = target_h * 0.5f;
            vp_zrange  = 16777215.0f;
            vp_farz    = 16777215.0f;

            static int s_invalid_vp_logged = 0;
            if (++s_invalid_vp_logged <= 20) {
                std::printf("[XF-VIEWPORT-REPAIR] Draw %llu (frame %u): raw=[wd=%.2f, ht=%.2f, x0=%.2f, y0=%.2f] -> recovered to 0,0 %.0fx%.0f\n",
                            static_cast<unsigned long long>(m_draw_count), m_current_frame,
                            xf_floats[0x101Au], xf_floats[0x101Bu], xf_floats[0x101Du], xf_floats[0x101Eu],
                            target_w, target_h);
            }
        }

        const float vp_w_f = std::fabs(vp_wd_half * 2.0f);
        const float vp_h_f = std::fabs(vp_ht_half * 2.0f);
        efb_vp_left = vp_xorig - std::fabs(vp_wd_half);
        efb_vp_top  = vp_yorig - std::fabs(vp_ht_half);

        new_vp_x = std::clamp<GLint>(static_cast<GLint>(std::lround(efb_vp_left)), -4096, 4096);
        new_vp_y = std::clamp<GLint>(static_cast<GLint>(std::lround(static_cast<float>(EFB_HEIGHT) - (efb_vp_top + vp_h_f))), -4096, 4096);
        new_vp_w = std::clamp<GLsizei>(std::max<GLsizei>(1, static_cast<GLsizei>(std::lround(vp_w_f))), 1, 8192);
        new_vp_h = std::clamp<GLsizei>(std::max<GLsizei>(1, static_cast<GLsizei>(std::lround(vp_h_f))), 1, 8192);

        const bool z_vp_valid = std::isfinite(vp_farz) && std::isfinite(vp_zrange) && (vp_farz != 0.0f || vp_zrange != 0.0f);
        new_depth_n = z_vp_valid ? std::clamp(static_cast<double>(vp_farz) / 16777216.0, 0.0, 1.0) : 1.0;
        new_depth_f = z_vp_valid ? std::clamp(static_cast<double>(vp_farz - vp_zrange) / 16777216.0, 0.0, 1.0) : 0.0;

        if (state.xf.size() >= 0x1020u) {
            std::memcpy(m_cached_xf_vp, &state.xf[0x101Au], 24);
            m_cached_vp_sc_off = sc_off;
            m_cached_vp_disp_w = m_last_disp_w;
            m_cached_vp_disp_h = m_last_disp_h;
            m_cached_vp_wd_half = vp_wd_half;
            m_cached_vp_ht_half = vp_ht_half;
            m_cached_vp_zrange = vp_zrange;
            m_cached_vp_farz = vp_farz;
            m_cached_efb_vp_left = efb_vp_left;
            m_cached_efb_vp_top = efb_vp_top;
            m_cached_vp_gl_x = new_vp_x;
            m_cached_vp_gl_y = new_vp_y;
            m_cached_vp_gl_w = new_vp_w;
            m_cached_vp_gl_h = new_vp_h;
            m_cached_depth_n = new_depth_n;
            m_cached_depth_f = new_depth_f;
            m_vp_cache_valid = true;
        }
    }

    // Flipper hardware scissor (BP 0x20, 0x21, 0x59)
    const uint32_t sc_tl = state.bp[0x20u];
    const uint32_t sc_br = state.bp[0x21u];
    bool new_sc_enabled = m_cached_want_sc;
    int new_sc_x = m_cached_sc_x, new_sc_y = m_cached_sc_y, new_sc_w = m_cached_sc_w, new_sc_h = m_cached_sc_h;
    if (!m_sc_cache_valid || sc_tl != m_cached_sc_tl || sc_br != m_cached_sc_br || sc_off != m_cached_sc_off) {
        new_sc_enabled = false;
        new_sc_x = 0; new_sc_y = 0; new_sc_w = 0; new_sc_h = 0;
        if (sc_br != 0u) {
            new_sc_enabled = true;
            const int raw_l = static_cast<int>((sc_tl >> 12) & 0x7FFu);
            const int raw_t = static_cast<int>(sc_tl & 0x7FFu);
            const int raw_r = static_cast<int>((sc_br >> 12) & 0x7FFu);
            const int raw_b = static_cast<int>(sc_br & 0x7FFu);
            if (raw_l <= raw_r && raw_t <= raw_b) {
                const int sc_l = std::clamp(raw_l - x_off, 0, EFB_WIDTH);
                const int sc_t = std::clamp(raw_t - y_off, 0, EFB_HEIGHT);
                const int sc_r = std::clamp(raw_r + 1 - x_off, 0, EFB_WIDTH);
                const int sc_b = std::clamp(raw_b + 1 - y_off, 0, EFB_HEIGHT);
                if (sc_r > sc_l && sc_b > sc_t) {
                    new_sc_x = sc_l;
                    new_sc_y = EFB_HEIGHT - sc_b;
                    new_sc_w = sc_r - sc_l;
                    new_sc_h = sc_b - sc_t;
                }
            }
        }
        m_cached_sc_tl = sc_tl;
        m_cached_sc_br = sc_br;
        m_cached_sc_off = sc_off;
        m_cached_want_sc = new_sc_enabled;
        m_cached_sc_x = new_sc_x;
        m_cached_sc_y = new_sc_y;
        m_cached_sc_w = new_sc_w;
        m_cached_sc_h = new_sc_h;
        m_sc_cache_valid = true;
    }

    // Face culling (BP 0x00 bits 14..15)
    uint32_t eff_cull = 0u;
    if (decoded.topology == moderngekko::GxTopology::Triangles && (cull_mode == 1u || cull_mode == 2u)) {
        eff_cull = cull_mode;
        const bool flip_winding = (vp_ht_half > 0.0f) != (vp_wd_half < 0.0f);
        if (flip_winding) {
            eff_cull = (eff_cull == 1u) ? 2u : 1u;
        }
    }

    // BP 0x40: PE_ZMODE & BP 0x41/0x43: PE_BLENDMODE
    const uint32_t zmode = state.bp[0x40u];
    const uint32_t zmode_key = zmode & 0x1Fu;
    const bool z_test = (zmode & 1u) != 0u;
    const uint32_t z_func_idx = (zmode >> 1) & 7u;
    const bool z_write = (zmode & (1u << 4)) != 0u;

    const bool target_has_alpha = (state.bp[0x43u] & 7u) == 1u;
    const uint32_t blendmode = state.bp[0x41u];
    const bool blend_enable = (blendmode & 1u) != 0u;
    const bool logic_op_enable = !blend_enable && ((blendmode & 2u) != 0u);
    const bool color_update = (blendmode == 0u) || ((blendmode & (1u << 3)) != 0u);
    const bool alpha_update = (blendmode == 0u) || ((blendmode & (1u << 4)) != 0u);
    const uint32_t dst_factor_idx = (blendmode >> 5) & 7u;
    const uint32_t src_factor_idx = (blendmode >> 8) & 7u;
    const bool subtract_blend = ((blendmode >> 11) & 1u) != 0u;
    const uint32_t const_alpha_reg = state.bp[0x42u];
    const bool dst_alpha_en = ((const_alpha_reg >> 8) & 1u) != 0u;
    const uint32_t blend_key = (blendmode & 0xFFFFu) |
                               (target_has_alpha ? (1u << 24) : 0u) |
                               (dst_alpha_en ? (1u << 25) : 0u);

    // Pre-evaluation of AlphaCompare (BP 0xF3) + ZCompLoc (BP 0x43 bit 6)
    const uint32_t num_tev_stages = std::clamp<uint32_t>(((genmode >> 10) & 0xFu) + 1u, 1u, 16u);
    const bool bp_configured = (state.bp[0xC0u] != 0u || state.bp[0x28u] != 0u || genmode != 0u);
    const uint32_t alphacmp = state.bp[0xF3u];
    bool alpha_always_fail = false;
    if (bp_configured && (alphacmp & 0xFFFFFFu) != 0u) {
        const uint32_t comp0 = (alphacmp >> 16) & 7u;
        const uint32_t comp1 = (alphacmp >> 19) & 7u;
        const uint32_t logic = (alphacmp >> 22) & 3u;
        alpha_always_fail =
            (logic == 0u && (comp0 == 0u || comp1 == 0u)) ||
            (logic == 1u && (comp0 == 0u && comp1 == 0u)) ||
            (logic == 2u && ((comp0 == 7u && comp1 == 7u) || (comp0 == 0u && comp1 == 0u))) ||
            (logic == 3u && ((comp0 == 7u && comp1 == 0u) || (comp0 == 0u && comp1 == 7u)));
        if (alpha_always_fail) {
            const bool early_z = ((state.bp[0x43u] >> 6) & 1u) != 0u;
            if (!early_z || !z_write) {
                return;
            }
        }
    }

    // 3. Scan active TEV stages in a single pass and resolve textures (without mutating m_bound_tex yet)
    uint32_t used_texmap_mask = 0u;
    uint32_t used_tcoord_mask = 0u;
    std::array<uint8_t, 8> tc_to_tm = {0, 1, 2, 3, 4, 5, 6, 7};
    for (uint32_t st = 0; st < num_tev_stages; ++st) {
        const uint32_t tref = state.bp[0x28u + (st >> 1)];
        const uint32_t shift = (st & 1u) ? 12u : 0u;
        if (((tref >> (shift + 6u)) & 1u) != 0u) {
            const uint32_t tmap = (tref >> shift) & 7u;
            const uint32_t tcoord = (tref >> (shift + 3u)) & 7u;
            used_texmap_mask |= (1u << tmap);
            used_tcoord_mask |= (1u << tcoord);
            tc_to_tm[tcoord] = static_cast<uint8_t>(tmap);
        }
    }

    static constexpr std::array<float, 32> kDefaultTexUvScales = {
        1.0f, 1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 0.0f, 0.0f,
        1.0f, 1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 0.0f, 0.0f,
        1.0f, 1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 0.0f, 0.0f,
        1.0f, 1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 0.0f, 0.0f
    };
    std::array<float, 32> tex_uv_scales = kDefaultTexUvScales;
    std::array<GLint, 8> tex_modes{};
    std::array<GLuint, 8> stage_gl_tex{};
    std::array<uint32_t, 8> resolved_tex_w = {1u, 1u, 1u, 1u, 1u, 1u, 1u, 1u};
    std::array<uint32_t, 8> resolved_tex_h = {1u, 1u, 1u, 1u, 1u, 1u, 1u, 1u};
    for (uint32_t m = used_texmap_mask; m != 0u; ) {
        const uint32_t tm = static_cast<uint32_t>(std::countr_zero(m));
        m &= (m - 1u);
        uint32_t resolved_w = 1u, resolved_h = 1u;
        int resolved_mode = 0;
        GLuint gl_tex = ResolveStageTexture(static_cast<uint8_t>(tm), state, &resolved_w, &resolved_h, &resolved_mode);
        stage_gl_tex[tm] = gl_tex ? gl_tex : m_dummy_white_tex;
        tex_uv_scales[tm * 4u + 0u] = 1.0f / static_cast<float>(std::max<uint32_t>(1u, resolved_w));
        tex_uv_scales[tm * 4u + 1u] = 1.0f / static_cast<float>(std::max<uint32_t>(1u, resolved_h));
        tex_modes[tm] = resolved_mode;
        resolved_tex_w[tm] = resolved_w;
        resolved_tex_h[tm] = resolved_h;
    }

    std::array<float, 32> su_coord_scales{};
    for (uint32_t tc = 0; tc < 8u; ++tc) {
        const uint32_t tm = tc_to_tm[tc];
        const uint32_t raw_s = bp_configured ? (state.bp[0x30u + tc * 2u] & 0xFFFFu) : 0u;
        const uint32_t raw_t = bp_configured ? (state.bp[0x31u + tc * 2u] & 0xFFFFu) : 0u;
        su_coord_scales[tc * 4u + 0u] = (raw_s != 0u)
            ? static_cast<float>(raw_s + 1u)
            : static_cast<float>(std::max<uint32_t>(1u, resolved_tex_w[tm]));
        su_coord_scales[tc * 4u + 1u] = (raw_t != 0u)
            ? static_cast<float>(raw_t + 1u)
            : static_cast<float>(std::max<uint32_t>(1u, resolved_tex_h[tm]));
    }

    // 4. Get TEV program and TEV/Konst color caches
    TevProgramEntry* tev_prog = EnsureTevProgram(state, num_tev_stages, bp_configured);
    if (state.bp_tev_col_generation == 0u || state.bp_tev_col_generation != m_cached_tev_col_gen) {
        constexpr float inv255 = 1.0f / 255.0f;
        if (state.tev_colors.size() >= 16u) {
            for (size_t i = 0; i < 16u; ++i) {
                m_cached_u_tev_colors[i] = static_cast<float>(state.tev_colors[i]) * inv255;
            }
        } else {
            m_cached_u_tev_colors.fill(1.0f);
        }
        if (state.tev_konst.size() >= 16u) {
            for (size_t i = 0; i < 16u; ++i) {
                m_cached_u_konst[i] = static_cast<float>(state.tev_konst[i]) * inv255;
            }
        } else {
            m_cached_u_konst.fill(1.0f);
        }
        m_cached_tev_col_gen = (state.bp_tev_col_generation != 0u) ? state.bp_tev_col_generation : 1u;
    }

    const bool use_indexed = (m_ebo != 0 && m_glDrawElementsBaseVertex != nullptr);
    const size_t est_verts = use_indexed ? decoded.vertices.size() : decoded.indices.size();
    if (est_verts == 0u) {
        return;
    }
    const size_t idx_count = decoded.indices.size();

    const bool can_batch = (!alpha_always_fail && use_indexed && gl_mode == GL_TRIANGLES &&
                            m_vbo_mapped != nullptr && m_ebo_mapped != nullptr &&
                            est_verts <= m_vbo_max_verts && idx_count <= m_ebo_max_idxs &&
                            tev_prog != nullptr && tev_prog->program != 0 && m_vbo != 0 &&
                            !m_audit_dolphin_shaders && m_draw_count > 5 && m_current_frame != 2200u);

    // 5. Evaluate whether the open batch can continue or must be flushed
    if (m_batch_active) {
        bool matches = can_batch &&
            (m_batch_tev_prog == tev_prog) &&
            (m_batch_vp_x == new_vp_x && m_batch_vp_y == new_vp_y && m_batch_vp_w == new_vp_w && m_batch_vp_h == new_vp_h) &&
            (m_batch_depth_n == new_depth_n && m_batch_depth_f == new_depth_f) &&
            (m_batch_sc_enabled == new_sc_enabled) &&
            (!new_sc_enabled || (m_batch_sc_x == new_sc_x && m_batch_sc_y == new_sc_y && m_batch_sc_w == new_sc_w && m_batch_sc_h == new_sc_h)) &&
            (m_batch_cull == eff_cull) &&
            (m_batch_zmode == zmode_key) &&
            (m_batch_blend_key == blend_key) &&
            (m_batch_tex_mask == used_texmap_mask) &&
            (m_batch_tcoord_mask == used_tcoord_mask) &&
            (tev_prog->loc_alpha_ref < 0 || m_batch_alpha_cmp16 == (alphacmp & 0xFFFFu)) &&
            (tev_prog->loc_const_alpha < 0 || m_batch_const_alpha9 == (const_alpha_reg & 0x1FFu)) &&
            (tev_prog->loc_tev_reg < 0 || m_batch_tev_col_gen == m_cached_tev_col_gen) &&
            (tev_prog->loc_konst < 0 || m_batch_tev_col_gen == m_cached_tev_col_gen);
        if (matches && used_texmap_mask != 0u) {
            for (uint32_t m = used_texmap_mask; m != 0u; ) {
                const uint32_t tm = static_cast<uint32_t>(std::countr_zero(m));
                m &= (m - 1u);
                if (m_batch_tex[tm] != stage_gl_tex[tm] ||
                    m_batch_tex_modes[tm] != tex_modes[tm] ||
                    m_batch_tex_inv_wh[tm * 4u + 0u] != tex_uv_scales[tm * 4u + 0u] ||
                    m_batch_tex_inv_wh[tm * 4u + 1u] != tex_uv_scales[tm * 4u + 1u]) {
                    matches = false;
                    break;
                }
            }
        }
        if (matches && tev_prog->loc_su_scale >= 0 && used_tcoord_mask != 0u) {
            for (uint32_t m = used_tcoord_mask; m != 0u; ) {
                const uint32_t tc = static_cast<uint32_t>(std::countr_zero(m));
                m &= (m - 1u);
                if (m_batch_su_scale[tc * 4u + 0u] != su_coord_scales[tc * 4u + 0u] ||
                    m_batch_su_scale[tc * 4u + 1u] != su_coord_scales[tc * 4u + 1u]) {
                    matches = false;
                    break;
                }
            }
        }
        if (matches) {
            if (m_vbo_cursor_vtx + est_verts > m_vbo_max_verts ||
                (m_vbo_cursor_vtx / VBO_Q_VERTS) != ((m_vbo_cursor_vtx + est_verts - 1u) / VBO_Q_VERTS) ||
                m_ebo_cursor_idx + idx_count > m_ebo_max_idxs ||
                (m_ebo_cursor_idx / EBO_Q_IDXS) != ((m_ebo_cursor_idx + idx_count - 1u) / EBO_Q_IDXS)) {
                matches = false;
            }
        }
        if (!matches) {
            FlushPendingBatch();
        }
    }

    // 6. Reserve space in VBO/EBO (with quarter-buffer synchronization if no batch is open)
    constexpr GLsizei stride = static_cast<GLsizei>(sizeof(GpuVertex));
    const bool use_direct_vbo = (m_vbo_mapped != nullptr && est_verts <= m_vbo_max_verts &&
                                 !m_audit_dolphin_shaders && m_draw_count != 5 && m_current_frame != 2200u);
    size_t vbo_start_vtx = 0;
    size_t ebo_start_idx = 0;

    if (tev_prog != nullptr && tev_prog->program != 0 && m_vbo != 0) {
        if (m_vbo_mapped && est_verts <= m_vbo_max_verts) {
            if (!m_batch_active) {
                const size_t q_cur = std::min<size_t>(m_vbo_cursor_vtx / VBO_Q_VERTS, 3u);
                if (m_vbo_cursor_vtx + est_verts > m_vbo_max_verts) {
                    if (m_vbo_fences[q_cur]) m_glDeleteSync(m_vbo_fences[q_cur]);
                    m_vbo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
                    m_vbo_cursor_vtx = 0;
                    if (m_vbo_fences[0]) {
                        m_glClientWaitSync(m_vbo_fences[0], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                        m_glDeleteSync(m_vbo_fences[0]);
                        m_vbo_fences[0] = nullptr;
                    }
                } else {
                    const size_t q_next = std::min<size_t>((m_vbo_cursor_vtx + est_verts - 1u) / VBO_Q_VERTS, 3u);
                    if (q_next != q_cur) {
                        if (m_vbo_fences[q_cur]) m_glDeleteSync(m_vbo_fences[q_cur]);
                        m_vbo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
                        if (m_vbo_fences[q_next]) {
                            m_glClientWaitSync(m_vbo_fences[q_next], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                            m_glDeleteSync(m_vbo_fences[q_next]);
                            m_vbo_fences[q_next] = nullptr;
                        }
                    }
                }
            }
            vbo_start_vtx = m_vbo_cursor_vtx;
        }
        if (use_indexed && m_ebo_mapped && idx_count <= m_ebo_max_idxs) {
            if (!m_batch_active) {
                const size_t q_cur = std::min<size_t>(m_ebo_cursor_idx / EBO_Q_IDXS, 3u);
                if (m_ebo_cursor_idx + idx_count > m_ebo_max_idxs) {
                    if (m_ebo_fences[q_cur]) m_glDeleteSync(m_ebo_fences[q_cur]);
                    m_ebo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
                    m_ebo_cursor_idx = 0;
                    if (m_ebo_fences[0]) {
                        m_glClientWaitSync(m_ebo_fences[0], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                        m_glDeleteSync(m_ebo_fences[0]);
                        m_ebo_fences[0] = nullptr;
                    }
                } else {
                    const size_t q_next = std::min<size_t>((m_ebo_cursor_idx + idx_count - 1u) / EBO_Q_IDXS, 3u);
                    if (q_next != q_cur) {
                        if (m_ebo_fences[q_cur]) m_glDeleteSync(m_ebo_fences[q_cur]);
                        m_ebo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
                        if (m_ebo_fences[q_next]) {
                            m_glClientWaitSync(m_ebo_fences[q_next], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                            m_glDeleteSync(m_ebo_fences[q_next]);
                            m_ebo_fences[q_next] = nullptr;
                        }
                    }
                }
            }
            ebo_start_idx = m_ebo_cursor_idx;
        }
    }

    // 7. Transform GX vertex batch (directly into mapped VBO when possible)
    size_t batch_verts = 0;
    GpuVertex* vbo_direct_ptr = use_direct_vbo
        ? (reinterpret_cast<GpuVertex*>(m_vbo_mapped) + vbo_start_vtx)
        : nullptr;
    {
        ScopedPerfQpc prof_batch(g_perf.batch_qpc);
        batch_verts = BuildGpuVertexBatch(decoded, state, vp_wd_half, vp_ht_half, vp_zrange, vp_farz,
                                          packet.vat, use_indexed, vbo_direct_ptr, used_tcoord_mask);
    }
    if (batch_verts == 0u) {
        return;
    }

    // Fast path when the draw merges into the active batch (GL already has all state bound)
    if (m_batch_active) {
        m_vbo_cursor_vtx += batch_verts;
        uint32_t* ebo_dst = reinterpret_cast<uint32_t*>(m_ebo_mapped) + ebo_start_idx;
        const uint32_t vtx_rel = static_cast<uint32_t>(vbo_start_vtx - m_batch_vbo_base);
        if (vtx_rel == 0u) {
            std::memcpy(ebo_dst, decoded.indices.data(), idx_count * sizeof(uint32_t));
        } else {
            const uint32_t* src_idx = decoded.indices.data();
            for (size_t i = 0; i < idx_count; ++i) {
                ebo_dst[i] = src_idx[i] + vtx_rel;
            }
        }
        m_ebo_cursor_idx += idx_count;
        m_batch_ebo_count += idx_count;
        m_has_drawn_in_efb = true;
        ++m_draws_since_clear;
        return;
    }

    // 8. Apply OpenGL state changes only if this is a new batch/draw
    if (m_efb_fbo != 0 && m_glBindFramebuffer && !m_bound_efb_fbo) {
        m_glBindFramebuffer(GL_FRAMEBUFFER, m_efb_fbo);
        m_bound_efb_fbo = true;
    }
    if (new_vp_x != m_last_draw_vp_x || new_vp_y != m_last_draw_vp_y ||
        new_vp_w != m_last_draw_vp_w || new_vp_h != m_last_draw_vp_h) {
        glViewport(new_vp_x, new_vp_y, new_vp_w, new_vp_h);
        m_last_draw_vp_x = new_vp_x;
        m_last_draw_vp_y = new_vp_y;
        m_last_draw_vp_w = new_vp_w;
        m_last_draw_vp_h = new_vp_h;
    }
    if (m_glClipControl != nullptr && (new_depth_n != m_last_depth_n || new_depth_f != m_last_depth_f)) {
        glDepthRange(new_depth_n, new_depth_f);
        m_last_depth_n = new_depth_n;
        m_last_depth_f = new_depth_f;
    }
    if (!m_sc_enabled && new_sc_enabled) {
        glEnable(GL_SCISSOR_TEST);
        m_sc_enabled = true;
    } else if (m_sc_enabled && !new_sc_enabled) {
        glDisable(GL_SCISSOR_TEST);
        m_sc_enabled = false;
    }
    if (new_sc_enabled && (new_sc_x != m_sc_x || new_sc_y != m_sc_y || new_sc_w != m_sc_w || new_sc_h != m_sc_h)) {
        glScissor(new_sc_x, new_sc_y, new_sc_w, new_sc_h);
        m_sc_x = new_sc_x; m_sc_y = new_sc_y; m_sc_w = new_sc_w; m_sc_h = new_sc_h;
    }
    if (eff_cull != m_cached_cull) {
        if (eff_cull != 0u) {
            if (m_cached_cull == 0u || m_cached_cull == 0xFFFFFFFFu) {
                glEnable(GL_CULL_FACE);
                glFrontFace(GL_CW);
            }
            glCullFace(eff_cull == 1u ? GL_BACK : GL_FRONT);
        } else {
            glDisable(GL_CULL_FACE);
        }
        m_cached_cull = eff_cull;
    }
    if (zmode_key != m_cached_zmode) {
        static const GLenum gl_compare_modes[] = {
            GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL,
            GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS
        };
        if (z_test) {
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(gl_compare_modes[z_func_idx]);
        } else {
            glDisable(GL_DEPTH_TEST);
        }
        glDepthMask(z_write ? GL_TRUE : GL_FALSE);
        m_cached_zmode = zmode_key;
    }
    if (blend_key != m_cached_blend_key) {
        static const GLenum gl_src_factors[] = {
            GL_ZERO, GL_ONE, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
            GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA
        };
        static const GLenum gl_dst_factors[] = {
            GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR,
            GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA
        };
        glDisable(GL_COLOR_LOGIC_OP);
        if (blend_enable) {
            glEnable(GL_BLEND);
            if (subtract_blend) {
                if (m_glBlendEquation) m_glBlendEquation(GL_FUNC_REVERSE_SUBTRACT);
                glBlendFunc(GL_ONE, GL_ONE);
            } else {
                if (m_glBlendEquation) m_glBlendEquation(GL_FUNC_ADD);
                GLenum sf = gl_src_factors[src_factor_idx];
                GLenum df = gl_dst_factors[dst_factor_idx];
                if (!target_has_alpha) {
                    if (sf == GL_DST_ALPHA) sf = GL_ONE;
                    else if (sf == GL_ONE_MINUS_DST_ALPHA) sf = GL_ZERO;
                    if (df == GL_DST_ALPHA) df = GL_ONE;
                    else if (df == GL_ONE_MINUS_DST_ALPHA) df = GL_ZERO;
                }
                if (dst_alpha_en && m_glBlendFuncSeparate) {
                    const bool rgb_uses_src_alpha =
                        (src_factor_idx == 4u || src_factor_idx == 5u ||
                         dst_factor_idx == 4u || dst_factor_idx == 5u);
                    m_glBlendFuncSeparate(
                        sf, df,
                        (rgb_uses_src_alpha && (const_alpha_reg & 0xFFu) == 0u) ? GL_ZERO : GL_ONE,
                        GL_ZERO);
                } else {
                    glBlendFunc(sf, df);
                }
            }
        } else {
            glDisable(GL_BLEND);
            if (m_glBlendEquation) m_glBlendEquation(GL_FUNC_ADD);
            if (logic_op_enable) {
                static const GLenum gl_logic_ops[16] = {
                    GL_CLEAR, GL_AND, GL_AND_REVERSE, GL_COPY,
                    GL_AND_INVERTED, GL_NOOP, GL_XOR, GL_OR,
                    GL_NOR, GL_EQUIV, GL_INVERT, GL_OR_REVERSE,
                    GL_COPY_INVERTED, GL_OR_INVERTED, GL_NAND, GL_SET
                };
                const uint32_t logic_mode = (blendmode >> 12) & 0xFu;
                if (logic_mode != 3u) {
                    glEnable(GL_COLOR_LOGIC_OP);
                    glLogicOp(gl_logic_ops[logic_mode]);
                }
            }
        }
        glColorMask(color_update ? GL_TRUE : GL_FALSE,
                    color_update ? GL_TRUE : GL_FALSE,
                    color_update ? GL_TRUE : GL_FALSE,
                    alpha_update ? GL_TRUE : GL_FALSE);
        m_cached_blend_key = blend_key;
    }
    if (alpha_always_fail) {
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
        m_cached_blend_key = 0xFFFFFFFFu;
    }

    for (uint32_t m = used_texmap_mask; m != 0u; ) {
        const uint32_t tm = static_cast<uint32_t>(std::countr_zero(m));
        m &= (m - 1u);
        const GLuint target_tex = stage_gl_tex[tm];
        if (m_bound_tex[tm] != target_tex) {
            if (m_glActiveTexture && m_active_tex_unit != tm) {
                m_glActiveTexture(GL_TEXTURE0 + tm);
                m_active_tex_unit = tm;
            }
            glBindTexture(GL_TEXTURE_2D_ARRAY, target_tex);
            m_bound_tex[tm] = target_tex;
        }
    }

    if (m_audit_dolphin_shaders) {
        const bool is_persp = (state.xf.size() >= 0x1027u && state.xf[0x1026u] == 0u);
        if (!is_persp) {
            ++m_ortho_draw_count;
            if (m_ortho_draw_count <= 5 || (m_ortho_draw_count % 1000 == 0)) {
                std::printf("[GX-ORTHO #%llu] Frame %u | Draw #%llu | vtxs=%zu idxs=%zu batch=%zu blend=0x%08X acmp=0x%08X\n",
                            static_cast<unsigned long long>(m_ortho_draw_count), m_current_frame,
                            static_cast<unsigned long long>(m_draw_count),
                            decoded.vertices.size(), idx_count, batch_verts, blendmode, alphacmp);
            }
        }
        if (m_current_frame == 2500u || m_current_frame == 2501u) {
            static uint32_t s_f2500_draws = 0, s_lit0 = 0, s_lit1 = 0, s_emboss = 0, s_dualtex = 0;
            static uint32_t s_persp = 0, s_ortho = 0, s_posmtx = 0, s_nrm = 0, s_amb_low = 0, s_spec = 0, s_printed = 0;
            static uint32_t s_cull[4] = {};
            if (m_current_frame == 2500u) {
                ++s_f2500_draws;
                if (is_persp) ++s_persp; else ++s_ortho;
                const uint32_t genmode = (0x00u < state.bp.size()) ? state.bp[0x00u] : 0u;
                s_cull[(genmode >> 14) & 3u]++;
                const uint32_t nchan = (0x1009u < state.xf.size()) ? (state.xf[0x1009u] & 3u) : 0u;
                const uint32_t c0 = (0x100Eu < state.xf.size()) ? state.xf[0x100Eu] : 0u;
                const uint32_t c1 = (0x100Fu < state.xf.size()) ? state.xf[0x100Fu] : 0u;
                if (nchan >= 1u && ((c0 >> 1) & 1u)) ++s_lit0;
                if (nchan >= 2u && ((c1 >> 1) & 1u)) ++s_lit1;
                if ((nchan >= 1u && (((c0 >> 9) & 3u) == 1u || ((c0 >> 9) & 3u) == 2u)) ||
                    (nchan >= 2u && (((c1 >> 9) & 3u) == 1u || ((c1 >> 9) & 3u) == 2u))) ++s_spec;
                if (nchan >= 1u && ((c0 >> 1) & 1u) && ((c0 >> 6) & 1u) == 0u && 0x100Au < state.xf.size()) {
                    uint32_t amb = state.xf[0x100Au];
                    if (((amb >> 24) & 0xFFu) < 31u || ((amb >> 16) & 0xFFu) < 31u || ((amb >> 8) & 0xFFu) < 31u) ++s_amb_low;
                }
                const uint32_t vcd_low = (state.cp.size() > 0x50u) ? state.cp[0x50u] : 0u;
                if ((vcd_low & 1u) != 0u) ++s_posmtx;
                if (((vcd_low >> 11) & 3u) != 0u) ++s_nrm;
                if (state.xf.size() > 0x1012u && (state.xf[0x1012u] & 1u)) ++s_dualtex;
                const uint32_t nt = std::min(8u, (0x103Fu < state.xf.size()) ? (state.xf[0x103Fu] & 0xFu) : 0u);
                bool has_emb = false;
                for (uint32_t tg = 0; tg < nt && (0x1040u + tg < state.xf.size()); ++tg) {
                    if (((state.xf[0x1040u + tg] >> 4) & 7u) == 1u) has_emb = true;
                }
                if (has_emb) ++s_emboss;
            } else if (!s_printed) {
                s_printed = 1u;
                std::printf("[DIAG-2500] draws=%u persp=%u ortho=%u lit0=%u lit1=%u amb<0.12=%u spec/attn=%u emboss=%u dualtex=%u posmtx=%u nrm=%u cull=[%u,%u,%u,%u]\n",
                            s_f2500_draws, s_persp, s_ortho, s_lit0, s_lit1, s_amb_low, s_spec, s_emboss, s_dualtex, s_posmtx, s_nrm,
                            s_cull[0], s_cull[1], s_cull[2], s_cull[3]);
            }
        }
    }

    // DolphinShaderCompiler diagnostic dump (--audit-dolphin-shaders)
    if (m_audit_dolphin_shaders && ((m_draw_count >= 80 && m_draw_count <= 140) || (m_draw_count >= 8840 && m_draw_count <= 8850))) {
        std::printf("[AUDIT-DRAW %llu] stages=%u tex_mask=0x%X\n",
                    static_cast<unsigned long long>(m_draw_count), num_tev_stages, used_texmap_mask);
        try {
            const auto dolphin_bundle = moderngekko::DolphinShaderCompiler::Compile(
                state, decoded.topology, packet.vat, moderngekko::DolphinShaderApi::OpenGl);
            std::printf("  [AUDIT] DolphinShaderCompiler VS=%zu PS=%zu\n",
                        dolphin_bundle.vertex.size(), dolphin_bundle.pixel.size());
        } catch (const std::exception& e) {
            std::printf("  [AUDIT] Error DolphinShaderCompiler::Compile: %s\n", e.what());
        } catch (...) {}
        std::fflush(stdout);
    }

    if (tev_prog != nullptr && tev_prog->program != 0 && m_glUseProgram && m_vbo != 0) {
        if (m_current_program != tev_prog->program) {
            m_glUseProgram(tev_prog->program);
            m_current_program = tev_prog->program;
        }

        const std::array<float, 16>& u_tev_colors = m_cached_u_tev_colors;

        if (tev_prog->loc_tev_reg >= 0 &&
            (!tev_prog->uniforms_valid || tev_prog->last_tev_colors != u_tev_colors)) {
            m_glUniform4fv(tev_prog->loc_tev_reg, 4, u_tev_colors.data());
            tev_prog->last_tev_colors = u_tev_colors;
        }
        if (tev_prog->loc_konst >= 0 &&
            (!tev_prog->uniforms_valid || tev_prog->last_konst != m_cached_u_konst)) {
            m_glUniform4fv(tev_prog->loc_konst, 4, m_cached_u_konst.data());
            tev_prog->last_konst = m_cached_u_konst;
        }
        if (tev_prog->loc_tex_inv_wh >= 0 &&
            (!tev_prog->uniforms_valid || tev_prog->last_tex_inv_wh != tex_uv_scales)) {
            m_glUniform4fv(tev_prog->loc_tex_inv_wh, 8, tex_uv_scales.data());
            tev_prog->last_tex_inv_wh = tex_uv_scales;
        }
        if (tev_prog->loc_su_scale >= 0 &&
            (!tev_prog->uniforms_valid || tev_prog->last_su_scale != su_coord_scales)) {
            m_glUniform4fv(tev_prog->loc_su_scale, 8, su_coord_scales.data());
            tev_prog->last_su_scale = su_coord_scales;
        }
        if (tev_prog->loc_tex_mode >= 0 &&
            (!tev_prog->uniforms_valid || tev_prog->last_tex_mode != tex_modes)) {
            m_glUniform1iv(tev_prog->loc_tex_mode, 8, tex_modes.data());
            tev_prog->last_tex_mode = tex_modes;
        }
        if (tev_prog->loc_alpha_ref >= 0) {
            const float r0 = static_cast<float>(alphacmp & 0xFFu);
            const float r1 = static_cast<float>((alphacmp >> 8) & 0xFFu);
            if (!tev_prog->uniforms_valid || tev_prog->last_alpha_r0 != r0 || tev_prog->last_alpha_r1 != r1) {
                m_glUniform2f(tev_prog->loc_alpha_ref, r0, r1);
                tev_prog->last_alpha_r0 = r0;
                tev_prog->last_alpha_r1 = r1;
            }
        }
        if (tev_prog->loc_const_alpha >= 0) {
            const bool rgb_uses_src_alpha = blend_enable &&
                (src_factor_idx == 4u || src_factor_idx == 5u ||
                 dst_factor_idx == 4u || dst_factor_idx == 5u);
            const float ca0 = (dst_alpha_en && !rgb_uses_src_alpha) ? 1.0f : 0.0f;
            const float ca1 = static_cast<float>(const_alpha_reg & 0xFFu) * (1.0f / 255.0f);
            if (!tev_prog->uniforms_valid || tev_prog->last_ca0 != ca0 || tev_prog->last_ca1 != ca1) {
                m_glUniform2f(tev_prog->loc_const_alpha, ca0, ca1);
                tev_prog->last_ca0 = ca0;
                tev_prog->last_ca1 = ca1;
            }
        }
        tev_prog->uniforms_valid = true;

        if (!m_vbo_attribs_bound) {
            if (m_glBindVertexArray && m_vao != 0) {
                m_glBindVertexArray(m_vao);
            }
            m_glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
            if (!m_vao_configured) {
                if (m_ebo != 0) {
                    m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
                }
                m_glEnableVertexAttribArray(0);
                m_glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<const void*>(offsetof(GpuVertex, pos)));
                m_glEnableVertexAttribArray(1);
                m_glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<const void*>(offsetof(GpuVertex, col0)));
                m_glEnableVertexAttribArray(2);
                m_glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<const void*>(offsetof(GpuVertex, col1)));
                for (GLuint tc = 0; tc < 8u; ++tc) {
                    m_glEnableVertexAttribArray(3u + tc);
                    m_glVertexAttribPointer(3u + tc, 3, GL_FLOAT, GL_FALSE, stride,
                                            reinterpret_cast<const void*>(offsetof(GpuVertex, uv) + tc * sizeof(float) * 3u));
                }
                m_vao_configured = true;
            }
            m_vbo_attribs_bound = true;
            m_dolphin_vao_bound = false;
        }

        const GLsizeiptr needed_bytes = static_cast<GLsizeiptr>(batch_verts * sizeof(GpuVertex));
        if (use_direct_vbo) {
            m_vbo_cursor_vtx += batch_verts;
        } else if (m_vbo_mapped && batch_verts <= m_vbo_max_verts) {
            std::memcpy(m_vbo_mapped + vbo_start_vtx * stride, m_gpu_batch.data(), static_cast<size_t>(needed_bytes));
            m_vbo_cursor_vtx += batch_verts;
        } else if (m_glBufferSubData && m_vbo_capacity > 0) {
            if (needed_bytes > m_vbo_capacity) {
                m_vbo_capacity = std::max<GLsizeiptr>(needed_bytes * 2, m_vbo_capacity);
                m_glBufferData(GL_ARRAY_BUFFER, m_vbo_capacity, nullptr, GL_STREAM_DRAW);
                m_vbo_cursor_vtx = 0;
            }
            const size_t max_vbo_verts = static_cast<size_t>(m_vbo_capacity / stride);
            if (m_vbo_cursor_vtx + batch_verts > max_vbo_verts) {
                m_glBufferData(GL_ARRAY_BUFFER, m_vbo_capacity, nullptr, GL_STREAM_DRAW);
                m_vbo_cursor_vtx = 0;
            }
            vbo_start_vtx = m_vbo_cursor_vtx;
            m_glBufferSubData(GL_ARRAY_BUFFER,
                              static_cast<GLintptr>(vbo_start_vtx * stride),
                              needed_bytes,
                              m_gpu_batch.data());
            m_vbo_cursor_vtx += batch_verts;
        } else {
            m_glBufferData(GL_ARRAY_BUFFER, needed_bytes, m_gpu_batch.data(), GL_STREAM_DRAW);
        }

        if (use_indexed) {
            const GLsizeiptr needed_idx_bytes = static_cast<GLsizeiptr>(idx_count * sizeof(uint32_t));
            if (m_ebo_mapped && idx_count <= m_ebo_max_idxs) {
                std::memcpy(m_ebo_mapped + ebo_start_idx * sizeof(uint32_t), decoded.indices.data(), static_cast<size_t>(needed_idx_bytes));
                m_ebo_cursor_idx += idx_count;
            } else if (m_glBufferSubData && m_ebo_capacity > 0) {
                if (needed_idx_bytes > m_ebo_capacity) {
                    m_ebo_capacity = std::max<GLsizeiptr>(needed_idx_bytes * 2, m_ebo_capacity);
                    m_glBufferData(GL_ELEMENT_ARRAY_BUFFER, m_ebo_capacity, nullptr, GL_STREAM_DRAW);
                    m_ebo_cursor_idx = 0;
                }
                const size_t max_ebo_indices = static_cast<size_t>(m_ebo_capacity / sizeof(uint32_t));
                if (m_ebo_cursor_idx + idx_count > max_ebo_indices) {
                    m_glBufferData(GL_ELEMENT_ARRAY_BUFFER, m_ebo_capacity, nullptr, GL_STREAM_DRAW);
                    m_ebo_cursor_idx = 0;
                }
                ebo_start_idx = m_ebo_cursor_idx;
                m_glBufferSubData(GL_ELEMENT_ARRAY_BUFFER,
                                  static_cast<GLintptr>(ebo_start_idx * sizeof(uint32_t)),
                                  needed_idx_bytes,
                                  decoded.indices.data());
                m_ebo_cursor_idx += idx_count;
            }
        }

        if (can_batch) {
            m_batch_active = true;
            m_batch_vbo_base = vbo_start_vtx;
            m_batch_ebo_start = ebo_start_idx;
            m_batch_ebo_count = idx_count;
            m_batch_tev_prog = tev_prog;
            m_batch_vp_x = new_vp_x; m_batch_vp_y = new_vp_y; m_batch_vp_w = new_vp_w; m_batch_vp_h = new_vp_h;
            m_batch_depth_n = new_depth_n; m_batch_depth_f = new_depth_f;
            m_batch_sc_enabled = new_sc_enabled;
            m_batch_sc_x = new_sc_x; m_batch_sc_y = new_sc_y; m_batch_sc_w = new_sc_w; m_batch_sc_h = new_sc_h;
            m_batch_cull = eff_cull;
            m_batch_zmode = zmode_key;
            m_batch_blend_key = blend_key;
            m_batch_tex_mask = used_texmap_mask;
            m_batch_tcoord_mask = used_tcoord_mask;
            m_batch_tex = stage_gl_tex;
            m_batch_tex_modes = tex_modes;
            m_batch_tex_inv_wh = tex_uv_scales;
            m_batch_su_scale = su_coord_scales;
            m_batch_tev_col_gen = m_cached_tev_col_gen;
            m_batch_alpha_cmp16 = alphacmp & 0xFFFFu;
            m_batch_const_alpha9 = const_alpha_reg & 0x1FFu;
        } else {
            if (g_perf.enabled) {
                ++g_perf.gl_draw_calls;
            }
            if (use_indexed) {
                m_glDrawElementsBaseVertex(gl_mode,
                                           static_cast<GLsizei>(idx_count),
                                           GL_UNSIGNED_INT,
                                           reinterpret_cast<const void*>(ebo_start_idx * sizeof(uint32_t)),
                                           static_cast<GLint>(vbo_start_vtx));
            } else {
                glDrawArrays(gl_mode, static_cast<GLint>(vbo_start_vtx), static_cast<GLsizei>(batch_verts));
            }

            if (m_draw_count == 5) {
                GLenum err1 = glGetError();
                std::printf("[AUDIT-DRAW5-POST] glDrawArrays done! err=0x%X\n", err1);
                SaveRawEfbToBmp("scratch/raw_efb_draw5.bmp");
            }
            if (m_audit_dolphin_shaders && m_current_frame == 2200) {
                static uint32_t s_f2200 = 0;
                if (++s_f2200 == 15) SaveRawEfbToBmp("scratch/raw_efb_frame2200_draw15.bmp");
            }
        }
    }

    m_has_drawn_in_efb = true;
    ++m_draws_since_clear;
#endif
}

#if defined(_WIN32)
size_t Ggsea4RenderDevice::BuildGpuVertexBatch(const moderngekko::GxDecodedDraw& decoded,
                           const moderngekko::GxStateView& state,
                           float vp_wd_half, float vp_ht_half, float vp_zrange, float vp_farz,
                           uint8_t vat, bool use_indexed,
                           GpuVertex* dst_verts, uint32_t used_tcoord_mask) {
    (void)vp_zrange;
    (void)vp_farz;
    const size_t vert_count = use_indexed ? decoded.vertices.size() : decoded.indices.size();
    if (vert_count == 0u) {
        if (!dst_verts) m_gpu_batch.clear();
        return 0u;
    }
    GpuVertex* out_ptr = dst_verts;
    if (!out_ptr) {
        m_gpu_batch.resize(vert_count);
        out_ptr = m_gpu_batch.data();
    }

    const float* xf_floats = reinterpret_cast<const float*>(state.xf.data());
    float raw_proj[6] = {1.0f, 0.0f, 1.0f, 0.0f, -1.0f, 0.0f};
    uint32_t proj_type = 1u;
    bool has_valid_proj = false;
    if (state.xf.size() >= 0x1027u) {
        for (int i = 0; i < 6; ++i) {
            raw_proj[i] = xf_floats[0x1020u + i];
        }
        proj_type = state.xf[0x1026u];
        // For perspective (proj_type == 0), at least the FOV scale terms (P0 and P2) must be non-zero
        if (proj_type == 0u) {
            if (std::fabs(raw_proj[0]) > 1e-4f && std::fabs(raw_proj[2]) > 1e-4f) {
                has_valid_proj = true;
            } else {
                // Standard 4:3 perspective fallback (vertical FOV ~45°: p2 ~ 2.414f, p0 ~ 1.81f, near=10, far=10000)
                raw_proj[0] = 1.8106f; raw_proj[1] = 0.0f;
                raw_proj[2] = 2.4142f; raw_proj[3] = 0.0f;
                raw_proj[4] = -1.0002f; raw_proj[5] = -20.002f;
                has_valid_proj = true;
            }
        } else {
            for (int i = 0; i < 6; ++i) {
                if (raw_proj[i] != 0.0f) {
                    has_valid_proj = true;
                    break;
                }
            }
        }
    }

    const uint32_t vcd_low = (state.cp.size() > 0x50u) ? state.cp[0x50u] : 0u;
    const uint32_t vcd_high = (state.cp.size() > 0x60u) ? state.cp[0x60u] : 0u;
    const uint32_t vat_idx = static_cast<uint32_t>(vat & 7u);
    const bool has_vat = state.cp.size() > (0x90u + vat_idx);
    const uint32_t vat_g0 = has_vat ? state.cp[0x70u + vat_idx] : 0u;
    const uint32_t vat_g1 = has_vat ? state.cp[0x80u + vat_idx] : 0u;
    const uint32_t vat_g2 = has_vat ? state.cp[0x90u + vat_idx] : 0u;

    const bool has_pos_mtx = (vcd_low & 1u) != 0u;
    const uint32_t pos_desc = (vcd_low >> 9) & 3u;
    const bool has_pos = (pos_desc != 0u);
    const bool pos_has_z = has_pos && (!has_vat || (vat_g0 & 1u) != 0u);
    const bool has_normal = ((vcd_low >> 11) & 3u) != 0u;
    const bool has_ntb = has_normal && has_vat && (((vat_g0 >> 9) & 1u) != 0u);
    const bool has_col0 = ((vcd_low >> 13) & 3u) != 0u;
    const bool has_col1 = ((vcd_low >> 15) & 3u) != 0u;
    const bool use_col1 = has_col0 && has_col1;

    uint32_t tex_desc[8] = {};
    bool tex_has_t[8] = {};
    const uint32_t tex_cnt_bits[8] = {
        (vat_g0 >> 21) & 1u, (vat_g1 >> 0) & 1u, (vat_g1 >> 9) & 1u, (vat_g1 >> 18) & 1u,
        (vat_g1 >> 27) & 1u, (vat_g2 >> 5) & 1u, (vat_g2 >> 14) & 1u, (vat_g2 >> 23) & 1u
    };
    for (uint32_t t = 0u; t < 8u; ++t) {
        tex_desc[t] = (vcd_high >> (t * 2u)) & 3u;
        tex_has_t[t] = (tex_desc[t] != 0u) && (!has_vat || tex_cnt_bits[t] != 0u);
    }

    const uint32_t mtx_idx_a = (state.xf.size() > 0x1018u)
                                   ? state.xf[0x1018u]
                                   : ((state.cp.size() > 0x30u) ? state.cp[0x30u] : 0u);
    const uint32_t mtx_idx_b = (state.xf.size() > 0x1019u)
                                   ? state.xf[0x1019u]
                                   : ((state.cp.size() > 0x40u) ? state.cp[0x40u] : 0u);

    const uint32_t bp_genmode = (state.bp.size() > 0x00u) ? state.bp[0x00u] : 0u;
    const uint32_t bp_num_texgens = (bp_genmode & 0xFu);
    const uint32_t bp_num_colchans = (bp_genmode >> 4) & 7u;
    const uint32_t xf_num_colchans = (state.xf.size() > 0x1009u) ? (state.xf[0x1009u] & 3u) : 1u;
    const uint32_t xf_num_texgens = (state.xf.size() > 0x103Fu) ? std::min<uint32_t>(state.xf[0x103Fu] & 0xFu, 8u) : 0u;
    const uint32_t num_color_chans = std::max(xf_num_colchans, bp_num_colchans);
    const uint32_t num_tex_gens = std::min(8u, std::max(xf_num_texgens, bp_num_texgens));
    const bool dual_tex_en = (state.xf.size() > 0x1012u) && ((state.xf[0x1012u] & 1u) != 0u);

    auto unpack_rgba = [](uint32_t c, float out[4]) {
        constexpr float inv255 = 1.0f / 255.0f;
        out[0] = static_cast<float>((c >> 24) & 0xFFu) * inv255;
        out[1] = static_cast<float>((c >> 16) & 0xFFu) * inv255;
        out[2] = static_cast<float>((c >> 8) & 0xFFu) * inv255;
        out[3] = static_cast<float>(c & 0xFFu) * inv255;
    };

    // Precompute lighting channel descriptors outside the vertex loop
    struct ChanPrecomp {
        bool passthrough = true;
        bool need_vtx = false;
        bool c_matsrc = false;
        bool c_lit = false;
        bool c_ambsrc = false;
        bool a_matsrc = false;
        bool a_lit = false;
        bool a_ambsrc = false;
        uint32_t c_diff_fn = 0;
        uint32_t c_attn_fn = 0;
        uint32_t a_diff_fn = 0;
        uint32_t a_attn_fn = 0;
        uint32_t c_mask = 0;
        uint32_t a_mask = 0;
        float reg_amb[4]{};
        float reg_mat[4]{};
        float const_out[4]{1.0f, 1.0f, 1.0f, 1.0f};
    };
    ChanPrecomp ch_pre[2]{};
    const bool xf_chan_valid = has_valid_proj && state.xf.size() >= 0x1012u;
    for (uint32_t ch = 0; ch < 2u; ++ch) {
        auto& cp = ch_pre[ch];
        if (!xf_chan_valid) {
            cp.passthrough = true;
            cp.need_vtx = true;
            continue;
        }
        cp.passthrough = false;
        unpack_rgba(state.xf[0x100Au + ch], cp.reg_amb);
        unpack_rgba(state.xf[0x100Cu + ch], cp.reg_mat);
        const uint32_t chan_c = state.xf[0x100Eu + ch];
        const uint32_t chan_a = state.xf[0x1010u + ch];
        cp.c_matsrc = (chan_c & 1u) != 0u;
        cp.c_lit = ((chan_c >> 1) & 1u) != 0u;
        cp.c_ambsrc = ((chan_c >> 6) & 1u) != 0u;
        cp.c_diff_fn = (chan_c >> 7) & 3u;
        cp.c_attn_fn = (chan_c >> 9) & 3u;
        cp.c_mask = cp.c_lit ? (((chan_c >> 2) & 0xFu) | (((chan_c >> 11) & 0xFu) << 4)) : 0u;
        cp.a_matsrc = (chan_a & 1u) != 0u;
        cp.a_lit = ((chan_a >> 1) & 1u) != 0u;
        cp.a_ambsrc = ((chan_a >> 6) & 1u) != 0u;
        cp.a_diff_fn = (chan_a >> 7) & 3u;
        cp.a_attn_fn = (chan_a >> 9) & 3u;
        cp.a_mask = cp.a_lit ? (((chan_a >> 2) & 0xFu) | (((chan_a >> 11) & 0xFu) << 4)) : 0u;
        cp.need_vtx = cp.c_matsrc || cp.a_matsrc || cp.c_lit || cp.a_lit;
        if (!cp.need_vtx) {
            cp.const_out[0] = cp.reg_mat[0];
            cp.const_out[1] = cp.reg_mat[1];
            cp.const_out[2] = cp.reg_mat[2];
            cp.const_out[3] = cp.reg_mat[3];
        }
    }

    auto eval_channel_fast = [&](uint32_t ch, const float base_col[4],
                                 const float eye_pos[3], const float eye_nrm[3], float out_col[4]) {
        const auto& cp = ch_pre[ch];
        if (cp.passthrough) {
            out_col[0] = base_col[0]; out_col[1] = base_col[1]; out_col[2] = base_col[2]; out_col[3] = base_col[3];
            return;
        }
        if (!cp.need_vtx) {
            out_col[0] = cp.const_out[0]; out_col[1] = cp.const_out[1]; out_col[2] = cp.const_out[2]; out_col[3] = cp.const_out[3];
            return;
        }
        float mat[4], lacc[4];
        for (int k = 0; k < 3; ++k) {
            mat[k] = cp.c_matsrc ? base_col[k] : cp.reg_mat[k];
            float amb_val = cp.c_ambsrc ? base_col[k] : cp.reg_amb[k];
            lacc[k] = cp.c_lit ? amb_val : 1.0f;
        }
        mat[3] = cp.a_matsrc ? base_col[3] : cp.reg_mat[3];
        lacc[3] = cp.a_lit ? (cp.a_ambsrc ? base_col[3] : cp.reg_amb[3]) : 1.0f;

        auto accum_lights = [&](uint32_t mask, uint32_t diff_fn, uint32_t attn_fn, bool is_alpha) {
            for (uint32_t m = mask; m != 0u; ) {
                const uint32_t li = static_cast<uint32_t>(std::countr_zero(m));
                m &= (m - 1u);
                const size_t lbase = 0x0600u + li * 16u;
                if (lbase + 16u > state.xf.size()) break;
                float lcol[4];
                unpack_rgba(state.xf[lbase + 3u], lcol);
                const float* cosatt = &xf_floats[lbase + 4u];
                const float* distatt = &xf_floats[lbase + 7u];
                const float* lpos = &xf_floats[lbase + 10u];
                const float* ldir_reg = &xf_floats[lbase + 13u];

                float lx, ly, lz, dist = 1.0f, dist2 = 1.0f;
                const float ldir_len2 = ldir_reg[0] * ldir_reg[0] + ldir_reg[1] * ldir_reg[1] + ldir_reg[2] * ldir_reg[2];
                const float lpos_len2 = lpos[0] * lpos[0] + lpos[1] * lpos[1] + lpos[2] * lpos[2];

                if ((attn_fn == 0u || attn_fn == 2u) && lpos_len2 < 1e-4f && ldir_len2 > 1e-4f) {
                    const float ilen = 1.0f / std::sqrt(ldir_len2);
                    lx = -ldir_reg[0] * ilen;
                    ly = -ldir_reg[1] * ilen;
                    lz = -ldir_reg[2] * ilen;
                } else {
                    lx = lpos[0] - eye_pos[0];
                    ly = lpos[1] - eye_pos[1];
                    lz = lpos[2] - eye_pos[2];
                    dist2 = lx * lx + ly * ly + lz * lz;
                    dist = std::sqrt(dist2);
                    if (dist > 1e-6f) {
                        lx /= dist; ly /= dist; lz /= dist;
                    } else {
                        lx = eye_nrm[0]; ly = eye_nrm[1]; lz = eye_nrm[2];
                    }
                }

                float attn = 1.0f;
                if (attn_fn == 1u) {
                    const float ndotl = eye_nrm[0] * lx + eye_nrm[1] * ly + eye_nrm[2] * lz;
                    const float s = (ndotl >= 0.0f)
                                        ? std::max(0.0f, eye_nrm[0] * ldir_reg[0] + eye_nrm[1] * ldir_reg[1] + eye_nrm[2] * ldir_reg[2])
                                        : 0.0f;
                    float d0 = distatt[0], d1 = distatt[1], d2 = distatt[2];
                    if (diff_fn != 0u) {
                        const float dl = std::sqrt(d0 * d0 + d1 * d1 + d2 * d2);
                        if (dl > 1e-6f) { d0 /= dl; d1 /= dl; d2 /= dl; }
                    }
                    const float den = d0 + d1 * s + d2 * s * s;
                    attn = (std::fabs(den) > 1e-6f) ? (std::max(0.0f, cosatt[0] + cosatt[1] * s + cosatt[2] * s * s) / den) : 0.0f;
                } else if (attn_fn == 3u) {
                    const float c = std::max(0.0f, lx * ldir_reg[0] + ly * ldir_reg[1] + lz * ldir_reg[2]);
                    const float den = distatt[0] + distatt[1] * dist + distatt[2] * dist2;
                    attn = (std::fabs(den) > 1e-6f) ? (std::max(0.0f, cosatt[0] + cosatt[1] * c + cosatt[2] * c * c) / den) : 0.0f;
                }

                float diff = 1.0f;
                if (diff_fn == 1u) {
                    diff = lx * eye_nrm[0] + ly * eye_nrm[1] + lz * eye_nrm[2];
                } else if (diff_fn == 2u) {
                    diff = std::max(0.0f, lx * eye_nrm[0] + ly * eye_nrm[1] + lz * eye_nrm[2]);
                }
                const float w = attn * diff;
                if (!is_alpha) {
                    for (int k = 0; k < 3; ++k) lacc[k] += w * lcol[k];
                } else {
                    lacc[3] += w * lcol[3];
                }
            }
        };

        if (cp.c_mask != 0u) accum_lights(cp.c_mask, cp.c_diff_fn, cp.c_attn_fn, false);
        if (cp.a_mask != 0u) accum_lights(cp.a_mask, cp.a_diff_fn, cp.a_attn_fn, true);

        for (int k = 0; k < 4; ++k) {
            out_col[k] = mat[k] * std::clamp(lacc[k], 0.0f, 1.0f);
        }
    };

    // Precompute TexGen configs 0..num_tex_gens-1 outside the loop
    struct TexGenPrecomp {
        uint32_t tg_type = 0;
        uint32_t src_row = 0;
        uint32_t in_form = 0;
        uint32_t proj_stq = 0;
        uint32_t emboss_src_tg = 0;
        bool has_vtx_tmtx = false;
        uint32_t fixed_tm_row = 60;
        const float* tm0 = nullptr;
        const float* tm1 = nullptr;
        const float* tm2 = nullptr;
        bool fixed_tm_valid = false;
        bool has_post = false;
        bool post_norm = false;
        const float* pm0 = nullptr;
        const float* pm1 = nullptr;
        const float* pm2 = nullptr;
    };
    TexGenPrecomp tg_pre[8]{};
    bool need_lit0 = !has_valid_proj || num_color_chans >= 1u;
    bool need_lit1 = has_valid_proj && num_color_chans >= 2u;
    if (has_valid_proj) {
        for (uint32_t tg = 0; tg < num_tex_gens; ++tg) {
            auto& tp = tg_pre[tg];
            const uint32_t info = (0x1040u + tg < state.xf.size()) ? state.xf[0x1040u + tg] : 0u;
            tp.proj_stq = (info >> 1) & 1u;
            tp.in_form = (info >> 2) & 1u;
            tp.tg_type = (info >> 4) & 7u;
            tp.src_row = (info >> 7) & 0x1Fu;
            tp.emboss_src_tg = (info >> 12) & 7u;
            if (tp.tg_type == 2u) need_lit0 = true;
            else if (tp.tg_type == 3u) need_lit1 = true;

            tp.has_vtx_tmtx = (vcd_low & (2u << tg)) != 0u;
            if (!tp.has_vtx_tmtx) {
                tp.fixed_tm_row = (tg < 4u)
                    ? ((mtx_idx_a >> (6u * (tg + 1u))) & 0x3Fu)
                    : ((mtx_idx_b >> (6u * (tg - 4u))) & 0x3Fu);
                if (tp.fixed_tm_row < 60u && (tp.fixed_tm_row + 2u) * 4u + 3u < state.xf.size()) {
                    tp.tm0 = &xf_floats[(tp.fixed_tm_row + 0u) * 4u];
                    tp.tm1 = &xf_floats[(tp.fixed_tm_row + 1u) * 4u];
                    tp.tm2 = &xf_floats[(tp.fixed_tm_row + 2u) * 4u];
                    tp.fixed_tm_valid = (tp.tm0[0] != 0.0f || tp.tm0[1] != 0.0f || tp.tm0[2] != 0.0f || tp.tm0[3] != 0.0f ||
                                         tp.tm1[0] != 0.0f || tp.tm1[1] != 0.0f || tp.tm1[2] != 0.0f || tp.tm1[3] != 0.0f);
                }
            }
            if (dual_tex_en && (0x1050u + tg < state.xf.size())) {
                const uint32_t post_info = state.xf[0x1050u + tg];
                const uint32_t post_row = post_info & 0x3Fu;
                if (post_row < 60u && 0x0500u + (post_row + 2u) * 4u + 3u < state.xf.size()) {
                    const float* p0 = &xf_floats[0x0500u + (post_row + 0u) * 4u];
                    const float* p1 = &xf_floats[0x0500u + (post_row + 1u) * 4u];
                    const float* p2 = &xf_floats[0x0500u + (post_row + 2u) * 4u];
                    if (p0[0] != 0.0f || p0[1] != 0.0f || p0[2] != 0.0f || p0[3] != 0.0f ||
                        p1[0] != 0.0f || p1[1] != 0.0f || p1[2] != 0.0f || p1[3] != 0.0f) {
                        tp.has_post = true;
                        tp.post_norm = ((post_info >> 8) & 1u) != 0u;
                        tp.pm0 = p0;
                        tp.pm1 = p1;
                        tp.pm2 = p2;
                    }
                }
            }
        }
    }

    const uint32_t fixed_pos_row = mtx_idx_a & 0x3Fu;
    const float* fixed_pm0 = nullptr;
    const float* fixed_pm1 = nullptr;
    const float* fixed_pm2 = nullptr;
    bool fixed_pos_mtx_valid = false;
    const float* fixed_nm0 = nullptr;
    const float* fixed_nm1 = nullptr;
    const float* fixed_nm2 = nullptr;
    bool fixed_nrm_mtx_valid = false;
    if (!has_pos_mtx && has_valid_proj) {
        if ((fixed_pos_row + 2u) * 4u + 3u < state.xf.size()) {
            fixed_pm0 = &xf_floats[(fixed_pos_row + 0u) * 4u];
            fixed_pm1 = &xf_floats[(fixed_pos_row + 1u) * 4u];
            fixed_pm2 = &xf_floats[(fixed_pos_row + 2u) * 4u];
            fixed_pos_mtx_valid = (fixed_pm0[0] != 0.0f || fixed_pm0[1] != 0.0f || fixed_pm0[2] != 0.0f || fixed_pm0[3] != 0.0f ||
                                   fixed_pm1[0] != 0.0f || fixed_pm1[1] != 0.0f || fixed_pm1[2] != 0.0f || fixed_pm1[3] != 0.0f ||
                                   fixed_pm2[0] != 0.0f || fixed_pm2[1] != 0.0f || fixed_pm2[2] != 0.0f || fixed_pm2[3] != 0.0f);
        }
        if (has_normal) {
            const uint32_t nrm_row = fixed_pos_row & 31u;
            if (0x0400u + (nrm_row + 2u) * 3u + 2u < state.xf.size()) {
                fixed_nm0 = &xf_floats[0x0400u + (nrm_row + 0u) * 3u];
                fixed_nm1 = &xf_floats[0x0400u + (nrm_row + 1u) * 3u];
                fixed_nm2 = &xf_floats[0x0400u + (nrm_row + 2u) * 3u];
                fixed_nrm_mtx_valid = (fixed_nm0[0] != 0.0f || fixed_nm0[1] != 0.0f || fixed_nm0[2] != 0.0f ||
                                       fixed_nm1[0] != 0.0f || fixed_nm1[1] != 0.0f || fixed_nm1[2] != 0.0f ||
                                       fixed_nm2[0] != 0.0f || fixed_nm2[1] != 0.0f || fixed_nm2[2] != 0.0f);
            }
        }
    }

    const float x_sign = (vp_wd_half < 0.0f) ? -1.0f : 1.0f;
    const float y_sign = (vp_ht_half > 0.0f) ? -1.0f : 1.0f;
    const bool use_clip_ctrl = (m_glClipControl != nullptr);

    // Precompute combined MVP matrix (Clip = Proj * PosMtx) when vertices are rigid and do not need eye_pos
    const bool use_fast_mvp = (!has_pos_mtx && has_valid_proj &&
                               !ch_pre[0].c_lit && !ch_pre[0].a_lit &&
                               (!need_lit1 || (!ch_pre[1].c_lit && !ch_pre[1].a_lit)));
    float mvp[4][4]{};
    if (use_fast_mvp) {
        const float ident0[4] = {1.0f, 0.0f, 0.0f, 0.0f};
        const float ident1[4] = {0.0f, 1.0f, 0.0f, 0.0f};
        const float ident2[4] = {0.0f, 0.0f, 1.0f, 0.0f};
        const float* rm0 = fixed_pos_mtx_valid ? fixed_pm0 : ident0;
        const float* rm1 = fixed_pos_mtx_valid ? fixed_pm1 : ident1;
        const float* rm2 = fixed_pos_mtx_valid ? fixed_pm2 : ident2;
        if (proj_type == 0u) {
            for (int c = 0; c < 4; ++c) {
                mvp[0][c] = (rm0[c] * raw_proj[0] + rm2[c] * raw_proj[1]) * x_sign;
                mvp[1][c] = (rm1[c] * raw_proj[2] + rm2[c] * raw_proj[3]) * y_sign;
                const float cz = rm2[c] * raw_proj[4] + (c == 3 ? raw_proj[5] : 0.0f);
                const float cw = -rm2[c];
                mvp[2][c] = use_clip_ctrl ? (-cz) : (-2.0f * cz - cw);
                mvp[3][c] = cw;
            }
        } else {
            for (int c = 0; c < 4; ++c) {
                mvp[0][c] = (rm0[c] * raw_proj[0] + (c == 3 ? raw_proj[1] : 0.0f)) * x_sign;
                mvp[1][c] = (rm1[c] * raw_proj[2] + (c == 3 ? raw_proj[3] : 0.0f)) * y_sign;
                const float cz = rm2[c] * raw_proj[4] + (c == 3 ? raw_proj[5] : 0.0f);
                mvp[2][c] = use_clip_ctrl ? (-cz) : (-2.0f * cz - (c == 3 ? 1.0f : 0.0f));
                mvp[3][c] = (c == 3) ? 1.0f : 0.0f;
            }
        }
    }

    size_t out_count = 0;
    for (size_t vi = 0; vi < vert_count; ++vi) {
        uint32_t src_idx = static_cast<uint32_t>(vi);
        if (!use_indexed) {
            src_idx = decoded.indices[vi];
            if (src_idx >= decoded.vertices.size()) continue;
        }
        const auto& vtx = decoded.vertices[src_idx];
        GpuVertex& gv = out_ptr[out_count++];

        float vx = has_pos ? vtx.position[0] : 0.0f;
        float vy = has_pos ? vtx.position[1] : 0.0f;
        float vz = pos_has_z ? vtx.position[2] : 0.0f;
        if (use_fast_mvp) {
            gv.pos[0] = vx * mvp[0][0] + vy * mvp[0][1] + vz * mvp[0][2] + mvp[0][3];
            gv.pos[1] = vx * mvp[1][0] + vy * mvp[1][1] + vz * mvp[1][2] + mvp[1][3];
            gv.pos[2] = vx * mvp[2][0] + vy * mvp[2][1] + vz * mvp[2][2] + mvp[2][3];
            gv.pos[3] = vx * mvp[3][0] + vy * mvp[3][1] + vz * mvp[3][2] + mvp[3][3];
            if (proj_type == 0u && gv.pos[3] == 0.0f) gv.pos[3] = 1.0f;
        } else {
            // 1. Position + Normal transformation in camera space (XF)
            const uint32_t pos_row = has_pos_mtx ? (vtx.position_matrix & 0x3Fu) : fixed_pos_row;
            if (has_valid_proj) {
                if (!has_pos_mtx) {
                    if (fixed_pos_mtx_valid) {
                        const float px = vx, py = vy, pz = vz;
                        vx = px * fixed_pm0[0] + py * fixed_pm0[1] + pz * fixed_pm0[2] + fixed_pm0[3];
                        vy = px * fixed_pm1[0] + py * fixed_pm1[1] + pz * fixed_pm1[2] + fixed_pm1[3];
                        vz = px * fixed_pm2[0] + py * fixed_pm2[1] + pz * fixed_pm2[2] + fixed_pm2[3];
                    }
                } else if ((pos_row + 2u) * 4u + 3u < state.xf.size()) {
                    const float* m0 = &xf_floats[(pos_row + 0u) * 4u];
                    const float* m1 = &xf_floats[(pos_row + 1u) * 4u];
                    const float* m2 = &xf_floats[(pos_row + 2u) * 4u];
                    if (m0[0] != 0.0f || m0[1] != 0.0f || m0[2] != 0.0f || m0[3] != 0.0f ||
                        m1[0] != 0.0f || m1[1] != 0.0f || m1[2] != 0.0f || m1[3] != 0.0f ||
                        m2[0] != 0.0f || m2[1] != 0.0f || m2[2] != 0.0f || m2[3] != 0.0f) {
                        const float px = vx, py = vy, pz = vz;
                        vx = px * m0[0] + py * m0[1] + pz * m0[2] + m0[3];
                        vy = px * m1[0] + py * m1[1] + pz * m1[2] + m1[3];
                        vz = px * m2[0] + py * m2[1] + pz * m2[2] + m2[3];
                    }
                }
            }
        }

        float nx = 0.0f, ny = 0.0f, nz = 1.0f;
        if (!use_fast_mvp && has_normal) {
            const uint32_t pos_row = has_pos_mtx ? (vtx.position_matrix & 0x3Fu) : fixed_pos_row;
            if (!has_pos_mtx && has_valid_proj) {
                if (fixed_nrm_mtx_valid) {
                    nx = vtx.normal[0] * fixed_nm0[0] + vtx.normal[1] * fixed_nm0[1] + vtx.normal[2] * fixed_nm0[2];
                    ny = vtx.normal[0] * fixed_nm1[0] + vtx.normal[1] * fixed_nm1[1] + vtx.normal[2] * fixed_nm1[2];
                    nz = vtx.normal[0] * fixed_nm2[0] + vtx.normal[1] * fixed_nm2[1] + vtx.normal[2] * fixed_nm2[2];
                    const float nl = std::sqrt(nx * nx + ny * ny + nz * nz);
                    if (nl > 1e-6f) { nx /= nl; ny /= nl; nz /= nl; }
                } else {
                    nx = vtx.normal[0]; ny = vtx.normal[1]; nz = vtx.normal[2];
                }
            } else {
                const uint32_t nrm_row = pos_row & 31u;
                if (has_valid_proj && 0x0400u + (nrm_row + 2u) * 3u + 2u < state.xf.size()) {
                    const float* n0 = &xf_floats[0x0400u + (nrm_row + 0u) * 3u];
                    const float* n1 = &xf_floats[0x0400u + (nrm_row + 1u) * 3u];
                    const float* n2 = &xf_floats[0x0400u + (nrm_row + 2u) * 3u];
                    if (n0[0] != 0.0f || n0[1] != 0.0f || n0[2] != 0.0f ||
                        n1[0] != 0.0f || n1[1] != 0.0f || n1[2] != 0.0f ||
                        n2[0] != 0.0f || n2[1] != 0.0f || n2[2] != 0.0f) {
                        nx = vtx.normal[0] * n0[0] + vtx.normal[1] * n0[1] + vtx.normal[2] * n0[2];
                        ny = vtx.normal[0] * n1[0] + vtx.normal[1] * n1[1] + vtx.normal[2] * n1[2];
                        nz = vtx.normal[0] * n2[0] + vtx.normal[1] * n2[1] + vtx.normal[2] * n2[2];
                        const float nl = std::sqrt(nx * nx + ny * ny + nz * nz);
                        if (nl > 1e-6f) { nx /= nl; ny /= nl; nz /= nl; }
                    } else {
                        nx = vtx.normal[0]; ny = vtx.normal[1]; nz = vtx.normal[2];
                    }
                } else {
                    nx = vtx.normal[0]; ny = vtx.normal[1]; nz = vtx.normal[2];
                }
            }
        }

        if (!use_fast_mvp) {
            if (has_valid_proj) {
                float clip_x, clip_y, clip_z, clip_w;
                if (proj_type == 0u) {
                    clip_x = vx * raw_proj[0] + vz * raw_proj[1];
                    clip_y = vy * raw_proj[2] + vz * raw_proj[3];
                    clip_z = vz * raw_proj[4] + raw_proj[5];
                    clip_w = (vz != 0.0f) ? -vz : 1.0f;
                } else {
                    clip_x = vx * raw_proj[0] + raw_proj[1];
                    clip_y = vy * raw_proj[2] + raw_proj[3];
                    clip_z = vz * raw_proj[4] + raw_proj[5];
                    clip_w = 1.0f;
                }
                gv.pos[0] = clip_x * x_sign;
                gv.pos[1] = clip_y * y_sign;
                gv.pos[2] = use_clip_ctrl ? (-clip_z) : (-2.0f * clip_z - clip_w);
                gv.pos[3] = clip_w;
            } else {
                gv.pos[0] = (vx / 320.0f) - 1.0f;
                gv.pos[1] = 1.0f - (vy / 240.0f);
                gv.pos[2] = 0.0f;
                gv.pos[3] = 1.0f;
            }
        }

        // 2. XF color and lighting channels (COLOR0A0 / COLOR1A1)
        const float eye_pos[3] = {vx, vy, vz};
        const float eye_nrm[3] = {nx, ny, nz};
        float lit0[4] = {1.0f, 1.0f, 1.0f, 1.0f};
        float lit1[4] = {1.0f, 1.0f, 1.0f, 1.0f};
        if (need_lit0) {
            float vcol0[4] = {1.0f, 1.0f, 1.0f, 1.0f};
            if (has_col0) unpack_rgba(vtx.color[0], vcol0);
            else if (has_col1) unpack_rgba(vtx.color[1], vcol0);
            eval_channel_fast(0u, vcol0, eye_pos, eye_nrm, lit0);
        }
        if (need_lit1) {
            float vcol1[4] = {1.0f, 1.0f, 1.0f, 1.0f};
            if (use_col1) unpack_rgba(vtx.color[1], vcol1);
            eval_channel_fast(1u, vcol1, eye_pos, eye_nrm, lit1);
        }

        if (!has_valid_proj || num_color_chans >= 1u) {
            gv.col0[0] = lit0[0]; gv.col0[1] = lit0[1]; gv.col0[2] = lit0[2]; gv.col0[3] = lit0[3];
        } else {
            gv.col0[0] = 0.0f; gv.col0[1] = 0.0f; gv.col0[2] = 0.0f; gv.col0[3] = 0.0f;
        }
        if (has_valid_proj && num_color_chans >= 2u) {
            gv.col1[0] = lit1[0]; gv.col1[1] = lit1[1]; gv.col1[2] = lit1[2]; gv.col1[3] = lit1[3];
        } else {
            gv.col1[0] = 0.0f; gv.col1[1] = 0.0f; gv.col1[2] = 0.0f; gv.col1[3] = 0.0f;
        }

        // 3. XF texture coordinate generation (TexGen 0..7 + TexMtx + DualTex)
        auto safe_tex_u = [&](uint32_t t) -> float {
            return (t < 8u && tex_desc[t] != 0u) ? vtx.texcoord[t][0] : 0.0f;
        };
        auto safe_tex_v = [&](uint32_t t) -> float {
            return (t < 8u && tex_has_t[t]) ? vtx.texcoord[t][1] : 0.0f;
        };
        if (!has_valid_proj) {
            for (uint32_t tg = 0; tg < 8u; ++tg) {
                gv.uv[tg][0] = safe_tex_u(tg);
                gv.uv[tg][1] = safe_tex_v(tg);
                gv.uv[tg][2] = 1.0f;
            }
        } else {
            for (uint32_t tg = 0; tg < num_tex_gens; ++tg) {
                const auto& tp = tg_pre[tg];
                if (tp.tg_type == 2u) {
                    gv.uv[tg][0] = lit0[0]; gv.uv[tg][1] = lit0[1]; gv.uv[tg][2] = 1.0f;
                    continue;
                } else if (tp.tg_type == 3u) {
                    gv.uv[tg][0] = lit1[0]; gv.uv[tg][1] = lit1[1]; gv.uv[tg][2] = 1.0f;
                    continue;
                } else if (tp.tg_type == 1u) {
                    gv.uv[tg][0] = (tp.emboss_src_tg < tg) ? gv.uv[tp.emboss_src_tg][0] : safe_tex_u(0u);
                    gv.uv[tg][1] = (tp.emboss_src_tg < tg) ? gv.uv[tp.emboss_src_tg][1] : safe_tex_v(0u);
                    gv.uv[tg][2] = 1.0f;
                    continue;
                }

                float coord[4] = {0.0f, 0.0f, 1.0f, 1.0f};
                if (tp.src_row == 0u) {
                    coord[0] = has_pos ? vtx.position[0] : 0.0f;
                    coord[1] = has_pos ? vtx.position[1] : 0.0f;
                    coord[2] = pos_has_z ? vtx.position[2] : 0.0f;
                } else if (tp.src_row == 1u && has_normal) {
                    coord[0] = vtx.normal[0]; coord[1] = vtx.normal[1]; coord[2] = vtx.normal[2];
                } else if (tp.src_row == 3u && has_ntb) {
                    coord[0] = vtx.tangent[0]; coord[1] = vtx.tangent[1]; coord[2] = vtx.tangent[2];
                } else if (tp.src_row == 4u && has_ntb) {
                    coord[0] = vtx.binormal[0]; coord[1] = vtx.binormal[1]; coord[2] = vtx.binormal[2];
                } else if (tp.src_row >= 5u && tp.src_row <= 12u) {
                    const uint32_t tnum = tp.src_row - 5u;
                    coord[0] = safe_tex_u(tnum);
                    coord[1] = safe_tex_v(tnum);
                }
                if (tp.in_form == 0u) coord[2] = 1.0f;
                if (std::isnan(coord[0])) coord[0] = 1.0f;
                if (std::isnan(coord[1])) coord[1] = 1.0f;
                if (std::isnan(coord[2])) coord[2] = 1.0f;

                float rx = coord[0], ry = coord[1], rz = (tp.proj_stq != 0u) ? coord[2] : 1.0f;
                if (!tp.has_vtx_tmtx) {
                    if (tp.fixed_tm_valid) {
                        rx = coord[0] * tp.tm0[0] + coord[1] * tp.tm0[1] + coord[2] * tp.tm0[2] + coord[3] * tp.tm0[3];
                        ry = coord[0] * tp.tm1[0] + coord[1] * tp.tm1[1] + coord[2] * tp.tm1[2] + coord[3] * tp.tm1[3];
                        if (tp.proj_stq != 0u) {
                            rz = coord[0] * tp.tm2[0] + coord[1] * tp.tm2[1] + coord[2] * tp.tm2[2] + coord[3] * tp.tm2[3];
                        } else {
                            rz = 1.0f;
                        }
                    }
                } else {
                    const uint32_t tm_row = vtx.texture_matrix[tg] & 0x3Fu;
                    if (tm_row < 60u && (tm_row + 2u) * 4u + 3u < state.xf.size()) {
                        const float* r0 = &xf_floats[(tm_row + 0u) * 4u];
                        const float* r1 = &xf_floats[(tm_row + 1u) * 4u];
                        if (r0[0] != 0.0f || r0[1] != 0.0f || r0[2] != 0.0f || r0[3] != 0.0f ||
                            r1[0] != 0.0f || r1[1] != 0.0f || r1[2] != 0.0f || r1[3] != 0.0f) {
                            rx = coord[0] * r0[0] + coord[1] * r0[1] + coord[2] * r0[2] + coord[3] * r0[3];
                            ry = coord[0] * r1[0] + coord[1] * r1[1] + coord[2] * r1[2] + coord[3] * r1[3];
                            if (tp.proj_stq != 0u) {
                                const float* r2 = &xf_floats[(tm_row + 2u) * 4u];
                                rz = coord[0] * r2[0] + coord[1] * r2[1] + coord[2] * r2[2] + coord[3] * r2[3];
                            } else {
                                rz = 1.0f;
                            }
                        }
                    }
                }

                if (tp.has_post) {
                    if (tp.post_norm) {
                        const float rl = std::sqrt(rx * rx + ry * ry + rz * rz);
                        if (rl > 1e-6f) { rx /= rl; ry /= rl; rz /= rl; }
                    }
                    const float ox = rx, oy = ry, oz = rz;
                    rx = ox * tp.pm0[0] + oy * tp.pm0[1] + oz * tp.pm0[2] + tp.pm0[3];
                    ry = ox * tp.pm1[0] + oy * tp.pm1[1] + oz * tp.pm1[2] + tp.pm1[3];
                    rz = ox * tp.pm2[0] + oy * tp.pm2[1] + oz * tp.pm2[2] + tp.pm2[3];
                }

                gv.uv[tg][0] = rx;
                gv.uv[tg][1] = ry;
                gv.uv[tg][2] = rz;
            }
            for (uint32_t tg = num_tex_gens; tg < 8u; ++tg) {
                if ((used_tcoord_mask & (1u << tg)) != 0u) {
                    gv.uv[tg][0] = safe_tex_u(tg);
                    gv.uv[tg][1] = safe_tex_v(tg);
                    gv.uv[tg][2] = 1.0f;
                }
            }
        }
    }
    if (!dst_verts) {
        m_gpu_batch.resize(out_count);
    }
    return out_count;
}
#endif

#if defined(_WIN32)
void Ggsea4RenderDevice::InitSharedVertexShader() {
    if (!m_glCreateShader || !m_glShaderSource || !m_glCompileShader || !m_glGetShaderiv) {
        return;
    }
    static const char* vs_src =
        "#version 450 core\n"
        "in vec4 a_pos;\n"
        "in vec4 a_col0;\n"
        "in vec4 a_col1;\n"
        "in vec3 a_uv0;\n"
        "in vec3 a_uv1;\n"
        "in vec3 a_uv2;\n"
        "in vec3 a_uv3;\n"
        "in vec3 a_uv4;\n"
        "in vec3 a_uv5;\n"
        "in vec3 a_uv6;\n"
        "in vec3 a_uv7;\n"
        "out vec4 v_col0;\n"
        "out vec4 v_col1;\n"
        "out vec3 v_uv0;\n"
        "out vec3 v_uv1;\n"
        "out vec3 v_uv2;\n"
        "out vec3 v_uv3;\n"
        "out vec3 v_uv4;\n"
        "out vec3 v_uv5;\n"
        "out vec3 v_uv6;\n"
        "out vec3 v_uv7;\n"
        "void main() {\n"
        "    gl_Position = a_pos;\n"
        "    v_col0 = a_col0;\n"
        "    v_col1 = a_col1;\n"
        "    v_uv0 = a_uv0;\n"
        "    v_uv1 = a_uv1;\n"
        "    v_uv2 = a_uv2;\n"
        "    v_uv3 = a_uv3;\n"
        "    v_uv4 = a_uv4;\n"
        "    v_uv5 = a_uv5;\n"
        "    v_uv6 = a_uv6;\n"
        "    v_uv7 = a_uv7;\n"
        "}\n";

    m_vs_handle = m_glCreateShader(GL_VERTEX_SHADER);
    m_glShaderSource(m_vs_handle, 1, &vs_src, nullptr);
    m_glCompileShader(m_vs_handle);
    GLint ok = 0;
    m_glGetShaderiv(m_vs_handle, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024] = {};
        if (m_glGetShaderInfoLog) m_glGetShaderInfoLog(m_vs_handle, sizeof(log) - 1, nullptr, log);
        std::fprintf(stderr, "[GL-TEV] Error compilando VS compartido:\n%s\n", log);
        if (m_glDeleteShader) m_glDeleteShader(m_vs_handle);
        m_vs_handle = 0;
    }
}
#endif

#if defined(_WIN32)
Ggsea4RenderDevice::TevProgramEntry* Ggsea4RenderDevice::CompileTevProgram(const TevShaderKey& key) {
    if (m_vs_handle == 0 || !m_glCreateProgram || !m_glCreateShader) {
        return nullptr;
    }

    auto it = m_tev_programs.find(key);
    if (it != m_tev_programs.end()) {
        return &it->second;
    }

    // Build channel swap tables (Swap Tables 0..3)
    static const char chan_chars[4] = {'r', 'g', 'b', 'a'};
    bool ksel_all_zero = true;
    for (uint32_t v : key.ksel) {
        if (v != 0u) { ksel_all_zero = false; break; }
    }
    std::array<std::string, 4> swap_swizzles;
    for (uint32_t s = 0; s < 4u; ++s) {
        if (!key.bp_configured || ksel_all_zero) {
            swap_swizzles[s] = "rgba";
        } else {
            const uint32_t rg = key.ksel[s * 2u + 0u];
            const uint32_t ba = key.ksel[s * 2u + 1u];
            std::string swz(4, 'r');
            swz[0] = chan_chars[rg & 3u];
            swz[1] = chan_chars[(rg >> 2) & 3u];
            swz[2] = chan_chars[ba & 3u];
            swz[3] = chan_chars[(ba >> 2) & 3u];
            swap_swizzles[s] = swz;
        }
    }

    auto konst_c_expr = [](uint32_t sel) -> std::string {
        static const int frac_lut[8] = {255, 223, 191, 159, 128, 96, 64, 32};
        if (sel < 8u) return "ivec3(" + std::to_string(frac_lut[sel]) + ")";
        if (sel < 12u) return "ivec3(0)";
        if (sel < 16u) return "kreg[" + std::to_string(sel - 12u) + "].rgb";
        const uint32_t kidx = (sel - 16u) & 3u;
        const uint32_t ch = (sel - 16u) >> 2;
        const char c = chan_chars[ch & 3u];
        return "kreg[" + std::to_string(kidx) + "]." + std::string(3, c);
    };

    auto konst_a_expr = [](uint32_t sel) -> std::string {
        static const int frac_lut[8] = {255, 223, 191, 159, 128, 96, 64, 32};
        if (sel < 8u) return std::to_string(frac_lut[sel]);
        if (sel < 16u) return "0";
        const uint32_t kidx = (sel - 16u) & 3u;
        const uint32_t ch = (sel - 16u) >> 2;
        const char c = chan_chars[ch & 3u];
        return "kreg[" + std::to_string(kidx) + "]." + std::string(1, c);
    };

    static const char* c_in_lut[16] = {
        "reg_prev.rgb", "reg_prev.aaa", "reg_c0.rgb", "reg_c0.aaa",
        "reg_c1.rgb",   "reg_c1.aaa",   "reg_c2.rgb", "reg_c2.aaa",
        "textemp.rgb",  "textemp.aaa",  "rastemp.rgb","rastemp.aaa",
        "ivec3(255)",   "ivec3(128)",   "konsttemp.rgb", "ivec3(0)"
    };
    static const char* a_in_lut[8] = {
        "reg_prev.a", "reg_c0.a", "reg_c1.a", "reg_c2.a",
        "textemp.a",  "rastemp.a","konsttemp.a", "0"
    };
    static const char* reg_names[4] = {"reg_prev", "reg_c0", "reg_c1", "reg_c2"};

    std::string fs;
    fs.reserve(4096);
    fs += "#version 450 core\n"
          "in vec4 v_col0;\n"
          "in vec4 v_col1;\n"
          "in vec3 v_uv0;\n"
          "in vec3 v_uv1;\n"
          "in vec3 v_uv2;\n"
          "in vec3 v_uv3;\n"
          "in vec3 v_uv4;\n"
          "in vec3 v_uv5;\n"
          "in vec3 v_uv6;\n"
          "in vec3 v_uv7;\n"
          "uniform sampler2DArray u_tex[8];\n"
          "uniform vec4 u_tev_reg[4];\n"
          "uniform vec4 u_konst[4];\n"
          "uniform vec4 u_tex_inv_wh[8];\n"
          "uniform vec4 u_su_scale[8];\n"
          "uniform int u_tex_mode[8];\n"
          "uniform vec2 u_alpha_ref;\n"
          "uniform vec2 u_const_alpha;\n"
          "out vec4 o_color;\n\n"
          "ivec4 sample_gx_tex(sampler2DArray s, int tm, vec3 stq, int tc) {\n"
          "    vec2 proj_uv = (abs(stq.z) > 1e-7) ? (stq.xy / stq.z) : clamp(stq.xy * 0.5, vec2(-1.0), vec2(1.0));\n"
          "    vec2 uv = proj_uv * u_su_scale[tc].xy * u_tex_inv_wh[tm].xy;\n"
          "    ivec4 c = ivec4(round(clamp(texture(s, vec3(uv, 0.0)), 0.0, 1.0) * 255.0));\n"
          "    int m = u_tex_mode[tm];\n"
          "    if (m == 1) c.a = 255;\n"
          "    else if (m == 2) c = ivec4(c.r);\n"
          "    else if (m == 3) c = ivec4(c.rrr, c.a);\n"
          "    return c;\n"
          "}\n\n"
          "int idot(ivec3 x, ivec3 y) { return x.r * y.r + x.g * y.g + x.b * y.b; }\n\n"
          "void main() {\n"
          "    ivec4 reg_prev = ivec4(round(u_tev_reg[0] * 255.0));\n"
          "    ivec4 reg_c0   = ivec4(round(u_tev_reg[1] * 255.0));\n"
          "    ivec4 reg_c1   = ivec4(round(u_tev_reg[2] * 255.0));\n"
          "    ivec4 reg_c2   = ivec4(round(u_tev_reg[3] * 255.0));\n"
          "    ivec4 kreg[4];\n"
          "    for (int i = 0; i < 4; ++i) kreg[i] = ivec4(round(clamp(u_konst[i], 0.0, 1.0) * 255.0));\n"
          "    ivec4 col0_i = ivec4(round(clamp(v_col0, 0.0, 1.0) * 255.0));\n"
          "    ivec4 col1_i = ivec4(round(clamp(v_col1, 0.0, 1.0) * 255.0));\n"
          "    ivec4 rastemp, textemp, konsttemp, tevin_a, tevin_b, tevin_c, tevin_d;\n"
          "    const ivec3 comp16 = ivec3(1, 256, 0);\n"
          "    const ivec3 comp24 = ivec3(1, 256, 65536);\n";

    if (!key.bp_configured) {
        fs += "    reg_prev = col0_i;\n";
    } else {
        auto write_regular_op = [&](const char* swz, uint32_t bias, uint32_t op, uint32_t scale) -> std::string {
            const char* bias_str = (bias == 1u) ? " + 128" : ((bias == 2u) ? " - 128" : "");
            const char* scale_l  = (scale == 1u) ? " << 1" : ((scale == 2u) ? " << 2" : "");
            const char* scale_r  = (scale == 3u) ? " >> 1" : "";
            const char* lerp_b   = (scale == 3u) ? "" : ((op == 1u) ? " + 127" : " + 128");
            const char* op_str   = (op == 1u) ? " - " : " + ";
            std::string expr = "(((tevin_d." + std::string(swz) + bias_str + ")" + scale_l + ")" + op_str +
                               "(((((tevin_a." + swz + " << 8) + (tevin_b." + swz + " - tevin_a." + swz +
                               ") * (tevin_c." + swz + " + (tevin_c." + swz + " >> 7)))" + scale_l + ")" +
                               lerp_b + ") >> 8))" + scale_r;
            return expr;
        };

        for (uint32_t st = 0; st < key.num_stages; ++st) {
            const uint32_t tref = key.tref[st >> 1];
            const uint32_t tshift = (st & 1u) ? 12u : 0u;
            const uint32_t tmap = (tref >> tshift) & 7u;
            const uint32_t tcoord = (tref >> (tshift + 3u)) & 7u;
            const bool tex_en = ((tref >> (tshift + 6u)) & 1u) != 0u;
            const uint32_t ras_chan = (tref >> (tshift + 7u)) & 7u;

            const uint32_t cc = key.tev_env[st * 2u + 0u];
            const uint32_t ac = key.tev_env[st * 2u + 1u];

            const uint32_t cc_d = cc & 0xFu;
            const uint32_t cc_c = (cc >> 4) & 0xFu;
            const uint32_t cc_b = (cc >> 8) & 0xFu;
            const uint32_t cc_a = (cc >> 12) & 0xFu;
            const uint32_t cc_bias = (cc >> 16) & 3u;
            const uint32_t cc_op = (cc >> 18) & 1u;
            const bool cc_clamp = ((cc >> 19) & 1u) != 0u;
            const uint32_t cc_scale = (cc >> 20) & 3u;
            const uint32_t cc_dest = (cc >> 22) & 3u;

            const uint32_t rswap = ac & 3u;
            const uint32_t tswap = (ac >> 2) & 3u;
            const uint32_t ac_d = (ac >> 4) & 7u;
            const uint32_t ac_c = (ac >> 7) & 7u;
            const uint32_t ac_b = (ac >> 10) & 7u;
            const uint32_t ac_a = (ac >> 13) & 7u;
            const uint32_t ac_bias = (ac >> 16) & 3u;
            const uint32_t ac_op = (ac >> 18) & 1u;
            const bool ac_clamp = ((ac >> 19) & 1u) != 0u;
            const uint32_t ac_scale = (ac >> 20) & 3u;
            const uint32_t ac_dest = (ac >> 22) & 3u;

            const uint32_t ksel_w = key.ksel[st >> 1];
            const uint32_t kc_sel = (st & 1u) ? ((ksel_w >> 14) & 0x1Fu) : ((ksel_w >> 4) & 0x1Fu);
            const uint32_t ka_sel = (st & 1u) ? ((ksel_w >> 19) & 0x1Fu) : ((ksel_w >> 9) & 0x1Fu);

            const char* ras_src = (ras_chan == 0u || ras_chan == 2u || ras_chan == 4u) ? "col0_i" :
                                  ((ras_chan == 1u || ras_chan == 3u || ras_chan == 5u) ? "col1_i" : "ivec4(0)");
            fs += "    // TEV Stage " + std::to_string(st) + "\n";
            fs += "    rastemp = " + std::string(ras_src) + "." + swap_swizzles[rswap] + ";\n";
            if (tex_en) {
                fs += "    textemp = sample_gx_tex(u_tex[" + std::to_string(tmap) + "], " +
                      std::to_string(tmap) + ", v_uv" + std::to_string(tcoord) + ", " +
                      std::to_string(tcoord) + ")." + swap_swizzles[tswap] + ";\n";
            } else {
                fs += "    textemp = ivec4(255);\n";
            }
            fs += "    konsttemp = ivec4(" + konst_c_expr(kc_sel) + ", " + konst_a_expr(ka_sel) + ");\n";
            fs += "    tevin_a = ivec4(" + std::string(c_in_lut[cc_a]) + ", " + a_in_lut[ac_a] + ") & ivec4(255);\n";
            fs += "    tevin_b = ivec4(" + std::string(c_in_lut[cc_b]) + ", " + a_in_lut[ac_b] + ") & ivec4(255);\n";
            fs += "    tevin_c = ivec4(" + std::string(c_in_lut[cc_c]) + ", " + a_in_lut[ac_c] + ") & ivec4(255);\n";
            fs += "    tevin_d = ivec4(" + std::string(c_in_lut[cc_d]) + ", " + a_in_lut[ac_d] + ");\n";

            // Color combiner
            std::string c_expr;
            if (cc_bias != 3u) {
                c_expr = write_regular_op("rgb", cc_bias, cc_op, cc_scale);
            } else {
                if (cc_op != 0u) { // EQ
                    if (cc_scale == 0u) c_expr = "tevin_d.rgb + ((tevin_a.r == tevin_b.r) ? tevin_c.rgb : ivec3(0))";
                    else if (cc_scale == 1u) c_expr = "tevin_d.rgb + ((idot(tevin_a.rgb, comp16) == idot(tevin_b.rgb, comp16)) ? tevin_c.rgb : ivec3(0))";
                    else if (cc_scale == 2u) c_expr = "tevin_d.rgb + ((idot(tevin_a.rgb, comp24) == idot(tevin_b.rgb, comp24)) ? tevin_c.rgb : ivec3(0))";
                    else c_expr = "tevin_d.rgb + ((ivec3(1) - sign(abs(tevin_a.rgb - tevin_b.rgb))) * tevin_c.rgb)";
                } else { // GT
                    if (cc_scale == 0u) c_expr = "tevin_d.rgb + ((tevin_a.r > tevin_b.r) ? tevin_c.rgb : ivec3(0))";
                    else if (cc_scale == 1u) c_expr = "tevin_d.rgb + ((idot(tevin_a.rgb, comp16) > idot(tevin_b.rgb, comp16)) ? tevin_c.rgb : ivec3(0))";
                    else if (cc_scale == 2u) c_expr = "tevin_d.rgb + ((idot(tevin_a.rgb, comp24) > idot(tevin_b.rgb, comp24)) ? tevin_c.rgb : ivec3(0))";
                    else c_expr = "tevin_d.rgb + (max(sign(tevin_a.rgb - tevin_b.rgb), ivec3(0)) * tevin_c.rgb)";
                }
            }
            fs += "    " + std::string(reg_names[cc_dest]) + ".rgb = clamp(" + c_expr +
                  (cc_clamp ? ", ivec3(0), ivec3(255));\n" : ", ivec3(-1024), ivec3(1023));\n");

            // Alpha combiner
            std::string a_expr;
            if (ac_bias != 3u) {
                a_expr = write_regular_op("a", ac_bias, ac_op, ac_scale);
            } else {
                if (ac_op != 0u) { // EQ
                    if (ac_scale == 0u) a_expr = "tevin_d.a + ((tevin_a.r == tevin_b.r) ? tevin_c.a : 0)";
                    else if (ac_scale == 1u) a_expr = "tevin_d.a + ((idot(tevin_a.rgb, comp16) == idot(tevin_b.rgb, comp16)) ? tevin_c.a : 0)";
                    else if (ac_scale == 2u) a_expr = "tevin_d.a + ((idot(tevin_a.rgb, comp24) == idot(tevin_b.rgb, comp24)) ? tevin_c.a : 0)";
                    else a_expr = "tevin_d.a + ((tevin_a.a == tevin_b.a) ? tevin_c.a : 0)";
                } else { // GT
                    if (ac_scale == 0u) a_expr = "tevin_d.a + ((tevin_a.r > tevin_b.r) ? tevin_c.a : 0)";
                    else if (ac_scale == 1u) a_expr = "tevin_d.a + ((idot(tevin_a.rgb, comp16) > idot(tevin_b.rgb, comp16)) ? tevin_c.a : 0)";
                    else if (ac_scale == 2u) a_expr = "tevin_d.a + ((idot(tevin_a.rgb, comp24) > idot(tevin_b.rgb, comp24)) ? tevin_c.a : 0)";
                    else a_expr = "tevin_d.a + ((tevin_a.a > tevin_b.a) ? tevin_c.a : 0)";
                }
            }
            fs += "    " + std::string(reg_names[ac_dest]) + ".a = clamp(" + a_expr +
                  (ac_clamp ? ", 0, 255);\n" : ", -1024, 1023);\n");
        }
    }

    // Standard GameCube GX hardware rule:
    // The output of the last active TEV stage is written to screen regardless of its destination register
    if (key.num_stages > 0) {
        const uint32_t last_st = key.num_stages - 1u;
        const uint32_t last_cc = key.tev_env[last_st * 2u + 0u];
        const uint32_t last_ac = key.tev_env[last_st * 2u + 1u];
        const uint32_t last_cc_dest = (last_cc >> 22) & 3u;
        const uint32_t last_ac_dest = (last_ac >> 22) & 3u;
        if (last_cc_dest != 0u) {
            fs += "    reg_prev.rgb = " + std::string(reg_names[last_cc_dest]) + ".rgb;\n";
        }
        if (last_ac_dest != 0u) {
            fs += "    reg_prev.a = " + std::string(reg_names[last_ac_dest]) + ".a;\n";
        }
    }

    fs += "    ivec4 out_i = reg_prev & ivec4(255);\n";

    // AlphaCompare hardware (BP 0xF3)
    const uint32_t comp0 = key.alpha_logic_ops & 7u;
    const uint32_t comp1 = (key.alpha_logic_ops >> 3) & 7u;
    const uint32_t logic = (key.alpha_logic_ops >> 6) & 3u;
    const bool early_z = ((key.alpha_logic_ops >> 8) & 1u) != 0u;
    const bool always_pass =
        (logic == 0u && comp0 == 7u && comp1 == 7u) ||
        (logic == 1u && (comp0 == 7u || comp1 == 7u)) ||
        (logic == 2u && ((comp0 == 7u && comp1 == 0u) || (comp0 == 0u && comp1 == 7u))) ||
        (logic == 3u && ((comp0 == 7u && comp1 == 7u) || (comp0 == 0u && comp1 == 0u)));
    const bool always_fail =
        (logic == 0u && (comp0 == 0u || comp1 == 0u)) ||
        (logic == 1u && (comp0 == 0u && comp1 == 0u)) ||
        (logic == 2u && ((comp0 == 7u && comp1 == 7u) || (comp0 == 0u && comp1 == 0u))) ||
        (logic == 3u && ((comp0 == 7u && comp1 == 0u) || (comp0 == 0u && comp1 == 7u)));

    if (!always_pass && !(always_fail && early_z)) {
        auto cmp_expr = [](uint32_t mode, const char* ref_expr) -> std::string {
            switch (mode) {
            case 0u: return "false";
            case 1u: return "(out_i.a < " + std::string(ref_expr) + ")";
            case 2u: return "(out_i.a == " + std::string(ref_expr) + ")";
            case 3u: return "(out_i.a <= " + std::string(ref_expr) + ")";
            case 4u: return "(out_i.a > " + std::string(ref_expr) + ")";
            case 5u: return "(out_i.a != " + std::string(ref_expr) + ")";
            case 6u: return "(out_i.a >= " + std::string(ref_expr) + ")";
            default: return "true";
            }
        };
        static const char* logic_ops[4] = {" && ", " || ", " != ", " == "};
        fs += "    int ref0 = int(round(u_alpha_ref.x));\n";
        fs += "    int ref1 = int(round(u_alpha_ref.y));\n";
        fs += "    if (!(" + cmp_expr(comp0, "ref0") + logic_ops[logic] + cmp_expr(comp1, "ref1") + ")) discard;\n";
    }

    fs += "    float out_a = (u_const_alpha.x > 0.5) ? u_const_alpha.y : (float(out_i.a) / 255.0);\n"
          "    o_color = vec4(vec3(out_i.rgb) / 255.0, out_a);\n"
          "}\n";

    GLuint fs_handle = m_glCreateShader(GL_FRAGMENT_SHADER);
    const char* fs_cstr = fs.c_str();
    m_glShaderSource(fs_handle, 1, &fs_cstr, nullptr);
    m_glCompileShader(fs_handle);
    GLint fs_ok = 0;
    m_glGetShaderiv(fs_handle, GL_COMPILE_STATUS, &fs_ok);
    if (!fs_ok) {
        char log[1024] = {};
        if (m_glGetShaderInfoLog) m_glGetShaderInfoLog(fs_handle, sizeof(log) - 1, nullptr, log);
        std::fprintf(stderr, "[GL-TEV] Error compilando FS TEV (stages=%u):\n%s\n", key.num_stages, log);
        if (m_glDeleteShader) m_glDeleteShader(fs_handle);
        auto [ins_it, _] = m_tev_programs.emplace(key, TevProgramEntry{});
        return &ins_it->second;
    }

    GLuint prog = m_glCreateProgram();
    m_glAttachShader(prog, m_vs_handle);
    m_glAttachShader(prog, fs_handle);
    if (m_glBindAttribLocation) {
        m_glBindAttribLocation(prog, 0, "a_pos");
        m_glBindAttribLocation(prog, 1, "a_col0");
        m_glBindAttribLocation(prog, 2, "a_col1");
        for (GLuint tc = 0; tc < 8u; ++tc) {
            const std::string attr_name = "a_uv" + std::to_string(tc);
            m_glBindAttribLocation(prog, 3u + tc, attr_name.c_str());
        }
    }
    m_glLinkProgram(prog);
    if (m_glDeleteShader) m_glDeleteShader(fs_handle);

    GLint link_ok = 0;
    m_glGetProgramiv(prog, GL_LINK_STATUS, &link_ok);
    if (!link_ok) {
        char log[1024] = {};
        if (m_glGetProgramInfoLog) m_glGetProgramInfoLog(prog, sizeof(log) - 1, nullptr, log);
        std::fprintf(stderr, "[GL-TEV] Error enlazando programa TEV:\n%s\n", log);
        if (m_glDeleteProgram) m_glDeleteProgram(prog);
        auto [ins_it, _] = m_tev_programs.emplace(key, TevProgramEntry{});
        return &ins_it->second;
    }

    TevProgramEntry entry{};
    entry.program = prog;
    entry.fragment_source = std::move(fs);
    if (m_glGetUniformLocation) {
        auto get_loc = [&](const char* name) -> GLint {
            std::string name_arr = std::string(name) + "[0]";
            GLint loc = m_glGetUniformLocation(prog, name_arr.c_str());
            if (loc < 0) loc = m_glGetUniformLocation(prog, name);
            return loc;
        };
        entry.loc_tev_reg = get_loc("u_tev_reg");
        entry.loc_konst = get_loc("u_konst");
        entry.loc_tex_inv_wh = get_loc("u_tex_inv_wh");
        entry.loc_su_scale = get_loc("u_su_scale");
        entry.loc_tex_mode = get_loc("u_tex_mode");
        entry.loc_alpha_ref = m_glGetUniformLocation(prog, "u_alpha_ref");
        entry.loc_const_alpha = m_glGetUniformLocation(prog, "u_const_alpha");

        if (m_glUseProgram && m_glUniform1i) {
            m_glUseProgram(prog);
            for (int tm = 0; tm < 8; ++tm) {
                const std::string uname = "u_tex[" + std::to_string(tm) + "]";
                GLint loc = m_glGetUniformLocation(prog, uname.c_str());
                if (loc >= 0) m_glUniform1i(loc, tm);
            }
            m_glUseProgram(0);
            m_current_program = 0;
        }
    }

    auto [ins_it, _] = m_tev_programs.emplace(key, entry);
    ++m_shader_compile_count;
    return &ins_it->second;
}
#endif

#if defined(_WIN32)
Ggsea4RenderDevice::TevProgramEntry* Ggsea4RenderDevice::EnsureTevProgram(const moderngekko::GxStateView& state,
                                  uint32_t num_stages, bool bp_configured) {
    if (m_vs_handle == 0 || !m_glCreateProgram || !m_glCreateShader) {
        return nullptr;
    }
    if (m_last_tev_prog != nullptr && state.bp_tev_generation == m_last_bp_tev_gen && state.bp_tev_generation != 0u) {
        return m_last_tev_prog;
    }

    TevShaderKey key{};
    key.num_stages = bp_configured ? std::clamp<uint32_t>(num_stages, 1u, 16u) : 1u;
    key.bp_configured = bp_configured ? 1u : 0u;
    const uint32_t early_z_bit = (state.bp[0x43u] >> 6) & 1u;
    const uint32_t raw_acmp = bp_configured ? (state.bp[0xF3u] & 0xFFFFFFu) : 0u;
    key.alpha_logic_ops = (raw_acmp != 0u)
                              ? (((raw_acmp >> 16) & 0xFFu) | (early_z_bit << 8))
                              : 0x3Fu; // Always && Always
    if (bp_configured) {
        const uint32_t tref_words = (key.num_stages + 1u) / 2u;
        for (uint32_t i = 0; i < tref_words; ++i) {
            key.tref[i] = state.bp[0x28u + i] & 0xFFFFFFu;
        }
        for (uint32_t s = 0; s < key.num_stages; ++s) {
            key.tev_env[s * 2u + 0u] = state.bp[0xC0u + s * 2u] & 0xFFFFFFu;
            key.tev_env[s * 2u + 1u] = state.bp[0xC1u + s * 2u] & 0xFFFFFFu;
        }
        for (uint32_t i = 0; i < 8u; ++i) {
            key.ksel[i] = state.bp[0xF6u + i] & 0xFFFFFFu;
        }
    }

    if (m_last_tev_prog != nullptr && key == m_last_tev_key) {
        m_last_bp_tev_gen = state.bp_tev_generation;
        return m_last_tev_prog;
    }

    auto it = m_tev_programs.find(key);
    if (it != m_tev_programs.end()) {
        m_last_tev_key = key;
        m_last_tev_prog = &it->second;
        m_last_bp_tev_gen = state.bp_tev_generation;
        return m_last_tev_prog;
    }

    std::printf("[TEV-MISS] Compilando shader TEV en caliente (draw=%llu, stages=%u)\n",
                static_cast<unsigned long long>(m_draw_count), key.num_stages);
    m_last_tev_prog = CompileTevProgram(key);
    m_last_tev_key = key;
    m_last_bp_tev_gen = state.bp_tev_generation;
    return m_last_tev_prog;
}
#endif

#if defined(_WIN32)
void Ggsea4RenderDevice::FlushPendingBatch() {
    FlushDolphinBatch();
    if (!m_batch_active) {
        return;
    }
    m_batch_active = false;
    if (m_batch_ebo_count > 0 && m_glDrawElementsBaseVertex) {
        if (g_perf.enabled) {
            ++g_perf.gl_draw_calls;
        }
        m_glDrawElementsBaseVertex(GL_TRIANGLES,
                                   static_cast<GLsizei>(m_batch_ebo_count),
                                   GL_UNSIGNED_INT,
                                   reinterpret_cast<const void*>(m_batch_ebo_start * sizeof(uint32_t)),
                                   static_cast<GLint>(m_batch_vbo_base));
    }
    m_batch_ebo_count = 0;
}
#endif

#if defined(_WIN32)
void Ggsea4RenderDevice::WarmupTevShaderCache() {
    if (m_vs_handle == 0 || !m_glCreateProgram || !m_glCreateShader) return;
    auto t0 = std::chrono::steady_clock::now();
    size_t count = 0;
    for (const auto& key : s_tts_precache_tev_keys) {
        if (CompileTevProgram(key) != nullptr) ++count;
    }
    auto dt_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now() - t0).count();
    std::printf("[GL-TEV] Precaché de shaders TEV listo: %zu/%zu programas precargados en %lld ms\n",
                count, sizeof(s_tts_precache_tev_keys) / sizeof(s_tts_precache_tev_keys[0]),
                static_cast<long long>(dt_ms));
}
#endif

