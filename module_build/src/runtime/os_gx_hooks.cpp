#include "runtime_context.hpp"

static constexpr auto kHookedAddrs = std::to_array<u32>({
    0x7F0080ECu, 0x7F008174u, 0x7F008210u, 0x7F00A248u, 0x7F00A430u, 0x7F00A8E0u, 0x7F00A968u, 0x7F017838u,
    0x7F017934u, 0x7F017DC4u, 0x7F017E90u, 0x7F0185C0u, 0x7F01893Cu, 0x7F0FCF70u, 0x7F0FD7BCu, 0x7F0FD818u,
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
    0x8003E570u, 0x8003E8A0u, 0x8003E9E4u, 0x8003ED60u, 0x8003EF5Cu, 0x8003F19Cu, 0x8003F424u, 0x8003F668u, 0x8003F6B0u,
    0x8003FA24u, 0x80042974u, 0x800429C0u, 0x80043744u, 0x80046420u, 0x80046538u, 0x80046600u, 0x800468B8u,
    0x80046A30u, 0x80046C74u, 0x80046D04u, 0x8004B18Cu, 0x8004B8A8u, 0x8004C2F0u, 0x8004C388u, 0x8004DBACu,
    0x8004F270u, 0x8004F318u, 0x800501FCu, 0x80050B54u, 0x80051AA0u, 0x80051AF0u, 0x80051BB0u, 0x80051D14u,
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


const u64* get_host_hook_bloom_data() {
    return kHostHookBloom.data();
}

bool host_call_hook(CPUState* cpu, u32 address) {
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
        if (rctx->verbose_logging) {
            std::printf("[TRACE-F318] #%d called from LR=0x%08X SP=0x%08X r3=0x%08X r4=0x%08X\n",
                        f318_cnt, cpu->lr, cpu->gpr[1], cpu->gpr[3], cpu->gpr[4]);
            std::printf("  fmt_spd='%s' (0x%08X) fmt_spt='%s' (0x%08X) fmt_slash='%s' (0x%08X) shared='%s' (0x%08X)\n",
                        read_guest_cstring(cpu, 0x8006319Cu).c_str(), 0x8006319Cu,
                        read_guest_cstring(cpu, 0x800631B8u).c_str(), 0x800631B8u,
                        read_guest_cstring(cpu, 0x8006318Cu).c_str(), 0x8006318Cu,
                        read_guest_cstring(cpu, 0x80063194u).c_str(), 0x80063194u);
        }
        return false;
    }

    if (address == 0x8004F270u) {
        restore_canonical_audio_rodata(cpu);
        if (rctx->verbose_logging) {
            std::string pstr = read_guest_cstring(cpu, cpu->gpr[3]);
            std::printf("[TRACE-F270] called from LR=0x%08X SP=0x%08X r3=0x%08X str='%s' r4=%u\n",
                        cpu->lr, cpu->gpr[1], cpu->gpr[3], pstr.c_str(), cpu->gpr[4]);
        }
        return false;
    }

    if (address == 0x8001258Cu) {
        // sprintf(char* dst [r3], const char* fmt [r4], ...)
        if (cpu->lr == 0x8004F3BCu || cpu->lr == 0x8004F414u || cpu->lr == 0x8004F2C4u) {
            restore_canonical_audio_rodata(cpu);
        }
        if (rctx->verbose_logging) {
            static int spr_cnt = 0;
            ++spr_cnt;
            std::string fmt = read_guest_cstring(cpu, cpu->gpr[4]);
            if (cpu->lr == 0x8004F3BCu || cpu->lr == 0x8004F414u || cpu->lr == 0x8004F2C4u || spr_cnt <= 10) {
                std::printf("[TRACE-SPRINTF] #%d dst=0x%08X fmt='%s' r5=0x%08X r6=0x%08X LR=0x%08X SP=0x%08X\n",
                            spr_cnt, cpu->gpr[3], fmt.c_str(), cpu->gpr[5], cpu->gpr[6], cpu->lr, cpu->gpr[1]);
            }
        }
        return false;
    }

    // 1. Ultra-fast native memory operations (memset / __fill_mem / memcpy)
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
        // Diagnostic: MTXTranspose (0x80025B84): r3=src, r4=dst
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
        // Diagnostic hook: GXSetProjection(const float mtx[4][4] [r3], GXProjectionType type [r4])
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
        // Diagnostic hook: GXLoadPosMtxImm(const float mtx[3][4] [r3], u32 id [r4])
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
                cpu->fpr[3] > 4096.0 || cpu->fpr[4] > 4096.0 ||
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
        // GXCopyDisp(void* dest [r3], GXBool clear [r4]): record target XFB address and let it write to WGPIPE
        rctx->vi_xfb_address = cpu->gpr[3];
    } else if (address == 0x8004B8A8u) {
        // Post-GXCopyDisp GP FIFO synchronization: the GX processor in RecompCore already consumed WGPIPE synchronously
        if (rctx->gx_cp) {
            for (int i = 0; i < 8; ++i) {
                rctx->gx_cp->Write(0, 4);
            }
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8004C2F0u) {
        // MGS graphics engine VBlank wait -> present OpenGL frame
#if defined(_WIN32)
        present_frame(cpu, rctx);
#endif
        if (mem_read16(cpu, 0x801EC6F0u + 712u) == 1u ||
            (rctx->reached_mgso_loop && mem_read16(cpu, 0x7F4A3A90u + 712u) == 1u)) {
            cpu->pc = 0x80023F34u; // OSYieldThread() if MovieThread or ArchiveThread is READY
            return true;
        }
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8004C388u) {
        cpu->pc = cpu->lr;
        return true;
    }

    // 2. Execution milestones and OSReport console
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


    if (HookResult hr = handle_dvd_card_hooks(cpu, rctx, address); hr != HookResult::Continue) {
        return hr == HookResult::ReturnTrue;
    }
    if (HookResult hr = handle_codec_and_mgso_hooks(cpu, rctx, address); hr != HookResult::Continue) {
        return hr == HookResult::ReturnTrue;
    }
    if (HookResult hr = handle_audio_vorbis_hooks(cpu, rctx, address); hr != HookResult::Continue) {
        return hr == HookResult::ReturnTrue;
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
    // Immediate no-op on coherent x86_64 architecture to avoid millions of dcbf/icbi iterations
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

    // 5. Video Interface (VI) and GX synchronization
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
                // Unblock the async audio/streaming thread wait (0x8027DD98),
                // free the Vorbis pool (tag 2) + scratch arena, and clear pending audio request slots.
                cleanup_stale_vorbis_decoder(cpu, rctx);
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
            cpu->pc = 0x80023F34u; // OSYieldThread() if MovieThread or ArchiveThread is READY
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

    // If we are inside the MGS main frame loop (0x7F3C7CC8), present frame at the end of each tick
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
