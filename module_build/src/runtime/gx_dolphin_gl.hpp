#pragma once

#include "runtime_common.hpp"

class Ggsea4RenderDevice final : public moderngekko::GxRenderDevice {
public:
    static constexpr int EFB_WIDTH = 640;
    static constexpr int EFB_HEIGHT = 528;
    static constexpr int DISP_WIDTH = 640;
    static constexpr int DISP_HEIGHT = 480;

    explicit Ggsea4RenderDevice(moderngekko::AddressSpace& memory) : m_memory(memory) {
        moderngekko::DolphinShaderCompiler::SetCacheDirectory("shader_cache");
        m_xfb_rgba.resize(DISP_WIDTH * DISP_HEIGHT, 0xFF000000u);
    }

    ~Ggsea4RenderDevice() override {
        ShutdownGlResources();
    }

    void ShutdownGlResources();

    GLuint CompileRawGlShader(GLenum type, const char* src, const char* label);

    void InitCorePresentShaders();

    void InitGlResources();

#if defined(_WIN32)
    static constexpr const char* kDolphinGlslHeader =
        "#version 450 core\n"
        "#define FORCE_EARLY_Z layout(early_fragment_tests) in\n"
        "#define ATTRIBUTE_LOCATION(x) layout(location = x)\n"
        "#define FRAGMENT_OUTPUT_LOCATION(x) layout(location = x)\n"
        "#define FRAGMENT_OUTPUT_LOCATION_INDEXED(x, y) layout(location = x, index = y)\n"
        "#define UBO_BINDING(packing, x) layout(packing, binding = x)\n"
        "#define SAMPLER_BINDING(x) layout(binding = x)\n"
        "#define TEXEL_BUFFER_BINDING(x) layout(binding = x)\n"
        "#define SSBO_BINDING(x) layout(std430, binding = x)\n"
        "#define IMAGE_BINDING(format, x) layout(format, binding = x)\n"
        "#define VARYING_LOCATION(x)\n"
        "#define API_OPENGL 1\n"
        "#define float2 vec2\n"
        "#define float3 vec3\n"
        "#define float4 vec4\n"
        "#define uint2 uvec2\n"
        "#define uint3 uvec3\n"
        "#define uint4 uvec4\n"
        "#define int2 ivec2\n"
        "#define int3 ivec3\n"
        "#define int4 ivec4\n"
        "#define frac fract\n"
        "#define lerp mix\n";

    GLuint CompileDolphinGlShader(GLenum type, const std::string& body, uint64_t uid);

    GLuint GetOrCompileDolphinProgram(const moderngekko::GxStateView& state,
                                      moderngekko::GxTopology topology,
                                      uint8_t vat,
                                      const moderngekko::DolphinShaderCapabilities& caps,
                                      const moderngekko::DolphinShaderOptions& opts);

    void ComputeViewportAndScissor(const moderngekko::GxStateView& state,
                                   float* out_wd_half, float* out_ht_half,
                                   float* out_zrange, float* out_farz,
                                   GLint* out_vp_x, GLint* out_vp_y, GLsizei* out_vp_w, GLsizei* out_vp_h,
                                   double* out_depth_n, double* out_depth_f,
                                   bool* out_sc_enabled, int* out_sc_x, int* out_sc_y, int* out_sc_w, int* out_sc_h);

    size_t UploadEboIndices(const uint32_t* indices, size_t idx_count);

    bool SubmitDolphinDraw(const moderngekko::GxDrawPacket& packet,
                           const moderngekko::GxDecodedDraw& decoded,
                           const moderngekko::GxStateView& state);
#endif

    void SubmitDraw(const moderngekko::GxDrawPacket& packet,
                    const moderngekko::GxStateView& state) override;

    void SubmitDecodedDraw(const moderngekko::GxDrawPacket& packet,
                           const moderngekko::GxDecodedDraw& decoded,
                           const moderngekko::GxStateView& state) override;

    void CopyEfb(const moderngekko::GxEfbCopy& copy) override;

    void CaptureDisplayToEfbTexture(u32 dst_addr, u32 width, u32 height);

    void PresentXfb(const moderngekko::GxXfbPresent& present) override;

    void RenderFrameToWindow(CPUState* cpu, u32 vi_xfb_addr, u32 client_w, u32 client_h,
                             u32 frame_idx, u64 gx_cmd_count, bool in_mgso_loop,
                             AspectRatioMode aspect_mode, bool show_debug_hud);

