#include "gx_dolphin_gl.hpp"

bool convert_xfb_yuy2_to_rgba8(const u8* src, u32 width, u32 height, u32 stride_bytes, u32* dst_rgba) {
    bool has_visible_luma = false;
    for (u32 y = 0; y < height; ++y) {
        const u8* row = src + y * stride_bytes;
        u32* out = dst_rgba + y * width;
        for (u32 x = 0; x < width; x += 2) {
            const u8 y0 = row[x * 2 + 0];
            const u8 u  = row[x * 2 + 1];
            const u8 y1 = row[x * 2 + 2];
            const u8 v  = row[x * 2 + 3];

            if (y0 > 16 || y1 > 16) {
                has_visible_luma = true;
            }

            auto yuv_to_rgba = [](int y_val, int u_val, int v_val) -> u32 {
                int c = y_val - 16;
                int d = u_val - 128;
                int e = v_val - 128;
                int r = std::clamp((298 * c + 409 * e + 128) >> 8, 0, 255);
                int g = std::clamp((298 * c - 100 * d - 208 * e + 128) >> 8, 0, 255);
                int b = std::clamp((298 * c + 516 * d + 128) >> 8, 0, 255);
                return 0xFF000000u | (static_cast<u32>(b) << 16) | (static_cast<u32>(g) << 8) | static_cast<u32>(r);
            };

            out[x + 0] = yuv_to_rgba(y0, u, v);
            if (x + 1 < width) {
                out[x + 1] = yuv_to_rgba(y1, u, v);
            }
        }
    }
    return has_visible_luma;
}

#if defined(_WIN32)
#ifndef GL_BGR_EXT
#define GL_BGR_EXT 0x80E0
#endif
#ifndef GL_LOWER_LEFT
#define GL_LOWER_LEFT 0x8CA1
#endif
#ifndef GL_ZERO_TO_ONE
#define GL_ZERO_TO_ONE 0x935F
#endif
typedef void (APIENTRY *PFNGLCLIPCONTROLPROC)(GLenum origin, GLenum depth);

bool write_bgr24_bmp(const char* filepath, int width, int height, const u8* pixels, size_t row_stride) {
    if (width <= 0 || height <= 0 || !pixels) return false;
    std::ofstream out(filepath, std::ios::binary);
    if (!out) return false;

    const uint32_t img_size = static_cast<uint32_t>(row_stride * static_cast<size_t>(height));
    const uint32_t file_size = 54u + img_size;
    const uint32_t offset = 54u;
    const uint32_t header_size = 40u;
    const uint16_t planes = 1u;
    const uint16_t bpp = 24u;
    const uint32_t res = 2835u; // ~72 DPI
    const uint32_t zero = 0u;

    out.put('B'); out.put('M');
    out.write(reinterpret_cast<const char*>(&file_size), 4);
    out.write(reinterpret_cast<const char*>(&zero), 4);
    out.write(reinterpret_cast<const char*>(&offset), 4);

    out.write(reinterpret_cast<const char*>(&header_size), 4);
    out.write(reinterpret_cast<const char*>(&width), 4);
    out.write(reinterpret_cast<const char*>(&height), 4);
    out.write(reinterpret_cast<const char*>(&planes), 2);
    out.write(reinterpret_cast<const char*>(&bpp), 2);
    out.write(reinterpret_cast<const char*>(&zero), 4);
    out.write(reinterpret_cast<const char*>(&img_size), 4);
    out.write(reinterpret_cast<const char*>(&res), 4);
    out.write(reinterpret_cast<const char*>(&res), 4);
    out.write(reinterpret_cast<const char*>(&zero), 4);
    out.write(reinterpret_cast<const char*>(&zero), 4);

    out.write(reinterpret_cast<const char*>(pixels), static_cast<std::streamsize>(img_size));
    return true;
}

bool save_frame_to_bmp(const char* filepath, int width, int height) {
    if (width <= 0 || height <= 0) return false;
    const size_t row_stride = (static_cast<size_t>(width) * 3u + 3u) & ~size_t(3u);
    std::vector<u8> pixels(row_stride * static_cast<size_t>(height), 0);
    glPixelStorei(GL_PACK_ALIGNMENT, 4);
    glReadPixels(0, 0, width, height, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels.data());
    return write_bgr24_bmp(filepath, width, height, pixels.data(), row_stride);
}

bool save_yuv420_to_bmp(const char* filepath, int width, int height, const u8* yuv) {
    if (width <= 0 || height <= 0 || !yuv) return false;
    const size_t row_stride = (static_cast<size_t>(width) * 3u + 3u) & ~size_t(3u);
    std::vector<u8> bgr(row_stride * static_cast<size_t>(height), 0);
    const u8* y_plane = yuv;
    const u8* u_plane = yuv + width * height;
    const u8* v_plane = u_plane + (width * height) / 4;

    for (int y = 0; y < height; ++y) {
        int dst_y = height - 1 - y; // Bottom-up standard BMP
        u8* row = bgr.data() + dst_y * row_stride;
        for (int x = 0; x < width; ++x) {
            int Y = y_plane[y * width + x];
            int U = u_plane[(y / 2) * (width / 2) + (x / 2)];
            int V = v_plane[(y / 2) * (width / 2) + (x / 2)];

            int C = Y;
            int D = U - 128;
            int E = V - 128;

            int R = (298 * C + 409 * E + 128) >> 8;
            int G = (298 * C - 100 * D - 208 * E + 128) >> 8;
            int B = (298 * C + 516 * D + 128) >> 8;

            if (R < 0) R = 0; else if (R > 255) R = 255;
            if (G < 0) G = 0; else if (G > 255) G = 255;
            if (B < 0) B = 0; else if (B > 255) B = 255;

            row[x * 3 + 0] = static_cast<u8>(B);
            row[x * 3 + 1] = static_cast<u8>(G);
            row[x * 3 + 2] = static_cast<u8>(R);
        }
    }
    return write_bgr24_bmp(filepath, width, height, bgr.data(), row_stride);
}

