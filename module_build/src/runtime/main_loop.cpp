#include "runtime_context.hpp"

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
    const char* memcard_path = "memcardA.raw";
    const char* dol_path = "input/extracted/sys/main.dol";
    const char* rel_path = "input/extracted/files/shared/mgso.rel";
    u32 max_frames = 0;
    double cli_max_seconds = 0.0;
    bool cli_vsync = false;
    bool cli_novsync = false;
    bool cli_turbo = false;
    bool cli_verbose = false;
    bool cli_audit_dolphin_shaders = false;
    bool cli_auto_skip = false;
    bool cli_no_area01a_skip = false;
    bool cli_test_move = false;
    bool cli_test_codec = false;
    bool cli_legacy_renderer = false;
    u32 cli_dump_every = 0;

    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = static_cast<u32>(std::strtoul(argv[++i], nullptr, 10));
        } else if ((std::strcmp(argv[i], "--max-seconds") == 0 || std::strcmp(argv[i], "--timeout") == 0) && i + 1 < argc) {
            cli_max_seconds = std::strtod(argv[++i], nullptr);
        } else if (std::strcmp(argv[i], "--dll") == 0 && i + 1 < argc) {
            dll_path = argv[++i];
        } else if (std::strcmp(argv[i], "--memcard") == 0 && i + 1 < argc) {
            memcard_path = argv[++i];
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
        } else if (std::strcmp(argv[i], "--no-area01a-skip") == 0) {
            cli_no_area01a_skip = true;
        } else if (std::strcmp(argv[i], "--test-move") == 0) {
            cli_test_move = true;
        } else if (std::strcmp(argv[i], "--test-codec") == 0) {
            cli_test_codec = true;
        } else if (std::strcmp(argv[i], "--legacy-renderer") == 0) {
            cli_legacy_renderer = true;
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

    // 1. Initialize ModernGekko graphics subsystem (AddressSpace + GxStateBackend + GxCommandProcessor + DolphinShaderCompiler)
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

    // Zero-copy share MEM1 (24 MB) and VM/MEM2 (16 MB, mgso.rel) between CPUState and ModernGekko::AddressSpace
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
    rctx.max_seconds = cli_max_seconds;
    rctx.verbose_logging = cli_verbose;
    rctx.audit_dolphin_shaders = cli_audit_dolphin_shaders;
    rctx.auto_skip = cli_auto_skip;
    rctx.no_area01a_skip = cli_no_area01a_skip;
    rctx.test_move = cli_test_move;
    rctx.test_codec = cli_test_codec;
    rctx.dump_frame_interval = cli_dump_every;
    render_device.SetAuditDolphinShaders(cli_audit_dolphin_shaders);
    render_device.SetUseDolphinPipeline(!cli_legacy_renderer);
    std::printf("[GFX] Renderizador activo: %s\n",
                cli_legacy_renderer ? "Legacy TEV (--legacy-renderer)" : "ModernGekko DolphinVideo OpenGL 4.5 Core");
    if (cli_novsync) rctx.vsync_enabled = false;
    if (cli_turbo) {
        rctx.vsync_enabled = false;
        rctx.fps_limiter_enabled = false;
    }

    cpu.external_user_data = &rctx;
    cpu.external_read = host_mmio_read;
    cpu.external_write = host_mmio_write;
    cpu.host_call = host_call_hook;
    g_memcardA.init(memcard_path);
    cpu.spr_read = host_spr_read;
    cpu.spr_write = host_spr_write;
    cpu.cache_control = host_cache_control;
    cpu.instruction_fallback = host_instruction_fallback;
    if (cli_verbose) {
        ppc_set_mem_write_journal(write_journal_cb, &cpu);
    }

#if defined(_WIN32)
    // 2. Create Win32 window + OpenGL context
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
    HGLRC legacy_ctx = wglCreateContext(rctx.hdc);
    wglMakeCurrent(rctx.hdc, legacy_ctx);
    auto wglCreateContextAttribsARB = reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(
        wglGetProcAddress("wglCreateContextAttribsARB"));
    if (wglCreateContextAttribsARB) {
        constexpr int WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
        constexpr int WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
        constexpr int WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;
        constexpr int WGL_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
        const int attribs[] = {
            WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
            WGL_CONTEXT_MINOR_VERSION_ARB, 5,
            WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
            0
        };
        HGLRC core_ctx = wglCreateContextAttribsARB(rctx.hdc, nullptr, attribs);
        if (core_ctx) {
            wglMakeCurrent(rctx.hdc, core_ctx);
            wglDeleteContext(legacy_ctx);
            rctx.hglrc = core_ctx;
        } else {
            rctx.hglrc = legacy_ctx;
        }
    } else {
        rctx.hglrc = legacy_ctx;
    }

    std::printf("[GFX] Contexto OpenGL activo: %s | %s | %s\n",
                reinterpret_cast<const char*>(glGetString(GL_VERSION)),
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

    // Disable wglSwapInterval=1 by default because under Windows DWM it quantizes frames to 20/30 FPS even at 60 Hz;
    // the 59.94 Hz QPC accumulator limiter maintains exact pacing without --novsync (HW VSync remains available via --vsync or F8).
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

    // Initialize high-resolution timer for frame rate limiter (59.940059 Hz NTSC)
    timeBeginPeriod(1);
    QueryPerformanceFrequency(&rctx.qpc_freq);
    QueryPerformanceCounter(&rctx.last_frame_qpc);
    rctx.target_frame_qpc = rctx.last_frame_qpc;
    rctx.tb_start_qpc = rctx.last_frame_qpc;
    rctx.fps_sample_time = std::chrono::steady_clock::now();
    rctx.fps_sample_frame = 0;

    render_device.InitGlResources();
#endif

    // 3. Smoke test of Dolphin shader compiler (ModernGekko::DolphinVideo) + GX Pipeline
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

    // 4. Initialize GameCube OS Globals (0x80000000..0x800030FF)
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

    // 5. Load main.dol into MEM1
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

    // 6. Load and relocate shared/mgso.rel at 0x7F008000 (VM)
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

    // 7. Run game main loop + OpenGL presentation
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

    rctx.run_start_time = std::chrono::steady_clock::now();

    while (!rctx.window_closed) {
        if (rctx.max_frames > 0 && rctx.frame_count >= rctx.max_frames) {
            std::printf("[OK] Limite de %u fotogramas alcanzado satisfactoriamente.\n", rctx.max_frames);
            break;
        }
        if (rctx.max_seconds > 0.0 && ((total_blocks & 0x3FFu) == 0)) {
            const double elapsed_s = std::chrono::duration<double>(
                std::chrono::steady_clock::now() - rctx.run_start_time).count();
            if (elapsed_s >= rctx.max_seconds) {
                rctx.timed_out = true;
                std::printf("[TIMEOUT] Limite de tiempo %.1fs alcanzado (frame=%u, bloques=%llu). Deteniendo ejecucion.\n",
                            rctx.max_seconds, rctx.frame_count, static_cast<unsigned long long>(total_blocks));
                break;
            }
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
            // If we reach an out-of-table address or null callback, return to caller (LR)
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
    render_device.ShutdownGlResources();
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
    g_memcardA.save_if_dirty();
    rel_free(&rel);
    dol_free(&dol);
    cpu.ram = orig_cpu_ram;
    cpu.mem2 = orig_cpu_mem2;
    cpu_free(&cpu);
    if (rctx.timed_out && rctx.max_frames > 0 && rctx.frame_count < rctx.max_frames) {
        return 2;
    }
    return (rctx.reached_start && rctx.reached_main && rctx.reached_mgso_prolog) ? 0 : 1;
}
