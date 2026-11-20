#include <algorithm>
#include <array>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if defined(_WIN32)
#include <windows.h>
#include <timeapi.h>
#include <GL/gl.h>
#endif

#include "moderngekko/address_space.hpp"
#include "moderngekko/dolphin_shader_compiler.hpp"
#include "moderngekko/gx_command_processor.hpp"
#include "moderngekko/gx_pipeline.hpp"
#include "moderngekko/gx_state_backend.hpp"
#include "moderngekko/gx_texture_decoder.hpp"
#include "moderngekko/gx_vertex_loader.hpp"

extern "C" {
#include "backend/module_abi.h"
#include "frontend/container/dol.h"
#include "frontend/container/rel.h"
}

typedef const DolRecompModule* (*GetModuleFn)(void);
typedef int (*ModuleCallFn)(CPUState* ctx, u32 address);
typedef int (*ModuleRunBlocksFn)(CPUState* ctx, u32 max_blocks);

struct RuntimePerfCounters {
    uint64_t gx_write_qpc = 0;
    uint64_t gl_submit_qpc = 0;
    uint64_t batch_qpc = 0;
    uint64_t copy_efb_qpc = 0;
    uint64_t present_qpc = 0;
    uint64_t draws = 0;
    uint64_t gl_draw_calls = 0;
    uint64_t wgpipe_writes = 0;
    uint64_t frames = 0;
    uint64_t window_start_qpc = 0;
    bool enabled = false;
};
static RuntimePerfCounters g_perf;

#if defined(_WIN32)
struct ScopedPerfQpc {
    uint64_t& acc;
    LARGE_INTEGER t0{};
    bool active;
    explicit ScopedPerfQpc(uint64_t& target) : acc(target), active(g_perf.enabled) {
        if (active) QueryPerformanceCounter(&t0);
    }
    ~ScopedPerfQpc() {
        if (active) {
            LARGE_INTEGER t1{};
            QueryPerformanceCounter(&t1);
            acc += static_cast<uint64_t>(t1.QuadPart - t0.QuadPart);
        }
    }
};
#endif

