#include "runtime_context.hpp"

HookResult handle_codec_and_mgso_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address) {
    // 4. Transition main.dol -> shared/mgso.rel (pre-relocated at 0x7F008000)
    if (address == 0x800066F8u) {
        std::string name = read_guest_cstring(cpu, cpu->gpr[3]);
        u32 load_addr = cpu->gpr[4];
        if (load_addr == 0x7F008000u) {
            std::printf("[REL] Enlace estatico activo para \"%s\" en 0x%08X (entry=0x7F0080EC)\n",
                        name.c_str(), load_addr);
            // Write _prolog (0x7F0080EC) at offset +52 (0x34) and fixSize at +72 (0x48)
            mem_write32(cpu, 0x7F008000u + 0x34u, 0x7F0080ECu);
            mem_write32(cpu, 0x7F008000u + 0x48u, 0x7F45CA40u);
            cpu->gpr[3] = 0x7F008000u;
            cpu->pc = cpu->lr;
            return HookResult::ReturnTrue;
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
            cpu->host_call_bloom = get_host_hook_bloom_data();
        }
        std::printf("[MGSO] Bucle principal de fotogramas GV/DG (0x7F008204 -> 0x7F3C7CC8) ACTIVO!\n");
    } else if (address == 0x7F3C7C48u) {
        std::printf("[ACTOR] Actor_Init_Buckets llamado! (LR=0x%08X SP=0x%08X)\n", cpu->lr, cpu->gpr[1]);
    } else if (address == 0x7F3C7D9Cu) {
        std::printf("[ACTOR] Actor_Add(bucket=%d, actor=0x%08X, name=0x%08X) LR=0x%08X\n",
                    cpu->gpr[3], cpu->gpr[4], cpu->gpr[5], cpu->lr);
    } else if (address == 0x7F3CC15Cu) {
        // Initialization and safe sizing of Heap 2 in MEM2/VM (fn_1_3C3F94)
        // The original code computed top=0x7F7CA000 and bottom=0x7F4AC800 (3.11 MB).
        // However, mgso.rel .bss extends up to 0x7F500110, while Heap 4 grows upward
        // from the same split (~0x2B2000 bytes). Place the split at 0x7FB40000:
        //   - Heap 2 (downward): 0x7FB40000 -> 0x7F508000 (~6.52 MB free above .bss)
        //   - Heap 4 (upward):   0x7FB40000 -> 0x7FE00000+ (~4.86 MB before 0x80000000 MEM1)
        u32 base = cpu->gpr[3]; // 0x7F000000
        mem_write32(cpu, 0x7F4FAA7Cu, base);              // [0x7F4FAA7C] = 0x7F000000 (MEM2 base)
        mem_write32(cpu, 0x7F4FAA6Cu, base + 0x8000u);     // [0x7F4FAA6C] = 0x7F008000 (mgso.rel base)
        mem_write32(cpu, 0x7F4FAA78u, 0x7F508000u);        // [0x7F4FAA78] = 0x7F508000 (safe lower bound above .bss)
        mem_write32(cpu, 0x7F4FAA74u, 0x7FB40000u);        // [0x7F4FAA74] = 0x7FB40000 (Heap 2 initial top / Heap 4 base)
        mem_write32(cpu, 0x7F4FAA70u, 0x7FB40000u);        // [0x7F4FAA70] = 0x7FB40000 (Heap 2 max top)
        mem_write32(cpu, 0x7F4FEAACu, 0x7FB40000u);        // [0x7F4FEAAC] = 0x7FB40000 (Heap 2 current pointer)
        mem_write32(cpu, 0x7F4FEAA8u, 0x7FB40000u);        // [0x7F4FEAA8] = 0x7FB40000 (Heap 2 mark)
        std::printf("[HEAP2] Split seguro MEM2: top=0x7FB40000, bottom=0x7F508000 (Heap2=6.5 MB, Heap4=4.8 MB antes de MEM1)\n");

        // Execute epilogue of fn_1_3C3F94 (0x7F3CC080): restore r29-r31, lr, and pop stack
        u32 sp = cpu->gpr[1];
        cpu->gpr[29] = mem_read32(cpu, sp + 20u);
        cpu->gpr[30] = mem_read32(cpu, sp + 24u);
        cpu->gpr[31] = mem_read32(cpu, sp + 28u);
        cpu->lr = mem_read32(cpu, sp + 36u);
        cpu->gpr[1] = sp + 32u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnFalse; // allow native routine 0x7F3CC1EC to allocate normally
    }
    if (rctx->verbose_logging &&
        (address == 0x7F00A8E0u || address == 0x7F00A968u || address == 0x7F0FCF70u ||
         address == 0x7F0FD7BCu || address == 0x7F0FE400u || address == 0x7F0FD818u ||
         address == 0x8000D478u)) {
        std::printf("[MGS-STEP] call 0x%08X (LR=0x%08X SP=0x%08X r3=0x%08X)\n", address, cpu->lr, cpu->gpr[1], cpu->gpr[3]);
    }
    // Camera / GXLoadPosMtxImm call diagnostic hook
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
            // In interactive mode: let the native routine check the controller to allow START or full video playback
            return HookResult::ReturnFalse;
        }

        if (f2d6764_calls <= 10) {
            cpu->gpr[3] = 0u;
            cpu->pc = cpu->lr;
            return HookResult::ReturnTrue;
        }

        std::printf("[MOVIE-SKIP-HOOK] fn_1_2D6764 #%d: auto_skip activo, transicionando movie -> menu (auto_skip=%d)\n",
                    f2d6764_calls, rctx->auto_skip ? 1 : 0);
        mem_write32(cpu, cpu->gpr[3] + 332u, 1u);
        return HookResult::ReturnFalse;
    }
    // Inspect matrix creation and setup in fn_1_2D57D8 and fn_1_2D58F8
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
    // Hook on the camera GXLoadPosMtxImm caller
    // Hook on functions 0x7F2DD7EC and 0x7F2DD89C
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
            // Circular list or self-referencing element: exit search
            same_r4_count = 0u;
            cpu->gpr[4] = 0u;
            cpu->pc = 0x7F3C8F94u;
            return HookResult::ReturnTrue;
        }
    }
    if (address == 0x7F0FEAC4u) {
        // Non-destructive guard for ring-buffer scan (0x7F0FEA64..0x7F0FEB50):
        // only break if the header shows size 0 (!= 255) or if stalled >64 yields in the same frame/LR/pool.
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
            return HookResult::ReturnTrue;
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x7F2DEA5Cu) {
        static int f2d6970_calls = 0;
        if (rctx->verbose_logging && (++f2d6970_calls <= 10 || f2d6970_calls % 100 == 0)) {
            u32 state = mem_read32(cpu, cpu->gpr[3] + 0x134u);
            std::printf("[MOVIE-STREAM-ACTOR] fn_1_2D6970 #%d: this=0x%08X state=%u LR=0x%08X\n",
                        f2d6970_calls, cpu->gpr[3], state, cpu->lr);
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x7F017838u) {
        rctx->active_stream_actor = cpu->gpr[3];
        // Clear audio DMA pre-roll wait flag so stream actor broadcasts PLAY (1) and STOP/SKIP (0) messages natively
        mem_write32(cpu, 0x7F4A4B40u, 0u);
    }
    if (address == 0x7F017934u) {
        rctx->active_stream_actor = cpu->gpr[3];
        // 0x7F017934 is StreamActor's normal "file read done, wait for child actors (SubtitleActor / AudioChildActor / DemoActor)
        // to finish playback" state. Never force child_ptr=0 here, or long unskipped Codec calls and cutscenes (>120f)
        // lose their ring-buffer mid-playback and freeze on [RING-GUARD] blk=0x00000000.
        if (rctx->no_area01a_skip && (rctx->frame_count % 500u) == 0u) {
            const u32 st = cpu->gpr[3];
            const u32 child = mem_read32(cpu, st + 32u);
            const u32 child_act = (child >= 0x80000000u && child < 0x81800000u) ? mem_read32(cpu, child + 4u) : 0u;
            const u32 child_sub_t = (child_act == 0x7F191FB4u) ? mem_read32(cpu, child + 72u) : 0u;
            const u32 child_sub_entry = (child_act == 0x7F191FB4u) ? mem_read32(cpu, child + 60u) : 0u;
            const u32 child_sub_end = (child_sub_entry >= 0x80000000u && child_sub_entry < 0x81800000u) ? mem_read32(cpu, child_sub_entry + 4u) : 0u;
            std::printf("[STREAM-WAIT] f=%u st=0x%08X child=0x%08X act=0x%08X clk=%u flg=0x%X 8027DD98=%u 7F4A4590=%u sub_t=%u sub_end=%u\n",
                        rctx->frame_count, st, child, child_act,
                        mem_read32(cpu, st + 56u), mem_read32(cpu, st + 88u),
                        mem_read32(cpu, 0x8027DD98u), mem_read32(cpu, 0x7F4A4590u),
                        child_sub_t, child_sub_end);
        }
        return HookResult::ReturnFalse;
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
                        release_stream_slot_for_voice(cpu, rctx, slot);
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
        return HookResult::ReturnFalse;
    }
    if (address == 0x7F01893Cu) {
        // DSPAddTask (0x80038190) is HLE without real ADPCM packet consumption: simulate drain at
        // real bitrate (~18.3 KB/s Codec mono 16kHz / ~36.6 KB/s stereo) so the ring buffer is not emptied instantly.
        const u32 actor = cpu->gpr[3];
        if (actor == 0u) {
            return HookResult::ReturnFalse;
        }
        const u32 eof_flag = mem_read32(cpu, actor + 176u);
        const u32 stop_flag = mem_read32(cpu, actor + 180u);
        const u32 queued = mem_read32(cpu, actor + 188u);
        if (actor != rctx->audio_child_actor) {
            rctx->audio_child_actor = actor;
            rctx->audio_child_last_frame = rctx->frame_count;
            rctx->audio_child_last_queued = queued;
            rctx->audio_child_byte_rem = 0.0;
        }
        if (stop_flag != 0u) {
            if (queued != 0u) {
                mem_write32(cpu, actor + 188u, 0u);
            }
            rctx->audio_child_last_queued = 0u;
            rctx->audio_child_byte_rem = 0.0;
            rctx->audio_child_last_frame = rctx->frame_count;
        } else if (queued > 0u && rctx->frame_count > rctx->audio_child_last_frame) {
            if (queued < rctx->audio_child_last_queued) {
                rctx->audio_child_last_queued = queued;
                rctx->audio_child_last_frame = rctx->frame_count;
            } else {
                const u32 df = std::min<u32>(rctx->frame_count - rctx->audio_child_last_frame, 10u);
                // 4-bit GC DSP ADPCM: 16 kHz mono Codec = 9143 B/s (16000*8/14), 32 kHz stereo cutscene = 36571 B/s
                const double bpf = rctx->codec_active ? (9142.86 / 59.940059) : (36571.43 / 59.940059);
                rctx->audio_child_byte_rem += bpf * static_cast<double>(df);
                const u32 drain = static_cast<u32>(rctx->audio_child_byte_rem);
                rctx->audio_child_byte_rem -= static_cast<double>(drain);
                const u32 new_q = (drain >= queued) ? 0u : (queued - drain);
                mem_write32(cpu, actor + 188u, new_q);
                rctx->audio_child_last_queued = new_q;
                rctx->audio_child_last_frame = rctx->frame_count;
            }
        } else if (eof_flag != 0u && queued == 0u && stop_flag == 0u) {
            // Do not retire the audio voice while a sibling SubtitleActor (0x7F191FB4) on the active
            // StreamActor is still displaying subtitles — otherwise 0x8027DD98 clears to 0 and
            // SubtitleActor falls back to StreamActor+56 (which is 0 while Codec pauses GV_PauseLevel).
            const u32 st = rctx->active_stream_actor;
            if (st >= 0x80000000u && st < 0x81800000u) {
                const u32 st_act = mem_read32(cpu, st + 4u);
                if (st_act == 0x7F017934u || st_act == 0x7F017838u) {
                    const u32 head = mem_read32(cpu, st + 32u);
                    bool subtitle_alive = false;
                    auto check_sub = [&](u32 node) {
                        if (node >= 0x80000000u && node < 0x81800000u && node != actor) {
                            if (mem_read32(cpu, node + 4u) == 0x7F191FB4u) {
                                subtitle_alive = true;
                            }
                        }
                    };
                    check_sub(head);
                    if (!subtitle_alive && head >= 0x80000000u && head < 0x81800000u) {
                        for (u32 off = 0u; off <= 44u; off += 4u) {
                            check_sub(mem_read32(cpu, head + off));
                        }
                    }
                    if (subtitle_alive) {
                        return HookResult::ReturnFalse;
                    }
                }
            }
            // All stream packets were fed (eof_flag=1) and the bitrate-paced buffer drained to 0.
            // Because DSP playback is HLE-bypassed, the DSP EOF message (type 4 in 0x7F0186EC) never arrives;
            // synthesize natural EOF completion by setting stop_flag (+180=1) and switching to AudioChild_StoppingAct (0x7F01868C).
            const u32 vid = mem_read32(cpu, actor + 68u);
            if (vid != 0u) {
                for (u32 i = 0; i < 64u; ++i) {
                    const u32 slot = 0x8020E5C0u + i * 212u;
                    if (mem_read8(cpu, slot + 208u) == 1u && mem_read32(cpu, slot) == vid) {
                        release_stream_slot_for_voice(cpu, rctx, slot);
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
            mem_write32(cpu, actor + 180u, 1u);
            call_guest_fn1(cpu, rctx, 0x7F01868Cu, actor);
            if (rctx->test_codec || rctx->verbose_logging || rctx->no_area01a_skip) {
                std::printf("[AUDIO-HLE] Natural EOF completed for AudioChild=0x%08X f=%u\n",
                            actor, rctx->frame_count);
            }
            cpu->pc = cpu->lr;
            return HookResult::ReturnTrue;
        }
        return HookResult::ReturnFalse;
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
        return HookResult::ReturnFalse;
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
        return HookResult::ReturnFalse;
    }
    if (address == 0x7F2DDE00u) {
        mem_write32(cpu, 0x7F4A4B40u, 0u);
        if (rctx->verbose_logging) {
            u32 state = mem_read32(cpu, cpu->gpr[3] + 0x44u);
            static int f2d5d14_calls = 0;
            if (++f2d5d14_calls <= 10 || f2d5d14_calls % 100 == 0) {
                std::printf("[MOVIE-DECODE-ACTOR] fn_1_2D5D14 #%d: this=0x%08X state=%u LR=0x%08X\n",
                            f2d5d14_calls, cpu->gpr[3], state, cpu->lr);
            }
        }
        return HookResult::ReturnFalse;
    }
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
        return HookResult::ReturnFalse;
    }
    if (address == 0x7F017E90u) {
        if (mem_read32(cpu, 0x8027DD98u) == 0u) {
            rctx->audio_stream_active = false;
            rctx->audio_stream_wait_polls = 0u;
            rctx->audio_stream_last_id = 0u;
            rctx->audio_stream_accum_ms = 0.0;
            rctx->audio_stream_last_ms = 0u;
            retire_stale_stream_voices(cpu, rctx);
        }
        if (rctx->test_codec || rctx->verbose_logging) {
            std::printf("[CODEC-CLOSE-VOX] 0x7F017E90 f=%u r3=0x%08X v69e4=0x%08X LR=0x%08X\n",
                        rctx->frame_count, cpu->gpr[3], mem_read32(cpu, 0x8027DD98u), cpu->lr);
        }
        return HookResult::ReturnFalse;
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
        return HookResult::ReturnFalse;
    }
    return HookResult::Continue;
}
