// DolRecomp output
// cpu: gekko

#ifndef RECOMP_GENERATED_H
#define RECOMP_GENERATED_H

#define DOLRECOMP_CPU_GEKKO 1
#define DOLRECOMP_CPU_NAME "gekko"

#include <string.h>
#include <math.h>
#ifndef DOLRECOMP_CPU_HEADER
#define DOLRECOMP_CPU_HEADER "cpu/cpu.h"
#endif
#include DOLRECOMP_CPU_HEADER

#ifndef DOLRECOMP_C_LOOP_CYCLE_BUDGET
#define DOLRECOMP_C_LOOP_CYCLE_BUDGET 256
#endif

/* Cross-chunk calls turn guest recursion into host recursion, and a
   chunk frame is not small. Without a ceiling a deep guest call chain
   overflows the host stack, which is a crash rather than a slow
   emulator. Past the limit the call site falls back to returning to
   the chassis, which is always correct -- ctx->pc already names the
   target, so the chassis simply dispatches it as it did before.
   The counter is plain static, not atomic: the chassis runs the module
   on one CPU thread. */
#ifndef DOLRECOMP_C_MAX_CALL_DEPTH
#define DOLRECOMP_C_MAX_CALL_DEPTH 24
#endif
extern unsigned dolrecomp_call_depth;
static inline int dolrecomp_call_enter(void) {
    if (dolrecomp_call_depth >= (unsigned)DOLRECOMP_C_MAX_CALL_DEPTH)
        return 0;
    dolrecomp_call_depth++;
    return 1;
}
static inline void dolrecomp_call_leave(void) {
    if (dolrecomp_call_depth)
        dolrecomp_call_depth--;
}

static inline u32 dolrecomp_rotl32(u32 value, u32 sh) {
    sh &= 31u;
    return sh ? ((value << sh) | (value >> (32u - sh))) : value;
}

static inline f64 dolrecomp_f32_from_bits(u32 bits) {
    u64 x = bits;
    u64 exp = (x >> 23) & 0xFFu;
    u64 frac = x & 0x007FFFFFu;
    u64 result;
    if (exp > 0 && exp < 255) {
        u64 y = !(exp >> 7);
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    } else if (exp == 0 && frac != 0) {
        exp = 1023 - 126;
        do {
            frac <<= 1;
            exp -= 1;
        } while ((frac & 0x00800000u) == 0);
        result = ((x & 0x80000000u) << 32) | (exp << 52) |
                 ((frac & 0x007FFFFFu) << 29);
    } else {
        u64 y = exp >> 7;
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    }
    f64 value;
    memcpy(&value, &result, sizeof(value));
    return value;
}

static inline u32 dolrecomp_f32_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    u32 exp = (u32)((bits >> 52) & 0x7FFu);
    if (exp > 896 || (bits & 0x7FFFFFFFFFFFFFFFull) == 0) {
        return (u32)(((bits >> 32) & 0xC0000000u) |
                     ((bits >> 29) & 0x3FFFFFFFu));
    }
    if (exp >= 874) {
        u32 result =
            (u32)(0x80000000u | ((bits & 0x000FFFFFFFFFFFFFull) >> 21));
        result >>= 905 - exp;
        result |= (u32)((bits >> 32) & 0x80000000u);
        return result;
    }
    return (u32)(((bits >> 32) & 0xC0000000u) |
                 ((bits >> 29) & 0x3FFFFFFFu));
}

static inline f64 dolrecomp_f64_from_bits(u64 bits) {
    f64 value;
    memcpy(&value, &bits, sizeof(value));
    return value;
}

static inline u64 dolrecomp_f64_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    return bits;
}

static inline f64 dolrecomp_ps_from_bits(u32 bits) {
    return dolrecomp_f32_from_bits(bits);
}

static inline u32 dolrecomp_ps_to_bits(f64 value) {
    return dolrecomp_f32_to_bits(value);
}