#if defined(_WIN32)
// OpenGL 2.0 / 3.0+ dynamic entry points for GX TEV GLSL pipeline, Multi-Texture, FBO & VSync
typedef char GLchar;
typedef ptrdiff_t GLsizeiptr;
typedef ptrdiff_t GLintptr;
typedef GLuint(APIENTRY* PFNGLCREATESHADERPROC)(GLenum type);
typedef void(APIENTRY* PFNGLSHADERSOURCEPROC)(GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length);
typedef void(APIENTRY* PFNGLCOMPILESHADERPROC)(GLuint shader);
typedef void(APIENTRY* PFNGLGETSHADERIVPROC)(GLuint shader, GLenum pname, GLint* params);
typedef void(APIENTRY* PFNGLGETSHADERINFOLOGPROC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void(APIENTRY* PFNGLDELETESHADERPROC)(GLuint shader);
typedef GLuint(APIENTRY* PFNGLCREATEPROGRAMPROC)(void);
typedef void(APIENTRY* PFNGLATTACHSHADERPROC)(GLuint program, GLuint shader);
typedef void(APIENTRY* PFNGLBINDATTRIBLOCATIONPROC)(GLuint program, GLuint index, const GLchar* name);
typedef void(APIENTRY* PFNGLLINKPROGRAMPROC)(GLuint program);
typedef void(APIENTRY* PFNGLGETPROGRAMIVPROC)(GLuint program, GLenum pname, GLint* params);
typedef void(APIENTRY* PFNGLGETPROGRAMINFOLOGPROC)(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void(APIENTRY* PFNGLUSEPROGRAMPROC)(GLuint program);
typedef void(APIENTRY* PFNGLDELETEPROGRAMPROC)(GLuint program);
typedef GLint(APIENTRY* PFNGLGETUNIFORMLOCATIONPROC)(GLuint program, const GLchar* name);
typedef void(APIENTRY* PFNGLUNIFORM1IPROC)(GLint location, GLint v0);
typedef void(APIENTRY* PFNGLUNIFORM1IVPROC)(GLint location, GLsizei count, const GLint* value);
typedef void(APIENTRY* PFNGLUNIFORM2FPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void(APIENTRY* PFNGLUNIFORM4FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void(APIENTRY* PFNGLUNIFORM4FVPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void(APIENTRY* PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void(APIENTRY* PFNGLBLENDEQUATIONPROC)(GLenum mode);
typedef void(APIENTRY* PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum modeRGB, GLenum modeAlpha);
typedef void(APIENTRY* PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void(APIENTRY* PFNGLGENBUFFERSPROC)(GLsizei n, GLuint* buffers);
typedef void(APIENTRY* PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void(APIENTRY* PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
typedef void(APIENTRY* PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
typedef void(APIENTRY* PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint* buffers);
typedef void(APIENTRY* PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void(APIENTRY* PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void(APIENTRY* PFNGLVERTEXATTRIBPOINTERPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);
typedef void(APIENTRY* PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex);
typedef struct __GLsync* GLsync;
typedef void(APIENTRY* PFNGLBUFFERSTORAGEPROC)(GLenum target, GLsizeiptr size, const void* data, GLbitfield flags);
typedef void*(APIENTRY* PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLsync(APIENTRY* PFNGLFENCESYNCPROC)(GLenum condition, GLbitfield flags);
typedef GLenum(APIENTRY* PFNGLCLIENTWAITSYNCPROC)(GLsync sync, GLbitfield flags, uint64_t timeout);
typedef void(APIENTRY* PFNGLDELETESYNCPROC)(GLsync sync);
typedef BOOL(APIENTRY* PFNWGLSWAPINTERVALEXTPROC)(int interval);
static PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT = nullptr;

// OpenGL FBO (Framebuffer Object) entry points
typedef void(APIENTRY* PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint* framebuffers);
typedef void(APIENTRY* PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void(APIENTRY* PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void(APIENTRY* PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint* renderbuffers);
typedef void(APIENTRY* PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void(APIENTRY* PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void(APIENTRY* PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef GLenum(APIENTRY* PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef void(APIENTRY* PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint* framebuffers);
typedef void(APIENTRY* PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint* renderbuffers);
typedef void(APIENTRY* PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

#ifndef GL_VERTEX_SHADER
#define GL_VERTEX_SHADER 0x8B31
#endif
#ifndef GL_FRAGMENT_SHADER
#define GL_FRAGMENT_SHADER 0x8B30
#endif
#ifndef GL_COMPILE_STATUS
#define GL_COMPILE_STATUS 0x8B81
#endif
#ifndef GL_LINK_STATUS
#define GL_LINK_STATUS 0x8B82
#endif
#ifndef GL_TEXTURE0
#define GL_TEXTURE0 0x84C0
#endif
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif
#ifndef GL_MIRRORED_REPEAT
#define GL_MIRRORED_REPEAT 0x8370
#endif
#ifndef GL_FUNC_ADD
#define GL_FUNC_ADD 0x8006
#endif
#ifndef GL_FUNC_REVERSE_SUBTRACT
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif
#ifndef GL_ARRAY_BUFFER
#define GL_ARRAY_BUFFER 0x8892
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif
#ifndef GL_STREAM_DRAW
#define GL_STREAM_DRAW 0x88E0
#endif
#ifndef GL_MAP_WRITE_BIT
#define GL_MAP_WRITE_BIT 0x0002
#endif
#ifndef GL_MAP_PERSISTENT_BIT
#define GL_MAP_PERSISTENT_BIT 0x0040
#endif
#ifndef GL_MAP_COHERENT_BIT
#define GL_MAP_COHERENT_BIT 0x0080
#endif
#ifndef GL_SYNC_GPU_COMMANDS_COMPLETE
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#endif
#ifndef GL_SYNC_FLUSH_COMMANDS_BIT
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#endif
#ifndef GL_FRAMEBUFFER
#define GL_FRAMEBUFFER 0x8D40
#endif
#ifndef GL_READ_FRAMEBUFFER
#define GL_READ_FRAMEBUFFER 0x8CA8
#endif
#ifndef GL_DRAW_FRAMEBUFFER
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#endif
#ifndef GL_RENDERBUFFER
#define GL_RENDERBUFFER 0x8D41
#endif
#ifndef GL_COLOR_ATTACHMENT0
#define GL_COLOR_ATTACHMENT0 0x8CE0
#endif
#ifndef GL_DEPTH_ATTACHMENT
#define GL_DEPTH_ATTACHMENT 0x8D00
#endif
#ifndef GL_DEPTH_COMPONENT24
#define GL_DEPTH_COMPONENT24 0x81A6
#endif
#ifndef GL_FRAMEBUFFER_COMPLETE
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#endif
#endif

static std::string read_guest_cstring(CPUState* cpu, u32 addr, size_t max_len = 256) {
    std::string out;
    if (addr < 0x7F000000u || addr >= 0x81800000u) {
        return "<invalid-ptr>";
    }
    for (size_t i = 0; i < max_len; ++i) {
        u8 ch = mem_read8(cpu, static_cast<u32>(addr + i));
        if (ch == 0) break;
        out.push_back(static_cast<char>(ch));
    }
    return out;
}

static u8* resolve_guest_ptr(CPUState* cpu, u32 addr, u32 size) {
    if (addr >= GC_RAM_BASE && (addr - GC_RAM_BASE) + size <= GC_MAIN_RAM_SIZE) {
        return cpu->ram + (addr - GC_RAM_BASE);
    }
    if (addr >= GC_VM_BASE && (addr - GC_VM_BASE) + size <= cpu->mem2_size) {
        return cpu->mem2 + (addr - GC_VM_BASE);
    }
    return nullptr;
}

// ============================================================================
// Opciones de Calidad de Vida (QoL): Relación de Aspecto & Presentación
// ============================================================================
enum class AspectRatioMode {
    Original_4_3,
    Widescreen_16_9,
    Stretch
};

// ============================================================================
// Convertidor YUY2 (GameCube XFB) -> RGBA8 para OpenGL Scanout
// ============================================================================
static bool convert_xfb_yuy2_to_rgba8(const u8* src, u32 width, u32 height, u32 stride_bytes, u32* dst_rgba) {
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

static bool write_bgr24_bmp(const char* filepath, int width, int height, const u8* pixels, size_t row_stride) {
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

static bool save_frame_to_bmp(const char* filepath, int width, int height) {
    if (width <= 0 || height <= 0) return false;
    const size_t row_stride = (static_cast<size_t>(width) * 3u + 3u) & ~size_t(3u);
    std::vector<u8> pixels(row_stride * static_cast<size_t>(height), 0);
    glPixelStorei(GL_PACK_ALIGNMENT, 4);
    glReadPixels(0, 0, width, height, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels.data());
    return write_bgr24_bmp(filepath, width, height, pixels.data(), row_stride);
}

static bool save_yuv420_to_bmp(const char* filepath, int width, int height, const u8* yuv) {
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

static bool save_rgba8_to_bmp(const char* filepath, int width, int height, const u32* rgba) {
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

static CPUState* g_active_cpu = nullptr;

// ============================================================================
// Ggsea4RenderDevice: Implementación OpenGL + GLSL GX TEV + EFB-to-Texture
// ============================================================================
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
#if defined(_WIN32)
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
        }
        if (m_vbo && m_glDeleteBuffers) {
            m_glDeleteBuffers(1, &m_vbo);
            m_vbo = 0;
        }
        if (m_ebo && m_glDeleteBuffers) {
            m_glDeleteBuffers(1, &m_ebo);
            m_ebo = 0;
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
#endif
    }

    void InitGlResources() {
#if defined(_WIN32)
        glGenTextures(1, &m_xfb_tex);
        glBindTexture(GL_TEXTURE_2D, m_xfb_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, DISP_WIDTH, DISP_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, m_xfb_rgba.data());

        const std::uint32_t white_px = 0xFFFFFFFFu;
        glGenTextures(1, &m_dummy_white_tex);
        glBindTexture(GL_TEXTURE_2D, m_dummy_white_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &white_px);

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

        InitSharedVertexShader();
        WarmupTevShaderCache();

        if (m_glGenFramebuffers && m_glBindFramebuffer && m_glFramebufferTexture2D &&
            m_glGenRenderbuffers && m_glBindRenderbuffer && m_glRenderbufferStorage &&
            m_glFramebufferRenderbuffer && m_glCheckFramebufferStatus) {

            // 1. Textura de dibujo directo para Virtual EFB hardware nativo (640x528 RGBA8)
            glGenTextures(1, &m_efb_color_tex);
            glBindTexture(GL_TEXTURE_2D, m_efb_color_tex);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, EFB_WIDTH, EFB_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

            // 2. Textura de presentación para scanout de fotogramas listos (640x480 RGBA8)
            glGenTextures(1, &m_efb_display_tex);
            glBindTexture(GL_TEXTURE_2D, m_efb_display_tex);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, DISP_WIDTH, DISP_HEIGHT, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

            // 3. Renderbuffer de Profundidad (Depth24 640x528)
            m_glGenRenderbuffers(1, &m_efb_depth_rb);
            m_glBindRenderbuffer(GL_RENDERBUFFER, m_efb_depth_rb);
            m_glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, EFB_WIDTH, EFB_HEIGHT);

            // 4. Configurar FBO principal del EFB (640x528) + FBOs auxiliares para GXCopyDisp / GXCopyTex
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
#endif
    }

    void SubmitDraw(const moderngekko::GxDrawPacket& packet,
                    const moderngekko::GxStateView& state) override {
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

    void SubmitDecodedDraw(const moderngekko::GxDrawPacket& packet,
                           const moderngekko::GxDecodedDraw& decoded,
                           const moderngekko::GxStateView& state) override {
#if defined(_WIN32)
        ScopedPerfQpc prof_submit(g_perf.gl_submit_qpc);
        if (g_perf.enabled) {
            ++g_perf.draws;
        }
#endif
        ++m_draw_count;
        m_vertex_count += decoded.vertices.size();

        if (m_draw_count <= 5 || (m_draw_count >= 60 && m_draw_count <= 75) || m_draw_count == 80 || m_draw_count == 83 || m_draw_count == 8842 || m_draw_count == 8843 || m_draw_count == 8850) {
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

        // 1. Mantener telemetría y caché de shaders DolphinVideo cuando corresponda
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

        const uint32_t genmode = state.bp[0x00u];
        const uint32_t cull_mode = (genmode >> 14) & 3u;
        // CullMode::All (3) descarta triángulos/quads en hardware Flipper
        if (cull_mode == 3u && decoded.topology == moderngekko::GxTopology::Triangles) {
            return;
        }

        GLenum gl_mode = GL_TRIANGLES;
        if (decoded.topology == moderngekko::GxTopology::Lines) {
            gl_mode = GL_LINES;
        } else if (decoded.topology == moderngekko::GxTopology::Points) {
            gl_mode = GL_POINTS;
        }

        // 2. Pre-calcular Viewport GX (xf[0x101A..0x101F]) y Scissor (bp[0x20..0x21], bp[0x59]) en variables locales
        const float* xf_floats = reinterpret_cast<const float*>(state.xf.data());
        const uint32_t sc_off = state.bp[0x59u];
        const int x_off = (sc_off != 0u) ? static_cast<int>((sc_off & 0x3FFu) << 1) : 342;
        const int y_off = (sc_off != 0u) ? static_cast<int>(((sc_off >> 10) & 0x3FFu) << 1) : 342;
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
                                     std::fabs(vp_wd_half) >= 0.5f && std::fabs(vp_wd_half) <= 320.0f &&
                                     std::fabs(vp_ht_half) >= 0.5f && std::fabs(vp_ht_half) <= 264.0f &&
                                     vp_xorig >= -320.0f && vp_xorig <= 640.0f &&
                                     vp_yorig >= -264.0f && vp_yorig <= 528.0f;

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

            new_vp_x = std::clamp<GLint>(static_cast<GLint>(std::lround(efb_vp_left)), 0, EFB_WIDTH - 1);
            new_vp_y = std::clamp<GLint>(static_cast<GLint>(std::lround(static_cast<float>(EFB_HEIGHT) - (efb_vp_top + vp_h_f))), 0, EFB_HEIGHT - 1);
            new_vp_w = std::clamp<GLsizei>(std::max<GLsizei>(1, static_cast<GLsizei>(std::lround(vp_w_f))), 1, EFB_WIDTH - new_vp_x);
            new_vp_h = std::clamp<GLsizei>(std::max<GLsizei>(1, static_cast<GLsizei>(std::lround(vp_h_f))), 1, EFB_HEIGHT - new_vp_y);

            const bool z_vp_valid = std::isfinite(vp_farz) && std::isfinite(vp_zrange) && (vp_farz != 0.0f || vp_zrange != 0.0f);
            new_depth_n = z_vp_valid ? std::clamp(static_cast<double>(vp_farz) / 16777215.0, 0.0, 1.0) : 1.0;
            new_depth_f = z_vp_valid ? std::clamp(static_cast<double>(vp_farz - vp_zrange) / 16777215.0, 0.0, 1.0) : 0.0;

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

        // Scissor hardware Flipper (BP 0x20, 0x21, 0x59)
        const uint32_t sc_tl = state.bp[0x20u];
        const uint32_t sc_br = state.bp[0x21u];
        bool new_sc_enabled = m_cached_want_sc;
        int new_sc_x = m_cached_sc_x, new_sc_y = m_cached_sc_y, new_sc_w = m_cached_sc_w, new_sc_h = m_cached_sc_h;
        if (!m_sc_cache_valid || sc_tl != m_cached_sc_tl || sc_br != m_cached_sc_br || sc_off != m_cached_sc_off) {
            new_sc_enabled = false;
            new_sc_x = 0; new_sc_y = 0; new_sc_w = 0; new_sc_h = 0;
            if (sc_br != 0u) {
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
                        new_sc_enabled = true;
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

        // Culling de caras (BP 0x00 bits 14..15)
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

        // Pre-evaluación de AlphaCompare (BP 0xF3) + ZCompLoc (BP 0x43 bit 6)
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

        // 3. Escanear etapas TEV activas en una sola pasada y resolver texturas (sin mutar m_bound_tex todavía)
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

        // 4. Obtener programa TEV y caches de colores TEV/Konst
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

        // 5. Evaluar si el lote abierto puede continuar o debe vaciarse
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

        // 6. Reservar espacio en VBO/EBO (con sincronización por cuartos si no hay lote abierto)
        constexpr GLsizei stride = static_cast<GLsizei>(sizeof(GpuVertex));
        const bool use_direct_vbo = (m_vbo_mapped != nullptr && est_verts <= m_vbo_max_verts &&
                                     !m_audit_dolphin_shaders && m_draw_count != 5 && m_current_frame != 2200u);
        size_t vbo_start_vtx = 0;
        size_t ebo_start_idx = 0;

        if (tev_prog != nullptr && tev_prog->program != 0 && m_vbo != 0) {
            if (m_vbo_mapped && est_verts <= m_vbo_max_verts) {
                if (!m_batch_active) {
                    const size_t q_cur = m_vbo_cursor_vtx / VBO_Q_VERTS;
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
                        const size_t q_next = (m_vbo_cursor_vtx + est_verts - 1u) / VBO_Q_VERTS;
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
                    const size_t q_cur = m_ebo_cursor_idx / EBO_Q_IDXS;
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
                        const size_t q_next = (m_ebo_cursor_idx + idx_count - 1u) / EBO_Q_IDXS;
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

        // 7. Transformar lote de vértices GX (directamente al VBO mapeado cuando es posible)
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

        // Ruta rápida cuando el draw se fusiona en el lote activo (GL ya tiene todo el estado enlazado)
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

        // 8. Aplicar cambios de estado OpenGL únicamente si es un lote/draw nuevo
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
                glBindTexture(GL_TEXTURE_2D, target_tex);
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

        // Volcado de diagnóstico DolphinShaderCompiler (--audit-dolphin-shaders)
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
                m_glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
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
                m_vbo_attribs_bound = true;
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

    void CopyEfb(const moderngekko::GxEfbCopy& copy) override {
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
        // Coordenadas Y en m_efb_fbo (640x528, origen GL abajo-izquierda vs origen GX arriba-izquierda)
        const int gl_src_y0 = EFB_HEIGHT - src_y1; // borde inferior en GL
        const int gl_src_y1 = EFB_HEIGHT - src_y0; // borde superior en GL

        glDisable(GL_SCISSOR_TEST);

        if (!copy.copy_to_xfb && copy.destination_address != 0 && m_efb_copy_fbo != 0 && m_glBlitFramebuffer) {
            // GXCopyTex: Capturar sub-región del EFB a una textura GPU cacheada por dirección física
            const uint32_t phys_dst = copy.destination_address & 0x3FFFFFFFu;
            const int dst_w = copy.half_scale ? std::max(1, copy_w / 2) : copy_w;
            const int dst_h = copy.half_scale ? std::max(1, copy_h / 2) : copy_h;

            auto& entry = m_efb_textures[phys_dst];
            if (entry.gl_tex == 0) {
                glGenTextures(1, &entry.gl_tex);
            }
            if (entry.width != static_cast<uint32_t>(dst_w) || entry.height != static_cast<uint32_t>(dst_h)) {
                glBindTexture(GL_TEXTURE_2D, entry.gl_tex);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, dst_w, dst_h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
                entry.width = static_cast<uint32_t>(dst_w);
                entry.height = static_cast<uint32_t>(dst_h);
            }

            // tp_realFormat = (fmt / 2) + (fmt & 1) * 8
            const uint32_t real_fmt = (copy.target_format >> 1) + ((copy.target_format & 1u) << 3);
            const bool efb_has_alpha = (copy.efb_pixel_format == 1u);
            if (real_fmt == 0u || real_fmt == 1u || (copy.intensity_format && real_fmt < 2u)) {
                entry.tex_mode = 2; // Intensity (I4/I8): R=G=B=A=Y
            } else if (real_fmt == 2u || real_fmt == 3u) {
                entry.tex_mode = efb_has_alpha ? 3 : 2; // IA4/IA8
            } else if (!efb_has_alpha || real_fmt == 4u) {
                entry.tex_mode = 1; // RGB sin canal alfa (A = 1.0)
            } else {
                entry.tex_mode = 0; // RGBA completo
            }

            m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
            m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
            m_glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, entry.gl_tex, 0);
            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            // Invertir Y al copiar para que t=0 de la textura corresponda al borde superior de GX
            m_glBlitFramebuffer(src_x0, gl_src_y1, src_x1, gl_src_y0,
                                0, 0, dst_w, dst_h,
                                GL_COLOR_BUFFER_BIT, copy.half_scale ? GL_LINEAR : GL_NEAREST);
            entry.ram_snapshot_hash = SampleRamSignature(phys_dst);
            entry.valid = true;
        } else if (copy.copy_to_xfb && m_efb_display_fbo != 0 && m_glBlitFramebuffer) {
            // Solo blitear si hubo draws reales en el EFB desde la ultima limpieza,
            // o si todavia no tenemos ningun fotograma presentable.
            // Esto previene que una copia subsequente sin draws sobreescriba la pantalla con negro.
            if (m_draws_since_clear > 0 || !m_efb_has_displayable_frame) {
                // Coordenadas Y en m_efb_fbo (640x528, origen GL abajo-izquierda vs origen GX arriba-izquierda)
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
                m_xfb_copied_this_frame = true;
            }
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

    void CaptureDisplayToEfbTexture(u32 dst_addr, u32 width, u32 height) {
#if defined(_WIN32)
        const uint32_t phys_dst = dst_addr & 0x3FFFFFFFu;
        if (phys_dst == 0u || m_efb_copy_fbo == 0 || !m_glBindFramebuffer || !m_glBlitFramebuffer) {
            return;
        }
        const int dst_w = (width > 0u && width <= EFB_WIDTH) ? static_cast<int>(width) : 512;
        const int dst_h = (height > 0u && height <= EFB_HEIGHT) ? static_cast<int>(height) : 448;

        auto& entry = m_efb_textures[phys_dst];
        FlushPendingBatch();
        if (entry.gl_tex == 0) {
            glGenTextures(1, &entry.gl_tex);
        }
        if (entry.width != static_cast<uint32_t>(dst_w) || entry.height != static_cast<uint32_t>(dst_h)) {
            glBindTexture(GL_TEXTURE_2D, entry.gl_tex);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, dst_w, dst_h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            entry.width = static_cast<uint32_t>(dst_w);
            entry.height = static_cast<uint32_t>(dst_h);
        }
        entry.tex_mode = 1; // RGB opaco (A = 1.0)

        InvalidateGlStateCache();
        if (m_efb_has_displayable_frame && m_efb_display_fbo != 0) {
            m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_display_fbo);
            m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
            m_glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, entry.gl_tex, 0);
            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            // Invertir Y: en m_efb_display_fbo y=DISP_HEIGHT es arriba y y=0 es abajo; en entry.gl_tex t=0 es arriba
            m_glBlitFramebuffer(0, DISP_HEIGHT, DISP_WIDTH, 0,
                                0, 0, dst_w, dst_h,
                                GL_COLOR_BUFFER_BIT, GL_LINEAR);
        } else if (m_efb_fbo != 0) {
            m_glBindFramebuffer(GL_READ_FRAMEBUFFER, m_efb_fbo);
            m_glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_efb_copy_fbo);
            m_glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, entry.gl_tex, 0);
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

    void PresentXfb(const moderngekko::GxXfbPresent& present) override {
        if (present.address != 0) {
            m_last_xfb_address = present.address;
        }
    }

    void RenderFrameToWindow(CPUState* cpu, u32 vi_xfb_addr, u32 client_w, u32 client_h,
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

        // 1. Resetear estados de pipeline de OpenGL para garantizar presentación limpia e inalterada
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glDepthMask(GL_TRUE);
        glDisable(GL_SCISSOR_TEST);
        glDisable(GL_CULL_FACE);
        glDisable(GL_COLOR_LOGIC_OP);
        glDisable(GL_ALPHA_TEST);
        glDisable(GL_BLEND);
        glDisable(GL_DEPTH_TEST);
        if (m_glBlendEquation) {
            m_glBlendEquation(GL_FUNC_ADD);
        }

        // 2. Limpiar franjas exteriores con negro absoluto (pillarbox / letterbox)
        glViewport(0, 0, static_cast<GLsizei>(client_w), static_cast<GLsizei>(client_h));
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Establecer viewport de aspecto y matrices ortográficas de pantalla
        glViewport(vp_x, vp_y, vp_w, vp_h);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        // 3. Verificar si existe un XFB activo en MEM1 con datos de video YUY2 (solo si no hay frame EFB listo)
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

        // Si hubo draws en EFB pero nunca se ejecutó GXCopyDisp aún, capturar región superior 640x480 como fallback inicial
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
        m_xfb_copied_this_frame = false;
        m_video_frame_captured = false;

        if (m_efb_has_displayable_frame && m_efb_display_tex != 0) {
            // Presentación Virtual EFB (Renderizado GPU nativo de GX) - PRIORIDAD 1
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, m_efb_display_tex);
            glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
            glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
            glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, -1.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex2f( 1.0f, -1.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex2f( 1.0f,  1.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex2f(-1.0f,  1.0f);
            glEnd();
            glDisable(GL_TEXTURE_2D);
        } else if (xfb_valid) {
            // Presentación XFB (GameCube scanout desde memoria principal) - FALLBACK
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, m_xfb_tex);
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 640, 480, GL_RGBA, GL_UNSIGNED_BYTE, m_xfb_rgba.data());
            glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
            glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 1.0f); glVertex2f(-1.0f, -1.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex2f( 1.0f, -1.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex2f( 1.0f,  1.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f,  1.0f);
            glEnd();
            glDisable(GL_TEXTURE_2D);
        } else if (m_draw_count == 0) {
            // Fondo táctico estilo MGS: The Twin Snakes (Codec / Radar) mientras inicializa XFB/GX
            glClearColor(0.03f, 0.07f, 0.06f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            // Grilla táctica sutil
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4f(0.10f, 0.35f, 0.28f, 0.35f);
            glBegin(GL_LINES);
            for (int i = -9; i <= 9; ++i) {
                float p = i * 0.1f;
                glVertex2f(p, -1.0f); glVertex2f(p, 1.0f);
                glVertex2f(-1.0f, p); glVertex2f(1.0f, p);
            }
            glEnd();

            // Barra de progreso de subsistemas en la parte superior
            float pulse = 0.5f + 0.5f * std::sin(static_cast<float>(frame_idx) * 0.1f);
            glColor4f(0.15f, 0.75f * pulse + 0.2f, 0.55f, 0.85f);
            glBegin(GL_QUADS);
            glVertex2f(-0.92f, 0.82f);
            glVertex2f(in_mgso_loop ? 0.92f : 0.25f, 0.82f);
            glVertex2f(in_mgso_loop ? 0.92f : 0.25f, 0.88f);
            glVertex2f(-0.92f, 0.88f);
            glEnd();
            glDisable(GL_BLEND);
        }

        // 4. Overlay de Diagnóstico Táctico (HUD - Conmutable con tecla F1)
        if (show_debug_hud) {
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

            // Panel semi-transparente táctico en el borde inferior
            glColor4f(0.01f, 0.06f, 0.04f, 0.82f);
            glBegin(GL_QUADS);
            glVertex2f(-0.98f, -0.98f);
            glVertex2f( 0.98f, -0.98f);
            glVertex2f( 0.98f, -0.80f);
            glVertex2f(-0.98f, -0.80f);
            glEnd();

            // Borde del panel
            glColor4f(0.15f, 0.65f, 0.45f, 0.90f);
            glLineWidth(1.5f);
            glBegin(GL_LINE_LOOP);
            glVertex2f(-0.98f, -0.98f);
            glVertex2f( 0.98f, -0.98f);
            glVertex2f( 0.98f, -0.80f);
            glVertex2f(-0.98f, -0.80f);
            glEnd();

            // Indicador de fuente activa
            if (xfb_valid) {
                glColor4f(0.1f, 0.85f, 1.0f, 1.0f); // Cyan: XFB RAM
            } else if (m_efb_has_displayable_frame || m_has_drawn_in_efb) {
                glColor4f(0.2f, 1.0f, 0.4f, 1.0f);  // Verde: EFB FBO
            } else {
                glColor4f(1.0f, 0.75f, 0.1f, 1.0f); // Amarillo: Standby
            }
            glBegin(GL_QUADS);
            glVertex2f(-0.95f, -0.84f);
            glVertex2f(-0.90f, -0.84f);
            glVertex2f(-0.90f, -0.94f);
            glVertex2f(-0.95f, -0.94f);
            glEnd();

            // Barra visual de actividad geométrica
            float activity_len = 0.05f;
            if (m_vertex_count > 0) {
                activity_len = std::min(1.75f, 0.05f + static_cast<float>(m_vertex_count % 100000) / 100000.0f * 1.70f);
            }
            glColor4f(0.15f, 0.70f, 0.50f, 0.75f);
            glBegin(GL_QUADS);
            glVertex2f(-0.88f, -0.86f);
            glVertex2f(-0.88f + activity_len, -0.86f);
            glVertex2f(-0.88f + activity_len, -0.92f);
            glVertex2f(-0.88f, -0.92f);
            glEnd();

            glDisable(GL_BLEND);
        }

        (void)cpu;
        (void)gx_cmd_count;
#endif
    }

    std::uint64_t GetDrawCount() const { return m_draw_count; }
    std::uint64_t GetVertexCount() const { return m_vertex_count; }
    std::uint64_t GetShaderCompileCount() const { return m_shader_compile_count; }
    std::uint64_t GetDecodedTextureCount() const { return m_decoded_texture_count; }
    std::uint64_t GetEfbCopyCount() const { return m_efb_copy_count; }
    std::uint32_t GetLastXfbAddress() const { return m_last_xfb_address; }
    bool IsXfbActive() const { return m_last_xfb_valid; }
    bool HasEfbFrame() const { return m_efb_has_displayable_frame || m_has_drawn_in_efb; }
    void SetAuditDolphinShaders(bool enable) { m_audit_dolphin_shaders = enable; }
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
    }

    bool SaveEfbToBmp(const char* filepath) {
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

    bool SaveRawEfbToBmp(const char* filepath) {
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

private:
    struct GpuVertex {
        float pos[4];
        float col0[4];
        float col1[4];
        float uv[8][3];
    };

#if defined(_WIN32)
    struct EfbTexEntry {
        GLuint gl_tex = 0;
        uint32_t width = 0;
        uint32_t height = 0;
        int tex_mode = 0; // 0=RGBA, 1=RGB1, 2=IIII, 3=IIIA
        uint64_t ram_snapshot_hash = 0;
        uint32_t last_mode0 = 0xFFFFFFFFu;
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

    static void ApplyGxSamplerParams(uint32_t mode0) {
        static const GLint gl_wraps[4] = {
            GL_CLAMP_TO_EDGE, GL_REPEAT, GL_MIRRORED_REPEAT, GL_CLAMP_TO_EDGE
        };
        const uint32_t wrap_s = mode0 & 3u;
        const uint32_t wrap_t = (mode0 >> 2) & 3u;
        const bool mag_linear = ((mode0 >> 4) & 1u) != 0u;
        // En TexMode0: min_filter bit 7 (FilterMode: Near=0, Linear=1)
        const bool min_linear = ((mode0 >> 7) & 1u) != 0u;
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, gl_wraps[wrap_s]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, gl_wraps[wrap_t]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, mag_linear ? GL_LINEAR : GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, min_linear ? GL_LINEAR : GL_NEAREST);
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

        // 1. Priorizar copia EFB-a-Textura en GPU si la región RAM subyacente no fue sobreescrita por CPU/DMA
        const uint32_t phys_addr = tex_desc.address & 0x3FFFFFFFu;
        if (phys_addr != 0u && phys_addr < 0x01800000u) {
            auto efb_it = m_efb_textures.find(phys_addr);
            if (efb_it != m_efb_textures.end() && efb_it->second.valid && efb_it->second.gl_tex != 0) {
                if (SampleRamSignature(phys_addr) == efb_it->second.ram_snapshot_hash) {
                    if (efb_it->second.last_mode0 != tex_desc.mode0) {
                        FlushPendingBatch();
                        if (m_glActiveTexture && m_active_tex_unit != st) {
                            m_glActiveTexture(GL_TEXTURE0 + st);
                            m_active_tex_unit = st;
                        }
                        glBindTexture(GL_TEXTURE_2D, efb_it->second.gl_tex);
                        ApplyGxSamplerParams(tex_desc.mode0);
                        efb_it->second.last_mode0 = tex_desc.mode0;
                        m_bound_tex[st] = efb_it->second.gl_tex;
                    }
                    *out_mode = efb_it->second.tex_mode;
                    return efb_it->second.gl_tex;
                }
                efb_it->second.valid = false;
            }
        }

        // 2. Resolver bytes codificados en MEM1 / VM (0x7Fxxxxxx) o TMEM preloaded
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

        // 3. Resolver paleta TLUT desde TMEM si el formato es indexado (C4 / C8 / C14X2)
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
            tex_mode = 1; // RGB opaco (A=1)
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

        // Early-out #1: Dentro del mismo fotograma, omitir hash y comprobación de memoria (0 ns)
        auto it = m_ram_textures.find(key);
        if (it != m_ram_textures.end() && it->second.uploaded) {
            if (it->second.last_frame_checked == m_current_frame) {
                if (it->second.last_mode0 != tex_desc.mode0) {
                    FlushPendingBatch();
                    const uint32_t tex_u = stage & 7u;
                    if (m_glActiveTexture && m_active_tex_unit != tex_u) {
                        m_glActiveTexture(GL_TEXTURE0 + tex_u);
                        m_active_tex_unit = tex_u;
                    }
                    glBindTexture(GL_TEXTURE_2D, it->second.gl_tex);
                    ApplyGxSamplerParams(tex_desc.mode0);
                    it->second.last_mode0 = tex_desc.mode0;
                    m_bound_tex[tex_u] = it->second.gl_tex;
                }
                if (!is_linear_yuv) {
                    st_cache = {m_current_frame, state.tmem_generation, raw_mode0, raw_img0, raw_tmem, raw_addr, raw_tlut,
                                it->second.gl_tex, tex_desc.width, tex_desc.height, tex_mode, true};
                }
                return it->second.gl_tex;
            }

            if (!is_linear_yuv) {
                // Primer chequeo en nuevo fotograma: muestreo ultrarrápido
                const uint64_t content_hash = ComputeFastContentHash(enc_ptr, enc_size);
                const uint64_t tlut_hash = (pal_bytes > 0u) ? ComputeFastTlutHash(pal_span) : 0ull;

                if (it->second.content_hash == content_hash && it->second.tlut_hash == tlut_hash) {
                    it->second.last_frame_checked = m_current_frame;
                    if (it->second.last_mode0 != tex_desc.mode0) {
                        FlushPendingBatch();
                        if (m_glActiveTexture && m_active_tex_unit != st) {
                            m_glActiveTexture(GL_TEXTURE0 + st);
                            m_active_tex_unit = st;
                        }
                        glBindTexture(GL_TEXTURE_2D, it->second.gl_tex);
                        ApplyGxSamplerParams(tex_desc.mode0);
                        it->second.last_mode0 = tex_desc.mode0;
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
            // Buffer planar lineal de video de Silicon Knights (Theora / VP3): no está organizado en tiles GX de 8x4
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
        glBindTexture(GL_TEXTURE_2D, entry.gl_tex);
        m_bound_tex[st] = entry.gl_tex;
        glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
        if (!entry.uploaded) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8,
                         static_cast<GLsizei>(decoded_tex.width),
                         static_cast<GLsizei>(decoded_tex.height),
                         0, GL_RGBA, GL_UNSIGNED_INT_8_8_8_8, decoded_tex.rgba8.data());
        } else {
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0,
                            static_cast<GLsizei>(decoded_tex.width),
                            static_cast<GLsizei>(decoded_tex.height),
                            GL_RGBA, GL_UNSIGNED_INT_8_8_8_8, decoded_tex.rgba8.data());
        }
        entry.content_hash = content_hash;
        entry.tlut_hash = tlut_hash;
        entry.tex_mode = tex_mode;
        entry.uploaded = true;
        entry.last_frame_checked = m_current_frame;
        ++m_decoded_texture_count;

        if (entry.last_mode0 != tex_desc.mode0) {
            ApplyGxSamplerParams(tex_desc.mode0);
            entry.last_mode0 = tex_desc.mode0;
        }
        return entry.gl_tex;
    }

    size_t BuildGpuVertexBatch(const moderngekko::GxDecodedDraw& decoded,
                               const moderngekko::GxStateView& state,
                               float vp_wd_half, float vp_ht_half, float vp_zrange, float vp_farz,
                               uint8_t vat = 0, bool use_indexed = false,
                               GpuVertex* dst_verts = nullptr, uint32_t used_tcoord_mask = 0xFFu) {
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
            // Para perspectiva (proj_type == 0), se requiere al menos que los términos de escala FOV (P0 y P2) sean no nulos
            if (proj_type == 0u) {
                if (std::fabs(raw_proj[0]) > 1e-4f && std::fabs(raw_proj[2]) > 1e-4f) {
                    has_valid_proj = true;
                } else {
                    // Fallback de perspectiva estándar 4:3 (FOV vertical ~45°: p2 ~ 2.414f, p0 ~ 1.81f, near=10, far=10000)
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

        // Precomputar descriptores de canales de iluminación fuera del bucle de vértices
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

        // Precomputar TexGen configs 0..num_tex_gens-1 fuera del bucle
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

        // Precomputar matriz combinada MVP (Clip = Proj * PosMtx) cuando los vértices son rígidos y no requieren eye_pos
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
                // 1. Transformación Posición + Normal en espacio de cámara (XF)
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

            // 2. Canales de color e iluminación XF (COLOR0A0 / COLOR1A1)
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

            // 3. Generación de coordenadas de textura XF (TexGen 0..7 + TexMtx + DualTex)
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
    void InitSharedVertexShader() {
        if (!m_glCreateShader || !m_glShaderSource || !m_glCompileShader || !m_glGetShaderiv) {
            return;
        }
        static const char* vs_src =
            "#version 330 compatibility\n"
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

    TevProgramEntry* CompileTevProgram(const TevShaderKey& key) {
        if (m_vs_handle == 0 || !m_glCreateProgram || !m_glCreateShader) {
            return nullptr;
        }

        auto it = m_tev_programs.find(key);
        if (it != m_tev_programs.end()) {
            return &it->second;
        }

        // Construir tablas de intercambio de canales (Swap Tables 0..3)
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
        fs += "#version 330 compatibility\n"
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
              "uniform sampler2D u_tex[8];\n"
              "uniform vec4 u_tev_reg[4];\n"
              "uniform vec4 u_konst[4];\n"
              "uniform vec4 u_tex_inv_wh[8];\n"
              "uniform vec4 u_su_scale[8];\n"
              "uniform int u_tex_mode[8];\n"
              "uniform vec2 u_alpha_ref;\n"
              "uniform vec2 u_const_alpha;\n"
              "out vec4 o_color;\n\n"
              "ivec4 sample_gx_tex(sampler2D s, int tm, vec3 stq, int tc) {\n"
              "    vec2 proj_uv = (abs(stq.z) > 1e-7) ? (stq.xy / stq.z) : clamp(stq.xy * 0.5, vec2(-1.0), vec2(1.0));\n"
              "    vec2 uv = proj_uv * u_su_scale[tc].xy * u_tex_inv_wh[tm].xy;\n"
              "    ivec4 c = ivec4(round(clamp(texture(s, uv), 0.0, 1.0) * 255.0));\n"
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

        // Regla estándar del hardware GX de GameCube:
        // El resultado de la última etapa TEV activa se vuelca a pantalla sin importar su registro destino
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

    TevProgramEntry* EnsureTevProgram(const moderngekko::GxStateView& state,
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

    void FlushPendingBatch() {
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

    void InvalidateGlStateCache() {
        FlushPendingBatch();
        if (m_vbo_attribs_bound) {
            for (GLuint a = 0; a < 11u; ++a) {
                if (m_glDisableVertexAttribArray) {
                    m_glDisableVertexAttribArray(a);
                }
            }
            if (m_glBindBuffer) {
                m_glBindBuffer(GL_ARRAY_BUFFER, 0);
                m_glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            }
            m_vbo_attribs_bound = false;
        }
        if (m_last_tev_prog != nullptr && m_glUseProgram) {
            m_glUseProgram(0);
        }
        if (m_glActiveTexture) {
            m_glActiveTexture(GL_TEXTURE0);
        }
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
        m_cached_cull = 0xFFFFFFFFu;
        m_cached_zmode = 0xFFFFFFFFu;
        m_cached_blend_key = 0xFFFFFFFFu;
        m_active_tex_unit = 0xFFFFFFFFu;
        m_bound_tex.fill(0u);
        for (auto& sc : m_stage_tex_cache) sc.valid = false;
    }

    void WarmupTevShaderCache() {
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
    static constexpr size_t VBO_Q_VERTS = 110000;
    static constexpr size_t EBO_Q_IDXS = 1048576;
    size_t m_vbo_cursor_vtx = 0;
    size_t m_ebo_cursor_idx = 0;
    size_t m_vbo_max_verts = 0;
    size_t m_ebo_max_idxs = 0;
    uint8_t* m_vbo_mapped = nullptr;
    uint8_t* m_ebo_mapped = nullptr;
    std::array<GLsync, 4> m_vbo_fences{};
    std::array<GLsync, 4> m_ebo_fences{};
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

    // Estado de loteo dinámico (Dynamic Draw Call Batching) para reducir glDrawElementsBaseVertex
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
#endif
};

// ============================================================================
// Tabla de Sistema de Archivos de GameCube (FST / fst.bin)
// ============================================================================
struct FstEntry {
    bool is_dir = false;
    std::string path;
    u32 disc_offset = 0;
    u32 size = 0;
};

static std::vector<FstEntry> g_fst_entries;
static std::unordered_map<std::string, s32> g_fst_path_to_entry;
static std::unordered_map<u32, std::string> g_fst_offset_to_path;
static std::unordered_map<u32, u32> g_fst_offset_to_size;

static void init_fst_tables(const u8* fst_data, size_t fst_size) {
    if (!fst_data || fst_size < 12) return;
    g_fst_entries.clear();
    g_fst_path_to_entry.clear();
    g_fst_offset_to_path.clear();
    g_fst_offset_to_size.clear();

    auto read_be32 = [](const u8* p) -> u32 {
        return (static_cast<u32>(p[0]) << 24) |
               (static_cast<u32>(p[1]) << 16) |
               (static_cast<u32>(p[2]) << 8)  |
               (static_cast<u32>(p[3]));
    };

    u32 total_entries = read_be32(fst_data + 8);
    if (total_entries == 0 || static_cast<size_t>(total_entries) * 12 > fst_size) return;

    size_t str_table_off = static_cast<size_t>(total_entries) * 12;
    g_fst_entries.resize(total_entries);

    struct DirFrame {
        s32 dir_entry;
        u32 next_entry;
        std::string path;
    };
    std::vector<DirFrame> dir_stack;
    dir_stack.push_back({0, total_entries, ""});

    for (u32 i = 0; i < total_entries; ++i) {
        const u8* ent = fst_data + (i * 12);
        u32 fn_val = read_be32(ent);
        u32 off_val = read_be32(ent + 4);
        u32 sz_val = read_be32(ent + 8);

        bool is_dir = (fn_val >> 24) != 0;
        u32 name_off = fn_val & 0x00FFFFFFu;

        std::string name;
        if (i > 0 && str_table_off + name_off < fst_size) {
            const char* s = reinterpret_cast<const char*>(fst_data + str_table_off + name_off);
            size_t max_len = fst_size - (str_table_off + name_off);
            size_t len = strnlen(s, max_len);
            name.assign(s, len);
        }

        while (dir_stack.size() > 1 && i >= dir_stack.back().next_entry) {
            dir_stack.pop_back();
        }

        std::string full_path;
        if (i > 0) {
            const std::string& parent_path = dir_stack.back().path;
            if (parent_path.empty()) {
                full_path = name;
            } else {
                full_path = parent_path + "/" + name;
            }
        }

        g_fst_entries[i].is_dir = is_dir;
        g_fst_entries[i].path = full_path;
        g_fst_entries[i].disc_offset = off_val;
        g_fst_entries[i].size = sz_val;

        if (is_dir) {
            if (i > 0) {
                dir_stack.push_back({static_cast<s32>(i), sz_val, full_path});
            }
        } else {
            std::string norm = full_path;
            std::replace(norm.begin(), norm.end(), '\\', '/');
            g_fst_path_to_entry[norm] = static_cast<s32>(i);
            g_fst_path_to_entry["/" + norm] = static_cast<s32>(i);

            g_fst_offset_to_path[off_val] = (std::filesystem::path("input/extracted/files") / full_path).string();
            g_fst_offset_to_size[off_val] = sz_val;
        }
    }
    std::printf("[FST] Parsed %u entries successfully. (%zu file paths, %zu disc offsets mapped)\n",
                total_entries, g_fst_path_to_entry.size(), g_fst_offset_to_path.size());
}

// ============================================================================
// Contexto del Runtime Gráfico & Hooks HLE (OS / DVD / VI / GX / MGSO)
// ============================================================================
struct GfxRuntimeContext {
    ModuleCallFn module_call = nullptr;
    moderngekko::AddressSpace* address_space = nullptr;
    moderngekko::GxStateBackend* gx_state = nullptr;
    moderngekko::GxCommandProcessor* gx_cp = nullptr;
    Ggsea4RenderDevice* render_device = nullptr;

    bool reached_start = false;
    bool reached_main = false;
    bool reached_mgso_prolog = false;
    bool reached_mgso_main = false;
    bool reached_mgso_thread = false;
    bool reached_mgso_loop = false;
    bool in_gx_init = false;
    u32 gx_trace_count = 0;

    // Grabación de Display Lists (GXBeginDisplayList / GXEndDisplayList para Ordering Table de mgso.rel)
    bool dl_active = false;
    u32 dl_fifo_obj = 0;
    u32 dl_base_addr = 0;
    u32 dl_write_addr = 0;
    u32 dl_max_size = 0;

    u32 vi_xfb_address = 0;
    u32 frame_count = 0;
    u32 max_frames = 0;
    bool window_closed = false;

    // QoL: Relación de aspecto, pantalla completa, VSync y limitador de fotogramas
    AspectRatioMode aspect_mode = AspectRatioMode::Original_4_3;
    bool vsync_enabled = true;
    bool fps_limiter_enabled = true;
    bool is_fullscreen = false;
    bool show_debug_hud = false;
    bool auto_skip = false;
    bool test_move = false;
    bool test_codec = false;
    int host_refresh_rate = 60;
#if defined(_WIN32)
    WINDOWPLACEMENT prev_placement = { sizeof(WINDOWPLACEMENT) };
    LARGE_INTEGER qpc_freq = {};
    LARGE_INTEGER last_frame_qpc = {};
    LARGE_INTEGER target_frame_qpc = {};
    LARGE_INTEGER tb_start_qpc = {};
    u32 fps_sample_frame = 0;
    std::chrono::steady_clock::time_point fps_sample_time = std::chrono::steady_clock::now();
    double live_fps = 0.0;
#endif

    u32 spr_regs[1024] = {};
    std::unordered_map<u32, std::string> open_dvd_files;
    u64 pad_read_count = 0;
    u64 dvd_async_read_count = 0;
    u64 dvd_sync_read_count = 0;

    bool area01a_loaded = false;
    bool codec_active = false;
    uint64_t codec_read_count = 0;
    uint64_t face_read_count = 0;
    uint64_t vox_read_count = 0;
    u32 codec_start_frame = 0;

    // HLE virtual clock for streamed voice audio (0x800569F4 / 0x800569E4 / 0x80051AF0)
    // when DSP ADPCM task consumption (0x80038190) is bypassed.
    bool audio_stream_active = false;
    u32  audio_stream_start_frame = 0;
    u32  audio_stream_last_id = 0;
    u32  audio_stream_wait_polls = 0;
    LARGE_INTEGER audio_stream_last_qpc = {};
    double audio_stream_accum_ms = 0.0;
    u32  audio_stream_last_ms = 0;
    u32  consumer_drain_last_frame = 0;
    u32  voice_idle_polls = 0;
    u32  voice_poll_last_id = 0;
    u32  voice_poll_same_count = 0;
    u32  voice_start_frame[64] = {};
    u32  voice_last_id[64] = {};
    u32  voice_stop_req_frame[64] = {};
    u32  codec_actor_ptr = 0;
    u32  codec_last_state = 0xFFFFFFFFu;
    u32  codec_state_stuck_frames = 0;
    u32  codec_last_tick_frame = 0;

    struct HostPadState {
        u16 button = 0;
        s8  stickX = 0;
        s8  stickY = 0;
        s8  substickX = 0;
        s8  substickY = 0;
        u8  triggerL = 0;
        u8  triggerR = 0;
        bool connected = true;
    } pad;
    u16 prev_pad_button = 0;

    struct PendingDvdCallback {
        u32 fn_addr = 0;
        s32 result = 0;
        u32 file_info = 0;
        u32 delay_blocks = 10;
    };
    std::vector<PendingDvdCallback> pending_dvd_callbacks;
    bool in_dvd_callback = false;
    u32 dvd_callback_saved_pc = 0;
    u32 dvd_callback_saved_sp = 0;
    u32 dvd_callback_saved_lr = 0;

#if defined(_WIN32)
    HWND hwnd = nullptr;
    HDC hdc = nullptr;
    HGLRC hglrc = nullptr;
    u32 client_width = 960;
    u32 client_height = 720;
#endif
    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point last_title_update = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point last_host_pump = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point last_vblank_time = std::chrono::steady_clock::now();

    bool verbose_logging = false;
    bool audit_dolphin_shaders = false;
    u32 dump_frame_interval = 0;
    std::unordered_map<std::string, FILE*> cached_dvd_handles;

    void close_cached_dvd_handles() {
        for (auto& pair : cached_dvd_handles) {
            if (pair.second) {
                std::fclose(pair.second);
            }
        }
        cached_dvd_handles.clear();
    }
};

#if defined(_WIN32)
static void toggle_fullscreen(HWND hwnd, GfxRuntimeContext* rctx) {
    if (!hwnd || !rctx) return;
    DWORD dwStyle = GetWindowLongA(hwnd, GWL_STYLE);
    if (!rctx->is_fullscreen) {
        MONITORINFO mi = { sizeof(mi) };
        if (GetWindowPlacement(hwnd, &rctx->prev_placement) &&
            GetMonitorInfoA(MonitorFromWindow(hwnd, MONITOR_DEFAULTTOPRIMARY), &mi)) {
            SetWindowLongA(hwnd, GWL_STYLE, dwStyle & ~WS_OVERLAPPEDWINDOW);
            SetWindowPos(hwnd, HWND_TOP,
                         mi.rcMonitor.left, mi.rcMonitor.top,
                         mi.rcMonitor.right - mi.rcMonitor.left,
                         mi.rcMonitor.bottom - mi.rcMonitor.top,
                         SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
            rctx->is_fullscreen = true;
            std::printf("[QoL] Pantalla Completa Activada (%ldx%ld)\n",
                        mi.rcMonitor.right - mi.rcMonitor.left,
                        mi.rcMonitor.bottom - mi.rcMonitor.top);
        }
    } else {
        SetWindowLongA(hwnd, GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(hwnd, &rctx->prev_placement);
        SetWindowPos(hwnd, nullptr, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER |
                     SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
        rctx->is_fullscreen = false;
        std::printf("[QoL] Modo Ventana Restaurado (%ux%u)\n",
                    rctx->client_width, rctx->client_height);
    }
}

static LRESULT CALLBACK Ggsea4WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    auto* rctx = reinterpret_cast<GfxRuntimeContext*>(GetWindowLongPtrA(hwnd, GWLP_USERDATA));
    switch (msg) {
    case WM_SIZE:
        if (rctx) {
            rctx->client_width = std::max<u32>(1u, LOWORD(lparam));
            rctx->client_height = std::max<u32>(1u, HIWORD(lparam));
        }
        return 0;
    case WM_SYSKEYDOWN:
        if (wparam == VK_RETURN && (lparam & (1 << 29))) {
            toggle_fullscreen(hwnd, rctx);
            return 0;
        }
        break;
    case WM_KEYDOWN:
        if (wparam == VK_F11 && rctx) {
            toggle_fullscreen(hwnd, rctx);
            return 0;
        }
        if (wparam == VK_F10 && rctx) {
            if (rctx->aspect_mode == AspectRatioMode::Original_4_3) {
                rctx->aspect_mode = AspectRatioMode::Widescreen_16_9;
                std::printf("[QoL] Relacion de aspecto: 16:9 Panoramico\n");
            } else if (rctx->aspect_mode == AspectRatioMode::Widescreen_16_9) {
                rctx->aspect_mode = AspectRatioMode::Stretch;
                std::printf("[QoL] Relacion de aspecto: Ajuste Estirado (Stretch)\n");
            } else {
                rctx->aspect_mode = AspectRatioMode::Original_4_3;
                std::printf("[QoL] Relacion de aspecto: 4:3 Clasico GameCube\n");
            }
            return 0;
        }
        if ((wparam == VK_F9 || wparam == VK_F4) && rctx) {
            rctx->fps_limiter_enabled = !rctx->fps_limiter_enabled;
            QueryPerformanceCounter(&rctx->last_frame_qpc);
            rctx->target_frame_qpc = rctx->last_frame_qpc;
            std::printf("[QoL] Limitador 60 FPS: %s\n", rctx->fps_limiter_enabled ? "ACTIVADO" : "DESACTIVADO (Turbo)");
            return 0;
        }
        if (wparam == VK_F8 && rctx) {
            rctx->vsync_enabled = !rctx->vsync_enabled;
            if (wglSwapIntervalEXT) {
                wglSwapIntervalEXT(rctx->vsync_enabled ? 1 : 0);
            }
            QueryPerformanceCounter(&rctx->last_frame_qpc);
            rctx->target_frame_qpc = rctx->last_frame_qpc;
            std::printf("[QoL] VSync OpenGL: %s\n", rctx->vsync_enabled ? "ACTIVADO" : "DESACTIVADO");
            return 0;
        }
        if (wparam == VK_F1 && rctx) {
            rctx->show_debug_hud = !rctx->show_debug_hud;
            std::printf("[QoL] Diagnostic HUD Overlay: %s\n", rctx->show_debug_hud ? "ACTIVADO" : "DESACTIVADO");
            return 0;
        }
        if (wparam == VK_F12 && rctx) {
            char filename[128];
            std::snprintf(filename, sizeof(filename), "screenshot_frame_%u.bmp", rctx->frame_count);
            if (rctx->render_device && rctx->render_device->SaveEfbToBmp(filename)) {
                std::printf("[SCREENSHOT] Captura de pantalla guardada exitosamente: %s (640x480 BMP)\n", filename);
            }
            return 0;
        }
        break;
    case WM_CLOSE:
    case WM_DESTROY:
        if (rctx) {
            rctx->window_closed = true;
        }
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(hwnd, msg, wparam, lparam);
}

#if defined(_WIN32)
// 2. Soporte dinámico para Gamepads XInput con Lectura y Vibración (Rumble)
typedef DWORD(WINAPI* PFN_XInputGetState)(DWORD dwUserIndex, void* pState);
typedef DWORD(WINAPI* PFN_XInputSetState)(DWORD dwUserIndex, void* pVibration);
static HMODULE s_xinput = nullptr;
static PFN_XInputGetState fn_xinput_get_state = nullptr;
static PFN_XInputSetState fn_xinput_set_state = nullptr;
static bool s_xinput_tried = false;

static void init_xinput() {
    if (s_xinput_tried) return;
    s_xinput_tried = true;
    s_xinput = LoadLibraryA("xinput1_4.dll");
    if (!s_xinput) s_xinput = LoadLibraryA("xinput9_1_0.dll");
    if (!s_xinput) s_xinput = LoadLibraryA("xinput1_3.dll");
    if (s_xinput) {
        fn_xinput_get_state = reinterpret_cast<PFN_XInputGetState>(GetProcAddress(s_xinput, "XInputGetState"));
        fn_xinput_set_state = reinterpret_cast<PFN_XInputSetState>(GetProcAddress(s_xinput, "XInputSetState"));
        if (fn_xinput_get_state) {
            std::printf("[INPUT] Modulo XInput cargado con exito (%s)\n",
                        fn_xinput_set_state ? "Lectura + Vibracion Habilitadas" : "Solo Lectura");
        }
    }
}

static void set_controller_rumble(float intensity) {
    init_xinput();
    if (fn_xinput_set_state) {
        WORD speed = static_cast<WORD>(std::clamp(intensity, 0.0f, 1.0f) * 65535.0f);
        #pragma pack(push, 1)
        struct {
            WORD wLeftMotorSpeed;
            WORD wRightMotorSpeed;
        } vib = { speed, speed };
        #pragma pack(pop)
        fn_xinput_set_state(0, &vib);
    }
}
#endif

static void pump_win32_messages(GfxRuntimeContext* rctx) {
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) {
            rctx->window_closed = true;
        }
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

static void update_pad_input(GfxRuntimeContext* rctx) {
#if defined(_WIN32)
    if (!rctx) return;
    u16 btn = 0;
    s8 sx = 0, sy = 0;
    s8 ssx = 0, ssy = 0;
    u8 trigL = 0, trigR = 0;

    auto is_down = [](int vk) -> bool {
        return (GetAsyncKeyState(vk) & 0x8000) != 0;
    };

    // 1. Mapeo Teclado PC -> GameCube Controller:
    // START  : Enter / Return (VK_RETURN) -> EXCLUSIVAMENTE START (0x1000u)
    // A      : Espacio (VK_SPACE) o 'Z' -> Confirmar / Disparar / Accion (0x0100u)
    // B      : 'X' o Retroceso (VK_BACK) -> Cancelar / Agacharse / Golpe (0x0200u)
    // X      : 'C' -> Arrastrarse / Camara 1ra persona (0x0400u)
    // Y      : 'V' -> Accion secundaria (0x0800u)
    // Z      : 'E' -> Gatillo Z GameCube (0x0010u)
    // L      : 'Q' -> Gatillo izquierdo analogo/digital (0x0040u)
    // R      : 'R' -> Gatillo derecho analogo/digital (0x0020u)
    if (is_down(VK_RETURN)) btn |= 0x1000u; // START
    if (is_down(VK_SPACE) || is_down('Z')) btn |= 0x0100u; // A (Confirmar)
    if (is_down('X') || is_down(VK_BACK)) btn |= 0x0200u;  // B (Cancelar)
    if (is_down('C')) btn |= 0x0400u; // X
    if (is_down('V')) btn |= 0x0800u; // Y
    if (is_down('E')) btn |= 0x0010u; // Z
    if (is_down('Q')) { btn |= 0x0040u; trigL = 255; } // L
    if (is_down('R')) { btn |= 0x0020u; trigR = 255; } // R

    // D-Pad
    if (is_down(VK_LEFT))  btn |= 0x0001u;
    if (is_down(VK_RIGHT)) btn |= 0x0002u;
    if (is_down(VK_DOWN))  btn |= 0x0004u;
    if (is_down(VK_UP))    btn |= 0x0008u;

    // Main Control Stick (WASD independiente de D-Pad/Flechas)
    if (is_down('A')) sx -= 120;
    if (is_down('D')) sx += 120;
    if (is_down('W')) sy += 120;
    if (is_down('S')) sy -= 120;

    // C-Stick / Substick (IJKL)
    if (is_down('J')) ssx -= 120;
    if (is_down('L')) ssx += 120;
    if (is_down('I')) ssy += 120;
    if (is_down('K')) ssy -= 120;

    // Pulsacion simulada de START y A tras superar los fotogramas del video
    // NOTA: Solo se activa con el flag explicito --auto-skip para no interferir en partidas manuales/menu interactivo
    if (rctx->auto_skip) {
        static uint64_t simulated_pad_ticks = 0;
        ++simulated_pad_ticks;
        const uint64_t start_skip_tick = 40;
        const uint64_t title_confirm_tick = 250;
        const uint64_t menu_confirm_tick = 350;

        if (simulated_pad_ticks >= start_skip_tick && simulated_pad_ticks < title_confirm_tick) {
            // Enviar START intermitente para saltar la intro/demo y llegar a r_title
            if ((simulated_pad_ticks / 8) % 2 == 0) {
                btn |= 0x1000u; // START
            }
        } else if (simulated_pad_ticks >= title_confirm_tick && simulated_pad_ticks < menu_confirm_tick) {
            // Una vez en el menu de titulo (r_title), pulsar boton START / A (confirmar New Game)
            if ((simulated_pad_ticks / 10) % 2 == 0) {
                btn |= 0x1100u; // START (0x1000) + A (0x0100)
            }
        } else if (simulated_pad_ticks >= menu_confirm_tick) {
            if (rctx->codec_active) {
                // En Códec, esperar ~2.5s (150 frames) para observar el diálogo inicial, pulsar A brevemente cada 30 frames
                // hasta +600 frames para avanzar a gameplay, y luego detener auto_skip para control manual de Snake.
                if (rctx->codec_start_frame > 0) {
                    if (rctx->frame_count >= rctx->codec_start_frame + 600u) {
                        std::printf("[AUTO-SKIP] Ventana de Codec completada (frame %u). Desactivando auto_skip para gameplay.\n",
                                    rctx->frame_count);
                        rctx->auto_skip = false;
                    } else if ((rctx->frame_count >= rctx->codec_start_frame + 150u) &&
                               ((rctx->frame_count % 30u) < 2u)) {
                        btn |= 0x0100u; // A (Avanzar diálogos)
                    }
                }
            } else if (rctx->area01a_loaded) {
                // En area01a previo al Códec, no enviar LEFT ni START (evita abrir menú de pausa CONTINUE/SKIP).
                if ((rctx->frame_count / 15) % 2 == 0) {
                    btn |= 0x0100u; // A suave
                }
            } else {
                // Confirmar posibles dialogos de Memory Card (seleccionar YES con Stick Izquierda + A/START)
                const uint64_t phase = (simulated_pad_ticks / 15) % 4;
                if (phase == 0 || phase == 1) {
                    sx = -80; // Inclinacion hacia la izquierda para elegir [YES]
                    btn |= 0x0001u; // D-Pad LEFT
                }
                if (phase == 1 || phase == 2) {
                    btn |= 0x0100u; // A (Confirmar)
                }
                if (phase == 3) {
                    btn |= 0x1000u; // START
                }
            }
        }
    }
    if (rctx->test_move && rctx->frame_count >= 2550u && rctx->frame_count < 2750u) {
        sy = 120; // Prueba QA de desplazamiento adelante en area01a
    }
    if (rctx->test_codec && rctx->frame_count >= 2450u && rctx->frame_count < 2456u) {
        btn |= 0x1100u; // START + A (Codec en GameCube MGS:TTS) en area01a
    }

    // 2. Soporte nativo para Gamepads Xbox / DirectInput / Steam Input (Sondeo slots 0..3)
    init_xinput();
    if (fn_xinput_get_state) {
        for (DWORD user_idx = 0; user_idx < 4; ++user_idx) {
            #pragma pack(push, 1)
            struct {
                DWORD dwPacketNumber;
                struct {
                    WORD  wButtons;
                    BYTE  bLeftTrigger;
                    BYTE  bRightTrigger;
                    SHORT sThumbLX;
                    SHORT sThumbLY;
                    SHORT sThumbRX;
                    SHORT sThumbRY;
                } Gamepad;
            } xs = {};
            #pragma pack(pop)
            if (fn_xinput_get_state(user_idx, &xs) == 0) { // ERROR_SUCCESS
                WORD xb = xs.Gamepad.wButtons;
                if (xb & 0x0010u) btn |= 0x1000u; // START
                if (xb & 0x1000u) btn |= 0x0100u; // A (Confirmar)
                if (xb & 0x2000u) btn |= 0x0200u; // B (Cancelar)
                if (xb & 0x4000u) btn |= 0x0400u; // X
                if (xb & 0x8000u) btn |= 0x0800u; // Y
                if (xb & 0x0200u) btn |= 0x0010u; // RB -> Z
                if (xb & 0x0100u || xs.Gamepad.bLeftTrigger > 30) {
                    btn |= 0x0040u;
                    trigL = (std::max)(trigL, xs.Gamepad.bLeftTrigger);
                }
                if (xs.Gamepad.bRightTrigger > 30) {
                    btn |= 0x0020u;
                    trigR = (std::max)(trigR, xs.Gamepad.bRightTrigger);
                }
                if (xb & 0x0001u) btn |= 0x0008u; // UP
                if (xb & 0x0002u) btn |= 0x0004u; // DOWN
                if (xb & 0x0004u) btn |= 0x0001u; // LEFT
                if (xb & 0x0008u) btn |= 0x0002u; // RIGHT

                if (std::abs(xs.Gamepad.sThumbLX) > 6000) sx = static_cast<s8>(xs.Gamepad.sThumbLX / 256);
                if (std::abs(xs.Gamepad.sThumbLY) > 6000) sy = static_cast<s8>(xs.Gamepad.sThumbLY / 256);
                if (std::abs(xs.Gamepad.sThumbRX) > 6000) ssx = static_cast<s8>(xs.Gamepad.sThumbRX / 256);
                if (std::abs(xs.Gamepad.sThumbRY) > 6000) ssy = static_cast<s8>(xs.Gamepad.sThumbRY / 256);
                break; // Mando detectado
            }
        }
    }

    if (btn != rctx->prev_pad_button) {
        if (btn != 0) {
            std::printf("[PAD] Entrada: btn=0x%04X (START=%d A=%d B=%d X=%d Y=%d Z=%d L=%d R=%d) Stick=(%d,%d)\n",
                        btn,
                        (btn & 0x1000) ? 1 : 0,
                        (btn & 0x0100) ? 1 : 0,
                        (btn & 0x0200) ? 1 : 0,
                        (btn & 0x0400) ? 1 : 0,
                        (btn & 0x0800) ? 1 : 0,
                        (btn & 0x0010) ? 1 : 0,
                        (btn & 0x0040) ? 1 : 0,
                        (btn & 0x0020) ? 1 : 0,
                        static_cast<int>(sx), static_cast<int>(sy));
        }
        rctx->prev_pad_button = btn;
    }

    rctx->pad.button = btn;
    rctx->pad.stickX = sx;
    rctx->pad.stickY = sy;
    rctx->pad.substickX = ssx;
    rctx->pad.substickY = ssy;
    rctx->pad.triggerL = trigL;
    rctx->pad.triggerR = trigR;
    rctx->pad.connected = true;
#endif
}

static void write_pad_status_to_guest(CPUState* cpu, u32 base, GfxRuntimeContext* rctx) {
    if (!cpu || !rctx || base == 0) return;
    mem_write16(cpu, base + 0x00u, rctx->pad.button);
    mem_write8(cpu, base + 0x02u, static_cast<u8>(rctx->pad.stickX));
    mem_write8(cpu, base + 0x03u, static_cast<u8>(rctx->pad.stickY));
    mem_write8(cpu, base + 0x04u, static_cast<u8>(rctx->pad.substickX));
    mem_write8(cpu, base + 0x05u, static_cast<u8>(rctx->pad.substickY));
    mem_write8(cpu, base + 0x06u, rctx->pad.triggerL);
    mem_write8(cpu, base + 0x07u, rctx->pad.triggerR);
    mem_write8(cpu, base + 0x08u, (rctx->pad.button & 0x0100u) ? 255u : 0u);
    mem_write8(cpu, base + 0x09u, (rctx->pad.button & 0x0200u) ? 255u : 0u);
    mem_write8(cpu, base + 0x0Au, 0u); // err = 0 (PAD_ERR_NONE)
    mem_write8(cpu, base + 0x0Bu, 0u);

    for (u32 ch = 1; ch < 4; ++ch) {
        u32 p = base + ch * 12u;
        mem_write16(cpu, p + 0x00u, 0u);
        mem_write8(cpu, p + 0x0Au, 0xFFu); // err = -1 (PAD_ERR_NO_CONTROLLER)
    }
}

static void sync_pad_to_guest_memory(CPUState* cpu, GfxRuntimeContext* rctx) {
    if (!cpu || !rctx) return;
    const u32 pad_buffers[] = { 0x801E9388u, 0x7F4FAA38u };
    for (u32 base : pad_buffers) {
        write_pad_status_to_guest(cpu, base, rctx);
    }
}

// =========================================================================
// Emulación de Memory Card Virtual (Ranura A / Memory Card 251 - 2 MB)
// =========================================================================
class Ggsea4VirtualMemoryCard {
public:
    static constexpr size_t CARD_SIZE = 2 * 1024 * 1024; // 2 MB (16 Mbits)
    static constexpr size_t BLOCK_SIZE = 8192;           // 8 KB por bloque
    static constexpr size_t NUM_BLOCKS = 256;
    static constexpr size_t SYSTEM_BLOCKS = 5;
    static constexpr size_t FREE_BLOCKS = NUM_BLOCKS - SYSTEM_BLOCKS; // 251 bloques libres

    std::vector<u8> data;
    std::string file_path = "memcardA.raw";
    bool modified = false;

    static std::pair<u16, u16> calculate_checksums(const u8* ptr, size_t size) {
        u16 csum = 0;
        u16 inv = 0;
        for (size_t i = 0; i < size; i += 2) {
            u16 d = (static_cast<u16>(ptr[i]) << 8) | static_cast<u16>(ptr[i + 1]);
            csum += d;
            inv += static_cast<u16>(d ^ 0xFFFFu);
        }
        return { csum, inv };
    }

    void format() {
        data.assign(CARD_SIZE, 0xFF);

        // Bloque 0: Encabezado (Header) 0x0000..0x1FFF
        for (int i = 0; i < 12; ++i) data[i] = static_cast<u8>(0x30 + i);
        u64 fmt_time = 0x0123456789ABCDEFull;
        for (int i = 0; i < 8; ++i) data[0x0C + i] = static_cast<u8>(fmt_time >> (56 - i * 8));
        data[0x20] = 0; data[0x21] = 0;       // Slot A
        data[0x22] = 0x00; data[0x23] = 0x10; // 16 Mbits (Memory Card 251)
        data[0x24] = 0x00; data[0x25] = 0x00; // Codificación Occidental

        auto [hcsum, hinv] = calculate_checksums(data.data(), 0x01FC);
        data[0x01FC] = static_cast<u8>(hcsum >> 8);
        data[0x01FD] = static_cast<u8>(hcsum & 0xFF);
        data[0x01FE] = static_cast<u8>(hinv >> 8);
        data[0x01FF] = static_cast<u8>(hinv & 0xFF);

        // Bloques 1 y 2 (0x2000 y 0x4000): Directorio y respaldo
        for (size_t b = 1; b <= 2; ++b) {
            size_t base = b * BLOCK_SIZE;
            data[base + 0x1FFA] = 0;
            data[base + 0x1FFB] = 0;
            auto [dcsum, dinv] = calculate_checksums(data.data() + base, 0x1FFC);
            data[base + 0x1FFC] = static_cast<u8>(dcsum >> 8);
            data[base + 0x1FFD] = static_cast<u8>(dcsum & 0xFF);
            data[base + 0x1FFE] = static_cast<u8>(dinv >> 8);
            data[base + 0x1FFF] = static_cast<u8>(dinv & 0xFF);
        }

        // Bloques 3 y 4 (0x6000 y 0x8000): BAT (Block Allocation Table) y respaldo
        for (size_t b = 3; b <= 4; ++b) {
            size_t base = b * BLOCK_SIZE;
            std::memset(data.data() + base, 0, BLOCK_SIZE);
            data[base + 0x06] = 0x00;
            data[base + 0x07] = 0xFB; // 251 bloques libres
            data[base + 0x08] = 0x00;
            data[base + 0x09] = 0x04; // Último bloque reservado = 4
            auto [bcsum, binv] = calculate_checksums(data.data() + base + 4, BLOCK_SIZE - 4);
            data[base + 0x00] = static_cast<u8>(bcsum >> 8);
            data[base + 0x01] = static_cast<u8>(bcsum & 0xFF);
            data[base + 0x02] = static_cast<u8>(binv >> 8);
            data[base + 0x03] = static_cast<u8>(binv & 0xFF);
        }

        save_to_disk();
        modified = false;
    }

    bool init(const std::string& path) {
        file_path = path;
        std::ifstream in(file_path, std::ios::binary);
        if (in.is_open()) {
            in.seekg(0, std::ios::end);
            size_t sz = in.tellg();
            if (sz == CARD_SIZE) {
                data.resize(CARD_SIZE);
                in.seekg(0, std::ios::beg);
                in.read(reinterpret_cast<char*>(data.data()), CARD_SIZE);
                std::printf("[MEMCARD] Tarjeta virtual de memoria cargada desde \"%s\" (2 MB, Slot A)\n", file_path.c_str());
                return true;
            }
        }
        std::printf("[MEMCARD] Creando nueva tarjeta virtual de memoria formateada en \"%s\" (Memory Card 251, 2 MB)...\n", file_path.c_str());
        format();
        return true;
    }

    void save_to_disk() {
        std::ofstream out(file_path, std::ios::binary | std::ios::trunc);
        if (out.is_open()) {
            out.write(reinterpret_cast<const char*>(data.data()), data.size());
            out.flush();
            modified = false;
            std::printf("[MEMCARD] Partida guardada en disco: \"%s\" (2,097,152 bytes)\n", file_path.c_str());
        }
    }

    u32 get_free_bytes() const {
        if (data.size() < 0x8000) return 0;
        size_t bat_base = 3 * BLOCK_SIZE;
        u16 free_b = (static_cast<u16>(data[bat_base + 6]) << 8) | static_cast<u16>(data[bat_base + 7]);
        return static_cast<u32>(free_b) * BLOCK_SIZE;
    }

    u32 get_free_files() const {
        if (data.size() < 0x4000) return 0;
        size_t dir_base = 1 * BLOCK_SIZE;
        u32 count = 0;
        for (int i = 0; i < 127; ++i) {
            if (data[dir_base + i * 64] == 0xFF) ++count;
        }
        return count;
    }

    s32 get_fast_file(CPUState* cpu, s32 fileNo, u32 finfoPtr) {
        if (fileNo < 0 || fileNo >= 127 || data.size() < 0x4000) return -4; // CARD_RESULT_NOFILE
        size_t entry_offset = 1 * BLOCK_SIZE + fileNo * 64;
        if (data[entry_offset] == 0xFF) {
            return -4;
        }
        if (finfoPtr != 0) {
            u16 first_block = (static_cast<u16>(data[entry_offset + 0x36]) << 8) | static_cast<u16>(data[entry_offset + 0x37]);
            u16 block_count = (static_cast<u16>(data[entry_offset + 0x38]) << 8) | static_cast<u16>(data[entry_offset + 0x39]);
            u32 file_len = static_cast<u32>(block_count) * BLOCK_SIZE;

            mem_write32(cpu, finfoPtr + 0x00u, 0u); // chan = 0
            mem_write32(cpu, finfoPtr + 0x04u, static_cast<u32>(fileNo));
            mem_write32(cpu, finfoPtr + 0x08u, 0u);
            mem_write32(cpu, finfoPtr + 0x0Cu, file_len);
            mem_write16(cpu, finfoPtr + 0x10u, first_block);
            mem_write16(cpu, finfoPtr + 0x12u, 0u);
        }
        return 0; // CARD_RESULT_READY
    }

    s32 get_status(CPUState* cpu, s32 fileNo, u32 statPtr) {
        if (fileNo < 0 || fileNo >= 127 || data.size() < 0x4000) return -4;
        size_t entry_offset = 1 * BLOCK_SIZE + fileNo * 64;
        if (data[entry_offset] == 0xFF) return -4;
        if (statPtr != 0) {
            u8* dst = resolve_guest_ptr(cpu, statPtr, 0x6C);
            if (dst) {
                std::memset(dst, 0, 0x6C);
                std::memcpy(dst, data.data() + entry_offset + 0x08, 32);
                u16 block_count = (static_cast<u16>(data[entry_offset + 0x38]) << 8) | static_cast<u16>(data[entry_offset + 0x39]);
                u32 file_len = static_cast<u32>(block_count) * BLOCK_SIZE;
                dst[0x20] = static_cast<u8>(file_len >> 24);
                dst[0x21] = static_cast<u8>(file_len >> 16);
                dst[0x22] = static_cast<u8>(file_len >> 8);
                dst[0x23] = static_cast<u8>(file_len & 0xFF);
                std::memcpy(dst + 0x24, data.data() + entry_offset + 0x28, 4);
                std::memcpy(dst + 0x28, data.data() + entry_offset + 0x00, 4);
                std::memcpy(dst + 0x2C, data.data() + entry_offset + 0x04, 2);
            }
        }
        return 0;
    }

    s32 set_status(CPUState* cpu, s32 fileNo, u32 statPtr) {
        if (fileNo < 0 || fileNo >= 127 || data.size() < 0x4000) return -4;
        size_t entry_offset = 1 * BLOCK_SIZE + fileNo * 64;
        if (data[entry_offset] == 0xFF) return -4;
        if (statPtr != 0) {
            u8* src = resolve_guest_ptr(cpu, statPtr, 0x6C);
            if (src) {
                std::memcpy(data.data() + entry_offset + 0x28, src + 0x24, 4);
                for (size_t b = 1; b <= 2; ++b) {
                    size_t base = b * BLOCK_SIZE;
                    if (b == 2) std::memcpy(data.data() + base, data.data() + 1 * BLOCK_SIZE, BLOCK_SIZE);
                    auto [dcsum, dinv] = calculate_checksums(data.data() + base, 0x1FFC);
                    data[base + 0x1FFC] = static_cast<u8>(dcsum >> 8);
                    data[base + 0x1FFD] = static_cast<u8>(dcsum & 0xFF);
                    data[base + 0x1FFE] = static_cast<u8>(dinv >> 8);
                    data[base + 0x1FFF] = static_cast<u8>(dinv & 0xFF);
                }
                save_to_disk();
            }
        }
        return 0;
    }

    s32 create_file(CPUState* cpu, const std::string& fileName, u32 size, u32 finfoPtr) {
        if (data.size() < CARD_SIZE) return -5;
        s32 emptySlot = -1;
        for (s32 i = 0; i < 127; ++i) {
            if (data[1 * BLOCK_SIZE + i * 64] == 0xFF) {
                emptySlot = i;
                break;
            }
        }
        if (emptySlot == -1) return -9;

        u16 num_blocks = static_cast<u16>((size + BLOCK_SIZE - 1) / BLOCK_SIZE);
        if (num_blocks == 0) num_blocks = 1;

        size_t bat_base = 3 * BLOCK_SIZE;
        u16 free_b = (static_cast<u16>(data[bat_base + 6]) << 8) | static_cast<u16>(data[bat_base + 7]);
        if (num_blocks > free_b) return -8;

        u16 last_alloc = (static_cast<u16>(data[bat_base + 8]) << 8) | static_cast<u16>(data[bat_base + 9]);
        u16 start_block = last_alloc + 1;
        if (start_block < 5) start_block = 5;

        for (u16 i = 0; i < num_blocks; ++i) {
            u16 cur = start_block + i;
            u16 next = (i == num_blocks - 1) ? 0xFFFFu : (cur + 1);
            size_t map_entry = bat_base + 0x0A + (cur - 5) * 2;
            data[map_entry] = static_cast<u8>(next >> 8);
            data[map_entry + 1] = static_cast<u8>(next & 0xFF);
        }
        free_b -= num_blocks;
        data[bat_base + 6] = static_cast<u8>(free_b >> 8);
        data[bat_base + 7] = static_cast<u8>(free_b & 0xFF);
        data[bat_base + 8] = static_cast<u8>((start_block + num_blocks - 1) >> 8);
        data[bat_base + 9] = static_cast<u8>((start_block + num_blocks - 1) & 0xFF);

        for (size_t b = 3; b <= 4; ++b) {
            size_t base = b * BLOCK_SIZE;
            if (b == 4) std::memcpy(data.data() + base, data.data() + 3 * BLOCK_SIZE, BLOCK_SIZE);
            auto [bcsum, binv] = calculate_checksums(data.data() + base + 4, BLOCK_SIZE - 4);
            data[base + 0x00] = static_cast<u8>(bcsum >> 8);
            data[base + 0x01] = static_cast<u8>(bcsum & 0xFF);
            data[base + 0x02] = static_cast<u8>(binv >> 8);
            data[base + 0x03] = static_cast<u8>(binv & 0xFF);
        }

        size_t entry_offset = 1 * BLOCK_SIZE + emptySlot * 64;
        std::memset(data.data() + entry_offset, 0xFF, 64);
        data[entry_offset + 0] = 'G';
        data[entry_offset + 1] = 'G';
        data[entry_offset + 2] = 'S';
        data[entry_offset + 3] = 'E';
        data[entry_offset + 4] = '0';
        data[entry_offset + 5] = '1';
        data[entry_offset + 6] = 0xFF;
        data[entry_offset + 7] = 0x04;
        std::memset(data.data() + entry_offset + 0x08, 0, 32);
        std::memcpy(data.data() + entry_offset + 0x08, fileName.data(), (std::min<size_t>)(fileName.size(), 32));
        data[entry_offset + 0x36] = static_cast<u8>(start_block >> 8);
        data[entry_offset + 0x37] = static_cast<u8>(start_block & 0xFF);
        data[entry_offset + 0x38] = static_cast<u8>(num_blocks >> 8);
        data[entry_offset + 0x39] = static_cast<u8>(num_blocks & 0xFF);

        for (size_t b = 1; b <= 2; ++b) {
            size_t base = b * BLOCK_SIZE;
            if (b == 2) std::memcpy(data.data() + base, data.data() + 1 * BLOCK_SIZE, BLOCK_SIZE);
            auto [dcsum, dinv] = calculate_checksums(data.data() + base, 0x1FFC);
            data[base + 0x1FFC] = static_cast<u8>(dcsum >> 8);
            data[base + 0x1FFD] = static_cast<u8>(dcsum & 0xFF);
            data[base + 0x1FFE] = static_cast<u8>(dinv >> 8);
            data[base + 0x1FFF] = static_cast<u8>(dinv & 0xFF);
        }

        if (finfoPtr != 0) {
            mem_write32(cpu, finfoPtr + 0x00u, 0u);
            mem_write32(cpu, finfoPtr + 0x04u, static_cast<u32>(emptySlot));
            mem_write32(cpu, finfoPtr + 0x08u, 0u);
            mem_write32(cpu, finfoPtr + 0x0Cu, size);
            mem_write16(cpu, finfoPtr + 0x10u, start_block);
            mem_write16(cpu, finfoPtr + 0x12u, 0u);
        }

        save_to_disk();
        return 0;
    }

    s32 read_file(CPUState* cpu, u32 finfoPtr, u32 bufPtr, s32 len, s32 offset) {
        if (finfoPtr == 0 || bufPtr == 0 || len <= 0 || offset < 0) return -5;
        u16 start_block = mem_read16(cpu, finfoPtr + 0x10u);
        if (start_block < 5 || start_block >= NUM_BLOCKS) return -5;

        u16 cur_block = start_block;
        s32 block_idx = offset / static_cast<s32>(BLOCK_SIZE);
        s32 block_off = offset % static_cast<s32>(BLOCK_SIZE);
        size_t bat_base = 3 * BLOCK_SIZE;

        while (block_idx > 0 && cur_block != 0xFFFFu) {
            size_t map_entry = bat_base + 0x0A + (cur_block - 5) * 2;
            cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            --block_idx;
        }
        if (cur_block == 0xFFFFu) return -5;

        size_t src_pos = cur_block * BLOCK_SIZE + block_off;
        if (src_pos + len > CARD_SIZE) return -5;

        u8* dst = resolve_guest_ptr(cpu, bufPtr, len);
        if (dst) {
            std::memcpy(dst, data.data() + src_pos, len);
        }
        return 0;
    }

    s32 write_file(CPUState* cpu, u32 finfoPtr, u32 bufPtr, s32 len, s32 offset) {
        if (finfoPtr == 0 || bufPtr == 0 || len <= 0 || offset < 0) return -5;
        u16 start_block = mem_read16(cpu, finfoPtr + 0x10u);
        if (start_block < 5 || start_block >= NUM_BLOCKS) return -5;

        u16 cur_block = start_block;
        s32 block_idx = offset / static_cast<s32>(BLOCK_SIZE);
        s32 block_off = offset % static_cast<s32>(BLOCK_SIZE);
        size_t bat_base = 3 * BLOCK_SIZE;

        while (block_idx > 0 && cur_block != 0xFFFFu) {
            size_t map_entry = bat_base + 0x0A + (cur_block - 5) * 2;
            cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            --block_idx;
        }
        if (cur_block == 0xFFFFu) return -5;

        size_t dst_pos = cur_block * BLOCK_SIZE + block_off;
        if (dst_pos + len > CARD_SIZE) return -5;

        u8* src = resolve_guest_ptr(cpu, bufPtr, len);
        if (src) {
            std::memcpy(data.data() + dst_pos, src, len);
            save_to_disk();
        }
        return 0;
    }

    s32 delete_file(const std::string& fileName) {
        if (data.size() < 0x4000) return -4;
        for (s32 i = 0; i < 127; ++i) {
            size_t entry = 1 * BLOCK_SIZE + i * 64;
            if (data[entry] != 0xFF) {
                char entryName[33] = {};
                std::memcpy(entryName, data.data() + entry + 8, 32);
                if (fileName == entryName) {
                    u16 block = (static_cast<u16>(data[entry + 0x36]) << 8) | static_cast<u16>(data[entry + 0x37]);
                    size_t bat_base = 3 * BLOCK_SIZE;
                    u16 freed = 0;
                    while (block >= 5 && block < NUM_BLOCKS && block != 0xFFFFu) {
                        size_t map_entry = bat_base + 0x0A + (block - 5) * 2;
                        u16 next = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
                        data[map_entry] = 0;
                        data[map_entry + 1] = 0;
                        ++freed;
                        block = next;
                    }
                    u16 free_b = (static_cast<u16>(data[bat_base + 6]) << 8) | static_cast<u16>(data[bat_base + 7]);
                    free_b += freed;
                    data[bat_base + 6] = static_cast<u8>(free_b >> 8);
                    data[bat_base + 7] = static_cast<u8>(free_b & 0xFF);

                    std::memset(data.data() + entry, 0xFF, 64);
                    for (size_t b = 3; b <= 4; ++b) {
                        size_t base = b * BLOCK_SIZE;
                        if (b == 4) std::memcpy(data.data() + base, data.data() + 3 * BLOCK_SIZE, BLOCK_SIZE);
                        auto [bcsum, binv] = calculate_checksums(data.data() + base + 4, BLOCK_SIZE - 4);
                        data[base + 0x00] = static_cast<u8>(bcsum >> 8);
                        data[base + 0x01] = static_cast<u8>(bcsum & 0xFF);
                        data[base + 0x02] = static_cast<u8>(binv >> 8);
                        data[base + 0x03] = static_cast<u8>(binv & 0xFF);
                    }
                    for (size_t b = 1; b <= 2; ++b) {
                        size_t base = b * BLOCK_SIZE;
                        if (b == 2) std::memcpy(data.data() + base, data.data() + 1 * BLOCK_SIZE, BLOCK_SIZE);
                        auto [dcsum, dinv] = calculate_checksums(data.data() + base, 0x1FFC);
                        data[base + 0x1FFC] = static_cast<u8>(dcsum >> 8);
                        data[base + 0x1FFD] = static_cast<u8>(dcsum & 0xFF);
                        data[base + 0x1FFE] = static_cast<u8>(dinv >> 8);
                        data[base + 0x1FFF] = static_cast<u8>(dinv & 0xFF);
                    }
                    save_to_disk();
                    return 0;
                }
            }
        }
        return -4;
    }
};

struct GameCubeMMIOState {
    u32 cp_status = 0x0000000C; // FIFO empty / idle
    u32 ai_cr = 0;
    u32 ai_vr = 0;
    u32 ai_scnt = 0;
    u32 ai_it = 0;
    u16 ar_size = 3;
    u16 ar_cnt = 1;
    u16 dsp_csr = 0;
};
static GameCubeMMIOState s_mmio;
static std::vector<u8> s_aram(16 * 1024 * 1024, 0);

static u32 s_ai_dma_cb = 0;
static bool s_ai_stream_playing = false;
static u32 s_ai_dma_addr = 0;
static u32 s_ai_dma_len = 0;
static u32 s_ai_dma_bytes_left = 0;

static Ggsea4VirtualMemoryCard g_memcardA;

static void present_frame(CPUState* cpu, GfxRuntimeContext* rctx) {
    if (!rctx || rctx->window_closed) return;
    pump_win32_messages(rctx);
    if (rctx->window_closed) return;
    update_pad_input(rctx);
    sync_pad_to_guest_memory(cpu, rctx);

    const bool has_new_content = rctx->render_device && rctx->render_device->HasNewContentToPresent();
    LARGE_INTEGER now_qpc = {};
    QueryPerformanceCounter(&now_qpc);
    double elapsed_since_last_present = 0.0;
    if (rctx->qpc_freq.QuadPart > 0 && rctx->last_frame_qpc.QuadPart > 0) {
        elapsed_since_last_present = static_cast<double>(now_qpc.QuadPart - rctx->last_frame_qpc.QuadPart) / rctx->qpc_freq.QuadPart;
    }

    // Si no hubo nuevo contenido gráfico y aún no ha transcurrido al menos ~14 ms (~60 Hz),
    // se trata de una llamada redundante en el mismo fotograma (ej. 0x8004C2F0 y 0x7F3C7CC8).
    // Omitir swap y espera para evitar doble retraso y judder de 15 FPS.
    if (!has_new_content && elapsed_since_last_present < 0.014) {
        return;
    }
    const bool efb_active = rctx->render_device && rctx->render_device->IsEfbPipelineActive();
    const bool xfb_copied = rctx->render_device && rctx->render_device->WasXfbCopiedThisFrame();
    const bool video_ready = rctx->render_device && rctx->render_device->HasNewVideoFrame();
    if (efb_active && !xfb_copied && !video_ready && has_new_content && elapsed_since_last_present < 0.080) {
        return;
    }

    rctx->last_vblank_time = std::chrono::steady_clock::now();

    // Incrementar contador de barrido vertical VI (0x8027E22C) y sincronizar buffer de entrada MGS
    u32 cur_retrace = mem_read32(cpu, 0x8027E22Cu) + 1u;
    mem_write32(cpu, 0x8027E22Cu, cur_retrace);
    mem_write32(cpu, 0x801E9388u + 48u, cur_retrace);
    mem_write32(cpu, 0x801E9388u + 52u, 0x80000000u);

    // Reloj continuo de Audio Interface (48 kHz / 60 FPS = 800 muestras por fotograma)
    s_mmio.ai_scnt += 800u;

    if (s_ai_dma_bytes_left > 0) {
        u32 chunk = (std::min)(s_ai_dma_bytes_left, 3200u);
        s_ai_dma_bytes_left -= chunk;
        if (s_ai_dma_bytes_left == 0 && s_ai_dma_cb != 0) {
            u32 orig_sp = cpu->gpr[1];
            u32 orig_lr = cpu->lr;
            u32 call_sp = orig_sp - 32u;
            mem_write32(cpu, call_sp, orig_sp);
            cpu->gpr[1] = call_sp;
            cpu->lr = 0xFFFFFFF0u;
            cpu->pc = s_ai_dma_cb;
            while (cpu->pc != 0xFFFFFFF0u) {
                if (!rctx->module_call(cpu, cpu->pc)) break;
            }
            cpu->gpr[1] = orig_sp;
            cpu->lr = orig_lr;
        }
    }

    ++rctx->frame_count;
    if (rctx->codec_active && rctx->codec_last_tick_frame > 0u &&
        rctx->frame_count > rctx->codec_last_tick_frame + 30u) {
        rctx->codec_active = false;
        rctx->codec_actor_ptr = 0u;
        rctx->codec_last_state = 0xFFFFFFFFu;
        rctx->codec_state_stuck_frames = 0u;
        rctx->codec_start_frame = 0u;
        rctx->codec_last_tick_frame = 0u;
        rctx->audio_stream_active = false;
    }
    if (rctx->frame_count == 1 || rctx->frame_count % 50 == 0) {
        std::printf("[FRAME %u] PC=0x%08X LR=0x%08X SP=0x%08X | Draws=%llu CopiasEFB=%llu | Aspect: %s | VSync: %s | Limiter: %s\n",
                    rctx->frame_count, cpu->pc, cpu->lr, cpu->gpr[1],
                    rctx->render_device ? static_cast<unsigned long long>(rctx->render_device->GetDrawCount()) : 0ULL,
                    rctx->render_device ? static_cast<unsigned long long>(rctx->render_device->GetEfbCopyCount()) : 0ULL,
                    (rctx->aspect_mode == AspectRatioMode::Original_4_3) ? "4:3" :
                    (rctx->aspect_mode == AspectRatioMode::Widescreen_16_9) ? "16:9" : "Stretch",
                    rctx->vsync_enabled ? "ON" : "OFF",
                    rctx->fps_limiter_enabled ? "60FPS" : "Turbo");
        std::fflush(stdout);
    }
    if (rctx->render_device && rctx->hdc) {
        g_perf.enabled = !rctx->fps_limiter_enabled;
        if (g_perf.enabled && g_perf.window_start_qpc == 0) {
            LARGE_INTEGER init_qpc{};
            QueryPerformanceCounter(&init_qpc);
            g_perf.window_start_qpc = static_cast<uint64_t>(init_qpc.QuadPart);
        }
        LARGE_INTEGER prof_pres_t0{};
        if (g_perf.enabled) QueryPerformanceCounter(&prof_pres_t0);
        rctx->render_device->RenderFrameToWindow(
            cpu,
            rctx->vi_xfb_address,
            rctx->client_width,
            rctx->client_height,
            rctx->frame_count,
            rctx->gx_cp ? rctx->gx_cp->GetCommandCount() : 0,
            rctx->reached_mgso_loop,
            rctx->aspect_mode,
            rctx->show_debug_hud);
        if (rctx->dump_frame_interval > 0 && rctx->frame_count % rctx->dump_frame_interval == 0) {
            char pshot[128];
            std::snprintf(pshot, sizeof(pshot), "screenshot_frame_%u.bmp", rctx->frame_count);
            save_frame_to_bmp(pshot, rctx->client_width, rctx->client_height);
            if (rctx->render_device) {
                char efb_shot[128];
                std::snprintf(efb_shot, sizeof(efb_shot), "efb_frame_%u.bmp", rctx->frame_count);
                rctx->render_device->SaveEfbToBmp(efb_shot);
            }
        }
        if (rctx->dump_frame_interval > 0 && rctx->codec_active && rctx->codec_start_frame > 0 &&
            (rctx->frame_count >= rctx->codec_start_frame) &&
            ((rctx->frame_count - rctx->codec_start_frame) % 50 == 0) &&
            ((rctx->frame_count - rctx->codec_start_frame) <= 600)) {
            char cshot[128];
            std::snprintf(cshot, sizeof(cshot), "codec_frame_%u.bmp", rctx->frame_count);
            save_frame_to_bmp(cshot, rctx->client_width, rctx->client_height);
            if (rctx->render_device) {
                char cefb[128];
                std::snprintf(cefb, sizeof(cefb), "codec_efb_%u.bmp", rctx->frame_count);
                rctx->render_device->SaveEfbToBmp(cefb);
            }
            std::printf("[CODEC-CAPTURE] Fotograma de Códec guardado exitosamente: %s\n", cshot);
        }
        LARGE_INTEGER pre_swap_qpc = {}, post_swap_qpc = {};
        QueryPerformanceCounter(&pre_swap_qpc);
        SwapBuffers(rctx->hdc);
        QueryPerformanceCounter(&post_swap_qpc);
        if (g_perf.enabled) {
            g_perf.present_qpc += static_cast<uint64_t>(post_swap_qpc.QuadPart - prof_pres_t0.QuadPart);
            ++g_perf.frames;
            if (g_perf.frames >= 100 && rctx->qpc_freq.QuadPart > 0) {
                const double freq_ms = static_cast<double>(rctx->qpc_freq.QuadPart) / 1000.0;
                const uint64_t total_qpc = static_cast<uint64_t>(post_swap_qpc.QuadPart) - g_perf.window_start_qpc;
                const double inv_frames = 1.0 / static_cast<double>(g_perf.frames);
                const double total_ms = (static_cast<double>(total_qpc) / freq_ms) * inv_frames;
                const double fps = (total_ms > 0.0) ? (1000.0 / total_ms) : 0.0;
                const uint64_t nested_gx = g_perf.gl_submit_qpc + g_perf.copy_efb_qpc;
                const uint64_t gx_excl_qpc = (g_perf.gx_write_qpc > nested_gx) ? (g_perf.gx_write_qpc - nested_gx) : 0ULL;
                const uint64_t gx_total_qpc = (g_perf.gx_write_qpc > nested_gx) ? g_perf.gx_write_qpc : nested_gx;
                const uint64_t gl_other_qpc = (g_perf.gl_submit_qpc > g_perf.batch_qpc) ? (g_perf.gl_submit_qpc - g_perf.batch_qpc) : 0ULL;
                const uint64_t accounted_qpc = gx_total_qpc + g_perf.present_qpc;
                const uint64_t cpu_qpc = (total_qpc > accounted_qpc) ? (total_qpc - accounted_qpc) : 0ULL;
                std::printf("[PERF-PROF f=%u] FPS=%.1f Total=%.2fms | Draws/f=%.0f GLDraws/f=%.0f WG/f=%.0f | CPU+Other=%.2fms GX-Dec=%.2fms Batch=%.2fms GL-Other=%.2fms CopyEfb=%.2fms Swap=%.2fms\n",
                            rctx->frame_count, fps, total_ms,
                            static_cast<double>(g_perf.draws) * inv_frames,
                            static_cast<double>(g_perf.gl_draw_calls) * inv_frames,
                            static_cast<double>(g_perf.wgpipe_writes) * inv_frames,
                            (static_cast<double>(cpu_qpc) / freq_ms) * inv_frames,
                            (static_cast<double>(gx_excl_qpc) / freq_ms) * inv_frames,
                            (static_cast<double>(g_perf.batch_qpc) / freq_ms) * inv_frames,
                            (static_cast<double>(gl_other_qpc) / freq_ms) * inv_frames,
                            (static_cast<double>(g_perf.copy_efb_qpc) / freq_ms) * inv_frames,
                            (static_cast<double>(g_perf.present_qpc) / freq_ms) * inv_frames);
                std::fflush(stdout);
                g_perf.gx_write_qpc = 0;
                g_perf.gl_submit_qpc = 0;
                g_perf.batch_qpc = 0;
                g_perf.copy_efb_qpc = 0;
                g_perf.present_qpc = 0;
                g_perf.draws = 0;
                g_perf.gl_draw_calls = 0;
                g_perf.wgpipe_writes = 0;
                g_perf.frames = 0;
                g_perf.window_start_qpc = static_cast<uint64_t>(post_swap_qpc.QuadPart);
            }
        }
        if (rctx->render_device) {
            rctx->render_device->MarkPresented();
        }

        // Control de ritmo de fotogramas de alta precisión (GameCube VI NTSC: 59.940059 Hz)
        if (rctx->vsync_enabled) {
            // Con VSync activo, SwapBuffers(hdc) ya sincroniza con el refresco del monitor por hardware.
            // No aplicar retrasos adicionales por QPC para evitar saltos de fotograma por doble espera.
            rctx->target_frame_qpc = post_swap_qpc;
            rctx->last_frame_qpc = post_swap_qpc;
        } else if (rctx->fps_limiter_enabled && rctx->qpc_freq.QuadPart > 0) {
            // Pacing por software mediante acumulador QPC (evita drift y micro-saltos cuando VSync está desactivado)
            const double target_frame_s = 1001.0 / 60000.0;
            const int64_t interval_ticks = static_cast<int64_t>(rctx->qpc_freq.QuadPart * target_frame_s);

            if (rctx->target_frame_qpc.QuadPart == 0) {
                rctx->target_frame_qpc = post_swap_qpc;
            }
            rctx->target_frame_qpc.QuadPart += interval_ticks;

            // Si hubo un retraso extremo (> 2 fotogramas), resincronizar para evitar ráfagas
            if (post_swap_qpc.QuadPart > rctx->target_frame_qpc.QuadPart + interval_ticks * 2) {
                rctx->target_frame_qpc = post_swap_qpc;
            }

            LARGE_INTEGER now_qpc = post_swap_qpc;
            if (now_qpc.QuadPart < rctx->target_frame_qpc.QuadPart) {
                double remaining_s = static_cast<double>(rctx->target_frame_qpc.QuadPart - now_qpc.QuadPart) / rctx->qpc_freq.QuadPart;
                if (remaining_s > 0.002) {
                    DWORD sleep_ms = static_cast<DWORD>((remaining_s - 0.0015) * 1000.0);
                    if (sleep_ms > 0) {
                        Sleep(sleep_ms);
                    }
                }
                QueryPerformanceCounter(&now_qpc);
                while (now_qpc.QuadPart < rctx->target_frame_qpc.QuadPart) {
                    YieldProcessor();
                    QueryPerformanceCounter(&now_qpc);
                }
            }
            rctx->last_frame_qpc = now_qpc;
        } else {
            rctx->last_frame_qpc = post_swap_qpc;
        }
    }

    auto now = std::chrono::steady_clock::now();
    if (std::chrono::duration_cast<std::chrono::milliseconds>(now - rctx->last_title_update).count() >= 100 ||
        rctx->frame_count == 1 || (rctx->max_frames > 0 && rctx->frame_count >= rctx->max_frames)) {
        rctx->last_title_update = now;
        double dt_sample = std::chrono::duration<double>(now - rctx->fps_sample_time).count();
        if (dt_sample >= 0.5) {
            rctx->live_fps = (dt_sample > 0.0001) ? ((rctx->frame_count - rctx->fps_sample_frame) / dt_sample) : 0.0;
            rctx->fps_sample_frame = rctx->frame_count;
            rctx->fps_sample_time = now;
        }
        if (rctx->live_fps == 0.0 && rctx->frame_count > 0) {
            double elapsed = std::chrono::duration<double>(now - rctx->start_time).count();
            rctx->live_fps = (elapsed > 0.001) ? (rctx->frame_count / elapsed) : 0.0;
        }
        const char* aspect_str = (rctx->aspect_mode == AspectRatioMode::Original_4_3) ? "4:3" :
                                 (rctx->aspect_mode == AspectRatioMode::Widescreen_16_9) ? "16:9" : "Stretch";
        const char* source_str = rctx->render_device ?
            (rctx->render_device->IsXfbActive() ? "XFB" :
             rctx->render_device->HasEfbFrame() ? "EFB" : "Standby") : "None";
        char title[256];
        std::snprintf(
            title, sizeof(title),
            "MGS: TTS [GGSEA4] | Frm %u (%.1f FPS) | %s | %s | VSync:%s | HUD[F1]:%s | PAD: 0x%04X (%d,%d) | Draws: %llu",
            rctx->frame_count,
            rctx->live_fps,
            aspect_str,
            source_str,
            rctx->vsync_enabled ? "ON" : "OFF",
            rctx->show_debug_hud ? "ON" : "OFF",
            rctx->pad.button,
            static_cast<int>(rctx->pad.stickX),
            static_cast<int>(rctx->pad.stickY),
            static_cast<unsigned long long>(rctx->render_device ? rctx->render_device->GetDrawCount() : 0));
        if (rctx->hwnd) {
            SetWindowTextA(rctx->hwnd, title);
        }
    }
}

static void pump_host_events_if_due(CPUState* cpu, GfxRuntimeContext* rctx) {
    if (!rctx || rctx->window_closed) return;
    auto now = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(now - rctx->last_host_pump).count();
    if (elapsed_ms >= 16) {
        rctx->last_host_pump = now;
        pump_win32_messages(rctx);
        if (rctx->window_closed) return;
        update_pad_input(rctx);
        sync_pad_to_guest_memory(cpu, rctx);

        auto elapsed_vblank_ms = std::chrono::duration_cast<std::chrono::milliseconds>(now - rctx->last_vblank_time).count();
        if (elapsed_vblank_ms >= 120 && rctx->render_device && rctx->hdc) {
            rctx->last_vblank_time = now;
            rctx->render_device->RenderFrameToWindow(
                cpu, rctx->vi_xfb_address, rctx->client_width, rctx->client_height,
                rctx->frame_count, rctx->gx_cp ? rctx->gx_cp->GetCommandCount() : 0,
                rctx->reached_mgso_loop, rctx->aspect_mode, rctx->show_debug_hud);
            SwapBuffers(rctx->hdc);
        }
    }
}
#endif

static u32 host_spr_read(CPUState* cpu, u16 spr, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx || spr >= 1024) return 0;
    if (spr == 1017) {
        return rctx->spr_regs[spr] & ~0x00000001u;
    }
    return rctx->spr_regs[spr];
}

static void host_spr_write(CPUState* cpu, u16 spr, u32 value, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx || spr >= 1024) return;
    rctx->spr_regs[spr] = value;
}

static void host_cache_control(CPUState* cpu, u8 operation, u32 ea, u32 cia) {
    (void)cpu;
    (void)operation;
    (void)ea;
    (void)cia;
}

static void host_instruction_fallback(CPUState* cpu, u32 raw, u32 cia) {
    (void)raw;
    cpu->pc = cia + 4;
}


static u64 host_mmio_read(CPUState* cpu, u32 ea, u8 size) {
    (void)cpu;
    (void)size;
    // CP Status register (0xCC000000): reportar FIFO empty / idle para evitar bloqueos
    if (ea == 0xCC000000u) {
        return 0x00000004u | 0x00000008u;
    }
    // AI (Audio Interface) registers (0xCC006C00..0xCC006C0C)
    if (ea == 0xCC006C00u) {
        return s_mmio.ai_cr;
    }
    if (ea == 0xCC006C04u) {
        return s_mmio.ai_vr;
    }
    if (ea == 0xCC006C08u) {
        // Incrementar contador de muestras para que bucles de sincronizacion AI (loop_8002FFE4, loop_80030028)
        // detecten avance de reloj de audio y salgan de inmediato
        s_mmio.ai_scnt += 32;
        return s_mmio.ai_scnt;
    }
    if (ea == 0xCC006C0Cu) {
        return s_mmio.ai_it;
    }
    // AR / DSP registers
    if (ea == 0xCC005000u) {
        return 0; // CPU to DSP mailbox high: not busy (bit 15 = 0)
    }
    if (ea == 0xCC005002u) {
        return 0;
    }
    if (ea == 0xCC005004u) {
        // DSP to CPU mailbox high: bit 15 = 1 (mail available / DSP ready)
        return (size == 4) ? 0x80000000u : 0x8000u;
    }
    if (ea == 0xCC005006u) {
        return 0;
    }
    if (ea == 0xCC00500Au) {
        return s_mmio.dsp_csr & ~0x0200u; // Bit 9 = 0 (DMA completado / idle)
    }
    if (ea == 0xCC005012u) {
        return s_mmio.ar_size;
    }
    if (ea == 0xCC005016u) {
        return s_mmio.ar_cnt | 1u; // Bit 0 = 1 (ARAM inicializado / listo)
    }
    if (ea == 0xCC005020u) {
        return 0;
    }
    // VI (Video Interface) registers (0xCC002000..0xCC00206C)
    if ((ea & 0xFFFFFF00u) == 0xCC002000u) {
        auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
        if (ea == 0xCC00202Cu) {
            // VI_DPV: Posicion vertical actual del haz (scanline 0..524)
            if (rctx) {
                auto now = std::chrono::steady_clock::now();
                auto elapsed_us = std::chrono::duration_cast<std::chrono::microseconds>(now - rctx->last_vblank_time).count();
                uint32_t line = static_cast<uint32_t>((elapsed_us * 525) / 16683);
                return (line > 524) ? 524 : line;
            }
            return 0;
        }
        if (ea == 0xCC002030u) {
            // VI_DPH: Posicion horizontal actual del haz (pixel 0..857)
            if (rctx) {
                auto now = std::chrono::steady_clock::now();
                auto elapsed_us = std::chrono::duration_cast<std::chrono::microseconds>(now - rctx->last_vblank_time).count();
                uint32_t line_us = static_cast<uint32_t>(elapsed_us % 32);
                uint32_t pix = (line_us * 858) / 32;
                return (pix > 857) ? 857 : pix;
            }
            return 0;
        }
        if (ea == 0xCC00201Cu || ea == 0xCC002020u) {
            // VI_TFBL / VI_TFBR: Base del Top Field Buffer
            return rctx ? rctx->vi_xfb_address : 0;
        }
        if (ea == 0xCC002024u || ea == 0xCC002028u) {
            // VI_BFBL / VI_BFBR: Base del Bottom Field Buffer
            return rctx ? rctx->vi_xfb_address : 0;
        }
        return 0;
    }
    if ((ea & 0xFFFF0000u) == 0xCC000000u) {
        return 0;
    }
    return 0;
}

static void host_mmio_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx) return;

    // 0xCC008000..0xCC00801F = GX WGPIPE (Hardware Write Gather Pipe, incl. psq_st ps1 en +4)
    if ((ea & 0xFFFFFFE0u) == 0xCC008000u && rctx->gx_cp) {
        if (rctx->dl_active) {
            if (size == 1) {
                mem_write8(cpu, rctx->dl_write_addr, static_cast<u8>(value));
                rctx->dl_write_addr += 1u;
            } else if (size == 2) {
                mem_write16(cpu, rctx->dl_write_addr, static_cast<u16>(value));
                rctx->dl_write_addr += 2u;
            } else if (size == 4) {
                mem_write32(cpu, rctx->dl_write_addr, static_cast<u32>(value));
                rctx->dl_write_addr += 4u;
            } else if (size == 8) {
                mem_write32(cpu, rctx->dl_write_addr, static_cast<u32>(value >> 32));
                mem_write32(cpu, rctx->dl_write_addr + 4u, static_cast<u32>(value));
                rctx->dl_write_addr += 8u;
            }
            return;
        }
        {
            if (g_perf.enabled) ++g_perf.wgpipe_writes;
            ScopedPerfQpc prof_gx(g_perf.gx_write_qpc);
            rctx->gx_cp->Write(value, size);
        }
        return;
    }
    if (ea == 0xCC006C00u) {
        s_mmio.ai_cr = static_cast<u32>(value);
        return;
    }
    if (ea == 0xCC006C04u) {
        s_mmio.ai_vr = static_cast<u32>(value);
        return;
    }
    if (ea == 0xCC006C08u) {
        s_mmio.ai_scnt = static_cast<u32>(value);
        return;
    }
    if (ea == 0xCC006C0Cu) {
        s_mmio.ai_it = static_cast<u32>(value);
        return;
    }
    if (ea == 0xCC00500Au) {
        s_mmio.dsp_csr = static_cast<u16>(value);
        return;
    }
    if (ea == 0xCC005012u) {
        s_mmio.ar_size = static_cast<u16>(value);
        return;
    }
    if (ea == 0xCC005016u) {
        s_mmio.ar_cnt = static_cast<u16>(value);
        return;
    }
    if (ea == 0xCC005020u) {
        return;
    }
    // VI (Video Interface) registers (0xCC002000..0xCC00206C)
    if ((ea & 0xFFFFFF00u) == 0xCC002000u) {
        if (ea == 0xCC00201Cu || ea == 0xCC002020u || ea == 0xCC002024u || ea == 0xCC002028u) {
            rctx->vi_xfb_address = static_cast<u32>(value);
        }
        return;
    }
}

static const u8 s_canonical_audio_rodata[0x100] = {
    0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0x00, 0x00, 0x00, 0x3E, 0x99, 0x99, 0x9A, 0x25, 0x73, 0x2F, 0x25, // 0x80063180: =...?...>...%s/%
    0x73, 0x00, 0x00, 0x00, 0x73, 0x68, 0x61, 0x72, 0x65, 0x64, 0x00, 0x00, 0x2F, 0x61, 0x75, 0x64, // 0x80063190: s...shared../aud
    0x69, 0x6F, 0x2F, 0x62, 0x61, 0x6E, 0x6B, 0x73, 0x2F, 0x62, 0x61, 0x6E, 0x6B, 0x25, 0x30, 0x33, // 0x800631A0: io/banks/bank%03
    0x64, 0x2E, 0x73, 0x70, 0x64, 0x00, 0x00, 0x00, 0x2F, 0x61, 0x75, 0x64, 0x69, 0x6F, 0x2F, 0x62, // 0x800631B0: d.spd.../audio/b
    0x61, 0x6E, 0x6B, 0x73, 0x2F, 0x62, 0x61, 0x6E, 0x6B, 0x25, 0x30, 0x33, 0x64, 0x2E, 0x73, 0x70, // 0x800631C0: anks/bank%03d.sp
    0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x48, 0xF5, 0xC3, 0x40, 0x96, 0xCB, 0xE4, // 0x800631D0: t.......@H..@...
    0x3F, 0xC9, 0x0F, 0xDB, 0x25, 0x73, 0x25, 0x30, 0x34, 0x64, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, // 0x800631E0: ?...%s%04d%s....
    0x61, 0x75, 0x64, 0x69, 0x6F, 0x2F, 0x73, 0x74, 0x72, 0x65, 0x61, 0x6D, 0x2F, 0x00, 0x00, 0x00, // 0x800631F0: audio/stream/...
    0x00, 0x00, 0x00, 0x00, 0x25, 0x73, 0x25, 0x30, 0x34, 0x64, 0x4C, 0x25, 0x73, 0x00, 0x00, 0x00, // 0x80063200: ....%s%04dL%s...
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x80, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, // 0x80063210: ....>...B...?...
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x80063220: C0......@ ......
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x73, 0x64, 0x5F, 0x73, 0x74, 0x72, 0x65, 0x61, // 0x80063230: C0......sd_strea
    0x6D, 0x32, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x43, 0x4D, 0x00, // 0x80063240: m2.c........PCM.
    0x47, 0x00, 0x00, 0x00, 0x25, 0x73, 0x25, 0x30, 0x34, 0x64, 0x4C, 0x25, 0x73, 0x00, 0x00, 0x00, // 0x80063250: G...%s%04dL%s...
    0x61, 0x75, 0x64, 0x69, 0x6F, 0x2F, 0x73, 0x74, 0x72, 0x65, 0x61, 0x6D, 0x2F, 0x00, 0x00, 0x00, // 0x80063260: audio/stream/...
    0x25, 0x73, 0x25, 0x30, 0x34, 0x64, 0x52, 0x25, 0x73, 0x00, 0x00, 0x00, 0x25, 0x73, 0x25, 0x30  // 0x80063270: %s%04dR%s...%s%0
};

static void restore_canonical_audio_rodata(CPUState* cpu) {
    if (!cpu || !cpu->ram) return;
    const u32 ram_off = 0x00063180u;
    if (ram_off + sizeof(s_canonical_audio_rodata) <= cpu->ram_size) {
        std::memcpy(cpu->ram + ram_off, s_canonical_audio_rodata, sizeof(s_canonical_audio_rodata));
    }
}

static void write_journal_cb(u32 offset, u32 size, void* user) {
    if (offset >= 0x000000C0 && offset <= 0x00000100) {
        CPUState* cpu = static_cast<CPUState*>(user);
        u32 addr = 0x80000000u + offset;
        u32 old_val = mem_read32(cpu, addr);
        std::printf("[WATCH-WRITE-OS] addr=0x%08X size=%u PC=0x%08X LR=0x%08X SP=0x%08X old=0x%08X\n",
                    addr, size, cpu->pc, cpu->lr, cpu->gpr[1], old_val);
        std::fflush(stdout);
    }
    if (offset >= 0x00063180u && offset <= 0x00063280u) {
        CPUState* cpu = static_cast<CPUState*>(user);
        u32 addr = 0x80000000u + offset;
        std::printf("[WATCH-WRITE-DATA] PROTECTING rodata overwrite: addr=0x%08X size=%u PC=0x%08X LR=0x%08X SP=0x%08X (restoring canonical .rodata)\n",
                    addr, size, cpu->pc, cpu->lr, cpu->gpr[1]);
        restore_canonical_audio_rodata(cpu);
        std::fflush(stdout);
    }
}

static constexpr auto kHookedAddrs = std::to_array<u32>({
    0x7F0080ECu, 0x7F008174u, 0x7F008210u, 0x7F00A248u, 0x7F00A430u, 0x7F00A8E0u, 0x7F00A968u, 0x7F017838u,
    0x7F017934u, 0x7F017DC4u, 0x7F017E90u, 0x7F0185C0u, 0x7F0186ECu, 0x7F01893Cu, 0x7F0FCF70u, 0x7F0FD7BCu, 0x7F0FD818u,
    0x7F0FE400u, 0x7F0FEAC4u, 0x7F18EE3Cu, 0x7F1905F8u, 0x7F19065Cu, 0x7F28100Cu, 0x7F281650u, 0x7F290DCCu, 0x7F292570u,
    0x7F292C72u, 0x7F29E874u, 0x7F29F4E0u, 0x7F2A0A18u, 0x7F2A1A70u, 0x7F2A1FD8u, 0x7F2A528Cu, 0x7F2DD09Cu,
    0x7F2DD7D8u, 0x7F2DD7ECu, 0x7F2DD844u, 0x7F2DD89Cu, 0x7F2DD8F8u, 0x7F2DD968u, 0x7F2DDA74u, 0x7F2DDBD4u,
    0x7F2DDE00u, 0x7F2DE4E8u, 0x7F2DE618u, 0x7F2DE6E8u, 0x7F2DE850u, 0x7F2DEA5Cu, 0x7F2DEC44u, 0x7F352010u,
    0x7F39A2B8u, 0x7F3B191Cu, 0x7F3C7C48u, 0x7F3C7CC8u, 0x7F3C7D9Cu, 0x7F3C8F68u, 0x7F3CC15Cu, 0x7F3CC1ECu,
    0x7F41BF28u, 0x7F41BFC4u, 0x800050B4u, 0x800050E4u, 0x8000519Cu, 0x80005240u, 0x800066F8u, 0x80006958u,
    0x80007204u, 0x8000D478u, 0x8000DA28u, 0x8001258Cu, 0x8001878Cu, 0x800189E8u, 0x80018A88u, 0x80018B74u,
    0x80018E84u, 0x80019078u, 0x800192F4u, 0x80019420u, 0x80019AB4u, 0x80019BA8u, 0x80019CC4u, 0x8001BA38u,
    0x8001BE84u, 0x8001BFF0u, 0x8001BFF4u, 0x8001D778u, 0x8001D934u, 0x8001DA20u, 0x8001DA4Cu, 0x8001DA7Cu,
    0x8001DAACu, 0x8001DAD8u, 0x8001DB04u, 0x8001E8F8u, 0x8001E978u, 0x8001E980u, 0x80023578u, 0x80023F34u,
    0x80023F70u, 0x800243F8u, 0x800247F0u, 0x800248DCu, 0x80025B84u, 0x80027324u, 0x80027618u, 0x8002768Cu,
    0x80027754u, 0x800278D8u, 0x8002799Cu, 0x80027A8Cu, 0x80027BA4u, 0x8002A0E8u, 0x8002A1C0u, 0x8002B64Cu,
    0x8002C800u, 0x8002C8F0u, 0x8002E9DCu, 0x8002EB2Cu, 0x8002EE2Cu, 0x8002EE98u, 0x8002F80Cu, 0x8002F888u,
    0x8002F8CCu, 0x8002F954u, 0x8002F96Cu, 0x8002FC84u, 0x8002FF70u, 0x80030198u, 0x800301D4u, 0x80031ED4u,
    0x800380C4u, 0x80038190u, 0x80039A10u, 0x80039C18u, 0x80039D68u, 0x8003C930u, 0x8003CA50u, 0x8003D2B4u,
    0x8003D2FCu, 0x8003D398u, 0x8003D588u, 0x8003DBE0u, 0x8003DC9Cu, 0x8003E0A8u, 0x8003E1C4u, 0x8003E220u,
    0x8003E570u, 0x8003E8A0u, 0x8003E9E4u, 0x8003ED60u, 0x8003EF5Cu, 0x8003F19Cu, 0x8003F668u, 0x8003F6B0u,
    0x8003FA24u, 0x80042974u, 0x800429C0u, 0x80043744u, 0x80046420u, 0x80046538u, 0x80046600u, 0x800468B8u,
    0x80046A30u, 0x80046C74u, 0x80046D04u, 0x8004B18Cu, 0x8004B8A8u, 0x8004C2F0u, 0x8004C388u, 0x8004DBACu,
    0x8004F270u, 0x8004F318u, 0x800501FCu, 0x80050B54u, 0x80051688u, 0x80051AF0u, 0x80051BB0u, 0x80051D14u,
    0x80054EC8u, 0x800569D8u, 0x800569E4u, 0x800569F4u, 0x80056BDCu
});
static constexpr std::array<u64, 64> kHostHookBloom = []() {
    std::array<u64, 64> b{};
    for (u32 a : kHookedAddrs) {
        const u32 h = (a >> 2) ^ (a >> 14);
        b[h & 63u] |= (1ULL << ((h >> 6) & 63u));
    }
    return b;
}();

static bool host_call_hook(CPUState* cpu, u32 address) {
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx) return false;

    if (!rctx->verbose_logging && rctx->reached_mgso_loop && !cpu->host_call_bloom) {
        const u32 h = (address >> 2) ^ (address >> 14);
        if (((kHostHookBloom[h & 63u] >> ((h >> 6) & 63u)) & 1ULL) == 0ULL) {
            return false;
        }
    }

    if (address == 0x8004F318u) {
        restore_canonical_audio_rodata(cpu);
        static int f318_cnt = 0;
        ++f318_cnt;
        std::printf("[TRACE-F318] #%d called from LR=0x%08X SP=0x%08X r3=0x%08X r4=0x%08X\n",
                    f318_cnt, cpu->lr, cpu->gpr[1], cpu->gpr[3], cpu->gpr[4]);
        std::printf("  fmt_spd='%s' (0x%08X) fmt_spt='%s' (0x%08X) fmt_slash='%s' (0x%08X) shared='%s' (0x%08X)\n",
                    read_guest_cstring(cpu, 0x8006319Cu).c_str(), 0x8006319Cu,
                    read_guest_cstring(cpu, 0x800631B8u).c_str(), 0x800631B8u,
                    read_guest_cstring(cpu, 0x8006318Cu).c_str(), 0x8006318Cu,
                    read_guest_cstring(cpu, 0x80063194u).c_str(), 0x80063194u);
        return false;
    }

    if (address == 0x8004F270u) {
        restore_canonical_audio_rodata(cpu);
        std::string pstr = read_guest_cstring(cpu, cpu->gpr[3]);
        std::printf("[TRACE-F270] called from LR=0x%08X SP=0x%08X r3=0x%08X str='%s' r4=%u\n",
                    cpu->lr, cpu->gpr[1], cpu->gpr[3], pstr.c_str(), cpu->gpr[4]);
        return false;
    }

    if (address == 0x8001258Cu) {
        // sprintf(char* dst [r3], const char* fmt [r4], ...)
        if (cpu->lr == 0x8004F3BCu || cpu->lr == 0x8004F414u || cpu->lr == 0x8004F2C4u) {
            restore_canonical_audio_rodata(cpu);
        }
        static int spr_cnt = 0;
        ++spr_cnt;
        std::string fmt = read_guest_cstring(cpu, cpu->gpr[4]);
        if (cpu->lr == 0x8004F3BCu || cpu->lr == 0x8004F414u || cpu->lr == 0x8004F2C4u || spr_cnt <= 10) {
            std::printf("[TRACE-SPRINTF] #%d dst=0x%08X fmt='%s' r5=0x%08X r6=0x%08X LR=0x%08X SP=0x%08X\n",
                        spr_cnt, cpu->gpr[3], fmt.c_str(), cpu->gpr[5], cpu->gpr[6], cpu->lr, cpu->gpr[1]);
        }
        return false;
    }

    // 1. Operaciones nativas ultrarrápidas de memoria (memset / __fill_mem / memcpy)
    if (address == 0x800050B4u) {
        // memset(void* dst [r3], int val [r4], size_t n [r5])
        u32 dst = cpu->gpr[3];
        u8 val = static_cast<u8>(cpu->gpr[4] & 0xFFu);
        u32 count = cpu->gpr[5];
        u32 dst_norm = dst & 0x7FFFFFFFu;
        if (dst_norm < 0x00003000u) {
            bool is_valid_os_write = (dst_norm >= 0x100u && count <= 256u && cpu->lr < 0x80050000u);
            if (!is_valid_os_write) {
                std::printf("[GUARD-OS-PROTECT] Bloqueada sobreescritura ilegal memset sobre OS low memory! (dst=0x%08X, val=%u, count=%u, LR=0x%08X)\n",
                            dst, val, count, cpu->lr);
                std::fflush(stdout);
                cpu->gpr[3] = dst;
                cpu->pc = cpu->lr;
                return true;
            }
        }
        if (dst <= 0x80063200u && (dst + count) >= 0x80063180u) {
            std::printf("[WATCH-MEMSET-DATA] dst=0x%08X count=%u val=0x%02X PC=0x%08X LR=0x%08X SP=0x%08X\n",
                        dst, count, val, cpu->pc, cpu->lr, cpu->gpr[1]);
            std::fflush(stdout);
        }
        if (u8* ptr = resolve_guest_ptr(cpu, dst, count)) {
            std::memset(ptr, val, count);
            if (dst <= 0x80063280u && (dst + count) >= 0x80063180u) {
                restore_canonical_audio_rodata(cpu);
            }
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x800050E4u) {
        // __fill_mem(void* dst [r3], int val [r4], size_t n [r5])
        u32 dst = cpu->gpr[3];
        u8 val = static_cast<u8>(cpu->gpr[4] & 0xFFu);
        u32 count = cpu->gpr[5];
        u32 dst_norm = dst & 0x7FFFFFFFu;
        if (dst_norm < 0x00003000u) {
            bool is_valid_os_write = (dst_norm >= 0x100u && count <= 256u && cpu->lr < 0x80050000u);
            if (!is_valid_os_write) {
                std::printf("[GUARD-OS-PROTECT] Bloqueada sobreescritura ilegal __fill_mem sobre OS low memory! (dst=0x%08X, val=%u, count=%u, LR=0x%08X)\n",
                            dst, val, count, cpu->lr);
                std::fflush(stdout);
                cpu->gpr[3] = dst;
                cpu->pc = cpu->lr;
                return true;
            }
        }
        if (dst <= 0x80063280u && (dst + count) >= 0x80063180u) {
            std::printf("[WATCH-FILLMEM-DATA] dst=0x%08X count=%u val=0x%02X PC=0x%08X LR=0x%08X SP=0x%08X\n",
                        dst, count, val, cpu->pc, cpu->lr, cpu->gpr[1]);
            std::fflush(stdout);
        }
        if (u8* ptr = resolve_guest_ptr(cpu, dst, count)) {
            std::memset(ptr, val, count);
            if (dst <= 0x80063280u && (dst + count) >= 0x80063180u) {
                restore_canonical_audio_rodata(cpu);
            }
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x8000519Cu) {
        // memcpy(void* dst [r3], const void* src [r4], size_t n [r5])
        u32 dst = cpu->gpr[3];
        u32 src = cpu->gpr[4];
        u32 count = cpu->gpr[5];
        u32 dst_norm = dst & 0x7FFFFFFFu;
        if (dst <= 0x80063280u && (dst + count) >= 0x80063180u) {
            std::printf("[WATCH-MEMCPY-DATA] dst=0x%08X src=0x%08X count=%u PC=0x%08X LR=0x%08X SP=0x%08X\n",
                        dst, src, count, cpu->pc, cpu->lr, cpu->gpr[1]);
            std::fflush(stdout);
        }
        if (dst_norm < 0x00003000u) {
            bool is_valid_os_write = false;
            if (dst_norm == 0x60u && count <= 64u) {
                is_valid_os_write = true; // OSInit BI2
            } else if (dst_norm >= 0x100u && count <= 256u && cpu->lr < 0x80050000u) {
                is_valid_os_write = true; // Exception vectors
            }
            if (!is_valid_os_write) {
                std::printf("[GUARD-OS-PROTECT] Bloqueada sobreescritura ilegal memcpy sobre OS low memory! (dst=0x%08X, src=0x%08X, count=%u, LR=0x%08X)\n",
                            dst, src, count, cpu->lr);
                std::printf("                  Registers: r26=0x%08X r27=0x%08X r28=0x%08X r29=0x%08X r30=0x%08X r31=0x%08X\n",
                            cpu->gpr[26], cpu->gpr[27], cpu->gpr[28], cpu->gpr[29], cpu->gpr[30], cpu->gpr[31]);
                std::fflush(stdout);
                cpu->gpr[3] = dst;
                cpu->pc = cpu->lr;
                return true;
            }
        }
        if (rctx->verbose_logging &&
            ((dst >= 0x7F498000u && dst < 0x7F500110u) ||
             (dst >= 0x80EE7170u && dst < 0x80F4F280u))) {
            std::printf("[TRAP-MEMCPY] dst=0x%08X src=0x%08X count=%u (0x%X) LR=0x%08X PC=0x%08X\n",
                        dst, src, count, count, cpu->lr, cpu->pc);
        }
        u8* dst_ptr = resolve_guest_ptr(cpu, dst, count);
        u8* src_ptr = resolve_guest_ptr(cpu, src, count);
        if (dst_ptr && src_ptr) {
            std::memmove(dst_ptr, src_ptr, count);
            if (dst <= 0x80063280u && (dst + count) >= 0x80063180u) {
                restore_canonical_audio_rodata(cpu);
            }
            cpu->pc = cpu->lr;
            return true;
        }
    }

    if (address == 0x8003FA24u) {
        std::printf("[GFX] GXInit (0x8003FA24) iniciado | fifo=0x%08X size=0x00010000\n", cpu->gpr[3]);
    } else if (address == 0x8004B18Cu) {
        rctx->in_gx_init = true;
        std::printf("[GFX] GXInit completado exitosamente (%llu comandos GX procesados)\n",
                    static_cast<unsigned long long>(rctx->gx_cp ? rctx->gx_cp->GetCommandCount() : 0));
    } else if (address == 0x80023F70u) {
        if (cpu->gpr[4] == 0x8000D800u && cpu->lr == 0x8000D9E0u &&
            cpu->gpr[3] != 0x801EC3B8u && cpu->gpr[8] >= 18u) {
            std::printf("[THREAD-PRIO] Promoviendo hilo trabajador 0x%08X (prio %u -> 14) para evitar inanicion!\n",
                        cpu->gpr[3], cpu->gpr[8]);
            cpu->gpr[8] = 14u;
        }
        if (rctx->verbose_logging) {
            std::printf("[THREAD] OSCreateThread(func=0x%08X, stack=0x%08X, prio=%u, LR=0x%08X)\n",
                        cpu->gpr[4], cpu->gpr[6], cpu->gpr[8], cpu->lr);
        }
        if (cpu->lr == 0x80007154u) {
            cpu->gpr[3] = 1u;
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x800243F8u) {
        if (rctx->verbose_logging) {
            std::printf("[THREAD] OSResumeThread(thread=0x%08X, LR=0x%08X)\n",
                        cpu->gpr[3], cpu->lr);
        }
        if (cpu->lr == 0x80007160u) {
            cpu->gpr[3] = 1u;
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x800247F0u) {
        if (rctx->verbose_logging) {
            std::printf("[THREAD] OSSleepThread(queue=0x%08X, LR=0x%08X SP=0x%08X)\n",
                        cpu->gpr[3], cpu->lr, cpu->gpr[1]);
        }
    } else if (address == 0x800248DCu) {
        if (rctx->verbose_logging && cpu->gpr[3] == 0x7F4A3DBCu) {
            u32 sp = cpu->gpr[1];
            std::printf("[THREAD-WAKE-MOVIE] queue=0x7F4A3DBC backtrace (LR0=0x%08X):\n", cpu->lr);
            for (int f = 0; f < 8 && sp >= 0x80000000u && sp < 0x81800000u; ++f) {
                u32 next_sp = mem_read32(cpu, sp);
                u32 ret_lr = (next_sp >= 0x80000000u && next_sp < 0x81800000u) ? mem_read32(cpu, next_sp + 4u) : 0;
                std::printf("  #%d sp=0x%08X next_sp=0x%08X lr=0x%08X\n", f, sp, next_sp, ret_lr);
                sp = next_sp;
            }
        }
        if (rctx->verbose_logging) {
            std::printf("[THREAD] OSWakeupThread(queue=0x%08X, LR=0x%08X SP=0x%08X)\n",
                        cpu->gpr[3], cpu->lr, cpu->gpr[1]);
        }
    } else if (address == 0x80023578u) {
        if (rctx->verbose_logging) {
            std::printf("[SEMA] OSSignalSemaphore(sem=0x%08X, LR=0x%08X SP=0x%08X)\n",
                        cpu->gpr[3], cpu->lr, cpu->gpr[1]);
        }
    } else if (address == 0x8004DBACu) {
        if (rctx->verbose_logging) {
            std::printf("[STATUS] 0x8004DBAC called (g_status=0x%08X, LR=0x%08X)\n",
                        mem_read32(cpu, 0x8020E544u), cpu->lr);
        }
    } else if (address >= 0x7F00A000u && address <= 0x7F00A380u) {
        if (rctx->verbose_logging) {
            std::printf("[CB-TRACE] call 0x%08X (LR=0x%08X SP=0x%08X r3=0x%08X r4=0x%08X)\n",
                        address, cpu->lr, cpu->gpr[1], cpu->gpr[3], cpu->gpr[4]);
        }
    } else if (address == 0x7F3B191Cu) {
        if (rctx->verbose_logging) {
            std::printf("[CAM-SETUP 0x7F3B191C] LR=0x%08X r3=0x%08X r4=0x%08X\n", cpu->lr, cpu->gpr[3], cpu->gpr[4]);
        }
    } else if (address == 0x80025B84u) {
        // Diagnóstico: MTXTranspose (0x80025B84): r3=src, r4=dst
        static int s_mtx_cnt = 0;
        if (rctx->verbose_logging || ++s_mtx_cnt <= 5) {
            u32 src = cpu->gpr[3];
            u32 dst = cpu->gpr[4];
            float sm[16];
            for (int i = 0; i < 16; ++i) {
                u32 raw = mem_read32(cpu, src + i * 4u);
                std::memcpy(&sm[i], &raw, sizeof(float));
            }
            std::printf("[MTXTranspose 0x80025B84] src=0x%08X dst=0x%08X LR=0x%08X hid2=0x%08X gqr0=0x%08X\n",
                        src, dst, cpu->lr, cpu->hid2, cpu->gqr[0]);
            std::printf("  Src Row0: [%.4f, %.4f, %.4f, %.4f]\n", sm[0], sm[1], sm[2], sm[3]);
            std::printf("  Src Row1: [%.4f, %.4f, %.4f, %.4f]\n", sm[4], sm[5], sm[6], sm[7]);
            std::printf("  Src Row2: [%.4f, %.4f, %.4f, %.4f]\n", sm[8], sm[9], sm[10], sm[11]);
            std::printf("  Src Row3: [%.4f, %.4f, %.4f, %.4f]\n", sm[12], sm[13], sm[14], sm[15]);
            if (src >= 320) {
                u32 cam_base = src - 320;
                std::printf("--- Camera Struct Dump @ 0x%08X (offsets 0..320) ---\n", cam_base);
                for (u32 off = 0; off < 320; off += 16) {
                    u32 w0 = mem_read32(cpu, cam_base + off);
                    u32 w1 = mem_read32(cpu, cam_base + off + 4);
                    u32 w2 = mem_read32(cpu, cam_base + off + 8);
                    u32 w3 = mem_read32(cpu, cam_base + off + 12);
                    float f0, f1, f2, f3;
                    std::memcpy(&f0, &w0, 4); std::memcpy(&f1, &w1, 4);
                    std::memcpy(&f2, &w2, 4); std::memcpy(&f3, &w3, 4);
                    std::printf("  +0x%03X: [%10.4f, %10.4f, %10.4f, %10.4f] | (0x%08X 0x%08X 0x%08X 0x%08X)\n",
                                off, f0, f1, f2, f3, w0, w1, w2, w3);
                }
            }
        }
    } else if (address == 0x800468B8u) {
        // Hook de diagnóstico: GXSetProjection(const float mtx[4][4] [r3], GXProjectionType type [r4])
        u32 mtx_ptr = cpu->gpr[3];
        u32 ptype = cpu->gpr[4];
        float m[16];
        for (int i = 0; i < 16; ++i) {
            u32 raw = mem_read32(cpu, mtx_ptr + i * 4u);
            std::memcpy(&m[i], &raw, sizeof(float));
        }
        if (ptype == 0 && (std::fabs(m[0]) < 1e-4f || std::fabs(m[5]) < 1e-4f)) {
            m[0] = 2.0000f;
            m[5] = 2.6667f;
            u32 r0 = 0, r5 = 0;
            std::memcpy(&r0, &m[0], sizeof(float));
            std::memcpy(&r5, &m[5], sizeof(float));
            mem_write32(cpu, mtx_ptr + 0 * 4u, r0);
            mem_write32(cpu, mtx_ptr + 5 * 4u, r5);
            static int patch_count = 0;
            if (++patch_count <= 20) {
                std::printf("[GX-PROJ-REPAIR] Collapsed projection detected! Patched Row0[0]=%.4f, Row1[1]=%.4f (mtx=0x%08X)\n", m[0], m[5], mtx_ptr);
            }
        }
        if (rctx->verbose_logging) {
            std::printf("[GX-PROJ] GXSetProjection mtx=0x%08X type=%u LR=0x%08X\n", mtx_ptr, ptype, cpu->lr);
            std::printf("  Row0: [%.4f, %.4f, %.4f, %.4f]\n", m[0], m[1], m[2], m[3]);
            std::printf("  Row1: [%.4f, %.4f, %.4f, %.4f]\n", m[4], m[5], m[6], m[7]);
            std::printf("  Row2: [%.4f, %.4f, %.4f, %.4f]\n", m[8], m[9], m[10], m[11]);
            std::printf("  Row3: [%.4f, %.4f, %.4f, %.4f]\n", m[12], m[13], m[14], m[15]);
        }
    } else if (address == 0x80046A30u) {
        // Hook de diagnóstico: GXLoadPosMtxImm(const float mtx[3][4] [r3], u32 id [r4])
        u32 mtx_ptr = cpu->gpr[3];
        u32 mid = cpu->gpr[4];
        static int s_gxmtx_cnt = 0;
        if (mid == 0 || mid == 3 || mid == 6 || mid == 9 || mid == 60) {
            if (rctx->verbose_logging || ++s_gxmtx_cnt <= 10) {
                float m[12];
                for (int i = 0; i < 12; ++i) {
                    u32 raw = mem_read32(cpu, mtx_ptr + i * 4u);
                    std::memcpy(&m[i], &raw, sizeof(float));
                }
                std::printf("[GX-MTX] GXLoadPosMtxImm id=%u mtx=0x%08X LR=0x%08X\n", mid, mtx_ptr, cpu->lr);
                std::printf("  R0: [%.4f, %.4f, %.4f, %.4f]\n", m[0], m[1], m[2], m[3]);
                std::printf("  R1: [%.4f, %.4f, %.4f, %.4f]\n", m[4], m[5], m[6], m[7]);
                std::printf("  R2: [%.4f, %.4f, %.4f, %.4f]\n", m[8], m[9], m[10], m[11]);
            }
        }
    } else if (address == 0x80046C74u || address == 0x80046D04u) {
        if (address == 0x80046D04u) {
            if (!std::isfinite(cpu->fpr[3]) || !std::isfinite(cpu->fpr[4]) ||
                cpu->fpr[3] > 640.0 || cpu->fpr[4] > 528.0 ||
                cpu->fpr[3] < 0.5 || cpu->fpr[4] < 0.5) {
                static int s_vphook_repair_cnt = 0;
                if (++s_vphook_repair_cnt <= 20) {
                    std::printf("[GX-VIEWPORT-HOOK-REPAIR] frame=%u LR=0x%08X: f3(wd)=%.2f f4(ht)=%.2f -> clamped to 512x448\n",
                                rctx->frame_count, cpu->lr, cpu->fpr[3], cpu->fpr[4]);
                }
                cpu->fpr[1] = 0.0;
                cpu->fpr[2] = 0.0;
                cpu->fpr[3] = 512.0;
                cpu->fpr[4] = 448.0;
            }
        }
        if (rctx->verbose_logging) {
            std::printf("[GX-VIEWPORT %s] frame=%u LR=0x%08X SP=0x%08X\n  f1(left)=%.2f f2(top)=%.2f f3(wd)=%.2f f4(ht)=%.2f f5(nz)=%.2f f6(fz)=%.2f\n",
                        address == 0x80046C74u ? "SetViewport" : "SetViewportJitter",
                        rctx->frame_count, cpu->lr, cpu->gpr[1],
                        cpu->fpr[1], cpu->fpr[2], cpu->fpr[3], cpu->fpr[4], cpu->fpr[5], cpu->fpr[6]);
        }
    } else if (address == 0x80046420u) {
        // GXSetColorUpdate(u8 enable [r3])
        static int sc_cnt = 0;
        if (++sc_cnt <= 10) {
            std::printf("[GX-COLOR-UPDATE] enable=%u LR=0x%08X SP=0x%08X\n",
                        cpu->gpr[3], cpu->lr, cpu->gpr[1]);
        }
    } else if (address == 0x80043744u) {
        // GXCopyDisp(void* dest [r3], GXBool clear [r4]): registrar dirección XFB destino y dejar que escriba a WGPIPE
        rctx->vi_xfb_address = cpu->gpr[3];
    } else if (address == 0x8004B8A8u) {
        // Sincronización de GP FIFO post-GXCopyDisp: el procesador GX en RecompCore ya consumió WGPIPE síncronamente
        if (rctx->gx_cp) {
            for (int i = 0; i < 8; ++i) {
                rctx->gx_cp->Write(0, 4);
            }
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8004C2F0u) {
        // Espera de VBlank del motor gráfico de MGS -> presentar fotograma OpenGL
#if defined(_WIN32)
        present_frame(cpu, rctx);
#endif
        if (mem_read16(cpu, 0x801EC6F0u + 712u) == 1u ||
            (rctx->reached_mgso_loop && mem_read16(cpu, 0x7F4A3A90u + 712u) == 1u)) {
            cpu->pc = 0x80023F34u; // OSYieldThread() si MovieThread o ArchiveThread está READY
            return true;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8004C388u) {
        cpu->pc = cpu->lr;
        return true;
    }

    // 2. Hitos de ejecución y consola OSReport
    if (address == 0x80005240u && !rctx->reached_start) {
        rctx->reached_start = true;
        std::printf("[BOOT] __start (0x80005240) alcanzado\n");
    } else if (address == 0x80006958u && !rctx->reached_main) {
        rctx->reached_main = true;
        std::printf("[BOOT] main() en main.dol (0x80006958) alcanzado | SP=0x%08X\n", cpu->gpr[1]);
    } else if (address == 0x8001E8F8u) {
        // OSReport
        std::string fmt = read_guest_cstring(cpu, cpu->gpr[3]);
        std::string msg = (fmt.find("%s") != std::string::npos)
                              ? read_guest_cstring(cpu, cpu->gpr[4])
                              : fmt;
        while (!msg.empty() && (msg.back() == '\n' || msg.back() == '\r')) msg.pop_back();
        if (!msg.empty()) {
            std::printf("[OSReport] %s\n", msg.c_str());
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8001E978u || address == 0x8001E980u) {
        std::string file_str = read_guest_cstring(cpu, cpu->gpr[3]);
        u32 line = cpu->gpr[4];
        std::string msg_str = read_guest_cstring(cpu, cpu->gpr[5]);
        std::printf("\n========================================\n");
        std::printf("[OSPANIC TRIGGERED] %s:%u - %s (LR=0x%08X SP=0x%08X)\n",
                    file_str.c_str(), line, msg_str.c_str(), cpu->lr, cpu->gpr[1]);
        std::printf("========================================\n");
        std::fflush(stdout);
        if (file_str.find("am.c") != std::string::npos || msg_str.find("AM:") != std::string::npos) {
            std::printf("[OSPANIC BYPASS] Suppressed fatal audio panic from am.c to prevent engine freeze!\n");
            std::fflush(stdout);
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x8001BFF0u || address == 0x8001BFF4u) {
        static bool s_panic_dumped = false;
        u32 sp = cpu->gpr[1];
        u32 file_ptr = mem_read32(cpu, sp + 8);
        u32 line_val = mem_read32(cpu, sp + 12);
        u32 msg_ptr = mem_read32(cpu, sp + 16);
        std::string file_str = read_guest_cstring(cpu, file_ptr);
        std::string msg_str = read_guest_cstring(cpu, msg_ptr);
        if (!s_panic_dumped) {
            s_panic_dumped = true;
            std::printf("\n========================================\n");
            std::printf("[HALT/PANIC HIT at 0x%08X] LR=0x%08X SP=0x%08X\n", address, cpu->lr, sp);
            std::printf("  File: %s\n", file_str.c_str());
            std::printf("  Line: %u\n", line_val);
            std::printf("  Msg:  %s\n", msg_str.c_str());
            u32 cur_sp = sp;
            for (int f = 0; f < 12 && cur_sp != 0; ++f) {
                u32 next_sp = mem_read32(cpu, cur_sp);
                u32 ret_lr = mem_read32(cpu, cur_sp + 4);
                std::printf("  #%d sp=0x%08X next_sp=0x%08X lr=0x%08X\n", f, cur_sp, next_sp, ret_lr);
                cur_sp = next_sp;
            }
            std::printf("========================================\n\n");
            std::fflush(stdout);
        }
        if (file_str.find("am.c") != std::string::npos || msg_str.find("AM:") != std::string::npos) {
            std::printf("[OSHALLT BYPASS] Bypassed OSHalt infinite spin for am.c panic.\n");
            std::fflush(stdout);
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x8001D778u || address == 0x8001D934u) {
        // __OSInitAudioSystem / __OSStopAudioSystem
        cpu->pc = cpu->lr;
        return true;
    }

    // 3. Sistema de archivos HLE DVD (lecturas sincronas y asincronas sobre input/extracted/files/)
    if (address == 0x8002768Cu) {
        // DVDOpen(const char* path [r3], DVDFileInfo* fileInfo [r4])
        std::string rel_path = read_guest_cstring(cpu, cpu->gpr[3]);
        while (!rel_path.empty() && (rel_path.front() == '.' || rel_path.front() == '/' || rel_path.front() == '\\')) {
            rel_path.erase(rel_path.begin());
        }
        std::filesystem::path host_path = std::filesystem::path("input/extracted/files") / rel_path;
        std::error_code ec;
        if (std::filesystem::exists(host_path, ec) && std::filesystem::is_regular_file(host_path, ec)) {
            u32 fsize = static_cast<u32>(std::filesystem::file_size(host_path, ec));
            u32 finfo = cpu->gpr[4];
            u32 disc_off = 0;
            auto it_fst = g_fst_path_to_entry.find(rel_path);
            if (it_fst != g_fst_path_to_entry.end() && it_fst->second >= 0 && static_cast<size_t>(it_fst->second) < g_fst_entries.size()) {
                disc_off = g_fst_entries[it_fst->second].disc_offset;
            }
            mem_write32(cpu, finfo + 0x0Cu, 0u);  // cb.state = DVD_STATE_END (0)
            mem_write32(cpu, finfo + 0x30u, disc_off);  // startAddr
            mem_write32(cpu, finfo + 0x34u, fsize); // length
            mem_write32(cpu, finfo + 0x38u, 0u); // callback
            rctx->open_dvd_files[finfo] = host_path.string();
            std::printf("[DVD] DVDOpen(\"%s\") -> OK (%u bytes, off=0x%X) finfo=0x%08X (LR=0x%08X SP=0x%08X)\n",
                        rel_path.c_str(), fsize, disc_off, finfo, cpu->lr, cpu->gpr[1]);
            cpu->gpr[3] = 1u;
        } else {
            std::printf("[DVD] DVDOpen(\"%s\") -> NO ENCONTRADO\n", rel_path.c_str());
            cpu->gpr[3] = 0u;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80027618u) {
        // BOOL DVDFastOpen(s32 entrynum [r3], DVDFileInfo* fileInfo [r4])
        s32 entrynum = static_cast<s32>(cpu->gpr[3]);
        u32 finfo = cpu->gpr[4];
        if (entrynum >= 0 && static_cast<size_t>(entrynum) < g_fst_entries.size() && !g_fst_entries[entrynum].is_dir) {
            const auto& ent = g_fst_entries[entrynum];
            std::filesystem::path host_path = std::filesystem::path("input/extracted/files") / ent.path;
            mem_write32(cpu, finfo + 0x0Cu, 0u);  // cb.state = DVD_STATE_END (0)
            mem_write32(cpu, finfo + 0x30u, ent.disc_offset); // startAddr
            mem_write32(cpu, finfo + 0x34u, ent.size); // length
            mem_write32(cpu, finfo + 0x38u, 0u); // callback = NULL
            mem_write32(cpu, finfo + 0x3Cu, 0u);
            rctx->open_dvd_files[finfo] = host_path.string();
            std::printf("[DVD] DVDFastOpen(entry=%d, \"%s\") -> OK (%u bytes, off=0x%X) finfo=0x%08X (LR=0x%08X SP=0x%08X)\n",
                        entrynum, ent.path.c_str(), ent.size, ent.disc_offset, finfo, cpu->lr, cpu->gpr[1]);
            cpu->gpr[3] = 1u;
        } else {
            std::printf("[DVD] DVDFastOpen(entry=%d) -> FAILED (finfo=0x%08X LR=0x%08X)\n",
                        entrynum, finfo, cpu->lr);
            cpu->gpr[3] = 0u;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80027324u) {
        // s32 DVDConvertPathToEntrynum(const char* path [r3])
        std::string raw_path = read_guest_cstring(cpu, cpu->gpr[3]);
        std::string norm_path;
        norm_path.reserve(raw_path.size());
        for (char c : raw_path) {
            if (c == '\\') c = '/';
            if (c == '/' && !norm_path.empty() && norm_path.back() == '/') {
                continue;
            }
            norm_path.push_back(c);
        }
        while (!norm_path.empty() && (norm_path.front() == '.' || norm_path.front() == '/')) {
            norm_path.erase(norm_path.begin());
        }
        auto it = g_fst_path_to_entry.find(norm_path);
        if (it != g_fst_path_to_entry.end()) {
            cpu->gpr[3] = static_cast<u32>(it->second);
            std::printf("[DVD] DVDConvertPathToEntrynum(\"%s\" -> \"%s\") -> %d (LR=0x%08X)\n",
                        raw_path.c_str(), norm_path.c_str(), it->second, cpu->lr);
        } else {
            s32 found = -1;
            for (size_t i = 1; i < g_fst_entries.size(); ++i) {
                if (!g_fst_entries[i].is_dir) {
#if defined(_WIN32)
                    if (_stricmp(g_fst_entries[i].path.c_str(), norm_path.c_str()) == 0) {
                        found = static_cast<s32>(i);
                        break;
                    }
#else
                    if (strcasecmp(g_fst_entries[i].path.c_str(), norm_path.c_str()) == 0) {
                        found = static_cast<s32>(i);
                        break;
                    }
#endif
                }
            }
            if (found >= 0) {
                cpu->gpr[3] = static_cast<u32>(found);
                std::printf("[DVD] DVDConvertPathToEntrynum(\"%s\" -> \"%s\" [case-insensitive]) -> %d (LR=0x%08X)\n",
                            raw_path.c_str(), norm_path.c_str(), found, cpu->lr);
            } else {
                bool recovered = false;
                if (cpu->lr == 0x8004F2CCu) {
                    u32 bank_id = cpu->gpr[28];
                    u32 parent_lr = mem_read32(cpu, cpu->gpr[1] + 84);
                    bool is_spt = (parent_lr == 0x8004F420u);
                    char fallback_path[128];
                    std::snprintf(fallback_path, sizeof(fallback_path),
                                  "shared/audio/banks/bank%03u.%s",
                                  bank_id, is_spt ? "spt" : "spd");
                    auto it_fb = g_fst_path_to_entry.find(fallback_path);
                    if (it_fb == g_fst_path_to_entry.end()) {
                        std::snprintf(fallback_path, sizeof(fallback_path),
                                      "audio/banks/bank%03u.%s",
                                      bank_id, is_spt ? "spt" : "spd");
                        it_fb = g_fst_path_to_entry.find(fallback_path);
                    }
                    if (it_fb != g_fst_path_to_entry.end()) {
                        cpu->gpr[3] = static_cast<u32>(it_fb->second);
                        std::printf("[DVD] DVDConvertPathToEntrynum FALLBACK RECOVERY: \"%s\" -> %d (bank=%u, is_spt=%d, LR=0x%08X)\n",
                                    fallback_path, it_fb->second, bank_id, (int)is_spt, cpu->lr);
                        u32 guest_buf = cpu->gpr[1] + 8;
                        for (size_t k = 0; k <= std::strlen(fallback_path); ++k) {
                            mem_write8(cpu, guest_buf + (u32)k, (u8)fallback_path[k]);
                        }
                        recovered = true;
                    }
                }
                if (!recovered) {
                    cpu->gpr[3] = 0xFFFFFFFFu; // -1
                    std::printf("[DVD] DVDConvertPathToEntrynum(\"%s\" -> \"%s\") -> NOT FOUND (-1) (r3=0x%08X LR=0x%08X)\n",
                                raw_path.c_str(), norm_path.c_str(), cpu->gpr[3], cpu->lr);
                    std::printf("  bytes at r3: %02X %02X %02X %02X %02X %02X %02X %02X\n",
                                mem_read8(cpu, cpu->gpr[3]), mem_read8(cpu, cpu->gpr[3]+1),
                                mem_read8(cpu, cpu->gpr[3]+2), mem_read8(cpu, cpu->gpr[3]+3),
                                mem_read8(cpu, cpu->gpr[3]+4), mem_read8(cpu, cpu->gpr[3]+5),
                                mem_read8(cpu, cpu->gpr[3]+6), mem_read8(cpu, cpu->gpr[3]+7));
                }
            }
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80027A8Cu) {
        // DVDReadPrio(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6], s32 prio [r7])
        ++rctx->dvd_sync_read_count;
        u32 finfo = cpu->gpr[3];
        u32 dst_addr = cpu->gpr[4];
        s32 length = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        if (dst_addr <= 0x80063200u && (dst_addr + length) >= 0x80063180u) {
            std::printf("[WATCH-DVDREAD-DATA] dst=0x%08X len=%d off=%d LR=0x%08X SP=0x%08X\n",
                        dst_addr, length, offset, cpu->lr, cpu->gpr[1]);
            std::fflush(stdout);
        }
        auto it = rctx->open_dvd_files.find(finfo);
        if (it == rctx->open_dvd_files.end()) {
            u32 disc_off = mem_read32(cpu, finfo + 0x30u);
            auto it_off = g_fst_offset_to_path.find(disc_off);
            if (it_off != g_fst_offset_to_path.end()) {
                rctx->open_dvd_files[finfo] = it_off->second;
                it = rctx->open_dvd_files.find(finfo);
                if (rctx->verbose_logging) {
                    std::printf("[DVD-SYNC] Fallback resolved finfo=0x%08X by disc_off=0x%X -> %s\n",
                                finfo, disc_off, it_off->second.c_str());
                }
            }
        }
        if (it != rctx->open_dvd_files.end()) {
            FILE* f = nullptr;
            auto fit = rctx->cached_dvd_handles.find(it->second);
            if (fit != rctx->cached_dvd_handles.end() && fit->second) {
                f = fit->second;
            } else {
                f = std::fopen(it->second.c_str(), "rb");
                if (f) rctx->cached_dvd_handles[it->second] = f;
            }
            if (f) {
                if (rctx->verbose_logging &&
                    ((dst_addr >= 0x7F498000u && dst_addr < 0x7F500110u) ||
                     (dst_addr >= 0x80EE7170u && dst_addr < 0x80F4F280u))) {
                    std::printf("[TRAP-DVD-SYNC] dst=0x%08X len=%d (0x%X) off=0x%X LR=0x%08X file=%s\n",
                                dst_addr, length, length, offset, cpu->lr, it->second.c_str());
                }
                _fseeki64(f, offset, SEEK_SET);
                size_t read_bytes = 0;
                if (u8* dst_ptr = resolve_guest_ptr(cpu, dst_addr, static_cast<u32>(length > 0 ? length : 0))) {
                    read_bytes = std::fread(dst_ptr, 1, static_cast<size_t>(length > 0 ? length : 0), f);
                } else {
                    std::vector<u8> buf(length > 0 ? length : 0);
                    read_bytes = std::fread(buf.data(), 1, buf.size(), f);
                    for (size_t i = 0; i < read_bytes; ++i) {
                        mem_write8(cpu, dst_addr + static_cast<u32>(i), buf[i]);
                    }
                }
                mem_write32(cpu, finfo + 0x0Cu, 0u); // state = DVD_STATE_END (0)
                mem_write32(cpu, finfo + 0x18u, static_cast<u32>(read_bytes));
                bool is_movie = (finfo == 0x7F4A3330u || it->second.find("movie.dat") != std::string::npos);
                bool is_stage = (finfo == 0x7F4A3150u || it->second.find("stage.dat") != std::string::npos);
                bool is_demo  = (finfo == 0x7F4A3470u || it->second.find("demo.dat")  != std::string::npos);
                bool is_codec = (finfo == 0x7F4A31F0u || it->second.find("codec.dat") != std::string::npos);
                bool is_face  = (finfo == 0x7F4A3290u || it->second.find("face.dat")  != std::string::npos);
                bool is_vox   = (finfo == 0x7F4A33D0u || it->second.find("vox.dat")   != std::string::npos);

                if (is_codec) {
                    rctx->codec_active = true;
                    ++rctx->codec_read_count;
                    if (rctx->codec_start_frame == 0) rctx->codec_start_frame = rctx->frame_count;
                    std::printf("\n============================================================\n");
                    std::printf("[CODEC-EVENT] CARGANDO DATOS DE CODEC (codec.dat)! frame=%u off=0x%X len=%d\n",
                                rctx->frame_count, offset, length);
                    std::printf("============================================================\n\n");
                }
                if (is_face) {
                    rctx->codec_active = true;
                    ++rctx->face_read_count;
                    std::printf("\n============================================================\n");
                    std::printf("[CODEC-FACE] CARGANDO RETRATOS FACIALES (face.dat)! frame=%u off=0x%X len=%d\n",
                                rctx->frame_count, offset, length);
                    std::printf("============================================================\n\n");
                }
                if (is_vox) {
                    ++rctx->vox_read_count;
                    if (rctx->verbose_logging || rctx->vox_read_count <= 5) {
                        std::printf("[CODEC-VOX] Audio de voz (vox.dat): frame=%u off=0x%X len=%d\n",
                                    rctx->frame_count, offset, length);
                    }
                }

                if (is_movie || is_stage || is_demo || is_codec || is_face || rctx->verbose_logging) {
                    const char* tag = is_movie ? "-MOVIE" : (is_stage ? "-STAGE" : (is_demo ? "-DEMO" : (is_codec ? "-CODEC" : (is_face ? "-FACE" : ""))));
                    std::printf("[DVD-SYNC%s] \"%s\" finfo=0x%08X dst=0x%08X len=%d off=0x%X -> %zu bytes (LR=0x%08X SP=0x%08X)\n",
                                tag, it->second.c_str(), finfo, dst_addr, length, offset, read_bytes, cpu->lr, cpu->gpr[1]);
                }
                cpu->gpr[3] = static_cast<u32>(read_bytes);
                cpu->pc = cpu->lr;
                return true;
            }
        }
        std::printf("[DVD-SYNC] Fallo: finfo=0x%08X no encontrado o error de lectura!\n", finfo);
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002799Cu) {
        // BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6], DVDCallback callback [r7], s32 prio [r8])
        ++rctx->dvd_async_read_count;
        u32 finfo = cpu->gpr[3];
        u32 dst_addr = cpu->gpr[4];
        s32 length = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        if (dst_addr <= 0x80063200u && (dst_addr + length) >= 0x80063180u) {
            std::printf("[WATCH-DVDREAD-DATA] dst=0x%08X len=%d off=%d LR=0x%08X SP=0x%08X\n",
                        dst_addr, length, offset, cpu->lr, cpu->gpr[1]);
            std::fflush(stdout);
        }
        u32 callback = cpu->gpr[7];

        auto it = rctx->open_dvd_files.find(finfo);
        if (it == rctx->open_dvd_files.end()) {
            u32 disc_off = mem_read32(cpu, finfo + 0x30u);
            auto it_off = g_fst_offset_to_path.find(disc_off);
            if (it_off != g_fst_offset_to_path.end()) {
                rctx->open_dvd_files[finfo] = it_off->second;
                it = rctx->open_dvd_files.find(finfo);
                if (rctx->verbose_logging) {
                    std::printf("[DVD-ASYNC] Fallback resolved finfo=0x%08X by disc_off=0x%X -> %s\n",
                                finfo, disc_off, it_off->second.c_str());
                }
            }
        }
        if (it != rctx->open_dvd_files.end()) {
            FILE* f = nullptr;
            auto fit = rctx->cached_dvd_handles.find(it->second);
            if (fit != rctx->cached_dvd_handles.end() && fit->second) {
                f = fit->second;
            } else {
                f = std::fopen(it->second.c_str(), "rb");
                if (f) rctx->cached_dvd_handles[it->second] = f;
            }
            if (f) {
                if (rctx->verbose_logging &&
                    ((dst_addr >= 0x7F498000u && dst_addr < 0x7F500110u) ||
                     (dst_addr >= 0x80EE7170u && dst_addr < 0x80F4F280u))) {
                    std::printf("[TRAP-DVD-ASYNC] dst=0x%08X len=%d (0x%X) off=0x%X LR=0x%08X file=%s\n",
                                dst_addr, length, length, offset, cpu->lr, it->second.c_str());
                }
                _fseeki64(f, offset, SEEK_SET);
                size_t read_bytes = 0;
                if (u8* dst_ptr = resolve_guest_ptr(cpu, dst_addr, static_cast<u32>(length > 0 ? length : 0))) {
                    read_bytes = std::fread(dst_ptr, 1, static_cast<size_t>(length > 0 ? length : 0), f);
                } else {
                    std::vector<u8> buf(length > 0 ? length : 0);
                    read_bytes = std::fread(buf.data(), 1, buf.size(), f);
                    for (size_t i = 0; i < read_bytes; ++i) {
                        mem_write8(cpu, dst_addr + static_cast<u32>(i), buf[i]);
                    }
                }
                mem_write32(cpu, finfo + 0x0Cu, 0u); // state = DVD_STATE_END (0)
                mem_write32(cpu, finfo + 0x18u, static_cast<u32>(read_bytes)); // transferredSize
                mem_write32(cpu, finfo + 0x38u, callback);

                bool is_movie = (finfo == 0x7F4A3330u || it->second.find("movie.dat") != std::string::npos);
                bool is_stage = (finfo == 0x7F4A3150u || it->second.find("stage.dat") != std::string::npos);
                bool is_demo  = (finfo == 0x7F4A3470u || it->second.find("demo.dat")  != std::string::npos);
                bool is_codec = (finfo == 0x7F4A31F0u || it->second.find("codec.dat") != std::string::npos);
                bool is_face  = (finfo == 0x7F4A3290u || it->second.find("face.dat")  != std::string::npos);
                bool is_vox   = (finfo == 0x7F4A33D0u || it->second.find("vox.dat")   != std::string::npos);

                if (is_codec) {
                    rctx->codec_active = true;
                    ++rctx->codec_read_count;
                    if (rctx->codec_start_frame == 0) rctx->codec_start_frame = rctx->frame_count;
                    std::printf("\n============================================================\n");
                    std::printf("[CODEC-EVENT] CARGANDO DATOS DE CODEC (codec.dat)! frame=%u off=0x%X len=%d\n",
                                rctx->frame_count, offset, length);
                    std::printf("============================================================\n\n");
                }
                if (is_face) {
                    rctx->codec_active = true;
                    ++rctx->face_read_count;
                    std::printf("\n============================================================\n");
                    std::printf("[CODEC-FACE] CARGANDO RETRATOS FACIALES (face.dat)! frame=%u off=0x%X len=%d\n",
                                rctx->frame_count, offset, length);
                    std::printf("============================================================\n\n");
                }
                if (is_vox) {
                    ++rctx->vox_read_count;
                    if (rctx->verbose_logging || rctx->vox_read_count <= 5) {
                        std::printf("[CODEC-VOX] Audio de voz (vox.dat): frame=%u off=0x%X len=%d\n",
                                    rctx->frame_count, offset, length);
                    }
                }

                if (is_stage) {
                    if (offset == 0x0214A000u) {
                        rctx->area01a_loaded = true;
                        std::printf("\n============================================================\n");
                        std::printf("[STAGE-TRANSITION] INICIANDO CARGA DE 'area01a' (Muelle de Infiltracion / Cargo Dock)!\n");
                        std::printf("============================================================\n\n");
                    } else if (offset == 0x0188A000u) {
                        std::printf("\n[STAGE-TRANSITION] Cargando 'r_brif' (Briefing de Mision Campbell/Snake)...\n\n");
                    }
                }
                if (is_movie || is_stage || is_demo || is_codec || is_face || rctx->verbose_logging) {
                    const char* tag = is_movie ? "-MOVIE" : (is_stage ? "-STAGE" : (is_demo ? "-DEMO" : (is_codec ? "-CODEC" : (is_face ? "-FACE" : ""))));
                    std::printf("[DVD-ASYNC%s] \"%s\" off=0x%X len=%d -> %zu bytes en 0x%08X (cb=0x%08X LR=0x%08X SP=0x%08X)\n",
                                tag, it->second.c_str(), offset, length, read_bytes, dst_addr, callback, cpu->lr, cpu->gpr[1]);
                }

                if (callback != 0) {
                    u32 orig_sp = cpu->gpr[1];
                    u32 orig_lr = cpu->lr;

                    u32 call_sp = orig_sp - 32u;
                    mem_write32(cpu, call_sp, orig_sp);
                    cpu->gpr[1] = call_sp;
                    cpu->gpr[3] = static_cast<u32>(read_bytes);
                    cpu->gpr[4] = finfo;
                    cpu->lr = 0xFFFFFFF0u;
                    cpu->pc = callback;

                    if (rctx->verbose_logging) {
                        std::printf("[DVD-ASYNC] Ejecutando callback sincrono 0x%08X (bytes=%zu finfo=0x%08X)\n",
                                    callback, read_bytes, finfo);
                    }

                    while (cpu->pc != 0xFFFFFFF0u) {
                        if (!rctx->module_call(cpu, cpu->pc)) {
                            if (cpu->lr != 0 && cpu->pc != cpu->lr) {
                                cpu->pc = cpu->lr;
                                continue;
                            }
                            break;
                        }
                    }
                    if (rctx->verbose_logging) {
                        std::printf("[DVD-ASYNC] Callback 0x%08X completado exitosamente!\n", callback);
                    }
                    cpu->gpr[1] = orig_sp;
                    cpu->lr = orig_lr;
                }
                cpu->gpr[3] = 1u; // TRUE
                cpu->pc = cpu->lr;
                return true;
            }
        }
        std::printf("[DVD-ASYNC] Fallo: finfo=0x%08X no encontrado!\n", finfo);
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x800278D8u) {
        // BOOL DVDReadAsync(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6], DVDCallback callback [r7])
        cpu->gpr[8] = 2u;
        return host_call_hook(cpu, 0x8002799Cu);
    } else if (address == 0x80027BA4u) {
        // s32 DVDRead(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6])
        cpu->gpr[7] = 2u;
        return host_call_hook(cpu, 0x80027A8Cu);
    } else if (address == 0x8002A1C0u) {
        // s32 DVDGetCommandBlockStatus(DVDCommandBlock* block [r3])
        u32 block = cpu->gpr[3];
        u32 state = mem_read32(cpu, block + 0x0Cu);
        cpu->gpr[3] = state;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80027754u) {
        // BOOL DVDClose(DVDFileInfo* fileInfo [r3])
        rctx->open_dvd_files.erase(cpu->gpr[3]);
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002A0E8u) {
        // BOOL DVDCancel(DVDCommandBlock* block [r3])
        u32 block = cpu->gpr[3];
        mem_write32(cpu, block + 0x0Cu, 10u); // DVD_STATE_CANCELED = 10
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002FC84u) {
        // AIInit (Dolphin SDK AI): inicializacion de audio interface
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31592u, 1u); // __AI_initialized = 1
        std::printf("[MGS-INIT] AIInit (0x8002FC84) bypass OK! (__AI_initialized=1)\n");
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002F888u) {
        // AIRegisterDMACallback(AIDCallback callback [r3]) - tracking no intrusivo
        s_ai_dma_cb = cpu->gpr[3];
        std::printf("[MGS-AI] AIRegisterDMACallback(cb=0x%08X)\n", s_ai_dma_cb);
        return false;
    } else if (address == 0x8002F8CCu) {
        // AIInitDMA(void* addr [r3], u32 length [r4]) - tracking no intrusivo
        s_ai_dma_addr = cpu->gpr[3];
        s_ai_dma_len = cpu->gpr[4];
        if (rctx->verbose_logging) {
            std::printf("[MGS-AI] AIInitDMA(addr=0x%08X, len=%u)\n", s_ai_dma_addr, s_ai_dma_len);
        }
        return false;
    } else if (address == 0x8002F954u) {
        // AIStartDMA(void) - inicia cuenta regresiva DMA de Audio Interface
        s_ai_dma_bytes_left = s_ai_dma_len;
        if (rctx->verbose_logging) {
            std::printf("[MGS-AI] AIStartDMA(addr=0x%08X, len=%u)\n", s_ai_dma_addr, s_ai_dma_len);
        }
        return false;
    } else if (address == 0x8002F96Cu) {
        // AISetStreamPlayState / Stream state tracking (ejecutar nativo)
        s_ai_stream_playing = (cpu->gpr[3] == 1u);
        return false;
    } else if (address == 0x8002FF70u) {
        // __AISync (Dolphin SDK AI): sincronizacion/calibracion hardware de audio interface / DAC
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x800380C4u) {
        // DSPInit (Dolphin SDK DSP): inicializacion de procesador DSP
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31240u, 1u); // __DSP_init_flag = 1
        std::printf("[MGS-INIT] DSPInit (0x800380C4) bypass OK! (__DSP_init_flag=1)\n");
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80038190u) {
        // DSPAddTask (Dolphin SDK DSP): registrar tarea y marcarla como completada
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31356u, 1u); // flag de sincronizacion DSP listo
        u32 task = cpu->gpr[3];
        if (task) {
            mem_write32(cpu, task + 0u, 3u); // task->state = DSP_TASK_STATE_DONE
        }
        std::printf("[MGS-INIT] DSPAddTask (0x80038190) task=0x%08X bypass OK!\n", task);
        cpu->pc = cpu->lr;
        return true;
    }

    // 3B. Subsistema de Mandos GameCube (fn_80007204 Poller MGS + PADRead + SIGetType)
    if (address == 0x80007204u || address == 0x8002EB2Cu || address == 0x8002E9DCu) {
        // u32 fn_80007204(PADStatus* status [r3]) o PADRead(PADStatus* status [r3])
        ++rctx->pad_read_count;
        update_pad_input(rctx);
        u32 status_ptr = cpu->gpr[3];
        if (status_ptr != 0) {
            write_pad_status_to_guest(cpu, status_ptr, rctx);
        }
        write_pad_status_to_guest(cpu, 0x801E9388u, rctx);

        u32 cur_retrace = mem_read32(cpu, 0x8027E22Cu);
        mem_write32(cpu, 0x801E9388u + 48u, cur_retrace); // last_retrace
        mem_write32(cpu, 0x801E9388u + 52u, 0x80000000u); // controller 0 mask

        cpu->gpr[3] = 0x80000000u; // Mask de mando en puerto 0 conectado
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8001BE84u || address == 0x8001BA38u) {
        // u32 SIGetType(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 0x09000000u : 0u; // SI_TYPE_GC (0x09000000) en puerto 0
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002F80Cu || address == 0x8002EE98u) {
        // __PADDisableRecalibration / PADReset
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002EE2Cu) {
        // PADControlMotor(int chan [r3], u32 command [r4])
        u32 chan = cpu->gpr[3];
        u32 cmd = cpu->gpr[4];
        if (chan == 0) {
            set_controller_rumble(cmd == 1 ? 0.75f : 0.0f);
        }
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return true;
    }

    // 3B2. Subsistema ARAM (AR / ARQ Dolphin SDK HLE)
    else if (address == 0x80030198u) {
        // u32 ARGetDMAStatus(void) -> 0 (idle / completed)
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x800301D4u) {
        // void ARStartDMA(u32 type [r3], u32 mram_addr [r4], u32 aram_addr [r5], u32 length [r6])
        u32 type = cpu->gpr[3];
        u32 mram_addr = cpu->gpr[4];
        u32 aram_addr = cpu->gpr[5] & 0x00FFFFFFu;
        u32 length = cpu->gpr[6];
        if (rctx->verbose_logging &&
            ((mram_addr >= 0x7F498000u && mram_addr < 0x7F500110u) ||
             (mram_addr >= 0x80EE7170u && mram_addr < 0x80F4F280u))) {
            std::printf("[TRAP-AR-DMA] type=%u mram=0x%08X aram=0x%08X len=%u (0x%X) LR=0x%08X\n",
                        type, mram_addr, aram_addr, length, length, cpu->lr);
        }
        if (length > 0) {
            if (type == 0) {
                u8* src = resolve_guest_ptr(cpu, mram_addr, length);
                if (src && (aram_addr + length <= s_aram.size())) {
                    std::memcpy(&s_aram[aram_addr], src, length);
                }
            } else {
                u8* dst = resolve_guest_ptr(cpu, mram_addr, length);
                if (dst && (aram_addr + length <= s_aram.size())) {
                    std::memcpy(dst, &s_aram[aram_addr], length);
                }
            }
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80031ED4u) {
        // void ARQPostRequest(ARQRequest* task [r3], u32 owner [r4], u32 type [r5], u32 priority [r6],
        //                    u32 source [r7], u32 dest [r8], u32 length [r9], ARQCallback callback [r10])
        u32 task = cpu->gpr[3];
        u32 owner = cpu->gpr[4];
        u32 type = cpu->gpr[5];
        u32 priority = cpu->gpr[6];
        u32 source = cpu->gpr[7];
        u32 dest = cpu->gpr[8];
        u32 length = cpu->gpr[9];
        u32 callback = cpu->gpr[10];

        if (rctx->verbose_logging &&
            ((dest >= 0x7F498000u && dest < 0x7F500110u) ||
             (dest >= 0x80EE7170u && dest < 0x80F4F280u) ||
             (source >= 0x7F498000u && source < 0x7F500110u) ||
             (source >= 0x80EE7170u && source < 0x80F4F280u))) {
            std::printf("[TRAP-ARQ] type=%u src=0x%08X dst=0x%08X len=%u (0x%X) LR=0x%08X\n",
                        type, source, dest, length, length, cpu->lr);
        }

        if (length > 0) {
            if (type == 0) {
                u32 aram_dest = dest & 0x00FFFFFFu;
                u8* src = resolve_guest_ptr(cpu, source, length);
                if (src && (aram_dest + length <= s_aram.size())) {
                    std::memcpy(&s_aram[aram_dest], src, length);
                }
            } else {
                u32 aram_src = source & 0x00FFFFFFu;
                u8* dst = resolve_guest_ptr(cpu, dest, length);
                if (dst && (aram_src + length <= s_aram.size())) {
                    std::memcpy(dst, &s_aram[aram_src], length);
                }
            }
        }

        if (task != 0) {
            mem_write32(cpu, task + 0x00u, 0u);
            mem_write32(cpu, task + 0x04u, owner);
            mem_write32(cpu, task + 0x08u, type);
            mem_write32(cpu, task + 0x0Cu, priority);
            mem_write32(cpu, task + 0x10u, source);
            mem_write32(cpu, task + 0x14u, dest);
            mem_write32(cpu, task + 0x18u, length);
            mem_write32(cpu, task + 0x1Cu, callback ? callback : 0x80031D94u);

            // En el sound driver de MGS (fn_8002CEF4 y fn_8002D1A0), la estructura contenedora
            // de la peticion esta en task - 0x3C, y el flag de finalizacion esta en +0x7C (+124 decimal).
            mem_write32(cpu, task - 0x3Cu + 0x7Cu, 1u);
            if (owner >= 0x80000000u && owner <= 0x81800000u) {
                mem_write32(cpu, owner + 0x7Cu, 1u);
            }
        }

        if (callback != 0 && callback != 0x80031D94u) {
            u32 orig_sp = cpu->gpr[1];
            u32 orig_lr = cpu->lr;
            u32 call_sp = orig_sp - 32u;
            mem_write32(cpu, call_sp, orig_sp);
            cpu->gpr[1] = call_sp;
            cpu->gpr[3] = task;
            cpu->gpr[4] = owner;
            cpu->lr = 0xFFFFFFF0u;
            cpu->pc = callback;
            while (cpu->pc != 0xFFFFFFF0u) {
                if (!rctx->module_call(cpu, cpu->pc)) {
                    if (cpu->lr != 0 && cpu->pc != cpu->lr) {
                        cpu->pc = cpu->lr;
                        continue;
                    }
                    break;
                }
            }
            cpu->gpr[1] = orig_sp;
            cpu->lr = orig_lr;
        }

        cpu->pc = cpu->lr;
        return true;
    }

    // 3C. Subsistema de Memory Card (HLE CARD & EXI - Ranura A respaldada en "memcardA.raw")
    if (address == 0x80039A10u) {
        // void CARDInit(void)
        std::printf("[CARD] CARDInit llamado (LR=0x%08X)\n", cpu->lr);
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003CA50u) {
        // s32 CARDProbeEx(s32 chan [r3], s32* memSize [r4], s32* sectorSize [r5])
        u32 chan = cpu->gpr[3];
        u32 memSizePtr = cpu->gpr[4];
        u32 sectorSizePtr = cpu->gpr[5];
        if (chan == 0) {
            if (memSizePtr != 0) mem_write32(cpu, memSizePtr, 16u); // 16 Mbit (Memory Card 251)
            if (sectorSizePtr != 0) mem_write32(cpu, sectorSizePtr, 8192u); // 8 KB por sector
            cpu->gpr[3] = 0u; // CARD_RESULT_READY (0)
            static u32 probe_cnt = 0;
            if (++probe_cnt <= 5 || probe_cnt % 60 == 0) {
                std::printf("[CARD] CARDProbeEx(Ranura A) -> READY (MemSize=16Mb, Sector=8KB, cnt=%u)\n", probe_cnt);
            }
        } else {
            cpu->gpr[3] = static_cast<u32>(-3); // CARD_RESULT_NOCARD (-3)
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003D2B4u || address == 0x8003D2FCu) {
        // s32 CARDMountAsync / CARDMount(s32 chan [r3], void* workArea [r4], CARDCallback detachCb [r5], CARDCallback mountCb [r6])
        u32 chan = cpu->gpr[3];
        u32 workArea = cpu->gpr[4];
        if (chan == 0) {
            if (workArea != 0 && g_memcardA.data.size() >= 0xA000) {
                u8* dst = resolve_guest_ptr(cpu, workArea, 0xA000);
                if (dst) {
                    std::memcpy(dst, g_memcardA.data.data(), 0xA000);
                }
            }
            std::printf("[CARD] CARDMount(Ranura A) exitoso! (Memory Card 251 activa, workArea=0x%08X)\n", workArea);
            cpu->gpr[3] = 0u; // CARD_RESULT_READY
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003C930u) {
        // s32 CARDCheck(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 0u : static_cast<u32>(-3);
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80039D68u) {
        // s32 CARDGetResultCode(s32 chan [r3])
        cpu->gpr[3] = 0u; // CARD_RESULT_READY
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003D398u) {
        // s32 CARDUnmount(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        if (chan == 0) {
            g_memcardA.save_to_disk();
        }
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80039C18u) {
        // s32 CARDGetFreeBlocks(s32 chan [r3], s32* bytesNotUsed [r4], s32* filesNotUsed [r5])
        u32 chan = cpu->gpr[3];
        u32 bytesPtr = cpu->gpr[4];
        u32 filesPtr = cpu->gpr[5];
        if (chan == 0) {
            u32 free_bytes = g_memcardA.get_free_bytes();
            u32 free_files = g_memcardA.get_free_files();
            if (bytesPtr != 0) mem_write32(cpu, bytesPtr, free_bytes);
            if (filesPtr != 0) mem_write32(cpu, filesPtr, free_files);
            std::printf("[CARD] CARDGetFreeBlocks: %u bytes libres (%u bloques), %u archivos libres\n",
                        free_bytes, free_bytes / 8192u, free_files);
            cpu->gpr[3] = 0u;
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003DBE0u || address == 0x8003D588u) {
        // s32 CARDFormat / CARDFormatAsync(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        if (chan == 0) {
            g_memcardA.format();
            std::printf("[CARD] CARDFormat(Ranura A) completado exitosamente!\n");
            cpu->gpr[3] = 0u;
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003F6B0u) {
        // s32 CARDGetSerialNo(s32 chan [r3], u64* serialNo [r4])
        u32 chan = cpu->gpr[3];
        u32 serialPtr = cpu->gpr[4];
        if (chan == 0) {
            if (serialPtr != 0) {
                mem_write32(cpu, serialPtr + 0u, 0x01234567u);
                mem_write32(cpu, serialPtr + 4u, 0x89ABCDEFu);
            }
            cpu->gpr[3] = 0u;
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003F19Cu) {
        // s32 CARDGetFastFile(s32 chan [r3], s32 fileNo [r4], CARDFileInfo* fileInfo [r5])
        u32 chan = cpu->gpr[3];
        s32 fileNo = static_cast<s32>(cpu->gpr[4]);
        u32 finfoPtr = cpu->gpr[5];
        if (chan == 0) {
            s32 res = g_memcardA.get_fast_file(cpu, fileNo, finfoPtr);
            cpu->gpr[3] = static_cast<u32>(res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003EF5Cu) {
        // s32 CARDGetStatus(s32 chan [r3], s32 fileNo [r4], CARDStat* stat [r5])
        u32 chan = cpu->gpr[3];
        s32 fileNo = static_cast<s32>(cpu->gpr[4]);
        u32 statPtr = cpu->gpr[5];
        if (chan == 0) {
            s32 res = g_memcardA.get_status(cpu, fileNo, statPtr);
            cpu->gpr[3] = static_cast<u32>(res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003E9E4u || address == 0x8003E8A0u) {
        // s32 CARDSetStatus / CARDSetStatusAsync(s32 chan [r3], s32 fileNo [r4], CARDStat* stat [r5])
        u32 chan = cpu->gpr[3];
        s32 fileNo = static_cast<s32>(cpu->gpr[4]);
        u32 statPtr = cpu->gpr[5];
        if (chan == 0) {
            s32 res = g_memcardA.set_status(cpu, fileNo, statPtr);
            cpu->gpr[3] = static_cast<u32>(res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003ED60u || address == 0x8003DC9Cu) {
        // s32 CARDCreate / CARDCreateAsync(s32 chan [r3], const char* fileName [r4], u32 size [r5], CARDFileInfo* fileInfo [r6])
        u32 chan = cpu->gpr[3];
        std::string fileName = read_guest_cstring(cpu, cpu->gpr[4]);
        u32 size = cpu->gpr[5];
        u32 finfoPtr = cpu->gpr[6];
        if (chan == 0) {
            s32 res = g_memcardA.create_file(cpu, fileName, size, finfoPtr);
            cpu->gpr[3] = static_cast<u32>(res);
            std::printf("[CARD] CARDCreate(Ranura A, \"%s\", size=%u) -> res=%d\n", fileName.c_str(), size, res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003E1C4u || address == 0x8003E0A8u) {
        // s32 CARDRead / CARDReadAsync(CARDFileInfo* fileInfo [r3], void* buf [r4], s32 len [r5], s32 offset [r6])
        u32 finfoPtr = cpu->gpr[3];
        u32 bufPtr = cpu->gpr[4];
        s32 len = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        s32 res = g_memcardA.read_file(cpu, finfoPtr, bufPtr, len, offset);
        cpu->gpr[3] = static_cast<u32>(res);
        std::printf("[CARD] CARDRead(finfo=0x%08X, len=%d, off=%d) -> res=%d\n", finfoPtr, len, offset, res);
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003F668u || address == 0x8003E220u) {
        // s32 CARDWrite / CARDWriteAsync(CARDFileInfo* fileInfo [r3], const void* buf [r4], s32 len [r5], s32 offset [r6])
        u32 finfoPtr = cpu->gpr[3];
        u32 bufPtr = cpu->gpr[4];
        s32 len = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        s32 res = g_memcardA.write_file(cpu, finfoPtr, bufPtr, len, offset);
        cpu->gpr[3] = static_cast<u32>(res);
        std::printf("[CARD] CARDWrite(finfo=0x%08X, len=%d, off=%d) -> res=%d\n", finfoPtr, len, offset, res);
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8003E570u) {
        // s32 CARDDelete(s32 chan [r3], const char* fileName [r4])
        u32 chan = cpu->gpr[3];
        std::string fileName = read_guest_cstring(cpu, cpu->gpr[4]);
        if (chan == 0) {
            s32 res = g_memcardA.delete_file(fileName);
            cpu->gpr[3] = static_cast<u32>(res);
            std::printf("[CARD] CARDDelete(Ranura A, \"%s\") -> res=%d\n", fileName.c_str(), res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return true;
    }

    // 3D. Subsistema EXI de bajo nivel (Soporte HLE para periféricos Ranura A)
    if (address == 0x80018E84u || address == 0x80019078u) {
        // BOOL __EXIProbe / EXIProbe(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 1u : 0u; // Slot A presente
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80019CC4u) {
        // BOOL EXIGetID(s32 chan [r3], u32 dev [r4], u32* id [r5])
        u32 chan = cpu->gpr[3];
        u32 dev = cpu->gpr[4];
        u32 idPtr = cpu->gpr[5];
        if (chan == 0 && dev == 0) {
            if (idPtr != 0) mem_write32(cpu, idPtr, 0x00000010u); // Memory Card 251 (16 Mbit)
            cpu->gpr[3] = 1u;
        } else {
            cpu->gpr[3] = 0u;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x800192F4u || address == 0x80019420u ||
               address == 0x80019AB4u || address == 0x80019BA8u ||
               address == 0x80018B74u) {
        // EXISelect / EXIDeselect / EXILock / EXIUnlock / EXISync
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8001878Cu || address == 0x800189E8u) {
        // BOOL EXIImm / EXIImmEx(s32 chan [r3], void* buf [r4], s32 len [r5], u32 type [r6])
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80018A88u) {
        // BOOL EXIDma(s32 chan [r3], void* buf [r4], s32 len [r5], u32 type [r6], EXICallback cb [r7])
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return true;
    }

    // 4. Transición main.dol -> shared/mgso.rel (pre-relocalizado en 0x7F008000)
    if (address == 0x800066F8u) {
        std::string name = read_guest_cstring(cpu, cpu->gpr[3]);
        u32 load_addr = cpu->gpr[4];
        if (load_addr == 0x7F008000u) {
            std::printf("[REL] Enlace estatico activo para \"%s\" en 0x%08X (entry=0x7F0080EC)\n",
                        name.c_str(), load_addr);
            // Escribir _prolog (0x7F0080EC) en offset +52 (0x34) y fixSize en +72 (0x48)
            mem_write32(cpu, 0x7F008000u + 0x34u, 0x7F0080ECu);
            mem_write32(cpu, 0x7F008000u + 0x48u, 0x7F45CA40u);
            cpu->gpr[3] = 0x7F008000u;
            cpu->pc = cpu->lr;
            return true;
        }
    } else if (address == 0x7F0080ECu && !rctx->reached_mgso_prolog) {
        rctx->reached_mgso_prolog = true;
        std::printf("[MGSO] Ejecutando mgso.rel::_prolog (0x7F0080EC)!\n");
    } else if ((address == 0x7F008210u || (address == 0x8000DA28u && cpu->lr == 0x7F008258u)) && !rctx->reached_mgso_main) {
        rctx->reached_mgso_main = true;
        std::printf("[MGSO] Constructores C++ estaticos de mgso::main (0x7F008210 -> 0x7F0082D4) completados!\n");
    } else if ((address == 0x7F008174u || (address == 0x7F39A2B8u && cpu->lr == 0x7F008184u)) && !rctx->reached_mgso_thread) {
        rctx->reached_mgso_thread = true;
        std::printf("[MGSO] Hilo principal del motor MGS (0x7F008174) activo! (SP=0x%08X)\n", cpu->gpr[1]);
    } else if (address == 0x7F3C7CC8u && !rctx->reached_mgso_loop) {
        rctx->reached_mgso_loop = true;
        if (!rctx->verbose_logging) {
            cpu->host_call_bloom = kHostHookBloom.data();
        }
        std::printf("[MGSO] Bucle principal de fotogramas GV/DG (0x7F008204 -> 0x7F3C7CC8) ACTIVO!\n");
    } else if (address == 0x7F3C7C48u) {
        std::printf("[ACTOR] Actor_Init_Buckets llamado! (LR=0x%08X SP=0x%08X)\n", cpu->lr, cpu->gpr[1]);
    } else if (address == 0x7F3C7D9Cu) {
        std::printf("[ACTOR] Actor_Add(bucket=%d, actor=0x%08X, name=0x%08X) LR=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->lr);
    } else if (address == 0x7F3CC15Cu) {
        // Inicialización y dimensionamiento seguro de Heap 2 en MEM2/VM (fn_1_3C3F94)
        // El código original calculaba top=0x7F7CA000 y bottom=0x7F4AC800 (3.11 MB).
        // Sin embargo, mgso.rel .bss se extiende hasta 0x7F500110, mientras que Heap 4 crece hacia arriba
        // desde el mismo split (~0x2B2000 bytes). Situamos el split en 0x7FB40000:
        //   - Heap 2 (hacia abajo): 0x7FB40000 -> 0x7F508000 (~6.52 MB libres sobre .bss)
        //   - Heap 4 (hacia arriba): 0x7FB40000 -> 0x7FE00000+ (~4.86 MB antes de 0x80000000 MEM1)
        u32 base = cpu->gpr[3]; // 0x7F000000
        mem_write32(cpu, 0x7F4FAA7Cu, base);              // [0x7F4FAA7C] = 0x7F000000 (MEM2 base)
        mem_write32(cpu, 0x7F4FAA6Cu, base + 0x8000u);     // [0x7F4FAA6C] = 0x7F008000 (mgso.rel base)
        mem_write32(cpu, 0x7F4FAA78u, 0x7F508000u);        // [0x7F4FAA78] = 0x7F508000 (límite inferior seguro sobre .bss)
        mem_write32(cpu, 0x7F4FAA74u, 0x7FB40000u);        // [0x7F4FAA74] = 0x7FB40000 (tope inicial de Heap 2 / base Heap 4)
        mem_write32(cpu, 0x7F4FAA70u, 0x7FB40000u);        // [0x7F4FAA70] = 0x7FB40000 (tope máximo de Heap 2)
        mem_write32(cpu, 0x7F4FEAACu, 0x7FB40000u);        // [0x7F4FEAAC] = 0x7FB40000 (puntero actual de Heap 2)
        mem_write32(cpu, 0x7F4FEAA8u, 0x7FB40000u);        // [0x7F4FEAA8] = 0x7FB40000 (marca de Heap 2)
        std::printf("[HEAP2] Split seguro MEM2: top=0x7FB40000, bottom=0x7F508000 (Heap2=6.5 MB, Heap4=4.8 MB antes de MEM1)\n");

        // Ejecutar epílogo de fn_1_3C3F94 (0x7F3CC080): restaurar r29-r31, lr y pop stack
        u32 sp = cpu->gpr[1];
        cpu->gpr[29] = mem_read32(cpu, sp + 20u);
        cpu->gpr[30] = mem_read32(cpu, sp + 24u);
        cpu->gpr[31] = mem_read32(cpu, sp + 28u);
        cpu->lr = mem_read32(cpu, sp + 36u);
        cpu->gpr[1] = sp + 32u;
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x7F3CC1ECu) {
        u32 cur_top = mem_read32(cpu, 0x7F4FEAACu);
        u32 req_size = cpu->gpr[3];
        if (cur_top < 0x7F508000u + req_size) {
            std::printf("[HEAP2-ALLOC] ADVERTENCIA: colision con .bss! cur_top=0x%08X req=0x%X (LR=0x%08X)\n",
                        cur_top, req_size, cpu->lr);
        } else if (rctx->verbose_logging) {
            std::printf("[HEAP2-ALLOC] req_size=%u (0x%X) cur_top=0x%08X -> nuevo=~0x%08X (LR=0x%08X)\n",
                        req_size, req_size, cur_top, cur_top - req_size, cpu->lr);
        }
        return false; // permitir que la rutina nativa 0x7F3CC1EC asigne normalmente
    }
    if (rctx->verbose_logging &&
        (address == 0x7F00A8E0u || address == 0x7F00A968u || address == 0x7F0FCF70u ||
         address == 0x7F0FD7BCu || address == 0x7F0FE400u || address == 0x7F0FD818u ||
         address == 0x8000D478u)) {
        std::printf("[MGS-STEP] call 0x%08X (LR=0x%08X SP=0x%08X r3=0x%08X)\n", address, cpu->lr, cpu->gpr[1], cpu->gpr[3]);
    }
    // Hook de diagnostico de camara / llamada a GXLoadPosMtxImm
    if (rctx->verbose_logging && address == 0x80046A30u) {
        static int mtx_loads = 0;
        u32 mtx_ptr = cpu->gpr[3];
        u32 mtx_id = cpu->gpr[4];
        if (mtx_id == 0) {
            float m[12];
            for (int k = 0; k < 12; ++k) {
                u32 val = mem_read32(cpu, mtx_ptr + k * 4u);
                std::memcpy(&m[k], &val, sizeof(float));
            }
            if (++mtx_loads <= 10 || mtx_loads % 1000 == 0) {
                std::printf("[LOAD-MTX0] #%d: LR=0x%08X SP=0x%08X ptr=0x%08X\n",
                            mtx_loads, cpu->lr, cpu->gpr[1], mtx_ptr);
                std::printf("  Row0: [%.4f, %.4f, %.4f, %.4f]\n", m[0], m[1], m[2], m[3]);
                std::printf("  Row1: [%.4f, %.4f, %.4f, %.4f]\n", m[4], m[5], m[6], m[7]);
                std::printf("  Row2: [%.4f, %.4f, %.4f, %.4f]\n", m[8], m[9], m[10], m[11]);
                u32 sp = cpu->gpr[1];
                std::printf("  Callstack: LR=0x%08X", cpu->lr);
                for (int d = 0; d < 5; ++d) {
                    if (sp >= 0x80000000u && sp <= 0x817FFFF0u) {
                        u32 parent_lr = mem_read32(cpu, sp + 4u);
                        u32 next_sp = mem_read32(cpu, sp);
                        std::printf(" <- [SP=0x%08X, LR=0x%08X]", sp, parent_lr);
                        sp = next_sp;
                    } else break;
                }
                std::printf("\n");
            }
        }
    }

    if (address == 0x7F281650u) {
        std::printf("[ACTOR-MOVIE-CTOR] fn_1_279564 called: r3=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
    }
    if (address == 0x7F28100Cu) {
        static int act_tick = 0;
        if (++act_tick <= 30 || act_tick % 100 == 0) {
            std::printf("[ACTOR-MOVIE-TICK] fn_1_278F20 #%d: r3=0x%08X LR=0x%08X SP=0x%08X\n",
                        act_tick, cpu->gpr[3], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F1905F8u || address == 0x7F2DEC44u) {
        std::printf("[MOVIE-OPEN-STREAM] addr=0x%08X called: r3=0x%08X r4=0x%08X LR=0x%08X\n",
                    address, cpu->gpr[3], cpu->gpr[4], cpu->lr);
    }
    if (rctx->verbose_logging && address == 0x7F00A430u) {
        std::printf("[STREAM-REQ] fn_1_2344 called: r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X LR=0x%08X SP=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->gpr[6], cpu->lr, cpu->gpr[1]);
    }
    if (rctx->verbose_logging && address == 0x7F00A248u) {
        std::printf("[STREAM-DONE-CB] fn_1_2070 completion bctrl! r31=0x%08X fn_ptr=0x%08X\n",
                    cpu->gpr[31], mem_read32(cpu, cpu->gpr[31] + 0x0Cu));
    }
    if (address == 0x7F29E874u) {
        static int f296788_calls = 0;
        if (++f296788_calls <= 20) {
            std::printf("[MOVIE-INIT] fn_1_296788 #%d called: r3=0x%08X r4=%u LR=0x%08X SP=0x%08X\n",
                        f296788_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    if (rctx->verbose_logging) {
        if (address == 0x7F29F4E0u) {
            static int f2973f4_calls = 0;
            if (++f2973f4_calls <= 30 || f2973f4_calls % 100 == 0) {
                std::printf("[TRACE-7F29F4E0] #%d: this=0x%08X r4=%u LR=0x%08X SP=0x%08X\n",
                            f2973f4_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
            }
        }
        if (address == 0x7F2A0A18u) {
            static int f29892c_calls = 0;
            if (++f29892c_calls <= 30 || f29892c_calls % 100 == 0) {
                std::printf("[MOVIE-PREDEC] fn_1_29892C #%d: r3=0x%08X r4=%u LR=0x%08X SP=0x%08X\n",
                            f29892c_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
            }
        }
        if (address == 0x7F2A1A70u) {
            static int vp31_calls = 0;
            if (++vp31_calls <= 30 || vp31_calls % 100 == 0) {
                std::printf("[VP31] fn_1_299984 call #%d (r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X LR=0x%08X SP=0x%08X)\n",
                            vp31_calls, cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->gpr[6], cpu->lr, cpu->gpr[1]);
            }
        }
        if (address == 0x7F290DCCu) {
            static int sync_calls = 0;
            if (++sync_calls <= 20 || sync_calls % 100 == 0) {
                std::printf("[TRACE-7F290DCC] #%d (r3=0x%08X r4=%u LR=0x%08X)\n",
                            sync_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr);
            }
        }
        if (address == 0x7F2A528Cu) {
            static int f29d1a0_calls = 0;
            if (++f29d1a0_calls <= 30 || f29d1a0_calls % 100 == 0) {
                std::printf("[MOVIE-TRACK] fn_1_29D1A0 #%d (r3=0x%08X LR=0x%08X)\n",
                            f29d1a0_calls, cpu->gpr[3], cpu->lr);
            }
        }
        if (address == 0x7F352010u) {
            static int f349f24_calls = 0;
            if (++f349f24_calls <= 30 || f349f24_calls % 100 == 0) {
                std::printf("[MOVIE-BLIT] fn_1_349F24 #%d (r3=0x%08X r4=0x%08X r7=%u LR=0x%08X)\n",
                            f349f24_calls, cpu->gpr[3], cpu->gpr[4], cpu->gpr[7], cpu->lr);
            }
        }
        if (address == 0x7F2A1FD8u) {
            static int f299eec_calls = 0;
            if (++f299eec_calls <= 30 || f299eec_calls % 100 == 0) {
                std::printf("[MOVIE-DEC-LOOP] fn_1_299EEC #%d (r3=0x%08X r4=0x%08X LR=0x%08X)\n",
                            f299eec_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr);
            }
        }
        if (address == 0x7F292570u || address == 0x7F292C72u) {
            static int mv_ctl_calls = 0;
            if (++mv_ctl_calls <= 20) {
                std::printf("[MOVIE-CTL] call 0x%08X (LR=0x%08X SP=0x%08X r3=0x%08X r4=0x%08X)\n",
                            address, cpu->lr, cpu->gpr[1], cpu->gpr[3], cpu->gpr[4]);
            }
        }
    }
    if (address == 0x7F2DE850u) {
        // fn_1_2D6764: Movie skip check (pad / abort)
        static int f2d6764_calls = 0;
        ++f2d6764_calls;
        if (!rctx->auto_skip) {
            // En modo interactivo: dejar que la rutina nativa compruebe el mando para permitir START o video completo
            return false;
        }

        if (f2d6764_calls <= 10) {
            cpu->gpr[3] = 0u;
            cpu->pc = cpu->lr;
            return true;
        }

        std::printf("[MOVIE-SKIP-HOOK] fn_1_2D6764 #%d: auto_skip activo, transicionando movie -> menu (auto_skip=%d)\n",
                    f2d6764_calls, rctx->auto_skip ? 1 : 0);
        mem_write32(cpu, cpu->gpr[3] + 332u, 1u);
        return false;
    }
    // Inspeccionar la creacion y setup de matrices en fn_1_2D57D8 y fn_1_2D58F8
    if (address == 0x7F2DD7D8u || address == (0x7F008000u + 0x002D57D8u)) {
        static int f2d57d8_calls = 0;
        if (++f2d57d8_calls <= 10 || f2d57d8_calls % 100 == 0) {
            std::printf("[MPEG-DRAW-A] fn_1_2D57D8 #%d: addr=0x%08X this=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        f2d57d8_calls, address, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DD8F8u || address == (0x7F008000u + 0x002D58F8u)) {
        static int f2d58f8_calls = 0;
        if (++f2d58f8_calls <= 10 || f2d58f8_calls % 100 == 0) {
            std::printf("[MPEG-DRAW-B] fn_1_2D58F8 #%d: addr=0x%08X this=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        f2d58f8_calls, address, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    // Hook en el llamador de GXLoadPosMtxImm de la camara
    // Hook en las funciones 0x7F2DD7EC y 0x7F2DD89C
    if (address == 0x7F2DD7ECu) {
        static int f2dd7ec_calls = 0;
        if (++f2dd7ec_calls <= 10 || f2dd7ec_calls % 100 == 0) {
            std::printf("[FUNC-2DD7EC] called #%d: r3=0x%08X r4=0x%08X r5=0x%08X LR=0x%08X SP=0x%08X\n",
                        f2dd7ec_calls, cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DD89Cu) {
        static int f2dd89c_calls = 0;
        if (++f2dd89c_calls <= 10 || f2dd89c_calls % 100 == 0) {
            std::printf("[FUNC-2DD89C] called #%d: r3=0x%08X r4=0x%08X r5=0x%08X LR=0x%08X SP=0x%08X\n",
                        f2dd89c_calls, cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DD844u || address == 0x7F2DD968u) {
        static int f2dd_calls = 0;
        if (++f2dd_calls <= 10 || f2dd_calls % 100 == 0) {
            std::printf("[CAM-LOADER] 0x%08X called #%d: r3=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        address, f2dd_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
            u32 sp = cpu->gpr[1];
            for (int k = 0; k < 6; ++k) {
                u32 parent_lr = mem_read32(cpu, sp + 4u);
                u32 next_sp = mem_read32(cpu, sp);
                std::printf("  Level %d: SP=0x%08X parent_lr=0x%08X (offset_in_rel=0x%08X)\n",
                            k, sp, parent_lr, (parent_lr >= 0x7F008000u ? parent_lr - 0x7F008000u : parent_lr));
                if (next_sp >= 0x80000000u && next_sp <= 0x817FFFF0u && next_sp > sp) {
                    sp = next_sp;
                } else break;
            }
        }
    }
    if (address == 0x7F2DDA74u || address == 0x7F2DDBD4u) {
        static int f2dda_calls = 0;
        if (++f2dda_calls <= 10 || f2dda_calls % 100 == 0) {
            std::printf("[CAM-PARENT] 0x%08X called #%d: r3=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        address, f2dda_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DE618u) {
        static int f2de618_calls = 0;
        if (++f2de618_calls <= 10 || f2de618_calls % 100 == 0) {
            std::printf("[CAM-ROOT] 0x%08X called #%d: r3=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        address, f2de618_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DE4E8u) {
        static int f2de4e8_calls = 0;
        if (++f2de4e8_calls <= 20 || f2de4e8_calls % 100 == 0) {
            std::printf("[ACTOR-MPEG-DRAW] fn_1_2DE4E8 #%d: this=0x%08X r4=0x%08X LR=0x%08X SP=0x%08X\n",
                        f2de4e8_calls, cpu->gpr[3], cpu->gpr[4], cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x7F2DE6E8u) {
        std::printf("[ACTOR-MPEG-CTOR] fn_1_2D65FC called! r3=0x%08X r4=0x%08X LR=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->lr);
    }
    if (address == 0x7F3C8F68u) {
        static uint64_t total_calls = 0;
        static uint64_t same_r4_count = 0;
        static u32 last_r4 = 0;
        ++total_calls;
        if (cpu->gpr[4] == last_r4) {
            ++same_r4_count;
        } else {
            same_r4_count = 1u;
            last_r4 = cpu->gpr[4];
        }
        if (total_calls <= 20 || (total_calls % 100000u) == 0) {
            std::printf("[TASK-QUEUE-LOOP] #%llu (same=%llu): r3=0x%08X r4=0x%08X (r4->next=0x%08X) r0=0x%08X LR=0x%08X\n",
                        static_cast<unsigned long long>(total_calls),
                        static_cast<unsigned long long>(same_r4_count),
                        cpu->gpr[3], cpu->gpr[4],
                        (cpu->gpr[4] ? mem_read32(cpu, cpu->gpr[4] + 8u) : 0u), cpu->gpr[0], cpu->lr);
        }
        if (same_r4_count > 500u) {
            // Lista circular o elemento apuntándose a sí mismo: salir de la búsqueda
            same_r4_count = 0u;
            cpu->gpr[4] = 0u;
            cpu->pc = 0x7F3C8F94u;
            return true;
        }
    }
    if (address == 0x7F0FEAC4u) {
        // Guard non-destructive para el escaneo de ring-buffer (0x7F0FEA64..0x7F0FEB50):
        // solo romper si la cabecera muestra tamaño 0 (!= 255) o si se estanca >64 yields en el mismo frame/LR/pool.
        static u32 s_last_r27 = 0u, s_last_lr = 0u, s_last_frame = 0u, s_yields = 0u;
        if (cpu->gpr[27] == s_last_r27 && cpu->lr == s_last_lr && rctx->frame_count == s_last_frame) {
            ++s_yields;
        } else {
            s_yields = 1u;
            s_last_r27 = cpu->gpr[27];
            s_last_lr = cpu->lr;
            s_last_frame = rctx->frame_count;
        }
        u32 blk_hdr = mem_read32(cpu, cpu->gpr[6]);
        u32 blk_sz = mem_read32(cpu, cpu->gpr[6] + 4u);
        if ((blk_hdr != 255u && blk_sz == 0u) || s_yields > 64u) {
            static int s_rg_logs = 0;
            if (rctx->verbose_logging || ++s_rg_logs <= 10) {
                std::printf("[RING-GUARD] Break 0x7F0FEAC4 blk=0x%08X hdr=0x%X sz=0x%X yields=%u LR=0x%08X\n",
                            cpu->gpr[6], blk_hdr, blk_sz, s_yields, cpu->lr);
            }
            s_yields = 0u;
            cpu->gpr[31] = 0u;
            cpu->pc = 0x7F0FEB54u;
            return true;
        }
        return false;
    }
    if (address == 0x7F2DEA5Cu) {
        static int f2d6970_calls = 0;
        if (rctx->verbose_logging && (++f2d6970_calls <= 10 || f2d6970_calls % 100 == 0)) {
            u32 state = mem_read32(cpu, cpu->gpr[3] + 0x134u);
            std::printf("[MOVIE-STREAM-ACTOR] fn_1_2D6970 #%d: this=0x%08X state=%u LR=0x%08X\n",
                        f2d6970_calls, cpu->gpr[3], state, cpu->lr);
        }
        return false;
    }
    if (address == 0x7F017838u) {
        // Clear audio DMA pre-roll wait flag so stream actor broadcasts PLAY (1) and STOP/SKIP (0) messages natively
        mem_write32(cpu, 0x7F4A4B40u, 0u);
    }
    if (address == 0x7F017934u) {
        // Non-destructive timeout guard only: let AudioChildActor & SubtitleActor finish shutting down natively
        // unless the exact same StreamActor remains stuck in state 2 with child_ptr != 0 for >= 120 frames.
        const u32 stream_actor = cpu->gpr[3];
        const u32 child_ptr = (stream_actor != 0u) ? mem_read32(cpu, stream_actor + 32u) : 0u;
        static u32 s_last_stream_actor = 0u;
        static u32 s_first_wait_frame = 0u;
        if (stream_actor != 0u && child_ptr != 0u) {
            if (stream_actor != s_last_stream_actor) {
                s_last_stream_actor = stream_actor;
                s_first_wait_frame = rctx->frame_count;
            } else if (rctx->frame_count >= s_first_wait_frame + 120u) {
                const u32 child_act = (child_ptr >= 0x80000000u && child_ptr < 0x81800000u)
                                      ? mem_read32(cpu, child_ptr + 4u) : 0u;
                std::printf("[STREAM-CLEANUP-TIMEOUT] StreamActor=0x%08X child=0x%08X child_act=0x%08X stuck >=120f (start=%u cur=%u) -> forcing child_ptr=0\n",
                            stream_actor, child_ptr, child_act, s_first_wait_frame, rctx->frame_count);
                mem_write32(cpu, stream_actor + 32u, 0u);
                s_last_stream_actor = 0u;
                s_first_wait_frame = 0u;
            }
        } else {
            s_last_stream_actor = 0u;
            s_first_wait_frame = 0u;
        }
    }
    if (address == 0x7F0185C0u) {
        // AudioChild_StoppingAct: retire any matching HLE voice slot immediately and complete stop-ack (+180=1)
        // so native GV_DestroyActor (0x7F3C8210) frees the Heap 2 buffer (+200) and decrements StreamActor+32.
        const u32 actor = cpu->gpr[3];
        if (actor != 0u && mem_read32(cpu, actor + 180u) == 0u) {
            const u32 vid = mem_read32(cpu, actor + 68u);
            if (vid != 0u) {
                for (u32 i = 0; i < 64u; ++i) {
                    const u32 slot = 0x8020E5C0u + i * 212u;
                    if (mem_read8(cpu, slot + 208u) == 1u && mem_read32(cpu, slot) == vid) {
                        const u32 flags = mem_read32(cpu, slot + 176u);
                        mem_write8(cpu, slot + 208u, 0u);
                        mem_write32(cpu, slot + 176u, flags & ~0x82u);
                        rctx->voice_start_frame[i] = 0u;
                        rctx->voice_last_id[i] = 0u;
                        rctx->voice_stop_req_frame[i] = 0u;
                    }
                }
                mem_write32(cpu, actor + 68u, 0u);
                if (mem_read32(cpu, 0x7F4A4590u) == vid) {
                    mem_write32(cpu, 0x7F4A4590u, 0u);
                }
            }
            mem_write32(cpu, actor + 176u, 1u);
            mem_write32(cpu, actor + 180u, 1u);
        }
        return false;
    }
    if (address == 0x7F01893Cu || address == 0x7F0186ECu) {
        // DSPAddTask (0x80038190) es HLE sin consumo real de paquetes ADPCM; drenar offset 188 (consumer queue)
        // para que el ringbuffer de 192KB no bloquee la lectura continua de demo.dat/movie.dat/vox.dat.
        mem_write32(cpu, cpu->gpr[3] + 188u, 0u);
    }
    if (address == 0x7F18EE3Cu) {
        const u32 actor = cpu->gpr[3];
        const u32 sub_state = 0x100u + mem_read32(cpu, actor + 120u);
        rctx->codec_active = true;
        rctx->codec_actor_ptr = actor;
        if (rctx->codec_start_frame == 0u) {
            rctx->codec_start_frame = rctx->frame_count;
        }
        if (sub_state != rctx->codec_last_state) {
            if (rctx->test_codec || rctx->verbose_logging) {
                std::printf("[CODEC-STATE] active actor=0x%08X sub=%u->%u f=%u\n",
                            actor, rctx->codec_last_state, sub_state, rctx->frame_count);
            }
            rctx->codec_last_state = sub_state;
            rctx->codec_state_stuck_frames = 0u;
        }
        rctx->codec_last_tick_frame = rctx->frame_count;
        return false;
    }
    if (address == 0x7F19065Cu) {
        const u32 actor = cpu->gpr[3];
        const u32 state = mem_read32(cpu, actor + 120u);
        rctx->codec_active = true;
        rctx->codec_actor_ptr = actor;
        if (rctx->codec_start_frame == 0u) {
            rctx->codec_start_frame = rctx->frame_count;
        }
        if (state != rctx->codec_last_state) {
            if (rctx->test_codec || rctx->verbose_logging) {
                std::printf("[CODEC-STATE] actor=0x%08X state=%u->%u f=%u\n",
                            actor, rctx->codec_last_state, state, rctx->frame_count);
            }
            rctx->codec_last_state = state;
            rctx->codec_state_stuck_frames = 0u;
        } else if (rctx->frame_count != rctx->codec_last_tick_frame) {
            ++rctx->codec_state_stuck_frames;
            if (rctx->codec_state_stuck_frames >= 600u && (rctx->codec_state_stuck_frames % 600u) == 0u) {
                const u32 arch = mem_read32(cpu, 0x7F4A3040u);
                const u32 v69e4 = mem_read32(cpu, 0x8027DD98u);
                std::printf("[CODEC-STALL] actor=0x%08X state=%u stuck=%u f=%u v69e4=0x%08X arch=0x%08X LR=0x%08X\n",
                            actor, state, rctx->codec_state_stuck_frames, rctx->frame_count, v69e4, arch, cpu->lr);
                std::fflush(stdout);
            }
        }
        rctx->codec_last_tick_frame = rctx->frame_count;
        return false;
    }
    if (address == 0x7F2DDE00u) {
        mem_write32(cpu, 0x7F4A4B40u, 0u);
        u32 state = mem_read32(cpu, cpu->gpr[3] + 0x44u);
        static int f2d5d14_calls = 0;
        if (++f2d5d14_calls <= 10 || f2d5d14_calls % 100 == 0) {
            std::printf("[MOVIE-DECODE-ACTOR] fn_1_2D5D14 #%d: this=0x%08X state=%u LR=0x%08X\n",
                        f2d5d14_calls, cpu->gpr[3], state, cpu->lr);
        }
        return false;
    }
    auto sync_hle_voices = [&]() {
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            if (mem_read8(cpu, slot + 208u) == 1u) {
                const u32 vid = mem_read32(cpu, slot);
                if (rctx->voice_last_id[i] != vid || rctx->voice_start_frame[i] == 0u) {
                    rctx->voice_last_id[i] = vid;
                    rctx->voice_start_frame[i] = (rctx->frame_count > 0u) ? rctx->frame_count : 1u;
                    rctx->voice_stop_req_frame[i] = 0u;
                }
            } else {
                rctx->voice_start_frame[i] = 0u;
                rctx->voice_last_id[i] = 0u;
                rctx->voice_stop_req_frame[i] = 0u;
            }
        }
    };
    auto retire_stale_stream_voices = [&]() -> u32 {
        u32 retired = 0u;
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            const u8 active = mem_read8(cpu, slot + 208u);
            const u32 flags = mem_read32(cpu, slot + 176u);
            if (active == 1u && (flags & 0x82u) == 0x82u) {
                mem_write8(cpu, slot + 208u, 0u);
                mem_write32(cpu, slot + 176u, flags & ~0x82u);
                rctx->voice_start_frame[i] = 0u;
                rctx->voice_last_id[i] = 0u;
                rctx->voice_stop_req_frame[i] = 0u;
                ++retired;
            }
        }
        return retired;
    };
    if (address == 0x7F017DC4u) {
        rctx->codec_active = true;
        if (rctx->codec_start_frame == 0u) {
            rctx->codec_start_frame = rctx->frame_count;
        }
        rctx->codec_last_tick_frame = rctx->frame_count;
        rctx->audio_stream_active = true;
        rctx->audio_stream_start_frame = rctx->frame_count;
        QueryPerformanceCounter(&rctx->audio_stream_last_qpc);
        rctx->audio_stream_accum_ms = 0.0;
        rctx->audio_stream_last_ms = 0u;
        rctx->audio_stream_last_id = 0u;
        rctx->audio_stream_wait_polls = 0u;
        rctx->voice_idle_polls = 0u;
        if (rctx->test_codec || rctx->verbose_logging) {
            std::printf("[CODEC-OPEN-VOX] 0x7F017DC4 f=%u r3=0x%08X r4=0x%08X LR=0x%08X\n",
                        rctx->frame_count, cpu->gpr[3], cpu->gpr[4], cpu->lr);
        }
        return false;
    }
    if (address == 0x7F017E90u) {
        if (mem_read32(cpu, 0x8027DD98u) == 0u) {
            rctx->audio_stream_active = false;
            rctx->audio_stream_wait_polls = 0u;
            rctx->audio_stream_last_id = 0u;
            rctx->audio_stream_accum_ms = 0.0;
            rctx->audio_stream_last_ms = 0u;
            retire_stale_stream_voices();
        }
        if (rctx->test_codec || rctx->verbose_logging) {
            std::printf("[CODEC-CLOSE-VOX] 0x7F017E90 f=%u r3=0x%08X v69e4=0x%08X LR=0x%08X\n",
                        rctx->frame_count, cpu->gpr[3], mem_read32(cpu, 0x8027DD98u), cpu->lr);
        }
        return false;
    }
    if (address == 0x800569F4u) {
        rctx->audio_stream_active = true;
        rctx->audio_stream_start_frame = rctx->frame_count;
        QueryPerformanceCounter(&rctx->audio_stream_last_qpc);
        rctx->audio_stream_accum_ms = 0.0;
        rctx->audio_stream_last_ms = 0u;
        rctx->audio_stream_last_id = 0u;
        rctx->audio_stream_wait_polls = 0u;
        rctx->voice_idle_polls = 0u;
        if (rctx->test_codec || rctx->verbose_logging) {
            std::printf("[AUDIO-HLE] 0x800569F4 START f=%u r3=0x%08X LR=0x%08X\n",
                        rctx->frame_count, cpu->gpr[3], cpu->lr);
        }
        return false;
    }
    if (address == 0x800569D8u || address == 0x80056BDCu) {
        rctx->audio_stream_wait_polls = 0u;
        if (address == 0x80056BDCu || cpu->gpr[3] == 0u) {
            rctx->audio_stream_active = false;
            rctx->audio_stream_last_id = 0u;
            rctx->audio_stream_accum_ms = 0.0;
            rctx->audio_stream_last_ms = 0u;
            retire_stale_stream_voices();
        }
        return false;
    }
    if (address == 0x80054EC8u) {
        if (cpu->lr == 0x7F198028u && cpu->gpr[31] >= 10u) {
            static u32 s_last_unblock_frame = 0u;
            retire_stale_stream_voices();
            if (rctx->frame_count != s_last_unblock_frame) {
                s_last_unblock_frame = rctx->frame_count;
                std::printf("[AUDIO-HLE] Unblocking 0x80054EC8 at stage-transition barrier LR=0x7F198028 r31=%u f=%u\n",
                            cpu->gpr[31], rctx->frame_count);
            }
            cpu->gpr[3] = 0u;
            cpu->pc = cpu->lr;
            return true;
        }
        return false;
    }
    if (address == 0x800569E4u) {
        if (mem_read32(cpu, 0x8027DD98u) != 0u) {
            // Wait-for-stream-idle barriers (0x7F18F124 stream opener / 0x7F198034 stage transition)
            // must not deadlock forever when DSP ADPCM consumption is HLE-bypassed.
            if (cpu->lr == 0x7F18F124u || cpu->lr == 0x7F198034u) {
                if (++rctx->audio_stream_wait_polls >= 4u) {
                    mem_write32(cpu, 0x8027DD98u, 0u);
                    rctx->audio_stream_active = false;
                    rctx->audio_stream_last_id = 0u;
                    rctx->audio_stream_accum_ms = 0.0;
                    rctx->audio_stream_last_ms = 0u;
                    rctx->audio_stream_wait_polls = 0u;
                    retire_stale_stream_voices();
                    if (rctx->test_codec || rctx->verbose_logging) {
                        std::printf("[AUDIO-HLE] Cleared 0x8027DD98 at wait barrier LR=0x%08X f=%u\n",
                                    cpu->lr, rctx->frame_count);
                    }
                }
            }
        }
        return false;
    }
    if (address == 0x800501FCu || (address == 0x80050B54u && cpu->gpr[4] == 0u) || address == 0x80051688u) {
        sync_hle_voices();
        const u32 arg = cpu->gpr[3];
        const u32 req_f = (rctx->frame_count > 0u) ? rctx->frame_count : 1u;
        if (arg >= 0x8020E5C0u && arg < 0x8020E5C0u + 64u * 212u && ((arg - 0x8020E5C0u) % 212u) == 0u) {
            rctx->voice_stop_req_frame[(arg - 0x8020E5C0u) / 212u] = req_f;
        } else {
            for (u32 i = 0; i < 64u; ++i) {
                const u32 slot = 0x8020E5C0u + i * 212u;
                if (mem_read8(cpu, slot + 208u) == 1u && mem_read32(cpu, slot) == arg) {
                    rctx->voice_stop_req_frame[i] = req_f;
                }
            }
        }
        return false;
    }
    if (address == 0x80051D14u) {
        sync_hle_voices();
        bool any_stream_busy = false;
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            if (mem_read8(cpu, slot + 208u) == 1u && (mem_read32(cpu, slot + 176u) & 0x82u) == 0x82u) {
                any_stream_busy = true;
                break;
            }
        }
        if (any_stream_busy) {
            if (!rctx->audio_stream_active || mem_read32(cpu, 0x8027DD98u) == 0u || ++rctx->voice_idle_polls >= 4u) {
                const u32 retired = retire_stale_stream_voices();
                rctx->voice_idle_polls = 0u;
                if (rctx->test_codec || rctx->verbose_logging) {
                    std::printf("[AUDIO-HLE] 0x80051D14 retired %u stream voices f=%u LR=0x%08X\n",
                                retired, rctx->frame_count, cpu->lr);
                }
                cpu->gpr[3] = 1u;
                cpu->pc = cpu->lr;
                return true;
            }
        } else {
            rctx->voice_idle_polls = 0u;
        }
        return false;
    }
    if (address == 0x80051BB0u) {
        sync_hle_voices();
        const u32 vid = cpu->gpr[3];
        if (vid != rctx->voice_poll_last_id) {
            rctx->voice_poll_last_id = vid;
            rctx->voice_poll_same_count = 1u;
        } else {
            ++rctx->voice_poll_same_count;
        }
        bool retired = false;
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            if (mem_read8(cpu, slot + 208u) == 1u && mem_read32(cpu, slot) == vid) {
                const u32 flags = mem_read32(cpu, slot + 176u);
                const bool stop_expired = (rctx->voice_stop_req_frame[i] > 0u &&
                                           rctx->frame_count >= rctx->voice_stop_req_frame[i] + 4u);
                const bool sfx_expired = ((flags & 0x80u) == 0u &&
                                          rctx->voice_start_frame[i] > 0u &&
                                          rctx->frame_count >= rctx->voice_start_frame[i] + 20u);
                if (stop_expired || sfx_expired || rctx->voice_poll_same_count >= 16u) {
                    mem_write8(cpu, slot + 208u, 0u);
                    mem_write32(cpu, slot + 176u, flags & ~0x02u);
                    rctx->voice_start_frame[i] = 0u;
                    rctx->voice_last_id[i] = 0u;
                    rctx->voice_stop_req_frame[i] = 0u;
                    rctx->voice_poll_same_count = 0u;
                    retired = true;
                }
                break;
            }
        }
        if (retired) {
            if (rctx->test_codec || rctx->verbose_logging) {
                std::printf("[AUDIO-HLE] 0x80051BB0 retired voice=0x%08X f=%u LR=0x%08X\n",
                            vid, rctx->frame_count, cpu->lr);
            }
            cpu->gpr[3] = 0u;
            cpu->pc = cpu->lr;
            return true;
        }
        return false;
    }
    if (address == 0x80051AF0u) {
        // Keep VP31 movie audio poll native so VP31 uses its exact frame-paced fallback (addi +10).
        if (cpu->lr == 0x7F2DE140u || cpu->lr == 0x7F2DE1D0u) {
            return false;
        }
        if (cpu->gpr[4] == 0u && mem_read32(cpu, 0x8027DD98u) != 0u) {
            const u32 stream = cpu->gpr[3];
            if (stream != rctx->audio_stream_last_id) {
                rctx->audio_stream_last_id = stream;
                rctx->audio_stream_start_frame = rctx->frame_count;
                QueryPerformanceCounter(&rctx->audio_stream_last_qpc);
                rctx->audio_stream_accum_ms = 0.0;
                rctx->audio_stream_last_ms = 0u;
                rctx->audio_stream_wait_polls = 0u;
            }
            u32 elapsed_ms = 0u;
            if (rctx->fps_limiter_enabled && rctx->qpc_freq.QuadPart > 0) {
                LARGE_INTEGER now_qpc = {};
                QueryPerformanceCounter(&now_qpc);
                if (rctx->audio_stream_last_qpc.QuadPart == 0) {
                    rctx->audio_stream_last_qpc = now_qpc;
                }
                double dt_ms = static_cast<double>(now_qpc.QuadPart - rctx->audio_stream_last_qpc.QuadPart) * 1000.0 /
                               static_cast<double>(rctx->qpc_freq.QuadPart);
                if (dt_ms < 0.0) dt_ms = 0.0;
                if (dt_ms > 60.0) dt_ms = 60.0;
                rctx->audio_stream_accum_ms += dt_ms;
                rctx->audio_stream_last_qpc = now_qpc;
                elapsed_ms = static_cast<u32>(rctx->audio_stream_accum_ms);
            } else {
                const u64 elapsed_frames = (rctx->frame_count >= rctx->audio_stream_start_frame)
                    ? (rctx->frame_count - rctx->audio_stream_start_frame)
                    : 0ULL;
                elapsed_ms = static_cast<u32>((elapsed_frames * 1001ULL) / 60ULL);
            }
            if (elapsed_ms < rctx->audio_stream_last_ms) {
                elapsed_ms = rctx->audio_stream_last_ms;
            }
            rctx->audio_stream_last_ms = elapsed_ms;
            if (rctx->test_codec) {
                static int s_hle_51af0 = 0;
                if (++s_hle_51af0 <= 15 || s_hle_51af0 % 250 == 0) {
                    std::printf("[AUDIO-HLE] 0x80051AF0 #%d f=%u stream=0x%X -> %u ms (LR=0x%08X)\n",
                                s_hle_51af0, rctx->frame_count, stream, elapsed_ms, cpu->lr);
                }
            }
            cpu->gpr[3] = elapsed_ms;
            cpu->pc = cpu->lr;
            return true;
        }
        return false;
    }
    if (address == 0x7F41BF28u) {
        std::printf("[VP31-INIT] fn_1_413E3C called: ctx=0x%08X codec_info=0x%08X LR=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->lr);
        u32 dec_state_ptr = mem_read32(cpu, 0x7F4CED24u);
        if (dec_state_ptr) {
            for (u32 off : {344u, 348u}) {
                u32 buf = mem_read32(cpu, dec_state_ptr + off);
                if (buf) {
                    for (u32 i = 0; i < 163840u; i += 4u) mem_write32(cpu, buf + i, 0x00000000u);
                    for (u32 i = 163840u; i < 245760u; i += 4u) mem_write32(cpu, buf + i, 0x80808080u);
                }
            }
        }
    }
    if (address == 0x7F41BFC4u) {
        static int f413ed8_calls = 0;
        ++f413ed8_calls;
        if (f413ed8_calls <= 5 || f413ed8_calls % 100 == 0) {
            u32 ctx = cpu->gpr[3];
            u32 yuv_dst = cpu->gpr[4];
            u32 pkt_src = cpu->gpr[6];
            u32 pkt_len = cpu->gpr[7];
            std::printf("[VP31-DECODE-FRAME] #%d ctx=0x%08X yuv_dst=0x%08X pkt=0x%08X len=%u LR=0x%08X\n",
                        f413ed8_calls, ctx, yuv_dst, pkt_src, pkt_len, cpu->lr);
        }
    }
    if (address == 0x7F2DD09Cu && cpu->lr == 0x7F2DE2C4u) {
        // fn_1_2D4FB0 called immediately after fn_1_413ED8 has decoded a frame!
        static int decoded_frames = 0;
        ++decoded_frames;
        if (decoded_frames <= 5 || decoded_frames % 100 == 0) {
            u32 yuv_addr = cpu->gpr[25];
            s32 ret_code = static_cast<s32>(cpu->gpr[28]);
            std::printf("[VP31-FRAME-RESULT] #%d decoded: yuv_addr=0x%08X ret=%d\n",
                        decoded_frames, yuv_addr, ret_code);
        }
        return false;
    }
    static bool trace_after_d478 = false;
    static int trace_d478_count = 0;
    if (address == 0x8000D478u) {
        trace_after_d478 = true;
    }
    if (trace_after_d478 && trace_d478_count < 80) {
        ++trace_d478_count;
        std::printf("[TRACE-D478 %02d] 0x%08X (LR=0x%08X SP=0x%08X r3=0x%08X r4=0x%08X cur=0x%08X)\n",
                    trace_d478_count, address, cpu->lr, cpu->gpr[1], cpu->gpr[3], cpu->gpr[4],
                    mem_read32(cpu, 0x800000E4u));
    }

    if (rctx->reached_mgso_thread) {
        static int mgso_trace_count = 0;
        if (address >= 0x7F000000u && address < 0x7F460000u && mgso_trace_count < 40) {
            ++mgso_trace_count;
            std::printf("[MGSO-TRACE %d] call 0x%08X (LR=0x%08X SP=0x%08X)\n",
                        mgso_trace_count, address, cpu->lr, cpu->gpr[1]);
        }
    }
    if (address == 0x80023F34u) {
        // OSYieldThread()
        static int yield_count = 0;
        if (++yield_count <= 5) {
            u32 cur_thread = mem_read32(cpu, 0x800000E4u);
            u32 run_bits = mem_read32(cpu, 0x8027E0C0u);

            u32 m_state = mem_read16(cpu, 0x801EC3B8u + 712u);
            u32 m_susp = mem_read32(cpu, 0x801EC3B8u + 716u);
            u32 m_queue = mem_read32(cpu, 0x801EC3B8u + 732u);
            u32 m_pc = mem_read32(cpu, 0x801EC3B8u + 404u); // srr0
            u32 m_lr = mem_read32(cpu, 0x801EC3B8u + 132u); // lr
            u32 m_sp = mem_read32(cpu, 0x801EC3B8u + 4u);   // gpr[1]

            u32 a_state = mem_read16(cpu, 0x7F4A3A90u + 712u);
            u32 a_susp = mem_read32(cpu, 0x7F4A3A90u + 716u);
            u32 a_queue = mem_read32(cpu, 0x7F4A3A90u + 732u);
            u32 a_pc = mem_read32(cpu, 0x7F4A3A90u + 404u); // srr0
            u32 a_lr = mem_read32(cpu, 0x7F4A3A90u + 132u); // lr
            u32 a_sp = mem_read32(cpu, 0x7F4A3A90u + 4u);   // gpr[1]

            std::printf("[THREAD-DUMP %d] cur=0x%08X runBits=0x%08X\n"
                        "  MainThread   (0x801EC3B8): state=%u susp=%d queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n"
                        "  ArchiveThread(0x7F4A3A90): state=%u susp=%d queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n",
                        yield_count, cur_thread, run_bits,
                        m_state, (s32)m_susp, m_queue, m_pc, m_lr, m_sp,
                        a_state, (s32)a_susp, a_queue, a_pc, a_lr, a_sp);

            auto print_stack = [&](const char* name, u32 sp) {
                std::printf("  Callstack for %s (SP=0x%08X):\n", name, sp);
                u32 s = sp;
                for (int d = 0; d < 8 && s >= 0x7F000000u && s < 0x81800000u; ++d) {
                    u32 next_s = mem_read32(cpu, s);
                    u32 lr = mem_read32(cpu, s + 4);
                    std::printf("    [%d] SP=0x%08X LR=0x%08X\n", d, s, lr);
                    if (next_s <= s || next_s > s + 0x10000) break;
                    s = next_s;
                }
            };
            print_stack("MainThread", m_sp);
            print_stack("ArchiveThread", a_sp);
        }
    }

    // Cache control range functions (DCFlushRange, DCStoreRange, DCInvalidateRange, ICInvalidateRange)
    // No-op inmediato en arquitectura x86_64 coherente para evitar millones de iteraciones de dcbf/icbi
    if (address == 0x8001DA20u && (cpu->lr == 0x8004C928u || cpu->lr == 0x8004C9B4u)) {
        const u32 dst_tex = (cpu->lr == 0x8004C928u) ? cpu->gpr[30] : cpu->gpr[28];
        const u32 rmode_ptr = mem_read32(cpu, cpu->gpr[31] + 8u);
        const u32 w = (rmode_ptr != 0u) ? mem_read16(cpu, rmode_ptr + 4u) : 512u;
        const u32 h = (rmode_ptr != 0u) ? mem_read16(cpu, rmode_ptr + 6u) : 448u;
        if (rctx->render_device) {
            rctx->render_device->CaptureDisplayToEfbTexture(dst_tex, w, h);
        }
        cpu->pc = (cpu->lr == 0x8004C928u) ? 0x8004C948u : 0x8004CA00u;
        return true;
    }
    if (address == 0x8001DA20u ||  // DCInvalidateRange
        address == 0x8001DA4Cu ||  // DCFlushRange
        address == 0x8001DA7Cu ||  // DCStoreRange
        address == 0x8001DAACu ||  // DCFlushRangeNoSync
        address == 0x8001DAD8u ||  // DCStoreRangeNoSync
        address == 0x8001DB04u) {  // ICInvalidateRange
        cpu->pc = cpu->lr;
        return true;
    }

    // 5. Sincronización de Video Interface (VI) y GX
    if (address == 0x8002C800u) {
        // VISetNextFrameBuffer(void* fb [r3])
        rctx->vi_xfb_address = cpu->gpr[3];
    } else if (address == 0x8002B64Cu || address == 0x8002C8F0u) {
        // VIWaitForRetrace()
        u32 retrace_addr = cpu->gpr[13] - 31764u;
        u32 count = mem_read32(cpu, retrace_addr) + 1u;
        mem_write32(cpu, retrace_addr, count);
        if (cpu->lr == 0x7F198050u) {
            static int s_loop_count = 0;
            s_loop_count++;
            if (cpu->gpr[31] >= 10u) {
                // Desbloquea la espera del thread asíncrono de audio/streaming (0x8027DD98)
                // y limpia slots de solicitud de audio pendientes de cierre para completar la transición a in-game.
                mem_write32(cpu, 0x8027DD98u, 0u);
                for (u32 i = 0; i < 8u; ++i) {
                    const u32 slot_ea = 0x8021A4B0u + i * 268u;
                    const u32 st = mem_read32(cpu, slot_ea + 220u);
                    const u32 fl = mem_read32(cpu, slot_ea + 224u);
                    if (st != 0u && (fl & 0x10u) != 0u) {
                        mem_write32(cpu, slot_ea + 220u, 0u);
                        mem_write32(cpu, slot_ea + 224u, fl & ~0x10u);
                    }
                }
            }
            if (rctx->auto_skip && rctx->area01a_loaded && !rctx->codec_active) {
                std::printf("[AUTO-SKIP] Transicion a in-game en 'area01a' alcanzada (LR=0x7F198050).\n");
            }
            if (s_loop_count <= 25 || s_loop_count % 50 == 0) {
                u32 cnt_4ec8 = 0;
                u32 ea = 0x8021A4B0u;
                for (int i = 0; i < 8; ++i) {
                    u32 st = mem_read32(cpu, ea + 220u);
                    if (st != 0) cnt_4ec8++;
                    ea += 268u;
                }
                u32 val_69e4 = mem_read32(cpu, 0x8027DD98u);
                std::printf("[STAGE-TRANSITION] wait_frame=%d r31=%u cnt_4ec8=%u val_69e4=%u LR=0x%08X\n",
                            s_loop_count, cpu->gpr[31], cnt_4ec8, val_69e4, cpu->lr);
            }
        }
#if defined(_WIN32)
        present_frame(cpu, rctx);
#endif
        if (mem_read16(cpu, 0x801EC6F0u + 712u) == 1u ||
            (rctx->reached_mgso_loop && mem_read16(cpu, 0x7F4A3A90u + 712u) == 1u)) {
            cpu->pc = 0x80023F34u; // OSYieldThread() si MovieThread o ArchiveThread está READY
            return true;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80042974u || address == 0x800429C0u) {
        // GXWaitDrawDone (0x80042974) / GXDrawDone (0x800429C0)
        if (rctx->gx_cp) {
            for (int i = 0; i < 8; ++i) {
                rctx->gx_cp->Write(0, 4);
            }
        }
        mem_write8(cpu, cpu->gpr[13] - 31120u, 1u);
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x80046538u) {
        // GXBeginDisplayList(void* list [r3], u32 size [r4])
        u32 list_addr = cpu->gpr[3];
        u32 list_size = cpu->gpr[4];
        u32 orig_lr = cpu->lr;
        u32 orig_sp = cpu->gpr[1];
        u32 gx_data = mem_read32(cpu, cpu->gpr[2] - 31328u);
        if (gx_data != 0u) {
            if (mem_read32(cpu, gx_data + 1452u) != 0u && rctx->module_call) {
                cpu->lr = 0xFFFFFFF0u;
                cpu->pc = 0x80042D8Cu;
                while (cpu->pc != 0xFFFFFFF0u) {
                    if (!rctx->module_call(cpu, cpu->pc)) break;
                }
                cpu->gpr[1] = orig_sp;
                cpu->lr = orig_lr;
            }
            if (mem_read8(cpu, gx_data + 1449u) != 0u) {
                u8* src = resolve_guest_ptr(cpu, gx_data, 1456u);
                u8* dst = resolve_guest_ptr(cpu, 0x8020B594u, 1456u);
                if (src && dst) std::memcpy(dst, src, 1456u);
            }
            mem_write8(cpu, gx_data + 1448u, 1u);
        }
        rctx->dl_active = true;
        rctx->dl_base_addr = list_addr;
        rctx->dl_write_addr = list_addr;
        rctx->dl_max_size = list_size;
        cpu->pc = orig_lr;
        return true;
    } else if (address == 0x80046600u) {
        // GXEndDisplayList() -> u32 bytes_written [r3]
        u32 orig_lr = cpu->lr;
        u32 orig_sp = cpu->gpr[1];
        u32 gx_data = mem_read32(cpu, cpu->gpr[2] - 31328u);
        if (gx_data != 0u && mem_read32(cpu, gx_data + 1452u) != 0u && rctx->module_call) {
            cpu->lr = 0xFFFFFFF0u;
            cpu->pc = 0x80042D8Cu;
            while (cpu->pc != 0xFFFFFFF0u) {
                if (!rctx->module_call(cpu, cpu->pc)) break;
            }
            cpu->gpr[1] = orig_sp;
            cpu->lr = orig_lr;
        }
        u32 raw_count = (rctx->dl_active && rctx->dl_write_addr >= rctx->dl_base_addr)
                            ? (rctx->dl_write_addr - rctx->dl_base_addr)
                            : 0u;
        u32 aligned_count = (raw_count + 31u) & ~31u;
        while (rctx->dl_active && (rctx->dl_write_addr - rctx->dl_base_addr) < aligned_count) {
            mem_write8(cpu, rctx->dl_write_addr++, 0u);
        }
        rctx->dl_active = false;
        if (gx_data != 0u) {
            if (mem_read8(cpu, gx_data + 1449u) != 0u) {
                u32 saved_bp_mask = mem_read32(cpu, gx_data + 8u);
                u8* src = resolve_guest_ptr(cpu, 0x8020B594u, 1456u);
                u8* dst = resolve_guest_ptr(cpu, gx_data, 1456u);
                if (src && dst) std::memcpy(dst, src, 1456u);
                mem_write32(cpu, gx_data + 8u, saved_bp_mask);
            }
            mem_write8(cpu, gx_data + 1448u, 0u);
        }
        cpu->gpr[3] = aligned_count;
        cpu->pc = orig_lr;
        return true;
    }

    // Si estamos dentro del bucle principal de fotogramas de MGS (0x7F3C7CC8), presentar fotograma al terminar cada tick
    if (address == 0x7F3C7CC8u) {
        static u64 s_last_draws = 0;
        static int s_stall_ticks = 0;
        u64 cur_draws = rctx->render_device ? rctx->render_device->GetDrawCount() : 0ULL;
        if (cur_draws > 600000ULL && cur_draws == s_last_draws) {
            s_stall_ticks++;
            if (s_stall_ticks <= 5 || s_stall_ticks % 100 == 0) {
                std::printf("[ACTOR-DUMP #%d] frame=%u draws=%llu\n", s_stall_ticks, rctx->frame_count, cur_draws);
                u32 bucket_base = 0x7F4F6A68u;
                for (int b = 0; b < 12; ++b) {
                    u32 actor = mem_read32(cpu, bucket_base + b * 68u);
                    int count = 0;
                    while (actor != 0 && count < 10) {
                        u32 next = mem_read32(cpu, actor);
                        u32 fn_update = mem_read32(cpu, actor + 4u);
                        u32 flags = mem_read32(cpu, actor + 8u);
                        std::printf("  bucket[%d]: act=0x%08X update=0x%08X flags=0x%08X\n", b, actor, fn_update, flags);
                        actor = next;
                        count++;
                    }
                }
            }
        }
        s_last_draws = cur_draws;
    }

    return false;
}

static bool load_file_to_guest(CPUState* cpu, const char* path, u32 guest_addr, u32* out_size = nullptr) {
    std::ifstream f(path, std::ios::binary | std::ios::ate);
    if (!f) return false;
    std::streamsize sz = f.tellg();
    f.seekg(0, std::ios::beg);
    std::vector<u8> buf(static_cast<size_t>(sz));
    if (!f.read(reinterpret_cast<char*>(buf.data()), sz)) return false;
    if (u8* dst = resolve_guest_ptr(cpu, guest_addr, static_cast<u32>(buf.size()))) {
        std::memcpy(dst, buf.data(), buf.size());
    } else {
        for (size_t i = 0; i < buf.size(); ++i) {
            mem_write8(cpu, guest_addr + static_cast<u32>(i), buf[i]);
        }
    }
    if (out_size) *out_size = static_cast<u32>(buf.size());
    return true;
}

#if defined(_WIN32)
static LONG WINAPI Ggsea4CrashHandler(PEXCEPTION_POINTERS ep) {
    if (ep->ExceptionRecord->ExceptionCode == 0xE06D7363) return EXCEPTION_CONTINUE_SEARCH;
    std::fprintf(stderr, "\n[FATAL CRASH] ExceptionCode=0x%08lX at Address=%p\n",
                 ep->ExceptionRecord->ExceptionCode,
                 ep->ExceptionRecord->ExceptionAddress);
    void* stack[32];
    USHORT frames = CaptureStackBackTrace(0, 32, stack, nullptr);
    for (USHORT i = 0; i < frames; ++i) {
        HMODULE mod = nullptr;
        char modname[MAX_PATH] = "unknown";
        if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                               (LPCSTR)stack[i], &mod)) {
            GetModuleFileNameA(mod, modname, sizeof(modname));
            char* slash = strrchr(modname, '\\');
            if (slash) memmove(modname, slash + 1, strlen(slash));
        }
        std::fprintf(stderr, "  #%02u: %p [%s + 0x%llX]\n",
                     i, stack[i], modname,
                     (unsigned long long)((uintptr_t)stack[i] - (uintptr_t)mod));
    }
    std::fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

int main(int argc, char** argv) {
#if defined(_WIN32)
    AddVectoredExceptionHandler(1, Ggsea4CrashHandler);
#endif

    const char* dll_path = "module_build/build/GGSEA4.dll";
    const char* dol_path = "input/extracted/sys/main.dol";
    const char* rel_path = "input/extracted/files/shared/mgso.rel";
    u32 max_frames = 0;
    bool cli_vsync = false;
    bool cli_novsync = false;
    bool cli_turbo = false;
    bool cli_verbose = false;
    bool cli_audit_dolphin_shaders = false;
    bool cli_auto_skip = false;
    bool cli_test_move = false;
    bool cli_test_codec = false;
    u32 cli_dump_every = 0;

    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = static_cast<u32>(std::strtoul(argv[++i], nullptr, 10));
        } else if (std::strcmp(argv[i], "--dll") == 0 && i + 1 < argc) {
            dll_path = argv[++i];
        } else if (std::strcmp(argv[i], "--vsync") == 0) {
            cli_vsync = true;
        } else if (std::strcmp(argv[i], "--novsync") == 0) {
            cli_novsync = true;
        } else if (std::strcmp(argv[i], "--turbo") == 0) {
            cli_turbo = true;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') {
                max_frames = static_cast<u32>(std::strtoul(argv[++i], nullptr, 10));
            }
        } else if (std::strcmp(argv[i], "--verbose") == 0) {
            cli_verbose = true;
        } else if (std::strcmp(argv[i], "--dump-every") == 0 && i + 1 < argc) {
            cli_dump_every = static_cast<u32>(std::strtoul(argv[++i], nullptr, 10));
        } else if (std::strcmp(argv[i], "--audit-dolphin-shaders") == 0) {
            cli_audit_dolphin_shaders = true;
        } else if (std::strcmp(argv[i], "--auto-skip") == 0) {
            cli_auto_skip = true;
        } else if (std::strcmp(argv[i], "--test-move") == 0) {
            cli_test_move = true;
        } else if (std::strcmp(argv[i], "--test-codec") == 0) {
            cli_test_codec = true;
        } else if (argv[i][0] >= '0' && argv[i][0] <= '9') {
            max_frames = static_cast<u32>(std::strtoul(argv[i], nullptr, 10));
        }
    }

    std::printf("=== GGSEA4 RecompCore Graphics Runtime (ModernGekko + Win32 + OpenGL) ===\n");

#if defined(_WIN32)
    HMODULE mod_handle = LoadLibraryA(dll_path);
    if (!mod_handle) {
        std::fprintf(stderr, "[ERROR] No se pudo cargar %s (GetLastError=%lu)\n", dll_path, GetLastError());
        return 1;
    }
    auto get_module = reinterpret_cast<GetModuleFn>(GetProcAddress(mod_handle, "dolrecomp_get_module"));
    auto mod_call = reinterpret_cast<ModuleCallFn>(GetProcAddress(mod_handle, "dolrecomp_module_call"));
    auto mod_run_blocks = reinterpret_cast<ModuleRunBlocksFn>(GetProcAddress(mod_handle, "dolrecomp_module_run_blocks"));
#else
    GetModuleFn get_module = nullptr;
    ModuleCallFn mod_call = nullptr;
    ModuleRunBlocksFn mod_run_blocks = nullptr;
#endif

    if (!get_module || !mod_call || !mod_run_blocks) {
        std::fprintf(stderr, "[ERROR] Exportaciones ABI V4 incompletas en %s\n", dll_path);
        return 1;
    }

    const DolRecompModule* mod = get_module();
    std::printf("[OK] Modulo cargado: ABI=v%u | CPUState=%u bytes | Variante=%s\n",
                mod->abi_version, mod->cpu_state_size,
                mod->variants ? mod->variants[0].name : "none");

    // 1. Inicializar subsistema gráfico ModernGekko (AddressSpace + GxStateBackend + GxCommandProcessor + DolphinShaderCompiler)
    moderngekko::AddressSpace address_space(GC_MAIN_RAM_SIZE, GC_VM_SIZE);
    moderngekko::GxStateBackend gx_state(address_space);
    Ggsea4RenderDevice render_device(address_space);
    gx_state.SetRenderDevice(&render_device);
    moderngekko::GxCommandProcessor gx_cp(&gx_state, &address_space);

    CPUState cpu;
    if (!cpu_init(&cpu) || !cpu_alloc_mem2(&cpu, GC_VM_SIZE)) {
        std::fprintf(stderr, "[ERROR] Fallo al inicializar CPUState\n");
        return 1;
    }
    cpu_reset(&cpu);

    // Compartir zero-copy MEM1 (24 MB) y VM/MEM2 (16 MB, mgso.rel) entre CPUState y ModernGekko::AddressSpace
    u8* orig_cpu_ram = cpu.ram;
    u8* orig_cpu_mem2 = cpu.mem2;
    cpu.ram = address_space.GetMem1().data();
    cpu.mem2 = address_space.GetMem2().data();

    GfxRuntimeContext rctx;
    rctx.module_call = mod_call;
    rctx.address_space = &address_space;
    rctx.gx_state = &gx_state;
    rctx.gx_cp = &gx_cp;
    rctx.render_device = &render_device;
    rctx.max_frames = max_frames;
    rctx.verbose_logging = cli_verbose;
    rctx.audit_dolphin_shaders = cli_audit_dolphin_shaders;
    rctx.auto_skip = cli_auto_skip;
    rctx.test_move = cli_test_move;
    rctx.test_codec = cli_test_codec;
    rctx.dump_frame_interval = cli_dump_every;
    render_device.SetAuditDolphinShaders(cli_audit_dolphin_shaders);
    if (cli_novsync) rctx.vsync_enabled = false;
    if (cli_turbo) {
        rctx.vsync_enabled = false;
        rctx.fps_limiter_enabled = false;
    }

    cpu.external_user_data = &rctx;
    cpu.external_read = host_mmio_read;
    cpu.external_write = host_mmio_write;
    cpu.host_call = host_call_hook;
    g_memcardA.init("memcardA.raw");
    cpu.spr_read = host_spr_read;
    cpu.spr_write = host_spr_write;
    cpu.cache_control = host_cache_control;
    cpu.instruction_fallback = host_instruction_fallback;
    if (cli_verbose) {
        ppc_set_mem_write_journal(write_journal_cb, &cpu);
    }

#if defined(_WIN32)
    // 2. Crear ventana Win32 + contexto OpenGL
    WNDCLASSEXA wc = {};
    wc.cbSize = sizeof(wc);
    wc.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = Ggsea4WndProc;
    wc.hInstance = GetModuleHandleA(nullptr);
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.lpszClassName = "GGSEA4RecompGfxWnd";
    RegisterClassExA(&wc);

    RECT rect = {0, 0, static_cast<LONG>(rctx.client_width), static_cast<LONG>(rctx.client_height)};
    AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, FALSE);
    rctx.hwnd = CreateWindowExA(
        0, wc.lpszClassName,
        "Metal Gear Solid: The Twin Snakes (GGSEA4) - RecompCore Graphics Runtime",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT,
        rect.right - rect.left, rect.bottom - rect.top,
        nullptr, nullptr, wc.hInstance, nullptr);
    SetWindowLongPtrA(rctx.hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(&rctx));

    rctx.hdc = GetDC(rctx.hwnd);
    PIXELFORMATDESCRIPTOR pfd = {};
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 24;
    pfd.iLayerType = PFD_MAIN_PLANE;
    int pf = ChoosePixelFormat(rctx.hdc, &pfd);
    SetPixelFormat(rctx.hdc, pf, &pfd);
    rctx.hglrc = wglCreateContext(rctx.hdc);
    wglMakeCurrent(rctx.hdc, rctx.hglrc);

    std::printf("[GFX] Contexto OpenGL activo: %s | %s\n",
                reinterpret_cast<const char*>(glGetString(GL_VENDOR)),
                reinterpret_cast<const char*>(glGetString(GL_RENDERER)));

    rctx.host_refresh_rate = GetDeviceCaps(rctx.hdc, VREFRESH);
    {
        MONITORINFOEXA mi = {};
        mi.cbSize = sizeof(mi);
        HMONITOR hmon = MonitorFromWindow(rctx.hwnd, MONITOR_DEFAULTTOPRIMARY);
        if (hmon && GetMonitorInfoA(hmon, &mi)) {
            DEVMODEA dm = {};
            dm.dmSize = sizeof(dm);
            if (EnumDisplaySettingsA(mi.szDevice, ENUM_CURRENT_SETTINGS, &dm) && dm.dmDisplayFrequency > 1) {
                rctx.host_refresh_rate = static_cast<int>(dm.dmDisplayFrequency);
            }
        }
    }
    if (rctx.host_refresh_rate <= 0) rctx.host_refresh_rate = 60;

    // Por defecto desactivar wglSwapInterval=1 porque bajo DWM en Windows cuantiza frames a 20/30 FPS incluso a 60 Hz;
    // el limitador QPC acumulador de 59.94 Hz mantiene pacing exacto sin --novsync (VSync HW sigue disponible con --vsync o F8).
    rctx.vsync_enabled = cli_vsync && !cli_novsync && !cli_turbo;

    wglSwapIntervalEXT = reinterpret_cast<PFNWGLSWAPINTERVALEXTPROC>(wglGetProcAddress("wglSwapIntervalEXT"));
    if (wglSwapIntervalEXT) {
        wglSwapIntervalEXT(rctx.vsync_enabled ? 1 : 0);
        std::printf("[GFX] Monitor: %d Hz | wglSwapIntervalEXT=%d (%s) | Pacing: %s\n",
                    rctx.host_refresh_rate,
                    rctx.vsync_enabled ? 1 : 0,
                    rctx.vsync_enabled ? "VSync Hardware ON" : "VSync OFF",
                    rctx.vsync_enabled ? "Hardware VI" : "QPC Acumulador 59.94 Hz");
    }

    // Inicializar temporizador de alta resolucion para limitador de fotogramas (59.940059 Hz NTSC)
    timeBeginPeriod(1);
    QueryPerformanceFrequency(&rctx.qpc_freq);
    QueryPerformanceCounter(&rctx.last_frame_qpc);
    rctx.target_frame_qpc = rctx.last_frame_qpc;
    rctx.tb_start_qpc = rctx.last_frame_qpc;
    rctx.fps_sample_time = std::chrono::steady_clock::now();
    rctx.fps_sample_frame = 0;

    render_device.InitGlResources();
#endif

    // 3. Prueba de humo del compilador de shaders Dolphin (ModernGekko::DolphinVideo) + GX Pipeline
    {
        std::array<std::uint32_t, 256> cp_test{};
        std::array<std::uint32_t, 0x1058> xf_test{};
        std::array<std::uint32_t, 256> bp_test{};
        cp_test[0x50u] = 1u << 13u;
        bp_test[0xC0u] = 15u | (15u << 4) | (15u << 8) | (10u << 12) | (1u << 19);
        bp_test[0xC1u] = (7u << 4) | (7u << 7) | (7u << 10) | (5u << 13) | (1u << 19);
        const auto boot_shaders = moderngekko::DolphinShaderCompiler::Compile(
            {cp_test, xf_test, bp_test},
            moderngekko::GxTopology::Triangles, 0,
            moderngekko::DolphinShaderApi::OpenGl);
        std::printf("[GFX] DolphinShaderCompiler verificado: VS=%zu bytes (UID=0x%llX) | PS=%zu bytes (UID=0x%llX)\n",
                    boot_shaders.vertex.size(),
                    static_cast<unsigned long long>(boot_shaders.vertex_uid),
                    boot_shaders.pixel.size(),
                    static_cast<unsigned long long>(boot_shaders.pixel_uid));
    }

    // 4. Inicializar OS Globals de GameCube (0x80000000..0x800030FF)
    load_file_to_guest(&cpu, "input/extracted/sys/boot.bin", 0x80000000u);
    u32 bi2_addr = 0x817EE000u;
    load_file_to_guest(&cpu, "input/extracted/sys/bi2.bin", bi2_addr);
    mem_write32(&cpu, bi2_addr + 0x08u, 0u);
    mem_write32(&cpu, bi2_addr + 0x0Cu, 0u);
    u32 fst_size = 0;
    u32 fst_addr = 0x817F0000u;
    if (load_file_to_guest(&cpu, "input/extracted/sys/fst.bin", fst_addr, &fst_size)) {
        mem_write32(&cpu, 0x80000038u, fst_addr);
        mem_write32(&cpu, 0x8000003Cu, fst_size);
        if (u8* fst_ptr = resolve_guest_ptr(&cpu, fst_addr, fst_size)) {
            init_fst_tables(fst_ptr, fst_size);
        }
    }
    mem_write32(&cpu, 0x80000028u, GC_MAIN_RAM_SIZE);
    mem_write32(&cpu, 0x8000002Cu, 0x00000001u);
    mem_write32(&cpu, 0x80000030u, 0x80290B40u);
    mem_write32(&cpu, 0x80000034u, bi2_addr);
    mem_write32(&cpu, 0x800000F0u, GC_MAIN_RAM_SIZE);
    mem_write32(&cpu, 0x800000F4u, bi2_addr);
    mem_write32(&cpu, 0x800000F8u, 162000000u);
    mem_write32(&cpu, 0x800000FCu, 486000000u);
    mem_write32(&cpu, 0x800000CCu, 0u); // TV Mode = VI_NTSC

    // 5. Cargar main.dol en MEM1
    DOLFile dol;
    if (!dol_load(&dol, dol_path)) {
        std::fprintf(stderr, "[ERROR] No se pudo cargar %s\n", dol_path);
        cpu.ram = orig_cpu_ram;
        cpu.mem2 = orig_cpu_mem2;
        cpu_free(&cpu);
        return 1;
    }
    for (int i = 0; i < DOL_NUM_TEXT; ++i) {
        if (dol.header.text_sizes[i] == 0) continue;
        const u8* data = dol_get_text_section(&dol, i);
        std::memcpy(cpu.ram + (dol.header.text_addresses[i] - GC_RAM_BASE), data, dol.header.text_sizes[i]);
    }
    for (int i = 0; i < DOL_NUM_DATA; ++i) {
        if (dol.header.data_sizes[i] == 0) continue;
        const u8* data = dol_get_data_section(&dol, i);
        std::memcpy(cpu.ram + (dol.header.data_addresses[i] - GC_RAM_BASE), data, dol.header.data_sizes[i]);
    }
    std::printf("[OK] main.dol cargado en MEM1 (entry=0x%08X)\n", dol.header.entry_point);

    // 6. Cargar y relocalizar shared/mgso.rel en 0x7F008000 (VM)
    RELFile rel;
    if (!rel_load(&rel, rel_path, 0x7F008000u)) {
        std::fprintf(stderr, "[ERROR] No se pudo cargar/relocalizar %s\n", rel_path);
        dol_free(&dol);
        cpu.ram = orig_cpu_ram;
        cpu.mem2 = orig_cpu_mem2;
        cpu_free(&cpu);
        return 1;
    }
    for (u32 i = 0; i < rel.section_count; ++i) {
        const RELSection& sec = rel.sections[i];
        std::printf("[REL-SEC] sec[%u] addr=0x%08X size=0x%08X bss=%d\n", i, sec.address, sec.size, sec.bss);
        if (sec.size == 0 || sec.bss || !sec.data) continue;
        u32 vm_off = sec.address - GC_VM_BASE;
        std::memcpy(cpu.mem2 + vm_off, sec.data, sec.size);
    }
    std::printf("[OK] mgso.rel cargado y relocalizado en VM 0x7F008000 (entry=0x%08X, relocs=%u)\n",
                rel.entry_point, rel.relocation_count);

    // 7. Ejecutar bucle principal del juego + presentación OpenGL
    g_active_cpu = &cpu;
    cpu.pc = dol.header.entry_point; // 0x80005240 (__start)
    cpu.gpr[1] = 0x8028EB38u;        // _stack_addr
    cpu.gpr[2] = 0x802864A0u;        // _SDA2_BASE_
    cpu.gpr[13] = 0x80285DC0u;       // _SDA_BASE_
    cpu.msr = 0x00002000u;           // MSR[FP] enabled

#if defined(_WIN32)
    present_frame(&cpu, &rctx);
#endif

    u64 total_blocks = 0;
    struct HistoryEntry { u32 pc; u32 lr; u32 sp; };
    HistoryEntry history[64] = {};
    size_t hist_idx = 0;

    while (!rctx.window_closed) {
        if (rctx.max_frames > 0 && rctx.frame_count >= rctx.max_frames) {
            std::printf("[OK] Limite de %u fotogramas alcanzado satisfactoriamente.\n", rctx.max_frames);
            break;
        }

        history[hist_idx % 64] = {cpu.pc, cpu.lr, cpu.gpr[1]};
        ++hist_idx;

        cpu.downcount = 100000;
#if defined(_WIN32)
        if (rctx.qpc_freq.QuadPart > 0) {
            LARGE_INTEGER tb_now = {};
            QueryPerformanceCounter(&tb_now);
            const u64 dt = static_cast<u64>(tb_now.QuadPart - rctx.tb_start_qpc.QuadPart);
            const u64 freq = static_cast<u64>(rctx.qpc_freq.QuadPart);
            const u64 qpc_tb = (dt / freq) * 40500000ULL + ((dt % freq) * 40500000ULL) / freq;
            cpu.timebase = rctx.fps_limiter_enabled
                ? qpc_tb
                : std::max<u64>(qpc_tb, static_cast<u64>(rctx.frame_count) * 675675ULL);
        } else {
            cpu.timebase += 1000;
        }
#else
        cpu.timebase += 1000;
#endif
        total_blocks += 256;
        if ((total_blocks & 0xFFFFFu) == 0) {
            u32 cur_ctx = mem_read32(&cpu, 0x800000D4u);
            u32 cur_th = mem_read32(&cpu, 0x800000E4u);
            u32 run_bits = mem_read32(&cpu, 0x8027E0C0u);
            u32 resched = mem_read32(&cpu, 0x8027E0C8u);

            u32 m_state = mem_read16(&cpu, 0x801EC3B8u + 712u);
            u32 m_susp = mem_read32(&cpu, 0x801EC3B8u + 716u);
            u32 m_queue = mem_read32(&cpu, 0x801EC3B8u + 732u);
            u32 m_pc = mem_read32(&cpu, 0x801EC3B8u + 404u);
            u32 m_lr = mem_read32(&cpu, 0x801EC3B8u + 132u);
            u32 m_sp = mem_read32(&cpu, 0x801EC3B8u + 4u);

            u32 mov_state = mem_read16(&cpu, 0x801EC6F0u + 712u);
            u32 mov_susp = mem_read32(&cpu, 0x801EC6F0u + 716u);
            u32 mov_queue = mem_read32(&cpu, 0x801EC6F0u + 732u);
            u32 mov_pc = mem_read32(&cpu, 0x801EC6F0u + 404u);
            u32 mov_lr = mem_read32(&cpu, 0x801EC6F0u + 132u);
            u32 mov_sp = mem_read32(&cpu, 0x801EC6F0u + 4u);

            u32 q_cnt = mem_read32(&cpu, 0x7F4A3DB4u + 28u);
            u32 q_recv = mem_read32(&cpu, 0x7F4A3DB4u + 8u);

            std::printf("[HEARTBEAT] blocks=%llu PC=0x%08X LR=0x%08X SP=0x%08X curCtx=0x%08X curTh=0x%08X runBits=0x%08X resched=%u\n"
                        "  MainThread   (0x801EC3B8): state=%u susp=%d queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n"
                        "  MovieThread  (0x801EC6F0): state=%u susp=%d queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n"
                        "  MessageQueue (0x7F4A3DB4): msgCount=%u queueReceive=0x%08X\n",
                        static_cast<unsigned long long>(total_blocks), cpu.pc, cpu.lr, cpu.gpr[1],
                        cur_ctx, cur_th, run_bits, resched,
                        m_state, (s32)m_susp, m_queue, m_pc, m_lr, m_sp,
                        mov_state, (s32)mov_susp, mov_queue, mov_pc, mov_lr, mov_sp,
                        q_cnt, q_recv);
            std::fflush(stdout);
        }

        if (!mod_run_blocks(&cpu, 256) && cpu.exception == 0) {
            // Si llegamos a una dirección fuera de tabla o callback nulo, retornar al caller (LR)
            if (cpu.lr != 0 && cpu.pc != cpu.lr) {
                cpu.pc = cpu.lr;
                continue;
            }
            std::printf("[INFO] Ejecucion detenida en PC=0x%08X (LR=0x%08X SP=0x%08X) tras %llu bloques\n",
                        cpu.pc, cpu.lr, cpu.gpr[1], static_cast<unsigned long long>(total_blocks));
            u32 dump_base = (cpu.pc >= 32) ? (cpu.pc - 32) : 0;
            std::printf("--- Memoria alrededor de PC (0x%08X..0x%08X) ---\n", dump_base, dump_base + 64);
            for (u32 a = dump_base; a < dump_base + 64; a += 4) {
                u32 val = mem_read32(&cpu, a);
                std::printf("  0x%08X: 0x%08X\n", a, val);
            }
            std::printf("--- Stack alrededor de SP (0x%08X..0x%08X) ---\n", cpu.gpr[1] - 32, cpu.gpr[1] + 64);
            for (u32 a = cpu.gpr[1] - 32; a < cpu.gpr[1] + 64; a += 4) {
                u32 val = mem_read32(&cpu, a);
                std::printf("  0x%08X: 0x%08X\n", a, val);
            }
            std::printf("--- Ultimas 32 llamadas previas ---\n");
            for (size_t i = 0; i < 32; ++i) {
                size_t idx = (hist_idx + 64 - 32 + i) % 64;
                std::printf("  [%02zu] PC=0x%08X LR=0x%08X SP=0x%08X\n",
                            i, history[idx].pc, history[idx].lr, history[idx].sp);
            }
            break;
        }

        if (cpu.exception == PPC_EXC_SYSTEM_CALL) {
            cpu.exception = 0;
            cpu.msr = cpu.srr1 | 0x00002000u;
            cpu.pc = cpu.srr0;
            continue;
        }
        if (cpu.exception == PPC_EXC_FP_UNAVAILABLE) {
            cpu.exception = 0;
            cpu.msr |= 0x00002000u;
            cpu.pc = cpu.srr0;
            continue;
        }
        if (cpu.exception) {
            std::printf("[INFO] Excepcion guest=0x%X en SRR0=0x%08X -> PC=0x%08X\n",
                        cpu.exception, cpu.srr0, cpu.pc);
            break;
        }

#if defined(_WIN32)
        if ((total_blocks & 0x3FFFu) == 0) {
            pump_host_events_if_due(&cpu, &rctx);
        }
#endif
    }

    std::printf("\n=== Resumen de Ejecucion del Runtime Grafico ===\n");
    std::printf("  Bloques ejecutados : %llu\n", static_cast<unsigned long long>(total_blocks));
    std::printf("  Fotogramas OpenGL  : %u\n", rctx.frame_count);
    std::printf("  Comandos GX FIFO   : %llu\n", static_cast<unsigned long long>(gx_cp.GetCommandCount()));
    std::printf("  Draws GX           : %llu (%llu vertices)\n",
                static_cast<unsigned long long>(render_device.GetDrawCount()),
                static_cast<unsigned long long>(render_device.GetVertexCount()));
    std::printf("  Copias EFB         : %llu\n", static_cast<unsigned long long>(render_device.GetEfbCopyCount()));
    std::printf("  Shaders compilados : %llu\n", static_cast<unsigned long long>(render_device.GetShaderCompileCount()));
    std::printf("  Lecturas PADRead   : %llu\n", static_cast<unsigned long long>(rctx.pad_read_count));
    std::printf("  Lecturas DVD Sync  : %llu\n", static_cast<unsigned long long>(rctx.dvd_sync_read_count));
    std::printf("  Lecturas DVD Async : %llu\n", static_cast<unsigned long long>(rctx.dvd_async_read_count));
    std::printf("  Hitos alcanzados   : __start=%s | main=%s | mgso::_prolog=%s | mgso::main=%s | mgso::thread=%s\n",
                rctx.reached_start ? "SI" : "NO",
                rctx.reached_main ? "SI" : "NO",
                rctx.reached_mgso_prolog ? "SI" : "NO",
                rctx.reached_mgso_main ? "SI" : "NO",
                rctx.reached_mgso_thread ? "SI" : "NO");

#if defined(_WIN32)
    if (rctx.render_device) {
        rctx.render_device->RenderFrameToWindow(
            &cpu,
            rctx.vi_xfb_address,
            rctx.client_width,
            rctx.client_height,
            rctx.frame_count,
            rctx.gx_cp ? rctx.gx_cp->GetCommandCount() : 0,
            rctx.reached_mgso_loop,
            rctx.aspect_mode,
            rctx.show_debug_hud);
        rctx.render_device->SaveEfbToBmp("efb_final_frame.bmp");
    }
    char final_shot[128];
    std::snprintf(final_shot, sizeof(final_shot), "screenshot_frame_%u.bmp", rctx.frame_count);
    if (save_frame_to_bmp(final_shot, rctx.client_width, rctx.client_height)) {
        std::printf("[SCREENSHOT] Captura automatica al completar ejecucion guardada: %s (%ux%u BMP)\n",
                    final_shot, rctx.client_width, rctx.client_height);
    }
    set_controller_rumble(0.0f);
    timeEndPeriod(1);
    if (rctx.hglrc) {
        wglMakeCurrent(nullptr, nullptr);
        wglDeleteContext(rctx.hglrc);
    }
    if (rctx.hwnd && rctx.hdc) {
        ReleaseDC(rctx.hwnd, rctx.hdc);
    }
    if (rctx.hwnd) {
        DestroyWindow(rctx.hwnd);
    }
#endif

    rctx.close_cached_dvd_handles();
    g_memcardA.save_to_disk();
    rel_free(&rel);
    dol_free(&dol);
    cpu.ram = orig_cpu_ram;
    cpu.mem2 = orig_cpu_mem2;
    cpu_free(&cpu);
    return (rctx.reached_start && rctx.reached_main && rctx.reached_mgso_prolog) ? 0 : 1;
}