bool save_rgba8_to_bmp(const char* filepath, int width, int height, const u32* rgba) {
    if (width <= 0 || height <= 0 || !rgba) return false;
    const size_t row_stride = (static_cast<size_t>(width) * 3u + 3u) & ~size_t(3u);
    std::vector<u8> bgr(row_stride * static_cast<size_t>(height), 0);
    for (int y = 0; y < height; ++y) {
        int dst_y = height - 1 - y; // Bottom-up BMP
        u8* row = bgr.data() + dst_y * row_stride;
        for (int x = 0; x < width; ++x) {
            u32 px = rgba[y * width + x];
            u8 r = static_cast<u8>((px >> 24) & 0xFFu);
            u8 g = static_cast<u8>((px >> 16) & 0xFFu);
            u8 b = static_cast<u8>((px >> 8) & 0xFFu);
            row[x * 3 + 0] = b;
            row[x * 3 + 1] = g;
            row[x * 3 + 2] = r;
        }
    }
    return write_bgr24_bmp(filepath, width, height, bgr.data(), row_stride);
}
#endif



void Ggsea4RenderDevice::CopyEfb(const moderngekko::GxEfbCopy& copy)  {
#if defined(_WIN32)
    ScopedPerfQpc prof_copy(g_perf.copy_efb_qpc);
#endif
    ++m_efb_copy_count;
    if (m_audit_dolphin_shaders && m_efb_copy_count <= 20) {
        std::printf("[COPY-EFB %llu] to_xfb=%d dst=0x%08X clear=%d clear_col=0x%08X w=%u h=%u src=(%u,%u) half=%d fmt=0x%X\n",
                    static_cast<unsigned long long>(m_efb_copy_count), copy.copy_to_xfb ? 1 : 0,
                    copy.destination_address, copy.clear ? 1 : 0, copy.clear_color,
                    copy.width, copy.height, copy.source_x, copy.source_y,
                    copy.half_scale ? 1 : 0, copy.target_format);
    }
    if (copy.copy_to_xfb && copy.destination_address != 0) {
        m_last_xfb_address = copy.destination_address;
        if (m_audit_dolphin_shaders && (m_efb_copy_count <= 10 || (m_efb_copy_count >= 60 && m_efb_copy_count <= 140) || m_efb_copy_count % 1000 == 0 || (m_efb_copy_count >= 6600 && m_efb_copy_count <= 6610) ||
            (m_efb_copy_count >= 15190 && m_efb_copy_count <= 15210))) {
            std::printf("[DIAG-COPY %llu] to_xfb=1 dst=0x%08X clear=%d clear_col=0x%08X w=%u h=%u src=(%u,%u)\n",
                        static_cast<unsigned long long>(m_efb_copy_count), copy.destination_address,
                        copy.clear ? 1 : 0, copy.clear_color, copy.width, copy.height, copy.source_x, copy.source_y);
        }
    }

#if defined(_WIN32)
    if (m_efb_fbo == 0 || !m_glBindFramebuffer || copy.width == 0 || copy.height == 0) {
        return;
    }
    if (copy.source_x >= EFB_WIDTH || copy.source_y >= EFB_HEIGHT) {
        return;
    }

    const int src_x0 = static_cast<int>(copy.source_x);
    const int src_y0 = static_cast<int>(copy.source_y);
    const int src_x1 = std::min<int>(src_x0 + copy.width, EFB_WIDTH);
    const int src_y1 = std::min<int>(src_y0 + copy.height, EFB_HEIGHT);
    const int copy_w = src_x1 - src_x0;
    const int copy_h = src_y1 - src_y0;
    if (copy_w <= 0 || copy_h <= 0) {
        return;
    }

    InvalidateGlStateCache();
    // Y coordinates in m_efb_fbo (640x528, GL bottom-left origin vs GX top-left origin)
    const int gl_src_y0 = EFB_HEIGHT - src_y1; // bottom edge in GL
    const int gl_src_y1 = EFB_HEIGHT - src_y0; // top edge in GL

    glDisable(GL_SCISSOR_TEST);

    if (!copy.copy_to_xfb && copy.destination_address != 0 && m_efb_copy_fbo != 0 && m_glBlitFramebuffer) {
        // GXCopyTex: Capture EFB sub-region into a GPU texture cached by physical address
        const uint32_t phys_dst = copy.destination_address & 0x3FFFFFFFu;
        const int dst_w = copy.half_scale ? std::max(1, copy_w / 2) : copy_w;
        const int dst_h = copy.half_scale ? std::max(1, copy_h / 2) : copy_h;

        auto& entry = m_efb_textures[phys_dst];
        if (entry.gl_tex == 0) {
            glGenTextures(1, &entry.gl_tex);
        }
        const bool resized = (entry.width != static_cast<uint32_t>(dst_w) || entry.height != static_cast<uint32_t>(dst_h));
        if (resized && m_glTexImage3D) {
            glBindTexture(GL_TEXTURE_2D_ARRAY, entry.gl_tex);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAX_LEVEL, 0);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            m_glTexImage3D(GL_TEXTURE_2D_ARRAY, 0, GL_RGBA8, dst_w, dst_h, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            entry.width = static_cast<uint32_t>(dst_w);
            entry.height = static_cast<uint32_t>(dst_h);
            entry.last_mode0 = 0xFFFFFFFFu;
            entry.last_tex_mode = -1;
        }

        // tp_realFormat = (fmt / 2) + (fmt & 1) * 8
        const uint32_t real_fmt = (copy.target_format >> 1) + ((copy.target_format & 1u) << 3);
        const bool efb_has_alpha = (copy.efb_pixel_format == 1u);
        if (real_fmt == 0u || real_fmt == 1u || (copy.intensity_format && real_fmt < 2u)) {
            entry.tex_mode = 2; // Intensity (I4/I8): R=G=B=A=Y
        } else if (real_fmt == 2u || real_fmt == 3u) {
            entry.tex_mode = efb_has_alpha ? 3 : 2; // IA4/IA8
        } else if (!efb_has_alpha || real_fmt == 4u) {
            entry.tex_mode = 1; // RGB without alpha channel (A = 1.0)
        } else {
            entry.tex_mode = 0; // Full RGBA
        }
        if (resized || entry.last_tex_mode != entry.tex_mode) {
            glBindTexture(GL_TEXTURE_2D_ARRAY, entry.gl_tex);
            ApplyGxTextureSwizzle(entry.tex_mode);
            entry.last_tex_mode = entry.tex_mode;
            glBindTexture(GL_TEXTURE_2D_ARRAY, 0);
        } else if (resized) {
            glBindTexture(GL_TEXTURE_2D_ARRAY, 0);
        }

        m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
        m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
        if (m_glFramebufferTextureLayer) {
            m_glFramebufferTextureLayer(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, entry.gl_tex, 0, 0);
        }
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        // Flip Y on copy so texture t=0 corresponds to the top edge of GX
        m_glBlitFramebuffer(src_x0, gl_src_y1, src_x1, gl_src_y0,
                            0, 0, dst_w, dst_h,
                            GL_COLOR_BUFFER_BIT, copy.half_scale ? GL_LINEAR : GL_NEAREST);
        entry.ram_snapshot_hash = SampleRamSignature(phys_dst);
        entry.valid = true;
    } else if (copy.copy_to_xfb && m_efb_display_fbo != 0 && m_glBlitFramebuffer) {
        if (m_draws_since_clear > 0) {
            m_zero_draw_xfb_streak = 0u;
        } else {
            ++m_zero_draw_xfb_streak;
        }
        // Allow blitting consecutive frames with no draws (>=2) so real fade-to-black transitions are not suppressed.
        if (m_draws_since_clear > 0 || !m_efb_has_displayable_frame || m_zero_draw_xfb_streak >= 2u) {
            // Y coordinates in m_efb_fbo (640x528, GL bottom-left origin vs GX top-left origin)
            const int blit_x0 = src_x0;
            const int blit_y0 = gl_src_y0;
            const int blit_x1 = src_x1;
            const int blit_y1 = gl_src_y1;

            m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
            m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_display_fbo);
            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            m_glBlitFramebuffer(blit_x0, blit_y0, blit_x1, blit_y1,
                                0, 0, DISP_WIDTH, DISP_HEIGHT,
                                GL_COLOR_BUFFER_BIT, GL_LINEAR);
            m_last_disp_src_x = blit_x0;
            m_last_disp_src_y = src_y0;
            m_last_disp_w = blit_x1 - blit_x0;
            m_last_disp_h = copy_h;
            m_efb_has_displayable_frame = true;
        }
        m_xfb_copied_this_frame = true;
    }


    if (copy.clear) {
        m_last_clear_color = copy.clear_color;
        m_glBindFramebuffer(GL_FRAMEBUFFER, m_efb_fbo);
        glEnable(GL_SCISSOR_TEST);
        glScissor(src_x0, gl_src_y0, copy_w, copy_h);
        glColorMask(copy.clear_color_update ? GL_TRUE : GL_FALSE,
                    copy.clear_color_update ? GL_TRUE : GL_FALSE,
                    copy.clear_color_update ? GL_TRUE : GL_FALSE,
                    copy.clear_alpha_update ? GL_TRUE : GL_FALSE);
        glDepthMask(copy.clear_z_update ? GL_TRUE : GL_FALSE);

        const bool efb_has_alpha = (copy.efb_pixel_format == 1u);
        const GLclampf a = efb_has_alpha ? (static_cast<float>((copy.clear_color >> 24) & 0xFFu) / 255.0f) : 1.0f;
        const GLclampf b = static_cast<float>((copy.clear_color >> 16) & 0xFFu) / 255.0f;
        const GLclampf g = static_cast<float>((copy.clear_color >> 8) & 0xFFu) / 255.0f;
        const GLclampf r = static_cast<float>(copy.clear_color & 0xFFu) / 255.0f;
        glClearColor(r, g, b, a);
        glClearDepth(static_cast<double>(copy.clear_depth & 0xFFFFFFu) / 16777215.0);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glDisable(GL_SCISSOR_TEST);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glDepthMask(GL_TRUE);
        if ((copy.copy_to_xfb || (copy_w >= 512 && copy_h >= 448)) && copy.clear_color_update) {
            m_has_drawn_in_efb = false;
            m_draws_since_clear = 0;
        }
    }

    m_glBindFramebuffer(GL_FRAMEBUFFER, 0);