    std::uint64_t GetDrawCount() const { return m_draw_count; }
    std::uint64_t GetVertexCount() const { return m_vertex_count; }
    std::uint64_t GetShaderCompileCount() const { return m_shader_compile_count; }
    std::uint64_t GetDecodedTextureCount() const { return m_decoded_texture_count; }
    std::uint64_t GetEfbCopyCount() const { return m_efb_copy_count; }
    std::uint32_t GetLastXfbAddress() const { return m_last_xfb_address; }
    bool IsXfbActive() const { return m_last_xfb_valid; }
    bool HasEfbFrame() const { return m_efb_has_displayable_frame || m_has_drawn_in_efb; }
    void SetAuditDolphinShaders(bool enable) { m_audit_dolphin_shaders = enable; }
    void SetUseDolphinPipeline(bool enable) { m_use_dolphin_pipeline = enable; }
    bool IsUsingDolphinPipeline() const { return m_use_dolphin_pipeline; }
    std::uint64_t GetDolphinShaderErrorCount() const { return m_dolphin_shader_errors; }
    std::size_t GetDolphinProgramCount() const { return m_dolphin_prog_cache.size(); }
    bool HasNewContentToPresent() const {
        return (m_draw_count > m_last_presented_draws) ||
               (m_efb_copy_count > m_last_presented_efb_copies) ||
               m_new_video_frame_captured;
    }
    bool WasXfbCopiedThisFrame() const {
        return m_xfb_copied_this_frame;
    }
    bool HasNewVideoFrame() const {
        return m_new_video_frame_captured;
    }
    bool IsEfbPipelineActive() const {
        return m_efb_has_displayable_frame;
    }
    void MarkPresented() {
        m_last_presented_draws = m_draw_count;
        m_last_presented_efb_copies = m_efb_copy_count;
        m_new_video_frame_captured = false;
        m_xfb_copied_this_frame = false;
        m_video_frame_captured = false;
    }

    bool SaveEfbToBmp(const char* filepath);

    bool SaveRawEfbToBmp(const char* filepath);

private:
    struct GpuVertex {
        float pos[4];
        float col0[4];
        float col1[4];
        float uv[8][3];
    };

    struct DolphinGpuVertex {
        float pos[3];
        uint32_t posmtx;
        float nrm[3];
        float tan[3];
        float binrm[3];
        uint32_t col0;
        uint32_t col1;
        float uv[8][3];
    };

    static inline uint32_t ByteSwap32(uint32_t v) {
        return (v >> 24) | ((v >> 8) & 0xFF00u) | ((v & 0xFF00u) << 8) | (v << 24);
    }

    struct DolphinProgramKey {
        uint64_t vertex_uid = 0;
        uint64_t pixel_uid = 0;
        bool operator==(const DolphinProgramKey&) const = default;
    };

    struct DolphinProgramKeyHash {
        size_t operator()(const DolphinProgramKey& k) const noexcept {
            uint64_t h = 14695981039346656037ull;
            h ^= k.vertex_uid;
            h *= 1099511628211ull;
            h ^= k.pixel_uid;
            h *= 1099511628211ull;
            return static_cast<size_t>(h);
        }
    };

#if defined(_WIN32)
    struct EfbTexEntry {
        GLuint gl_tex = 0;
        uint32_t width = 0;
        uint32_t height = 0;
        int tex_mode = 0; // 0=RGBA, 1=RGB1, 2=IIII, 3=IIIA
        uint64_t ram_snapshot_hash = 0;
        uint32_t last_mode0 = 0xFFFFFFFFu;
        int last_tex_mode = -1;
        bool valid = false;
    };

    struct RamTexKey {
        uint32_t addr = 0;
        uint16_t width = 0;
        uint16_t height = 0;
        uint8_t format = 0;
        uint8_t pal_format = 0;
        uint32_t pal_offset = 0;
        bool operator==(const RamTexKey&) const = default;
    };

    struct RamTexKeyHash {
        size_t operator()(const RamTexKey& k) const noexcept {
            uint64_t h = 14695981039346656037ull;
            auto mix = [&](uint64_t v) {
                h ^= v;
                h *= 1099511628211ull;
            };
            mix(k.addr);
            mix((static_cast<uint64_t>(k.width) << 16) | k.height);
            mix((static_cast<uint64_t>(k.format) << 8) | k.pal_format);
            mix(k.pal_offset);
            return static_cast<size_t>(h);
        }
    };

    struct RamTexEntry {
        GLuint gl_tex = 0;
        uint64_t content_hash = 0;
        uint64_t tlut_hash = 0;
        int tex_mode = 0;
        bool uploaded = false;
        uint32_t last_frame_checked = 0;
        uint32_t last_mode0 = 0xFFFFFFFFu;
        int last_tex_mode = -1;
    };

