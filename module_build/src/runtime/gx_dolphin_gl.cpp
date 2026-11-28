#include "gx_dolphin_gl.hpp"

RuntimePerfCounters g_perf;
CPUState* g_active_cpu = nullptr;
#if defined(_WIN32)
PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT = nullptr;
#endif

void Ggsea4RenderDevice::ShutdownGlResources() {
#if defined(_WIN32)
    if (wglGetCurrentContext() == nullptr) {
        return;
    }
    FlushPendingBatch();
    for (auto& [k, entry] : m_efb_textures) {
        if (entry.gl_tex) glDeleteTextures(1, &entry.gl_tex);
    }
    m_efb_textures.clear();
    for (auto& [k, entry] : m_ram_textures) {
        if (entry.gl_tex) glDeleteTextures(1, &entry.gl_tex);
    }
    m_ram_textures.clear();
    for (auto& [k, prog] : m_tev_programs) {
        if (prog.program && m_glDeleteProgram) m_glDeleteProgram(prog.program);
    }
    m_tev_programs.clear();
    for (auto& [k, prog] : m_dolphin_prog_cache) {
        if (prog && m_glDeleteProgram) m_glDeleteProgram(prog);
    }
    m_dolphin_prog_cache.clear();
    for (auto& [k, vs] : m_dolphin_vs_cache) {
        if (vs && m_glDeleteShader) m_glDeleteShader(vs);
    }
    m_dolphin_vs_cache.clear();
    for (auto& [k, ps] : m_dolphin_ps_cache) {
        if (ps && m_glDeleteShader) m_glDeleteShader(ps);
    }
    m_dolphin_ps_cache.clear();
    if (m_present_prog && m_glDeleteProgram) {
        m_glDeleteProgram(m_present_prog);
        m_present_prog = 0;
    }
    if (m_hud_prog && m_glDeleteProgram) {
        m_glDeleteProgram(m_hud_prog);
        m_hud_prog = 0;
    }
    if (m_dummy_white_tex) {
        glDeleteTextures(1, &m_dummy_white_tex);
        m_dummy_white_tex = 0;
    }
    for (int q = 0; q < 4; ++q) {
        if (m_vbo_fences[q] && m_glDeleteSync) {
            m_glDeleteSync(m_vbo_fences[q]);
            m_vbo_fences[q] = nullptr;
        }
        if (m_ebo_fences[q] && m_glDeleteSync) {
            m_glDeleteSync(m_ebo_fences[q]);
            m_ebo_fences[q] = nullptr;
        }
        if (m_dolphin_vbo_fences[q] && m_glDeleteSync) {
            m_glDeleteSync(m_dolphin_vbo_fences[q]);
            m_dolphin_vbo_fences[q] = nullptr;
        }
    }
    if (m_dolphin_vbo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_dolphin_vbo);
        m_dolphin_vbo = 0;
    }
    if (m_vs_ubo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_vs_ubo);
        m_vs_ubo = 0;
    }
    if (m_ps_ubo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_ps_ubo);
        m_ps_ubo = 0;
    }
    if (m_hud_vbo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_hud_vbo);
        m_hud_vbo = 0;
    }
    if (m_vbo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_vbo);
        m_vbo = 0;
    }
    if (m_ebo && m_glDeleteBuffers) {
        m_glDeleteBuffers(1, &m_ebo);
        m_ebo = 0;
    }
    if (m_dolphin_vao && m_glDeleteVertexArrays) {
        m_glDeleteVertexArrays(1, &m_dolphin_vao);
        m_dolphin_vao = 0;
    }
    if (m_present_vao && m_glDeleteVertexArrays) {
        m_glDeleteVertexArrays(1, &m_present_vao);
        m_present_vao = 0;
    }
    if (m_hud_vao && m_glDeleteVertexArrays) {
        m_glDeleteVertexArrays(1, &m_hud_vao);
        m_hud_vao = 0;
    }
    if (m_vao && m_glDeleteVertexArrays) {
        m_glDeleteVertexArrays(1, &m_vao);
        m_vao = 0;
    }
    if (m_vs_handle && m_glDeleteShader) {
        m_glDeleteShader(m_vs_handle);
        m_vs_handle = 0;
    }
    if (m_efb_copy_fbo && m_glDeleteFramebuffers) {
        m_glDeleteFramebuffers(1, &m_efb_copy_fbo);
        m_efb_copy_fbo = 0;
    }
    if (m_efb_display_fbo && m_glDeleteFramebuffers) {
        m_glDeleteFramebuffers(1, &m_efb_display_fbo);
        m_efb_display_fbo = 0;
    }
    if (m_efb_fbo && m_glDeleteFramebuffers) {
        m_glDeleteFramebuffers(1, &m_efb_fbo);
        m_efb_fbo = 0;
    }
    if (m_efb_depth_rb && m_glDeleteRenderbuffers) {
        m_glDeleteRenderbuffers(1, &m_efb_depth_rb);
        m_efb_depth_rb = 0;
    }
    if (m_efb_color_tex) {
        glDeleteTextures(1, &m_efb_color_tex);
        m_efb_color_tex = 0;
    }
    if (m_efb_display_tex) {
        glDeleteTextures(1, &m_efb_display_tex);
        m_efb_display_tex = 0;
    }
    if (m_xfb_tex) {
        glDeleteTextures(1, &m_xfb_tex);
        m_xfb_tex = 0;
    }
    m_zero_draw_xfb_streak = 0u;
    m_vs_ubo_valid = false;
    m_ps_ubo_valid = false;
    m_d_vs_ubo_valid = false;
    m_d_ps_ubo_valid = false;
    m_d_pstate_valid = false;
    m_d_prog_valid = false;
    m_d_texmask_valid = false;
    m_d_texres_valid = false;
#endif
}

GLuint Ggsea4RenderDevice::CompileRawGlShader(GLenum type, const char* src, const char* label) {
    if (!m_glCreateShader || !m_glShaderSource || !m_glCompileShader || !m_glGetShaderiv) return 0;
    GLuint sh = m_glCreateShader(type);
    if (!sh) return 0;
    m_glShaderSource(sh, 1, &src, nullptr);
    m_glCompileShader(sh);
    GLint ok = 0;
    m_glGetShaderiv(sh, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024] = {};
        if (m_glGetShaderInfoLog) m_glGetShaderInfoLog(sh, sizeof(log) - 1, nullptr, log);
        std::fprintf(stderr, "[GFX-CORE-SHADER-ERR] %s: %s\n", label, log);
        if (m_glDeleteShader) m_glDeleteShader(sh);
        return 0;
    }
    return sh;
}

