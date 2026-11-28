#pragma once

#include "runtime_common.hpp"

struct FstEntry {
    bool is_dir = false;
    std::string path;
    u32 disc_offset = 0;
    u32 size = 0;
};

extern std::vector<FstEntry> g_fst_entries;
extern std::unordered_map<std::string, s32> g_fst_path_to_entry;
static std::unordered_map<u32, std::string> g_fst_offset_to_path;
static std::unordered_map<u32, u32> g_fst_offset_to_size;


void init_fst_tables(const u8* fst_data, size_t fst_size);

class Ggsea4VirtualMemoryCard {
public:
    static constexpr size_t CARD_SIZE = 2 * 1024 * 1024; // 2 MB (16 Mbits)
    static constexpr size_t BLOCK_SIZE = 8192;           // 8 KB per block
    static constexpr size_t NUM_BLOCKS = 256;
    static constexpr size_t SYSTEM_BLOCKS = 5;
    static constexpr size_t FREE_BLOCKS = NUM_BLOCKS - SYSTEM_BLOCKS; // 251 free blocks

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

        // Block 0: Header 0x0000..0x1FFF
        for (int i = 0; i < 12; ++i) data[i] = static_cast<u8>(0x30 + i);
        u64 fmt_time = 0x0123456789ABCDEFull;
        for (int i = 0; i < 8; ++i) data[0x0C + i] = static_cast<u8>(fmt_time >> (56 - i * 8));
        data[0x20] = 0; data[0x21] = 0;       // Slot A
        data[0x22] = 0x00; data[0x23] = 0x10; // 16 Mbits (Memory Card 251)
        data[0x24] = 0x00; data[0x25] = 0x00; // Western encoding

        auto [hcsum, hinv] = calculate_checksums(data.data(), 0x01FC);
        data[0x01FC] = static_cast<u8>(hcsum >> 8);
        data[0x01FD] = static_cast<u8>(hcsum & 0xFF);
        data[0x01FE] = static_cast<u8>(hinv >> 8);
        data[0x01FF] = static_cast<u8>(hinv & 0xFF);

        // Blocks 1 and 2 (0x2000 and 0x4000): Directory and backup
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

        // Blocks 3 and 4 (0x6000 and 0x8000): BAT (Block Allocation Table) and backup
        for (size_t b = 3; b <= 4; ++b) {
            size_t base = b * BLOCK_SIZE;
            std::memset(data.data() + base, 0, BLOCK_SIZE);
            data[base + 0x06] = 0x00;
            data[base + 0x07] = 0xFB; // 251 free blocks
            data[base + 0x08] = 0x00;
            data[base + 0x09] = 0x04; // Last reserved block = 4
            auto [bcsum, binv] = calculate_checksums(data.data() + base + 4, BLOCK_SIZE - 4);
            data[base + 0x00] = static_cast<u8>(bcsum >> 8);
            data[base + 0x01] = static_cast<u8>(bcsum & 0xFF);
            data[base + 0x02] = static_cast<u8>(binv >> 8);
            data[base + 0x03] = static_cast<u8>(binv & 0xFF);
        }

        modified = true;
        save_to_disk();
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

