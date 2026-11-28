#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>

#if defined(_WIN32)
#include <windows.h>
#endif

extern "C" {
#include "backend/module_abi.h"
#include "frontend/container/dol.h"
#include "frontend/container/rel.h"
}

typedef const DolRecompModule* (*GetModuleFn)(void);
typedef int (*ModuleCallFn)(CPUState* ctx, u32 address);
typedef int (*ModuleRunBlocksFn)(CPUState* ctx, u32 max_blocks);

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

struct RunnerContext {
    ModuleCallFn module_call = nullptr;
    u32 trace_count = 0;
    bool reached_main = false;
    bool reached_oslink = false;
    bool reached_mgso_prolog = false;
    u64 virtual_tb = 0x0000000001000000ULL;
    u32 spr_regs[1024] = {};
};

static u32 host_spr_read(CPUState* cpu, u16 spr, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<RunnerContext*>(cpu->external_user_data);
    if (!rctx || spr >= 1024) return 0;
    // L2CR (1017): ensure L2_INIT (bit 31 -> 0x1 in IBM bit numbering = 0x00000001) never stays stuck in a polling loop
    if (spr == 1017) {
        return rctx->spr_regs[spr] & ~0x00000001u;
    }
    return rctx->spr_regs[spr];
}

static void host_spr_write(CPUState* cpu, u16 spr, u32 value, u32 cia) {
    (void)cia;
    auto* rctx = static_cast<RunnerContext*>(cpu->external_user_data);
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
    // VI / PI /SI / EXI / DSP / AI / CP / PE hardware registers (0xCC000000..0xCC008000)
    if ((ea & 0xFFFF0000u) == 0xCC000000u) {
        return 0;
    }
    return 0;
}

static void host_mmio_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
    (void)cpu;
    (void)ea;
    (void)value;
    (void)size;
}