#endif
}

void Ggsea4RenderDevice::CaptureDisplayToEfbTexture(u32 dst_addr, u32 width, u32 height) {
#if defined(_WIN32)
    const uint32_t phys_dst = dst_addr & 0x3FFFFFFFu;
    if (phys_dst == 0u || m_efb_copy_fbo == 0 || !m_glBindFramebuffer || !m_glBlitFramebuffer) {
        return;
    }
    const int dst_w = (width > 0u && width <= EFB_WIDTH) ? static_cast<int>(width) : 512;
    const int dst_h = (height > 0u && height <= EFB_HEIGHT) ? static_cast<int>(height) : 448;

    auto& entry = m_efb_textures[phys_dst];
    InvalidateGlStateCache();
    if (entry.gl_tex == 0) {
        glGenTextures(1, &entry.gl_tex);
    }
    entry.tex_mode = 1; // RGB opaco (A = 1.0)
    const bool resized = (entry.width != static_cast<uint32_t>(dst_w) || entry.height != static_cast<uint32_t>(dst_h));
    if ((resized && m_glTexImage3D) || entry.last_tex_mode != entry.tex_mode) {
        glBindTexture(GL_TEXTURE_2D_ARRAY, entry.gl_tex);
        if (resized && m_glTexImage3D) {
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAX_LEVEL, 0);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            m_glTexImage3D(GL_TEXTURE_2D_ARRAY, 0, GL_RGBA8, dst_w, dst_h, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            entry.width = static_cast<uint32_t>(dst_w);
            entry.height = static_cast<uint32_t>(dst_h);
            entry.last_mode0 = 0xFFFFFFFFu;
        }
        ApplyGxTextureSwizzle(entry.tex_mode);
        entry.last_tex_mode = entry.tex_mode;
        glBindTexture(GL_TEXTURE_2D_ARRAY, 0);
    }

    if (m_efb_has_displayable_frame && m_efb_display_fbo != 0) {
        m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_display_fbo);
        m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
        if (m_glFramebufferTextureLayer) {
            m_glFramebufferTextureLayer(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, entry.gl_tex, 0, 0);
        }
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        // Invertir Y: en m_efb_display_fbo y=DISP_HEIGHT es arriba y y=0 es abajo; en entry.gl_tex t=0 es arriba
        m_glBlitFramebuffer(0, DISP_HEIGHT, DISP_WIDTH, 0,
                            0, 0, dst_w, dst_h,
                            GL_COLOR_BUFFER_BIT, GL_LINEAR);
    } else if (m_efb_fbo != 0) {
        m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
        m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
        if (m_glFramebufferTextureLayer) {
            m_glFramebufferTextureLayer(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, entry.gl_tex, 0, 0);
        }
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        m_glBlitFramebuffer(0, EFB_HEIGHT, dst_w, EFB_HEIGHT - dst_h,
                            0, 0, dst_w, dst_h,
                            GL_COLOR_BUFFER_BIT, GL_LINEAR);
    }
    m_glBindFramebuffer(GL_FRAMEBUFFER, 0);
    entry.ram_snapshot_hash = SampleRamSignature(phys_dst);
    entry.valid = true;