// Function entry points
void func_80003100(CPUState* ctx);
void func_800055E0(CPUState* ctx);
void func_800095E0(CPUState* ctx);
void func_8000D5E0(CPUState* ctx);
void func_800115E0(CPUState* ctx);
void func_800155E0(CPUState* ctx);
void func_800195E0(CPUState* ctx);
void func_8001D5E0(CPUState* ctx);
void func_800215E0(CPUState* ctx);
void func_800255E0(CPUState* ctx);
void func_800295E0(CPUState* ctx);
void func_8002D5E0(CPUState* ctx);
void func_800315E0(CPUState* ctx);
void func_800355E0(CPUState* ctx);
void func_800395E0(CPUState* ctx);
void func_8003D5E0(CPUState* ctx);
void func_800415E0(CPUState* ctx);
void func_800455E0(CPUState* ctx);
void func_800495E0(CPUState* ctx);
void func_8004D5E0(CPUState* ctx);
void func_800515E0(CPUState* ctx);
void func_800555E0(CPUState* ctx);
void func_800595E0(CPUState* ctx);
void func_8005D5E0(CPUState* ctx);
void func_800615E0(CPUState* ctx);


// REL (mgso.rel @ 0x7F008000) function entry points
void func_7F0080EC(CPUState* ctx);
void func_7F00C0EC(CPUState* ctx);
void func_7F0100EC(CPUState* ctx);
void func_7F0140EC(CPUState* ctx);
void func_7F0180EC(CPUState* ctx);
void func_7F01C0EC(CPUState* ctx);
void func_7F0200EC(CPUState* ctx);
void func_7F0240EC(CPUState* ctx);
void func_7F0280EC(CPUState* ctx);
void func_7F02C0EC(CPUState* ctx);
void func_7F0300EC(CPUState* ctx);
void func_7F0340EC(CPUState* ctx);
void func_7F0380EC(CPUState* ctx);
void func_7F03C0EC(CPUState* ctx);
void func_7F0400EC(CPUState* ctx);
void func_7F0440EC(CPUState* ctx);
void func_7F0480EC(CPUState* ctx);
void func_7F04C0EC(CPUState* ctx);
void func_7F0500EC(CPUState* ctx);
void func_7F0540EC(CPUState* ctx);
void func_7F0580EC(CPUState* ctx);
void func_7F05C0EC(CPUState* ctx);
void func_7F0600EC(CPUState* ctx);
void func_7F0640EC(CPUState* ctx);
void func_7F0680EC(CPUState* ctx);
void func_7F06C0EC(CPUState* ctx);
void func_7F0700EC(CPUState* ctx);
void func_7F0740EC(CPUState* ctx);
void func_7F0780EC(CPUState* ctx);
void func_7F07C0EC(CPUState* ctx);
void func_7F0800EC(CPUState* ctx);
void func_7F0840EC(CPUState* ctx);
void func_7F0880EC(CPUState* ctx);
void func_7F08C0EC(CPUState* ctx);
void func_7F0900EC(CPUState* ctx);
void func_7F0940EC(CPUState* ctx);
void func_7F0980EC(CPUState* ctx);
void func_7F09C0EC(CPUState* ctx);
void func_7F0A00EC(CPUState* ctx);
void func_7F0A40EC(CPUState* ctx);
void func_7F0A80EC(CPUState* ctx);
void func_7F0AC0EC(CPUState* ctx);
void func_7F0B00EC(CPUState* ctx);
void func_7F0B40EC(CPUState* ctx);
void func_7F0B80EC(CPUState* ctx);
void func_7F0BC0EC(CPUState* ctx);
void func_7F0C00EC(CPUState* ctx);
void func_7F0C40EC(CPUState* ctx);
void func_7F0C80EC(CPUState* ctx);
void func_7F0CC0EC(CPUState* ctx);
void func_7F0D00EC(CPUState* ctx);
void func_7F0D40EC(CPUState* ctx);
void func_7F0D80EC(CPUState* ctx);
void func_7F0DC0EC(CPUState* ctx);
void func_7F0E00EC(CPUState* ctx);
void func_7F0E40EC(CPUState* ctx);
void func_7F0E80EC(CPUState* ctx);
void func_7F0EC0EC(CPUState* ctx);
void func_7F0F00EC(CPUState* ctx);
void func_7F0F40EC(CPUState* ctx);
void func_7F0F80EC(CPUState* ctx);
void func_7F0FC0EC(CPUState* ctx);
void func_7F1000EC(CPUState* ctx);
void func_7F1040EC(CPUState* ctx);
void func_7F1080EC(CPUState* ctx);
void func_7F10C0EC(CPUState* ctx);
void func_7F1100EC(CPUState* ctx);
void func_7F1140EC(CPUState* ctx);
void func_7F1180EC(CPUState* ctx);
void func_7F11C0EC(CPUState* ctx);
void func_7F1200EC(CPUState* ctx);
void func_7F1240EC(CPUState* ctx);
void func_7F1280EC(CPUState* ctx);
void func_7F12C0EC(CPUState* ctx);
void func_7F1300EC(CPUState* ctx);
void func_7F1340EC(CPUState* ctx);
void func_7F1380EC(CPUState* ctx);
void func_7F13C0EC(CPUState* ctx);
void func_7F1400EC(CPUState* ctx);
void func_7F1440EC(CPUState* ctx);
void func_7F1480EC(CPUState* ctx);
void func_7F14C0EC(CPUState* ctx);
void func_7F1500EC(CPUState* ctx);
void func_7F1540EC(CPUState* ctx);
void func_7F1580EC(CPUState* ctx);
void func_7F15C0EC(CPUState* ctx);
void func_7F1600EC(CPUState* ctx);
void func_7F1640EC(CPUState* ctx);
void func_7F1680EC(CPUState* ctx);
void func_7F16C0EC(CPUState* ctx);
void func_7F1700EC(CPUState* ctx);
void func_7F1740EC(CPUState* ctx);
void func_7F1780EC(CPUState* ctx);
void func_7F17C0EC(CPUState* ctx);
void func_7F1800EC(CPUState* ctx);
void func_7F1840EC(CPUState* ctx);
void func_7F1880EC(CPUState* ctx);
void func_7F18C0EC(CPUState* ctx);
void func_7F1900EC(CPUState* ctx);
void func_7F1940EC(CPUState* ctx);
void func_7F1980EC(CPUState* ctx);
void func_7F19C0EC(CPUState* ctx);
void func_7F1A00EC(CPUState* ctx);
void func_7F1A40EC(CPUState* ctx);
void func_7F1A80EC(CPUState* ctx);
void func_7F1AC0EC(CPUState* ctx);
void func_7F1B00EC(CPUState* ctx);
void func_7F1B40EC(CPUState* ctx);
void func_7F1B80EC(CPUState* ctx);
void func_7F1BC0EC(CPUState* ctx);
void func_7F1C00EC(CPUState* ctx);
void func_7F1C40EC(CPUState* ctx);
void func_7F1C80EC(CPUState* ctx);
void func_7F1CC0EC(CPUState* ctx);
void func_7F1D00EC(CPUState* ctx);
void func_7F1D40EC(CPUState* ctx);
void func_7F1D80EC(CPUState* ctx);
void func_7F1DC0EC(CPUState* ctx);
void func_7F1E00EC(CPUState* ctx);
void func_7F1E40EC(CPUState* ctx);
void func_7F1E80EC(CPUState* ctx);
void func_7F1EC0EC(CPUState* ctx);
void func_7F1F00EC(CPUState* ctx);
void func_7F1F40EC(CPUState* ctx);
void func_7F1F80EC(CPUState* ctx);
void func_7F1FC0EC(CPUState* ctx);
void func_7F2000EC(CPUState* ctx);
void func_7F2040EC(CPUState* ctx);
void func_7F2080EC(CPUState* ctx);
void func_7F20C0EC(CPUState* ctx);
void func_7F2100EC(CPUState* ctx);
void func_7F2140EC(CPUState* ctx);
void func_7F2180EC(CPUState* ctx);
void func_7F21C0EC(CPUState* ctx);
void func_7F2200EC(CPUState* ctx);
void func_7F2240EC(CPUState* ctx);
void func_7F2280EC(CPUState* ctx);
void func_7F22C0EC(CPUState* ctx);
void func_7F2300EC(CPUState* ctx);
void func_7F2340EC(CPUState* ctx);
void func_7F2380EC(CPUState* ctx);
void func_7F23C0EC(CPUState* ctx);
void func_7F2400EC(CPUState* ctx);
void func_7F2440EC(CPUState* ctx);
void func_7F2480EC(CPUState* ctx);
void func_7F24C0EC(CPUState* ctx);
void func_7F2500EC(CPUState* ctx);
void func_7F2540EC(CPUState* ctx);
void func_7F2580EC(CPUState* ctx);
void func_7F25C0EC(CPUState* ctx);
void func_7F2600EC(CPUState* ctx);
void func_7F2640EC(CPUState* ctx);
void func_7F2680EC(CPUState* ctx);
void func_7F26C0EC(CPUState* ctx);
void func_7F2700EC(CPUState* ctx);
void func_7F2740EC(CPUState* ctx);
void func_7F2780EC(CPUState* ctx);
void func_7F27C0EC(CPUState* ctx);
void func_7F2800EC(CPUState* ctx);
void func_7F2840EC(CPUState* ctx);
void func_7F2880EC(CPUState* ctx);
void func_7F28C0EC(CPUState* ctx);
void func_7F2900EC(CPUState* ctx);
void func_7F2940EC(CPUState* ctx);
void func_7F2980EC(CPUState* ctx);
void func_7F29C0EC(CPUState* ctx);
void func_7F2A00EC(CPUState* ctx);
void func_7F2A40EC(CPUState* ctx);
void func_7F2A80EC(CPUState* ctx);
void func_7F2AC0EC(CPUState* ctx);
void func_7F2B00EC(CPUState* ctx);
void func_7F2B40EC(CPUState* ctx);
void func_7F2B80EC(CPUState* ctx);
void func_7F2BC0EC(CPUState* ctx);
void func_7F2C00EC(CPUState* ctx);
void func_7F2C40EC(CPUState* ctx);
void func_7F2C80EC(CPUState* ctx);
void func_7F2CC0EC(CPUState* ctx);
void func_7F2D00EC(CPUState* ctx);
void func_7F2D40EC(CPUState* ctx);
void func_7F2D80EC(CPUState* ctx);
void func_7F2DC0EC(CPUState* ctx);
void func_7F2E00EC(CPUState* ctx);
void func_7F2E40EC(CPUState* ctx);
void func_7F2E80EC(CPUState* ctx);
void func_7F2EC0EC(CPUState* ctx);
void func_7F2F00EC(CPUState* ctx);
void func_7F2F40EC(CPUState* ctx);
void func_7F2F80EC(CPUState* ctx);
void func_7F2FC0EC(CPUState* ctx);
void func_7F3000EC(CPUState* ctx);
void func_7F3040EC(CPUState* ctx);
void func_7F3080EC(CPUState* ctx);
void func_7F30C0EC(CPUState* ctx);
void func_7F3100EC(CPUState* ctx);
void func_7F3140EC(CPUState* ctx);
void func_7F3180EC(CPUState* ctx);
void func_7F31C0EC(CPUState* ctx);
void func_7F3200EC(CPUState* ctx);
void func_7F3240EC(CPUState* ctx);
void func_7F3280EC(CPUState* ctx);
void func_7F32C0EC(CPUState* ctx);
void func_7F3300EC(CPUState* ctx);
void func_7F3340EC(CPUState* ctx);
void func_7F3380EC(CPUState* ctx);
void func_7F33C0EC(CPUState* ctx);
void func_7F3400EC(CPUState* ctx);
void func_7F3440EC(CPUState* ctx);
void func_7F3480EC(CPUState* ctx);
void func_7F34C0EC(CPUState* ctx);
void func_7F3500EC(CPUState* ctx);
void func_7F3540EC(CPUState* ctx);
void func_7F3580EC(CPUState* ctx);
void func_7F35C0EC(CPUState* ctx);
void func_7F3600EC(CPUState* ctx);
void func_7F3640EC(CPUState* ctx);
void func_7F3680EC(CPUState* ctx);
void func_7F36C0EC(CPUState* ctx);
void func_7F3700EC(CPUState* ctx);
void func_7F3740EC(CPUState* ctx);
void func_7F3780EC(CPUState* ctx);
void func_7F37C0EC(CPUState* ctx);
void func_7F3800EC(CPUState* ctx);
void func_7F3840EC(CPUState* ctx);
void func_7F3880EC(CPUState* ctx);
void func_7F38C0EC(CPUState* ctx);
void func_7F3900EC(CPUState* ctx);
void func_7F3940EC(CPUState* ctx);
void func_7F3980EC(CPUState* ctx);
void func_7F39C0EC(CPUState* ctx);
void func_7F3A00EC(CPUState* ctx);
void func_7F3A40EC(CPUState* ctx);
void func_7F3A80EC(CPUState* ctx);
void func_7F3AC0EC(CPUState* ctx);
void func_7F3B00EC(CPUState* ctx);
void func_7F3B40EC(CPUState* ctx);
void func_7F3B80EC(CPUState* ctx);
void func_7F3BC0EC(CPUState* ctx);
void func_7F3C00EC(CPUState* ctx);
void func_7F3C40EC(CPUState* ctx);
void func_7F3C80EC(CPUState* ctx);
void func_7F3CC0EC(CPUState* ctx);
void func_7F3D00EC(CPUState* ctx);
void func_7F3D40EC(CPUState* ctx);
void func_7F3D80EC(CPUState* ctx);
void func_7F3DC0EC(CPUState* ctx);
void func_7F3E00EC(CPUState* ctx);
void func_7F3E40EC(CPUState* ctx);
void func_7F3E80EC(CPUState* ctx);
void func_7F3EC0EC(CPUState* ctx);
void func_7F3F00EC(CPUState* ctx);
void func_7F3F40EC(CPUState* ctx);
void func_7F3F80EC(CPUState* ctx);
void func_7F3FC0EC(CPUState* ctx);
void func_7F4000EC(CPUState* ctx);
void func_7F4040EC(CPUState* ctx);
void func_7F4080EC(CPUState* ctx);
void func_7F40C0EC(CPUState* ctx);
void func_7F4100EC(CPUState* ctx);
void func_7F4140EC(CPUState* ctx);
void func_7F4180EC(CPUState* ctx);
void func_7F41C0EC(CPUState* ctx);
void func_7F4200EC(CPUState* ctx);
void func_7F4240EC(CPUState* ctx);
void func_7F4280EC(CPUState* ctx);
void func_7F42C0EC(CPUState* ctx);
void func_7F4300EC(CPUState* ctx);
void func_7F4340EC(CPUState* ctx);
void func_7F4380EC(CPUState* ctx);
void func_7F43C0EC(CPUState* ctx);
void func_7F4400EC(CPUState* ctx);
void func_7F4440EC(CPUState* ctx);
void func_7F4480EC(CPUState* ctx);
void func_7F44C0EC(CPUState* ctx);
void func_7F4500EC(CPUState* ctx);
void func_7F4540EC(CPUState* ctx);
void func_7F4580EC(CPUState* ctx);
void func_7F45C0EC(CPUState* ctx);

