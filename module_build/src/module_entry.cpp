#include <cstdint>
#include <cstdio>

#if defined(_WIN32)
#define RECOMP_EXPORT extern "C" __declspec(dllexport)
#else
#define RECOMP_EXPORT extern "C" __attribute__((visibility("default")))
#endif

#define DOLRECOMP_ENABLE_REPLACEMENTS 1

extern "C" {
#include "backend/module_abi.h"

#if __has_include("generated/generated_symbols.h")
#include "generated/generated_symbols.h"
#endif

#if __has_include("generated/generated.c")
#include "generated/generated.c"
#define HAS_GENERATED_RECOMP 1
#else
#define HAS_GENERATED_RECOMP 0
#endif
}

#if HAS_GENERATED_RECOMP
static int recomp_entry_dispatch(CPUState* state, u32 max_blocks) {
    return dolrecomp_run_blocks(state, max_blocks);
}

static const DolRecompVariantV4 g_recomp_variants[] = {
    {0ULL, DOLRECOMP_SEMANTICS_EXACT, recomp_entry_dispatch, "host-exact"},
};

RECOMP_EXPORT const DolRecompModule dolrecomp_module_v4 = {
    DOLRECOMP_MODULE_ABI_V4,
    static_cast<u32>(sizeof(CPUState)),
    1u,
    g_recomp_variants,
    recomp_entry_dispatch,
};

RECOMP_EXPORT const DolRecompModule* dolrecomp_get_module(void) {
    return &dolrecomp_module_v4;
}

RECOMP_EXPORT int dolrecomp_module_call(CPUState* ctx, u32 address) {
    return dolrecomp_call(ctx, address);
}

RECOMP_EXPORT int dolrecomp_module_run_blocks(CPUState* ctx, u32 max_blocks) {
    return dolrecomp_run_blocks(ctx, max_blocks);
}
#endif