    struct TevShaderKey {
        uint32_t num_stages = 1;
        uint32_t bp_configured = 0;
        uint32_t alpha_logic_ops = 0; // (bp[0xF3] >> 16) & 0xFF
        std::array<uint32_t, 8> tref{};
        std::array<uint32_t, 32> tev_env{};
        std::array<uint32_t, 8> ksel{};
        bool operator==(const TevShaderKey&) const = default;
    };

    struct TevShaderKeyHash {
        size_t operator()(const TevShaderKey& k) const noexcept {
            uint64_t h = 14695981039346656037ull;
            auto mix = [&](uint32_t v) {
                h ^= v;
                h *= 1099511628211ull;
            };
            mix(k.num_stages);
            mix(k.bp_configured);
            mix(k.alpha_logic_ops);
            for (uint32_t v : k.tref) mix(v);
            for (uint32_t v : k.tev_env) mix(v);
            for (uint32_t v : k.ksel) mix(v);
            return static_cast<size_t>(h);
        }
    };

    struct TevProgramEntry {
        GLuint program = 0;
        GLint loc_tev_reg = -1;
        GLint loc_konst = -1;
        GLint loc_tex_inv_wh = -1;
        GLint loc_su_scale = -1;
        GLint loc_tex_mode = -1;
        GLint loc_alpha_ref = -1;
        GLint loc_const_alpha = -1;
        std::string fragment_source;
        bool uniforms_valid = false;
        std::array<float, 16> last_tev_colors{};
        std::array<float, 16> last_konst{};
        std::array<float, 32> last_tex_inv_wh{};
        std::array<float, 32> last_su_scale{};
        std::array<GLint, 8> last_tex_mode{};
        float last_alpha_r0 = -1.0f;
        float last_alpha_r1 = -1.0f;
        float last_ca0 = -1.0f;
        float last_ca1 = -1.0f;
    };

#include "ggsea4_tev_precache.inl"

    const std::uint8_t* ResolveMemoryAddress(uint32_t addr, size_t size) const {
        if (addr == 0u || size == 0u) return nullptr;
        if (addr >= 0x7F000000u && addr < 0x80000000u) {
            const uint32_t vm_off = addr - 0x7F000000u;
            auto mem2 = m_memory.GetMem2();
            if (vm_off + size <= mem2.size()) {
                return mem2.data() + vm_off;
            }
            return nullptr;
        }
        return m_memory.Resolve(addr, size);
    }

    uint64_t SampleRamSignature(uint32_t addr) const {
        const std::uint8_t* ptr = ResolveMemoryAddress(addr, 1024u);
        if (!ptr) ptr = ResolveMemoryAddress(addr, 64u);
        if (!ptr) return 0ull;
        uint64_t h = 14695981039346656037ull;
        for (size_t i = 0; i < 64u; ++i) {
            h ^= ptr[i];
            h *= 1099511628211ull;
        }
        return h;
    }

    static void ApplyGxTextureSwizzle(int tex_mode) {
        static constexpr GLint kSwzRgba[4] = {GL_RED, GL_GREEN, GL_BLUE, GL_ALPHA};
        static constexpr GLint kSwzRgb1[4] = {GL_RED, GL_GREEN, GL_BLUE, GL_ONE};
        static constexpr GLint kSwzIiii[4] = {GL_RED, GL_RED, GL_RED, GL_RED};
        static constexpr GLint kSwzIiia[4] = {GL_RED, GL_RED, GL_RED, GL_ALPHA};
        const GLint* swz = kSwzRgba;
        if (tex_mode == 1) swz = kSwzRgb1;
        else if (tex_mode == 2) swz = kSwzIiii;
        else if (tex_mode == 3) swz = kSwzIiia;
        glTexParameteriv(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_SWIZZLE_RGBA, swz);
    }