void Ggsea4RenderDevice::InitCorePresentShaders() {
    if (!m_glCreateProgram || !m_glAttachShader || !m_glLinkProgram || !m_glGetProgramiv) return;

    static const char* kPresentVs =
        "#version 450 core\n"
        "uniform int u_flip_y;\n"
        "out vec2 v_uv;\n"
        "void main() {\n"
        "    vec2 pos = vec2((gl_VertexID == 1) ? 3.0 : -1.0, (gl_VertexID == 2) ? 3.0 : -1.0);\n"
        "    vec2 uv_raw = pos * 0.5 + 0.5;\n"
        "    v_uv = vec2(uv_raw.x, (u_flip_y != 0) ? (1.0 - uv_raw.y) : uv_raw.y);\n"
        "    gl_Position = vec4(pos, 0.0, 1.0);\n"
        "}\n";
    static const char* kPresentFs =
        "#version 450 core\n"
        "in vec2 v_uv;\n"
        "uniform sampler2D u_tex;\n"
        "out vec4 o_color;\n"
        "void main() {\n"
        "    o_color = texture(u_tex, v_uv);\n"
        "}\n";
    GLuint pvs = CompileRawGlShader(GL_VERTEX_SHADER, kPresentVs, "PresentVS");
    GLuint pfs = CompileRawGlShader(GL_FRAGMENT_SHADER, kPresentFs, "PresentFS");
    if (pvs && pfs) {
        GLuint prog = m_glCreateProgram();
        m_glAttachShader(prog, pvs);
        m_glAttachShader(prog, pfs);
        m_glLinkProgram(prog);
        GLint ok = 0;
        m_glGetProgramiv(prog, GL_LINK_STATUS, &ok);
        if (ok) {
            m_present_prog = prog;
            if (m_glUseProgram && m_glGetUniformLocation && m_glUniform1i) {
                m_glUseProgram(m_present_prog);
                GLint tex_loc = m_glGetUniformLocation(m_present_prog, "u_tex");
                if (tex_loc >= 0) m_glUniform1i(tex_loc, 0);
                m_present_flip_loc = m_glGetUniformLocation(m_present_prog, "u_flip_y");
                m_glUseProgram(0);
            }
        } else {
            char log[1024] = {};
            if (m_glGetProgramInfoLog) m_glGetProgramInfoLog(prog, sizeof(log) - 1, nullptr, log);
            std::fprintf(stderr, "[GFX-CORE-LINK-ERR] PresentProg: %s\n", log);
            if (m_glDeleteProgram) m_glDeleteProgram(prog);
        }
    }
    if (pvs && m_glDeleteShader) m_glDeleteShader(pvs);
    if (pfs && m_glDeleteShader) m_glDeleteShader(pfs);

    static const char* kHudVs =
        "#version 450 core\n"
        "layout(location = 0) in vec2 a_pos;\n"
        "void main() {\n"
        "    gl_Position = vec4(a_pos, 0.0, 1.0);\n"
        "}\n";
    static const char* kHudFs =
        "#version 450 core\n"
        "uniform vec4 u_color;\n"
        "out vec4 o_color;\n"
        "void main() {\n"
        "    o_color = u_color;\n"
        "}\n";
    GLuint hvs = CompileRawGlShader(GL_VERTEX_SHADER, kHudVs, "HudVS");
    GLuint hfs = CompileRawGlShader(GL_FRAGMENT_SHADER, kHudFs, "HudFS");
    if (hvs && hfs) {
        GLuint prog = m_glCreateProgram();
        m_glAttachShader(prog, hvs);
        m_glAttachShader(prog, hfs);
        m_glLinkProgram(prog);
        GLint ok = 0;
        m_glGetProgramiv(prog, GL_LINK_STATUS, &ok);
        if (ok) {
            m_hud_prog = prog;
            if (m_glGetUniformLocation) {
                m_hud_color_loc = m_glGetUniformLocation(m_hud_prog, "u_color");
            }
        } else {
            char log[1024] = {};
            if (m_glGetProgramInfoLog) m_glGetProgramInfoLog(prog, sizeof(log) - 1, nullptr, log);
            std::fprintf(stderr, "[GFX-CORE-LINK-ERR] HudProg: %s\n", log);
            if (m_glDeleteProgram) m_glDeleteProgram(prog);
        }
    }
    if (hvs && m_glDeleteShader) m_glDeleteShader(hvs);
    if (hfs && m_glDeleteShader) m_glDeleteShader(hfs);

    if (m_glGenVertexArrays && m_glBindVertexArray) {
        m_glGenVertexArrays(1, &m_present_vao);
        m_glGenVertexArrays(1, &m_hud_vao);
        if (m_glGenBuffers && m_glBindBuffer && m_glBufferData && m_glEnableVertexAttribArray && m_glVertexAttribPointer) {
            m_glGenBuffers(1, &m_hud_vbo);
            m_glBindVertexArray(m_hud_vao);
            m_glBindBuffer(GL_ARRAY_BUFFER, m_hud_vbo);
            m_glBufferData(GL_ARRAY_BUFFER, 4096, nullptr, GL_DYNAMIC_DRAW);
            m_glEnableVertexAttribArray(0);
            m_glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, nullptr);
            m_glBindBuffer(GL_ARRAY_BUFFER, 0);
        }
        m_glBindVertexArray(m_vao);
    }
}

