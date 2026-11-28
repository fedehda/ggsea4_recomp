#include "runtime_context.hpp"

std::vector<FstEntry> g_fst_entries;
std::unordered_map<std::string, s32> g_fst_path_to_entry;
Ggsea4VirtualMemoryCard g_memcardA;

void init_fst_tables(const u8* fst_data, size_t fst_size) {
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


HookResult handle_dvd_card_hooks(CPUState* cpu, GfxRuntimeContext* rctx, u32 address) {
    // 3. HLE DVD filesystem (synchronous and asynchronous reads over input/extracted/files/)
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
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
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
                return HookResult::ReturnTrue;
            }
        }
        std::printf("[DVD-SYNC] Fallo: finfo=0x%08X no encontrado o error de lectura!\n", finfo);
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
                return HookResult::ReturnTrue;
            }
        }
        std::printf("[DVD-ASYNC] Fallo: finfo=0x%08X no encontrado!\n", finfo);
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x800278D8u) {
        // BOOL DVDReadAsync(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6], DVDCallback callback [r7])
        cpu->gpr[8] = 2u;
        return host_call_hook(cpu, 0x8002799Cu) ? HookResult::ReturnTrue : HookResult::ReturnFalse;
    } else if (address == 0x80027BA4u) {
        // s32 DVDRead(DVDFileInfo* fileInfo [r3], void* addr [r4], s32 length [r5], s32 offset [r6])
        cpu->gpr[7] = 2u;
        return host_call_hook(cpu, 0x80027A8Cu) ? HookResult::ReturnTrue : HookResult::ReturnFalse;
    } else if (address == 0x8002A1C0u) {
        // s32 DVDGetCommandBlockStatus(DVDCommandBlock* block [r3])
        u32 block = cpu->gpr[3];
        u32 state = mem_read32(cpu, block + 0x0Cu);
        cpu->gpr[3] = state;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x80027754u) {
        // BOOL DVDClose(DVDFileInfo* fileInfo [r3])
        rctx->open_dvd_files.erase(cpu->gpr[3]);
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8002A0E8u) {
        // BOOL DVDCancel(DVDCommandBlock* block [r3])
        u32 block = cpu->gpr[3];
        mem_write32(cpu, block + 0x0Cu, 10u); // DVD_STATE_CANCELED = 10
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8002FC84u) {
        // AIInit (Dolphin SDK AI): inicializacion de audio interface
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31592u, 1u); // __AI_initialized = 1
        std::printf("[MGS-INIT] AIInit (0x8002FC84) bypass OK! (__AI_initialized=1)\n");
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8002F888u) {
        // AIRegisterDMACallback(AIDCallback callback [r3]) - tracking no intrusivo
        s_ai_dma_cb = cpu->gpr[3];
        std::printf("[MGS-AI] AIRegisterDMACallback(cb=0x%08X)\n", s_ai_dma_cb);
        return HookResult::ReturnFalse;
    } else if (address == 0x8002F8CCu) {
        // AIInitDMA(void* addr [r3], u32 length [r4]) - tracking no intrusivo
        s_ai_dma_addr = cpu->gpr[3];
        s_ai_dma_len = cpu->gpr[4];
        if (rctx->verbose_logging) {
            std::printf("[MGS-AI] AIInitDMA(addr=0x%08X, len=%u)\n", s_ai_dma_addr, s_ai_dma_len);
        }
        return HookResult::ReturnFalse;
    } else if (address == 0x8002F954u) {
        // AIStartDMA(void) - inicia cuenta regresiva DMA de Audio Interface
        s_ai_dma_bytes_left = s_ai_dma_len;
        if (rctx->verbose_logging) {
            std::printf("[MGS-AI] AIStartDMA(addr=0x%08X, len=%u)\n", s_ai_dma_addr, s_ai_dma_len);
        }
        return HookResult::ReturnFalse;
    } else if (address == 0x8002F96Cu) {
        // AISetStreamPlayState / Stream state tracking (run natively)
        s_ai_stream_playing = (cpu->gpr[3] == 1u);
        return HookResult::ReturnFalse;
    } else if (address == 0x8002FF70u) {
        // __AISync (Dolphin SDK AI): audio interface / DAC hardware sync/calibration
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x800380C4u) {
        // DSPInit (Dolphin SDK DSP): DSP processor initialization
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31240u, 1u); // __DSP_init_flag = 1
        std::printf("[MGS-INIT] DSPInit (0x800380C4) bypass OK! (__DSP_init_flag=1)\n");
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x80038190u) {
        // DSPAddTask (Dolphin SDK DSP): register task and mark it as completed
        u32 r13 = cpu->gpr[13];
        mem_write32(cpu, r13 - 31356u, 1u); // DSP sync ready flag
        u32 task = cpu->gpr[3];
        if (task) {
            mem_write32(cpu, task + 0u, 3u); // task->state = DSP_TASK_STATE_DONE
        }
        std::printf("[MGS-INIT] DSPAddTask (0x80038190) task=0x%08X bypass OK!\n", task);
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    }

    // 3B. GameCube Controller Subsystem (fn_80007204 MGS Poller + PADRead + SIGetType)
    if (address == 0x80007204u || address == 0x8002EB2Cu || address == 0x8002E9DCu) {
        // u32 fn_80007204(PADStatus* status [r3]) or PADRead(PADStatus* status [r3])
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

        cpu->gpr[3] = 0x80000000u; // Connected controller mask for port 0
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8001BE84u || address == 0x8001BA38u) {
        // u32 SIGetType(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 0x09000000u : 0u; // SI_TYPE_GC (0x09000000) on port 0
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8002F80Cu || address == 0x8002EE98u) {
        // __PADDisableRecalibration / PADReset
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8002EE2Cu) {
        // PADControlMotor(int chan [r3], u32 command [r4])
        u32 chan = cpu->gpr[3];
        u32 cmd = cpu->gpr[4];
        if (chan == 0) {
            set_controller_rumble(cmd == 1 ? 0.75f : 0.0f);
        }
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    }

    // 3B2. ARAM Subsystem (AR / ARQ Dolphin SDK HLE)
    else if (address == 0x80030198u) {
        // u32 ARGetDMAStatus(void) -> 0 (idle / completed)
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
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

            // In the MGS sound driver (fn_8002CEF4 and fn_8002D1A0), the enclosing request
            // structure is at task - 0x3C, and the completion flag is at +0x7C (+124 decimal).
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
        return HookResult::ReturnTrue;
    }

    // 3C. Memory Card Subsystem (HLE CARD & EXI - Slot A backed by "memcardA.raw")
    if (address == 0x80039A10u) {
        // void CARDInit(void)
        std::printf("[CARD] CARDInit llamado (LR=0x%08X)\n", cpu->lr);
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003CA50u) {
        // s32 CARDProbeEx(s32 chan [r3], s32* memSize [r4], s32* sectorSize [r5])
        u32 chan = cpu->gpr[3];
        u32 memSizePtr = cpu->gpr[4];
        u32 sectorSizePtr = cpu->gpr[5];
        if (chan == 0) {
            if (memSizePtr != 0) mem_write32(cpu, memSizePtr, 16u); // 16 Mbit (Memory Card 251)
            if (sectorSizePtr != 0) mem_write32(cpu, sectorSizePtr, 8192u); // 8 KB per sector
            cpu->gpr[3] = 0u; // CARD_RESULT_READY (0)
            static u32 probe_cnt = 0;
            if (++probe_cnt <= 5 || probe_cnt % 60 == 0) {
                std::printf("[CARD] CARDProbeEx(Ranura A) -> READY (MemSize=16Mb, Sector=8KB, cnt=%u)\n", probe_cnt);
            }
        } else {
            cpu->gpr[3] = static_cast<u32>(-3); // CARD_RESULT_NOCARD (-3)
        }
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
    } else if (address == 0x8003C930u) {
        // s32 CARDCheck(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 0u : static_cast<u32>(-3);
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x80039D68u) {
        // s32 CARDGetSectorSize(s32 chan [r3], u32* size [r4])
        u32 chan = cpu->gpr[3];
        u32 sizePtr = cpu->gpr[4];
        if (chan == 0) {
            if (sizePtr != 0) mem_write32(cpu, sizePtr, 8192u);
            cpu->gpr[3] = 0u; // CARD_RESULT_READY
        } else {
            cpu->gpr[3] = static_cast<u32>(-3); // CARD_RESULT_NOCARD
        }
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003D398u) {
        // s32 CARDUnmount(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        if (chan == 0) {
            g_memcardA.save_if_dirty();
        }
        cpu->gpr[3] = 0u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
    } else if (address == 0x8003E0A8u) {
        // s32 CARDOpen(s32 chan [r3], const char* fileName [r4], CARDFileInfo* fileInfo [r5])
        u32 chan = cpu->gpr[3];
        std::string fileName = read_guest_cstring(cpu, cpu->gpr[4]);
        u32 finfoPtr = cpu->gpr[5];
        if (chan == 0) {
            s32 res = g_memcardA.open_file(cpu, fileName, finfoPtr);
            cpu->gpr[3] = static_cast<u32>(res);
            std::printf("[CARD] CARDOpen(Ranura A, \"%s\") -> res=%d\n", fileName.c_str(), res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003E1C4u) {
        // s32 CARDClose(CARDFileInfo* fileInfo [r3])
        u32 finfoPtr = cpu->gpr[3];
        if (finfoPtr != 0) {
            mem_write32(cpu, finfoPtr + 0x00u, static_cast<u32>(-1));
        }
        g_memcardA.save_if_dirty();
        cpu->gpr[3] = 0u; // CARD_RESULT_READY
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003E570u) {
        // s32 CARDCreate(s32 chan [r3], const char* fileName [r4], u32 size [r5], CARDFileInfo* fileInfo [r6])
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
        return HookResult::ReturnTrue;
    } else if (address == 0x8003E9E4u || address == 0x8003E8A0u) {
        // s32 CARDRead / CARDReadAsync(CARDFileInfo* fileInfo [r3], void* buf [r4], s32 len [r5], s32 offset [r6])
        u32 finfoPtr = cpu->gpr[3];
        u32 bufPtr = cpu->gpr[4];
        s32 len = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        s32 res = g_memcardA.read_file(cpu, finfoPtr, bufPtr, len, offset);
        cpu->gpr[3] = static_cast<u32>(res);
        std::printf("[CARD] CARDRead(finfo=0x%08X, len=%d, off=%d) -> res=%d\n", finfoPtr, len, offset, res);
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003ED60u) {
        // s32 CARDWrite(CARDFileInfo* fileInfo [r3], const void* buf [r4], s32 len [r5], s32 offset [r6])
        u32 finfoPtr = cpu->gpr[3];
        u32 bufPtr = cpu->gpr[4];
        s32 len = static_cast<s32>(cpu->gpr[5]);
        s32 offset = static_cast<s32>(cpu->gpr[6]);
        s32 res = g_memcardA.write_file(cpu, finfoPtr, bufPtr, len, offset);
        cpu->gpr[3] = static_cast<u32>(res);
        std::printf("[CARD] CARDWrite(finfo=0x%08X, len=%d, off=%d) -> res=%d\n", finfoPtr, len, offset, res);
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003EF5Cu) {
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
        return HookResult::ReturnTrue;
    } else if (address == 0x8003F19Cu) {
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
        return HookResult::ReturnTrue;
    } else if (address == 0x8003F424u) {
        // s32 CARDSetStatus(s32 chan [r3], s32 fileNo [r4], CARDStat* stat [r5])
        u32 chan = cpu->gpr[3];
        s32 fileNo = static_cast<s32>(cpu->gpr[4]);
        u32 statPtr = cpu->gpr[5];
        if (chan == 0) {
            s32 res = g_memcardA.set_status(cpu, fileNo, statPtr);
            cpu->gpr[3] = static_cast<u32>(res);
            std::printf("[CARD] CARDSetStatus(Ranura A, fileNo=%d) -> res=%d\n", fileNo, res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8003F668u) {
        // s32 CARDRename(s32 chan [r3], const char* oldName [r4], const char* newName [r5])
        u32 chan = cpu->gpr[3];
        std::string oldName = read_guest_cstring(cpu, cpu->gpr[4]);
        std::string newName = read_guest_cstring(cpu, cpu->gpr[5]);
        if (chan == 0) {
            s32 res = g_memcardA.rename_file(oldName, newName);
            cpu->gpr[3] = static_cast<u32>(res);
            std::printf("[CARD] CARDRename(Ranura A, \"%s\" -> \"%s\") -> res=%d\n", oldName.c_str(), newName.c_str(), res);
        } else {
            cpu->gpr[3] = static_cast<u32>(-3);
        }
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    }

    // 3D. Low-level EXI Subsystem (HLE support for Slot A peripherals)
    if (address == 0x80018E84u || address == 0x80019078u) {
        // BOOL __EXIProbe / EXIProbe(s32 chan [r3])
        u32 chan = cpu->gpr[3];
        cpu->gpr[3] = (chan == 0) ? 1u : 0u; // Slot A present
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
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
        return HookResult::ReturnTrue;
    } else if (address == 0x800192F4u || address == 0x80019420u ||
               address == 0x80019AB4u || address == 0x80019BA8u ||
               address == 0x80018B74u) {
        // EXISelect / EXIDeselect / EXILock / EXIUnlock / EXISync
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x8001878Cu || address == 0x800189E8u) {
        // BOOL EXIImm / EXIImmEx(s32 chan [r3], void* buf [r4], s32 len [r5], u32 type [r6])
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    } else if (address == 0x80018A88u) {
        // BOOL EXIDma(s32 chan [r3], void* buf [r4], s32 len [r5], u32 type [r6], EXICallback cb [r7])
        cpu->gpr[3] = 1u;
        cpu->pc = cpu->lr;
        return HookResult::ReturnTrue;
    }

    return HookResult::Continue;
}
