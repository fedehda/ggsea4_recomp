#include "runtime_context.hpp"

void call_guest_fn1(CPUState* cpu, GfxRuntimeContext* rctx, u32 fn_addr, u32 arg0) {
    if (!rctx->module_call) return;
    const u32 orig_gpr0 = cpu->gpr[0];
    const u32 orig_sp = cpu->gpr[1];
    u32 orig_gpr3_12[10];
    for (int r = 0; r < 10; ++r) orig_gpr3_12[r] = cpu->gpr[3 + r];
    const u32 orig_lr = cpu->lr;
    const u32 orig_ctr = cpu->ctr;
    const u32 orig_cr = cpu->cr;
    const u32 orig_xer = cpu->xer;
    const u32 orig_pc = cpu->pc;
    const s64 orig_dc = cpu->downcount;

    const u32 call_sp = (orig_sp - 32u) & ~15u;
    mem_write32(cpu, call_sp, orig_sp);
    cpu->gpr[1] = call_sp;
    cpu->gpr[3] = arg0;
    cpu->lr = 0xFFFFFFF0u;
    cpu->pc = fn_addr;
    for (int iter = 0; iter < 50000 && cpu->pc != 0xFFFFFFF0u; ++iter) {
        cpu->downcount = 100000;
        if (!rctx->module_call(cpu, cpu->pc)) {
            if (cpu->lr != 0u && cpu->pc != cpu->lr) {
                cpu->pc = cpu->lr;
                continue;
            }
            break;
        }
    }

    cpu->gpr[0] = orig_gpr0;
    cpu->gpr[1] = orig_sp;
    for (int r = 0; r < 10; ++r) cpu->gpr[3 + r] = orig_gpr3_12[r];
    cpu->lr = orig_lr;
    cpu->ctr = orig_ctr;
    cpu->cr = orig_cr;
    cpu->xer = orig_xer;
    cpu->pc = orig_pc;
    cpu->downcount = orig_dc;
}
static void reset_vorbis_scratch_arena(CPUState* cpu) {
    // Vorbis bump-allocator state at 0x8027B900 (+8=base, +12=size, +16=cursor).
    // Cancelling VorbisThread (0x8027BA80) mid-decode skips 0x8005604C (scratch reset),
    // leaking cursor until 0x80055FF0 returns NULL -> memset(0, 0, 4096) & mdct spin/freeze.
    const u32 scratch_base = mem_read32(cpu, 0x8027B908u);
    if (scratch_base != 0u) {
        mem_write32(cpu, 0x8027B910u, scratch_base);
    }
}

