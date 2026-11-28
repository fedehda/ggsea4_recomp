#include "runtime_context.hpp"

#if defined(_WIN32)
void toggle_fullscreen(HWND hwnd, GfxRuntimeContext* rctx) {
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

LRESULT CALLBACK Ggsea4WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
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
// 2. Dynamic support for XInput Gamepads with Polling and Rumble
typedef DWORD(WINAPI* PFN_XInputGetState)(DWORD dwUserIndex, void* pState);
typedef DWORD(WINAPI* PFN_XInputSetState)(DWORD dwUserIndex, void* pVibration);
static HMODULE s_xinput = nullptr;
static PFN_XInputGetState fn_xinput_get_state = nullptr;
static PFN_XInputSetState fn_xinput_set_state = nullptr;
static bool s_xinput_tried = false;

void init_xinput() {
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

void set_controller_rumble(float intensity) {
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

void pump_win32_messages(GfxRuntimeContext* rctx) {
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) {
            rctx->window_closed = true;
        }
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

void update_pad_input(GfxRuntimeContext* rctx) {
#if defined(_WIN32)
    if (!rctx) return;
    u16 btn = 0;
    s8 sx = 0, sy = 0;
    s8 ssx = 0, ssy = 0;
    u8 trigL = 0, trigR = 0;

    auto is_down = [](int vk) -> bool {
        return (GetAsyncKeyState(vk) & 0x8000) != 0;
    };

    // 1. PC Keyboard -> GameCube Controller mapping:
    // START  : Enter / Return (VK_RETURN) -> EXCLUSIVELY START (0x1000u)
    // A      : Space (VK_SPACE) or 'Z' -> Confirm / Fire / Action (0x0100u)
    // B      : 'X' or Backspace (VK_BACK) -> Cancel / Crouch / Punch (0x0200u)
    // X      : 'C' -> Crawl / First-person camera (0x0400u)
    // Y      : 'V' -> Secondary action (0x0800u)
    // Z      : 'E' -> GameCube Z trigger (0x0010u)
    // L      : 'Q' -> Left analog/digital trigger (0x0040u)
    // R      : 'R' -> Right analog/digital trigger (0x0020u)
    if (is_down(VK_RETURN)) btn |= 0x1000u; // START
    if (is_down(VK_SPACE) || is_down('Z')) btn |= 0x0100u; // A (Confirm)
    if (is_down('X') || is_down(VK_BACK)) btn |= 0x0200u;  // B (Cancel)
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

    // Main Control Stick (WASD independent of D-Pad/Arrow keys)
    if (is_down('A')) sx -= 120;
    if (is_down('D')) sx += 120;
    if (is_down('W')) sy += 120;
    if (is_down('S')) sy -= 120;

    // C-Stick / Substick (IJKL)
    if (is_down('J')) ssx -= 120;
    if (is_down('L')) ssx += 120;
    if (is_down('I')) ssy += 120;
    if (is_down('K')) ssy -= 120;

    // Simulated START and A presses after passing the video frames
    // NOTE: Only active with explicit --auto-skip flag so it does not interfere with manual play/interactive menus
    if (rctx->auto_skip) {
        static uint64_t simulated_pad_ticks = 0;
        ++simulated_pad_ticks;
        const uint64_t start_skip_tick = 40;
        const uint64_t title_confirm_tick = 250;
        const uint64_t menu_confirm_tick = 350;

        if (simulated_pad_ticks >= start_skip_tick && simulated_pad_ticks < title_confirm_tick) {
            // Send intermittent START to skip intro/demo and reach r_title
            if ((simulated_pad_ticks / 8) % 2 == 0) {
                btn |= 0x1000u; // START
            }
        } else if (simulated_pad_ticks >= title_confirm_tick && simulated_pad_ticks < menu_confirm_tick) {
            // Once on the title menu (r_title), press START / A (confirm New Game)
            if ((simulated_pad_ticks / 10) % 2 == 0) {
                btn |= 0x1100u; // START (0x1000) + A (0x0100)
            }
        } else if (simulated_pad_ticks >= menu_confirm_tick) {
            if (rctx->no_area01a_skip && rctx->area01a_loaded) {
                std::printf("[AUTO-SKIP] area01a cargada (frame %u). Desactivando auto_skip (--no-area01a-skip).\n",
                            rctx->frame_count);
                rctx->auto_skip = false;
            } else if (rctx->codec_active) {
                // In Codec, wait ~2.5s (150 frames) to observe the opening dialogue, briefly press A every 30 frames
                // up to +600 frames to advance to gameplay, then stop auto_skip for manual Snake control.
                if (rctx->codec_start_frame > 0) {
                    if (rctx->frame_count >= rctx->codec_start_frame + 600u) {
                        std::printf("[AUTO-SKIP] Ventana de Codec completada (frame %u). Desactivando auto_skip para gameplay.\n",
                                    rctx->frame_count);
                        rctx->auto_skip = false;
                    } else if ((rctx->frame_count >= rctx->codec_start_frame + 150u) &&
                               ((rctx->frame_count % 30u) < 2u)) {
                        btn |= 0x0100u; // A (Advance dialogue)
                    }
                }
            } else if (rctx->area01a_loaded) {
                // In area01a prior to Codec, do not send LEFT or START (avoids opening CONTINUE/SKIP pause menu).
                if ((rctx->frame_count / 15) % 2 == 0) {
                    btn |= 0x0100u; // Gentle A press
                }
            } else {
                // Confirm possible Memory Card dialogs (select YES with Stick Left + A/START)
                const uint64_t phase = (simulated_pad_ticks / 15) % 4;
                if (phase == 0 || phase == 1) {
                    sx = -80; // Tilt left to select [YES]
                    btn |= 0x0001u; // D-Pad LEFT
                }
                if (phase == 1 || phase == 2) {
                    btn |= 0x0100u; // A (Confirm)
                }
                if (phase == 3) {
                    btn |= 0x1000u; // START
                }
            }
        }
    }
    if (rctx->test_move && rctx->frame_count >= 2550u && rctx->frame_count < 2750u) {
        sy = 120; // QA test for forward movement in area01a
    }
    if (rctx->test_codec && rctx->frame_count >= 2450u && rctx->frame_count < 2456u) {
        btn |= 0x1100u; // START + A (Codec in GameCube MGS:TTS) in area01a
    }

    // 2. Native support for Xbox / DirectInput / Steam Input Gamepads (Polling slots 0..3)
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

void write_pad_status_to_guest(CPUState* cpu, u32 base, GfxRuntimeContext* rctx) {
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

void sync_pad_to_guest_memory(CPUState* cpu, GfxRuntimeContext* rctx) {
    if (!cpu || !rctx) return;
    const u32 pad_buffers[] = { 0x801E9388u, 0x7F4FAA38u };
    for (u32 base : pad_buffers) {
        write_pad_status_to_guest(cpu, base, rctx);
    }
}


GameCubeMMIOState s_mmio;
std::vector<u8> s_aram(16 * 1024 * 1024, 0);

u32 s_ai_dma_cb = 0;
bool s_ai_stream_playing = false;
u32 s_ai_dma_addr = 0;
u32 s_ai_dma_len = 0;
u32 s_ai_dma_bytes_left = 0;


void present_frame(CPUState* cpu, GfxRuntimeContext* rctx) {
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

    // If there was no new graphics content and at least ~14 ms (~60 Hz) has not elapsed yet,
    // this is a redundant call in the same frame (e.g., 0x8004C2F0 and 0x7F3C7CC8).
    // Skip swap and wait to avoid double delay and 15 FPS judder.
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

    // Increment VI vertical blank counter (0x8027E22C) and sync MGS input buffer
    u32 cur_retrace = mem_read32(cpu, 0x8027E22Cu) + 1u;
    mem_write32(cpu, 0x8027E22Cu, cur_retrace);
    mem_write32(cpu, 0x801E9388u + 48u, cur_retrace);
    mem_write32(cpu, 0x801E9388u + 52u, 0x80000000u);

    // Continuous Audio Interface clock (48 kHz / 60 FPS = 800 samples per frame)
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
        if (rctx->frame_count == 100u) {
            bool any_gl_err = false;
            for (int ei = 0; ei < 16; ++ei) {
                const GLenum gl_err = glGetError();
                if (gl_err == GL_NO_ERROR) break;
                any_gl_err = true;
                std::fprintf(stderr, "[GFX-GL-ERR] Frame 100: 0x%X\n", static_cast<unsigned>(gl_err));
            }
            if (!any_gl_err) {
                std::printf("[GFX-GL-OK] Frame 100: GL_NO_ERROR (DolphinShaders=%zu, Errors=%llu)\n",
                            rctx->render_device ? rctx->render_device->GetDolphinProgramCount() : 0u,
                            rctx->render_device ? static_cast<unsigned long long>(rctx->render_device->GetDolphinShaderErrorCount()) : 0ULL);
            }
            std::fflush(stdout);
            std::fflush(stderr);
        }
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

        // High-precision frame pacing control (GameCube VI NTSC: 59.940059 Hz)
        if (rctx->vsync_enabled) {
            // With VSync active, SwapBuffers(hdc) already syncs to the monitor refresh in hardware.
            // Do not apply extra QPC delays to avoid frame drops from double waiting.
            rctx->target_frame_qpc = post_swap_qpc;
            rctx->last_frame_qpc = post_swap_qpc;
        } else if (rctx->fps_limiter_enabled && rctx->qpc_freq.QuadPart > 0) {
            // Software pacing via QPC accumulator (avoids drift and micro-stutter when VSync is disabled)
            const double target_frame_s = 1001.0 / 60000.0;
            const int64_t interval_ticks = static_cast<int64_t>(rctx->qpc_freq.QuadPart * target_frame_s);

            if (rctx->target_frame_qpc.QuadPart == 0) {
                rctx->target_frame_qpc = post_swap_qpc;
            }
            rctx->target_frame_qpc.QuadPart += interval_ticks;

            // If there was an extreme delay (> 2 frames), resync to avoid bursts
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

void pump_host_events_if_due(CPUState* cpu, GfxRuntimeContext* rctx) {
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

u32 host_spr_read(CPUState* cpu, u16 spr, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx || spr >= 1024) return 0;
    if (spr == 1017) {
        return rctx->spr_regs[spr] & ~0x00000001u;
    }
    return rctx->spr_regs[spr];
}

void host_spr_write(CPUState* cpu, u16 spr, u32 value, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<GfxRuntimeContext*>(cpu->external_user_data);
    if (!rctx || spr >= 1024) return;
    rctx->spr_regs[spr] = value;
}

void host_cache_control(CPUState* cpu, u8 operation, u32 ea, u32 cia) {
    (void)cpu;
    (void)operation;
    (void)ea;
    (void)cia;
}

void host_instruction_fallback(CPUState* cpu, u32 raw, u32 cia) {
    (void)raw;
    cpu->pc = cia + 4;
}


u64 host_mmio_read(CPUState* cpu, u32 ea, u8 size) {
    (void)cpu;
    (void)size;
    // CP Status register (0xCC000000): report FIFO empty / idle to prevent hangs
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
        // Increment sample counter so AI sync loops (loop_8002FFE4, loop_80030028)
        // detect audio clock progression and exit immediately
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

void host_mmio_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
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

void restore_canonical_audio_rodata(CPUState* cpu) {
    if (!cpu || !cpu->ram) return;
    const u32 ram_off = 0x00063180u;
    if (ram_off + sizeof(s_canonical_audio_rodata) <= cpu->ram_size) {
        std::memcpy(cpu->ram + ram_off, s_canonical_audio_rodata, sizeof(s_canonical_audio_rodata));
    }
}

void write_journal_cb(u32 offset, u32 size, void* user) {
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