    static void ApplyGxSamplerParams(uint32_t mode0, int tex_mode) {
        static const GLint gl_wraps[4] = {
            GL_CLAMP_TO_EDGE, GL_REPEAT, GL_MIRRORED_REPEAT, GL_CLAMP_TO_EDGE
        };
        const uint32_t wrap_s = mode0 & 3u;
        const uint32_t wrap_t = (mode0 >> 2) & 3u;
        const bool mag_linear = ((mode0 >> 4) & 1u) != 0u;
        // En TexMode0: min_filter bit 7 (FilterMode: Near=0, Linear=1)
        const bool min_linear = ((mode0 >> 7) & 1u) != 0u;
        glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_S, gl_wraps[wrap_s]);
        glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_T, gl_wraps[wrap_t]);
        glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAG_FILTER, mag_linear ? GL_LINEAR : GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MIN_FILTER, min_linear ? GL_LINEAR : GL_NEAREST);
        ApplyGxTextureSwizzle(tex_mode);
    }

    static inline uint64_t ComputeFastContentHash(const uint8_t* ptr, size_t size) {
        if (!ptr || size == 0) return 0ull;
        uint64_t h = 14695981039346656037ull ^ static_cast<uint64_t>(size);
        h *= 1099511628211ull;
        constexpr size_t NUM_SAMPLES = 16;
        if (size >= NUM_SAMPLES * 8u) {
            const size_t step = (size - 8u) / (NUM_SAMPLES - 1u);
            for (size_t i = 0; i < NUM_SAMPLES; ++i) {
                uint64_t val = 0;
                std::memcpy(&val, ptr + i * step, sizeof(val));
                h ^= val;
                h *= 1099511628211ull;
            }
        } else if (size >= 8u) {
            const size_t words = size / 8u;
            const uint64_t* wptr = reinterpret_cast<const uint64_t*>(ptr);
            for (size_t i = 0; i < words; ++i) {
                h ^= wptr[i];
                h *= 1099511628211ull;
            }
            for (size_t i = words * 8u; i < size; ++i) {
                h ^= ptr[i];
                h *= 1099511628211ull;
            }
        } else {
            for (size_t i = 0; i < size; ++i) {
                h ^= ptr[i];
                h *= 1099511628211ull;
            }
        }
        return h;
    }

    static inline uint64_t ComputeFastTlutHash(std::span<const uint8_t> pal_span) {
        if (pal_span.empty()) return 0ull;
        uint64_t h = 14695981039346656037ull ^ static_cast<uint64_t>(pal_span.size());
        const size_t words = pal_span.size() / 8u;
        const uint64_t* wptr = reinterpret_cast<const uint64_t*>(pal_span.data());
        for (size_t i = 0; i < words; ++i) {
            h ^= wptr[i];
            h *= 1099511628211ull;
        }
        for (size_t i = words * 8u; i < pal_span.size(); ++i) {
            h ^= pal_span[i];
            h *= 1099511628211ull;
        }
        return h;
    }

    GLuint ResolveStageTexture(uint8_t stage, const moderngekko::GxStateView& state,
                               uint32_t* out_w, uint32_t* out_h, int* out_mode);

    size_t BuildGpuVertexBatch(const moderngekko::GxDecodedDraw& decoded,
                               const moderngekko::GxStateView& state,
                               float vp_wd_half, float vp_ht_half, float vp_zrange, float vp_farz,
                               uint8_t vat = 0, bool use_indexed = false,
                               GpuVertex* dst_verts = nullptr, uint32_t used_tcoord_mask = 0xFFu);
#endif

#if defined(_WIN32)
    void InitSharedVertexShader();

    TevProgramEntry* CompileTevProgram(const TevShaderKey& key);

    TevProgramEntry* EnsureTevProgram(const moderngekko::GxStateView& state,
                                      uint32_t num_stages, bool bp_configured);

    void FlushDolphinBatch();

    void FlushPendingBatch();

    void InvalidateGlStateCache();

    void WarmupTevShaderCache();
#endif

    moderngekko::AddressSpace& m_memory;
    uint32_t m_current_frame = 1;
    moderngekko::GxDecodedTexture m_decoded_tex_scratch;
    std::vector<u32> m_xfb_rgba;
    std::unordered_map<std::uint64_t, moderngekko::DolphinShaderBundle> m_compiled_pipelines;
    std::vector<GpuVertex> m_gpu_batch;
    std::uint64_t m_draw_count = 0;
    std::uint64_t m_ortho_draw_count = 0;
    std::uint64_t m_last_presented_draws = 0;
    std::uint64_t m_vertex_count = 0;
    std::uint64_t m_shader_compile_count = 0;
    std::uint64_t m_decoded_texture_count = 0;
    std::uint64_t m_efb_copy_count = 0;
    std::uint64_t m_last_presented_efb_copies = 0;
    std::uint32_t m_last_xfb_address = 0;
    std::uint32_t m_last_clear_color = 0;
    int m_last_disp_src_x = 0;
    int m_last_disp_src_y = 0;
    int m_last_disp_w = DISP_WIDTH;
    int m_last_disp_h = DISP_HEIGHT;
    GLint m_last_draw_vp_x = 0;
    GLint m_last_draw_vp_y = 0;
    GLsizei m_last_draw_vp_w = DISP_WIDTH;
    GLsizei m_last_draw_vp_h = DISP_HEIGHT;
    double m_last_depth_n = 1.0;
    double m_last_depth_f = 0.0;
    bool m_has_drawn_in_efb = false;
    uint32_t m_draws_since_clear = 0;
    uint32_t m_zero_draw_xfb_streak = 0;
    bool m_efb_has_displayable_frame = false;
    bool m_video_frame_captured = false;
    bool m_new_video_frame_captured = false;
    bool m_xfb_copied_this_frame = false;
    bool m_last_xfb_valid = false;
    bool m_audit_dolphin_shaders = false;