#define DOLRECOMP_ENTRY_POINT 0x80005240u

typedef void (*DolRecompFunction)(CPUState* ctx);

#if defined(__GNUC__) || defined(__clang__)
#define DOLRECOMP_UNUSED __attribute__((unused))
#else
#define DOLRECOMP_UNUSED
#endif

static inline int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    // Hook quirúrgico sobre OSLink (fn_8002148C):
    // Cuando main.dol enlaza shared/mgso.rel en 0x7F008000, forzamos el puntero .bss (r4)
    // a 0x7F498000 para que coincida 1:1 con la relocalización estática de DolRecomp.
    if (__builtin_expect(address == 0x8002148Cu && ctx->gpr[3] == 0x7F008000u, 0)) {
        ctx->gpr[4] = 0x7F498000u;
    }
    return 0;
}

static inline DolRecompFunction dolrecomp_find_original(u32 address) {
    {
        u32 offset = address - 0x7F0080ECu;
        if (__builtin_expect(offset < 0x00454958u && (offset & 3u) == 0u, 1)) {
            static const DolRecompFunction rel_chunk_functions[] = {
                func_7F0080EC,
                func_7F00C0EC,
                func_7F0100EC,
                func_7F0140EC,
                func_7F0180EC,
                func_7F01C0EC,
                func_7F0200EC,
                func_7F0240EC,
                func_7F0280EC,
                func_7F02C0EC,
                func_7F0300EC,
                func_7F0340EC,
                func_7F0380EC,
                func_7F03C0EC,
                func_7F0400EC,
                func_7F0440EC,
                func_7F0480EC,
                func_7F04C0EC,
                func_7F0500EC,
                func_7F0540EC,
                func_7F0580EC,
                func_7F05C0EC,
                func_7F0600EC,
                func_7F0640EC,
                func_7F0680EC,
                func_7F06C0EC,
                func_7F0700EC,
                func_7F0740EC,
                func_7F0780EC,
                func_7F07C0EC,
                func_7F0800EC,
                func_7F0840EC,
                func_7F0880EC,
                func_7F08C0EC,
                func_7F0900EC,
                func_7F0940EC,
                func_7F0980EC,
                func_7F09C0EC,
                func_7F0A00EC,
                func_7F0A40EC,
                func_7F0A80EC,
                func_7F0AC0EC,
                func_7F0B00EC,
                func_7F0B40EC,
                func_7F0B80EC,
                func_7F0BC0EC,
                func_7F0C00EC,
                func_7F0C40EC,
                func_7F0C80EC,
                func_7F0CC0EC,
                func_7F0D00EC,
                func_7F0D40EC,
                func_7F0D80EC,
                func_7F0DC0EC,
                func_7F0E00EC,
                func_7F0E40EC,
                func_7F0E80EC,
                func_7F0EC0EC,
                func_7F0F00EC,
                func_7F0F40EC,
                func_7F0F80EC,
                func_7F0FC0EC,
                func_7F1000EC,
                func_7F1040EC,
                func_7F1080EC,
                func_7F10C0EC,
                func_7F1100EC,
                func_7F1140EC,
                func_7F1180EC,
                func_7F11C0EC,
                func_7F1200EC,
                func_7F1240EC,
                func_7F1280EC,
                func_7F12C0EC,
                func_7F1300EC,
                func_7F1340EC,
                func_7F1380EC,
                func_7F13C0EC,
                func_7F1400EC,
                func_7F1440EC,
                func_7F1480EC,
                func_7F14C0EC,
                func_7F1500EC,
                func_7F1540EC,
                func_7F1580EC,
                func_7F15C0EC,
                func_7F1600EC,
                func_7F1640EC,
                func_7F1680EC,
                func_7F16C0EC,
                func_7F1700EC,
                func_7F1740EC,
                func_7F1780EC,
                func_7F17C0EC,
                func_7F1800EC,
                func_7F1840EC,
                func_7F1880EC,
                func_7F18C0EC,
                func_7F1900EC,
                func_7F1940EC,
                func_7F1980EC,
                func_7F19C0EC,
                func_7F1A00EC,
                func_7F1A40EC,
                func_7F1A80EC,
                func_7F1AC0EC,
                func_7F1B00EC,
                func_7F1B40EC,
                func_7F1B80EC,
                func_7F1BC0EC,
                func_7F1C00EC,
                func_7F1C40EC,
                func_7F1C80EC,
                func_7F1CC0EC,
                func_7F1D00EC,
                func_7F1D40EC,
                func_7F1D80EC,
                func_7F1DC0EC,
                func_7F1E00EC,
                func_7F1E40EC,
                func_7F1E80EC,
                func_7F1EC0EC,
                func_7F1F00EC,
                func_7F1F40EC,
                func_7F1F80EC,
                func_7F1FC0EC,
                func_7F2000EC,
                func_7F2040EC,
                func_7F2080EC,
                func_7F20C0EC,
                func_7F2100EC,
                func_7F2140EC,
                func_7F2180EC,
                func_7F21C0EC,
                func_7F2200EC,
                func_7F2240EC,
                func_7F2280EC,
                func_7F22C0EC,
                func_7F2300EC,
                func_7F2340EC,
                func_7F2380EC,
                func_7F23C0EC,
                func_7F2400EC,
                func_7F2440EC,
                func_7F2480EC,
                func_7F24C0EC,
                func_7F2500EC,
                func_7F2540EC,
                func_7F2580EC,
                func_7F25C0EC,
                func_7F2600EC,
                func_7F2640EC,
                func_7F2680EC,
                func_7F26C0EC,
                func_7F2700EC,
                func_7F2740EC,
                func_7F2780EC,
                func_7F27C0EC,
                func_7F2800EC,
                func_7F2840EC,
                func_7F2880EC,
                func_7F28C0EC,
                func_7F2900EC,
                func_7F2940EC,
                func_7F2980EC,
                func_7F29C0EC,
                func_7F2A00EC,
                func_7F2A40EC,
                func_7F2A80EC,
                func_7F2AC0EC,
                func_7F2B00EC,
                func_7F2B40EC,
                func_7F2B80EC,
                func_7F2BC0EC,
                func_7F2C00EC,
                func_7F2C40EC,
                func_7F2C80EC,
                func_7F2CC0EC,
                func_7F2D00EC,
                func_7F2D40EC,
                func_7F2D80EC,
                func_7F2DC0EC,
                func_7F2E00EC,
                func_7F2E40EC,
                func_7F2E80EC,
                func_7F2EC0EC,
                func_7F2F00EC,
                func_7F2F40EC,
                func_7F2F80EC,
                func_7F2FC0EC,
                func_7F3000EC,
                func_7F3040EC,
                func_7F3080EC,
                func_7F30C0EC,
                func_7F3100EC,
                func_7F3140EC,
                func_7F3180EC,
                func_7F31C0EC,
                func_7F3200EC,
                func_7F3240EC,
                func_7F3280EC,
                func_7F32C0EC,
                func_7F3300EC,
                func_7F3340EC,
                func_7F3380EC,
                func_7F33C0EC,
                func_7F3400EC,
                func_7F3440EC,
                func_7F3480EC,
                func_7F34C0EC,
                func_7F3500EC,
                func_7F3540EC,
                func_7F3580EC,
                func_7F35C0EC,
                func_7F3600EC,
                func_7F3640EC,
                func_7F3680EC,
                func_7F36C0EC,
                func_7F3700EC,
                func_7F3740EC,
                func_7F3780EC,
                func_7F37C0EC,
                func_7F3800EC,
                func_7F3840EC,
                func_7F3880EC,
                func_7F38C0EC,
                func_7F3900EC,
                func_7F3940EC,
                func_7F3980EC,
                func_7F39C0EC,
                func_7F3A00EC,
                func_7F3A40EC,
                func_7F3A80EC,
                func_7F3AC0EC,
                func_7F3B00EC,
                func_7F3B40EC,
                func_7F3B80EC,
                func_7F3BC0EC,
                func_7F3C00EC,
                func_7F3C40EC,
                func_7F3C80EC,
                func_7F3CC0EC,
                func_7F3D00EC,
                func_7F3D40EC,
                func_7F3D80EC,
                func_7F3DC0EC,
                func_7F3E00EC,
                func_7F3E40EC,
                func_7F3E80EC,
                func_7F3EC0EC,
                func_7F3F00EC,
                func_7F3F40EC,
                func_7F3F80EC,
                func_7F3FC0EC,
                func_7F4000EC,
                func_7F4040EC,
                func_7F4080EC,
                func_7F40C0EC,
                func_7F4100EC,
                func_7F4140EC,
                func_7F4180EC,
                func_7F41C0EC,
                func_7F4200EC,
                func_7F4240EC,
                func_7F4280EC,
                func_7F42C0EC,
                func_7F4300EC,
                func_7F4340EC,
                func_7F4380EC,
                func_7F43C0EC,
                func_7F4400EC,
                func_7F4440EC,
                func_7F4480EC,
                func_7F44C0EC,
                func_7F4500EC,
                func_7F4540EC,
                func_7F4580EC,
                func_7F45C0EC,
            };
            return rel_chunk_functions[offset / 0x00004000u];
        }
    }
    {
        u32 offset = address - 0x800055E0u;
        if (offset < 0x0005CC60u && (offset & 3u) == 0u) {
            static const DolRecompFunction chunk_functions[] = {
                func_800055E0,
                func_800095E0,
                func_8000D5E0,
                func_800115E0,
                func_800155E0,
                func_800195E0,
                func_8001D5E0,
                func_800215E0,
                func_800255E0,
                func_800295E0,
                func_8002D5E0,
                func_800315E0,
                func_800355E0,
                func_800395E0,
                func_8003D5E0,
                func_800415E0,
                func_800455E0,
                func_800495E0,
                func_8004D5E0,
                func_800515E0,
                func_800555E0,
                func_800595E0,
                func_8005D5E0,
                func_800615E0,
            };
            return chunk_functions[offset / 0x00004000u];
        }
    }
    if (address >= 0x80003100u && address < 0x800055E0u && ((address - 0x80003100u) & 3u) == 0u) return func_80003100;
    return NULL;
}