void Ggsea4RenderDevice::InitGlResources() {
#if defined(_WIN32)
    glGenTextures(1, &m_xfb_tex);
    glBindTexture(GL_TEXTURE_2D, m_xfb_tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, DISP_WIDTH, DISP_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, m_xfb_rgba.data());

    auto load_proc = [](const char* name, const char* alt_name = nullptr) -> void* {
        void* p = reinterpret_cast<void*>(wglGetProcAddress(name));
        if (!p && alt_name) p = reinterpret_cast<void*>(wglGetProcAddress(alt_name));
        return p;
    };

    m_glCreateShader = reinterpret_cast<PFNGLCREATESHADERPROC>(load_proc("glCreateShader"));
    m_glShaderSource = reinterpret_cast<PFNGLSHADERSOURCEPROC>(load_proc("glShaderSource"));
    m_glCompileShader = reinterpret_cast<PFNGLCOMPILESHADERPROC>(load_proc("glCompileShader"));
    m_glGetShaderiv = reinterpret_cast<PFNGLGETSHADERIVPROC>(load_proc("glGetShaderiv"));
    m_glGetShaderInfoLog = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(load_proc("glGetShaderInfoLog"));
    m_glDeleteShader = reinterpret_cast<PFNGLDELETESHADERPROC>(load_proc("glDeleteShader"));
    m_glCreateProgram = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(load_proc("glCreateProgram"));
    m_glAttachShader = reinterpret_cast<PFNGLATTACHSHADERPROC>(load_proc("glAttachShader"));
    m_glBindAttribLocation = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(load_proc("glBindAttribLocation"));
    m_glLinkProgram = reinterpret_cast<PFNGLLINKPROGRAMPROC>(load_proc("glLinkProgram"));
    m_glGetProgramiv = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(load_proc("glGetProgramiv"));
    m_glGetProgramInfoLog = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(load_proc("glGetProgramInfoLog"));
    m_glUseProgram = reinterpret_cast<PFNGLUSEPROGRAMPROC>(load_proc("glUseProgram"));
    m_glDeleteProgram = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(load_proc("glDeleteProgram"));
    m_glGetUniformLocation = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(load_proc("glGetUniformLocation"));
    m_glUniform1i = reinterpret_cast<PFNGLUNIFORM1IPROC>(load_proc("glUniform1i"));
    m_glUniform1iv = reinterpret_cast<PFNGLUNIFORM1IVPROC>(load_proc("glUniform1iv"));
    m_glUniform2f = reinterpret_cast<PFNGLUNIFORM2FPROC>(load_proc("glUniform2f"));
    m_glUniform4f = reinterpret_cast<PFNGLUNIFORM4FPROC>(load_proc("glUniform4f"));
    m_glUniform4fv = reinterpret_cast<PFNGLUNIFORM4FVPROC>(load_proc("glUniform4fv"));
    m_glActiveTexture = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(load_proc("glActiveTexture", "glActiveTextureARB"));
    m_glBlendEquation = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(load_proc("glBlendEquation", "glBlendEquationEXT"));
    m_glBlendEquationSeparate = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(load_proc("glBlendEquationSeparate"));
    m_glBlendFuncSeparate = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(load_proc("glBlendFuncSeparate"));
    m_glGenBuffers = reinterpret_cast<PFNGLGENBUFFERSPROC>(load_proc("glGenBuffers"));
    m_glBindBuffer = reinterpret_cast<PFNGLBINDBUFFERPROC>(load_proc("glBindBuffer"));
    m_glBufferData = reinterpret_cast<PFNGLBUFFERDATAPROC>(load_proc("glBufferData"));
    m_glBufferSubData = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(load_proc("glBufferSubData"));
    m_glDeleteBuffers = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(load_proc("glDeleteBuffers"));
    m_glEnableVertexAttribArray = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(load_proc("glEnableVertexAttribArray"));
    m_glDisableVertexAttribArray = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(load_proc("glDisableVertexAttribArray"));
    m_glVertexAttribPointer = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(load_proc("glVertexAttribPointer"));
    m_glDrawElementsBaseVertex = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXPROC>(load_proc("glDrawElementsBaseVertex", "glDrawElementsBaseVertexARB"));
    m_glBufferStorage = reinterpret_cast<PFNGLBUFFERSTORAGEPROC>(load_proc("glBufferStorage", "glBufferStorageARB"));
    m_glMapBufferRange = reinterpret_cast<PFNGLMAPBUFFERRANGEPROC>(load_proc("glMapBufferRange"));
    m_glFenceSync = reinterpret_cast<PFNGLFENCESYNCPROC>(load_proc("glFenceSync"));
    m_glClientWaitSync = reinterpret_cast<PFNGLCLIENTWAITSYNCPROC>(load_proc("glClientWaitSync"));
    m_glDeleteSync = reinterpret_cast<PFNGLDELETESYNCPROC>(load_proc("glDeleteSync"));
    m_glGenVertexArrays = reinterpret_cast<PFNGLGENVERTEXARRAYSPROC>(load_proc("glGenVertexArrays"));
    m_glBindVertexArray = reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(load_proc("glBindVertexArray"));
    m_glDeleteVertexArrays = reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(load_proc("glDeleteVertexArrays"));
    m_glTexImage3D = reinterpret_cast<PFNGLTEXIMAGE3DPROC>(load_proc("glTexImage3D"));
    m_glTexSubImage3D = reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(load_proc("glTexSubImage3D"));
    m_glFramebufferTextureLayer = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC>(load_proc("glFramebufferTextureLayer"));
    m_glBindBufferBase = reinterpret_cast<PFNGLBINDBUFFERBASEPROC>(load_proc("glBindBufferBase"));
    m_glVertexAttribIPointer = reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC>(load_proc("glVertexAttribIPointer"));
    if (m_glGenVertexArrays && m_glBindVertexArray) {
        m_glGenVertexArrays(1, &m_vao);
        m_glBindVertexArray(m_vao);
    }

    const std::uint32_t white_px = 0xFFFFFFFFu;
    glGenTextures(1, &m_dummy_white_tex);
    glBindTexture(GL_TEXTURE_2D_ARRAY, m_dummy_white_tex);
    glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAX_LEVEL, 0);
    glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D_ARRAY, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    ApplyGxTextureSwizzle(0);
    if (m_glTexImage3D) {
        m_glTexImage3D(GL_TEXTURE_2D_ARRAY, 0, GL_RGBA8, 1, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &white_px);
    }
    glBindTexture(GL_TEXTURE_2D_ARRAY, 0);

    m_glGenFramebuffers = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(load_proc("glGenFramebuffers", "glGenFramebuffersEXT"));
    m_glBindFramebuffer = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(load_proc("glBindFramebuffer", "glBindFramebufferEXT"));
    m_glFramebufferTexture2D = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(load_proc("glFramebufferTexture2D", "glFramebufferTexture2DEXT"));
    m_glGenRenderbuffers = reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(load_proc("glGenRenderbuffers", "glGenRenderbuffersEXT"));
    m_glBindRenderbuffer = reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(load_proc("glBindRenderbuffer", "glBindRenderbufferEXT"));
    m_glRenderbufferStorage = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(load_proc("glRenderbufferStorage", "glRenderbufferStorageEXT"));
    m_glFramebufferRenderbuffer = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(load_proc("glFramebufferRenderbuffer", "glFramebufferRenderbufferEXT"));
    m_glCheckFramebufferStatus = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(load_proc("glCheckFramebufferStatus", "glCheckFramebufferStatusEXT"));
    m_glDeleteFramebuffers = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(load_proc("glDeleteFramebuffers", "glDeleteFramebuffersEXT"));
    m_glDeleteRenderbuffers = reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(load_proc("glDeleteRenderbuffers", "glDeleteRenderbuffersEXT"));
    m_glBlitFramebuffer = reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(load_proc("glBlitFramebuffer", "glBlitFramebufferEXT"));
    m_glClipControl = reinterpret_cast<PFNGLCLIPCONTROLPROC>(load_proc("glClipControl", "glClipControlARB"));

    if (m_glClipControl) {
        m_glClipControl(GL_LOWER_LEFT, GL_ZERO_TO_ONE);
        glDepthRange(1.0, 0.0);
        std::printf("[GFX] glClipControl(GL_LOWER_LEFT, GL_ZERO_TO_ONE) y glDepthRange(1.0, 0.0) activados!\n");
    }

    const bool can_persist = (m_glBufferStorage != nullptr && m_glMapBufferRange != nullptr &&
                              m_glFenceSync != nullptr && m_glClientWaitSync != nullptr && m_glDeleteSync != nullptr);
    if (m_glGenBuffers) {
        m_glGenBuffers(1, &m_vbo);
        if (m_vbo != 0 && m_glBindBuffer && (m_glBufferData || can_persist)) {
            m_vbo_cursor_vtx = 0;
            m_glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
            if (can_persist) {
                const GLsizeiptr q_bytes = static_cast<GLsizeiptr>(VBO_Q_VERTS * sizeof(GpuVertex));
                const GLsizeiptr total_bytes = q_bytes * 4;
                const GLbitfield flags = GL_MAP_WRITE_BIT | GL_MAP_PERSISTENT_BIT | GL_MAP_COHERENT_BIT;
                m_glBufferStorage(GL_ARRAY_BUFFER, total_bytes, nullptr, flags);
                void* ptr = m_glMapBufferRange(GL_ARRAY_BUFFER, 0, total_bytes, flags);
                if (ptr) {
                    m_vbo_mapped = static_cast<uint8_t*>(ptr);
                    m_vbo_capacity = total_bytes;
                    m_vbo_max_verts = VBO_Q_VERTS * 4;
                }
            }
            if (!m_vbo_mapped && m_glBufferData) {
                m_vbo_capacity = 16 * 1024 * 1024;
                m_glBufferData(GL_ARRAY_BUFFER, m_vbo_capacity, nullptr, GL_STREAM_DRAW);
            }
            m_glBindBuffer(GL_ARRAY_BUFFER, 0);
        }
        m_glGenBuffers(1, &m_ebo);
        if (m_ebo != 0 && m_glBindBuffer && (m_glBufferData || can_persist)) {
            m_ebo_cursor_idx = 0;
            m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
            if (can_persist) {
                const GLsizeiptr q_bytes = static_cast<GLsizeiptr>(EBO_Q_IDXS * sizeof(uint32_t));
                const GLsizeiptr total_bytes = q_bytes * 4;
                const GLbitfield flags = GL_MAP_WRITE_BIT | GL_MAP_PERSISTENT_BIT | GL_MAP_COHERENT_BIT;
                m_glBufferStorage(GL_ELEMENT_ARRAY_BUFFER, total_bytes, nullptr, flags);
                void* ptr = m_glMapBufferRange(GL_ELEMENT_ARRAY_BUFFER, 0, total_bytes, flags);
                if (ptr) {
                    m_ebo_mapped = static_cast<uint8_t*>(ptr);
                    m_ebo_capacity = total_bytes;
                    m_ebo_max_idxs = EBO_Q_IDXS * 4;
                }
            }
            if (!m_ebo_mapped && m_glBufferData) {
                m_ebo_capacity = 16 * 1024 * 1024;
                m_glBufferData(GL_ELEMENT_ARRAY_BUFFER, m_ebo_capacity, nullptr, GL_STREAM_DRAW);
            }
            m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        }
    }
    if (m_vbo_mapped && m_ebo_mapped) {
        std::printf("[GFX] Persistent Coherent Mapped VBO (%zu MB) + EBO (%zu MB) activado!\n",
                    static_cast<size_t>(m_vbo_capacity >> 20), static_cast<size_t>(m_ebo_capacity >> 20));
    }

    if (m_glGenBuffers && m_glBindBuffer) {
        m_glGenBuffers(1, &m_dolphin_vbo);
        if (m_dolphin_vbo != 0 && (m_glBufferData || can_persist)) {
            m_dolphin_vbo_cursor = 0;
            m_glBindBuffer(GL_ARRAY_BUFFER, m_dolphin_vbo);
            if (can_persist) {
                const GLsizeiptr q_bytes = static_cast<GLsizeiptr>(DOLPHIN_VBO_Q_VERTS * sizeof(DolphinGpuVertex));
                const GLsizeiptr total_bytes = q_bytes * 4;
                const GLbitfield flags = GL_MAP_WRITE_BIT | GL_MAP_PERSISTENT_BIT | GL_MAP_COHERENT_BIT;
                m_glBufferStorage(GL_ARRAY_BUFFER, total_bytes, nullptr, flags);
                void* ptr = m_glMapBufferRange(GL_ARRAY_BUFFER, 0, total_bytes, flags);
                if (ptr) {
                    m_dolphin_vbo_mapped = static_cast<uint8_t*>(ptr);
                    m_dolphin_vbo_capacity = total_bytes;
                    m_dolphin_vbo_max_verts = DOLPHIN_VBO_Q_VERTS * 4;
                }
            }
            if (!m_dolphin_vbo_mapped && m_glBufferData) {
                m_dolphin_vbo_capacity = 16 * 1024 * 1024;
                m_glBufferData(GL_ARRAY_BUFFER, m_dolphin_vbo_capacity, nullptr, GL_STREAM_DRAW);
            }
            m_glBindBuffer(GL_ARRAY_BUFFER, 0);
        }

        if (m_glGenVertexArrays && m_glBindVertexArray && m_dolphin_vbo != 0 &&
            m_glEnableVertexAttribArray && m_glVertexAttribPointer) {
            m_glGenVertexArrays(1, &m_dolphin_vao);
            m_glBindVertexArray(m_dolphin_vao);
            m_glBindBuffer(GL_ARRAY_BUFFER, m_dolphin_vbo);
            if (m_ebo != 0) {
                m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
            }
            constexpr GLsizei d_stride = static_cast<GLsizei>(sizeof(DolphinGpuVertex));
            m_glEnableVertexAttribArray(0);
            m_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, pos)));
            if (m_glVertexAttribIPointer) {
                m_glEnableVertexAttribArray(1);
                m_glVertexAttribIPointer(1, 1, GL_UNSIGNED_INT, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, posmtx)));
            }
            m_glEnableVertexAttribArray(2);
            m_glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, nrm)));
            m_glEnableVertexAttribArray(3);
            m_glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, tan)));
            m_glEnableVertexAttribArray(4);
            m_glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, binrm)));
            m_glEnableVertexAttribArray(5);
            m_glVertexAttribPointer(5, 4, GL_UNSIGNED_BYTE, GL_TRUE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, col0)));
            m_glEnableVertexAttribArray(6);
            m_glVertexAttribPointer(6, 4, GL_UNSIGNED_BYTE, GL_TRUE, d_stride, reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, col1)));
            for (GLuint tc = 0; tc < 8u; ++tc) {
                m_glEnableVertexAttribArray(8u + tc);
                m_glVertexAttribPointer(8u + tc, 3, GL_FLOAT, GL_FALSE, d_stride,
                                        reinterpret_cast<const void*>(offsetof(DolphinGpuVertex, uv) + tc * sizeof(float) * 3u));
            }
            m_glBindBuffer(GL_ARRAY_BUFFER, 0);
            m_glBindVertexArray(m_vao);
        }

        if (m_glBufferData && m_glBindBufferBase) {
            m_glGenBuffers(1, &m_vs_ubo);
            m_glBindBuffer(GL_UNIFORM_BUFFER, m_vs_ubo);
            m_vs_ubo_cap = 16384;
            m_glBufferData(GL_UNIFORM_BUFFER, m_vs_ubo_cap, nullptr, GL_DYNAMIC_DRAW);
            m_glGenBuffers(1, &m_ps_ubo);
            m_glBindBuffer(GL_UNIFORM_BUFFER, m_ps_ubo);
            m_ps_ubo_cap = 16384;
            m_glBufferData(GL_UNIFORM_BUFFER, m_ps_ubo_cap, nullptr, GL_DYNAMIC_DRAW);
            m_glBindBuffer(GL_UNIFORM_BUFFER, 0);
            m_glBindBufferBase(GL_UNIFORM_BUFFER, 2, m_vs_ubo);
            m_glBindBufferBase(GL_UNIFORM_BUFFER, 1, m_ps_ubo);
        }
    }

    glEnable(GL_PROGRAM_POINT_SIZE);
    InitCorePresentShaders();
    InitSharedVertexShader();
    WarmupTevShaderCache();

    if (m_glGenFramebuffers && m_glBindFramebuffer && m_glFramebufferTexture2D &&
        m_glGenRenderbuffers && m_glBindRenderbuffer && m_glRenderbufferStorage &&
        m_glFramebufferRenderbuffer && m_glCheckFramebufferStatus) {

        // 1. Direct draw texture for native hardware Virtual EFB (640x528 RGBA8)
        glGenTextures(1, &m_efb_color_tex);
        glBindTexture(GL_TEXTURE_2D, m_efb_color_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, EFB_WIDTH, EFB_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

        // 2. Presentation texture for scanout of completed frames (640x480 RGBA8)
        glGenTextures(1, &m_efb_display_tex);
        glBindTexture(GL_TEXTURE_2D, m_efb_display_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, DISP_WIDTH, DISP_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

        // 3. Depth Renderbuffer (Depth24 640x528)
        m_glGenRenderbuffers(1, &m_efb_depth_rb);
        m_glBindRenderbuffer(GL_RENDERBUFFER, m_efb_depth_rb);
        m_glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, EFB_WIDTH, EFB_HEIGHT);

        // 4. Configure main EFB FBO (640x528) + auxiliary FBOs for GXCopyDisp / GXCopyTex
        m_glGenFramebuffers(1, &m_efb_fbo);
        m_glBindFramebuffer(GL_FRAMEBUFFER, m_efb_fbo);
        m_glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, m_efb_color_tex, 0);
        m_glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, m_efb_depth_rb);

        GLenum status = m_glCheckFramebufferStatus(GL_FRAMEBUFFER);
        if (status == GL_FRAMEBUFFER_COMPLETE) {
            std::printf("[GL-FBO] Virtual EFB FBO inicializado exitosamente (%dx%d RGBA8 + Depth24)!\n",
                        EFB_WIDTH, EFB_HEIGHT);
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClearDepth(1.0);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        } else {
            std::fprintf(stderr, "[GL-FBO] Error al configurar FBO EFB: 0x%04X\n", status);
        }

        m_glGenFramebuffers(1, &m_efb_display_fbo);
        m_glBindFramebuffer(GL_FRAMEBUFFER, m_efb_display_fbo);
        m_glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, m_efb_display_tex, 0);
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        m_glGenFramebuffers(1, &m_efb_copy_fbo);
        m_glBindFramebuffer(GL_FRAMEBUFFER, 0);
    } else {
        std::fprintf(stderr, "[GL-FBO] Extensiones FBO no disponibles en el driver OpenGL.\n");
    }
    for (int ei = 0; ei < 16; ++ei) {
        GLenum err = glGetError();
        if (err == GL_NO_ERROR) break;
        std::fprintf(stderr, "[GFX-GL-ERR] InitGlResources: 0x%X\n", static_cast<unsigned>(err));
    }