void cleanup_stale_vorbis_decoder(CPUState* cpu, GfxRuntimeContext* rctx) {
    if (rctx->in_audio_cleanup || mem_read32(cpu, 0x800000E4u) == 0x8027BA80u) {
        return;
    }
    rctx->in_audio_cleanup = true;
    if (mem_read16(cpu, 0x8027BA80u + 712u) != 0u) {
        call_guest_fn1(cpu, rctx, 0x8002423Cu, 0x8027BA80u); // OSCancelThread(vorbis_thread)
    }
    reset_vorbis_scratch_arena(cpu);
    for (u32 k = 0; k < 8u; ++k) {
        const u32 dslot = 0x8027B820u + k * 28u;
        if (mem_read8(cpu, dslot + 24u) != 0u) {
            const u32 vctx = mem_read32(cpu, dslot + 16u);
            if (vctx != 0u) {
                call_guest_fn1(cpu, rctx, 0x80056B4Cu, vctx); // DestroyOggStream
                mem_write32(cpu, dslot + 16u, 0u);
            }
            mem_write8(cpu, dslot + 24u, 0u);
        }
    }
    for (u32 j = 0; j < 8u; ++j) {
        const u32 sslot = 0x8021A4B0u + j * 268u;
        const u32 dec_ptr = mem_read32(cpu, sslot + 16u);
        if (dec_ptr >= 0x8027B820u && dec_ptr < 0x8027B820u + 8u * 28u) {
            mem_write32(cpu, sslot + 16u, 0u);
        }
    }
    call_guest_fn1(cpu, rctx, 0x8005608Cu, 2u); // FreeVorbisPoolTag(2) unconditionally to prevent pool leaks
    mem_write32(cpu, 0x8027DD98u, 0u);
    rctx->in_audio_cleanup = false;
}
void release_stream_slot_for_voice(CPUState* cpu, GfxRuntimeContext* rctx, u32 voice_slot) {
    if (rctx->in_audio_cleanup) return;
    const u32 sid = mem_read32(cpu, voice_slot + 4u);
    if (sid == 0u) return;
    for (u32 j = 0; j < 8u; ++j) {
        const u32 sslot = 0x8021A4B0u + j * 268u;
        if (mem_read32(cpu, sslot) == sid && mem_read32(cpu, sslot + 220u) != 0u) {
            const u32 partner = mem_read32(cpu, sslot + 24u);
            const bool partner_valid = (partner >= 0x8021A4B0u &&
                                        partner < 0x8021A4B0u + 8u * 268u &&
                                        ((partner - 0x8021A4B0u) % 268u) == 0u);
            rctx->in_audio_cleanup = true;
            if (mem_read32(cpu, 0x800000E4u) != 0x8027BA80u) {
                const bool uses_vorbis =
                    (mem_read32(cpu, sslot + 8u) == 3u || mem_read32(cpu, sslot + 16u) != 0u) ||
                    (partner_valid && (mem_read32(cpu, partner + 8u) == 3u || mem_read32(cpu, partner + 16u) != 0u));
                if (uses_vorbis && mem_read16(cpu, 0x8027BA80u + 712u) != 0u) {
                    call_guest_fn1(cpu, rctx, 0x8002423Cu, 0x8027BA80u);
                    reset_vorbis_scratch_arena(cpu);
                }
                call_guest_fn1(cpu, rctx, 0x80052F94u, sslot);
                if (partner_valid && mem_read32(cpu, partner + 220u) != 0u) {
                    call_guest_fn1(cpu, rctx, 0x80052F94u, partner);
                }
            }
            mem_write32(cpu, sslot + 220u, 0u);
            mem_write32(cpu, sslot + 224u, 0u);
            mem_write32(cpu, sslot, 0u);
            if (partner_valid) {
                mem_write32(cpu, partner + 220u, 0u);
                mem_write32(cpu, partner + 224u, 0u);
                mem_write32(cpu, partner, 0u);
            }
            rctx->in_audio_cleanup = false;
            break;
        }
    }
}

void sync_hle_voices(CPUState* cpu, GfxRuntimeContext* rctx) {
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
}
u32 retire_stale_stream_voices(CPUState* cpu, GfxRuntimeContext* rctx) {
    u32 retired = 0u;
    for (u32 i = 0; i < 64u; ++i) {
        const u32 slot = 0x8020E5C0u + i * 212u;
        const u8 active = mem_read8(cpu, slot + 208u);
        const u32 flags = mem_read32(cpu, slot + 176u);
        if (active == 1u && (flags & 0x82u) == 0x82u) {
            release_stream_slot_for_voice(cpu, rctx, slot);
            mem_write8(cpu, slot + 208u, 0u);
            mem_write32(cpu, slot + 176u, flags & ~0x82u);
            rctx->voice_start_frame[i] = 0u;
            rctx->voice_last_id[i] = 0u;
            rctx->voice_stop_req_frame[i] = 0u;
            ++retired;
        }
    }
    return retired;
}