static inline int dolrecomp_call_original(CPUState* ctx, u32 address) {
    DolRecompFunction fn = dolrecomp_find_original(address);
    if (__builtin_expect(!fn, 0)) return 0;
    ctx->pc = address;
    fn(ctx);
    return 1;
}

static inline bool dolrecomp_physical_pc_alias(CPUState* ctx, u32 address, u32* alias_out) {
    if (address < ctx->ram_size) {
        *alias_out = address | GC_RAM_BASE;
        return *alias_out != address;
    }
    return false;
}

static inline int dolrecomp_call(CPUState* ctx, u32 address) {
    u32 alias;
    ctx->pc = address;
    if (__builtin_expect(dolrecomp_dispatch_replacement(ctx, address), 0)) return 1;
    if (__builtin_expect(ppc_host_call(ctx, address), 0)) return 1;
    if (__builtin_expect(dolrecomp_call_original(ctx, address), 1)) return 1;
    if (__builtin_expect(dolrecomp_physical_pc_alias(ctx, address, &alias), 0)) {
        ctx->pc = alias;
        if (dolrecomp_dispatch_replacement(ctx, alias)) return 1;
        if (ppc_host_call(ctx, alias)) return 1;
        if (dolrecomp_call_original(ctx, alias)) return 1;
    }
    return 0;
}

static inline DOLRECOMP_UNUSED int dolrecomp_run_blocks(CPUState* ctx, u32 max_blocks) {
    u32 blocks = 0;
    while (max_blocks == 0u || blocks < max_blocks) {
        if (!dolrecomp_call(ctx, ctx->pc)) return 0;
        if (ctx->exception) return 0;
        blocks++;
    }
    return 1;
}

#undef DOLRECOMP_UNUSED

#endif /* RECOMP_GENERATED_H */

// end