#endif
}

#if defined(_WIN32)
GLuint Ggsea4RenderDevice::CompileDolphinGlShader(GLenum type, const std::string& body, uint64_t uid) {
    if (!m_glCreateShader || !m_glShaderSource || !m_glCompileShader || !m_glGetShaderiv) return 0;
    const GLuint sh = m_glCreateShader(type);
    if (!sh) return 0;
    const char* srcs[2] = {kDolphinGlslHeader, body.c_str()};
    const GLint lens[2] = {
        static_cast<GLint>(std::strlen(kDolphinGlslHeader)),
        static_cast<GLint>(body.size())
    };
    m_glShaderSource(sh, 2, srcs, lens);
    m_glCompileShader(sh);
    GLint ok = 0;
    m_glGetShaderiv(sh, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        ++m_dolphin_shader_errors;
        if (m_dolphin_shader_errors <= 5u) {
            char log[2048] = {};
            if (m_glGetShaderInfoLog) m_glGetShaderInfoLog(sh, sizeof(log) - 1, nullptr, log);
            std::fprintf(stderr, "[DOLPHIN-SHADER-ERR] %s uid=0x%llX compile failed:\n%s\n",
                         (type == GL_VERTEX_SHADER) ? "VS" : "PS",
                         static_cast<unsigned long long>(uid), log);
        }
        if (m_glDeleteShader) m_glDeleteShader(sh);
        return 0;
    }
    return sh;
}
#endif

#if defined(_WIN32)
GLuint Ggsea4RenderDevice::GetOrCompileDolphinProgram(const moderngekko::GxStateView& state,
                                  moderngekko::GxTopology topology,
                                  uint8_t vat,
                                  const moderngekko::DolphinShaderCapabilities& caps,
                                  const moderngekko::DolphinShaderOptions& opts) {
    const auto uids = moderngekko::DolphinShaderCompiler::ComputeUids(
        state, topology, vat, moderngekko::DolphinShaderApi::OpenGl, caps, opts);
    const DolphinProgramKey key{uids.vertex_uid, uids.pixel_uid};
    if (auto it = m_dolphin_prog_cache.find(key); it != m_dolphin_prog_cache.end()) {
        return it->second;
    }

    GLuint vs = 0;
    if (auto vit = m_dolphin_vs_cache.find(uids.vertex_uid); vit != m_dolphin_vs_cache.end()) {
        vs = vit->second;
    } else {
        const std::string vs_src = moderngekko::DolphinShaderCompiler::CompileVertexShader(
            state, vat, moderngekko::DolphinShaderApi::OpenGl, caps, opts);
        vs = CompileDolphinGlShader(GL_VERTEX_SHADER, vs_src, uids.vertex_uid);
        m_dolphin_vs_cache.emplace(uids.vertex_uid, vs);
    }

    GLuint ps = 0;
    if (auto pit = m_dolphin_ps_cache.find(uids.pixel_uid); pit != m_dolphin_ps_cache.end()) {
        ps = pit->second;
    } else {
        const std::string ps_src = moderngekko::DolphinShaderCompiler::CompilePixelShader(
            state, vat, moderngekko::DolphinShaderApi::OpenGl, caps, opts);
        ps = CompileDolphinGlShader(GL_FRAGMENT_SHADER, ps_src, uids.pixel_uid);
        m_dolphin_ps_cache.emplace(uids.pixel_uid, ps);
    }

    if (!vs || !ps || !m_glCreateProgram || !m_glAttachShader || !m_glLinkProgram || !m_glGetProgramiv) {
        m_dolphin_prog_cache.emplace(key, 0u);
        return 0;
    }

    const GLuint prog = m_glCreateProgram();
    m_glAttachShader(prog, vs);
    m_glAttachShader(prog, ps);
    m_glLinkProgram(prog);
    GLint ok = 0;
    m_glGetProgramiv(prog, GL_LINK_STATUS, &ok);
    if (!ok) {
        ++m_dolphin_shader_errors;
        if (m_dolphin_shader_errors <= 5u) {
            char log[2048] = {};
            if (m_glGetProgramInfoLog) m_glGetProgramInfoLog(prog, sizeof(log) - 1, nullptr, log);
            std::fprintf(stderr, "[DOLPHIN-SHADER-ERR] Link failed (vs=0x%llX ps=0x%llX):\n%s\n",
                         static_cast<unsigned long long>(uids.vertex_uid),
                         static_cast<unsigned long long>(uids.pixel_uid), log);
        }
        if (m_glDeleteProgram) m_glDeleteProgram(prog);
        m_dolphin_prog_cache.emplace(key, 0u);
        return 0;
    }
    ++m_shader_compile_count;
    m_dolphin_prog_cache.emplace(key, prog);
    return prog;
}
#endif