#else
    (void)dst_addr;
    (void)width;
    (void)height;
#endif
}

void Ggsea4RenderDevice::PresentXfb(const moderngekko::GxXfbPresent& present)  {
    if (present.address != 0) {
        m_last_xfb_address = present.address;
    }
}

void Ggsea4RenderDevice::RenderFrameToWindow(CPUState* cpu, u32 vi_xfb_addr, u32 client_w, u32 client_h,
                         u32 frame_idx, u64 gx_cmd_count, bool in_mgso_loop,
                         AspectRatioMode aspect_mode, bool show_debug_hud) {
    m_current_frame = (frame_idx > 0) ? frame_idx : (m_current_frame + 1);
#if defined(_WIN32)
    InvalidateGlStateCache();
    if (m_glBindFramebuffer) {
        m_glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }
    m_current_program = 0;

    GLint vp_x = 0;
    GLint vp_y = 0;
    GLsizei vp_w = static_cast<GLsizei>(client_w);
    GLsizei vp_h = static_cast<GLsizei>(client_h);

    if (aspect_mode != AspectRatioMode::Stretch && client_w > 0 && client_h > 0) {
        const float target_aspect = (aspect_mode == AspectRatioMode::Widescreen_16_9) ? (16.0f / 9.0f) : (4.0f / 3.0f);
        const float window_aspect = static_cast<float>(client_w) / static_cast<float>(client_h);

        if (window_aspect > target_aspect) {
            vp_h = static_cast<GLsizei>(client_h);
            vp_w = static_cast<GLsizei>(client_h * target_aspect);
            vp_x = static_cast<GLint>((client_w - vp_w) / 2);
            vp_y = 0;
        } else {
            vp_w = static_cast<GLsizei>(client_w);
            vp_h = static_cast<GLsizei>(client_w / target_aspect);
            vp_x = 0;
            vp_y = static_cast<GLint>((client_h - vp_h) / 2);
        }
    }

    // 1. Reset OpenGL pipeline states to ensure clean, unaltered presentation
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDepthMask(GL_TRUE);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_COLOR_LOGIC_OP);
    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    if (m_glBlendEquation) {
        m_glBlendEquation(GL_FUNC_ADD);
    }

    // 2. Clear outer bars with pure black (pillarbox / letterbox)
    glViewport(0, 0, static_cast<GLsizei>(client_w), static_cast<GLsizei>(client_h));
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set aspect-ratio viewport
    glViewport(vp_x, vp_y, vp_w, vp_h);

    // 3. Check if an active XFB exists in MEM1 with YUY2 video data (only if no EFB frame is ready)
    u32 xfb_addr = (vi_xfb_addr != 0) ? vi_xfb_addr : m_last_xfb_address;
    bool xfb_valid = false;
    if (!(m_efb_has_displayable_frame && m_efb_display_tex != 0) && xfb_addr != 0) {
        const u32 phys = xfb_addr & 0x3FFFFFFFu;
        const u32 xfb_bytes = 640u * 480u * 2u;
        const std::uint8_t* xfb_ptr = m_memory.Resolve(phys, xfb_bytes);
        if (xfb_ptr != nullptr) {
            xfb_valid = convert_xfb_yuy2_to_rgba8(xfb_ptr, 640, 480, 640 * 2, m_xfb_rgba.data());
        }
    }
    m_last_xfb_valid = xfb_valid;

    if (m_audit_dolphin_shaders && frame_idx % 50 == 0) {
        std::printf("[RENDER-SRC] frame=%u vi_xfb=0x%08X last_xfb=0x%08X xfb_valid=%d efb_has=%d has_drawn=%d draws=%llu\n",
                    frame_idx, vi_xfb_addr, m_last_xfb_address, xfb_valid ? 1 : 0, m_efb_has_displayable_frame ? 1 : 0,
                    m_has_drawn_in_efb ? 1 : 0, static_cast<unsigned long long>(m_draw_count));
    }

    // If there were EFB draws but GXCopyDisp has not run yet, capture the top 640x480 region as initial fallback
    if (!m_efb_has_displayable_frame && !m_xfb_copied_this_frame && !m_video_frame_captured && m_has_drawn_in_efb && m_efb_fbo != 0 &&
        m_efb_display_fbo != 0 && m_glBindFramebuffer && m_glBlitFramebuffer) {
        m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
        m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_display_fbo);
        m_glBlitFramebuffer(0, EFB_HEIGHT - DISP_HEIGHT, DISP_WIDTH, EFB_HEIGHT,
                            0, 0, DISP_WIDTH, DISP_HEIGHT,
                            GL_COLOR_BUFFER_BIT, GL_LINEAR);
        m_glBindFramebuffer(GL_FRAMEBUFFER, 0);
        m_efb_has_displayable_frame = true;
    }

    auto draw_present_tex = [&](GLuint tex_id, int flip_y) {
        if (!m_present_prog || !m_present_vao || !m_glUseProgram || !m_glBindVertexArray) return;
        if (m_glActiveTexture) {
            m_glActiveTexture(GL_TEXTURE0);
        }
        glBindTexture(GL_TEXTURE_2D, tex_id);
        m_glUseProgram(m_present_prog);
        if (m_present_flip_loc >= 0 && m_glUniform1i) {
            m_glUniform1i(m_present_flip_loc, flip_y);
        }
        m_glBindVertexArray(m_present_vao);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        m_glBindVertexArray(0);
        m_glUseProgram(0);
        glBindTexture(GL_TEXTURE_2D, 0);
    };

    auto draw_hud_prims = [&](GLenum mode, const float* verts, size_t vert_count,
                              float r, float g, float b, float a) {
        if (!m_hud_prog || !m_hud_vao || !m_hud_vbo || !m_glUseProgram ||
            !m_glBindVertexArray || !m_glBindBuffer || !m_glBufferSubData || vert_count == 0) {
            return;
        }
        m_glUseProgram(m_hud_prog);
        if (m_hud_color_loc >= 0 && m_glUniform4f) {
            m_glUniform4f(m_hud_color_loc, r, g, b, a);
        }
        m_glBindVertexArray(m_hud_vao);
        m_glBindBuffer(GL_ARRAY_BUFFER, m_hud_vbo);
        m_glBufferSubData(GL_ARRAY_BUFFER, 0,
                          static_cast<GLsizeiptr>(vert_count * 2u * sizeof(float)), verts);
        glDrawArrays(mode, 0, static_cast<GLsizei>(vert_count));
        m_glBindBuffer(GL_ARRAY_BUFFER, 0);
        m_glBindVertexArray(0);
        m_glUseProgram(0);
    };

    auto draw_hud_rect = [&](float x0, float y0, float x1, float y1,
                             float r, float g, float b, float a) {
        const float tri_verts[12] = {
            x0, y0,  x1, y0,  x1, y1,
            x0, y0,  x1, y1,  x0, y1
        };
        draw_hud_prims(GL_TRIANGLES, tri_verts, 6u, r, g, b, a);
    };

    if (m_efb_has_displayable_frame && m_efb_display_tex != 0) {
        // Virtual EFB presentation (native GX GPU rendering) - PRIORITY 1
        draw_present_tex(m_efb_display_tex, 0);
    } else if (xfb_valid) {
        // XFB presentation (GameCube scanout from main memory) - FALLBACK
        if (m_glActiveTexture) m_glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, m_xfb_tex);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 640, 480, GL_RGBA, GL_UNSIGNED_BYTE, m_xfb_rgba.data());
        draw_present_tex(m_xfb_tex, 1);
    } else if (m_draw_count == 0) {
        // Tactical MGS: The Twin Snakes style background (Codec / Radar) while XFB/GX initializes
        glClearColor(0.03f, 0.07f, 0.06f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glEnable(GL_BLEND);
        if (m_glBlendFuncSeparate) {
            m_glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        } else {
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        }

        float grid_verts[19u * 8u]{};
        for (int i = -9; i <= 9; ++i) {
            const float p = i * 0.1f;
            const size_t base = static_cast<size_t>(i + 9) * 8u;
            grid_verts[base + 0u] = p;     grid_verts[base + 1u] = -1.0f;
            grid_verts[base + 2u] = p;     grid_verts[base + 3u] =  1.0f;
            grid_verts[base + 4u] = -1.0f; grid_verts[base + 5u] = p;
            grid_verts[base + 6u] =  1.0f; grid_verts[base + 7u] = p;
        }
        draw_hud_prims(GL_LINES, grid_verts, 19u * 4u, 0.10f, 0.35f, 0.28f, 0.35f);

        const float pulse = 0.5f + 0.5f * std::sin(static_cast<float>(frame_idx) * 0.1f);
        draw_hud_rect(-0.92f, 0.82f, in_mgso_loop ? 0.92f : 0.25f, 0.88f,
                      0.15f, 0.75f * pulse + 0.2f, 0.55f, 0.85f);
        glDisable(GL_BLEND);
    }

    // 4. Tactical Diagnostic Overlay (HUD - Toggleable with F1 key)
    if (show_debug_hud) {
        glEnable(GL_BLEND);
        if (m_glBlendFuncSeparate) {
            m_glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        } else {
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        }

        // Semi-transparent tactical panel at the bottom edge
        draw_hud_rect(-0.98f, -0.98f, 0.98f, -0.80f, 0.01f, 0.06f, 0.04f, 0.82f);

        // Panel border
        const float border_verts[8] = {
            -0.98f, -0.98f,
             0.98f, -0.98f,
             0.98f, -0.80f,
            -0.98f, -0.80f
        };
        draw_hud_prims(GL_LINE_LOOP, border_verts, 4u, 0.15f, 0.65f, 0.45f, 0.90f);

        // Active source indicator
        if (xfb_valid) {
            draw_hud_rect(-0.95f, -0.94f, -0.90f, -0.84f, 0.1f, 0.85f, 1.0f, 1.0f);
        } else if (m_efb_has_displayable_frame || m_has_drawn_in_efb) {
            draw_hud_rect(-0.95f, -0.94f, -0.90f, -0.84f, 0.2f, 1.0f, 0.4f, 1.0f);
        } else {
            draw_hud_rect(-0.95f, -0.94f, -0.90f, -0.84f, 1.0f, 0.75f, 0.1f, 1.0f);
        }

        // Visual geometry activity bar
        float activity_len = 0.05f;
        if (m_vertex_count > 0) {
            activity_len = std::min(1.75f, 0.05f + static_cast<float>(m_vertex_count % 100000) / 100000.0f * 1.70f);
        }
        draw_hud_rect(-0.88f, -0.92f, -0.88f + activity_len, -0.86f, 0.15f, 0.70f, 0.50f, 0.75f);

        glDisable(GL_BLEND);
    }

    (void)cpu;
    (void)gx_cmd_count;
#endif
}