HookResult handle_audio_vorbis_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address) {
    if (address == 0x800569F4u) {
        cleanup_stale_vorbis_decoder(cpu, rctx);
        rctx->audio_stream_active = true;
        rctx->audio_stream_start_frame = rctx->frame_count;
        QueryPerformanceCounter(&rctx->audio_stream_last_qpc);
        rctx->audio_stream_accum_ms = 0.0;
        rctx->audio_stream_last_ms = 0u;
        rctx->audio_stream_last_id = 0u;
        rctx->audio_stream_wait_polls = 0u;
        rctx->voice_idle_polls = 0u;
        if (rctx->test_codec || rctx->verbose_logging || rctx->no_area01a_skip) {
            std::printf("[AUDIO-HLE] 0x800569F4 START f=%u r3=0x%08X LR=0x%08X\n",
                        rctx->frame_count, cpu->gpr[3], cpu->lr);
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x800569D8u || address == 0x80056BDCu) {
        rctx->audio_stream_wait_polls = 0u;
        if (address == 0x80056BDCu || cpu->gpr[3] == 0u) {
            if (rctx->no_area01a_skip) {
                std::printf("[AUDIO-HLE] 0x%08X STOP f=%u r3=0x%08X last_ms=%u LR=0x%08X\n",
                            address, rctx->frame_count, cpu->gpr[3], rctx->audio_stream_last_ms, cpu->lr);
            }
            rctx->audio_stream_active = false;
            rctx->audio_stream_last_id = 0u;
            rctx->audio_stream_accum_ms = 0.0;
            rctx->audio_stream_last_ms = 0u;
            if (!rctx->in_audio_cleanup) {
                retire_stale_stream_voices(cpu, rctx);
            }
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x80054EC8u) {
        if (cpu->lr == 0x7F198028u && cpu->gpr[31] >= 10u) {
            static u32 s_last_unblock_frame = 0u;
            retire_stale_stream_voices(cpu, rctx);
            if (rctx->frame_count != s_last_unblock_frame) {
                s_last_unblock_frame = rctx->frame_count;
                std::printf("[AUDIO-HLE] Unblocking 0x80054EC8 at stage-transition barrier LR=0x7F198028 r31=%u f=%u\n",
                            cpu->gpr[31], rctx->frame_count);
            }
            cpu->gpr[3] = 0u;
            cpu->pc = cpu->lr;
            return HookResult::ReturnTrue;
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x800569E4u) {
        if (mem_read32(cpu, 0x8027DD98u) != 0u) {
            // Wait-for-stream-idle barriers (0x7F18F124 stream opener / 0x7F198034 stage transition)
            // must not deadlock forever when DSP ADPCM consumption is HLE-bypassed.
            if (cpu->lr == 0x7F18F124u || cpu->lr == 0x7F198034u) {
                if (++rctx->audio_stream_wait_polls >= 4u) {
                    cleanup_stale_vorbis_decoder(cpu, rctx);
                    mem_write32(cpu, 0x8027DD98u, 0u);
                    rctx->audio_stream_active = false;
                    rctx->audio_stream_last_id = 0u;
                    rctx->audio_stream_accum_ms = 0.0;
                    rctx->audio_stream_last_ms = 0u;
                    rctx->audio_stream_wait_polls = 0u;
                    retire_stale_stream_voices(cpu, rctx);
                    if (rctx->test_codec || rctx->verbose_logging) {
                        std::printf("[AUDIO-HLE] Cleared 0x8027DD98 at wait barrier LR=0x%08X f=%u\n",
                                    cpu->lr, rctx->frame_count);
                    }
                }
            }
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x800501FCu || (address == 0x80050B54u && cpu->gpr[4] == 0u)) {
        sync_hle_voices(cpu, rctx);
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
        return HookResult::ReturnFalse;
    }
    if (address == 0x80051D14u) {
        sync_hle_voices(cpu, rctx);
        bool any_stream_busy = false;
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            if (mem_read8(cpu, slot + 208u) == 1u && (mem_read32(cpu, slot + 176u) & 0x82u) == 0x82u) {
                any_stream_busy = true;
                break;
            }
        }
        if (any_stream_busy) {
            if (!rctx->audio_stream_active || mem_read32(cpu, 0x8027DD98u) == 0u || ++rctx->voice_idle_polls >= 180u) {
                const u32 retired = retire_stale_stream_voices(cpu, rctx);
                rctx->voice_idle_polls = 0u;
                if (rctx->test_codec || rctx->verbose_logging) {
                    std::printf("[AUDIO-HLE] 0x80051D14 retired %u stream voices f=%u LR=0x%08X\n",
                                retired, rctx->frame_count, cpu->lr);
                }
                cpu->gpr[3] = 1u;
                cpu->pc = cpu->lr;
                return HookResult::ReturnTrue;
            }
        } else {
            rctx->voice_idle_polls = 0u;
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x80051BB0u) {
        sync_hle_voices(cpu, rctx);
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
                const bool is_stream = (flags & 0x80u) != 0u;
                const bool stop_expired = (rctx->voice_stop_req_frame[i] > 0u &&
                                           rctx->frame_count >= rctx->voice_stop_req_frame[i] + 4u);
                const bool sfx_expired = (!is_stream &&
                                          rctx->voice_start_frame[i] > 0u &&
                                          rctx->frame_count >= rctx->voice_start_frame[i] + 20u);
                const bool stale_poll_expired =
                    (!is_stream || (!rctx->audio_stream_active && mem_read32(cpu, 0x8027DD98u) == 0u)) &&
                    (rctx->voice_poll_same_count >= 16u);
                if (stop_expired || sfx_expired || stale_poll_expired) {
                    release_stream_slot_for_voice(cpu, rctx, slot);
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
            return HookResult::ReturnTrue;
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x80051AA0u) {
        const u32 vid = cpu->gpr[3];
        if (vid != rctx->stream_ready_poll_vid ||
            rctx->frame_count > rctx->stream_ready_poll_last_frame + 10u) {
            rctx->stream_ready_poll_vid = vid;
            rctx->stream_ready_poll_start_frame = rctx->frame_count;
        }
        rctx->stream_ready_poll_last_frame = rctx->frame_count;
        const u32 waited_frames = (rctx->frame_count >= rctx->stream_ready_poll_start_frame)
                                      ? (rctx->frame_count - rctx->stream_ready_poll_start_frame)
                                      : 0u;
        for (u32 i = 0; i < 64u; ++i) {
            const u32 slot = 0x8020E5C0u + i * 212u;
            if (mem_read8(cpu, slot + 208u) == 1u && mem_read32(cpu, slot) == vid) {
                const u32 flags = mem_read32(cpu, slot + 176u);
                if ((flags & 0x81u) == 0x81u) {
                    const u32 sid = mem_read32(cpu, slot + 4u);
                    bool found_sslot = false;
                    if (sid != 0u) {
                        for (u32 j = 0; j < 8u; ++j) {
                            const u32 sslot = 0x8021A4B0u + j * 268u;
                            if (mem_read32(cpu, sslot) == sid && mem_read32(cpu, sslot + 220u) != 0u) {
                                found_sslot = true;
                                const u32 sflags = mem_read32(cpu, sslot + 224u);
                                if ((sflags & 0x20u) == 0u && waited_frames >= 4u) {
                                    mem_write32(cpu, sslot + 224u, sflags | 0x20u);
                                    const u32 partner = mem_read32(cpu, sslot + 24u);
                                    if (partner >= 0x8021A4B0u && partner < 0x8021A4B0u + 8u * 268u &&
                                        ((partner - 0x8021A4B0u) % 268u) == 0u &&
                                        mem_read32(cpu, partner + 220u) != 0u) {
                                        const u32 pflags = mem_read32(cpu, partner + 224u);
                                        mem_write32(cpu, partner + 224u, pflags | 0x20u);
                                    }
                                    if (rctx->test_codec || rctx->verbose_logging) {
                                        std::printf("[AUDIO-HLE] 0x80051AA0 primed stream ready vid=0x%08X sid=0x%08X waited=%uf f=%u LR=0x%08X\n",
                                                    vid, sid, waited_frames, rctx->frame_count, cpu->lr);
                                    }
                                }
                                break;
                            }
                        }
                    }
                    if (!found_sslot && waited_frames >= 8u) {
                        if (rctx->test_codec || rctx->verbose_logging) {
                            std::printf("[AUDIO-HLE] 0x80051AA0 orphan stream fallback=1 vid=0x%08X waited=%uf f=%u LR=0x%08X\n",
                                        vid, waited_frames, rctx->frame_count, cpu->lr);
                        }
                        cpu->gpr[3] = 1u;
                        cpu->pc = cpu->lr;
                        return HookResult::ReturnTrue;
                    }
                }
                break;
            }
        }
        return HookResult::ReturnFalse;
    }
    if (address == 0x80051AF0u) {
        // Keep VP31 movie audio poll native so VP31 uses its exact frame-paced fallback (addi +10).
        if (cpu->lr == 0x7F2DE140u || cpu->lr == 0x7F2DE1D0u) {
            return HookResult::ReturnFalse;
        }
        if (cpu->gpr[4] == 0u && mem_read32(cpu, 0x8027DD98u) != 0u) {
            const u32 stream = cpu->gpr[3];
            if (stream != rctx->audio_stream_last_id) {
                if (rctx->no_area01a_skip) {
                    std::printf("[AUDIO-HLE] 0x80051AF0 NEW_STREAM f=%u old=0x%X -> new=0x%X prev_ms=%u LR=0x%08X\n",
                                rctx->frame_count, rctx->audio_stream_last_id, stream, rctx->audio_stream_last_ms, cpu->lr);
                }
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
            return HookResult::ReturnTrue;
        }
        return HookResult::ReturnFalse;
    }
    return HookResult::Continue;
}