    void save_if_dirty() {
        if (modified) {
            save_to_disk();
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

    void sync_dir_and_bat_backups() {
        for (size_t b = 1; b <= 2; ++b) {
            size_t base = b * BLOCK_SIZE;
            if (b == 2) std::memcpy(data.data() + base, data.data() + 1 * BLOCK_SIZE, BLOCK_SIZE);
            auto [dcsum, dinv] = calculate_checksums(data.data() + base, 0x1FFC);
            data[base + 0x1FFC] = static_cast<u8>(dcsum >> 8);
            data[base + 0x1FFD] = static_cast<u8>(dcsum & 0xFF);
            data[base + 0x1FFE] = static_cast<u8>(dinv >> 8);
            data[base + 0x1FFF] = static_cast<u8>(dinv & 0xFF);
        }
        for (size_t b = 3; b <= 4; ++b) {
            size_t base = b * BLOCK_SIZE;
            if (b == 4) std::memcpy(data.data() + base, data.data() + 3 * BLOCK_SIZE, BLOCK_SIZE);
            auto [bcsum, binv] = calculate_checksums(data.data() + base + 4, BLOCK_SIZE - 4);
            data[base + 0x00] = static_cast<u8>(bcsum >> 8);
            data[base + 0x01] = static_cast<u8>(bcsum & 0xFF);
            data[base + 0x02] = static_cast<u8>(binv >> 8);
            data[base + 0x03] = static_cast<u8>(binv & 0xFF);
        }
    }

    s32 find_file_no(const std::string& fileName) const {
        if (data.size() < 0x4000) return -4;
        for (s32 i = 0; i < 127; ++i) {
            size_t entry = 1 * BLOCK_SIZE + static_cast<size_t>(i) * 64;
            if (data[entry] != 0xFF) {
                char entryName[33] = {};
                std::memcpy(entryName, data.data() + entry + 0x08, 32);
                if (fileName == entryName) return i;
            }
        }
        return -4; // CARD_RESULT_NOFILE
    }

    s32 open_file(CPUState* cpu, const std::string& fileName, u32 finfoPtr) {
        s32 fileNo = find_file_no(fileName);
        if (fileNo < 0) return -4; // CARD_RESULT_NOFILE
        return get_fast_file(cpu, fileNo, finfoPtr);
    }

    s32 get_fast_file(CPUState* cpu, s32 fileNo, u32 finfoPtr) {
        if (fileNo < 0 || fileNo >= 127 || data.size() < 0x4000) return -4; // CARD_RESULT_NOFILE
        size_t entry_offset = 1 * BLOCK_SIZE + static_cast<size_t>(fileNo) * 64;
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
        size_t entry_offset = 1 * BLOCK_SIZE + static_cast<size_t>(fileNo) * 64;
        if (data[entry_offset] == 0xFF) return -4;
        if (statPtr != 0) {
            u8* dst = resolve_guest_ptr(cpu, statPtr, 0x6C);
            if (dst) {
                std::memset(dst, 0, 0x6C);
                std::memcpy(dst + 0x00, data.data() + entry_offset + 0x08, 32); // fileName[32]
                u16 block_count = (static_cast<u16>(data[entry_offset + 0x38]) << 8) | static_cast<u16>(data[entry_offset + 0x39]);
                u32 file_len = static_cast<u32>(block_count) * BLOCK_SIZE;
                dst[0x20] = static_cast<u8>(file_len >> 24);
                dst[0x21] = static_cast<u8>(file_len >> 16);
                dst[0x22] = static_cast<u8>(file_len >> 8);
                dst[0x23] = static_cast<u8>(file_len & 0xFF);
                std::memcpy(dst + 0x24, data.data() + entry_offset + 0x28, 4); // time
                std::memcpy(dst + 0x28, data.data() + entry_offset + 0x00, 4); // gameName[4]
                std::memcpy(dst + 0x2C, data.data() + entry_offset + 0x04, 2); // company[2]
                dst[0x2E] = data[entry_offset + 0x07];                          // bannerFormat
                std::memcpy(dst + 0x30, data.data() + entry_offset + 0x2C, 4); // iconAddr
                std::memcpy(dst + 0x34, data.data() + entry_offset + 0x30, 2); // iconFormat
                std::memcpy(dst + 0x36, data.data() + entry_offset + 0x32, 2); // iconSpeed
                std::memcpy(dst + 0x38, data.data() + entry_offset + 0x3C, 4); // commentAddr
            }
        }
        return 0;
    }

    s32 set_status(CPUState* cpu, s32 fileNo, u32 statPtr) {
        if (fileNo < 0 || fileNo >= 127 || data.size() < 0x4000) return -4;
        size_t entry_offset = 1 * BLOCK_SIZE + static_cast<size_t>(fileNo) * 64;
        if (data[entry_offset] == 0xFF) return -4;
        if (statPtr != 0) {
            u8* src = resolve_guest_ptr(cpu, statPtr, 0x6C);
            if (src) {
                std::memcpy(data.data() + entry_offset + 0x28, src + 0x24, 4); // time
                data[entry_offset + 0x07] = src[0x2E];                          // bannerFormat
                std::memcpy(data.data() + entry_offset + 0x2C, src + 0x30, 4); // iconAddr
                std::memcpy(data.data() + entry_offset + 0x30, src + 0x34, 2); // iconFormat
                std::memcpy(data.data() + entry_offset + 0x32, src + 0x36, 2); // iconSpeed
                std::memcpy(data.data() + entry_offset + 0x3C, src + 0x38, 4); // commentAddr
                sync_dir_and_bat_backups();
                modified = true;
                save_to_disk();
            }
        }
        return 0;
    }

    s32 create_file(CPUState* cpu, const std::string& fileName, u32 size, u32 finfoPtr) {
        if (data.size() < CARD_SIZE) return -5;
        if (find_file_no(fileName) >= 0) return -7; // CARD_RESULT_EXIST

        s32 emptySlot = -1;
        for (s32 i = 0; i < 127; ++i) {
            if (data[1 * BLOCK_SIZE + static_cast<size_t>(i) * 64] == 0xFF) {
                emptySlot = i;
                break;
            }
        }
        if (emptySlot == -1) return -9; // CARD_RESULT_NOENT

        u16 num_blocks = static_cast<u16>((size + BLOCK_SIZE - 1) / BLOCK_SIZE);
        if (num_blocks == 0) num_blocks = 1;

        size_t bat_base = 3 * BLOCK_SIZE;
        u16 free_b = (static_cast<u16>(data[bat_base + 6]) << 8) | static_cast<u16>(data[bat_base + 7]);
        if (num_blocks > free_b) return -8; // CARD_RESULT_INSSPACE

        std::vector<u16> alloc_blocks;
        alloc_blocks.reserve(num_blocks);
        for (u16 blk = 5; blk < NUM_BLOCKS && alloc_blocks.size() < num_blocks; ++blk) {
            size_t map_entry = bat_base + 0x0A + static_cast<size_t>(blk - 5) * 2;
            u16 val = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            if (val == 0x0000u) {
                alloc_blocks.push_back(blk);
            }
        }
        if (alloc_blocks.size() < num_blocks) return -8;

        for (size_t i = 0; i < alloc_blocks.size(); ++i) {
            u16 cur = alloc_blocks[i];
            u16 next = (i + 1 == alloc_blocks.size()) ? 0xFFFFu : alloc_blocks[i + 1];
            size_t map_entry = bat_base + 0x0A + static_cast<size_t>(cur - 5) * 2;
            data[map_entry] = static_cast<u8>(next >> 8);
            data[map_entry + 1] = static_cast<u8>(next & 0xFF);
        }
        u16 start_block = alloc_blocks.front();
        free_b -= num_blocks;
        data[bat_base + 6] = static_cast<u8>(free_b >> 8);
        data[bat_base + 7] = static_cast<u8>(free_b & 0xFF);
        data[bat_base + 8] = static_cast<u8>(alloc_blocks.back() >> 8);
        data[bat_base + 9] = static_cast<u8>(alloc_blocks.back() & 0xFF);

        size_t entry_offset = 1 * BLOCK_SIZE + static_cast<size_t>(emptySlot) * 64;
        std::memset(data.data() + entry_offset, 0xFF, 64);
        data[entry_offset + 0] = 'G';
        data[entry_offset + 1] = 'G';
        data[entry_offset + 2] = 'S';
        data[entry_offset + 3] = 'E';
        data[entry_offset + 4] = 'A';
        data[entry_offset + 5] = '4';
        data[entry_offset + 6] = 0xFF;
        data[entry_offset + 7] = 0x00; // bannerFormat
        std::memset(data.data() + entry_offset + 0x08, 0, 32);
        std::memcpy(data.data() + entry_offset + 0x08, fileName.data(), (std::min<size_t>)(fileName.size(), 32));
        std::memset(data.data() + entry_offset + 0x28, 0, 4); // time
        data[entry_offset + 0x36] = static_cast<u8>(start_block >> 8);
        data[entry_offset + 0x37] = static_cast<u8>(start_block & 0xFF);
        data[entry_offset + 0x38] = static_cast<u8>(num_blocks >> 8);
        data[entry_offset + 0x39] = static_cast<u8>(num_blocks & 0xFF);

        sync_dir_and_bat_backups();

        if (finfoPtr != 0) {
            mem_write32(cpu, finfoPtr + 0x00u, 0u);
            mem_write32(cpu, finfoPtr + 0x04u, static_cast<u32>(emptySlot));
            mem_write32(cpu, finfoPtr + 0x08u, 0u);
            mem_write32(cpu, finfoPtr + 0x0Cu, static_cast<u32>(num_blocks) * BLOCK_SIZE);
            mem_write16(cpu, finfoPtr + 0x10u, start_block);
            mem_write16(cpu, finfoPtr + 0x12u, 0u);
        }

        modified = true;
        save_to_disk();
        return 0;
    }

    s32 read_file(CPUState* cpu, u32 finfoPtr, u32 bufPtr, s32 len, s32 offset) {
        if (finfoPtr == 0 || bufPtr == 0 || len <= 0 || offset < 0) return -5;
        u16 start_block = mem_read16(cpu, finfoPtr + 0x10u);
        if (start_block < 5 || start_block >= NUM_BLOCKS) return -5;

        u8* dst = resolve_guest_ptr(cpu, bufPtr, static_cast<u32>(len));
        if (!dst) return -5;

        u16 cur_block = start_block;
        s32 block_idx = offset / static_cast<s32>(BLOCK_SIZE);
        s32 block_off = offset % static_cast<s32>(BLOCK_SIZE);
        size_t bat_base = 3 * BLOCK_SIZE;

        while (block_idx > 0 && cur_block >= 5 && cur_block < NUM_BLOCKS) {
            size_t map_entry = bat_base + 0x0A + static_cast<size_t>(cur_block - 5) * 2;
            cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            --block_idx;
        }
        s32 remaining = len;
        size_t dst_off = 0;
        while (remaining > 0) {
            if (cur_block < 5 || cur_block >= NUM_BLOCKS) return -5;
            size_t chunk = (std::min<size_t>)(static_cast<size_t>(remaining), BLOCK_SIZE - static_cast<size_t>(block_off));
            size_t src_pos = static_cast<size_t>(cur_block) * BLOCK_SIZE + static_cast<size_t>(block_off);
            if (src_pos + chunk > CARD_SIZE) return -5;
            std::memcpy(dst + dst_off, data.data() + src_pos, chunk);
            dst_off += chunk;
            remaining -= static_cast<s32>(chunk);
            block_off = 0;
            if (remaining > 0) {
                size_t map_entry = bat_base + 0x0A + static_cast<size_t>(cur_block - 5) * 2;
                cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            }
        }
        return 0;
    }

    s32 write_file(CPUState* cpu, u32 finfoPtr, u32 bufPtr, s32 len, s32 offset) {
        if (finfoPtr == 0 || bufPtr == 0 || len <= 0 || offset < 0) return -5;
        u16 start_block = mem_read16(cpu, finfoPtr + 0x10u);
        if (start_block < 5 || start_block >= NUM_BLOCKS) return -5;

        u8* src = resolve_guest_ptr(cpu, bufPtr, static_cast<u32>(len));
        if (!src) return -5;

        u16 cur_block = start_block;
        s32 block_idx = offset / static_cast<s32>(BLOCK_SIZE);
        s32 block_off = offset % static_cast<s32>(BLOCK_SIZE);
        size_t bat_base = 3 * BLOCK_SIZE;

        while (block_idx > 0 && cur_block >= 5 && cur_block < NUM_BLOCKS) {
            size_t map_entry = bat_base + 0x0A + static_cast<size_t>(cur_block - 5) * 2;
            cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            --block_idx;
        }
        s32 remaining = len;
        size_t src_off = 0;
        while (remaining > 0) {
            if (cur_block < 5 || cur_block >= NUM_BLOCKS) return -5;
            size_t chunk = (std::min<size_t>)(static_cast<size_t>(remaining), BLOCK_SIZE - static_cast<size_t>(block_off));
            size_t dst_pos = static_cast<size_t>(cur_block) * BLOCK_SIZE + static_cast<size_t>(block_off);
            if (dst_pos + chunk > CARD_SIZE) return -5;
            std::memcpy(data.data() + dst_pos, src + src_off, chunk);
            src_off += chunk;
            remaining -= static_cast<s32>(chunk);
            block_off = 0;
            if (remaining > 0) {
                size_t map_entry = bat_base + 0x0A + static_cast<size_t>(cur_block - 5) * 2;
                cur_block = (static_cast<u16>(data[map_entry]) << 8) | static_cast<u16>(data[map_entry + 1]);
            }
        }
        modified = true;
        save_to_disk();
        return 0;
    }

    s32 rename_file(const std::string& oldName, const std::string& newName) {
        if (data.size() < 0x4000) return -4;
        if (find_file_no(newName) >= 0) return -7; // CARD_RESULT_EXIST
        s32 fileNo = find_file_no(oldName);
        if (fileNo < 0) return -4; // CARD_RESULT_NOFILE
        size_t entry = 1 * BLOCK_SIZE + static_cast<size_t>(fileNo) * 64;
        std::memset(data.data() + entry + 0x08, 0, 32);
        std::memcpy(data.data() + entry + 0x08, newName.data(), (std::min<size_t>)(newName.size(), 32));
        sync_dir_and_bat_backups();
        modified = true;
        save_to_disk();
        return 0;
    }

    s32 delete_file(const std::string& fileName) {
        s32 fileNo = find_file_no(fileName);
        if (fileNo < 0) return -4;
        size_t entry = 1 * BLOCK_SIZE + static_cast<size_t>(fileNo) * 64;
        u16 block = (static_cast<u16>(data[entry + 0x36]) << 8) | static_cast<u16>(data[entry + 0x37]);
        size_t bat_base = 3 * BLOCK_SIZE;
        u16 freed = 0;
        while (block >= 5 && block < NUM_BLOCKS && block != 0xFFFFu) {
            size_t map_entry = bat_base + 0x0A + static_cast<size_t>(block - 5) * 2;
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
        sync_dir_and_bat_backups();
        modified = true;
        save_to_disk();
        return 0;
    }
};

extern Ggsea4VirtualMemoryCard g_memcardA;