bool Ggsea4RenderDevice::SaveEfbToBmp(const char* filepath) {
#if defined(_WIN32)
    if (m_efb_display_tex != 0) {
        InvalidateGlStateCache();
        const size_t row_stride = (static_cast<size_t>(DISP_WIDTH) * 3u + 3u) & ~size_t(3u);
        std::vector<u8> pixels(row_stride * static_cast<size_t>(DISP_HEIGHT), 0);
        glPixelStorei(GL_PACK_ALIGNMENT, 4);
        if (m_glActiveTexture) m_glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, m_efb_display_tex);
        glGetTexImage(GL_TEXTURE_2D, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels.data());
        glBindTexture(GL_TEXTURE_2D, 0);
        return write_bgr24_bmp(filepath, DISP_WIDTH, DISP_HEIGHT, pixels.data(), row_stride);
    }
#endif
    return false;
}

bool Ggsea4RenderDevice::SaveRawEfbToBmp(const char* filepath) {
#if defined(_WIN32)
    if (m_efb_color_tex != 0) {
        InvalidateGlStateCache();
        const size_t row_stride = (static_cast<size_t>(EFB_WIDTH) * 3u + 3u) & ~size_t(3u);
        std::vector<u8> pixels(row_stride * static_cast<size_t>(EFB_HEIGHT), 0);
        glPixelStorei(GL_PACK_ALIGNMENT, 4);
        if (m_glActiveTexture) m_glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, m_efb_color_tex);
        glGetTexImage(GL_TEXTURE_2D, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels.data());
        glBindTexture(GL_TEXTURE_2D, 0);
        return write_bgr24_bmp(filepath, EFB_WIDTH, EFB_HEIGHT, pixels.data(), row_stride);
    }