#if defined(_WIN32)
void Ggsea4RenderDevice::ComputeViewportAndScissor(const moderngekko::GxStateView& state,
                               float* out_wd_half, float* out_ht_half,
                               float* out_zrange, float* out_farz,
                               GLint* out_vp_x, GLint* out_vp_y, GLsizei* out_vp_w, GLsizei* out_vp_h,
                               double* out_depth_n, double* out_depth_f,
                               bool* out_sc_enabled, int* out_sc_x, int* out_sc_y, int* out_sc_w, int* out_sc_h) {
    const float* xf_floats = reinterpret_cast<const float*>(state.xf.data());
    const uint32_t sc_off = state.bp[0x59u];
    const int x_off = (sc_off != 0u) ? static_cast<int>((sc_off & 0x1FFu) << 1) : 342;
    const int y_off = (sc_off != 0u) ? static_cast<int>(((sc_off >> 10) & 0x1FFu) << 1) : 342;
    float vp_wd_half = m_cached_vp_wd_half;
    float vp_ht_half = m_cached_vp_ht_half;
    float vp_zrange  = m_cached_vp_zrange;
    float vp_farz    = m_cached_vp_farz;
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
        const float efb_vp_left = vp_xorig - std::fabs(vp_wd_half);
        const float efb_vp_top  = vp_yorig - std::fabs(vp_ht_half);

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

    *out_wd_half = vp_wd_half;
    *out_ht_half = vp_ht_half;
    *out_zrange = vp_zrange;
    *out_farz = vp_farz;
    *out_vp_x = new_vp_x;
    *out_vp_y = new_vp_y;
    *out_vp_w = new_vp_w;
    *out_vp_h = new_vp_h;
    *out_depth_n = new_depth_n;
    *out_depth_f = new_depth_f;
    *out_sc_enabled = new_sc_enabled;
    *out_sc_x = new_sc_x;
    *out_sc_y = new_sc_y;
    *out_sc_w = new_sc_w;
    *out_sc_h = new_sc_h;
}
#endif

#if defined(_WIN32)
size_t Ggsea4RenderDevice::UploadEboIndices(const uint32_t* indices, size_t idx_count) {
    size_t ebo_start_idx = 0;
    const GLsizeiptr needed_idx_bytes = static_cast<GLsizeiptr>(idx_count * sizeof(uint32_t));
    if (m_ebo_mapped && idx_count <= m_ebo_max_idxs) {
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
        ebo_start_idx = m_ebo_cursor_idx;
        std::memcpy(m_ebo_mapped + ebo_start_idx * sizeof(uint32_t), indices, static_cast<size_t>(needed_idx_bytes));
        m_ebo_cursor_idx += idx_count;
    } else if (m_glBufferSubData && m_ebo_capacity > 0) {
        m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
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
                          needed_idx_bytes, indices);
        m_ebo_cursor_idx += idx_count;
    }
    return ebo_start_idx;
}
#endif

