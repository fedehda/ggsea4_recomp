#pragma once

#include "gx_dolphin_gl.hpp"
#include "memcard_dvd_hle.hpp"

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

    // Display List recording (GXBeginDisplayList / GXEndDisplayList for mgso.rel Ordering Table)
    bool dl_active = false;
    u32 dl_fifo_obj = 0;
    u32 dl_base_addr = 0;
    u32 dl_write_addr = 0;
    u32 dl_max_size = 0;

    u32 vi_xfb_address = 0;
    u32 frame_count = 0;
    u32 max_frames = 0;
    double max_seconds = 0.0;
    std::chrono::steady_clock::time_point run_start_time{};
    bool timed_out = false;
    bool in_audio_cleanup = false;
    bool window_closed = false;

    // QoL: Aspect ratio, fullscreen, VSync, and frame rate limiter
    AspectRatioMode aspect_mode = AspectRatioMode::Original_4_3;
    bool vsync_enabled = true;
    bool fps_limiter_enabled = true;
    bool is_fullscreen = false;
    bool show_debug_hud = false;
    bool auto_skip = false;
    bool no_area01a_skip = false;
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
    u32  audio_child_actor = 0;
    u32  audio_child_last_frame = 0;
    u32  audio_child_last_queued = 0;
    double audio_child_byte_rem = 0.0;
    u32  stream_ready_poll_vid = 0;
    u32  stream_ready_poll_start_frame = 0;
    u32  stream_ready_poll_last_frame = 0;
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
    u32 active_stream_actor = 0;

    void close_cached_dvd_handles() {
        for (auto& pair : cached_dvd_handles) {
            if (pair.second) {
                std::fclose(pair.second);
            }
        }
        cached_dvd_handles.clear();
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

extern GameCubeMMIOState s_mmio;
extern std::vector<u8> s_aram;
extern u32 s_ai_dma_cb;
extern bool s_ai_stream_playing;
extern u32 s_ai_dma_addr;
extern u32 s_ai_dma_len;
extern u32 s_ai_dma_bytes_left;

enum class HookResult {
    Continue,
    ReturnFalse,
    ReturnTrue,
};

// Window, Input, Presentation & MMIO callbacks (window_input_mmio.cpp)
#if defined(_WIN32)
void toggle_fullscreen(HWND hwnd, GfxRuntimeContext* rctx);
LRESULT CALLBACK Ggsea4WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);
void init_xinput();
void set_controller_rumble(float intensity);
void pump_win32_messages(GfxRuntimeContext* rctx);
void update_pad_input(GfxRuntimeContext* rctx);
void write_pad_status_to_guest(CPUState* cpu, u32 base, GfxRuntimeContext* rctx);
void sync_pad_to_guest_memory(CPUState* cpu, GfxRuntimeContext* rctx);
void present_frame(CPUState* cpu, GfxRuntimeContext* rctx);
void pump_host_events_if_due(CPUState* cpu, GfxRuntimeContext* rctx);
#endif

u32 host_spr_read(CPUState* cpu, u16 spr, u32 cia);
void host_spr_write(CPUState* cpu, u16 spr, u32 value, u32 cia);
void host_cache_control(CPUState* cpu, u8 operation, u32 ea, u32 cia);
void host_instruction_fallback(CPUState* cpu, u32 raw, u32 cia);
u64 host_mmio_read(CPUState* cpu, u32 ea, u8 size);
void host_mmio_write(CPUState* cpu, u32 ea, u64 value, u8 size);
void restore_canonical_audio_rodata(CPUState* cpu);
void write_journal_cb(u32 offset, u32 size, void* user);

// Modular HLE hook dispatchers
HookResult handle_dvd_card_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address);
HookResult handle_codec_and_mgso_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address);
HookResult handle_audio_vorbis_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address);
bool host_call_hook(CPUState* cpu, u32 address);
const u64* get_host_hook_bloom_data();

// Shared Audio/Vorbis HLE helpers (audio_vorbis_hle.cpp)
void call_guest_fn1(CPUState* cpu, GfxRuntimeContext* rctx, u32 fn_addr, u32 arg0);
void cleanup_stale_vorbis_decoder(CPUState* cpu, GfxRuntimeContext* rctx);
void release_stream_slot_for_voice(CPUState* cpu, GfxRuntimeContext* rctx, u32 voice_slot);
void sync_hle_voices(CPUState* cpu, GfxRuntimeContext* rctx);
u32 retire_stale_stream_voices(CPUState* cpu, GfxRuntimeContext* rctx);