#endif
    return false;
}

#if defined(_WIN32)
GLuint Ggsea4RenderDevice::ResolveStageTexture(uint8_t stage, const moderngekko::GxStateView& state,
                           uint32_t* out_w, uint32_t* out_h, int* out_mode) {
    const uint8_t st = stage & 7u;
    const uint8_t bank = (st < 4u) ? 0x80u : 0xA0u;
    const uint8_t sidx = st & 3u;
    const uint32_t raw_mode0 = state.bp[bank + sidx];
    const uint32_t raw_img0 = state.bp[bank + 8u + sidx];
    const uint32_t raw_tmem = state.bp[bank + 12u + sidx];
    const uint32_t raw_addr = state.bp[bank + 20u + sidx];
    const uint32_t raw_tlut = state.bp[bank + 24u + sidx];
    auto& st_cache = m_stage_tex_cache[st];
    if (st_cache.valid && st_cache.frame == m_current_frame && st_cache.tmem_gen == state.tmem_generation &&
        st_cache.mode0 == raw_mode0 && st_cache.image0 == raw_img0 &&
        st_cache.tmem_even == raw_tmem && st_cache.addr_reg == raw_addr && st_cache.tlut == raw_tlut) {
        *out_w = st_cache.w;
        *out_h = st_cache.h;
        *out_mode = st_cache.mode;
        return st_cache.gl_tex;
    }

    const auto tex_desc = moderngekko::GxTextureDescriptor::FromState(stage, state);
    if (tex_desc.width == 0 || tex_desc.height == 0) {
        *out_w = 1u;
        *out_h = 1u;
        *out_mode = 0;
        return m_dummy_white_tex;
    }

    *out_w = tex_desc.width;
    *out_h = tex_desc.height;

    // 1. Prioritize GPU EFB-to-Texture copy if the underlying RAM region was not overwritten by CPU/DMA
    const uint32_t phys_addr = tex_desc.address & 0x3FFFFFFFu;
    if (phys_addr != 0u && phys_addr < 0x01800000u) {
        auto efb_it = m_efb_textures.find(phys_addr);
        if (efb_it != m_efb_textures.end() && efb_it->second.valid && efb_it->second.gl_tex != 0) {
            if (SampleRamSignature(phys_addr) == efb_it->second.ram_snapshot_hash) {
                if (efb_it->second.last_mode0 != tex_desc.mode0 ||
                    efb_it->second.last_tex_mode != efb_it->second.tex_mode) {
                    FlushPendingBatch();
                    if (m_glActiveTexture && m_active_tex_unit != st) {
                        m_glActiveTexture(GL_TEXTURE0 + st);
                        m_active_tex_unit = st;
                    }
                    glBindTexture(GL_TEXTURE_2D_ARRAY, efb_it->second.gl_tex);
                    ApplyGxSamplerParams(tex_desc.mode0, efb_it->second.tex_mode);
                    efb_it->second.last_mode0 = tex_desc.mode0;
                    efb_it->second.last_tex_mode = efb_it->second.tex_mode;
                    m_bound_tex[st] = efb_it->second.gl_tex;
                }
                *out_mode = efb_it->second.tex_mode;
                return efb_it->second.gl_tex;
            }
            efb_it->second.valid = false;
        }
    }

    // 2. Resolve encoded bytes in MEM1 / VM (0x7Fxxxxxx) or preloaded TMEM
    const size_t enc_size = moderngekko::GxTextureDecoder::EncodedSize(
        tex_desc.width, tex_desc.height, tex_desc.format);
    if (enc_size == 0) {
        *out_mode = 0;
        return m_dummy_white_tex;
    }

    const std::uint8_t* enc_ptr = nullptr;
    if (tex_desc.address != 0u) {
        enc_ptr = ResolveMemoryAddress(tex_desc.address, enc_size);
    }
    if (!enc_ptr && !state.tmem.empty() && tex_desc.tmem_even + enc_size <= state.tmem.size()) {
        enc_ptr = state.tmem.data() + tex_desc.tmem_even;
    }

    if (!enc_ptr) {
        if (m_draw_count <= 40 || (m_draw_count >= 80 && m_draw_count <= 95) || (m_draw_count >= 394020 && m_draw_count <= 394060)) {
            std::printf("  [TEX-FAIL %llu] stage=%u addr=0x%08X %ux%u fmt=%u enc_size=%zu\n",
                        static_cast<unsigned long long>(m_draw_count), stage, tex_desc.address,
                        tex_desc.width, tex_desc.height, static_cast<unsigned>(tex_desc.format), enc_size);
        }
        *out_mode = 0;
        return m_dummy_white_tex;
    } else if (m_draw_count <= 40 || (m_draw_count >= 80 && m_draw_count <= 95) || (m_draw_count >= 394020 && m_draw_count <= 394060)) {
        std::printf("  [TEX-OK %llu] stage=%u addr=0x%08X %ux%u fmt=%u enc_size=%zu enc_ptr=%p\n",
                    static_cast<unsigned long long>(m_draw_count), stage, tex_desc.address,
                    tex_desc.width, tex_desc.height, static_cast<unsigned>(tex_desc.format), enc_size, enc_ptr);
    }

    // 3. Resolve TLUT palette from TMEM if format is indexed (C4 / C8 / C14X2)
    const size_t pal_entries = moderngekko::GxTextureDecoder::PaletteEntries(tex_desc.format);
    const size_t pal_bytes = pal_entries * 2u;
    std::span<const std::uint8_t> pal_span{};
    if (pal_bytes > 0u) {
        if (!state.tmem.empty() && tex_desc.palette_offset + pal_bytes <= state.tmem.size()) {
            pal_span = state.tmem.subspan(tex_desc.palette_offset, pal_bytes);
        } else {
            *out_mode = 0;
            return m_dummy_white_tex;
        }
    }

    int tex_mode = 0; // RGBA
    if (tex_desc.format == moderngekko::GxTextureFormat::I4 ||
        tex_desc.format == moderngekko::GxTextureFormat::I8) {
        tex_mode = 2; // Intensity -> IIII
    } else if (tex_desc.format == moderngekko::GxTextureFormat::IA4 ||
               tex_desc.format == moderngekko::GxTextureFormat::IA8 ||
               (pal_bytes > 0u && tex_desc.palette_format == moderngekko::GxPaletteFormat::IA8)) {
        tex_mode = 3; // Intensity-Alpha -> IIIA
    } else if (tex_desc.format == moderngekko::GxTextureFormat::RGB565 ||
               (pal_bytes > 0u && tex_desc.palette_format == moderngekko::GxPaletteFormat::RGB565)) {
        tex_mode = 1; // Opaque RGB (A=1)
    }
    *out_mode = tex_mode;

    const RamTexKey key{
        tex_desc.address,
        tex_desc.width,
        tex_desc.height,
        static_cast<uint8_t>(tex_desc.format),
        static_cast<uint8_t>(tex_desc.palette_format),
        tex_desc.palette_offset
    };

    const bool is_linear_yuv = (tex_desc.format == moderngekko::GxTextureFormat::I8 &&
                               ((tex_desc.width == 512 && tex_desc.height == 320) ||
                                (tex_desc.width == 256 && tex_desc.height == 160)));

    // Early-out #1: Within the same frame, skip hash and memory check (0 ns)
    auto it = m_ram_textures.find(key);
    if (it != m_ram_textures.end() && it->second.uploaded) {
        if (it->second.last_frame_checked == m_current_frame) {
            if (it->second.last_mode0 != tex_desc.mode0 || it->second.last_tex_mode != tex_mode) {
                FlushPendingBatch();
                const uint32_t tex_u = stage & 7u;
                if (m_glActiveTexture && m_active_tex_unit != tex_u) {
                    m_glActiveTexture(GL_TEXTURE0 + tex_u);
                    m_active_tex_unit = tex_u;
                }
                glBindTexture(GL_TEXTURE_2D_ARRAY, it->second.gl_tex);
                ApplyGxSamplerParams(tex_desc.mode0, tex_mode);
                it->second.last_mode0 = tex_desc.mode0;
                it->second.last_tex_mode = tex_mode;
                m_bound_tex[tex_u] = it->second.gl_tex;
            }
            if (!is_linear_yuv) {
                st_cache = {m_current_frame, state.tmem_generation, raw_mode0, raw_img0, raw_tmem, raw_addr, raw_tlut,
                            it->second.gl_tex, tex_desc.width, tex_desc.height, tex_mode, true};
            }
            return it->second.gl_tex;
        }

        if (!is_linear_yuv) {
            // First check on a new frame: ultra-fast sampling
            const uint64_t content_hash = ComputeFastContentHash(enc_ptr, enc_size);
            const uint64_t tlut_hash = (pal_bytes > 0u) ? ComputeFastTlutHash(pal_span) : 0ull;

            if (it->second.content_hash == content_hash && it->second.tlut_hash == tlut_hash) {
                it->second.last_frame_checked = m_current_frame;
                if (it->second.last_mode0 != tex_desc.mode0 || it->second.last_tex_mode != tex_mode) {
                    FlushPendingBatch();
                    if (m_glActiveTexture && m_active_tex_unit != st) {
                        m_glActiveTexture(GL_TEXTURE0 + st);
                        m_active_tex_unit = st;
                    }
                    glBindTexture(GL_TEXTURE_2D_ARRAY, it->second.gl_tex);
                    ApplyGxSamplerParams(tex_desc.mode0, tex_mode);
                    it->second.last_mode0 = tex_desc.mode0;
                    it->second.last_tex_mode = tex_mode;
                    m_bound_tex[st] = it->second.gl_tex;
                }
                st_cache = {m_current_frame, state.tmem_generation, raw_mode0, raw_img0, raw_tmem, raw_addr, raw_tlut,
                            it->second.gl_tex, tex_desc.width, tex_desc.height, tex_mode, true};
                return it->second.gl_tex;
            }
        }
    }

    if (m_audit_dolphin_shaders) {
        static std::unordered_set<uint32_t> s_seen_textures;
        if (s_seen_textures.insert(tex_desc.address).second) {
            std::printf("[NEW-TEX] draw=%llu stage=%u addr=0x%08X %ux%u fmt=%u enc_size=%zu\n",
                        static_cast<unsigned long long>(m_draw_count),
                        stage, tex_desc.address, tex_desc.width, tex_desc.height,
                        static_cast<unsigned>(tex_desc.format), enc_size);
        }
    }

    const uint64_t content_hash = ComputeFastContentHash(enc_ptr, enc_size);
    const uint64_t tlut_hash = (pal_bytes > 0u) ? ComputeFastTlutHash(pal_span) : 0ull;

    auto& entry = m_ram_textures[key];
    moderngekko::GxDecodedTexture& decoded_tex = m_decoded_tex_scratch;
    if (is_linear_yuv) {
        // Silicon Knights linear planar video buffer (Theora / VP3): not organized in 8x4 GX tiles
        decoded_tex.width = tex_desc.width;
        decoded_tex.height = tex_desc.height;
        decoded_tex.rgba8.resize(static_cast<size_t>(tex_desc.width) * tex_desc.height);
        for (size_t p = 0; p < decoded_tex.rgba8.size(); ++p) {
            const u32 val = enc_ptr[p];
            decoded_tex.rgba8[p] = (val << 24) | (val << 16) | (val << 8) | val;
        }
    } else {
        if (!moderngekko::GxTextureDecoder::Decode(
                std::span<const std::uint8_t>(enc_ptr, enc_size),
                tex_desc.width, tex_desc.height, tex_desc.format,
                pal_span, tex_desc.palette_format, &decoded_tex)) {
            return m_dummy_white_tex;
        }
    }

    if (tex_desc.address == 0x000EA860u || m_draw_count == 1) {
        size_t non_zero = 0;
        for (uint32_t px : decoded_tex.rgba8) {
            if (px != 0) ++non_zero;
        }
        std::printf("  [CMPR-LOGO] addr=0x%08X %ux%u non_zero=%zu total=%zu px0=0x%08X pxMid=0x%08X\n",
                    tex_desc.address, decoded_tex.width, decoded_tex.height, non_zero,
                    decoded_tex.rgba8.size(), decoded_tex.rgba8[0],
                    decoded_tex.rgba8[decoded_tex.rgba8.size() / 2]);
    }

    FlushPendingBatch();
    if (m_glActiveTexture && m_active_tex_unit != st) {
        m_glActiveTexture(GL_TEXTURE0 + st);
        m_active_tex_unit = st;
    }
    if (entry.gl_tex == 0) {
        glGenTextures(1, &entry.gl_tex);
    }
    glBindTexture(GL_TEXTURE_2D_ARRAY, entry.gl_tex);
    m_bound_tex[st] = entry.gl_tex;
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    const bool first_upload = !entry.uploaded;
    if (first_upload) {
        glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAX_LEVEL, 0);
        if (m_glTexImage3D) {
            m_glTexImage3D(GL_TEXTURE_2D_ARRAY, 0, GL_RGBA8,
                           static_cast<GLsizei>(decoded_tex.width),
                           static_cast<GLsizei>(decoded_tex.height),
                           1, 0, GL_RGBA, GL_UNSIGNED_INT_8_8_8_8, decoded_tex.rgba8.data());
        }
    } else if (m_glTexSubImage3D) {
        m_glTexSubImage3D(GL_TEXTURE_2D_ARRAY, 0, 0, 0, 0,
                          static_cast<GLsizei>(decoded_tex.width),
                          static_cast<GLsizei>(decoded_tex.height),
                          1, GL_RGBA, GL_UNSIGNED_INT_8_8_8_8, decoded_tex.rgba8.data());
    }
    entry.content_hash = content_hash;
    entry.tlut_hash = tlut_hash;
    entry.tex_mode = tex_mode;
    entry.uploaded = true;
    entry.last_frame_checked = m_current_frame;
    ++m_decoded_texture_count;

    if (first_upload || entry.last_mode0 != tex_desc.mode0 || entry.last_tex_mode != tex_mode) {
        ApplyGxSamplerParams(tex_desc.mode0, tex_mode);
        entry.last_mode0 = tex_desc.mode0;
        entry.last_tex_mode = tex_mode;
    }
    return entry.gl_tex;
}
#endif