#if defined(_WIN32)
    std::unordered_map<uint32_t, EfbTexEntry> m_efb_textures;
    std::unordered_map<RamTexKey, RamTexEntry, RamTexKeyHash> m_ram_textures;
    std::unordered_map<TevShaderKey, TevProgramEntry, TevShaderKeyHash> m_tev_programs;
    TevShaderKey m_last_tev_key{};
    TevProgramEntry* m_last_tev_prog = nullptr;
    struct StageTexCacheEntry {
        uint32_t frame = 0;
        uint64_t tmem_gen = 0;
        uint32_t mode0 = 0;
        uint32_t image0 = 0;
        uint32_t tmem_even = 0;
        uint32_t addr_reg = 0;
        uint32_t tlut = 0;
        GLuint gl_tex = 0;
        uint32_t w = 1;
        uint32_t h = 1;
        int mode = 0;
        bool valid = false;
    };
    std::array<StageTexCacheEntry, 8> m_stage_tex_cache{};
    std::array<GLuint, 8> m_bound_tex{};
    uint32_t m_active_tex_unit = 0xFFFFFFFFu;
    bool m_bound_efb_fbo = false;
    bool m_vbo_attribs_bound = false;
    bool m_vao_configured = false;
    bool m_use_dolphin_pipeline = true;
    static constexpr size_t VBO_Q_VERTS = 110000;
    static constexpr size_t EBO_Q_IDXS = 1048576;
    static constexpr size_t DOLPHIN_VBO_Q_VERTS = 110000;
    size_t m_vbo_cursor_vtx = 0;
    size_t m_ebo_cursor_idx = 0;
    size_t m_vbo_max_verts = 0;
    size_t m_ebo_max_idxs = 0;
    uint8_t* m_vbo_mapped = nullptr;
    uint8_t* m_ebo_mapped = nullptr;
    std::array<GLsync, 4> m_vbo_fences{};
    std::array<GLsync, 4> m_ebo_fences{};
    GLuint m_dolphin_vao = 0;
    GLuint m_dolphin_vbo = 0;
    GLsizeiptr m_dolphin_vbo_capacity = 0;
    uint8_t* m_dolphin_vbo_mapped = nullptr;
    size_t m_dolphin_vbo_cursor = 0;
    size_t m_dolphin_vbo_max_verts = 0;
    std::array<GLsync, 4> m_dolphin_vbo_fences{};
    std::vector<DolphinGpuVertex> m_dolphin_cpu_batch;
    GLuint m_vs_ubo = 0;
    GLuint m_ps_ubo = 0;
    std::vector<std::uint8_t> m_vs_ubo_cpu;
    std::vector<std::uint8_t> m_ps_ubo_cpu;
    std::vector<std::uint8_t> m_last_vs_ubo;
    std::vector<std::uint8_t> m_last_ps_ubo;
    bool m_vs_ubo_valid = false;
    bool m_ps_ubo_valid = false;
    GLsizeiptr m_vs_ubo_cap = 0;
    GLsizeiptr m_ps_ubo_cap = 0;
    std::unordered_map<uint64_t, GLuint> m_dolphin_vs_cache;
    std::unordered_map<uint64_t, GLuint> m_dolphin_ps_cache;
    std::unordered_map<DolphinProgramKey, GLuint, DolphinProgramKeyHash> m_dolphin_prog_cache;
    std::uint64_t m_dolphin_shader_errors = 0;
    bool m_dolphin_vao_bound = false;
    bool m_dolphin_clip_enabled = false;
    bool m_dolphin_state_valid = false;
    bool m_ubos_bound = false;
    moderngekko::DolphinPipelineState m_last_dolphin_pstate{};
    bool m_d_pstate_valid = false;
    uint64_t m_d_pstate_bp_gen = 0;
    uint64_t m_d_pstate_vp_gen = 0;
    moderngekko::GxTopology m_d_pstate_topo = moderngekko::GxTopology::Triangles;
    moderngekko::DolphinPipelineState m_d_pstate_cached{};
    bool m_d_prog_valid = false;
    uint64_t m_d_prog_cp_gen = 0;
    uint64_t m_d_prog_vs_gen = 0;
    uint64_t m_d_prog_ps_gen = 0;
    uint8_t m_d_prog_vat = 0xFFu;
    GLuint m_d_prog_cached = 0;
    bool m_d_texmask_valid = false;
    uint64_t m_d_texmask_gen = 0;
    uint32_t m_d_texmask_cached = 0;
    bool m_d_texres_valid = false;
    uint64_t m_d_texres_bp_gen = 0;
    uint64_t m_d_texres_tmem_gen = 0;
    uint32_t m_d_texres_mask = 0;
    uint32_t m_d_texres_frame = 0;
    std::array<GLuint, 8> m_d_stage_gl_tex{};
    std::array<uint32_t, 8> m_d_tex_w = {1u, 1u, 1u, 1u, 1u, 1u, 1u, 1u};
    std::array<uint32_t, 8> m_d_tex_h = {1u, 1u, 1u, 1u, 1u, 1u, 1u, 1u};
    bool m_d_vs_ubo_valid = false;
    uint64_t m_d_vs_xf_gen = 0;
    uint64_t m_d_vs_cp_gen = 0;
    uint64_t m_d_vs_bp_pipe_gen = 0;
    uint8_t m_d_vs_vat = 0xFFu;
    int m_d_vs_disp_w = 0;
    int m_d_vs_disp_h = 0;
    bool m_d_ps_ubo_valid = false;
    uint64_t m_d_ps_bp_gen = 0;
    uint64_t m_d_ps_col_gen = 0;
    uint64_t m_d_ps_tex_gen = 0;
    uint64_t m_d_ps_tev_gen = 0;
    uint64_t m_d_ps_vp_gen = 0;
    int m_d_ps_disp_w = 0;
    int m_d_ps_disp_h = 0;
    std::array<uint32_t, 8> m_d_ps_tex_w{};
    std::array<uint32_t, 8> m_d_ps_tex_h{};
    GLuint m_present_prog = 0;
    GLuint m_present_vao = 0;
    GLint m_present_flip_loc = -1;
    GLuint m_hud_prog = 0;
    GLuint m_hud_vao = 0;
    GLuint m_hud_vbo = 0;
    GLint m_hud_color_loc = -1;
    bool m_vp_cache_valid = false;
    uint32_t m_cached_xf_vp[6]{};
    uint32_t m_cached_vp_sc_off = 0xFFFFFFFFu;
    int m_cached_vp_disp_w = 0, m_cached_vp_disp_h = 0;
    float m_cached_vp_wd_half = 320.0f, m_cached_vp_ht_half = -240.0f, m_cached_vp_zrange = 16777215.0f, m_cached_vp_farz = 16777215.0f;
    float m_cached_efb_vp_left = 0.0f, m_cached_efb_vp_top = 0.0f;
    GLint m_cached_vp_gl_x = 0, m_cached_vp_gl_y = 0;
    GLsizei m_cached_vp_gl_w = 640, m_cached_vp_gl_h = 480;
    double m_cached_depth_n = 1.0, m_cached_depth_f = 0.0;
    uint32_t m_cached_sc_tl = 0, m_cached_sc_br = 0, m_cached_sc_off = 0;
    bool m_sc_cache_valid = false;
    bool m_sc_enabled = false;
    bool m_cached_want_sc = false;
    int m_cached_sc_x = 0, m_cached_sc_y = 0, m_cached_sc_w = 0, m_cached_sc_h = 0;
    int m_sc_x = 0, m_sc_y = 0, m_sc_w = 0, m_sc_h = 0;
    uint32_t m_cached_cull = 0xFFFFFFFFu;
    uint32_t m_cached_zmode = 0xFFFFFFFFu;
    uint32_t m_cached_blend_key = 0xFFFFFFFFu;
    uint64_t m_last_bp_tev_gen = 0;
    uint64_t m_cached_tev_col_gen = 0;
    std::array<float, 16> m_cached_u_tev_colors{};
    std::array<float, 16> m_cached_u_konst{};

    // Dynamic Draw Call Batching state to reduce glDrawElementsBaseVertex calls
    bool m_batch_active = false;
    size_t m_batch_vbo_base = 0;
    size_t m_batch_ebo_start = 0;
    size_t m_batch_ebo_count = 0;
    TevProgramEntry* m_batch_tev_prog = nullptr;
    GLint m_batch_vp_x = 0, m_batch_vp_y = 0;
    GLsizei m_batch_vp_w = 0, m_batch_vp_h = 0;
    double m_batch_depth_n = 1.0, m_batch_depth_f = 0.0;
    bool m_batch_sc_enabled = false;
    int m_batch_sc_x = 0, m_batch_sc_y = 0, m_batch_sc_w = 0, m_batch_sc_h = 0;
    uint32_t m_batch_cull = 0;
    uint32_t m_batch_zmode = 0;
    uint32_t m_batch_blend_key = 0;
    uint32_t m_batch_tex_mask = 0;
    uint32_t m_batch_tcoord_mask = 0;
    std::array<GLuint, 8> m_batch_tex{};
    std::array<GLint, 8> m_batch_tex_modes{};
    std::array<float, 32> m_batch_tex_inv_wh{};
    std::array<float, 32> m_batch_su_scale{};
    uint64_t m_batch_tev_col_gen = 0;
    uint32_t m_batch_alpha_cmp16 = 0;
    uint32_t m_batch_const_alpha9 = 0;

    // Dynamic batching for DolphinVideo pipeline
    bool m_dolphin_batch_active = false;
    size_t m_dolphin_batch_vbo_base = 0;
    size_t m_dolphin_batch_ebo_start = 0;
    size_t m_dolphin_batch_ebo_count = 0;
    GLuint m_dolphin_batch_prog = 0;
    moderngekko::DolphinPipelineState m_dolphin_batch_pstate{};
    GLint m_dolphin_batch_vp_x = 0, m_dolphin_batch_vp_y = 0;
    GLsizei m_dolphin_batch_vp_w = 0, m_dolphin_batch_vp_h = 0;
    double m_dolphin_batch_depth_n = 1.0, m_dolphin_batch_depth_f = 0.0;
    bool m_dolphin_batch_sc_enabled = false;
    int m_dolphin_batch_sc_x = 0, m_dolphin_batch_sc_y = 0, m_dolphin_batch_sc_w = 0, m_dolphin_batch_sc_h = 0;

    static bool DolphinPipelineStateEquals(const moderngekko::DolphinPipelineState& a,
                                         const moderngekko::DolphinPipelineState& b) {
        return a.blend_enable == b.blend_enable &&
               a.subtract == b.subtract &&
               a.subtract_alpha == b.subtract_alpha &&
               a.use_dual_src == b.use_dual_src &&
               a.src_factor == b.src_factor &&
               a.dst_factor == b.dst_factor &&
               a.src_factor_alpha == b.src_factor_alpha &&
               a.dst_factor_alpha == b.dst_factor_alpha &&
               a.logic_op_enable == b.logic_op_enable &&
               a.logic_mode == b.logic_mode &&
               a.color_update == b.color_update &&
               a.alpha_update == b.alpha_update &&
               a.depth_test == b.depth_test &&
               a.depth_update == b.depth_update &&
               a.depth_func == b.depth_func &&
               a.cull_mode == b.cull_mode &&
               a.use_vertex_depth_range == b.use_vertex_depth_range;
    }

    GLuint m_xfb_tex = 0;
    GLuint m_dummy_white_tex = 0;
    GLuint m_vs_handle = 0;
    GLuint m_current_program = 0;
    GLuint m_vbo = 0;
    GLuint m_ebo = 0;
    GLuint m_efb_fbo = 0;
    GLuint m_efb_display_fbo = 0;
    GLuint m_efb_copy_fbo = 0;
    GLuint m_efb_color_tex = 0;
    GLuint m_efb_depth_rb = 0;
    GLuint m_efb_display_tex = 0;

    PFNGLCREATESHADERPROC m_glCreateShader = nullptr;
    PFNGLSHADERSOURCEPROC m_glShaderSource = nullptr;
    PFNGLCOMPILESHADERPROC m_glCompileShader = nullptr;
    PFNGLGETSHADERIVPROC m_glGetShaderiv = nullptr;
    PFNGLGETSHADERINFOLOGPROC m_glGetShaderInfoLog = nullptr;
    PFNGLDELETESHADERPROC m_glDeleteShader = nullptr;
    PFNGLCREATEPROGRAMPROC m_glCreateProgram = nullptr;
    PFNGLATTACHSHADERPROC m_glAttachShader = nullptr;
    PFNGLBINDATTRIBLOCATIONPROC m_glBindAttribLocation = nullptr;
    PFNGLLINKPROGRAMPROC m_glLinkProgram = nullptr;
    PFNGLGETPROGRAMIVPROC m_glGetProgramiv = nullptr;
    PFNGLGETPROGRAMINFOLOGPROC m_glGetProgramInfoLog = nullptr;
    PFNGLUSEPROGRAMPROC m_glUseProgram = nullptr;
    PFNGLDELETEPROGRAMPROC m_glDeleteProgram = nullptr;
    PFNGLGETUNIFORMLOCATIONPROC m_glGetUniformLocation = nullptr;
    PFNGLUNIFORM1IPROC m_glUniform1i = nullptr;
    PFNGLUNIFORM1IVPROC m_glUniform1iv = nullptr;
    PFNGLUNIFORM2FPROC m_glUniform2f = nullptr;
    PFNGLUNIFORM4FPROC m_glUniform4f = nullptr;
    PFNGLUNIFORM4FVPROC m_glUniform4fv = nullptr;
    PFNGLACTIVETEXTUREPROC m_glActiveTexture = nullptr;
    PFNGLBLENDEQUATIONPROC m_glBlendEquation = nullptr;
    PFNGLBLENDEQUATIONSEPARATEPROC m_glBlendEquationSeparate = nullptr;
    PFNGLBLENDFUNCSEPARATEPROC m_glBlendFuncSeparate = nullptr;
    PFNGLGENBUFFERSPROC m_glGenBuffers = nullptr;
    PFNGLBINDBUFFERPROC m_glBindBuffer = nullptr;
    PFNGLBUFFERDATAPROC m_glBufferData = nullptr;
    PFNGLBUFFERSUBDATAPROC m_glBufferSubData = nullptr;
    GLsizeiptr m_vbo_capacity = 0;
    GLsizeiptr m_ebo_capacity = 0;
    PFNGLDRAWELEMENTSBASEVERTEXPROC m_glDrawElementsBaseVertex = nullptr;
    PFNGLBUFFERSTORAGEPROC m_glBufferStorage = nullptr;
    PFNGLMAPBUFFERRANGEPROC m_glMapBufferRange = nullptr;
    PFNGLFENCESYNCPROC m_glFenceSync = nullptr;
    PFNGLCLIENTWAITSYNCPROC m_glClientWaitSync = nullptr;
    PFNGLDELETESYNCPROC m_glDeleteSync = nullptr;
    PFNGLDELETEBUFFERSPROC m_glDeleteBuffers = nullptr;
    PFNGLENABLEVERTEXATTRIBARRAYPROC m_glEnableVertexAttribArray = nullptr;
    PFNGLDISABLEVERTEXATTRIBARRAYPROC m_glDisableVertexAttribArray = nullptr;
    PFNGLVERTEXATTRIBPOINTERPROC m_glVertexAttribPointer = nullptr;

    PFNGLGENFRAMEBUFFERSPROC m_glGenFramebuffers = nullptr;
    PFNGLBINDFRAMEBUFFERPROC m_glBindFramebuffer = nullptr;
    PFNGLFRAMEBUFFERTEXTURE2DPROC m_glFramebufferTexture2D = nullptr;
    PFNGLGENRENDERBUFFERSPROC m_glGenRenderbuffers = nullptr;
    PFNGLBINDRENDERBUFFERPROC m_glBindRenderbuffer = nullptr;
    PFNGLRENDERBUFFERSTORAGEPROC m_glRenderbufferStorage = nullptr;
    PFNGLFRAMEBUFFERRENDERBUFFERPROC m_glFramebufferRenderbuffer = nullptr;
    PFNGLCHECKFRAMEBUFFERSTATUSPROC m_glCheckFramebufferStatus = nullptr;
    PFNGLDELETEFRAMEBUFFERSPROC m_glDeleteFramebuffers = nullptr;
    PFNGLDELETERENDERBUFFERSPROC m_glDeleteRenderbuffers = nullptr;
    PFNGLBLITFRAMEBUFFERPROC m_glBlitFramebuffer = nullptr;
    PFNGLCLIPCONTROLPROC m_glClipControl = nullptr;
    GLuint m_vao = 0;
    PFNGLGENVERTEXARRAYSPROC m_glGenVertexArrays = nullptr;
    PFNGLBINDVERTEXARRAYPROC m_glBindVertexArray = nullptr;
    PFNGLDELETEVERTEXARRAYSPROC m_glDeleteVertexArrays = nullptr;
    PFNGLTEXIMAGE3DPROC m_glTexImage3D = nullptr;
    PFNGLTEXSUBIMAGE3DPROC m_glTexSubImage3D = nullptr;
    PFNGLFRAMEBUFFERTEXTURELAYERPROC m_glFramebufferTextureLayer = nullptr;
    PFNGLBINDBUFFERBASEPROC m_glBindBufferBase = nullptr;
    PFNGLVERTEXATTRIBIPOINTERPROC m_glVertexAttribIPointer = nullptr;
#endif
};