static bool host_call_hook(CPUState* cpu, u32 address) {
    auto* rctx = static_cast<RunnerContext*>(cpu->external_user_data);
    if (!rctx) return false;

    // 1. Trace key boot milestones
    if (address == 0x80005240u && rctx->trace_count == 0) {
        std::printf("[TRACE] Entry point alcanzado: __start (0x80005240)\n");
        rctx->trace_count++;
    } else if (address == 0x80006958u && !rctx->reached_main) {
        rctx->reached_main = true;
        std::printf("[TRACE] Alcanzado main() en main.dol (0x80006958) | SP=0x%08X r13=0x%08X r2=0x%08X\n",
                    cpu->gpr[1], cpu->gpr[13], cpu->gpr[2]);
    } else if (address == 0x8001E8F8u) {
        // OSReport
        std::string fmt = read_guest_cstring(cpu, cpu->gpr[3]);
        std::string msg = (fmt.find("%s") != std::string::npos)
                              ? read_guest_cstring(cpu, cpu->gpr[4])
                              : fmt;
        while (!msg.empty() && (msg.back() == '\n' || msg.back() == '\r')) msg.pop_back();
        std::printf("[OSReport] %s\n", msg.c_str());
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8001D778u || address == 0x8001D934u) {
        // __OSInitAudioSystem / __OSStopAudioSystem (avoid infinite hardware DSP DMA wait)
        cpu->pc = cpu->lr;
        return true;
    } else if (address == 0x8002148Cu && !rctx->reached_oslink) {
        rctx->reached_oslink = true;
        std::printf("[TRACE] Llamada a OSLink(rel=0x%08X, bss=0x%08X)\n", cpu->gpr[3], cpu->gpr[4]);
    } else if (address == 0x7F0080ECu && !rctx->reached_mgso_prolog) {
        rctx->reached_mgso_prolog = true;
        std::printf("[TRACE] Exito! Salto ejecutado hacia mgso.rel::_prolog (0x7F0080EC)!\n");
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
    for (size_t i = 0; i < buf.size(); ++i) {
        mem_write8(cpu, guest_addr + static_cast<u32>(i), buf[i]);
    }
    if (out_size) *out_size = static_cast<u32>(buf.size());
    return true;
}

int main(int argc, char** argv) {
    const char* dll_path = (argc > 1) ? argv[1] : "module_build/build/GGSEA4.dll";
    const char* dol_path = (argc > 2) ? argv[2] : "input/extracted/sys/main.dol";
    const char* rel_path = (argc > 3) ? argv[3] : "input/extracted/files/shared/mgso.rel";

    std::printf("=== GGSEA4 RecompCore Smoke Runner (Metal Gear Solid: The Twin Snakes) ===\n");

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
    std::printf("[OK] Modulo cargado: ABI=v%u | CPUState=%u bytes | Variantes=%u (%s)\n",
                mod->abi_version, mod->cpu_state_size, mod->variant_count,
                mod->variants ? mod->variants[0].name : "none");

    CPUState cpu;
    if (!cpu_init(&cpu) || !cpu_alloc_mem2(&cpu, GC_VM_SIZE)) {
        std::fprintf(stderr, "[ERROR] Fallo al inicializar MEM1 (24 MB) + VM (16 MB)\n");
        return 1;
    }
    cpu_reset(&cpu);

    RunnerContext rctx;
    rctx.module_call = mod_call;
    cpu.external_user_data = &rctx;
    cpu.external_read = host_mmio_read;
    cpu.external_write = host_mmio_write;
    cpu.host_call = host_call_hook;
    cpu.spr_read = host_spr_read;
    cpu.spr_write = host_spr_write;
    cpu.cache_control = host_cache_control;
    cpu.instruction_fallback = host_instruction_fallback;

    // 1. Initialize GameCube OS Globals at 0x80000000..0x800030FF
    load_file_to_guest(&cpu, "input/extracted/sys/boot.bin", 0x80000000u);
    u32 bi2_addr = 0x817EE000u;
    load_file_to_guest(&cpu, "input/extracted/sys/bi2.bin", bi2_addr);
    mem_write32(&cpu, bi2_addr + 0x08u, 0u); // No argv table in BI2
    mem_write32(&cpu, bi2_addr + 0x0Cu, 0u); // No forced TRK debug mode
    u32 fst_size = 0;
    u32 fst_addr = 0x817F0000u;
    if (load_file_to_guest(&cpu, "input/extracted/sys/fst.bin", fst_addr, &fst_size)) {
        mem_write32(&cpu, 0x80000038u, fst_addr);
        mem_write32(&cpu, 0x8000003Cu, fst_size);
    }
    mem_write32(&cpu, 0x80000028u, GC_MAIN_RAM_SIZE); // Physical Mem Size (24 MB)
    mem_write32(&cpu, 0x8000002Cu, 0x00000001u);      // Console Type (Retail1)
    mem_write32(&cpu, 0x80000030u, 0x80290B40u);      // ArenaLo
    mem_write32(&cpu, 0x80000034u, bi2_addr);         // ArenaHi
    mem_write32(&cpu, 0x800000F0u, GC_MAIN_RAM_SIZE); // Simulated Mem Size (24 MB)
    mem_write32(&cpu, 0x800000F4u, bi2_addr);         // BI2 pointer
    mem_write32(&cpu, 0x800000F8u, 162000000u);       // Bus Clock (162 MHz)
    mem_write32(&cpu, 0x800000FCu, 486000000u);       // CPU Clock (486 MHz)

    // 2. Load main.dol sections into MEM1
    DOLFile dol;
    if (!dol_load(&dol, dol_path)) {
        std::fprintf(stderr, "[ERROR] No se pudo cargar %s\n", dol_path);
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

    // 3. Pre-load and relocate shared/mgso.rel at 0x7F008000 (VM Region)
    RELFile rel;
    if (!rel_load(&rel, rel_path, 0x7F008000u)) {
        std::fprintf(stderr, "[ERROR] No se pudo cargar/relocalizar %s en 0x7F008000\n", rel_path);
        dol_free(&dol);
        cpu_free(&cpu);
        return 1;
    }
    for (u32 i = 0; i < rel.section_count; ++i) {
        const RELSection& sec = rel.sections[i];
        if (sec.size == 0 || sec.bss || !sec.data) continue;
        u32 vm_off = sec.address - GC_VM_BASE;
        std::memcpy(cpu.mem2 + vm_off, sec.data, sec.size);
    }
    std::printf("[OK] mgso.rel cargado y relocalizado en VM 0x7F008000 (entry=0x%08X, relocs=%u)\n",
                rel.entry_point, rel.relocation_count);

    // 4. Test 1: Execute main.dol initialization sequence (__start -> __init_registers -> __init_data)
    cpu.pc = dol.header.entry_point; // 0x80005240 (__start)
    cpu.gpr[1] = 0x8028EB38u;        // _stack_addr
    cpu.gpr[2] = 0x802864A0u;        // _SDA2_BASE_
    cpu.gpr[13] = 0x80285DC0u;       // _SDA_BASE_
    cpu.msr = 0x00002000u;           // MSR[FP] enabled

    std::printf("[TEST 1] Ejecutando arranque de main.dol desde __start (0x80005240)...\n");
    for (u32 step = 0; step < 32768; ++step) {
        cpu.downcount = 100000;
        cpu.timebase += 500;
        if (!mod_call(&cpu, cpu.pc)) {
            std::printf("[INFO] Ejecucion de inicializacion pausada en PC=0x%08X tras %u bloques\n", cpu.pc, step);
            break;
        }
        if (rctx.reached_main) {
            break;
        }
        if (cpu.exception == PPC_EXC_SYSTEM_CALL) {
            // Emulate __OSSystemCallVector (0x80000C00): sync; isync; rfi
            cpu.exception = 0;
            cpu.msr = cpu.srr1;
            cpu.pc = cpu.srr0;
            continue;
        }
        if (cpu.exception) {
            std::printf("[INFO] Excepcion guest=0x%X (prog=0x%X) en SRR0=0x%08X -> Vector=0x%08X\n",
                        cpu.exception, cpu.program_exception, cpu.srr0, cpu.pc);
            break;
        }
    }
    std::printf("         Estado post-init: SP(r1)=0x%08X | r2=0x%08X | r13=0x%08X | PC=0x%08X\n",
                cpu.gpr[1], cpu.gpr[2], cpu.gpr[13], cpu.pc);

    // 5. Test 2: Directly invoke mgso.rel _prolog (0x7F0080EC) in VM region 0x7F008000
    std::printf("[TEST 2] Ejecutando mgso.rel::_prolog (0x7F0080EC) en region VM...\n");
    cpu.exception = 0;
    cpu.pc = rel.entry_point;        // 0x7F0080EC (_prolog)
    cpu.lr = 0x80006804u;            // Return to fn_800067E0 in main.dol
    for (u32 step = 0; step < 32; ++step) {
        if (!mod_call(&cpu, cpu.pc)) {
            break;
        }
        if (cpu.pc == 0x80006804u || cpu.exception) {
            break;
        }
    }
    std::printf("         Estado post-mgso::_prolog: PC=0x%08X | LR=0x%08X | reached_mgso_prolog=%s\n",
                cpu.pc, cpu.lr, rctx.reached_mgso_prolog ? "SI" : "NO");

    rel_free(&rel);
    dol_free(&dol);
    cpu_free(&cpu);
    return rctx.reached_mgso_prolog ? 0 : 1;
}
