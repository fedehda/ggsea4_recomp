// DolRecomp output
#include "../generated.h"

static void loop_7F28CC40(CPUState* ctx) {
label_7F28CC40:
    ctx->downcount -= 3;
    ctx->pc = 0x7F28CC40u;
    // 7F28CC40: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F28CC44: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F28CC48: bc    16, 0, 0x7F28CC40
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28CC40u;
                return;
            }
            goto label_7F28CC40;
        }
    }

    ctx->pc = 0x7F28CC4Cu;
}

static void loop_7F28DD78(CPUState* ctx) {
label_7F28DD78:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28DD78u;
    // 7F28DD78: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28DD7Cu;
    // 7F28DD7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F28DD80u;
    // 7F28DD80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28DD84u;
    // 7F28DD84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F28DD88: bc    16, 0, 0x7F28DD78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DD78u;
                return;
            }
            goto label_7F28DD78;
        }
    }

    ctx->pc = 0x7F28DD8Cu;
}

static void loop_7F28DDB0(CPUState* ctx) {
label_7F28DDB0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28DDB0u;
    // 7F28DDB0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28DDB4u;
    // 7F28DDB4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F28DDB8u;
    // 7F28DDB8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28DDBCu;
    // 7F28DDBC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F28DDC0: bc    16, 0, 0x7F28DDB0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DDB0u;
                return;
            }
            goto label_7F28DDB0;
        }
    }

    ctx->pc = 0x7F28DDC4u;
}

static void loop_7F28DE2C(CPUState* ctx) {
label_7F28DE2C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28DE2Cu;
    // 7F28DE2C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28DE30u;
    // 7F28DE30: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F28DE34u;
    // 7F28DE34: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28DE38u;
    // 7F28DE38: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F28DE3C: bc    16, 0, 0x7F28DE2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DE2Cu;
                return;
            }
            goto label_7F28DE2C;
        }
    }

    ctx->pc = 0x7F28DE40u;
}

static void loop_7F28DEA0(CPUState* ctx) {
label_7F28DEA0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28DEA0u;
    // 7F28DEA0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28DEA4u;
    // 7F28DEA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F28DEA8u;
    // 7F28DEA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28DEACu;
    // 7F28DEAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F28DEB0: bc    16, 0, 0x7F28DEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DEA0u;
                return;
            }
            goto label_7F28DEA0;
        }
    }

    ctx->pc = 0x7F28DEB4u;
}

static void loop_7F28DED8(CPUState* ctx) {
label_7F28DED8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28DED8u;
    // 7F28DED8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28DEDCu;
    // 7F28DEDC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F28DEE0u;
    // 7F28DEE0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28DEE4u;
    // 7F28DEE4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F28DEE8: bc    16, 0, 0x7F28DED8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DED8u;
                return;
            }
            goto label_7F28DED8;
        }
    }

    ctx->pc = 0x7F28DEECu;
}

static void loop_7F28E8AC(CPUState* ctx) {
label_7F28E8AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28E8ACu;
    // 7F28E8AC: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28E8B0u;
    // 7F28E8B0: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F28E8B4u;
    // 7F28E8B4: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28E8B8u;
    // 7F28E8B8: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

    // 7F28E8BC: bc    16, 0, 0x7F28E8AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E8ACu;
                return;
            }
            goto label_7F28E8AC;
        }
    }

    ctx->pc = 0x7F28E8C0u;
}

static void loop_7F28E900(CPUState* ctx) {
label_7F28E900:
    ctx->downcount -= 5;
    ctx->pc = 0x7F28E900u;
    // 7F28E900: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F28E904u;
    // 7F28E904: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F28E908u;
    // 7F28E908: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F28E90Cu;
    // 7F28E90C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F28E910: bc    16, 0, 0x7F28E900
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E900u;
                return;
            }
            goto label_7F28E900;
        }
    }

    ctx->pc = 0x7F28E914u;
}

void func_7F28C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F28C0ECu: goto label_7F28C0EC;
    case 0x7F28C0F0u: goto label_7F28C0F0;
    case 0x7F28C0F4u: goto label_7F28C0F4;
    case 0x7F28C0F8u: goto label_7F28C0F8;
    case 0x7F28C0FCu: goto label_7F28C0FC;
    case 0x7F28C100u: goto label_7F28C100;
    case 0x7F28C104u: goto label_7F28C104;
    case 0x7F28C108u: goto label_7F28C108;
    case 0x7F28C10Cu: goto label_7F28C10C;
    case 0x7F28C110u: goto label_7F28C110;
    case 0x7F28C114u: goto label_7F28C114;
    case 0x7F28C118u: goto label_7F28C118;
    case 0x7F28C11Cu: goto label_7F28C11C;
    case 0x7F28C120u: goto label_7F28C120;
    case 0x7F28C124u: goto label_7F28C124;
    case 0x7F28C128u: goto label_7F28C128;
    case 0x7F28C12Cu: goto label_7F28C12C;
    case 0x7F28C130u: goto label_7F28C130;
    case 0x7F28C134u: goto label_7F28C134;
    case 0x7F28C138u: goto label_7F28C138;
    case 0x7F28C13Cu: goto label_7F28C13C;
    case 0x7F28C140u: goto label_7F28C140;
    case 0x7F28C144u: goto label_7F28C144;
    case 0x7F28C148u: goto label_7F28C148;
    case 0x7F28C14Cu: goto label_7F28C14C;
    case 0x7F28C150u: goto label_7F28C150;
    case 0x7F28C154u: goto label_7F28C154;
    case 0x7F28C158u: goto label_7F28C158;
    case 0x7F28C15Cu: goto label_7F28C15C;
    case 0x7F28C160u: goto label_7F28C160;
    case 0x7F28C164u: goto label_7F28C164;
    case 0x7F28C168u: goto label_7F28C168;
    case 0x7F28C16Cu: goto label_7F28C16C;
    case 0x7F28C170u: goto label_7F28C170;
    case 0x7F28C174u: goto label_7F28C174;
    case 0x7F28C178u: goto label_7F28C178;
    case 0x7F28C17Cu: goto label_7F28C17C;
    case 0x7F28C180u: goto label_7F28C180;
    case 0x7F28C184u: goto label_7F28C184;
    case 0x7F28C188u: goto label_7F28C188;
    case 0x7F28C18Cu: goto label_7F28C18C;
    case 0x7F28C190u: goto label_7F28C190;
    case 0x7F28C194u: goto label_7F28C194;
    case 0x7F28C198u: goto label_7F28C198;
    case 0x7F28C19Cu: goto label_7F28C19C;
    case 0x7F28C1A0u: goto label_7F28C1A0;
    case 0x7F28C1A4u: goto label_7F28C1A4;
    case 0x7F28C1A8u: goto label_7F28C1A8;
    case 0x7F28C1ACu: goto label_7F28C1AC;
    case 0x7F28C1B0u: goto label_7F28C1B0;
    case 0x7F28C1B4u: goto label_7F28C1B4;
    case 0x7F28C1B8u: goto label_7F28C1B8;
    case 0x7F28C1BCu: goto label_7F28C1BC;
    case 0x7F28C1C0u: goto label_7F28C1C0;
    case 0x7F28C1C4u: goto label_7F28C1C4;
    case 0x7F28C1C8u: goto label_7F28C1C8;
    case 0x7F28C1CCu: goto label_7F28C1CC;
    case 0x7F28C1D0u: goto label_7F28C1D0;
    case 0x7F28C1D4u: goto label_7F28C1D4;
    case 0x7F28C1D8u: goto label_7F28C1D8;
    case 0x7F28C1DCu: goto label_7F28C1DC;
    case 0x7F28C1E0u: goto label_7F28C1E0;
    case 0x7F28C1E4u: goto label_7F28C1E4;
    case 0x7F28C1E8u: goto label_7F28C1E8;
    case 0x7F28C1ECu: goto label_7F28C1EC;
    case 0x7F28C1F0u: goto label_7F28C1F0;
    case 0x7F28C1F4u: goto label_7F28C1F4;
    case 0x7F28C1F8u: goto label_7F28C1F8;
    case 0x7F28C1FCu: goto label_7F28C1FC;
    case 0x7F28C200u: goto label_7F28C200;
    case 0x7F28C204u: goto label_7F28C204;
    case 0x7F28C208u: goto label_7F28C208;
    case 0x7F28C20Cu: goto label_7F28C20C;
    case 0x7F28C210u: goto label_7F28C210;
    case 0x7F28C214u: goto label_7F28C214;
    case 0x7F28C218u: goto label_7F28C218;
    case 0x7F28C21Cu: goto label_7F28C21C;
    case 0x7F28C220u: goto label_7F28C220;
    case 0x7F28C224u: goto label_7F28C224;
    case 0x7F28C228u: goto label_7F28C228;
    case 0x7F28C22Cu: goto label_7F28C22C;
    case 0x7F28C230u: goto label_7F28C230;
    case 0x7F28C234u: goto label_7F28C234;
    case 0x7F28C238u: goto label_7F28C238;
    case 0x7F28C23Cu: goto label_7F28C23C;
    case 0x7F28C240u: goto label_7F28C240;
    case 0x7F28C244u: goto label_7F28C244;
    case 0x7F28C248u: goto label_7F28C248;
    case 0x7F28C24Cu: goto label_7F28C24C;
    case 0x7F28C250u: goto label_7F28C250;
    case 0x7F28C254u: goto label_7F28C254;
    case 0x7F28C258u: goto label_7F28C258;
    case 0x7F28C25Cu: goto label_7F28C25C;
    case 0x7F28C260u: goto label_7F28C260;
    case 0x7F28C264u: goto label_7F28C264;
    case 0x7F28C268u: goto label_7F28C268;
    case 0x7F28C26Cu: goto label_7F28C26C;
    case 0x7F28C270u: goto label_7F28C270;
    case 0x7F28C274u: goto label_7F28C274;
    case 0x7F28C278u: goto label_7F28C278;
    case 0x7F28C27Cu: goto label_7F28C27C;
    case 0x7F28C280u: goto label_7F28C280;
    case 0x7F28C284u: goto label_7F28C284;
    case 0x7F28C288u: goto label_7F28C288;
    case 0x7F28C28Cu: goto label_7F28C28C;
    case 0x7F28C290u: goto label_7F28C290;
    case 0x7F28C294u: goto label_7F28C294;
    case 0x7F28C298u: goto label_7F28C298;
    case 0x7F28C29Cu: goto label_7F28C29C;
    case 0x7F28C2A0u: goto label_7F28C2A0;
    case 0x7F28C2A4u: goto label_7F28C2A4;
    case 0x7F28C2A8u: goto label_7F28C2A8;
    case 0x7F28C2ACu: goto label_7F28C2AC;
    case 0x7F28C2B0u: goto label_7F28C2B0;
    case 0x7F28C2B4u: goto label_7F28C2B4;
    case 0x7F28C2B8u: goto label_7F28C2B8;
    case 0x7F28C2BCu: goto label_7F28C2BC;
    case 0x7F28C2C0u: goto label_7F28C2C0;
    case 0x7F28C2C4u: goto label_7F28C2C4;
    case 0x7F28C2C8u: goto label_7F28C2C8;
    case 0x7F28C2CCu: goto label_7F28C2CC;
    case 0x7F28C2D0u: goto label_7F28C2D0;
    case 0x7F28C2D4u: goto label_7F28C2D4;
    case 0x7F28C2D8u: goto label_7F28C2D8;
    case 0x7F28C2DCu: goto label_7F28C2DC;
    case 0x7F28C2E0u: goto label_7F28C2E0;
    case 0x7F28C2E4u: goto label_7F28C2E4;
    case 0x7F28C2E8u: goto label_7F28C2E8;
    case 0x7F28C2ECu: goto label_7F28C2EC;
    case 0x7F28C2F0u: goto label_7F28C2F0;
    case 0x7F28C2F4u: goto label_7F28C2F4;
    case 0x7F28C2F8u: goto label_7F28C2F8;
    case 0x7F28C2FCu: goto label_7F28C2FC;
    case 0x7F28C300u: goto label_7F28C300;
    case 0x7F28C304u: goto label_7F28C304;
    case 0x7F28C308u: goto label_7F28C308;
    case 0x7F28C30Cu: goto label_7F28C30C;
    case 0x7F28C310u: goto label_7F28C310;
    case 0x7F28C314u: goto label_7F28C314;
    case 0x7F28C318u: goto label_7F28C318;
    case 0x7F28C31Cu: goto label_7F28C31C;
    case 0x7F28C320u: goto label_7F28C320;
    case 0x7F28C324u: goto label_7F28C324;
    case 0x7F28C328u: goto label_7F28C328;
    case 0x7F28C32Cu: goto label_7F28C32C;
    case 0x7F28C330u: goto label_7F28C330;
    case 0x7F28C334u: goto label_7F28C334;
    case 0x7F28C338u: goto label_7F28C338;
    case 0x7F28C33Cu: goto label_7F28C33C;
    case 0x7F28C340u: goto label_7F28C340;
    case 0x7F28C344u: goto label_7F28C344;
    case 0x7F28C348u: goto label_7F28C348;
    case 0x7F28C34Cu: goto label_7F28C34C;
    case 0x7F28C350u: goto label_7F28C350;
    case 0x7F28C354u: goto label_7F28C354;
    case 0x7F28C358u: goto label_7F28C358;
    case 0x7F28C35Cu: goto label_7F28C35C;
    case 0x7F28C360u: goto label_7F28C360;
    case 0x7F28C364u: goto label_7F28C364;
    case 0x7F28C368u: goto label_7F28C368;
    case 0x7F28C36Cu: goto label_7F28C36C;
    case 0x7F28C370u: goto label_7F28C370;
    case 0x7F28C374u: goto label_7F28C374;
    case 0x7F28C378u: goto label_7F28C378;
    case 0x7F28C37Cu: goto label_7F28C37C;
    case 0x7F28C380u: goto label_7F28C380;
    case 0x7F28C384u: goto label_7F28C384;
    case 0x7F28C388u: goto label_7F28C388;
    case 0x7F28C38Cu: goto label_7F28C38C;
    case 0x7F28C390u: goto label_7F28C390;
    case 0x7F28C394u: goto label_7F28C394;
    case 0x7F28C398u: goto label_7F28C398;
    case 0x7F28C39Cu: goto label_7F28C39C;
    case 0x7F28C3A0u: goto label_7F28C3A0;
    case 0x7F28C3A4u: goto label_7F28C3A4;
    case 0x7F28C3A8u: goto label_7F28C3A8;
    case 0x7F28C3ACu: goto label_7F28C3AC;
    case 0x7F28C3B0u: goto label_7F28C3B0;
    case 0x7F28C3B4u: goto label_7F28C3B4;
    case 0x7F28C3B8u: goto label_7F28C3B8;
    case 0x7F28C3BCu: goto label_7F28C3BC;
    case 0x7F28C3C0u: goto label_7F28C3C0;
    case 0x7F28C3C4u: goto label_7F28C3C4;
    case 0x7F28C3C8u: goto label_7F28C3C8;
    case 0x7F28C3CCu: goto label_7F28C3CC;
    case 0x7F28C3D0u: goto label_7F28C3D0;
    case 0x7F28C3D4u: goto label_7F28C3D4;
    case 0x7F28C3D8u: goto label_7F28C3D8;
    case 0x7F28C3DCu: goto label_7F28C3DC;
    case 0x7F28C3E0u: goto label_7F28C3E0;
    case 0x7F28C3E4u: goto label_7F28C3E4;
    case 0x7F28C3E8u: goto label_7F28C3E8;
    case 0x7F28C3ECu: goto label_7F28C3EC;
    case 0x7F28C3F0u: goto label_7F28C3F0;
    case 0x7F28C3F4u: goto label_7F28C3F4;
    case 0x7F28C3F8u: goto label_7F28C3F8;
    case 0x7F28C3FCu: goto label_7F28C3FC;
    case 0x7F28C400u: goto label_7F28C400;
    case 0x7F28C404u: goto label_7F28C404;
    case 0x7F28C408u: goto label_7F28C408;
    case 0x7F28C40Cu: goto label_7F28C40C;
    case 0x7F28C410u: goto label_7F28C410;
    case 0x7F28C414u: goto label_7F28C414;
    case 0x7F28C418u: goto label_7F28C418;
    case 0x7F28C41Cu: goto label_7F28C41C;
    case 0x7F28C420u: goto label_7F28C420;
    case 0x7F28C424u: goto label_7F28C424;
    case 0x7F28C428u: goto label_7F28C428;
    case 0x7F28C42Cu: goto label_7F28C42C;
    case 0x7F28C430u: goto label_7F28C430;
    case 0x7F28C434u: goto label_7F28C434;
    case 0x7F28C438u: goto label_7F28C438;
    case 0x7F28C43Cu: goto label_7F28C43C;
    case 0x7F28C440u: goto label_7F28C440;
    case 0x7F28C444u: goto label_7F28C444;
    case 0x7F28C448u: goto label_7F28C448;
    case 0x7F28C44Cu: goto label_7F28C44C;
    case 0x7F28C450u: goto label_7F28C450;
    case 0x7F28C454u: goto label_7F28C454;
    case 0x7F28C458u: goto label_7F28C458;
    case 0x7F28C45Cu: goto label_7F28C45C;
    case 0x7F28C460u: goto label_7F28C460;
    case 0x7F28C464u: goto label_7F28C464;
    case 0x7F28C468u: goto label_7F28C468;
    case 0x7F28C46Cu: goto label_7F28C46C;
    case 0x7F28C470u: goto label_7F28C470;
    case 0x7F28C474u: goto label_7F28C474;
    case 0x7F28C478u: goto label_7F28C478;
    case 0x7F28C47Cu: goto label_7F28C47C;
    case 0x7F28C480u: goto label_7F28C480;
    case 0x7F28C484u: goto label_7F28C484;
    case 0x7F28C488u: goto label_7F28C488;
    case 0x7F28C48Cu: goto label_7F28C48C;
    case 0x7F28C490u: goto label_7F28C490;
    case 0x7F28C494u: goto label_7F28C494;
    case 0x7F28C498u: goto label_7F28C498;
    case 0x7F28C49Cu: goto label_7F28C49C;
    case 0x7F28C4A0u: goto label_7F28C4A0;
    case 0x7F28C4A4u: goto label_7F28C4A4;
    case 0x7F28C4A8u: goto label_7F28C4A8;
    case 0x7F28C4ACu: goto label_7F28C4AC;
    case 0x7F28C4B0u: goto label_7F28C4B0;
    case 0x7F28C4B4u: goto label_7F28C4B4;
    case 0x7F28C4B8u: goto label_7F28C4B8;
    case 0x7F28C4BCu: goto label_7F28C4BC;
    case 0x7F28C4C0u: goto label_7F28C4C0;
    case 0x7F28C4C4u: goto label_7F28C4C4;
    case 0x7F28C4C8u: goto label_7F28C4C8;
    case 0x7F28C4CCu: goto label_7F28C4CC;
    case 0x7F28C4D0u: goto label_7F28C4D0;
    case 0x7F28C4D4u: goto label_7F28C4D4;
    case 0x7F28C4D8u: goto label_7F28C4D8;
    case 0x7F28C4DCu: goto label_7F28C4DC;
    case 0x7F28C4E0u: goto label_7F28C4E0;
    case 0x7F28C4E4u: goto label_7F28C4E4;
    case 0x7F28C4E8u: goto label_7F28C4E8;
    case 0x7F28C4ECu: goto label_7F28C4EC;
    case 0x7F28C4F0u: goto label_7F28C4F0;
    case 0x7F28C4F4u: goto label_7F28C4F4;
    case 0x7F28C4F8u: goto label_7F28C4F8;
    case 0x7F28C4FCu: goto label_7F28C4FC;
    case 0x7F28C500u: goto label_7F28C500;
    case 0x7F28C504u: goto label_7F28C504;
    case 0x7F28C508u: goto label_7F28C508;
    case 0x7F28C50Cu: goto label_7F28C50C;
    case 0x7F28C510u: goto label_7F28C510;
    case 0x7F28C514u: goto label_7F28C514;
    case 0x7F28C518u: goto label_7F28C518;
    case 0x7F28C51Cu: goto label_7F28C51C;
    case 0x7F28C520u: goto label_7F28C520;
    case 0x7F28C524u: goto label_7F28C524;
    case 0x7F28C528u: goto label_7F28C528;
    case 0x7F28C52Cu: goto label_7F28C52C;
    case 0x7F28C530u: goto label_7F28C530;
    case 0x7F28C534u: goto label_7F28C534;
    case 0x7F28C538u: goto label_7F28C538;
    case 0x7F28C53Cu: goto label_7F28C53C;
    case 0x7F28C540u: goto label_7F28C540;
    case 0x7F28C544u: goto label_7F28C544;
    case 0x7F28C548u: goto label_7F28C548;
    case 0x7F28C54Cu: goto label_7F28C54C;
    case 0x7F28C550u: goto label_7F28C550;
    case 0x7F28C554u: goto label_7F28C554;
    case 0x7F28C558u: goto label_7F28C558;
    case 0x7F28C55Cu: goto label_7F28C55C;
    case 0x7F28C560u: goto label_7F28C560;
    case 0x7F28C564u: goto label_7F28C564;
    case 0x7F28C568u: goto label_7F28C568;
    case 0x7F28C56Cu: goto label_7F28C56C;
    case 0x7F28C570u: goto label_7F28C570;
    case 0x7F28C574u: goto label_7F28C574;
    case 0x7F28C578u: goto label_7F28C578;
    case 0x7F28C57Cu: goto label_7F28C57C;
    case 0x7F28C580u: goto label_7F28C580;
    case 0x7F28C584u: goto label_7F28C584;
    case 0x7F28C588u: goto label_7F28C588;
    case 0x7F28C58Cu: goto label_7F28C58C;
    case 0x7F28C590u: goto label_7F28C590;
    case 0x7F28C594u: goto label_7F28C594;
    case 0x7F28C598u: goto label_7F28C598;
    case 0x7F28C59Cu: goto label_7F28C59C;
    case 0x7F28C5A0u: goto label_7F28C5A0;
    case 0x7F28C5A4u: goto label_7F28C5A4;
    case 0x7F28C5A8u: goto label_7F28C5A8;
    case 0x7F28C5ACu: goto label_7F28C5AC;
    case 0x7F28C5B0u: goto label_7F28C5B0;
    case 0x7F28C5B4u: goto label_7F28C5B4;
    case 0x7F28C5B8u: goto label_7F28C5B8;
    case 0x7F28C5BCu: goto label_7F28C5BC;
    case 0x7F28C5C0u: goto label_7F28C5C0;
    case 0x7F28C5C4u: goto label_7F28C5C4;
    case 0x7F28C5C8u: goto label_7F28C5C8;
    case 0x7F28C5CCu: goto label_7F28C5CC;
    case 0x7F28C5D0u: goto label_7F28C5D0;
    case 0x7F28C5D4u: goto label_7F28C5D4;
    case 0x7F28C5D8u: goto label_7F28C5D8;
    case 0x7F28C5DCu: goto label_7F28C5DC;
    case 0x7F28C5E0u: goto label_7F28C5E0;
    case 0x7F28C5E4u: goto label_7F28C5E4;
    case 0x7F28C5E8u: goto label_7F28C5E8;
    case 0x7F28C5ECu: goto label_7F28C5EC;
    case 0x7F28C5F0u: goto label_7F28C5F0;
    case 0x7F28C5F4u: goto label_7F28C5F4;
    case 0x7F28C5F8u: goto label_7F28C5F8;
    case 0x7F28C5FCu: goto label_7F28C5FC;
    case 0x7F28C600u: goto label_7F28C600;
    case 0x7F28C604u: goto label_7F28C604;
    case 0x7F28C608u: goto label_7F28C608;
    case 0x7F28C60Cu: goto label_7F28C60C;
    case 0x7F28C610u: goto label_7F28C610;
    case 0x7F28C614u: goto label_7F28C614;
    case 0x7F28C618u: goto label_7F28C618;
    case 0x7F28C61Cu: goto label_7F28C61C;
    case 0x7F28C620u: goto label_7F28C620;
    case 0x7F28C624u: goto label_7F28C624;
    case 0x7F28C628u: goto label_7F28C628;
    case 0x7F28C62Cu: goto label_7F28C62C;
    case 0x7F28C630u: goto label_7F28C630;
    case 0x7F28C634u: goto label_7F28C634;
    case 0x7F28C638u: goto label_7F28C638;
    case 0x7F28C63Cu: goto label_7F28C63C;
    case 0x7F28C640u: goto label_7F28C640;
    case 0x7F28C644u: goto label_7F28C644;
    case 0x7F28C648u: goto label_7F28C648;
    case 0x7F28C64Cu: goto label_7F28C64C;
    case 0x7F28C650u: goto label_7F28C650;
    case 0x7F28C654u: goto label_7F28C654;
    case 0x7F28C658u: goto label_7F28C658;
    case 0x7F28C65Cu: goto label_7F28C65C;
    case 0x7F28C660u: goto label_7F28C660;
    case 0x7F28C664u: goto label_7F28C664;
    case 0x7F28C668u: goto label_7F28C668;
    case 0x7F28C66Cu: goto label_7F28C66C;
    case 0x7F28C670u: goto label_7F28C670;
    case 0x7F28C674u: goto label_7F28C674;
    case 0x7F28C678u: goto label_7F28C678;
    case 0x7F28C67Cu: goto label_7F28C67C;
    case 0x7F28C680u: goto label_7F28C680;
    case 0x7F28C684u: goto label_7F28C684;
    case 0x7F28C688u: goto label_7F28C688;
    case 0x7F28C68Cu: goto label_7F28C68C;
    case 0x7F28C690u: goto label_7F28C690;
    case 0x7F28C694u: goto label_7F28C694;
    case 0x7F28C698u: goto label_7F28C698;
    case 0x7F28C69Cu: goto label_7F28C69C;
    case 0x7F28C6A0u: goto label_7F28C6A0;
    case 0x7F28C6A4u: goto label_7F28C6A4;
    case 0x7F28C6A8u: goto label_7F28C6A8;
    case 0x7F28C6ACu: goto label_7F28C6AC;
    case 0x7F28C6B0u: goto label_7F28C6B0;
    case 0x7F28C6B4u: goto label_7F28C6B4;
    case 0x7F28C6B8u: goto label_7F28C6B8;
    case 0x7F28C6BCu: goto label_7F28C6BC;
    case 0x7F28C6C0u: goto label_7F28C6C0;
    case 0x7F28C6C4u: goto label_7F28C6C4;
    case 0x7F28C6C8u: goto label_7F28C6C8;
    case 0x7F28C6CCu: goto label_7F28C6CC;
    case 0x7F28C6D0u: goto label_7F28C6D0;
    case 0x7F28C6D4u: goto label_7F28C6D4;
    case 0x7F28C6D8u: goto label_7F28C6D8;
    case 0x7F28C6DCu: goto label_7F28C6DC;
    case 0x7F28C6E0u: goto label_7F28C6E0;
    case 0x7F28C6E4u: goto label_7F28C6E4;
    case 0x7F28C6E8u: goto label_7F28C6E8;
    case 0x7F28C6ECu: goto label_7F28C6EC;
    case 0x7F28C6F0u: goto label_7F28C6F0;
    case 0x7F28C6F4u: goto label_7F28C6F4;
    case 0x7F28C6F8u: goto label_7F28C6F8;
    case 0x7F28C6FCu: goto label_7F28C6FC;
    case 0x7F28C700u: goto label_7F28C700;
    case 0x7F28C704u: goto label_7F28C704;
    case 0x7F28C708u: goto label_7F28C708;
    case 0x7F28C70Cu: goto label_7F28C70C;
    case 0x7F28C710u: goto label_7F28C710;
    case 0x7F28C714u: goto label_7F28C714;
    case 0x7F28C718u: goto label_7F28C718;
    case 0x7F28C71Cu: goto label_7F28C71C;
    case 0x7F28C720u: goto label_7F28C720;
    case 0x7F28C724u: goto label_7F28C724;
    case 0x7F28C728u: goto label_7F28C728;
    case 0x7F28C72Cu: goto label_7F28C72C;
    case 0x7F28C730u: goto label_7F28C730;
    case 0x7F28C734u: goto label_7F28C734;
    case 0x7F28C738u: goto label_7F28C738;
    case 0x7F28C73Cu: goto label_7F28C73C;
    case 0x7F28C740u: goto label_7F28C740;
    case 0x7F28C744u: goto label_7F28C744;
    case 0x7F28C748u: goto label_7F28C748;
    case 0x7F28C74Cu: goto label_7F28C74C;
    case 0x7F28C750u: goto label_7F28C750;
    case 0x7F28C754u: goto label_7F28C754;
    case 0x7F28C758u: goto label_7F28C758;
    case 0x7F28C75Cu: goto label_7F28C75C;
    case 0x7F28C760u: goto label_7F28C760;
    case 0x7F28C764u: goto label_7F28C764;
    case 0x7F28C768u: goto label_7F28C768;
    case 0x7F28C76Cu: goto label_7F28C76C;
    case 0x7F28C770u: goto label_7F28C770;
    case 0x7F28C774u: goto label_7F28C774;
    case 0x7F28C778u: goto label_7F28C778;
    case 0x7F28C77Cu: goto label_7F28C77C;
    case 0x7F28C780u: goto label_7F28C780;
    case 0x7F28C784u: goto label_7F28C784;
    case 0x7F28C788u: goto label_7F28C788;
    case 0x7F28C78Cu: goto label_7F28C78C;
    case 0x7F28C790u: goto label_7F28C790;
    case 0x7F28C794u: goto label_7F28C794;
    case 0x7F28C798u: goto label_7F28C798;
    case 0x7F28C79Cu: goto label_7F28C79C;
    case 0x7F28C7A0u: goto label_7F28C7A0;
    case 0x7F28C7A4u: goto label_7F28C7A4;
    case 0x7F28C7A8u: goto label_7F28C7A8;
    case 0x7F28C7ACu: goto label_7F28C7AC;
    case 0x7F28C7B0u: goto label_7F28C7B0;
    case 0x7F28C7B4u: goto label_7F28C7B4;
    case 0x7F28C7B8u: goto label_7F28C7B8;
    case 0x7F28C7BCu: goto label_7F28C7BC;
    case 0x7F28C7C0u: goto label_7F28C7C0;
    case 0x7F28C7C4u: goto label_7F28C7C4;
    case 0x7F28C7C8u: goto label_7F28C7C8;
    case 0x7F28C7CCu: goto label_7F28C7CC;
    case 0x7F28C7D0u: goto label_7F28C7D0;
    case 0x7F28C7D4u: goto label_7F28C7D4;
    case 0x7F28C7D8u: goto label_7F28C7D8;
    case 0x7F28C7DCu: goto label_7F28C7DC;
    case 0x7F28C7E0u: goto label_7F28C7E0;
    case 0x7F28C7E4u: goto label_7F28C7E4;
    case 0x7F28C7E8u: goto label_7F28C7E8;
    case 0x7F28C7ECu: goto label_7F28C7EC;
    case 0x7F28C7F0u: goto label_7F28C7F0;
    case 0x7F28C7F4u: goto label_7F28C7F4;
    case 0x7F28C7F8u: goto label_7F28C7F8;
    case 0x7F28C7FCu: goto label_7F28C7FC;
    case 0x7F28C800u: goto label_7F28C800;
    case 0x7F28C804u: goto label_7F28C804;
    case 0x7F28C808u: goto label_7F28C808;
    case 0x7F28C80Cu: goto label_7F28C80C;
    case 0x7F28C810u: goto label_7F28C810;
    case 0x7F28C814u: goto label_7F28C814;
    case 0x7F28C818u: goto label_7F28C818;
    case 0x7F28C81Cu: goto label_7F28C81C;
    case 0x7F28C820u: goto label_7F28C820;
    case 0x7F28C824u: goto label_7F28C824;
    case 0x7F28C828u: goto label_7F28C828;
    case 0x7F28C82Cu: goto label_7F28C82C;
    case 0x7F28C830u: goto label_7F28C830;
    case 0x7F28C834u: goto label_7F28C834;
    case 0x7F28C838u: goto label_7F28C838;
    case 0x7F28C83Cu: goto label_7F28C83C;
    case 0x7F28C840u: goto label_7F28C840;
    case 0x7F28C844u: goto label_7F28C844;
    case 0x7F28C848u: goto label_7F28C848;
    case 0x7F28C84Cu: goto label_7F28C84C;
    case 0x7F28C850u: goto label_7F28C850;
    case 0x7F28C854u: goto label_7F28C854;
    case 0x7F28C858u: goto label_7F28C858;
    case 0x7F28C85Cu: goto label_7F28C85C;
    case 0x7F28C860u: goto label_7F28C860;
    case 0x7F28C864u: goto label_7F28C864;
    case 0x7F28C868u: goto label_7F28C868;
    case 0x7F28C86Cu: goto label_7F28C86C;
    case 0x7F28C870u: goto label_7F28C870;
    case 0x7F28C874u: goto label_7F28C874;
    case 0x7F28C878u: goto label_7F28C878;
    case 0x7F28C87Cu: goto label_7F28C87C;
    case 0x7F28C880u: goto label_7F28C880;
    case 0x7F28C884u: goto label_7F28C884;
    case 0x7F28C888u: goto label_7F28C888;
    case 0x7F28C88Cu: goto label_7F28C88C;
    case 0x7F28C890u: goto label_7F28C890;
    case 0x7F28C894u: goto label_7F28C894;
    case 0x7F28C898u: goto label_7F28C898;
    case 0x7F28C89Cu: goto label_7F28C89C;
    case 0x7F28C8A0u: goto label_7F28C8A0;
    case 0x7F28C8A4u: goto label_7F28C8A4;
    case 0x7F28C8A8u: goto label_7F28C8A8;
    case 0x7F28C8ACu: goto label_7F28C8AC;
    case 0x7F28C8B0u: goto label_7F28C8B0;
    case 0x7F28C8B4u: goto label_7F28C8B4;
    case 0x7F28C8B8u: goto label_7F28C8B8;
    case 0x7F28C8BCu: goto label_7F28C8BC;
    case 0x7F28C8C0u: goto label_7F28C8C0;
    case 0x7F28C8C4u: goto label_7F28C8C4;
    case 0x7F28C8C8u: goto label_7F28C8C8;
    case 0x7F28C8CCu: goto label_7F28C8CC;
    case 0x7F28C8D0u: goto label_7F28C8D0;
    case 0x7F28C8D4u: goto label_7F28C8D4;
    case 0x7F28C8D8u: goto label_7F28C8D8;
    case 0x7F28C8DCu: goto label_7F28C8DC;
    case 0x7F28C8E0u: goto label_7F28C8E0;
    case 0x7F28C8E4u: goto label_7F28C8E4;
    case 0x7F28C8E8u: goto label_7F28C8E8;
    case 0x7F28C8ECu: goto label_7F28C8EC;
    case 0x7F28C8F0u: goto label_7F28C8F0;
    case 0x7F28C8F4u: goto label_7F28C8F4;
    case 0x7F28C8F8u: goto label_7F28C8F8;
    case 0x7F28C8FCu: goto label_7F28C8FC;
    case 0x7F28C900u: goto label_7F28C900;
    case 0x7F28C904u: goto label_7F28C904;
    case 0x7F28C908u: goto label_7F28C908;
    case 0x7F28C90Cu: goto label_7F28C90C;
    case 0x7F28C910u: goto label_7F28C910;
    case 0x7F28C914u: goto label_7F28C914;
    case 0x7F28C918u: goto label_7F28C918;
    case 0x7F28C91Cu: goto label_7F28C91C;
    case 0x7F28C920u: goto label_7F28C920;
    case 0x7F28C924u: goto label_7F28C924;
    case 0x7F28C928u: goto label_7F28C928;
    case 0x7F28C92Cu: goto label_7F28C92C;
    case 0x7F28C930u: goto label_7F28C930;
    case 0x7F28C934u: goto label_7F28C934;
    case 0x7F28C938u: goto label_7F28C938;
    case 0x7F28C93Cu: goto label_7F28C93C;
    case 0x7F28C940u: goto label_7F28C940;
    case 0x7F28C944u: goto label_7F28C944;
    case 0x7F28C948u: goto label_7F28C948;
    case 0x7F28C94Cu: goto label_7F28C94C;
    case 0x7F28C950u: goto label_7F28C950;
    case 0x7F28C954u: goto label_7F28C954;
    case 0x7F28C958u: goto label_7F28C958;
    case 0x7F28C95Cu: goto label_7F28C95C;
    case 0x7F28C960u: goto label_7F28C960;
    case 0x7F28C964u: goto label_7F28C964;
    case 0x7F28C968u: goto label_7F28C968;
    case 0x7F28C96Cu: goto label_7F28C96C;
    case 0x7F28C970u: goto label_7F28C970;
    case 0x7F28C974u: goto label_7F28C974;
    case 0x7F28C978u: goto label_7F28C978;
    case 0x7F28C97Cu: goto label_7F28C97C;
    case 0x7F28C980u: goto label_7F28C980;
    case 0x7F28C984u: goto label_7F28C984;
    case 0x7F28C988u: goto label_7F28C988;
    case 0x7F28C98Cu: goto label_7F28C98C;
    case 0x7F28C990u: goto label_7F28C990;
    case 0x7F28C994u: goto label_7F28C994;
    case 0x7F28C998u: goto label_7F28C998;
    case 0x7F28C99Cu: goto label_7F28C99C;
    case 0x7F28C9A0u: goto label_7F28C9A0;
    case 0x7F28C9A4u: goto label_7F28C9A4;
    case 0x7F28C9A8u: goto label_7F28C9A8;
    case 0x7F28C9ACu: goto label_7F28C9AC;
    case 0x7F28C9B0u: goto label_7F28C9B0;
    case 0x7F28C9B4u: goto label_7F28C9B4;
    case 0x7F28C9B8u: goto label_7F28C9B8;
    case 0x7F28C9BCu: goto label_7F28C9BC;
    case 0x7F28C9C0u: goto label_7F28C9C0;
    case 0x7F28C9C4u: goto label_7F28C9C4;
    case 0x7F28C9C8u: goto label_7F28C9C8;
    case 0x7F28C9CCu: goto label_7F28C9CC;
    case 0x7F28C9D0u: goto label_7F28C9D0;
    case 0x7F28C9D4u: goto label_7F28C9D4;
    case 0x7F28C9D8u: goto label_7F28C9D8;
    case 0x7F28C9DCu: goto label_7F28C9DC;
    case 0x7F28C9E0u: goto label_7F28C9E0;
    case 0x7F28C9E4u: goto label_7F28C9E4;
    case 0x7F28C9E8u: goto label_7F28C9E8;
    case 0x7F28C9ECu: goto label_7F28C9EC;
    case 0x7F28C9F0u: goto label_7F28C9F0;
    case 0x7F28C9F4u: goto label_7F28C9F4;
    case 0x7F28C9F8u: goto label_7F28C9F8;
    case 0x7F28C9FCu: goto label_7F28C9FC;
    case 0x7F28CA00u: goto label_7F28CA00;
    case 0x7F28CA04u: goto label_7F28CA04;
    case 0x7F28CA08u: goto label_7F28CA08;
    case 0x7F28CA0Cu: goto label_7F28CA0C;
    case 0x7F28CA10u: goto label_7F28CA10;
    case 0x7F28CA14u: goto label_7F28CA14;
    case 0x7F28CA18u: goto label_7F28CA18;
    case 0x7F28CA1Cu: goto label_7F28CA1C;
    case 0x7F28CA20u: goto label_7F28CA20;
    case 0x7F28CA24u: goto label_7F28CA24;
    case 0x7F28CA28u: goto label_7F28CA28;
    case 0x7F28CA2Cu: goto label_7F28CA2C;
    case 0x7F28CA30u: goto label_7F28CA30;
    case 0x7F28CA34u: goto label_7F28CA34;
    case 0x7F28CA38u: goto label_7F28CA38;
    case 0x7F28CA3Cu: goto label_7F28CA3C;
    case 0x7F28CA40u: goto label_7F28CA40;
    case 0x7F28CA44u: goto label_7F28CA44;
    case 0x7F28CA48u: goto label_7F28CA48;
    case 0x7F28CA4Cu: goto label_7F28CA4C;
    case 0x7F28CA50u: goto label_7F28CA50;
    case 0x7F28CA54u: goto label_7F28CA54;
    case 0x7F28CA58u: goto label_7F28CA58;
    case 0x7F28CA5Cu: goto label_7F28CA5C;
    case 0x7F28CA60u: goto label_7F28CA60;
    case 0x7F28CA64u: goto label_7F28CA64;
    case 0x7F28CA68u: goto label_7F28CA68;
    case 0x7F28CA6Cu: goto label_7F28CA6C;
    case 0x7F28CA70u: goto label_7F28CA70;
    case 0x7F28CA74u: goto label_7F28CA74;
    case 0x7F28CA78u: goto label_7F28CA78;
    case 0x7F28CA7Cu: goto label_7F28CA7C;
    case 0x7F28CA80u: goto label_7F28CA80;
    case 0x7F28CA84u: goto label_7F28CA84;
    case 0x7F28CA88u: goto label_7F28CA88;
    case 0x7F28CA8Cu: goto label_7F28CA8C;
    case 0x7F28CA90u: goto label_7F28CA90;
    case 0x7F28CA94u: goto label_7F28CA94;
    case 0x7F28CA98u: goto label_7F28CA98;
    case 0x7F28CA9Cu: goto label_7F28CA9C;
    case 0x7F28CAA0u: goto label_7F28CAA0;
    case 0x7F28CAA4u: goto label_7F28CAA4;
    case 0x7F28CAA8u: goto label_7F28CAA8;
    case 0x7F28CAACu: goto label_7F28CAAC;
    case 0x7F28CAB0u: goto label_7F28CAB0;
    case 0x7F28CAB4u: goto label_7F28CAB4;
    case 0x7F28CAB8u: goto label_7F28CAB8;
    case 0x7F28CABCu: goto label_7F28CABC;
    case 0x7F28CAC0u: goto label_7F28CAC0;
    case 0x7F28CAC4u: goto label_7F28CAC4;
    case 0x7F28CAC8u: goto label_7F28CAC8;
    case 0x7F28CACCu: goto label_7F28CACC;
    case 0x7F28CAD0u: goto label_7F28CAD0;
    case 0x7F28CAD4u: goto label_7F28CAD4;
    case 0x7F28CAD8u: goto label_7F28CAD8;
    case 0x7F28CADCu: goto label_7F28CADC;
    case 0x7F28CAE0u: goto label_7F28CAE0;
    case 0x7F28CAE4u: goto label_7F28CAE4;
    case 0x7F28CAE8u: goto label_7F28CAE8;
    case 0x7F28CAECu: goto label_7F28CAEC;
    case 0x7F28CAF0u: goto label_7F28CAF0;
    case 0x7F28CAF4u: goto label_7F28CAF4;
    case 0x7F28CAF8u: goto label_7F28CAF8;
    case 0x7F28CAFCu: goto label_7F28CAFC;
    case 0x7F28CB00u: goto label_7F28CB00;
    case 0x7F28CB04u: goto label_7F28CB04;
    case 0x7F28CB08u: goto label_7F28CB08;
    case 0x7F28CB0Cu: goto label_7F28CB0C;
    case 0x7F28CB10u: goto label_7F28CB10;
    case 0x7F28CB14u: goto label_7F28CB14;
    case 0x7F28CB18u: goto label_7F28CB18;
    case 0x7F28CB1Cu: goto label_7F28CB1C;
    case 0x7F28CB20u: goto label_7F28CB20;
    case 0x7F28CB24u: goto label_7F28CB24;
    case 0x7F28CB28u: goto label_7F28CB28;
    case 0x7F28CB2Cu: goto label_7F28CB2C;
    case 0x7F28CB30u: goto label_7F28CB30;
    case 0x7F28CB34u: goto label_7F28CB34;
    case 0x7F28CB38u: goto label_7F28CB38;
    case 0x7F28CB3Cu: goto label_7F28CB3C;
    case 0x7F28CB40u: goto label_7F28CB40;
    case 0x7F28CB44u: goto label_7F28CB44;
    case 0x7F28CB48u: goto label_7F28CB48;
    case 0x7F28CB4Cu: goto label_7F28CB4C;
    case 0x7F28CB50u: goto label_7F28CB50;
    case 0x7F28CB54u: goto label_7F28CB54;
    case 0x7F28CB58u: goto label_7F28CB58;
    case 0x7F28CB5Cu: goto label_7F28CB5C;
    case 0x7F28CB60u: goto label_7F28CB60;
    case 0x7F28CB64u: goto label_7F28CB64;
    case 0x7F28CB68u: goto label_7F28CB68;
    case 0x7F28CB6Cu: goto label_7F28CB6C;
    case 0x7F28CB70u: goto label_7F28CB70;
    case 0x7F28CB74u: goto label_7F28CB74;
    case 0x7F28CB78u: goto label_7F28CB78;
    case 0x7F28CB7Cu: goto label_7F28CB7C;
    case 0x7F28CB80u: goto label_7F28CB80;
    case 0x7F28CB84u: goto label_7F28CB84;
    case 0x7F28CB88u: goto label_7F28CB88;
    case 0x7F28CB8Cu: goto label_7F28CB8C;
    case 0x7F28CB90u: goto label_7F28CB90;
    case 0x7F28CB94u: goto label_7F28CB94;
    case 0x7F28CB98u: goto label_7F28CB98;
    case 0x7F28CB9Cu: goto label_7F28CB9C;
    case 0x7F28CBA0u: goto label_7F28CBA0;
    case 0x7F28CBA4u: goto label_7F28CBA4;
    case 0x7F28CBA8u: goto label_7F28CBA8;
    case 0x7F28CBACu: goto label_7F28CBAC;
    case 0x7F28CBB0u: goto label_7F28CBB0;
    case 0x7F28CBB4u: goto label_7F28CBB4;
    case 0x7F28CBB8u: goto label_7F28CBB8;
    case 0x7F28CBBCu: goto label_7F28CBBC;
    case 0x7F28CBC0u: goto label_7F28CBC0;
    case 0x7F28CBC4u: goto label_7F28CBC4;
    case 0x7F28CBC8u: goto label_7F28CBC8;
    case 0x7F28CBCCu: goto label_7F28CBCC;
    case 0x7F28CBD0u: goto label_7F28CBD0;
    case 0x7F28CBD4u: goto label_7F28CBD4;
    case 0x7F28CBD8u: goto label_7F28CBD8;
    case 0x7F28CBDCu: goto label_7F28CBDC;
    case 0x7F28CBE0u: goto label_7F28CBE0;
    case 0x7F28CBE4u: goto label_7F28CBE4;
    case 0x7F28CBE8u: goto label_7F28CBE8;
    case 0x7F28CBECu: goto label_7F28CBEC;
    case 0x7F28CBF0u: goto label_7F28CBF0;
    case 0x7F28CBF4u: goto label_7F28CBF4;
    case 0x7F28CBF8u: goto label_7F28CBF8;
    case 0x7F28CBFCu: goto label_7F28CBFC;
    case 0x7F28CC00u: goto label_7F28CC00;
    case 0x7F28CC04u: goto label_7F28CC04;
    case 0x7F28CC08u: goto label_7F28CC08;
    case 0x7F28CC0Cu: goto label_7F28CC0C;
    case 0x7F28CC10u: goto label_7F28CC10;
    case 0x7F28CC14u: goto label_7F28CC14;
    case 0x7F28CC18u: goto label_7F28CC18;
    case 0x7F28CC1Cu: goto label_7F28CC1C;
    case 0x7F28CC20u: goto label_7F28CC20;
    case 0x7F28CC24u: goto label_7F28CC24;
    case 0x7F28CC28u: goto label_7F28CC28;
    case 0x7F28CC2Cu: goto label_7F28CC2C;
    case 0x7F28CC30u: goto label_7F28CC30;
    case 0x7F28CC34u: goto label_7F28CC34;
    case 0x7F28CC38u: goto label_7F28CC38;
    case 0x7F28CC3Cu: goto label_7F28CC3C;
    case 0x7F28CC40u: goto label_7F28CC40;
    case 0x7F28CC44u: goto label_7F28CC44;
    case 0x7F28CC48u: goto label_7F28CC48;
    case 0x7F28CC4Cu: goto label_7F28CC4C;
    case 0x7F28CC50u: goto label_7F28CC50;
    case 0x7F28CC54u: goto label_7F28CC54;
    case 0x7F28CC58u: goto label_7F28CC58;
    case 0x7F28CC5Cu: goto label_7F28CC5C;
    case 0x7F28CC60u: goto label_7F28CC60;
    case 0x7F28CC64u: goto label_7F28CC64;
    case 0x7F28CC68u: goto label_7F28CC68;
    case 0x7F28CC6Cu: goto label_7F28CC6C;
    case 0x7F28CC70u: goto label_7F28CC70;
    case 0x7F28CC74u: goto label_7F28CC74;
    case 0x7F28CC78u: goto label_7F28CC78;
    case 0x7F28CC7Cu: goto label_7F28CC7C;
    case 0x7F28CC80u: goto label_7F28CC80;
    case 0x7F28CC84u: goto label_7F28CC84;
    case 0x7F28CC88u: goto label_7F28CC88;
    case 0x7F28CC8Cu: goto label_7F28CC8C;
    case 0x7F28CC90u: goto label_7F28CC90;
    case 0x7F28CC94u: goto label_7F28CC94;
    case 0x7F28CC98u: goto label_7F28CC98;
    case 0x7F28CC9Cu: goto label_7F28CC9C;
    case 0x7F28CCA0u: goto label_7F28CCA0;
    case 0x7F28CCA4u: goto label_7F28CCA4;
    case 0x7F28CCA8u: goto label_7F28CCA8;
    case 0x7F28CCACu: goto label_7F28CCAC;
    case 0x7F28CCB0u: goto label_7F28CCB0;
    case 0x7F28CCB4u: goto label_7F28CCB4;
    case 0x7F28CCB8u: goto label_7F28CCB8;
    case 0x7F28CCBCu: goto label_7F28CCBC;
    case 0x7F28CCC0u: goto label_7F28CCC0;
    case 0x7F28CCC4u: goto label_7F28CCC4;
    case 0x7F28CCC8u: goto label_7F28CCC8;
    case 0x7F28CCCCu: goto label_7F28CCCC;
    case 0x7F28CCD0u: goto label_7F28CCD0;
    case 0x7F28CCD4u: goto label_7F28CCD4;
    case 0x7F28CCD8u: goto label_7F28CCD8;
    case 0x7F28CCDCu: goto label_7F28CCDC;
    case 0x7F28CCE0u: goto label_7F28CCE0;
    case 0x7F28CCE4u: goto label_7F28CCE4;
    case 0x7F28CCE8u: goto label_7F28CCE8;
    case 0x7F28CCECu: goto label_7F28CCEC;
    case 0x7F28CCF0u: goto label_7F28CCF0;
    case 0x7F28CCF4u: goto label_7F28CCF4;
    case 0x7F28CCF8u: goto label_7F28CCF8;
    case 0x7F28CCFCu: goto label_7F28CCFC;
    case 0x7F28CD00u: goto label_7F28CD00;
    case 0x7F28CD04u: goto label_7F28CD04;
    case 0x7F28CD08u: goto label_7F28CD08;
    case 0x7F28CD0Cu: goto label_7F28CD0C;
    case 0x7F28CD10u: goto label_7F28CD10;
    case 0x7F28CD14u: goto label_7F28CD14;
    case 0x7F28CD18u: goto label_7F28CD18;
    case 0x7F28CD1Cu: goto label_7F28CD1C;
    case 0x7F28CD20u: goto label_7F28CD20;
    case 0x7F28CD24u: goto label_7F28CD24;
    case 0x7F28CD28u: goto label_7F28CD28;
    case 0x7F28CD2Cu: goto label_7F28CD2C;
    case 0x7F28CD30u: goto label_7F28CD30;
    case 0x7F28CD34u: goto label_7F28CD34;
    case 0x7F28CD38u: goto label_7F28CD38;
    case 0x7F28CD3Cu: goto label_7F28CD3C;
    case 0x7F28CD40u: goto label_7F28CD40;
    case 0x7F28CD44u: goto label_7F28CD44;
    case 0x7F28CD48u: goto label_7F28CD48;
    case 0x7F28CD4Cu: goto label_7F28CD4C;
    case 0x7F28CD50u: goto label_7F28CD50;
    case 0x7F28CD54u: goto label_7F28CD54;
    case 0x7F28CD58u: goto label_7F28CD58;
    case 0x7F28CD5Cu: goto label_7F28CD5C;
    case 0x7F28CD60u: goto label_7F28CD60;
    case 0x7F28CD64u: goto label_7F28CD64;
    case 0x7F28CD68u: goto label_7F28CD68;
    case 0x7F28CD6Cu: goto label_7F28CD6C;
    case 0x7F28CD70u: goto label_7F28CD70;
    case 0x7F28CD74u: goto label_7F28CD74;
    case 0x7F28CD78u: goto label_7F28CD78;
    case 0x7F28CD7Cu: goto label_7F28CD7C;
    case 0x7F28CD80u: goto label_7F28CD80;
    case 0x7F28CD84u: goto label_7F28CD84;
    case 0x7F28CD88u: goto label_7F28CD88;
    case 0x7F28CD8Cu: goto label_7F28CD8C;
    case 0x7F28CD90u: goto label_7F28CD90;
    case 0x7F28CD94u: goto label_7F28CD94;
    case 0x7F28CD98u: goto label_7F28CD98;
    case 0x7F28CD9Cu: goto label_7F28CD9C;
    case 0x7F28CDA0u: goto label_7F28CDA0;
    case 0x7F28CDA4u: goto label_7F28CDA4;
    case 0x7F28CDA8u: goto label_7F28CDA8;
    case 0x7F28CDACu: goto label_7F28CDAC;
    case 0x7F28CDB0u: goto label_7F28CDB0;
    case 0x7F28CDB4u: goto label_7F28CDB4;
    case 0x7F28CDB8u: goto label_7F28CDB8;
    case 0x7F28CDBCu: goto label_7F28CDBC;
    case 0x7F28CDC0u: goto label_7F28CDC0;
    case 0x7F28CDC4u: goto label_7F28CDC4;
    case 0x7F28CDC8u: goto label_7F28CDC8;
    case 0x7F28CDCCu: goto label_7F28CDCC;
    case 0x7F28CDD0u: goto label_7F28CDD0;
    case 0x7F28CDD4u: goto label_7F28CDD4;
    case 0x7F28CDD8u: goto label_7F28CDD8;
    case 0x7F28CDDCu: goto label_7F28CDDC;
    case 0x7F28CDE0u: goto label_7F28CDE0;
    case 0x7F28CDE4u: goto label_7F28CDE4;
    case 0x7F28CDE8u: goto label_7F28CDE8;
    case 0x7F28CDECu: goto label_7F28CDEC;
    case 0x7F28CDF0u: goto label_7F28CDF0;
    case 0x7F28CDF4u: goto label_7F28CDF4;
    case 0x7F28CDF8u: goto label_7F28CDF8;
    case 0x7F28CDFCu: goto label_7F28CDFC;
    case 0x7F28CE00u: goto label_7F28CE00;
    case 0x7F28CE04u: goto label_7F28CE04;
    case 0x7F28CE08u: goto label_7F28CE08;
    case 0x7F28CE0Cu: goto label_7F28CE0C;
    case 0x7F28CE10u: goto label_7F28CE10;
    case 0x7F28CE14u: goto label_7F28CE14;
    case 0x7F28CE18u: goto label_7F28CE18;
    case 0x7F28CE1Cu: goto label_7F28CE1C;
    case 0x7F28CE20u: goto label_7F28CE20;
    case 0x7F28CE24u: goto label_7F28CE24;
    case 0x7F28CE28u: goto label_7F28CE28;
    case 0x7F28CE2Cu: goto label_7F28CE2C;
    case 0x7F28CE30u: goto label_7F28CE30;
    case 0x7F28CE34u: goto label_7F28CE34;
    case 0x7F28CE38u: goto label_7F28CE38;
    case 0x7F28CE3Cu: goto label_7F28CE3C;
    case 0x7F28CE40u: goto label_7F28CE40;
    case 0x7F28CE44u: goto label_7F28CE44;
    case 0x7F28CE48u: goto label_7F28CE48;
    case 0x7F28CE4Cu: goto label_7F28CE4C;
    case 0x7F28CE50u: goto label_7F28CE50;
    case 0x7F28CE54u: goto label_7F28CE54;
    case 0x7F28CE58u: goto label_7F28CE58;
    case 0x7F28CE5Cu: goto label_7F28CE5C;
    case 0x7F28CE60u: goto label_7F28CE60;
    case 0x7F28CE64u: goto label_7F28CE64;
    case 0x7F28CE68u: goto label_7F28CE68;
    case 0x7F28CE6Cu: goto label_7F28CE6C;
    case 0x7F28CE70u: goto label_7F28CE70;
    case 0x7F28CE74u: goto label_7F28CE74;
    case 0x7F28CE78u: goto label_7F28CE78;
    case 0x7F28CE7Cu: goto label_7F28CE7C;
    case 0x7F28CE80u: goto label_7F28CE80;
    case 0x7F28CE84u: goto label_7F28CE84;
    case 0x7F28CE88u: goto label_7F28CE88;
    case 0x7F28CE8Cu: goto label_7F28CE8C;
    case 0x7F28CE90u: goto label_7F28CE90;
    case 0x7F28CE94u: goto label_7F28CE94;
    case 0x7F28CE98u: goto label_7F28CE98;
    case 0x7F28CE9Cu: goto label_7F28CE9C;
    case 0x7F28CEA0u: goto label_7F28CEA0;
    case 0x7F28CEA4u: goto label_7F28CEA4;
    case 0x7F28CEA8u: goto label_7F28CEA8;
    case 0x7F28CEACu: goto label_7F28CEAC;
    case 0x7F28CEB0u: goto label_7F28CEB0;
    case 0x7F28CEB4u: goto label_7F28CEB4;
    case 0x7F28CEB8u: goto label_7F28CEB8;
    case 0x7F28CEBCu: goto label_7F28CEBC;
    case 0x7F28CEC0u: goto label_7F28CEC0;
    case 0x7F28CEC4u: goto label_7F28CEC4;
    case 0x7F28CEC8u: goto label_7F28CEC8;
    case 0x7F28CECCu: goto label_7F28CECC;
    case 0x7F28CED0u: goto label_7F28CED0;
    case 0x7F28CED4u: goto label_7F28CED4;
    case 0x7F28CED8u: goto label_7F28CED8;
    case 0x7F28CEDCu: goto label_7F28CEDC;
    case 0x7F28CEE0u: goto label_7F28CEE0;
    case 0x7F28CEE4u: goto label_7F28CEE4;
    case 0x7F28CEE8u: goto label_7F28CEE8;
    case 0x7F28CEECu: goto label_7F28CEEC;
    case 0x7F28CEF0u: goto label_7F28CEF0;
    case 0x7F28CEF4u: goto label_7F28CEF4;
    case 0x7F28CEF8u: goto label_7F28CEF8;
    case 0x7F28CEFCu: goto label_7F28CEFC;
    case 0x7F28CF00u: goto label_7F28CF00;
    case 0x7F28CF04u: goto label_7F28CF04;
    case 0x7F28CF08u: goto label_7F28CF08;
    case 0x7F28CF0Cu: goto label_7F28CF0C;
    case 0x7F28CF10u: goto label_7F28CF10;
    case 0x7F28CF14u: goto label_7F28CF14;
    case 0x7F28CF18u: goto label_7F28CF18;
    case 0x7F28CF1Cu: goto label_7F28CF1C;
    case 0x7F28CF20u: goto label_7F28CF20;
    case 0x7F28CF24u: goto label_7F28CF24;
    case 0x7F28CF28u: goto label_7F28CF28;
    case 0x7F28CF2Cu: goto label_7F28CF2C;
    case 0x7F28CF30u: goto label_7F28CF30;
    case 0x7F28CF34u: goto label_7F28CF34;
    case 0x7F28CF38u: goto label_7F28CF38;
    case 0x7F28CF3Cu: goto label_7F28CF3C;
    case 0x7F28CF40u: goto label_7F28CF40;
    case 0x7F28CF44u: goto label_7F28CF44;
    case 0x7F28CF48u: goto label_7F28CF48;
    case 0x7F28CF4Cu: goto label_7F28CF4C;
    case 0x7F28CF50u: goto label_7F28CF50;
    case 0x7F28CF54u: goto label_7F28CF54;
    case 0x7F28CF58u: goto label_7F28CF58;
    case 0x7F28CF5Cu: goto label_7F28CF5C;
    case 0x7F28CF60u: goto label_7F28CF60;
    case 0x7F28CF64u: goto label_7F28CF64;
    case 0x7F28CF68u: goto label_7F28CF68;
    case 0x7F28CF6Cu: goto label_7F28CF6C;
    case 0x7F28CF70u: goto label_7F28CF70;
    case 0x7F28CF74u: goto label_7F28CF74;
    case 0x7F28CF78u: goto label_7F28CF78;
    case 0x7F28CF7Cu: goto label_7F28CF7C;
    case 0x7F28CF80u: goto label_7F28CF80;
    case 0x7F28CF84u: goto label_7F28CF84;
    case 0x7F28CF88u: goto label_7F28CF88;
    case 0x7F28CF8Cu: goto label_7F28CF8C;
    case 0x7F28CF90u: goto label_7F28CF90;
    case 0x7F28CF94u: goto label_7F28CF94;
    case 0x7F28CF98u: goto label_7F28CF98;
    case 0x7F28CF9Cu: goto label_7F28CF9C;
    case 0x7F28CFA0u: goto label_7F28CFA0;
    case 0x7F28CFA4u: goto label_7F28CFA4;
    case 0x7F28CFA8u: goto label_7F28CFA8;
    case 0x7F28CFACu: goto label_7F28CFAC;
    case 0x7F28CFB0u: goto label_7F28CFB0;
    case 0x7F28CFB4u: goto label_7F28CFB4;
    case 0x7F28CFB8u: goto label_7F28CFB8;
    case 0x7F28CFBCu: goto label_7F28CFBC;
    case 0x7F28CFC0u: goto label_7F28CFC0;
    case 0x7F28CFC4u: goto label_7F28CFC4;
    case 0x7F28CFC8u: goto label_7F28CFC8;
    case 0x7F28CFCCu: goto label_7F28CFCC;
    case 0x7F28CFD0u: goto label_7F28CFD0;
    case 0x7F28CFD4u: goto label_7F28CFD4;
    case 0x7F28CFD8u: goto label_7F28CFD8;
    case 0x7F28CFDCu: goto label_7F28CFDC;
    case 0x7F28CFE0u: goto label_7F28CFE0;
    case 0x7F28CFE4u: goto label_7F28CFE4;
    case 0x7F28CFE8u: goto label_7F28CFE8;
    case 0x7F28CFECu: goto label_7F28CFEC;
    case 0x7F28CFF0u: goto label_7F28CFF0;
    case 0x7F28CFF4u: goto label_7F28CFF4;
    case 0x7F28CFF8u: goto label_7F28CFF8;
    case 0x7F28CFFCu: goto label_7F28CFFC;
    case 0x7F28D000u: goto label_7F28D000;
    case 0x7F28D004u: goto label_7F28D004;
    case 0x7F28D008u: goto label_7F28D008;
    case 0x7F28D00Cu: goto label_7F28D00C;
    case 0x7F28D010u: goto label_7F28D010;
    case 0x7F28D014u: goto label_7F28D014;
    case 0x7F28D018u: goto label_7F28D018;
    case 0x7F28D01Cu: goto label_7F28D01C;
    case 0x7F28D020u: goto label_7F28D020;
    case 0x7F28D024u: goto label_7F28D024;
    case 0x7F28D028u: goto label_7F28D028;
    case 0x7F28D02Cu: goto label_7F28D02C;
    case 0x7F28D030u: goto label_7F28D030;
    case 0x7F28D034u: goto label_7F28D034;
    case 0x7F28D038u: goto label_7F28D038;
    case 0x7F28D03Cu: goto label_7F28D03C;
    case 0x7F28D040u: goto label_7F28D040;
    case 0x7F28D044u: goto label_7F28D044;
    case 0x7F28D048u: goto label_7F28D048;
    case 0x7F28D04Cu: goto label_7F28D04C;
    case 0x7F28D050u: goto label_7F28D050;
    case 0x7F28D054u: goto label_7F28D054;
    case 0x7F28D058u: goto label_7F28D058;
    case 0x7F28D05Cu: goto label_7F28D05C;
    case 0x7F28D060u: goto label_7F28D060;
    case 0x7F28D064u: goto label_7F28D064;
    case 0x7F28D068u: goto label_7F28D068;
    case 0x7F28D06Cu: goto label_7F28D06C;
    case 0x7F28D070u: goto label_7F28D070;
    case 0x7F28D074u: goto label_7F28D074;
    case 0x7F28D078u: goto label_7F28D078;
    case 0x7F28D07Cu: goto label_7F28D07C;
    case 0x7F28D080u: goto label_7F28D080;
    case 0x7F28D084u: goto label_7F28D084;
    case 0x7F28D088u: goto label_7F28D088;
    case 0x7F28D08Cu: goto label_7F28D08C;
    case 0x7F28D090u: goto label_7F28D090;
    case 0x7F28D094u: goto label_7F28D094;
    case 0x7F28D098u: goto label_7F28D098;
    case 0x7F28D09Cu: goto label_7F28D09C;
    case 0x7F28D0A0u: goto label_7F28D0A0;
    case 0x7F28D0A4u: goto label_7F28D0A4;
    case 0x7F28D0A8u: goto label_7F28D0A8;
    case 0x7F28D0ACu: goto label_7F28D0AC;
    case 0x7F28D0B0u: goto label_7F28D0B0;
    case 0x7F28D0B4u: goto label_7F28D0B4;
    case 0x7F28D0B8u: goto label_7F28D0B8;
    case 0x7F28D0BCu: goto label_7F28D0BC;
    case 0x7F28D0C0u: goto label_7F28D0C0;
    case 0x7F28D0C4u: goto label_7F28D0C4;
    case 0x7F28D0C8u: goto label_7F28D0C8;
    case 0x7F28D0CCu: goto label_7F28D0CC;
    case 0x7F28D0D0u: goto label_7F28D0D0;
    case 0x7F28D0D4u: goto label_7F28D0D4;
    case 0x7F28D0D8u: goto label_7F28D0D8;
    case 0x7F28D0DCu: goto label_7F28D0DC;
    case 0x7F28D0E0u: goto label_7F28D0E0;
    case 0x7F28D0E4u: goto label_7F28D0E4;
    case 0x7F28D0E8u: goto label_7F28D0E8;
    case 0x7F28D0ECu: goto label_7F28D0EC;
    case 0x7F28D0F0u: goto label_7F28D0F0;
    case 0x7F28D0F4u: goto label_7F28D0F4;
    case 0x7F28D0F8u: goto label_7F28D0F8;
    case 0x7F28D0FCu: goto label_7F28D0FC;
    case 0x7F28D100u: goto label_7F28D100;
    case 0x7F28D104u: goto label_7F28D104;
    case 0x7F28D108u: goto label_7F28D108;
    case 0x7F28D10Cu: goto label_7F28D10C;
    case 0x7F28D110u: goto label_7F28D110;
    case 0x7F28D114u: goto label_7F28D114;
    case 0x7F28D118u: goto label_7F28D118;
    case 0x7F28D11Cu: goto label_7F28D11C;
    case 0x7F28D120u: goto label_7F28D120;
    case 0x7F28D124u: goto label_7F28D124;
    case 0x7F28D128u: goto label_7F28D128;
    case 0x7F28D12Cu: goto label_7F28D12C;
    case 0x7F28D130u: goto label_7F28D130;
    case 0x7F28D134u: goto label_7F28D134;
    case 0x7F28D138u: goto label_7F28D138;
    case 0x7F28D13Cu: goto label_7F28D13C;
    case 0x7F28D140u: goto label_7F28D140;
    case 0x7F28D144u: goto label_7F28D144;
    case 0x7F28D148u: goto label_7F28D148;
    case 0x7F28D14Cu: goto label_7F28D14C;
    case 0x7F28D150u: goto label_7F28D150;
    case 0x7F28D154u: goto label_7F28D154;
    case 0x7F28D158u: goto label_7F28D158;
    case 0x7F28D15Cu: goto label_7F28D15C;
    case 0x7F28D160u: goto label_7F28D160;
    case 0x7F28D164u: goto label_7F28D164;
    case 0x7F28D168u: goto label_7F28D168;
    case 0x7F28D16Cu: goto label_7F28D16C;
    case 0x7F28D170u: goto label_7F28D170;
    case 0x7F28D174u: goto label_7F28D174;
    case 0x7F28D178u: goto label_7F28D178;
    case 0x7F28D17Cu: goto label_7F28D17C;
    case 0x7F28D180u: goto label_7F28D180;
    case 0x7F28D184u: goto label_7F28D184;
    case 0x7F28D188u: goto label_7F28D188;
    case 0x7F28D18Cu: goto label_7F28D18C;
    case 0x7F28D190u: goto label_7F28D190;
    case 0x7F28D194u: goto label_7F28D194;
    case 0x7F28D198u: goto label_7F28D198;
    case 0x7F28D19Cu: goto label_7F28D19C;
    case 0x7F28D1A0u: goto label_7F28D1A0;
    case 0x7F28D1A4u: goto label_7F28D1A4;
    case 0x7F28D1A8u: goto label_7F28D1A8;
    case 0x7F28D1ACu: goto label_7F28D1AC;
    case 0x7F28D1B0u: goto label_7F28D1B0;
    case 0x7F28D1B4u: goto label_7F28D1B4;
    case 0x7F28D1B8u: goto label_7F28D1B8;
    case 0x7F28D1BCu: goto label_7F28D1BC;
    case 0x7F28D1C0u: goto label_7F28D1C0;
    case 0x7F28D1C4u: goto label_7F28D1C4;
    case 0x7F28D1C8u: goto label_7F28D1C8;
    case 0x7F28D1CCu: goto label_7F28D1CC;
    case 0x7F28D1D0u: goto label_7F28D1D0;
    case 0x7F28D1D4u: goto label_7F28D1D4;
    case 0x7F28D1D8u: goto label_7F28D1D8;
    case 0x7F28D1DCu: goto label_7F28D1DC;
    case 0x7F28D1E0u: goto label_7F28D1E0;
    case 0x7F28D1E4u: goto label_7F28D1E4;
    case 0x7F28D1E8u: goto label_7F28D1E8;
    case 0x7F28D1ECu: goto label_7F28D1EC;
    case 0x7F28D1F0u: goto label_7F28D1F0;
    case 0x7F28D1F4u: goto label_7F28D1F4;
    case 0x7F28D1F8u: goto label_7F28D1F8;
    case 0x7F28D1FCu: goto label_7F28D1FC;
    case 0x7F28D200u: goto label_7F28D200;
    case 0x7F28D204u: goto label_7F28D204;
    case 0x7F28D208u: goto label_7F28D208;
    case 0x7F28D20Cu: goto label_7F28D20C;
    case 0x7F28D210u: goto label_7F28D210;
    case 0x7F28D214u: goto label_7F28D214;
    case 0x7F28D218u: goto label_7F28D218;
    case 0x7F28D21Cu: goto label_7F28D21C;
    case 0x7F28D220u: goto label_7F28D220;
    case 0x7F28D224u: goto label_7F28D224;
    case 0x7F28D228u: goto label_7F28D228;
    case 0x7F28D22Cu: goto label_7F28D22C;
    case 0x7F28D230u: goto label_7F28D230;
    case 0x7F28D234u: goto label_7F28D234;
    case 0x7F28D238u: goto label_7F28D238;
    case 0x7F28D23Cu: goto label_7F28D23C;
    case 0x7F28D240u: goto label_7F28D240;
    case 0x7F28D244u: goto label_7F28D244;
    case 0x7F28D248u: goto label_7F28D248;
    case 0x7F28D24Cu: goto label_7F28D24C;
    case 0x7F28D250u: goto label_7F28D250;
    case 0x7F28D254u: goto label_7F28D254;
    case 0x7F28D258u: goto label_7F28D258;
    case 0x7F28D25Cu: goto label_7F28D25C;
    case 0x7F28D260u: goto label_7F28D260;
    case 0x7F28D264u: goto label_7F28D264;
    case 0x7F28D268u: goto label_7F28D268;
    case 0x7F28D26Cu: goto label_7F28D26C;
    case 0x7F28D270u: goto label_7F28D270;
    case 0x7F28D274u: goto label_7F28D274;
    case 0x7F28D278u: goto label_7F28D278;
    case 0x7F28D27Cu: goto label_7F28D27C;
    case 0x7F28D280u: goto label_7F28D280;
    case 0x7F28D284u: goto label_7F28D284;
    case 0x7F28D288u: goto label_7F28D288;
    case 0x7F28D28Cu: goto label_7F28D28C;
    case 0x7F28D290u: goto label_7F28D290;
    case 0x7F28D294u: goto label_7F28D294;
    case 0x7F28D298u: goto label_7F28D298;
    case 0x7F28D29Cu: goto label_7F28D29C;
    case 0x7F28D2A0u: goto label_7F28D2A0;
    case 0x7F28D2A4u: goto label_7F28D2A4;
    case 0x7F28D2A8u: goto label_7F28D2A8;
    case 0x7F28D2ACu: goto label_7F28D2AC;
    case 0x7F28D2B0u: goto label_7F28D2B0;
    case 0x7F28D2B4u: goto label_7F28D2B4;
    case 0x7F28D2B8u: goto label_7F28D2B8;
    case 0x7F28D2BCu: goto label_7F28D2BC;
    case 0x7F28D2C0u: goto label_7F28D2C0;
    case 0x7F28D2C4u: goto label_7F28D2C4;
    case 0x7F28D2C8u: goto label_7F28D2C8;
    case 0x7F28D2CCu: goto label_7F28D2CC;
    case 0x7F28D2D0u: goto label_7F28D2D0;
    case 0x7F28D2D4u: goto label_7F28D2D4;
    case 0x7F28D2D8u: goto label_7F28D2D8;
    case 0x7F28D2DCu: goto label_7F28D2DC;
    case 0x7F28D2E0u: goto label_7F28D2E0;
    case 0x7F28D2E4u: goto label_7F28D2E4;
    case 0x7F28D2E8u: goto label_7F28D2E8;
    case 0x7F28D2ECu: goto label_7F28D2EC;
    case 0x7F28D2F0u: goto label_7F28D2F0;
    case 0x7F28D2F4u: goto label_7F28D2F4;
    case 0x7F28D2F8u: goto label_7F28D2F8;
    case 0x7F28D2FCu: goto label_7F28D2FC;
    case 0x7F28D300u: goto label_7F28D300;
    case 0x7F28D304u: goto label_7F28D304;
    case 0x7F28D308u: goto label_7F28D308;
    case 0x7F28D30Cu: goto label_7F28D30C;
    case 0x7F28D310u: goto label_7F28D310;
    case 0x7F28D314u: goto label_7F28D314;
    case 0x7F28D318u: goto label_7F28D318;
    case 0x7F28D31Cu: goto label_7F28D31C;
    case 0x7F28D320u: goto label_7F28D320;
    case 0x7F28D324u: goto label_7F28D324;
    case 0x7F28D328u: goto label_7F28D328;
    case 0x7F28D32Cu: goto label_7F28D32C;
    case 0x7F28D330u: goto label_7F28D330;
    case 0x7F28D334u: goto label_7F28D334;
    case 0x7F28D338u: goto label_7F28D338;
    case 0x7F28D33Cu: goto label_7F28D33C;
    case 0x7F28D340u: goto label_7F28D340;
    case 0x7F28D344u: goto label_7F28D344;
    case 0x7F28D348u: goto label_7F28D348;
    case 0x7F28D34Cu: goto label_7F28D34C;
    case 0x7F28D350u: goto label_7F28D350;
    case 0x7F28D354u: goto label_7F28D354;
    case 0x7F28D358u: goto label_7F28D358;
    case 0x7F28D35Cu: goto label_7F28D35C;
    case 0x7F28D360u: goto label_7F28D360;
    case 0x7F28D364u: goto label_7F28D364;
    case 0x7F28D368u: goto label_7F28D368;
    case 0x7F28D36Cu: goto label_7F28D36C;
    case 0x7F28D370u: goto label_7F28D370;
    case 0x7F28D374u: goto label_7F28D374;
    case 0x7F28D378u: goto label_7F28D378;
    case 0x7F28D37Cu: goto label_7F28D37C;
    case 0x7F28D380u: goto label_7F28D380;
    case 0x7F28D384u: goto label_7F28D384;
    case 0x7F28D388u: goto label_7F28D388;
    case 0x7F28D38Cu: goto label_7F28D38C;
    case 0x7F28D390u: goto label_7F28D390;
    case 0x7F28D394u: goto label_7F28D394;
    case 0x7F28D398u: goto label_7F28D398;
    case 0x7F28D39Cu: goto label_7F28D39C;
    case 0x7F28D3A0u: goto label_7F28D3A0;
    case 0x7F28D3A4u: goto label_7F28D3A4;
    case 0x7F28D3A8u: goto label_7F28D3A8;
    case 0x7F28D3ACu: goto label_7F28D3AC;
    case 0x7F28D3B0u: goto label_7F28D3B0;
    case 0x7F28D3B4u: goto label_7F28D3B4;
    case 0x7F28D3B8u: goto label_7F28D3B8;
    case 0x7F28D3BCu: goto label_7F28D3BC;
    case 0x7F28D3C0u: goto label_7F28D3C0;
    case 0x7F28D3C4u: goto label_7F28D3C4;
    case 0x7F28D3C8u: goto label_7F28D3C8;
    case 0x7F28D3CCu: goto label_7F28D3CC;
    case 0x7F28D3D0u: goto label_7F28D3D0;
    case 0x7F28D3D4u: goto label_7F28D3D4;
    case 0x7F28D3D8u: goto label_7F28D3D8;
    case 0x7F28D3DCu: goto label_7F28D3DC;
    case 0x7F28D3E0u: goto label_7F28D3E0;
    case 0x7F28D3E4u: goto label_7F28D3E4;
    case 0x7F28D3E8u: goto label_7F28D3E8;
    case 0x7F28D3ECu: goto label_7F28D3EC;
    case 0x7F28D3F0u: goto label_7F28D3F0;
    case 0x7F28D3F4u: goto label_7F28D3F4;
    case 0x7F28D3F8u: goto label_7F28D3F8;
    case 0x7F28D3FCu: goto label_7F28D3FC;
    case 0x7F28D400u: goto label_7F28D400;
    case 0x7F28D404u: goto label_7F28D404;
    case 0x7F28D408u: goto label_7F28D408;
    case 0x7F28D40Cu: goto label_7F28D40C;
    case 0x7F28D410u: goto label_7F28D410;
    case 0x7F28D414u: goto label_7F28D414;
    case 0x7F28D418u: goto label_7F28D418;
    case 0x7F28D41Cu: goto label_7F28D41C;
    case 0x7F28D420u: goto label_7F28D420;
    case 0x7F28D424u: goto label_7F28D424;
    case 0x7F28D428u: goto label_7F28D428;
    case 0x7F28D42Cu: goto label_7F28D42C;
    case 0x7F28D430u: goto label_7F28D430;
    case 0x7F28D434u: goto label_7F28D434;
    case 0x7F28D438u: goto label_7F28D438;
    case 0x7F28D43Cu: goto label_7F28D43C;
    case 0x7F28D440u: goto label_7F28D440;
    case 0x7F28D444u: goto label_7F28D444;
    case 0x7F28D448u: goto label_7F28D448;
    case 0x7F28D44Cu: goto label_7F28D44C;
    case 0x7F28D450u: goto label_7F28D450;
    case 0x7F28D454u: goto label_7F28D454;
    case 0x7F28D458u: goto label_7F28D458;
    case 0x7F28D45Cu: goto label_7F28D45C;
    case 0x7F28D460u: goto label_7F28D460;
    case 0x7F28D464u: goto label_7F28D464;
    case 0x7F28D468u: goto label_7F28D468;
    case 0x7F28D46Cu: goto label_7F28D46C;
    case 0x7F28D470u: goto label_7F28D470;
    case 0x7F28D474u: goto label_7F28D474;
    case 0x7F28D478u: goto label_7F28D478;
    case 0x7F28D47Cu: goto label_7F28D47C;
    case 0x7F28D480u: goto label_7F28D480;
    case 0x7F28D484u: goto label_7F28D484;
    case 0x7F28D488u: goto label_7F28D488;
    case 0x7F28D48Cu: goto label_7F28D48C;
    case 0x7F28D490u: goto label_7F28D490;
    case 0x7F28D494u: goto label_7F28D494;
    case 0x7F28D498u: goto label_7F28D498;
    case 0x7F28D49Cu: goto label_7F28D49C;
    case 0x7F28D4A0u: goto label_7F28D4A0;
    case 0x7F28D4A4u: goto label_7F28D4A4;
    case 0x7F28D4A8u: goto label_7F28D4A8;
    case 0x7F28D4ACu: goto label_7F28D4AC;
    case 0x7F28D4B0u: goto label_7F28D4B0;
    case 0x7F28D4B4u: goto label_7F28D4B4;
    case 0x7F28D4B8u: goto label_7F28D4B8;
    case 0x7F28D4BCu: goto label_7F28D4BC;
    case 0x7F28D4C0u: goto label_7F28D4C0;
    case 0x7F28D4C4u: goto label_7F28D4C4;
    case 0x7F28D4C8u: goto label_7F28D4C8;
    case 0x7F28D4CCu: goto label_7F28D4CC;
    case 0x7F28D4D0u: goto label_7F28D4D0;
    case 0x7F28D4D4u: goto label_7F28D4D4;
    case 0x7F28D4D8u: goto label_7F28D4D8;
    case 0x7F28D4DCu: goto label_7F28D4DC;
    case 0x7F28D4E0u: goto label_7F28D4E0;
    case 0x7F28D4E4u: goto label_7F28D4E4;
    case 0x7F28D4E8u: goto label_7F28D4E8;
    case 0x7F28D4ECu: goto label_7F28D4EC;
    case 0x7F28D4F0u: goto label_7F28D4F0;
    case 0x7F28D4F4u: goto label_7F28D4F4;
    case 0x7F28D4F8u: goto label_7F28D4F8;
    case 0x7F28D4FCu: goto label_7F28D4FC;
    case 0x7F28D500u: goto label_7F28D500;
    case 0x7F28D504u: goto label_7F28D504;
    case 0x7F28D508u: goto label_7F28D508;
    case 0x7F28D50Cu: goto label_7F28D50C;
    case 0x7F28D510u: goto label_7F28D510;
    case 0x7F28D514u: goto label_7F28D514;
    case 0x7F28D518u: goto label_7F28D518;
    case 0x7F28D51Cu: goto label_7F28D51C;
    case 0x7F28D520u: goto label_7F28D520;
    case 0x7F28D524u: goto label_7F28D524;
    case 0x7F28D528u: goto label_7F28D528;
    case 0x7F28D52Cu: goto label_7F28D52C;
    case 0x7F28D530u: goto label_7F28D530;
    case 0x7F28D534u: goto label_7F28D534;
    case 0x7F28D538u: goto label_7F28D538;
    case 0x7F28D53Cu: goto label_7F28D53C;
    case 0x7F28D540u: goto label_7F28D540;
    case 0x7F28D544u: goto label_7F28D544;
    case 0x7F28D548u: goto label_7F28D548;
    case 0x7F28D54Cu: goto label_7F28D54C;
    case 0x7F28D550u: goto label_7F28D550;
    case 0x7F28D554u: goto label_7F28D554;
    case 0x7F28D558u: goto label_7F28D558;
    case 0x7F28D55Cu: goto label_7F28D55C;
    case 0x7F28D560u: goto label_7F28D560;
    case 0x7F28D564u: goto label_7F28D564;
    case 0x7F28D568u: goto label_7F28D568;
    case 0x7F28D56Cu: goto label_7F28D56C;
    case 0x7F28D570u: goto label_7F28D570;
    case 0x7F28D574u: goto label_7F28D574;
    case 0x7F28D578u: goto label_7F28D578;
    case 0x7F28D57Cu: goto label_7F28D57C;
    case 0x7F28D580u: goto label_7F28D580;
    case 0x7F28D584u: goto label_7F28D584;
    case 0x7F28D588u: goto label_7F28D588;
    case 0x7F28D58Cu: goto label_7F28D58C;
    case 0x7F28D590u: goto label_7F28D590;
    case 0x7F28D594u: goto label_7F28D594;
    case 0x7F28D598u: goto label_7F28D598;
    case 0x7F28D59Cu: goto label_7F28D59C;
    case 0x7F28D5A0u: goto label_7F28D5A0;
    case 0x7F28D5A4u: goto label_7F28D5A4;
    case 0x7F28D5A8u: goto label_7F28D5A8;
    case 0x7F28D5ACu: goto label_7F28D5AC;
    case 0x7F28D5B0u: goto label_7F28D5B0;
    case 0x7F28D5B4u: goto label_7F28D5B4;
    case 0x7F28D5B8u: goto label_7F28D5B8;
    case 0x7F28D5BCu: goto label_7F28D5BC;
    case 0x7F28D5C0u: goto label_7F28D5C0;
    case 0x7F28D5C4u: goto label_7F28D5C4;
    case 0x7F28D5C8u: goto label_7F28D5C8;
    case 0x7F28D5CCu: goto label_7F28D5CC;
    case 0x7F28D5D0u: goto label_7F28D5D0;
    case 0x7F28D5D4u: goto label_7F28D5D4;
    case 0x7F28D5D8u: goto label_7F28D5D8;
    case 0x7F28D5DCu: goto label_7F28D5DC;
    case 0x7F28D5E0u: goto label_7F28D5E0;
    case 0x7F28D5E4u: goto label_7F28D5E4;
    case 0x7F28D5E8u: goto label_7F28D5E8;
    case 0x7F28D5ECu: goto label_7F28D5EC;
    case 0x7F28D5F0u: goto label_7F28D5F0;
    case 0x7F28D5F4u: goto label_7F28D5F4;
    case 0x7F28D5F8u: goto label_7F28D5F8;
    case 0x7F28D5FCu: goto label_7F28D5FC;
    case 0x7F28D600u: goto label_7F28D600;
    case 0x7F28D604u: goto label_7F28D604;
    case 0x7F28D608u: goto label_7F28D608;
    case 0x7F28D60Cu: goto label_7F28D60C;
    case 0x7F28D610u: goto label_7F28D610;
    case 0x7F28D614u: goto label_7F28D614;
    case 0x7F28D618u: goto label_7F28D618;
    case 0x7F28D61Cu: goto label_7F28D61C;
    case 0x7F28D620u: goto label_7F28D620;
    case 0x7F28D624u: goto label_7F28D624;
    case 0x7F28D628u: goto label_7F28D628;
    case 0x7F28D62Cu: goto label_7F28D62C;
    case 0x7F28D630u: goto label_7F28D630;
    case 0x7F28D634u: goto label_7F28D634;
    case 0x7F28D638u: goto label_7F28D638;
    case 0x7F28D63Cu: goto label_7F28D63C;
    case 0x7F28D640u: goto label_7F28D640;
    case 0x7F28D644u: goto label_7F28D644;
    case 0x7F28D648u: goto label_7F28D648;
    case 0x7F28D64Cu: goto label_7F28D64C;
    case 0x7F28D650u: goto label_7F28D650;
    case 0x7F28D654u: goto label_7F28D654;
    case 0x7F28D658u: goto label_7F28D658;
    case 0x7F28D65Cu: goto label_7F28D65C;
    case 0x7F28D660u: goto label_7F28D660;
    case 0x7F28D664u: goto label_7F28D664;
    case 0x7F28D668u: goto label_7F28D668;
    case 0x7F28D66Cu: goto label_7F28D66C;
    case 0x7F28D670u: goto label_7F28D670;
    case 0x7F28D674u: goto label_7F28D674;
    case 0x7F28D678u: goto label_7F28D678;
    case 0x7F28D67Cu: goto label_7F28D67C;
    case 0x7F28D680u: goto label_7F28D680;
    case 0x7F28D684u: goto label_7F28D684;
    case 0x7F28D688u: goto label_7F28D688;
    case 0x7F28D68Cu: goto label_7F28D68C;
    case 0x7F28D690u: goto label_7F28D690;
    case 0x7F28D694u: goto label_7F28D694;
    case 0x7F28D698u: goto label_7F28D698;
    case 0x7F28D69Cu: goto label_7F28D69C;
    case 0x7F28D6A0u: goto label_7F28D6A0;
    case 0x7F28D6A4u: goto label_7F28D6A4;
    case 0x7F28D6A8u: goto label_7F28D6A8;
    case 0x7F28D6ACu: goto label_7F28D6AC;
    case 0x7F28D6B0u: goto label_7F28D6B0;
    case 0x7F28D6B4u: goto label_7F28D6B4;
    case 0x7F28D6B8u: goto label_7F28D6B8;
    case 0x7F28D6BCu: goto label_7F28D6BC;
    case 0x7F28D6C0u: goto label_7F28D6C0;
    case 0x7F28D6C4u: goto label_7F28D6C4;
    case 0x7F28D6C8u: goto label_7F28D6C8;
    case 0x7F28D6CCu: goto label_7F28D6CC;
    case 0x7F28D6D0u: goto label_7F28D6D0;
    case 0x7F28D6D4u: goto label_7F28D6D4;
    case 0x7F28D6D8u: goto label_7F28D6D8;
    case 0x7F28D6DCu: goto label_7F28D6DC;
    case 0x7F28D6E0u: goto label_7F28D6E0;
    case 0x7F28D6E4u: goto label_7F28D6E4;
    case 0x7F28D6E8u: goto label_7F28D6E8;
    case 0x7F28D6ECu: goto label_7F28D6EC;
    case 0x7F28D6F0u: goto label_7F28D6F0;
    case 0x7F28D6F4u: goto label_7F28D6F4;
    case 0x7F28D6F8u: goto label_7F28D6F8;
    case 0x7F28D6FCu: goto label_7F28D6FC;
    case 0x7F28D700u: goto label_7F28D700;
    case 0x7F28D704u: goto label_7F28D704;
    case 0x7F28D708u: goto label_7F28D708;
    case 0x7F28D70Cu: goto label_7F28D70C;
    case 0x7F28D710u: goto label_7F28D710;
    case 0x7F28D714u: goto label_7F28D714;
    case 0x7F28D718u: goto label_7F28D718;
    case 0x7F28D71Cu: goto label_7F28D71C;
    case 0x7F28D720u: goto label_7F28D720;
    case 0x7F28D724u: goto label_7F28D724;
    case 0x7F28D728u: goto label_7F28D728;
    case 0x7F28D72Cu: goto label_7F28D72C;
    case 0x7F28D730u: goto label_7F28D730;
    case 0x7F28D734u: goto label_7F28D734;
    case 0x7F28D738u: goto label_7F28D738;
    case 0x7F28D73Cu: goto label_7F28D73C;
    case 0x7F28D740u: goto label_7F28D740;
    case 0x7F28D744u: goto label_7F28D744;
    case 0x7F28D748u: goto label_7F28D748;
    case 0x7F28D74Cu: goto label_7F28D74C;
    case 0x7F28D750u: goto label_7F28D750;
    case 0x7F28D754u: goto label_7F28D754;
    case 0x7F28D758u: goto label_7F28D758;
    case 0x7F28D75Cu: goto label_7F28D75C;
    case 0x7F28D760u: goto label_7F28D760;
    case 0x7F28D764u: goto label_7F28D764;
    case 0x7F28D768u: goto label_7F28D768;
    case 0x7F28D76Cu: goto label_7F28D76C;
    case 0x7F28D770u: goto label_7F28D770;
    case 0x7F28D774u: goto label_7F28D774;
    case 0x7F28D778u: goto label_7F28D778;
    case 0x7F28D77Cu: goto label_7F28D77C;
    case 0x7F28D780u: goto label_7F28D780;
    case 0x7F28D784u: goto label_7F28D784;
    case 0x7F28D788u: goto label_7F28D788;
    case 0x7F28D78Cu: goto label_7F28D78C;
    case 0x7F28D790u: goto label_7F28D790;
    case 0x7F28D794u: goto label_7F28D794;
    case 0x7F28D798u: goto label_7F28D798;
    case 0x7F28D79Cu: goto label_7F28D79C;
    case 0x7F28D7A0u: goto label_7F28D7A0;
    case 0x7F28D7A4u: goto label_7F28D7A4;
    case 0x7F28D7A8u: goto label_7F28D7A8;
    case 0x7F28D7ACu: goto label_7F28D7AC;
    case 0x7F28D7B0u: goto label_7F28D7B0;
    case 0x7F28D7B4u: goto label_7F28D7B4;
    case 0x7F28D7B8u: goto label_7F28D7B8;
    case 0x7F28D7BCu: goto label_7F28D7BC;
    case 0x7F28D7C0u: goto label_7F28D7C0;
    case 0x7F28D7C4u: goto label_7F28D7C4;
    case 0x7F28D7C8u: goto label_7F28D7C8;
    case 0x7F28D7CCu: goto label_7F28D7CC;
    case 0x7F28D7D0u: goto label_7F28D7D0;
    case 0x7F28D7D4u: goto label_7F28D7D4;
    case 0x7F28D7D8u: goto label_7F28D7D8;
    case 0x7F28D7DCu: goto label_7F28D7DC;
    case 0x7F28D7E0u: goto label_7F28D7E0;
    case 0x7F28D7E4u: goto label_7F28D7E4;
    case 0x7F28D7E8u: goto label_7F28D7E8;
    case 0x7F28D7ECu: goto label_7F28D7EC;
    case 0x7F28D7F0u: goto label_7F28D7F0;
    case 0x7F28D7F4u: goto label_7F28D7F4;
    case 0x7F28D7F8u: goto label_7F28D7F8;
    case 0x7F28D7FCu: goto label_7F28D7FC;
    case 0x7F28D800u: goto label_7F28D800;
    case 0x7F28D804u: goto label_7F28D804;
    case 0x7F28D808u: goto label_7F28D808;
    case 0x7F28D80Cu: goto label_7F28D80C;
    case 0x7F28D810u: goto label_7F28D810;
    case 0x7F28D814u: goto label_7F28D814;
    case 0x7F28D818u: goto label_7F28D818;
    case 0x7F28D81Cu: goto label_7F28D81C;
    case 0x7F28D820u: goto label_7F28D820;
    case 0x7F28D824u: goto label_7F28D824;
    case 0x7F28D828u: goto label_7F28D828;
    case 0x7F28D82Cu: goto label_7F28D82C;
    case 0x7F28D830u: goto label_7F28D830;
    case 0x7F28D834u: goto label_7F28D834;
    case 0x7F28D838u: goto label_7F28D838;
    case 0x7F28D83Cu: goto label_7F28D83C;
    case 0x7F28D840u: goto label_7F28D840;
    case 0x7F28D844u: goto label_7F28D844;
    case 0x7F28D848u: goto label_7F28D848;
    case 0x7F28D84Cu: goto label_7F28D84C;
    case 0x7F28D850u: goto label_7F28D850;
    case 0x7F28D854u: goto label_7F28D854;
    case 0x7F28D858u: goto label_7F28D858;
    case 0x7F28D85Cu: goto label_7F28D85C;
    case 0x7F28D860u: goto label_7F28D860;
    case 0x7F28D864u: goto label_7F28D864;
    case 0x7F28D868u: goto label_7F28D868;
    case 0x7F28D86Cu: goto label_7F28D86C;
    case 0x7F28D870u: goto label_7F28D870;
    case 0x7F28D874u: goto label_7F28D874;
    case 0x7F28D878u: goto label_7F28D878;
    case 0x7F28D87Cu: goto label_7F28D87C;
    case 0x7F28D880u: goto label_7F28D880;
    case 0x7F28D884u: goto label_7F28D884;
    case 0x7F28D888u: goto label_7F28D888;
    case 0x7F28D88Cu: goto label_7F28D88C;
    case 0x7F28D890u: goto label_7F28D890;
    case 0x7F28D894u: goto label_7F28D894;
    case 0x7F28D898u: goto label_7F28D898;
    case 0x7F28D89Cu: goto label_7F28D89C;
    case 0x7F28D8A0u: goto label_7F28D8A0;
    case 0x7F28D8A4u: goto label_7F28D8A4;
    case 0x7F28D8A8u: goto label_7F28D8A8;
    case 0x7F28D8ACu: goto label_7F28D8AC;
    case 0x7F28D8B0u: goto label_7F28D8B0;
    case 0x7F28D8B4u: goto label_7F28D8B4;
    case 0x7F28D8B8u: goto label_7F28D8B8;
    case 0x7F28D8BCu: goto label_7F28D8BC;
    case 0x7F28D8C0u: goto label_7F28D8C0;
    case 0x7F28D8C4u: goto label_7F28D8C4;
    case 0x7F28D8C8u: goto label_7F28D8C8;
    case 0x7F28D8CCu: goto label_7F28D8CC;
    case 0x7F28D8D0u: goto label_7F28D8D0;
    case 0x7F28D8D4u: goto label_7F28D8D4;
    case 0x7F28D8D8u: goto label_7F28D8D8;
    case 0x7F28D8DCu: goto label_7F28D8DC;
    case 0x7F28D8E0u: goto label_7F28D8E0;
    case 0x7F28D8E4u: goto label_7F28D8E4;
    case 0x7F28D8E8u: goto label_7F28D8E8;
    case 0x7F28D8ECu: goto label_7F28D8EC;
    case 0x7F28D8F0u: goto label_7F28D8F0;
    case 0x7F28D8F4u: goto label_7F28D8F4;
    case 0x7F28D8F8u: goto label_7F28D8F8;
    case 0x7F28D8FCu: goto label_7F28D8FC;
    case 0x7F28D900u: goto label_7F28D900;
    case 0x7F28D904u: goto label_7F28D904;
    case 0x7F28D908u: goto label_7F28D908;
    case 0x7F28D90Cu: goto label_7F28D90C;
    case 0x7F28D910u: goto label_7F28D910;
    case 0x7F28D914u: goto label_7F28D914;
    case 0x7F28D918u: goto label_7F28D918;
    case 0x7F28D91Cu: goto label_7F28D91C;
    case 0x7F28D920u: goto label_7F28D920;
    case 0x7F28D924u: goto label_7F28D924;
    case 0x7F28D928u: goto label_7F28D928;
    case 0x7F28D92Cu: goto label_7F28D92C;
    case 0x7F28D930u: goto label_7F28D930;
    case 0x7F28D934u: goto label_7F28D934;
    case 0x7F28D938u: goto label_7F28D938;
    case 0x7F28D93Cu: goto label_7F28D93C;
    case 0x7F28D940u: goto label_7F28D940;
    case 0x7F28D944u: goto label_7F28D944;
    case 0x7F28D948u: goto label_7F28D948;
    case 0x7F28D94Cu: goto label_7F28D94C;
    case 0x7F28D950u: goto label_7F28D950;
    case 0x7F28D954u: goto label_7F28D954;
    case 0x7F28D958u: goto label_7F28D958;
    case 0x7F28D95Cu: goto label_7F28D95C;
    case 0x7F28D960u: goto label_7F28D960;
    case 0x7F28D964u: goto label_7F28D964;
    case 0x7F28D968u: goto label_7F28D968;
    case 0x7F28D96Cu: goto label_7F28D96C;
    case 0x7F28D970u: goto label_7F28D970;
    case 0x7F28D974u: goto label_7F28D974;
    case 0x7F28D978u: goto label_7F28D978;
    case 0x7F28D97Cu: goto label_7F28D97C;
    case 0x7F28D980u: goto label_7F28D980;
    case 0x7F28D984u: goto label_7F28D984;
    case 0x7F28D988u: goto label_7F28D988;
    case 0x7F28D98Cu: goto label_7F28D98C;
    case 0x7F28D990u: goto label_7F28D990;
    case 0x7F28D994u: goto label_7F28D994;
    case 0x7F28D998u: goto label_7F28D998;
    case 0x7F28D99Cu: goto label_7F28D99C;
    case 0x7F28D9A0u: goto label_7F28D9A0;
    case 0x7F28D9A4u: goto label_7F28D9A4;
    case 0x7F28D9A8u: goto label_7F28D9A8;
    case 0x7F28D9ACu: goto label_7F28D9AC;
    case 0x7F28D9B0u: goto label_7F28D9B0;
    case 0x7F28D9B4u: goto label_7F28D9B4;
    case 0x7F28D9B8u: goto label_7F28D9B8;
    case 0x7F28D9BCu: goto label_7F28D9BC;
    case 0x7F28D9C0u: goto label_7F28D9C0;
    case 0x7F28D9C4u: goto label_7F28D9C4;
    case 0x7F28D9C8u: goto label_7F28D9C8;
    case 0x7F28D9CCu: goto label_7F28D9CC;
    case 0x7F28D9D0u: goto label_7F28D9D0;
    case 0x7F28D9D4u: goto label_7F28D9D4;
    case 0x7F28D9D8u: goto label_7F28D9D8;
    case 0x7F28D9DCu: goto label_7F28D9DC;
    case 0x7F28D9E0u: goto label_7F28D9E0;
    case 0x7F28D9E4u: goto label_7F28D9E4;
    case 0x7F28D9E8u: goto label_7F28D9E8;
    case 0x7F28D9ECu: goto label_7F28D9EC;
    case 0x7F28D9F0u: goto label_7F28D9F0;
    case 0x7F28D9F4u: goto label_7F28D9F4;
    case 0x7F28D9F8u: goto label_7F28D9F8;
    case 0x7F28D9FCu: goto label_7F28D9FC;
    case 0x7F28DA00u: goto label_7F28DA00;
    case 0x7F28DA04u: goto label_7F28DA04;
    case 0x7F28DA08u: goto label_7F28DA08;
    case 0x7F28DA0Cu: goto label_7F28DA0C;
    case 0x7F28DA10u: goto label_7F28DA10;
    case 0x7F28DA14u: goto label_7F28DA14;
    case 0x7F28DA18u: goto label_7F28DA18;
    case 0x7F28DA1Cu: goto label_7F28DA1C;
    case 0x7F28DA20u: goto label_7F28DA20;
    case 0x7F28DA24u: goto label_7F28DA24;
    case 0x7F28DA28u: goto label_7F28DA28;
    case 0x7F28DA2Cu: goto label_7F28DA2C;
    case 0x7F28DA30u: goto label_7F28DA30;
    case 0x7F28DA34u: goto label_7F28DA34;
    case 0x7F28DA38u: goto label_7F28DA38;
    case 0x7F28DA3Cu: goto label_7F28DA3C;
    case 0x7F28DA40u: goto label_7F28DA40;
    case 0x7F28DA44u: goto label_7F28DA44;
    case 0x7F28DA48u: goto label_7F28DA48;
    case 0x7F28DA4Cu: goto label_7F28DA4C;
    case 0x7F28DA50u: goto label_7F28DA50;
    case 0x7F28DA54u: goto label_7F28DA54;
    case 0x7F28DA58u: goto label_7F28DA58;
    case 0x7F28DA5Cu: goto label_7F28DA5C;
    case 0x7F28DA60u: goto label_7F28DA60;
    case 0x7F28DA64u: goto label_7F28DA64;
    case 0x7F28DA68u: goto label_7F28DA68;
    case 0x7F28DA6Cu: goto label_7F28DA6C;
    case 0x7F28DA70u: goto label_7F28DA70;
    case 0x7F28DA74u: goto label_7F28DA74;
    case 0x7F28DA78u: goto label_7F28DA78;
    case 0x7F28DA7Cu: goto label_7F28DA7C;
    case 0x7F28DA80u: goto label_7F28DA80;
    case 0x7F28DA84u: goto label_7F28DA84;
    case 0x7F28DA88u: goto label_7F28DA88;
    case 0x7F28DA8Cu: goto label_7F28DA8C;
    case 0x7F28DA90u: goto label_7F28DA90;
    case 0x7F28DA94u: goto label_7F28DA94;
    case 0x7F28DA98u: goto label_7F28DA98;
    case 0x7F28DA9Cu: goto label_7F28DA9C;
    case 0x7F28DAA0u: goto label_7F28DAA0;
    case 0x7F28DAA4u: goto label_7F28DAA4;
    case 0x7F28DAA8u: goto label_7F28DAA8;
    case 0x7F28DAACu: goto label_7F28DAAC;
    case 0x7F28DAB0u: goto label_7F28DAB0;
    case 0x7F28DAB4u: goto label_7F28DAB4;
    case 0x7F28DAB8u: goto label_7F28DAB8;
    case 0x7F28DABCu: goto label_7F28DABC;
    case 0x7F28DAC0u: goto label_7F28DAC0;
    case 0x7F28DAC4u: goto label_7F28DAC4;
    case 0x7F28DAC8u: goto label_7F28DAC8;
    case 0x7F28DACCu: goto label_7F28DACC;
    case 0x7F28DAD0u: goto label_7F28DAD0;
    case 0x7F28DAD4u: goto label_7F28DAD4;
    case 0x7F28DAD8u: goto label_7F28DAD8;
    case 0x7F28DADCu: goto label_7F28DADC;
    case 0x7F28DAE0u: goto label_7F28DAE0;
    case 0x7F28DAE4u: goto label_7F28DAE4;
    case 0x7F28DAE8u: goto label_7F28DAE8;
    case 0x7F28DAECu: goto label_7F28DAEC;
    case 0x7F28DAF0u: goto label_7F28DAF0;
    case 0x7F28DAF4u: goto label_7F28DAF4;
    case 0x7F28DAF8u: goto label_7F28DAF8;
    case 0x7F28DAFCu: goto label_7F28DAFC;
    case 0x7F28DB00u: goto label_7F28DB00;
    case 0x7F28DB04u: goto label_7F28DB04;
    case 0x7F28DB08u: goto label_7F28DB08;
    case 0x7F28DB0Cu: goto label_7F28DB0C;
    case 0x7F28DB10u: goto label_7F28DB10;
    case 0x7F28DB14u: goto label_7F28DB14;
    case 0x7F28DB18u: goto label_7F28DB18;
    case 0x7F28DB1Cu: goto label_7F28DB1C;
    case 0x7F28DB20u: goto label_7F28DB20;
    case 0x7F28DB24u: goto label_7F28DB24;
    case 0x7F28DB28u: goto label_7F28DB28;
    case 0x7F28DB2Cu: goto label_7F28DB2C;
    case 0x7F28DB30u: goto label_7F28DB30;
    case 0x7F28DB34u: goto label_7F28DB34;
    case 0x7F28DB38u: goto label_7F28DB38;
    case 0x7F28DB3Cu: goto label_7F28DB3C;
    case 0x7F28DB40u: goto label_7F28DB40;
    case 0x7F28DB44u: goto label_7F28DB44;
    case 0x7F28DB48u: goto label_7F28DB48;
    case 0x7F28DB4Cu: goto label_7F28DB4C;
    case 0x7F28DB50u: goto label_7F28DB50;
    case 0x7F28DB54u: goto label_7F28DB54;
    case 0x7F28DB58u: goto label_7F28DB58;
    case 0x7F28DB5Cu: goto label_7F28DB5C;
    case 0x7F28DB60u: goto label_7F28DB60;
    case 0x7F28DB64u: goto label_7F28DB64;
    case 0x7F28DB68u: goto label_7F28DB68;
    case 0x7F28DB6Cu: goto label_7F28DB6C;
    case 0x7F28DB70u: goto label_7F28DB70;
    case 0x7F28DB74u: goto label_7F28DB74;
    case 0x7F28DB78u: goto label_7F28DB78;
    case 0x7F28DB7Cu: goto label_7F28DB7C;
    case 0x7F28DB80u: goto label_7F28DB80;
    case 0x7F28DB84u: goto label_7F28DB84;
    case 0x7F28DB88u: goto label_7F28DB88;
    case 0x7F28DB8Cu: goto label_7F28DB8C;
    case 0x7F28DB90u: goto label_7F28DB90;
    case 0x7F28DB94u: goto label_7F28DB94;
    case 0x7F28DB98u: goto label_7F28DB98;
    case 0x7F28DB9Cu: goto label_7F28DB9C;
    case 0x7F28DBA0u: goto label_7F28DBA0;
    case 0x7F28DBA4u: goto label_7F28DBA4;
    case 0x7F28DBA8u: goto label_7F28DBA8;
    case 0x7F28DBACu: goto label_7F28DBAC;
    case 0x7F28DBB0u: goto label_7F28DBB0;
    case 0x7F28DBB4u: goto label_7F28DBB4;
    case 0x7F28DBB8u: goto label_7F28DBB8;
    case 0x7F28DBBCu: goto label_7F28DBBC;
    case 0x7F28DBC0u: goto label_7F28DBC0;
    case 0x7F28DBC4u: goto label_7F28DBC4;
    case 0x7F28DBC8u: goto label_7F28DBC8;
    case 0x7F28DBCCu: goto label_7F28DBCC;
    case 0x7F28DBD0u: goto label_7F28DBD0;
    case 0x7F28DBD4u: goto label_7F28DBD4;
    case 0x7F28DBD8u: goto label_7F28DBD8;
    case 0x7F28DBDCu: goto label_7F28DBDC;
    case 0x7F28DBE0u: goto label_7F28DBE0;
    case 0x7F28DBE4u: goto label_7F28DBE4;
    case 0x7F28DBE8u: goto label_7F28DBE8;
    case 0x7F28DBECu: goto label_7F28DBEC;
    case 0x7F28DBF0u: goto label_7F28DBF0;
    case 0x7F28DBF4u: goto label_7F28DBF4;
    case 0x7F28DBF8u: goto label_7F28DBF8;
    case 0x7F28DBFCu: goto label_7F28DBFC;
    case 0x7F28DC00u: goto label_7F28DC00;
    case 0x7F28DC04u: goto label_7F28DC04;
    case 0x7F28DC08u: goto label_7F28DC08;
    case 0x7F28DC0Cu: goto label_7F28DC0C;
    case 0x7F28DC10u: goto label_7F28DC10;
    case 0x7F28DC14u: goto label_7F28DC14;
    case 0x7F28DC18u: goto label_7F28DC18;
    case 0x7F28DC1Cu: goto label_7F28DC1C;
    case 0x7F28DC20u: goto label_7F28DC20;
    case 0x7F28DC24u: goto label_7F28DC24;
    case 0x7F28DC28u: goto label_7F28DC28;
    case 0x7F28DC2Cu: goto label_7F28DC2C;
    case 0x7F28DC30u: goto label_7F28DC30;
    case 0x7F28DC34u: goto label_7F28DC34;
    case 0x7F28DC38u: goto label_7F28DC38;
    case 0x7F28DC3Cu: goto label_7F28DC3C;
    case 0x7F28DC40u: goto label_7F28DC40;
    case 0x7F28DC44u: goto label_7F28DC44;
    case 0x7F28DC48u: goto label_7F28DC48;
    case 0x7F28DC4Cu: goto label_7F28DC4C;
    case 0x7F28DC50u: goto label_7F28DC50;
    case 0x7F28DC54u: goto label_7F28DC54;
    case 0x7F28DC58u: goto label_7F28DC58;
    case 0x7F28DC5Cu: goto label_7F28DC5C;
    case 0x7F28DC60u: goto label_7F28DC60;
    case 0x7F28DC64u: goto label_7F28DC64;
    case 0x7F28DC68u: goto label_7F28DC68;
    case 0x7F28DC6Cu: goto label_7F28DC6C;
    case 0x7F28DC70u: goto label_7F28DC70;
    case 0x7F28DC74u: goto label_7F28DC74;
    case 0x7F28DC78u: goto label_7F28DC78;
    case 0x7F28DC7Cu: goto label_7F28DC7C;
    case 0x7F28DC80u: goto label_7F28DC80;
    case 0x7F28DC84u: goto label_7F28DC84;
    case 0x7F28DC88u: goto label_7F28DC88;
    case 0x7F28DC8Cu: goto label_7F28DC8C;
    case 0x7F28DC90u: goto label_7F28DC90;
    case 0x7F28DC94u: goto label_7F28DC94;
    case 0x7F28DC98u: goto label_7F28DC98;
    case 0x7F28DC9Cu: goto label_7F28DC9C;
    case 0x7F28DCA0u: goto label_7F28DCA0;
    case 0x7F28DCA4u: goto label_7F28DCA4;
    case 0x7F28DCA8u: goto label_7F28DCA8;
    case 0x7F28DCACu: goto label_7F28DCAC;
    case 0x7F28DCB0u: goto label_7F28DCB0;
    case 0x7F28DCB4u: goto label_7F28DCB4;
    case 0x7F28DCB8u: goto label_7F28DCB8;
    case 0x7F28DCBCu: goto label_7F28DCBC;
    case 0x7F28DCC0u: goto label_7F28DCC0;
    case 0x7F28DCC4u: goto label_7F28DCC4;
    case 0x7F28DCC8u: goto label_7F28DCC8;
    case 0x7F28DCCCu: goto label_7F28DCCC;
    case 0x7F28DCD0u: goto label_7F28DCD0;
    case 0x7F28DCD4u: goto label_7F28DCD4;
    case 0x7F28DCD8u: goto label_7F28DCD8;
    case 0x7F28DCDCu: goto label_7F28DCDC;
    case 0x7F28DCE0u: goto label_7F28DCE0;
    case 0x7F28DCE4u: goto label_7F28DCE4;
    case 0x7F28DCE8u: goto label_7F28DCE8;
    case 0x7F28DCECu: goto label_7F28DCEC;
    case 0x7F28DCF0u: goto label_7F28DCF0;
    case 0x7F28DCF4u: goto label_7F28DCF4;
    case 0x7F28DCF8u: goto label_7F28DCF8;
    case 0x7F28DCFCu: goto label_7F28DCFC;
    case 0x7F28DD00u: goto label_7F28DD00;
    case 0x7F28DD04u: goto label_7F28DD04;
    case 0x7F28DD08u: goto label_7F28DD08;
    case 0x7F28DD0Cu: goto label_7F28DD0C;
    case 0x7F28DD10u: goto label_7F28DD10;
    case 0x7F28DD14u: goto label_7F28DD14;
    case 0x7F28DD18u: goto label_7F28DD18;
    case 0x7F28DD1Cu: goto label_7F28DD1C;
    case 0x7F28DD20u: goto label_7F28DD20;
    case 0x7F28DD24u: goto label_7F28DD24;
    case 0x7F28DD28u: goto label_7F28DD28;
    case 0x7F28DD2Cu: goto label_7F28DD2C;
    case 0x7F28DD30u: goto label_7F28DD30;
    case 0x7F28DD34u: goto label_7F28DD34;
    case 0x7F28DD38u: goto label_7F28DD38;
    case 0x7F28DD3Cu: goto label_7F28DD3C;
    case 0x7F28DD40u: goto label_7F28DD40;
    case 0x7F28DD44u: goto label_7F28DD44;
    case 0x7F28DD48u: goto label_7F28DD48;
    case 0x7F28DD4Cu: goto label_7F28DD4C;
    case 0x7F28DD50u: goto label_7F28DD50;
    case 0x7F28DD54u: goto label_7F28DD54;
    case 0x7F28DD58u: goto label_7F28DD58;
    case 0x7F28DD5Cu: goto label_7F28DD5C;
    case 0x7F28DD60u: goto label_7F28DD60;
    case 0x7F28DD64u: goto label_7F28DD64;
    case 0x7F28DD68u: goto label_7F28DD68;
    case 0x7F28DD6Cu: goto label_7F28DD6C;
    case 0x7F28DD70u: goto label_7F28DD70;
    case 0x7F28DD74u: goto label_7F28DD74;
    case 0x7F28DD78u: goto label_7F28DD78;
    case 0x7F28DD7Cu: goto label_7F28DD7C;
    case 0x7F28DD80u: goto label_7F28DD80;
    case 0x7F28DD84u: goto label_7F28DD84;
    case 0x7F28DD88u: goto label_7F28DD88;
    case 0x7F28DD8Cu: goto label_7F28DD8C;
    case 0x7F28DD90u: goto label_7F28DD90;
    case 0x7F28DD94u: goto label_7F28DD94;
    case 0x7F28DD98u: goto label_7F28DD98;
    case 0x7F28DD9Cu: goto label_7F28DD9C;
    case 0x7F28DDA0u: goto label_7F28DDA0;
    case 0x7F28DDA4u: goto label_7F28DDA4;
    case 0x7F28DDA8u: goto label_7F28DDA8;
    case 0x7F28DDACu: goto label_7F28DDAC;
    case 0x7F28DDB0u: goto label_7F28DDB0;
    case 0x7F28DDB4u: goto label_7F28DDB4;
    case 0x7F28DDB8u: goto label_7F28DDB8;
    case 0x7F28DDBCu: goto label_7F28DDBC;
    case 0x7F28DDC0u: goto label_7F28DDC0;
    case 0x7F28DDC4u: goto label_7F28DDC4;
    case 0x7F28DDC8u: goto label_7F28DDC8;
    case 0x7F28DDCCu: goto label_7F28DDCC;
    case 0x7F28DDD0u: goto label_7F28DDD0;
    case 0x7F28DDD4u: goto label_7F28DDD4;
    case 0x7F28DDD8u: goto label_7F28DDD8;
    case 0x7F28DDDCu: goto label_7F28DDDC;
    case 0x7F28DDE0u: goto label_7F28DDE0;
    case 0x7F28DDE4u: goto label_7F28DDE4;
    case 0x7F28DDE8u: goto label_7F28DDE8;
    case 0x7F28DDECu: goto label_7F28DDEC;
    case 0x7F28DDF0u: goto label_7F28DDF0;
    case 0x7F28DDF4u: goto label_7F28DDF4;
    case 0x7F28DDF8u: goto label_7F28DDF8;
    case 0x7F28DDFCu: goto label_7F28DDFC;
    case 0x7F28DE00u: goto label_7F28DE00;
    case 0x7F28DE04u: goto label_7F28DE04;
    case 0x7F28DE08u: goto label_7F28DE08;
    case 0x7F28DE0Cu: goto label_7F28DE0C;
    case 0x7F28DE10u: goto label_7F28DE10;
    case 0x7F28DE14u: goto label_7F28DE14;
    case 0x7F28DE18u: goto label_7F28DE18;
    case 0x7F28DE1Cu: goto label_7F28DE1C;
    case 0x7F28DE20u: goto label_7F28DE20;
    case 0x7F28DE24u: goto label_7F28DE24;
    case 0x7F28DE28u: goto label_7F28DE28;
    case 0x7F28DE2Cu: goto label_7F28DE2C;
    case 0x7F28DE30u: goto label_7F28DE30;
    case 0x7F28DE34u: goto label_7F28DE34;
    case 0x7F28DE38u: goto label_7F28DE38;
    case 0x7F28DE3Cu: goto label_7F28DE3C;
    case 0x7F28DE40u: goto label_7F28DE40;
    case 0x7F28DE44u: goto label_7F28DE44;
    case 0x7F28DE48u: goto label_7F28DE48;
    case 0x7F28DE4Cu: goto label_7F28DE4C;
    case 0x7F28DE50u: goto label_7F28DE50;
    case 0x7F28DE54u: goto label_7F28DE54;
    case 0x7F28DE58u: goto label_7F28DE58;
    case 0x7F28DE5Cu: goto label_7F28DE5C;
    case 0x7F28DE60u: goto label_7F28DE60;
    case 0x7F28DE64u: goto label_7F28DE64;
    case 0x7F28DE68u: goto label_7F28DE68;
    case 0x7F28DE6Cu: goto label_7F28DE6C;
    case 0x7F28DE70u: goto label_7F28DE70;
    case 0x7F28DE74u: goto label_7F28DE74;
    case 0x7F28DE78u: goto label_7F28DE78;
    case 0x7F28DE7Cu: goto label_7F28DE7C;
    case 0x7F28DE80u: goto label_7F28DE80;
    case 0x7F28DE84u: goto label_7F28DE84;
    case 0x7F28DE88u: goto label_7F28DE88;
    case 0x7F28DE8Cu: goto label_7F28DE8C;
    case 0x7F28DE90u: goto label_7F28DE90;
    case 0x7F28DE94u: goto label_7F28DE94;
    case 0x7F28DE98u: goto label_7F28DE98;
    case 0x7F28DE9Cu: goto label_7F28DE9C;
    case 0x7F28DEA0u: goto label_7F28DEA0;
    case 0x7F28DEA4u: goto label_7F28DEA4;
    case 0x7F28DEA8u: goto label_7F28DEA8;
    case 0x7F28DEACu: goto label_7F28DEAC;
    case 0x7F28DEB0u: goto label_7F28DEB0;
    case 0x7F28DEB4u: goto label_7F28DEB4;
    case 0x7F28DEB8u: goto label_7F28DEB8;
    case 0x7F28DEBCu: goto label_7F28DEBC;
    case 0x7F28DEC0u: goto label_7F28DEC0;
    case 0x7F28DEC4u: goto label_7F28DEC4;
    case 0x7F28DEC8u: goto label_7F28DEC8;
    case 0x7F28DECCu: goto label_7F28DECC;
    case 0x7F28DED0u: goto label_7F28DED0;
    case 0x7F28DED4u: goto label_7F28DED4;
    case 0x7F28DED8u: goto label_7F28DED8;
    case 0x7F28DEDCu: goto label_7F28DEDC;
    case 0x7F28DEE0u: goto label_7F28DEE0;
    case 0x7F28DEE4u: goto label_7F28DEE4;
    case 0x7F28DEE8u: goto label_7F28DEE8;
    case 0x7F28DEECu: goto label_7F28DEEC;
    case 0x7F28DEF0u: goto label_7F28DEF0;
    case 0x7F28DEF4u: goto label_7F28DEF4;
    case 0x7F28DEF8u: goto label_7F28DEF8;
    case 0x7F28DEFCu: goto label_7F28DEFC;
    case 0x7F28DF00u: goto label_7F28DF00;
    case 0x7F28DF04u: goto label_7F28DF04;
    case 0x7F28DF08u: goto label_7F28DF08;
    case 0x7F28DF0Cu: goto label_7F28DF0C;
    case 0x7F28DF10u: goto label_7F28DF10;
    case 0x7F28DF14u: goto label_7F28DF14;
    case 0x7F28DF18u: goto label_7F28DF18;
    case 0x7F28DF1Cu: goto label_7F28DF1C;
    case 0x7F28DF20u: goto label_7F28DF20;
    case 0x7F28DF24u: goto label_7F28DF24;
    case 0x7F28DF28u: goto label_7F28DF28;
    case 0x7F28DF2Cu: goto label_7F28DF2C;
    case 0x7F28DF30u: goto label_7F28DF30;
    case 0x7F28DF34u: goto label_7F28DF34;
    case 0x7F28DF38u: goto label_7F28DF38;
    case 0x7F28DF3Cu: goto label_7F28DF3C;
    case 0x7F28DF40u: goto label_7F28DF40;
    case 0x7F28DF44u: goto label_7F28DF44;
    case 0x7F28DF48u: goto label_7F28DF48;
    case 0x7F28DF4Cu: goto label_7F28DF4C;
    case 0x7F28DF50u: goto label_7F28DF50;
    case 0x7F28DF54u: goto label_7F28DF54;
    case 0x7F28DF58u: goto label_7F28DF58;
    case 0x7F28DF5Cu: goto label_7F28DF5C;
    case 0x7F28DF60u: goto label_7F28DF60;
    case 0x7F28DF64u: goto label_7F28DF64;
    case 0x7F28DF68u: goto label_7F28DF68;
    case 0x7F28DF6Cu: goto label_7F28DF6C;
    case 0x7F28DF70u: goto label_7F28DF70;
    case 0x7F28DF74u: goto label_7F28DF74;
    case 0x7F28DF78u: goto label_7F28DF78;
    case 0x7F28DF7Cu: goto label_7F28DF7C;
    case 0x7F28DF80u: goto label_7F28DF80;
    case 0x7F28DF84u: goto label_7F28DF84;
    case 0x7F28DF88u: goto label_7F28DF88;
    case 0x7F28DF8Cu: goto label_7F28DF8C;
    case 0x7F28DF90u: goto label_7F28DF90;
    case 0x7F28DF94u: goto label_7F28DF94;
    case 0x7F28DF98u: goto label_7F28DF98;
    case 0x7F28DF9Cu: goto label_7F28DF9C;
    case 0x7F28DFA0u: goto label_7F28DFA0;
    case 0x7F28DFA4u: goto label_7F28DFA4;
    case 0x7F28DFA8u: goto label_7F28DFA8;
    case 0x7F28DFACu: goto label_7F28DFAC;
    case 0x7F28DFB0u: goto label_7F28DFB0;
    case 0x7F28DFB4u: goto label_7F28DFB4;
    case 0x7F28DFB8u: goto label_7F28DFB8;
    case 0x7F28DFBCu: goto label_7F28DFBC;
    case 0x7F28DFC0u: goto label_7F28DFC0;
    case 0x7F28DFC4u: goto label_7F28DFC4;
    case 0x7F28DFC8u: goto label_7F28DFC8;
    case 0x7F28DFCCu: goto label_7F28DFCC;
    case 0x7F28DFD0u: goto label_7F28DFD0;
    case 0x7F28DFD4u: goto label_7F28DFD4;
    case 0x7F28DFD8u: goto label_7F28DFD8;
    case 0x7F28DFDCu: goto label_7F28DFDC;
    case 0x7F28DFE0u: goto label_7F28DFE0;
    case 0x7F28DFE4u: goto label_7F28DFE4;
    case 0x7F28DFE8u: goto label_7F28DFE8;
    case 0x7F28DFECu: goto label_7F28DFEC;
    case 0x7F28DFF0u: goto label_7F28DFF0;
    case 0x7F28DFF4u: goto label_7F28DFF4;
    case 0x7F28DFF8u: goto label_7F28DFF8;
    case 0x7F28DFFCu: goto label_7F28DFFC;
    case 0x7F28E000u: goto label_7F28E000;
    case 0x7F28E004u: goto label_7F28E004;
    case 0x7F28E008u: goto label_7F28E008;
    case 0x7F28E00Cu: goto label_7F28E00C;
    case 0x7F28E010u: goto label_7F28E010;
    case 0x7F28E014u: goto label_7F28E014;
    case 0x7F28E018u: goto label_7F28E018;
    case 0x7F28E01Cu: goto label_7F28E01C;
    case 0x7F28E020u: goto label_7F28E020;
    case 0x7F28E024u: goto label_7F28E024;
    case 0x7F28E028u: goto label_7F28E028;
    case 0x7F28E02Cu: goto label_7F28E02C;
    case 0x7F28E030u: goto label_7F28E030;
    case 0x7F28E034u: goto label_7F28E034;
    case 0x7F28E038u: goto label_7F28E038;
    case 0x7F28E03Cu: goto label_7F28E03C;
    case 0x7F28E040u: goto label_7F28E040;
    case 0x7F28E044u: goto label_7F28E044;
    case 0x7F28E048u: goto label_7F28E048;
    case 0x7F28E04Cu: goto label_7F28E04C;
    case 0x7F28E050u: goto label_7F28E050;
    case 0x7F28E054u: goto label_7F28E054;
    case 0x7F28E058u: goto label_7F28E058;
    case 0x7F28E05Cu: goto label_7F28E05C;
    case 0x7F28E060u: goto label_7F28E060;
    case 0x7F28E064u: goto label_7F28E064;
    case 0x7F28E068u: goto label_7F28E068;
    case 0x7F28E06Cu: goto label_7F28E06C;
    case 0x7F28E070u: goto label_7F28E070;
    case 0x7F28E074u: goto label_7F28E074;
    case 0x7F28E078u: goto label_7F28E078;
    case 0x7F28E07Cu: goto label_7F28E07C;
    case 0x7F28E080u: goto label_7F28E080;
    case 0x7F28E084u: goto label_7F28E084;
    case 0x7F28E088u: goto label_7F28E088;
    case 0x7F28E08Cu: goto label_7F28E08C;
    case 0x7F28E090u: goto label_7F28E090;
    case 0x7F28E094u: goto label_7F28E094;
    case 0x7F28E098u: goto label_7F28E098;
    case 0x7F28E09Cu: goto label_7F28E09C;
    case 0x7F28E0A0u: goto label_7F28E0A0;
    case 0x7F28E0A4u: goto label_7F28E0A4;
    case 0x7F28E0A8u: goto label_7F28E0A8;
    case 0x7F28E0ACu: goto label_7F28E0AC;
    case 0x7F28E0B0u: goto label_7F28E0B0;
    case 0x7F28E0B4u: goto label_7F28E0B4;
    case 0x7F28E0B8u: goto label_7F28E0B8;
    case 0x7F28E0BCu: goto label_7F28E0BC;
    case 0x7F28E0C0u: goto label_7F28E0C0;
    case 0x7F28E0C4u: goto label_7F28E0C4;
    case 0x7F28E0C8u: goto label_7F28E0C8;
    case 0x7F28E0CCu: goto label_7F28E0CC;
    case 0x7F28E0D0u: goto label_7F28E0D0;
    case 0x7F28E0D4u: goto label_7F28E0D4;
    case 0x7F28E0D8u: goto label_7F28E0D8;
    case 0x7F28E0DCu: goto label_7F28E0DC;
    case 0x7F28E0E0u: goto label_7F28E0E0;
    case 0x7F28E0E4u: goto label_7F28E0E4;
    case 0x7F28E0E8u: goto label_7F28E0E8;
    case 0x7F28E0ECu: goto label_7F28E0EC;
    case 0x7F28E0F0u: goto label_7F28E0F0;
    case 0x7F28E0F4u: goto label_7F28E0F4;
    case 0x7F28E0F8u: goto label_7F28E0F8;
    case 0x7F28E0FCu: goto label_7F28E0FC;
    case 0x7F28E100u: goto label_7F28E100;
    case 0x7F28E104u: goto label_7F28E104;
    case 0x7F28E108u: goto label_7F28E108;
    case 0x7F28E10Cu: goto label_7F28E10C;
    case 0x7F28E110u: goto label_7F28E110;
    case 0x7F28E114u: goto label_7F28E114;
    case 0x7F28E118u: goto label_7F28E118;
    case 0x7F28E11Cu: goto label_7F28E11C;
    case 0x7F28E120u: goto label_7F28E120;
    case 0x7F28E124u: goto label_7F28E124;
    case 0x7F28E128u: goto label_7F28E128;
    case 0x7F28E12Cu: goto label_7F28E12C;
    case 0x7F28E130u: goto label_7F28E130;
    case 0x7F28E134u: goto label_7F28E134;
    case 0x7F28E138u: goto label_7F28E138;
    case 0x7F28E13Cu: goto label_7F28E13C;
    case 0x7F28E140u: goto label_7F28E140;
    case 0x7F28E144u: goto label_7F28E144;
    case 0x7F28E148u: goto label_7F28E148;
    case 0x7F28E14Cu: goto label_7F28E14C;
    case 0x7F28E150u: goto label_7F28E150;
    case 0x7F28E154u: goto label_7F28E154;
    case 0x7F28E158u: goto label_7F28E158;
    case 0x7F28E15Cu: goto label_7F28E15C;
    case 0x7F28E160u: goto label_7F28E160;
    case 0x7F28E164u: goto label_7F28E164;
    case 0x7F28E168u: goto label_7F28E168;
    case 0x7F28E16Cu: goto label_7F28E16C;
    case 0x7F28E170u: goto label_7F28E170;
    case 0x7F28E174u: goto label_7F28E174;
    case 0x7F28E178u: goto label_7F28E178;
    case 0x7F28E17Cu: goto label_7F28E17C;
    case 0x7F28E180u: goto label_7F28E180;
    case 0x7F28E184u: goto label_7F28E184;
    case 0x7F28E188u: goto label_7F28E188;
    case 0x7F28E18Cu: goto label_7F28E18C;
    case 0x7F28E190u: goto label_7F28E190;
    case 0x7F28E194u: goto label_7F28E194;
    case 0x7F28E198u: goto label_7F28E198;
    case 0x7F28E19Cu: goto label_7F28E19C;
    case 0x7F28E1A0u: goto label_7F28E1A0;
    case 0x7F28E1A4u: goto label_7F28E1A4;
    case 0x7F28E1A8u: goto label_7F28E1A8;
    case 0x7F28E1ACu: goto label_7F28E1AC;
    case 0x7F28E1B0u: goto label_7F28E1B0;
    case 0x7F28E1B4u: goto label_7F28E1B4;
    case 0x7F28E1B8u: goto label_7F28E1B8;
    case 0x7F28E1BCu: goto label_7F28E1BC;
    case 0x7F28E1C0u: goto label_7F28E1C0;
    case 0x7F28E1C4u: goto label_7F28E1C4;
    case 0x7F28E1C8u: goto label_7F28E1C8;
    case 0x7F28E1CCu: goto label_7F28E1CC;
    case 0x7F28E1D0u: goto label_7F28E1D0;
    case 0x7F28E1D4u: goto label_7F28E1D4;
    case 0x7F28E1D8u: goto label_7F28E1D8;
    case 0x7F28E1DCu: goto label_7F28E1DC;
    case 0x7F28E1E0u: goto label_7F28E1E0;
    case 0x7F28E1E4u: goto label_7F28E1E4;
    case 0x7F28E1E8u: goto label_7F28E1E8;
    case 0x7F28E1ECu: goto label_7F28E1EC;
    case 0x7F28E1F0u: goto label_7F28E1F0;
    case 0x7F28E1F4u: goto label_7F28E1F4;
    case 0x7F28E1F8u: goto label_7F28E1F8;
    case 0x7F28E1FCu: goto label_7F28E1FC;
    case 0x7F28E200u: goto label_7F28E200;
    case 0x7F28E204u: goto label_7F28E204;
    case 0x7F28E208u: goto label_7F28E208;
    case 0x7F28E20Cu: goto label_7F28E20C;
    case 0x7F28E210u: goto label_7F28E210;
    case 0x7F28E214u: goto label_7F28E214;
    case 0x7F28E218u: goto label_7F28E218;
    case 0x7F28E21Cu: goto label_7F28E21C;
    case 0x7F28E220u: goto label_7F28E220;
    case 0x7F28E224u: goto label_7F28E224;
    case 0x7F28E228u: goto label_7F28E228;
    case 0x7F28E22Cu: goto label_7F28E22C;
    case 0x7F28E230u: goto label_7F28E230;
    case 0x7F28E234u: goto label_7F28E234;
    case 0x7F28E238u: goto label_7F28E238;
    case 0x7F28E23Cu: goto label_7F28E23C;
    case 0x7F28E240u: goto label_7F28E240;
    case 0x7F28E244u: goto label_7F28E244;
    case 0x7F28E248u: goto label_7F28E248;
    case 0x7F28E24Cu: goto label_7F28E24C;
    case 0x7F28E250u: goto label_7F28E250;
    case 0x7F28E254u: goto label_7F28E254;
    case 0x7F28E258u: goto label_7F28E258;
    case 0x7F28E25Cu: goto label_7F28E25C;
    case 0x7F28E260u: goto label_7F28E260;
    case 0x7F28E264u: goto label_7F28E264;
    case 0x7F28E268u: goto label_7F28E268;
    case 0x7F28E26Cu: goto label_7F28E26C;
    case 0x7F28E270u: goto label_7F28E270;
    case 0x7F28E274u: goto label_7F28E274;
    case 0x7F28E278u: goto label_7F28E278;
    case 0x7F28E27Cu: goto label_7F28E27C;
    case 0x7F28E280u: goto label_7F28E280;
    case 0x7F28E284u: goto label_7F28E284;
    case 0x7F28E288u: goto label_7F28E288;
    case 0x7F28E28Cu: goto label_7F28E28C;
    case 0x7F28E290u: goto label_7F28E290;
    case 0x7F28E294u: goto label_7F28E294;
    case 0x7F28E298u: goto label_7F28E298;
    case 0x7F28E29Cu: goto label_7F28E29C;
    case 0x7F28E2A0u: goto label_7F28E2A0;
    case 0x7F28E2A4u: goto label_7F28E2A4;
    case 0x7F28E2A8u: goto label_7F28E2A8;
    case 0x7F28E2ACu: goto label_7F28E2AC;
    case 0x7F28E2B0u: goto label_7F28E2B0;
    case 0x7F28E2B4u: goto label_7F28E2B4;
    case 0x7F28E2B8u: goto label_7F28E2B8;
    case 0x7F28E2BCu: goto label_7F28E2BC;
    case 0x7F28E2C0u: goto label_7F28E2C0;
    case 0x7F28E2C4u: goto label_7F28E2C4;
    case 0x7F28E2C8u: goto label_7F28E2C8;
    case 0x7F28E2CCu: goto label_7F28E2CC;
    case 0x7F28E2D0u: goto label_7F28E2D0;
    case 0x7F28E2D4u: goto label_7F28E2D4;
    case 0x7F28E2D8u: goto label_7F28E2D8;
    case 0x7F28E2DCu: goto label_7F28E2DC;
    case 0x7F28E2E0u: goto label_7F28E2E0;
    case 0x7F28E2E4u: goto label_7F28E2E4;
    case 0x7F28E2E8u: goto label_7F28E2E8;
    case 0x7F28E2ECu: goto label_7F28E2EC;
    case 0x7F28E2F0u: goto label_7F28E2F0;
    case 0x7F28E2F4u: goto label_7F28E2F4;
    case 0x7F28E2F8u: goto label_7F28E2F8;
    case 0x7F28E2FCu: goto label_7F28E2FC;
    case 0x7F28E300u: goto label_7F28E300;
    case 0x7F28E304u: goto label_7F28E304;
    case 0x7F28E308u: goto label_7F28E308;
    case 0x7F28E30Cu: goto label_7F28E30C;
    case 0x7F28E310u: goto label_7F28E310;
    case 0x7F28E314u: goto label_7F28E314;
    case 0x7F28E318u: goto label_7F28E318;
    case 0x7F28E31Cu: goto label_7F28E31C;
    case 0x7F28E320u: goto label_7F28E320;
    case 0x7F28E324u: goto label_7F28E324;
    case 0x7F28E328u: goto label_7F28E328;
    case 0x7F28E32Cu: goto label_7F28E32C;
    case 0x7F28E330u: goto label_7F28E330;
    case 0x7F28E334u: goto label_7F28E334;
    case 0x7F28E338u: goto label_7F28E338;
    case 0x7F28E33Cu: goto label_7F28E33C;
    case 0x7F28E340u: goto label_7F28E340;
    case 0x7F28E344u: goto label_7F28E344;
    case 0x7F28E348u: goto label_7F28E348;
    case 0x7F28E34Cu: goto label_7F28E34C;
    case 0x7F28E350u: goto label_7F28E350;
    case 0x7F28E354u: goto label_7F28E354;
    case 0x7F28E358u: goto label_7F28E358;
    case 0x7F28E35Cu: goto label_7F28E35C;
    case 0x7F28E360u: goto label_7F28E360;
    case 0x7F28E364u: goto label_7F28E364;
    case 0x7F28E368u: goto label_7F28E368;
    case 0x7F28E36Cu: goto label_7F28E36C;
    case 0x7F28E370u: goto label_7F28E370;
    case 0x7F28E374u: goto label_7F28E374;
    case 0x7F28E378u: goto label_7F28E378;
    case 0x7F28E37Cu: goto label_7F28E37C;
    case 0x7F28E380u: goto label_7F28E380;
    case 0x7F28E384u: goto label_7F28E384;
    case 0x7F28E388u: goto label_7F28E388;
    case 0x7F28E38Cu: goto label_7F28E38C;
    case 0x7F28E390u: goto label_7F28E390;
    case 0x7F28E394u: goto label_7F28E394;
    case 0x7F28E398u: goto label_7F28E398;
    case 0x7F28E39Cu: goto label_7F28E39C;
    case 0x7F28E3A0u: goto label_7F28E3A0;
    case 0x7F28E3A4u: goto label_7F28E3A4;
    case 0x7F28E3A8u: goto label_7F28E3A8;
    case 0x7F28E3ACu: goto label_7F28E3AC;
    case 0x7F28E3B0u: goto label_7F28E3B0;
    case 0x7F28E3B4u: goto label_7F28E3B4;
    case 0x7F28E3B8u: goto label_7F28E3B8;
    case 0x7F28E3BCu: goto label_7F28E3BC;
    case 0x7F28E3C0u: goto label_7F28E3C0;
    case 0x7F28E3C4u: goto label_7F28E3C4;
    case 0x7F28E3C8u: goto label_7F28E3C8;
    case 0x7F28E3CCu: goto label_7F28E3CC;
    case 0x7F28E3D0u: goto label_7F28E3D0;
    case 0x7F28E3D4u: goto label_7F28E3D4;
    case 0x7F28E3D8u: goto label_7F28E3D8;
    case 0x7F28E3DCu: goto label_7F28E3DC;
    case 0x7F28E3E0u: goto label_7F28E3E0;
    case 0x7F28E3E4u: goto label_7F28E3E4;
    case 0x7F28E3E8u: goto label_7F28E3E8;
    case 0x7F28E3ECu: goto label_7F28E3EC;
    case 0x7F28E3F0u: goto label_7F28E3F0;
    case 0x7F28E3F4u: goto label_7F28E3F4;
    case 0x7F28E3F8u: goto label_7F28E3F8;
    case 0x7F28E3FCu: goto label_7F28E3FC;
    case 0x7F28E400u: goto label_7F28E400;
    case 0x7F28E404u: goto label_7F28E404;
    case 0x7F28E408u: goto label_7F28E408;
    case 0x7F28E40Cu: goto label_7F28E40C;
    case 0x7F28E410u: goto label_7F28E410;
    case 0x7F28E414u: goto label_7F28E414;
    case 0x7F28E418u: goto label_7F28E418;
    case 0x7F28E41Cu: goto label_7F28E41C;
    case 0x7F28E420u: goto label_7F28E420;
    case 0x7F28E424u: goto label_7F28E424;
    case 0x7F28E428u: goto label_7F28E428;
    case 0x7F28E42Cu: goto label_7F28E42C;
    case 0x7F28E430u: goto label_7F28E430;
    case 0x7F28E434u: goto label_7F28E434;
    case 0x7F28E438u: goto label_7F28E438;
    case 0x7F28E43Cu: goto label_7F28E43C;
    case 0x7F28E440u: goto label_7F28E440;
    case 0x7F28E444u: goto label_7F28E444;
    case 0x7F28E448u: goto label_7F28E448;
    case 0x7F28E44Cu: goto label_7F28E44C;
    case 0x7F28E450u: goto label_7F28E450;
    case 0x7F28E454u: goto label_7F28E454;
    case 0x7F28E458u: goto label_7F28E458;
    case 0x7F28E45Cu: goto label_7F28E45C;
    case 0x7F28E460u: goto label_7F28E460;
    case 0x7F28E464u: goto label_7F28E464;
    case 0x7F28E468u: goto label_7F28E468;
    case 0x7F28E46Cu: goto label_7F28E46C;
    case 0x7F28E470u: goto label_7F28E470;
    case 0x7F28E474u: goto label_7F28E474;
    case 0x7F28E478u: goto label_7F28E478;
    case 0x7F28E47Cu: goto label_7F28E47C;
    case 0x7F28E480u: goto label_7F28E480;
    case 0x7F28E484u: goto label_7F28E484;
    case 0x7F28E488u: goto label_7F28E488;
    case 0x7F28E48Cu: goto label_7F28E48C;
    case 0x7F28E490u: goto label_7F28E490;
    case 0x7F28E494u: goto label_7F28E494;
    case 0x7F28E498u: goto label_7F28E498;
    case 0x7F28E49Cu: goto label_7F28E49C;
    case 0x7F28E4A0u: goto label_7F28E4A0;
    case 0x7F28E4A4u: goto label_7F28E4A4;
    case 0x7F28E4A8u: goto label_7F28E4A8;
    case 0x7F28E4ACu: goto label_7F28E4AC;
    case 0x7F28E4B0u: goto label_7F28E4B0;
    case 0x7F28E4B4u: goto label_7F28E4B4;
    case 0x7F28E4B8u: goto label_7F28E4B8;
    case 0x7F28E4BCu: goto label_7F28E4BC;
    case 0x7F28E4C0u: goto label_7F28E4C0;
    case 0x7F28E4C4u: goto label_7F28E4C4;
    case 0x7F28E4C8u: goto label_7F28E4C8;
    case 0x7F28E4CCu: goto label_7F28E4CC;
    case 0x7F28E4D0u: goto label_7F28E4D0;
    case 0x7F28E4D4u: goto label_7F28E4D4;
    case 0x7F28E4D8u: goto label_7F28E4D8;
    case 0x7F28E4DCu: goto label_7F28E4DC;
    case 0x7F28E4E0u: goto label_7F28E4E0;
    case 0x7F28E4E4u: goto label_7F28E4E4;
    case 0x7F28E4E8u: goto label_7F28E4E8;
    case 0x7F28E4ECu: goto label_7F28E4EC;
    case 0x7F28E4F0u: goto label_7F28E4F0;
    case 0x7F28E4F4u: goto label_7F28E4F4;
    case 0x7F28E4F8u: goto label_7F28E4F8;
    case 0x7F28E4FCu: goto label_7F28E4FC;
    case 0x7F28E500u: goto label_7F28E500;
    case 0x7F28E504u: goto label_7F28E504;
    case 0x7F28E508u: goto label_7F28E508;
    case 0x7F28E50Cu: goto label_7F28E50C;
    case 0x7F28E510u: goto label_7F28E510;
    case 0x7F28E514u: goto label_7F28E514;
    case 0x7F28E518u: goto label_7F28E518;
    case 0x7F28E51Cu: goto label_7F28E51C;
    case 0x7F28E520u: goto label_7F28E520;
    case 0x7F28E524u: goto label_7F28E524;
    case 0x7F28E528u: goto label_7F28E528;
    case 0x7F28E52Cu: goto label_7F28E52C;
    case 0x7F28E530u: goto label_7F28E530;
    case 0x7F28E534u: goto label_7F28E534;
    case 0x7F28E538u: goto label_7F28E538;
    case 0x7F28E53Cu: goto label_7F28E53C;
    case 0x7F28E540u: goto label_7F28E540;
    case 0x7F28E544u: goto label_7F28E544;
    case 0x7F28E548u: goto label_7F28E548;
    case 0x7F28E54Cu: goto label_7F28E54C;
    case 0x7F28E550u: goto label_7F28E550;
    case 0x7F28E554u: goto label_7F28E554;
    case 0x7F28E558u: goto label_7F28E558;
    case 0x7F28E55Cu: goto label_7F28E55C;
    case 0x7F28E560u: goto label_7F28E560;
    case 0x7F28E564u: goto label_7F28E564;
    case 0x7F28E568u: goto label_7F28E568;
    case 0x7F28E56Cu: goto label_7F28E56C;
    case 0x7F28E570u: goto label_7F28E570;
    case 0x7F28E574u: goto label_7F28E574;
    case 0x7F28E578u: goto label_7F28E578;
    case 0x7F28E57Cu: goto label_7F28E57C;
    case 0x7F28E580u: goto label_7F28E580;
    case 0x7F28E584u: goto label_7F28E584;
    case 0x7F28E588u: goto label_7F28E588;
    case 0x7F28E58Cu: goto label_7F28E58C;
    case 0x7F28E590u: goto label_7F28E590;
    case 0x7F28E594u: goto label_7F28E594;
    case 0x7F28E598u: goto label_7F28E598;
    case 0x7F28E59Cu: goto label_7F28E59C;
    case 0x7F28E5A0u: goto label_7F28E5A0;
    case 0x7F28E5A4u: goto label_7F28E5A4;
    case 0x7F28E5A8u: goto label_7F28E5A8;
    case 0x7F28E5ACu: goto label_7F28E5AC;
    case 0x7F28E5B0u: goto label_7F28E5B0;
    case 0x7F28E5B4u: goto label_7F28E5B4;
    case 0x7F28E5B8u: goto label_7F28E5B8;
    case 0x7F28E5BCu: goto label_7F28E5BC;
    case 0x7F28E5C0u: goto label_7F28E5C0;
    case 0x7F28E5C4u: goto label_7F28E5C4;
    case 0x7F28E5C8u: goto label_7F28E5C8;
    case 0x7F28E5CCu: goto label_7F28E5CC;
    case 0x7F28E5D0u: goto label_7F28E5D0;
    case 0x7F28E5D4u: goto label_7F28E5D4;
    case 0x7F28E5D8u: goto label_7F28E5D8;
    case 0x7F28E5DCu: goto label_7F28E5DC;
    case 0x7F28E5E0u: goto label_7F28E5E0;
    case 0x7F28E5E4u: goto label_7F28E5E4;
    case 0x7F28E5E8u: goto label_7F28E5E8;
    case 0x7F28E5ECu: goto label_7F28E5EC;
    case 0x7F28E5F0u: goto label_7F28E5F0;
    case 0x7F28E5F4u: goto label_7F28E5F4;
    case 0x7F28E5F8u: goto label_7F28E5F8;
    case 0x7F28E5FCu: goto label_7F28E5FC;
    case 0x7F28E600u: goto label_7F28E600;
    case 0x7F28E604u: goto label_7F28E604;
    case 0x7F28E608u: goto label_7F28E608;
    case 0x7F28E60Cu: goto label_7F28E60C;
    case 0x7F28E610u: goto label_7F28E610;
    case 0x7F28E614u: goto label_7F28E614;
    case 0x7F28E618u: goto label_7F28E618;
    case 0x7F28E61Cu: goto label_7F28E61C;
    case 0x7F28E620u: goto label_7F28E620;
    case 0x7F28E624u: goto label_7F28E624;
    case 0x7F28E628u: goto label_7F28E628;
    case 0x7F28E62Cu: goto label_7F28E62C;
    case 0x7F28E630u: goto label_7F28E630;
    case 0x7F28E634u: goto label_7F28E634;
    case 0x7F28E638u: goto label_7F28E638;
    case 0x7F28E63Cu: goto label_7F28E63C;
    case 0x7F28E640u: goto label_7F28E640;
    case 0x7F28E644u: goto label_7F28E644;
    case 0x7F28E648u: goto label_7F28E648;
    case 0x7F28E64Cu: goto label_7F28E64C;
    case 0x7F28E650u: goto label_7F28E650;
    case 0x7F28E654u: goto label_7F28E654;
    case 0x7F28E658u: goto label_7F28E658;
    case 0x7F28E65Cu: goto label_7F28E65C;
    case 0x7F28E660u: goto label_7F28E660;
    case 0x7F28E664u: goto label_7F28E664;
    case 0x7F28E668u: goto label_7F28E668;
    case 0x7F28E66Cu: goto label_7F28E66C;
    case 0x7F28E670u: goto label_7F28E670;
    case 0x7F28E674u: goto label_7F28E674;
    case 0x7F28E678u: goto label_7F28E678;
    case 0x7F28E67Cu: goto label_7F28E67C;
    case 0x7F28E680u: goto label_7F28E680;
    case 0x7F28E684u: goto label_7F28E684;
    case 0x7F28E688u: goto label_7F28E688;
    case 0x7F28E68Cu: goto label_7F28E68C;
    case 0x7F28E690u: goto label_7F28E690;
    case 0x7F28E694u: goto label_7F28E694;
    case 0x7F28E698u: goto label_7F28E698;
    case 0x7F28E69Cu: goto label_7F28E69C;
    case 0x7F28E6A0u: goto label_7F28E6A0;
    case 0x7F28E6A4u: goto label_7F28E6A4;
    case 0x7F28E6A8u: goto label_7F28E6A8;
    case 0x7F28E6ACu: goto label_7F28E6AC;
    case 0x7F28E6B0u: goto label_7F28E6B0;
    case 0x7F28E6B4u: goto label_7F28E6B4;
    case 0x7F28E6B8u: goto label_7F28E6B8;
    case 0x7F28E6BCu: goto label_7F28E6BC;
    case 0x7F28E6C0u: goto label_7F28E6C0;
    case 0x7F28E6C4u: goto label_7F28E6C4;
    case 0x7F28E6C8u: goto label_7F28E6C8;
    case 0x7F28E6CCu: goto label_7F28E6CC;
    case 0x7F28E6D0u: goto label_7F28E6D0;
    case 0x7F28E6D4u: goto label_7F28E6D4;
    case 0x7F28E6D8u: goto label_7F28E6D8;
    case 0x7F28E6DCu: goto label_7F28E6DC;
    case 0x7F28E6E0u: goto label_7F28E6E0;
    case 0x7F28E6E4u: goto label_7F28E6E4;
    case 0x7F28E6E8u: goto label_7F28E6E8;
    case 0x7F28E6ECu: goto label_7F28E6EC;
    case 0x7F28E6F0u: goto label_7F28E6F0;
    case 0x7F28E6F4u: goto label_7F28E6F4;
    case 0x7F28E6F8u: goto label_7F28E6F8;
    case 0x7F28E6FCu: goto label_7F28E6FC;
    case 0x7F28E700u: goto label_7F28E700;
    case 0x7F28E704u: goto label_7F28E704;
    case 0x7F28E708u: goto label_7F28E708;
    case 0x7F28E70Cu: goto label_7F28E70C;
    case 0x7F28E710u: goto label_7F28E710;
    case 0x7F28E714u: goto label_7F28E714;
    case 0x7F28E718u: goto label_7F28E718;
    case 0x7F28E71Cu: goto label_7F28E71C;
    case 0x7F28E720u: goto label_7F28E720;
    case 0x7F28E724u: goto label_7F28E724;
    case 0x7F28E728u: goto label_7F28E728;
    case 0x7F28E72Cu: goto label_7F28E72C;
    case 0x7F28E730u: goto label_7F28E730;
    case 0x7F28E734u: goto label_7F28E734;
    case 0x7F28E738u: goto label_7F28E738;
    case 0x7F28E73Cu: goto label_7F28E73C;
    case 0x7F28E740u: goto label_7F28E740;
    case 0x7F28E744u: goto label_7F28E744;
    case 0x7F28E748u: goto label_7F28E748;
    case 0x7F28E74Cu: goto label_7F28E74C;
    case 0x7F28E750u: goto label_7F28E750;
    case 0x7F28E754u: goto label_7F28E754;
    case 0x7F28E758u: goto label_7F28E758;
    case 0x7F28E75Cu: goto label_7F28E75C;
    case 0x7F28E760u: goto label_7F28E760;
    case 0x7F28E764u: goto label_7F28E764;
    case 0x7F28E768u: goto label_7F28E768;
    case 0x7F28E76Cu: goto label_7F28E76C;
    case 0x7F28E770u: goto label_7F28E770;
    case 0x7F28E774u: goto label_7F28E774;
    case 0x7F28E778u: goto label_7F28E778;
    case 0x7F28E77Cu: goto label_7F28E77C;
    case 0x7F28E780u: goto label_7F28E780;
    case 0x7F28E784u: goto label_7F28E784;
    case 0x7F28E788u: goto label_7F28E788;
    case 0x7F28E78Cu: goto label_7F28E78C;
    case 0x7F28E790u: goto label_7F28E790;
    case 0x7F28E794u: goto label_7F28E794;
    case 0x7F28E798u: goto label_7F28E798;
    case 0x7F28E79Cu: goto label_7F28E79C;
    case 0x7F28E7A0u: goto label_7F28E7A0;
    case 0x7F28E7A4u: goto label_7F28E7A4;
    case 0x7F28E7A8u: goto label_7F28E7A8;
    case 0x7F28E7ACu: goto label_7F28E7AC;
    case 0x7F28E7B0u: goto label_7F28E7B0;
    case 0x7F28E7B4u: goto label_7F28E7B4;
    case 0x7F28E7B8u: goto label_7F28E7B8;
    case 0x7F28E7BCu: goto label_7F28E7BC;
    case 0x7F28E7C0u: goto label_7F28E7C0;
    case 0x7F28E7C4u: goto label_7F28E7C4;
    case 0x7F28E7C8u: goto label_7F28E7C8;
    case 0x7F28E7CCu: goto label_7F28E7CC;
    case 0x7F28E7D0u: goto label_7F28E7D0;
    case 0x7F28E7D4u: goto label_7F28E7D4;
    case 0x7F28E7D8u: goto label_7F28E7D8;
    case 0x7F28E7DCu: goto label_7F28E7DC;
    case 0x7F28E7E0u: goto label_7F28E7E0;
    case 0x7F28E7E4u: goto label_7F28E7E4;
    case 0x7F28E7E8u: goto label_7F28E7E8;
    case 0x7F28E7ECu: goto label_7F28E7EC;
    case 0x7F28E7F0u: goto label_7F28E7F0;
    case 0x7F28E7F4u: goto label_7F28E7F4;
    case 0x7F28E7F8u: goto label_7F28E7F8;
    case 0x7F28E7FCu: goto label_7F28E7FC;
    case 0x7F28E800u: goto label_7F28E800;
    case 0x7F28E804u: goto label_7F28E804;
    case 0x7F28E808u: goto label_7F28E808;
    case 0x7F28E80Cu: goto label_7F28E80C;
    case 0x7F28E810u: goto label_7F28E810;
    case 0x7F28E814u: goto label_7F28E814;
    case 0x7F28E818u: goto label_7F28E818;
    case 0x7F28E81Cu: goto label_7F28E81C;
    case 0x7F28E820u: goto label_7F28E820;
    case 0x7F28E824u: goto label_7F28E824;
    case 0x7F28E828u: goto label_7F28E828;
    case 0x7F28E82Cu: goto label_7F28E82C;
    case 0x7F28E830u: goto label_7F28E830;
    case 0x7F28E834u: goto label_7F28E834;
    case 0x7F28E838u: goto label_7F28E838;
    case 0x7F28E83Cu: goto label_7F28E83C;
    case 0x7F28E840u: goto label_7F28E840;
    case 0x7F28E844u: goto label_7F28E844;
    case 0x7F28E848u: goto label_7F28E848;
    case 0x7F28E84Cu: goto label_7F28E84C;
    case 0x7F28E850u: goto label_7F28E850;
    case 0x7F28E854u: goto label_7F28E854;
    case 0x7F28E858u: goto label_7F28E858;
    case 0x7F28E85Cu: goto label_7F28E85C;
    case 0x7F28E860u: goto label_7F28E860;
    case 0x7F28E864u: goto label_7F28E864;
    case 0x7F28E868u: goto label_7F28E868;
    case 0x7F28E86Cu: goto label_7F28E86C;
    case 0x7F28E870u: goto label_7F28E870;
    case 0x7F28E874u: goto label_7F28E874;
    case 0x7F28E878u: goto label_7F28E878;
    case 0x7F28E87Cu: goto label_7F28E87C;
    case 0x7F28E880u: goto label_7F28E880;
    case 0x7F28E884u: goto label_7F28E884;
    case 0x7F28E888u: goto label_7F28E888;
    case 0x7F28E88Cu: goto label_7F28E88C;
    case 0x7F28E890u: goto label_7F28E890;
    case 0x7F28E894u: goto label_7F28E894;
    case 0x7F28E898u: goto label_7F28E898;
    case 0x7F28E89Cu: goto label_7F28E89C;
    case 0x7F28E8A0u: goto label_7F28E8A0;
    case 0x7F28E8A4u: goto label_7F28E8A4;
    case 0x7F28E8A8u: goto label_7F28E8A8;
    case 0x7F28E8ACu: goto label_7F28E8AC;
    case 0x7F28E8B0u: goto label_7F28E8B0;
    case 0x7F28E8B4u: goto label_7F28E8B4;
    case 0x7F28E8B8u: goto label_7F28E8B8;
    case 0x7F28E8BCu: goto label_7F28E8BC;
    case 0x7F28E8C0u: goto label_7F28E8C0;
    case 0x7F28E8C4u: goto label_7F28E8C4;
    case 0x7F28E8C8u: goto label_7F28E8C8;
    case 0x7F28E8CCu: goto label_7F28E8CC;
    case 0x7F28E8D0u: goto label_7F28E8D0;
    case 0x7F28E8D4u: goto label_7F28E8D4;
    case 0x7F28E8D8u: goto label_7F28E8D8;
    case 0x7F28E8DCu: goto label_7F28E8DC;
    case 0x7F28E8E0u: goto label_7F28E8E0;
    case 0x7F28E8E4u: goto label_7F28E8E4;
    case 0x7F28E8E8u: goto label_7F28E8E8;
    case 0x7F28E8ECu: goto label_7F28E8EC;
    case 0x7F28E8F0u: goto label_7F28E8F0;
    case 0x7F28E8F4u: goto label_7F28E8F4;
    case 0x7F28E8F8u: goto label_7F28E8F8;
    case 0x7F28E8FCu: goto label_7F28E8FC;
    case 0x7F28E900u: goto label_7F28E900;
    case 0x7F28E904u: goto label_7F28E904;
    case 0x7F28E908u: goto label_7F28E908;
    case 0x7F28E90Cu: goto label_7F28E90C;
    case 0x7F28E910u: goto label_7F28E910;
    case 0x7F28E914u: goto label_7F28E914;
    case 0x7F28E918u: goto label_7F28E918;
    case 0x7F28E91Cu: goto label_7F28E91C;
    case 0x7F28E920u: goto label_7F28E920;
    case 0x7F28E924u: goto label_7F28E924;
    case 0x7F28E928u: goto label_7F28E928;
    case 0x7F28E92Cu: goto label_7F28E92C;
    case 0x7F28E930u: goto label_7F28E930;
    case 0x7F28E934u: goto label_7F28E934;
    case 0x7F28E938u: goto label_7F28E938;
    case 0x7F28E93Cu: goto label_7F28E93C;
    case 0x7F28E940u: goto label_7F28E940;
    case 0x7F28E944u: goto label_7F28E944;
    case 0x7F28E948u: goto label_7F28E948;
    case 0x7F28E94Cu: goto label_7F28E94C;
    case 0x7F28E950u: goto label_7F28E950;
    case 0x7F28E954u: goto label_7F28E954;
    case 0x7F28E958u: goto label_7F28E958;
    case 0x7F28E95Cu: goto label_7F28E95C;
    case 0x7F28E960u: goto label_7F28E960;
    case 0x7F28E964u: goto label_7F28E964;
    case 0x7F28E968u: goto label_7F28E968;
    case 0x7F28E96Cu: goto label_7F28E96C;
    case 0x7F28E970u: goto label_7F28E970;
    case 0x7F28E974u: goto label_7F28E974;
    case 0x7F28E978u: goto label_7F28E978;
    case 0x7F28E97Cu: goto label_7F28E97C;
    case 0x7F28E980u: goto label_7F28E980;
    case 0x7F28E984u: goto label_7F28E984;
    case 0x7F28E988u: goto label_7F28E988;
    case 0x7F28E98Cu: goto label_7F28E98C;
    case 0x7F28E990u: goto label_7F28E990;
    case 0x7F28E994u: goto label_7F28E994;
    case 0x7F28E998u: goto label_7F28E998;
    case 0x7F28E99Cu: goto label_7F28E99C;
    case 0x7F28E9A0u: goto label_7F28E9A0;
    case 0x7F28E9A4u: goto label_7F28E9A4;
    case 0x7F28E9A8u: goto label_7F28E9A8;
    case 0x7F28E9ACu: goto label_7F28E9AC;
    case 0x7F28E9B0u: goto label_7F28E9B0;
    case 0x7F28E9B4u: goto label_7F28E9B4;
    case 0x7F28E9B8u: goto label_7F28E9B8;
    case 0x7F28E9BCu: goto label_7F28E9BC;
    case 0x7F28E9C0u: goto label_7F28E9C0;
    case 0x7F28E9C4u: goto label_7F28E9C4;
    case 0x7F28E9C8u: goto label_7F28E9C8;
    case 0x7F28E9CCu: goto label_7F28E9CC;
    case 0x7F28E9D0u: goto label_7F28E9D0;
    case 0x7F28E9D4u: goto label_7F28E9D4;
    case 0x7F28E9D8u: goto label_7F28E9D8;
    case 0x7F28E9DCu: goto label_7F28E9DC;
    case 0x7F28E9E0u: goto label_7F28E9E0;
    case 0x7F28E9E4u: goto label_7F28E9E4;
    case 0x7F28E9E8u: goto label_7F28E9E8;
    case 0x7F28E9ECu: goto label_7F28E9EC;
    case 0x7F28E9F0u: goto label_7F28E9F0;
    case 0x7F28E9F4u: goto label_7F28E9F4;
    case 0x7F28E9F8u: goto label_7F28E9F8;
    case 0x7F28E9FCu: goto label_7F28E9FC;
    case 0x7F28EA00u: goto label_7F28EA00;
    case 0x7F28EA04u: goto label_7F28EA04;
    case 0x7F28EA08u: goto label_7F28EA08;
    case 0x7F28EA0Cu: goto label_7F28EA0C;
    case 0x7F28EA10u: goto label_7F28EA10;
    case 0x7F28EA14u: goto label_7F28EA14;
    case 0x7F28EA18u: goto label_7F28EA18;
    case 0x7F28EA1Cu: goto label_7F28EA1C;
    case 0x7F28EA20u: goto label_7F28EA20;
    case 0x7F28EA24u: goto label_7F28EA24;
    case 0x7F28EA28u: goto label_7F28EA28;
    case 0x7F28EA2Cu: goto label_7F28EA2C;
    case 0x7F28EA30u: goto label_7F28EA30;
    case 0x7F28EA34u: goto label_7F28EA34;
    case 0x7F28EA38u: goto label_7F28EA38;
    case 0x7F28EA3Cu: goto label_7F28EA3C;
    case 0x7F28EA40u: goto label_7F28EA40;
    case 0x7F28EA44u: goto label_7F28EA44;
    case 0x7F28EA48u: goto label_7F28EA48;
    case 0x7F28EA4Cu: goto label_7F28EA4C;
    case 0x7F28EA50u: goto label_7F28EA50;
    case 0x7F28EA54u: goto label_7F28EA54;
    case 0x7F28EA58u: goto label_7F28EA58;
    case 0x7F28EA5Cu: goto label_7F28EA5C;
    case 0x7F28EA60u: goto label_7F28EA60;
    case 0x7F28EA64u: goto label_7F28EA64;
    case 0x7F28EA68u: goto label_7F28EA68;
    case 0x7F28EA6Cu: goto label_7F28EA6C;
    case 0x7F28EA70u: goto label_7F28EA70;
    case 0x7F28EA74u: goto label_7F28EA74;
    case 0x7F28EA78u: goto label_7F28EA78;
    case 0x7F28EA7Cu: goto label_7F28EA7C;
    case 0x7F28EA80u: goto label_7F28EA80;
    case 0x7F28EA84u: goto label_7F28EA84;
    case 0x7F28EA88u: goto label_7F28EA88;
    case 0x7F28EA8Cu: goto label_7F28EA8C;
    case 0x7F28EA90u: goto label_7F28EA90;
    case 0x7F28EA94u: goto label_7F28EA94;
    case 0x7F28EA98u: goto label_7F28EA98;
    case 0x7F28EA9Cu: goto label_7F28EA9C;
    case 0x7F28EAA0u: goto label_7F28EAA0;
    case 0x7F28EAA4u: goto label_7F28EAA4;
    case 0x7F28EAA8u: goto label_7F28EAA8;
    case 0x7F28EAACu: goto label_7F28EAAC;
    case 0x7F28EAB0u: goto label_7F28EAB0;
    case 0x7F28EAB4u: goto label_7F28EAB4;
    case 0x7F28EAB8u: goto label_7F28EAB8;
    case 0x7F28EABCu: goto label_7F28EABC;
    case 0x7F28EAC0u: goto label_7F28EAC0;
    case 0x7F28EAC4u: goto label_7F28EAC4;
    case 0x7F28EAC8u: goto label_7F28EAC8;
    case 0x7F28EACCu: goto label_7F28EACC;
    case 0x7F28EAD0u: goto label_7F28EAD0;
    case 0x7F28EAD4u: goto label_7F28EAD4;
    case 0x7F28EAD8u: goto label_7F28EAD8;
    case 0x7F28EADCu: goto label_7F28EADC;
    case 0x7F28EAE0u: goto label_7F28EAE0;
    case 0x7F28EAE4u: goto label_7F28EAE4;
    case 0x7F28EAE8u: goto label_7F28EAE8;
    case 0x7F28EAECu: goto label_7F28EAEC;
    case 0x7F28EAF0u: goto label_7F28EAF0;
    case 0x7F28EAF4u: goto label_7F28EAF4;
    case 0x7F28EAF8u: goto label_7F28EAF8;
    case 0x7F28EAFCu: goto label_7F28EAFC;
    case 0x7F28EB00u: goto label_7F28EB00;
    case 0x7F28EB04u: goto label_7F28EB04;
    case 0x7F28EB08u: goto label_7F28EB08;
    case 0x7F28EB0Cu: goto label_7F28EB0C;
    case 0x7F28EB10u: goto label_7F28EB10;
    case 0x7F28EB14u: goto label_7F28EB14;
    case 0x7F28EB18u: goto label_7F28EB18;
    case 0x7F28EB1Cu: goto label_7F28EB1C;
    case 0x7F28EB20u: goto label_7F28EB20;
    case 0x7F28EB24u: goto label_7F28EB24;
    case 0x7F28EB28u: goto label_7F28EB28;
    case 0x7F28EB2Cu: goto label_7F28EB2C;
    case 0x7F28EB30u: goto label_7F28EB30;
    case 0x7F28EB34u: goto label_7F28EB34;
    case 0x7F28EB38u: goto label_7F28EB38;
    case 0x7F28EB3Cu: goto label_7F28EB3C;
    case 0x7F28EB40u: goto label_7F28EB40;
    case 0x7F28EB44u: goto label_7F28EB44;
    case 0x7F28EB48u: goto label_7F28EB48;
    case 0x7F28EB4Cu: goto label_7F28EB4C;
    case 0x7F28EB50u: goto label_7F28EB50;
    case 0x7F28EB54u: goto label_7F28EB54;
    case 0x7F28EB58u: goto label_7F28EB58;
    case 0x7F28EB5Cu: goto label_7F28EB5C;
    case 0x7F28EB60u: goto label_7F28EB60;
    case 0x7F28EB64u: goto label_7F28EB64;
    case 0x7F28EB68u: goto label_7F28EB68;
    case 0x7F28EB6Cu: goto label_7F28EB6C;
    case 0x7F28EB70u: goto label_7F28EB70;
    case 0x7F28EB74u: goto label_7F28EB74;
    case 0x7F28EB78u: goto label_7F28EB78;
    case 0x7F28EB7Cu: goto label_7F28EB7C;
    case 0x7F28EB80u: goto label_7F28EB80;
    case 0x7F28EB84u: goto label_7F28EB84;
    case 0x7F28EB88u: goto label_7F28EB88;
    case 0x7F28EB8Cu: goto label_7F28EB8C;
    case 0x7F28EB90u: goto label_7F28EB90;
    case 0x7F28EB94u: goto label_7F28EB94;
    case 0x7F28EB98u: goto label_7F28EB98;
    case 0x7F28EB9Cu: goto label_7F28EB9C;
    case 0x7F28EBA0u: goto label_7F28EBA0;
    case 0x7F28EBA4u: goto label_7F28EBA4;
    case 0x7F28EBA8u: goto label_7F28EBA8;
    case 0x7F28EBACu: goto label_7F28EBAC;
    case 0x7F28EBB0u: goto label_7F28EBB0;
    case 0x7F28EBB4u: goto label_7F28EBB4;
    case 0x7F28EBB8u: goto label_7F28EBB8;
    case 0x7F28EBBCu: goto label_7F28EBBC;
    case 0x7F28EBC0u: goto label_7F28EBC0;
    case 0x7F28EBC4u: goto label_7F28EBC4;
    case 0x7F28EBC8u: goto label_7F28EBC8;
    case 0x7F28EBCCu: goto label_7F28EBCC;
    case 0x7F28EBD0u: goto label_7F28EBD0;
    case 0x7F28EBD4u: goto label_7F28EBD4;
    case 0x7F28EBD8u: goto label_7F28EBD8;
    case 0x7F28EBDCu: goto label_7F28EBDC;
    case 0x7F28EBE0u: goto label_7F28EBE0;
    case 0x7F28EBE4u: goto label_7F28EBE4;
    case 0x7F28EBE8u: goto label_7F28EBE8;
    case 0x7F28EBECu: goto label_7F28EBEC;
    case 0x7F28EBF0u: goto label_7F28EBF0;
    case 0x7F28EBF4u: goto label_7F28EBF4;
    case 0x7F28EBF8u: goto label_7F28EBF8;
    case 0x7F28EBFCu: goto label_7F28EBFC;
    case 0x7F28EC00u: goto label_7F28EC00;
    case 0x7F28EC04u: goto label_7F28EC04;
    case 0x7F28EC08u: goto label_7F28EC08;
    case 0x7F28EC0Cu: goto label_7F28EC0C;
    case 0x7F28EC10u: goto label_7F28EC10;
    case 0x7F28EC14u: goto label_7F28EC14;
    case 0x7F28EC18u: goto label_7F28EC18;
    case 0x7F28EC1Cu: goto label_7F28EC1C;
    case 0x7F28EC20u: goto label_7F28EC20;
    case 0x7F28EC24u: goto label_7F28EC24;
    case 0x7F28EC28u: goto label_7F28EC28;
    case 0x7F28EC2Cu: goto label_7F28EC2C;
    case 0x7F28EC30u: goto label_7F28EC30;
    case 0x7F28EC34u: goto label_7F28EC34;
    case 0x7F28EC38u: goto label_7F28EC38;
    case 0x7F28EC3Cu: goto label_7F28EC3C;
    case 0x7F28EC40u: goto label_7F28EC40;
    case 0x7F28EC44u: goto label_7F28EC44;
    case 0x7F28EC48u: goto label_7F28EC48;
    case 0x7F28EC4Cu: goto label_7F28EC4C;
    case 0x7F28EC50u: goto label_7F28EC50;
    case 0x7F28EC54u: goto label_7F28EC54;
    case 0x7F28EC58u: goto label_7F28EC58;
    case 0x7F28EC5Cu: goto label_7F28EC5C;
    case 0x7F28EC60u: goto label_7F28EC60;
    case 0x7F28EC64u: goto label_7F28EC64;
    case 0x7F28EC68u: goto label_7F28EC68;
    case 0x7F28EC6Cu: goto label_7F28EC6C;
    case 0x7F28EC70u: goto label_7F28EC70;
    case 0x7F28EC74u: goto label_7F28EC74;
    case 0x7F28EC78u: goto label_7F28EC78;
    case 0x7F28EC7Cu: goto label_7F28EC7C;
    case 0x7F28EC80u: goto label_7F28EC80;
    case 0x7F28EC84u: goto label_7F28EC84;
    case 0x7F28EC88u: goto label_7F28EC88;
    case 0x7F28EC8Cu: goto label_7F28EC8C;
    case 0x7F28EC90u: goto label_7F28EC90;
    case 0x7F28EC94u: goto label_7F28EC94;
    case 0x7F28EC98u: goto label_7F28EC98;
    case 0x7F28EC9Cu: goto label_7F28EC9C;
    case 0x7F28ECA0u: goto label_7F28ECA0;
    case 0x7F28ECA4u: goto label_7F28ECA4;
    case 0x7F28ECA8u: goto label_7F28ECA8;
    case 0x7F28ECACu: goto label_7F28ECAC;
    case 0x7F28ECB0u: goto label_7F28ECB0;
    case 0x7F28ECB4u: goto label_7F28ECB4;
    case 0x7F28ECB8u: goto label_7F28ECB8;
    case 0x7F28ECBCu: goto label_7F28ECBC;
    case 0x7F28ECC0u: goto label_7F28ECC0;
    case 0x7F28ECC4u: goto label_7F28ECC4;
    case 0x7F28ECC8u: goto label_7F28ECC8;
    case 0x7F28ECCCu: goto label_7F28ECCC;
    case 0x7F28ECD0u: goto label_7F28ECD0;
    case 0x7F28ECD4u: goto label_7F28ECD4;
    case 0x7F28ECD8u: goto label_7F28ECD8;
    case 0x7F28ECDCu: goto label_7F28ECDC;
    case 0x7F28ECE0u: goto label_7F28ECE0;
    case 0x7F28ECE4u: goto label_7F28ECE4;
    case 0x7F28ECE8u: goto label_7F28ECE8;
    case 0x7F28ECECu: goto label_7F28ECEC;
    case 0x7F28ECF0u: goto label_7F28ECF0;
    case 0x7F28ECF4u: goto label_7F28ECF4;
    case 0x7F28ECF8u: goto label_7F28ECF8;
    case 0x7F28ECFCu: goto label_7F28ECFC;
    case 0x7F28ED00u: goto label_7F28ED00;
    case 0x7F28ED04u: goto label_7F28ED04;
    case 0x7F28ED08u: goto label_7F28ED08;
    case 0x7F28ED0Cu: goto label_7F28ED0C;
    case 0x7F28ED10u: goto label_7F28ED10;
    case 0x7F28ED14u: goto label_7F28ED14;
    case 0x7F28ED18u: goto label_7F28ED18;
    case 0x7F28ED1Cu: goto label_7F28ED1C;
    case 0x7F28ED20u: goto label_7F28ED20;
    case 0x7F28ED24u: goto label_7F28ED24;
    case 0x7F28ED28u: goto label_7F28ED28;
    case 0x7F28ED2Cu: goto label_7F28ED2C;
    case 0x7F28ED30u: goto label_7F28ED30;
    case 0x7F28ED34u: goto label_7F28ED34;
    case 0x7F28ED38u: goto label_7F28ED38;
    case 0x7F28ED3Cu: goto label_7F28ED3C;
    case 0x7F28ED40u: goto label_7F28ED40;
    case 0x7F28ED44u: goto label_7F28ED44;
    case 0x7F28ED48u: goto label_7F28ED48;
    case 0x7F28ED4Cu: goto label_7F28ED4C;
    case 0x7F28ED50u: goto label_7F28ED50;
    case 0x7F28ED54u: goto label_7F28ED54;
    case 0x7F28ED58u: goto label_7F28ED58;
    case 0x7F28ED5Cu: goto label_7F28ED5C;
    case 0x7F28ED60u: goto label_7F28ED60;
    case 0x7F28ED64u: goto label_7F28ED64;
    case 0x7F28ED68u: goto label_7F28ED68;
    case 0x7F28ED6Cu: goto label_7F28ED6C;
    case 0x7F28ED70u: goto label_7F28ED70;
    case 0x7F28ED74u: goto label_7F28ED74;
    case 0x7F28ED78u: goto label_7F28ED78;
    case 0x7F28ED7Cu: goto label_7F28ED7C;
    case 0x7F28ED80u: goto label_7F28ED80;
    case 0x7F28ED84u: goto label_7F28ED84;
    case 0x7F28ED88u: goto label_7F28ED88;
    case 0x7F28ED8Cu: goto label_7F28ED8C;
    case 0x7F28ED90u: goto label_7F28ED90;
    case 0x7F28ED94u: goto label_7F28ED94;
    case 0x7F28ED98u: goto label_7F28ED98;
    case 0x7F28ED9Cu: goto label_7F28ED9C;
    case 0x7F28EDA0u: goto label_7F28EDA0;
    case 0x7F28EDA4u: goto label_7F28EDA4;
    case 0x7F28EDA8u: goto label_7F28EDA8;
    case 0x7F28EDACu: goto label_7F28EDAC;
    case 0x7F28EDB0u: goto label_7F28EDB0;
    case 0x7F28EDB4u: goto label_7F28EDB4;
    case 0x7F28EDB8u: goto label_7F28EDB8;
    case 0x7F28EDBCu: goto label_7F28EDBC;
    case 0x7F28EDC0u: goto label_7F28EDC0;
    case 0x7F28EDC4u: goto label_7F28EDC4;
    case 0x7F28EDC8u: goto label_7F28EDC8;
    case 0x7F28EDCCu: goto label_7F28EDCC;
    case 0x7F28EDD0u: goto label_7F28EDD0;
    case 0x7F28EDD4u: goto label_7F28EDD4;
    case 0x7F28EDD8u: goto label_7F28EDD8;
    case 0x7F28EDDCu: goto label_7F28EDDC;
    case 0x7F28EDE0u: goto label_7F28EDE0;
    case 0x7F28EDE4u: goto label_7F28EDE4;
    case 0x7F28EDE8u: goto label_7F28EDE8;
    case 0x7F28EDECu: goto label_7F28EDEC;
    case 0x7F28EDF0u: goto label_7F28EDF0;
    case 0x7F28EDF4u: goto label_7F28EDF4;
    case 0x7F28EDF8u: goto label_7F28EDF8;
    case 0x7F28EDFCu: goto label_7F28EDFC;
    case 0x7F28EE00u: goto label_7F28EE00;
    case 0x7F28EE04u: goto label_7F28EE04;
    case 0x7F28EE08u: goto label_7F28EE08;
    case 0x7F28EE0Cu: goto label_7F28EE0C;
    case 0x7F28EE10u: goto label_7F28EE10;
    case 0x7F28EE14u: goto label_7F28EE14;
    case 0x7F28EE18u: goto label_7F28EE18;
    case 0x7F28EE1Cu: goto label_7F28EE1C;
    case 0x7F28EE20u: goto label_7F28EE20;
    case 0x7F28EE24u: goto label_7F28EE24;
    case 0x7F28EE28u: goto label_7F28EE28;
    case 0x7F28EE2Cu: goto label_7F28EE2C;
    case 0x7F28EE30u: goto label_7F28EE30;
    case 0x7F28EE34u: goto label_7F28EE34;
    case 0x7F28EE38u: goto label_7F28EE38;
    case 0x7F28EE3Cu: goto label_7F28EE3C;
    case 0x7F28EE40u: goto label_7F28EE40;
    case 0x7F28EE44u: goto label_7F28EE44;
    case 0x7F28EE48u: goto label_7F28EE48;
    case 0x7F28EE4Cu: goto label_7F28EE4C;
    case 0x7F28EE50u: goto label_7F28EE50;
    case 0x7F28EE54u: goto label_7F28EE54;
    case 0x7F28EE58u: goto label_7F28EE58;
    case 0x7F28EE5Cu: goto label_7F28EE5C;
    case 0x7F28EE60u: goto label_7F28EE60;
    case 0x7F28EE64u: goto label_7F28EE64;
    case 0x7F28EE68u: goto label_7F28EE68;
    case 0x7F28EE6Cu: goto label_7F28EE6C;
    case 0x7F28EE70u: goto label_7F28EE70;
    case 0x7F28EE74u: goto label_7F28EE74;
    case 0x7F28EE78u: goto label_7F28EE78;
    case 0x7F28EE7Cu: goto label_7F28EE7C;
    case 0x7F28EE80u: goto label_7F28EE80;
    case 0x7F28EE84u: goto label_7F28EE84;
    case 0x7F28EE88u: goto label_7F28EE88;
    case 0x7F28EE8Cu: goto label_7F28EE8C;
    case 0x7F28EE90u: goto label_7F28EE90;
    case 0x7F28EE94u: goto label_7F28EE94;
    case 0x7F28EE98u: goto label_7F28EE98;
    case 0x7F28EE9Cu: goto label_7F28EE9C;
    case 0x7F28EEA0u: goto label_7F28EEA0;
    case 0x7F28EEA4u: goto label_7F28EEA4;
    case 0x7F28EEA8u: goto label_7F28EEA8;
    case 0x7F28EEACu: goto label_7F28EEAC;
    case 0x7F28EEB0u: goto label_7F28EEB0;
    case 0x7F28EEB4u: goto label_7F28EEB4;
    case 0x7F28EEB8u: goto label_7F28EEB8;
    case 0x7F28EEBCu: goto label_7F28EEBC;
    case 0x7F28EEC0u: goto label_7F28EEC0;
    case 0x7F28EEC4u: goto label_7F28EEC4;
    case 0x7F28EEC8u: goto label_7F28EEC8;
    case 0x7F28EECCu: goto label_7F28EECC;
    case 0x7F28EED0u: goto label_7F28EED0;
    case 0x7F28EED4u: goto label_7F28EED4;
    case 0x7F28EED8u: goto label_7F28EED8;
    case 0x7F28EEDCu: goto label_7F28EEDC;
    case 0x7F28EEE0u: goto label_7F28EEE0;
    case 0x7F28EEE4u: goto label_7F28EEE4;
    case 0x7F28EEE8u: goto label_7F28EEE8;
    case 0x7F28EEECu: goto label_7F28EEEC;
    case 0x7F28EEF0u: goto label_7F28EEF0;
    case 0x7F28EEF4u: goto label_7F28EEF4;
    case 0x7F28EEF8u: goto label_7F28EEF8;
    case 0x7F28EEFCu: goto label_7F28EEFC;
    case 0x7F28EF00u: goto label_7F28EF00;
    case 0x7F28EF04u: goto label_7F28EF04;
    case 0x7F28EF08u: goto label_7F28EF08;
    case 0x7F28EF0Cu: goto label_7F28EF0C;
    case 0x7F28EF10u: goto label_7F28EF10;
    case 0x7F28EF14u: goto label_7F28EF14;
    case 0x7F28EF18u: goto label_7F28EF18;
    case 0x7F28EF1Cu: goto label_7F28EF1C;
    case 0x7F28EF20u: goto label_7F28EF20;
    case 0x7F28EF24u: goto label_7F28EF24;
    case 0x7F28EF28u: goto label_7F28EF28;
    case 0x7F28EF2Cu: goto label_7F28EF2C;
    case 0x7F28EF30u: goto label_7F28EF30;
    case 0x7F28EF34u: goto label_7F28EF34;
    case 0x7F28EF38u: goto label_7F28EF38;
    case 0x7F28EF3Cu: goto label_7F28EF3C;
    case 0x7F28EF40u: goto label_7F28EF40;
    case 0x7F28EF44u: goto label_7F28EF44;
    case 0x7F28EF48u: goto label_7F28EF48;
    case 0x7F28EF4Cu: goto label_7F28EF4C;
    case 0x7F28EF50u: goto label_7F28EF50;
    case 0x7F28EF54u: goto label_7F28EF54;
    case 0x7F28EF58u: goto label_7F28EF58;
    case 0x7F28EF5Cu: goto label_7F28EF5C;
    case 0x7F28EF60u: goto label_7F28EF60;
    case 0x7F28EF64u: goto label_7F28EF64;
    case 0x7F28EF68u: goto label_7F28EF68;
    case 0x7F28EF6Cu: goto label_7F28EF6C;
    case 0x7F28EF70u: goto label_7F28EF70;
    case 0x7F28EF74u: goto label_7F28EF74;
    case 0x7F28EF78u: goto label_7F28EF78;
    case 0x7F28EF7Cu: goto label_7F28EF7C;
    case 0x7F28EF80u: goto label_7F28EF80;
    case 0x7F28EF84u: goto label_7F28EF84;
    case 0x7F28EF88u: goto label_7F28EF88;
    case 0x7F28EF8Cu: goto label_7F28EF8C;
    case 0x7F28EF90u: goto label_7F28EF90;
    case 0x7F28EF94u: goto label_7F28EF94;
    case 0x7F28EF98u: goto label_7F28EF98;
    case 0x7F28EF9Cu: goto label_7F28EF9C;
    case 0x7F28EFA0u: goto label_7F28EFA0;
    case 0x7F28EFA4u: goto label_7F28EFA4;
    case 0x7F28EFA8u: goto label_7F28EFA8;
    case 0x7F28EFACu: goto label_7F28EFAC;
    case 0x7F28EFB0u: goto label_7F28EFB0;
    case 0x7F28EFB4u: goto label_7F28EFB4;
    case 0x7F28EFB8u: goto label_7F28EFB8;
    case 0x7F28EFBCu: goto label_7F28EFBC;
    case 0x7F28EFC0u: goto label_7F28EFC0;
    case 0x7F28EFC4u: goto label_7F28EFC4;
    case 0x7F28EFC8u: goto label_7F28EFC8;
    case 0x7F28EFCCu: goto label_7F28EFCC;
    case 0x7F28EFD0u: goto label_7F28EFD0;
    case 0x7F28EFD4u: goto label_7F28EFD4;
    case 0x7F28EFD8u: goto label_7F28EFD8;
    case 0x7F28EFDCu: goto label_7F28EFDC;
    case 0x7F28EFE0u: goto label_7F28EFE0;
    case 0x7F28EFE4u: goto label_7F28EFE4;
    case 0x7F28EFE8u: goto label_7F28EFE8;
    case 0x7F28EFECu: goto label_7F28EFEC;
    case 0x7F28EFF0u: goto label_7F28EFF0;
    case 0x7F28EFF4u: goto label_7F28EFF4;
    case 0x7F28EFF8u: goto label_7F28EFF8;
    case 0x7F28EFFCu: goto label_7F28EFFC;
    case 0x7F28F000u: goto label_7F28F000;
    case 0x7F28F004u: goto label_7F28F004;
    case 0x7F28F008u: goto label_7F28F008;
    case 0x7F28F00Cu: goto label_7F28F00C;
    case 0x7F28F010u: goto label_7F28F010;
    case 0x7F28F014u: goto label_7F28F014;
    case 0x7F28F018u: goto label_7F28F018;
    case 0x7F28F01Cu: goto label_7F28F01C;
    case 0x7F28F020u: goto label_7F28F020;
    case 0x7F28F024u: goto label_7F28F024;
    case 0x7F28F028u: goto label_7F28F028;
    case 0x7F28F02Cu: goto label_7F28F02C;
    case 0x7F28F030u: goto label_7F28F030;
    case 0x7F28F034u: goto label_7F28F034;
    case 0x7F28F038u: goto label_7F28F038;
    case 0x7F28F03Cu: goto label_7F28F03C;
    case 0x7F28F040u: goto label_7F28F040;
    case 0x7F28F044u: goto label_7F28F044;
    case 0x7F28F048u: goto label_7F28F048;
    case 0x7F28F04Cu: goto label_7F28F04C;
    case 0x7F28F050u: goto label_7F28F050;
    case 0x7F28F054u: goto label_7F28F054;
    case 0x7F28F058u: goto label_7F28F058;
    case 0x7F28F05Cu: goto label_7F28F05C;
    case 0x7F28F060u: goto label_7F28F060;
    case 0x7F28F064u: goto label_7F28F064;
    case 0x7F28F068u: goto label_7F28F068;
    case 0x7F28F06Cu: goto label_7F28F06C;
    case 0x7F28F070u: goto label_7F28F070;
    case 0x7F28F074u: goto label_7F28F074;
    case 0x7F28F078u: goto label_7F28F078;
    case 0x7F28F07Cu: goto label_7F28F07C;
    case 0x7F28F080u: goto label_7F28F080;
    case 0x7F28F084u: goto label_7F28F084;
    case 0x7F28F088u: goto label_7F28F088;
    case 0x7F28F08Cu: goto label_7F28F08C;
    case 0x7F28F090u: goto label_7F28F090;
    case 0x7F28F094u: goto label_7F28F094;
    case 0x7F28F098u: goto label_7F28F098;
    case 0x7F28F09Cu: goto label_7F28F09C;
    case 0x7F28F0A0u: goto label_7F28F0A0;
    case 0x7F28F0A4u: goto label_7F28F0A4;
    case 0x7F28F0A8u: goto label_7F28F0A8;
    case 0x7F28F0ACu: goto label_7F28F0AC;
    case 0x7F28F0B0u: goto label_7F28F0B0;
    case 0x7F28F0B4u: goto label_7F28F0B4;
    case 0x7F28F0B8u: goto label_7F28F0B8;
    case 0x7F28F0BCu: goto label_7F28F0BC;
    case 0x7F28F0C0u: goto label_7F28F0C0;
    case 0x7F28F0C4u: goto label_7F28F0C4;
    case 0x7F28F0C8u: goto label_7F28F0C8;
    case 0x7F28F0CCu: goto label_7F28F0CC;
    case 0x7F28F0D0u: goto label_7F28F0D0;
    case 0x7F28F0D4u: goto label_7F28F0D4;
    case 0x7F28F0D8u: goto label_7F28F0D8;
    case 0x7F28F0DCu: goto label_7F28F0DC;
    case 0x7F28F0E0u: goto label_7F28F0E0;
    case 0x7F28F0E4u: goto label_7F28F0E4;
    case 0x7F28F0E8u: goto label_7F28F0E8;
    case 0x7F28F0ECu: goto label_7F28F0EC;
    case 0x7F28F0F0u: goto label_7F28F0F0;
    case 0x7F28F0F4u: goto label_7F28F0F4;
    case 0x7F28F0F8u: goto label_7F28F0F8;
    case 0x7F28F0FCu: goto label_7F28F0FC;
    case 0x7F28F100u: goto label_7F28F100;
    case 0x7F28F104u: goto label_7F28F104;
    case 0x7F28F108u: goto label_7F28F108;
    case 0x7F28F10Cu: goto label_7F28F10C;
    case 0x7F28F110u: goto label_7F28F110;
    case 0x7F28F114u: goto label_7F28F114;
    case 0x7F28F118u: goto label_7F28F118;
    case 0x7F28F11Cu: goto label_7F28F11C;
    case 0x7F28F120u: goto label_7F28F120;
    case 0x7F28F124u: goto label_7F28F124;
    case 0x7F28F128u: goto label_7F28F128;
    case 0x7F28F12Cu: goto label_7F28F12C;
    case 0x7F28F130u: goto label_7F28F130;
    case 0x7F28F134u: goto label_7F28F134;
    case 0x7F28F138u: goto label_7F28F138;
    case 0x7F28F13Cu: goto label_7F28F13C;
    case 0x7F28F140u: goto label_7F28F140;
    case 0x7F28F144u: goto label_7F28F144;
    case 0x7F28F148u: goto label_7F28F148;
    case 0x7F28F14Cu: goto label_7F28F14C;
    case 0x7F28F150u: goto label_7F28F150;
    case 0x7F28F154u: goto label_7F28F154;
    case 0x7F28F158u: goto label_7F28F158;
    case 0x7F28F15Cu: goto label_7F28F15C;
    case 0x7F28F160u: goto label_7F28F160;
    case 0x7F28F164u: goto label_7F28F164;
    case 0x7F28F168u: goto label_7F28F168;
    case 0x7F28F16Cu: goto label_7F28F16C;
    case 0x7F28F170u: goto label_7F28F170;
    case 0x7F28F174u: goto label_7F28F174;
    case 0x7F28F178u: goto label_7F28F178;
    case 0x7F28F17Cu: goto label_7F28F17C;
    case 0x7F28F180u: goto label_7F28F180;
    case 0x7F28F184u: goto label_7F28F184;
    case 0x7F28F188u: goto label_7F28F188;
    case 0x7F28F18Cu: goto label_7F28F18C;
    case 0x7F28F190u: goto label_7F28F190;
    case 0x7F28F194u: goto label_7F28F194;
    case 0x7F28F198u: goto label_7F28F198;
    case 0x7F28F19Cu: goto label_7F28F19C;
    case 0x7F28F1A0u: goto label_7F28F1A0;
    case 0x7F28F1A4u: goto label_7F28F1A4;
    case 0x7F28F1A8u: goto label_7F28F1A8;
    case 0x7F28F1ACu: goto label_7F28F1AC;
    case 0x7F28F1B0u: goto label_7F28F1B0;
    case 0x7F28F1B4u: goto label_7F28F1B4;
    case 0x7F28F1B8u: goto label_7F28F1B8;
    case 0x7F28F1BCu: goto label_7F28F1BC;
    case 0x7F28F1C0u: goto label_7F28F1C0;
    case 0x7F28F1C4u: goto label_7F28F1C4;
    case 0x7F28F1C8u: goto label_7F28F1C8;
    case 0x7F28F1CCu: goto label_7F28F1CC;
    case 0x7F28F1D0u: goto label_7F28F1D0;
    case 0x7F28F1D4u: goto label_7F28F1D4;
    case 0x7F28F1D8u: goto label_7F28F1D8;
    case 0x7F28F1DCu: goto label_7F28F1DC;
    case 0x7F28F1E0u: goto label_7F28F1E0;
    case 0x7F28F1E4u: goto label_7F28F1E4;
    case 0x7F28F1E8u: goto label_7F28F1E8;
    case 0x7F28F1ECu: goto label_7F28F1EC;
    case 0x7F28F1F0u: goto label_7F28F1F0;
    case 0x7F28F1F4u: goto label_7F28F1F4;
    case 0x7F28F1F8u: goto label_7F28F1F8;
    case 0x7F28F1FCu: goto label_7F28F1FC;
    case 0x7F28F200u: goto label_7F28F200;
    case 0x7F28F204u: goto label_7F28F204;
    case 0x7F28F208u: goto label_7F28F208;
    case 0x7F28F20Cu: goto label_7F28F20C;
    case 0x7F28F210u: goto label_7F28F210;
    case 0x7F28F214u: goto label_7F28F214;
    case 0x7F28F218u: goto label_7F28F218;
    case 0x7F28F21Cu: goto label_7F28F21C;
    case 0x7F28F220u: goto label_7F28F220;
    case 0x7F28F224u: goto label_7F28F224;
    case 0x7F28F228u: goto label_7F28F228;
    case 0x7F28F22Cu: goto label_7F28F22C;
    case 0x7F28F230u: goto label_7F28F230;
    case 0x7F28F234u: goto label_7F28F234;
    case 0x7F28F238u: goto label_7F28F238;
    case 0x7F28F23Cu: goto label_7F28F23C;
    case 0x7F28F240u: goto label_7F28F240;
    case 0x7F28F244u: goto label_7F28F244;
    case 0x7F28F248u: goto label_7F28F248;
    case 0x7F28F24Cu: goto label_7F28F24C;
    case 0x7F28F250u: goto label_7F28F250;
    case 0x7F28F254u: goto label_7F28F254;
    case 0x7F28F258u: goto label_7F28F258;
    case 0x7F28F25Cu: goto label_7F28F25C;
    case 0x7F28F260u: goto label_7F28F260;
    case 0x7F28F264u: goto label_7F28F264;
    case 0x7F28F268u: goto label_7F28F268;
    case 0x7F28F26Cu: goto label_7F28F26C;
    case 0x7F28F270u: goto label_7F28F270;
    case 0x7F28F274u: goto label_7F28F274;
    case 0x7F28F278u: goto label_7F28F278;
    case 0x7F28F27Cu: goto label_7F28F27C;
    case 0x7F28F280u: goto label_7F28F280;
    case 0x7F28F284u: goto label_7F28F284;
    case 0x7F28F288u: goto label_7F28F288;
    case 0x7F28F28Cu: goto label_7F28F28C;
    case 0x7F28F290u: goto label_7F28F290;
    case 0x7F28F294u: goto label_7F28F294;
    case 0x7F28F298u: goto label_7F28F298;
    case 0x7F28F29Cu: goto label_7F28F29C;
    case 0x7F28F2A0u: goto label_7F28F2A0;
    case 0x7F28F2A4u: goto label_7F28F2A4;
    case 0x7F28F2A8u: goto label_7F28F2A8;
    case 0x7F28F2ACu: goto label_7F28F2AC;
    case 0x7F28F2B0u: goto label_7F28F2B0;
    case 0x7F28F2B4u: goto label_7F28F2B4;
    case 0x7F28F2B8u: goto label_7F28F2B8;
    case 0x7F28F2BCu: goto label_7F28F2BC;
    case 0x7F28F2C0u: goto label_7F28F2C0;
    case 0x7F28F2C4u: goto label_7F28F2C4;
    case 0x7F28F2C8u: goto label_7F28F2C8;
    case 0x7F28F2CCu: goto label_7F28F2CC;
    case 0x7F28F2D0u: goto label_7F28F2D0;
    case 0x7F28F2D4u: goto label_7F28F2D4;
    case 0x7F28F2D8u: goto label_7F28F2D8;
    case 0x7F28F2DCu: goto label_7F28F2DC;
    case 0x7F28F2E0u: goto label_7F28F2E0;
    case 0x7F28F2E4u: goto label_7F28F2E4;
    case 0x7F28F2E8u: goto label_7F28F2E8;
    case 0x7F28F2ECu: goto label_7F28F2EC;
    case 0x7F28F2F0u: goto label_7F28F2F0;
    case 0x7F28F2F4u: goto label_7F28F2F4;
    case 0x7F28F2F8u: goto label_7F28F2F8;
    case 0x7F28F2FCu: goto label_7F28F2FC;
    case 0x7F28F300u: goto label_7F28F300;
    case 0x7F28F304u: goto label_7F28F304;
    case 0x7F28F308u: goto label_7F28F308;
    case 0x7F28F30Cu: goto label_7F28F30C;
    case 0x7F28F310u: goto label_7F28F310;
    case 0x7F28F314u: goto label_7F28F314;
    case 0x7F28F318u: goto label_7F28F318;
    case 0x7F28F31Cu: goto label_7F28F31C;
    case 0x7F28F320u: goto label_7F28F320;
    case 0x7F28F324u: goto label_7F28F324;
    case 0x7F28F328u: goto label_7F28F328;
    case 0x7F28F32Cu: goto label_7F28F32C;
    case 0x7F28F330u: goto label_7F28F330;
    case 0x7F28F334u: goto label_7F28F334;
    case 0x7F28F338u: goto label_7F28F338;
    case 0x7F28F33Cu: goto label_7F28F33C;
    case 0x7F28F340u: goto label_7F28F340;
    case 0x7F28F344u: goto label_7F28F344;
    case 0x7F28F348u: goto label_7F28F348;
    case 0x7F28F34Cu: goto label_7F28F34C;
    case 0x7F28F350u: goto label_7F28F350;
    case 0x7F28F354u: goto label_7F28F354;
    case 0x7F28F358u: goto label_7F28F358;
    case 0x7F28F35Cu: goto label_7F28F35C;
    case 0x7F28F360u: goto label_7F28F360;
    case 0x7F28F364u: goto label_7F28F364;
    case 0x7F28F368u: goto label_7F28F368;
    case 0x7F28F36Cu: goto label_7F28F36C;
    case 0x7F28F370u: goto label_7F28F370;
    case 0x7F28F374u: goto label_7F28F374;
    case 0x7F28F378u: goto label_7F28F378;
    case 0x7F28F37Cu: goto label_7F28F37C;
    case 0x7F28F380u: goto label_7F28F380;
    case 0x7F28F384u: goto label_7F28F384;
    case 0x7F28F388u: goto label_7F28F388;
    case 0x7F28F38Cu: goto label_7F28F38C;
    case 0x7F28F390u: goto label_7F28F390;
    case 0x7F28F394u: goto label_7F28F394;
    case 0x7F28F398u: goto label_7F28F398;
    case 0x7F28F39Cu: goto label_7F28F39C;
    case 0x7F28F3A0u: goto label_7F28F3A0;
    case 0x7F28F3A4u: goto label_7F28F3A4;
    case 0x7F28F3A8u: goto label_7F28F3A8;
    case 0x7F28F3ACu: goto label_7F28F3AC;
    case 0x7F28F3B0u: goto label_7F28F3B0;
    case 0x7F28F3B4u: goto label_7F28F3B4;
    case 0x7F28F3B8u: goto label_7F28F3B8;
    case 0x7F28F3BCu: goto label_7F28F3BC;
    case 0x7F28F3C0u: goto label_7F28F3C0;
    case 0x7F28F3C4u: goto label_7F28F3C4;
    case 0x7F28F3C8u: goto label_7F28F3C8;
    case 0x7F28F3CCu: goto label_7F28F3CC;
    case 0x7F28F3D0u: goto label_7F28F3D0;
    case 0x7F28F3D4u: goto label_7F28F3D4;
    case 0x7F28F3D8u: goto label_7F28F3D8;
    case 0x7F28F3DCu: goto label_7F28F3DC;
    case 0x7F28F3E0u: goto label_7F28F3E0;
    case 0x7F28F3E4u: goto label_7F28F3E4;
    case 0x7F28F3E8u: goto label_7F28F3E8;
    case 0x7F28F3ECu: goto label_7F28F3EC;
    case 0x7F28F3F0u: goto label_7F28F3F0;
    case 0x7F28F3F4u: goto label_7F28F3F4;
    case 0x7F28F3F8u: goto label_7F28F3F8;
    case 0x7F28F3FCu: goto label_7F28F3FC;
    case 0x7F28F400u: goto label_7F28F400;
    case 0x7F28F404u: goto label_7F28F404;
    case 0x7F28F408u: goto label_7F28F408;
    case 0x7F28F40Cu: goto label_7F28F40C;
    case 0x7F28F410u: goto label_7F28F410;
    case 0x7F28F414u: goto label_7F28F414;
    case 0x7F28F418u: goto label_7F28F418;
    case 0x7F28F41Cu: goto label_7F28F41C;
    case 0x7F28F420u: goto label_7F28F420;
    case 0x7F28F424u: goto label_7F28F424;
    case 0x7F28F428u: goto label_7F28F428;
    case 0x7F28F42Cu: goto label_7F28F42C;
    case 0x7F28F430u: goto label_7F28F430;
    case 0x7F28F434u: goto label_7F28F434;
    case 0x7F28F438u: goto label_7F28F438;
    case 0x7F28F43Cu: goto label_7F28F43C;
    case 0x7F28F440u: goto label_7F28F440;
    case 0x7F28F444u: goto label_7F28F444;
    case 0x7F28F448u: goto label_7F28F448;
    case 0x7F28F44Cu: goto label_7F28F44C;
    case 0x7F28F450u: goto label_7F28F450;
    case 0x7F28F454u: goto label_7F28F454;
    case 0x7F28F458u: goto label_7F28F458;
    case 0x7F28F45Cu: goto label_7F28F45C;
    case 0x7F28F460u: goto label_7F28F460;
    case 0x7F28F464u: goto label_7F28F464;
    case 0x7F28F468u: goto label_7F28F468;
    case 0x7F28F46Cu: goto label_7F28F46C;
    case 0x7F28F470u: goto label_7F28F470;
    case 0x7F28F474u: goto label_7F28F474;
    case 0x7F28F478u: goto label_7F28F478;
    case 0x7F28F47Cu: goto label_7F28F47C;
    case 0x7F28F480u: goto label_7F28F480;
    case 0x7F28F484u: goto label_7F28F484;
    case 0x7F28F488u: goto label_7F28F488;
    case 0x7F28F48Cu: goto label_7F28F48C;
    case 0x7F28F490u: goto label_7F28F490;
    case 0x7F28F494u: goto label_7F28F494;
    case 0x7F28F498u: goto label_7F28F498;
    case 0x7F28F49Cu: goto label_7F28F49C;
    case 0x7F28F4A0u: goto label_7F28F4A0;
    case 0x7F28F4A4u: goto label_7F28F4A4;
    case 0x7F28F4A8u: goto label_7F28F4A8;
    case 0x7F28F4ACu: goto label_7F28F4AC;
    case 0x7F28F4B0u: goto label_7F28F4B0;
    case 0x7F28F4B4u: goto label_7F28F4B4;
    case 0x7F28F4B8u: goto label_7F28F4B8;
    case 0x7F28F4BCu: goto label_7F28F4BC;
    case 0x7F28F4C0u: goto label_7F28F4C0;
    case 0x7F28F4C4u: goto label_7F28F4C4;
    case 0x7F28F4C8u: goto label_7F28F4C8;
    case 0x7F28F4CCu: goto label_7F28F4CC;
    case 0x7F28F4D0u: goto label_7F28F4D0;
    case 0x7F28F4D4u: goto label_7F28F4D4;
    case 0x7F28F4D8u: goto label_7F28F4D8;
    case 0x7F28F4DCu: goto label_7F28F4DC;
    case 0x7F28F4E0u: goto label_7F28F4E0;
    case 0x7F28F4E4u: goto label_7F28F4E4;
    case 0x7F28F4E8u: goto label_7F28F4E8;
    case 0x7F28F4ECu: goto label_7F28F4EC;
    case 0x7F28F4F0u: goto label_7F28F4F0;
    case 0x7F28F4F4u: goto label_7F28F4F4;
    case 0x7F28F4F8u: goto label_7F28F4F8;
    case 0x7F28F4FCu: goto label_7F28F4FC;
    case 0x7F28F500u: goto label_7F28F500;
    case 0x7F28F504u: goto label_7F28F504;
    case 0x7F28F508u: goto label_7F28F508;
    case 0x7F28F50Cu: goto label_7F28F50C;
    case 0x7F28F510u: goto label_7F28F510;
    case 0x7F28F514u: goto label_7F28F514;
    case 0x7F28F518u: goto label_7F28F518;
    case 0x7F28F51Cu: goto label_7F28F51C;
    case 0x7F28F520u: goto label_7F28F520;
    case 0x7F28F524u: goto label_7F28F524;
    case 0x7F28F528u: goto label_7F28F528;
    case 0x7F28F52Cu: goto label_7F28F52C;
    case 0x7F28F530u: goto label_7F28F530;
    case 0x7F28F534u: goto label_7F28F534;
    case 0x7F28F538u: goto label_7F28F538;
    case 0x7F28F53Cu: goto label_7F28F53C;
    case 0x7F28F540u: goto label_7F28F540;
    case 0x7F28F544u: goto label_7F28F544;
    case 0x7F28F548u: goto label_7F28F548;
    case 0x7F28F54Cu: goto label_7F28F54C;
    case 0x7F28F550u: goto label_7F28F550;
    case 0x7F28F554u: goto label_7F28F554;
    case 0x7F28F558u: goto label_7F28F558;
    case 0x7F28F55Cu: goto label_7F28F55C;
    case 0x7F28F560u: goto label_7F28F560;
    case 0x7F28F564u: goto label_7F28F564;
    case 0x7F28F568u: goto label_7F28F568;
    case 0x7F28F56Cu: goto label_7F28F56C;
    case 0x7F28F570u: goto label_7F28F570;
    case 0x7F28F574u: goto label_7F28F574;
    case 0x7F28F578u: goto label_7F28F578;
    case 0x7F28F57Cu: goto label_7F28F57C;
    case 0x7F28F580u: goto label_7F28F580;
    case 0x7F28F584u: goto label_7F28F584;
    case 0x7F28F588u: goto label_7F28F588;
    case 0x7F28F58Cu: goto label_7F28F58C;
    case 0x7F28F590u: goto label_7F28F590;
    case 0x7F28F594u: goto label_7F28F594;
    case 0x7F28F598u: goto label_7F28F598;
    case 0x7F28F59Cu: goto label_7F28F59C;
    case 0x7F28F5A0u: goto label_7F28F5A0;
    case 0x7F28F5A4u: goto label_7F28F5A4;
    case 0x7F28F5A8u: goto label_7F28F5A8;
    case 0x7F28F5ACu: goto label_7F28F5AC;
    case 0x7F28F5B0u: goto label_7F28F5B0;
    case 0x7F28F5B4u: goto label_7F28F5B4;
    case 0x7F28F5B8u: goto label_7F28F5B8;
    case 0x7F28F5BCu: goto label_7F28F5BC;
    case 0x7F28F5C0u: goto label_7F28F5C0;
    case 0x7F28F5C4u: goto label_7F28F5C4;
    case 0x7F28F5C8u: goto label_7F28F5C8;
    case 0x7F28F5CCu: goto label_7F28F5CC;
    case 0x7F28F5D0u: goto label_7F28F5D0;
    case 0x7F28F5D4u: goto label_7F28F5D4;
    case 0x7F28F5D8u: goto label_7F28F5D8;
    case 0x7F28F5DCu: goto label_7F28F5DC;
    case 0x7F28F5E0u: goto label_7F28F5E0;
    case 0x7F28F5E4u: goto label_7F28F5E4;
    case 0x7F28F5E8u: goto label_7F28F5E8;
    case 0x7F28F5ECu: goto label_7F28F5EC;
    case 0x7F28F5F0u: goto label_7F28F5F0;
    case 0x7F28F5F4u: goto label_7F28F5F4;
    case 0x7F28F5F8u: goto label_7F28F5F8;
    case 0x7F28F5FCu: goto label_7F28F5FC;
    case 0x7F28F600u: goto label_7F28F600;
    case 0x7F28F604u: goto label_7F28F604;
    case 0x7F28F608u: goto label_7F28F608;
    case 0x7F28F60Cu: goto label_7F28F60C;
    case 0x7F28F610u: goto label_7F28F610;
    case 0x7F28F614u: goto label_7F28F614;
    case 0x7F28F618u: goto label_7F28F618;
    case 0x7F28F61Cu: goto label_7F28F61C;
    case 0x7F28F620u: goto label_7F28F620;
    case 0x7F28F624u: goto label_7F28F624;
    case 0x7F28F628u: goto label_7F28F628;
    case 0x7F28F62Cu: goto label_7F28F62C;
    case 0x7F28F630u: goto label_7F28F630;
    case 0x7F28F634u: goto label_7F28F634;
    case 0x7F28F638u: goto label_7F28F638;
    case 0x7F28F63Cu: goto label_7F28F63C;
    case 0x7F28F640u: goto label_7F28F640;
    case 0x7F28F644u: goto label_7F28F644;
    case 0x7F28F648u: goto label_7F28F648;
    case 0x7F28F64Cu: goto label_7F28F64C;
    case 0x7F28F650u: goto label_7F28F650;
    case 0x7F28F654u: goto label_7F28F654;
    case 0x7F28F658u: goto label_7F28F658;
    case 0x7F28F65Cu: goto label_7F28F65C;
    case 0x7F28F660u: goto label_7F28F660;
    case 0x7F28F664u: goto label_7F28F664;
    case 0x7F28F668u: goto label_7F28F668;
    case 0x7F28F66Cu: goto label_7F28F66C;
    case 0x7F28F670u: goto label_7F28F670;
    case 0x7F28F674u: goto label_7F28F674;
    case 0x7F28F678u: goto label_7F28F678;
    case 0x7F28F67Cu: goto label_7F28F67C;
    case 0x7F28F680u: goto label_7F28F680;
    case 0x7F28F684u: goto label_7F28F684;
    case 0x7F28F688u: goto label_7F28F688;
    case 0x7F28F68Cu: goto label_7F28F68C;
    case 0x7F28F690u: goto label_7F28F690;
    case 0x7F28F694u: goto label_7F28F694;
    case 0x7F28F698u: goto label_7F28F698;
    case 0x7F28F69Cu: goto label_7F28F69C;
    case 0x7F28F6A0u: goto label_7F28F6A0;
    case 0x7F28F6A4u: goto label_7F28F6A4;
    case 0x7F28F6A8u: goto label_7F28F6A8;
    case 0x7F28F6ACu: goto label_7F28F6AC;
    case 0x7F28F6B0u: goto label_7F28F6B0;
    case 0x7F28F6B4u: goto label_7F28F6B4;
    case 0x7F28F6B8u: goto label_7F28F6B8;
    case 0x7F28F6BCu: goto label_7F28F6BC;
    case 0x7F28F6C0u: goto label_7F28F6C0;
    case 0x7F28F6C4u: goto label_7F28F6C4;
    case 0x7F28F6C8u: goto label_7F28F6C8;
    case 0x7F28F6CCu: goto label_7F28F6CC;
    case 0x7F28F6D0u: goto label_7F28F6D0;
    case 0x7F28F6D4u: goto label_7F28F6D4;
    case 0x7F28F6D8u: goto label_7F28F6D8;
    case 0x7F28F6DCu: goto label_7F28F6DC;
    case 0x7F28F6E0u: goto label_7F28F6E0;
    case 0x7F28F6E4u: goto label_7F28F6E4;
    case 0x7F28F6E8u: goto label_7F28F6E8;
    case 0x7F28F6ECu: goto label_7F28F6EC;
    case 0x7F28F6F0u: goto label_7F28F6F0;
    case 0x7F28F6F4u: goto label_7F28F6F4;
    case 0x7F28F6F8u: goto label_7F28F6F8;
    case 0x7F28F6FCu: goto label_7F28F6FC;
    case 0x7F28F700u: goto label_7F28F700;
    case 0x7F28F704u: goto label_7F28F704;
    case 0x7F28F708u: goto label_7F28F708;
    case 0x7F28F70Cu: goto label_7F28F70C;
    case 0x7F28F710u: goto label_7F28F710;
    case 0x7F28F714u: goto label_7F28F714;
    case 0x7F28F718u: goto label_7F28F718;
    case 0x7F28F71Cu: goto label_7F28F71C;
    case 0x7F28F720u: goto label_7F28F720;
    case 0x7F28F724u: goto label_7F28F724;
    case 0x7F28F728u: goto label_7F28F728;
    case 0x7F28F72Cu: goto label_7F28F72C;
    case 0x7F28F730u: goto label_7F28F730;
    case 0x7F28F734u: goto label_7F28F734;
    case 0x7F28F738u: goto label_7F28F738;
    case 0x7F28F73Cu: goto label_7F28F73C;
    case 0x7F28F740u: goto label_7F28F740;
    case 0x7F28F744u: goto label_7F28F744;
    case 0x7F28F748u: goto label_7F28F748;
    case 0x7F28F74Cu: goto label_7F28F74C;
    case 0x7F28F750u: goto label_7F28F750;
    case 0x7F28F754u: goto label_7F28F754;
    case 0x7F28F758u: goto label_7F28F758;
    case 0x7F28F75Cu: goto label_7F28F75C;
    case 0x7F28F760u: goto label_7F28F760;
    case 0x7F28F764u: goto label_7F28F764;
    case 0x7F28F768u: goto label_7F28F768;
    case 0x7F28F76Cu: goto label_7F28F76C;
    case 0x7F28F770u: goto label_7F28F770;
    case 0x7F28F774u: goto label_7F28F774;
    case 0x7F28F778u: goto label_7F28F778;
    case 0x7F28F77Cu: goto label_7F28F77C;
    case 0x7F28F780u: goto label_7F28F780;
    case 0x7F28F784u: goto label_7F28F784;
    case 0x7F28F788u: goto label_7F28F788;
    case 0x7F28F78Cu: goto label_7F28F78C;
    case 0x7F28F790u: goto label_7F28F790;
    case 0x7F28F794u: goto label_7F28F794;
    case 0x7F28F798u: goto label_7F28F798;
    case 0x7F28F79Cu: goto label_7F28F79C;
    case 0x7F28F7A0u: goto label_7F28F7A0;
    case 0x7F28F7A4u: goto label_7F28F7A4;
    case 0x7F28F7A8u: goto label_7F28F7A8;
    case 0x7F28F7ACu: goto label_7F28F7AC;
    case 0x7F28F7B0u: goto label_7F28F7B0;
    case 0x7F28F7B4u: goto label_7F28F7B4;
    case 0x7F28F7B8u: goto label_7F28F7B8;
    case 0x7F28F7BCu: goto label_7F28F7BC;
    case 0x7F28F7C0u: goto label_7F28F7C0;
    case 0x7F28F7C4u: goto label_7F28F7C4;
    case 0x7F28F7C8u: goto label_7F28F7C8;
    case 0x7F28F7CCu: goto label_7F28F7CC;
    case 0x7F28F7D0u: goto label_7F28F7D0;
    case 0x7F28F7D4u: goto label_7F28F7D4;
    case 0x7F28F7D8u: goto label_7F28F7D8;
    case 0x7F28F7DCu: goto label_7F28F7DC;
    case 0x7F28F7E0u: goto label_7F28F7E0;
    case 0x7F28F7E4u: goto label_7F28F7E4;
    case 0x7F28F7E8u: goto label_7F28F7E8;
    case 0x7F28F7ECu: goto label_7F28F7EC;
    case 0x7F28F7F0u: goto label_7F28F7F0;
    case 0x7F28F7F4u: goto label_7F28F7F4;
    case 0x7F28F7F8u: goto label_7F28F7F8;
    case 0x7F28F7FCu: goto label_7F28F7FC;
    case 0x7F28F800u: goto label_7F28F800;
    case 0x7F28F804u: goto label_7F28F804;
    case 0x7F28F808u: goto label_7F28F808;
    case 0x7F28F80Cu: goto label_7F28F80C;
    case 0x7F28F810u: goto label_7F28F810;
    case 0x7F28F814u: goto label_7F28F814;
    case 0x7F28F818u: goto label_7F28F818;
    case 0x7F28F81Cu: goto label_7F28F81C;
    case 0x7F28F820u: goto label_7F28F820;
    case 0x7F28F824u: goto label_7F28F824;
    case 0x7F28F828u: goto label_7F28F828;
    case 0x7F28F82Cu: goto label_7F28F82C;
    case 0x7F28F830u: goto label_7F28F830;
    case 0x7F28F834u: goto label_7F28F834;
    case 0x7F28F838u: goto label_7F28F838;
    case 0x7F28F83Cu: goto label_7F28F83C;
    case 0x7F28F840u: goto label_7F28F840;
    case 0x7F28F844u: goto label_7F28F844;
    case 0x7F28F848u: goto label_7F28F848;
    case 0x7F28F84Cu: goto label_7F28F84C;
    case 0x7F28F850u: goto label_7F28F850;
    case 0x7F28F854u: goto label_7F28F854;
    case 0x7F28F858u: goto label_7F28F858;
    case 0x7F28F85Cu: goto label_7F28F85C;
    case 0x7F28F860u: goto label_7F28F860;
    case 0x7F28F864u: goto label_7F28F864;
    case 0x7F28F868u: goto label_7F28F868;
    case 0x7F28F86Cu: goto label_7F28F86C;
    case 0x7F28F870u: goto label_7F28F870;
    case 0x7F28F874u: goto label_7F28F874;
    case 0x7F28F878u: goto label_7F28F878;
    case 0x7F28F87Cu: goto label_7F28F87C;
    case 0x7F28F880u: goto label_7F28F880;
    case 0x7F28F884u: goto label_7F28F884;
    case 0x7F28F888u: goto label_7F28F888;
    case 0x7F28F88Cu: goto label_7F28F88C;
    case 0x7F28F890u: goto label_7F28F890;
    case 0x7F28F894u: goto label_7F28F894;
    case 0x7F28F898u: goto label_7F28F898;
    case 0x7F28F89Cu: goto label_7F28F89C;
    case 0x7F28F8A0u: goto label_7F28F8A0;
    case 0x7F28F8A4u: goto label_7F28F8A4;
    case 0x7F28F8A8u: goto label_7F28F8A8;
    case 0x7F28F8ACu: goto label_7F28F8AC;
    case 0x7F28F8B0u: goto label_7F28F8B0;
    case 0x7F28F8B4u: goto label_7F28F8B4;
    case 0x7F28F8B8u: goto label_7F28F8B8;
    case 0x7F28F8BCu: goto label_7F28F8BC;
    case 0x7F28F8C0u: goto label_7F28F8C0;
    case 0x7F28F8C4u: goto label_7F28F8C4;
    case 0x7F28F8C8u: goto label_7F28F8C8;
    case 0x7F28F8CCu: goto label_7F28F8CC;
    case 0x7F28F8D0u: goto label_7F28F8D0;
    case 0x7F28F8D4u: goto label_7F28F8D4;
    case 0x7F28F8D8u: goto label_7F28F8D8;
    case 0x7F28F8DCu: goto label_7F28F8DC;
    case 0x7F28F8E0u: goto label_7F28F8E0;
    case 0x7F28F8E4u: goto label_7F28F8E4;
    case 0x7F28F8E8u: goto label_7F28F8E8;
    case 0x7F28F8ECu: goto label_7F28F8EC;
    case 0x7F28F8F0u: goto label_7F28F8F0;
    case 0x7F28F8F4u: goto label_7F28F8F4;
    case 0x7F28F8F8u: goto label_7F28F8F8;
    case 0x7F28F8FCu: goto label_7F28F8FC;
    case 0x7F28F900u: goto label_7F28F900;
    case 0x7F28F904u: goto label_7F28F904;
    case 0x7F28F908u: goto label_7F28F908;
    case 0x7F28F90Cu: goto label_7F28F90C;
    case 0x7F28F910u: goto label_7F28F910;
    case 0x7F28F914u: goto label_7F28F914;
    case 0x7F28F918u: goto label_7F28F918;
    case 0x7F28F91Cu: goto label_7F28F91C;
    case 0x7F28F920u: goto label_7F28F920;
    case 0x7F28F924u: goto label_7F28F924;
    case 0x7F28F928u: goto label_7F28F928;
    case 0x7F28F92Cu: goto label_7F28F92C;
    case 0x7F28F930u: goto label_7F28F930;
    case 0x7F28F934u: goto label_7F28F934;
    case 0x7F28F938u: goto label_7F28F938;
    case 0x7F28F93Cu: goto label_7F28F93C;
    case 0x7F28F940u: goto label_7F28F940;
    case 0x7F28F944u: goto label_7F28F944;
    case 0x7F28F948u: goto label_7F28F948;
    case 0x7F28F94Cu: goto label_7F28F94C;
    case 0x7F28F950u: goto label_7F28F950;
    case 0x7F28F954u: goto label_7F28F954;
    case 0x7F28F958u: goto label_7F28F958;
    case 0x7F28F95Cu: goto label_7F28F95C;
    case 0x7F28F960u: goto label_7F28F960;
    case 0x7F28F964u: goto label_7F28F964;
    case 0x7F28F968u: goto label_7F28F968;
    case 0x7F28F96Cu: goto label_7F28F96C;
    case 0x7F28F970u: goto label_7F28F970;
    case 0x7F28F974u: goto label_7F28F974;
    case 0x7F28F978u: goto label_7F28F978;
    case 0x7F28F97Cu: goto label_7F28F97C;
    case 0x7F28F980u: goto label_7F28F980;
    case 0x7F28F984u: goto label_7F28F984;
    case 0x7F28F988u: goto label_7F28F988;
    case 0x7F28F98Cu: goto label_7F28F98C;
    case 0x7F28F990u: goto label_7F28F990;
    case 0x7F28F994u: goto label_7F28F994;
    case 0x7F28F998u: goto label_7F28F998;
    case 0x7F28F99Cu: goto label_7F28F99C;
    case 0x7F28F9A0u: goto label_7F28F9A0;
    case 0x7F28F9A4u: goto label_7F28F9A4;
    case 0x7F28F9A8u: goto label_7F28F9A8;
    case 0x7F28F9ACu: goto label_7F28F9AC;
    case 0x7F28F9B0u: goto label_7F28F9B0;
    case 0x7F28F9B4u: goto label_7F28F9B4;
    case 0x7F28F9B8u: goto label_7F28F9B8;
    case 0x7F28F9BCu: goto label_7F28F9BC;
    case 0x7F28F9C0u: goto label_7F28F9C0;
    case 0x7F28F9C4u: goto label_7F28F9C4;
    case 0x7F28F9C8u: goto label_7F28F9C8;
    case 0x7F28F9CCu: goto label_7F28F9CC;
    case 0x7F28F9D0u: goto label_7F28F9D0;
    case 0x7F28F9D4u: goto label_7F28F9D4;
    case 0x7F28F9D8u: goto label_7F28F9D8;
    case 0x7F28F9DCu: goto label_7F28F9DC;
    case 0x7F28F9E0u: goto label_7F28F9E0;
    case 0x7F28F9E4u: goto label_7F28F9E4;
    case 0x7F28F9E8u: goto label_7F28F9E8;
    case 0x7F28F9ECu: goto label_7F28F9EC;
    case 0x7F28F9F0u: goto label_7F28F9F0;
    case 0x7F28F9F4u: goto label_7F28F9F4;
    case 0x7F28F9F8u: goto label_7F28F9F8;
    case 0x7F28F9FCu: goto label_7F28F9FC;
    case 0x7F28FA00u: goto label_7F28FA00;
    case 0x7F28FA04u: goto label_7F28FA04;
    case 0x7F28FA08u: goto label_7F28FA08;
    case 0x7F28FA0Cu: goto label_7F28FA0C;
    case 0x7F28FA10u: goto label_7F28FA10;
    case 0x7F28FA14u: goto label_7F28FA14;
    case 0x7F28FA18u: goto label_7F28FA18;
    case 0x7F28FA1Cu: goto label_7F28FA1C;
    case 0x7F28FA20u: goto label_7F28FA20;
    case 0x7F28FA24u: goto label_7F28FA24;
    case 0x7F28FA28u: goto label_7F28FA28;
    case 0x7F28FA2Cu: goto label_7F28FA2C;
    case 0x7F28FA30u: goto label_7F28FA30;
    case 0x7F28FA34u: goto label_7F28FA34;
    case 0x7F28FA38u: goto label_7F28FA38;
    case 0x7F28FA3Cu: goto label_7F28FA3C;
    case 0x7F28FA40u: goto label_7F28FA40;
    case 0x7F28FA44u: goto label_7F28FA44;
    case 0x7F28FA48u: goto label_7F28FA48;
    case 0x7F28FA4Cu: goto label_7F28FA4C;
    case 0x7F28FA50u: goto label_7F28FA50;
    case 0x7F28FA54u: goto label_7F28FA54;
    case 0x7F28FA58u: goto label_7F28FA58;
    case 0x7F28FA5Cu: goto label_7F28FA5C;
    case 0x7F28FA60u: goto label_7F28FA60;
    case 0x7F28FA64u: goto label_7F28FA64;
    case 0x7F28FA68u: goto label_7F28FA68;
    case 0x7F28FA6Cu: goto label_7F28FA6C;
    case 0x7F28FA70u: goto label_7F28FA70;
    case 0x7F28FA74u: goto label_7F28FA74;
    case 0x7F28FA78u: goto label_7F28FA78;
    case 0x7F28FA7Cu: goto label_7F28FA7C;
    case 0x7F28FA80u: goto label_7F28FA80;
    case 0x7F28FA84u: goto label_7F28FA84;
    case 0x7F28FA88u: goto label_7F28FA88;
    case 0x7F28FA8Cu: goto label_7F28FA8C;
    case 0x7F28FA90u: goto label_7F28FA90;
    case 0x7F28FA94u: goto label_7F28FA94;
    case 0x7F28FA98u: goto label_7F28FA98;
    case 0x7F28FA9Cu: goto label_7F28FA9C;
    case 0x7F28FAA0u: goto label_7F28FAA0;
    case 0x7F28FAA4u: goto label_7F28FAA4;
    case 0x7F28FAA8u: goto label_7F28FAA8;
    case 0x7F28FAACu: goto label_7F28FAAC;
    case 0x7F28FAB0u: goto label_7F28FAB0;
    case 0x7F28FAB4u: goto label_7F28FAB4;
    case 0x7F28FAB8u: goto label_7F28FAB8;
    case 0x7F28FABCu: goto label_7F28FABC;
    case 0x7F28FAC0u: goto label_7F28FAC0;
    case 0x7F28FAC4u: goto label_7F28FAC4;
    case 0x7F28FAC8u: goto label_7F28FAC8;
    case 0x7F28FACCu: goto label_7F28FACC;
    case 0x7F28FAD0u: goto label_7F28FAD0;
    case 0x7F28FAD4u: goto label_7F28FAD4;
    case 0x7F28FAD8u: goto label_7F28FAD8;
    case 0x7F28FADCu: goto label_7F28FADC;
    case 0x7F28FAE0u: goto label_7F28FAE0;
    case 0x7F28FAE4u: goto label_7F28FAE4;
    case 0x7F28FAE8u: goto label_7F28FAE8;
    case 0x7F28FAECu: goto label_7F28FAEC;
    case 0x7F28FAF0u: goto label_7F28FAF0;
    case 0x7F28FAF4u: goto label_7F28FAF4;
    case 0x7F28FAF8u: goto label_7F28FAF8;
    case 0x7F28FAFCu: goto label_7F28FAFC;
    case 0x7F28FB00u: goto label_7F28FB00;
    case 0x7F28FB04u: goto label_7F28FB04;
    case 0x7F28FB08u: goto label_7F28FB08;
    case 0x7F28FB0Cu: goto label_7F28FB0C;
    case 0x7F28FB10u: goto label_7F28FB10;
    case 0x7F28FB14u: goto label_7F28FB14;
    case 0x7F28FB18u: goto label_7F28FB18;
    case 0x7F28FB1Cu: goto label_7F28FB1C;
    case 0x7F28FB20u: goto label_7F28FB20;
    case 0x7F28FB24u: goto label_7F28FB24;
    case 0x7F28FB28u: goto label_7F28FB28;
    case 0x7F28FB2Cu: goto label_7F28FB2C;
    case 0x7F28FB30u: goto label_7F28FB30;
    case 0x7F28FB34u: goto label_7F28FB34;
    case 0x7F28FB38u: goto label_7F28FB38;
    case 0x7F28FB3Cu: goto label_7F28FB3C;
    case 0x7F28FB40u: goto label_7F28FB40;
    case 0x7F28FB44u: goto label_7F28FB44;
    case 0x7F28FB48u: goto label_7F28FB48;
    case 0x7F28FB4Cu: goto label_7F28FB4C;
    case 0x7F28FB50u: goto label_7F28FB50;
    case 0x7F28FB54u: goto label_7F28FB54;
    case 0x7F28FB58u: goto label_7F28FB58;
    case 0x7F28FB5Cu: goto label_7F28FB5C;
    case 0x7F28FB60u: goto label_7F28FB60;
    case 0x7F28FB64u: goto label_7F28FB64;
    case 0x7F28FB68u: goto label_7F28FB68;
    case 0x7F28FB6Cu: goto label_7F28FB6C;
    case 0x7F28FB70u: goto label_7F28FB70;
    case 0x7F28FB74u: goto label_7F28FB74;
    case 0x7F28FB78u: goto label_7F28FB78;
    case 0x7F28FB7Cu: goto label_7F28FB7C;
    case 0x7F28FB80u: goto label_7F28FB80;
    case 0x7F28FB84u: goto label_7F28FB84;
    case 0x7F28FB88u: goto label_7F28FB88;
    case 0x7F28FB8Cu: goto label_7F28FB8C;
    case 0x7F28FB90u: goto label_7F28FB90;
    case 0x7F28FB94u: goto label_7F28FB94;
    case 0x7F28FB98u: goto label_7F28FB98;
    case 0x7F28FB9Cu: goto label_7F28FB9C;
    case 0x7F28FBA0u: goto label_7F28FBA0;
    case 0x7F28FBA4u: goto label_7F28FBA4;
    case 0x7F28FBA8u: goto label_7F28FBA8;
    case 0x7F28FBACu: goto label_7F28FBAC;
    case 0x7F28FBB0u: goto label_7F28FBB0;
    case 0x7F28FBB4u: goto label_7F28FBB4;
    case 0x7F28FBB8u: goto label_7F28FBB8;
    case 0x7F28FBBCu: goto label_7F28FBBC;
    case 0x7F28FBC0u: goto label_7F28FBC0;
    case 0x7F28FBC4u: goto label_7F28FBC4;
    case 0x7F28FBC8u: goto label_7F28FBC8;
    case 0x7F28FBCCu: goto label_7F28FBCC;
    case 0x7F28FBD0u: goto label_7F28FBD0;
    case 0x7F28FBD4u: goto label_7F28FBD4;
    case 0x7F28FBD8u: goto label_7F28FBD8;
    case 0x7F28FBDCu: goto label_7F28FBDC;
    case 0x7F28FBE0u: goto label_7F28FBE0;
    case 0x7F28FBE4u: goto label_7F28FBE4;
    case 0x7F28FBE8u: goto label_7F28FBE8;
    case 0x7F28FBECu: goto label_7F28FBEC;
    case 0x7F28FBF0u: goto label_7F28FBF0;
    case 0x7F28FBF4u: goto label_7F28FBF4;
    case 0x7F28FBF8u: goto label_7F28FBF8;
    case 0x7F28FBFCu: goto label_7F28FBFC;
    case 0x7F28FC00u: goto label_7F28FC00;
    case 0x7F28FC04u: goto label_7F28FC04;
    case 0x7F28FC08u: goto label_7F28FC08;
    case 0x7F28FC0Cu: goto label_7F28FC0C;
    case 0x7F28FC10u: goto label_7F28FC10;
    case 0x7F28FC14u: goto label_7F28FC14;
    case 0x7F28FC18u: goto label_7F28FC18;
    case 0x7F28FC1Cu: goto label_7F28FC1C;
    case 0x7F28FC20u: goto label_7F28FC20;
    case 0x7F28FC24u: goto label_7F28FC24;
    case 0x7F28FC28u: goto label_7F28FC28;
    case 0x7F28FC2Cu: goto label_7F28FC2C;
    case 0x7F28FC30u: goto label_7F28FC30;
    case 0x7F28FC34u: goto label_7F28FC34;
    case 0x7F28FC38u: goto label_7F28FC38;
    case 0x7F28FC3Cu: goto label_7F28FC3C;
    case 0x7F28FC40u: goto label_7F28FC40;
    case 0x7F28FC44u: goto label_7F28FC44;
    case 0x7F28FC48u: goto label_7F28FC48;
    case 0x7F28FC4Cu: goto label_7F28FC4C;
    case 0x7F28FC50u: goto label_7F28FC50;
    case 0x7F28FC54u: goto label_7F28FC54;
    case 0x7F28FC58u: goto label_7F28FC58;
    case 0x7F28FC5Cu: goto label_7F28FC5C;
    case 0x7F28FC60u: goto label_7F28FC60;
    case 0x7F28FC64u: goto label_7F28FC64;
    case 0x7F28FC68u: goto label_7F28FC68;
    case 0x7F28FC6Cu: goto label_7F28FC6C;
    case 0x7F28FC70u: goto label_7F28FC70;
    case 0x7F28FC74u: goto label_7F28FC74;
    case 0x7F28FC78u: goto label_7F28FC78;
    case 0x7F28FC7Cu: goto label_7F28FC7C;
    case 0x7F28FC80u: goto label_7F28FC80;
    case 0x7F28FC84u: goto label_7F28FC84;
    case 0x7F28FC88u: goto label_7F28FC88;
    case 0x7F28FC8Cu: goto label_7F28FC8C;
    case 0x7F28FC90u: goto label_7F28FC90;
    case 0x7F28FC94u: goto label_7F28FC94;
    case 0x7F28FC98u: goto label_7F28FC98;
    case 0x7F28FC9Cu: goto label_7F28FC9C;
    case 0x7F28FCA0u: goto label_7F28FCA0;
    case 0x7F28FCA4u: goto label_7F28FCA4;
    case 0x7F28FCA8u: goto label_7F28FCA8;
    case 0x7F28FCACu: goto label_7F28FCAC;
    case 0x7F28FCB0u: goto label_7F28FCB0;
    case 0x7F28FCB4u: goto label_7F28FCB4;
    case 0x7F28FCB8u: goto label_7F28FCB8;
    case 0x7F28FCBCu: goto label_7F28FCBC;
    case 0x7F28FCC0u: goto label_7F28FCC0;
    case 0x7F28FCC4u: goto label_7F28FCC4;
    case 0x7F28FCC8u: goto label_7F28FCC8;
    case 0x7F28FCCCu: goto label_7F28FCCC;
    case 0x7F28FCD0u: goto label_7F28FCD0;
    case 0x7F28FCD4u: goto label_7F28FCD4;
    case 0x7F28FCD8u: goto label_7F28FCD8;
    case 0x7F28FCDCu: goto label_7F28FCDC;
    case 0x7F28FCE0u: goto label_7F28FCE0;
    case 0x7F28FCE4u: goto label_7F28FCE4;
    case 0x7F28FCE8u: goto label_7F28FCE8;
    case 0x7F28FCECu: goto label_7F28FCEC;
    case 0x7F28FCF0u: goto label_7F28FCF0;
    case 0x7F28FCF4u: goto label_7F28FCF4;
    case 0x7F28FCF8u: goto label_7F28FCF8;
    case 0x7F28FCFCu: goto label_7F28FCFC;
    case 0x7F28FD00u: goto label_7F28FD00;
    case 0x7F28FD04u: goto label_7F28FD04;
    case 0x7F28FD08u: goto label_7F28FD08;
    case 0x7F28FD0Cu: goto label_7F28FD0C;
    case 0x7F28FD10u: goto label_7F28FD10;
    case 0x7F28FD14u: goto label_7F28FD14;
    case 0x7F28FD18u: goto label_7F28FD18;
    case 0x7F28FD1Cu: goto label_7F28FD1C;
    case 0x7F28FD20u: goto label_7F28FD20;
    case 0x7F28FD24u: goto label_7F28FD24;
    case 0x7F28FD28u: goto label_7F28FD28;
    case 0x7F28FD2Cu: goto label_7F28FD2C;
    case 0x7F28FD30u: goto label_7F28FD30;
    case 0x7F28FD34u: goto label_7F28FD34;
    case 0x7F28FD38u: goto label_7F28FD38;
    case 0x7F28FD3Cu: goto label_7F28FD3C;
    case 0x7F28FD40u: goto label_7F28FD40;
    case 0x7F28FD44u: goto label_7F28FD44;
    case 0x7F28FD48u: goto label_7F28FD48;
    case 0x7F28FD4Cu: goto label_7F28FD4C;
    case 0x7F28FD50u: goto label_7F28FD50;
    case 0x7F28FD54u: goto label_7F28FD54;
    case 0x7F28FD58u: goto label_7F28FD58;
    case 0x7F28FD5Cu: goto label_7F28FD5C;
    case 0x7F28FD60u: goto label_7F28FD60;
    case 0x7F28FD64u: goto label_7F28FD64;
    case 0x7F28FD68u: goto label_7F28FD68;
    case 0x7F28FD6Cu: goto label_7F28FD6C;
    case 0x7F28FD70u: goto label_7F28FD70;
    case 0x7F28FD74u: goto label_7F28FD74;
    case 0x7F28FD78u: goto label_7F28FD78;
    case 0x7F28FD7Cu: goto label_7F28FD7C;
    case 0x7F28FD80u: goto label_7F28FD80;
    case 0x7F28FD84u: goto label_7F28FD84;
    case 0x7F28FD88u: goto label_7F28FD88;
    case 0x7F28FD8Cu: goto label_7F28FD8C;
    case 0x7F28FD90u: goto label_7F28FD90;
    case 0x7F28FD94u: goto label_7F28FD94;
    case 0x7F28FD98u: goto label_7F28FD98;
    case 0x7F28FD9Cu: goto label_7F28FD9C;
    case 0x7F28FDA0u: goto label_7F28FDA0;
    case 0x7F28FDA4u: goto label_7F28FDA4;
    case 0x7F28FDA8u: goto label_7F28FDA8;
    case 0x7F28FDACu: goto label_7F28FDAC;
    case 0x7F28FDB0u: goto label_7F28FDB0;
    case 0x7F28FDB4u: goto label_7F28FDB4;
    case 0x7F28FDB8u: goto label_7F28FDB8;
    case 0x7F28FDBCu: goto label_7F28FDBC;
    case 0x7F28FDC0u: goto label_7F28FDC0;
    case 0x7F28FDC4u: goto label_7F28FDC4;
    case 0x7F28FDC8u: goto label_7F28FDC8;
    case 0x7F28FDCCu: goto label_7F28FDCC;
    case 0x7F28FDD0u: goto label_7F28FDD0;
    case 0x7F28FDD4u: goto label_7F28FDD4;
    case 0x7F28FDD8u: goto label_7F28FDD8;
    case 0x7F28FDDCu: goto label_7F28FDDC;
    case 0x7F28FDE0u: goto label_7F28FDE0;
    case 0x7F28FDE4u: goto label_7F28FDE4;
    case 0x7F28FDE8u: goto label_7F28FDE8;
    case 0x7F28FDECu: goto label_7F28FDEC;
    case 0x7F28FDF0u: goto label_7F28FDF0;
    case 0x7F28FDF4u: goto label_7F28FDF4;
    case 0x7F28FDF8u: goto label_7F28FDF8;
    case 0x7F28FDFCu: goto label_7F28FDFC;
    case 0x7F28FE00u: goto label_7F28FE00;
    case 0x7F28FE04u: goto label_7F28FE04;
    case 0x7F28FE08u: goto label_7F28FE08;
    case 0x7F28FE0Cu: goto label_7F28FE0C;
    case 0x7F28FE10u: goto label_7F28FE10;
    case 0x7F28FE14u: goto label_7F28FE14;
    case 0x7F28FE18u: goto label_7F28FE18;
    case 0x7F28FE1Cu: goto label_7F28FE1C;
    case 0x7F28FE20u: goto label_7F28FE20;
    case 0x7F28FE24u: goto label_7F28FE24;
    case 0x7F28FE28u: goto label_7F28FE28;
    case 0x7F28FE2Cu: goto label_7F28FE2C;
    case 0x7F28FE30u: goto label_7F28FE30;
    case 0x7F28FE34u: goto label_7F28FE34;
    case 0x7F28FE38u: goto label_7F28FE38;
    case 0x7F28FE3Cu: goto label_7F28FE3C;
    case 0x7F28FE40u: goto label_7F28FE40;
    case 0x7F28FE44u: goto label_7F28FE44;
    case 0x7F28FE48u: goto label_7F28FE48;
    case 0x7F28FE4Cu: goto label_7F28FE4C;
    case 0x7F28FE50u: goto label_7F28FE50;
    case 0x7F28FE54u: goto label_7F28FE54;
    case 0x7F28FE58u: goto label_7F28FE58;
    case 0x7F28FE5Cu: goto label_7F28FE5C;
    case 0x7F28FE60u: goto label_7F28FE60;
    case 0x7F28FE64u: goto label_7F28FE64;
    case 0x7F28FE68u: goto label_7F28FE68;
    case 0x7F28FE6Cu: goto label_7F28FE6C;
    case 0x7F28FE70u: goto label_7F28FE70;
    case 0x7F28FE74u: goto label_7F28FE74;
    case 0x7F28FE78u: goto label_7F28FE78;
    case 0x7F28FE7Cu: goto label_7F28FE7C;
    case 0x7F28FE80u: goto label_7F28FE80;
    case 0x7F28FE84u: goto label_7F28FE84;
    case 0x7F28FE88u: goto label_7F28FE88;
    case 0x7F28FE8Cu: goto label_7F28FE8C;
    case 0x7F28FE90u: goto label_7F28FE90;
    case 0x7F28FE94u: goto label_7F28FE94;
    case 0x7F28FE98u: goto label_7F28FE98;
    case 0x7F28FE9Cu: goto label_7F28FE9C;
    case 0x7F28FEA0u: goto label_7F28FEA0;
    case 0x7F28FEA4u: goto label_7F28FEA4;
    case 0x7F28FEA8u: goto label_7F28FEA8;
    case 0x7F28FEACu: goto label_7F28FEAC;
    case 0x7F28FEB0u: goto label_7F28FEB0;
    case 0x7F28FEB4u: goto label_7F28FEB4;
    case 0x7F28FEB8u: goto label_7F28FEB8;
    case 0x7F28FEBCu: goto label_7F28FEBC;
    case 0x7F28FEC0u: goto label_7F28FEC0;
    case 0x7F28FEC4u: goto label_7F28FEC4;
    case 0x7F28FEC8u: goto label_7F28FEC8;
    case 0x7F28FECCu: goto label_7F28FECC;
    case 0x7F28FED0u: goto label_7F28FED0;
    case 0x7F28FED4u: goto label_7F28FED4;
    case 0x7F28FED8u: goto label_7F28FED8;
    case 0x7F28FEDCu: goto label_7F28FEDC;
    case 0x7F28FEE0u: goto label_7F28FEE0;
    case 0x7F28FEE4u: goto label_7F28FEE4;
    case 0x7F28FEE8u: goto label_7F28FEE8;
    case 0x7F28FEECu: goto label_7F28FEEC;
    case 0x7F28FEF0u: goto label_7F28FEF0;
    case 0x7F28FEF4u: goto label_7F28FEF4;
    case 0x7F28FEF8u: goto label_7F28FEF8;
    case 0x7F28FEFCu: goto label_7F28FEFC;
    case 0x7F28FF00u: goto label_7F28FF00;
    case 0x7F28FF04u: goto label_7F28FF04;
    case 0x7F28FF08u: goto label_7F28FF08;
    case 0x7F28FF0Cu: goto label_7F28FF0C;
    case 0x7F28FF10u: goto label_7F28FF10;
    case 0x7F28FF14u: goto label_7F28FF14;
    case 0x7F28FF18u: goto label_7F28FF18;
    case 0x7F28FF1Cu: goto label_7F28FF1C;
    case 0x7F28FF20u: goto label_7F28FF20;
    case 0x7F28FF24u: goto label_7F28FF24;
    case 0x7F28FF28u: goto label_7F28FF28;
    case 0x7F28FF2Cu: goto label_7F28FF2C;
    case 0x7F28FF30u: goto label_7F28FF30;
    case 0x7F28FF34u: goto label_7F28FF34;
    case 0x7F28FF38u: goto label_7F28FF38;
    case 0x7F28FF3Cu: goto label_7F28FF3C;
    case 0x7F28FF40u: goto label_7F28FF40;
    case 0x7F28FF44u: goto label_7F28FF44;
    case 0x7F28FF48u: goto label_7F28FF48;
    case 0x7F28FF4Cu: goto label_7F28FF4C;
    case 0x7F28FF50u: goto label_7F28FF50;
    case 0x7F28FF54u: goto label_7F28FF54;
    case 0x7F28FF58u: goto label_7F28FF58;
    case 0x7F28FF5Cu: goto label_7F28FF5C;
    case 0x7F28FF60u: goto label_7F28FF60;
    case 0x7F28FF64u: goto label_7F28FF64;
    case 0x7F28FF68u: goto label_7F28FF68;
    case 0x7F28FF6Cu: goto label_7F28FF6C;
    case 0x7F28FF70u: goto label_7F28FF70;
    case 0x7F28FF74u: goto label_7F28FF74;
    case 0x7F28FF78u: goto label_7F28FF78;
    case 0x7F28FF7Cu: goto label_7F28FF7C;
    case 0x7F28FF80u: goto label_7F28FF80;
    case 0x7F28FF84u: goto label_7F28FF84;
    case 0x7F28FF88u: goto label_7F28FF88;
    case 0x7F28FF8Cu: goto label_7F28FF8C;
    case 0x7F28FF90u: goto label_7F28FF90;
    case 0x7F28FF94u: goto label_7F28FF94;
    case 0x7F28FF98u: goto label_7F28FF98;
    case 0x7F28FF9Cu: goto label_7F28FF9C;
    case 0x7F28FFA0u: goto label_7F28FFA0;
    case 0x7F28FFA4u: goto label_7F28FFA4;
    case 0x7F28FFA8u: goto label_7F28FFA8;
    case 0x7F28FFACu: goto label_7F28FFAC;
    case 0x7F28FFB0u: goto label_7F28FFB0;
    case 0x7F28FFB4u: goto label_7F28FFB4;
    case 0x7F28FFB8u: goto label_7F28FFB8;
    case 0x7F28FFBCu: goto label_7F28FFBC;
    case 0x7F28FFC0u: goto label_7F28FFC0;
    case 0x7F28FFC4u: goto label_7F28FFC4;
    case 0x7F28FFC8u: goto label_7F28FFC8;
    case 0x7F28FFCCu: goto label_7F28FFCC;
    case 0x7F28FFD0u: goto label_7F28FFD0;
    case 0x7F28FFD4u: goto label_7F28FFD4;
    case 0x7F28FFD8u: goto label_7F28FFD8;
    case 0x7F28FFDCu: goto label_7F28FFDC;
    case 0x7F28FFE0u: goto label_7F28FFE0;
    case 0x7F28FFE4u: goto label_7F28FFE4;
    case 0x7F28FFE8u: goto label_7F28FFE8;
    case 0x7F28FFECu: goto label_7F28FFEC;
    case 0x7F28FFF0u: goto label_7F28FFF0;
    case 0x7F28FFF4u: goto label_7F28FFF4;
    case 0x7F28FFF8u: goto label_7F28FFF8;
    case 0x7F28FFFCu: goto label_7F28FFFC;
    case 0x7F290000u: goto label_7F290000;
    case 0x7F290004u: goto label_7F290004;
    case 0x7F290008u: goto label_7F290008;
    case 0x7F29000Cu: goto label_7F29000C;
    case 0x7F290010u: goto label_7F290010;
    case 0x7F290014u: goto label_7F290014;
    case 0x7F290018u: goto label_7F290018;
    case 0x7F29001Cu: goto label_7F29001C;
    case 0x7F290020u: goto label_7F290020;
    case 0x7F290024u: goto label_7F290024;
    case 0x7F290028u: goto label_7F290028;
    case 0x7F29002Cu: goto label_7F29002C;
    case 0x7F290030u: goto label_7F290030;
    case 0x7F290034u: goto label_7F290034;
    case 0x7F290038u: goto label_7F290038;
    case 0x7F29003Cu: goto label_7F29003C;
    case 0x7F290040u: goto label_7F290040;
    case 0x7F290044u: goto label_7F290044;
    case 0x7F290048u: goto label_7F290048;
    case 0x7F29004Cu: goto label_7F29004C;
    case 0x7F290050u: goto label_7F290050;
    case 0x7F290054u: goto label_7F290054;
    case 0x7F290058u: goto label_7F290058;
    case 0x7F29005Cu: goto label_7F29005C;
    case 0x7F290060u: goto label_7F290060;
    case 0x7F290064u: goto label_7F290064;
    case 0x7F290068u: goto label_7F290068;
    case 0x7F29006Cu: goto label_7F29006C;
    case 0x7F290070u: goto label_7F290070;
    case 0x7F290074u: goto label_7F290074;
    case 0x7F290078u: goto label_7F290078;
    case 0x7F29007Cu: goto label_7F29007C;
    case 0x7F290080u: goto label_7F290080;
    case 0x7F290084u: goto label_7F290084;
    case 0x7F290088u: goto label_7F290088;
    case 0x7F29008Cu: goto label_7F29008C;
    case 0x7F290090u: goto label_7F290090;
    case 0x7F290094u: goto label_7F290094;
    case 0x7F290098u: goto label_7F290098;
    case 0x7F29009Cu: goto label_7F29009C;
    case 0x7F2900A0u: goto label_7F2900A0;
    case 0x7F2900A4u: goto label_7F2900A4;
    case 0x7F2900A8u: goto label_7F2900A8;
    case 0x7F2900ACu: goto label_7F2900AC;
    case 0x7F2900B0u: goto label_7F2900B0;
    case 0x7F2900B4u: goto label_7F2900B4;
    case 0x7F2900B8u: goto label_7F2900B8;
    case 0x7F2900BCu: goto label_7F2900BC;
    case 0x7F2900C0u: goto label_7F2900C0;
    case 0x7F2900C4u: goto label_7F2900C4;
    case 0x7F2900C8u: goto label_7F2900C8;
    case 0x7F2900CCu: goto label_7F2900CC;
    case 0x7F2900D0u: goto label_7F2900D0;
    case 0x7F2900D4u: goto label_7F2900D4;
    case 0x7F2900D8u: goto label_7F2900D8;
    case 0x7F2900DCu: goto label_7F2900DC;
    case 0x7F2900E0u: goto label_7F2900E0;
    case 0x7F2900E4u: goto label_7F2900E4;
    case 0x7F2900E8u: goto label_7F2900E8;
    default: return;
    }
label_7F28C0EC:
    ctx->pc = 0x7F28C0ECu;
    ctx->downcount -= 8;
    // 7F28C0EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C0F0:
    ctx->pc = 0x7F28C0F0u;
    // 7F28C0F0: addi    r4, r4, -6952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6952);

label_7F28C0F4:
    ctx->pc = 0x7F28C0F4u;
    // 7F28C0F4: lha     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C0F8:
    ctx->pc = 0x7F28C0F8u;
    // 7F28C0F8: sth     r0, 98(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C0FC:
    ctx->pc = 0x7F28C0FCu;
    // 7F28C0FC: sth     r0, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C100:
    ctx->pc = 0x7F28C100u;
    // 7F28C100: lwz     r0, -6976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C104:
    ctx->pc = 0x7F28C104u;
    // 7F28C104: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C108:
    ctx->pc = 0x7F28C108u;
    // 7F28C108: bc    12, 2, 0x7F28C124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C124;
        }
    }

label_7F28C10C:
    ctx->pc = 0x7F28C10Cu;
    ctx->downcount -= 6;
    // 7F28C10C: lha     r3, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C110:
    ctx->pc = 0x7F28C110u;
    // 7F28C110: addi    r0, r3, 2048
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F28C114:
    ctx->pc = 0x7F28C114u;
    // 7F28C114: sth     r0, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C118:
    ctx->pc = 0x7F28C118u;
    // 7F28C118: lha     r3, 98(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(98);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C11C:
    ctx->pc = 0x7F28C11Cu;
    // 7F28C11C: addi    r0, r3, 2048
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F28C120:
    ctx->pc = 0x7F28C120u;
    // 7F28C120: sth     r0, 98(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C124:
    ctx->pc = 0x7F28C124u;
    ctx->downcount -= 10;
    // 7F28C124: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C128:
    ctx->pc = 0x7F28C128u;
    // 7F28C128: addi    r4, r3, -6904
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6904);

label_7F28C12C:
    ctx->pc = 0x7F28C12Cu;
    // 7F28C12C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C130:
    ctx->pc = 0x7F28C130u;
    // 7F28C130: addi    r0, r3, 5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5);

label_7F28C134:
    ctx->pc = 0x7F28C134u;
    // 7F28C134: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C138:
    ctx->pc = 0x7F28C138u;
    // 7F28C138: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F28C13C:
    ctx->pc = 0x7F28C13Cu;
    // 7F28C13C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28C140:
    ctx->pc = 0x7F28C140u;
    // 7F28C140: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C144:
    ctx->pc = 0x7F28C144u;
    // 7F28C144: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28C148:
    ctx->pc = 0x7F28C148u;
    // 7F28C148: bl      0x7F291858
    {
            ctx->lr = 0x7F28C14Cu;
            ctx->pc = 0x7F291858u;
            return;
    }

label_7F28C14C:
    ctx->pc = 0x7F28C14Cu;
    ctx->downcount -= 16;
    // 7F28C14C: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28C150:
    ctx->pc = 0x7F28C150u;
    // 7F28C150: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C154:
    ctx->pc = 0x7F28C154u;
    // 7F28C154: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C158:
    ctx->pc = 0x7F28C158u;
    // 7F28C158: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F28C15C:
    ctx->pc = 0x7F28C15Cu;
    // 7F28C15C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C160:
    ctx->pc = 0x7F28C160u;
    ctx->downcount -= 20;
    // 7F28C160: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C164:
    ctx->pc = 0x7F28C164u;
    // 7F28C164: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C168:
    ctx->pc = 0x7F28C168u;
    // 7F28C168: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C16C:
    ctx->pc = 0x7F28C16Cu;
    // 7F28C16C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28C170:
    ctx->pc = 0x7F28C170u;
    // 7F28C170: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28C174:
    ctx->pc = 0x7F28C174u;
    // 7F28C174: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28C178:
    ctx->pc = 0x7F28C178u;
    // 7F28C178: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C17C:
    ctx->pc = 0x7F28C17Cu;
    // 7F28C17C: stw     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28C180:
    ctx->pc = 0x7F28C180u;
    // 7F28C180: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F28C184:
    ctx->pc = 0x7F28C184u;
    // 7F28C184: bl      0x7F29011C
    {
            ctx->lr = 0x7F28C188u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28C188:
    ctx->pc = 0x7F28C188u;
    ctx->downcount -= 5;
    // 7F28C188: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C18C:
    ctx->pc = 0x7F28C18Cu;
    // 7F28C18C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C190:
    ctx->pc = 0x7F28C190u;
    // 7F28C190: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C194:
    ctx->pc = 0x7F28C194u;
    // 7F28C194: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C198:
    ctx->pc = 0x7F28C198u;
    // 7F28C198: bc    12, 2, 0x7F28C1C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C1C4;
        }
    }

label_7F28C19C:
    ctx->pc = 0x7F28C19Cu;
    ctx->downcount -= 3;
    // 7F28C19C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F28C1A0:
    ctx->pc = 0x7F28C1A0u;
    // 7F28C1A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C1A4:
    ctx->pc = 0x7F28C1A4u;
    // 7F28C1A4: bl      0x7F29011C
    {
            ctx->lr = 0x7F28C1A8u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28C1A8:
    ctx->pc = 0x7F28C1A8u;
    ctx->downcount -= 5;
    // 7F28C1A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C1AC:
    ctx->pc = 0x7F28C1ACu;
    // 7F28C1AC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C1B0:
    ctx->pc = 0x7F28C1B0u;
    // 7F28C1B0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C1B4:
    ctx->pc = 0x7F28C1B4u;
    // 7F28C1B4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C1B8:
    ctx->pc = 0x7F28C1B8u;
    // 7F28C1B8: bc    4, 2, 0x7F28C1C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C1C4;
        }
    }

label_7F28C1BC:
    ctx->pc = 0x7F28C1BCu;
    ctx->downcount -= 2;
    // 7F28C1BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C1C0:
    ctx->pc = 0x7F28C1C0u;
    // 7F28C1C0: b       0x7F28C344
    {
            goto label_7F28C344;
    }

label_7F28C1C4:
    ctx->pc = 0x7F28C1C4u;
    ctx->downcount -= 4;
    // 7F28C1C4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F28C1C8:
    ctx->pc = 0x7F28C1C8u;
    // 7F28C1C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C1CC:
    ctx->pc = 0x7F28C1CCu;
    // 7F28C1CC: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F28C1D0:
    ctx->pc = 0x7F28C1D0u;
    // 7F28C1D0: bl      0x7F290054
    {
            ctx->lr = 0x7F28C1D4u;
            goto label_7F290054;
    }

label_7F28C1D4:
    ctx->pc = 0x7F28C1D4u;
    ctx->downcount -= 5;
    // 7F28C1D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C1D8:
    ctx->pc = 0x7F28C1D8u;
    // 7F28C1D8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C1DC:
    ctx->pc = 0x7F28C1DCu;
    // 7F28C1DC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C1E0:
    ctx->pc = 0x7F28C1E0u;
    // 7F28C1E0: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C1E4:
    ctx->pc = 0x7F28C1E4u;
    // 7F28C1E4: bc    12, 2, 0x7F28C1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C1FC;
        }
    }

label_7F28C1E8:
    ctx->pc = 0x7F28C1E8u;
    ctx->downcount -= 3;
    // 7F28C1E8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28C1EC:
    ctx->pc = 0x7F28C1ECu;
    // 7F28C1EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C1F0:
    ctx->pc = 0x7F28C1F0u;
    // 7F28C1F0: bl      0x7F29002C
    {
            ctx->lr = 0x7F28C1F4u;
            goto label_7F29002C;
    }

label_7F28C1F4:
    ctx->pc = 0x7F28C1F4u;
    ctx->downcount -= 2;
    // 7F28C1F4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F28C1F8:
    ctx->pc = 0x7F28C1F8u;
    // 7F28C1F8: b       0x7F28C344
    {
            goto label_7F28C344;
    }

label_7F28C1FC:
    ctx->pc = 0x7F28C1FCu;
    ctx->downcount -= 32;
    // 7F28C1FC: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28C200:
    ctx->pc = 0x7F28C200u;
    // 7F28C200: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28C204:
    ctx->pc = 0x7F28C204u;
    // 7F28C204: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28C208:
    ctx->pc = 0x7F28C208u;
    // 7F28C208: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C20C:
    ctx->pc = 0x7F28C20Cu;
    // 7F28C20C: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28C210:
    ctx->pc = 0x7F28C210u;
    // 7F28C210: addi    r6, r3, 26152
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(26152);

label_7F28C214:
    ctx->pc = 0x7F28C214u;
    // 7F28C214: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F28C214u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28C218:
    ctx->pc = 0x7F28C218u;
    // 7F28C218: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C21C:
    ctx->pc = 0x7F28C21Cu;
    // 7F28C21C: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F28C220:
    ctx->pc = 0x7F28C220u;
    // 7F28C220: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C224:
    ctx->pc = 0x7F28C224u;
    // 7F28C224: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C228:
    ctx->pc = 0x7F28C228u;
    // 7F28C228: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28C22C:
    ctx->pc = 0x7F28C22Cu;
    // 7F28C22C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28C22Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28C230:
    ctx->pc = 0x7F28C230u;
    // 7F28C230: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C234:
    ctx->pc = 0x7F28C234u;
    // 7F28C234: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28C234u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28C238:
    ctx->pc = 0x7F28C238u;
    // 7F28C238: stfsu     f0, -6896(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28C238u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6896);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
        ctx->gpr[4] = ea;
    }

label_7F28C23C:
    ctx->pc = 0x7F28C23Cu;
    // 7F28C23C: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C240:
    ctx->pc = 0x7F28C240u;
    // 7F28C240: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F28C244:
    ctx->pc = 0x7F28C244u;
    // 7F28C244: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C248:
    ctx->pc = 0x7F28C248u;
    // 7F28C248: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28C248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28C24C:
    ctx->pc = 0x7F28C24Cu;
    // 7F28C24C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28C24Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28C250:
    ctx->pc = 0x7F28C250u;
    // 7F28C250: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28C250u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28C254:
    ctx->pc = 0x7F28C254u;
    // 7F28C254: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C258:
    ctx->pc = 0x7F28C258u;
    // 7F28C258: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F28C25C:
    ctx->pc = 0x7F28C25Cu;
    // 7F28C25C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C260:
    ctx->pc = 0x7F28C260u;
    // 7F28C260: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28C260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28C264:
    ctx->pc = 0x7F28C264u;
    // 7F28C264: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28C264u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28C268:
    ctx->pc = 0x7F28C268u;
    // 7F28C268: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28C268u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28C26C:
    ctx->pc = 0x7F28C26Cu;
    // 7F28C26C: lwz     r0, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C270:
    ctx->pc = 0x7F28C270u;
    // 7F28C270: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C274:
    ctx->pc = 0x7F28C274u;
    // 7F28C274: stwu     r0, -6900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_7F28C278:
    ctx->pc = 0x7F28C278u;
    // 7F28C278: bc    4, 2, 0x7F28C284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C284;
        }
    }

label_7F28C27C:
    ctx->pc = 0x7F28C27Cu;
    ctx->downcount -= 2;
    // 7F28C27C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28C280:
    ctx->pc = 0x7F28C280u;
    // 7F28C280: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C284:
    ctx->pc = 0x7F28C284u;
    ctx->downcount -= 13;
    // 7F28C284: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28C288:
    ctx->pc = 0x7F28C288u;
    // 7F28C288: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28C28C:
    ctx->pc = 0x7F28C28Cu;
    // 7F28C28C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C290:
    ctx->pc = 0x7F28C290u;
    // 7F28C290: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C294:
    ctx->pc = 0x7F28C294u;
    // 7F28C294: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C298:
    ctx->pc = 0x7F28C298u;
    // 7F28C298: addi    r6, r4, -6912
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-6912);

label_7F28C29C:
    ctx->pc = 0x7F28C29Cu;
    // 7F28C29C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F28C2A0:
    ctx->pc = 0x7F28C2A0u;
    // 7F28C2A0: stw     r0, -6908(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6908);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C2A4:
    ctx->pc = 0x7F28C2A4u;
    // 7F28C2A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28C2A8:
    ctx->pc = 0x7F28C2A8u;
    // 7F28C2A8: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28C2AC:
    ctx->pc = 0x7F28C2ACu;
    // 7F28C2AC: lwz     r0, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C2B0:
    ctx->pc = 0x7F28C2B0u;
    // 7F28C2B0: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C2B4:
    ctx->pc = 0x7F28C2B4u;
    // 7F28C2B4: bl      0x7F290D0C
    {
            ctx->lr = 0x7F28C2B8u;
            ctx->pc = 0x7F290D0Cu;
            return;
    }

label_7F28C2B8:
    ctx->pc = 0x7F28C2B8u;
    ctx->downcount -= 4;
    // 7F28C2B8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C2BC:
    ctx->pc = 0x7F28C2BCu;
    // 7F28C2BC: stw     r3, -6916(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6916);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28C2C0:
    ctx->pc = 0x7F28C2C0u;
    // 7F28C2C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C2C4:
    ctx->pc = 0x7F28C2C4u;
    // 7F28C2C4: bl      0x7F2916FC
    {
            ctx->lr = 0x7F28C2C8u;
            ctx->pc = 0x7F2916FCu;
            return;
    }

label_7F28C2C8:
    ctx->pc = 0x7F28C2C8u;
    ctx->downcount -= 3;
    // 7F28C2C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C2CC:
    ctx->pc = 0x7F28C2CCu;
    // 7F28C2CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C2D0:
    ctx->pc = 0x7F28C2D0u;
    // 7F28C2D0: bl      0x7F291760
    {
            ctx->lr = 0x7F28C2D4u;
            ctx->pc = 0x7F291760u;
            return;
    }

label_7F28C2D4:
    ctx->pc = 0x7F28C2D4u;
    ctx->downcount -= 2;
    // 7F28C2D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C2D8:
    ctx->pc = 0x7F28C2D8u;
    // 7F28C2D8: bl      0x7F291490
    {
            ctx->lr = 0x7F28C2DCu;
            ctx->pc = 0x7F291490u;
            return;
    }

label_7F28C2DC:
    ctx->pc = 0x7F28C2DCu;
    ctx->downcount -= 2;
    // 7F28C2DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C2E0:
    ctx->pc = 0x7F28C2E0u;
    // 7F28C2E0: bl      0x7F291AD0
    {
            ctx->lr = 0x7F28C2E4u;
            ctx->pc = 0x7F291AD0u;
            return;
    }

label_7F28C2E4:
    ctx->pc = 0x7F28C2E4u;
    ctx->downcount -= 3;
    // 7F28C2E4: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F28C2E8:
    ctx->pc = 0x7F28C2E8u;
    // 7F28C2E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C2EC:
    ctx->pc = 0x7F28C2ECu;
    // 7F28C2EC: bl      0x7F2900A0
    {
            ctx->lr = 0x7F28C2F0u;
            goto label_7F2900A0;
    }

label_7F28C2F0:
    ctx->pc = 0x7F28C2F0u;
    ctx->downcount -= 3;
    // 7F28C2F0: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F28C2F4:
    ctx->pc = 0x7F28C2F4u;
    // 7F28C2F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C2F8:
    ctx->pc = 0x7F28C2F8u;
    // 7F28C2F8: bl      0x7F29002C
    {
            ctx->lr = 0x7F28C2FCu;
            goto label_7F29002C;
    }

label_7F28C2FC:
    ctx->pc = 0x7F28C2FCu;
    ctx->downcount -= 3;
    // 7F28C2FC: li      r4, 832
    ctx->gpr[4] = (u32)(s32)(832);

label_7F28C300:
    ctx->pc = 0x7F28C300u;
    // 7F28C300: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C304:
    ctx->pc = 0x7F28C304u;
    // 7F28C304: bl      0x7F29007C
    {
            ctx->lr = 0x7F28C308u;
            goto label_7F29007C;
    }

label_7F28C308:
    ctx->pc = 0x7F28C308u;
    ctx->downcount -= 3;
    // 7F28C308: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28C30C:
    ctx->pc = 0x7F28C30Cu;
    // 7F28C30C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C310:
    ctx->pc = 0x7F28C310u;
    // 7F28C310: bl      0x7F290004
    {
            ctx->lr = 0x7F28C314u;
            goto label_7F290004;
    }

label_7F28C314:
    ctx->pc = 0x7F28C314u;
    ctx->downcount -= 2;
    // 7F28C314: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F28C318:
    ctx->pc = 0x7F28C318u;
    // 7F28C318: bl      0x7F0180A0
    {
            ctx->lr = 0x7F28C31Cu;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F28C31C:
    ctx->pc = 0x7F28C31Cu;
    ctx->downcount -= 3;
    // 7F28C31C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C320:
    ctx->pc = 0x7F28C320u;
    // 7F28C320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C324:
    ctx->pc = 0x7F28C324u;
    // 7F28C324: bl      0x7F290A84
    {
            ctx->lr = 0x7F28C328u;
            ctx->pc = 0x7F290A84u;
            return;
    }

label_7F28C328:
    ctx->pc = 0x7F28C328u;
    ctx->downcount -= 4;
    // 7F28C328: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28C32C:
    ctx->pc = 0x7F28C32Cu;
    // 7F28C32C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28C330:
    ctx->pc = 0x7F28C330u;
    // 7F28C330: addi    r4, r4, -17992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17992);

label_7F28C334:
    ctx->pc = 0x7F28C334u;
    // 7F28C334: bl      0x7F290920
    {
            ctx->lr = 0x7F28C338u;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28C338:
    ctx->pc = 0x7F28C338u;
    ctx->downcount -= 3;
    // 7F28C338: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C33C:
    ctx->pc = 0x7F28C33Cu;
    // 7F28C33C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28C340:
    ctx->pc = 0x7F28C340u;
    // 7F28C340: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C344:
    ctx->pc = 0x7F28C344u;
    ctx->downcount -= 16;
    // 7F28C344: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28C348:
    ctx->pc = 0x7F28C348u;
    // 7F28C348: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C34C:
    ctx->pc = 0x7F28C34Cu;
    // 7F28C34C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C350:
    ctx->pc = 0x7F28C350u;
    // 7F28C350: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F28C354:
    ctx->pc = 0x7F28C354u;
    // 7F28C354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C358:
    ctx->pc = 0x7F28C358u;
    ctx->downcount -= 10;
    // 7F28C358: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C35C:
    ctx->pc = 0x7F28C35Cu;
    // 7F28C35C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C360:
    ctx->pc = 0x7F28C360u;
    // 7F28C360: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C364:
    ctx->pc = 0x7F28C364u;
    // 7F28C364: lis     r5, 32553
    ctx->gpr[5] = ((u32)(s32)(32553) << 16);

label_7F28C368:
    ctx->pc = 0x7F28C368u;
    // 7F28C368: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C36C:
    ctx->pc = 0x7F28C36Cu;
    // 7F28C36C: addi    r3, r3, -6880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6880);

label_7F28C370:
    ctx->pc = 0x7F28C370u;
    // 7F28C370: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_7F28C374:
    ctx->pc = 0x7F28C374u;
    // 7F28C374: addi    r5, r5, -16032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16032);

label_7F28C378:
    ctx->pc = 0x7F28C378u;
    // 7F28C378: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28C37C:
    ctx->pc = 0x7F28C37Cu;
    // 7F28C37C: bl      0x7F2910CC
    {
            ctx->lr = 0x7F28C380u;
            ctx->pc = 0x7F2910CCu;
            return;
    }

label_7F28C380:
    ctx->pc = 0x7F28C380u;
    ctx->downcount -= 6;
    // 7F28C380: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C384:
    ctx->pc = 0x7F28C384u;
    // 7F28C384: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C388:
    ctx->pc = 0x7F28C388u;
    // 7F28C388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C38C:
    ctx->pc = 0x7F28C38Cu;
    // 7F28C38C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C390:
    ctx->pc = 0x7F28C390u;
    // 7F28C390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C394:
    ctx->pc = 0x7F28C394u;
    ctx->downcount -= 4;
    // 7F28C394: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C398:
    ctx->pc = 0x7F28C398u;
    // 7F28C398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C39C:
    ctx->pc = 0x7F28C39Cu;
    // 7F28C39C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C3A0:
    ctx->pc = 0x7F28C3A0u;
    // 7F28C3A0: bl      0x7F28CC08
    {
            ctx->lr = 0x7F28C3A4u;
            goto label_7F28CC08;
    }

label_7F28C3A4:
    ctx->pc = 0x7F28C3A4u;
    ctx->downcount -= 6;
    // 7F28C3A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C3A8:
    ctx->pc = 0x7F28C3A8u;
    // 7F28C3A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C3AC:
    ctx->pc = 0x7F28C3ACu;
    // 7F28C3AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C3B0:
    ctx->pc = 0x7F28C3B0u;
    // 7F28C3B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C3B4:
    ctx->pc = 0x7F28C3B4u;
    // 7F28C3B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C3B8:
    ctx->pc = 0x7F28C3B8u;
    ctx->downcount -= 7;
    // 7F28C3B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C3BC:
    ctx->pc = 0x7F28C3BCu;
    // 7F28C3BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C3C0:
    ctx->pc = 0x7F28C3C0u;
    // 7F28C3C0: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C3C4:
    ctx->pc = 0x7F28C3C4u;
    // 7F28C3C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C3C8:
    ctx->pc = 0x7F28C3C8u;
    // 7F28C3C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28C3CC:
    ctx->pc = 0x7F28C3CCu;
    // 7F28C3CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28C3D0:
    ctx->pc = 0x7F28C3D0u;
    // 7F28C3D0: bc    4, 2, 0x7F28C3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C3EC;
        }
    }

label_7F28C3D4:
    ctx->pc = 0x7F28C3D4u;
    ctx->downcount -= 6;
    // 7F28C3D4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C3D8:
    ctx->pc = 0x7F28C3D8u;
    // 7F28C3D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28C3DC:
    ctx->pc = 0x7F28C3DCu;
    // 7F28C3DC: addi    r4, r4, -6856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6856);

label_7F28C3E0:
    ctx->pc = 0x7F28C3E0u;
    // 7F28C3E0: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F28C3E4:
    ctx->pc = 0x7F28C3E4u;
    // 7F28C3E4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C3E8:
    ctx->pc = 0x7F28C3E8u;
    // 7F28C3E8: bl      0x7F290164
    {
            ctx->lr = 0x7F28C3ECu;
            ctx->pc = 0x7F290164u;
            return;
    }

label_7F28C3EC:
    ctx->pc = 0x7F28C3ECu;
    ctx->downcount -= 3;
    // 7F28C3EC: li      r4, 768
    ctx->gpr[4] = (u32)(s32)(768);

label_7F28C3F0:
    ctx->pc = 0x7F28C3F0u;
    // 7F28C3F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C3F4:
    ctx->pc = 0x7F28C3F4u;
    // 7F28C3F4: bl      0x7F29007C
    {
            ctx->lr = 0x7F28C3F8u;
            goto label_7F29007C;
    }

label_7F28C3F8:
    ctx->pc = 0x7F28C3F8u;
    ctx->downcount -= 3;
    // 7F28C3F8: lis     r4, 1536
    ctx->gpr[4] = ((u32)(s32)(1536) << 16);

label_7F28C3FC:
    ctx->pc = 0x7F28C3FCu;
    // 7F28C3FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C400:
    ctx->pc = 0x7F28C400u;
    // 7F28C400: bl      0x7F290004
    {
            ctx->lr = 0x7F28C404u;
            goto label_7F290004;
    }

label_7F28C404:
    ctx->pc = 0x7F28C404u;
    ctx->downcount -= 3;
    // 7F28C404: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C408:
    ctx->pc = 0x7F28C408u;
    // 7F28C408: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_7F28C40C:
    ctx->pc = 0x7F28C40Cu;
    // 7F28C40C: bl      0x7F290DCC
    {
            ctx->lr = 0x7F28C410u;
            ctx->pc = 0x7F290DCCu;
            return;
    }

label_7F28C410:
    ctx->pc = 0x7F28C410u;
    ctx->downcount -= 2;
    // 7F28C410: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C414:
    ctx->pc = 0x7F28C414u;
    // 7F28C414: bc    12, 2, 0x7F28C460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C460;
        }
    }

label_7F28C418:
    ctx->pc = 0x7F28C418u;
    ctx->downcount -= 1;
    // 7F28C418: bl      0x7F2BBBE0
    {
            ctx->lr = 0x7F28C41Cu;
            ctx->pc = 0x7F2BBBE0u;
            return;
    }

label_7F28C41C:
    ctx->pc = 0x7F28C41Cu;
    ctx->downcount -= 2;
    // 7F28C41C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C420:
    ctx->pc = 0x7F28C420u;
    // 7F28C420: bc    4, 2, 0x7F28C460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C460;
        }
    }

label_7F28C424:
    ctx->pc = 0x7F28C424u;
    ctx->downcount -= 1;
    // 7F28C424: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F28C428u;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F28C428:
    ctx->pc = 0x7F28C428u;
    ctx->downcount -= 2;
    // 7F28C428: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C42C:
    ctx->pc = 0x7F28C42Cu;
    // 7F28C42C: bc    12, 2, 0x7F28C460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C460;
        }
    }

label_7F28C430:
    ctx->pc = 0x7F28C430u;
    ctx->downcount -= 3;
    // 7F28C430: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C434:
    ctx->pc = 0x7F28C434u;
    // 7F28C434: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F28C438:
    ctx->pc = 0x7F28C438u;
    // 7F28C438: bl      0x7F1E0BD0
    {
            ctx->lr = 0x7F28C43Cu;
            ctx->pc = 0x7F1E0BD0u;
            return;
    }

label_7F28C43C:
    ctx->pc = 0x7F28C43Cu;
    ctx->downcount -= 3;
    // 7F28C43C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28C440:
    ctx->pc = 0x7F28C440u;
    // 7F28C440: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C444:
    ctx->pc = 0x7F28C444u;
    // 7F28C444: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F28C448u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F28C448:
    ctx->pc = 0x7F28C448u;
    ctx->downcount -= 4;
    // 7F28C448: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F28C44C:
    ctx->pc = 0x7F28C44Cu;
    // 7F28C44C: li      r3, 1298
    ctx->gpr[3] = (u32)(s32)(1298);

label_7F28C450:
    ctx->pc = 0x7F28C450u;
    // 7F28C450: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F28C454:
    ctx->pc = 0x7F28C454u;
    // 7F28C454: bl      0x7F0117B8
    {
            ctx->lr = 0x7F28C458u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F28C458:
    ctx->pc = 0x7F28C458u;
    ctx->downcount -= 2;
    // 7F28C458: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28C45C:
    ctx->pc = 0x7F28C45Cu;
    // 7F28C45C: stw     r0, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C460:
    ctx->pc = 0x7F28C460u;
    ctx->downcount -= 3;
    // 7F28C460: lwz     r0, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C464:
    ctx->pc = 0x7F28C464u;
    // 7F28C464: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C468:
    ctx->pc = 0x7F28C468u;
    // 7F28C468: bc    4, 1, 0x7F28C4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4B0;
        }
    }

label_7F28C46C:
    ctx->pc = 0x7F28C46Cu;
    ctx->downcount -= 1;
    // 7F28C46C: bl      0x7F2BBBE0
    {
            ctx->lr = 0x7F28C470u;
            ctx->pc = 0x7F2BBBE0u;
            return;
    }

label_7F28C470:
    ctx->pc = 0x7F28C470u;
    ctx->downcount -= 2;
    // 7F28C470: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C474:
    ctx->pc = 0x7F28C474u;
    // 7F28C474: bc    4, 2, 0x7F28C4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4B0;
        }
    }

label_7F28C478:
    ctx->pc = 0x7F28C478u;
    ctx->downcount -= 1;
    // 7F28C478: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F28C47Cu;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F28C47C:
    ctx->pc = 0x7F28C47Cu;
    ctx->downcount -= 2;
    // 7F28C47C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C480:
    ctx->pc = 0x7F28C480u;
    // 7F28C480: bc    12, 2, 0x7F28C4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4B0;
        }
    }

label_7F28C484:
    ctx->pc = 0x7F28C484u;
    ctx->downcount -= 5;
    // 7F28C484: lwz     r3, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C488:
    ctx->pc = 0x7F28C488u;
    // 7F28C488: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F28C48C:
    ctx->pc = 0x7F28C48Cu;
    // 7F28C48C: cmpwi   r0, 60
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C490:
    ctx->pc = 0x7F28C490u;
    // 7F28C490: stw     r0, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C494:
    ctx->pc = 0x7F28C494u;
    // 7F28C494: bc    12, 0, 0x7F28C4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4B0;
        }
    }

label_7F28C498:
    ctx->pc = 0x7F28C498u;
    ctx->downcount -= 4;
    // 7F28C498: lwz     r5, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28C49C:
    ctx->pc = 0x7F28C49Cu;
    // 7F28C49C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F28C4A0:
    ctx->pc = 0x7F28C4A0u;
    // 7F28C4A0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F28C4A4:
    ctx->pc = 0x7F28C4A4u;
    // 7F28C4A4: bl      0x7F022090
    {
            ctx->lr = 0x7F28C4A8u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F28C4A8:
    ctx->pc = 0x7F28C4A8u;
    ctx->downcount -= 2;
    // 7F28C4A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C4AC:
    ctx->pc = 0x7F28C4ACu;
    // 7F28C4AC: stw     r0, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C4B0:
    ctx->pc = 0x7F28C4B0u;
    ctx->downcount -= 5;
    // 7F28C4B0: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C4B4:
    ctx->pc = 0x7F28C4B4u;
    // 7F28C4B4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C4B8:
    ctx->pc = 0x7F28C4B8u;
    // 7F28C4B8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C4BC:
    ctx->pc = 0x7F28C4BCu;
    // 7F28C4BC: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C4C0:
    ctx->pc = 0x7F28C4C0u;
    // 7F28C4C0: bc    4, 2, 0x7F28C4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4DC;
        }
    }

label_7F28C4C4:
    ctx->pc = 0x7F28C4C4u;
    ctx->downcount -= 1;
    // 7F28C4C4: bl      0x7F2BBBE0
    {
            ctx->lr = 0x7F28C4C8u;
            ctx->pc = 0x7F2BBBE0u;
            return;
    }

label_7F28C4C8:
    ctx->pc = 0x7F28C4C8u;
    ctx->downcount -= 2;
    // 7F28C4C8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C4CC:
    ctx->pc = 0x7F28C4CCu;
    // 7F28C4CC: bc    4, 2, 0x7F28C4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C4DC;
        }
    }

label_7F28C4D0:
    ctx->pc = 0x7F28C4D0u;
    ctx->downcount -= 1;
    // 7F28C4D0: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F28C4D4u;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F28C4D4:
    ctx->pc = 0x7F28C4D4u;
    ctx->downcount -= 2;
    // 7F28C4D4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C4D8:
    ctx->pc = 0x7F28C4D8u;
    // 7F28C4D8: bc    4, 2, 0x7F28C570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C570;
        }
    }

label_7F28C4DC:
    ctx->pc = 0x7F28C4DCu;
    ctx->downcount -= 5;
    // 7F28C4DC: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C4E0:
    ctx->pc = 0x7F28C4E0u;
    // 7F28C4E0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C4E4:
    ctx->pc = 0x7F28C4E4u;
    // 7F28C4E4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C4E8:
    ctx->pc = 0x7F28C4E8u;
    // 7F28C4E8: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C4EC:
    ctx->pc = 0x7F28C4ECu;
    // 7F28C4EC: bc    12, 2, 0x7F28C50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C50C;
        }
    }

label_7F28C4F0:
    ctx->pc = 0x7F28C4F0u;
    ctx->downcount -= 3;
    // 7F28C4F0: lwz     r0, 2672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C4F4:
    ctx->pc = 0x7F28C4F4u;
    // 7F28C4F4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C4F8:
    ctx->pc = 0x7F28C4F8u;
    // 7F28C4F8: bc    12, 2, 0x7F28C50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C50C;
        }
    }

label_7F28C4FC:
    ctx->pc = 0x7F28C4FCu;
    ctx->downcount -= 4;
    // 7F28C4FC: lwz     r5, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28C500:
    ctx->pc = 0x7F28C500u;
    // 7F28C500: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F28C504:
    ctx->pc = 0x7F28C504u;
    // 7F28C504: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F28C508:
    ctx->pc = 0x7F28C508u;
    // 7F28C508: bl      0x7F022090
    {
            ctx->lr = 0x7F28C50Cu;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F28C50C:
    ctx->pc = 0x7F28C50Cu;
    ctx->downcount -= 3;
    // 7F28C50C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F28C510:
    ctx->pc = 0x7F28C510u;
    // 7F28C510: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C514:
    ctx->pc = 0x7F28C514u;
    // 7F28C514: bl      0x7F290054
    {
            ctx->lr = 0x7F28C518u;
            goto label_7F290054;
    }

label_7F28C518:
    ctx->pc = 0x7F28C518u;
    ctx->downcount -= 5;
    // 7F28C518: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C51C:
    ctx->pc = 0x7F28C51Cu;
    // 7F28C51C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C520:
    ctx->pc = 0x7F28C520u;
    // 7F28C520: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C524:
    ctx->pc = 0x7F28C524u;
    // 7F28C524: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C528:
    ctx->pc = 0x7F28C528u;
    // 7F28C528: bc    12, 2, 0x7F28C540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C540;
        }
    }

label_7F28C52C:
    ctx->pc = 0x7F28C52Cu;
    ctx->downcount -= 4;
    // 7F28C52C: lis     r4, 32554
    ctx->gpr[4] = ((u32)(s32)(32554) << 16);

label_7F28C530:
    ctx->pc = 0x7F28C530u;
    // 7F28C530: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C534:
    ctx->pc = 0x7F28C534u;
    // 7F28C534: addi    r4, r4, 8152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8152);

label_7F28C538:
    ctx->pc = 0x7F28C538u;
    // 7F28C538: bl      0x7F290920
    {
            ctx->lr = 0x7F28C53Cu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28C53C:
    ctx->pc = 0x7F28C53Cu;
    ctx->downcount -= 1;
    // 7F28C53C: b       0x7F28C55C
    {
            goto label_7F28C55C;
    }

label_7F28C540:
    ctx->pc = 0x7F28C540u;
    ctx->downcount -= 7;
    // 7F28C540: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C544:
    ctx->pc = 0x7F28C544u;
    // 7F28C544: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28C548:
    ctx->pc = 0x7F28C548u;
    // 7F28C548: addi    r4, r3, 23964
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(23964);

label_7F28C54C:
    ctx->pc = 0x7F28C54Cu;
    // 7F28C54C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28C550:
    ctx->pc = 0x7F28C550u;
    // 7F28C550: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F28C554:
    ctx->pc = 0x7F28C554u;
    // 7F28C554: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C558:
    ctx->pc = 0x7F28C558u;
    // 7F28C558: bl      0x7F290920
    {
            ctx->lr = 0x7F28C55Cu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28C55C:
    ctx->pc = 0x7F28C55Cu;
    ctx->downcount -= 5;
    // 7F28C55C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C560:
    ctx->pc = 0x7F28C560u;
    // 7F28C560: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C564:
    ctx->pc = 0x7F28C564u;
    // 7F28C564: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C568:
    ctx->pc = 0x7F28C568u;
    // 7F28C568: stw     r0, -6864(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C56C:
    ctx->pc = 0x7F28C56Cu;
    // 7F28C56C: stw     r0, -6860(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C570:
    ctx->pc = 0x7F28C570u;
    ctx->downcount -= 6;
    // 7F28C570: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C574:
    ctx->pc = 0x7F28C574u;
    // 7F28C574: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28C578:
    ctx->pc = 0x7F28C578u;
    // 7F28C578: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C57C:
    ctx->pc = 0x7F28C57Cu;
    // 7F28C57C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C580:
    ctx->pc = 0x7F28C580u;
    // 7F28C580: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C584:
    ctx->pc = 0x7F28C584u;
    ctx->downcount -= 21;
    // 7F28C584: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C588:
    ctx->pc = 0x7F28C588u;
    // 7F28C588: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C58C:
    ctx->pc = 0x7F28C58Cu;
    // 7F28C58C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F28C590:
    ctx->pc = 0x7F28C590u;
    // 7F28C590: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C594:
    ctx->pc = 0x7F28C594u;
    // 7F28C594: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28C598:
    ctx->pc = 0x7F28C598u;
    // 7F28C598: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28C59C:
    ctx->pc = 0x7F28C59Cu;
    // 7F28C59C: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F28C5A0:
    ctx->pc = 0x7F28C5A0u;
    // 7F28C5A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C5A4:
    ctx->pc = 0x7F28C5A4u;
    // 7F28C5A4: lha     r0, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C5A8:
    ctx->pc = 0x7F28C5A8u;
    // 7F28C5A8: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C5AC:
    ctx->pc = 0x7F28C5ACu;
    // 7F28C5AC: bc    4, 2, 0x7F28C5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C5D4;
        }
    }

label_7F28C5B0:
    ctx->pc = 0x7F28C5B0u;
    ctx->downcount -= 3;
    // 7F28C5B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C5B4:
    ctx->pc = 0x7F28C5B4u;
    // 7F28C5B4: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28C5B8:
    ctx->pc = 0x7F28C5B8u;
    // 7F28C5B8: bl      0x7F290054
    {
            ctx->lr = 0x7F28C5BCu;
            goto label_7F290054;
    }

label_7F28C5BC:
    ctx->pc = 0x7F28C5BCu;
    ctx->downcount -= 5;
    // 7F28C5BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C5C0:
    ctx->pc = 0x7F28C5C0u;
    // 7F28C5C0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C5C4:
    ctx->pc = 0x7F28C5C4u;
    // 7F28C5C4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C5C8:
    ctx->pc = 0x7F28C5C8u;
    // 7F28C5C8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C5CC:
    ctx->pc = 0x7F28C5CCu;
    // 7F28C5CC: bc    4, 2, 0x7F28C5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C5D4;
        }
    }

label_7F28C5D0:
    ctx->pc = 0x7F28C5D0u;
    ctx->downcount -= 1;
    // 7F28C5D0: bl      0x7F28C8CC
    {
            ctx->lr = 0x7F28C5D4u;
            goto label_7F28C8CC;
    }

label_7F28C5D4:
    ctx->pc = 0x7F28C5D4u;
    ctx->downcount -= 5;
    // 7F28C5D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C5D8:
    ctx->pc = 0x7F28C5D8u;
    // 7F28C5D8: addi    r5, r3, -6864
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6864);

label_7F28C5DC:
    ctx->pc = 0x7F28C5DCu;
    // 7F28C5DC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C5E0:
    ctx->pc = 0x7F28C5E0u;
    // 7F28C5E0: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C5E4:
    ctx->pc = 0x7F28C5E4u;
    // 7F28C5E4: bc    4, 2, 0x7F28C618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C618;
        }
    }

label_7F28C5E8:
    ctx->pc = 0x7F28C5E8u;
    ctx->downcount -= 5;
    // 7F28C5E8: lis     r3, 32553
    ctx->gpr[3] = ((u32)(s32)(32553) << 16);

label_7F28C5EC:
    ctx->pc = 0x7F28C5ECu;
    // 7F28C5EC: lwz     r4, 2628(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2628);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C5F0:
    ctx->pc = 0x7F28C5F0u;
    // 7F28C5F0: addi    r0, r3, -15432
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-15432);

label_7F28C5F4:
    ctx->pc = 0x7F28C5F4u;
    // 7F28C5F4: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C5F8:
    ctx->pc = 0x7F28C5F8u;
    // 7F28C5F8: bc    12, 2, 0x7F28C618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C618;
        }
    }

label_7F28C5FC:
    ctx->pc = 0x7F28C5FCu;
    ctx->downcount -= 7;
    // 7F28C5FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C600:
    ctx->pc = 0x7F28C600u;
    // 7F28C600: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C604:
    ctx->pc = 0x7F28C604u;
    // 7F28C604: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C608:
    ctx->pc = 0x7F28C608u;
    // 7F28C608: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C60C:
    ctx->pc = 0x7F28C60Cu;
    // 7F28C60C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C610:
    ctx->pc = 0x7F28C610u;
    // 7F28C610: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C614:
    ctx->pc = 0x7F28C614u;
    // 7F28C614: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C618:
    ctx->pc = 0x7F28C618u;
    ctx->downcount -= 3;
    // 7F28C618: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C61C:
    ctx->pc = 0x7F28C61Cu;
    // 7F28C61C: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28C620:
    ctx->pc = 0x7F28C620u;
    // 7F28C620: bl      0x7F290054
    {
            ctx->lr = 0x7F28C624u;
            goto label_7F290054;
    }

label_7F28C624:
    ctx->pc = 0x7F28C624u;
    ctx->downcount -= 5;
    // 7F28C624: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C628:
    ctx->pc = 0x7F28C628u;
    // 7F28C628: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C62C:
    ctx->pc = 0x7F28C62Cu;
    // 7F28C62C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C630:
    ctx->pc = 0x7F28C630u;
    // 7F28C630: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C634:
    ctx->pc = 0x7F28C634u;
    // 7F28C634: bc    4, 2, 0x7F28C660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C660;
        }
    }

label_7F28C638:
    ctx->pc = 0x7F28C638u;
    ctx->downcount -= 5;
    // 7F28C638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C63C:
    ctx->pc = 0x7F28C63Cu;
    // 7F28C63C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C640:
    ctx->pc = 0x7F28C640u;
    // 7F28C640: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F28C644:
    ctx->pc = 0x7F28C644u;
    // 7F28C644: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F28C648:
    ctx->pc = 0x7F28C648u;
    // 7F28C648: bl      0x7F012018
    {
            ctx->lr = 0x7F28C64Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28C64C:
    ctx->pc = 0x7F28C64Cu;
    ctx->downcount -= 5;
    // 7F28C64C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C650:
    ctx->pc = 0x7F28C650u;
    // 7F28C650: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28C654:
    ctx->pc = 0x7F28C654u;
    // 7F28C654: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28C658:
    ctx->pc = 0x7F28C658u;
    // 7F28C658: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28C65C:
    ctx->pc = 0x7F28C65Cu;
    // 7F28C65C: bc    12, 2, 0x7F28C674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C674;
        }
    }

label_7F28C660:
    ctx->pc = 0x7F28C660u;
    ctx->downcount -= 5;
    // 7F28C660: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C664:
    ctx->pc = 0x7F28C664u;
    // 7F28C664: addi    r5, r3, -6864
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6864);

label_7F28C668:
    ctx->pc = 0x7F28C668u;
    // 7F28C668: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C66C:
    ctx->pc = 0x7F28C66Cu;
    // 7F28C66C: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C670:
    ctx->pc = 0x7F28C670u;
    // 7F28C670: bc    4, 2, 0x7F28C67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C67C;
        }
    }

label_7F28C674:
    ctx->pc = 0x7F28C674u;
    ctx->downcount -= 2;
    // 7F28C674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C678:
    ctx->pc = 0x7F28C678u;
    // 7F28C678: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C67C:
    ctx->pc = 0x7F28C67Cu;
    ctx->downcount -= 3;
    // 7F28C67C: lwz     r0, 2648(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C680:
    ctx->pc = 0x7F28C680u;
    // 7F28C680: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C684:
    ctx->pc = 0x7F28C684u;
    // 7F28C684: bc    12, 2, 0x7F28C6A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C6A4;
        }
    }

label_7F28C688:
    ctx->pc = 0x7F28C688u;
    ctx->downcount -= 7;
    // 7F28C688: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C68C:
    ctx->pc = 0x7F28C68Cu;
    // 7F28C68C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C690:
    ctx->pc = 0x7F28C690u;
    // 7F28C690: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C694:
    ctx->pc = 0x7F28C694u;
    // 7F28C694: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C698:
    ctx->pc = 0x7F28C698u;
    // 7F28C698: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C69C:
    ctx->pc = 0x7F28C69Cu;
    // 7F28C69C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C6A0:
    ctx->pc = 0x7F28C6A0u;
    // 7F28C6A0: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C6A4:
    ctx->pc = 0x7F28C6A4u;
    ctx->downcount -= 6;
    // 7F28C6A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28C6A8:
    ctx->pc = 0x7F28C6A8u;
    // 7F28C6A8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28C6AC:
    ctx->pc = 0x7F28C6ACu;
    // 7F28C6AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C6B0:
    ctx->pc = 0x7F28C6B0u;
    // 7F28C6B0: lha     r0, 318(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(318);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C6B4:
    ctx->pc = 0x7F28C6B4u;
    // 7F28C6B4: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C6B8:
    ctx->pc = 0x7F28C6B8u;
    // 7F28C6B8: bc    4, 2, 0x7F28C6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C6D8;
        }
    }

label_7F28C6BC:
    ctx->pc = 0x7F28C6BCu;
    ctx->downcount -= 7;
    // 7F28C6BC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C6C0:
    ctx->pc = 0x7F28C6C0u;
    // 7F28C6C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C6C4:
    ctx->pc = 0x7F28C6C4u;
    // 7F28C6C4: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C6C8:
    ctx->pc = 0x7F28C6C8u;
    // 7F28C6C8: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C6CC:
    ctx->pc = 0x7F28C6CCu;
    // 7F28C6CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C6D0:
    ctx->pc = 0x7F28C6D0u;
    // 7F28C6D0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C6D4:
    ctx->pc = 0x7F28C6D4u;
    // 7F28C6D4: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C6D8:
    ctx->pc = 0x7F28C6D8u;
    ctx->downcount -= 4;
    // 7F28C6D8: lwz     r31, 2624(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2624);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28C6DC:
    ctx->pc = 0x7F28C6DCu;
    // 7F28C6DC: addis   r0, r31, -66
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-66) << 16);

label_7F28C6E0:
    ctx->pc = 0x7F28C6E0u;
    // 7F28C6E0: cmplwi  r0, 0xD644
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xD644u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C6E4:
    ctx->pc = 0x7F28C6E4u;
    // 7F28C6E4: bc    12, 2, 0x7F28C71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C71C;
        }
    }

label_7F28C6E8:
    ctx->pc = 0x7F28C6E8u;
    ctx->downcount -= 3;
    // 7F28C6E8: addis   r0, r31, -30
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-30) << 16);

label_7F28C6EC:
    ctx->pc = 0x7F28C6ECu;
    // 7F28C6EC: cmplwi  r0, 0x7764
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x7764u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C6F0:
    ctx->pc = 0x7F28C6F0u;
    // 7F28C6F0: bc    12, 2, 0x7F28C71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C71C;
        }
    }

label_7F28C6F4:
    ctx->pc = 0x7F28C6F4u;
    ctx->downcount -= 3;
    // 7F28C6F4: addis   r0, r31, -165
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-165) << 16);

label_7F28C6F8:
    ctx->pc = 0x7F28C6F8u;
    // 7F28C6F8: cmplwi  r0, 0xD059
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xD059u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C6FC:
    ctx->pc = 0x7F28C6FCu;
    // 7F28C6FC: bc    12, 2, 0x7F28C71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C71C;
        }
    }

label_7F28C700:
    ctx->pc = 0x7F28C700u;
    ctx->downcount -= 7;
    // 7F28C700: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C704:
    ctx->pc = 0x7F28C704u;
    // 7F28C704: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C708:
    ctx->pc = 0x7F28C708u;
    // 7F28C708: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C70C:
    ctx->pc = 0x7F28C70Cu;
    // 7F28C70C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C710:
    ctx->pc = 0x7F28C710u;
    // 7F28C710: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C714:
    ctx->pc = 0x7F28C714u;
    // 7F28C714: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C718:
    ctx->pc = 0x7F28C718u;
    // 7F28C718: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C71C:
    ctx->pc = 0x7F28C71Cu;
    ctx->downcount -= 2;
    // 7F28C71C: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F28C720:
    ctx->pc = 0x7F28C720u;
    // 7F28C720: bl      0x7F012050
    {
            ctx->lr = 0x7F28C724u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F28C724:
    ctx->pc = 0x7F28C724u;
    ctx->downcount -= 2;
    // 7F28C724: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C728:
    ctx->pc = 0x7F28C728u;
    // 7F28C728: bc    12, 2, 0x7F28C750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C750;
        }
    }

label_7F28C72C:
    ctx->pc = 0x7F28C72Cu;
    ctx->downcount -= 9;
    // 7F28C72C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C730:
    ctx->pc = 0x7F28C730u;
    // 7F28C730: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C734:
    ctx->pc = 0x7F28C734u;
    // 7F28C734: addi    r5, r4, -6864
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6864);

label_7F28C738:
    ctx->pc = 0x7F28C738u;
    // 7F28C738: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C73C:
    ctx->pc = 0x7F28C73Cu;
    // 7F28C73C: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C740:
    ctx->pc = 0x7F28C740u;
    // 7F28C740: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C744:
    ctx->pc = 0x7F28C744u;
    // 7F28C744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C748:
    ctx->pc = 0x7F28C748u;
    // 7F28C748: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C74C:
    ctx->pc = 0x7F28C74Cu;
    // 7F28C74C: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C750:
    ctx->pc = 0x7F28C750u;
    ctx->downcount -= 5;
    // 7F28C750: addis   r0, r31, -66
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-66) << 16);

label_7F28C754:
    ctx->pc = 0x7F28C754u;
    // 7F28C754: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C758:
    ctx->pc = 0x7F28C758u;
    // 7F28C758: cmplwi  r0, 0xD644
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xD644u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C75C:
    ctx->pc = 0x7F28C75Cu;
    // 7F28C75C: lwz     r30, -6308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6308);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28C760:
    ctx->pc = 0x7F28C760u;
    // 7F28C760: bc    4, 2, 0x7F28C79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C79C;
        }
    }

label_7F28C764:
    ctx->pc = 0x7F28C764u;
    ctx->downcount -= 5;
    // 7F28C764: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C768:
    ctx->pc = 0x7F28C768u;
    // 7F28C768: lwz     r4, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C76C:
    ctx->pc = 0x7F28C76Cu;
    // 7F28C76C: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C770:
    ctx->pc = 0x7F28C770u;
    // 7F28C770: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C774:
    ctx->pc = 0x7F28C774u;
    // 7F28C774: bc    12, 2, 0x7F28C79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C79C;
        }
    }

label_7F28C778:
    ctx->pc = 0x7F28C778u;
    ctx->downcount -= 9;
    // 7F28C778: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C77C:
    ctx->pc = 0x7F28C77Cu;
    // 7F28C77C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C780:
    ctx->pc = 0x7F28C780u;
    // 7F28C780: addi    r5, r4, -6864
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6864);

label_7F28C784:
    ctx->pc = 0x7F28C784u;
    // 7F28C784: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C788:
    ctx->pc = 0x7F28C788u;
    // 7F28C788: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C78C:
    ctx->pc = 0x7F28C78Cu;
    // 7F28C78C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C790:
    ctx->pc = 0x7F28C790u;
    // 7F28C790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C794:
    ctx->pc = 0x7F28C794u;
    // 7F28C794: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C798:
    ctx->pc = 0x7F28C798u;
    // 7F28C798: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C79C:
    ctx->pc = 0x7F28C79Cu;
    ctx->downcount -= 4;
    // 7F28C79C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C7A0:
    ctx->pc = 0x7F28C7A0u;
    // 7F28C7A0: lwz     r0, -6864(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C7A4:
    ctx->pc = 0x7F28C7A4u;
    // 7F28C7A4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C7A8:
    ctx->pc = 0x7F28C7A8u;
    // 7F28C7A8: bc    4, 2, 0x7F28C864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C864;
        }
    }

label_7F28C7AC:
    ctx->pc = 0x7F28C7ACu;
    ctx->downcount -= 11;
    // 7F28C7AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C7B0:
    ctx->pc = 0x7F28C7B0u;
    // 7F28C7B0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28C7B4:
    ctx->pc = 0x7F28C7B4u;
    // 7F28C7B4: addi    r5, r4, -6860
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6860);

label_7F28C7B8:
    ctx->pc = 0x7F28C7B8u;
    // 7F28C7B8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C7BC:
    ctx->pc = 0x7F28C7BCu;
    // 7F28C7BC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28C7C0:
    ctx->pc = 0x7F28C7C0u;
    // 7F28C7C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C7C4:
    ctx->pc = 0x7F28C7C4u;
    // 7F28C7C4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F28C7C8:
    ctx->pc = 0x7F28C7C8u;
    // 7F28C7C8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28C7CC:
    ctx->pc = 0x7F28C7CCu;
    // 7F28C7CC: lha     r0, 302(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(302);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C7D0:
    ctx->pc = 0x7F28C7D0u;
    // 7F28C7D0: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C7D4:
    ctx->pc = 0x7F28C7D4u;
    // 7F28C7D4: bc    12, 0, 0x7F28C864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C864;
        }
    }

label_7F28C7D8:
    ctx->pc = 0x7F28C7D8u;
    ctx->downcount -= 3;
    // 7F28C7D8: li      r4, 768
    ctx->gpr[4] = (u32)(s32)(768);

label_7F28C7DC:
    ctx->pc = 0x7F28C7DCu;
    // 7F28C7DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C7E0:
    ctx->pc = 0x7F28C7E0u;
    // 7F28C7E0: bl      0x7F29007C
    {
            ctx->lr = 0x7F28C7E4u;
            goto label_7F29007C;
    }

label_7F28C7E4:
    ctx->pc = 0x7F28C7E4u;
    ctx->downcount -= 3;
    // 7F28C7E4: lis     r4, 1536
    ctx->gpr[4] = ((u32)(s32)(1536) << 16);

label_7F28C7E8:
    ctx->pc = 0x7F28C7E8u;
    // 7F28C7E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C7EC:
    ctx->pc = 0x7F28C7ECu;
    // 7F28C7EC: bl      0x7F290004
    {
            ctx->lr = 0x7F28C7F0u;
            goto label_7F290004;
    }

label_7F28C7F0:
    ctx->pc = 0x7F28C7F0u;
    ctx->downcount -= 3;
    // 7F28C7F0: addis   r0, r31, -165
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-165) << 16);

label_7F28C7F4:
    ctx->pc = 0x7F28C7F4u;
    // 7F28C7F4: cmplwi  r0, 0xD059
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xD059u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C7F8:
    ctx->pc = 0x7F28C7F8u;
    // 7F28C7F8: bc    4, 2, 0x7F28C808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C808;
        }
    }

label_7F28C7FC:
    ctx->pc = 0x7F28C7FCu;
    ctx->downcount -= 3;
    // 7F28C7FC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C800:
    ctx->pc = 0x7F28C800u;
    // 7F28C800: lha     r5, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C804:
    ctx->pc = 0x7F28C804u;
    // 7F28C804: b       0x7F28C81C
    {
            goto label_7F28C81C;
    }

label_7F28C808:
    ctx->pc = 0x7F28C808u;
    ctx->downcount -= 5;
    // 7F28C808: lha     r0, 3904(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C80C:
    ctx->pc = 0x7F28C80Cu;
    // 7F28C80C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C810:
    ctx->pc = 0x7F28C810u;
    // 7F28C810: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F28C814:
    ctx->pc = 0x7F28C814u;
    // 7F28C814: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28C818:
    ctx->pc = 0x7F28C818u;
    // 7F28C818: lha     r5, 118(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(118);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C81C:
    ctx->pc = 0x7F28C81Cu;
    ctx->downcount -= 8;
    // 7F28C81C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C820:
    ctx->pc = 0x7F28C820u;
    // 7F28C820: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F28C824:
    ctx->pc = 0x7F28C824u;
    // 7F28C824: addi    r4, r3, -6856
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6856);

label_7F28C828:
    ctx->pc = 0x7F28C828u;
    // 7F28C828: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28C82C:
    ctx->pc = 0x7F28C82Cu;
    // 7F28C82C: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28C830:
    ctx->pc = 0x7F28C830u;
    // 7F28C830: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C834:
    ctx->pc = 0x7F28C834u;
    // 7F28C834: stw     r0, 2484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C838:
    ctx->pc = 0x7F28C838u;
    // 7F28C838: bl      0x7F290A84
    {
            ctx->lr = 0x7F28C83Cu;
            ctx->pc = 0x7F290A84u;
            return;
    }

label_7F28C83C:
    ctx->pc = 0x7F28C83Cu;
    ctx->downcount -= 4;
    // 7F28C83C: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28C840:
    ctx->pc = 0x7F28C840u;
    // 7F28C840: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28C844:
    ctx->pc = 0x7F28C844u;
    // 7F28C844: addi    r4, r4, -15432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15432);

label_7F28C848:
    ctx->pc = 0x7F28C848u;
    // 7F28C848: bl      0x7F290920
    {
            ctx->lr = 0x7F28C84Cu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28C84C:
    ctx->pc = 0x7F28C84Cu;
    ctx->downcount -= 6;
    // 7F28C84C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C850:
    ctx->pc = 0x7F28C850u;
    // 7F28C850: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28C854:
    ctx->pc = 0x7F28C854u;
    // 7F28C854: addi    r4, r3, -6864
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6864);

label_7F28C858:
    ctx->pc = 0x7F28C858u;
    // 7F28C858: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28C85C:
    ctx->pc = 0x7F28C85Cu;
    // 7F28C85C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C860:
    ctx->pc = 0x7F28C860u;
    // 7F28C860: b       0x7F28C868
    {
            goto label_7F28C868;
    }

label_7F28C864:
    ctx->pc = 0x7F28C864u;
    ctx->downcount -= 1;
    // 7F28C864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C868:
    ctx->pc = 0x7F28C868u;
    ctx->downcount -= 16;
    // 7F28C868: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28C86C:
    ctx->pc = 0x7F28C86Cu;
    // 7F28C86C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C870:
    ctx->pc = 0x7F28C870u;
    // 7F28C870: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C874:
    ctx->pc = 0x7F28C874u;
    // 7F28C874: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28C878:
    ctx->pc = 0x7F28C878u;
    // 7F28C878: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C87C:
    ctx->pc = 0x7F28C87Cu;
    ctx->downcount -= 8;
    // 7F28C87C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C880:
    ctx->pc = 0x7F28C880u;
    // 7F28C880: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C884:
    ctx->pc = 0x7F28C884u;
    // 7F28C884: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C888:
    ctx->pc = 0x7F28C888u;
    // 7F28C888: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28C88C:
    ctx->pc = 0x7F28C88Cu;
    // 7F28C88C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C890:
    ctx->pc = 0x7F28C890u;
    // 7F28C890: addi    r3, r3, -6852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6852);

label_7F28C894:
    ctx->pc = 0x7F28C894u;
    // 7F28C894: addi    r4, r4, -14972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14972);

label_7F28C898:
    ctx->pc = 0x7F28C898u;
    // 7F28C898: bl      0x7F2910F0
    {
            ctx->lr = 0x7F28C89Cu;
            ctx->pc = 0x7F2910F0u;
            return;
    }

label_7F28C89C:
    ctx->pc = 0x7F28C89Cu;
    ctx->downcount -= 13;
    // 7F28C89C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C8A0:
    ctx->pc = 0x7F28C8A0u;
    // 7F28C8A0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28C8A4:
    ctx->pc = 0x7F28C8A4u;
    // 7F28C8A4: addi    r5, r4, -6864
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6864);

label_7F28C8A8:
    ctx->pc = 0x7F28C8A8u;
    // 7F28C8A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C8AC:
    ctx->pc = 0x7F28C8ACu;
    // 7F28C8AC: addi    r4, r3, -6860
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6860);

label_7F28C8B0:
    ctx->pc = 0x7F28C8B0u;
    // 7F28C8B0: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C8B4:
    ctx->pc = 0x7F28C8B4u;
    // 7F28C8B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C8B8:
    ctx->pc = 0x7F28C8B8u;
    // 7F28C8B8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C8BC:
    ctx->pc = 0x7F28C8BCu;
    // 7F28C8BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C8C0:
    ctx->pc = 0x7F28C8C0u;
    // 7F28C8C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C8C4:
    ctx->pc = 0x7F28C8C4u;
    // 7F28C8C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C8C8:
    ctx->pc = 0x7F28C8C8u;
    // 7F28C8C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C8CC:
    ctx->pc = 0x7F28C8CCu;
    ctx->downcount -= 8;
    // 7F28C8CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C8D0:
    ctx->pc = 0x7F28C8D0u;
    // 7F28C8D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C8D4:
    ctx->pc = 0x7F28C8D4u;
    // 7F28C8D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C8D8:
    ctx->pc = 0x7F28C8D8u;
    // 7F28C8D8: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28C8DC:
    ctx->pc = 0x7F28C8DCu;
    // 7F28C8DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C8E0:
    ctx->pc = 0x7F28C8E0u;
    // 7F28C8E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28C8E4:
    ctx->pc = 0x7F28C8E4u;
    // 7F28C8E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28C8E8:
    ctx->pc = 0x7F28C8E8u;
    // 7F28C8E8: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F28C8ECu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F28C8EC:
    ctx->pc = 0x7F28C8ECu;
    ctx->downcount -= 6;
    // 7F28C8EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28C8F0:
    ctx->pc = 0x7F28C8F0u;
    // 7F28C8F0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28C8F4:
    ctx->pc = 0x7F28C8F4u;
    // 7F28C8F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C8F8:
    ctx->pc = 0x7F28C8F8u;
    // 7F28C8F8: lha     r0, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28C8FC:
    ctx->pc = 0x7F28C8FCu;
    // 7F28C8FC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C900:
    ctx->pc = 0x7F28C900u;
    // 7F28C900: bc    4, 2, 0x7F28C90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28C90C;
        }
    }

label_7F28C904:
    ctx->pc = 0x7F28C904u;
    ctx->downcount -= 2;
    // 7F28C904: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C908:
    ctx->pc = 0x7F28C908u;
    // 7F28C908: stw     r0, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C90C:
    ctx->pc = 0x7F28C90Cu;
    ctx->downcount -= 10;
    // 7F28C90C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28C910:
    ctx->pc = 0x7F28C910u;
    // 7F28C910: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28C914:
    ctx->pc = 0x7F28C914u;
    // 7F28C914: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28C918:
    ctx->pc = 0x7F28C918u;
    // 7F28C918: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C91C:
    ctx->pc = 0x7F28C91Cu;
    // 7F28C91C: sth     r0, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C920:
    ctx->pc = 0x7F28C920u;
    // 7F28C920: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C924:
    ctx->pc = 0x7F28C924u;
    // 7F28C924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C928:
    ctx->pc = 0x7F28C928u;
    // 7F28C928: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C92C:
    ctx->pc = 0x7F28C92Cu;
    // 7F28C92C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C930:
    ctx->pc = 0x7F28C930u;
    ctx->downcount -= 5;
    // 7F28C930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C934:
    ctx->pc = 0x7F28C934u;
    // 7F28C934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C938:
    ctx->pc = 0x7F28C938u;
    // 7F28C938: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F28C93C:
    ctx->pc = 0x7F28C93Cu;
    // 7F28C93C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C940:
    ctx->pc = 0x7F28C940u;
    // 7F28C940: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28C944u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28C944:
    ctx->pc = 0x7F28C944u;
    ctx->downcount -= 2;
    // 7F28C944: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C948:
    ctx->pc = 0x7F28C948u;
    // 7F28C948: bc    12, 2, 0x7F28C964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28C964;
        }
    }

label_7F28C94C:
    ctx->pc = 0x7F28C94Cu;
    ctx->downcount -= 1;
    // 7F28C94C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28C950u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28C950:
    ctx->pc = 0x7F28C950u;
    ctx->downcount -= 7;
    // 7F28C950: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F28C954:
    ctx->pc = 0x7F28C954u;
    // 7F28C954: mulli   r0, r3, 60
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)60);

label_7F28C958:
    ctx->pc = 0x7F28C958u;
    // 7F28C958: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F28C95C:
    ctx->pc = 0x7F28C95Cu;
    // 7F28C95C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28C960:
    ctx->pc = 0x7F28C960u;
    // 7F28C960: sth     r0, 302(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(302);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C964:
    ctx->pc = 0x7F28C964u;
    ctx->downcount -= 1;
    // 7F28C964: bl      0x7F28C8CC
    {
            ctx->lr = 0x7F28C968u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28C8CCu;
                return;
            }
            goto label_7F28C8CC;
    }

label_7F28C968:
    ctx->pc = 0x7F28C968u;
    ctx->downcount -= 6;
    // 7F28C968: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C96C:
    ctx->pc = 0x7F28C96Cu;
    // 7F28C96C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C970:
    ctx->pc = 0x7F28C970u;
    // 7F28C970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C974:
    ctx->pc = 0x7F28C974u;
    // 7F28C974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C978:
    ctx->pc = 0x7F28C978u;
    // 7F28C978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C97C:
    ctx->pc = 0x7F28C97Cu;
    ctx->downcount -= 8;
    // 7F28C97C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C980:
    ctx->pc = 0x7F28C980u;
    // 7F28C980: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C984:
    ctx->pc = 0x7F28C984u;
    // 7F28C984: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28C988:
    ctx->pc = 0x7F28C988u;
    // 7F28C988: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28C98C:
    ctx->pc = 0x7F28C98Cu;
    // 7F28C98C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C990:
    ctx->pc = 0x7F28C990u;
    // 7F28C990: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28C994:
    ctx->pc = 0x7F28C994u;
    // 7F28C994: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28C998:
    ctx->pc = 0x7F28C998u;
    // 7F28C998: bl      0x7F042E08
    {
            ctx->lr = 0x7F28C99Cu;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F28C99C:
    ctx->pc = 0x7F28C99Cu;
    ctx->downcount -= 13;
    // 7F28C99C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28C9A0:
    ctx->pc = 0x7F28C9A0u;
    // 7F28C9A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28C9A4:
    ctx->pc = 0x7F28C9A4u;
    // 7F28C9A4: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28C9A8:
    ctx->pc = 0x7F28C9A8u;
    // 7F28C9A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28C9AC:
    ctx->pc = 0x7F28C9ACu;
    // 7F28C9AC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C9B0:
    ctx->pc = 0x7F28C9B0u;
    // 7F28C9B0: sth     r0, 300(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28C9B4:
    ctx->pc = 0x7F28C9B4u;
    // 7F28C9B4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28C9B8:
    ctx->pc = 0x7F28C9B8u;
    // 7F28C9B8: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C9BC:
    ctx->pc = 0x7F28C9BCu;
    // 7F28C9BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C9C0:
    ctx->pc = 0x7F28C9C0u;
    // 7F28C9C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28C9C4:
    ctx->pc = 0x7F28C9C4u;
    // 7F28C9C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28C9C8:
    ctx->pc = 0x7F28C9C8u;
    // 7F28C9C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28C9CC:
    ctx->pc = 0x7F28C9CCu;
    ctx->downcount -= 21;
    // 7F28C9CC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28C9D0:
    ctx->pc = 0x7F28C9D0u;
    // 7F28C9D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28C9D4:
    ctx->pc = 0x7F28C9D4u;
    // 7F28C9D4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28C9D8:
    ctx->pc = 0x7F28C9D8u;
    // 7F28C9D8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28C9DC:
    ctx->pc = 0x7F28C9DCu;
    // 7F28C9DC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28C9E0:
    ctx->pc = 0x7F28C9E0u;
    // 7F28C9E0: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28C9E4:
    ctx->pc = 0x7F28C9E4u;
    // 7F28C9E4: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28C9E8:
    ctx->pc = 0x7F28C9E8u;
    // 7F28C9E8: lwz     r0, -6840(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28C9EC:
    ctx->pc = 0x7F28C9ECu;
    // 7F28C9EC: lwz     r31, -5988(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5988);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28C9F0:
    ctx->pc = 0x7F28C9F0u;
    // 7F28C9F0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C9F4:
    ctx->pc = 0x7F28C9F4u;
    // 7F28C9F4: bc    12, 2, 0x7F28CA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CA30;
        }
    }

label_7F28C9F8:
    ctx->pc = 0x7F28C9F8u;
    ctx->downcount -= 2;
    // 7F28C9F8: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28C9FC:
    ctx->pc = 0x7F28C9FCu;
    // 7F28C9FC: bc    12, 2, 0x7F28CA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CA30;
        }
    }

label_7F28CA00:
    ctx->pc = 0x7F28CA00u;
    ctx->downcount -= 3;
    // 7F28CA00: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F28CA04:
    ctx->pc = 0x7F28CA04u;
    // 7F28CA04: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F28CA08:
    ctx->pc = 0x7F28CA08u;
    // 7F28CA08: bl      0x7F290054
    {
            ctx->lr = 0x7F28CA0Cu;
            goto label_7F290054;
    }

label_7F28CA0C:
    ctx->pc = 0x7F28CA0Cu;
    ctx->downcount -= 5;
    // 7F28CA0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28CA10:
    ctx->pc = 0x7F28CA10u;
    // 7F28CA10: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28CA14:
    ctx->pc = 0x7F28CA14u;
    // 7F28CA14: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28CA18:
    ctx->pc = 0x7F28CA18u;
    // 7F28CA18: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CA1C:
    ctx->pc = 0x7F28CA1Cu;
    // 7F28CA1C: bc    4, 2, 0x7F28CA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CA30;
        }
    }

label_7F28CA20:
    ctx->pc = 0x7F28CA20u;
    ctx->downcount -= 4;
    // 7F28CA20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CA24:
    ctx->pc = 0x7F28CA24u;
    // 7F28CA24: lwz     r0, -5996(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CA28:
    ctx->pc = 0x7F28CA28u;
    // 7F28CA28: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CA2C:
    ctx->pc = 0x7F28CA2Cu;
    // 7F28CA2C: bc    4, 2, 0x7F28CA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CA38;
        }
    }

label_7F28CA30:
    ctx->pc = 0x7F28CA30u;
    ctx->downcount -= 2;
    // 7F28CA30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CA34:
    ctx->pc = 0x7F28CA34u;
    // 7F28CA34: b       0x7F28CBF4
    {
            goto label_7F28CBF4;
    }

label_7F28CA38:
    ctx->pc = 0x7F28CA38u;
    ctx->downcount -= 2;
    // 7F28CA38: lwz     r3, 228(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CA3C:
    ctx->pc = 0x7F28CA3Cu;
    // 7F28CA3C: bl      0x7F01A1F0
    {
            ctx->lr = 0x7F28CA40u;
            ctx->pc = 0x7F01A1F0u;
            return;
    }

label_7F28CA40:
    ctx->pc = 0x7F28CA40u;
    ctx->downcount -= 7;
    // 7F28CA40: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28CA44:
    ctx->pc = 0x7F28CA44u;
    // 7F28CA44: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28CA48:
    ctx->pc = 0x7F28CA48u;
    // 7F28CA48: addi    r3, r4, 18888
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(18888);

label_7F28CA4C:
    ctx->pc = 0x7F28CA4Cu;
    // 7F28CA4C: lwzx    r29, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F28CA50:
    ctx->pc = 0x7F28CA50u;
    // 7F28CA50: addis   r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F28CA54:
    ctx->pc = 0x7F28CA54u;
    // 7F28CA54: cmplwi  r0, 0xFFFF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xFFFFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CA58:
    ctx->pc = 0x7F28CA58u;
    // 7F28CA58: bc    4, 2, 0x7F28CA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CA64;
        }
    }

label_7F28CA5C:
    ctx->pc = 0x7F28CA5Cu;
    ctx->downcount -= 2;
    // 7F28CA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CA60:
    ctx->pc = 0x7F28CA60u;
    // 7F28CA60: b       0x7F28CBF4
    {
            goto label_7F28CBF4;
    }

label_7F28CA64:
    ctx->pc = 0x7F28CA64u;
    ctx->downcount -= 8;
    // 7F28CA64: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F28CA68:
    ctx->pc = 0x7F28CA68u;
    // 7F28CA68: lwzu     r28, -27956(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-27956);
        ctx->gpr[28] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F28CA6C:
    ctx->pc = 0x7F28CA6Cu;
    // 7F28CA6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28CA70:
    ctx->pc = 0x7F28CA70u;
    // 7F28CA70: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CA74:
    ctx->pc = 0x7F28CA74u;
    // 7F28CA74: lwz     r3, 464(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CA78:
    ctx->pc = 0x7F28CA78u;
    // 7F28CA78: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CA7C:
    ctx->pc = 0x7F28CA7Cu;
    // 7F28CA7C: rlwinm. r0, r0, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CA80:
    ctx->pc = 0x7F28CA80u;
    // 7F28CA80: bc    12, 2, 0x7F28CAAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CAAC;
        }
    }

label_7F28CA84:
    ctx->pc = 0x7F28CA84u;
    ctx->downcount -= 10;
    // 7F28CA84: lwz     r4, 2792(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2792);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CA88:
    ctx->pc = 0x7F28CA88u;
    // 7F28CA88: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CA8C:
    ctx->pc = 0x7F28CA8Cu;
    // 7F28CA8C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CA90:
    ctx->pc = 0x7F28CA90u;
    // 7F28CA90: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28CA94:
    ctx->pc = 0x7F28CA94u;
    // 7F28CA94: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CA98:
    ctx->pc = 0x7F28CA98u;
    // 7F28CA98: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CA9C:
    ctx->pc = 0x7F28CA9Cu;
    // 7F28CA9C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CAA0:
    ctx->pc = 0x7F28CAA0u;
    // 7F28CAA0: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28CAA4:
    ctx->pc = 0x7F28CAA4u;
    // 7F28CAA4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CAA8:
    ctx->pc = 0x7F28CAA8u;
    // 7F28CAA8: b       0x7F28CABC
    {
            goto label_7F28CABC;
    }

label_7F28CAAC:
    ctx->pc = 0x7F28CAACu;
    ctx->downcount -= 4;
    // 7F28CAAC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F28CAB0:
    ctx->pc = 0x7F28CAB0u;
    // 7F28CAB0: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28CAB4:
    ctx->pc = 0x7F28CAB4u;
    // 7F28CAB4: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_7F28CAB8:
    ctx->pc = 0x7F28CAB8u;
    // 7F28CAB8: bl      0x7F290E88
    {
            ctx->lr = 0x7F28CABCu;
            ctx->pc = 0x7F290E88u;
            return;
    }

label_7F28CABC:
    ctx->pc = 0x7F28CABCu;
    ctx->downcount -= 4;
    // 7F28CABC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CAC0:
    ctx->pc = 0x7F28CAC0u;
    // 7F28CAC0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F28CAC4:
    ctx->pc = 0x7F28CAC4u;
    // 7F28CAC4: lwz     r27, -5992(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5992);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F28CAC8:
    ctx->pc = 0x7F28CAC8u;
    // 7F28CAC8: b       0x7F28CBE0
    {
            goto label_7F28CBE0;
    }

label_7F28CACC:
    ctx->pc = 0x7F28CACCu;
    ctx->downcount -= 3;
    // 7F28CACC: lwz     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CAD0:
    // 7F28CAD0: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CAD4:
    // 7F28CAD4: bc    4, 2, 0x7F28CB0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CB0C;
        }
    }

label_7F28CAD8:
    ctx->downcount -= 8;
    // 7F28CAD8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28CADC:
    // 7F28CADC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28CAE0:
    // 7F28CAE0: addi    r5, r3, 26176
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26176);

label_7F28CAE4:
    ctx->pc = 0x7F28CAE4u;
    // 7F28CAE4: lfs     f2, 26180(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28CAE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28CAE8:
    ctx->pc = 0x7F28CAE8u;
    // 7F28CAE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28CAE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28CAEC:
    // 7F28CAEC: addi    r3, r27, 16
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(16);

label_7F28CAF0:
    // 7F28CAF0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28CAF4:
    // 7F28CAF4: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F28CAF8u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F28CAF8:
    ctx->downcount -= 4;
    // 7F28CAF8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28CAFC:
    // 7F28CAFC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28CB00:
    // 7F28CB00: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28CB04:
    // 7F28CB04: bl      0x800261B4
    {
            ctx->lr = 0x7F28CB08u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28CB08:
    ctx->downcount -= 1;
    // 7F28CB08: b       0x7F28CB54
    {
            goto label_7F28CB54;
    }

label_7F28CB0C:
    ctx->downcount -= 4;
    // 7F28CB0C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F28CB10:
    // 7F28CB10: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28CB14:
    // 7F28CB14: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28CB18:
    // 7F28CB18: bl      0x800261D8
    {
            ctx->lr = 0x7F28CB1Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F28CB1C:
    ctx->downcount -= 10;
    // 7F28CB1C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28CB20:
    // 7F28CB20: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F28CB24:
    // 7F28CB24: addi    r4, r3, 26184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(26184);

label_7F28CB28:
    ctx->pc = 0x7F28CB28u;
    // 7F28CB28: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F28CB28u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28CB2C:
    ctx->pc = 0x7F28CB2Cu;
    // 7F28CB2C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28CB2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28CB30:
    // 7F28CB30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28CB34:
    ctx->pc = 0x7F28CB34u;
    // 7F28CB34: lfs     f1, 26176(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28CB34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28CB38:
    // 7F28CB38: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CB3C:
    ctx->pc = 0x7F28CB3Cu;
    // 7F28CB3C: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28CB3Cu)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_7F28CB40:
    // 7F28CB40: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F28CB44u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F28CB44:
    ctx->downcount -= 4;
    // 7F28CB44: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F28CB48:
    // 7F28CB48: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28CB4C:
    // 7F28CB4C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28CB50:
    // 7F28CB50: bl      0x800261B4
    {
            ctx->lr = 0x7F28CB54u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28CB54:
    ctx->downcount -= 7;
    // 7F28CB54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CB58:
    // 7F28CB58: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28CB5C:
    // 7F28CB5C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28CB60:
    // 7F28CB60: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F28CB64:
    // 7F28CB64: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F28CB68:
    // 7F28CB68: li      r8, 16
    ctx->gpr[8] = (u32)(s32)(16);

label_7F28CB6C:
    // 7F28CB6C: bl      0x7F10B744
    {
            ctx->lr = 0x7F28CB70u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F28CB70:
    ctx->downcount -= 2;
    // 7F28CB70: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CB74:
    // 7F28CB74: bc    12, 2, 0x7F28CBD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CBD8;
        }
    }

label_7F28CB78:
    ctx->downcount -= 8;
    // 7F28CB78: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28CB7C:
    // 7F28CB7C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CB80:
    // 7F28CB80: addi    r4, r4, -5996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5996);

label_7F28CB84:
    ctx->pc = 0x7F28CB84u;
    // 7F28CB84: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CB88:
    // 7F28CB88: addi    r0, r3, -6060
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6060);

label_7F28CB8C:
    // 7F28CB8C: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F28CB90:
    // 7F28CB90: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28CB94:
    // 7F28CB94: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F28CB98u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F28CB98:
    ctx->downcount -= 16;
    // 7F28CB98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CB9C:
    // 7F28CB9C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28CBA0:
    // 7F28CBA0: addi    r6, r3, -5996
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5996);

label_7F28CBA4:
    ctx->pc = 0x7F28CBA4u;
    // 7F28CBA4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28CBA8:
    // 7F28CBA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28CBAC:
    ctx->pc = 0x7F28CBACu;
    // 7F28CBAC: lfs     f0, 26188(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28CBACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28CBB0:
    // 7F28CBB0: addi    r4, r4, -6060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6060);

label_7F28CBB4:
    // 7F28CBB4: rlwinm r3, r5, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F28CBB8:
    // 7F28CBB8: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F28CBBC:
    // 7F28CBBC: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28CBC0:
    ctx->pc = 0x7F28CBC0u;
    // 7F28CBC0: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CBC4:
    ctx->pc = 0x7F28CBC4u;
    // 7F28CBC4: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28CBC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28CBC8:
    // 7F28CBC8: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CBCC:
    ctx->pc = 0x7F28CBCCu;
    // 7F28CBCC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28CBCCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F28CBD0:
    ctx->pc = 0x7F28CBD0u;
    // 7F28CBD0: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28CBD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28CBD4:
    // 7F28CBD4: bc    12, 2, 0x7F28CBE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CBE8;
        }
    }

label_7F28CBD8:
    ctx->downcount -= 2;
    // 7F28CBD8: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F28CBDC:
    // 7F28CBDC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F28CBE0:
    ctx->downcount -= 2;
    // 7F28CBE0: cmpw    r30, r31
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CBE4:
    // 7F28CBE4: bc    12, 0, 0x7F28CACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28CACCu;
                return;
            }
            goto label_7F28CACC;
        }
    }

label_7F28CBE8:
    ctx->pc = 0x7F28CBE8u;
    ctx->downcount -= 3;
    // 7F28CBE8: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F28CBEC:
    ctx->pc = 0x7F28CBECu;
    // 7F28CBEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CBF0:
    ctx->pc = 0x7F28CBF0u;
    // 7F28CBF0: stw     r28, -27956(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-27956);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F28CBF4:
    ctx->pc = 0x7F28CBF4u;
    ctx->downcount -= 16;
    // 7F28CBF4: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28CBF8:
    ctx->pc = 0x7F28CBF8u;
    // 7F28CBF8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CBFC:
    ctx->pc = 0x7F28CBFCu;
    // 7F28CBFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28CC00:
    ctx->pc = 0x7F28CC00u;
    // 7F28CC00: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F28CC04:
    ctx->pc = 0x7F28CC04u;
    // 7F28CC04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28CC08:
    ctx->pc = 0x7F28CC08u;
    ctx->downcount -= 18;
    // 7F28CC08: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28CC0C:
    ctx->pc = 0x7F28CC0Cu;
    // 7F28CC0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28CC10:
    ctx->pc = 0x7F28CC10u;
    // 7F28CC10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CC14:
    ctx->pc = 0x7F28CC14u;
    // 7F28CC14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CC18:
    ctx->pc = 0x7F28CC18u;
    // 7F28CC18: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28CC1C:
    ctx->pc = 0x7F28CC1Cu;
    // 7F28CC1C: lwz     r0, -6840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CC20:
    ctx->pc = 0x7F28CC20u;
    // 7F28CC20: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CC24:
    ctx->pc = 0x7F28CC24u;
    // 7F28CC24: bc    4, 2, 0x7F28CC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CC4C;
        }
    }

label_7F28CC28:
    ctx->pc = 0x7F28CC28u;
    ctx->downcount -= 7;
    // 7F28CC28: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28CC2C:
    ctx->pc = 0x7F28CC2Cu;
    // 7F28CC2C: li      r0, 31
    ctx->gpr[0] = (u32)(s32)(31);

label_7F28CC30:
    ctx->pc = 0x7F28CC30u;
    // 7F28CC30: addi    r4, r3, 18888
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18888);

label_7F28CC34:
    ctx->pc = 0x7F28CC34u;
    // 7F28CC34: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F28CC38:
    ctx->pc = 0x7F28CC38u;
    // 7F28CC38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CC3C:
    ctx->pc = 0x7F28CC3Cu;
    // 7F28CC3C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28CC40:
    loop_7F28CC40(ctx);
    if (ctx->pc == 0x7F28CC4Cu) goto label_7F28CC4C;
    return;
label_7F28CC44:
    // 7F28CC44: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F28CC48:
    // 7F28CC48: bc    16, 0, 0x7F28CC40
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28CC40u;
                return;
            }
            goto label_7F28CC40;
        }
    }

label_7F28CC4C:
    ctx->pc = 0x7F28CC4Cu;
    ctx->downcount -= 3;
    // 7F28CC4C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CC50:
    ctx->pc = 0x7F28CC50u;
    // 7F28CC50: addi    r3, r3, -6836
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6836);

label_7F28CC54:
    ctx->pc = 0x7F28CC54u;
    // 7F28CC54: bl      0x7F29110C
    {
            ctx->lr = 0x7F28CC58u;
            ctx->pc = 0x7F29110Cu;
            return;
    }

label_7F28CC58:
    ctx->pc = 0x7F28CC58u;
    ctx->downcount -= 5;
    // 7F28CC58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CC5C:
    ctx->pc = 0x7F28CC5Cu;
    // 7F28CC5C: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28CC60:
    ctx->pc = 0x7F28CC60u;
    // 7F28CC60: addi    r3, r3, -6836
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6836);

label_7F28CC64:
    ctx->pc = 0x7F28CC64u;
    // 7F28CC64: addi    r4, r4, -13876
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13876);

label_7F28CC68:
    ctx->pc = 0x7F28CC68u;
    // 7F28CC68: bl      0x7F2910F0
    {
            ctx->lr = 0x7F28CC6Cu;
            ctx->pc = 0x7F2910F0u;
            return;
    }

label_7F28CC6C:
    ctx->pc = 0x7F28CC6Cu;
    ctx->downcount -= 2;
    // 7F28CC6C: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F28CC70:
    ctx->pc = 0x7F28CC70u;
    // 7F28CC70: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28CC74u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28CC74:
    ctx->pc = 0x7F28CC74u;
    ctx->downcount -= 2;
    // 7F28CC74: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CC78:
    ctx->pc = 0x7F28CC78u;
    // 7F28CC78: bc    12, 2, 0x7F28CC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CC8C;
        }
    }

label_7F28CC7C:
    ctx->pc = 0x7F28CC7Cu;
    ctx->downcount -= 1;
    // 7F28CC7C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28CC80u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28CC80:
    ctx->pc = 0x7F28CC80u;
    ctx->downcount -= 1;
    // 7F28CC80: bl      0x7F01B788
    {
            ctx->lr = 0x7F28CC84u;
            ctx->pc = 0x7F01B788u;
            return;
    }

label_7F28CC84:
    ctx->pc = 0x7F28CC84u;
    ctx->downcount -= 1;
    // 7F28CC84: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F28CC88u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F28CC88:
    ctx->pc = 0x7F28CC88u;
    ctx->downcount -= 1;
    // 7F28CC88: b       0x7F28CC9C
    {
            goto label_7F28CC9C;
    }

label_7F28CC8C:
    ctx->pc = 0x7F28CC8Cu;
    ctx->downcount -= 4;
    // 7F28CC8C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F28CC90:
    ctx->pc = 0x7F28CC90u;
    // 7F28CC90: addi    r3, r3, 18312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F28CC94:
    ctx->pc = 0x7F28CC94u;
    // 7F28CC94: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CC98:
    ctx->pc = 0x7F28CC98u;
    // 7F28CC98: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F28CC9Cu;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F28CC9C:
    ctx->pc = 0x7F28CC9Cu;
    ctx->downcount -= 3;
    // 7F28CC9C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CCA0:
    ctx->pc = 0x7F28CCA0u;
    // 7F28CCA0: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F28CCA4:
    ctx->pc = 0x7F28CCA4u;
    // 7F28CCA4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28CCA8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28CCA8:
    ctx->pc = 0x7F28CCA8u;
    ctx->downcount -= 1;
    // 7F28CCA8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28CCACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28CCAC:
    ctx->pc = 0x7F28CCACu;
    ctx->downcount -= 1;
    // 7F28CCAC: bl      0x7F01C018
    {
            ctx->lr = 0x7F28CCB0u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F28CCB0:
    ctx->pc = 0x7F28CCB0u;
    ctx->downcount -= 4;
    // 7F28CCB0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28CCB4:
    ctx->pc = 0x7F28CCB4u;
    // 7F28CCB4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CCB8:
    ctx->pc = 0x7F28CCB8u;
    // 7F28CCB8: addi    r31, r4, 18888
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(18888);

label_7F28CCBC:
    ctx->pc = 0x7F28CCBCu;
    // 7F28CCBC: b       0x7F28CCDC
    {
            goto label_7F28CCDC;
    }

label_7F28CCC0:
    ctx->downcount -= 2;
    // 7F28CCC0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F28CCC4:
    // 7F28CCC4: bl      0x7F01A1F0
    {
            ctx->lr = 0x7F28CCC8u;
            ctx->pc = 0x7F01A1F0u;
            return;
    }

label_7F28CCC8:
    ctx->downcount -= 2;
    // 7F28CCC8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CCCC:
    // 7F28CCCC: bl      0x7F01C018
    {
            ctx->lr = 0x7F28CCD0u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F28CCD0:
    ctx->downcount -= 3;
    // 7F28CCD0: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F28CCD4:
    // 7F28CCD4: andc   r28, r28, r3
    {
        ctx->gpr[28] = ctx->gpr[28] & ~ctx->gpr[3];
    }

label_7F28CCD8:
    ctx->pc = 0x7F28CCD8u;
    // 7F28CCD8: stwx    r29, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F28CCDC:
    ctx->downcount -= 2;
    // 7F28CCDC: cmplwi  r28, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CCE0:
    // 7F28CCE0: bc    4, 2, 0x7F28CCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28CCC0u;
                return;
            }
            goto label_7F28CCC0;
        }
    }

label_7F28CCE4:
    ctx->pc = 0x7F28CCE4u;
    ctx->downcount -= 21;
    // 7F28CCE4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CCE8:
    ctx->pc = 0x7F28CCE8u;
    // 7F28CCE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28CCEC:
    ctx->pc = 0x7F28CCECu;
    // 7F28CCEC: addi    r4, r3, -6840
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6840);

label_7F28CCF0:
    ctx->pc = 0x7F28CCF0u;
    // 7F28CCF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CCF4:
    ctx->pc = 0x7F28CCF4u;
    // 7F28CCF4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CCF8:
    ctx->pc = 0x7F28CCF8u;
    // 7F28CCF8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28CCFC:
    ctx->pc = 0x7F28CCFCu;
    // 7F28CCFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CD00:
    ctx->pc = 0x7F28CD00u;
    // 7F28CD00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28CD04:
    ctx->pc = 0x7F28CD04u;
    // 7F28CD04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28CD08:
    ctx->pc = 0x7F28CD08u;
    // 7F28CD08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28CD0C:
    ctx->pc = 0x7F28CD0Cu;
    ctx->downcount -= 19;
    // 7F28CD0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28CD10:
    ctx->pc = 0x7F28CD10u;
    // 7F28CD10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28CD14:
    ctx->pc = 0x7F28CD14u;
    // 7F28CD14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CD18:
    ctx->pc = 0x7F28CD18u;
    // 7F28CD18: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28CD1C:
    ctx->pc = 0x7F28CD1Cu;
    // 7F28CD1C: or.   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CD20:
    ctx->pc = 0x7F28CD20u;
    // 7F28CD20: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28CD24:
    ctx->pc = 0x7F28CD24u;
    // 7F28CD24: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CD28:
    ctx->pc = 0x7F28CD28u;
    // 7F28CD28: lwz     r31, -6308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6308);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28CD2C:
    ctx->pc = 0x7F28CD2Cu;
    // 7F28CD2C: bc    4, 2, 0x7F28CD84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CD84;
        }
    }

label_7F28CD30:
    ctx->pc = 0x7F28CD30u;
    ctx->downcount -= 4;
    // 7F28CD30: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CD34:
    ctx->pc = 0x7F28CD34u;
    // 7F28CD34: lwz     r0, -6816(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CD38:
    ctx->pc = 0x7F28CD38u;
    // 7F28CD38: cmpwi   r0, -1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CD3C:
    ctx->pc = 0x7F28CD3Cu;
    // 7F28CD3C: bc    12, 2, 0x7F28CD48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CD48;
        }
    }

label_7F28CD40:
    ctx->pc = 0x7F28CD40u;
    ctx->downcount -= 2;
    // 7F28CD40: sth     r0, 98(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28CD44:
    ctx->pc = 0x7F28CD44u;
    // 7F28CD44: sth     r0, 106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28CD48:
    ctx->pc = 0x7F28CD48u;
    ctx->downcount -= 2;
    // 7F28CD48: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CD4C:
    ctx->pc = 0x7F28CD4Cu;
    // 7F28CD4C: bl      0x7F290D34
    {
            ctx->lr = 0x7F28CD50u;
            ctx->pc = 0x7F290D34u;
            return;
    }

label_7F28CD50:
    ctx->pc = 0x7F28CD50u;
    ctx->downcount -= 2;
    // 7F28CD50: rlwinm. r0, r3, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CD54:
    ctx->pc = 0x7F28CD54u;
    // 7F28CD54: bc    12, 2, 0x7F28CD60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CD60;
        }
    }

label_7F28CD58:
    ctx->pc = 0x7F28CD58u;
    ctx->downcount -= 2;
    // 7F28CD58: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CD5C:
    ctx->pc = 0x7F28CD5Cu;
    // 7F28CD5C: bl      0x7F29E100
    {
            ctx->lr = 0x7F28CD60u;
            ctx->pc = 0x7F29E100u;
            return;
    }

label_7F28CD60:
    ctx->pc = 0x7F28CD60u;
    ctx->downcount -= 2;
    // 7F28CD60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CD64:
    ctx->pc = 0x7F28CD64u;
    // 7F28CD64: bl      0x7F290D50
    {
            ctx->lr = 0x7F28CD68u;
            ctx->pc = 0x7F290D50u;
            return;
    }

label_7F28CD68:
    ctx->pc = 0x7F28CD68u;
    ctx->downcount -= 2;
    // 7F28CD68: rlwinm. r0, r3, 0, 28, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Cu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CD6C:
    ctx->pc = 0x7F28CD6Cu;
    // 7F28CD6C: bc    12, 2, 0x7F28CD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CD78;
        }
    }

label_7F28CD70:
    ctx->pc = 0x7F28CD70u;
    ctx->downcount -= 2;
    // 7F28CD70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CD74:
    ctx->pc = 0x7F28CD74u;
    // 7F28CD74: bl      0x7F29E120
    {
            ctx->lr = 0x7F28CD78u;
            ctx->pc = 0x7F29E120u;
            return;
    }

label_7F28CD78:
    ctx->pc = 0x7F28CD78u;
    ctx->downcount -= 3;
    // 7F28CD78: lwz     r4, 3968(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CD7C:
    ctx->pc = 0x7F28CD7Cu;
    // 7F28CD7C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CD80:
    ctx->pc = 0x7F28CD80u;
    // 7F28CD80: bl      0x7F290ED8
    {
            ctx->lr = 0x7F28CD84u;
            ctx->pc = 0x7F290ED8u;
            return;
    }

label_7F28CD84:
    ctx->pc = 0x7F28CD84u;
    ctx->downcount -= 3;
    // 7F28CD84: li      r4, 834
    ctx->gpr[4] = (u32)(s32)(834);

label_7F28CD88:
    ctx->pc = 0x7F28CD88u;
    // 7F28CD88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CD8C:
    ctx->pc = 0x7F28CD8Cu;
    // 7F28CD8C: bl      0x7F29007C
    {
            ctx->lr = 0x7F28CD90u;
            goto label_7F29007C;
    }

label_7F28CD90:
    ctx->pc = 0x7F28CD90u;
    ctx->downcount -= 4;
    // 7F28CD90: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CD94:
    ctx->pc = 0x7F28CD94u;
    // 7F28CD94: lwz     r0, -6824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CD98:
    ctx->pc = 0x7F28CD98u;
    // 7F28CD98: rlwinm. r0, r0, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CD9C:
    ctx->pc = 0x7F28CD9Cu;
    // 7F28CD9C: bc    12, 2, 0x7F28CDAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CDAC;
        }
    }

label_7F28CDA0:
    ctx->pc = 0x7F28CDA0u;
    ctx->downcount -= 3;
    // 7F28CDA0: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F28CDA4:
    ctx->pc = 0x7F28CDA4u;
    // 7F28CDA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CDA8:
    ctx->pc = 0x7F28CDA8u;
    // 7F28CDA8: bl      0x7F290004
    {
            ctx->lr = 0x7F28CDACu;
            goto label_7F290004;
    }

label_7F28CDAC:
    ctx->pc = 0x7F28CDACu;
    ctx->downcount -= 5;
    // 7F28CDAC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CDB0:
    ctx->pc = 0x7F28CDB0u;
    // 7F28CDB0: lha     r4, 3904(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3904);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28CDB4:
    ctx->pc = 0x7F28CDB4u;
    // 7F28CDB4: lwz     r0, -6812(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CDB8:
    ctx->pc = 0x7F28CDB8u;
    // 7F28CDB8: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CDBC:
    ctx->pc = 0x7F28CDBCu;
    // 7F28CDBC: bc    12, 2, 0x7F28CE2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CE2C;
        }
    }

label_7F28CDC0:
    ctx->pc = 0x7F28CDC0u;
    ctx->downcount -= 1;
    // 7F28CDC0: bc    4, 0, 0x7F28CDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CDD0;
        }
    }

label_7F28CDC4:
    ctx->pc = 0x7F28CDC4u;
    ctx->downcount -= 2;
    // 7F28CDC4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CDC8:
    ctx->pc = 0x7F28CDC8u;
    // 7F28CDC8: bc    4, 0, 0x7F28CDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CDDC;
        }
    }

label_7F28CDCC:
    ctx->pc = 0x7F28CDCCu;
    ctx->downcount -= 1;
    // 7F28CDCC: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CDD0:
    ctx->pc = 0x7F28CDD0u;
    ctx->downcount -= 2;
    // 7F28CDD0: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CDD4:
    ctx->pc = 0x7F28CDD4u;
    // 7F28CDD4: bc    4, 0, 0x7F28CED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CED0;
        }
    }

label_7F28CDD8:
    ctx->pc = 0x7F28CDD8u;
    ctx->downcount -= 1;
    // 7F28CDD8: b       0x7F28CE7C
    {
            goto label_7F28CE7C;
    }

label_7F28CDDC:
    ctx->pc = 0x7F28CDDCu;
    ctx->downcount -= 3;
    // 7F28CDDC: lwz     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CDE0:
    ctx->pc = 0x7F28CDE0u;
    // 7F28CDE0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CDE4:
    ctx->pc = 0x7F28CDE4u;
    // 7F28CDE4: bc    4, 2, 0x7F28CE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CE14;
        }
    }

label_7F28CDE8:
    ctx->pc = 0x7F28CDE8u;
    ctx->downcount -= 2;
    // 7F28CDE8: cmplwi  r4, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CDEC:
    ctx->pc = 0x7F28CDECu;
    // 7F28CDEC: bc    4, 1, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CDF0:
    ctx->pc = 0x7F28CDF0u;
    ctx->downcount -= 6;
    // 7F28CDF0: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CDF4:
    ctx->pc = 0x7F28CDF4u;
    // 7F28CDF4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CDF8:
    ctx->pc = 0x7F28CDF8u;
    // 7F28CDF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28CDFC:
    ctx->pc = 0x7F28CDFCu;
    // 7F28CDFC: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F28CE00:
    ctx->pc = 0x7F28CE00u;
    // 7F28CE00: lha     r4, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28CE04:
    ctx->pc = 0x7F28CE04u;
    // 7F28CE04: bl      0x7F290164
    {
            ctx->lr = 0x7F28CE08u;
            ctx->pc = 0x7F290164u;
            return;
    }

label_7F28CE08:
    ctx->pc = 0x7F28CE08u;
    ctx->downcount -= 3;
    // 7F28CE08: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28CE0C:
    ctx->pc = 0x7F28CE0Cu;
    // 7F28CE0C: stw     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CE10:
    ctx->pc = 0x7F28CE10u;
    // 7F28CE10: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CE14:
    ctx->pc = 0x7F28CE14u;
    ctx->downcount -= 5;
    // 7F28CE14: lwz     r3, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CE18:
    ctx->pc = 0x7F28CE18u;
    // 7F28CE18: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CE1C:
    ctx->pc = 0x7F28CE1Cu;
    // 7F28CE1C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CE20:
    ctx->pc = 0x7F28CE20u;
    // 7F28CE20: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CE24:
    ctx->pc = 0x7F28CE24u;
    // 7F28CE24: bc    4, 2, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CE28:
    ctx->pc = 0x7F28CE28u;
    ctx->downcount -= 1;
    // 7F28CE28: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CE2C:
    ctx->pc = 0x7F28CE2Cu;
    ctx->downcount -= 3;
    // 7F28CE2C: lwz     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CE30:
    ctx->pc = 0x7F28CE30u;
    // 7F28CE30: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CE34:
    ctx->pc = 0x7F28CE34u;
    // 7F28CE34: bc    4, 2, 0x7F28CE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CE64;
        }
    }

label_7F28CE38:
    ctx->pc = 0x7F28CE38u;
    ctx->downcount -= 2;
    // 7F28CE38: cmplwi  r4, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CE3C:
    ctx->pc = 0x7F28CE3Cu;
    // 7F28CE3C: bc    4, 1, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CE40:
    ctx->pc = 0x7F28CE40u;
    ctx->downcount -= 6;
    // 7F28CE40: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CE44:
    ctx->pc = 0x7F28CE44u;
    // 7F28CE44: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CE48:
    ctx->pc = 0x7F28CE48u;
    // 7F28CE48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28CE4C:
    ctx->pc = 0x7F28CE4Cu;
    // 7F28CE4C: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F28CE50:
    ctx->pc = 0x7F28CE50u;
    // 7F28CE50: lha     r4, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28CE54:
    ctx->pc = 0x7F28CE54u;
    // 7F28CE54: bl      0x7F290164
    {
            ctx->lr = 0x7F28CE58u;
            ctx->pc = 0x7F290164u;
            return;
    }

label_7F28CE58:
    ctx->pc = 0x7F28CE58u;
    ctx->downcount -= 3;
    // 7F28CE58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28CE5C:
    ctx->pc = 0x7F28CE5Cu;
    // 7F28CE5C: stw     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CE60:
    ctx->pc = 0x7F28CE60u;
    // 7F28CE60: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CE64:
    ctx->pc = 0x7F28CE64u;
    ctx->downcount -= 5;
    // 7F28CE64: lwz     r3, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CE68:
    ctx->pc = 0x7F28CE68u;
    // 7F28CE68: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CE6C:
    ctx->pc = 0x7F28CE6Cu;
    // 7F28CE6C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CE70:
    ctx->pc = 0x7F28CE70u;
    // 7F28CE70: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CE74:
    ctx->pc = 0x7F28CE74u;
    // 7F28CE74: bc    4, 2, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CE78:
    ctx->pc = 0x7F28CE78u;
    ctx->downcount -= 1;
    // 7F28CE78: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CE7C:
    ctx->pc = 0x7F28CE7Cu;
    ctx->downcount -= 3;
    // 7F28CE7C: lwz     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CE80:
    ctx->pc = 0x7F28CE80u;
    // 7F28CE80: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CE84:
    ctx->pc = 0x7F28CE84u;
    // 7F28CE84: bc    4, 2, 0x7F28CEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEBC;
        }
    }

label_7F28CE88:
    ctx->pc = 0x7F28CE88u;
    ctx->downcount -= 2;
    // 7F28CE88: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CE8C:
    ctx->pc = 0x7F28CE8Cu;
    // 7F28CE8C: bc    12, 2, 0x7F28CE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CE98;
        }
    }

label_7F28CE90:
    ctx->pc = 0x7F28CE90u;
    ctx->downcount -= 2;
    // 7F28CE90: cmpwi   r4, 1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CE94:
    ctx->pc = 0x7F28CE94u;
    // 7F28CE94: bc    4, 2, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CE98:
    ctx->pc = 0x7F28CE98u;
    ctx->downcount -= 6;
    // 7F28CE98: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CE9C:
    ctx->pc = 0x7F28CE9Cu;
    // 7F28CE9C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CEA0:
    ctx->pc = 0x7F28CEA0u;
    // 7F28CEA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28CEA4:
    ctx->pc = 0x7F28CEA4u;
    // 7F28CEA4: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F28CEA8:
    ctx->pc = 0x7F28CEA8u;
    // 7F28CEA8: lha     r4, 106(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(106);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28CEAC:
    ctx->pc = 0x7F28CEACu;
    // 7F28CEAC: bl      0x7F290164
    {
            ctx->lr = 0x7F28CEB0u;
            ctx->pc = 0x7F290164u;
            return;
    }

label_7F28CEB0:
    ctx->pc = 0x7F28CEB0u;
    ctx->downcount -= 3;
    // 7F28CEB0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28CEB4:
    ctx->pc = 0x7F28CEB4u;
    // 7F28CEB4: stw     r0, 2672(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CEB8:
    ctx->pc = 0x7F28CEB8u;
    // 7F28CEB8: b       0x7F28CED0
    {
            goto label_7F28CED0;
    }

label_7F28CEBC:
    ctx->pc = 0x7F28CEBCu;
    ctx->downcount -= 5;
    // 7F28CEBC: lwz     r3, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CEC0:
    ctx->pc = 0x7F28CEC0u;
    // 7F28CEC0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28CEC4:
    ctx->pc = 0x7F28CEC4u;
    // 7F28CEC4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CEC8:
    ctx->pc = 0x7F28CEC8u;
    // 7F28CEC8: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CECC:
    ctx->pc = 0x7F28CECCu;
    // 7F28CECC: bc    4, 2, 0x7F28CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CEE8;
        }
    }

label_7F28CED0:
    ctx->pc = 0x7F28CED0u;
    ctx->downcount -= 5;
    // 7F28CED0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CED4:
    ctx->pc = 0x7F28CED4u;
    // 7F28CED4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28CED8:
    ctx->pc = 0x7F28CED8u;
    // 7F28CED8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F28CEDC:
    ctx->pc = 0x7F28CEDCu;
    // 7F28CEDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28CEE0:
    ctx->pc = 0x7F28CEE0u;
    // 7F28CEE0: bl      0x7F291858
    {
            ctx->lr = 0x7F28CEE4u;
            ctx->pc = 0x7F291858u;
            return;
    }

label_7F28CEE4:
    ctx->pc = 0x7F28CEE4u;
    ctx->downcount -= 1;
    // 7F28CEE4: b       0x7F28CF54
    {
            goto label_7F28CF54;
    }

label_7F28CEE8:
    ctx->pc = 0x7F28CEE8u;
    ctx->downcount -= 2;
    // 7F28CEE8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CEEC:
    ctx->pc = 0x7F28CEECu;
    // 7F28CEEC: bl      0x7F2917E0
    {
            ctx->lr = 0x7F28CEF0u;
            ctx->pc = 0x7F2917E0u;
            return;
    }

label_7F28CEF0:
    ctx->pc = 0x7F28CEF0u;
    ctx->downcount -= 4;
    // 7F28CEF0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CEF4:
    ctx->pc = 0x7F28CEF4u;
    // 7F28CEF4: lwz     r0, -6820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CEF8:
    ctx->pc = 0x7F28CEF8u;
    // 7F28CEF8: cmpwi   r0, -1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28CEFC:
    ctx->pc = 0x7F28CEFCu;
    // 7F28CEFC: bc    12, 2, 0x7F28CF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CF04;
        }
    }

label_7F28CF00:
    ctx->pc = 0x7F28CF00u;
    ctx->downcount -= 1;
    // 7F28CF00: sth     r0, 106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28CF04:
    ctx->pc = 0x7F28CF04u;
    ctx->downcount -= 4;
    // 7F28CF04: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CF08:
    ctx->pc = 0x7F28CF08u;
    // 7F28CF08: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F28CF0C:
    ctx->pc = 0x7F28CF0Cu;
    // 7F28CF0C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F28CF10:
    ctx->pc = 0x7F28CF10u;
    // 7F28CF10: bl      0x7F29108C
    {
            ctx->lr = 0x7F28CF14u;
            ctx->pc = 0x7F29108Cu;
            return;
    }

label_7F28CF14:
    ctx->pc = 0x7F28CF14u;
    ctx->downcount -= 2;
    // 7F28CF14: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F28CF18:
    ctx->pc = 0x7F28CF18u;
    // 7F28CF18: bl      0x7F01808C
    {
            ctx->lr = 0x7F28CF1Cu;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F28CF1C:
    ctx->pc = 0x7F28CF1Cu;
    ctx->downcount -= 9;
    // 7F28CF1C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28CF20:
    ctx->pc = 0x7F28CF20u;
    // 7F28CF20: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28CF24:
    ctx->pc = 0x7F28CF24u;
    // 7F28CF24: addi    r5, r3, -6812
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6812);

label_7F28CF28:
    ctx->pc = 0x7F28CF28u;
    // 7F28CF28: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CF2C:
    ctx->pc = 0x7F28CF2Cu;
    // 7F28CF2C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CF30:
    ctx->pc = 0x7F28CF30u;
    // 7F28CF30: addi    r4, r4, 23964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23964);

label_7F28CF34:
    ctx->pc = 0x7F28CF34u;
    // 7F28CF34: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F28CF38:
    ctx->pc = 0x7F28CF38u;
    // 7F28CF38: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28CF3C:
    ctx->pc = 0x7F28CF3Cu;
    // 7F28CF3C: bl      0x7F290920
    {
            ctx->lr = 0x7F28CF40u;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28CF40:
    ctx->pc = 0x7F28CF40u;
    ctx->downcount -= 5;
    // 7F28CF40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28CF44:
    ctx->pc = 0x7F28CF44u;
    // 7F28CF44: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F28CF48:
    ctx->pc = 0x7F28CF48u;
    // 7F28CF48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F28CF4C:
    ctx->pc = 0x7F28CF4Cu;
    // 7F28CF4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F28CF50:
    ctx->pc = 0x7F28CF50u;
    // 7F28CF50: bl      0x7F291858
    {
            ctx->lr = 0x7F28CF54u;
            ctx->pc = 0x7F291858u;
            return;
    }

label_7F28CF54:
    ctx->pc = 0x7F28CF54u;
    ctx->downcount -= 16;
    // 7F28CF54: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28CF58:
    ctx->pc = 0x7F28CF58u;
    // 7F28CF58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28CF5C:
    ctx->pc = 0x7F28CF5Cu;
    // 7F28CF5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28CF60:
    ctx->pc = 0x7F28CF60u;
    // 7F28CF60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28CF64:
    ctx->pc = 0x7F28CF64u;
    // 7F28CF64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28CF68:
    ctx->pc = 0x7F28CF68u;
    ctx->downcount -= 20;
    // 7F28CF68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28CF6C:
    ctx->pc = 0x7F28CF6Cu;
    // 7F28CF6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28CF70:
    ctx->pc = 0x7F28CF70u;
    // 7F28CF70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28CF74:
    ctx->pc = 0x7F28CF74u;
    // 7F28CF74: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28CF78:
    ctx->pc = 0x7F28CF78u;
    // 7F28CF78: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28CF7C:
    ctx->pc = 0x7F28CF7Cu;
    // 7F28CF7C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28CF80:
    ctx->pc = 0x7F28CF80u;
    // 7F28CF80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CF84:
    ctx->pc = 0x7F28CF84u;
    // 7F28CF84: stw     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28CF88:
    ctx->pc = 0x7F28CF88u;
    // 7F28CF88: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F28CF8C:
    ctx->pc = 0x7F28CF8Cu;
    // 7F28CF8C: bl      0x7F29011C
    {
            ctx->lr = 0x7F28CF90u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28CF90:
    ctx->pc = 0x7F28CF90u;
    ctx->downcount -= 5;
    // 7F28CF90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28CF94:
    ctx->pc = 0x7F28CF94u;
    // 7F28CF94: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28CF98:
    ctx->pc = 0x7F28CF98u;
    // 7F28CF98: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28CF9C:
    ctx->pc = 0x7F28CF9Cu;
    // 7F28CF9C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CFA0:
    ctx->pc = 0x7F28CFA0u;
    // 7F28CFA0: bc    12, 2, 0x7F28CFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28CFCC;
        }
    }

label_7F28CFA4:
    ctx->pc = 0x7F28CFA4u;
    ctx->downcount -= 3;
    // 7F28CFA4: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F28CFA8:
    ctx->pc = 0x7F28CFA8u;
    // 7F28CFA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CFAC:
    ctx->pc = 0x7F28CFACu;
    // 7F28CFAC: bl      0x7F29011C
    {
            ctx->lr = 0x7F28CFB0u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28CFB0:
    ctx->pc = 0x7F28CFB0u;
    ctx->downcount -= 5;
    // 7F28CFB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28CFB4:
    ctx->pc = 0x7F28CFB4u;
    // 7F28CFB4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28CFB8:
    ctx->pc = 0x7F28CFB8u;
    // 7F28CFB8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28CFBC:
    ctx->pc = 0x7F28CFBCu;
    // 7F28CFBC: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CFC0:
    ctx->pc = 0x7F28CFC0u;
    // 7F28CFC0: bc    4, 2, 0x7F28CFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28CFCC;
        }
    }

label_7F28CFC4:
    ctx->pc = 0x7F28CFC4u;
    ctx->downcount -= 2;
    // 7F28CFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CFC8:
    ctx->pc = 0x7F28CFC8u;
    // 7F28CFC8: b       0x7F28D0E0
    {
            goto label_7F28D0E0;
    }

label_7F28CFCC:
    ctx->pc = 0x7F28CFCCu;
    ctx->downcount -= 4;
    // 7F28CFCC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F28CFD0:
    ctx->pc = 0x7F28CFD0u;
    // 7F28CFD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CFD4:
    ctx->pc = 0x7F28CFD4u;
    // 7F28CFD4: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F28CFD8:
    ctx->pc = 0x7F28CFD8u;
    // 7F28CFD8: bl      0x7F290054
    {
            ctx->lr = 0x7F28CFDCu;
            goto label_7F290054;
    }

label_7F28CFDC:
    ctx->pc = 0x7F28CFDCu;
    ctx->downcount -= 5;
    // 7F28CFDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28CFE0:
    ctx->pc = 0x7F28CFE0u;
    // 7F28CFE0: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F28CFE4:
    ctx->pc = 0x7F28CFE4u;
    // 7F28CFE4: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F28CFE8:
    ctx->pc = 0x7F28CFE8u;
    // 7F28CFE8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28CFEC:
    ctx->pc = 0x7F28CFECu;
    // 7F28CFEC: bc    12, 2, 0x7F28D004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D004;
        }
    }

label_7F28CFF0:
    ctx->pc = 0x7F28CFF0u;
    ctx->downcount -= 3;
    // 7F28CFF0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28CFF4:
    ctx->pc = 0x7F28CFF4u;
    // 7F28CFF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28CFF8:
    ctx->pc = 0x7F28CFF8u;
    // 7F28CFF8: bl      0x7F29002C
    {
            ctx->lr = 0x7F28CFFCu;
            goto label_7F29002C;
    }

label_7F28CFFC:
    ctx->pc = 0x7F28CFFCu;
    ctx->downcount -= 2;
    // 7F28CFFC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F28D000:
    ctx->pc = 0x7F28D000u;
    // 7F28D000: b       0x7F28D0E0
    {
            goto label_7F28D0E0;
    }

label_7F28D004:
    ctx->pc = 0x7F28D004u;
    ctx->downcount -= 23;
    // 7F28D004: stw     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28D008:
    ctx->pc = 0x7F28D008u;
    // 7F28D008: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F28D00C:
    ctx->pc = 0x7F28D00Cu;
    // 7F28D00C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28D010:
    ctx->pc = 0x7F28D010u;
    // 7F28D010: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D014:
    ctx->pc = 0x7F28D014u;
    // 7F28D014: lwz     r8, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F28D018:
    ctx->pc = 0x7F28D018u;
    // 7F28D018: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D01C:
    ctx->pc = 0x7F28D01Cu;
    // 7F28D01C: addi    r7, r6, -6812
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-6812);

label_7F28D020:
    ctx->pc = 0x7F28D020u;
    // 7F28D020: addi    r6, r5, -6816
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-6816);

label_7F28D024:
    ctx->pc = 0x7F28D024u;
    // 7F28D024: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D028:
    ctx->pc = 0x7F28D028u;
    // 7F28D028: addi    r5, r4, -6820
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6820);

label_7F28D02C:
    ctx->pc = 0x7F28D02Cu;
    // 7F28D02C: addi    r4, r3, -6824
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6824);

label_7F28D030:
    ctx->pc = 0x7F28D030u;
    // 7F28D030: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D034:
    ctx->pc = 0x7F28D034u;
    // 7F28D034: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D038:
    ctx->pc = 0x7F28D038u;
    // 7F28D038: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28D03C:
    ctx->pc = 0x7F28D03Cu;
    // 7F28D03C: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D040:
    ctx->pc = 0x7F28D040u;
    // 7F28D040: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D044:
    ctx->pc = 0x7F28D044u;
    // 7F28D044: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28D048:
    ctx->pc = 0x7F28D048u;
    // 7F28D048: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D04C:
    ctx->pc = 0x7F28D04Cu;
    // 7F28D04C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D050:
    ctx->pc = 0x7F28D050u;
    // 7F28D050: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28D054:
    ctx->pc = 0x7F28D054u;
    // 7F28D054: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D058:
    ctx->pc = 0x7F28D058u;
    // 7F28D058: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D05C:
    ctx->pc = 0x7F28D05Cu;
    // 7F28D05C: bl      0x7F2916FC
    {
            ctx->lr = 0x7F28D060u;
            ctx->pc = 0x7F2916FCu;
            return;
    }

label_7F28D060:
    ctx->pc = 0x7F28D060u;
    ctx->downcount -= 3;
    // 7F28D060: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D064:
    ctx->pc = 0x7F28D064u;
    // 7F28D064: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D068:
    ctx->pc = 0x7F28D068u;
    // 7F28D068: bl      0x7F291760
    {
            ctx->lr = 0x7F28D06Cu;
            ctx->pc = 0x7F291760u;
            return;
    }

label_7F28D06C:
    ctx->pc = 0x7F28D06Cu;
    ctx->downcount -= 2;
    // 7F28D06C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D070:
    ctx->pc = 0x7F28D070u;
    // 7F28D070: bl      0x7F291490
    {
            ctx->lr = 0x7F28D074u;
            ctx->pc = 0x7F291490u;
            return;
    }

label_7F28D074:
    ctx->pc = 0x7F28D074u;
    ctx->downcount -= 2;
    // 7F28D074: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D078:
    ctx->pc = 0x7F28D078u;
    // 7F28D078: bl      0x7F291AD0
    {
            ctx->lr = 0x7F28D07Cu;
            ctx->pc = 0x7F291AD0u;
            return;
    }

label_7F28D07C:
    ctx->pc = 0x7F28D07Cu;
    ctx->downcount -= 1;
    // 7F28D07C: bl      0x7F29E160
    {
            ctx->lr = 0x7F28D080u;
            ctx->pc = 0x7F29E160u;
            return;
    }

label_7F28D080:
    ctx->pc = 0x7F28D080u;
    ctx->downcount -= 2;
    // 7F28D080: addi    r3, r30, 1712
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1712);

label_7F28D084:
    ctx->pc = 0x7F28D084u;
    // 7F28D084: bl      0x7F0150C0
    {
            ctx->lr = 0x7F28D088u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F28D088:
    ctx->pc = 0x7F28D088u;
    ctx->downcount -= 3;
    // 7F28D088: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F28D08C:
    ctx->pc = 0x7F28D08Cu;
    // 7F28D08C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D090:
    ctx->pc = 0x7F28D090u;
    // 7F28D090: bl      0x7F2900A0
    {
            ctx->lr = 0x7F28D094u;
            goto label_7F2900A0;
    }

label_7F28D094:
    ctx->pc = 0x7F28D094u;
    ctx->downcount -= 3;
    // 7F28D094: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F28D098:
    ctx->pc = 0x7F28D098u;
    // 7F28D098: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D09C:
    ctx->pc = 0x7F28D09Cu;
    // 7F28D09C: bl      0x7F29002C
    {
            ctx->lr = 0x7F28D0A0u;
            goto label_7F29002C;
    }

label_7F28D0A0:
    ctx->pc = 0x7F28D0A0u;
    ctx->downcount -= 3;
    // 7F28D0A0: li      r4, 832
    ctx->gpr[4] = (u32)(s32)(832);

label_7F28D0A4:
    ctx->pc = 0x7F28D0A4u;
    // 7F28D0A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D0A8:
    ctx->pc = 0x7F28D0A8u;
    // 7F28D0A8: bl      0x7F29007C
    {
            ctx->lr = 0x7F28D0ACu;
            goto label_7F29007C;
    }

label_7F28D0AC:
    ctx->pc = 0x7F28D0ACu;
    ctx->downcount -= 3;
    // 7F28D0AC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28D0B0:
    ctx->pc = 0x7F28D0B0u;
    // 7F28D0B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D0B4:
    ctx->pc = 0x7F28D0B4u;
    // 7F28D0B4: bl      0x7F290004
    {
            ctx->lr = 0x7F28D0B8u;
            goto label_7F290004;
    }

label_7F28D0B8:
    ctx->pc = 0x7F28D0B8u;
    ctx->downcount -= 2;
    // 7F28D0B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F28D0BC:
    ctx->pc = 0x7F28D0BCu;
    // 7F28D0BC: bl      0x7F0180A0
    {
            ctx->lr = 0x7F28D0C0u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F28D0C0:
    ctx->pc = 0x7F28D0C0u;
    ctx->downcount -= 3;
    // 7F28D0C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D0C4:
    ctx->pc = 0x7F28D0C4u;
    // 7F28D0C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D0C8:
    ctx->pc = 0x7F28D0C8u;
    // 7F28D0C8: bl      0x7F290A84
    {
            ctx->lr = 0x7F28D0CCu;
            ctx->pc = 0x7F290A84u;
            return;
    }

label_7F28D0CC:
    ctx->pc = 0x7F28D0CCu;
    ctx->downcount -= 4;
    // 7F28D0CC: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28D0D0:
    ctx->pc = 0x7F28D0D0u;
    // 7F28D0D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D0D4:
    ctx->pc = 0x7F28D0D4u;
    // 7F28D0D4: addi    r4, r4, -13044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13044);

label_7F28D0D8:
    ctx->pc = 0x7F28D0D8u;
    // 7F28D0D8: bl      0x7F290920
    {
            ctx->lr = 0x7F28D0DCu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F28D0DC:
    ctx->pc = 0x7F28D0DCu;
    ctx->downcount -= 1;
    // 7F28D0DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28D0E0:
    ctx->pc = 0x7F28D0E0u;
    ctx->downcount -= 16;
    // 7F28D0E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28D0E4:
    ctx->pc = 0x7F28D0E4u;
    // 7F28D0E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D0E8:
    ctx->pc = 0x7F28D0E8u;
    // 7F28D0E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D0EC:
    ctx->pc = 0x7F28D0ECu;
    // 7F28D0EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D0F0:
    ctx->pc = 0x7F28D0F0u;
    // 7F28D0F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D0F4:
    ctx->pc = 0x7F28D0F4u;
    ctx->downcount -= 10;
    // 7F28D0F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D0F8:
    ctx->pc = 0x7F28D0F8u;
    // 7F28D0F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D0FC:
    ctx->pc = 0x7F28D0FCu;
    // 7F28D0FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D100:
    ctx->pc = 0x7F28D100u;
    // 7F28D100: lis     r5, 32553
    ctx->gpr[5] = ((u32)(s32)(32553) << 16);

label_7F28D104:
    ctx->pc = 0x7F28D104u;
    // 7F28D104: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D108:
    ctx->pc = 0x7F28D108u;
    // 7F28D108: addi    r3, r3, -6808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6808);

label_7F28D10C:
    ctx->pc = 0x7F28D10Cu;
    // 7F28D10C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F28D110:
    ctx->pc = 0x7F28D110u;
    // 7F28D110: addi    r5, r5, -12440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12440);

label_7F28D114:
    ctx->pc = 0x7F28D114u;
    // 7F28D114: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D118:
    ctx->pc = 0x7F28D118u;
    // 7F28D118: bl      0x7F2910CC
    {
            ctx->lr = 0x7F28D11Cu;
            ctx->pc = 0x7F2910CCu;
            return;
    }

label_7F28D11C:
    ctx->pc = 0x7F28D11Cu;
    ctx->downcount -= 6;
    // 7F28D11C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D120:
    ctx->pc = 0x7F28D120u;
    // 7F28D120: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D124:
    ctx->pc = 0x7F28D124u;
    // 7F28D124: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D128:
    ctx->pc = 0x7F28D128u;
    // 7F28D128: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D12C:
    ctx->pc = 0x7F28D12Cu;
    // 7F28D12C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D130:
    ctx->pc = 0x7F28D130u;
    ctx->downcount -= 4;
    // 7F28D130: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D134:
    ctx->pc = 0x7F28D134u;
    // 7F28D134: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D138:
    ctx->pc = 0x7F28D138u;
    // 7F28D138: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D13C:
    ctx->pc = 0x7F28D13Cu;
    // 7F28D13C: bl      0x7F030A40
    {
            ctx->lr = 0x7F28D140u;
            ctx->pc = 0x7F030A40u;
            return;
    }

label_7F28D140:
    ctx->pc = 0x7F28D140u;
    ctx->downcount -= 6;
    // 7F28D140: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D144:
    ctx->pc = 0x7F28D144u;
    // 7F28D144: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28D144u)) return;
    ppc_frsp(ctx, 1, 1);

label_7F28D148:
    ctx->pc = 0x7F28D148u;
    // 7F28D148: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D14C:
    ctx->pc = 0x7F28D14Cu;
    // 7F28D14C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D150:
    ctx->pc = 0x7F28D150u;
    // 7F28D150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D154:
    ctx->pc = 0x7F28D154u;
    ctx->downcount -= 11;
    // 7F28D154: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F28D158:
    ctx->pc = 0x7F28D158u;
    // 7F28D158: addi    r11, r11, -6792
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-6792);

label_7F28D15C:
    ctx->pc = 0x7F28D15Cu;
    // 7F28D15C: stw     r3, 28(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28D160:
    ctx->pc = 0x7F28D160u;
    // 7F28D160: stw     r4, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28D164:
    ctx->pc = 0x7F28D164u;
    // 7F28D164: stw     r5, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28D168:
    ctx->pc = 0x7F28D168u;
    // 7F28D168: stw     r6, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28D16C:
    ctx->pc = 0x7F28D16Cu;
    // 7F28D16C: stw     r7, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28D170:
    ctx->pc = 0x7F28D170u;
    // 7F28D170: stw     r8, 16(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F28D174:
    ctx->pc = 0x7F28D174u;
    // 7F28D174: stw     r9, 20(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F28D178:
    ctx->pc = 0x7F28D178u;
    // 7F28D178: stw     r10, 24(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F28D17C:
    ctx->pc = 0x7F28D17Cu;
    // 7F28D17C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D180:
    ctx->pc = 0x7F28D180u;
    ctx->downcount -= 17;
    // 7F28D180: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D184:
    ctx->pc = 0x7F28D184u;
    // 7F28D184: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D188:
    ctx->pc = 0x7F28D188u;
    // 7F28D188: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D18C:
    ctx->pc = 0x7F28D18Cu;
    // 7F28D18C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28D190:
    ctx->pc = 0x7F28D190u;
    // 7F28D190: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28D194:
    ctx->pc = 0x7F28D194u;
    // 7F28D194: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28D198:
    ctx->pc = 0x7F28D198u;
    // 7F28D198: bl      0x7F28D1DC
    {
            ctx->lr = 0x7F28D19Cu;
            goto label_7F28D1DC;
    }

label_7F28D19C:
    ctx->pc = 0x7F28D19Cu;
    ctx->downcount -= 2;
    // 7F28D19C: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D1A0:
    ctx->pc = 0x7F28D1A0u;
    // 7F28D1A0: bc    12, 2, 0x7F28D1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D1C8;
        }
    }

label_7F28D1A4:
    ctx->pc = 0x7F28D1A4u;
    ctx->downcount -= 9;
    // 7F28D1A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D1A8:
    ctx->pc = 0x7F28D1A8u;
    // 7F28D1A8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28D1AC:
    ctx->pc = 0x7F28D1ACu;
    // 7F28D1AC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F28D1B0:
    ctx->pc = 0x7F28D1B0u;
    // 7F28D1B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D1B4:
    ctx->pc = 0x7F28D1B4u;
    // 7F28D1B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28D1B8:
    ctx->pc = 0x7F28D1B8u;
    // 7F28D1B8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F28D1BC:
    ctx->pc = 0x7F28D1BCu;
    // 7F28D1BC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F28D1C0:
    ctx->pc = 0x7F28D1C0u;
    // 7F28D1C0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F28D1C4:
    ctx->pc = 0x7F28D1C4u;
    // 7F28D1C4: bl      0x7F28D154
    {
            ctx->lr = 0x7F28D1C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28D154u;
                return;
            }
            goto label_7F28D154;
    }

label_7F28D1C8:
    ctx->pc = 0x7F28D1C8u;
    ctx->downcount -= 16;
    // 7F28D1C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28D1CC:
    ctx->pc = 0x7F28D1CCu;
    // 7F28D1CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D1D0:
    ctx->pc = 0x7F28D1D0u;
    // 7F28D1D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D1D4:
    ctx->pc = 0x7F28D1D4u;
    // 7F28D1D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D1D8:
    ctx->pc = 0x7F28D1D8u;
    // 7F28D1D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D1DC:
    ctx->pc = 0x7F28D1DCu;
    ctx->downcount -= 9;
    // 7F28D1DC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D1E0:
    ctx->pc = 0x7F28D1E0u;
    // 7F28D1E0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28D1E4:
    ctx->pc = 0x7F28D1E4u;
    // 7F28D1E4: lwz     r0, -6756(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D1E8:
    ctx->pc = 0x7F28D1E8u;
    // 7F28D1E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D1EC:
    ctx->pc = 0x7F28D1ECu;
    // 7F28D1EC: lwz     r6, -6760(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6760);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28D1F0:
    ctx->pc = 0x7F28D1F0u;
    // 7F28D1F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28D1F4:
    ctx->pc = 0x7F28D1F4u;
    // 7F28D1F4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D1F8:
    ctx->pc = 0x7F28D1F8u;
    // 7F28D1F8: bc    4, 1, 0x7F28D21C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D21C;
        }
    }

label_7F28D1FC:
    ctx->pc = 0x7F28D1FCu;
    ctx->downcount -= 4;
    // 7F28D1FC: lwzx    r5, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28D200:
    ctx->pc = 0x7F28D200u;
    // 7F28D200: lwz     r0, 400(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D204:
    // 7F28D204: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D208:
    // 7F28D208: bc    4, 2, 0x7F28D214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D214;
        }
    }

label_7F28D20C:
    ctx->downcount -= 2;
    // 7F28D20C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F28D210:
    ctx->pc = 0x7F28D210u;
    // 7F28D210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D214:
    ctx->downcount -= 2;
    // 7F28D214: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F28D218:
    // 7F28D218: bc    16, 0, 0x7F28D1FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28D1FCu;
                return;
            }
            goto label_7F28D1FC;
        }
    }

label_7F28D21C:
    ctx->pc = 0x7F28D21Cu;
    ctx->downcount -= 2;
    // 7F28D21C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D220:
    ctx->pc = 0x7F28D220u;
    // 7F28D220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D224:
    ctx->pc = 0x7F28D224u;
    ctx->downcount -= 18;
    // 7F28D224: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D228:
    ctx->pc = 0x7F28D228u;
    // 7F28D228: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D22C:
    ctx->pc = 0x7F28D22Cu;
    // 7F28D22C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D230:
    ctx->pc = 0x7F28D230u;
    // 7F28D230: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D234:
    ctx->pc = 0x7F28D234u;
    // 7F28D234: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28D238:
    ctx->pc = 0x7F28D238u;
    // 7F28D238: lwz     r31, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28D23C:
    ctx->pc = 0x7F28D23Cu;
    // 7F28D23C: cmplwi  r31, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D240:
    ctx->pc = 0x7F28D240u;
    // 7F28D240: bc    4, 2, 0x7F28D24C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D24C;
        }
    }

label_7F28D244:
    ctx->pc = 0x7F28D244u;
    ctx->downcount -= 2;
    // 7F28D244: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D248:
    ctx->pc = 0x7F28D248u;
    // 7F28D248: b       0x7F28D708
    {
            goto label_7F28D708;
    }

label_7F28D24C:
    ctx->pc = 0x7F28D24Cu;
    ctx->downcount -= 6;
    // 7F28D24C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F28D250:
    ctx->pc = 0x7F28D250u;
    // 7F28D250: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F28D254:
    ctx->pc = 0x7F28D254u;
    // 7F28D254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D258:
    ctx->pc = 0x7F28D258u;
    // 7F28D258: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D25C:
    ctx->pc = 0x7F28D25Cu;
    // 7F28D25C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D260:
    ctx->pc = 0x7F28D260u;
    // 7F28D260: bl      0x7F012018
    {
            ctx->lr = 0x7F28D264u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D264:
    ctx->pc = 0x7F28D264u;
    ctx->downcount -= 5;
    // 7F28D264: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D268:
    ctx->pc = 0x7F28D268u;
    // 7F28D268: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D26C:
    ctx->pc = 0x7F28D26Cu;
    // 7F28D26C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D270:
    ctx->pc = 0x7F28D270u;
    // 7F28D270: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D274:
    ctx->pc = 0x7F28D274u;
    // 7F28D274: bc    12, 2, 0x7F28D27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D27C;
        }
    }

label_7F28D278:
    ctx->pc = 0x7F28D278u;
    ctx->downcount -= 1;
    // 7F28D278: ori     r30, r30, 0x0008
    ctx->gpr[30] = ctx->gpr[30] | 0x0008u;

label_7F28D27C:
    ctx->pc = 0x7F28D27Cu;
    ctx->downcount -= 5;
    // 7F28D27C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28D280:
    ctx->pc = 0x7F28D280u;
    // 7F28D280: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D284:
    ctx->pc = 0x7F28D284u;
    // 7F28D284: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D288:
    ctx->pc = 0x7F28D288u;
    // 7F28D288: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D28C:
    ctx->pc = 0x7F28D28Cu;
    // 7F28D28C: bl      0x7F012018
    {
            ctx->lr = 0x7F28D290u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D290:
    ctx->pc = 0x7F28D290u;
    ctx->downcount -= 5;
    // 7F28D290: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D294:
    ctx->pc = 0x7F28D294u;
    // 7F28D294: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D298:
    ctx->pc = 0x7F28D298u;
    // 7F28D298: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D29C:
    ctx->pc = 0x7F28D29Cu;
    // 7F28D29C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D2A0:
    ctx->pc = 0x7F28D2A0u;
    // 7F28D2A0: bc    12, 2, 0x7F28D2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D2A8;
        }
    }

label_7F28D2A4:
    ctx->pc = 0x7F28D2A4u;
    ctx->downcount -= 1;
    // 7F28D2A4: ori     r30, r30, 0x0010
    ctx->gpr[30] = ctx->gpr[30] | 0x0010u;

label_7F28D2A8:
    ctx->pc = 0x7F28D2A8u;
    ctx->downcount -= 5;
    // 7F28D2A8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F28D2AC:
    ctx->pc = 0x7F28D2ACu;
    // 7F28D2AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D2B0:
    ctx->pc = 0x7F28D2B0u;
    // 7F28D2B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D2B4:
    ctx->pc = 0x7F28D2B4u;
    // 7F28D2B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D2B8:
    ctx->pc = 0x7F28D2B8u;
    // 7F28D2B8: bl      0x7F012018
    {
            ctx->lr = 0x7F28D2BCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D2BC:
    ctx->pc = 0x7F28D2BCu;
    ctx->downcount -= 5;
    // 7F28D2BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D2C0:
    ctx->pc = 0x7F28D2C0u;
    // 7F28D2C0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D2C4:
    ctx->pc = 0x7F28D2C4u;
    // 7F28D2C4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D2C8:
    ctx->pc = 0x7F28D2C8u;
    // 7F28D2C8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D2CC:
    ctx->pc = 0x7F28D2CCu;
    // 7F28D2CC: bc    12, 2, 0x7F28D2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D2D4;
        }
    }

label_7F28D2D0:
    ctx->pc = 0x7F28D2D0u;
    ctx->downcount -= 1;
    // 7F28D2D0: ori     r30, r30, 0x0020
    ctx->gpr[30] = ctx->gpr[30] | 0x0020u;

label_7F28D2D4:
    ctx->pc = 0x7F28D2D4u;
    ctx->downcount -= 5;
    // 7F28D2D4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F28D2D8:
    ctx->pc = 0x7F28D2D8u;
    // 7F28D2D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D2DC:
    ctx->pc = 0x7F28D2DCu;
    // 7F28D2DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D2E0:
    ctx->pc = 0x7F28D2E0u;
    // 7F28D2E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D2E4:
    ctx->pc = 0x7F28D2E4u;
    // 7F28D2E4: bl      0x7F012018
    {
            ctx->lr = 0x7F28D2E8u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D2E8:
    ctx->pc = 0x7F28D2E8u;
    ctx->downcount -= 5;
    // 7F28D2E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D2EC:
    ctx->pc = 0x7F28D2ECu;
    // 7F28D2EC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D2F0:
    ctx->pc = 0x7F28D2F0u;
    // 7F28D2F0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D2F4:
    ctx->pc = 0x7F28D2F4u;
    // 7F28D2F4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D2F8:
    ctx->pc = 0x7F28D2F8u;
    // 7F28D2F8: bc    12, 2, 0x7F28D300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D300;
        }
    }

label_7F28D2FC:
    ctx->pc = 0x7F28D2FCu;
    ctx->downcount -= 1;
    // 7F28D2FC: ori     r30, r30, 0x0040
    ctx->gpr[30] = ctx->gpr[30] | 0x0040u;

label_7F28D300:
    ctx->pc = 0x7F28D300u;
    ctx->downcount -= 5;
    // 7F28D300: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F28D304:
    ctx->pc = 0x7F28D304u;
    // 7F28D304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D308:
    ctx->pc = 0x7F28D308u;
    // 7F28D308: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D30C:
    ctx->pc = 0x7F28D30Cu;
    // 7F28D30C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D310:
    ctx->pc = 0x7F28D310u;
    // 7F28D310: bl      0x7F012018
    {
            ctx->lr = 0x7F28D314u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D314:
    ctx->pc = 0x7F28D314u;
    ctx->downcount -= 5;
    // 7F28D314: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D318:
    ctx->pc = 0x7F28D318u;
    // 7F28D318: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D31C:
    ctx->pc = 0x7F28D31Cu;
    // 7F28D31C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D320:
    ctx->pc = 0x7F28D320u;
    // 7F28D320: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D324:
    ctx->pc = 0x7F28D324u;
    // 7F28D324: bc    12, 2, 0x7F28D32C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D32C;
        }
    }

label_7F28D328:
    ctx->pc = 0x7F28D328u;
    ctx->downcount -= 1;
    // 7F28D328: ori     r30, r30, 0x0080
    ctx->gpr[30] = ctx->gpr[30] | 0x0080u;

label_7F28D32C:
    ctx->pc = 0x7F28D32Cu;
    ctx->downcount -= 5;
    // 7F28D32C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F28D330:
    ctx->pc = 0x7F28D330u;
    // 7F28D330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D334:
    ctx->pc = 0x7F28D334u;
    // 7F28D334: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D338:
    ctx->pc = 0x7F28D338u;
    // 7F28D338: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D33C:
    ctx->pc = 0x7F28D33Cu;
    // 7F28D33C: bl      0x7F012018
    {
            ctx->lr = 0x7F28D340u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D340:
    ctx->pc = 0x7F28D340u;
    ctx->downcount -= 5;
    // 7F28D340: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D344:
    ctx->pc = 0x7F28D344u;
    // 7F28D344: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D348:
    ctx->pc = 0x7F28D348u;
    // 7F28D348: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D34C:
    ctx->pc = 0x7F28D34Cu;
    // 7F28D34C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D350:
    ctx->pc = 0x7F28D350u;
    // 7F28D350: bc    12, 2, 0x7F28D358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D358;
        }
    }

label_7F28D354:
    ctx->pc = 0x7F28D354u;
    ctx->downcount -= 1;
    // 7F28D354: ori     r30, r30, 0x0100
    ctx->gpr[30] = ctx->gpr[30] | 0x0100u;

label_7F28D358:
    ctx->pc = 0x7F28D358u;
    ctx->downcount -= 5;
    // 7F28D358: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D35C:
    ctx->pc = 0x7F28D35Cu;
    // 7F28D35C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F28D360:
    ctx->pc = 0x7F28D360u;
    // 7F28D360: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D364:
    ctx->pc = 0x7F28D364u;
    // 7F28D364: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D368:
    ctx->pc = 0x7F28D368u;
    // 7F28D368: bl      0x7F012018
    {
            ctx->lr = 0x7F28D36Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D36C:
    ctx->pc = 0x7F28D36Cu;
    ctx->downcount -= 5;
    // 7F28D36C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D370:
    ctx->pc = 0x7F28D370u;
    // 7F28D370: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D374:
    ctx->pc = 0x7F28D374u;
    // 7F28D374: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D378:
    ctx->pc = 0x7F28D378u;
    // 7F28D378: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D37C:
    ctx->pc = 0x7F28D37Cu;
    // 7F28D37C: bc    12, 2, 0x7F28D384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D384;
        }
    }

label_7F28D380:
    ctx->pc = 0x7F28D380u;
    ctx->downcount -= 1;
    // 7F28D380: ori     r30, r30, 0x0400
    ctx->gpr[30] = ctx->gpr[30] | 0x0400u;

label_7F28D384:
    ctx->pc = 0x7F28D384u;
    ctx->downcount -= 5;
    // 7F28D384: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D388:
    ctx->pc = 0x7F28D388u;
    // 7F28D388: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F28D38C:
    ctx->pc = 0x7F28D38Cu;
    // 7F28D38C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D390:
    ctx->pc = 0x7F28D390u;
    // 7F28D390: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D394:
    ctx->pc = 0x7F28D394u;
    // 7F28D394: bl      0x7F012018
    {
            ctx->lr = 0x7F28D398u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D398:
    ctx->pc = 0x7F28D398u;
    ctx->downcount -= 5;
    // 7F28D398: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D39C:
    ctx->pc = 0x7F28D39Cu;
    // 7F28D39C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D3A0:
    ctx->pc = 0x7F28D3A0u;
    // 7F28D3A0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D3A4:
    ctx->pc = 0x7F28D3A4u;
    // 7F28D3A4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D3A8:
    ctx->pc = 0x7F28D3A8u;
    // 7F28D3A8: bc    12, 2, 0x7F28D3B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D3B0;
        }
    }

label_7F28D3AC:
    ctx->pc = 0x7F28D3ACu;
    ctx->downcount -= 1;
    // 7F28D3AC: ori     r30, r30, 0x0800
    ctx->gpr[30] = ctx->gpr[30] | 0x0800u;

label_7F28D3B0:
    ctx->pc = 0x7F28D3B0u;
    ctx->downcount -= 5;
    // 7F28D3B0: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F28D3B4:
    ctx->pc = 0x7F28D3B4u;
    // 7F28D3B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D3B8:
    ctx->pc = 0x7F28D3B8u;
    // 7F28D3B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D3BC:
    ctx->pc = 0x7F28D3BCu;
    // 7F28D3BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D3C0:
    ctx->pc = 0x7F28D3C0u;
    // 7F28D3C0: bl      0x7F012018
    {
            ctx->lr = 0x7F28D3C4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D3C4:
    ctx->pc = 0x7F28D3C4u;
    ctx->downcount -= 5;
    // 7F28D3C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D3C8:
    ctx->pc = 0x7F28D3C8u;
    // 7F28D3C8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D3CC:
    ctx->pc = 0x7F28D3CCu;
    // 7F28D3CC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D3D0:
    ctx->pc = 0x7F28D3D0u;
    // 7F28D3D0: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D3D4:
    ctx->pc = 0x7F28D3D4u;
    // 7F28D3D4: bc    12, 2, 0x7F28D3DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D3DC;
        }
    }

label_7F28D3D8:
    ctx->pc = 0x7F28D3D8u;
    ctx->downcount -= 1;
    // 7F28D3D8: ori     r30, r30, 0x8000
    ctx->gpr[30] = ctx->gpr[30] | 0x8000u;

label_7F28D3DC:
    ctx->pc = 0x7F28D3DCu;
    ctx->downcount -= 4;
    // 7F28D3DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D3E0:
    ctx->pc = 0x7F28D3E0u;
    // 7F28D3E0: lwz     r0, -6196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D3E4:
    ctx->pc = 0x7F28D3E4u;
    // 7F28D3E4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D3E8:
    ctx->pc = 0x7F28D3E8u;
    // 7F28D3E8: bc    4, 1, 0x7F28D3F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D3F0;
        }
    }

label_7F28D3EC:
    ctx->pc = 0x7F28D3ECu;
    ctx->downcount -= 1;
    // 7F28D3EC: ori     r30, r30, 0x1000
    ctx->gpr[30] = ctx->gpr[30] | 0x1000u;

label_7F28D3F0:
    ctx->pc = 0x7F28D3F0u;
    ctx->downcount -= 3;
    // 7F28D3F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D3F4:
    ctx->pc = 0x7F28D3F4u;
    // 7F28D3F4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F28D3F8:
    ctx->pc = 0x7F28D3F8u;
    // 7F28D3F8: bl      0x7F29011C
    {
            ctx->lr = 0x7F28D3FCu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28D3FC:
    ctx->pc = 0x7F28D3FCu;
    ctx->downcount -= 5;
    // 7F28D3FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D400:
    ctx->pc = 0x7F28D400u;
    // 7F28D400: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D404:
    ctx->pc = 0x7F28D404u;
    // 7F28D404: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D408:
    ctx->pc = 0x7F28D408u;
    // 7F28D408: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D40C:
    ctx->pc = 0x7F28D40Cu;
    // 7F28D40C: bc    12, 2, 0x7F28D414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D414;
        }
    }

label_7F28D410:
    ctx->pc = 0x7F28D410u;
    ctx->downcount -= 1;
    // 7F28D410: ori     r30, r30, 0x2000
    ctx->gpr[30] = ctx->gpr[30] | 0x2000u;

label_7F28D414:
    ctx->pc = 0x7F28D414u;
    ctx->downcount -= 3;
    // 7F28D414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D418:
    ctx->pc = 0x7F28D418u;
    // 7F28D418: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F28D41C:
    ctx->pc = 0x7F28D41Cu;
    // 7F28D41C: bl      0x7F29011C
    {
            ctx->lr = 0x7F28D420u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28D420:
    ctx->pc = 0x7F28D420u;
    ctx->downcount -= 5;
    // 7F28D420: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D424:
    ctx->pc = 0x7F28D424u;
    // 7F28D424: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D428:
    ctx->pc = 0x7F28D428u;
    // 7F28D428: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D42C:
    ctx->pc = 0x7F28D42Cu;
    // 7F28D42C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D430:
    ctx->pc = 0x7F28D430u;
    // 7F28D430: bc    12, 2, 0x7F28D438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D438;
        }
    }

label_7F28D434:
    ctx->pc = 0x7F28D434u;
    ctx->downcount -= 1;
    // 7F28D434: ori     r30, r30, 0x4000
    ctx->gpr[30] = ctx->gpr[30] | 0x4000u;

label_7F28D438:
    ctx->pc = 0x7F28D438u;
    ctx->downcount -= 5;
    // 7F28D438: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D43C:
    ctx->pc = 0x7F28D43Cu;
    // 7F28D43C: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_7F28D440:
    ctx->pc = 0x7F28D440u;
    // 7F28D440: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D444:
    ctx->pc = 0x7F28D444u;
    // 7F28D444: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D448:
    ctx->pc = 0x7F28D448u;
    // 7F28D448: bl      0x7F012018
    {
            ctx->lr = 0x7F28D44Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D44C:
    ctx->pc = 0x7F28D44Cu;
    ctx->downcount -= 5;
    // 7F28D44C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D450:
    ctx->pc = 0x7F28D450u;
    // 7F28D450: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D454:
    ctx->pc = 0x7F28D454u;
    // 7F28D454: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D458:
    ctx->pc = 0x7F28D458u;
    // 7F28D458: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D45C:
    ctx->pc = 0x7F28D45Cu;
    // 7F28D45C: bc    12, 2, 0x7F28D464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D464;
        }
    }

label_7F28D460:
    ctx->pc = 0x7F28D460u;
    ctx->downcount -= 1;
    // 7F28D460: oris    r30, r30, 0x0001
    ctx->gpr[30] = ctx->gpr[30] | (0x0001u << 16);

label_7F28D464:
    ctx->pc = 0x7F28D464u;
    ctx->downcount -= 5;
    // 7F28D464: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D468:
    ctx->pc = 0x7F28D468u;
    // 7F28D468: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_7F28D46C:
    ctx->pc = 0x7F28D46Cu;
    // 7F28D46C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D470:
    ctx->pc = 0x7F28D470u;
    // 7F28D470: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D474:
    ctx->pc = 0x7F28D474u;
    // 7F28D474: bl      0x7F012018
    {
            ctx->lr = 0x7F28D478u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D478:
    ctx->pc = 0x7F28D478u;
    ctx->downcount -= 5;
    // 7F28D478: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D47C:
    ctx->pc = 0x7F28D47Cu;
    // 7F28D47C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D480:
    ctx->pc = 0x7F28D480u;
    // 7F28D480: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D484:
    ctx->pc = 0x7F28D484u;
    // 7F28D484: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D488:
    ctx->pc = 0x7F28D488u;
    // 7F28D488: bc    12, 2, 0x7F28D490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D490;
        }
    }

label_7F28D48C:
    ctx->pc = 0x7F28D48Cu;
    ctx->downcount -= 1;
    // 7F28D48C: oris    r30, r30, 0x0002
    ctx->gpr[30] = ctx->gpr[30] | (0x0002u << 16);

label_7F28D490:
    ctx->pc = 0x7F28D490u;
    ctx->downcount -= 5;
    // 7F28D490: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F28D494:
    ctx->pc = 0x7F28D494u;
    // 7F28D494: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D498:
    ctx->pc = 0x7F28D498u;
    // 7F28D498: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D49C:
    ctx->pc = 0x7F28D49Cu;
    // 7F28D49C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D4A0:
    ctx->pc = 0x7F28D4A0u;
    // 7F28D4A0: bl      0x7F012018
    {
            ctx->lr = 0x7F28D4A4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D4A4:
    ctx->pc = 0x7F28D4A4u;
    ctx->downcount -= 5;
    // 7F28D4A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D4A8:
    ctx->pc = 0x7F28D4A8u;
    // 7F28D4A8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D4AC:
    ctx->pc = 0x7F28D4ACu;
    // 7F28D4AC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D4B0:
    ctx->pc = 0x7F28D4B0u;
    // 7F28D4B0: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D4B4:
    ctx->pc = 0x7F28D4B4u;
    // 7F28D4B4: bc    12, 2, 0x7F28D4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D4BC;
        }
    }

label_7F28D4B8:
    ctx->pc = 0x7F28D4B8u;
    ctx->downcount -= 1;
    // 7F28D4B8: oris    r30, r30, 0x0004
    ctx->gpr[30] = ctx->gpr[30] | (0x0004u << 16);

label_7F28D4BC:
    ctx->pc = 0x7F28D4BCu;
    ctx->downcount -= 5;
    // 7F28D4BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D4C0:
    ctx->pc = 0x7F28D4C0u;
    // 7F28D4C0: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F28D4C4:
    ctx->pc = 0x7F28D4C4u;
    // 7F28D4C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D4C8:
    ctx->pc = 0x7F28D4C8u;
    // 7F28D4C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D4CC:
    ctx->pc = 0x7F28D4CCu;
    // 7F28D4CC: bl      0x7F012018
    {
            ctx->lr = 0x7F28D4D0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D4D0:
    ctx->pc = 0x7F28D4D0u;
    ctx->downcount -= 5;
    // 7F28D4D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D4D4:
    ctx->pc = 0x7F28D4D4u;
    // 7F28D4D4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D4D8:
    ctx->pc = 0x7F28D4D8u;
    // 7F28D4D8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D4DC:
    ctx->pc = 0x7F28D4DCu;
    // 7F28D4DC: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D4E0:
    ctx->pc = 0x7F28D4E0u;
    // 7F28D4E0: bc    12, 2, 0x7F28D4E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D4E8;
        }
    }

label_7F28D4E4:
    ctx->pc = 0x7F28D4E4u;
    ctx->downcount -= 1;
    // 7F28D4E4: oris    r30, r30, 0x0008
    ctx->gpr[30] = ctx->gpr[30] | (0x0008u << 16);

label_7F28D4E8:
    ctx->pc = 0x7F28D4E8u;
    ctx->downcount -= 5;
    // 7F28D4E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D4EC:
    ctx->pc = 0x7F28D4ECu;
    // 7F28D4EC: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F28D4F0:
    ctx->pc = 0x7F28D4F0u;
    // 7F28D4F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D4F4:
    ctx->pc = 0x7F28D4F4u;
    // 7F28D4F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D4F8:
    ctx->pc = 0x7F28D4F8u;
    // 7F28D4F8: bl      0x7F012018
    {
            ctx->lr = 0x7F28D4FCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D4FC:
    ctx->pc = 0x7F28D4FCu;
    ctx->downcount -= 5;
    // 7F28D4FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D500:
    ctx->pc = 0x7F28D500u;
    // 7F28D500: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D504:
    ctx->pc = 0x7F28D504u;
    // 7F28D504: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D508:
    ctx->pc = 0x7F28D508u;
    // 7F28D508: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D50C:
    ctx->pc = 0x7F28D50Cu;
    // 7F28D50C: bc    12, 2, 0x7F28D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D514;
        }
    }

label_7F28D510:
    ctx->pc = 0x7F28D510u;
    ctx->downcount -= 1;
    // 7F28D510: oris    r30, r30, 0x0010
    ctx->gpr[30] = ctx->gpr[30] | (0x0010u << 16);

label_7F28D514:
    ctx->pc = 0x7F28D514u;
    ctx->downcount -= 5;
    // 7F28D514: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D518:
    ctx->pc = 0x7F28D518u;
    // 7F28D518: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F28D51C:
    ctx->pc = 0x7F28D51Cu;
    // 7F28D51C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D520:
    ctx->pc = 0x7F28D520u;
    // 7F28D520: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D524:
    ctx->pc = 0x7F28D524u;
    // 7F28D524: bl      0x7F012018
    {
            ctx->lr = 0x7F28D528u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D528:
    ctx->pc = 0x7F28D528u;
    ctx->downcount -= 5;
    // 7F28D528: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D52C:
    ctx->pc = 0x7F28D52Cu;
    // 7F28D52C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D530:
    ctx->pc = 0x7F28D530u;
    // 7F28D530: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D534:
    ctx->pc = 0x7F28D534u;
    // 7F28D534: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D538:
    ctx->pc = 0x7F28D538u;
    // 7F28D538: bc    12, 2, 0x7F28D540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D540;
        }
    }

label_7F28D53C:
    ctx->pc = 0x7F28D53Cu;
    ctx->downcount -= 1;
    // 7F28D53C: oris    r30, r30, 0x0020
    ctx->gpr[30] = ctx->gpr[30] | (0x0020u << 16);

label_7F28D540:
    ctx->pc = 0x7F28D540u;
    ctx->downcount -= 5;
    // 7F28D540: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D544:
    ctx->pc = 0x7F28D544u;
    // 7F28D544: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F28D548:
    ctx->pc = 0x7F28D548u;
    // 7F28D548: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D54C:
    ctx->pc = 0x7F28D54Cu;
    // 7F28D54C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D550:
    ctx->pc = 0x7F28D550u;
    // 7F28D550: bl      0x7F012018
    {
            ctx->lr = 0x7F28D554u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D554:
    ctx->pc = 0x7F28D554u;
    ctx->downcount -= 5;
    // 7F28D554: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D558:
    ctx->pc = 0x7F28D558u;
    // 7F28D558: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D55C:
    ctx->pc = 0x7F28D55Cu;
    // 7F28D55C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D560:
    ctx->pc = 0x7F28D560u;
    // 7F28D560: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D564:
    ctx->pc = 0x7F28D564u;
    // 7F28D564: bc    12, 2, 0x7F28D56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D56C;
        }
    }

label_7F28D568:
    ctx->pc = 0x7F28D568u;
    ctx->downcount -= 1;
    // 7F28D568: oris    r30, r30, 0x0040
    ctx->gpr[30] = ctx->gpr[30] | (0x0040u << 16);

label_7F28D56C:
    ctx->pc = 0x7F28D56Cu;
    ctx->downcount -= 5;
    // 7F28D56C: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F28D570:
    ctx->pc = 0x7F28D570u;
    // 7F28D570: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D574:
    ctx->pc = 0x7F28D574u;
    // 7F28D574: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D578:
    ctx->pc = 0x7F28D578u;
    // 7F28D578: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D57C:
    ctx->pc = 0x7F28D57Cu;
    // 7F28D57C: bl      0x7F012018
    {
            ctx->lr = 0x7F28D580u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D580:
    ctx->pc = 0x7F28D580u;
    ctx->downcount -= 5;
    // 7F28D580: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D584:
    ctx->pc = 0x7F28D584u;
    // 7F28D584: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D588:
    ctx->pc = 0x7F28D588u;
    // 7F28D588: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D58C:
    ctx->pc = 0x7F28D58Cu;
    // 7F28D58C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D590:
    ctx->pc = 0x7F28D590u;
    // 7F28D590: bc    12, 2, 0x7F28D598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D598;
        }
    }

label_7F28D594:
    ctx->pc = 0x7F28D594u;
    ctx->downcount -= 1;
    // 7F28D594: oris    r30, r30, 0x0080
    ctx->gpr[30] = ctx->gpr[30] | (0x0080u << 16);

label_7F28D598:
    ctx->pc = 0x7F28D598u;
    ctx->downcount -= 7;
    // 7F28D598: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D59C:
    ctx->pc = 0x7F28D59Cu;
    // 7F28D59C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F28D5A0:
    ctx->pc = 0x7F28D5A0u;
    // 7F28D5A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D5A4:
    ctx->pc = 0x7F28D5A4u;
    // 7F28D5A4: lwz     r3, 2624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D5A8:
    ctx->pc = 0x7F28D5A8u;
    // 7F28D5A8: addis   r0, r3, -123
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-123) << 16);

label_7F28D5AC:
    ctx->pc = 0x7F28D5ACu;
    // 7F28D5AC: cmplwi  r0, 0x73C4
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x73C4u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D5B0:
    ctx->pc = 0x7F28D5B0u;
    // 7F28D5B0: bc    4, 2, 0x7F28D5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D5B8;
        }
    }

label_7F28D5B4:
    ctx->pc = 0x7F28D5B4u;
    ctx->downcount -= 1;
    // 7F28D5B4: oris    r30, r30, 0x0100
    ctx->gpr[30] = ctx->gpr[30] | (0x0100u << 16);

label_7F28D5B8:
    ctx->pc = 0x7F28D5B8u;
    ctx->downcount -= 5;
    // 7F28D5B8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F28D5BC:
    ctx->pc = 0x7F28D5BCu;
    // 7F28D5BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D5C0:
    ctx->pc = 0x7F28D5C0u;
    // 7F28D5C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D5C4:
    ctx->pc = 0x7F28D5C4u;
    // 7F28D5C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D5C8:
    ctx->pc = 0x7F28D5C8u;
    // 7F28D5C8: bl      0x7F012018
    {
            ctx->lr = 0x7F28D5CCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D5CC:
    ctx->pc = 0x7F28D5CCu;
    ctx->downcount -= 5;
    // 7F28D5CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D5D0:
    ctx->pc = 0x7F28D5D0u;
    // 7F28D5D0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D5D4:
    ctx->pc = 0x7F28D5D4u;
    // 7F28D5D4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D5D8:
    ctx->pc = 0x7F28D5D8u;
    // 7F28D5D8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D5DC:
    ctx->pc = 0x7F28D5DCu;
    // 7F28D5DC: bc    12, 2, 0x7F28D5E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D5E4;
        }
    }

label_7F28D5E0:
    ctx->pc = 0x7F28D5E0u;
    ctx->downcount -= 1;
    // 7F28D5E0: oris    r30, r30, 0x0200
    ctx->gpr[30] = ctx->gpr[30] | (0x0200u << 16);

label_7F28D5E4:
    ctx->pc = 0x7F28D5E4u;
    ctx->downcount -= 5;
    // 7F28D5E4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F28D5E8:
    ctx->pc = 0x7F28D5E8u;
    // 7F28D5E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D5EC:
    ctx->pc = 0x7F28D5ECu;
    // 7F28D5EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D5F0:
    ctx->pc = 0x7F28D5F0u;
    // 7F28D5F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D5F4:
    ctx->pc = 0x7F28D5F4u;
    // 7F28D5F4: bl      0x7F012018
    {
            ctx->lr = 0x7F28D5F8u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D5F8:
    ctx->pc = 0x7F28D5F8u;
    ctx->downcount -= 5;
    // 7F28D5F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D5FC:
    ctx->pc = 0x7F28D5FCu;
    // 7F28D5FC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D600:
    ctx->pc = 0x7F28D600u;
    // 7F28D600: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D604:
    ctx->pc = 0x7F28D604u;
    // 7F28D604: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D608:
    ctx->pc = 0x7F28D608u;
    // 7F28D608: bc    12, 2, 0x7F28D610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D610;
        }
    }

label_7F28D60C:
    ctx->pc = 0x7F28D60Cu;
    ctx->downcount -= 1;
    // 7F28D60C: oris    r30, r30, 0x0400
    ctx->gpr[30] = ctx->gpr[30] | (0x0400u << 16);

label_7F28D610:
    ctx->pc = 0x7F28D610u;
    ctx->downcount -= 5;
    // 7F28D610: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F28D614:
    ctx->pc = 0x7F28D614u;
    // 7F28D614: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D618:
    ctx->pc = 0x7F28D618u;
    // 7F28D618: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D61C:
    ctx->pc = 0x7F28D61Cu;
    // 7F28D61C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D620:
    ctx->pc = 0x7F28D620u;
    // 7F28D620: bl      0x7F012018
    {
            ctx->lr = 0x7F28D624u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D624:
    ctx->pc = 0x7F28D624u;
    ctx->downcount -= 5;
    // 7F28D624: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D628:
    ctx->pc = 0x7F28D628u;
    // 7F28D628: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D62C:
    ctx->pc = 0x7F28D62Cu;
    // 7F28D62C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D630:
    ctx->pc = 0x7F28D630u;
    // 7F28D630: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D634:
    ctx->pc = 0x7F28D634u;
    // 7F28D634: bc    12, 2, 0x7F28D63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D63C;
        }
    }

label_7F28D638:
    ctx->pc = 0x7F28D638u;
    ctx->downcount -= 1;
    // 7F28D638: ori     r30, r30, 0x0200
    ctx->gpr[30] = ctx->gpr[30] | 0x0200u;

label_7F28D63C:
    ctx->pc = 0x7F28D63Cu;
    ctx->downcount -= 5;
    // 7F28D63C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D640:
    ctx->pc = 0x7F28D640u;
    // 7F28D640: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F28D644:
    ctx->pc = 0x7F28D644u;
    // 7F28D644: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D648:
    ctx->pc = 0x7F28D648u;
    // 7F28D648: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D64C:
    ctx->pc = 0x7F28D64Cu;
    // 7F28D64C: bl      0x7F012018
    {
            ctx->lr = 0x7F28D650u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D650:
    ctx->pc = 0x7F28D650u;
    ctx->downcount -= 5;
    // 7F28D650: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D654:
    ctx->pc = 0x7F28D654u;
    // 7F28D654: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D658:
    ctx->pc = 0x7F28D658u;
    // 7F28D658: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D65C:
    ctx->pc = 0x7F28D65Cu;
    // 7F28D65C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D660:
    ctx->pc = 0x7F28D660u;
    // 7F28D660: bc    4, 2, 0x7F28D674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D674;
        }
    }

label_7F28D664:
    ctx->pc = 0x7F28D664u;
    ctx->downcount -= 4;
    // 7F28D664: lwz     r3, 2624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D668:
    ctx->pc = 0x7F28D668u;
    // 7F28D668: addis   r0, r3, -133
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-133) << 16);

label_7F28D66C:
    ctx->pc = 0x7F28D66Cu;
    // 7F28D66C: cmplwi  r0, 0x6142
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x6142u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D670:
    ctx->pc = 0x7F28D670u;
    // 7F28D670: bc    4, 2, 0x7F28D678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D678;
        }
    }

label_7F28D674:
    ctx->pc = 0x7F28D674u;
    ctx->downcount -= 1;
    // 7F28D674: oris    r30, r30, 0x0800
    ctx->gpr[30] = ctx->gpr[30] | (0x0800u << 16);

label_7F28D678:
    ctx->pc = 0x7F28D678u;
    ctx->downcount -= 4;
    // 7F28D678: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D67C:
    ctx->pc = 0x7F28D67Cu;
    // 7F28D67C: lwz     r0, -5976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D680:
    ctx->pc = 0x7F28D680u;
    // 7F28D680: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D684:
    ctx->pc = 0x7F28D684u;
    // 7F28D684: bc    12, 2, 0x7F28D68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D68C;
        }
    }

label_7F28D688:
    ctx->pc = 0x7F28D688u;
    ctx->downcount -= 1;
    // 7F28D688: oris    r30, r30, 0x1000
    ctx->gpr[30] = ctx->gpr[30] | (0x1000u << 16);

label_7F28D68C:
    ctx->pc = 0x7F28D68Cu;
    ctx->downcount -= 5;
    // 7F28D68C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D690:
    ctx->pc = 0x7F28D690u;
    // 7F28D690: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D694:
    ctx->pc = 0x7F28D694u;
    // 7F28D694: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F28D698:
    ctx->pc = 0x7F28D698u;
    // 7F28D698: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F28D69C:
    ctx->pc = 0x7F28D69Cu;
    // 7F28D69C: bl      0x7F012018
    {
            ctx->lr = 0x7F28D6A0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D6A0:
    ctx->pc = 0x7F28D6A0u;
    ctx->downcount -= 5;
    // 7F28D6A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D6A4:
    ctx->pc = 0x7F28D6A4u;
    // 7F28D6A4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D6A8:
    ctx->pc = 0x7F28D6A8u;
    // 7F28D6A8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D6AC:
    ctx->pc = 0x7F28D6ACu;
    // 7F28D6AC: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D6B0:
    ctx->pc = 0x7F28D6B0u;
    // 7F28D6B0: bc    12, 2, 0x7F28D6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D6B8;
        }
    }

label_7F28D6B4:
    ctx->pc = 0x7F28D6B4u;
    ctx->downcount -= 1;
    // 7F28D6B4: oris    r30, r30, 0x2000
    ctx->gpr[30] = ctx->gpr[30] | (0x2000u << 16);

label_7F28D6B8:
    ctx->pc = 0x7F28D6B8u;
    ctx->downcount -= 5;
    // 7F28D6B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D6BC:
    ctx->pc = 0x7F28D6BCu;
    // 7F28D6BC: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F28D6C0:
    ctx->pc = 0x7F28D6C0u;
    // 7F28D6C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D6C4:
    ctx->pc = 0x7F28D6C4u;
    // 7F28D6C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D6C8:
    ctx->pc = 0x7F28D6C8u;
    // 7F28D6C8: bl      0x7F012018
    {
            ctx->lr = 0x7F28D6CCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D6CC:
    ctx->pc = 0x7F28D6CCu;
    ctx->downcount -= 5;
    // 7F28D6CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D6D0:
    ctx->pc = 0x7F28D6D0u;
    // 7F28D6D0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D6D4:
    ctx->pc = 0x7F28D6D4u;
    // 7F28D6D4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D6D8:
    ctx->pc = 0x7F28D6D8u;
    // 7F28D6D8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D6DC:
    ctx->pc = 0x7F28D6DCu;
    // 7F28D6DC: bc    12, 2, 0x7F28D6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D6E4;
        }
    }

label_7F28D6E0:
    ctx->pc = 0x7F28D6E0u;
    ctx->downcount -= 1;
    // 7F28D6E0: oris    r30, r30, 0x4000
    ctx->gpr[30] = ctx->gpr[30] | (0x4000u << 16);

label_7F28D6E4:
    ctx->pc = 0x7F28D6E4u;
    ctx->downcount -= 2;
    // 7F28D6E4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F28D6E8:
    ctx->pc = 0x7F28D6E8u;
    // 7F28D6E8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28D6ECu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28D6EC:
    ctx->pc = 0x7F28D6ECu;
    ctx->downcount -= 2;
    // 7F28D6EC: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D6F0:
    ctx->pc = 0x7F28D6F0u;
    // 7F28D6F0: bc    12, 2, 0x7F28D6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D6FC;
        }
    }

label_7F28D6F4:
    ctx->pc = 0x7F28D6F4u;
    ctx->downcount -= 2;
    // 7F28D6F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28D6F8:
    ctx->pc = 0x7F28D6F8u;
    // 7F28D6F8: b       0x7F28D708
    {
            goto label_7F28D708;
    }

label_7F28D6FC:
    ctx->pc = 0x7F28D6FCu;
    ctx->downcount -= 3;
    // 7F28D6FC: lis     r3, -4129
    ctx->gpr[3] = ((u32)(s32)(-4129) << 16);

label_7F28D700:
    ctx->pc = 0x7F28D700u;
    // 7F28D700: addi    r0, r3, 4095
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4095);

label_7F28D704:
    ctx->pc = 0x7F28D704u;
    // 7F28D704: and   r3, r30, r0
    {
        ctx->gpr[3] = ctx->gpr[30] & ctx->gpr[0];
    }

label_7F28D708:
    ctx->pc = 0x7F28D708u;
    ctx->downcount -= 16;
    // 7F28D708: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28D70C:
    ctx->pc = 0x7F28D70Cu;
    // 7F28D70C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D710:
    ctx->pc = 0x7F28D710u;
    // 7F28D710: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D714:
    ctx->pc = 0x7F28D714u;
    // 7F28D714: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D718:
    ctx->pc = 0x7F28D718u;
    // 7F28D718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D71C:
    ctx->pc = 0x7F28D71Cu;
    ctx->downcount -= 7;
    // 7F28D71C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D720:
    ctx->pc = 0x7F28D720u;
    // 7F28D720: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D724:
    ctx->pc = 0x7F28D724u;
    // 7F28D724: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F28D728:
    ctx->pc = 0x7F28D728u;
    // 7F28D728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D72C:
    ctx->pc = 0x7F28D72Cu;
    // 7F28D72C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D730:
    ctx->pc = 0x7F28D730u;
    // 7F28D730: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28D734:
    ctx->pc = 0x7F28D734u;
    // 7F28D734: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D738u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D738:
    ctx->pc = 0x7F28D738u;
    ctx->downcount -= 4;
    // 7F28D738: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28D73C:
    ctx->pc = 0x7F28D73Cu;
    // 7F28D73C: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F28D740:
    ctx->pc = 0x7F28D740u;
    // 7F28D740: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D744:
    ctx->pc = 0x7F28D744u;
    // 7F28D744: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D748u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D748:
    ctx->pc = 0x7F28D748u;
    ctx->downcount -= 3;
    // 7F28D748: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D74C:
    ctx->pc = 0x7F28D74Cu;
    // 7F28D74C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28D750:
    ctx->pc = 0x7F28D750u;
    // 7F28D750: bc    4, 2, 0x7F28D79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D79C;
        }
    }

label_7F28D754:
    ctx->pc = 0x7F28D754u;
    ctx->downcount -= 2;
    // 7F28D754: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D758:
    ctx->pc = 0x7F28D758u;
    // 7F28D758: bc    4, 2, 0x7F28D77C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D77C;
        }
    }

label_7F28D75C:
    ctx->pc = 0x7F28D75Cu;
    ctx->downcount -= 3;
    // 7F28D75C: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F28D760:
    ctx->pc = 0x7F28D760u;
    // 7F28D760: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D764:
    ctx->pc = 0x7F28D764u;
    // 7F28D764: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D768u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D768:
    ctx->pc = 0x7F28D768u;
    ctx->downcount -= 5;
    // 7F28D768: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D76C:
    ctx->pc = 0x7F28D76Cu;
    // 7F28D76C: lwzu     r0, -6212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6212);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28D770:
    ctx->pc = 0x7F28D770u;
    // 7F28D770: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F28D774:
    ctx->pc = 0x7F28D774u;
    // 7F28D774: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D778:
    ctx->pc = 0x7F28D778u;
    // 7F28D778: b       0x7F28D7E0
    {
            goto label_7F28D7E0;
    }

label_7F28D77C:
    ctx->pc = 0x7F28D77Cu;
    ctx->downcount -= 3;
    // 7F28D77C: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F28D780:
    ctx->pc = 0x7F28D780u;
    // 7F28D780: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D784:
    ctx->pc = 0x7F28D784u;
    // 7F28D784: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D788u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D788:
    ctx->pc = 0x7F28D788u;
    ctx->downcount -= 5;
    // 7F28D788: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D78C:
    ctx->pc = 0x7F28D78Cu;
    // 7F28D78C: lwzu     r0, -6208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6208);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28D790:
    ctx->pc = 0x7F28D790u;
    // 7F28D790: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F28D794:
    ctx->pc = 0x7F28D794u;
    // 7F28D794: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D798:
    ctx->pc = 0x7F28D798u;
    // 7F28D798: b       0x7F28D7E0
    {
            goto label_7F28D7E0;
    }

label_7F28D79C:
    ctx->pc = 0x7F28D79Cu;
    ctx->downcount -= 3;
    // 7F28D79C: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F28D7A0:
    ctx->pc = 0x7F28D7A0u;
    // 7F28D7A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D7A4:
    ctx->pc = 0x7F28D7A4u;
    // 7F28D7A4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D7A8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D7A8:
    ctx->pc = 0x7F28D7A8u;
    ctx->downcount -= 8;
    // 7F28D7A8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D7AC:
    ctx->pc = 0x7F28D7ACu;
    // 7F28D7AC: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D7B0:
    ctx->pc = 0x7F28D7B0u;
    // 7F28D7B0: addi    r5, r4, -5660
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F28D7B4:
    ctx->pc = 0x7F28D7B4u;
    // 7F28D7B4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28D7B8:
    ctx->pc = 0x7F28D7B8u;
    // 7F28D7B8: lha     r0, 1922(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1922);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28D7BC:
    ctx->pc = 0x7F28D7BCu;
    // 7F28D7BC: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F28D7C0:
    ctx->pc = 0x7F28D7C0u;
    // 7F28D7C0: sth     r0, 1922(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1922);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28D7C4:
    ctx->pc = 0x7F28D7C4u;
    // 7F28D7C4: bc    12, 2, 0x7F28D7E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D7E0;
        }
    }

label_7F28D7C8:
    ctx->pc = 0x7F28D7C8u;
    ctx->downcount -= 4;
    // 7F28D7C8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D7CC:
    ctx->pc = 0x7F28D7CCu;
    // 7F28D7CC: lha     r0, 1922(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1922);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28D7D0:
    ctx->pc = 0x7F28D7D0u;
    // 7F28D7D0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D7D4:
    ctx->pc = 0x7F28D7D4u;
    // 7F28D7D4: bc    12, 1, 0x7F28D7E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D7E0;
        }
    }

label_7F28D7D8:
    ctx->pc = 0x7F28D7D8u;
    ctx->downcount -= 2;
    // 7F28D7D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28D7DC:
    ctx->pc = 0x7F28D7DCu;
    // 7F28D7DC: sth     r0, 1922(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1922);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28D7E0:
    ctx->pc = 0x7F28D7E0u;
    ctx->downcount -= 7;
    // 7F28D7E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D7E4:
    ctx->pc = 0x7F28D7E4u;
    // 7F28D7E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D7E8:
    ctx->pc = 0x7F28D7E8u;
    // 7F28D7E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28D7EC:
    ctx->pc = 0x7F28D7ECu;
    // 7F28D7EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D7F0:
    ctx->pc = 0x7F28D7F0u;
    // 7F28D7F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D7F4:
    ctx->pc = 0x7F28D7F4u;
    // 7F28D7F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D7F8:
    ctx->pc = 0x7F28D7F8u;
    ctx->downcount -= 6;
    // 7F28D7F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D7FC:
    ctx->pc = 0x7F28D7FCu;
    // 7F28D7FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D800:
    ctx->pc = 0x7F28D800u;
    // 7F28D800: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F28D804:
    ctx->pc = 0x7F28D804u;
    // 7F28D804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D808:
    ctx->pc = 0x7F28D808u;
    // 7F28D808: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D80C:
    ctx->pc = 0x7F28D80Cu;
    // 7F28D80C: bl      0x7F2900CC
    {
            ctx->lr = 0x7F28D810u;
            goto label_7F2900CC;
    }

label_7F28D810:
    ctx->pc = 0x7F28D810u;
    ctx->downcount -= 6;
    // 7F28D810: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D814:
    ctx->pc = 0x7F28D814u;
    // 7F28D814: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D818:
    ctx->pc = 0x7F28D818u;
    // 7F28D818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D81C:
    ctx->pc = 0x7F28D81Cu;
    // 7F28D81C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D820:
    ctx->pc = 0x7F28D820u;
    // 7F28D820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D824:
    ctx->pc = 0x7F28D824u;
    ctx->downcount -= 9;
    // 7F28D824: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D828:
    ctx->pc = 0x7F28D828u;
    // 7F28D828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D82C:
    ctx->pc = 0x7F28D82Cu;
    // 7F28D82C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D830:
    ctx->pc = 0x7F28D830u;
    // 7F28D830: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D834:
    ctx->pc = 0x7F28D834u;
    // 7F28D834: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28D838:
    ctx->pc = 0x7F28D838u;
    // 7F28D838: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28D83C:
    ctx->pc = 0x7F28D83Cu;
    // 7F28D83C: lwz     r0, -5660(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D840:
    ctx->pc = 0x7F28D840u;
    // 7F28D840: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D844:
    ctx->pc = 0x7F28D844u;
    // 7F28D844: bc    12, 2, 0x7F28D868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D868;
        }
    }

label_7F28D848:
    ctx->pc = 0x7F28D848u;
    ctx->downcount -= 3;
    // 7F28D848: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D84C:
    ctx->pc = 0x7F28D84Cu;
    // 7F28D84C: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28D850:
    ctx->pc = 0x7F28D850u;
    // 7F28D850: bl      0x7F29011C
    {
            ctx->lr = 0x7F28D854u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28D854:
    ctx->pc = 0x7F28D854u;
    ctx->downcount -= 5;
    // 7F28D854: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D858:
    ctx->pc = 0x7F28D858u;
    // 7F28D858: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D85C:
    ctx->pc = 0x7F28D85Cu;
    // 7F28D85C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D860:
    ctx->pc = 0x7F28D860u;
    // 7F28D860: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D864:
    ctx->pc = 0x7F28D864u;
    // 7F28D864: bc    4, 2, 0x7F28D8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D8A4;
        }
    }

label_7F28D868:
    ctx->pc = 0x7F28D868u;
    ctx->downcount -= 14;
    // 7F28D868: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28D86C:
    ctx->pc = 0x7F28D86Cu;
    // 7F28D86C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D870:
    ctx->pc = 0x7F28D870u;
    // 7F28D870: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F28D874:
    ctx->pc = 0x7F28D874u;
    // 7F28D874: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28D878:
    ctx->pc = 0x7F28D878u;
    // 7F28D878: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28D87C:
    ctx->pc = 0x7F28D87Cu;
    // 7F28D87C: addi    r8, r4, -5892
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-5892);

label_7F28D880:
    ctx->pc = 0x7F28D880u;
    // 7F28D880: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28D884:
    ctx->pc = 0x7F28D884u;
    // 7F28D884: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28D888:
    ctx->pc = 0x7F28D888u;
    // 7F28D888: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D88C:
    ctx->pc = 0x7F28D88Cu;
    // 7F28D88C: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28D890:
    ctx->pc = 0x7F28D890u;
    // 7F28D890: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28D894:
    ctx->pc = 0x7F28D894u;
    // 7F28D894: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28D898:
    ctx->pc = 0x7F28D898u;
    // 7F28D898: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D89C:
    ctx->pc = 0x7F28D89Cu;
    // 7F28D89C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F28D8A0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F28D8A0:
    ctx->pc = 0x7F28D8A0u;
    ctx->downcount -= 1;
    // 7F28D8A0: b       0x7F28D968
    {
            goto label_7F28D968;
    }

label_7F28D8A4:
    ctx->pc = 0x7F28D8A4u;
    ctx->downcount -= 5;
    // 7F28D8A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28D8A8:
    ctx->pc = 0x7F28D8A8u;
    // 7F28D8A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D8AC:
    ctx->pc = 0x7F28D8ACu;
    // 7F28D8AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28D8B0:
    ctx->pc = 0x7F28D8B0u;
    // 7F28D8B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28D8B4:
    ctx->pc = 0x7F28D8B4u;
    // 7F28D8B4: bl      0x7F012018
    {
            ctx->lr = 0x7F28D8B8u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28D8B8:
    ctx->pc = 0x7F28D8B8u;
    ctx->downcount -= 5;
    // 7F28D8B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D8BC:
    ctx->pc = 0x7F28D8BCu;
    // 7F28D8BC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28D8C0:
    ctx->pc = 0x7F28D8C0u;
    // 7F28D8C0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28D8C4:
    ctx->pc = 0x7F28D8C4u;
    // 7F28D8C4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28D8C8:
    ctx->pc = 0x7F28D8C8u;
    // 7F28D8C8: bc    12, 2, 0x7F28D8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D8E4;
        }
    }

label_7F28D8CC:
    ctx->pc = 0x7F28D8CCu;
    ctx->downcount -= 6;
    // 7F28D8CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D8D0:
    ctx->pc = 0x7F28D8D0u;
    // 7F28D8D0: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F28D8D4:
    ctx->pc = 0x7F28D8D4u;
    // 7F28D8D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D8D8:
    ctx->pc = 0x7F28D8D8u;
    // 7F28D8D8: lwz     r0, 2648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D8DC:
    ctx->pc = 0x7F28D8DCu;
    // 7F28D8DC: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D8E0:
    ctx->pc = 0x7F28D8E0u;
    // 7F28D8E0: bc    12, 2, 0x7F28D91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D91C;
        }
    }

label_7F28D8E4:
    ctx->pc = 0x7F28D8E4u;
    ctx->downcount -= 14;
    // 7F28D8E4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28D8E8:
    ctx->pc = 0x7F28D8E8u;
    // 7F28D8E8: lwzu     r6, 12832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12832);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F28D8EC:
    ctx->pc = 0x7F28D8ECu;
    // 7F28D8EC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28D8F0:
    ctx->pc = 0x7F28D8F0u;
    // 7F28D8F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D8F4:
    ctx->pc = 0x7F28D8F4u;
    // 7F28D8F4: addi    r7, r4, -5892
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5892);

label_7F28D8F8:
    ctx->pc = 0x7F28D8F8u;
    // 7F28D8F8: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28D8FC:
    ctx->pc = 0x7F28D8FCu;
    // 7F28D8FC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28D900:
    ctx->pc = 0x7F28D900u;
    // 7F28D900: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D904:
    ctx->pc = 0x7F28D904u;
    // 7F28D904: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28D908:
    ctx->pc = 0x7F28D908u;
    // 7F28D908: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28D90C:
    ctx->pc = 0x7F28D90Cu;
    // 7F28D90C: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28D910:
    ctx->pc = 0x7F28D910u;
    // 7F28D910: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28D914:
    ctx->pc = 0x7F28D914u;
    // 7F28D914: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D918:
    ctx->pc = 0x7F28D918u;
    // 7F28D918: b       0x7F28D968
    {
            goto label_7F28D968;
    }

label_7F28D91C:
    ctx->pc = 0x7F28D91Cu;
    ctx->downcount -= 6;
    // 7F28D91C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28D920:
    ctx->pc = 0x7F28D920u;
    // 7F28D920: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28D924:
    ctx->pc = 0x7F28D924u;
    // 7F28D924: stw     r0, 24772(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24772);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D928:
    ctx->pc = 0x7F28D928u;
    // 7F28D928: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D92C:
    ctx->pc = 0x7F28D92Cu;
    // 7F28D92C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D930:
    ctx->pc = 0x7F28D930u;
    // 7F28D930: bc    4, 2, 0x7F28D968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D968;
        }
    }

label_7F28D934:
    ctx->pc = 0x7F28D934u;
    ctx->downcount -= 2;
    // 7F28D934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D938:
    ctx->pc = 0x7F28D938u;
    // 7F28D938: bl      0x7F026F5C
    {
            ctx->lr = 0x7F28D93Cu;
            ctx->pc = 0x7F026F5Cu;
            return;
    }

label_7F28D93C:
    ctx->pc = 0x7F28D93Cu;
    ctx->downcount -= 5;
    // 7F28D93C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28D940:
    ctx->pc = 0x7F28D940u;
    // 7F28D940: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28D944:
    ctx->pc = 0x7F28D944u;
    // 7F28D944: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F28D948:
    ctx->pc = 0x7F28D948u;
    // 7F28D948: addi    r5, r5, -5892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5892);

label_7F28D94C:
    ctx->pc = 0x7F28D94Cu;
    // 7F28D94C: bl      0x800261D8
    {
            ctx->lr = 0x7F28D950u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F28D950:
    ctx->pc = 0x7F28D950u;
    ctx->downcount -= 4;
    // 7F28D950: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28D954:
    ctx->pc = 0x7F28D954u;
    // 7F28D954: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F28D958:
    ctx->pc = 0x7F28D958u;
    // 7F28D958: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F28D95C:
    ctx->pc = 0x7F28D95Cu;
    // 7F28D95C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F28D960u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F28D960:
    ctx->pc = 0x7F28D960u;
    ctx->downcount -= 2;
    // 7F28D960: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28D964:
    ctx->pc = 0x7F28D964u;
    // 7F28D964: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D968:
    ctx->pc = 0x7F28D968u;
    ctx->downcount -= 6;
    // 7F28D968: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D96C:
    ctx->pc = 0x7F28D96Cu;
    // 7F28D96C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28D970:
    ctx->pc = 0x7F28D970u;
    // 7F28D970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28D974:
    ctx->pc = 0x7F28D974u;
    // 7F28D974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28D978:
    ctx->pc = 0x7F28D978u;
    // 7F28D978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28D97C:
    ctx->pc = 0x7F28D97Cu;
    ctx->downcount -= 18;
    // 7F28D97C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28D980:
    ctx->pc = 0x7F28D980u;
    // 7F28D980: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28D984:
    ctx->pc = 0x7F28D984u;
    // 7F28D984: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28D988:
    ctx->pc = 0x7F28D988u;
    // 7F28D988: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28D98C:
    ctx->pc = 0x7F28D98Cu;
    // 7F28D98C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28D990:
    ctx->pc = 0x7F28D990u;
    // 7F28D990: lwz     r0, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28D994:
    ctx->pc = 0x7F28D994u;
    // 7F28D994: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D998:
    ctx->pc = 0x7F28D998u;
    // 7F28D998: bc    4, 2, 0x7F28D9A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D9A4;
        }
    }

label_7F28D99C:
    ctx->pc = 0x7F28D99Cu;
    ctx->downcount -= 2;
    // 7F28D99C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D9A0:
    ctx->pc = 0x7F28D9A0u;
    // 7F28D9A0: b       0x7F28DB30
    {
            goto label_7F28DB30;
    }

label_7F28D9A4:
    ctx->pc = 0x7F28D9A4u;
    ctx->downcount -= 3;
    // 7F28D9A4: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F28D9A8:
    ctx->pc = 0x7F28D9A8u;
    // 7F28D9A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D9AC:
    ctx->pc = 0x7F28D9ACu;
    // 7F28D9AC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28D9B0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28D9B0:
    ctx->pc = 0x7F28D9B0u;
    ctx->downcount -= 2;
    // 7F28D9B0: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D9B4:
    ctx->pc = 0x7F28D9B4u;
    // 7F28D9B4: bc    12, 2, 0x7F28D9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D9C4;
        }
    }

label_7F28D9B8:
    ctx->pc = 0x7F28D9B8u;
    ctx->downcount -= 3;
    // 7F28D9B8: addis   r0, r3, -136
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-136) << 16);

label_7F28D9BC:
    ctx->pc = 0x7F28D9BCu;
    // 7F28D9BC: cmplwi  r0, 0xDD18
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xDD18u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D9C0:
    ctx->pc = 0x7F28D9C0u;
    // 7F28D9C0: bc    4, 2, 0x7F28D9CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D9CC;
        }
    }

label_7F28D9C4:
    ctx->pc = 0x7F28D9C4u;
    ctx->downcount -= 2;
    // 7F28D9C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28D9C8:
    ctx->pc = 0x7F28D9C8u;
    // 7F28D9C8: b       0x7F28D9F0
    {
            goto label_7F28D9F0;
    }

label_7F28D9CC:
    ctx->pc = 0x7F28D9CCu;
    ctx->downcount -= 2;
    // 7F28D9CC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D9D0:
    ctx->pc = 0x7F28D9D0u;
    // 7F28D9D0: bc    12, 2, 0x7F28D9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28D9E0;
        }
    }

label_7F28D9D4:
    ctx->pc = 0x7F28D9D4u;
    ctx->downcount -= 3;
    // 7F28D9D4: addis   r0, r3, -52
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-52) << 16);

label_7F28D9D8:
    ctx->pc = 0x7F28D9D8u;
    // 7F28D9D8: cmplwi  r0, 0x6D94
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x6D94u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D9DC:
    ctx->pc = 0x7F28D9DCu;
    // 7F28D9DC: bc    4, 2, 0x7F28D9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28D9E8;
        }
    }

label_7F28D9E0:
    ctx->pc = 0x7F28D9E0u;
    ctx->downcount -= 2;
    // 7F28D9E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28D9E4:
    ctx->pc = 0x7F28D9E4u;
    // 7F28D9E4: b       0x7F28D9F0
    {
            goto label_7F28D9F0;
    }

label_7F28D9E8:
    ctx->pc = 0x7F28D9E8u;
    ctx->downcount -= 2;
    // 7F28D9E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28D9EC:
    ctx->pc = 0x7F28D9ECu;
    // 7F28D9EC: b       0x7F28DB30
    {
            goto label_7F28DB30;
    }

label_7F28D9F0:
    ctx->pc = 0x7F28D9F0u;
    ctx->downcount -= 2;
    // 7F28D9F0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28D9F4:
    ctx->pc = 0x7F28D9F4u;
    // 7F28D9F4: bc    4, 2, 0x7F28DA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28DA3C;
        }
    }

label_7F28D9F8:
    ctx->pc = 0x7F28D9F8u;
    ctx->downcount -= 3;
    // 7F28D9F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28D9FC:
    ctx->pc = 0x7F28D9FCu;
    // 7F28D9FC: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28DA00:
    ctx->pc = 0x7F28DA00u;
    // 7F28DA00: bl      0x7F2900A0
    {
            ctx->lr = 0x7F28DA04u;
            goto label_7F2900A0;
    }

label_7F28DA04:
    ctx->pc = 0x7F28DA04u;
    ctx->downcount -= 14;
    // 7F28DA04: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28DA08:
    ctx->pc = 0x7F28DA08u;
    // 7F28DA08: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28DA0C:
    ctx->pc = 0x7F28DA0Cu;
    // 7F28DA0C: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F28DA10:
    ctx->pc = 0x7F28DA10u;
    // 7F28DA10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DA14:
    ctx->pc = 0x7F28DA14u;
    // 7F28DA14: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28DA18:
    ctx->pc = 0x7F28DA18u;
    // 7F28DA18: addi    r8, r4, -5892
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-5892);

label_7F28DA1C:
    ctx->pc = 0x7F28DA1Cu;
    // 7F28DA1C: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28DA20:
    ctx->pc = 0x7F28DA20u;
    // 7F28DA20: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DA24:
    ctx->pc = 0x7F28DA24u;
    // 7F28DA24: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DA28:
    ctx->pc = 0x7F28DA28u;
    // 7F28DA28: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28DA2C:
    ctx->pc = 0x7F28DA2Cu;
    // 7F28DA2C: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28DA30:
    ctx->pc = 0x7F28DA30u;
    // 7F28DA30: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28DA34:
    ctx->pc = 0x7F28DA34u;
    // 7F28DA34: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DA38:
    ctx->pc = 0x7F28DA38u;
    // 7F28DA38: b       0x7F28DB30
    {
            goto label_7F28DB30;
    }

label_7F28DA3C:
    ctx->pc = 0x7F28DA3Cu;
    ctx->downcount -= 2;
    // 7F28DA3C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F28DA40:
    ctx->pc = 0x7F28DA40u;
    // 7F28DA40: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28DA44u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28DA44:
    ctx->pc = 0x7F28DA44u;
    ctx->downcount -= 2;
    // 7F28DA44: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28DA48:
    ctx->pc = 0x7F28DA48u;
    // 7F28DA48: bc    12, 2, 0x7F28DA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28DA54;
        }
    }

label_7F28DA4C:
    ctx->pc = 0x7F28DA4Cu;
    ctx->downcount -= 2;
    // 7F28DA4C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28DA50:
    ctx->pc = 0x7F28DA50u;
    // 7F28DA50: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F28DA54u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F28DA54:
    ctx->pc = 0x7F28DA54u;
    ctx->downcount -= 3;
    // 7F28DA54: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F28DA58:
    ctx->pc = 0x7F28DA58u;
    // 7F28DA58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DA5C:
    ctx->pc = 0x7F28DA5Cu;
    // 7F28DA5C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28DA60u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28DA60:
    ctx->pc = 0x7F28DA60u;
    ctx->downcount -= 4;
    // 7F28DA60: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DA64:
    ctx->pc = 0x7F28DA64u;
    // 7F28DA64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DA68:
    ctx->pc = 0x7F28DA68u;
    // 7F28DA68: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28DA6C:
    ctx->pc = 0x7F28DA6Cu;
    // 7F28DA6C: bl      0x7F29011C
    {
            ctx->lr = 0x7F28DA70u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28DA70:
    ctx->pc = 0x7F28DA70u;
    ctx->downcount -= 5;
    // 7F28DA70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DA74:
    ctx->pc = 0x7F28DA74u;
    // 7F28DA74: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28DA78:
    ctx->pc = 0x7F28DA78u;
    // 7F28DA78: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28DA7C:
    ctx->pc = 0x7F28DA7Cu;
    // 7F28DA7C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DA80:
    ctx->pc = 0x7F28DA80u;
    // 7F28DA80: bc    4, 2, 0x7F28DB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28DB00;
        }
    }

label_7F28DA84:
    ctx->pc = 0x7F28DA84u;
    ctx->downcount -= 5;
    // 7F28DA84: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F28DA88:
    ctx->pc = 0x7F28DA88u;
    // 7F28DA88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DA8C:
    ctx->pc = 0x7F28DA8Cu;
    // 7F28DA8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28DA90:
    ctx->pc = 0x7F28DA90u;
    // 7F28DA90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28DA94:
    ctx->pc = 0x7F28DA94u;
    // 7F28DA94: bl      0x7F012018
    {
            ctx->lr = 0x7F28DA98u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28DA98:
    ctx->pc = 0x7F28DA98u;
    ctx->downcount -= 5;
    // 7F28DA98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DA9C:
    ctx->pc = 0x7F28DA9Cu;
    // 7F28DA9C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28DAA0:
    ctx->pc = 0x7F28DAA0u;
    // 7F28DAA0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28DAA4:
    ctx->pc = 0x7F28DAA4u;
    // 7F28DAA4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DAA8:
    ctx->pc = 0x7F28DAA8u;
    // 7F28DAA8: bc    12, 2, 0x7F28DB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28DB00;
        }
    }

label_7F28DAAC:
    ctx->pc = 0x7F28DAACu;
    ctx->downcount -= 3;
    // 7F28DAAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DAB0:
    ctx->pc = 0x7F28DAB0u;
    // 7F28DAB0: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28DAB4:
    ctx->pc = 0x7F28DAB4u;
    // 7F28DAB4: bl      0x7F29007C
    {
            ctx->lr = 0x7F28DAB8u;
            goto label_7F29007C;
    }

label_7F28DAB8:
    ctx->pc = 0x7F28DAB8u;
    ctx->downcount -= 2;
    // 7F28DAB8: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28DABC:
    ctx->pc = 0x7F28DABCu;
    // 7F28DABC: bc    12, 2, 0x7F28DB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28DB2C;
        }
    }

label_7F28DAC0:
    ctx->pc = 0x7F28DAC0u;
    ctx->downcount -= 5;
    // 7F28DAC0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F28DAC4:
    ctx->pc = 0x7F28DAC4u;
    // 7F28DAC4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28DAC8:
    ctx->pc = 0x7F28DAC8u;
    // 7F28DAC8: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F28DACC:
    ctx->pc = 0x7F28DACCu;
    // 7F28DACC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28DAD0:
    ctx->pc = 0x7F28DAD0u;
    // 7F28DAD0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F28DAD4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F28DAD4:
    ctx->pc = 0x7F28DAD4u;
    ctx->downcount -= 2;
    // 7F28DAD4: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DAD8:
    ctx->pc = 0x7F28DAD8u;
    // 7F28DAD8: bc    12, 2, 0x7F28DB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28DB2C;
        }
    }

label_7F28DADC:
    ctx->pc = 0x7F28DADCu;
    ctx->downcount -= 4;
    // 7F28DADC: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28DAE0:
    ctx->pc = 0x7F28DAE0u;
    // 7F28DAE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28DAE4:
    ctx->pc = 0x7F28DAE4u;
    // 7F28DAE4: addi    r4, r4, -10204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10204);

label_7F28DAE8:
    ctx->pc = 0x7F28DAE8u;
    // 7F28DAE8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F28DAECu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F28DAEC:
    ctx->pc = 0x7F28DAECu;
    ctx->downcount -= 4;
    // 7F28DAEC: stw     r30, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28DAF0:
    ctx->pc = 0x7F28DAF0u;
    // 7F28DAF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28DAF4:
    ctx->pc = 0x7F28DAF4u;
    // 7F28DAF4: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F28DAF8:
    ctx->pc = 0x7F28DAF8u;
    // 7F28DAF8: bl      0x7F28DB44
    {
            ctx->lr = 0x7F28DAFCu;
            goto label_7F28DB44;
    }

label_7F28DAFC:
    ctx->pc = 0x7F28DAFCu;
    ctx->downcount -= 1;
    // 7F28DAFC: b       0x7F28DB2C
    {
            goto label_7F28DB2C;
    }

label_7F28DB00:
    ctx->pc = 0x7F28DB00u;
    ctx->downcount -= 3;
    // 7F28DB00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DB04:
    ctx->pc = 0x7F28DB04u;
    // 7F28DB04: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28DB08:
    ctx->pc = 0x7F28DB08u;
    // 7F28DB08: bl      0x7F29011C
    {
            ctx->lr = 0x7F28DB0Cu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F28DB0C:
    ctx->pc = 0x7F28DB0Cu;
    ctx->downcount -= 5;
    // 7F28DB0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DB10:
    ctx->pc = 0x7F28DB10u;
    // 7F28DB10: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28DB14:
    ctx->pc = 0x7F28DB14u;
    // 7F28DB14: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28DB18:
    ctx->pc = 0x7F28DB18u;
    // 7F28DB18: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DB1C:
    ctx->pc = 0x7F28DB1Cu;
    // 7F28DB1C: bc    12, 2, 0x7F28DB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28DB2C;
        }
    }

label_7F28DB20:
    ctx->pc = 0x7F28DB20u;
    ctx->downcount -= 3;
    // 7F28DB20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DB24:
    ctx->pc = 0x7F28DB24u;
    // 7F28DB24: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F28DB28:
    ctx->pc = 0x7F28DB28u;
    // 7F28DB28: bl      0x7F2900A0
    {
            ctx->lr = 0x7F28DB2Cu;
            goto label_7F2900A0;
    }

label_7F28DB2C:
    ctx->pc = 0x7F28DB2Cu;
    ctx->downcount -= 1;
    // 7F28DB2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DB30:
    ctx->pc = 0x7F28DB30u;
    ctx->downcount -= 16;
    // 7F28DB30: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28DB34:
    ctx->pc = 0x7F28DB34u;
    // 7F28DB34: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DB38:
    ctx->pc = 0x7F28DB38u;
    // 7F28DB38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28DB3C:
    ctx->pc = 0x7F28DB3Cu;
    // 7F28DB3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28DB40:
    ctx->pc = 0x7F28DB40u;
    // 7F28DB40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DB44:
    ctx->pc = 0x7F28DB44u;
    ctx->downcount -= 17;
    // 7F28DB44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28DB48:
    ctx->pc = 0x7F28DB48u;
    // 7F28DB48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28DB4C:
    ctx->pc = 0x7F28DB4Cu;
    // 7F28DB4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DB50:
    ctx->pc = 0x7F28DB50u;
    // 7F28DB50: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28DB54:
    ctx->pc = 0x7F28DB54u;
    // 7F28DB54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DB58:
    ctx->pc = 0x7F28DB58u;
    // 7F28DB58: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28DB5C:
    ctx->pc = 0x7F28DB5Cu;
    // 7F28DB5C: bl      0x7F28DB98
    {
            ctx->lr = 0x7F28DB60u;
            goto label_7F28DB98;
    }

label_7F28DB60:
    ctx->pc = 0x7F28DB60u;
    ctx->downcount -= 3;
    // 7F28DB60: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F28DB64:
    ctx->pc = 0x7F28DB64u;
    // 7F28DB64: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F28DB68:
    ctx->pc = 0x7F28DB68u;
    // 7F28DB68: bl      0x7F28DB98
    {
            ctx->lr = 0x7F28DB6Cu;
            goto label_7F28DB98;
    }

label_7F28DB6C:
    ctx->pc = 0x7F28DB6Cu;
    ctx->downcount -= 3;
    // 7F28DB6C: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F28DB70:
    ctx->pc = 0x7F28DB70u;
    // 7F28DB70: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F28DB74:
    ctx->pc = 0x7F28DB74u;
    // 7F28DB74: bl      0x7F28DB98
    {
            ctx->lr = 0x7F28DB78u;
            goto label_7F28DB98;
    }

label_7F28DB78:
    ctx->pc = 0x7F28DB78u;
    ctx->downcount -= 3;
    // 7F28DB78: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F28DB7C:
    ctx->pc = 0x7F28DB7Cu;
    // 7F28DB7C: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F28DB80:
    ctx->pc = 0x7F28DB80u;
    // 7F28DB80: bl      0x7F28DB98
    {
            ctx->lr = 0x7F28DB84u;
            goto label_7F28DB98;
    }

label_7F28DB84:
    ctx->pc = 0x7F28DB84u;
    ctx->downcount -= 16;
    // 7F28DB84: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28DB88:
    ctx->pc = 0x7F28DB88u;
    // 7F28DB88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DB8C:
    ctx->pc = 0x7F28DB8Cu;
    // 7F28DB8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28DB90:
    ctx->pc = 0x7F28DB90u;
    // 7F28DB90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DB94:
    ctx->pc = 0x7F28DB94u;
    // 7F28DB94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DB98:
    ctx->pc = 0x7F28DB98u;
    ctx->downcount -= 6;
    // 7F28DB98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28DB9C:
    ctx->pc = 0x7F28DB9Cu;
    // 7F28DB9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28DBA0:
    ctx->pc = 0x7F28DBA0u;
    // 7F28DBA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DBA4:
    ctx->pc = 0x7F28DBA4u;
    // 7F28DBA4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28DBA8:
    ctx->pc = 0x7F28DBA8u;
    // 7F28DBA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28DBAC:
    ctx->pc = 0x7F28DBACu;
    // 7F28DBAC: bl      0x7F28DBC8
    {
            ctx->lr = 0x7F28DBB0u;
            goto label_7F28DBC8;
    }

label_7F28DBB0:
    ctx->pc = 0x7F28DBB0u;
    ctx->downcount -= 7;
    // 7F28DBB0: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28DBB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28DBB4:
    ctx->pc = 0x7F28DBB4u;
    // 7F28DBB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DBB8:
    ctx->pc = 0x7F28DBB8u;
    // 7F28DBB8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28DBBC:
    ctx->pc = 0x7F28DBBCu;
    // 7F28DBBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28DBC0:
    ctx->pc = 0x7F28DBC0u;
    // 7F28DBC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DBC4:
    ctx->pc = 0x7F28DBC4u;
    // 7F28DBC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DBC8:
    ctx->pc = 0x7F28DBC8u;
    ctx->downcount -= 4;
    // 7F28DBC8: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F28DBC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F28DBC8u);
        if (ctx->exception) return;
    }

label_7F28DBCC:
    ctx->pc = 0x7F28DBCCu;
    // 7F28DBCC: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F28DBCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F28DBCCu);
        if (ctx->exception) return;
    }

label_7F28DBD0:
    ctx->pc = 0x7F28DBD0u;
    // 7F28DBD0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28DBD0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F28DBD4:
    ctx->pc = 0x7F28DBD4u;
    // 7F28DBD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DBD8:
    ctx->pc = 0x7F28DBD8u;
    ctx->downcount -= 4;
    // 7F28DBD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28DBDC:
    ctx->pc = 0x7F28DBDCu;
    // 7F28DBDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28DBE0:
    ctx->pc = 0x7F28DBE0u;
    // 7F28DBE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DBE4:
    ctx->pc = 0x7F28DBE4u;
    // 7F28DBE4: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28DBE8u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28DBE8:
    ctx->pc = 0x7F28DBE8u;
    ctx->downcount -= 6;
    // 7F28DBE8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F28DBEC:
    ctx->pc = 0x7F28DBECu;
    // 7F28DBEC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28DBF0:
    ctx->pc = 0x7F28DBF0u;
    // 7F28DBF0: addi    r4, r4, 332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(332);

label_7F28DBF4:
    ctx->pc = 0x7F28DBF4u;
    // 7F28DBF4: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DBF8:
    ctx->pc = 0x7F28DBF8u;
    // 7F28DBF8: rlwinm. r0, r0, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DBFC:
    ctx->pc = 0x7F28DBFCu;
    // 7F28DBFC: bc    4, 2, 0x7F28DC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28DC08;
        }
    }

label_7F28DC00:
    ctx->pc = 0x7F28DC00u;
    ctx->downcount -= 2;
    // 7F28DC00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DC04:
    ctx->pc = 0x7F28DC04u;
    // 7F28DC04: b       0x7F28DC4C
    {
            goto label_7F28DC4C;
    }

label_7F28DC08:
    ctx->pc = 0x7F28DC08u;
    ctx->downcount -= 2;
    // 7F28DC08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DC0C:
    ctx->pc = 0x7F28DC0Cu;
    // 7F28DC0C: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F28DC10u;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F28DC10:
    ctx->pc = 0x7F28DC10u;
    ctx->downcount -= 10;
    // 7F28DC10: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28DC14:
    ctx->pc = 0x7F28DC14u;
    // 7F28DC14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28DC18:
    ctx->pc = 0x7F28DC18u;
    // 7F28DC18: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F28DC1C:
    ctx->pc = 0x7F28DC1Cu;
    // 7F28DC1C: addi    r3, r3, -5664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F28DC20:
    ctx->pc = 0x7F28DC20u;
    // 7F28DC20: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DC24:
    ctx->pc = 0x7F28DC24u;
    // 7F28DC24: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DC28:
    ctx->pc = 0x7F28DC28u;
    // 7F28DC28: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28DC2C:
    ctx->pc = 0x7F28DC2Cu;
    // 7F28DC2C: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DC30:
    ctx->pc = 0x7F28DC30u;
    // 7F28DC30: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F28DC34:
    ctx->pc = 0x7F28DC34u;
    // 7F28DC34: bl      0x7F275210
    {
            ctx->lr = 0x7F28DC38u;
            ctx->pc = 0x7F275210u;
            return;
    }

label_7F28DC38:
    ctx->pc = 0x7F28DC38u;
    ctx->downcount -= 4;
    // 7F28DC38: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28DC3C:
    ctx->pc = 0x7F28DC3Cu;
    // 7F28DC3C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F28DC40:
    ctx->pc = 0x7F28DC40u;
    // 7F28DC40: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DC44:
    ctx->pc = 0x7F28DC44u;
    // 7F28DC44: bl      0x7F29E120
    {
            ctx->lr = 0x7F28DC48u;
            ctx->pc = 0x7F29E120u;
            return;
    }

label_7F28DC48:
    ctx->pc = 0x7F28DC48u;
    ctx->downcount -= 1;
    // 7F28DC48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DC4C:
    ctx->pc = 0x7F28DC4Cu;
    ctx->downcount -= 5;
    // 7F28DC4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DC50:
    ctx->pc = 0x7F28DC50u;
    // 7F28DC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28DC54:
    ctx->pc = 0x7F28DC54u;
    // 7F28DC54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DC58:
    ctx->pc = 0x7F28DC58u;
    // 7F28DC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DC5C:
    ctx->pc = 0x7F28DC5Cu;
    ctx->downcount -= 19;
    // 7F28DC5C: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F28DC60:
    ctx->pc = 0x7F28DC60u;
    // 7F28DC60: lis     r12, 32589
    ctx->gpr[12] = ((u32)(s32)(32589) << 16);

label_7F28DC64:
    ctx->pc = 0x7F28DC64u;
    // 7F28DC64: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F28DC68:
    ctx->pc = 0x7F28DC68u;
    // 7F28DC68: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28DC6C:
    ctx->pc = 0x7F28DC6Cu;
    // 7F28DC6C: stwu     r11, -6744(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-6744);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
        ctx->gpr[12] = ea;
    }

label_7F28DC70:
    ctx->pc = 0x7F28DC70u;
    // 7F28DC70: stw     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F28DC74:
    ctx->pc = 0x7F28DC74u;
    // 7F28DC74: lwz     r10, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F28DC78:
    ctx->pc = 0x7F28DC78u;
    // 7F28DC78: lwz     r5, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28DC7C:
    ctx->pc = 0x7F28DC7Cu;
    // 7F28DC7C: stw     r10, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F28DC80:
    ctx->pc = 0x7F28DC80u;
    // 7F28DC80: stw     r5, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28DC84:
    ctx->pc = 0x7F28DC84u;
    // 7F28DC84: stw     r4, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28DC88:
    ctx->pc = 0x7F28DC88u;
    // 7F28DC88: stw     r3, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DC8C:
    ctx->pc = 0x7F28DC8Cu;
    // 7F28DC8C: stb     r6, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F28DC90:
    ctx->pc = 0x7F28DC90u;
    // 7F28DC90: stb     r7, 25(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F28DC94:
    ctx->pc = 0x7F28DC94u;
    // 7F28DC94: stb     r8, 26(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F28DC98:
    ctx->pc = 0x7F28DC98u;
    // 7F28DC98: stb     r9, 27(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F28DC9C:
    ctx->pc = 0x7F28DC9Cu;
    // 7F28DC9C: stfs     f1, 28(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F28DC9Cu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28DCA0:
    ctx->pc = 0x7F28DCA0u;
    // 7F28DCA0: stw     r0, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DCA4:
    ctx->pc = 0x7F28DCA4u;
    // 7F28DCA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DCA8:
    ctx->pc = 0x7F28DCA8u;
    ctx->downcount -= 17;
    // 7F28DCA8: stwu     r1, -3776(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28DCAC:
    ctx->pc = 0x7F28DCACu;
    // 7F28DCAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28DCB0:
    ctx->pc = 0x7F28DCB0u;
    // 7F28DCB0: stw     r0, 3780(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DCB4:
    ctx->pc = 0x7F28DCB4u;
    // 7F28DCB4: stmw     r27, 3756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3756);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28DCB8:
    ctx->pc = 0x7F28DCB8u;
    // 7F28DCB8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DCBC:
    ctx->pc = 0x7F28DCBCu;
    // 7F28DCBC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28DCC0:
    ctx->pc = 0x7F28DCC0u;
    // 7F28DCC0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F28DCC4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F28DCC4:
    ctx->pc = 0x7F28DCC4u;
    ctx->downcount -= 5;
    // 7F28DCC4: lwz     r27, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F28DCC8:
    ctx->pc = 0x7F28DCC8u;
    // 7F28DCC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DCCC:
    ctx->pc = 0x7F28DCCCu;
    // 7F28DCCC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28DCD0:
    ctx->pc = 0x7F28DCD0u;
    // 7F28DCD0: stw     r0, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DCD4:
    ctx->pc = 0x7F28DCD4u;
    // 7F28DCD4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F28DCD8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F28DCD8:
    ctx->pc = 0x7F28DCD8u;
    ctx->downcount -= 14;
    // 7F28DCD8: stw     r27, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F28DCDC:
    ctx->pc = 0x7F28DCDCu;
    // 7F28DCDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DCE0:
    ctx->pc = 0x7F28DCE0u;
    // 7F28DCE0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F28DCE4:
    ctx->pc = 0x7F28DCE4u;
    // 7F28DCE4: lha     r5, 21964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21964);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28DCE8:
    ctx->pc = 0x7F28DCE8u;
    // 7F28DCE8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F28DCEC:
    ctx->pc = 0x7F28DCECu;
    // 7F28DCEC: lwz     r4, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DCF0:
    ctx->pc = 0x7F28DCF0u;
    // 7F28DCF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28DCF4:
    ctx->pc = 0x7F28DCF4u;
    // 7F28DCF4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28DCF8:
    ctx->pc = 0x7F28DCF8u;
    // 7F28DCF8: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F28DCFC:
    ctx->pc = 0x7F28DCFCu;
    // 7F28DCFC: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28DD00:
    ctx->pc = 0x7F28DD00u;
    // 7F28DD00: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD04:
    ctx->pc = 0x7F28DD04u;
    // 7F28DD04: lwz     r4, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD08:
    ctx->pc = 0x7F28DD08u;
    // 7F28DD08: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F28DD0C:
    ctx->pc = 0x7F28DD0Cu;
    // 7F28DD0C: bl      0x7F01DAE0
    {
            ctx->lr = 0x7F28DD10u;
            ctx->pc = 0x7F01DAE0u;
            return;
    }

label_7F28DD10:
    ctx->pc = 0x7F28DD10u;
    ctx->downcount -= 13;
    // 7F28DD10: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28DD14:
    ctx->pc = 0x7F28DD14u;
    // 7F28DD14: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F28DD18:
    ctx->pc = 0x7F28DD18u;
    // 7F28DD18: addi    r6, r4, 22156
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F28DD1C:
    ctx->pc = 0x7F28DD1Cu;
    // 7F28DD1C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DD20:
    ctx->pc = 0x7F28DD20u;
    // 7F28DD20: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD24:
    ctx->pc = 0x7F28DD24u;
    // 7F28DD24: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD28:
    ctx->pc = 0x7F28DD28u;
    // 7F28DD28: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DD2C:
    ctx->pc = 0x7F28DD2Cu;
    // 7F28DD2C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F28DD30:
    ctx->pc = 0x7F28DD30u;
    // 7F28DD30: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DD34:
    ctx->pc = 0x7F28DD34u;
    // 7F28DD34: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD38:
    ctx->pc = 0x7F28DD38u;
    // 7F28DD38: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD3C:
    ctx->pc = 0x7F28DD3Cu;
    // 7F28DD3C: addi    r4, r4, 52
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(52);

label_7F28DD40:
    ctx->pc = 0x7F28DD40u;
    // 7F28DD40: bl      0x800261D8
    {
            ctx->lr = 0x7F28DD44u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F28DD44:
    ctx->pc = 0x7F28DD44u;
    ctx->downcount -= 5;
    // 7F28DD44: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28DD48:
    ctx->pc = 0x7F28DD48u;
    // 7F28DD48: li      r30, 21
    ctx->gpr[30] = (u32)(s32)(21);

label_7F28DD4C:
    ctx->pc = 0x7F28DD4Cu;
    // 7F28DD4C: addi    r31, r3, 12832
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F28DD50:
    ctx->pc = 0x7F28DD50u;
    // 7F28DD50: li      r27, 1344
    ctx->gpr[27] = (u32)(s32)(1344);

label_7F28DD54:
    ctx->pc = 0x7F28DD54u;
    // 7F28DD54: li      r28, 6804
    ctx->gpr[28] = (u32)(s32)(6804);

label_7F28DD58:
    ctx->pc = 0x7F28DD58u;
    ctx->downcount -= 9;
    // 7F28DD58: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DD5C:
    // 7F28DD5C: addi    r6, r28, 444
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(444);

label_7F28DD60:
    // 7F28DD60: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28DD64:
    // 7F28DD64: addi    r5, r1, 156
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(156);

label_7F28DD68:
    // 7F28DD68: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F28DD6C:
    // 7F28DD6C: addi    r4, r6, -4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-4);

label_7F28DD70:
    ctx->pc = 0x7F28DD70u;
    // 7F28DD70: lwz     r6, 216(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(216);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28DD74:
    ctx->pc = 0x7F28DD74u;
    // 7F28DD74: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28DD78:
    loop_7F28DD78(ctx);
    if (ctx->pc == 0x7F28DD8Cu) goto label_7F28DD8C;
    return;
label_7F28DD7C:
    ctx->pc = 0x7F28DD7Cu;
    // 7F28DD7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28DD80:
    ctx->pc = 0x7F28DD80u;
    // 7F28DD80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DD84:
    ctx->pc = 0x7F28DD84u;
    // 7F28DD84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F28DD88:
    // 7F28DD88: bc    16, 0, 0x7F28DD78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DD78u;
                return;
            }
            goto label_7F28DD78;
        }
    }

label_7F28DD8C:
    ctx->pc = 0x7F28DD8Cu;
    ctx->downcount -= 12;
    // 7F28DD8C: lha     r3, 58(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(58);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28DD90:
    // 7F28DD90: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28DD94:
    ctx->pc = 0x7F28DD94u;
    // 7F28DD94: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DD98:
    // 7F28DD98: addi    r5, r1, 92
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(92);

label_7F28DD9C:
    // 7F28DD9C: mulli   r3, r3, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)324);

label_7F28DDA0:
    // 7F28DDA0: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F28DDA4:
    // 7F28DDA4: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28DDA8:
    ctx->pc = 0x7F28DDA8u;
    // 7F28DDA8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28DDAC:
    // 7F28DDAC: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F28DDB0:
    loop_7F28DDB0(ctx);
    if (ctx->pc == 0x7F28DDC4u) goto label_7F28DDC4;
    return;
label_7F28DDB4:
    ctx->pc = 0x7F28DDB4u;
    // 7F28DDB4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28DDB8:
    ctx->pc = 0x7F28DDB8u;
    // 7F28DDB8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DDBC:
    ctx->pc = 0x7F28DDBCu;
    // 7F28DDBC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F28DDC0:
    // 7F28DDC0: bc    16, 0, 0x7F28DDB0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DDB0u;
                return;
            }
            goto label_7F28DDB0;
        }
    }

label_7F28DDC4:
    ctx->downcount -= 3;
    // 7F28DDC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28DDC8:
    // 7F28DDC8: addi    r4, r1, 160
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(160);

label_7F28DDCC:
    // 7F28DDCC: bl      0x7F3CC430
    {
            ctx->lr = 0x7F28DDD0u;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F28DDD0:
    ctx->downcount -= 3;
    // 7F28DDD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28DDD4:
    // 7F28DDD4: addi    r4, r1, 96
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28DDD8:
    // 7F28DDD8: bl      0x7F3CC430
    {
            ctx->lr = 0x7F28DDDCu;
            ctx->pc = 0x7F3CC430u;
            return;
    }

label_7F28DDDC:
    ctx->downcount -= 3;
    // 7F28DDDC: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28DDE0:
    // 7F28DDE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DDE4:
    // 7F28DDE4: bl      0x7F1146A0
    {
            ctx->lr = 0x7F28DDE8u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F28DDE8:
    ctx->downcount -= 5;
    // 7F28DDE8: addi    r5, r1, 224
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(224);

label_7F28DDEC:
    // 7F28DDEC: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28DDF0:
    // 7F28DDF0: addi    r4, r1, 160
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(160);

label_7F28DDF4:
    // 7F28DDF4: add   r5, r5, r27
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F28DDF8:
    // 7F28DDF8: bl      0x80025A80
    {
            ctx->lr = 0x7F28DDFCu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F28DDFC:
    ctx->downcount -= 5;
    // 7F28DDFC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F28DE00:
    // 7F28DE00: addi    r28, r28, 324
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(324);

label_7F28DE04:
    // 7F28DE04: cmpwi   r30, 55
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(55);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28DE08:
    // 7F28DE08: addi    r27, r27, 64
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(64);

label_7F28DE0C:
    // 7F28DE0C: bc    12, 0, 0x7F28DD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DD58u;
                return;
            }
            goto label_7F28DD58;
        }
    }

label_7F28DE10:
    ctx->pc = 0x7F28DE10u;
    ctx->downcount -= 8;
    // 7F28DE10: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F28DE14:
    ctx->pc = 0x7F28DE14u;
    // 7F28DE14: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28DE18:
    ctx->pc = 0x7F28DE18u;
    // 7F28DE18: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F28DE1C:
    ctx->pc = 0x7F28DE1Cu;
    // 7F28DE1C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DE20:
    ctx->pc = 0x7F28DE20u;
    // 7F28DE20: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DE24:
    ctx->pc = 0x7F28DE24u;
    // 7F28DE24: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28DE28:
    ctx->pc = 0x7F28DE28u;
    // 7F28DE28: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28DE2C:
    loop_7F28DE2C(ctx);
    if (ctx->pc == 0x7F28DE40u) goto label_7F28DE40;
    return;
label_7F28DE30:
    ctx->pc = 0x7F28DE30u;
    // 7F28DE30: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28DE34:
    ctx->pc = 0x7F28DE34u;
    // 7F28DE34: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DE38:
    ctx->pc = 0x7F28DE38u;
    // 7F28DE38: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F28DE3C:
    // 7F28DE3C: bc    16, 0, 0x7F28DE2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DE2Cu;
                return;
            }
            goto label_7F28DE2C;
        }
    }

label_7F28DE40:
    ctx->pc = 0x7F28DE40u;
    ctx->downcount -= 5;
    // 7F28DE40: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DE44:
    ctx->pc = 0x7F28DE44u;
    // 7F28DE44: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DE48:
    ctx->pc = 0x7F28DE48u;
    // 7F28DE48: addi    r3, r3, 52
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(52);

label_7F28DE4C:
    ctx->pc = 0x7F28DE4Cu;
    // 7F28DE4C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DE50:
    ctx->pc = 0x7F28DE50u;
    // 7F28DE50: bl      0x800261B4
    {
            ctx->lr = 0x7F28DE54u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28DE54:
    ctx->pc = 0x7F28DE54u;
    ctx->downcount -= 3;
    // 7F28DE54: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F28DE58:
    ctx->pc = 0x7F28DE58u;
    // 7F28DE58: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F28DE5C:
    ctx->pc = 0x7F28DE5Cu;
    // 7F28DE5C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F28DE60:
    ctx->pc = 0x7F28DE60u;
    ctx->downcount -= 6;
    // 7F28DE60: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DE64:
    // 7F28DE64: addi    r30, r27, 444
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(444);

label_7F28DE68:
    // 7F28DE68: cmpwi   r31, 21
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28DE6C:
    // 7F28DE6C: add   r30, r4, r30
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F28DE70:
    ctx->pc = 0x7F28DE70u;
    // 7F28DE70: lwz     r3, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28DE74:
    // 7F28DE74: bc    4, 0, 0x7F28DEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28DEB8;
        }
    }

label_7F28DE78:
    ctx->downcount -= 11;
    // 7F28DE78: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28DE7C:
    // 7F28DE7C: addi    r3, r27, 444
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(444);

label_7F28DE80:
    // 7F28DE80: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F28DE84:
    // 7F28DE84: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28DE88:
    ctx->pc = 0x7F28DE88u;
    // 7F28DE88: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DE8C:
    // 7F28DE8C: addi    r5, r30, -4
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F28DE90:
    ctx->pc = 0x7F28DE90u;
    // 7F28DE90: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28DE94:
    // 7F28DE94: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28DE98:
    ctx->pc = 0x7F28DE98u;
    // 7F28DE98: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28DE9C:
    // 7F28DE9C: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F28DEA0:
    loop_7F28DEA0(ctx);
    if (ctx->pc == 0x7F28DEB4u) goto label_7F28DEB4;
    return;
label_7F28DEA4:
    ctx->pc = 0x7F28DEA4u;
    // 7F28DEA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28DEA8:
    ctx->pc = 0x7F28DEA8u;
    // 7F28DEA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DEAC:
    ctx->pc = 0x7F28DEACu;
    // 7F28DEAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F28DEB0:
    // 7F28DEB0: bc    16, 0, 0x7F28DEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DEA0u;
                return;
            }
            goto label_7F28DEA0;
        }
    }

label_7F28DEB4:
    ctx->downcount -= 1;
    // 7F28DEB4: b       0x7F28DF10
    {
            goto label_7F28DF10;
    }

label_7F28DEB8:
    ctx->pc = 0x7F28DEB8u;
    ctx->downcount -= 11;
    // 7F28DEB8: lha     r3, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28DEBC:
    // 7F28DEBC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28DEC0:
    // 7F28DEC0: addi    r5, r1, 92
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(92);

label_7F28DEC4:
    // 7F28DEC4: mulli   r3, r3, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)324);

label_7F28DEC8:
    // 7F28DEC8: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F28DECC:
    // 7F28DECC: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28DED0:
    ctx->pc = 0x7F28DED0u;
    // 7F28DED0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28DED4:
    // 7F28DED4: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F28DED8:
    loop_7F28DED8(ctx);
    if (ctx->pc == 0x7F28DEECu) goto label_7F28DEEC;
    return;
label_7F28DEDC:
    ctx->pc = 0x7F28DEDCu;
    // 7F28DEDC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28DEE0:
    ctx->pc = 0x7F28DEE0u;
    // 7F28DEE0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28DEE4:
    ctx->pc = 0x7F28DEE4u;
    // 7F28DEE4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F28DEE8:
    // 7F28DEE8: bc    16, 0, 0x7F28DED8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DED8u;
                return;
            }
            goto label_7F28DED8;
        }
    }

label_7F28DEEC:
    ctx->downcount -= 5;
    // 7F28DEEC: addi    r4, r1, 224
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(224);

label_7F28DEF0:
    // 7F28DEF0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28DEF4:
    // 7F28DEF4: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28DEF8:
    // 7F28DEF8: add   r4, r4, r28
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28DEFC:
    // 7F28DEFC: bl      0x80025A80
    {
            ctx->lr = 0x7F28DF00u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F28DF00:
    ctx->downcount -= 4;
    // 7F28DF00: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28DF04:
    // 7F28DF04: addi    r4, r30, 288
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(288);

label_7F28DF08:
    // 7F28DF08: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F28DF0C:
    // 7F28DF0C: bl      0x7F114508
    {
            ctx->lr = 0x7F28DF10u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F28DF10:
    ctx->downcount -= 4;
    // 7F28DF10: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F28DF14:
    // 7F28DF14: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28DF18:
    // 7F28DF18: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DF1C:
    // 7F28DF1C: bl      0x800261B4
    {
            ctx->lr = 0x7F28DF20u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28DF20:
    ctx->downcount -= 5;
    // 7F28DF20: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F28DF24:
    // 7F28DF24: addi    r27, r27, 324
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(324);

label_7F28DF28:
    // 7F28DF28: cmpwi   r31, 55
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(55);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28DF2C:
    // 7F28DF2C: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F28DF30:
    // 7F28DF30: bc    12, 0, 0x7F28DE60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DE60u;
                return;
            }
            goto label_7F28DE60;
        }
    }

label_7F28DF34:
    ctx->pc = 0x7F28DF34u;
    ctx->downcount -= 16;
    // 7F28DF34: lmw     r27, 3756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3756);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28DF38:
    ctx->pc = 0x7F28DF38u;
    // 7F28DF38: lwz     r0, 3780(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3780);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28DF3C:
    ctx->pc = 0x7F28DF3Cu;
    // 7F28DF3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28DF40:
    ctx->pc = 0x7F28DF40u;
    // 7F28DF40: addi    r1, r1, 3776
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(3776);

label_7F28DF44:
    ctx->pc = 0x7F28DF44u;
    // 7F28DF44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DF48:
    ctx->pc = 0x7F28DF48u;
    ctx->downcount -= 14;
    // 7F28DF48: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F28DF4C:
    ctx->pc = 0x7F28DF4Cu;
    // 7F28DF4C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F28DF50:
    ctx->pc = 0x7F28DF50u;
    // 7F28DF50: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F28DF54:
    ctx->pc = 0x7F28DF54u;
    // 7F28DF54: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F28DF58:
    ctx->pc = 0x7F28DF58u;
    // 7F28DF58: addi    r7, r7, 19252
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(19252);

label_7F28DF5C:
    ctx->pc = 0x7F28DF5Cu;
    // 7F28DF5C: addi    r6, r6, -6704
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6704);

label_7F28DF60:
    ctx->pc = 0x7F28DF60u;
    // 7F28DF60: lwzx    r7, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28DF64:
    ctx->pc = 0x7F28DF64u;
    // 7F28DF64: addi    r0, r5, 19340
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(19340);

label_7F28DF68:
    ctx->pc = 0x7F28DF68u;
    // 7F28DF68: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DF6C:
    ctx->pc = 0x7F28DF6Cu;
    // 7F28DF6C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F28DF70:
    ctx->pc = 0x7F28DF70u;
    // 7F28DF70: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28DF74:
    ctx->pc = 0x7F28DF74u;
    // 7F28DF74: stw     r4, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28DF78:
    ctx->pc = 0x7F28DF78u;
    // 7F28DF78: stw     r0, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DF7C:
    ctx->pc = 0x7F28DF7Cu;
    // 7F28DF7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28DF80:
    ctx->pc = 0x7F28DF80u;
    ctx->downcount -= 21;
    // 7F28DF80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28DF84:
    ctx->pc = 0x7F28DF84u;
    // 7F28DF84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28DF88:
    ctx->pc = 0x7F28DF88u;
    // 7F28DF88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28DF8C:
    ctx->pc = 0x7F28DF8Cu;
    // 7F28DF8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28DF90:
    ctx->pc = 0x7F28DF90u;
    // 7F28DF90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28DF94:
    ctx->pc = 0x7F28DF94u;
    // 7F28DF94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28DF98:
    ctx->pc = 0x7F28DF98u;
    // 7F28DF98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28DF9C:
    ctx->pc = 0x7F28DF9Cu;
    // 7F28DF9C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28DFA0:
    ctx->pc = 0x7F28DFA0u;
    // 7F28DFA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F28DFA4:
    ctx->pc = 0x7F28DFA4u;
    // 7F28DFA4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F28DFA8:
    ctx->pc = 0x7F28DFA8u;
    // 7F28DFA8: bl      0x7F012018
    {
            ctx->lr = 0x7F28DFACu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28DFAC:
    ctx->pc = 0x7F28DFACu;
    ctx->downcount -= 5;
    // 7F28DFAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DFB0:
    ctx->pc = 0x7F28DFB0u;
    // 7F28DFB0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28DFB4:
    ctx->pc = 0x7F28DFB4u;
    // 7F28DFB4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28DFB8:
    ctx->pc = 0x7F28DFB8u;
    // 7F28DFB8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DFBC:
    ctx->pc = 0x7F28DFBCu;
    // 7F28DFBC: bc    12, 2, 0x7F28E064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E064;
        }
    }

label_7F28DFC0:
    ctx->pc = 0x7F28DFC0u;
    ctx->downcount -= 5;
    // 7F28DFC0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F28DFC4:
    ctx->pc = 0x7F28DFC4u;
    // 7F28DFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28DFC8:
    ctx->pc = 0x7F28DFC8u;
    // 7F28DFC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28DFCC:
    ctx->pc = 0x7F28DFCCu;
    // 7F28DFCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28DFD0:
    ctx->pc = 0x7F28DFD0u;
    // 7F28DFD0: bl      0x7F012018
    {
            ctx->lr = 0x7F28DFD4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28DFD4:
    ctx->pc = 0x7F28DFD4u;
    ctx->downcount -= 5;
    // 7F28DFD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28DFD8:
    ctx->pc = 0x7F28DFD8u;
    // 7F28DFD8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28DFDC:
    ctx->pc = 0x7F28DFDCu;
    // 7F28DFDC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28DFE0:
    ctx->pc = 0x7F28DFE0u;
    // 7F28DFE0: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DFE4:
    ctx->pc = 0x7F28DFE4u;
    // 7F28DFE4: bc    12, 2, 0x7F28E028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E028;
        }
    }

label_7F28DFE8:
    ctx->pc = 0x7F28DFE8u;
    ctx->downcount -= 2;
    // 7F28DFE8: rlwinm. r0, r30, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28DFEC:
    ctx->pc = 0x7F28DFECu;
    // 7F28DFEC: bc    12, 2, 0x7F28E000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E000;
        }
    }

label_7F28DFF0:
    ctx->pc = 0x7F28DFF0u;
    ctx->downcount -= 4;
    // 7F28DFF0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28DFF4:
    ctx->pc = 0x7F28DFF4u;
    // 7F28DFF4: addi    r0, r3, 20056
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20056);

label_7F28DFF8:
    ctx->pc = 0x7F28DFF8u;
    // 7F28DFF8: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28DFFC:
    ctx->pc = 0x7F28DFFCu;
    // 7F28DFFC: b       0x7F28E064
    {
            goto label_7F28E064;
    }

label_7F28E000:
    ctx->pc = 0x7F28E000u;
    ctx->downcount -= 2;
    // 7F28E000: rlwinm. r0, r30, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E004:
    ctx->pc = 0x7F28E004u;
    // 7F28E004: bc    12, 2, 0x7F28E018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E018;
        }
    }

label_7F28E008:
    ctx->pc = 0x7F28E008u;
    ctx->downcount -= 4;
    // 7F28E008: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E00C:
    ctx->pc = 0x7F28E00Cu;
    // 7F28E00C: addi    r0, r3, 19768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19768);

label_7F28E010:
    ctx->pc = 0x7F28E010u;
    // 7F28E010: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E014:
    ctx->pc = 0x7F28E014u;
    // 7F28E014: b       0x7F28E064
    {
            goto label_7F28E064;
    }

label_7F28E018:
    ctx->pc = 0x7F28E018u;
    ctx->downcount -= 4;
    // 7F28E018: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E01C:
    ctx->pc = 0x7F28E01Cu;
    // 7F28E01C: addi    r0, r3, 19880
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19880);

label_7F28E020:
    ctx->pc = 0x7F28E020u;
    // 7F28E020: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E024:
    ctx->pc = 0x7F28E024u;
    // 7F28E024: b       0x7F28E064
    {
            goto label_7F28E064;
    }

label_7F28E028:
    ctx->pc = 0x7F28E028u;
    ctx->downcount -= 2;
    // 7F28E028: rlwinm. r0, r30, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E02C:
    ctx->pc = 0x7F28E02Cu;
    // 7F28E02C: bc    12, 2, 0x7F28E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E040;
        }
    }

label_7F28E030:
    ctx->pc = 0x7F28E030u;
    ctx->downcount -= 4;
    // 7F28E030: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E034:
    ctx->pc = 0x7F28E034u;
    // 7F28E034: addi    r0, r3, 19560
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19560);

label_7F28E038:
    ctx->pc = 0x7F28E038u;
    // 7F28E038: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E03C:
    ctx->pc = 0x7F28E03Cu;
    // 7F28E03C: b       0x7F28E064
    {
            goto label_7F28E064;
    }

label_7F28E040:
    ctx->pc = 0x7F28E040u;
    ctx->downcount -= 2;
    // 7F28E040: rlwinm. r0, r30, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E044:
    ctx->pc = 0x7F28E044u;
    // 7F28E044: bc    12, 2, 0x7F28E058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E058;
        }
    }

label_7F28E048:
    ctx->pc = 0x7F28E048u;
    ctx->downcount -= 4;
    // 7F28E048: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E04C:
    ctx->pc = 0x7F28E04Cu;
    // 7F28E04C: addi    r0, r3, 19656
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19656);

label_7F28E050:
    ctx->pc = 0x7F28E050u;
    // 7F28E050: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E054:
    ctx->pc = 0x7F28E054u;
    // 7F28E054: b       0x7F28E064
    {
            goto label_7F28E064;
    }

label_7F28E058:
    ctx->pc = 0x7F28E058u;
    ctx->downcount -= 3;
    // 7F28E058: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E05C:
    ctx->pc = 0x7F28E05Cu;
    // 7F28E05C: addi    r0, r3, 19352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(19352);

label_7F28E060:
    ctx->pc = 0x7F28E060u;
    // 7F28E060: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E064:
    ctx->pc = 0x7F28E064u;
    ctx->downcount -= 17;
    // 7F28E064: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28E068:
    ctx->pc = 0x7F28E068u;
    // 7F28E068: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28E06C:
    ctx->pc = 0x7F28E06Cu;
    // 7F28E06C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E070:
    ctx->pc = 0x7F28E070u;
    // 7F28E070: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28E074:
    ctx->pc = 0x7F28E074u;
    // 7F28E074: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28E078:
    ctx->pc = 0x7F28E078u;
    // 7F28E078: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28E07C:
    ctx->pc = 0x7F28E07Cu;
    ctx->downcount -= 18;
    // 7F28E07C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28E080:
    ctx->pc = 0x7F28E080u;
    // 7F28E080: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28E084:
    ctx->pc = 0x7F28E084u;
    // 7F28E084: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E088:
    ctx->pc = 0x7F28E088u;
    // 7F28E088: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28E08C:
    ctx->pc = 0x7F28E08Cu;
    // 7F28E08C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E090:
    ctx->pc = 0x7F28E090u;
    // 7F28E090: lwz     r0, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E094:
    ctx->pc = 0x7F28E094u;
    // 7F28E094: rlwinm. r0, r0, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E098:
    ctx->pc = 0x7F28E098u;
    // 7F28E098: bc    4, 2, 0x7F28E1D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E1D8;
        }
    }

label_7F28E09C:
    ctx->pc = 0x7F28E09Cu;
    ctx->downcount -= 8;
    // 7F28E09C: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E0A0:
    ctx->pc = 0x7F28E0A0u;
    // 7F28E0A0: lwz     r4, 400(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E0A4:
    ctx->pc = 0x7F28E0A4u;
    // 7F28E0A4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E0A8:
    ctx->pc = 0x7F28E0A8u;
    // 7F28E0A8: lwz     r30, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28E0AC:
    ctx->pc = 0x7F28E0ACu;
    // 7F28E0AC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E0B0:
    ctx->pc = 0x7F28E0B0u;
    // 7F28E0B0: rlwinm r3, r30, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0xFFFFFFFDu;
    }

label_7F28E0B4:
    ctx->pc = 0x7F28E0B4u;
    // 7F28E0B4: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E0B8:
    ctx->pc = 0x7F28E0B8u;
    // 7F28E0B8: bc    12, 2, 0x7F28E0C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E0C0;
        }
    }

label_7F28E0BC:
    ctx->pc = 0x7F28E0BCu;
    ctx->downcount -= 1;
    // 7F28E0BC: ori     r3, r30, 0x0002
    ctx->gpr[3] = ctx->gpr[30] | 0x0002u;

label_7F28E0C0:
    ctx->pc = 0x7F28E0C0u;
    ctx->downcount -= 2;
    // 7F28E0C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E0C4:
    ctx->pc = 0x7F28E0C4u;
    // 7F28E0C4: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28E0C8u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28E0C8:
    ctx->pc = 0x7F28E0C8u;
    ctx->downcount -= 4;
    // 7F28E0C8: lwz     r0, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E0CC:
    ctx->pc = 0x7F28E0CCu;
    // 7F28E0CC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E0D0:
    ctx->pc = 0x7F28E0D0u;
    // 7F28E0D0: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E0D4:
    ctx->pc = 0x7F28E0D4u;
    // 7F28E0D4: bc    12, 2, 0x7F28E0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E0E4;
        }
    }

label_7F28E0D8:
    ctx->pc = 0x7F28E0D8u;
    ctx->downcount -= 3;
    // 7F28E0D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28E0DC:
    ctx->pc = 0x7F28E0DCu;
    // 7F28E0DC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F28E0E0:
    ctx->pc = 0x7F28E0E0u;
    // 7F28E0E0: bl      0x7F28DF48
    {
            ctx->lr = 0x7F28E0E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DF48u;
                return;
            }
            goto label_7F28DF48;
    }

label_7F28E0E4:
    ctx->pc = 0x7F28E0E4u;
    ctx->downcount -= 8;
    // 7F28E0E4: lwz     r3, 388(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E0E8:
    ctx->pc = 0x7F28E0E8u;
    // 7F28E0E8: lwz     r4, 396(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(396);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E0EC:
    ctx->pc = 0x7F28E0ECu;
    // 7F28E0EC: lbz     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_7F28E0F0:
    ctx->pc = 0x7F28E0F0u;
    // 7F28E0F0: lwz     r3, 392(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E0F4:
    ctx->pc = 0x7F28E0F4u;
    // 7F28E0F4: cmpwi   r31, 66
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(66);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E0F8:
    ctx->pc = 0x7F28E0F8u;
    // 7F28E0F8: lha     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E0FC:
    ctx->pc = 0x7F28E0FCu;
    // 7F28E0FC: lbz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F28E100:
    ctx->pc = 0x7F28E100u;
    // 7F28E100: bc    4, 2, 0x7F28E108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E108;
        }
    }

label_7F28E104:
    ctx->pc = 0x7F28E104u;
    ctx->downcount -= 1;
    // 7F28E104: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F28E108:
    ctx->pc = 0x7F28E108u;
    ctx->downcount -= 3;
    // 7F28E108: lwz     r4, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E10C:
    ctx->pc = 0x7F28E10Cu;
    // 7F28E10C: cmpw    r4, r31
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E110:
    ctx->pc = 0x7F28E110u;
    // 7F28E110: bc    4, 2, 0x7F28E11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E11C;
        }
    }

label_7F28E114:
    ctx->pc = 0x7F28E114u;
    ctx->downcount -= 2;
    // 7F28E114: rlwinm. r0, r30, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E118:
    ctx->pc = 0x7F28E118u;
    // 7F28E118: bc    12, 2, 0x7F28E1D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E1D0;
        }
    }

label_7F28E11C:
    ctx->pc = 0x7F28E11Cu;
    ctx->downcount -= 7;
    // 7F28E11C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F28E120:
    ctx->pc = 0x7F28E120u;
    // 7F28E120: rlwinm r0, r28, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_7F28E124:
    ctx->pc = 0x7F28E124u;
    // 7F28E124: addi    r3, r3, -180
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-180);

label_7F28E128:
    ctx->pc = 0x7F28E128u;
    // 7F28E128: rlwinm r30, r30, 0, 30, 28
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0xFFFFFFFBu;
    }

label_7F28E12C:
    ctx->pc = 0x7F28E12Cu;
    // 7F28E12C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E130:
    ctx->pc = 0x7F28E130u;
    // 7F28E130: rlwinm. r0, r0, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E134:
    ctx->pc = 0x7F28E134u;
    // 7F28E134: bc    4, 2, 0x7F28E15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E15C;
        }
    }

label_7F28E138:
    ctx->pc = 0x7F28E138u;
    ctx->downcount -= 2;
    // 7F28E138: cmpwi   r31, 5
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E13C:
    ctx->pc = 0x7F28E13Cu;
    // 7F28E13C: bc    12, 2, 0x7F28E158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E158;
        }
    }

label_7F28E140:
    ctx->pc = 0x7F28E140u;
    ctx->downcount -= 2;
    // 7F28E140: cmpwi   r31, 11
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E144:
    ctx->pc = 0x7F28E144u;
    // 7F28E144: bc    12, 2, 0x7F28E158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E158;
        }
    }

label_7F28E148:
    ctx->pc = 0x7F28E148u;
    ctx->downcount -= 2;
    // 7F28E148: cmpwi   r4, 5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E14C:
    ctx->pc = 0x7F28E14Cu;
    // 7F28E14C: bc    12, 2, 0x7F28E158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E158;
        }
    }

label_7F28E150:
    ctx->pc = 0x7F28E150u;
    ctx->downcount -= 2;
    // 7F28E150: cmpwi   r4, 11
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E154:
    ctx->pc = 0x7F28E154u;
    // 7F28E154: bc    4, 2, 0x7F28E15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E15C;
        }
    }

label_7F28E158:
    ctx->pc = 0x7F28E158u;
    ctx->downcount -= 1;
    // 7F28E158: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F28E15C:
    ctx->pc = 0x7F28E15Cu;
    ctx->downcount -= 2;
    // 7F28E15C: cmpwi   r31, 12
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E160:
    ctx->pc = 0x7F28E160u;
    // 7F28E160: bc    12, 0, 0x7F28E19C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E19C;
        }
    }

label_7F28E164:
    ctx->pc = 0x7F28E164u;
    ctx->downcount -= 15;
    // 7F28E164: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E168:
    ctx->pc = 0x7F28E168u;
    // 7F28E168: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F28E16C:
    ctx->pc = 0x7F28E16Cu;
    // 7F28E16C: addi    r3, r3, -6704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F28E170:
    ctx->pc = 0x7F28E170u;
    // 7F28E170: rlwinm r0, r31, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F28E174:
    ctx->pc = 0x7F28E174u;
    // 7F28E174: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E178:
    ctx->pc = 0x7F28E178u;
    // 7F28E178: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F28E17C:
    ctx->pc = 0x7F28E17Cu;
    // 7F28E17C: mulli   r9, r5, 5
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)5);

label_7F28E180:
    ctx->pc = 0x7F28E180u;
    // 7F28E180: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28E184:
    ctx->pc = 0x7F28E184u;
    // 7F28E184: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28E188:
    ctx->pc = 0x7F28E188u;
    // 7F28E188: lha     r5, -24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E18C:
    ctx->pc = 0x7F28E18Cu;
    // 7F28E18C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28E190:
    ctx->pc = 0x7F28E190u;
    // 7F28E190: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_7F28E194:
    ctx->pc = 0x7F28E194u;
    // 7F28E194: bl      0x7F042C94
    {
            ctx->lr = 0x7F28E198u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F28E198:
    ctx->pc = 0x7F28E198u;
    ctx->downcount -= 1;
    // 7F28E198: b       0x7F28E1CC
    {
            goto label_7F28E1CC;
    }

label_7F28E19C:
    ctx->pc = 0x7F28E19Cu;
    ctx->downcount -= 14;
    // 7F28E19C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E1A0:
    ctx->pc = 0x7F28E1A0u;
    // 7F28E1A0: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F28E1A4:
    ctx->pc = 0x7F28E1A4u;
    // 7F28E1A4: addi    r3, r3, -6704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F28E1A8:
    ctx->pc = 0x7F28E1A8u;
    // 7F28E1A8: rlwinm r0, r31, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F28E1AC:
    ctx->pc = 0x7F28E1ACu;
    // 7F28E1AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E1B0:
    ctx->pc = 0x7F28E1B0u;
    // 7F28E1B0: mulli   r9, r5, 5
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)5);

label_7F28E1B4:
    ctx->pc = 0x7F28E1B4u;
    // 7F28E1B4: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F28E1B8:
    ctx->pc = 0x7F28E1B8u;
    // 7F28E1B8: lhax    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E1BC:
    ctx->pc = 0x7F28E1BCu;
    // 7F28E1BC: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_7F28E1C0:
    ctx->pc = 0x7F28E1C0u;
    // 7F28E1C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28E1C4:
    ctx->pc = 0x7F28E1C4u;
    // 7F28E1C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28E1C8:
    ctx->pc = 0x7F28E1C8u;
    // 7F28E1C8: bl      0x7F042C94
    {
            ctx->lr = 0x7F28E1CCu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F28E1CC:
    ctx->pc = 0x7F28E1CCu;
    ctx->downcount -= 1;
    // 7F28E1CC: stw     r31, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28E1D0:
    ctx->pc = 0x7F28E1D0u;
    ctx->downcount -= 2;
    // 7F28E1D0: lwz     r3, 400(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E1D4:
    ctx->pc = 0x7F28E1D4u;
    // 7F28E1D4: stw     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28E1D8:
    ctx->pc = 0x7F28E1D8u;
    ctx->downcount -= 16;
    // 7F28E1D8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28E1DC:
    ctx->pc = 0x7F28E1DCu;
    // 7F28E1DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E1E0:
    ctx->pc = 0x7F28E1E0u;
    // 7F28E1E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28E1E4:
    ctx->pc = 0x7F28E1E4u;
    // 7F28E1E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28E1E8:
    ctx->pc = 0x7F28E1E8u;
    // 7F28E1E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28E1EC:
    ctx->pc = 0x7F28E1ECu;
    ctx->downcount -= 18;
    // 7F28E1EC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28E1F0:
    ctx->pc = 0x7F28E1F0u;
    // 7F28E1F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28E1F4:
    ctx->pc = 0x7F28E1F4u;
    // 7F28E1F4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E1F8:
    ctx->pc = 0x7F28E1F8u;
    // 7F28E1F8: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28E1FC:
    ctx->pc = 0x7F28E1FCu;
    // 7F28E1FC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E200:
    ctx->pc = 0x7F28E200u;
    // 7F28E200: lwz     r0, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E204:
    ctx->pc = 0x7F28E204u;
    // 7F28E204: rlwinm. r0, r0, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E208:
    ctx->pc = 0x7F28E208u;
    // 7F28E208: bc    4, 2, 0x7F28E4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E4AC;
        }
    }

label_7F28E20C:
    ctx->pc = 0x7F28E20Cu;
    ctx->downcount -= 4;
    // 7F28E20C: lwz     r3, 400(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E210:
    ctx->pc = 0x7F28E210u;
    // 7F28E210: lwz     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F28E214:
    ctx->pc = 0x7F28E214u;
    // 7F28E214: rlwinm. r0, r29, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E218:
    ctx->pc = 0x7F28E218u;
    // 7F28E218: bc    12, 2, 0x7F28E23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E23C;
        }
    }

label_7F28E21C:
    ctx->pc = 0x7F28E21Cu;
    ctx->downcount -= 8;
    // 7F28E21C: lwz     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E220:
    ctx->pc = 0x7F28E220u;
    // 7F28E220: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F28E224:
    ctx->pc = 0x7F28E224u;
    // 7F28E224: lwz     r0, 412(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(412);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E228:
    ctx->pc = 0x7F28E228u;
    // 7F28E228: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E22C:
    ctx->pc = 0x7F28E22Cu;
    // 7F28E22C: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F28E230:
    ctx->pc = 0x7F28E230u;
    // 7F28E230: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F28E234:
    ctx->pc = 0x7F28E234u;
    // 7F28E234: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E238:
    ctx->pc = 0x7F28E238u;
    // 7F28E238: b       0x7F28E258
    {
            goto label_7F28E258;
    }

label_7F28E23C:
    ctx->pc = 0x7F28E23Cu;
    ctx->downcount -= 7;
    // 7F28E23C: lwz     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E240:
    ctx->pc = 0x7F28E240u;
    // 7F28E240: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F28E244:
    ctx->pc = 0x7F28E244u;
    // 7F28E244: lwz     r0, 412(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(412);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E248:
    ctx->pc = 0x7F28E248u;
    // 7F28E248: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E24C:
    ctx->pc = 0x7F28E24Cu;
    // 7F28E24C: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F28E250:
    ctx->pc = 0x7F28E250u;
    // 7F28E250: andc   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ~ctx->gpr[0];
    }

label_7F28E254:
    ctx->pc = 0x7F28E254u;
    // 7F28E254: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E258:
    ctx->pc = 0x7F28E258u;
    ctx->downcount -= 1;
    // 7F28E258: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28E25Cu;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28E25C:
    ctx->pc = 0x7F28E25Cu;
    ctx->downcount -= 3;
    // 7F28E25C: lwz     r4, 428(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(428);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E260:
    ctx->pc = 0x7F28E260u;
    // 7F28E260: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E264:
    ctx->pc = 0x7F28E264u;
    // 7F28E264: bc    12, 2, 0x7F28E48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E48C;
        }
    }

label_7F28E268:
    ctx->pc = 0x7F28E268u;
    ctx->downcount -= 3;
    // 7F28E268: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E26C:
    ctx->pc = 0x7F28E26Cu;
    // 7F28E26C: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E270:
    ctx->pc = 0x7F28E270u;
    // 7F28E270: bc    12, 2, 0x7F28E48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E48C;
        }
    }

label_7F28E274:
    ctx->pc = 0x7F28E274u;
    ctx->downcount -= 2;
    // 7F28E274: rlwinm. r0, r29, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E278:
    ctx->pc = 0x7F28E278u;
    // 7F28E278: bc    12, 2, 0x7F28E29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E29C;
        }
    }

label_7F28E27C:
    ctx->pc = 0x7F28E27Cu;
    ctx->downcount -= 8;
    // 7F28E27C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E280:
    ctx->pc = 0x7F28E280u;
    // 7F28E280: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E284:
    ctx->pc = 0x7F28E284u;
    // 7F28E284: addi    r3, r3, 20456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20456);

label_7F28E288:
    ctx->pc = 0x7F28E288u;
    // 7F28E288: rlwinm r31, r29, 20, 28, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[29], 20u) & 0x0000000Fu;
    }

label_7F28E28C:
    ctx->pc = 0x7F28E28Cu;
    // 7F28E28C: addi    r0, r4, 20632
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20632);

label_7F28E290:
    ctx->pc = 0x7F28E290u;
    // 7F28E290: lwz     r30, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28E294:
    ctx->pc = 0x7F28E294u;
    // 7F28E294: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28E298:
    ctx->pc = 0x7F28E298u;
    // 7F28E298: b       0x7F28E354
    {
            goto label_7F28E354;
    }

label_7F28E29C:
    ctx->pc = 0x7F28E29Cu;
    ctx->downcount -= 2;
    // 7F28E29C: rlwinm. r0, r29, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E2A0:
    ctx->pc = 0x7F28E2A0u;
    // 7F28E2A0: bc    12, 2, 0x7F28E2AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E2AC;
        }
    }

label_7F28E2A4:
    ctx->pc = 0x7F28E2A4u;
    ctx->downcount -= 2;
    // 7F28E2A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F28E2A8:
    ctx->pc = 0x7F28E2A8u;
    // 7F28E2A8: b       0x7F28E2F4
    {
            goto label_7F28E2F4;
    }

label_7F28E2AC:
    ctx->pc = 0x7F28E2ACu;
    ctx->downcount -= 2;
    // 7F28E2AC: rlwinm. r0, r29, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E2B0:
    ctx->pc = 0x7F28E2B0u;
    // 7F28E2B0: bc    12, 2, 0x7F28E2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E2C8;
        }
    }

label_7F28E2B4:
    ctx->pc = 0x7F28E2B4u;
    ctx->downcount -= 5;
    // 7F28E2B4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E2B8:
    ctx->pc = 0x7F28E2B8u;
    // 7F28E2B8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28E2BC:
    ctx->pc = 0x7F28E2BCu;
    // 7F28E2BC: addi    r3, r4, 20328
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20328);

label_7F28E2C0:
    ctx->pc = 0x7F28E2C0u;
    // 7F28E2C0: lwzx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28E2C4:
    ctx->pc = 0x7F28E2C4u;
    // 7F28E2C4: b       0x7F28E2F4
    {
            goto label_7F28E2F4;
    }

label_7F28E2C8:
    ctx->pc = 0x7F28E2C8u;
    ctx->downcount -= 2;
    // 7F28E2C8: rlwinm. r0, r29, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E2CC:
    ctx->pc = 0x7F28E2CCu;
    // 7F28E2CC: bc    12, 2, 0x7F28E2E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E2E4;
        }
    }

label_7F28E2D0:
    ctx->pc = 0x7F28E2D0u;
    ctx->downcount -= 5;
    // 7F28E2D0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E2D4:
    ctx->pc = 0x7F28E2D4u;
    // 7F28E2D4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28E2D8:
    ctx->pc = 0x7F28E2D8u;
    // 7F28E2D8: addi    r3, r4, 20240
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20240);

label_7F28E2DC:
    ctx->pc = 0x7F28E2DCu;
    // 7F28E2DC: lwzx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28E2E0:
    ctx->pc = 0x7F28E2E0u;
    // 7F28E2E0: b       0x7F28E2F4
    {
            goto label_7F28E2F4;
    }

label_7F28E2E4:
    ctx->pc = 0x7F28E2E4u;
    ctx->downcount -= 4;
    // 7F28E2E4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E2E8:
    ctx->pc = 0x7F28E2E8u;
    // 7F28E2E8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28E2EC:
    ctx->pc = 0x7F28E2ECu;
    // 7F28E2EC: addi    r3, r4, 20152
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20152);

label_7F28E2F0:
    ctx->pc = 0x7F28E2F0u;
    // 7F28E2F0: lwzx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28E2F4:
    ctx->pc = 0x7F28E2F4u;
    ctx->downcount -= 2;
    // 7F28E2F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28E2F8:
    ctx->pc = 0x7F28E2F8u;
    // 7F28E2F8: bl      0x7F28DF80
    {
            ctx->lr = 0x7F28E2FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DF80u;
                return;
            }
            goto label_7F28DF80;
    }

label_7F28E2FC:
    ctx->pc = 0x7F28E2FCu;
    ctx->downcount -= 6;
    // 7F28E2FC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E300:
    ctx->pc = 0x7F28E300u;
    // 7F28E300: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F28E304:
    ctx->pc = 0x7F28E304u;
    // 7F28E304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28E308:
    ctx->pc = 0x7F28E308u;
    // 7F28E308: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28E30C:
    ctx->pc = 0x7F28E30Cu;
    // 7F28E30C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28E310:
    ctx->pc = 0x7F28E310u;
    // 7F28E310: bl      0x7F012018
    {
            ctx->lr = 0x7F28E314u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28E314:
    ctx->pc = 0x7F28E314u;
    ctx->downcount -= 5;
    // 7F28E314: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28E318:
    ctx->pc = 0x7F28E318u;
    // 7F28E318: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28E31C:
    ctx->pc = 0x7F28E31Cu;
    // 7F28E31C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28E320:
    ctx->pc = 0x7F28E320u;
    // 7F28E320: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E324:
    ctx->pc = 0x7F28E324u;
    // 7F28E324: bc    12, 2, 0x7F28E340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E340;
        }
    }

label_7F28E328:
    ctx->pc = 0x7F28E328u;
    ctx->downcount -= 1;
    // 7F28E328: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28E32Cu;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28E32C:
    ctx->pc = 0x7F28E32Cu;
    ctx->downcount -= 5;
    // 7F28E32C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E330:
    ctx->pc = 0x7F28E330u;
    // 7F28E330: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28E334:
    ctx->pc = 0x7F28E334u;
    // 7F28E334: addi    r3, r4, 20544
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20544);

label_7F28E338:
    ctx->pc = 0x7F28E338u;
    // 7F28E338: lwzx    r30, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28E33C:
    ctx->pc = 0x7F28E33Cu;
    // 7F28E33C: b       0x7F28E354
    {
            goto label_7F28E354;
    }

label_7F28E340:
    ctx->pc = 0x7F28E340u;
    ctx->downcount -= 1;
    // 7F28E340: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28E344u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28E344:
    ctx->pc = 0x7F28E344u;
    ctx->downcount -= 4;
    // 7F28E344: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E348:
    ctx->pc = 0x7F28E348u;
    // 7F28E348: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F28E34C:
    ctx->pc = 0x7F28E34Cu;
    // 7F28E34C: addi    r3, r4, 20456
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20456);

label_7F28E350:
    ctx->pc = 0x7F28E350u;
    // 7F28E350: lwzx    r30, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28E354:
    ctx->pc = 0x7F28E354u;
    ctx->downcount -= 12;
    // 7F28E354: rlwinm r31, r31, 4, 0, 27
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F28E358:
    ctx->pc = 0x7F28E358u;
    // 7F28E358: rlwinm. r0, r29, 0, 21, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000400u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E35C:
    ctx->pc = 0x7F28E35Cu;
    // 7F28E35C: add   r6, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F28E360:
    ctx->pc = 0x7F28E360u;
    // 7F28E360: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E364:
    ctx->pc = 0x7F28E364u;
    // 7F28E364: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E368:
    ctx->pc = 0x7F28E368u;
    // 7F28E368: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E36C:
    ctx->pc = 0x7F28E36Cu;
    // 7F28E36C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E370:
    ctx->pc = 0x7F28E370u;
    // 7F28E370: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E374:
    ctx->pc = 0x7F28E374u;
    // 7F28E374: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28E378:
    ctx->pc = 0x7F28E378u;
    // 7F28E378: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28E37C:
    ctx->pc = 0x7F28E37Cu;
    // 7F28E37C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E380:
    ctx->pc = 0x7F28E380u;
    // 7F28E380: bc    12, 2, 0x7F28E39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E39C;
        }
    }

label_7F28E384:
    ctx->pc = 0x7F28E384u;
    ctx->downcount -= 6;
    // 7F28E384: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E388:
    ctx->pc = 0x7F28E388u;
    // 7F28E388: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28E38C:
    ctx->pc = 0x7F28E38Cu;
    // 7F28E38C: lfs     f0, 26208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E38Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E390:
    ctx->pc = 0x7F28E390u;
    // 7F28E390: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28E390u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F28E394:
    ctx->pc = 0x7F28E394u;
    // 7F28E394: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E398:
    ctx->pc = 0x7F28E398u;
    // 7F28E398: b       0x7F28E3B8
    {
            goto label_7F28E3B8;
    }

label_7F28E39C:
    ctx->pc = 0x7F28E39Cu;
    ctx->downcount -= 2;
    // 7F28E39C: rlwinm. r0, r29, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E3A0:
    ctx->pc = 0x7F28E3A0u;
    // 7F28E3A0: bc    12, 2, 0x7F28E3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E3B8;
        }
    }

label_7F28E3A4:
    ctx->pc = 0x7F28E3A4u;
    ctx->downcount -= 5;
    // 7F28E3A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E3A8:
    ctx->pc = 0x7F28E3A8u;
    // 7F28E3A8: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28E3AC:
    ctx->pc = 0x7F28E3ACu;
    // 7F28E3AC: lfs     f0, 26212(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E3ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E3B0:
    ctx->pc = 0x7F28E3B0u;
    // 7F28E3B0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28E3B0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F28E3B4:
    ctx->pc = 0x7F28E3B4u;
    // 7F28E3B4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E3B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E3B8:
    ctx->pc = 0x7F28E3B8u;
    ctx->downcount -= 3;
    // 7F28E3B8: lwz     r0, 424(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E3BC:
    ctx->pc = 0x7F28E3BCu;
    // 7F28E3BC: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E3C0:
    ctx->pc = 0x7F28E3C0u;
    // 7F28E3C0: bc    12, 2, 0x7F28E434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E434;
        }
    }

label_7F28E3C4:
    ctx->pc = 0x7F28E3C4u;
    ctx->downcount -= 28;
    // 7F28E3C4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E3C8:
    ctx->pc = 0x7F28E3C8u;
    // 7F28E3C8: add   r7, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F28E3CC:
    ctx->pc = 0x7F28E3CCu;
    // 7F28E3CC: addi    r0, r3, 20416
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20416);

label_7F28E3D0:
    ctx->pc = 0x7F28E3D0u;
    // 7F28E3D0: rlwinm r4, r30, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 3u) & 0xFFFFFFF8u;
    }

label_7F28E3D4:
    ctx->pc = 0x7F28E3D4u;
    // 7F28E3D4: lis     r8, 32584
    ctx->gpr[8] = ((u32)(s32)(32584) << 16);

label_7F28E3D8:
    ctx->pc = 0x7F28E3D8u;
    // 7F28E3D8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E3DC:
    ctx->pc = 0x7F28E3DCu;
    // 7F28E3DC: add   r5, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F28E3E0:
    ctx->pc = 0x7F28E3E0u;
    // 7F28E3E0: lwz     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F28E3E4:
    ctx->pc = 0x7F28E3E4u;
    // 7F28E3E4: addi    r12, r8, 20728
    ctx->gpr[12] = ctx->gpr[8] + (u32)(s32)(20728);

label_7F28E3E8:
    ctx->pc = 0x7F28E3E8u;
    // 7F28E3E8: lwz     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F28E3EC:
    ctx->pc = 0x7F28E3ECu;
    // 7F28E3EC: lwz     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F28E3F0:
    ctx->pc = 0x7F28E3F0u;
    // 7F28E3F0: addi    r4, r3, -6692
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6692);

label_7F28E3F4:
    ctx->pc = 0x7F28E3F4u;
    // 7F28E3F4: lwz     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F28E3F8:
    ctx->pc = 0x7F28E3F8u;
    // 7F28E3F8: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F28E3FC:
    ctx->pc = 0x7F28E3FCu;
    // 7F28E3FC: lfs     f0, 12(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F28E3FCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E400:
    ctx->pc = 0x7F28E400u;
    // 7F28E400: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E404:
    ctx->pc = 0x7F28E404u;
    // 7F28E404: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E408:
    ctx->pc = 0x7F28E408u;
    // 7F28E408: stw     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F28E40C:
    ctx->pc = 0x7F28E40Cu;
    // 7F28E40C: stw     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F28E410:
    ctx->pc = 0x7F28E410u;
    // 7F28E410: stw     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F28E414:
    ctx->pc = 0x7F28E414u;
    // 7F28E414: stw     r8, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F28E418:
    ctx->pc = 0x7F28E418u;
    // 7F28E418: stfs     f0, -6752(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F28E418u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6752);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E41C:
    ctx->pc = 0x7F28E41Cu;
    // 7F28E41C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28E420:
    ctx->pc = 0x7F28E420u;
    // 7F28E420: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E424:
    ctx->pc = 0x7F28E424u;
    // 7F28E424: lwz     r0, 424(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E428:
    ctx->pc = 0x7F28E428u;
    // 7F28E428: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F28E42C:
    ctx->pc = 0x7F28E42Cu;
    // 7F28E42C: stw     r0, 424(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E430:
    ctx->pc = 0x7F28E430u;
    // 7F28E430: b       0x7F28E498
    {
            goto label_7F28E498;
    }

label_7F28E434:
    ctx->pc = 0x7F28E434u;
    ctx->downcount -= 5;
    // 7F28E434: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E438:
    ctx->pc = 0x7F28E438u;
    // 7F28E438: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28E43C:
    ctx->pc = 0x7F28E43Cu;
    // 7F28E43C: addi    r3, r3, 20728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20728);

label_7F28E440:
    ctx->pc = 0x7F28E440u;
    // 7F28E440: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28E444:
    ctx->pc = 0x7F28E444u;
    // 7F28E444: bl      0x7F3C9F98
    {
            ctx->lr = 0x7F28E448u;
            ctx->pc = 0x7F3C9F98u;
            return;
    }

label_7F28E448:
    ctx->pc = 0x7F28E448u;
    ctx->downcount -= 5;
    // 7F28E448: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28E44C:
    ctx->pc = 0x7F28E44Cu;
    // 7F28E44C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28E450:
    ctx->pc = 0x7F28E450u;
    // 7F28E450: lfs     f2, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E450u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28E454:
    ctx->pc = 0x7F28E454u;
    // 7F28E454: lfs     f1, -6752(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28E454u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28E458:
    ctx->pc = 0x7F28E458u;
    // 7F28E458: bl      0x7F3C9B14
    {
            ctx->lr = 0x7F28E45Cu;
            ctx->pc = 0x7F3C9B14u;
            return;
    }

label_7F28E45C:
    ctx->pc = 0x7F28E45Cu;
    ctx->downcount -= 11;
    // 7F28E45C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28E460:
    ctx->pc = 0x7F28E460u;
    // 7F28E460: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E464:
    ctx->pc = 0x7F28E464u;
    // 7F28E464: addi    r5, r4, -6752
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6752);

label_7F28E468:
    ctx->pc = 0x7F28E468u;
    // 7F28E468: rlwinm r6, r30, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[30], 3u) & 0xFFFFFFF8u;
    }

label_7F28E46C:
    ctx->pc = 0x7F28E46Cu;
    // 7F28E46C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28E470:
    ctx->pc = 0x7F28E470u;
    // 7F28E470: stfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28E470u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28E474:
    ctx->pc = 0x7F28E474u;
    // 7F28E474: addi    r0, r4, 20416
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20416);

label_7F28E478:
    ctx->pc = 0x7F28E478u;
    // 7F28E478: addi    r3, r3, -6692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6692);

label_7F28E47C:
    ctx->pc = 0x7F28E47Cu;
    // 7F28E47C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28E480:
    ctx->pc = 0x7F28E480u;
    // 7F28E480: add   r4, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28E484:
    ctx->pc = 0x7F28E484u;
    // 7F28E484: bl      0x7F3CA210
    {
            ctx->lr = 0x7F28E488u;
            ctx->pc = 0x7F3CA210u;
            return;
    }

label_7F28E488:
    ctx->pc = 0x7F28E488u;
    ctx->downcount -= 1;
    // 7F28E488: b       0x7F28E498
    {
            goto label_7F28E498;
    }

label_7F28E48C:
    ctx->pc = 0x7F28E48Cu;
    ctx->downcount -= 3;
    // 7F28E48C: lwz     r0, 424(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E490:
    ctx->pc = 0x7F28E490u;
    // 7F28E490: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F28E494:
    ctx->pc = 0x7F28E494u;
    // 7F28E494: stw     r0, 424(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E498:
    ctx->pc = 0x7F28E498u;
    ctx->downcount -= 5;
    // 7F28E498: lis     r4, -1
    ctx->gpr[4] = ((u32)(s32)(-1) << 16);

label_7F28E49C:
    ctx->pc = 0x7F28E49Cu;
    // 7F28E49C: lwz     r3, 400(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E4A0:
    ctx->pc = 0x7F28E4A0u;
    // 7F28E4A0: addi    r0, r4, 2191
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2191);

label_7F28E4A4:
    ctx->pc = 0x7F28E4A4u;
    // 7F28E4A4: and   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
    }

label_7F28E4A8:
    ctx->pc = 0x7F28E4A8u;
    // 7F28E4A8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E4AC:
    ctx->pc = 0x7F28E4ACu;
    ctx->downcount -= 16;
    // 7F28E4AC: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28E4B0:
    ctx->pc = 0x7F28E4B0u;
    // 7F28E4B0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E4B4:
    ctx->pc = 0x7F28E4B4u;
    // 7F28E4B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28E4B8:
    ctx->pc = 0x7F28E4B8u;
    // 7F28E4B8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F28E4BC:
    ctx->pc = 0x7F28E4BCu;
    // 7F28E4BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28E4C0:
    ctx->pc = 0x7F28E4C0u;
    ctx->downcount -= 10;
    // 7F28E4C0: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28E4C4:
    ctx->pc = 0x7F28E4C4u;
    // 7F28E4C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28E4C8:
    ctx->pc = 0x7F28E4C8u;
    // 7F28E4C8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28E4CC:
    ctx->pc = 0x7F28E4CCu;
    // 7F28E4CC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28E4D0:
    ctx->pc = 0x7F28E4D0u;
    // 7F28E4D0: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E4D4:
    ctx->pc = 0x7F28E4D4u;
    // 7F28E4D4: addi    r4, r4, 21980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21980);

label_7F28E4D8:
    ctx->pc = 0x7F28E4D8u;
    // 7F28E4D8: stw     r31, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28E4DC:
    ctx->pc = 0x7F28E4DCu;
    // 7F28E4DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E4E0:
    ctx->pc = 0x7F28E4E0u;
    // 7F28E4E0: addi    r3, r31, 108
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(108);

label_7F28E4E4:
    ctx->pc = 0x7F28E4E4u;
    // 7F28E4E4: bl      0x7F3C9F98
    {
            ctx->lr = 0x7F28E4E8u;
            ctx->pc = 0x7F3C9F98u;
            return;
    }

label_7F28E4E8:
    ctx->pc = 0x7F28E4E8u;
    ctx->downcount -= 5;
    // 7F28E4E8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28E4EC:
    ctx->pc = 0x7F28E4ECu;
    // 7F28E4EC: addi    r3, r31, 404
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(404);

label_7F28E4F0:
    ctx->pc = 0x7F28E4F0u;
    // 7F28E4F0: addi    r4, r4, 21964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21964);

label_7F28E4F4:
    ctx->pc = 0x7F28E4F4u;
    // 7F28E4F4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28E4F8:
    ctx->pc = 0x7F28E4F8u;
    // 7F28E4F8: bl      0x7F3CA210
    {
            ctx->lr = 0x7F28E4FCu;
            ctx->pc = 0x7F3CA210u;
            return;
    }

label_7F28E4FC:
    ctx->pc = 0x7F28E4FCu;
    ctx->downcount -= 3;
    // 7F28E4FC: lwz     r3, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E500:
    ctx->pc = 0x7F28E500u;
    // 7F28E500: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E504:
    ctx->pc = 0x7F28E504u;
    // 7F28E504: bc    12, 2, 0x7F28E820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E820;
        }
    }

label_7F28E508:
    ctx->pc = 0x7F28E508u;
    ctx->downcount -= 3;
    // 7F28E508: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E50C:
    ctx->pc = 0x7F28E50Cu;
    // 7F28E50C: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E510:
    ctx->pc = 0x7F28E510u;
    // 7F28E510: bc    12, 2, 0x7F28E820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E820;
        }
    }

label_7F28E514:
    ctx->pc = 0x7F28E514u;
    ctx->downcount -= 4;
    // 7F28E514: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28E518:
    ctx->pc = 0x7F28E518u;
    // 7F28E518: addi    r4, r31, 404
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(404);

label_7F28E51C:
    ctx->pc = 0x7F28E51Cu;
    // 7F28E51C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F28E520:
    ctx->pc = 0x7F28E520u;
    // 7F28E520: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F28E524u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F28E524:
    ctx->pc = 0x7F28E524u;
    ctx->downcount -= 13;
    // 7F28E524: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28E528:
    ctx->pc = 0x7F28E528u;
    // 7F28E528: lwzu     r7, 12832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12832);
        ctx->gpr[7] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F28E52C:
    ctx->pc = 0x7F28E52Cu;
    // 7F28E52C: lwz     r8, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F28E530:
    ctx->pc = 0x7F28E530u;
    // 7F28E530: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E534:
    ctx->pc = 0x7F28E534u;
    // 7F28E534: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E538:
    ctx->pc = 0x7F28E538u;
    // 7F28E538: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E53C:
    ctx->pc = 0x7F28E53Cu;
    // 7F28E53C: stw     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28E540:
    ctx->pc = 0x7F28E540u;
    // 7F28E540: stw     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28E544:
    ctx->pc = 0x7F28E544u;
    // 7F28E544: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E548:
    ctx->pc = 0x7F28E548u;
    // 7F28E548: stw     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28E54C:
    ctx->pc = 0x7F28E54Cu;
    // 7F28E54C: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E550:
    ctx->pc = 0x7F28E550u;
    // 7F28E550: rlwinm. r0, r3, 0, 16, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000F000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E554:
    ctx->pc = 0x7F28E554u;
    // 7F28E554: bc    12, 2, 0x7F28E5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E5D4;
        }
    }

label_7F28E558:
    ctx->pc = 0x7F28E558u;
    ctx->downcount -= 6;
    // 7F28E558: rlwinm. r0, r3, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E55C:
    ctx->pc = 0x7F28E55Cu;
    // 7F28E55C: stw     r7, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28E560:
    ctx->pc = 0x7F28E560u;
    // 7F28E560: stw     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28E564:
    ctx->pc = 0x7F28E564u;
    // 7F28E564: stw     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E568:
    ctx->pc = 0x7F28E568u;
    // 7F28E568: stw     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28E56C:
    ctx->pc = 0x7F28E56Cu;
    // 7F28E56C: bc    12, 2, 0x7F28E580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E580;
        }
    }

label_7F28E570:
    ctx->pc = 0x7F28E570u;
    ctx->downcount -= 4;
    // 7F28E570: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E574:
    ctx->pc = 0x7F28E574u;
    // 7F28E574: lfs     f0, 26216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E578:
    ctx->pc = 0x7F28E578u;
    // 7F28E578: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E57C:
    ctx->pc = 0x7F28E57Cu;
    // 7F28E57C: b       0x7F28E594
    {
            goto label_7F28E594;
    }

label_7F28E580:
    ctx->pc = 0x7F28E580u;
    ctx->downcount -= 2;
    // 7F28E580: rlwinm. r0, r3, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E584:
    ctx->pc = 0x7F28E584u;
    // 7F28E584: bc    12, 2, 0x7F28E594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E594;
        }
    }

label_7F28E588:
    ctx->pc = 0x7F28E588u;
    ctx->downcount -= 3;
    // 7F28E588: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E58C:
    ctx->pc = 0x7F28E58Cu;
    // 7F28E58C: lfs     f0, 26220(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E58Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E590:
    ctx->pc = 0x7F28E590u;
    // 7F28E590: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E594:
    ctx->pc = 0x7F28E594u;
    ctx->downcount -= 3;
    // 7F28E594: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E598:
    ctx->pc = 0x7F28E598u;
    // 7F28E598: rlwinm. r0, r3, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E59C:
    ctx->pc = 0x7F28E59Cu;
    // 7F28E59C: bc    12, 2, 0x7F28E5B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E5B0;
        }
    }

label_7F28E5A0:
    ctx->pc = 0x7F28E5A0u;
    ctx->downcount -= 4;
    // 7F28E5A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E5A4:
    ctx->pc = 0x7F28E5A4u;
    // 7F28E5A4: lfs     f0, 26220(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E5A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E5A8:
    ctx->pc = 0x7F28E5A8u;
    // 7F28E5A8: stfs     f0, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E5A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E5AC:
    ctx->pc = 0x7F28E5ACu;
    // 7F28E5AC: b       0x7F28E5C4
    {
            goto label_7F28E5C4;
    }

label_7F28E5B0:
    ctx->pc = 0x7F28E5B0u;
    ctx->downcount -= 2;
    // 7F28E5B0: rlwinm. r0, r3, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E5B4:
    ctx->pc = 0x7F28E5B4u;
    // 7F28E5B4: bc    12, 2, 0x7F28E5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E5C4;
        }
    }

label_7F28E5B8:
    ctx->pc = 0x7F28E5B8u;
    ctx->downcount -= 3;
    // 7F28E5B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E5BC:
    ctx->pc = 0x7F28E5BCu;
    // 7F28E5BC: lfs     f0, 26216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E5BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E5C0:
    ctx->pc = 0x7F28E5C0u;
    // 7F28E5C0: stfs     f0, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E5C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E5C4:
    ctx->pc = 0x7F28E5C4u;
    ctx->downcount -= 4;
    // 7F28E5C4: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F28E5C8:
    ctx->pc = 0x7F28E5C8u;
    // 7F28E5C8: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F28E5CC:
    ctx->pc = 0x7F28E5CCu;
    // 7F28E5CC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F28E5D0:
    ctx->pc = 0x7F28E5D0u;
    // 7F28E5D0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F28E5D4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F28E5D4:
    ctx->pc = 0x7F28E5D4u;
    ctx->downcount -= 4;
    // 7F28E5D4: addi    r3, r31, 124
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(124);

label_7F28E5D8:
    ctx->pc = 0x7F28E5D8u;
    // 7F28E5D8: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F28E5DC:
    ctx->pc = 0x7F28E5DCu;
    // 7F28E5DC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28E5E0:
    ctx->pc = 0x7F28E5E0u;
    // 7F28E5E0: bl      0x7F3CA040
    {
            ctx->lr = 0x7F28E5E4u;
            ctx->pc = 0x7F3CA040u;
            return;
    }

label_7F28E5E4:
    ctx->pc = 0x7F28E5E4u;
    ctx->downcount -= 2;
    // 7F28E5E4: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F28E5E8:
    ctx->pc = 0x7F28E5E8u;
    // 7F28E5E8: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F28E5ECu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F28E5EC:
    ctx->pc = 0x7F28E5ECu;
    ctx->downcount -= 2;
    // 7F28E5EC: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F28E5F0:
    ctx->pc = 0x7F28E5F0u;
    // 7F28E5F0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F28E5F4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F28E5F4:
    ctx->pc = 0x7F28E5F4u;
    ctx->downcount -= 5;
    // 7F28E5F4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28E5F8:
    ctx->pc = 0x7F28E5F8u;
    // 7F28E5F8: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28E5FC:
    ctx->pc = 0x7F28E5FCu;
    // 7F28E5FC: addi    r3, r3, 20728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20728);

label_7F28E600:
    ctx->pc = 0x7F28E600u;
    // 7F28E600: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F28E604:
    ctx->pc = 0x7F28E604u;
    // 7F28E604: bl      0x7F3B3648
    {
            ctx->lr = 0x7F28E608u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F28E608:
    ctx->pc = 0x7F28E608u;
    ctx->downcount -= 14;
    // 7F28E608: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28E60C:
    ctx->pc = 0x7F28E60Cu;
    // 7F28E60C: addi    r3, r31, 108
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(108);

label_7F28E610:
    ctx->pc = 0x7F28E610u;
    // 7F28E610: addi    r9, r4, 21980
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(21980);

label_7F28E614:
    ctx->pc = 0x7F28E614u;
    // 7F28E614: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28E618:
    ctx->pc = 0x7F28E618u;
    // 7F28E618: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F28E61C:
    ctx->pc = 0x7F28E61Cu;
    // 7F28E61C: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F28E620:
    ctx->pc = 0x7F28E620u;
    // 7F28E620: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28E624:
    ctx->pc = 0x7F28E624u;
    // 7F28E624: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E628:
    ctx->pc = 0x7F28E628u;
    // 7F28E628: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E62C:
    ctx->pc = 0x7F28E62Cu;
    // 7F28E62C: stw     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F28E630:
    ctx->pc = 0x7F28E630u;
    // 7F28E630: stw     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28E634:
    ctx->pc = 0x7F28E634u;
    // 7F28E634: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28E638:
    ctx->pc = 0x7F28E638u;
    // 7F28E638: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E63C:
    ctx->pc = 0x7F28E63Cu;
    // 7F28E63C: bl      0x800261D8
    {
            ctx->lr = 0x7F28E640u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F28E640:
    ctx->pc = 0x7F28E640u;
    ctx->downcount -= 7;
    // 7F28E640: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E644:
    ctx->pc = 0x7F28E644u;
    // 7F28E644: lfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E648:
    ctx->pc = 0x7F28E648u;
    // 7F28E648: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E64C:
    ctx->pc = 0x7F28E64Cu;
    // 7F28E64C: lfs     f1, 416(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28E64Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28E650:
    ctx->pc = 0x7F28E650u;
    // 7F28E650: lfs     f2, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E650u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28E654:
    ctx->pc = 0x7F28E654u;
    // 7F28E654: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28E654u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F28E658:
    ctx->pc = 0x7F28E658u;
    // 7F28E658: bl      0x7F3C9B48
    {
            ctx->lr = 0x7F28E65Cu;
            ctx->pc = 0x7F3C9B48u;
            return;
    }

label_7F28E65C:
    ctx->pc = 0x7F28E65Cu;
    ctx->downcount -= 5;
    // 7F28E65C: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F28E660:
    ctx->pc = 0x7F28E660u;
    // 7F28E660: stfs     f1, 416(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28E660u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28E664:
    ctx->pc = 0x7F28E664u;
    // 7F28E664: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E668:
    ctx->pc = 0x7F28E668u;
    // 7F28E668: addi    r4, r31, 124
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(124);

label_7F28E66C:
    ctx->pc = 0x7F28E66Cu;
    // 7F28E66C: bl      0x800261B4
    {
            ctx->lr = 0x7F28E670u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28E670:
    ctx->pc = 0x7F28E670u;
    ctx->downcount -= 8;
    // 7F28E670: lwz     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E674:
    ctx->pc = 0x7F28E674u;
    // 7F28E674: lwz     r0, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E678:
    ctx->pc = 0x7F28E678u;
    // 7F28E678: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28E67C:
    ctx->pc = 0x7F28E67Cu;
    // 7F28E67C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E680:
    ctx->pc = 0x7F28E680u;
    // 7F28E680: lwz     r3, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E684:
    ctx->pc = 0x7F28E684u;
    // 7F28E684: addic.  r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E688:
    ctx->pc = 0x7F28E688u;
    // 7F28E688: stw     r0, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E68C:
    ctx->pc = 0x7F28E68Cu;
    // 7F28E68C: bc    4, 1, 0x7F28E6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E6DC;
        }
    }

label_7F28E690:
    ctx->pc = 0x7F28E690u;
    ctx->downcount -= 18;
    // 7F28E690: lwz     r6, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E694:
    ctx->pc = 0x7F28E694u;
    // 7F28E694: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F28E698:
    ctx->pc = 0x7F28E698u;
    // 7F28E698: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F28E69C:
    ctx->pc = 0x7F28E69Cu;
    // 7F28E69C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F28E6A0:
    ctx->pc = 0x7F28E6A0u;
    // 7F28E6A0: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F28E6A4:
    ctx->pc = 0x7F28E6A4u;
    // 7F28E6A4: stw     r4, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28E6A8:
    ctx->pc = 0x7F28E6A8u;
    // 7F28E6A8: lfd     f1, 26200(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28E6A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28E6AC:
    ctx->pc = 0x7F28E6ACu;
    // 7F28E6AC: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E6B0:
    ctx->pc = 0x7F28E6B0u;
    // 7F28E6B0: rlwinm r0, r6, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_7F28E6B4:
    ctx->pc = 0x7F28E6B4u;
    // 7F28E6B4: lha     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E6B8:
    ctx->pc = 0x7F28E6B8u;
    // 7F28E6B8: lfd     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E6B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28E6BC:
    ctx->pc = 0x7F28E6BCu;
    // 7F28E6BC: lfs     f2, 26224(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F28E6BCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(26224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28E6C0:
    ctx->pc = 0x7F28E6C0u;
    // 7F28E6C0: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F28E6C4:
    ctx->pc = 0x7F28E6C4u;
    // 7F28E6C4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28E6C4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F28E6C8:
    ctx->pc = 0x7F28E6C8u;
    // 7F28E6C8: lfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E6C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E6CC:
    ctx->pc = 0x7F28E6CCu;
    // 7F28E6CC: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28E6CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F28E6D0:
    ctx->pc = 0x7F28E6D0u;
    // 7F28E6D0: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E6D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E6D4:
    ctx->pc = 0x7F28E6D4u;
    // 7F28E6D4: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F28E6D8u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F28E6D8:
    ctx->pc = 0x7F28E6D8u;
    ctx->downcount -= 1;
    // 7F28E6D8: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F28E6DC:
    ctx->pc = 0x7F28E6DCu;
    ctx->downcount -= 5;
    // 7F28E6DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E6E0:
    ctx->pc = 0x7F28E6E0u;
    // 7F28E6E0: addi    r3, r3, -6692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6692);

label_7F28E6E4:
    ctx->pc = 0x7F28E6E4u;
    // 7F28E6E4: lha     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E6E8:
    ctx->pc = 0x7F28E6E8u;
    // 7F28E6E8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E6EC:
    ctx->pc = 0x7F28E6ECu;
    // 7F28E6EC: bc    12, 2, 0x7F28E6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E6FC;
        }
    }

label_7F28E6F0:
    ctx->pc = 0x7F28E6F0u;
    ctx->downcount -= 2;
    // 7F28E6F0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28E6F4:
    ctx->pc = 0x7F28E6F4u;
    // 7F28E6F4: bl      0x7F01DA98
    {
            ctx->lr = 0x7F28E6F8u;
            ctx->pc = 0x7F01DA98u;
            return;
    }

label_7F28E6F8:
    ctx->pc = 0x7F28E6F8u;
    ctx->downcount -= 1;
    // 7F28E6F8: b       0x7F28E704
    {
            goto label_7F28E704;
    }

label_7F28E6FC:
    ctx->pc = 0x7F28E6FCu;
    ctx->downcount -= 2;
    // 7F28E6FC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28E700:
    ctx->pc = 0x7F28E700u;
    // 7F28E700: bl      0x7F01DAE0
    {
            ctx->lr = 0x7F28E704u;
            ctx->pc = 0x7F01DAE0u;
            return;
    }

label_7F28E704:
    ctx->pc = 0x7F28E704u;
    ctx->downcount -= 17;
    // 7F28E704: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E708:
    ctx->pc = 0x7F28E708u;
    // 7F28E708: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F28E70C:
    ctx->pc = 0x7F28E70Cu;
    // 7F28E70C: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E710:
    ctx->pc = 0x7F28E710u;
    // 7F28E710: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28E714:
    ctx->pc = 0x7F28E714u;
    // 7F28E714: lwz     r6, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E718:
    ctx->pc = 0x7F28E718u;
    // 7F28E718: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E71C:
    ctx->pc = 0x7F28E71Cu;
    // 7F28E71C: stw     r5, 96(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E720:
    ctx->pc = 0x7F28E720u;
    // 7F28E720: stw     r0, 100(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E724:
    ctx->pc = 0x7F28E724u;
    // 7F28E724: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E728:
    ctx->pc = 0x7F28E728u;
    // 7F28E728: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E72C:
    ctx->pc = 0x7F28E72Cu;
    // 7F28E72C: stw     r5, 104(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E730:
    ctx->pc = 0x7F28E730u;
    // 7F28E730: stw     r0, 108(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E734:
    ctx->pc = 0x7F28E734u;
    // 7F28E734: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E738:
    ctx->pc = 0x7F28E738u;
    // 7F28E738: lwz     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E73C:
    ctx->pc = 0x7F28E73Cu;
    // 7F28E73C: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_7F28E740:
    ctx->pc = 0x7F28E740u;
    // 7F28E740: stw     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E744:
    ctx->pc = 0x7F28E744u;
    // 7F28E744: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F28E748u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F28E748:
    ctx->pc = 0x7F28E748u;
    ctx->downcount -= 24;
    // 7F28E748: lwz     r6, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E74C:
    ctx->pc = 0x7F28E74Cu;
    // 7F28E74C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28E750:
    ctx->pc = 0x7F28E750u;
    // 7F28E750: lwz     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E754:
    ctx->pc = 0x7F28E754u;
    // 7F28E754: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E758:
    ctx->pc = 0x7F28E758u;
    // 7F28E758: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E75C:
    ctx->pc = 0x7F28E75Cu;
    // 7F28E75C: addi    r4, r4, 21964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21964);

label_7F28E760:
    ctx->pc = 0x7F28E760u;
    // 7F28E760: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E764:
    ctx->pc = 0x7F28E764u;
    // 7F28E764: lwz     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E768:
    ctx->pc = 0x7F28E768u;
    // 7F28E768: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E76C:
    ctx->pc = 0x7F28E76Cu;
    // 7F28E76C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E770:
    ctx->pc = 0x7F28E770u;
    // 7F28E770: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28E774:
    ctx->pc = 0x7F28E774u;
    // 7F28E774: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E778:
    ctx->pc = 0x7F28E778u;
    // 7F28E778: lfs     f0, -6752(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E778u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E77C:
    ctx->pc = 0x7F28E77Cu;
    // 7F28E77C: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E780:
    ctx->pc = 0x7F28E780u;
    // 7F28E780: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28E780u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F28E784:
    ctx->pc = 0x7F28E784u;
    // 7F28E784: lwz     r3, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E788:
    ctx->pc = 0x7F28E788u;
    // 7F28E788: stfd     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28E788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F28E78C:
    ctx->pc = 0x7F28E78Cu;
    // 7F28E78C: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E790:
    ctx->pc = 0x7F28E790u;
    // 7F28E790: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F28E794:
    ctx->pc = 0x7F28E794u;
    // 7F28E794: sth     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28E798:
    ctx->pc = 0x7F28E798u;
    // 7F28E798: lwz     r3, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E79C:
    ctx->pc = 0x7F28E79Cu;
    // 7F28E79C: lha     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E7A0:
    ctx->pc = 0x7F28E7A0u;
    // 7F28E7A0: cmpwi   r0, 1023
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1023);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E7A4:
    ctx->pc = 0x7F28E7A4u;
    // 7F28E7A4: bc    4, 1, 0x7F28E7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E7B4;
        }
    }

label_7F28E7A8:
    ctx->pc = 0x7F28E7A8u;
    ctx->downcount -= 3;
    // 7F28E7A8: li      r0, 1023
    ctx->gpr[0] = (u32)(s32)(1023);

label_7F28E7AC:
    ctx->pc = 0x7F28E7ACu;
    // 7F28E7AC: sth     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28E7B0:
    ctx->pc = 0x7F28E7B0u;
    // 7F28E7B0: b       0x7F28E7C4
    {
            goto label_7F28E7C4;
    }

label_7F28E7B4:
    ctx->pc = 0x7F28E7B4u;
    ctx->downcount -= 2;
    // 7F28E7B4: cmpwi   r0, -1023
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-1023);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E7B8:
    ctx->pc = 0x7F28E7B8u;
    // 7F28E7B8: bc    4, 0, 0x7F28E7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E7C4;
        }
    }

label_7F28E7BC:
    ctx->pc = 0x7F28E7BCu;
    ctx->downcount -= 2;
    // 7F28E7BC: li      r0, -1023
    ctx->gpr[0] = (u32)(s32)(-1023);

label_7F28E7C0:
    ctx->pc = 0x7F28E7C0u;
    // 7F28E7C0: sth     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28E7C4:
    ctx->pc = 0x7F28E7C4u;
    ctx->downcount -= 6;
    // 7F28E7C4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F28E7C8:
    ctx->pc = 0x7F28E7C8u;
    // 7F28E7C8: lwz     r3, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E7CC:
    ctx->pc = 0x7F28E7CCu;
    // 7F28E7CC: addi    r4, r4, 21964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21964);

label_7F28E7D0:
    ctx->pc = 0x7F28E7D0u;
    // 7F28E7D0: lha     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28E7D4:
    ctx->pc = 0x7F28E7D4u;
    // 7F28E7D4: sth     r0, 130(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(130);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28E7D8:
    ctx->pc = 0x7F28E7D8u;
    // 7F28E7D8: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28E7DCu;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28E7DC:
    ctx->pc = 0x7F28E7DCu;
    ctx->downcount -= 2;
    // 7F28E7DC: cmpwi   r3, 2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E7E0:
    ctx->pc = 0x7F28E7E0u;
    // 7F28E7E0: bc    4, 2, 0x7F28E808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E808;
        }
    }

label_7F28E7E4:
    ctx->pc = 0x7F28E7E4u;
    ctx->downcount -= 1;
    // 7F28E7E4: bl      0x7F24BF10
    {
            ctx->lr = 0x7F28E7E8u;
            ctx->pc = 0x7F24BF10u;
            return;
    }

label_7F28E7E8:
    ctx->pc = 0x7F28E7E8u;
    ctx->downcount -= 2;
    // 7F28E7E8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E7EC:
    ctx->pc = 0x7F28E7ECu;
    // 7F28E7EC: bc    12, 2, 0x7F28E808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E808;
        }
    }

label_7F28E7F0:
    ctx->pc = 0x7F28E7F0u;
    ctx->downcount -= 6;
    // 7F28E7F0: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E7F4:
    ctx->pc = 0x7F28E7F4u;
    // 7F28E7F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E7F8:
    ctx->pc = 0x7F28E7F8u;
    // 7F28E7F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E7FC:
    ctx->pc = 0x7F28E7FCu;
    // 7F28E7FC: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F28E800:
    ctx->pc = 0x7F28E800u;
    // 7F28E800: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E804:
    ctx->pc = 0x7F28E804u;
    // 7F28E804: b       0x7F28E874
    {
            goto label_7F28E874;
    }

label_7F28E808:
    ctx->pc = 0x7F28E808u;
    ctx->downcount -= 6;
    // 7F28E808: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E80C:
    ctx->pc = 0x7F28E80Cu;
    // 7F28E80C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E810:
    ctx->pc = 0x7F28E810u;
    // 7F28E810: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E814:
    ctx->pc = 0x7F28E814u;
    // 7F28E814: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F28E818:
    ctx->pc = 0x7F28E818u;
    // 7F28E818: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E81C:
    ctx->pc = 0x7F28E81Cu;
    // 7F28E81C: b       0x7F28E874
    {
            goto label_7F28E874;
    }

label_7F28E820:
    ctx->pc = 0x7F28E820u;
    ctx->downcount -= 4;
    // 7F28E820: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E824:
    ctx->pc = 0x7F28E824u;
    // 7F28E824: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E828:
    ctx->pc = 0x7F28E828u;
    // 7F28E828: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F28E82C:
    ctx->pc = 0x7F28E82Cu;
    // 7F28E82C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F28E830u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F28E830:
    ctx->pc = 0x7F28E830u;
    ctx->downcount -= 17;
    // 7F28E830: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28E834:
    ctx->pc = 0x7F28E834u;
    // 7F28E834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28E838:
    ctx->pc = 0x7F28E838u;
    // 7F28E838: lwz     r0, 412(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E83C:
    ctx->pc = 0x7F28E83Cu;
    // 7F28E83C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F28E840:
    ctx->pc = 0x7F28E840u;
    // 7F28E840: lwz     r5, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E844:
    ctx->pc = 0x7F28E844u;
    // 7F28E844: slw   r4, r4, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

label_7F28E848:
    ctx->pc = 0x7F28E848u;
    // 7F28E848: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F28E84C:
    ctx->pc = 0x7F28E84Cu;
    // 7F28E84C: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F28E850:
    ctx->pc = 0x7F28E850u;
    // 7F28E850: lfs     f0, 26192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28E850u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28E854:
    ctx->pc = 0x7F28E854u;
    // 7F28E854: stw     r4, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28E858:
    ctx->pc = 0x7F28E858u;
    // 7F28E858: stw     r0, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E85C:
    ctx->pc = 0x7F28E85Cu;
    // 7F28E85C: stfs     f0, 416(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28E85Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28E860:
    ctx->pc = 0x7F28E860u;
    // 7F28E860: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E864:
    ctx->pc = 0x7F28E864u;
    // 7F28E864: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E868:
    ctx->pc = 0x7F28E868u;
    // 7F28E868: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E86C:
    ctx->pc = 0x7F28E86Cu;
    // 7F28E86C: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F28E870:
    ctx->pc = 0x7F28E870u;
    // 7F28E870: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E874:
    ctx->pc = 0x7F28E874u;
    ctx->downcount -= 4;
    // 7F28E874: lwz     r3, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E878:
    ctx->pc = 0x7F28E878u;
    // 7F28E878: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E87C:
    ctx->pc = 0x7F28E87Cu;
    // 7F28E87C: rlwinm. r0, r0, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E880:
    ctx->pc = 0x7F28E880u;
    // 7F28E880: bc    12, 2, 0x7F28E890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E890;
        }
    }

label_7F28E884:
    ctx->pc = 0x7F28E884u;
    ctx->downcount -= 2;
    // 7F28E884: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F28E888:
    ctx->pc = 0x7F28E888u;
    // 7F28E888: bl      0x7F28DCA8
    {
            ctx->lr = 0x7F28E88Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DCA8u;
                return;
            }
            goto label_7F28DCA8;
    }

label_7F28E88C:
    ctx->pc = 0x7F28E88Cu;
    ctx->downcount -= 1;
    // 7F28E88C: b       0x7F28E898
    {
            goto label_7F28E898;
    }

label_7F28E890:
    ctx->pc = 0x7F28E890u;
    ctx->downcount -= 2;
    // 7F28E890: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F28E894:
    ctx->pc = 0x7F28E894u;
    // 7F28E894: bl      0x7F0427FC
    {
            ctx->lr = 0x7F28E898u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F28E898:
    ctx->pc = 0x7F28E898u;
    ctx->downcount -= 6;
    // 7F28E898: lwz     r3, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E89C:
    ctx->pc = 0x7F28E89Cu;
    // 7F28E89C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F28E8A0:
    ctx->pc = 0x7F28E8A0u;
    // 7F28E8A0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8A4:
    ctx->pc = 0x7F28E8A4u;
    // 7F28E8A4: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E8A8:
    ctx->pc = 0x7F28E8A8u;
    // 7F28E8A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28E8AC:
    loop_7F28E8AC(ctx);
    if (ctx->pc == 0x7F28E8C0u) goto label_7F28E8C0;
    return;
label_7F28E8B0:
    ctx->pc = 0x7F28E8B0u;
    // 7F28E8B0: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28E8B4:
    ctx->pc = 0x7F28E8B4u;
    // 7F28E8B4: stw     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28E8B8:
    ctx->pc = 0x7F28E8B8u;
    // 7F28E8B8: stwu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_7F28E8BC:
    // 7F28E8BC: bc    16, 0, 0x7F28E8AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E8ACu;
                return;
            }
            goto label_7F28E8AC;
        }
    }

label_7F28E8C0:
    ctx->pc = 0x7F28E8C0u;
    ctx->downcount -= 9;
    // 7F28E8C0: lwz     r3, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E8C4:
    ctx->pc = 0x7F28E8C4u;
    // 7F28E8C4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E8C8:
    ctx->pc = 0x7F28E8C8u;
    // 7F28E8C8: rlwinm r0, r0, 0, 25, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF7Fu;
    }

label_7F28E8CC:
    ctx->pc = 0x7F28E8CCu;
    // 7F28E8CC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E8D0:
    ctx->pc = 0x7F28E8D0u;
    // 7F28E8D0: lwz     r4, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8D4:
    ctx->pc = 0x7F28E8D4u;
    // 7F28E8D4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E8D8:
    ctx->pc = 0x7F28E8D8u;
    // 7F28E8D8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8DC:
    ctx->pc = 0x7F28E8DCu;
    // 7F28E8DC: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8E0:
    ctx->pc = 0x7F28E8E0u;
    // 7F28E8E0: bl      0x7F3BC518
    {
            ctx->lr = 0x7F28E8E4u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F28E8E4:
    ctx->pc = 0x7F28E8E4u;
    ctx->downcount -= 8;
    // 7F28E8E4: lwz     r4, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8E8:
    ctx->pc = 0x7F28E8E8u;
    // 7F28E8E8: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F28E8EC:
    ctx->pc = 0x7F28E8ECu;
    // 7F28E8EC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E8F0:
    ctx->pc = 0x7F28E8F0u;
    // 7F28E8F0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E8F4:
    ctx->pc = 0x7F28E8F4u;
    // 7F28E8F4: addi    r5, r3, 152
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(152);

label_7F28E8F8:
    ctx->pc = 0x7F28E8F8u;
    // 7F28E8F8: addi    r4, r4, 152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(152);

label_7F28E8FC:
    ctx->pc = 0x7F28E8FCu;
    // 7F28E8FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28E900:
    loop_7F28E900(ctx);
    if (ctx->pc == 0x7F28E914u) goto label_7F28E914;
    return;
label_7F28E904:
    ctx->pc = 0x7F28E904u;
    // 7F28E904: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28E908:
    ctx->pc = 0x7F28E908u;
    // 7F28E908: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28E90C:
    ctx->pc = 0x7F28E90Cu;
    // 7F28E90C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F28E910:
    // 7F28E910: bc    16, 0, 0x7F28E900
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E900u;
                return;
            }
            goto label_7F28E900;
        }
    }

label_7F28E914:
    ctx->pc = 0x7F28E914u;
    ctx->downcount -= 8;
    // 7F28E914: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E918:
    ctx->pc = 0x7F28E918u;
    // 7F28E918: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E91C:
    ctx->pc = 0x7F28E91Cu;
    // 7F28E91C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E920:
    ctx->pc = 0x7F28E920u;
    // 7F28E920: lwz     r31, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28E924:
    ctx->pc = 0x7F28E924u;
    // 7F28E924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28E928:
    ctx->pc = 0x7F28E928u;
    // 7F28E928: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F28E92C:
    ctx->pc = 0x7F28E92Cu;
    // 7F28E92C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28E930:
    ctx->pc = 0x7F28E930u;
    ctx->downcount -= 19;
    // 7F28E930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28E934:
    ctx->pc = 0x7F28E934u;
    // 7F28E934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28E938:
    ctx->pc = 0x7F28E938u;
    // 7F28E938: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E93C:
    ctx->pc = 0x7F28E93Cu;
    // 7F28E93C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28E940:
    ctx->pc = 0x7F28E940u;
    // 7F28E940: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28E944:
    ctx->pc = 0x7F28E944u;
    // 7F28E944: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28E948:
    ctx->pc = 0x7F28E948u;
    // 7F28E948: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E94C:
    ctx->pc = 0x7F28E94Cu;
    // 7F28E94C: rlwinm. r0, r0, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E950:
    ctx->pc = 0x7F28E950u;
    // 7F28E950: bc    4, 2, 0x7F28E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E9E8;
        }
    }

label_7F28E954:
    ctx->pc = 0x7F28E954u;
    ctx->downcount -= 8;
    // 7F28E954: lwz     r3, 368(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E958:
    ctx->pc = 0x7F28E958u;
    // 7F28E958: addi    r4, r30, 80
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(80);

label_7F28E95C:
    ctx->pc = 0x7F28E95Cu;
    // 7F28E95C: addi    r5, r31, 80
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(80);

label_7F28E960:
    ctx->pc = 0x7F28E960u;
    // 7F28E960: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F28E964:
    ctx->pc = 0x7F28E964u;
    // 7F28E964: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E968:
    ctx->pc = 0x7F28E968u;
    // 7F28E968: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28E96C:
    ctx->pc = 0x7F28E96Cu;
    // 7F28E96C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F28E970:
    ctx->pc = 0x7F28E970u;
    // 7F28E970: bl      0x7F10B744
    {
            ctx->lr = 0x7F28E974u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F28E974:
    ctx->pc = 0x7F28E974u;
    ctx->downcount -= 2;
    // 7F28E974: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28E978:
    ctx->pc = 0x7F28E978u;
    // 7F28E978: bc    12, 2, 0x7F28E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28E9E8;
        }
    }

label_7F28E97C:
    ctx->pc = 0x7F28E97Cu;
    ctx->downcount -= 8;
    // 7F28E97C: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E980:
    ctx->pc = 0x7F28E980u;
    // 7F28E980: lwz     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E984:
    ctx->pc = 0x7F28E984u;
    // 7F28E984: lwz     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E988:
    ctx->pc = 0x7F28E988u;
    // 7F28E988: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E98C:
    ctx->pc = 0x7F28E98Cu;
    // 7F28E98C: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28E990:
    ctx->pc = 0x7F28E990u;
    // 7F28E990: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F28E994:
    ctx->pc = 0x7F28E994u;
    // 7F28E994: or.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28E998:
    ctx->pc = 0x7F28E998u;
    // 7F28E998: bc    4, 2, 0x7F28E9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28E9BC;
        }
    }

label_7F28E99C:
    ctx->pc = 0x7F28E99Cu;
    ctx->downcount -= 8;
    // 7F28E99C: lwz     r5, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E9A0:
    ctx->pc = 0x7F28E9A0u;
    // 7F28E9A0: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F28E9A4:
    ctx->pc = 0x7F28E9A4u;
    // 7F28E9A4: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E9A8:
    ctx->pc = 0x7F28E9A8u;
    // 7F28E9A8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F28E9AC:
    ctx->pc = 0x7F28E9ACu;
    // 7F28E9AC: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F28E9B0:
    ctx->pc = 0x7F28E9B0u;
    // 7F28E9B0: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E9B4:
    ctx->pc = 0x7F28E9B4u;
    // 7F28E9B4: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F28E9B8:
    ctx->pc = 0x7F28E9B8u;
    // 7F28E9B8: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E9BC:
    ctx->pc = 0x7F28E9BCu;
    ctx->downcount -= 11;
    // 7F28E9BC: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28E9C0:
    ctx->pc = 0x7F28E9C0u;
    // 7F28E9C0: lwz     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28E9C4:
    ctx->pc = 0x7F28E9C4u;
    // 7F28E9C4: nor   r0, r0, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_7F28E9C8:
    ctx->pc = 0x7F28E9C8u;
    // 7F28E9C8: lwz     r3, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E9CC:
    ctx->pc = 0x7F28E9CCu;
    // 7F28E9CC: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28E9D0:
    ctx->pc = 0x7F28E9D0u;
    // 7F28E9D0: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F28E9D4:
    ctx->pc = 0x7F28E9D4u;
    // 7F28E9D4: nor   r3, r3, r3
    {
        ctx->gpr[3] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F28E9D8:
    ctx->pc = 0x7F28E9D8u;
    // 7F28E9D8: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E9DC:
    ctx->pc = 0x7F28E9DCu;
    // 7F28E9DC: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F28E9E0:
    ctx->pc = 0x7F28E9E0u;
    // 7F28E9E0: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28E9E4:
    ctx->pc = 0x7F28E9E4u;
    // 7F28E9E4: b       0x7F28EA00
    {
            goto label_7F28EA00;
    }

label_7F28E9E8:
    ctx->pc = 0x7F28E9E8u;
    ctx->downcount -= 6;
    // 7F28E9E8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28E9EC:
    ctx->pc = 0x7F28E9ECu;
    // 7F28E9EC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28E9F0:
    ctx->pc = 0x7F28E9F0u;
    // 7F28E9F0: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F28E9F4:
    ctx->pc = 0x7F28E9F4u;
    // 7F28E9F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28E9F8:
    ctx->pc = 0x7F28E9F8u;
    // 7F28E9F8: addi    r3, r3, 4024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4024);

label_7F28E9FC:
    ctx->pc = 0x7F28E9FCu;
    // 7F28E9FC: bl      0x7F0144DC
    {
            ctx->lr = 0x7F28EA00u;
            ctx->pc = 0x7F0144DCu;
            return;
    }

label_7F28EA00:
    ctx->pc = 0x7F28EA00u;
    ctx->downcount -= 16;
    // 7F28EA00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28EA04:
    ctx->pc = 0x7F28EA04u;
    // 7F28EA04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EA08:
    ctx->pc = 0x7F28EA08u;
    // 7F28EA08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EA0C:
    ctx->pc = 0x7F28EA0Cu;
    // 7F28EA0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28EA10:
    ctx->pc = 0x7F28EA10u;
    // 7F28EA10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EA14:
    ctx->pc = 0x7F28EA14u;
    ctx->downcount -= 21;
    // 7F28EA14: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EA18:
    ctx->pc = 0x7F28EA18u;
    // 7F28EA18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EA1C:
    ctx->pc = 0x7F28EA1Cu;
    // 7F28EA1C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28EA20:
    ctx->pc = 0x7F28EA20u;
    // 7F28EA20: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EA24:
    ctx->pc = 0x7F28EA24u;
    // 7F28EA24: addi    r4, r4, -6744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6744);

label_7F28EA28:
    ctx->pc = 0x7F28EA28u;
    // 7F28EA28: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28EA2C:
    ctx->pc = 0x7F28EA2Cu;
    // 7F28EA2C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EA30:
    ctx->pc = 0x7F28EA30u;
    // 7F28EA30: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28EA34:
    ctx->pc = 0x7F28EA34u;
    // 7F28EA34: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EA38:
    ctx->pc = 0x7F28EA38u;
    // 7F28EA38: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EA3C:
    ctx->pc = 0x7F28EA3Cu;
    // 7F28EA3C: bc    12, 2, 0x7F28EB18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28EB18;
        }
    }

label_7F28EA40:
    ctx->pc = 0x7F28EA40u;
    ctx->downcount -= 7;
    // 7F28EA40: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28EA44:
    ctx->pc = 0x7F28EA44u;
    // 7F28EA44: addi    r31, r29, 144
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(144);

label_7F28EA48:
    ctx->pc = 0x7F28EA48u;
    // 7F28EA48: stw     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EA4C:
    ctx->pc = 0x7F28EA4Cu;
    // 7F28EA4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EA50:
    ctx->pc = 0x7F28EA50u;
    // 7F28EA50: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28EA54:
    ctx->pc = 0x7F28EA54u;
    // 7F28EA54: lwz     r6, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28EA58:
    ctx->pc = 0x7F28EA58u;
    // 7F28EA58: bl      0x7F014B60
    {
            ctx->lr = 0x7F28EA5Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F28EA5C:
    ctx->pc = 0x7F28EA5Cu;
    ctx->downcount -= 8;
    // 7F28EA5C: lbz     r7, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F28EA60:
    ctx->pc = 0x7F28EA60u;
    // 7F28EA60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EA64:
    ctx->pc = 0x7F28EA64u;
    // 7F28EA64: lbz     r8, 27(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(27);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_7F28EA68:
    ctx->pc = 0x7F28EA68u;
    // 7F28EA68: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28EA6C:
    ctx->pc = 0x7F28EA6Cu;
    // 7F28EA6C: addi    r4, r29, 336
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(336);

label_7F28EA70:
    ctx->pc = 0x7F28EA70u;
    // 7F28EA70: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F28EA74:
    ctx->pc = 0x7F28EA74u;
    // 7F28EA74: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F28EA78:
    ctx->pc = 0x7F28EA78u;
    // 7F28EA78: bl      0x7F014B78
    {
            ctx->lr = 0x7F28EA7Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F28EA7C:
    ctx->pc = 0x7F28EA7Cu;
    ctx->downcount -= 9;
    // 7F28EA7C: lbz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F28EA80:
    ctx->pc = 0x7F28EA80u;
    // 7F28EA80: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28EA84:
    ctx->pc = 0x7F28EA84u;
    // 7F28EA84: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28EA88:
    ctx->pc = 0x7F28EA88u;
    // 7F28EA88: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F28EA8C:
    ctx->pc = 0x7F28EA8Cu;
    // 7F28EA8C: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F28EA90:
    ctx->pc = 0x7F28EA90u;
    // 7F28EA90: add   r3, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28EA94:
    ctx->pc = 0x7F28EA94u;
    // 7F28EA94: bl      0x7F3CC414
    {
            ctx->lr = 0x7F28EA98u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F28EA98:
    ctx->pc = 0x7F28EA98u;
    ctx->downcount -= 9;
    // 7F28EA98: lbz     r0, 25(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F28EA9C:
    ctx->pc = 0x7F28EA9Cu;
    // 7F28EA9C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28EAA0:
    ctx->pc = 0x7F28EAA0u;
    // 7F28EAA0: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28EAA4:
    ctx->pc = 0x7F28EAA4u;
    // 7F28EAA4: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F28EAA8:
    ctx->pc = 0x7F28EAA8u;
    // 7F28EAA8: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F28EAAC:
    ctx->pc = 0x7F28EAACu;
    // 7F28EAAC: add   r3, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28EAB0:
    ctx->pc = 0x7F28EAB0u;
    // 7F28EAB0: bl      0x7F3CC414
    {
            ctx->lr = 0x7F28EAB4u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F28EAB4:
    ctx->pc = 0x7F28EAB4u;
    ctx->downcount -= 4;
    // 7F28EAB4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28EAB8:
    ctx->pc = 0x7F28EAB8u;
    // 7F28EAB8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28EABC:
    ctx->pc = 0x7F28EABCu;
    // 7F28EABC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28EAC0:
    ctx->pc = 0x7F28EAC0u;
    // 7F28EAC0: bl      0x800261D8
    {
            ctx->lr = 0x7F28EAC4u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F28EAC4:
    ctx->pc = 0x7F28EAC4u;
    ctx->downcount -= 2;
    // 7F28EAC4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28EAC8:
    ctx->pc = 0x7F28EAC8u;
    // 7F28EAC8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F28EACCu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F28EACC:
    ctx->pc = 0x7F28EACCu;
    ctx->downcount -= 7;
    // 7F28EACC: lfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28EACCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28EAD0:
    ctx->pc = 0x7F28EAD0u;
    // 7F28EAD0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28EAD4:
    ctx->pc = 0x7F28EAD4u;
    // 7F28EAD4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28EAD8:
    ctx->pc = 0x7F28EAD8u;
    // 7F28EAD8: fadds   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28EAD8u)) return;
    ppc_fadds(ctx, 2, 0, 1);

label_7F28EADC:
    ctx->pc = 0x7F28EADCu;
    // 7F28EADC: lfs     f1, 26192(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28EADCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28EAE0:
    ctx->pc = 0x7F28EAE0u;
    // 7F28EAE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EAE4:
    ctx->pc = 0x7F28EAE4u;
    // 7F28EAE4: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F28EAE8u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F28EAE8:
    ctx->pc = 0x7F28EAE8u;
    ctx->downcount -= 4;
    // 7F28EAE8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28EAEC:
    ctx->pc = 0x7F28EAECu;
    // 7F28EAEC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28EAF0:
    ctx->pc = 0x7F28EAF0u;
    // 7F28EAF0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28EAF4:
    ctx->pc = 0x7F28EAF4u;
    // 7F28EAF4: bl      0x800261B4
    {
            ctx->lr = 0x7F28EAF8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F28EAF8:
    ctx->pc = 0x7F28EAF8u;
    ctx->downcount -= 6;
    // 7F28EAF8: lwz     r6, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28EAFC:
    ctx->pc = 0x7F28EAFCu;
    // 7F28EAFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EB00:
    ctx->pc = 0x7F28EB00u;
    // 7F28EB00: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F28EB04:
    ctx->pc = 0x7F28EB04u;
    // 7F28EB04: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F28EB08:
    ctx->pc = 0x7F28EB08u;
    // 7F28EB08: lwz     r6, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F28EB0C:
    ctx->pc = 0x7F28EB0Cu;
    // 7F28EB0C: bl      0x7F014A08
    {
            ctx->lr = 0x7F28EB10u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F28EB10:
    ctx->pc = 0x7F28EB10u;
    ctx->downcount -= 2;
    // 7F28EB10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EB14:
    ctx->pc = 0x7F28EB14u;
    // 7F28EB14: bl      0x7F0148A0
    {
            ctx->lr = 0x7F28EB18u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F28EB18:
    ctx->pc = 0x7F28EB18u;
    ctx->downcount -= 16;
    // 7F28EB18: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28EB1C:
    ctx->pc = 0x7F28EB1Cu;
    // 7F28EB1C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EB20:
    ctx->pc = 0x7F28EB20u;
    // 7F28EB20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EB24:
    ctx->pc = 0x7F28EB24u;
    // 7F28EB24: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F28EB28:
    ctx->pc = 0x7F28EB28u;
    // 7F28EB28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EB2C:
    ctx->pc = 0x7F28EB2Cu;
    ctx->downcount -= 6;
    // 7F28EB2C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EB30:
    ctx->pc = 0x7F28EB30u;
    // 7F28EB30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EB34:
    ctx->pc = 0x7F28EB34u;
    // 7F28EB34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EB38:
    ctx->pc = 0x7F28EB38u;
    // 7F28EB38: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28EB3C:
    ctx->pc = 0x7F28EB3Cu;
    // 7F28EB3C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EB40:
    ctx->pc = 0x7F28EB40u;
    // 7F28EB40: bl      0x7F28E1EC
    {
            ctx->lr = 0x7F28EB44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E1ECu;
                return;
            }
            goto label_7F28E1EC;
    }

label_7F28EB44:
    ctx->pc = 0x7F28EB44u;
    ctx->downcount -= 2;
    // 7F28EB44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EB48:
    ctx->pc = 0x7F28EB48u;
    // 7F28EB48: bl      0x7F28E4C0
    {
            ctx->lr = 0x7F28EB4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E4C0u;
                return;
            }
            goto label_7F28E4C0;
    }

label_7F28EB4C:
    ctx->pc = 0x7F28EB4Cu;
    ctx->downcount -= 2;
    // 7F28EB4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EB50:
    ctx->pc = 0x7F28EB50u;
    // 7F28EB50: bl      0x7F28EA14
    {
            ctx->lr = 0x7F28EB54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28EA14u;
                return;
            }
            goto label_7F28EA14;
    }

label_7F28EB54:
    ctx->pc = 0x7F28EB54u;
    ctx->downcount -= 2;
    // 7F28EB54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EB58:
    ctx->pc = 0x7F28EB58u;
    // 7F28EB58: bl      0x7F28E07C
    {
            ctx->lr = 0x7F28EB5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28E07Cu;
                return;
            }
            goto label_7F28E07C;
    }

label_7F28EB5C:
    ctx->pc = 0x7F28EB5Cu;
    ctx->downcount -= 6;
    // 7F28EB5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EB60:
    ctx->pc = 0x7F28EB60u;
    // 7F28EB60: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28EB64:
    ctx->pc = 0x7F28EB64u;
    // 7F28EB64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EB68:
    ctx->pc = 0x7F28EB68u;
    // 7F28EB68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28EB6C:
    ctx->pc = 0x7F28EB6Cu;
    // 7F28EB6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EB70:
    ctx->pc = 0x7F28EB70u;
    ctx->downcount -= 5;
    // 7F28EB70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EB74:
    ctx->pc = 0x7F28EB74u;
    // 7F28EB74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EB78:
    ctx->pc = 0x7F28EB78u;
    // 7F28EB78: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F28EB7C:
    ctx->pc = 0x7F28EB7Cu;
    // 7F28EB7C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EB80:
    ctx->pc = 0x7F28EB80u;
    // 7F28EB80: bl      0x7F042AAC
    {
            ctx->lr = 0x7F28EB84u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F28EB84:
    ctx->pc = 0x7F28EB84u;
    ctx->downcount -= 8;
    // 7F28EB84: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28EB88:
    ctx->pc = 0x7F28EB88u;
    // 7F28EB88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28EB8C:
    ctx->pc = 0x7F28EB8Cu;
    // 7F28EB8C: stw     r0, -5668(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EB90:
    ctx->pc = 0x7F28EB90u;
    // 7F28EB90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EB94:
    ctx->pc = 0x7F28EB94u;
    // 7F28EB94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EB98:
    ctx->pc = 0x7F28EB98u;
    // 7F28EB98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28EB9C:
    ctx->pc = 0x7F28EB9Cu;
    // 7F28EB9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EBA0:
    ctx->pc = 0x7F28EBA0u;
    ctx->downcount -= 24;
    // 7F28EBA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EBA4:
    ctx->pc = 0x7F28EBA4u;
    // 7F28EBA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EBA8:
    ctx->pc = 0x7F28EBA8u;
    // 7F28EBA8: lis     r4, 261
    ctx->gpr[4] = ((u32)(s32)(261) << 16);

label_7F28EBAC:
    ctx->pc = 0x7F28EBACu;
    // 7F28EBAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28EBB0:
    ctx->pc = 0x7F28EBB0u;
    // 7F28EBB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EBB4:
    ctx->pc = 0x7F28EBB4u;
    // 7F28EBB4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F28EBB8:
    ctx->pc = 0x7F28EBB8u;
    // 7F28EBB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28EBBC:
    ctx->pc = 0x7F28EBBCu;
    // 7F28EBBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EBC0:
    ctx->pc = 0x7F28EBC0u;
    // 7F28EBC0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28EBC4:
    ctx->pc = 0x7F28EBC4u;
    // 7F28EBC4: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F28EBC8:
    ctx->pc = 0x7F28EBC8u;
    // 7F28EBC8: addi    r31, r30, 144
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(144);

label_7F28EBCC:
    ctx->pc = 0x7F28EBCCu;
    // 7F28EBCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EBD0:
    ctx->pc = 0x7F28EBD0u;
    // 7F28EBD0: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F28EBD4:
    ctx->pc = 0x7F28EBD4u;
    // 7F28EBD4: bl      0x7F014788
    {
            ctx->lr = 0x7F28EBD8u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F28EBD8:
    ctx->pc = 0x7F28EBD8u;
    ctx->downcount -= 5;
    // 7F28EBD8: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28EBDC:
    ctx->pc = 0x7F28EBDCu;
    // 7F28EBDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EBE0:
    ctx->pc = 0x7F28EBE0u;
    // 7F28EBE0: addi    r4, r4, -5840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5840);

label_7F28EBE4:
    ctx->pc = 0x7F28EBE4u;
    // 7F28EBE4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28EBE8:
    ctx->pc = 0x7F28EBE8u;
    // 7F28EBE8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F28EBECu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F28EBEC:
    ctx->pc = 0x7F28EBECu;
    ctx->downcount -= 20;
    // 7F28EBEC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28EBF0:
    ctx->pc = 0x7F28EBF0u;
    // 7F28EBF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28EBF4:
    ctx->pc = 0x7F28EBF4u;
    // 7F28EBF4: addi    r3, r3, -6744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6744);

label_7F28EBF8:
    ctx->pc = 0x7F28EBF8u;
    // 7F28EBF8: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EBFC:
    ctx->pc = 0x7F28EBFCu;
    // 7F28EBFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28EC00:
    ctx->pc = 0x7F28EC00u;
    // 7F28EC00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EC04:
    ctx->pc = 0x7F28EC04u;
    // 7F28EC04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EC08:
    ctx->pc = 0x7F28EC08u;
    // 7F28EC08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28EC0C:
    ctx->pc = 0x7F28EC0Cu;
    // 7F28EC0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EC10:
    ctx->pc = 0x7F28EC10u;
    ctx->downcount -= 21;
    // 7F28EC10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EC14:
    ctx->pc = 0x7F28EC14u;
    // 7F28EC14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EC18:
    ctx->pc = 0x7F28EC18u;
    // 7F28EC18: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F28EC1C:
    ctx->pc = 0x7F28EC1Cu;
    // 7F28EC1C: li      r5, 290
    ctx->gpr[5] = (u32)(s32)(290);

label_7F28EC20:
    ctx->pc = 0x7F28EC20u;
    // 7F28EC20: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EC24:
    ctx->pc = 0x7F28EC24u;
    // 7F28EC24: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28EC28:
    ctx->pc = 0x7F28EC28u;
    // 7F28EC28: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EC2C:
    ctx->pc = 0x7F28EC2Cu;
    // 7F28EC2C: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F28EC30:
    ctx->pc = 0x7F28EC30u;
    // 7F28EC30: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F28EC34:
    ctx->pc = 0x7F28EC34u;
    // 7F28EC34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EC38:
    ctx->pc = 0x7F28EC38u;
    // 7F28EC38: bl      0x7F04272C
    {
            ctx->lr = 0x7F28EC3Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F28EC3C:
    ctx->pc = 0x7F28EC3Cu;
    ctx->downcount -= 5;
    // 7F28EC3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EC40:
    ctx->pc = 0x7F28EC40u;
    // 7F28EC40: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28EC44:
    ctx->pc = 0x7F28EC44u;
    // 7F28EC44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28EC48:
    ctx->pc = 0x7F28EC48u;
    // 7F28EC48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28EC4C:
    ctx->pc = 0x7F28EC4Cu;
    // 7F28EC4C: bl      0x7F042C2C
    {
            ctx->lr = 0x7F28EC50u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F28EC50:
    ctx->pc = 0x7F28EC50u;
    ctx->downcount -= 3;
    // 7F28EC50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EC54:
    ctx->pc = 0x7F28EC54u;
    // 7F28EC54: addi    r4, r30, 92
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(92);

label_7F28EC58:
    ctx->pc = 0x7F28EC58u;
    // 7F28EC58: bl      0x7F042B6C
    {
            ctx->lr = 0x7F28EC5Cu;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F28EC5C:
    ctx->pc = 0x7F28EC5Cu;
    ctx->downcount -= 4;
    // 7F28EC5C: lwz     r3, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EC60:
    ctx->pc = 0x7F28EC60u;
    // 7F28EC60: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EC64:
    ctx->pc = 0x7F28EC64u;
    // 7F28EC64: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EC68:
    ctx->pc = 0x7F28EC68u;
    // 7F28EC68: bc    12, 2, 0x7F28EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28EC98;
        }
    }

label_7F28EC6C:
    ctx->pc = 0x7F28EC6Cu;
    ctx->downcount -= 3;
    // 7F28EC6C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EC70:
    ctx->pc = 0x7F28EC70u;
    // 7F28EC70: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EC74:
    ctx->pc = 0x7F28EC74u;
    // 7F28EC74: bl      0x7F3BC518
    {
            ctx->lr = 0x7F28EC78u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F28EC78:
    ctx->pc = 0x7F28EC78u;
    ctx->downcount -= 3;
    // 7F28EC78: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EC7C:
    ctx->pc = 0x7F28EC7Cu;
    // 7F28EC7C: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EC80:
    ctx->pc = 0x7F28EC80u;
    // 7F28EC80: bc    12, 2, 0x7F28ECC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28ECC4;
        }
    }

label_7F28EC84:
    ctx->pc = 0x7F28EC84u;
    ctx->downcount -= 5;
    // 7F28EC84: lwz     r3, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EC88:
    ctx->pc = 0x7F28EC88u;
    // 7F28EC88: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EC8C:
    ctx->pc = 0x7F28EC8Cu;
    // 7F28EC8C: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EC90:
    ctx->pc = 0x7F28EC90u;
    // 7F28EC90: stw     r0, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EC94:
    ctx->pc = 0x7F28EC94u;
    // 7F28EC94: b       0x7F28ECC4
    {
            goto label_7F28ECC4;
    }

label_7F28EC98:
    ctx->pc = 0x7F28EC98u;
    ctx->downcount -= 3;
    // 7F28EC98: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EC9C:
    ctx->pc = 0x7F28EC9Cu;
    // 7F28EC9C: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28ECA0:
    ctx->pc = 0x7F28ECA0u;
    // 7F28ECA0: bc    12, 2, 0x7F28ECC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28ECC4;
        }
    }

label_7F28ECA4:
    ctx->pc = 0x7F28ECA4u;
    ctx->downcount -= 3;
    // 7F28ECA4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28ECA8:
    ctx->pc = 0x7F28ECA8u;
    // 7F28ECA8: lwz     r4, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28ECAC:
    ctx->pc = 0x7F28ECACu;
    // 7F28ECAC: bl      0x7F3BC518
    {
            ctx->lr = 0x7F28ECB0u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F28ECB0:
    ctx->pc = 0x7F28ECB0u;
    ctx->downcount -= 5;
    // 7F28ECB0: lwz     r4, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28ECB4:
    ctx->pc = 0x7F28ECB4u;
    // 7F28ECB4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28ECB8:
    ctx->pc = 0x7F28ECB8u;
    // 7F28ECB8: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28ECBC:
    ctx->pc = 0x7F28ECBCu;
    // 7F28ECBC: lwz     r0, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28ECC0:
    ctx->pc = 0x7F28ECC0u;
    // 7F28ECC0: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28ECC4:
    ctx->pc = 0x7F28ECC4u;
    ctx->downcount -= 9;
    // 7F28ECC4: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F28ECC8:
    ctx->pc = 0x7F28ECC8u;
    // 7F28ECC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28ECCC:
    ctx->pc = 0x7F28ECCCu;
    // 7F28ECCC: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F28ECD0:
    ctx->pc = 0x7F28ECD0u;
    // 7F28ECD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28ECD4:
    ctx->pc = 0x7F28ECD4u;
    // 7F28ECD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28ECD8:
    ctx->pc = 0x7F28ECD8u;
    // 7F28ECD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28ECDC:
    ctx->pc = 0x7F28ECDCu;
    // 7F28ECDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28ECE0:
    ctx->pc = 0x7F28ECE0u;
    // 7F28ECE0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F28ECE4:
    ctx->pc = 0x7F28ECE4u;
    // 7F28ECE4: bl      0x7F042C94
    {
            ctx->lr = 0x7F28ECE8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F28ECE8:
    ctx->pc = 0x7F28ECE8u;
    ctx->downcount -= 7;
    // 7F28ECE8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28ECEC:
    ctx->pc = 0x7F28ECECu;
    // 7F28ECEC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28ECF0:
    ctx->pc = 0x7F28ECF0u;
    // 7F28ECF0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F28ECF4:
    ctx->pc = 0x7F28ECF4u;
    // 7F28ECF4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28ECF8:
    ctx->pc = 0x7F28ECF8u;
    // 7F28ECF8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28ECFC:
    ctx->pc = 0x7F28ECFCu;
    // 7F28ECFC: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28ED00:
    ctx->pc = 0x7F28ED00u;
    // 7F28ED00: bc    12, 2, 0x7F28ED10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28ED10;
        }
    }

label_7F28ED04:
    ctx->pc = 0x7F28ED04u;
    ctx->downcount -= 3;
    // 7F28ED04: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28ED08:
    ctx->pc = 0x7F28ED08u;
    // 7F28ED08: ori     r0, r0, 0x0300
    ctx->gpr[0] = ctx->gpr[0] | 0x0300u;

label_7F28ED0C:
    ctx->pc = 0x7F28ED0Cu;
    // 7F28ED0C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28ED10:
    ctx->pc = 0x7F28ED10u;
    ctx->downcount -= 10;
    // 7F28ED10: lwz     r5, 388(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(388);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28ED14:
    ctx->pc = 0x7F28ED14u;
    // 7F28ED14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28ED18:
    ctx->pc = 0x7F28ED18u;
    // 7F28ED18: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28ED1C:
    ctx->pc = 0x7F28ED1Cu;
    // 7F28ED1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28ED20:
    ctx->pc = 0x7F28ED20u;
    // 7F28ED20: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F28ED24:
    ctx->pc = 0x7F28ED24u;
    // 7F28ED24: addi    r5, r4, -5668
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F28ED28:
    ctx->pc = 0x7F28ED28u;
    // 7F28ED28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28ED2C:
    ctx->pc = 0x7F28ED2Cu;
    // 7F28ED2C: stw     r0, 384(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28ED30:
    ctx->pc = 0x7F28ED30u;
    // 7F28ED30: stw     r31, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28ED34:
    ctx->pc = 0x7F28ED34u;
    // 7F28ED34: bl      0x7F28DF48
    {
            ctx->lr = 0x7F28ED38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28DF48u;
                return;
            }
            goto label_7F28DF48;
    }

label_7F28ED38:
    ctx->pc = 0x7F28ED38u;
    ctx->downcount -= 2;
    // 7F28ED38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28ED3C:
    ctx->pc = 0x7F28ED3Cu;
    // 7F28ED3C: bl      0x7F28EBA0
    {
            ctx->lr = 0x7F28ED40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28EBA0u;
                return;
            }
            goto label_7F28EBA0;
    }

label_7F28ED40:
    ctx->pc = 0x7F28ED40u;
    ctx->downcount -= 17;
    // 7F28ED40: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28ED44:
    ctx->pc = 0x7F28ED44u;
    // 7F28ED44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28ED48:
    ctx->pc = 0x7F28ED48u;
    // 7F28ED48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28ED4C:
    ctx->pc = 0x7F28ED4Cu;
    // 7F28ED4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28ED50:
    ctx->pc = 0x7F28ED50u;
    // 7F28ED50: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28ED54:
    ctx->pc = 0x7F28ED54u;
    // 7F28ED54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28ED58:
    ctx->pc = 0x7F28ED58u;
    ctx->downcount -= 28;
    // 7F28ED58: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28ED5C:
    ctx->pc = 0x7F28ED5Cu;
    // 7F28ED5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28ED60:
    ctx->pc = 0x7F28ED60u;
    // 7F28ED60: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F28ED64:
    ctx->pc = 0x7F28ED64u;
    // 7F28ED64: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28ED68:
    ctx->pc = 0x7F28ED68u;
    // 7F28ED68: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28ED6C:
    ctx->pc = 0x7F28ED6Cu;
    // 7F28ED6C: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28ED70:
    ctx->pc = 0x7F28ED70u;
    // 7F28ED70: lwz     r29, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F28ED74:
    ctx->pc = 0x7F28ED74u;
    // 7F28ED74: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28ED78:
    ctx->pc = 0x7F28ED78u;
    // 7F28ED78: lwz     r30, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F28ED7C:
    ctx->pc = 0x7F28ED7Cu;
    // 7F28ED7C: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F28ED80:
    ctx->pc = 0x7F28ED80u;
    // 7F28ED80: or   r24, r6, r6
    {
        ctx->gpr[24] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F28ED84:
    ctx->pc = 0x7F28ED84u;
    // 7F28ED84: or   r25, r7, r7
    {
        ctx->gpr[25] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F28ED88:
    ctx->pc = 0x7F28ED88u;
    // 7F28ED88: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F28ED8C:
    ctx->pc = 0x7F28ED8Cu;
    // 7F28ED8C: or   r27, r9, r9
    {
        ctx->gpr[27] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F28ED90:
    ctx->pc = 0x7F28ED90u;
    // 7F28ED90: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F28ED94:
    ctx->pc = 0x7F28ED94u;
    // 7F28ED94: lwz     r0, -5660(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-5660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28ED98:
    ctx->pc = 0x7F28ED98u;
    // 7F28ED98: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28ED9C:
    ctx->pc = 0x7F28ED9Cu;
    // 7F28ED9C: bc    4, 2, 0x7F28EDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28EDA8;
        }
    }

label_7F28EDA0:
    ctx->pc = 0x7F28EDA0u;
    ctx->downcount -= 2;
    // 7F28EDA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28EDA4:
    ctx->pc = 0x7F28EDA4u;
    // 7F28EDA4: b       0x7F28EECC
    {
            goto label_7F28EECC;
    }

label_7F28EDA8:
    ctx->pc = 0x7F28EDA8u;
    ctx->downcount -= 5;
    // 7F28EDA8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F28EDAC:
    ctx->pc = 0x7F28EDACu;
    // 7F28EDAC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28EDB0:
    ctx->pc = 0x7F28EDB0u;
    // 7F28EDB0: li      r5, 432
    ctx->gpr[5] = (u32)(s32)(432);

label_7F28EDB4:
    ctx->pc = 0x7F28EDB4u;
    // 7F28EDB4: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F28EDB8:
    ctx->pc = 0x7F28EDB8u;
    // 7F28EDB8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F28EDBCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F28EDBC:
    ctx->pc = 0x7F28EDBCu;
    ctx->downcount -= 2;
    // 7F28EDBC: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28EDC0:
    ctx->pc = 0x7F28EDC0u;
    // 7F28EDC0: bc    4, 2, 0x7F28EDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28EDCC;
        }
    }

label_7F28EDC4:
    ctx->pc = 0x7F28EDC4u;
    ctx->downcount -= 2;
    // 7F28EDC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28EDC8:
    ctx->pc = 0x7F28EDC8u;
    // 7F28EDC8: b       0x7F28EECC
    {
            goto label_7F28EECC;
    }

label_7F28EDCC:
    ctx->pc = 0x7F28EDCCu;
    ctx->downcount -= 5;
    // 7F28EDCC: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28EDD0:
    ctx->pc = 0x7F28EDD0u;
    // 7F28EDD0: lis     r5, 32553
    ctx->gpr[5] = ((u32)(s32)(32553) << 16);

label_7F28EDD4:
    ctx->pc = 0x7F28EDD4u;
    // 7F28EDD4: addi    r4, r4, -5332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5332);

label_7F28EDD8:
    ctx->pc = 0x7F28EDD8u;
    // 7F28EDD8: addi    r5, r5, -5264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5264);

label_7F28EDDC:
    ctx->pc = 0x7F28EDDCu;
    // 7F28EDDC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F28EDE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F28EDE0:
    ctx->pc = 0x7F28EDE0u;
    ctx->downcount -= 21;
    // 7F28EDE0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EDE4:
    ctx->pc = 0x7F28EDE4u;
    // 7F28EDE4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F28EDE8:
    ctx->pc = 0x7F28EDE8u;
    // 7F28EDE8: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F28EDEC:
    ctx->pc = 0x7F28EDECu;
    // 7F28EDEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28EDF0:
    ctx->pc = 0x7F28EDF0u;
    // 7F28EDF0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F28EDF4:
    ctx->pc = 0x7F28EDF4u;
    // 7F28EDF4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F28EDF8:
    ctx->pc = 0x7F28EDF8u;
    // 7F28EDF8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28EDFC:
    ctx->pc = 0x7F28EDFCu;
    // 7F28EDFC: addi    r3, r3, -7219
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7219);

label_7F28EE00:
    ctx->pc = 0x7F28EE00u;
    // 7F28EE00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28EE04:
    ctx->pc = 0x7F28EE04u;
    // 7F28EE04: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28EE08:
    ctx->pc = 0x7F28EE08u;
    // 7F28EE08: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28EE0C:
    ctx->pc = 0x7F28EE0Cu;
    // 7F28EE0C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28EE10:
    ctx->pc = 0x7F28EE10u;
    // 7F28EE10: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EE14:
    ctx->pc = 0x7F28EE14u;
    // 7F28EE14: stw     r21, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F28EE18:
    ctx->pc = 0x7F28EE18u;
    // 7F28EE18: stw     r22, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F28EE1C:
    ctx->pc = 0x7F28EE1Cu;
    // 7F28EE1C: stw     r26, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F28EE20:
    ctx->pc = 0x7F28EE20u;
    // 7F28EE20: stw     r27, 392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F28EE24:
    ctx->pc = 0x7F28EE24u;
    // 7F28EE24: stw     r28, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F28EE28:
    ctx->pc = 0x7F28EE28u;
    // 7F28EE28: stw     r29, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F28EE2C:
    ctx->pc = 0x7F28EE2Cu;
    // 7F28EE2C: stw     r30, 412(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28EE30:
    ctx->pc = 0x7F28EE30u;
    // 7F28EE30: bl      0x7F024B28
    {
            ctx->lr = 0x7F28EE34u;
            ctx->pc = 0x7F024B28u;
            return;
    }

label_7F28EE34:
    ctx->pc = 0x7F28EE34u;
    ctx->downcount -= 18;
    // 7F28EE34: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28EE38:
    ctx->pc = 0x7F28EE38u;
    // 7F28EE38: stw     r3, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE3C:
    ctx->pc = 0x7F28EE3Cu;
    // 7F28EE3C: addi    r5, r4, -5664
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5664);

label_7F28EE40:
    ctx->pc = 0x7F28EE40u;
    // 7F28EE40: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EE44:
    ctx->pc = 0x7F28EE44u;
    // 7F28EE44: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EE48:
    ctx->pc = 0x7F28EE48u;
    // 7F28EE48: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EE4C:
    ctx->pc = 0x7F28EE4Cu;
    // 7F28EE4C: stw     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE50:
    ctx->pc = 0x7F28EE50u;
    // 7F28EE50: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EE54:
    ctx->pc = 0x7F28EE54u;
    // 7F28EE54: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EE58:
    ctx->pc = 0x7F28EE58u;
    // 7F28EE58: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EE5C:
    ctx->pc = 0x7F28EE5Cu;
    // 7F28EE5C: stw     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE60:
    ctx->pc = 0x7F28EE60u;
    // 7F28EE60: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EE64:
    ctx->pc = 0x7F28EE64u;
    // 7F28EE64: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28EE68:
    ctx->pc = 0x7F28EE68u;
    // 7F28EE68: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28EE6C:
    ctx->pc = 0x7F28EE6Cu;
    // 7F28EE6C: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EE70:
    ctx->pc = 0x7F28EE70u;
    // 7F28EE70: stw     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE74:
    ctx->pc = 0x7F28EE74u;
    // 7F28EE74: stw     r0, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EE78:
    ctx->pc = 0x7F28EE78u;
    // 7F28EE78: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28EE7Cu;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28EE7C:
    ctx->pc = 0x7F28EE7Cu;
    ctx->downcount -= 15;
    // 7F28EE7C: mulli   r5, r30, 44
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)44);

label_7F28EE80:
    ctx->pc = 0x7F28EE80u;
    // 7F28EE80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F28EE84:
    ctx->pc = 0x7F28EE84u;
    // 7F28EE84: stw     r3, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE88:
    ctx->pc = 0x7F28EE88u;
    // 7F28EE88: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28EE8C:
    ctx->pc = 0x7F28EE8Cu;
    // 7F28EE8C: addi    r3, r4, 14080
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F28EE90:
    ctx->pc = 0x7F28EE90u;
    // 7F28EE90: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F28EE94:
    ctx->pc = 0x7F28EE94u;
    // 7F28EE94: stw     r3, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EE98:
    ctx->pc = 0x7F28EE98u;
    // 7F28EE98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EE9C:
    ctx->pc = 0x7F28EE9Cu;
    // 7F28EE9C: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F28EEA0:
    ctx->pc = 0x7F28EEA0u;
    // 7F28EEA0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F28EEA4:
    ctx->pc = 0x7F28EEA4u;
    // 7F28EEA4: stw     r0, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EEA8:
    ctx->pc = 0x7F28EEA8u;
    // 7F28EEA8: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F28EEAC:
    ctx->pc = 0x7F28EEACu;
    // 7F28EEAC: bl      0x7F28EC10
    {
            ctx->lr = 0x7F28EEB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28EC10u;
                return;
            }
            goto label_7F28EC10;
    }

label_7F28EEB0:
    ctx->pc = 0x7F28EEB0u;
    ctx->downcount -= 2;
    // 7F28EEB0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EEB4:
    ctx->pc = 0x7F28EEB4u;
    // 7F28EEB4: bc    4, 0, 0x7F28EEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28EEC8;
        }
    }

label_7F28EEB8:
    ctx->pc = 0x7F28EEB8u;
    ctx->downcount -= 2;
    // 7F28EEB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EEBC:
    ctx->pc = 0x7F28EEBCu;
    // 7F28EEBC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F28EEC0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F28EEC0:
    ctx->pc = 0x7F28EEC0u;
    ctx->downcount -= 2;
    // 7F28EEC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28EEC4:
    ctx->pc = 0x7F28EEC4u;
    // 7F28EEC4: b       0x7F28EECC
    {
            goto label_7F28EECC;
    }

label_7F28EEC8:
    ctx->pc = 0x7F28EEC8u;
    ctx->downcount -= 1;
    // 7F28EEC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28EECC:
    ctx->pc = 0x7F28EECCu;
    ctx->downcount -= 16;
    // 7F28EECC: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28EED0:
    ctx->pc = 0x7F28EED0u;
    // 7F28EED0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EED4:
    ctx->pc = 0x7F28EED4u;
    // 7F28EED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EED8:
    ctx->pc = 0x7F28EED8u;
    // 7F28EED8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F28EEDC:
    ctx->pc = 0x7F28EEDCu;
    // 7F28EEDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EEE0:
    ctx->pc = 0x7F28EEE0u;
    ctx->downcount -= 6;
    // 7F28EEE0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28EEE4:
    ctx->pc = 0x7F28EEE4u;
    // 7F28EEE4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28EEE8:
    ctx->pc = 0x7F28EEE8u;
    // 7F28EEE8: addi    r0, r4, 19040
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(19040);

label_7F28EEEC:
    ctx->pc = 0x7F28EEECu;
    // 7F28EEEC: addi    r3, r3, 19252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19252);

label_7F28EEF0:
    ctx->pc = 0x7F28EEF0u;
    // 7F28EEF0: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EEF4:
    ctx->pc = 0x7F28EEF4u;
    // 7F28EEF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EEF8:
    ctx->pc = 0x7F28EEF8u;
    ctx->downcount -= 6;
    // 7F28EEF8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F28EEFC:
    ctx->pc = 0x7F28EEFCu;
    // 7F28EEFC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28EF00:
    ctx->pc = 0x7F28EF00u;
    // 7F28EF00: addi    r0, r4, 19064
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(19064);

label_7F28EF04:
    ctx->pc = 0x7F28EF04u;
    // 7F28EF04: addi    r3, r3, 19252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19252);

label_7F28EF08:
    ctx->pc = 0x7F28EF08u;
    // 7F28EF08: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EF0C:
    ctx->pc = 0x7F28EF0Cu;
    // 7F28EF0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF10:
    ctx->pc = 0x7F28EF10u;
    ctx->downcount -= 11;
    // 7F28EF10: lis     r6, 32541
    ctx->gpr[6] = ((u32)(s32)(32541) << 16);

label_7F28EF14:
    ctx->pc = 0x7F28EF14u;
    // 7F28EF14: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F28EF18:
    ctx->pc = 0x7F28EF18u;
    // 7F28EF18: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28EF1C:
    ctx->pc = 0x7F28EF1Cu;
    // 7F28EF1C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28EF20:
    ctx->pc = 0x7F28EF20u;
    // 7F28EF20: addi    r6, r6, 32244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32244);

label_7F28EF24:
    ctx->pc = 0x7F28EF24u;
    // 7F28EF24: addi    r0, r4, -25648
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25648);

label_7F28EF28:
    ctx->pc = 0x7F28EF28u;
    // 7F28EF28: addi    r4, r3, -6164
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6164);

label_7F28EF2C:
    ctx->pc = 0x7F28EF2Cu;
    // 7F28EF2C: stw     r6, -6156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28EF30:
    ctx->pc = 0x7F28EF30u;
    // 7F28EF30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28EF34:
    ctx->pc = 0x7F28EF34u;
    // 7F28EF34: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EF38:
    ctx->pc = 0x7F28EF38u;
    // 7F28EF38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF3C:
    ctx->pc = 0x7F28EF3Cu;
    ctx->downcount -= 7;
    // 7F28EF3C: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28EF40:
    ctx->pc = 0x7F28EF40u;
    // 7F28EF40: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28EF44:
    ctx->pc = 0x7F28EF44u;
    // 7F28EF44: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28EF48:
    ctx->pc = 0x7F28EF48u;
    // 7F28EF48: lwzu     r0, -5816(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5816);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F28EF4C:
    ctx->pc = 0x7F28EF4Cu;
    // 7F28EF4C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EF50:
    ctx->pc = 0x7F28EF50u;
    // 7F28EF50: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28EF54:
    ctx->pc = 0x7F28EF54u;
    // 7F28EF54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF58:
    ctx->pc = 0x7F28EF58u;
    ctx->downcount -= 4;
    // 7F28EF58: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28EF5C:
    ctx->pc = 0x7F28EF5Cu;
    // 7F28EF5C: addi    r0, r4, -5816
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5816);

label_7F28EF60:
    ctx->pc = 0x7F28EF60u;
    // 7F28EF60: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28EF64:
    ctx->pc = 0x7F28EF64u;
    // 7F28EF64: b       0x7F28EF80
    {
            goto label_7F28EF80;
    }

label_7F28EF68:
    ctx->downcount -= 2;
    // 7F28EF68: cmplw   r0, r3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EF6C:
    // 7F28EF6C: bc    4, 2, 0x7F28EF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28EF7C;
        }
    }

label_7F28EF70:
    ctx->pc = 0x7F28EF70u;
    ctx->downcount -= 3;
    // 7F28EF70: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EF74:
    ctx->pc = 0x7F28EF74u;
    // 7F28EF74: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EF78:
    ctx->pc = 0x7F28EF78u;
    // 7F28EF78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF7C:
    ctx->downcount -= 1;
    // 7F28EF7C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28EF80:
    ctx->pc = 0x7F28EF80u;
    ctx->downcount -= 3;
    // 7F28EF80: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EF84:
    // 7F28EF84: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28EF88:
    // 7F28EF88: bc    4, 2, 0x7F28EF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28EF68u;
                return;
            }
            goto label_7F28EF68;
        }
    }

label_7F28EF8C:
    ctx->pc = 0x7F28EF8Cu;
    ctx->downcount -= 1;
    // 7F28EF8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF90:
    ctx->pc = 0x7F28EF90u;
    ctx->downcount -= 1;
    // 7F28EF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EF94:
    ctx->pc = 0x7F28EF94u;
    ctx->downcount -= 7;
    // 7F28EF94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EF98:
    ctx->pc = 0x7F28EF98u;
    // 7F28EF98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EF9C:
    ctx->pc = 0x7F28EF9Cu;
    // 7F28EF9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EFA0:
    ctx->pc = 0x7F28EFA0u;
    // 7F28EFA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28EFA4:
    ctx->pc = 0x7F28EFA4u;
    // 7F28EFA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EFA8:
    ctx->pc = 0x7F28EFA8u;
    // 7F28EFA8: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F28EFAC:
    ctx->pc = 0x7F28EFACu;
    // 7F28EFAC: bl      0x7F023E10
    {
            ctx->lr = 0x7F28EFB0u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F28EFB0:
    ctx->pc = 0x7F28EFB0u;
    ctx->downcount -= 2;
    // 7F28EFB0: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F28EFB4:
    ctx->pc = 0x7F28EFB4u;
    // 7F28EFB4: bl      0x7F042AAC
    {
            ctx->lr = 0x7F28EFB8u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F28EFB8:
    ctx->pc = 0x7F28EFB8u;
    ctx->downcount -= 11;
    // 7F28EFB8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28EFBC:
    ctx->pc = 0x7F28EFBCu;
    // 7F28EFBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28EFC0:
    ctx->pc = 0x7F28EFC0u;
    // 7F28EFC0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F28EFC4:
    ctx->pc = 0x7F28EFC4u;
    // 7F28EFC4: stw     r0, -5664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EFC8:
    ctx->pc = 0x7F28EFC8u;
    // 7F28EFC8: stw     r0, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EFCC:
    ctx->pc = 0x7F28EFCCu;
    // 7F28EFCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28EFD0:
    ctx->pc = 0x7F28EFD0u;
    // 7F28EFD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28EFD4:
    ctx->pc = 0x7F28EFD4u;
    // 7F28EFD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28EFD8:
    ctx->pc = 0x7F28EFD8u;
    // 7F28EFD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28EFDC:
    ctx->pc = 0x7F28EFDCu;
    // 7F28EFDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28EFE0:
    ctx->pc = 0x7F28EFE0u;
    ctx->downcount -= 23;
    // 7F28EFE0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28EFE4:
    ctx->pc = 0x7F28EFE4u;
    // 7F28EFE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28EFE8:
    ctx->pc = 0x7F28EFE8u;
    // 7F28EFE8: lis     r5, 155
    ctx->gpr[5] = ((u32)(s32)(155) << 16);

label_7F28EFEC:
    ctx->pc = 0x7F28EFECu;
    // 7F28EFEC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F28EFF0:
    ctx->pc = 0x7F28EFF0u;
    // 7F28EFF0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28EFF4:
    ctx->pc = 0x7F28EFF4u;
    // 7F28EFF4: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28EFF8:
    ctx->pc = 0x7F28EFF8u;
    // 7F28EFF8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28EFFC:
    ctx->pc = 0x7F28EFFCu;
    // 7F28EFFC: addi    r31, r29, 80
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(80);

label_7F28F000:
    ctx->pc = 0x7F28F000u;
    // 7F28F000: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28F004:
    ctx->pc = 0x7F28F004u;
    // 7F28F004: addi    r4, r5, 5415
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(5415);

label_7F28F008:
    ctx->pc = 0x7F28F008u;
    // 7F28F008: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28F00C:
    ctx->pc = 0x7F28F00Cu;
    // 7F28F00C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F010:
    ctx->pc = 0x7F28F010u;
    // 7F28F010: bl      0x7F022FB4
    {
            ctx->lr = 0x7F28F014u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F28F014:
    ctx->pc = 0x7F28F014u;
    ctx->downcount -= 4;
    // 7F28F014: stw     r30, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28F018:
    ctx->pc = 0x7F28F018u;
    // 7F28F018: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F01C:
    ctx->pc = 0x7F28F01Cu;
    // 7F28F01C: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F28F020:
    ctx->pc = 0x7F28F020u;
    // 7F28F020: bl      0x7F28F770
    {
            ctx->lr = 0x7F28F024u;
            goto label_7F28F770;
    }

label_7F28F024:
    ctx->pc = 0x7F28F024u;
    ctx->downcount -= 2;
    // 7F28F024: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F028:
    ctx->pc = 0x7F28F028u;
    // 7F28F028: bl      0x7F023EA8
    {
            ctx->lr = 0x7F28F02Cu;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F28F02C:
    ctx->pc = 0x7F28F02Cu;
    ctx->downcount -= 4;
    // 7F28F02C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28F030:
    ctx->pc = 0x7F28F030u;
    // 7F28F030: addi    r30, r29, 32
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(32);

label_7F28F034:
    ctx->pc = 0x7F28F034u;
    // 7F28F034: addi    r3, r3, 20744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20744);

label_7F28F038:
    ctx->pc = 0x7F28F038u;
    // 7F28F038: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F28F03Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F28F03C:
    ctx->pc = 0x7F28F03Cu;
    ctx->downcount -= 3;
    // 7F28F03C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F040:
    ctx->pc = 0x7F28F040u;
    // 7F28F040: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F28F044:
    ctx->pc = 0x7F28F044u;
    // 7F28F044: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F28F048u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F28F048:
    ctx->pc = 0x7F28F048u;
    ctx->downcount -= 4;
    // 7F28F048: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F04C:
    ctx->pc = 0x7F28F04Cu;
    // 7F28F04C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F050:
    ctx->pc = 0x7F28F050u;
    // 7F28F050: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F28F054:
    ctx->pc = 0x7F28F054u;
    // 7F28F054: bl      0x7F04272C
    {
            ctx->lr = 0x7F28F058u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F28F058:
    ctx->pc = 0x7F28F058u;
    ctx->downcount -= 67;
    // 7F28F058: lwz     r10, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F28F05C:
    ctx->pc = 0x7F28F05Cu;
    // 7F28F05C: lis     r8, 32586
    ctx->gpr[8] = ((u32)(s32)(32586) << 16);

label_7F28F060:
    ctx->pc = 0x7F28F060u;
    // 7F28F060: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F28F064:
    ctx->pc = 0x7F28F064u;
    // 7F28F064: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F28F068:
    ctx->pc = 0x7F28F068u;
    // 7F28F068: lwz     r0, 80(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F06C:
    ctx->pc = 0x7F28F06Cu;
    // 7F28F06C: addi    r11, r8, 22156
    ctx->gpr[11] = ctx->gpr[8] + (u32)(s32)(22156);

label_7F28F070:
    ctx->pc = 0x7F28F070u;
    // 7F28F070: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F28F074:
    ctx->pc = 0x7F28F074u;
    // 7F28F074: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F28F078:
    ctx->pc = 0x7F28F078u;
    // 7F28F078: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F28F07C:
    ctx->pc = 0x7F28F07Cu;
    // 7F28F07C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28F080:
    ctx->pc = 0x7F28F080u;
    // 7F28F080: stw     r0, 80(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F084:
    ctx->pc = 0x7F28F084u;
    // 7F28F084: addi    r8, r4, 13880
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F28F088:
    ctx->pc = 0x7F28F088u;
    // 7F28F088: addi    r10, r5, -5708
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F28F08C:
    ctx->pc = 0x7F28F08Cu;
    // 7F28F08C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28F090:
    ctx->pc = 0x7F28F090u;
    // 7F28F090: stw     r31, -5664(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F094:
    ctx->pc = 0x7F28F094u;
    // 7F28F094: addi    r9, r7, -5728
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-5728);

label_7F28F098:
    ctx->pc = 0x7F28F098u;
    // 7F28F098: addi    r7, r6, -5848
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-5848);

label_7F28F09C:
    ctx->pc = 0x7F28F09Cu;
    // 7F28F09C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F0A0:
    ctx->pc = 0x7F28F0A0u;
    // 7F28F0A0: stw     r30, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28F0A4:
    ctx->pc = 0x7F28F0A4u;
    // 7F28F0A4: addi    r6, r3, -5872
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F28F0A8:
    ctx->pc = 0x7F28F0A8u;
    // 7F28F0A8: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F0AC:
    ctx->pc = 0x7F28F0ACu;
    // 7F28F0AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28F0B0:
    ctx->pc = 0x7F28F0B0u;
    // 7F28F0B0: lwz     r11, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F28F0B4:
    ctx->pc = 0x7F28F0B4u;
    // 7F28F0B4: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F28F0B8:
    ctx->pc = 0x7F28F0B8u;
    // 7F28F0B8: stw     r11, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F28F0BC:
    ctx->pc = 0x7F28F0BCu;
    // 7F28F0BC: lwz     r9, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F28F0C0:
    ctx->pc = 0x7F28F0C0u;
    // 7F28F0C0: stw     r9, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F28F0C4:
    ctx->pc = 0x7F28F0C4u;
    // 7F28F0C4: lwz     r9, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F28F0C8:
    ctx->pc = 0x7F28F0C8u;
    // 7F28F0C8: lwz     r7, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28F0CC:
    ctx->pc = 0x7F28F0CCu;
    // 7F28F0CC: stw     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F28F0D0:
    ctx->pc = 0x7F28F0D0u;
    // 7F28F0D0: stw     r7, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28F0D4:
    ctx->pc = 0x7F28F0D4u;
    // 7F28F0D4: lwz     r9, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F28F0D8:
    ctx->pc = 0x7F28F0D8u;
    // 7F28F0D8: lwz     r7, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28F0DC:
    ctx->pc = 0x7F28F0DCu;
    // 7F28F0DC: stw     r9, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F28F0E0:
    ctx->pc = 0x7F28F0E0u;
    // 7F28F0E0: stw     r7, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28F0E4:
    ctx->pc = 0x7F28F0E4u;
    // 7F28F0E4: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F0E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28F0E8:
    ctx->pc = 0x7F28F0E8u;
    // 7F28F0E8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28F0E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F28F0EC:
    ctx->pc = 0x7F28F0ECu;
    // 7F28F0EC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F28F0F0:
    ctx->pc = 0x7F28F0F0u;
    // 7F28F0F0: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28F0F4:
    ctx->pc = 0x7F28F0F4u;
    // 7F28F0F4: stw     r7, 268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28F0F8:
    ctx->pc = 0x7F28F0F8u;
    // 7F28F0F8: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F0F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28F0FC:
    ctx->pc = 0x7F28F0FCu;
    // 7F28F0FC: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F100:
    ctx->pc = 0x7F28F100u;
    // 7F28F100: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28F100u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F28F104:
    ctx->pc = 0x7F28F104u;
    // 7F28F104: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F28F108:
    ctx->pc = 0x7F28F108u;
    // 7F28F108: lwz     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28F10C:
    ctx->pc = 0x7F28F10Cu;
    // 7F28F10C: stw     r7, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28F110:
    ctx->pc = 0x7F28F110u;
    // 7F28F110: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F110u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28F114:
    ctx->pc = 0x7F28F114u;
    // 7F28F114: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F118:
    ctx->pc = 0x7F28F118u;
    // 7F28F118: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28F118u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F28F11C:
    ctx->pc = 0x7F28F11Cu;
    // 7F28F11C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F11Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F28F120:
    ctx->pc = 0x7F28F120u;
    // 7F28F120: lwz     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F28F124:
    ctx->pc = 0x7F28F124u;
    // 7F28F124: stw     r7, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28F128:
    ctx->pc = 0x7F28F128u;
    // 7F28F128: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F12C:
    ctx->pc = 0x7F28F12Cu;
    // 7F28F12C: sth     r0, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28F130:
    ctx->pc = 0x7F28F130u;
    // 7F28F130: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F134:
    ctx->pc = 0x7F28F134u;
    // 7F28F134: sth     r0, 282(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(282);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28F138:
    ctx->pc = 0x7F28F138u;
    // 7F28F138: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F13C:
    ctx->pc = 0x7F28F13Cu;
    // 7F28F13C: sth     r0, 294(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28F140:
    ctx->pc = 0x7F28F140u;
    // 7F28F140: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F144:
    ctx->pc = 0x7F28F144u;
    // 7F28F144: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F148:
    ctx->pc = 0x7F28F148u;
    // 7F28F148: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F14C:
    ctx->pc = 0x7F28F14Cu;
    // 7F28F14C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F150:
    ctx->pc = 0x7F28F150u;
    // 7F28F150: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F154:
    ctx->pc = 0x7F28F154u;
    // 7F28F154: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F158:
    ctx->pc = 0x7F28F158u;
    // 7F28F158: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F15C:
    ctx->pc = 0x7F28F15Cu;
    // 7F28F15C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F160:
    ctx->pc = 0x7F28F160u;
    // 7F28F160: bl      0x7F3C8998
    {
            ctx->lr = 0x7F28F164u;
            ctx->pc = 0x7F3C8998u;
            return;
    }

label_7F28F164:
    ctx->pc = 0x7F28F164u;
    ctx->downcount -= 17;
    // 7F28F164: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F168:
    ctx->pc = 0x7F28F168u;
    // 7F28F168: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F16C:
    ctx->pc = 0x7F28F16Cu;
    // 7F28F16C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F170:
    ctx->pc = 0x7F28F170u;
    // 7F28F170: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F174:
    ctx->pc = 0x7F28F174u;
    // 7F28F174: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F28F178:
    ctx->pc = 0x7F28F178u;
    // 7F28F178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F17C:
    ctx->pc = 0x7F28F17Cu;
    ctx->downcount -= 20;
    // 7F28F17C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F180:
    ctx->pc = 0x7F28F180u;
    // 7F28F180: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F184:
    ctx->pc = 0x7F28F184u;
    // 7F28F184: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28F188:
    ctx->pc = 0x7F28F188u;
    // 7F28F188: li      r5, 304
    ctx->gpr[5] = (u32)(s32)(304);

label_7F28F18C:
    ctx->pc = 0x7F28F18Cu;
    // 7F28F18C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F190:
    ctx->pc = 0x7F28F190u;
    // 7F28F190: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F28F194:
    ctx->pc = 0x7F28F194u;
    // 7F28F194: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F198:
    ctx->pc = 0x7F28F198u;
    // 7F28F198: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F19C:
    ctx->pc = 0x7F28F19Cu;
    // 7F28F19C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F28F1A0:
    ctx->pc = 0x7F28F1A0u;
    // 7F28F1A0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F28F1A4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F28F1A4:
    ctx->pc = 0x7F28F1A4u;
    ctx->downcount -= 2;
    // 7F28F1A4: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F1A8:
    ctx->pc = 0x7F28F1A8u;
    // 7F28F1A8: bc    12, 2, 0x7F28F1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F1E4;
        }
    }

label_7F28F1AC:
    ctx->pc = 0x7F28F1ACu;
    ctx->downcount -= 5;
    // 7F28F1AC: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28F1B0:
    ctx->pc = 0x7F28F1B0u;
    // 7F28F1B0: lis     r5, 32553
    ctx->gpr[5] = ((u32)(s32)(32553) << 16);

label_7F28F1B4:
    ctx->pc = 0x7F28F1B4u;
    // 7F28F1B4: addi    r4, r4, -4208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4208);

label_7F28F1B8:
    ctx->pc = 0x7F28F1B8u;
    // 7F28F1B8: addi    r5, r5, -4204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4204);

label_7F28F1BC:
    ctx->pc = 0x7F28F1BCu;
    // 7F28F1BC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F28F1C0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F28F1C0:
    ctx->pc = 0x7F28F1C0u;
    ctx->downcount -= 3;
    // 7F28F1C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F1C4:
    ctx->pc = 0x7F28F1C4u;
    // 7F28F1C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F1C8:
    ctx->pc = 0x7F28F1C8u;
    // 7F28F1C8: bl      0x7F28EFE0
    {
            ctx->lr = 0x7F28F1CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28EFE0u;
                return;
            }
            goto label_7F28EFE0;
    }

label_7F28F1CC:
    ctx->pc = 0x7F28F1CCu;
    ctx->downcount -= 2;
    // 7F28F1CC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F1D0:
    ctx->pc = 0x7F28F1D0u;
    // 7F28F1D0: bc    4, 0, 0x7F28F1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F1E4;
        }
    }

label_7F28F1D4:
    ctx->pc = 0x7F28F1D4u;
    ctx->downcount -= 2;
    // 7F28F1D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F1D8:
    ctx->pc = 0x7F28F1D8u;
    // 7F28F1D8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F28F1DCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F28F1DC:
    ctx->pc = 0x7F28F1DCu;
    ctx->downcount -= 2;
    // 7F28F1DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F1E0:
    ctx->pc = 0x7F28F1E0u;
    // 7F28F1E0: b       0x7F28F1E8
    {
            goto label_7F28F1E8;
    }

label_7F28F1E4:
    ctx->pc = 0x7F28F1E4u;
    ctx->downcount -= 1;
    // 7F28F1E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F1E8:
    ctx->pc = 0x7F28F1E8u;
    ctx->downcount -= 16;
    // 7F28F1E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F1EC:
    ctx->pc = 0x7F28F1ECu;
    // 7F28F1EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F1F0:
    ctx->pc = 0x7F28F1F0u;
    // 7F28F1F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F1F4:
    ctx->pc = 0x7F28F1F4u;
    // 7F28F1F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F1F8:
    ctx->pc = 0x7F28F1F8u;
    // 7F28F1F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F1FC:
    ctx->pc = 0x7F28F1FCu;
    ctx->downcount -= 16;
    // 7F28F1FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F200:
    ctx->pc = 0x7F28F200u;
    // 7F28F200: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F204:
    ctx->pc = 0x7F28F204u;
    // 7F28F204: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F208:
    ctx->pc = 0x7F28F208u;
    // 7F28F208: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F20C:
    ctx->pc = 0x7F28F20Cu;
    // 7F28F20C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F210:
    ctx->pc = 0x7F28F210u;
    // 7F28F210: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28F214u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28F214:
    ctx->pc = 0x7F28F214u;
    ctx->downcount -= 2;
    // 7F28F214: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F218:
    ctx->pc = 0x7F28F218u;
    // 7F28F218: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28F21Cu;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28F21C:
    ctx->pc = 0x7F28F21Cu;
    ctx->downcount -= 2;
    // 7F28F21C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F220:
    ctx->pc = 0x7F28F220u;
    // 7F28F220: bl      0x7F019D54
    {
            ctx->lr = 0x7F28F224u;
            ctx->pc = 0x7F019D54u;
            return;
    }

label_7F28F224:
    ctx->pc = 0x7F28F224u;
    ctx->downcount -= 2;
    // 7F28F224: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F228:
    ctx->pc = 0x7F28F228u;
    // 7F28F228: bc    12, 2, 0x7F28F234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F234;
        }
    }

label_7F28F22C:
    ctx->pc = 0x7F28F22Cu;
    ctx->downcount -= 2;
    // 7F28F22C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F230:
    ctx->pc = 0x7F28F230u;
    // 7F28F230: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F234:
    ctx->pc = 0x7F28F234u;
    ctx->downcount -= 3;
    // 7F28F234: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F238:
    ctx->pc = 0x7F28F238u;
    // 7F28F238: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F23C:
    ctx->pc = 0x7F28F23Cu;
    // 7F28F23C: bl      0x7F019D84
    {
            ctx->lr = 0x7F28F240u;
            ctx->pc = 0x7F019D84u;
            return;
    }

label_7F28F240:
    ctx->pc = 0x7F28F240u;
    ctx->downcount -= 2;
    // 7F28F240: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F244:
    ctx->pc = 0x7F28F244u;
    // 7F28F244: bc    12, 2, 0x7F28F250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F250;
        }
    }

label_7F28F248:
    ctx->pc = 0x7F28F248u;
    ctx->downcount -= 2;
    // 7F28F248: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F24C:
    ctx->pc = 0x7F28F24Cu;
    // 7F28F24C: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F250:
    ctx->pc = 0x7F28F250u;
    ctx->downcount -= 6;
    // 7F28F250: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28F254:
    ctx->pc = 0x7F28F254u;
    // 7F28F254: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F258:
    ctx->pc = 0x7F28F258u;
    // 7F28F258: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28F25C:
    ctx->pc = 0x7F28F25Cu;
    // 7F28F25C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F260:
    ctx->pc = 0x7F28F260u;
    // 7F28F260: lha     r3, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F264:
    ctx->pc = 0x7F28F264u;
    // 7F28F264: bl      0x7F019D54
    {
            ctx->lr = 0x7F28F268u;
            ctx->pc = 0x7F019D54u;
            return;
    }

label_7F28F268:
    ctx->pc = 0x7F28F268u;
    ctx->downcount -= 2;
    // 7F28F268: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F26C:
    ctx->pc = 0x7F28F26Cu;
    // 7F28F26C: bc    12, 2, 0x7F28F278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F278;
        }
    }

label_7F28F270:
    ctx->pc = 0x7F28F270u;
    ctx->downcount -= 2;
    // 7F28F270: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F274:
    ctx->pc = 0x7F28F274u;
    // 7F28F274: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F278:
    ctx->pc = 0x7F28F278u;
    ctx->downcount -= 6;
    // 7F28F278: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28F27C:
    ctx->pc = 0x7F28F27Cu;
    // 7F28F27C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F280:
    ctx->pc = 0x7F28F280u;
    // 7F28F280: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28F284:
    ctx->pc = 0x7F28F284u;
    // 7F28F284: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F288:
    ctx->pc = 0x7F28F288u;
    // 7F28F288: lha     r3, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F28C:
    ctx->pc = 0x7F28F28Cu;
    // 7F28F28C: bl      0x7F019D84
    {
            ctx->lr = 0x7F28F290u;
            ctx->pc = 0x7F019D84u;
            return;
    }

label_7F28F290:
    ctx->pc = 0x7F28F290u;
    ctx->downcount -= 2;
    // 7F28F290: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F294:
    ctx->pc = 0x7F28F294u;
    // 7F28F294: bc    12, 2, 0x7F28F2A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F2A0;
        }
    }

label_7F28F298:
    ctx->pc = 0x7F28F298u;
    ctx->downcount -= 2;
    // 7F28F298: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F29C:
    ctx->pc = 0x7F28F29Cu;
    // 7F28F29C: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F2A0:
    ctx->pc = 0x7F28F2A0u;
    ctx->downcount -= 8;
    // 7F28F2A0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F28F2A4:
    ctx->pc = 0x7F28F2A4u;
    // 7F28F2A4: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F28F2A8:
    ctx->pc = 0x7F28F2A8u;
    // 7F28F2A8: addi    r3, r3, -180
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-180);

label_7F28F2AC:
    ctx->pc = 0x7F28F2ACu;
    // 7F28F2AC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F2B0:
    ctx->pc = 0x7F28F2B0u;
    // 7F28F2B0: lwzx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F2B4:
    ctx->pc = 0x7F28F2B4u;
    // 7F28F2B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F2B8:
    ctx->pc = 0x7F28F2B8u;
    // 7F28F2B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28F2BC:
    ctx->pc = 0x7F28F2BCu;
    // 7F28F2BC: bl      0x8000E18C
    {
            ctx->lr = 0x7F28F2C0u;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F28F2C0:
    ctx->pc = 0x7F28F2C0u;
    ctx->downcount -= 10;
    // 7F28F2C0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28F2C4:
    ctx->pc = 0x7F28F2C4u;
    // 7F28F2C4: lwzu     r0, -6152(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6152);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28F2C8:
    ctx->pc = 0x7F28F2C8u;
    // 7F28F2C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28F2CC:
    ctx->pc = 0x7F28F2CCu;
    // 7F28F2CC: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F2D0:
    ctx->pc = 0x7F28F2D0u;
    // 7F28F2D0: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F28F2D4:
    ctx->pc = 0x7F28F2D4u;
    // 7F28F2D4: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F28F2D8:
    ctx->pc = 0x7F28F2D8u;
    // 7F28F2D8: and   r5, r5, r4
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F28F2DC:
    ctx->pc = 0x7F28F2DCu;
    // 7F28F2DC: xor   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F28F2E0:
    ctx->pc = 0x7F28F2E0u;
    // 7F28F2E0: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F2E4:
    ctx->pc = 0x7F28F2E4u;
    // 7F28F2E4: bc    12, 2, 0x7F28F2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F2F0;
        }
    }

label_7F28F2E8:
    ctx->pc = 0x7F28F2E8u;
    ctx->downcount -= 2;
    // 7F28F2E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F2EC:
    ctx->pc = 0x7F28F2ECu;
    // 7F28F2EC: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F2F0:
    ctx->pc = 0x7F28F2F0u;
    ctx->downcount -= 9;
    // 7F28F2F0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28F2F4:
    ctx->pc = 0x7F28F2F4u;
    // 7F28F2F4: lwzu     r0, -6128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6128);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28F2F8:
    ctx->pc = 0x7F28F2F8u;
    // 7F28F2F8: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F2FC:
    ctx->pc = 0x7F28F2FCu;
    // 7F28F2FC: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F28F300:
    ctx->pc = 0x7F28F300u;
    // 7F28F300: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F28F304:
    ctx->pc = 0x7F28F304u;
    // 7F28F304: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F28F308:
    ctx->pc = 0x7F28F308u;
    // 7F28F308: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F28F30C:
    ctx->pc = 0x7F28F30Cu;
    // 7F28F30C: or.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F310:
    ctx->pc = 0x7F28F310u;
    // 7F28F310: bc    12, 2, 0x7F28F31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F31C;
        }
    }

label_7F28F314:
    ctx->pc = 0x7F28F314u;
    ctx->downcount -= 2;
    // 7F28F314: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F318:
    ctx->pc = 0x7F28F318u;
    // 7F28F318: b       0x7F28F330
    {
            goto label_7F28F330;
    }

label_7F28F31C:
    ctx->pc = 0x7F28F31Cu;
    ctx->downcount -= 5;
    // 7F28F31C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F320:
    ctx->pc = 0x7F28F320u;
    // 7F28F320: lwz     r0, -6136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F324:
    ctx->pc = 0x7F28F324u;
    // 7F28F324: and   r3, r31, r0
    {
        ctx->gpr[3] = ctx->gpr[31] & ctx->gpr[0];
    }

label_7F28F328:
    ctx->pc = 0x7F28F328u;
    // 7F28F328: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F28F32C:
    ctx->pc = 0x7F28F32Cu;
    // 7F28F32C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F28F330:
    ctx->pc = 0x7F28F330u;
    ctx->downcount -= 16;
    // 7F28F330: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F334:
    ctx->pc = 0x7F28F334u;
    // 7F28F334: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F338:
    ctx->pc = 0x7F28F338u;
    // 7F28F338: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F33C:
    ctx->pc = 0x7F28F33Cu;
    // 7F28F33C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F340:
    ctx->pc = 0x7F28F340u;
    // 7F28F340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F344:
    ctx->pc = 0x7F28F344u;
    ctx->downcount -= 16;
    // 7F28F344: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F348:
    ctx->pc = 0x7F28F348u;
    // 7F28F348: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F34C:
    ctx->pc = 0x7F28F34Cu;
    // 7F28F34C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F350:
    ctx->pc = 0x7F28F350u;
    // 7F28F350: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F354:
    ctx->pc = 0x7F28F354u;
    // 7F28F354: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F358:
    ctx->pc = 0x7F28F358u;
    // 7F28F358: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28F35Cu;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28F35C:
    ctx->pc = 0x7F28F35Cu;
    ctx->downcount -= 2;
    // 7F28F35C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F360:
    ctx->pc = 0x7F28F360u;
    // 7F28F360: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F28F364u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F28F364:
    ctx->pc = 0x7F28F364u;
    ctx->downcount -= 2;
    // 7F28F364: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F368:
    ctx->pc = 0x7F28F368u;
    // 7F28F368: bl      0x7F019DB4
    {
            ctx->lr = 0x7F28F36Cu;
            ctx->pc = 0x7F019DB4u;
            return;
    }

label_7F28F36C:
    ctx->pc = 0x7F28F36Cu;
    ctx->downcount -= 2;
    // 7F28F36C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F370:
    ctx->pc = 0x7F28F370u;
    // 7F28F370: bc    12, 2, 0x7F28F37C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F37C;
        }
    }

label_7F28F374:
    ctx->pc = 0x7F28F374u;
    ctx->downcount -= 2;
    // 7F28F374: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F378:
    ctx->pc = 0x7F28F378u;
    // 7F28F378: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F37C:
    ctx->pc = 0x7F28F37Cu;
    ctx->downcount -= 3;
    // 7F28F37C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F380:
    ctx->pc = 0x7F28F380u;
    // 7F28F380: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F384:
    ctx->pc = 0x7F28F384u;
    // 7F28F384: bl      0x7F019DE4
    {
            ctx->lr = 0x7F28F388u;
            ctx->pc = 0x7F019DE4u;
            return;
    }

label_7F28F388:
    ctx->pc = 0x7F28F388u;
    ctx->downcount -= 2;
    // 7F28F388: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F38C:
    ctx->pc = 0x7F28F38Cu;
    // 7F28F38C: bc    12, 2, 0x7F28F398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F398;
        }
    }

label_7F28F390:
    ctx->pc = 0x7F28F390u;
    ctx->downcount -= 2;
    // 7F28F390: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F394:
    ctx->pc = 0x7F28F394u;
    // 7F28F394: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F398:
    ctx->pc = 0x7F28F398u;
    ctx->downcount -= 6;
    // 7F28F398: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28F39C:
    ctx->pc = 0x7F28F39Cu;
    // 7F28F39C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F3A0:
    ctx->pc = 0x7F28F3A0u;
    // 7F28F3A0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28F3A4:
    ctx->pc = 0x7F28F3A4u;
    // 7F28F3A4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F3A8:
    ctx->pc = 0x7F28F3A8u;
    // 7F28F3A8: lha     r3, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F3AC:
    ctx->pc = 0x7F28F3ACu;
    // 7F28F3AC: bl      0x7F019DB4
    {
            ctx->lr = 0x7F28F3B0u;
            ctx->pc = 0x7F019DB4u;
            return;
    }

label_7F28F3B0:
    ctx->pc = 0x7F28F3B0u;
    ctx->downcount -= 2;
    // 7F28F3B0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F3B4:
    ctx->pc = 0x7F28F3B4u;
    // 7F28F3B4: bc    12, 2, 0x7F28F3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F3C0;
        }
    }

label_7F28F3B8:
    ctx->pc = 0x7F28F3B8u;
    ctx->downcount -= 2;
    // 7F28F3B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F3BC:
    ctx->pc = 0x7F28F3BCu;
    // 7F28F3BC: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F3C0:
    ctx->pc = 0x7F28F3C0u;
    ctx->downcount -= 6;
    // 7F28F3C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28F3C4:
    ctx->pc = 0x7F28F3C4u;
    // 7F28F3C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F3C8:
    ctx->pc = 0x7F28F3C8u;
    // 7F28F3C8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28F3CC:
    ctx->pc = 0x7F28F3CCu;
    // 7F28F3CC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F3D0:
    ctx->pc = 0x7F28F3D0u;
    // 7F28F3D0: lha     r3, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F3D4:
    ctx->pc = 0x7F28F3D4u;
    // 7F28F3D4: bl      0x7F019DE4
    {
            ctx->lr = 0x7F28F3D8u;
            ctx->pc = 0x7F019DE4u;
            return;
    }

label_7F28F3D8:
    ctx->pc = 0x7F28F3D8u;
    ctx->downcount -= 2;
    // 7F28F3D8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F3DC:
    ctx->pc = 0x7F28F3DCu;
    // 7F28F3DC: bc    12, 2, 0x7F28F3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F3E8;
        }
    }

label_7F28F3E0:
    ctx->pc = 0x7F28F3E0u;
    ctx->downcount -= 2;
    // 7F28F3E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F3E4:
    ctx->pc = 0x7F28F3E4u;
    // 7F28F3E4: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F3E8:
    ctx->pc = 0x7F28F3E8u;
    ctx->downcount -= 8;
    // 7F28F3E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F28F3EC:
    ctx->pc = 0x7F28F3ECu;
    // 7F28F3EC: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F28F3F0:
    ctx->pc = 0x7F28F3F0u;
    // 7F28F3F0: addi    r3, r3, 332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(332);

label_7F28F3F4:
    ctx->pc = 0x7F28F3F4u;
    // 7F28F3F4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28F3F8:
    ctx->pc = 0x7F28F3F8u;
    // 7F28F3F8: lwzx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F3FC:
    ctx->pc = 0x7F28F3FCu;
    // 7F28F3FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F400:
    ctx->pc = 0x7F28F400u;
    // 7F28F400: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28F404:
    ctx->pc = 0x7F28F404u;
    // 7F28F404: bl      0x8000E18C
    {
            ctx->lr = 0x7F28F408u;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F28F408:
    ctx->pc = 0x7F28F408u;
    ctx->downcount -= 10;
    // 7F28F408: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28F40C:
    ctx->pc = 0x7F28F40Cu;
    // 7F28F40C: lwzu     r0, -6144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6144);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28F410:
    ctx->pc = 0x7F28F410u;
    // 7F28F410: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28F414:
    ctx->pc = 0x7F28F414u;
    // 7F28F414: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F418:
    ctx->pc = 0x7F28F418u;
    // 7F28F418: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F28F41C:
    ctx->pc = 0x7F28F41Cu;
    // 7F28F41C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F28F420:
    ctx->pc = 0x7F28F420u;
    // 7F28F420: and   r5, r5, r4
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F28F424:
    ctx->pc = 0x7F28F424u;
    // 7F28F424: xor   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F28F428:
    ctx->pc = 0x7F28F428u;
    // 7F28F428: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F42C:
    ctx->pc = 0x7F28F42Cu;
    // 7F28F42C: bc    12, 2, 0x7F28F438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F438;
        }
    }

label_7F28F430:
    ctx->pc = 0x7F28F430u;
    ctx->downcount -= 2;
    // 7F28F430: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F434:
    ctx->pc = 0x7F28F434u;
    // 7F28F434: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F438:
    ctx->pc = 0x7F28F438u;
    ctx->downcount -= 9;
    // 7F28F438: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F28F43C:
    ctx->pc = 0x7F28F43Cu;
    // 7F28F43C: lwzu     r0, -6120(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6120);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F28F440:
    ctx->pc = 0x7F28F440u;
    // 7F28F440: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F444:
    ctx->pc = 0x7F28F444u;
    // 7F28F444: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F28F448:
    ctx->pc = 0x7F28F448u;
    // 7F28F448: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F28F44C:
    ctx->pc = 0x7F28F44Cu;
    // 7F28F44C: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F28F450:
    ctx->pc = 0x7F28F450u;
    // 7F28F450: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F28F454:
    ctx->pc = 0x7F28F454u;
    // 7F28F454: or.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F458:
    ctx->pc = 0x7F28F458u;
    // 7F28F458: bc    12, 2, 0x7F28F464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F464;
        }
    }

label_7F28F45C:
    ctx->pc = 0x7F28F45Cu;
    ctx->downcount -= 2;
    // 7F28F45C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F460:
    ctx->pc = 0x7F28F460u;
    // 7F28F460: b       0x7F28F478
    {
            goto label_7F28F478;
    }

label_7F28F464:
    ctx->pc = 0x7F28F464u;
    ctx->downcount -= 5;
    // 7F28F464: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F468:
    ctx->pc = 0x7F28F468u;
    // 7F28F468: lwz     r0, -6132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F46C:
    ctx->pc = 0x7F28F46Cu;
    // 7F28F46C: and   r3, r31, r0
    {
        ctx->gpr[3] = ctx->gpr[31] & ctx->gpr[0];
    }

label_7F28F470:
    ctx->pc = 0x7F28F470u;
    // 7F28F470: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F28F474:
    ctx->pc = 0x7F28F474u;
    // 7F28F474: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F28F478:
    ctx->pc = 0x7F28F478u;
    ctx->downcount -= 16;
    // 7F28F478: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F47C:
    ctx->pc = 0x7F28F47Cu;
    // 7F28F47C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F480:
    ctx->pc = 0x7F28F480u;
    // 7F28F480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F484:
    ctx->pc = 0x7F28F484u;
    // 7F28F484: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F488:
    ctx->pc = 0x7F28F488u;
    // 7F28F488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F48C:
    ctx->pc = 0x7F28F48Cu;
    ctx->downcount -= 6;
    // 7F28F48C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F490:
    ctx->pc = 0x7F28F490u;
    // 7F28F490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F494:
    ctx->pc = 0x7F28F494u;
    // 7F28F494: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F28F498:
    ctx->pc = 0x7F28F498u;
    // 7F28F498: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F49C:
    ctx->pc = 0x7F28F49Cu;
    // 7F28F49C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F4A0:
    ctx->pc = 0x7F28F4A0u;
    // 7F28F4A0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28F4A4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28F4A4:
    ctx->pc = 0x7F28F4A4u;
    ctx->downcount -= 2;
    // 7F28F4A4: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F4A8:
    ctx->pc = 0x7F28F4A8u;
    // 7F28F4A8: bc    12, 2, 0x7F28F4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F4D8;
        }
    }

label_7F28F4AC:
    ctx->pc = 0x7F28F4ACu;
    ctx->downcount -= 11;
    // 7F28F4AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28F4B0:
    ctx->pc = 0x7F28F4B0u;
    // 7F28F4B0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F4B4:
    ctx->pc = 0x7F28F4B4u;
    // 7F28F4B4: addi    r5, r4, -6128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6128);

label_7F28F4B8:
    ctx->pc = 0x7F28F4B8u;
    // 7F28F4B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28F4BC:
    ctx->pc = 0x7F28F4BCu;
    // 7F28F4BC: addi    r4, r3, -6120
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6120);

label_7F28F4C0:
    ctx->pc = 0x7F28F4C0u;
    // 7F28F4C0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F4C4:
    ctx->pc = 0x7F28F4C4u;
    // 7F28F4C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F4C8:
    ctx->pc = 0x7F28F4C8u;
    // 7F28F4C8: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F4CC:
    ctx->pc = 0x7F28F4CCu;
    // 7F28F4CC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F4D0:
    ctx->pc = 0x7F28F4D0u;
    // 7F28F4D0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F4D4:
    ctx->pc = 0x7F28F4D4u;
    // 7F28F4D4: b       0x7F28F578
    {
            goto label_7F28F578;
    }

label_7F28F4D8:
    ctx->pc = 0x7F28F4D8u;
    ctx->downcount -= 2;
    // 7F28F4D8: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F28F4DC:
    ctx->pc = 0x7F28F4DCu;
    // 7F28F4DC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28F4E0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28F4E0:
    ctx->pc = 0x7F28F4E0u;
    ctx->downcount -= 3;
    // 7F28F4E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F4E4:
    ctx->pc = 0x7F28F4E4u;
    // 7F28F4E4: addi    r31, r3, -6128
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-6128);

label_7F28F4E8:
    ctx->pc = 0x7F28F4E8u;
    // 7F28F4E8: b       0x7F28F51C
    {
            goto label_7F28F51C;
    }

label_7F28F4EC:
    ctx->downcount -= 1;
    // 7F28F4EC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F4F0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F4F0:
    ctx->downcount -= 5;
    // 7F28F4F0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F4F4:
    // 7F28F4F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F4F8:
    // 7F28F4F8: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F28F4FC:
    // 7F28F4FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28F500:
    // 7F28F500: bl      0x8000E18C
    {
            ctx->lr = 0x7F28F504u;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F28F504:
    ctx->pc = 0x7F28F504u;
    ctx->downcount -= 6;
    // 7F28F504: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F508:
    ctx->pc = 0x7F28F508u;
    // 7F28F508: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F50C:
    // 7F28F50C: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F28F510:
    // 7F28F510: or   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F28F514:
    ctx->pc = 0x7F28F514u;
    // 7F28F514: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F518:
    ctx->pc = 0x7F28F518u;
    // 7F28F518: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F51C:
    ctx->downcount -= 1;
    // 7F28F51C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F28F520u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F28F520:
    ctx->downcount -= 2;
    // 7F28F520: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F524:
    // 7F28F524: bc    4, 2, 0x7F28F4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28F4ECu;
                return;
            }
            goto label_7F28F4EC;
        }
    }

label_7F28F528:
    ctx->pc = 0x7F28F528u;
    ctx->downcount -= 2;
    // 7F28F528: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F28F52C:
    ctx->pc = 0x7F28F52Cu;
    // 7F28F52C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28F530u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28F530:
    ctx->pc = 0x7F28F530u;
    ctx->downcount -= 3;
    // 7F28F530: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F534:
    ctx->pc = 0x7F28F534u;
    // 7F28F534: addi    r31, r3, -6120
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-6120);

label_7F28F538:
    ctx->pc = 0x7F28F538u;
    // 7F28F538: b       0x7F28F568
    {
            goto label_7F28F568;
    }

label_7F28F53C:
    ctx->downcount -= 1;
    // 7F28F53C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F540u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F540:
    ctx->downcount -= 4;
    // 7F28F540: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F544:
    // 7F28F544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F548:
    // 7F28F548: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28F54C:
    // 7F28F54C: bl      0x8000E18C
    {
            ctx->lr = 0x7F28F550u;
            ctx->pc = 0x8000E18Cu;
            return;
    }

label_7F28F550:
    ctx->pc = 0x7F28F550u;
    ctx->downcount -= 6;
    // 7F28F550: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F554:
    ctx->pc = 0x7F28F554u;
    // 7F28F554: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F558:
    // 7F28F558: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F28F55C:
    // 7F28F55C: or   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F28F560:
    ctx->pc = 0x7F28F560u;
    // 7F28F560: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F564:
    ctx->pc = 0x7F28F564u;
    // 7F28F564: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F568:
    ctx->downcount -= 1;
    // 7F28F568: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F28F56Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F28F56C:
    ctx->downcount -= 2;
    // 7F28F56C: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F570:
    // 7F28F570: bc    4, 2, 0x7F28F53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28F53Cu;
                return;
            }
            goto label_7F28F53C;
        }
    }

label_7F28F574:
    ctx->pc = 0x7F28F574u;
    ctx->downcount -= 1;
    // 7F28F574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F578:
    ctx->pc = 0x7F28F578u;
    ctx->downcount -= 6;
    // 7F28F578: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F57C:
    ctx->pc = 0x7F28F57Cu;
    // 7F28F57C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F580:
    ctx->pc = 0x7F28F580u;
    // 7F28F580: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F584:
    ctx->pc = 0x7F28F584u;
    // 7F28F584: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F588:
    ctx->pc = 0x7F28F588u;
    // 7F28F588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F58C:
    ctx->pc = 0x7F28F58Cu;
    ctx->downcount -= 18;
    // 7F28F58C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F590:
    ctx->pc = 0x7F28F590u;
    // 7F28F590: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F594:
    ctx->pc = 0x7F28F594u;
    // 7F28F594: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F598:
    ctx->pc = 0x7F28F598u;
    // 7F28F598: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F59C:
    ctx->pc = 0x7F28F59Cu;
    // 7F28F59C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F5A0:
    ctx->pc = 0x7F28F5A0u;
    // 7F28F5A0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28F5A4:
    ctx->pc = 0x7F28F5A4u;
    // 7F28F5A4: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F28F5A8:
    ctx->pc = 0x7F28F5A8u;
    // 7F28F5A8: bl      0x7F012050
    {
            ctx->lr = 0x7F28F5ACu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F28F5AC:
    ctx->pc = 0x7F28F5ACu;
    ctx->downcount -= 2;
    // 7F28F5AC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F5B0:
    ctx->pc = 0x7F28F5B0u;
    // 7F28F5B0: bc    4, 2, 0x7F28F5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F5EC;
        }
    }

label_7F28F5B4:
    ctx->pc = 0x7F28F5B4u;
    ctx->downcount -= 6;
    // 7F28F5B4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F28F5B8:
    ctx->pc = 0x7F28F5B8u;
    // 7F28F5B8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F28F5BC:
    ctx->pc = 0x7F28F5BCu;
    // 7F28F5BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F5C0:
    ctx->pc = 0x7F28F5C0u;
    // 7F28F5C0: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F5C4:
    ctx->pc = 0x7F28F5C4u;
    // 7F28F5C4: rlwinm. r0, r0, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F5C8:
    ctx->pc = 0x7F28F5C8u;
    // 7F28F5C8: bc    12, 2, 0x7F28F5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F5EC;
        }
    }

label_7F28F5CC:
    ctx->pc = 0x7F28F5CCu;
    ctx->downcount -= 5;
    // 7F28F5CC: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28F5CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28F5D0:
    ctx->pc = 0x7F28F5D0u;
    // 7F28F5D0: cmplwi  r31, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F5D4:
    ctx->pc = 0x7F28F5D4u;
    // 7F28F5D4: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28F5D4u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F28F5D8:
    ctx->pc = 0x7F28F5D8u;
    // 7F28F5D8: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28F5D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F5DC:
    ctx->pc = 0x7F28F5DCu;
    // 7F28F5DC: bc    12, 2, 0x7F28F5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F5EC;
        }
    }

label_7F28F5E0:
    ctx->pc = 0x7F28F5E0u;
    ctx->downcount -= 3;
    // 7F28F5E0: lha     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28F5E4:
    ctx->pc = 0x7F28F5E4u;
    // 7F28F5E4: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F28F5E8:
    ctx->pc = 0x7F28F5E8u;
    // 7F28F5E8: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28F5EC:
    ctx->pc = 0x7F28F5ECu;
    ctx->downcount -= 16;
    // 7F28F5EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F5F0:
    ctx->pc = 0x7F28F5F0u;
    // 7F28F5F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F5F4:
    ctx->pc = 0x7F28F5F4u;
    // 7F28F5F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F5F8:
    ctx->pc = 0x7F28F5F8u;
    // 7F28F5F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F5FC:
    ctx->pc = 0x7F28F5FCu;
    // 7F28F5FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F600:
    ctx->pc = 0x7F28F600u;
    ctx->downcount -= 7;
    // 7F28F600: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F604:
    ctx->pc = 0x7F28F604u;
    // 7F28F604: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F608:
    ctx->pc = 0x7F28F608u;
    // 7F28F608: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F60C:
    ctx->pc = 0x7F28F60Cu;
    // 7F28F60C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F610:
    ctx->pc = 0x7F28F610u;
    // 7F28F610: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F614:
    ctx->pc = 0x7F28F614u;
    // 7F28F614: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F618:
    ctx->pc = 0x7F28F618u;
    // 7F28F618: bc    4, 1, 0x7F28F624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F624;
        }
    }

label_7F28F61C:
    ctx->pc = 0x7F28F61Cu;
    ctx->downcount -= 2;
    // 7F28F61C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F620:
    ctx->pc = 0x7F28F620u;
    // 7F28F620: stw     r4, -6220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6220);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28F624:
    ctx->pc = 0x7F28F624u;
    ctx->downcount -= 7;
    // 7F28F624: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F28F628:
    ctx->pc = 0x7F28F628u;
    // 7F28F628: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F28F62C:
    ctx->pc = 0x7F28F62Cu;
    // 7F28F62C: addi    r3, r3, -180
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-180);

label_7F28F630:
    ctx->pc = 0x7F28F630u;
    // 7F28F630: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28F634:
    ctx->pc = 0x7F28F634u;
    // 7F28F634: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F638:
    ctx->pc = 0x7F28F638u;
    // 7F28F638: rlwinm. r0, r0, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F63C:
    ctx->pc = 0x7F28F63Cu;
    // 7F28F63C: bc    12, 2, 0x7F28F654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F654;
        }
    }

label_7F28F640:
    ctx->pc = 0x7F28F640u;
    ctx->downcount -= 4;
    // 7F28F640: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F644:
    ctx->pc = 0x7F28F644u;
    // 7F28F644: lwz     r0, -6216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F648:
    ctx->pc = 0x7F28F648u;
    // 7F28F648: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F64C:
    ctx->pc = 0x7F28F64Cu;
    // 7F28F64C: bc    4, 1, 0x7F28F654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F654;
        }
    }

label_7F28F650:
    ctx->pc = 0x7F28F650u;
    ctx->downcount -= 1;
    // 7F28F650: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F28F654:
    ctx->pc = 0x7F28F654u;
    ctx->downcount -= 4;
    // 7F28F654: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F658:
    ctx->pc = 0x7F28F658u;
    // 7F28F658: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F65C:
    ctx->pc = 0x7F28F65Cu;
    // 7F28F65C: lwz     r5, -6220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6220);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28F660:
    ctx->pc = 0x7F28F660u;
    // 7F28F660: bc    12, 2, 0x7F28F668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F668;
        }
    }

label_7F28F664:
    ctx->pc = 0x7F28F664u;
    ctx->downcount -= 1;
    // 7F28F664: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F28F668:
    ctx->pc = 0x7F28F668u;
    ctx->downcount -= 4;
    // 7F28F668: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28F66C:
    ctx->pc = 0x7F28F66Cu;
    // 7F28F66C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F670:
    ctx->pc = 0x7F28F670u;
    // 7F28F670: stw     r5, -6216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6216);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F674:
    ctx->pc = 0x7F28F674u;
    // 7F28F674: bl      0x7F01ED58
    {
            ctx->lr = 0x7F28F678u;
            ctx->pc = 0x7F01ED58u;
            return;
    }

label_7F28F678:
    ctx->pc = 0x7F28F678u;
    ctx->downcount -= 4;
    // 7F28F678: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28F67C:
    ctx->pc = 0x7F28F67Cu;
    // 7F28F67C: lwz     r0, -6216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F680:
    ctx->pc = 0x7F28F680u;
    // 7F28F680: cmpw    r0, r3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F684:
    ctx->pc = 0x7F28F684u;
    // 7F28F684: bc    4, 1, 0x7F28F698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F698;
        }
    }

label_7F28F688:
    ctx->pc = 0x7F28F688u;
    ctx->downcount -= 2;
    // 7F28F688: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F68C:
    ctx->pc = 0x7F28F68Cu;
    // 7F28F68C: bl      0x7F01ED58
    {
            ctx->lr = 0x7F28F690u;
            ctx->pc = 0x7F01ED58u;
            return;
    }

label_7F28F690:
    ctx->pc = 0x7F28F690u;
    ctx->downcount -= 2;
    // 7F28F690: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28F694:
    ctx->pc = 0x7F28F694u;
    // 7F28F694: stw     r3, -6216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F698:
    ctx->pc = 0x7F28F698u;
    ctx->downcount -= 6;
    // 7F28F698: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F69C:
    ctx->pc = 0x7F28F69Cu;
    // 7F28F69C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F6A0:
    ctx->pc = 0x7F28F6A0u;
    // 7F28F6A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F6A4:
    ctx->pc = 0x7F28F6A4u;
    // 7F28F6A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F6A8:
    ctx->pc = 0x7F28F6A8u;
    // 7F28F6A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F6AC:
    ctx->pc = 0x7F28F6ACu;
    ctx->downcount -= 6;
    // 7F28F6AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F28F6B0:
    ctx->pc = 0x7F28F6B0u;
    // 7F28F6B0: addi    r4, r3, -6216
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6216);

label_7F28F6B4:
    ctx->pc = 0x7F28F6B4u;
    // 7F28F6B4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F6B8:
    ctx->pc = 0x7F28F6B8u;
    // 7F28F6B8: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F28F6BC:
    ctx->pc = 0x7F28F6BCu;
    // 7F28F6BC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F6C0:
    ctx->pc = 0x7F28F6C0u;
    // 7F28F6C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F6C4:
    ctx->pc = 0x7F28F6C4u;
    ctx->downcount -= 6;
    // 7F28F6C4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F6C8:
    ctx->pc = 0x7F28F6C8u;
    // 7F28F6C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F6CC:
    ctx->pc = 0x7F28F6CCu;
    // 7F28F6CC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F6D0:
    ctx->pc = 0x7F28F6D0u;
    // 7F28F6D0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F6D4:
    ctx->pc = 0x7F28F6D4u;
    // 7F28F6D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F6D8:
    ctx->pc = 0x7F28F6D8u;
    // 7F28F6D8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F6DCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F6DC:
    ctx->pc = 0x7F28F6DCu;
    ctx->downcount -= 10;
    // 7F28F6DC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F28F6E0:
    ctx->pc = 0x7F28F6E0u;
    // 7F28F6E0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28F6E4:
    ctx->pc = 0x7F28F6E4u;
    // 7F28F6E4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F6E8:
    ctx->pc = 0x7F28F6E8u;
    // 7F28F6E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28F6EC:
    ctx->pc = 0x7F28F6ECu;
    // 7F28F6EC: lfd     f1, 26240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28F6ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26240);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F6F0:
    ctx->pc = 0x7F28F6F0u;
    // 7F28F6F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F6F4:
    ctx->pc = 0x7F28F6F4u;
    // 7F28F6F4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F6F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F6F8:
    ctx->pc = 0x7F28F6F8u;
    // 7F28F6F8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28F6F8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28F6FC:
    ctx->pc = 0x7F28F6FCu;
    // 7F28F6FC: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F6FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F700:
    ctx->pc = 0x7F28F700u;
    // 7F28F700: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F704u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F704:
    ctx->pc = 0x7F28F704u;
    ctx->downcount -= 10;
    // 7F28F704: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F28F708:
    ctx->pc = 0x7F28F708u;
    // 7F28F708: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28F70C:
    ctx->pc = 0x7F28F70Cu;
    // 7F28F70C: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F710:
    ctx->pc = 0x7F28F710u;
    // 7F28F710: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28F714:
    ctx->pc = 0x7F28F714u;
    // 7F28F714: lfd     f1, 26240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28F714u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26240);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F718:
    ctx->pc = 0x7F28F718u;
    // 7F28F718: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F71C:
    ctx->pc = 0x7F28F71Cu;
    // 7F28F71C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F71Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F720:
    ctx->pc = 0x7F28F720u;
    // 7F28F720: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28F720u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28F724:
    ctx->pc = 0x7F28F724u;
    // 7F28F724: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F724u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F728:
    ctx->pc = 0x7F28F728u;
    // 7F28F728: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F72Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F72C:
    ctx->pc = 0x7F28F72Cu;
    ctx->downcount -= 18;
    // 7F28F72C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F28F730:
    ctx->pc = 0x7F28F730u;
    // 7F28F730: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28F734:
    ctx->pc = 0x7F28F734u;
    // 7F28F734: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28F738:
    ctx->pc = 0x7F28F738u;
    // 7F28F738: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28F73C:
    ctx->pc = 0x7F28F73Cu;
    // 7F28F73C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28F740:
    ctx->pc = 0x7F28F740u;
    // 7F28F740: lfd     f2, 26240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28F740u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F744:
    ctx->pc = 0x7F28F744u;
    // 7F28F744: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F748:
    ctx->pc = 0x7F28F748u;
    // 7F28F748: lfs     f0, 26248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28F748u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28F74C:
    ctx->pc = 0x7F28F74Cu;
    // 7F28F74C: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F74Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F750:
    ctx->pc = 0x7F28F750u;
    // 7F28F750: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F28F750u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F28F754:
    ctx->pc = 0x7F28F754u;
    // 7F28F754: stfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F754u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28F758:
    ctx->pc = 0x7F28F758u;
    // 7F28F758: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28F758u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F75C:
    ctx->pc = 0x7F28F75Cu;
    // 7F28F75C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F760:
    ctx->pc = 0x7F28F760u;
    // 7F28F760: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F764:
    ctx->pc = 0x7F28F764u;
    // 7F28F764: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F768:
    ctx->pc = 0x7F28F768u;
    // 7F28F768: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F28F76C:
    ctx->pc = 0x7F28F76Cu;
    // 7F28F76C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F770:
    ctx->pc = 0x7F28F770u;
    ctx->downcount -= 6;
    // 7F28F770: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F774:
    ctx->pc = 0x7F28F774u;
    // 7F28F774: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F778:
    ctx->pc = 0x7F28F778u;
    // 7F28F778: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F77C:
    ctx->pc = 0x7F28F77Cu;
    // 7F28F77C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F780:
    ctx->pc = 0x7F28F780u;
    // 7F28F780: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28F784:
    ctx->pc = 0x7F28F784u;
    // 7F28F784: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28F788u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28F788:
    ctx->pc = 0x7F28F788u;
    ctx->downcount -= 2;
    // 7F28F788: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F78C:
    ctx->pc = 0x7F28F78Cu;
    // 7F28F78C: bc    4, 2, 0x7F28F798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F798;
        }
    }

label_7F28F790:
    ctx->pc = 0x7F28F790u;
    ctx->downcount -= 2;
    // 7F28F790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F794:
    ctx->pc = 0x7F28F794u;
    // 7F28F794: b       0x7F28F7A4
    {
            goto label_7F28F7A4;
    }

label_7F28F798:
    ctx->pc = 0x7F28F798u;
    ctx->downcount -= 2;
    // 7F28F798: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F79C:
    ctx->pc = 0x7F28F79Cu;
    // 7F28F79C: bl      0x7F28F6C4
    {
            ctx->lr = 0x7F28F7A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28F6C4u;
                return;
            }
            goto label_7F28F6C4;
    }

label_7F28F7A0:
    ctx->pc = 0x7F28F7A0u;
    ctx->downcount -= 1;
    // 7F28F7A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F7A4:
    ctx->pc = 0x7F28F7A4u;
    ctx->downcount -= 6;
    // 7F28F7A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F7A8:
    ctx->pc = 0x7F28F7A8u;
    // 7F28F7A8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F7AC:
    ctx->pc = 0x7F28F7ACu;
    // 7F28F7AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F7B0:
    ctx->pc = 0x7F28F7B0u;
    // 7F28F7B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F7B4:
    ctx->pc = 0x7F28F7B4u;
    // 7F28F7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F7B8:
    ctx->pc = 0x7F28F7B8u;
    ctx->downcount -= 6;
    // 7F28F7B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F7BC:
    ctx->pc = 0x7F28F7BCu;
    // 7F28F7BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F7C0:
    ctx->pc = 0x7F28F7C0u;
    // 7F28F7C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F7C4:
    ctx->pc = 0x7F28F7C4u;
    // 7F28F7C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F7C8:
    ctx->pc = 0x7F28F7C8u;
    // 7F28F7C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F7CC:
    ctx->pc = 0x7F28F7CCu;
    // 7F28F7CC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F7D0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F7D0:
    ctx->pc = 0x7F28F7D0u;
    ctx->downcount -= 2;
    // 7F28F7D0: sth     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F28F7D4:
    ctx->pc = 0x7F28F7D4u;
    // 7F28F7D4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F7D8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F7D8:
    ctx->pc = 0x7F28F7D8u;
    ctx->downcount -= 2;
    // 7F28F7D8: sth     r3, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F28F7DC:
    ctx->pc = 0x7F28F7DCu;
    // 7F28F7DC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F28F7E0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F28F7E0:
    ctx->pc = 0x7F28F7E0u;
    ctx->downcount -= 9;
    // 7F28F7E0: sth     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F28F7E4:
    ctx->pc = 0x7F28F7E4u;
    // 7F28F7E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28F7E8:
    ctx->pc = 0x7F28F7E8u;
    // 7F28F7E8: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28F7EC:
    ctx->pc = 0x7F28F7ECu;
    // 7F28F7EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F7F0:
    ctx->pc = 0x7F28F7F0u;
    // 7F28F7F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F7F4:
    ctx->pc = 0x7F28F7F4u;
    // 7F28F7F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F7F8:
    ctx->pc = 0x7F28F7F8u;
    // 7F28F7F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F7FC:
    ctx->pc = 0x7F28F7FCu;
    // 7F28F7FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F800:
    ctx->pc = 0x7F28F800u;
    ctx->downcount -= 6;
    // 7F28F800: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F804:
    ctx->pc = 0x7F28F804u;
    // 7F28F804: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F808:
    ctx->pc = 0x7F28F808u;
    // 7F28F808: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F80C:
    ctx->pc = 0x7F28F80Cu;
    // 7F28F80C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28F810:
    ctx->pc = 0x7F28F810u;
    // 7F28F810: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28F814:
    ctx->pc = 0x7F28F814u;
    // 7F28F814: bl      0x7F3C664C
    {
            ctx->lr = 0x7F28F818u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F28F818:
    ctx->pc = 0x7F28F818u;
    ctx->downcount -= 2;
    // 7F28F818: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F81C:
    ctx->pc = 0x7F28F81Cu;
    // 7F28F81C: bc    4, 2, 0x7F28F828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F828;
        }
    }

label_7F28F820:
    ctx->pc = 0x7F28F820u;
    ctx->downcount -= 2;
    // 7F28F820: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F824:
    ctx->pc = 0x7F28F824u;
    // 7F28F824: b       0x7F28F834
    {
            goto label_7F28F834;
    }

label_7F28F828:
    ctx->pc = 0x7F28F828u;
    ctx->downcount -= 2;
    // 7F28F828: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F82C:
    ctx->pc = 0x7F28F82Cu;
    // 7F28F82C: bl      0x7F28F7B8
    {
            ctx->lr = 0x7F28F830u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28F7B8u;
                return;
            }
            goto label_7F28F7B8;
    }

label_7F28F830:
    ctx->pc = 0x7F28F830u;
    ctx->downcount -= 1;
    // 7F28F830: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28F834:
    ctx->pc = 0x7F28F834u;
    ctx->downcount -= 6;
    // 7F28F834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F838:
    ctx->pc = 0x7F28F838u;
    // 7F28F838: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F83C:
    ctx->pc = 0x7F28F83Cu;
    // 7F28F83C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F840:
    ctx->pc = 0x7F28F840u;
    // 7F28F840: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28F844:
    ctx->pc = 0x7F28F844u;
    // 7F28F844: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F848:
    ctx->pc = 0x7F28F848u;
    ctx->downcount -= 19;
    // 7F28F848: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F84C:
    ctx->pc = 0x7F28F84Cu;
    // 7F28F84C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F850:
    ctx->pc = 0x7F28F850u;
    // 7F28F850: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F854:
    ctx->pc = 0x7F28F854u;
    // 7F28F854: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F858:
    ctx->pc = 0x7F28F858u;
    // 7F28F858: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F85C:
    ctx->pc = 0x7F28F85Cu;
    // 7F28F85C: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28F860:
    ctx->pc = 0x7F28F860u;
    // 7F28F860: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F864:
    ctx->pc = 0x7F28F864u;
    // 7F28F864: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F868:
    ctx->pc = 0x7F28F868u;
    // 7F28F868: bc    12, 1, 0x7F28F874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F874;
        }
    }

label_7F28F86C:
    ctx->pc = 0x7F28F86Cu;
    ctx->downcount -= 1;
    // 7F28F86C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F28F870u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F28F870:
    ctx->pc = 0x7F28F870u;
    ctx->downcount -= 1;
    // 7F28F870: b       0x7F28F964
    {
            goto label_7F28F964;
    }

label_7F28F874:
    ctx->pc = 0x7F28F874u;
    ctx->downcount -= 7;
    // 7F28F874: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F878:
    ctx->pc = 0x7F28F878u;
    // 7F28F878: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28F87C:
    ctx->pc = 0x7F28F87Cu;
    // 7F28F87C: lwz     r4, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28F880:
    ctx->pc = 0x7F28F880u;
    // 7F28F880: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F28F884:
    ctx->pc = 0x7F28F884u;
    // 7F28F884: xor   r5, r4, r5
    {
        ctx->gpr[5] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F28F888:
    ctx->pc = 0x7F28F888u;
    // 7F28F888: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F88C:
    ctx->pc = 0x7F28F88Cu;
    // 7F28F88C: bc    12, 2, 0x7F28F8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F8B0;
        }
    }

label_7F28F890:
    ctx->pc = 0x7F28F890u;
    ctx->downcount -= 3;
    // 7F28F890: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28F894:
    ctx->pc = 0x7F28F894u;
    // 7F28F894: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28F898:
    ctx->pc = 0x7F28F898u;
    // 7F28F898: bl      0x7F012018
    {
            ctx->lr = 0x7F28F89Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28F89C:
    ctx->pc = 0x7F28F89Cu;
    ctx->downcount -= 5;
    // 7F28F89C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28F8A0:
    ctx->pc = 0x7F28F8A0u;
    // 7F28F8A0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28F8A4:
    ctx->pc = 0x7F28F8A4u;
    // 7F28F8A4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28F8A8:
    ctx->pc = 0x7F28F8A8u;
    // 7F28F8A8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F8AC:
    ctx->pc = 0x7F28F8ACu;
    // 7F28F8AC: bc    12, 2, 0x7F28F964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F964;
        }
    }

label_7F28F8B0:
    ctx->pc = 0x7F28F8B0u;
    ctx->downcount -= 3;
    // 7F28F8B0: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F8B4:
    ctx->pc = 0x7F28F8B4u;
    // 7F28F8B4: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F8B8:
    ctx->pc = 0x7F28F8B8u;
    // 7F28F8B8: bc    12, 2, 0x7F28F8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F8C8;
        }
    }

label_7F28F8BC:
    ctx->pc = 0x7F28F8BCu;
    ctx->downcount -= 3;
    // 7F28F8BC: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F8C0:
    ctx->pc = 0x7F28F8C0u;
    // 7F28F8C0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F28F8C4:
    ctx->pc = 0x7F28F8C4u;
    // 7F28F8C4: b       0x7F28F8CC
    {
            goto label_7F28F8CC;
    }

label_7F28F8C8:
    ctx->pc = 0x7F28F8C8u;
    ctx->downcount -= 1;
    // 7F28F8C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28F8CC:
    ctx->pc = 0x7F28F8CCu;
    ctx->downcount -= 5;
    // 7F28F8CC: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F8D0:
    ctx->pc = 0x7F28F8D0u;
    // 7F28F8D0: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F8D4:
    ctx->pc = 0x7F28F8D4u;
    // 7F28F8D4: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F28F8D8:
    ctx->pc = 0x7F28F8D8u;
    // 7F28F8D8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28F8DC:
    ctx->pc = 0x7F28F8DCu;
    // 7F28F8DC: bc    12, 2, 0x7F28F964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28F964;
        }
    }

label_7F28F8E0:
    ctx->pc = 0x7F28F8E0u;
    ctx->downcount -= 1;
    // 7F28F8E0: bl      0x800147F8
    {
            ctx->lr = 0x7F28F8E4u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F28F8E4:
    ctx->pc = 0x7F28F8E4u;
    ctx->downcount -= 58;
    // 7F28F8E4: divw   r5, r3, r31
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F28F8E8:
    ctx->pc = 0x7F28F8E8u;
    // 7F28F8E8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28F8EC:
    ctx->pc = 0x7F28F8ECu;
    // 7F28F8EC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F8F0:
    ctx->pc = 0x7F28F8F0u;
    // 7F28F8F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28F8F4:
    ctx->pc = 0x7F28F8F4u;
    // 7F28F8F4: lfd     f1, 26240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28F8F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26240);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F8F8:
    ctx->pc = 0x7F28F8F8u;
    // 7F28F8F8: mullw   r0, r5, r31
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_7F28F8FC:
    ctx->pc = 0x7F28F8FCu;
    // 7F28F8FC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F28F900:
    ctx->pc = 0x7F28F900u;
    // 7F28F900: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F28F904:
    ctx->pc = 0x7F28F904u;
    // 7F28F904: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F28F908:
    ctx->pc = 0x7F28F908u;
    // 7F28F908: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F28F90C:
    ctx->pc = 0x7F28F90Cu;
    // 7F28F90C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F910:
    ctx->pc = 0x7F28F910u;
    // 7F28F910: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F914:
    ctx->pc = 0x7F28F914u;
    // 7F28F914: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28F914u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28F918:
    ctx->pc = 0x7F28F918u;
    // 7F28F918: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F91C:
    ctx->pc = 0x7F28F91Cu;
    // 7F28F91C: bl      0x800147F8
    {
            ctx->lr = 0x7F28F920u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F28F920:
    ctx->pc = 0x7F28F920u;
    ctx->downcount -= 60;
    // 7F28F920: divw   r6, r3, r31
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F28F924:
    ctx->pc = 0x7F28F924u;
    // 7F28F924: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F28F928:
    ctx->pc = 0x7F28F928u;
    // 7F28F928: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F92C:
    ctx->pc = 0x7F28F92Cu;
    // 7F28F92C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F28F930:
    ctx->pc = 0x7F28F930u;
    // 7F28F930: lfd     f1, 26240(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28F930u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26240);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F934:
    ctx->pc = 0x7F28F934u;
    // 7F28F934: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F28F938:
    ctx->pc = 0x7F28F938u;
    // 7F28F938: mullw   r0, r6, r31
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_7F28F93C:
    ctx->pc = 0x7F28F93Cu;
    // 7F28F93C: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F28F940:
    ctx->pc = 0x7F28F940u;
    // 7F28F940: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F28F944:
    ctx->pc = 0x7F28F944u;
    // 7F28F944: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F28F948:
    ctx->pc = 0x7F28F948u;
    // 7F28F948: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F28F94C:
    ctx->pc = 0x7F28F94Cu;
    // 7F28F94C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F950:
    ctx->pc = 0x7F28F950u;
    // 7F28F950: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28F954:
    ctx->pc = 0x7F28F954u;
    // 7F28F954: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28F954u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28F958:
    ctx->pc = 0x7F28F958u;
    // 7F28F958: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28F958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28F95C:
    ctx->pc = 0x7F28F95Cu;
    // 7F28F95C: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28F960:
    ctx->pc = 0x7F28F960u;
    // 7F28F960: bl      0x7F013490
    {
            ctx->lr = 0x7F28F964u;
            ctx->pc = 0x7F013490u;
            return;
    }

label_7F28F964:
    ctx->pc = 0x7F28F964u;
    ctx->downcount -= 16;
    // 7F28F964: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28F968:
    ctx->pc = 0x7F28F968u;
    // 7F28F968: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F96C:
    ctx->pc = 0x7F28F96Cu;
    // 7F28F96C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28F970:
    ctx->pc = 0x7F28F970u;
    // 7F28F970: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F28F974:
    ctx->pc = 0x7F28F974u;
    // 7F28F974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28F978:
    ctx->pc = 0x7F28F978u;
    ctx->downcount -= 22;
    // 7F28F978: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28F97C:
    ctx->pc = 0x7F28F97Cu;
    // 7F28F97C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28F980:
    ctx->pc = 0x7F28F980u;
    // 7F28F980: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28F984:
    ctx->pc = 0x7F28F984u;
    // 7F28F984: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F988:
    ctx->pc = 0x7F28F988u;
    // 7F28F988: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28F98C:
    ctx->pc = 0x7F28F98Cu;
    // 7F28F98C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28F990:
    ctx->pc = 0x7F28F990u;
    // 7F28F990: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F28F994:
    ctx->pc = 0x7F28F994u;
    // 7F28F994: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F28F998:
    ctx->pc = 0x7F28F998u;
    // 7F28F998: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F28F99C:
    ctx->pc = 0x7F28F99Cu;
    // 7F28F99C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F28F9A0:
    ctx->pc = 0x7F28F9A0u;
    // 7F28F9A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28F9A4:
    ctx->pc = 0x7F28F9A4u;
    // 7F28F9A4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F28F9A8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F28F9A8:
    ctx->pc = 0x7F28F9A8u;
    ctx->downcount -= 2;
    // 7F28F9A8: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28F9AC:
    ctx->pc = 0x7F28F9ACu;
    // 7F28F9AC: bc    4, 2, 0x7F28F9B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28F9B8;
        }
    }

label_7F28F9B0:
    ctx->pc = 0x7F28F9B0u;
    ctx->downcount -= 2;
    // 7F28F9B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28F9B4:
    ctx->pc = 0x7F28F9B4u;
    // 7F28F9B4: b       0x7F28FA00
    {
            goto label_7F28FA00;
    }

label_7F28F9B8:
    ctx->pc = 0x7F28F9B8u;
    ctx->downcount -= 4;
    // 7F28F9B8: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28F9BC:
    ctx->pc = 0x7F28F9BCu;
    // 7F28F9BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28F9C0:
    ctx->pc = 0x7F28F9C0u;
    // 7F28F9C0: addi    r4, r4, -1976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1976);

label_7F28F9C4:
    ctx->pc = 0x7F28F9C4u;
    // 7F28F9C4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F28F9C8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F28F9C8:
    ctx->pc = 0x7F28F9C8u;
    ctx->downcount -= 14;
    // 7F28F9C8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28F9CC:
    ctx->pc = 0x7F28F9CCu;
    // 7F28F9CC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F28F9D0:
    ctx->pc = 0x7F28F9D0u;
    // 7F28F9D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28F9D4:
    ctx->pc = 0x7F28F9D4u;
    // 7F28F9D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28F9D8:
    ctx->pc = 0x7F28F9D8u;
    // 7F28F9D8: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F28F9DC:
    ctx->pc = 0x7F28F9DCu;
    // 7F28F9DC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F28F9E0:
    ctx->pc = 0x7F28F9E0u;
    // 7F28F9E0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F28F9E4:
    ctx->pc = 0x7F28F9E4u;
    // 7F28F9E4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F9E8:
    ctx->pc = 0x7F28F9E8u;
    // 7F28F9E8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F9EC:
    ctx->pc = 0x7F28F9ECu;
    // 7F28F9EC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28F9F0:
    ctx->pc = 0x7F28F9F0u;
    // 7F28F9F0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28F9F4:
    ctx->pc = 0x7F28F9F4u;
    // 7F28F9F4: stw     r28, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F28F9F8:
    ctx->pc = 0x7F28F9F8u;
    // 7F28F9F8: stw     r29, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F28F9FC:
    ctx->pc = 0x7F28F9FCu;
    // 7F28F9FC: stw     r30, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F28FA00:
    ctx->pc = 0x7F28FA00u;
    ctx->downcount -= 16;
    // 7F28FA00: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28FA04:
    ctx->pc = 0x7F28FA04u;
    // 7F28FA04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FA08:
    ctx->pc = 0x7F28FA08u;
    // 7F28FA08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FA0C:
    ctx->pc = 0x7F28FA0Cu;
    // 7F28FA0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28FA10:
    ctx->pc = 0x7F28FA10u;
    // 7F28FA10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FA14:
    ctx->pc = 0x7F28FA14u;
    ctx->downcount -= 16;
    // 7F28FA14: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FA18:
    ctx->pc = 0x7F28FA18u;
    // 7F28FA18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FA1C:
    ctx->pc = 0x7F28FA1Cu;
    // 7F28FA1C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FA20:
    ctx->pc = 0x7F28FA20u;
    // 7F28FA20: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28FA24:
    ctx->pc = 0x7F28FA24u;
    // 7F28FA24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28FA28:
    ctx->pc = 0x7F28FA28u;
    // 7F28FA28: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28FA2Cu;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28FA2C:
    ctx->pc = 0x7F28FA2Cu;
    ctx->downcount -= 9;
    // 7F28FA2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28FA30:
    ctx->pc = 0x7F28FA30u;
    // 7F28FA30: lha     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FA34:
    ctx->pc = 0x7F28FA34u;
    // 7F28FA34: addi    r4, r31, -6
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-6);

label_7F28FA38:
    ctx->pc = 0x7F28FA38u;
    // 7F28FA38: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F28FA3C:
    ctx->pc = 0x7F28FA3Cu;
    // 7F28FA3C: addic   r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F28FA40:
    ctx->pc = 0x7F28FA40u;
    // 7F28FA40: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FA44:
    ctx->pc = 0x7F28FA44u;
    // 7F28FA44: subfe   r0, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F28FA48:
    ctx->pc = 0x7F28FA48u;
    // 7F28FA48: and   r29, r3, r0
    {
        ctx->gpr[29] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F28FA4C:
    ctx->pc = 0x7F28FA4Cu;
    // 7F28FA4C: bc    12, 2, 0x7F28FB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FB60;
        }
    }

label_7F28FA50:
    ctx->pc = 0x7F28FA50u;
    ctx->downcount -= 3;
    // 7F28FA50: lha     r4, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FA54:
    ctx->pc = 0x7F28FA54u;
    // 7F28FA54: extsh. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FA58:
    ctx->pc = 0x7F28FA58u;
    // 7F28FA58: bc    4, 0, 0x7F28FAB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FAB4;
        }
    }

label_7F28FA5C:
    ctx->pc = 0x7F28FA5Cu;
    ctx->downcount -= 24;
    // 7F28FA5C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FA60:
    ctx->pc = 0x7F28FA60u;
    // 7F28FA60: lfs     f2, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28FA60u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F28FA64:
    ctx->pc = 0x7F28FA64u;
    // 7F28FA64: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FA68:
    ctx->pc = 0x7F28FA68u;
    // 7F28FA68: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28FA68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F28FA6C:
    ctx->pc = 0x7F28FA6Cu;
    // 7F28FA6C: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28FA6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28FA70:
    ctx->pc = 0x7F28FA70u;
    // 7F28FA70: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28FA70u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F28FA74:
    ctx->pc = 0x7F28FA74u;
    // 7F28FA74: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28FA74u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F28FA78:
    ctx->pc = 0x7F28FA78u;
    // 7F28FA78: bc    4, 1, 0x7F28FA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FA88;
        }
    }

label_7F28FA7C:
    ctx->pc = 0x7F28FA7Cu;
    ctx->downcount -= 3;
    // 7F28FA7C: ori     r0, r29, 0x0002
    ctx->gpr[0] = ctx->gpr[29] | 0x0002u;

label_7F28FA80:
    ctx->pc = 0x7F28FA80u;
    // 7F28FA80: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FA84:
    ctx->pc = 0x7F28FA84u;
    // 7F28FA84: b       0x7F28FAAC
    {
            goto label_7F28FAAC;
    }

label_7F28FA88:
    ctx->pc = 0x7F28FA88u;
    ctx->downcount -= 5;
    // 7F28FA88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F28FA8C:
    ctx->pc = 0x7F28FA8Cu;
    // 7F28FA8C: lfs     f0, 26252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28FA8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28FA90:
    ctx->pc = 0x7F28FA90u;
    // 7F28FA90: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28FA90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F28FA94:
    ctx->pc = 0x7F28FA94u;
    // 7F28FA94: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F28FA98:
    ctx->pc = 0x7F28FA98u;
    // 7F28FA98: bc    4, 2, 0x7F28FAAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FAAC;
        }
    }

label_7F28FA9C:
    ctx->pc = 0x7F28FA9Cu;
    ctx->downcount -= 2;
    // 7F28FA9C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28FA9Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F28FAA0:
    ctx->pc = 0x7F28FAA0u;
    // 7F28FAA0: bc    4, 0, 0x7F28FAAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FAAC;
        }
    }

label_7F28FAA4:
    ctx->pc = 0x7F28FAA4u;
    ctx->downcount -= 2;
    // 7F28FAA4: ori     r0, r29, 0x0001
    ctx->gpr[0] = ctx->gpr[29] | 0x0001u;

label_7F28FAA8:
    ctx->pc = 0x7F28FAA8u;
    // 7F28FAA8: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FAAC:
    ctx->pc = 0x7F28FAACu;
    ctx->downcount -= 2;
    // 7F28FAAC: stfs     f1, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28FAACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F28FAB0:
    ctx->pc = 0x7F28FAB0u;
    // 7F28FAB0: b       0x7F28FB54
    {
            goto label_7F28FB54;
    }

label_7F28FAB4:
    ctx->pc = 0x7F28FAB4u;
    ctx->downcount -= 3;
    // 7F28FAB4: lha     r0, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FAB8:
    ctx->pc = 0x7F28FAB8u;
    // 7F28FAB8: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FABC:
    ctx->pc = 0x7F28FABCu;
    // 7F28FABC: bc    4, 0, 0x7F28FB0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FB0C;
        }
    }

label_7F28FAC0:
    ctx->pc = 0x7F28FAC0u;
    ctx->downcount -= 6;
    // 7F28FAC0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FAC4:
    ctx->pc = 0x7F28FAC4u;
    // 7F28FAC4: mulli   r4, r4, 5
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)5);

label_7F28FAC8:
    ctx->pc = 0x7F28FAC8u;
    // 7F28FAC8: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FACC:
    ctx->pc = 0x7F28FACCu;
    // 7F28FACC: bl      0x7F28FBE8
    {
            ctx->lr = 0x7F28FAD0u;
            goto label_7F28FBE8;
    }

label_7F28FAD0:
    ctx->pc = 0x7F28FAD0u;
    ctx->downcount -= 2;
    // 7F28FAD0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FAD4:
    ctx->pc = 0x7F28FAD4u;
    // 7F28FAD4: bc    12, 2, 0x7F28FAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FAE4;
        }
    }

label_7F28FAD8:
    ctx->pc = 0x7F28FAD8u;
    ctx->downcount -= 3;
    // 7F28FAD8: ori     r0, r29, 0x0002
    ctx->gpr[0] = ctx->gpr[29] | 0x0002u;

label_7F28FADC:
    ctx->pc = 0x7F28FADCu;
    // 7F28FADC: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FAE0:
    ctx->pc = 0x7F28FAE0u;
    // 7F28FAE0: b       0x7F28FB54
    {
            goto label_7F28FB54;
    }

label_7F28FAE4:
    ctx->pc = 0x7F28FAE4u;
    ctx->downcount -= 7;
    // 7F28FAE4: lha     r0, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FAE8:
    ctx->pc = 0x7F28FAE8u;
    // 7F28FAE8: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FAEC:
    ctx->pc = 0x7F28FAECu;
    // 7F28FAEC: mulli   r4, r0, 5
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F28FAF0:
    ctx->pc = 0x7F28FAF0u;
    // 7F28FAF0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FAF4:
    ctx->pc = 0x7F28FAF4u;
    // 7F28FAF4: bl      0x7F28FBE8
    {
            ctx->lr = 0x7F28FAF8u;
            goto label_7F28FBE8;
    }

label_7F28FAF8:
    ctx->pc = 0x7F28FAF8u;
    ctx->downcount -= 2;
    // 7F28FAF8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FAFC:
    ctx->pc = 0x7F28FAFCu;
    // 7F28FAFC: bc    12, 2, 0x7F28FB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FB54;
        }
    }

label_7F28FB00:
    ctx->pc = 0x7F28FB00u;
    ctx->downcount -= 3;
    // 7F28FB00: ori     r0, r29, 0x0001
    ctx->gpr[0] = ctx->gpr[29] | 0x0001u;

label_7F28FB04:
    ctx->pc = 0x7F28FB04u;
    // 7F28FB04: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FB08:
    ctx->pc = 0x7F28FB08u;
    // 7F28FB08: b       0x7F28FB54
    {
            goto label_7F28FB54;
    }

label_7F28FB0C:
    ctx->pc = 0x7F28FB0Cu;
    ctx->downcount -= 6;
    // 7F28FB0C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FB10:
    ctx->pc = 0x7F28FB10u;
    // 7F28FB10: mulli   r4, r0, 5
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F28FB14:
    ctx->pc = 0x7F28FB14u;
    // 7F28FB14: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FB18:
    ctx->pc = 0x7F28FB18u;
    // 7F28FB18: bl      0x7F28FBE8
    {
            ctx->lr = 0x7F28FB1Cu;
            goto label_7F28FBE8;
    }

label_7F28FB1C:
    ctx->pc = 0x7F28FB1Cu;
    ctx->downcount -= 2;
    // 7F28FB1C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FB20:
    ctx->pc = 0x7F28FB20u;
    // 7F28FB20: bc    12, 2, 0x7F28FB30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FB30;
        }
    }

label_7F28FB24:
    ctx->pc = 0x7F28FB24u;
    ctx->downcount -= 3;
    // 7F28FB24: ori     r0, r29, 0x0001
    ctx->gpr[0] = ctx->gpr[29] | 0x0001u;

label_7F28FB28:
    ctx->pc = 0x7F28FB28u;
    // 7F28FB28: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FB2C:
    ctx->pc = 0x7F28FB2Cu;
    // 7F28FB2C: b       0x7F28FB54
    {
            goto label_7F28FB54;
    }

label_7F28FB30:
    ctx->pc = 0x7F28FB30u;
    ctx->downcount -= 7;
    // 7F28FB30: lha     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FB34:
    ctx->pc = 0x7F28FB34u;
    // 7F28FB34: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FB38:
    ctx->pc = 0x7F28FB38u;
    // 7F28FB38: mulli   r4, r0, 5
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F28FB3C:
    ctx->pc = 0x7F28FB3Cu;
    // 7F28FB3C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FB40:
    ctx->pc = 0x7F28FB40u;
    // 7F28FB40: bl      0x7F28FBE8
    {
            ctx->lr = 0x7F28FB44u;
            goto label_7F28FBE8;
    }

label_7F28FB44:
    ctx->pc = 0x7F28FB44u;
    ctx->downcount -= 2;
    // 7F28FB44: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FB48:
    ctx->pc = 0x7F28FB48u;
    // 7F28FB48: bc    12, 2, 0x7F28FB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FB54;
        }
    }

label_7F28FB4C:
    ctx->pc = 0x7F28FB4Cu;
    ctx->downcount -= 2;
    // 7F28FB4C: ori     r0, r29, 0x0002
    ctx->gpr[0] = ctx->gpr[29] | 0x0002u;

label_7F28FB50:
    ctx->pc = 0x7F28FB50u;
    // 7F28FB50: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FB54:
    ctx->pc = 0x7F28FB54u;
    ctx->downcount -= 3;
    // 7F28FB54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28FB58:
    ctx->pc = 0x7F28FB58u;
    // 7F28FB58: sth     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28FB5C:
    ctx->pc = 0x7F28FB5Cu;
    // 7F28FB5C: b       0x7F28FBA8
    {
            goto label_7F28FBA8;
    }

label_7F28FB60:
    ctx->pc = 0x7F28FB60u;
    ctx->downcount -= 52;
    // 7F28FB60: lha     r5, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FB64:
    ctx->pc = 0x7F28FB64u;
    // 7F28FB64: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F28FB68:
    ctx->pc = 0x7F28FB68u;
    // 7F28FB68: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_7F28FB6C:
    ctx->pc = 0x7F28FB6Cu;
    // 7F28FB6C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F28FB70:
    ctx->pc = 0x7F28FB70u;
    // 7F28FB70: sth     r0, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28FB74:
    ctx->pc = 0x7F28FB74u;
    // 7F28FB74: extsh r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F28FB78:
    ctx->pc = 0x7F28FB78u;
    // 7F28FB78: lwz     r0, 20760(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FB7C:
    ctx->pc = 0x7F28FB7Cu;
    // 7F28FB7C: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F28FB80:
    ctx->pc = 0x7F28FB80u;
    // 7F28FB80: mulli   r0, r0, 10
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_7F28FB84:
    ctx->pc = 0x7F28FB84u;
    // 7F28FB84: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FB88:
    ctx->pc = 0x7F28FB88u;
    // 7F28FB88: bc    12, 0, 0x7F28FBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FBA8;
        }
    }

label_7F28FB8C:
    ctx->pc = 0x7F28FB8Cu;
    ctx->downcount -= 7;
    // 7F28FB8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28FB90:
    ctx->pc = 0x7F28FB90u;
    // 7F28FB90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28FB94:
    ctx->pc = 0x7F28FB94u;
    // 7F28FB94: addi    r5, r4, 26232
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(26232);

label_7F28FB98:
    ctx->pc = 0x7F28FB98u;
    // 7F28FB98: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F28FB9C:
    ctx->pc = 0x7F28FB9Cu;
    // 7F28FB9C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28FB9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28FBA0:
    ctx->pc = 0x7F28FBA0u;
    // 7F28FBA0: stfs     f0, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F28FBA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28FBA4:
    ctx->pc = 0x7F28FBA4u;
    // 7F28FBA4: bl      0x7F3C8998
    {
            ctx->lr = 0x7F28FBA8u;
            ctx->pc = 0x7F3C8998u;
            return;
    }

label_7F28FBA8:
    ctx->pc = 0x7F28FBA8u;
    ctx->downcount -= 3;
    // 7F28FBA8: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FBAC:
    ctx->pc = 0x7F28FBACu;
    // 7F28FBAC: cmpw    r0, r31
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FBB0:
    ctx->pc = 0x7F28FBB0u;
    // 7F28FBB0: bc    12, 2, 0x7F28FBD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FBD0;
        }
    }

label_7F28FBB4:
    ctx->pc = 0x7F28FBB4u;
    ctx->downcount -= 2;
    // 7F28FBB4: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FBB8:
    ctx->pc = 0x7F28FBB8u;
    // 7F28FBB8: bc    12, 2, 0x7F28FBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FBC4;
        }
    }

label_7F28FBBC:
    ctx->pc = 0x7F28FBBCu;
    ctx->downcount -= 2;
    // 7F28FBBC: cmpwi   r31, 6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FBC0:
    ctx->pc = 0x7F28FBC0u;
    // 7F28FBC0: bc    4, 2, 0x7F28FBD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FBD0;
        }
    }

label_7F28FBC4:
    ctx->pc = 0x7F28FBC4u;
    ctx->downcount -= 3;
    // 7F28FBC4: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FBC8:
    ctx->pc = 0x7F28FBC8u;
    // 7F28FBC8: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F28FBCC:
    ctx->pc = 0x7F28FBCCu;
    // 7F28FBCC: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FBD0:
    ctx->pc = 0x7F28FBD0u;
    ctx->downcount -= 17;
    // 7F28FBD0: stw     r31, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F28FBD4:
    ctx->pc = 0x7F28FBD4u;
    // 7F28FBD4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28FBD8:
    ctx->pc = 0x7F28FBD8u;
    // 7F28FBD8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FBDC:
    ctx->pc = 0x7F28FBDCu;
    // 7F28FBDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FBE0:
    ctx->pc = 0x7F28FBE0u;
    // 7F28FBE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28FBE4:
    ctx->pc = 0x7F28FBE4u;
    // 7F28FBE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FBE8:
    ctx->pc = 0x7F28FBE8u;
    ctx->downcount -= 4;
    // 7F28FBE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FBEC:
    ctx->pc = 0x7F28FBECu;
    // 7F28FBEC: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FBF0:
    ctx->pc = 0x7F28FBF0u;
    // 7F28FBF0: cmpw    r0, r4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FBF4:
    ctx->pc = 0x7F28FBF4u;
    // 7F28FBF4: bc    12, 0, 0x7F28FC00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FC00;
        }
    }

label_7F28FBF8:
    ctx->pc = 0x7F28FBF8u;
    ctx->downcount -= 2;
    // 7F28FBF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FBFC:
    ctx->pc = 0x7F28FBFCu;
    // 7F28FBFC: b       0x7F28FC28
    {
            goto label_7F28FC28;
    }

label_7F28FC00:
    ctx->pc = 0x7F28FC00u;
    ctx->downcount -= 6;
    // 7F28FC00: lfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28FC00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28FC04:
    ctx->pc = 0x7F28FC04u;
    // 7F28FC04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F28FC04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F28FC08:
    ctx->pc = 0x7F28FC08u;
    // 7F28FC08: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28FC08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F28FC0C:
    ctx->pc = 0x7F28FC0Cu;
    // 7F28FC0C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FC10:
    ctx->pc = 0x7F28FC10u;
    // 7F28FC10: cmpw    r0, r4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FC14:
    ctx->pc = 0x7F28FC14u;
    // 7F28FC14: bc    12, 0, 0x7F28FC24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FC24;
        }
    }

label_7F28FC18:
    ctx->pc = 0x7F28FC18u;
    ctx->downcount -= 3;
    // 7F28FC18: stw     r4, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28FC1C:
    ctx->pc = 0x7F28FC1Cu;
    // 7F28FC1C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F28FC20:
    ctx->pc = 0x7F28FC20u;
    // 7F28FC20: b       0x7F28FC28
    {
            goto label_7F28FC28;
    }

label_7F28FC24:
    ctx->pc = 0x7F28FC24u;
    ctx->downcount -= 1;
    // 7F28FC24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FC28:
    ctx->pc = 0x7F28FC28u;
    ctx->downcount -= 2;
    // 7F28FC28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28FC2C:
    ctx->pc = 0x7F28FC2Cu;
    // 7F28FC2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FC30:
    ctx->pc = 0x7F28FC30u;
    ctx->downcount -= 21;
    // 7F28FC30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FC34:
    ctx->pc = 0x7F28FC34u;
    // 7F28FC34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FC38:
    ctx->pc = 0x7F28FC38u;
    // 7F28FC38: li      r5, 76
    ctx->gpr[5] = (u32)(s32)(76);

label_7F28FC3C:
    ctx->pc = 0x7F28FC3Cu;
    // 7F28FC3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28FC40:
    ctx->pc = 0x7F28FC40u;
    // 7F28FC40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FC44:
    ctx->pc = 0x7F28FC44u;
    // 7F28FC44: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28FC48:
    ctx->pc = 0x7F28FC48u;
    // 7F28FC48: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28FC4C:
    ctx->pc = 0x7F28FC4Cu;
    // 7F28FC4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28FC50:
    ctx->pc = 0x7F28FC50u;
    // 7F28FC50: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F28FC54:
    ctx->pc = 0x7F28FC54u;
    // 7F28FC54: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F28FC58:
    ctx->pc = 0x7F28FC58u;
    // 7F28FC58: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F28FC5Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F28FC5C:
    ctx->pc = 0x7F28FC5Cu;
    ctx->downcount -= 2;
    // 7F28FC5C: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FC60:
    ctx->pc = 0x7F28FC60u;
    // 7F28FC60: bc    4, 2, 0x7F28FC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FC6C;
        }
    }

label_7F28FC64:
    ctx->pc = 0x7F28FC64u;
    ctx->downcount -= 2;
    // 7F28FC64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FC68:
    ctx->pc = 0x7F28FC68u;
    // 7F28FC68: b       0x7F28FCF8
    {
            goto label_7F28FCF8;
    }

label_7F28FC6C:
    ctx->pc = 0x7F28FC6Cu;
    ctx->downcount -= 4;
    // 7F28FC6C: lis     r4, 32553
    ctx->gpr[4] = ((u32)(s32)(32553) << 16);

label_7F28FC70:
    ctx->pc = 0x7F28FC70u;
    // 7F28FC70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28FC74:
    ctx->pc = 0x7F28FC74u;
    // 7F28FC74: addi    r4, r4, -1516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1516);

label_7F28FC78:
    ctx->pc = 0x7F28FC78u;
    // 7F28FC78: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F28FC7Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F28FC7C:
    ctx->pc = 0x7F28FC7Cu;
    ctx->downcount -= 17;
    // 7F28FC7C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FC80:
    ctx->pc = 0x7F28FC80u;
    // 7F28FC80: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F28FC84:
    ctx->pc = 0x7F28FC84u;
    // 7F28FC84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28FC88:
    ctx->pc = 0x7F28FC88u;
    // 7F28FC88: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28FC8C:
    ctx->pc = 0x7F28FC8Cu;
    // 7F28FC8C: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F28FC90:
    ctx->pc = 0x7F28FC90u;
    // 7F28FC90: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F28FC94:
    ctx->pc = 0x7F28FC94u;
    // 7F28FC94: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F28FC98:
    ctx->pc = 0x7F28FC98u;
    // 7F28FC98: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F28FC9C:
    ctx->pc = 0x7F28FC9Cu;
    // 7F28FC9C: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F28FCA0:
    ctx->pc = 0x7F28FCA0u;
    // 7F28FCA0: addi    r5, r31, 56
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(56);

label_7F28FCA4:
    ctx->pc = 0x7F28FCA4u;
    // 7F28FCA4: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28FCA8:
    ctx->pc = 0x7F28FCA8u;
    // 7F28FCA8: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28FCAC:
    ctx->pc = 0x7F28FCACu;
    // 7F28FCAC: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F28FCB0:
    ctx->pc = 0x7F28FCB0u;
    // 7F28FCB0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FCB4:
    ctx->pc = 0x7F28FCB4u;
    // 7F28FCB4: lwz     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FCB8:
    ctx->pc = 0x7F28FCB8u;
    // 7F28FCB8: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FCBC:
    ctx->pc = 0x7F28FCBCu;
    // 7F28FCBC: bl      0x7F1F5448
    {
            ctx->lr = 0x7F28FCC0u;
            ctx->pc = 0x7F1F5448u;
            return;
    }

label_7F28FCC0:
    ctx->pc = 0x7F28FCC0u;
    ctx->downcount -= 4;
    // 7F28FCC0: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28FCC4:
    ctx->pc = 0x7F28FCC4u;
    // 7F28FCC4: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28FCC8:
    ctx->pc = 0x7F28FCC8u;
    // 7F28FCC8: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FCCC:
    ctx->pc = 0x7F28FCCCu;
    // 7F28FCCC: bc    4, 2, 0x7F28FCD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FCD8;
        }
    }

label_7F28FCD0:
    ctx->pc = 0x7F28FCD0u;
    ctx->downcount -= 2;
    // 7F28FCD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FCD4:
    ctx->pc = 0x7F28FCD4u;
    // 7F28FCD4: b       0x7F28FCF8
    {
            goto label_7F28FCF8;
    }

label_7F28FCD8:
    ctx->pc = 0x7F28FCD8u;
    ctx->downcount -= 2;
    // 7F28FCD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FCDC:
    ctx->pc = 0x7F28FCDCu;
    // 7F28FCDC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F28FCE0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F28FCE0:
    ctx->pc = 0x7F28FCE0u;
    ctx->downcount -= 3;
    // 7F28FCE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FCE4:
    ctx->pc = 0x7F28FCE4u;
    // 7F28FCE4: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F28FCE8:
    ctx->pc = 0x7F28FCE8u;
    // 7F28FCE8: bl      0x7F3C8998
    {
            ctx->lr = 0x7F28FCECu;
            ctx->pc = 0x7F3C8998u;
            return;
    }

label_7F28FCEC:
    ctx->pc = 0x7F28FCECu;
    ctx->downcount -= 1;
    // 7F28FCEC: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28FCF0u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28FCF0:
    ctx->pc = 0x7F28FCF0u;
    ctx->downcount -= 2;
    // 7F28FCF0: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28FCF4:
    ctx->pc = 0x7F28FCF4u;
    // 7F28FCF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FCF8:
    ctx->pc = 0x7F28FCF8u;
    ctx->downcount -= 16;
    // 7F28FCF8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28FCFC:
    ctx->pc = 0x7F28FCFCu;
    // 7F28FCFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FD00:
    ctx->pc = 0x7F28FD00u;
    // 7F28FD00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FD04:
    ctx->pc = 0x7F28FD04u;
    // 7F28FD04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28FD08:
    ctx->pc = 0x7F28FD08u;
    // 7F28FD08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FD0C:
    ctx->pc = 0x7F28FD0Cu;
    ctx->downcount -= 5;
    // 7F28FD0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FD10:
    ctx->pc = 0x7F28FD10u;
    // 7F28FD10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FD14:
    ctx->pc = 0x7F28FD14u;
    // 7F28FD14: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FD18:
    ctx->pc = 0x7F28FD18u;
    // 7F28FD18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FD1C:
    ctx->pc = 0x7F28FD1Cu;
    // 7F28FD1C: bc    12, 2, 0x7F28FD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FD54;
        }
    }

label_7F28FD20:
    ctx->pc = 0x7F28FD20u;
    ctx->downcount -= 8;
    // 7F28FD20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28FD24:
    ctx->pc = 0x7F28FD24u;
    // 7F28FD24: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FD28:
    ctx->pc = 0x7F28FD28u;
    // 7F28FD28: sth     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28FD2C:
    ctx->pc = 0x7F28FD2Cu;
    // 7F28FD2C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F28FD30:
    ctx->pc = 0x7F28FD30u;
    // 7F28FD30: sth     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F28FD34:
    ctx->pc = 0x7F28FD34u;
    // 7F28FD34: sth     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F28FD38:
    ctx->pc = 0x7F28FD38u;
    // 7F28FD38: sth     r6, 70(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F28FD3C:
    ctx->pc = 0x7F28FD3Cu;
    // 7F28FD3C: bc    12, 2, 0x7F28FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FD4C;
        }
    }

label_7F28FD40:
    ctx->pc = 0x7F28FD40u;
    ctx->downcount -= 3;
    // 7F28FD40: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F28FD44:
    ctx->pc = 0x7F28FD44u;
    // 7F28FD44: lfs     f0, 26232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28FD44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F28FD48:
    ctx->pc = 0x7F28FD48u;
    // 7F28FD48: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F28FD48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28FD4C:
    ctx->pc = 0x7F28FD4Cu;
    ctx->downcount -= 2;
    // 7F28FD4C: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F28FD50:
    ctx->pc = 0x7F28FD50u;
    // 7F28FD50: bl      0x7F3C89A8
    {
            ctx->lr = 0x7F28FD54u;
            ctx->pc = 0x7F3C89A8u;
            return;
    }

label_7F28FD54:
    ctx->pc = 0x7F28FD54u;
    ctx->downcount -= 5;
    // 7F28FD54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FD58:
    ctx->pc = 0x7F28FD58u;
    // 7F28FD58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FD5C:
    ctx->pc = 0x7F28FD5Cu;
    // 7F28FD5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28FD60:
    ctx->pc = 0x7F28FD60u;
    // 7F28FD60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FD64:
    ctx->pc = 0x7F28FD64u;
    ctx->downcount -= 5;
    // 7F28FD64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FD68:
    ctx->pc = 0x7F28FD68u;
    // 7F28FD68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FD6C:
    ctx->pc = 0x7F28FD6Cu;
    // 7F28FD6C: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FD70:
    ctx->pc = 0x7F28FD70u;
    // 7F28FD70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FD74:
    ctx->pc = 0x7F28FD74u;
    // 7F28FD74: bc    12, 2, 0x7F28FD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FD80;
        }
    }

label_7F28FD78:
    ctx->pc = 0x7F28FD78u;
    ctx->downcount -= 2;
    // 7F28FD78: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F28FD7C:
    ctx->pc = 0x7F28FD7Cu;
    // 7F28FD7C: bl      0x7F3C89A8
    {
            ctx->lr = 0x7F28FD80u;
            ctx->pc = 0x7F3C89A8u;
            return;
    }

label_7F28FD80:
    ctx->pc = 0x7F28FD80u;
    ctx->downcount -= 5;
    // 7F28FD80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FD84:
    ctx->pc = 0x7F28FD84u;
    // 7F28FD84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FD88:
    ctx->pc = 0x7F28FD88u;
    // 7F28FD88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28FD8C:
    ctx->pc = 0x7F28FD8Cu;
    // 7F28FD8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FD90:
    ctx->pc = 0x7F28FD90u;
    ctx->downcount -= 17;
    // 7F28FD90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FD94:
    ctx->pc = 0x7F28FD94u;
    // 7F28FD94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FD98:
    ctx->pc = 0x7F28FD98u;
    // 7F28FD98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FD9C:
    ctx->pc = 0x7F28FD9Cu;
    // 7F28FD9C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28FDA0:
    ctx->pc = 0x7F28FDA0u;
    // 7F28FDA0: or.   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FDA4:
    ctx->pc = 0x7F28FDA4u;
    // 7F28FDA4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28FDA8:
    ctx->pc = 0x7F28FDA8u;
    // 7F28FDA8: bc    12, 2, 0x7F28FDFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FDFC;
        }
    }

label_7F28FDAC:
    ctx->pc = 0x7F28FDACu;
    ctx->downcount -= 1;
    // 7F28FDAC: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F28FDB0u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F28FDB0:
    ctx->pc = 0x7F28FDB0u;
    ctx->downcount -= 9;
    // 7F28FDB0: addi    r3, r3, -6
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6);

label_7F28FDB4:
    ctx->pc = 0x7F28FDB4u;
    // 7F28FDB4: rlwinm. r0, r31, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FDB8:
    ctx->pc = 0x7F28FDB8u;
    // 7F28FDB8: addic   r4, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F28FDBC:
    ctx->pc = 0x7F28FDBCu;
    // 7F28FDBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FDC0:
    ctx->pc = 0x7F28FDC0u;
    // 7F28FDC0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F28FDC4:
    ctx->pc = 0x7F28FDC4u;
    // 7F28FDC4: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28FDC8:
    ctx->pc = 0x7F28FDC8u;
    // 7F28FDC8: subfe   r3, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F28FDCC:
    ctx->pc = 0x7F28FDCCu;
    // 7F28FDCC: and   r4, r0, r3
    {
        ctx->gpr[4] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F28FDD0:
    ctx->pc = 0x7F28FDD0u;
    // 7F28FDD0: bc    12, 2, 0x7F28FDE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FDE4;
        }
    }

label_7F28FDD4:
    ctx->pc = 0x7F28FDD4u;
    ctx->downcount -= 4;
    // 7F28FDD4: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FDD8:
    ctx->pc = 0x7F28FDD8u;
    // 7F28FDD8: ori     r0, r4, 0x0002
    ctx->gpr[0] = ctx->gpr[4] | 0x0002u;

label_7F28FDDC:
    ctx->pc = 0x7F28FDDCu;
    // 7F28FDDC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F28FDE0:
    ctx->pc = 0x7F28FDE0u;
    // 7F28FDE0: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FDE4:
    ctx->pc = 0x7F28FDE4u;
    ctx->downcount -= 2;
    // 7F28FDE4: rlwinm. r0, r31, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FDE8:
    ctx->pc = 0x7F28FDE8u;
    // 7F28FDE8: bc    12, 2, 0x7F28FDFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FDFC;
        }
    }

label_7F28FDEC:
    ctx->pc = 0x7F28FDECu;
    ctx->downcount -= 4;
    // 7F28FDEC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F28FDF0:
    ctx->pc = 0x7F28FDF0u;
    // 7F28FDF0: ori     r0, r4, 0x0001
    ctx->gpr[0] = ctx->gpr[4] | 0x0001u;

label_7F28FDF4:
    ctx->pc = 0x7F28FDF4u;
    // 7F28FDF4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F28FDF8:
    ctx->pc = 0x7F28FDF8u;
    // 7F28FDF8: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FDFC:
    ctx->pc = 0x7F28FDFCu;
    ctx->downcount -= 16;
    // 7F28FDFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28FE00:
    ctx->pc = 0x7F28FE00u;
    // 7F28FE00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE04:
    ctx->pc = 0x7F28FE04u;
    // 7F28FE04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FE08:
    ctx->pc = 0x7F28FE08u;
    // 7F28FE08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F28FE0C:
    ctx->pc = 0x7F28FE0Cu;
    // 7F28FE0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FE10:
    ctx->pc = 0x7F28FE10u;
    ctx->downcount -= 3;
    // 7F28FE10: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FE14:
    ctx->pc = 0x7F28FE14u;
    // 7F28FE14: li      r6, 12288
    ctx->gpr[6] = (u32)(s32)(12288);

label_7F28FE18:
    ctx->pc = 0x7F28FE18u;
    // 7F28FE18: bc    12, 0, 0x7F28FE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FE24;
        }
    }

label_7F28FE1C:
    ctx->pc = 0x7F28FE1Cu;
    ctx->downcount -= 2;
    // 7F28FE1C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F28FE20:
    ctx->pc = 0x7F28FE20u;
    // 7F28FE20: slw   r6, r0, r5
    {
        u32 sh = ctx->gpr[5] & 0x3Fu;
        ctx->gpr[6] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F28FE24:
    ctx->pc = 0x7F28FE24u;
    ctx->downcount -= 2;
    // 7F28FE24: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FE28:
    ctx->pc = 0x7F28FE28u;
    // 7F28FE28: bc    4, 2, 0x7F28FE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FE90;
        }
    }

label_7F28FE2C:
    ctx->pc = 0x7F28FE2Cu;
    ctx->downcount -= 9;
    // 7F28FE2C: lwz     r0, 4200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE30:
    ctx->pc = 0x7F28FE30u;
    // 7F28FE30: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28FE34:
    ctx->pc = 0x7F28FE34u;
    // 7F28FE34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FE38:
    ctx->pc = 0x7F28FE38u;
    // 7F28FE38: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_7F28FE3C:
    ctx->pc = 0x7F28FE3Cu;
    // 7F28FE3C: stw     r0, 4200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FE40:
    ctx->pc = 0x7F28FE40u;
    // 7F28FE40: lwz     r0, 4524(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE44:
    ctx->pc = 0x7F28FE44u;
    // 7F28FE44: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_7F28FE48:
    ctx->pc = 0x7F28FE48u;
    // 7F28FE48: stw     r0, 4524(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FE4C:
    ctx->pc = 0x7F28FE4Cu;
    // 7F28FE4C: b       0x7F28FE7C
    {
            goto label_7F28FE7C;
    }

label_7F28FE50:
    ctx->downcount -= 4;
    // 7F28FE50: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F28FE54:
    ctx->pc = 0x7F28FE54u;
    // 7F28FE54: lha     r0, 646(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(646);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FE58:
    // 7F28FE58: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FE5C:
    // 7F28FE5C: bc    12, 2, 0x7F28FE68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FE68;
        }
    }

label_7F28FE60:
    ctx->downcount -= 2;
    // 7F28FE60: cmpwi   r0, 12
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FE64:
    // 7F28FE64: bc    4, 2, 0x7F28FE74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FE74;
        }
    }

label_7F28FE68:
    ctx->pc = 0x7F28FE68u;
    ctx->downcount -= 3;
    // 7F28FE68: lwz     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE6C:
    // 7F28FE6C: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_7F28FE70:
    ctx->pc = 0x7F28FE70u;
    // 7F28FE70: stw     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FE74:
    ctx->downcount -= 2;
    // 7F28FE74: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F28FE78:
    // 7F28FE78: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

label_7F28FE7C:
    ctx->pc = 0x7F28FE7Cu;
    ctx->downcount -= 4;
    // 7F28FE7C: lwz     r5, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28FE80:
    ctx->pc = 0x7F28FE80u;
    // 7F28FE80: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE84:
    // 7F28FE84: cmplw   r7, r0
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FE88:
    // 7F28FE88: bc    12, 0, 0x7F28FE50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28FE50u;
                return;
            }
            goto label_7F28FE50;
        }
    }

label_7F28FE8C:
    ctx->pc = 0x7F28FE8Cu;
    ctx->downcount -= 1;
    // 7F28FE8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FE90:
    ctx->pc = 0x7F28FE90u;
    ctx->downcount -= 10;
    // 7F28FE90: lwz     r0, 4200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FE94:
    ctx->pc = 0x7F28FE94u;
    // 7F28FE94: nor   r6, r6, r6
    {
        ctx->gpr[6] = ~(ctx->gpr[6] | ctx->gpr[6]);
    }

label_7F28FE98:
    ctx->pc = 0x7F28FE98u;
    // 7F28FE98: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28FE9C:
    ctx->pc = 0x7F28FE9Cu;
    // 7F28FE9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FEA0:
    ctx->pc = 0x7F28FEA0u;
    // 7F28FEA0: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F28FEA4:
    ctx->pc = 0x7F28FEA4u;
    // 7F28FEA4: stw     r0, 4200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FEA8:
    ctx->pc = 0x7F28FEA8u;
    // 7F28FEA8: lwz     r0, 4524(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FEAC:
    ctx->pc = 0x7F28FEACu;
    // 7F28FEAC: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F28FEB0:
    ctx->pc = 0x7F28FEB0u;
    // 7F28FEB0: stw     r0, 4524(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FEB4:
    ctx->pc = 0x7F28FEB4u;
    // 7F28FEB4: b       0x7F28FEE4
    {
            goto label_7F28FEE4;
    }

label_7F28FEB8:
    ctx->downcount -= 4;
    // 7F28FEB8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F28FEBC:
    ctx->pc = 0x7F28FEBCu;
    // 7F28FEBC: lha     r0, 646(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(646);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F28FEC0:
    // 7F28FEC0: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FEC4:
    // 7F28FEC4: bc    12, 2, 0x7F28FED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FED0;
        }
    }

label_7F28FEC8:
    ctx->downcount -= 2;
    // 7F28FEC8: cmpwi   r0, 12
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FECC:
    // 7F28FECC: bc    4, 2, 0x7F28FEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F28FEDC;
        }
    }

label_7F28FED0:
    ctx->pc = 0x7F28FED0u;
    ctx->downcount -= 3;
    // 7F28FED0: lwz     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FED4:
    // 7F28FED4: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F28FED8:
    ctx->pc = 0x7F28FED8u;
    // 7F28FED8: stw     r0, 636(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FEDC:
    ctx->downcount -= 2;
    // 7F28FEDC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F28FEE0:
    // 7F28FEE0: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

label_7F28FEE4:
    ctx->pc = 0x7F28FEE4u;
    ctx->downcount -= 4;
    // 7F28FEE4: lwz     r5, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F28FEE8:
    ctx->pc = 0x7F28FEE8u;
    // 7F28FEE8: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FEEC:
    // 7F28FEEC: cmplw   r7, r0
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FEF0:
    // 7F28FEF0: bc    12, 0, 0x7F28FEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28FEB8u;
                return;
            }
            goto label_7F28FEB8;
        }
    }

label_7F28FEF4:
    ctx->pc = 0x7F28FEF4u;
    ctx->downcount -= 1;
    // 7F28FEF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FEF8:
    ctx->pc = 0x7F28FEF8u;
    ctx->downcount -= 22;
    // 7F28FEF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FEFC:
    ctx->pc = 0x7F28FEFCu;
    // 7F28FEFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F28FF00:
    ctx->pc = 0x7F28FF00u;
    // 7F28FF00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F28FF04:
    ctx->pc = 0x7F28FF04u;
    // 7F28FF04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FF08:
    ctx->pc = 0x7F28FF08u;
    // 7F28FF08: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F28FF0C:
    ctx->pc = 0x7F28FF0Cu;
    // 7F28FF0C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F28FF10:
    ctx->pc = 0x7F28FF10u;
    // 7F28FF10: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F28FF14:
    ctx->pc = 0x7F28FF14u;
    // 7F28FF14: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F28FF18:
    ctx->pc = 0x7F28FF18u;
    // 7F28FF18: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F28FF1C:
    ctx->pc = 0x7F28FF1Cu;
    // 7F28FF1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F28FF20:
    ctx->pc = 0x7F28FF20u;
    // 7F28FF20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F28FF24:
    ctx->pc = 0x7F28FF24u;
    // 7F28FF24: bl      0x7F012018
    {
            ctx->lr = 0x7F28FF28u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F28FF28:
    ctx->pc = 0x7F28FF28u;
    ctx->downcount -= 5;
    // 7F28FF28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F28FF2C:
    ctx->pc = 0x7F28FF2Cu;
    // 7F28FF2C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F28FF30:
    ctx->pc = 0x7F28FF30u;
    // 7F28FF30: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F28FF34:
    ctx->pc = 0x7F28FF34u;
    // 7F28FF34: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F28FF38:
    ctx->pc = 0x7F28FF38u;
    // 7F28FF38: bc    12, 2, 0x7F28FF58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F28FF58;
        }
    }

label_7F28FF3C:
    ctx->pc = 0x7F28FF3Cu;
    ctx->downcount -= 6;
    // 7F28FF3C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28FF40:
    ctx->pc = 0x7F28FF40u;
    // 7F28FF40: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FF44:
    ctx->pc = 0x7F28FF44u;
    // 7F28FF44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F28FF48:
    ctx->pc = 0x7F28FF48u;
    // 7F28FF48: li      r6, 47
    ctx->gpr[6] = (u32)(s32)(47);

label_7F28FF4C:
    ctx->pc = 0x7F28FF4Cu;
    // 7F28FF4C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28FF50:
    ctx->pc = 0x7F28FF50u;
    // 7F28FF50: bl      0x7F0118D8
    {
            ctx->lr = 0x7F28FF54u;
            ctx->pc = 0x7F0118D8u;
            return;
    }

label_7F28FF54:
    ctx->pc = 0x7F28FF54u;
    ctx->downcount -= 1;
    // 7F28FF54: b       0x7F28FF70
    {
            goto label_7F28FF70;
    }

label_7F28FF58:
    ctx->pc = 0x7F28FF58u;
    ctx->downcount -= 6;
    // 7F28FF58: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F28FF5C:
    ctx->pc = 0x7F28FF5Cu;
    // 7F28FF5C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F28FF60:
    ctx->pc = 0x7F28FF60u;
    // 7F28FF60: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28FF64:
    ctx->pc = 0x7F28FF64u;
    // 7F28FF64: li      r6, 47
    ctx->gpr[6] = (u32)(s32)(47);

label_7F28FF68:
    ctx->pc = 0x7F28FF68u;
    // 7F28FF68: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F28FF6C:
    ctx->pc = 0x7F28FF6Cu;
    // 7F28FF6C: bl      0x7F0118D8
    {
            ctx->lr = 0x7F28FF70u;
            ctx->pc = 0x7F0118D8u;
            return;
    }

label_7F28FF70:
    ctx->pc = 0x7F28FF70u;
    ctx->downcount -= 16;
    // 7F28FF70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F28FF74:
    ctx->pc = 0x7F28FF74u;
    // 7F28FF74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FF78:
    ctx->pc = 0x7F28FF78u;
    // 7F28FF78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F28FF7C:
    ctx->pc = 0x7F28FF7Cu;
    // 7F28FF7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F28FF80:
    ctx->pc = 0x7F28FF80u;
    // 7F28FF80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FF84:
    ctx->pc = 0x7F28FF84u;
    ctx->downcount -= 5;
    // 7F28FF84: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28FF88:
    ctx->pc = 0x7F28FF88u;
    // 7F28FF88: addi    r4, r4, -5660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F28FF8C:
    ctx->pc = 0x7F28FF8Cu;
    // 7F28FF8C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28FF90:
    ctx->pc = 0x7F28FF90u;
    // 7F28FF90: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FF94:
    ctx->pc = 0x7F28FF94u;
    // 7F28FF94: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FF98:
    ctx->pc = 0x7F28FF98u;
    ctx->downcount -= 2;
    // 7F28FF98: stw     r3, 4092(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4092);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28FF9C:
    ctx->pc = 0x7F28FF9Cu;
    // 7F28FF9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FFA0:
    ctx->pc = 0x7F28FFA0u;
    ctx->downcount -= 5;
    // 7F28FFA0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F28FFA4:
    ctx->pc = 0x7F28FFA4u;
    // 7F28FFA4: addi    r4, r4, -5660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F28FFA8:
    ctx->pc = 0x7F28FFA8u;
    // 7F28FFA8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F28FFAC:
    ctx->pc = 0x7F28FFACu;
    // 7F28FFAC: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F28FFB0:
    ctx->pc = 0x7F28FFB0u;
    // 7F28FFB0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FFB4:
    ctx->pc = 0x7F28FFB4u;
    ctx->downcount -= 2;
    // 7F28FFB4: stw     r3, 4096(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4096);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F28FFB8:
    ctx->pc = 0x7F28FFB8u;
    // 7F28FFB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F28FFBC:
    ctx->pc = 0x7F28FFBCu;
    ctx->downcount -= 7;
    // 7F28FFBC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F28FFC0:
    ctx->pc = 0x7F28FFC0u;
    // 7F28FFC0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F28FFC4:
    ctx->pc = 0x7F28FFC4u;
    // 7F28FFC4: lfd     f1, 26256(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F28FFC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26256);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28FFC8:
    ctx->pc = 0x7F28FFC8u;
    // 7F28FFC8: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F28FFCC:
    ctx->pc = 0x7F28FFCCu;
    // 7F28FFCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F28FFD0:
    ctx->pc = 0x7F28FFD0u;
    // 7F28FFD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F28FFD4:
    ctx->pc = 0x7F28FFD4u;
    ctx->downcount -= 10;
    // 7F28FFD4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28FFD8:
    // 7F28FFD8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F28FFDC:
    ctx->pc = 0x7F28FFDCu;
    // 7F28FFDC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28FFE0:
    // 7F28FFE0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F28FFE4:
    ctx->pc = 0x7F28FFE4u;
    // 7F28FFE4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F28FFE8:
    ctx->pc = 0x7F28FFE8u;
    // 7F28FFE8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F28FFE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28FFEC:
    ctx->pc = 0x7F28FFECu;
    // 7F28FFEC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F28FFECu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F28FFF0:
    ctx->pc = 0x7F28FFF0u;
    // 7F28FFF0: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F28FFF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28FFF4:
    // 7F28FFF4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F28FFF8:
    // 7F28FFF8: bc    16, 0, 0x7F28FFD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F28FFD4u;
                return;
            }
            goto label_7F28FFD4;
        }
    }

label_7F28FFFC:
    ctx->pc = 0x7F28FFFCu;
    ctx->downcount -= 2;
    // 7F28FFFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F290000:
    ctx->pc = 0x7F290000u;
    // 7F290000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F290004:
    ctx->pc = 0x7F290004u;
    ctx->downcount -= 6;
    // 7F290004: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F290008:
    ctx->pc = 0x7F290008u;
    // 7F290008: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F29000C:
    ctx->pc = 0x7F29000Cu;
    // 7F29000C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F290010:
    ctx->pc = 0x7F290010u;
    // 7F290010: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F290014:
    ctx->pc = 0x7F290014u;
    // 7F290014: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F290018:
    ctx->pc = 0x7F290018u;
    // 7F290018: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F29001Cu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F29001C:
    ctx->pc = 0x7F29001Cu;
    ctx->downcount -= 5;
    // 7F29001C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F290020:
    ctx->pc = 0x7F290020u;
    // 7F290020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F290024:
    ctx->pc = 0x7F290024u;
    // 7F290024: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F290028:
    ctx->pc = 0x7F290028u;
    // 7F290028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F29002C:
    ctx->pc = 0x7F29002Cu;
    ctx->downcount -= 6;
    // 7F29002C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F290030:
    ctx->pc = 0x7F290030u;
    // 7F290030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F290034:
    ctx->pc = 0x7F290034u;
    // 7F290034: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F290038:
    ctx->pc = 0x7F290038u;
    // 7F290038: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F29003C:
    ctx->pc = 0x7F29003Cu;
    // 7F29003C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F290040:
    ctx->pc = 0x7F290040u;
    // 7F290040: bl      0x7F042E08
    {
            ctx->lr = 0x7F290044u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F290044:
    ctx->pc = 0x7F290044u;
    ctx->downcount -= 5;
    // 7F290044: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F290048:
    ctx->pc = 0x7F290048u;
    // 7F290048: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F29004C:
    ctx->pc = 0x7F29004Cu;
    // 7F29004C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F290050:
    ctx->pc = 0x7F290050u;
    // 7F290050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F290054:
    ctx->pc = 0x7F290054u;
    ctx->downcount -= 6;
    // 7F290054: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F290058:
    ctx->pc = 0x7F290058u;
    // 7F290058: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F29005C:
    ctx->pc = 0x7F29005Cu;
    // 7F29005C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F290060:
    ctx->pc = 0x7F290060u;
    // 7F290060: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F290064:
    ctx->pc = 0x7F290064u;
    // 7F290064: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F290068:
    ctx->pc = 0x7F290068u;
    // 7F290068: bl      0x7F012018
    {
            ctx->lr = 0x7F29006Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F29006C:
    ctx->pc = 0x7F29006Cu;
    ctx->downcount -= 5;
    // 7F29006C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F290070:
    ctx->pc = 0x7F290070u;
    // 7F290070: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F290074:
    ctx->pc = 0x7F290074u;
    // 7F290074: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F290078:
    ctx->pc = 0x7F290078u;
    // 7F290078: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F29007C:
    ctx->pc = 0x7F29007Cu;
    ctx->downcount -= 9;
    // 7F29007C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F290080:
    ctx->pc = 0x7F290080u;
    // 7F290080: lwz     r6, -5660(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5660);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F290084:
    ctx->pc = 0x7F290084u;
    // 7F290084: lwz     r0, 2668(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F290088:
    ctx->pc = 0x7F290088u;
    // 7F290088: lwz     r5, 2664(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2664);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F29008C:
    ctx->pc = 0x7F29008Cu;
    // 7F29008C: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F290090:
    ctx->pc = 0x7F290090u;
    // 7F290090: stw     r0, 2668(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F290094:
    ctx->pc = 0x7F290094u;
    // 7F290094: or   r0, r5, r3
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F290098:
    ctx->pc = 0x7F290098u;
    // 7F290098: stw     r0, 2664(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F29009C:
    ctx->pc = 0x7F29009Cu;
    // 7F29009C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F2900A0:
    ctx->pc = 0x7F2900A0u;
    ctx->downcount -= 11;
    // 7F2900A0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2900A4:
    ctx->pc = 0x7F2900A4u;
    // 7F2900A4: nor   r0, r4, r4
    {
        ctx->gpr[0] = ~(ctx->gpr[4] | ctx->gpr[4]);
    }

label_7F2900A8:
    ctx->pc = 0x7F2900A8u;
    // 7F2900A8: lwz     r6, -5660(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5660);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2900AC:
    ctx->pc = 0x7F2900ACu;
    // 7F2900AC: nor   r3, r3, r3
    {
        ctx->gpr[3] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F2900B0:
    ctx->pc = 0x7F2900B0u;
    // 7F2900B0: lwz     r5, 2668(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2668);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2900B4:
    ctx->pc = 0x7F2900B4u;
    // 7F2900B4: lwz     r4, 2664(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2664);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2900B8:
    ctx->pc = 0x7F2900B8u;
    // 7F2900B8: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F2900BC:
    ctx->pc = 0x7F2900BCu;
    // 7F2900BC: stw     r0, 2668(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2900C0:
    ctx->pc = 0x7F2900C0u;
    // 7F2900C0: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F2900C4:
    ctx->pc = 0x7F2900C4u;
    // 7F2900C4: stw     r0, 2664(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2900C8:
    ctx->pc = 0x7F2900C8u;
    // 7F2900C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F28C0EC;
        }
    }

label_7F2900CC:
    ctx->pc = 0x7F2900CCu;
    ctx->downcount -= 8;
    // 7F2900CC: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2900D0:
    ctx->pc = 0x7F2900D0u;
    // 7F2900D0: lwz     r6, -5660(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5660);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2900D4:
    ctx->pc = 0x7F2900D4u;
    // 7F2900D4: lwz     r0, 4068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4068);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2900D8:
    ctx->pc = 0x7F2900D8u;
    // 7F2900D8: lwz     r5, 4064(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4064);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2900DC:
    ctx->pc = 0x7F2900DCu;
    // 7F2900DC: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F2900E0:
    ctx->pc = 0x7F2900E0u;
    // 7F2900E0: stw     r0, 4068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2900E4:
    ctx->pc = 0x7F2900E4u;
    // 7F2900E4: or   r0, r5, r3
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F2900E8:
    ctx->pc = 0x7F2900E8u;
    // 7F2900E8: stw     r0, 4064(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2900ECu;
    return;
return_dispatch_7F28C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F28C14Cu: goto label_7F28C14C;
    case 0x7F28C188u: goto label_7F28C188;
    case 0x7F28C1A8u: goto label_7F28C1A8;
    case 0x7F28C1D4u: goto label_7F28C1D4;
    case 0x7F28C1F4u: goto label_7F28C1F4;
    case 0x7F28C2B8u: goto label_7F28C2B8;
    case 0x7F28C2C8u: goto label_7F28C2C8;
    case 0x7F28C2D4u: goto label_7F28C2D4;
    case 0x7F28C2DCu: goto label_7F28C2DC;
    case 0x7F28C2E4u: goto label_7F28C2E4;
    case 0x7F28C2F0u: goto label_7F28C2F0;
    case 0x7F28C2FCu: goto label_7F28C2FC;
    case 0x7F28C308u: goto label_7F28C308;
    case 0x7F28C314u: goto label_7F28C314;
    case 0x7F28C31Cu: goto label_7F28C31C;
    case 0x7F28C328u: goto label_7F28C328;
    case 0x7F28C338u: goto label_7F28C338;
    case 0x7F28C380u: goto label_7F28C380;
    case 0x7F28C3A4u: goto label_7F28C3A4;
    case 0x7F28C3ECu: goto label_7F28C3EC;
    case 0x7F28C3F8u: goto label_7F28C3F8;
    case 0x7F28C404u: goto label_7F28C404;
    case 0x7F28C410u: goto label_7F28C410;
    case 0x7F28C41Cu: goto label_7F28C41C;
    case 0x7F28C428u: goto label_7F28C428;
    case 0x7F28C43Cu: goto label_7F28C43C;
    case 0x7F28C448u: goto label_7F28C448;
    case 0x7F28C458u: goto label_7F28C458;
    case 0x7F28C470u: goto label_7F28C470;
    case 0x7F28C47Cu: goto label_7F28C47C;
    case 0x7F28C4A8u: goto label_7F28C4A8;
    case 0x7F28C4C8u: goto label_7F28C4C8;
    case 0x7F28C4D4u: goto label_7F28C4D4;
    case 0x7F28C50Cu: goto label_7F28C50C;
    case 0x7F28C518u: goto label_7F28C518;
    case 0x7F28C53Cu: goto label_7F28C53C;
    case 0x7F28C55Cu: goto label_7F28C55C;
    case 0x7F28C5BCu: goto label_7F28C5BC;
    case 0x7F28C5D4u: goto label_7F28C5D4;
    case 0x7F28C624u: goto label_7F28C624;
    case 0x7F28C64Cu: goto label_7F28C64C;
    case 0x7F28C724u: goto label_7F28C724;
    case 0x7F28C7E4u: goto label_7F28C7E4;
    case 0x7F28C7F0u: goto label_7F28C7F0;
    case 0x7F28C83Cu: goto label_7F28C83C;
    case 0x7F28C84Cu: goto label_7F28C84C;
    case 0x7F28C89Cu: goto label_7F28C89C;
    case 0x7F28C8ECu: goto label_7F28C8EC;
    case 0x7F28C944u: goto label_7F28C944;
    case 0x7F28C950u: goto label_7F28C950;
    case 0x7F28C968u: goto label_7F28C968;
    case 0x7F28C99Cu: goto label_7F28C99C;
    case 0x7F28CA0Cu: goto label_7F28CA0C;
    case 0x7F28CA40u: goto label_7F28CA40;
    case 0x7F28CABCu: goto label_7F28CABC;
    case 0x7F28CAF8u: goto label_7F28CAF8;
    case 0x7F28CB08u: goto label_7F28CB08;
    case 0x7F28CB1Cu: goto label_7F28CB1C;
    case 0x7F28CB44u: goto label_7F28CB44;
    case 0x7F28CB54u: goto label_7F28CB54;
    case 0x7F28CB70u: goto label_7F28CB70;
    case 0x7F28CB98u: goto label_7F28CB98;
    case 0x7F28CC58u: goto label_7F28CC58;
    case 0x7F28CC6Cu: goto label_7F28CC6C;
    case 0x7F28CC74u: goto label_7F28CC74;
    case 0x7F28CC80u: goto label_7F28CC80;
    case 0x7F28CC84u: goto label_7F28CC84;
    case 0x7F28CC88u: goto label_7F28CC88;
    case 0x7F28CC9Cu: goto label_7F28CC9C;
    case 0x7F28CCA8u: goto label_7F28CCA8;
    case 0x7F28CCACu: goto label_7F28CCAC;
    case 0x7F28CCB0u: goto label_7F28CCB0;
    case 0x7F28CCC8u: goto label_7F28CCC8;
    case 0x7F28CCD0u: goto label_7F28CCD0;
    case 0x7F28CD50u: goto label_7F28CD50;
    case 0x7F28CD60u: goto label_7F28CD60;
    case 0x7F28CD68u: goto label_7F28CD68;
    case 0x7F28CD78u: goto label_7F28CD78;
    case 0x7F28CD84u: goto label_7F28CD84;
    case 0x7F28CD90u: goto label_7F28CD90;
    case 0x7F28CDACu: goto label_7F28CDAC;
    case 0x7F28CE08u: goto label_7F28CE08;
    case 0x7F28CE58u: goto label_7F28CE58;
    case 0x7F28CEB0u: goto label_7F28CEB0;
    case 0x7F28CEE4u: goto label_7F28CEE4;
    case 0x7F28CEF0u: goto label_7F28CEF0;
    case 0x7F28CF14u: goto label_7F28CF14;
    case 0x7F28CF1Cu: goto label_7F28CF1C;
    case 0x7F28CF40u: goto label_7F28CF40;
    case 0x7F28CF54u: goto label_7F28CF54;
    case 0x7F28CF90u: goto label_7F28CF90;
    case 0x7F28CFB0u: goto label_7F28CFB0;
    case 0x7F28CFDCu: goto label_7F28CFDC;
    case 0x7F28CFFCu: goto label_7F28CFFC;
    case 0x7F28D060u: goto label_7F28D060;
    case 0x7F28D06Cu: goto label_7F28D06C;
    case 0x7F28D074u: goto label_7F28D074;
    case 0x7F28D07Cu: goto label_7F28D07C;
    case 0x7F28D080u: goto label_7F28D080;
    case 0x7F28D088u: goto label_7F28D088;
    case 0x7F28D094u: goto label_7F28D094;
    case 0x7F28D0A0u: goto label_7F28D0A0;
    case 0x7F28D0ACu: goto label_7F28D0AC;
    case 0x7F28D0B8u: goto label_7F28D0B8;
    case 0x7F28D0C0u: goto label_7F28D0C0;
    case 0x7F28D0CCu: goto label_7F28D0CC;
    case 0x7F28D0DCu: goto label_7F28D0DC;
    case 0x7F28D11Cu: goto label_7F28D11C;
    case 0x7F28D140u: goto label_7F28D140;
    case 0x7F28D19Cu: goto label_7F28D19C;
    case 0x7F28D1C8u: goto label_7F28D1C8;
    case 0x7F28D264u: goto label_7F28D264;
    case 0x7F28D290u: goto label_7F28D290;
    case 0x7F28D2BCu: goto label_7F28D2BC;
    case 0x7F28D2E8u: goto label_7F28D2E8;
    case 0x7F28D314u: goto label_7F28D314;
    case 0x7F28D340u: goto label_7F28D340;
    case 0x7F28D36Cu: goto label_7F28D36C;
    case 0x7F28D398u: goto label_7F28D398;
    case 0x7F28D3C4u: goto label_7F28D3C4;
    case 0x7F28D3FCu: goto label_7F28D3FC;
    case 0x7F28D420u: goto label_7F28D420;
    case 0x7F28D44Cu: goto label_7F28D44C;
    case 0x7F28D478u: goto label_7F28D478;
    case 0x7F28D4A4u: goto label_7F28D4A4;
    case 0x7F28D4D0u: goto label_7F28D4D0;
    case 0x7F28D4FCu: goto label_7F28D4FC;
    case 0x7F28D528u: goto label_7F28D528;
    case 0x7F28D554u: goto label_7F28D554;
    case 0x7F28D580u: goto label_7F28D580;
    case 0x7F28D5CCu: goto label_7F28D5CC;
    case 0x7F28D5F8u: goto label_7F28D5F8;
    case 0x7F28D624u: goto label_7F28D624;
    case 0x7F28D650u: goto label_7F28D650;
    case 0x7F28D6A0u: goto label_7F28D6A0;
    case 0x7F28D6CCu: goto label_7F28D6CC;
    case 0x7F28D6ECu: goto label_7F28D6EC;
    case 0x7F28D738u: goto label_7F28D738;
    case 0x7F28D748u: goto label_7F28D748;
    case 0x7F28D768u: goto label_7F28D768;
    case 0x7F28D788u: goto label_7F28D788;
    case 0x7F28D7A8u: goto label_7F28D7A8;
    case 0x7F28D810u: goto label_7F28D810;
    case 0x7F28D854u: goto label_7F28D854;
    case 0x7F28D8A0u: goto label_7F28D8A0;
    case 0x7F28D8B8u: goto label_7F28D8B8;
    case 0x7F28D93Cu: goto label_7F28D93C;
    case 0x7F28D950u: goto label_7F28D950;
    case 0x7F28D960u: goto label_7F28D960;
    case 0x7F28D9B0u: goto label_7F28D9B0;
    case 0x7F28DA04u: goto label_7F28DA04;
    case 0x7F28DA44u: goto label_7F28DA44;
    case 0x7F28DA54u: goto label_7F28DA54;
    case 0x7F28DA60u: goto label_7F28DA60;
    case 0x7F28DA70u: goto label_7F28DA70;
    case 0x7F28DA98u: goto label_7F28DA98;
    case 0x7F28DAB8u: goto label_7F28DAB8;
    case 0x7F28DAD4u: goto label_7F28DAD4;
    case 0x7F28DAECu: goto label_7F28DAEC;
    case 0x7F28DAFCu: goto label_7F28DAFC;
    case 0x7F28DB0Cu: goto label_7F28DB0C;
    case 0x7F28DB2Cu: goto label_7F28DB2C;
    case 0x7F28DB60u: goto label_7F28DB60;
    case 0x7F28DB6Cu: goto label_7F28DB6C;
    case 0x7F28DB78u: goto label_7F28DB78;
    case 0x7F28DB84u: goto label_7F28DB84;
    case 0x7F28DBB0u: goto label_7F28DBB0;
    case 0x7F28DBE8u: goto label_7F28DBE8;
    case 0x7F28DC10u: goto label_7F28DC10;
    case 0x7F28DC38u: goto label_7F28DC38;
    case 0x7F28DC48u: goto label_7F28DC48;
    case 0x7F28DCC4u: goto label_7F28DCC4;
    case 0x7F28DCD8u: goto label_7F28DCD8;
    case 0x7F28DD10u: goto label_7F28DD10;
    case 0x7F28DD44u: goto label_7F28DD44;
    case 0x7F28DDD0u: goto label_7F28DDD0;
    case 0x7F28DDDCu: goto label_7F28DDDC;
    case 0x7F28DDE8u: goto label_7F28DDE8;
    case 0x7F28DDFCu: goto label_7F28DDFC;
    case 0x7F28DE54u: goto label_7F28DE54;
    case 0x7F28DF00u: goto label_7F28DF00;
    case 0x7F28DF10u: goto label_7F28DF10;
    case 0x7F28DF20u: goto label_7F28DF20;
    case 0x7F28DFACu: goto label_7F28DFAC;
    case 0x7F28DFD4u: goto label_7F28DFD4;
    case 0x7F28E0C8u: goto label_7F28E0C8;
    case 0x7F28E0E4u: goto label_7F28E0E4;
    case 0x7F28E198u: goto label_7F28E198;
    case 0x7F28E1CCu: goto label_7F28E1CC;
    case 0x7F28E25Cu: goto label_7F28E25C;
    case 0x7F28E2FCu: goto label_7F28E2FC;
    case 0x7F28E314u: goto label_7F28E314;
    case 0x7F28E32Cu: goto label_7F28E32C;
    case 0x7F28E344u: goto label_7F28E344;
    case 0x7F28E448u: goto label_7F28E448;
    case 0x7F28E45Cu: goto label_7F28E45C;
    case 0x7F28E488u: goto label_7F28E488;
    case 0x7F28E4E8u: goto label_7F28E4E8;
    case 0x7F28E4FCu: goto label_7F28E4FC;
    case 0x7F28E524u: goto label_7F28E524;
    case 0x7F28E5D4u: goto label_7F28E5D4;
    case 0x7F28E5E4u: goto label_7F28E5E4;
    case 0x7F28E5ECu: goto label_7F28E5EC;
    case 0x7F28E5F4u: goto label_7F28E5F4;
    case 0x7F28E608u: goto label_7F28E608;
    case 0x7F28E640u: goto label_7F28E640;
    case 0x7F28E65Cu: goto label_7F28E65C;
    case 0x7F28E670u: goto label_7F28E670;
    case 0x7F28E6D8u: goto label_7F28E6D8;
    case 0x7F28E6F8u: goto label_7F28E6F8;
    case 0x7F28E704u: goto label_7F28E704;
    case 0x7F28E748u: goto label_7F28E748;
    case 0x7F28E7DCu: goto label_7F28E7DC;
    case 0x7F28E7E8u: goto label_7F28E7E8;
    case 0x7F28E830u: goto label_7F28E830;
    case 0x7F28E88Cu: goto label_7F28E88C;
    case 0x7F28E898u: goto label_7F28E898;
    case 0x7F28E8E4u: goto label_7F28E8E4;
    case 0x7F28E974u: goto label_7F28E974;
    case 0x7F28EA00u: goto label_7F28EA00;
    case 0x7F28EA5Cu: goto label_7F28EA5C;
    case 0x7F28EA7Cu: goto label_7F28EA7C;
    case 0x7F28EA98u: goto label_7F28EA98;
    case 0x7F28EAB4u: goto label_7F28EAB4;
    case 0x7F28EAC4u: goto label_7F28EAC4;
    case 0x7F28EACCu: goto label_7F28EACC;
    case 0x7F28EAE8u: goto label_7F28EAE8;
    case 0x7F28EAF8u: goto label_7F28EAF8;
    case 0x7F28EB10u: goto label_7F28EB10;
    case 0x7F28EB18u: goto label_7F28EB18;
    case 0x7F28EB44u: goto label_7F28EB44;
    case 0x7F28EB4Cu: goto label_7F28EB4C;
    case 0x7F28EB54u: goto label_7F28EB54;
    case 0x7F28EB5Cu: goto label_7F28EB5C;
    case 0x7F28EB84u: goto label_7F28EB84;
    case 0x7F28EBD8u: goto label_7F28EBD8;
    case 0x7F28EBECu: goto label_7F28EBEC;
    case 0x7F28EC3Cu: goto label_7F28EC3C;
    case 0x7F28EC50u: goto label_7F28EC50;
    case 0x7F28EC5Cu: goto label_7F28EC5C;
    case 0x7F28EC78u: goto label_7F28EC78;
    case 0x7F28ECB0u: goto label_7F28ECB0;
    case 0x7F28ECE8u: goto label_7F28ECE8;
    case 0x7F28ED38u: goto label_7F28ED38;
    case 0x7F28ED40u: goto label_7F28ED40;
    case 0x7F28EDBCu: goto label_7F28EDBC;
    case 0x7F28EDE0u: goto label_7F28EDE0;
    case 0x7F28EE34u: goto label_7F28EE34;
    case 0x7F28EE7Cu: goto label_7F28EE7C;
    case 0x7F28EEB0u: goto label_7F28EEB0;
    case 0x7F28EEC0u: goto label_7F28EEC0;
    case 0x7F28EFB0u: goto label_7F28EFB0;
    case 0x7F28EFB8u: goto label_7F28EFB8;
    case 0x7F28F014u: goto label_7F28F014;
    case 0x7F28F024u: goto label_7F28F024;
    case 0x7F28F02Cu: goto label_7F28F02C;
    case 0x7F28F03Cu: goto label_7F28F03C;
    case 0x7F28F048u: goto label_7F28F048;
    case 0x7F28F058u: goto label_7F28F058;
    case 0x7F28F164u: goto label_7F28F164;
    case 0x7F28F1A4u: goto label_7F28F1A4;
    case 0x7F28F1C0u: goto label_7F28F1C0;
    case 0x7F28F1CCu: goto label_7F28F1CC;
    case 0x7F28F1DCu: goto label_7F28F1DC;
    case 0x7F28F214u: goto label_7F28F214;
    case 0x7F28F21Cu: goto label_7F28F21C;
    case 0x7F28F224u: goto label_7F28F224;
    case 0x7F28F240u: goto label_7F28F240;
    case 0x7F28F268u: goto label_7F28F268;
    case 0x7F28F290u: goto label_7F28F290;
    case 0x7F28F2C0u: goto label_7F28F2C0;
    case 0x7F28F35Cu: goto label_7F28F35C;
    case 0x7F28F364u: goto label_7F28F364;
    case 0x7F28F36Cu: goto label_7F28F36C;
    case 0x7F28F388u: goto label_7F28F388;
    case 0x7F28F3B0u: goto label_7F28F3B0;
    case 0x7F28F3D8u: goto label_7F28F3D8;
    case 0x7F28F408u: goto label_7F28F408;
    case 0x7F28F4A4u: goto label_7F28F4A4;
    case 0x7F28F4E0u: goto label_7F28F4E0;
    case 0x7F28F4F0u: goto label_7F28F4F0;
    case 0x7F28F504u: goto label_7F28F504;
    case 0x7F28F520u: goto label_7F28F520;
    case 0x7F28F530u: goto label_7F28F530;
    case 0x7F28F540u: goto label_7F28F540;
    case 0x7F28F550u: goto label_7F28F550;
    case 0x7F28F56Cu: goto label_7F28F56C;
    case 0x7F28F5ACu: goto label_7F28F5AC;
    case 0x7F28F678u: goto label_7F28F678;
    case 0x7F28F690u: goto label_7F28F690;
    case 0x7F28F6DCu: goto label_7F28F6DC;
    case 0x7F28F704u: goto label_7F28F704;
    case 0x7F28F72Cu: goto label_7F28F72C;
    case 0x7F28F788u: goto label_7F28F788;
    case 0x7F28F7A0u: goto label_7F28F7A0;
    case 0x7F28F7D0u: goto label_7F28F7D0;
    case 0x7F28F7D8u: goto label_7F28F7D8;
    case 0x7F28F7E0u: goto label_7F28F7E0;
    case 0x7F28F818u: goto label_7F28F818;
    case 0x7F28F830u: goto label_7F28F830;
    case 0x7F28F870u: goto label_7F28F870;
    case 0x7F28F89Cu: goto label_7F28F89C;
    case 0x7F28F8E4u: goto label_7F28F8E4;
    case 0x7F28F920u: goto label_7F28F920;
    case 0x7F28F964u: goto label_7F28F964;
    case 0x7F28F9A8u: goto label_7F28F9A8;
    case 0x7F28F9C8u: goto label_7F28F9C8;
    case 0x7F28FA2Cu: goto label_7F28FA2C;
    case 0x7F28FAD0u: goto label_7F28FAD0;
    case 0x7F28FAF8u: goto label_7F28FAF8;
    case 0x7F28FB1Cu: goto label_7F28FB1C;
    case 0x7F28FB44u: goto label_7F28FB44;
    case 0x7F28FBA8u: goto label_7F28FBA8;
    case 0x7F28FC5Cu: goto label_7F28FC5C;
    case 0x7F28FC7Cu: goto label_7F28FC7C;
    case 0x7F28FCC0u: goto label_7F28FCC0;
    case 0x7F28FCE0u: goto label_7F28FCE0;
    case 0x7F28FCECu: goto label_7F28FCEC;
    case 0x7F28FCF0u: goto label_7F28FCF0;
    case 0x7F28FD54u: goto label_7F28FD54;
    case 0x7F28FD80u: goto label_7F28FD80;
    case 0x7F28FDB0u: goto label_7F28FDB0;
    case 0x7F28FF28u: goto label_7F28FF28;
    case 0x7F28FF54u: goto label_7F28FF54;
    case 0x7F28FF70u: goto label_7F28FF70;
    case 0x7F29001Cu: goto label_7F29001C;
    case 0x7F290044u: goto label_7F290044;
    case 0x7F29006Cu: goto label_7F29006C;
    default: return;
    }
}