#if defined(_WIN32)
bool Ggsea4RenderDevice::SubmitDolphinDraw(const moderngekko::GxDrawPacket& packet,
                       const moderngekko::GxDecodedDraw& decoded,
                       const moderngekko::GxStateView& state) {
    if (m_dolphin_vao == 0 || m_dolphin_vbo == 0 || m_vs_ubo == 0 || m_ps_ubo == 0 ||
        !m_glUseProgram || !m_glBindBufferBase || !m_glBindVertexArray) {
        return false;
    }

    if (m_batch_active) {
        FlushPendingBatch();
    }

    const auto caps = moderngekko::DolphinShaderCompiler::DefaultOpenGl45Capabilities();
    const moderngekko::DolphinShaderOptions opts{};
    if (!m_d_pstate_valid ||
        m_d_pstate_bp_gen != state.bp_pipeline_gen ||
        m_d_pstate_vp_gen != state.xf_vp_gen ||
        m_d_pstate_topo != decoded.topology) {
        m_d_pstate_cached = moderngekko::DolphinShaderCompiler::ComputePipelineState(
            state, decoded.topology, caps);
        m_d_pstate_bp_gen = state.bp_pipeline_gen;
        m_d_pstate_vp_gen = state.xf_vp_gen;
        m_d_pstate_topo = decoded.topology;
        m_d_pstate_valid = true;
    }
    const auto& pstate = m_d_pstate_cached;

    if (pstate.cull_mode == 3u && decoded.topology == moderngekko::GxTopology::Triangles) {
        return true;
    }

    const bool use_indexed = (m_ebo != 0 && m_glDrawElementsBaseVertex != nullptr);
    const size_t idx_count = decoded.indices.size();
    const size_t vert_count = use_indexed ? decoded.vertices.size() : idx_count;
    if (vert_count == 0u || idx_count == 0u) {
        return true;
    }

    if (!m_d_prog_valid ||
        m_d_prog_cp_gen != state.cp_vcd_gen ||
        m_d_prog_vs_gen != state.xf_vs_uid_gen ||
        m_d_prog_ps_gen != state.bp_ps_uid_gen ||
        m_d_prog_vat != packet.vat) {
        m_d_prog_cached = GetOrCompileDolphinProgram(state, decoded.topology, packet.vat, caps, opts);
        m_d_prog_cp_gen = state.cp_vcd_gen;
        m_d_prog_vs_gen = state.xf_vs_uid_gen;
        m_d_prog_ps_gen = state.bp_ps_uid_gen;
        m_d_prog_vat = packet.vat;
        m_d_prog_valid = true;
    }
    const GLuint prog = m_d_prog_cached;
    if (prog == 0) {
        FlushDolphinBatch();
        return false;
    }

    float vp_wd_half = 320.0f, vp_ht_half = -240.0f, vp_zrange = 16777215.0f, vp_farz = 16777215.0f;
    GLint new_vp_x = 0, new_vp_y = 0;
    GLsizei new_vp_w = 640, new_vp_h = 480;
    double new_depth_n = 1.0, new_depth_f = 0.0;
    bool new_sc_enabled = false;
    int new_sc_x = 0, new_sc_y = 0, new_sc_w = 0, new_sc_h = 0;
    ComputeViewportAndScissor(state,
                              &vp_wd_half, &vp_ht_half, &vp_zrange, &vp_farz,
                              &new_vp_x, &new_vp_y, &new_vp_w, &new_vp_h,
                              &new_depth_n, &new_depth_f,
                              &new_sc_enabled, &new_sc_x, &new_sc_y, &new_sc_w, &new_sc_h);

    if (pstate.use_vertex_depth_range) {
        new_depth_n = (vp_zrange < 0.0f) ? 0.0 : 1.0;
        new_depth_f = (vp_zrange < 0.0f) ? 1.0 : 0.0;
    }

    if (!m_d_texmask_valid || m_d_texmask_gen != state.bp_used_tex_gen) {
        const uint32_t genmode = state.bp[0x00u];
        const uint32_t num_tev_stages = std::clamp<uint32_t>(((genmode >> 10) & 0xFu) + 1u, 1u, 16u);
        const uint32_t num_ind_stages = std::min<uint32_t>(4u, (genmode >> 16) & 7u);
        uint32_t mask = 0u;
        for (uint32_t st = 0; st < num_tev_stages; ++st) {
            const uint32_t tref = state.bp[0x28u + (st >> 1)];
            const uint32_t shift = (st & 1u) ? 12u : 0u;
            if (((tref >> (shift + 6u)) & 1u) != 0u) {
                const uint32_t tmap = (tref >> shift) & 7u;
                mask |= (1u << tmap);
            }
        }
        const uint32_t iref = state.bp[0x27u];
        for (uint32_t s = 0; s < num_ind_stages; ++s) {
            const uint32_t tmap = (iref >> (6u * s)) & 7u;
            mask |= (1u << tmap);
        }
        m_d_texmask_cached = mask;
        m_d_texmask_gen = state.bp_used_tex_gen;
        m_d_texmask_valid = true;
    }
    const uint32_t used_texmap_mask = m_d_texmask_cached;

    if (!m_d_texres_valid ||
        m_d_texres_bp_gen != state.bp_tex_gen ||
        m_d_texres_tmem_gen != state.tmem_generation ||
        m_d_texres_mask != used_texmap_mask ||
        m_d_texres_frame != m_current_frame) {
        m_d_tex_w.fill(1u);
        m_d_tex_h.fill(1u);
        m_d_stage_gl_tex.fill(0u);
        for (uint32_t m = used_texmap_mask; m != 0u; ) {
            const uint32_t tm = static_cast<uint32_t>(std::countr_zero(m));
            m &= (m - 1u);
            uint32_t rw = 1u, rh = 1u;
            int rmode = 0;
            const GLuint gtex = ResolveStageTexture(static_cast<uint8_t>(tm), state, &rw, &rh, &rmode);
            m_d_stage_gl_tex[tm] = gtex ? gtex : m_dummy_white_tex;
            m_d_tex_w[tm] = rw;
            m_d_tex_h[tm] = rh;
        }
        m_d_texres_bp_gen = state.bp_tex_gen;
        m_d_texres_tmem_gen = state.tmem_generation;
        m_d_texres_mask = used_texmap_mask;
        m_d_texres_frame = m_current_frame;
        m_d_texres_valid = true;
    }

    const bool need_vs_ubo = !(m_d_vs_ubo_valid &&
                               m_d_vs_xf_gen == state.xf_vs_ubo_gen &&
                               m_d_vs_cp_gen == state.cp_vcd_gen &&
                               m_d_vs_bp_pipe_gen == state.bp_pipeline_gen &&
                               m_d_vs_vat == packet.vat &&
                               m_d_vs_disp_w == m_last_disp_w &&
                               m_d_vs_disp_h == m_last_disp_h);
    const bool need_ps_ubo = !(m_d_ps_ubo_valid &&
                               m_d_ps_bp_gen == state.bp_ps_ubo_gen &&
                               m_d_ps_col_gen == state.bp_tev_col_generation &&
                               m_d_ps_tex_gen == state.bp_tex_gen &&
                               m_d_ps_tev_gen == state.bp_tev_generation &&
                               m_d_ps_vp_gen == state.xf_vp_gen &&
                               m_d_ps_disp_w == m_last_disp_w &&
                               m_d_ps_disp_h == m_last_disp_h &&
                               m_d_ps_tex_w == m_d_tex_w &&
                               m_d_ps_tex_h == m_d_tex_h);
    if (need_vs_ubo || need_ps_ubo) {
        const float fb_vp_w = static_cast<float>((m_last_disp_w > 0 && m_last_disp_w <= EFB_WIDTH) ? m_last_disp_w : 512);
        const float fb_vp_h = static_cast<float>((m_last_disp_h > 0 && m_last_disp_h <= EFB_HEIGHT) ? m_last_disp_h : 448);
        moderngekko::DolphinShaderCompiler::PopulateConstants(
            state, packet.vat, m_d_tex_w, m_d_tex_h, fb_vp_w, fb_vp_h, caps,
            need_vs_ubo ? &m_vs_ubo_cpu : nullptr,
            need_ps_ubo ? &m_ps_ubo_cpu : nullptr);
        if (need_vs_ubo) {
            m_d_vs_xf_gen = state.xf_vs_ubo_gen;
            m_d_vs_cp_gen = state.cp_vcd_gen;
            m_d_vs_bp_pipe_gen = state.bp_pipeline_gen;
            m_d_vs_vat = packet.vat;
            m_d_vs_disp_w = m_last_disp_w;
            m_d_vs_disp_h = m_last_disp_h;
            m_d_vs_ubo_valid = true;
        }
        if (need_ps_ubo) {
            m_d_ps_bp_gen = state.bp_ps_ubo_gen;
            m_d_ps_col_gen = state.bp_tev_col_generation;
            m_d_ps_tex_gen = state.bp_tex_gen;
            m_d_ps_tev_gen = state.bp_tev_generation;
            m_d_ps_vp_gen = state.xf_vp_gen;
            m_d_ps_disp_w = m_last_disp_w;
            m_d_ps_disp_h = m_last_disp_h;
            m_d_ps_tex_w = m_d_tex_w;
            m_d_ps_tex_h = m_d_tex_h;
            m_d_ps_ubo_valid = true;
        }
    }
    const bool vs_ubo_changed = need_vs_ubo && !m_vs_ubo_cpu.empty() &&
                                (!m_vs_ubo_valid || m_last_vs_ubo != m_vs_ubo_cpu);
    const bool ps_ubo_changed = need_ps_ubo && !m_ps_ubo_cpu.empty() &&
                                (!m_ps_ubo_valid || m_last_ps_ubo != m_ps_ubo_cpu);

    const uint32_t vcd_l = (state.cp.size() > 0x50u) ? state.cp[0x50u] : 0u;
    const uint32_t vcd_h = (state.cp.size() > 0x60u) ? state.cp[0x60u] : 0u;
    uint32_t active_uv_mask = 0u;
    for (uint32_t t = 0; t < 8u; ++t) {
        if ((((vcd_h >> (t * 2u)) & 3u) != 0u) || (((vcd_l >> (1u + t)) & 1u) != 0u)) {
            active_uv_mask |= (1u << t);
        }
    }
    auto pack_vtx = [active_uv_mask](DolphinGpuVertex& dst, const moderngekko::GxVertex& vtx) {
        dst.pos[0] = vtx.position[0];
        dst.pos[1] = vtx.position[1];
        dst.pos[2] = vtx.position[2];
        dst.posmtx = std::min<uint32_t>(vtx.position_matrix & 0x3Fu, 61u);
        dst.nrm[0] = vtx.normal[0];
        dst.nrm[1] = vtx.normal[1];
        dst.nrm[2] = vtx.normal[2];
        dst.tan[0] = vtx.tangent[0];
        dst.tan[1] = vtx.tangent[1];
        dst.tan[2] = vtx.tangent[2];
        dst.binrm[0] = vtx.binormal[0];
        dst.binrm[1] = vtx.binormal[1];
        dst.binrm[2] = vtx.binormal[2];
        dst.col0 = ByteSwap32(vtx.color[0]);
        dst.col1 = ByteSwap32(vtx.color[1]);
        for (uint32_t m = active_uv_mask; m != 0u; ) {
            const uint32_t t = static_cast<uint32_t>(std::countr_zero(m));
            m &= (m - 1u);
            dst.uv[t][0] = vtx.texcoord[t][0];
            dst.uv[t][1] = vtx.texcoord[t][1];
            dst.uv[t][2] = static_cast<float>(std::min<uint32_t>(vtx.texture_matrix[t] & 0x3Fu, 61u));
        }
    };

    const bool can_batch = (decoded.topology == moderngekko::GxTopology::Triangles) &&
                           use_indexed &&
                           (m_dolphin_vbo_mapped != nullptr) &&
                           (m_ebo_mapped != nullptr) &&
                           (vert_count <= m_dolphin_vbo_max_verts) &&
                           (idx_count <= m_ebo_max_idxs);

    if (m_dolphin_batch_active) {
        bool matches = can_batch &&
                       !vs_ubo_changed &&
                       !ps_ubo_changed &&
                       prog == m_dolphin_batch_prog &&
                       DolphinPipelineStateEquals(pstate, m_dolphin_batch_pstate) &&
                       new_vp_x == m_dolphin_batch_vp_x &&
                       new_vp_y == m_dolphin_batch_vp_y &&
                       new_vp_w == m_dolphin_batch_vp_w &&
                       new_vp_h == m_dolphin_batch_vp_h &&
                       new_depth_n == m_dolphin_batch_depth_n &&
                       new_depth_f == m_dolphin_batch_depth_f &&
                       new_sc_enabled == m_dolphin_batch_sc_enabled &&
                       (!new_sc_enabled || (new_sc_x == m_dolphin_batch_sc_x &&
                                            new_sc_y == m_dolphin_batch_sc_y &&
                                            new_sc_w == m_dolphin_batch_sc_w &&
                                            new_sc_h == m_dolphin_batch_sc_h));
        if (matches) {
            for (uint32_t m = used_texmap_mask; m != 0u; ) {
                const uint32_t tm = static_cast<uint32_t>(std::countr_zero(m));
                m &= (m - 1u);
                GLuint target_tex = m_d_stage_gl_tex[tm];
                if (target_tex == 0u) target_tex = m_dummy_white_tex;
                if (m_bound_tex[tm] != target_tex) {
                    matches = false;
                    break;
                }
            }
        }
        if (matches) {
            const size_t v_cur = m_dolphin_vbo_cursor;
            const size_t e_cur = m_ebo_cursor_idx;
            if (v_cur + vert_count > m_dolphin_vbo_max_verts ||
                (v_cur / DOLPHIN_VBO_Q_VERTS) != ((v_cur + vert_count - 1u) / DOLPHIN_VBO_Q_VERTS) ||
                e_cur + idx_count > m_ebo_max_idxs ||
                (e_cur / EBO_Q_IDXS) != ((e_cur + idx_count - 1u) / EBO_Q_IDXS)) {
                matches = false;
            }
        }
        if (matches) {
            DolphinGpuVertex* vtx_dst = reinterpret_cast<DolphinGpuVertex*>(m_dolphin_vbo_mapped) + m_dolphin_vbo_cursor;
            for (size_t i = 0; i < vert_count; ++i) {
                pack_vtx(vtx_dst[i], decoded.vertices[i]);
            }
            uint32_t* ebo_dst = reinterpret_cast<uint32_t*>(m_ebo_mapped) + m_ebo_cursor_idx;
            const uint32_t vtx_rel = static_cast<uint32_t>(m_dolphin_vbo_cursor - m_dolphin_batch_vbo_base);
            const uint32_t* src_idx = decoded.indices.data();
            if (vtx_rel == 0u) {
                std::memcpy(ebo_dst, src_idx, idx_count * sizeof(uint32_t));
            } else {
                for (size_t i = 0; i < idx_count; ++i) {
                    ebo_dst[i] = src_idx[i] + vtx_rel;
                }
            }
            m_dolphin_vbo_cursor += vert_count;
            m_ebo_cursor_idx += idx_count;
            m_dolphin_batch_ebo_count += idx_count;
            m_has_drawn_in_efb = true;
            ++m_draws_since_clear;
            return true;
        }
        FlushDolphinBatch();
    }

    if (vs_ubo_changed || ps_ubo_changed) {
        auto upload_ubo = [&](GLuint ubo, const std::vector<uint8_t>& cpu_buf, std::vector<uint8_t>& last_buf,
                              bool& valid, GLsizeiptr& cap) {
            const GLsizeiptr sz = static_cast<GLsizeiptr>(cpu_buf.size());
            m_glBindBuffer(GL_UNIFORM_BUFFER, ubo);
            if (sz > cap) {
                cap = sz;
                m_glBufferData(GL_UNIFORM_BUFFER, cap, cpu_buf.data(), GL_DYNAMIC_DRAW);
            } else {
                m_glBufferSubData(GL_UNIFORM_BUFFER, 0, sz, cpu_buf.data());
            }
            last_buf = cpu_buf;
            valid = true;
        };
        if (vs_ubo_changed) upload_ubo(m_vs_ubo, m_vs_ubo_cpu, m_last_vs_ubo, m_vs_ubo_valid, m_vs_ubo_cap);
        if (ps_ubo_changed) upload_ubo(m_ps_ubo, m_ps_ubo_cpu, m_last_ps_ubo, m_ps_ubo_valid, m_ps_ubo_cap);
        m_glBindBuffer(GL_UNIFORM_BUFFER, 0);
    }

    if (!m_ubos_bound) {
        m_glBindBufferBase(GL_UNIFORM_BUFFER, 2, m_vs_ubo);
        m_glBindBufferBase(GL_UNIFORM_BUFFER, 1, m_ps_ubo);
        m_ubos_bound = true;
    }

    if (m_efb_fbo != 0 && m_glBindFramebuffer && !m_bound_efb_fbo) {
        m_glBindFramebuffer(GL_FRAMEBUFFER, m_efb_fbo);
        m_bound_efb_fbo = true;
    }

    if (!m_dolphin_clip_enabled) {
        glEnable(GL_DEPTH_CLAMP);
        glEnable(GL_CLIP_DISTANCE0);
        glEnable(GL_CLIP_DISTANCE1);
        m_dolphin_clip_enabled = true;
    }

    if (!m_dolphin_vao_bound) {
        m_glBindVertexArray(m_dolphin_vao);
        m_dolphin_vao_bound = true;
        m_vbo_attribs_bound = false;
    }

    if (m_current_program != prog) {
        m_glUseProgram(prog);
        m_current_program = prog;
        m_last_tev_prog = nullptr;
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

    if (!m_dolphin_state_valid || m_last_dolphin_pstate.cull_mode != pstate.cull_mode) {
        if (pstate.cull_mode != 0u) {
            glEnable(GL_CULL_FACE);
            glCullFace(GL_BACK);
            glFrontFace(pstate.cull_mode == 2u ? GL_CCW : GL_CW);
        } else {
            glDisable(GL_CULL_FACE);
        }
        m_cached_cull = 0xFFFFFFFFu;
    }

    if (!m_dolphin_state_valid ||
        m_last_dolphin_pstate.depth_test != pstate.depth_test ||
        m_last_dolphin_pstate.depth_update != pstate.depth_update ||
        m_last_dolphin_pstate.depth_func != pstate.depth_func) {
        static const GLenum gl_compare_modes[8] = {
            GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL,
            GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS
        };
        if (pstate.depth_test) {
            glEnable(GL_DEPTH_TEST);
            glDepthMask(pstate.depth_update ? GL_TRUE : GL_FALSE);
            glDepthFunc(gl_compare_modes[pstate.depth_func & 7u]);
        } else {
            glDisable(GL_DEPTH_TEST);
            glDepthMask(GL_FALSE);
        }
        m_cached_zmode = 0xFFFFFFFFu;
    }

    const bool blend_changed = !m_dolphin_state_valid ||
        m_last_dolphin_pstate.blend_enable != pstate.blend_enable ||
        m_last_dolphin_pstate.subtract != pstate.subtract ||
        m_last_dolphin_pstate.subtract_alpha != pstate.subtract_alpha ||
        m_last_dolphin_pstate.use_dual_src != pstate.use_dual_src ||
        m_last_dolphin_pstate.src_factor != pstate.src_factor ||
        m_last_dolphin_pstate.dst_factor != pstate.dst_factor ||
        m_last_dolphin_pstate.src_factor_alpha != pstate.src_factor_alpha ||
        m_last_dolphin_pstate.dst_factor_alpha != pstate.dst_factor_alpha ||
        m_last_dolphin_pstate.logic_op_enable != pstate.logic_op_enable ||
        m_last_dolphin_pstate.logic_mode != pstate.logic_mode ||
        m_last_dolphin_pstate.color_update != pstate.color_update ||
        m_last_dolphin_pstate.alpha_update != pstate.alpha_update;
    if (blend_changed) {
        const bool useDual = pstate.use_dual_src;
        const GLenum src_factors[8] = {
            GL_ZERO, GL_ONE, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
            useDual ? static_cast<GLenum>(GL_SRC1_ALPHA) : static_cast<GLenum>(GL_SRC_ALPHA),
            useDual ? static_cast<GLenum>(GL_ONE_MINUS_SRC1_ALPHA) : static_cast<GLenum>(GL_ONE_MINUS_SRC_ALPHA),
            GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA
        };
        const GLenum dst_factors[8] = {
            GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR,
            useDual ? static_cast<GLenum>(GL_SRC1_ALPHA) : static_cast<GLenum>(GL_SRC_ALPHA),
            useDual ? static_cast<GLenum>(GL_ONE_MINUS_SRC1_ALPHA) : static_cast<GLenum>(GL_ONE_MINUS_SRC_ALPHA),
            GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA
        };
        if (pstate.blend_enable) glEnable(GL_BLEND);
        else glDisable(GL_BLEND);

        const GLenum eq = pstate.subtract ? GL_FUNC_REVERSE_SUBTRACT : GL_FUNC_ADD;
        const GLenum eq_a = pstate.subtract_alpha ? GL_FUNC_REVERSE_SUBTRACT : GL_FUNC_ADD;
        if (m_glBlendEquationSeparate) m_glBlendEquationSeparate(eq, eq_a);
        if (m_glBlendFuncSeparate) {
            m_glBlendFuncSeparate(src_factors[pstate.src_factor & 7u],
                                  dst_factors[pstate.dst_factor & 7u],
                                  src_factors[pstate.src_factor_alpha & 7u],
                                  dst_factors[pstate.dst_factor_alpha & 7u]);
        }

        static const GLenum logic_op_codes[16] = {
            GL_CLEAR, GL_AND, GL_AND_REVERSE, GL_COPY,
            GL_AND_INVERTED, GL_NOOP, GL_XOR, GL_OR,
            GL_NOR, GL_EQUIV, GL_INVERT, GL_OR_REVERSE,
            GL_COPY_INVERTED, GL_OR_INVERTED, GL_NAND, GL_SET
        };
        if (pstate.logic_op_enable) {
            glEnable(GL_COLOR_LOGIC_OP);
            glLogicOp(logic_op_codes[pstate.logic_mode & 0xFu]);
        } else {
            glDisable(GL_COLOR_LOGIC_OP);
        }
        glColorMask(pstate.color_update ? GL_TRUE : GL_FALSE,
                    pstate.color_update ? GL_TRUE : GL_FALSE,
                    pstate.color_update ? GL_TRUE : GL_FALSE,
                    pstate.alpha_update ? GL_TRUE : GL_FALSE);
        m_cached_blend_key = 0xFFFFFFFFu;
    }
    m_last_dolphin_pstate = pstate;
    m_dolphin_state_valid = true;

    for (uint32_t m = used_texmap_mask; m != 0u; ) {
        const uint32_t u = static_cast<uint32_t>(std::countr_zero(m));
        m &= (m - 1u);
        GLuint target_tex = m_d_stage_gl_tex[u];
        if (target_tex == 0u) target_tex = m_dummy_white_tex;
        if (m_bound_tex[u] != target_tex) {
            if (m_glActiveTexture && m_active_tex_unit != u) {
                m_glActiveTexture(GL_TEXTURE0 + u);
                m_active_tex_unit = u;
            }
            glBindTexture(GL_TEXTURE_2D_ARRAY, target_tex);
            m_bound_tex[u] = target_tex;
        }
    }

    const bool use_persist_vbo = (m_dolphin_vbo_mapped != nullptr && vert_count <= m_dolphin_vbo_max_verts);
    size_t vbo_start_vtx = 0;
    DolphinGpuVertex* vtx_dst = nullptr;
    if (use_persist_vbo) {
        const size_t q_cur = std::min<size_t>(m_dolphin_vbo_cursor / DOLPHIN_VBO_Q_VERTS, 3u);
        if (m_dolphin_vbo_cursor + vert_count > m_dolphin_vbo_max_verts) {
            if (m_dolphin_vbo_fences[q_cur]) m_glDeleteSync(m_dolphin_vbo_fences[q_cur]);
            m_dolphin_vbo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
            m_dolphin_vbo_cursor = 0;
            if (m_dolphin_vbo_fences[0]) {
                m_glClientWaitSync(m_dolphin_vbo_fences[0], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                m_glDeleteSync(m_dolphin_vbo_fences[0]);
                m_dolphin_vbo_fences[0] = nullptr;
            }
        } else {
            const size_t q_next = std::min<size_t>((m_dolphin_vbo_cursor + vert_count - 1u) / DOLPHIN_VBO_Q_VERTS, 3u);
            if (q_next != q_cur) {
                if (m_dolphin_vbo_fences[q_cur]) m_glDeleteSync(m_dolphin_vbo_fences[q_cur]);
                m_dolphin_vbo_fences[q_cur] = m_glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
                if (m_dolphin_vbo_fences[q_next]) {
                    m_glClientWaitSync(m_dolphin_vbo_fences[q_next], GL_SYNC_FLUSH_COMMANDS_BIT, 1000000000ULL);
                    m_glDeleteSync(m_dolphin_vbo_fences[q_next]);
                    m_dolphin_vbo_fences[q_next] = nullptr;
                }
            }
        }
        vbo_start_vtx = m_dolphin_vbo_cursor;
        vtx_dst = reinterpret_cast<DolphinGpuVertex*>(m_dolphin_vbo_mapped) + vbo_start_vtx;
        m_dolphin_vbo_cursor += vert_count;
    } else {
        m_dolphin_cpu_batch.resize(vert_count);
        vtx_dst = m_dolphin_cpu_batch.data();
    }

    if (use_indexed) {
        for (size_t i = 0; i < vert_count; ++i) {
            pack_vtx(vtx_dst[i], decoded.vertices[i]);
        }
    } else {
        for (size_t i = 0; i < vert_count; ++i) {
            const uint32_t idx = decoded.indices[i];
            pack_vtx(vtx_dst[i], (idx < decoded.vertices.size()) ? decoded.vertices[idx] : decoded.vertices[0]);
        }
    }

    if (!use_persist_vbo && m_glBufferSubData && m_dolphin_vbo_capacity > 0) {
        const GLsizeiptr needed_bytes = static_cast<GLsizeiptr>(vert_count * sizeof(DolphinGpuVertex));
        m_glBindBuffer(GL_ARRAY_BUFFER, m_dolphin_vbo);
        if (needed_bytes > m_dolphin_vbo_capacity) {
            m_dolphin_vbo_capacity = std::max<GLsizeiptr>(needed_bytes * 2, m_dolphin_vbo_capacity);
            m_glBufferData(GL_ARRAY_BUFFER, m_dolphin_vbo_capacity, nullptr, GL_STREAM_DRAW);
            m_dolphin_vbo_cursor = 0;
        }
        const size_t cap_verts = static_cast<size_t>(m_dolphin_vbo_capacity / sizeof(DolphinGpuVertex));
        if (m_dolphin_vbo_cursor + vert_count > cap_verts) {
            m_glBufferData(GL_ARRAY_BUFFER, m_dolphin_vbo_capacity, nullptr, GL_STREAM_DRAW);
            m_dolphin_vbo_cursor = 0;
        }
        vbo_start_vtx = m_dolphin_vbo_cursor;
        m_glBufferSubData(GL_ARRAY_BUFFER,
                          static_cast<GLintptr>(vbo_start_vtx * sizeof(DolphinGpuVertex)),
                          needed_bytes, m_dolphin_cpu_batch.data());
        m_dolphin_vbo_cursor += vert_count;
        m_glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    GLenum gl_mode = GL_TRIANGLES;
    if (decoded.topology == moderngekko::GxTopology::Lines) gl_mode = GL_LINES;
    else if (decoded.topology == moderngekko::GxTopology::Points) gl_mode = GL_POINTS;

    if (use_indexed) {
        const size_t ebo_start_idx = UploadEboIndices(decoded.indices.data(), idx_count);
        if (can_batch) {
            m_dolphin_batch_active = true;
            m_dolphin_batch_vbo_base = vbo_start_vtx;
            m_dolphin_batch_ebo_start = ebo_start_idx;
            m_dolphin_batch_ebo_count = idx_count;
            m_dolphin_batch_prog = prog;
            m_dolphin_batch_pstate = pstate;
            m_dolphin_batch_vp_x = new_vp_x;
            m_dolphin_batch_vp_y = new_vp_y;
            m_dolphin_batch_vp_w = new_vp_w;
            m_dolphin_batch_vp_h = new_vp_h;
            m_dolphin_batch_depth_n = new_depth_n;
            m_dolphin_batch_depth_f = new_depth_f;
            m_dolphin_batch_sc_enabled = new_sc_enabled;
            m_dolphin_batch_sc_x = new_sc_x;
            m_dolphin_batch_sc_y = new_sc_y;
            m_dolphin_batch_sc_w = new_sc_w;
            m_dolphin_batch_sc_h = new_sc_h;
        } else {
            if (g_perf.enabled) {
                ++g_perf.gl_draw_calls;
            }
            m_glDrawElementsBaseVertex(gl_mode,
                                       static_cast<GLsizei>(idx_count),
                                       GL_UNSIGNED_INT,
                                       reinterpret_cast<const void*>(ebo_start_idx * sizeof(uint32_t)),
                                       static_cast<GLint>(vbo_start_vtx));
        }
    } else {
        if (g_perf.enabled) {
            ++g_perf.gl_draw_calls;
        }
        glDrawArrays(gl_mode, static_cast<GLint>(vbo_start_vtx), static_cast<GLsizei>(vert_count));
    }

    m_has_drawn_in_efb = true;
    ++m_draws_since_clear;
    return true;
}
#endif

void Ggsea4RenderDevice::SubmitDraw(const moderngekko::GxDrawPacket& packet,
                const moderngekko::GxStateView& state)  {
    ++m_draw_count;
    static int s_dropped = 0;
    if (++s_dropped <= 50) {
        std::printf("[GX-DRAW-DROPPED #%d] draw=%llu frame=%u prim=0x%02X vtx=%u vat=%u bytes=%zu VCD=(0x%08X,0x%08X)\n",
                    s_dropped,
                    static_cast<unsigned long long>(m_draw_count),
                    m_current_frame,
                    static_cast<unsigned>(packet.primitive),
                    static_cast<unsigned>(packet.vertex_count),
                    static_cast<unsigned>(packet.vat),
                    packet.vertex_data.size(),
                    state.cp.size() > 0x50u ? state.cp[0x50u] : 0u,
                    state.cp.size() > 0x60u ? state.cp[0x60u] : 0u);
    }
}

#if defined(_WIN32)
void Ggsea4RenderDevice::FlushDolphinBatch() {
    if (!m_dolphin_batch_active) {
        return;
    }
    m_dolphin_batch_active = false;
    if (m_dolphin_batch_ebo_count > 0 && m_glDrawElementsBaseVertex) {
        if (g_perf.enabled) {
            ++g_perf.gl_draw_calls;
        }
        m_glDrawElementsBaseVertex(GL_TRIANGLES,
                                   static_cast<GLsizei>(m_dolphin_batch_ebo_count),
                                   GL_UNSIGNED_INT,
                                   reinterpret_cast<const void*>(m_dolphin_batch_ebo_start * sizeof(uint32_t)),
                                   static_cast<GLint>(m_dolphin_batch_vbo_base));
    }
    m_dolphin_batch_ebo_count = 0;
}
#endif

#if defined(_WIN32)
void Ggsea4RenderDevice::InvalidateGlStateCache() {
    FlushPendingBatch();
    if (m_glBindBuffer) {
        m_glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
    if (m_glBindVertexArray) {
        m_glBindVertexArray(0);
    }
    m_vbo_attribs_bound = false;
    m_dolphin_vao_bound = false;
    m_dolphin_state_valid = false;
    m_d_pstate_valid = false;
    m_d_prog_valid = false;
    m_d_texmask_valid = false;
    m_d_texres_valid = false;
    m_ubos_bound = false;
    if ((m_last_tev_prog != nullptr || m_current_program != 0) && m_glUseProgram) {
        m_glUseProgram(0);
    }
    if (m_glActiveTexture) {
        m_glActiveTexture(GL_TEXTURE0);
    }
    if (m_dolphin_clip_enabled) {
        glDisable(GL_CLIP_DISTANCE0);
        glDisable(GL_CLIP_DISTANCE1);
        glDisable(GL_DEPTH_CLAMP);
        m_dolphin_clip_enabled = false;
    }
    glFrontFace(GL_CW);
    glCullFace(GL_BACK);
    glDisable(GL_COLOR_LOGIC_OP);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDepthMask(GL_TRUE);
    m_bound_efb_fbo = false;
    m_current_program = 0;
    m_last_tev_prog = nullptr;
    m_last_bp_tev_gen = 0;
    m_last_draw_vp_x = -1;
    m_last_depth_n = -1.0;
    m_last_depth_f = -1.0;
    m_vp_cache_valid = false;
    m_cached_vp_sc_off = 0xFFFFFFFFu;
    m_sc_cache_valid = false;
    m_sc_enabled = false;
    m_sc_x = -1;
    m_sc_y = -1;
    m_sc_w = -1;
    m_sc_h = -1;
    m_cached_cull = 0xFFFFFFFFu;
    m_cached_zmode = 0xFFFFFFFFu;
    m_cached_blend_key = 0xFFFFFFFFu;
    m_active_tex_unit = 0xFFFFFFFFu;
    m_bound_tex.fill(0u);
    for (auto& sc : m_stage_tex_cache) sc.valid = false;
}
#endif

