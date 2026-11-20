// DolRecomp output
#include "../generated.h"

static void loop_7F1AC2C4(CPUState* ctx) {
label_7F1AC2C4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AC2C4u;
    // 7F1AC2C4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AC2C8u;
    // 7F1AC2C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AC2CCu;
    // 7F1AC2CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AC2D0u;
    // 7F1AC2D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AC2D4: bc    16, 0, 0x7F1AC2C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC2C4u;
                return;
            }
            goto label_7F1AC2C4;
        }
    }

    ctx->pc = 0x7F1AC2D8u;
}

static void loop_7F1AC384(CPUState* ctx) {
label_7F1AC384:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AC384u;
    // 7F1AC384: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AC388u;
    // 7F1AC388: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AC38Cu;
    // 7F1AC38C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AC390u;
    // 7F1AC390: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AC394: bc    16, 0, 0x7F1AC384
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC384u;
                return;
            }
            goto label_7F1AC384;
        }
    }

    ctx->pc = 0x7F1AC398u;
}

static void loop_7F1AC3A8(CPUState* ctx) {
label_7F1AC3A8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AC3A8u;
    // 7F1AC3A8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AC3ACu;
    // 7F1AC3AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AC3B0u;
    // 7F1AC3B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AC3B4u;
    // 7F1AC3B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AC3B8: bc    16, 0, 0x7F1AC3A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC3A8u;
                return;
            }
            goto label_7F1AC3A8;
        }
    }

    ctx->pc = 0x7F1AC3BCu;
}

static void loop_7F1AD084(CPUState* ctx) {
label_7F1AD084:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD084u;
    // 7F1AD084: lwz     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD088u;
    // 7F1AD088: lwzu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

    ctx->pc = 0x7F1AD08Cu;
    // 7F1AD08C: stw     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F1AD090u;
    // 7F1AD090: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

    // 7F1AD094: bc    16, 0, 0x7F1AD084
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD084u;
                return;
            }
            goto label_7F1AD084;
        }
    }

    ctx->pc = 0x7F1AD098u;
}

static void loop_7F1AD240(CPUState* ctx) {
label_7F1AD240:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD240u;
    // 7F1AD240: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD244u;
    // 7F1AD244: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F1AD248u;
    // 7F1AD248: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1AD24Cu;
    // 7F1AD24C: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F1AD250: bc    16, 0, 0x7F1AD240
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD240u;
                return;
            }
            goto label_7F1AD240;
        }
    }

    ctx->pc = 0x7F1AD254u;
}

static void loop_7F1AD6C0(CPUState* ctx) {
label_7F1AD6C0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD6C0u;
    // 7F1AD6C0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD6C4u;
    // 7F1AD6C4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AD6C8u;
    // 7F1AD6C8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AD6CCu;
    // 7F1AD6CC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F1AD6D0: bc    16, 0, 0x7F1AD6C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD6C0u;
                return;
            }
            goto label_7F1AD6C0;
        }
    }

    ctx->pc = 0x7F1AD6D4u;
}

static void loop_7F1AD7C4(CPUState* ctx) {
label_7F1AD7C4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD7C4u;
    // 7F1AD7C4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD7C8u;
    // 7F1AD7C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AD7CCu;
    // 7F1AD7CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AD7D0u;
    // 7F1AD7D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AD7D4: bc    16, 0, 0x7F1AD7C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD7C4u;
                return;
            }
            goto label_7F1AD7C4;
        }
    }

    ctx->pc = 0x7F1AD7D8u;
}

static void loop_7F1AD94C(CPUState* ctx) {
label_7F1AD94C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD94Cu;
    // 7F1AD94C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD950u;
    // 7F1AD950: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AD954u;
    // 7F1AD954: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AD958u;
    // 7F1AD958: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AD95C: bc    16, 0, 0x7F1AD94C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD94Cu;
                return;
            }
            goto label_7F1AD94C;
        }
    }

    ctx->pc = 0x7F1AD960u;
}

static void loop_7F1AD9AC(CPUState* ctx) {
label_7F1AD9AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AD9ACu;
    // 7F1AD9AC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AD9B0u;
    // 7F1AD9B0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AD9B4u;
    // 7F1AD9B4: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AD9B8u;
    // 7F1AD9B8: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F1AD9BC: bc    16, 0, 0x7F1AD9AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD9ACu;
                return;
            }
            goto label_7F1AD9AC;
        }
    }

    ctx->pc = 0x7F1AD9C0u;
}

static void loop_7F1ADA64(CPUState* ctx) {
label_7F1ADA64:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1ADA64u;
    // 7F1ADA64: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1ADA68u;
    // 7F1ADA68: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1ADA6Cu;
    // 7F1ADA6C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1ADA70u;
    // 7F1ADA70: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1ADA74: bc    16, 0, 0x7F1ADA64
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADA64u;
                return;
            }
            goto label_7F1ADA64;
        }
    }

    ctx->pc = 0x7F1ADA78u;
}

static void loop_7F1ADA88(CPUState* ctx) {
label_7F1ADA88:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1ADA88u;
    // 7F1ADA88: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1ADA8Cu;
    // 7F1ADA8C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1ADA90u;
    // 7F1ADA90: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1ADA94u;
    // 7F1ADA94: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1ADA98: bc    16, 0, 0x7F1ADA88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADA88u;
                return;
            }
            goto label_7F1ADA88;
        }
    }

    ctx->pc = 0x7F1ADA9Cu;
}

static void loop_7F1ADF98(CPUState* ctx) {
label_7F1ADF98:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1ADF98u;
    // 7F1ADF98: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1ADF9Cu;
    // 7F1ADF9C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1ADFA0u;
    // 7F1ADFA0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1ADFA4u;
    // 7F1ADFA4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1ADFA8: bc    16, 0, 0x7F1ADF98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADF98u;
                return;
            }
            goto label_7F1ADF98;
        }
    }

    ctx->pc = 0x7F1ADFACu;
}

static void loop_7F1AFFDC(CPUState* ctx) {
label_7F1AFFDC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AFFDCu;
    // 7F1AFFDC: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AFFE0u;
    // 7F1AFFE0: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x7F1AFFE4u;
    // 7F1AFFE4: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1AFFE8u;
    // 7F1AFFE8: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F1AFFEC: bc    16, 0, 0x7F1AFFDC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AFFDCu;
                return;
            }
            goto label_7F1AFFDC;
        }
    }

    ctx->pc = 0x7F1AFFF0u;
}

void func_7F1AC0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1AC0ECu: goto label_7F1AC0EC;
    case 0x7F1AC0F0u: goto label_7F1AC0F0;
    case 0x7F1AC0F4u: goto label_7F1AC0F4;
    case 0x7F1AC0F8u: goto label_7F1AC0F8;
    case 0x7F1AC0FCu: goto label_7F1AC0FC;
    case 0x7F1AC100u: goto label_7F1AC100;
    case 0x7F1AC104u: goto label_7F1AC104;
    case 0x7F1AC108u: goto label_7F1AC108;
    case 0x7F1AC10Cu: goto label_7F1AC10C;
    case 0x7F1AC110u: goto label_7F1AC110;
    case 0x7F1AC114u: goto label_7F1AC114;
    case 0x7F1AC118u: goto label_7F1AC118;
    case 0x7F1AC11Cu: goto label_7F1AC11C;
    case 0x7F1AC120u: goto label_7F1AC120;
    case 0x7F1AC124u: goto label_7F1AC124;
    case 0x7F1AC128u: goto label_7F1AC128;
    case 0x7F1AC12Cu: goto label_7F1AC12C;
    case 0x7F1AC130u: goto label_7F1AC130;
    case 0x7F1AC134u: goto label_7F1AC134;
    case 0x7F1AC138u: goto label_7F1AC138;
    case 0x7F1AC13Cu: goto label_7F1AC13C;
    case 0x7F1AC140u: goto label_7F1AC140;
    case 0x7F1AC144u: goto label_7F1AC144;
    case 0x7F1AC148u: goto label_7F1AC148;
    case 0x7F1AC14Cu: goto label_7F1AC14C;
    case 0x7F1AC150u: goto label_7F1AC150;
    case 0x7F1AC154u: goto label_7F1AC154;
    case 0x7F1AC158u: goto label_7F1AC158;
    case 0x7F1AC15Cu: goto label_7F1AC15C;
    case 0x7F1AC160u: goto label_7F1AC160;
    case 0x7F1AC164u: goto label_7F1AC164;
    case 0x7F1AC168u: goto label_7F1AC168;
    case 0x7F1AC16Cu: goto label_7F1AC16C;
    case 0x7F1AC170u: goto label_7F1AC170;
    case 0x7F1AC174u: goto label_7F1AC174;
    case 0x7F1AC178u: goto label_7F1AC178;
    case 0x7F1AC17Cu: goto label_7F1AC17C;
    case 0x7F1AC180u: goto label_7F1AC180;
    case 0x7F1AC184u: goto label_7F1AC184;
    case 0x7F1AC188u: goto label_7F1AC188;
    case 0x7F1AC18Cu: goto label_7F1AC18C;
    case 0x7F1AC190u: goto label_7F1AC190;
    case 0x7F1AC194u: goto label_7F1AC194;
    case 0x7F1AC198u: goto label_7F1AC198;
    case 0x7F1AC19Cu: goto label_7F1AC19C;
    case 0x7F1AC1A0u: goto label_7F1AC1A0;
    case 0x7F1AC1A4u: goto label_7F1AC1A4;
    case 0x7F1AC1A8u: goto label_7F1AC1A8;
    case 0x7F1AC1ACu: goto label_7F1AC1AC;
    case 0x7F1AC1B0u: goto label_7F1AC1B0;
    case 0x7F1AC1B4u: goto label_7F1AC1B4;
    case 0x7F1AC1B8u: goto label_7F1AC1B8;
    case 0x7F1AC1BCu: goto label_7F1AC1BC;
    case 0x7F1AC1C0u: goto label_7F1AC1C0;
    case 0x7F1AC1C4u: goto label_7F1AC1C4;
    case 0x7F1AC1C8u: goto label_7F1AC1C8;
    case 0x7F1AC1CCu: goto label_7F1AC1CC;
    case 0x7F1AC1D0u: goto label_7F1AC1D0;
    case 0x7F1AC1D4u: goto label_7F1AC1D4;
    case 0x7F1AC1D8u: goto label_7F1AC1D8;
    case 0x7F1AC1DCu: goto label_7F1AC1DC;
    case 0x7F1AC1E0u: goto label_7F1AC1E0;
    case 0x7F1AC1E4u: goto label_7F1AC1E4;
    case 0x7F1AC1E8u: goto label_7F1AC1E8;
    case 0x7F1AC1ECu: goto label_7F1AC1EC;
    case 0x7F1AC1F0u: goto label_7F1AC1F0;
    case 0x7F1AC1F4u: goto label_7F1AC1F4;
    case 0x7F1AC1F8u: goto label_7F1AC1F8;
    case 0x7F1AC1FCu: goto label_7F1AC1FC;
    case 0x7F1AC200u: goto label_7F1AC200;
    case 0x7F1AC204u: goto label_7F1AC204;
    case 0x7F1AC208u: goto label_7F1AC208;
    case 0x7F1AC20Cu: goto label_7F1AC20C;
    case 0x7F1AC210u: goto label_7F1AC210;
    case 0x7F1AC214u: goto label_7F1AC214;
    case 0x7F1AC218u: goto label_7F1AC218;
    case 0x7F1AC21Cu: goto label_7F1AC21C;
    case 0x7F1AC220u: goto label_7F1AC220;
    case 0x7F1AC224u: goto label_7F1AC224;
    case 0x7F1AC228u: goto label_7F1AC228;
    case 0x7F1AC22Cu: goto label_7F1AC22C;
    case 0x7F1AC230u: goto label_7F1AC230;
    case 0x7F1AC234u: goto label_7F1AC234;
    case 0x7F1AC238u: goto label_7F1AC238;
    case 0x7F1AC23Cu: goto label_7F1AC23C;
    case 0x7F1AC240u: goto label_7F1AC240;
    case 0x7F1AC244u: goto label_7F1AC244;
    case 0x7F1AC248u: goto label_7F1AC248;
    case 0x7F1AC24Cu: goto label_7F1AC24C;
    case 0x7F1AC250u: goto label_7F1AC250;
    case 0x7F1AC254u: goto label_7F1AC254;
    case 0x7F1AC258u: goto label_7F1AC258;
    case 0x7F1AC25Cu: goto label_7F1AC25C;
    case 0x7F1AC260u: goto label_7F1AC260;
    case 0x7F1AC264u: goto label_7F1AC264;
    case 0x7F1AC268u: goto label_7F1AC268;
    case 0x7F1AC26Cu: goto label_7F1AC26C;
    case 0x7F1AC270u: goto label_7F1AC270;
    case 0x7F1AC274u: goto label_7F1AC274;
    case 0x7F1AC278u: goto label_7F1AC278;
    case 0x7F1AC27Cu: goto label_7F1AC27C;
    case 0x7F1AC280u: goto label_7F1AC280;
    case 0x7F1AC284u: goto label_7F1AC284;
    case 0x7F1AC288u: goto label_7F1AC288;
    case 0x7F1AC28Cu: goto label_7F1AC28C;
    case 0x7F1AC290u: goto label_7F1AC290;
    case 0x7F1AC294u: goto label_7F1AC294;
    case 0x7F1AC298u: goto label_7F1AC298;
    case 0x7F1AC29Cu: goto label_7F1AC29C;
    case 0x7F1AC2A0u: goto label_7F1AC2A0;
    case 0x7F1AC2A4u: goto label_7F1AC2A4;
    case 0x7F1AC2A8u: goto label_7F1AC2A8;
    case 0x7F1AC2ACu: goto label_7F1AC2AC;
    case 0x7F1AC2B0u: goto label_7F1AC2B0;
    case 0x7F1AC2B4u: goto label_7F1AC2B4;
    case 0x7F1AC2B8u: goto label_7F1AC2B8;
    case 0x7F1AC2BCu: goto label_7F1AC2BC;
    case 0x7F1AC2C0u: goto label_7F1AC2C0;
    case 0x7F1AC2C4u: goto label_7F1AC2C4;
    case 0x7F1AC2C8u: goto label_7F1AC2C8;
    case 0x7F1AC2CCu: goto label_7F1AC2CC;
    case 0x7F1AC2D0u: goto label_7F1AC2D0;
    case 0x7F1AC2D4u: goto label_7F1AC2D4;
    case 0x7F1AC2D8u: goto label_7F1AC2D8;
    case 0x7F1AC2DCu: goto label_7F1AC2DC;
    case 0x7F1AC2E0u: goto label_7F1AC2E0;
    case 0x7F1AC2E4u: goto label_7F1AC2E4;
    case 0x7F1AC2E8u: goto label_7F1AC2E8;
    case 0x7F1AC2ECu: goto label_7F1AC2EC;
    case 0x7F1AC2F0u: goto label_7F1AC2F0;
    case 0x7F1AC2F4u: goto label_7F1AC2F4;
    case 0x7F1AC2F8u: goto label_7F1AC2F8;
    case 0x7F1AC2FCu: goto label_7F1AC2FC;
    case 0x7F1AC300u: goto label_7F1AC300;
    case 0x7F1AC304u: goto label_7F1AC304;
    case 0x7F1AC308u: goto label_7F1AC308;
    case 0x7F1AC30Cu: goto label_7F1AC30C;
    case 0x7F1AC310u: goto label_7F1AC310;
    case 0x7F1AC314u: goto label_7F1AC314;
    case 0x7F1AC318u: goto label_7F1AC318;
    case 0x7F1AC31Cu: goto label_7F1AC31C;
    case 0x7F1AC320u: goto label_7F1AC320;
    case 0x7F1AC324u: goto label_7F1AC324;
    case 0x7F1AC328u: goto label_7F1AC328;
    case 0x7F1AC32Cu: goto label_7F1AC32C;
    case 0x7F1AC330u: goto label_7F1AC330;
    case 0x7F1AC334u: goto label_7F1AC334;
    case 0x7F1AC338u: goto label_7F1AC338;
    case 0x7F1AC33Cu: goto label_7F1AC33C;
    case 0x7F1AC340u: goto label_7F1AC340;
    case 0x7F1AC344u: goto label_7F1AC344;
    case 0x7F1AC348u: goto label_7F1AC348;
    case 0x7F1AC34Cu: goto label_7F1AC34C;
    case 0x7F1AC350u: goto label_7F1AC350;
    case 0x7F1AC354u: goto label_7F1AC354;
    case 0x7F1AC358u: goto label_7F1AC358;
    case 0x7F1AC35Cu: goto label_7F1AC35C;
    case 0x7F1AC360u: goto label_7F1AC360;
    case 0x7F1AC364u: goto label_7F1AC364;
    case 0x7F1AC368u: goto label_7F1AC368;
    case 0x7F1AC36Cu: goto label_7F1AC36C;
    case 0x7F1AC370u: goto label_7F1AC370;
    case 0x7F1AC374u: goto label_7F1AC374;
    case 0x7F1AC378u: goto label_7F1AC378;
    case 0x7F1AC37Cu: goto label_7F1AC37C;
    case 0x7F1AC380u: goto label_7F1AC380;
    case 0x7F1AC384u: goto label_7F1AC384;
    case 0x7F1AC388u: goto label_7F1AC388;
    case 0x7F1AC38Cu: goto label_7F1AC38C;
    case 0x7F1AC390u: goto label_7F1AC390;
    case 0x7F1AC394u: goto label_7F1AC394;
    case 0x7F1AC398u: goto label_7F1AC398;
    case 0x7F1AC39Cu: goto label_7F1AC39C;
    case 0x7F1AC3A0u: goto label_7F1AC3A0;
    case 0x7F1AC3A4u: goto label_7F1AC3A4;
    case 0x7F1AC3A8u: goto label_7F1AC3A8;
    case 0x7F1AC3ACu: goto label_7F1AC3AC;
    case 0x7F1AC3B0u: goto label_7F1AC3B0;
    case 0x7F1AC3B4u: goto label_7F1AC3B4;
    case 0x7F1AC3B8u: goto label_7F1AC3B8;
    case 0x7F1AC3BCu: goto label_7F1AC3BC;
    case 0x7F1AC3C0u: goto label_7F1AC3C0;
    case 0x7F1AC3C4u: goto label_7F1AC3C4;
    case 0x7F1AC3C8u: goto label_7F1AC3C8;
    case 0x7F1AC3CCu: goto label_7F1AC3CC;
    case 0x7F1AC3D0u: goto label_7F1AC3D0;
    case 0x7F1AC3D4u: goto label_7F1AC3D4;
    case 0x7F1AC3D8u: goto label_7F1AC3D8;
    case 0x7F1AC3DCu: goto label_7F1AC3DC;
    case 0x7F1AC3E0u: goto label_7F1AC3E0;
    case 0x7F1AC3E4u: goto label_7F1AC3E4;
    case 0x7F1AC3E8u: goto label_7F1AC3E8;
    case 0x7F1AC3ECu: goto label_7F1AC3EC;
    case 0x7F1AC3F0u: goto label_7F1AC3F0;
    case 0x7F1AC3F4u: goto label_7F1AC3F4;
    case 0x7F1AC3F8u: goto label_7F1AC3F8;
    case 0x7F1AC3FCu: goto label_7F1AC3FC;
    case 0x7F1AC400u: goto label_7F1AC400;
    case 0x7F1AC404u: goto label_7F1AC404;
    case 0x7F1AC408u: goto label_7F1AC408;
    case 0x7F1AC40Cu: goto label_7F1AC40C;
    case 0x7F1AC410u: goto label_7F1AC410;
    case 0x7F1AC414u: goto label_7F1AC414;
    case 0x7F1AC418u: goto label_7F1AC418;
    case 0x7F1AC41Cu: goto label_7F1AC41C;
    case 0x7F1AC420u: goto label_7F1AC420;
    case 0x7F1AC424u: goto label_7F1AC424;
    case 0x7F1AC428u: goto label_7F1AC428;
    case 0x7F1AC42Cu: goto label_7F1AC42C;
    case 0x7F1AC430u: goto label_7F1AC430;
    case 0x7F1AC434u: goto label_7F1AC434;
    case 0x7F1AC438u: goto label_7F1AC438;
    case 0x7F1AC43Cu: goto label_7F1AC43C;
    case 0x7F1AC440u: goto label_7F1AC440;
    case 0x7F1AC444u: goto label_7F1AC444;
    case 0x7F1AC448u: goto label_7F1AC448;
    case 0x7F1AC44Cu: goto label_7F1AC44C;
    case 0x7F1AC450u: goto label_7F1AC450;
    case 0x7F1AC454u: goto label_7F1AC454;
    case 0x7F1AC458u: goto label_7F1AC458;
    case 0x7F1AC45Cu: goto label_7F1AC45C;
    case 0x7F1AC460u: goto label_7F1AC460;
    case 0x7F1AC464u: goto label_7F1AC464;
    case 0x7F1AC468u: goto label_7F1AC468;
    case 0x7F1AC46Cu: goto label_7F1AC46C;
    case 0x7F1AC470u: goto label_7F1AC470;
    case 0x7F1AC474u: goto label_7F1AC474;
    case 0x7F1AC478u: goto label_7F1AC478;
    case 0x7F1AC47Cu: goto label_7F1AC47C;
    case 0x7F1AC480u: goto label_7F1AC480;
    case 0x7F1AC484u: goto label_7F1AC484;
    case 0x7F1AC488u: goto label_7F1AC488;
    case 0x7F1AC48Cu: goto label_7F1AC48C;
    case 0x7F1AC490u: goto label_7F1AC490;
    case 0x7F1AC494u: goto label_7F1AC494;
    case 0x7F1AC498u: goto label_7F1AC498;
    case 0x7F1AC49Cu: goto label_7F1AC49C;
    case 0x7F1AC4A0u: goto label_7F1AC4A0;
    case 0x7F1AC4A4u: goto label_7F1AC4A4;
    case 0x7F1AC4A8u: goto label_7F1AC4A8;
    case 0x7F1AC4ACu: goto label_7F1AC4AC;
    case 0x7F1AC4B0u: goto label_7F1AC4B0;
    case 0x7F1AC4B4u: goto label_7F1AC4B4;
    case 0x7F1AC4B8u: goto label_7F1AC4B8;
    case 0x7F1AC4BCu: goto label_7F1AC4BC;
    case 0x7F1AC4C0u: goto label_7F1AC4C0;
    case 0x7F1AC4C4u: goto label_7F1AC4C4;
    case 0x7F1AC4C8u: goto label_7F1AC4C8;
    case 0x7F1AC4CCu: goto label_7F1AC4CC;
    case 0x7F1AC4D0u: goto label_7F1AC4D0;
    case 0x7F1AC4D4u: goto label_7F1AC4D4;
    case 0x7F1AC4D8u: goto label_7F1AC4D8;
    case 0x7F1AC4DCu: goto label_7F1AC4DC;
    case 0x7F1AC4E0u: goto label_7F1AC4E0;
    case 0x7F1AC4E4u: goto label_7F1AC4E4;
    case 0x7F1AC4E8u: goto label_7F1AC4E8;
    case 0x7F1AC4ECu: goto label_7F1AC4EC;
    case 0x7F1AC4F0u: goto label_7F1AC4F0;
    case 0x7F1AC4F4u: goto label_7F1AC4F4;
    case 0x7F1AC4F8u: goto label_7F1AC4F8;
    case 0x7F1AC4FCu: goto label_7F1AC4FC;
    case 0x7F1AC500u: goto label_7F1AC500;
    case 0x7F1AC504u: goto label_7F1AC504;
    case 0x7F1AC508u: goto label_7F1AC508;
    case 0x7F1AC50Cu: goto label_7F1AC50C;
    case 0x7F1AC510u: goto label_7F1AC510;
    case 0x7F1AC514u: goto label_7F1AC514;
    case 0x7F1AC518u: goto label_7F1AC518;
    case 0x7F1AC51Cu: goto label_7F1AC51C;
    case 0x7F1AC520u: goto label_7F1AC520;
    case 0x7F1AC524u: goto label_7F1AC524;
    case 0x7F1AC528u: goto label_7F1AC528;
    case 0x7F1AC52Cu: goto label_7F1AC52C;
    case 0x7F1AC530u: goto label_7F1AC530;
    case 0x7F1AC534u: goto label_7F1AC534;
    case 0x7F1AC538u: goto label_7F1AC538;
    case 0x7F1AC53Cu: goto label_7F1AC53C;
    case 0x7F1AC540u: goto label_7F1AC540;
    case 0x7F1AC544u: goto label_7F1AC544;
    case 0x7F1AC548u: goto label_7F1AC548;
    case 0x7F1AC54Cu: goto label_7F1AC54C;
    case 0x7F1AC550u: goto label_7F1AC550;
    case 0x7F1AC554u: goto label_7F1AC554;
    case 0x7F1AC558u: goto label_7F1AC558;
    case 0x7F1AC55Cu: goto label_7F1AC55C;
    case 0x7F1AC560u: goto label_7F1AC560;
    case 0x7F1AC564u: goto label_7F1AC564;
    case 0x7F1AC568u: goto label_7F1AC568;
    case 0x7F1AC56Cu: goto label_7F1AC56C;
    case 0x7F1AC570u: goto label_7F1AC570;
    case 0x7F1AC574u: goto label_7F1AC574;
    case 0x7F1AC578u: goto label_7F1AC578;
    case 0x7F1AC57Cu: goto label_7F1AC57C;
    case 0x7F1AC580u: goto label_7F1AC580;
    case 0x7F1AC584u: goto label_7F1AC584;
    case 0x7F1AC588u: goto label_7F1AC588;
    case 0x7F1AC58Cu: goto label_7F1AC58C;
    case 0x7F1AC590u: goto label_7F1AC590;
    case 0x7F1AC594u: goto label_7F1AC594;
    case 0x7F1AC598u: goto label_7F1AC598;
    case 0x7F1AC59Cu: goto label_7F1AC59C;
    case 0x7F1AC5A0u: goto label_7F1AC5A0;
    case 0x7F1AC5A4u: goto label_7F1AC5A4;
    case 0x7F1AC5A8u: goto label_7F1AC5A8;
    case 0x7F1AC5ACu: goto label_7F1AC5AC;
    case 0x7F1AC5B0u: goto label_7F1AC5B0;
    case 0x7F1AC5B4u: goto label_7F1AC5B4;
    case 0x7F1AC5B8u: goto label_7F1AC5B8;
    case 0x7F1AC5BCu: goto label_7F1AC5BC;
    case 0x7F1AC5C0u: goto label_7F1AC5C0;
    case 0x7F1AC5C4u: goto label_7F1AC5C4;
    case 0x7F1AC5C8u: goto label_7F1AC5C8;
    case 0x7F1AC5CCu: goto label_7F1AC5CC;
    case 0x7F1AC5D0u: goto label_7F1AC5D0;
    case 0x7F1AC5D4u: goto label_7F1AC5D4;
    case 0x7F1AC5D8u: goto label_7F1AC5D8;
    case 0x7F1AC5DCu: goto label_7F1AC5DC;
    case 0x7F1AC5E0u: goto label_7F1AC5E0;
    case 0x7F1AC5E4u: goto label_7F1AC5E4;
    case 0x7F1AC5E8u: goto label_7F1AC5E8;
    case 0x7F1AC5ECu: goto label_7F1AC5EC;
    case 0x7F1AC5F0u: goto label_7F1AC5F0;
    case 0x7F1AC5F4u: goto label_7F1AC5F4;
    case 0x7F1AC5F8u: goto label_7F1AC5F8;
    case 0x7F1AC5FCu: goto label_7F1AC5FC;
    case 0x7F1AC600u: goto label_7F1AC600;
    case 0x7F1AC604u: goto label_7F1AC604;
    case 0x7F1AC608u: goto label_7F1AC608;
    case 0x7F1AC60Cu: goto label_7F1AC60C;
    case 0x7F1AC610u: goto label_7F1AC610;
    case 0x7F1AC614u: goto label_7F1AC614;
    case 0x7F1AC618u: goto label_7F1AC618;
    case 0x7F1AC61Cu: goto label_7F1AC61C;
    case 0x7F1AC620u: goto label_7F1AC620;
    case 0x7F1AC624u: goto label_7F1AC624;
    case 0x7F1AC628u: goto label_7F1AC628;
    case 0x7F1AC62Cu: goto label_7F1AC62C;
    case 0x7F1AC630u: goto label_7F1AC630;
    case 0x7F1AC634u: goto label_7F1AC634;
    case 0x7F1AC638u: goto label_7F1AC638;
    case 0x7F1AC63Cu: goto label_7F1AC63C;
    case 0x7F1AC640u: goto label_7F1AC640;
    case 0x7F1AC644u: goto label_7F1AC644;
    case 0x7F1AC648u: goto label_7F1AC648;
    case 0x7F1AC64Cu: goto label_7F1AC64C;
    case 0x7F1AC650u: goto label_7F1AC650;
    case 0x7F1AC654u: goto label_7F1AC654;
    case 0x7F1AC658u: goto label_7F1AC658;
    case 0x7F1AC65Cu: goto label_7F1AC65C;
    case 0x7F1AC660u: goto label_7F1AC660;
    case 0x7F1AC664u: goto label_7F1AC664;
    case 0x7F1AC668u: goto label_7F1AC668;
    case 0x7F1AC66Cu: goto label_7F1AC66C;
    case 0x7F1AC670u: goto label_7F1AC670;
    case 0x7F1AC674u: goto label_7F1AC674;
    case 0x7F1AC678u: goto label_7F1AC678;
    case 0x7F1AC67Cu: goto label_7F1AC67C;
    case 0x7F1AC680u: goto label_7F1AC680;
    case 0x7F1AC684u: goto label_7F1AC684;
    case 0x7F1AC688u: goto label_7F1AC688;
    case 0x7F1AC68Cu: goto label_7F1AC68C;
    case 0x7F1AC690u: goto label_7F1AC690;
    case 0x7F1AC694u: goto label_7F1AC694;
    case 0x7F1AC698u: goto label_7F1AC698;
    case 0x7F1AC69Cu: goto label_7F1AC69C;
    case 0x7F1AC6A0u: goto label_7F1AC6A0;
    case 0x7F1AC6A4u: goto label_7F1AC6A4;
    case 0x7F1AC6A8u: goto label_7F1AC6A8;
    case 0x7F1AC6ACu: goto label_7F1AC6AC;
    case 0x7F1AC6B0u: goto label_7F1AC6B0;
    case 0x7F1AC6B4u: goto label_7F1AC6B4;
    case 0x7F1AC6B8u: goto label_7F1AC6B8;
    case 0x7F1AC6BCu: goto label_7F1AC6BC;
    case 0x7F1AC6C0u: goto label_7F1AC6C0;
    case 0x7F1AC6C4u: goto label_7F1AC6C4;
    case 0x7F1AC6C8u: goto label_7F1AC6C8;
    case 0x7F1AC6CCu: goto label_7F1AC6CC;
    case 0x7F1AC6D0u: goto label_7F1AC6D0;
    case 0x7F1AC6D4u: goto label_7F1AC6D4;
    case 0x7F1AC6D8u: goto label_7F1AC6D8;
    case 0x7F1AC6DCu: goto label_7F1AC6DC;
    case 0x7F1AC6E0u: goto label_7F1AC6E0;
    case 0x7F1AC6E4u: goto label_7F1AC6E4;
    case 0x7F1AC6E8u: goto label_7F1AC6E8;
    case 0x7F1AC6ECu: goto label_7F1AC6EC;
    case 0x7F1AC6F0u: goto label_7F1AC6F0;
    case 0x7F1AC6F4u: goto label_7F1AC6F4;
    case 0x7F1AC6F8u: goto label_7F1AC6F8;
    case 0x7F1AC6FCu: goto label_7F1AC6FC;
    case 0x7F1AC700u: goto label_7F1AC700;
    case 0x7F1AC704u: goto label_7F1AC704;
    case 0x7F1AC708u: goto label_7F1AC708;
    case 0x7F1AC70Cu: goto label_7F1AC70C;
    case 0x7F1AC710u: goto label_7F1AC710;
    case 0x7F1AC714u: goto label_7F1AC714;
    case 0x7F1AC718u: goto label_7F1AC718;
    case 0x7F1AC71Cu: goto label_7F1AC71C;
    case 0x7F1AC720u: goto label_7F1AC720;
    case 0x7F1AC724u: goto label_7F1AC724;
    case 0x7F1AC728u: goto label_7F1AC728;
    case 0x7F1AC72Cu: goto label_7F1AC72C;
    case 0x7F1AC730u: goto label_7F1AC730;
    case 0x7F1AC734u: goto label_7F1AC734;
    case 0x7F1AC738u: goto label_7F1AC738;
    case 0x7F1AC73Cu: goto label_7F1AC73C;
    case 0x7F1AC740u: goto label_7F1AC740;
    case 0x7F1AC744u: goto label_7F1AC744;
    case 0x7F1AC748u: goto label_7F1AC748;
    case 0x7F1AC74Cu: goto label_7F1AC74C;
    case 0x7F1AC750u: goto label_7F1AC750;
    case 0x7F1AC754u: goto label_7F1AC754;
    case 0x7F1AC758u: goto label_7F1AC758;
    case 0x7F1AC75Cu: goto label_7F1AC75C;
    case 0x7F1AC760u: goto label_7F1AC760;
    case 0x7F1AC764u: goto label_7F1AC764;
    case 0x7F1AC768u: goto label_7F1AC768;
    case 0x7F1AC76Cu: goto label_7F1AC76C;
    case 0x7F1AC770u: goto label_7F1AC770;
    case 0x7F1AC774u: goto label_7F1AC774;
    case 0x7F1AC778u: goto label_7F1AC778;
    case 0x7F1AC77Cu: goto label_7F1AC77C;
    case 0x7F1AC780u: goto label_7F1AC780;
    case 0x7F1AC784u: goto label_7F1AC784;
    case 0x7F1AC788u: goto label_7F1AC788;
    case 0x7F1AC78Cu: goto label_7F1AC78C;
    case 0x7F1AC790u: goto label_7F1AC790;
    case 0x7F1AC794u: goto label_7F1AC794;
    case 0x7F1AC798u: goto label_7F1AC798;
    case 0x7F1AC79Cu: goto label_7F1AC79C;
    case 0x7F1AC7A0u: goto label_7F1AC7A0;
    case 0x7F1AC7A4u: goto label_7F1AC7A4;
    case 0x7F1AC7A8u: goto label_7F1AC7A8;
    case 0x7F1AC7ACu: goto label_7F1AC7AC;
    case 0x7F1AC7B0u: goto label_7F1AC7B0;
    case 0x7F1AC7B4u: goto label_7F1AC7B4;
    case 0x7F1AC7B8u: goto label_7F1AC7B8;
    case 0x7F1AC7BCu: goto label_7F1AC7BC;
    case 0x7F1AC7C0u: goto label_7F1AC7C0;
    case 0x7F1AC7C4u: goto label_7F1AC7C4;
    case 0x7F1AC7C8u: goto label_7F1AC7C8;
    case 0x7F1AC7CCu: goto label_7F1AC7CC;
    case 0x7F1AC7D0u: goto label_7F1AC7D0;
    case 0x7F1AC7D4u: goto label_7F1AC7D4;
    case 0x7F1AC7D8u: goto label_7F1AC7D8;
    case 0x7F1AC7DCu: goto label_7F1AC7DC;
    case 0x7F1AC7E0u: goto label_7F1AC7E0;
    case 0x7F1AC7E4u: goto label_7F1AC7E4;
    case 0x7F1AC7E8u: goto label_7F1AC7E8;
    case 0x7F1AC7ECu: goto label_7F1AC7EC;
    case 0x7F1AC7F0u: goto label_7F1AC7F0;
    case 0x7F1AC7F4u: goto label_7F1AC7F4;
    case 0x7F1AC7F8u: goto label_7F1AC7F8;
    case 0x7F1AC7FCu: goto label_7F1AC7FC;
    case 0x7F1AC800u: goto label_7F1AC800;
    case 0x7F1AC804u: goto label_7F1AC804;
    case 0x7F1AC808u: goto label_7F1AC808;
    case 0x7F1AC80Cu: goto label_7F1AC80C;
    case 0x7F1AC810u: goto label_7F1AC810;
    case 0x7F1AC814u: goto label_7F1AC814;
    case 0x7F1AC818u: goto label_7F1AC818;
    case 0x7F1AC81Cu: goto label_7F1AC81C;
    case 0x7F1AC820u: goto label_7F1AC820;
    case 0x7F1AC824u: goto label_7F1AC824;
    case 0x7F1AC828u: goto label_7F1AC828;
    case 0x7F1AC82Cu: goto label_7F1AC82C;
    case 0x7F1AC830u: goto label_7F1AC830;
    case 0x7F1AC834u: goto label_7F1AC834;
    case 0x7F1AC838u: goto label_7F1AC838;
    case 0x7F1AC83Cu: goto label_7F1AC83C;
    case 0x7F1AC840u: goto label_7F1AC840;
    case 0x7F1AC844u: goto label_7F1AC844;
    case 0x7F1AC848u: goto label_7F1AC848;
    case 0x7F1AC84Cu: goto label_7F1AC84C;
    case 0x7F1AC850u: goto label_7F1AC850;
    case 0x7F1AC854u: goto label_7F1AC854;
    case 0x7F1AC858u: goto label_7F1AC858;
    case 0x7F1AC85Cu: goto label_7F1AC85C;
    case 0x7F1AC860u: goto label_7F1AC860;
    case 0x7F1AC864u: goto label_7F1AC864;
    case 0x7F1AC868u: goto label_7F1AC868;
    case 0x7F1AC86Cu: goto label_7F1AC86C;
    case 0x7F1AC870u: goto label_7F1AC870;
    case 0x7F1AC874u: goto label_7F1AC874;
    case 0x7F1AC878u: goto label_7F1AC878;
    case 0x7F1AC87Cu: goto label_7F1AC87C;
    case 0x7F1AC880u: goto label_7F1AC880;
    case 0x7F1AC884u: goto label_7F1AC884;
    case 0x7F1AC888u: goto label_7F1AC888;
    case 0x7F1AC88Cu: goto label_7F1AC88C;
    case 0x7F1AC890u: goto label_7F1AC890;
    case 0x7F1AC894u: goto label_7F1AC894;
    case 0x7F1AC898u: goto label_7F1AC898;
    case 0x7F1AC89Cu: goto label_7F1AC89C;
    case 0x7F1AC8A0u: goto label_7F1AC8A0;
    case 0x7F1AC8A4u: goto label_7F1AC8A4;
    case 0x7F1AC8A8u: goto label_7F1AC8A8;
    case 0x7F1AC8ACu: goto label_7F1AC8AC;
    case 0x7F1AC8B0u: goto label_7F1AC8B0;
    case 0x7F1AC8B4u: goto label_7F1AC8B4;
    case 0x7F1AC8B8u: goto label_7F1AC8B8;
    case 0x7F1AC8BCu: goto label_7F1AC8BC;
    case 0x7F1AC8C0u: goto label_7F1AC8C0;
    case 0x7F1AC8C4u: goto label_7F1AC8C4;
    case 0x7F1AC8C8u: goto label_7F1AC8C8;
    case 0x7F1AC8CCu: goto label_7F1AC8CC;
    case 0x7F1AC8D0u: goto label_7F1AC8D0;
    case 0x7F1AC8D4u: goto label_7F1AC8D4;
    case 0x7F1AC8D8u: goto label_7F1AC8D8;
    case 0x7F1AC8DCu: goto label_7F1AC8DC;
    case 0x7F1AC8E0u: goto label_7F1AC8E0;
    case 0x7F1AC8E4u: goto label_7F1AC8E4;
    case 0x7F1AC8E8u: goto label_7F1AC8E8;
    case 0x7F1AC8ECu: goto label_7F1AC8EC;
    case 0x7F1AC8F0u: goto label_7F1AC8F0;
    case 0x7F1AC8F4u: goto label_7F1AC8F4;
    case 0x7F1AC8F8u: goto label_7F1AC8F8;
    case 0x7F1AC8FCu: goto label_7F1AC8FC;
    case 0x7F1AC900u: goto label_7F1AC900;
    case 0x7F1AC904u: goto label_7F1AC904;
    case 0x7F1AC908u: goto label_7F1AC908;
    case 0x7F1AC90Cu: goto label_7F1AC90C;
    case 0x7F1AC910u: goto label_7F1AC910;
    case 0x7F1AC914u: goto label_7F1AC914;
    case 0x7F1AC918u: goto label_7F1AC918;
    case 0x7F1AC91Cu: goto label_7F1AC91C;
    case 0x7F1AC920u: goto label_7F1AC920;
    case 0x7F1AC924u: goto label_7F1AC924;
    case 0x7F1AC928u: goto label_7F1AC928;
    case 0x7F1AC92Cu: goto label_7F1AC92C;
    case 0x7F1AC930u: goto label_7F1AC930;
    case 0x7F1AC934u: goto label_7F1AC934;
    case 0x7F1AC938u: goto label_7F1AC938;
    case 0x7F1AC93Cu: goto label_7F1AC93C;
    case 0x7F1AC940u: goto label_7F1AC940;
    case 0x7F1AC944u: goto label_7F1AC944;
    case 0x7F1AC948u: goto label_7F1AC948;
    case 0x7F1AC94Cu: goto label_7F1AC94C;
    case 0x7F1AC950u: goto label_7F1AC950;
    case 0x7F1AC954u: goto label_7F1AC954;
    case 0x7F1AC958u: goto label_7F1AC958;
    case 0x7F1AC95Cu: goto label_7F1AC95C;
    case 0x7F1AC960u: goto label_7F1AC960;
    case 0x7F1AC964u: goto label_7F1AC964;
    case 0x7F1AC968u: goto label_7F1AC968;
    case 0x7F1AC96Cu: goto label_7F1AC96C;
    case 0x7F1AC970u: goto label_7F1AC970;
    case 0x7F1AC974u: goto label_7F1AC974;
    case 0x7F1AC978u: goto label_7F1AC978;
    case 0x7F1AC97Cu: goto label_7F1AC97C;
    case 0x7F1AC980u: goto label_7F1AC980;
    case 0x7F1AC984u: goto label_7F1AC984;
    case 0x7F1AC988u: goto label_7F1AC988;
    case 0x7F1AC98Cu: goto label_7F1AC98C;
    case 0x7F1AC990u: goto label_7F1AC990;
    case 0x7F1AC994u: goto label_7F1AC994;
    case 0x7F1AC998u: goto label_7F1AC998;
    case 0x7F1AC99Cu: goto label_7F1AC99C;
    case 0x7F1AC9A0u: goto label_7F1AC9A0;
    case 0x7F1AC9A4u: goto label_7F1AC9A4;
    case 0x7F1AC9A8u: goto label_7F1AC9A8;
    case 0x7F1AC9ACu: goto label_7F1AC9AC;
    case 0x7F1AC9B0u: goto label_7F1AC9B0;
    case 0x7F1AC9B4u: goto label_7F1AC9B4;
    case 0x7F1AC9B8u: goto label_7F1AC9B8;
    case 0x7F1AC9BCu: goto label_7F1AC9BC;
    case 0x7F1AC9C0u: goto label_7F1AC9C0;
    case 0x7F1AC9C4u: goto label_7F1AC9C4;
    case 0x7F1AC9C8u: goto label_7F1AC9C8;
    case 0x7F1AC9CCu: goto label_7F1AC9CC;
    case 0x7F1AC9D0u: goto label_7F1AC9D0;
    case 0x7F1AC9D4u: goto label_7F1AC9D4;
    case 0x7F1AC9D8u: goto label_7F1AC9D8;
    case 0x7F1AC9DCu: goto label_7F1AC9DC;
    case 0x7F1AC9E0u: goto label_7F1AC9E0;
    case 0x7F1AC9E4u: goto label_7F1AC9E4;
    case 0x7F1AC9E8u: goto label_7F1AC9E8;
    case 0x7F1AC9ECu: goto label_7F1AC9EC;
    case 0x7F1AC9F0u: goto label_7F1AC9F0;
    case 0x7F1AC9F4u: goto label_7F1AC9F4;
    case 0x7F1AC9F8u: goto label_7F1AC9F8;
    case 0x7F1AC9FCu: goto label_7F1AC9FC;
    case 0x7F1ACA00u: goto label_7F1ACA00;
    case 0x7F1ACA04u: goto label_7F1ACA04;
    case 0x7F1ACA08u: goto label_7F1ACA08;
    case 0x7F1ACA0Cu: goto label_7F1ACA0C;
    case 0x7F1ACA10u: goto label_7F1ACA10;
    case 0x7F1ACA14u: goto label_7F1ACA14;
    case 0x7F1ACA18u: goto label_7F1ACA18;
    case 0x7F1ACA1Cu: goto label_7F1ACA1C;
    case 0x7F1ACA20u: goto label_7F1ACA20;
    case 0x7F1ACA24u: goto label_7F1ACA24;
    case 0x7F1ACA28u: goto label_7F1ACA28;
    case 0x7F1ACA2Cu: goto label_7F1ACA2C;
    case 0x7F1ACA30u: goto label_7F1ACA30;
    case 0x7F1ACA34u: goto label_7F1ACA34;
    case 0x7F1ACA38u: goto label_7F1ACA38;
    case 0x7F1ACA3Cu: goto label_7F1ACA3C;
    case 0x7F1ACA40u: goto label_7F1ACA40;
    case 0x7F1ACA44u: goto label_7F1ACA44;
    case 0x7F1ACA48u: goto label_7F1ACA48;
    case 0x7F1ACA4Cu: goto label_7F1ACA4C;
    case 0x7F1ACA50u: goto label_7F1ACA50;
    case 0x7F1ACA54u: goto label_7F1ACA54;
    case 0x7F1ACA58u: goto label_7F1ACA58;
    case 0x7F1ACA5Cu: goto label_7F1ACA5C;
    case 0x7F1ACA60u: goto label_7F1ACA60;
    case 0x7F1ACA64u: goto label_7F1ACA64;
    case 0x7F1ACA68u: goto label_7F1ACA68;
    case 0x7F1ACA6Cu: goto label_7F1ACA6C;
    case 0x7F1ACA70u: goto label_7F1ACA70;
    case 0x7F1ACA74u: goto label_7F1ACA74;
    case 0x7F1ACA78u: goto label_7F1ACA78;
    case 0x7F1ACA7Cu: goto label_7F1ACA7C;
    case 0x7F1ACA80u: goto label_7F1ACA80;
    case 0x7F1ACA84u: goto label_7F1ACA84;
    case 0x7F1ACA88u: goto label_7F1ACA88;
    case 0x7F1ACA8Cu: goto label_7F1ACA8C;
    case 0x7F1ACA90u: goto label_7F1ACA90;
    case 0x7F1ACA94u: goto label_7F1ACA94;
    case 0x7F1ACA98u: goto label_7F1ACA98;
    case 0x7F1ACA9Cu: goto label_7F1ACA9C;
    case 0x7F1ACAA0u: goto label_7F1ACAA0;
    case 0x7F1ACAA4u: goto label_7F1ACAA4;
    case 0x7F1ACAA8u: goto label_7F1ACAA8;
    case 0x7F1ACAACu: goto label_7F1ACAAC;
    case 0x7F1ACAB0u: goto label_7F1ACAB0;
    case 0x7F1ACAB4u: goto label_7F1ACAB4;
    case 0x7F1ACAB8u: goto label_7F1ACAB8;
    case 0x7F1ACABCu: goto label_7F1ACABC;
    case 0x7F1ACAC0u: goto label_7F1ACAC0;
    case 0x7F1ACAC4u: goto label_7F1ACAC4;
    case 0x7F1ACAC8u: goto label_7F1ACAC8;
    case 0x7F1ACACCu: goto label_7F1ACACC;
    case 0x7F1ACAD0u: goto label_7F1ACAD0;
    case 0x7F1ACAD4u: goto label_7F1ACAD4;
    case 0x7F1ACAD8u: goto label_7F1ACAD8;
    case 0x7F1ACADCu: goto label_7F1ACADC;
    case 0x7F1ACAE0u: goto label_7F1ACAE0;
    case 0x7F1ACAE4u: goto label_7F1ACAE4;
    case 0x7F1ACAE8u: goto label_7F1ACAE8;
    case 0x7F1ACAECu: goto label_7F1ACAEC;
    case 0x7F1ACAF0u: goto label_7F1ACAF0;
    case 0x7F1ACAF4u: goto label_7F1ACAF4;
    case 0x7F1ACAF8u: goto label_7F1ACAF8;
    case 0x7F1ACAFCu: goto label_7F1ACAFC;
    case 0x7F1ACB00u: goto label_7F1ACB00;
    case 0x7F1ACB04u: goto label_7F1ACB04;
    case 0x7F1ACB08u: goto label_7F1ACB08;
    case 0x7F1ACB0Cu: goto label_7F1ACB0C;
    case 0x7F1ACB10u: goto label_7F1ACB10;
    case 0x7F1ACB14u: goto label_7F1ACB14;
    case 0x7F1ACB18u: goto label_7F1ACB18;
    case 0x7F1ACB1Cu: goto label_7F1ACB1C;
    case 0x7F1ACB20u: goto label_7F1ACB20;
    case 0x7F1ACB24u: goto label_7F1ACB24;
    case 0x7F1ACB28u: goto label_7F1ACB28;
    case 0x7F1ACB2Cu: goto label_7F1ACB2C;
    case 0x7F1ACB30u: goto label_7F1ACB30;
    case 0x7F1ACB34u: goto label_7F1ACB34;
    case 0x7F1ACB38u: goto label_7F1ACB38;
    case 0x7F1ACB3Cu: goto label_7F1ACB3C;
    case 0x7F1ACB40u: goto label_7F1ACB40;
    case 0x7F1ACB44u: goto label_7F1ACB44;
    case 0x7F1ACB48u: goto label_7F1ACB48;
    case 0x7F1ACB4Cu: goto label_7F1ACB4C;
    case 0x7F1ACB50u: goto label_7F1ACB50;
    case 0x7F1ACB54u: goto label_7F1ACB54;
    case 0x7F1ACB58u: goto label_7F1ACB58;
    case 0x7F1ACB5Cu: goto label_7F1ACB5C;
    case 0x7F1ACB60u: goto label_7F1ACB60;
    case 0x7F1ACB64u: goto label_7F1ACB64;
    case 0x7F1ACB68u: goto label_7F1ACB68;
    case 0x7F1ACB6Cu: goto label_7F1ACB6C;
    case 0x7F1ACB70u: goto label_7F1ACB70;
    case 0x7F1ACB74u: goto label_7F1ACB74;
    case 0x7F1ACB78u: goto label_7F1ACB78;
    case 0x7F1ACB7Cu: goto label_7F1ACB7C;
    case 0x7F1ACB80u: goto label_7F1ACB80;
    case 0x7F1ACB84u: goto label_7F1ACB84;
    case 0x7F1ACB88u: goto label_7F1ACB88;
    case 0x7F1ACB8Cu: goto label_7F1ACB8C;
    case 0x7F1ACB90u: goto label_7F1ACB90;
    case 0x7F1ACB94u: goto label_7F1ACB94;
    case 0x7F1ACB98u: goto label_7F1ACB98;
    case 0x7F1ACB9Cu: goto label_7F1ACB9C;
    case 0x7F1ACBA0u: goto label_7F1ACBA0;
    case 0x7F1ACBA4u: goto label_7F1ACBA4;
    case 0x7F1ACBA8u: goto label_7F1ACBA8;
    case 0x7F1ACBACu: goto label_7F1ACBAC;
    case 0x7F1ACBB0u: goto label_7F1ACBB0;
    case 0x7F1ACBB4u: goto label_7F1ACBB4;
    case 0x7F1ACBB8u: goto label_7F1ACBB8;
    case 0x7F1ACBBCu: goto label_7F1ACBBC;
    case 0x7F1ACBC0u: goto label_7F1ACBC0;
    case 0x7F1ACBC4u: goto label_7F1ACBC4;
    case 0x7F1ACBC8u: goto label_7F1ACBC8;
    case 0x7F1ACBCCu: goto label_7F1ACBCC;
    case 0x7F1ACBD0u: goto label_7F1ACBD0;
    case 0x7F1ACBD4u: goto label_7F1ACBD4;
    case 0x7F1ACBD8u: goto label_7F1ACBD8;
    case 0x7F1ACBDCu: goto label_7F1ACBDC;
    case 0x7F1ACBE0u: goto label_7F1ACBE0;
    case 0x7F1ACBE4u: goto label_7F1ACBE4;
    case 0x7F1ACBE8u: goto label_7F1ACBE8;
    case 0x7F1ACBECu: goto label_7F1ACBEC;
    case 0x7F1ACBF0u: goto label_7F1ACBF0;
    case 0x7F1ACBF4u: goto label_7F1ACBF4;
    case 0x7F1ACBF8u: goto label_7F1ACBF8;
    case 0x7F1ACBFCu: goto label_7F1ACBFC;
    case 0x7F1ACC00u: goto label_7F1ACC00;
    case 0x7F1ACC04u: goto label_7F1ACC04;
    case 0x7F1ACC08u: goto label_7F1ACC08;
    case 0x7F1ACC0Cu: goto label_7F1ACC0C;
    case 0x7F1ACC10u: goto label_7F1ACC10;
    case 0x7F1ACC14u: goto label_7F1ACC14;
    case 0x7F1ACC18u: goto label_7F1ACC18;
    case 0x7F1ACC1Cu: goto label_7F1ACC1C;
    case 0x7F1ACC20u: goto label_7F1ACC20;
    case 0x7F1ACC24u: goto label_7F1ACC24;
    case 0x7F1ACC28u: goto label_7F1ACC28;
    case 0x7F1ACC2Cu: goto label_7F1ACC2C;
    case 0x7F1ACC30u: goto label_7F1ACC30;
    case 0x7F1ACC34u: goto label_7F1ACC34;
    case 0x7F1ACC38u: goto label_7F1ACC38;
    case 0x7F1ACC3Cu: goto label_7F1ACC3C;
    case 0x7F1ACC40u: goto label_7F1ACC40;
    case 0x7F1ACC44u: goto label_7F1ACC44;
    case 0x7F1ACC48u: goto label_7F1ACC48;
    case 0x7F1ACC4Cu: goto label_7F1ACC4C;
    case 0x7F1ACC50u: goto label_7F1ACC50;
    case 0x7F1ACC54u: goto label_7F1ACC54;
    case 0x7F1ACC58u: goto label_7F1ACC58;
    case 0x7F1ACC5Cu: goto label_7F1ACC5C;
    case 0x7F1ACC60u: goto label_7F1ACC60;
    case 0x7F1ACC64u: goto label_7F1ACC64;
    case 0x7F1ACC68u: goto label_7F1ACC68;
    case 0x7F1ACC6Cu: goto label_7F1ACC6C;
    case 0x7F1ACC70u: goto label_7F1ACC70;
    case 0x7F1ACC74u: goto label_7F1ACC74;
    case 0x7F1ACC78u: goto label_7F1ACC78;
    case 0x7F1ACC7Cu: goto label_7F1ACC7C;
    case 0x7F1ACC80u: goto label_7F1ACC80;
    case 0x7F1ACC84u: goto label_7F1ACC84;
    case 0x7F1ACC88u: goto label_7F1ACC88;
    case 0x7F1ACC8Cu: goto label_7F1ACC8C;
    case 0x7F1ACC90u: goto label_7F1ACC90;
    case 0x7F1ACC94u: goto label_7F1ACC94;
    case 0x7F1ACC98u: goto label_7F1ACC98;
    case 0x7F1ACC9Cu: goto label_7F1ACC9C;
    case 0x7F1ACCA0u: goto label_7F1ACCA0;
    case 0x7F1ACCA4u: goto label_7F1ACCA4;
    case 0x7F1ACCA8u: goto label_7F1ACCA8;
    case 0x7F1ACCACu: goto label_7F1ACCAC;
    case 0x7F1ACCB0u: goto label_7F1ACCB0;
    case 0x7F1ACCB4u: goto label_7F1ACCB4;
    case 0x7F1ACCB8u: goto label_7F1ACCB8;
    case 0x7F1ACCBCu: goto label_7F1ACCBC;
    case 0x7F1ACCC0u: goto label_7F1ACCC0;
    case 0x7F1ACCC4u: goto label_7F1ACCC4;
    case 0x7F1ACCC8u: goto label_7F1ACCC8;
    case 0x7F1ACCCCu: goto label_7F1ACCCC;
    case 0x7F1ACCD0u: goto label_7F1ACCD0;
    case 0x7F1ACCD4u: goto label_7F1ACCD4;
    case 0x7F1ACCD8u: goto label_7F1ACCD8;
    case 0x7F1ACCDCu: goto label_7F1ACCDC;
    case 0x7F1ACCE0u: goto label_7F1ACCE0;
    case 0x7F1ACCE4u: goto label_7F1ACCE4;
    case 0x7F1ACCE8u: goto label_7F1ACCE8;
    case 0x7F1ACCECu: goto label_7F1ACCEC;
    case 0x7F1ACCF0u: goto label_7F1ACCF0;
    case 0x7F1ACCF4u: goto label_7F1ACCF4;
    case 0x7F1ACCF8u: goto label_7F1ACCF8;
    case 0x7F1ACCFCu: goto label_7F1ACCFC;
    case 0x7F1ACD00u: goto label_7F1ACD00;
    case 0x7F1ACD04u: goto label_7F1ACD04;
    case 0x7F1ACD08u: goto label_7F1ACD08;
    case 0x7F1ACD0Cu: goto label_7F1ACD0C;
    case 0x7F1ACD10u: goto label_7F1ACD10;
    case 0x7F1ACD14u: goto label_7F1ACD14;
    case 0x7F1ACD18u: goto label_7F1ACD18;
    case 0x7F1ACD1Cu: goto label_7F1ACD1C;
    case 0x7F1ACD20u: goto label_7F1ACD20;
    case 0x7F1ACD24u: goto label_7F1ACD24;
    case 0x7F1ACD28u: goto label_7F1ACD28;
    case 0x7F1ACD2Cu: goto label_7F1ACD2C;
    case 0x7F1ACD30u: goto label_7F1ACD30;
    case 0x7F1ACD34u: goto label_7F1ACD34;
    case 0x7F1ACD38u: goto label_7F1ACD38;
    case 0x7F1ACD3Cu: goto label_7F1ACD3C;
    case 0x7F1ACD40u: goto label_7F1ACD40;
    case 0x7F1ACD44u: goto label_7F1ACD44;
    case 0x7F1ACD48u: goto label_7F1ACD48;
    case 0x7F1ACD4Cu: goto label_7F1ACD4C;
    case 0x7F1ACD50u: goto label_7F1ACD50;
    case 0x7F1ACD54u: goto label_7F1ACD54;
    case 0x7F1ACD58u: goto label_7F1ACD58;
    case 0x7F1ACD5Cu: goto label_7F1ACD5C;
    case 0x7F1ACD60u: goto label_7F1ACD60;
    case 0x7F1ACD64u: goto label_7F1ACD64;
    case 0x7F1ACD68u: goto label_7F1ACD68;
    case 0x7F1ACD6Cu: goto label_7F1ACD6C;
    case 0x7F1ACD70u: goto label_7F1ACD70;
    case 0x7F1ACD74u: goto label_7F1ACD74;
    case 0x7F1ACD78u: goto label_7F1ACD78;
    case 0x7F1ACD7Cu: goto label_7F1ACD7C;
    case 0x7F1ACD80u: goto label_7F1ACD80;
    case 0x7F1ACD84u: goto label_7F1ACD84;
    case 0x7F1ACD88u: goto label_7F1ACD88;
    case 0x7F1ACD8Cu: goto label_7F1ACD8C;
    case 0x7F1ACD90u: goto label_7F1ACD90;
    case 0x7F1ACD94u: goto label_7F1ACD94;
    case 0x7F1ACD98u: goto label_7F1ACD98;
    case 0x7F1ACD9Cu: goto label_7F1ACD9C;
    case 0x7F1ACDA0u: goto label_7F1ACDA0;
    case 0x7F1ACDA4u: goto label_7F1ACDA4;
    case 0x7F1ACDA8u: goto label_7F1ACDA8;
    case 0x7F1ACDACu: goto label_7F1ACDAC;
    case 0x7F1ACDB0u: goto label_7F1ACDB0;
    case 0x7F1ACDB4u: goto label_7F1ACDB4;
    case 0x7F1ACDB8u: goto label_7F1ACDB8;
    case 0x7F1ACDBCu: goto label_7F1ACDBC;
    case 0x7F1ACDC0u: goto label_7F1ACDC0;
    case 0x7F1ACDC4u: goto label_7F1ACDC4;
    case 0x7F1ACDC8u: goto label_7F1ACDC8;
    case 0x7F1ACDCCu: goto label_7F1ACDCC;
    case 0x7F1ACDD0u: goto label_7F1ACDD0;
    case 0x7F1ACDD4u: goto label_7F1ACDD4;
    case 0x7F1ACDD8u: goto label_7F1ACDD8;
    case 0x7F1ACDDCu: goto label_7F1ACDDC;
    case 0x7F1ACDE0u: goto label_7F1ACDE0;
    case 0x7F1ACDE4u: goto label_7F1ACDE4;
    case 0x7F1ACDE8u: goto label_7F1ACDE8;
    case 0x7F1ACDECu: goto label_7F1ACDEC;
    case 0x7F1ACDF0u: goto label_7F1ACDF0;
    case 0x7F1ACDF4u: goto label_7F1ACDF4;
    case 0x7F1ACDF8u: goto label_7F1ACDF8;
    case 0x7F1ACDFCu: goto label_7F1ACDFC;
    case 0x7F1ACE00u: goto label_7F1ACE00;
    case 0x7F1ACE04u: goto label_7F1ACE04;
    case 0x7F1ACE08u: goto label_7F1ACE08;
    case 0x7F1ACE0Cu: goto label_7F1ACE0C;
    case 0x7F1ACE10u: goto label_7F1ACE10;
    case 0x7F1ACE14u: goto label_7F1ACE14;
    case 0x7F1ACE18u: goto label_7F1ACE18;
    case 0x7F1ACE1Cu: goto label_7F1ACE1C;
    case 0x7F1ACE20u: goto label_7F1ACE20;
    case 0x7F1ACE24u: goto label_7F1ACE24;
    case 0x7F1ACE28u: goto label_7F1ACE28;
    case 0x7F1ACE2Cu: goto label_7F1ACE2C;
    case 0x7F1ACE30u: goto label_7F1ACE30;
    case 0x7F1ACE34u: goto label_7F1ACE34;
    case 0x7F1ACE38u: goto label_7F1ACE38;
    case 0x7F1ACE3Cu: goto label_7F1ACE3C;
    case 0x7F1ACE40u: goto label_7F1ACE40;
    case 0x7F1ACE44u: goto label_7F1ACE44;
    case 0x7F1ACE48u: goto label_7F1ACE48;
    case 0x7F1ACE4Cu: goto label_7F1ACE4C;
    case 0x7F1ACE50u: goto label_7F1ACE50;
    case 0x7F1ACE54u: goto label_7F1ACE54;
    case 0x7F1ACE58u: goto label_7F1ACE58;
    case 0x7F1ACE5Cu: goto label_7F1ACE5C;
    case 0x7F1ACE60u: goto label_7F1ACE60;
    case 0x7F1ACE64u: goto label_7F1ACE64;
    case 0x7F1ACE68u: goto label_7F1ACE68;
    case 0x7F1ACE6Cu: goto label_7F1ACE6C;
    case 0x7F1ACE70u: goto label_7F1ACE70;
    case 0x7F1ACE74u: goto label_7F1ACE74;
    case 0x7F1ACE78u: goto label_7F1ACE78;
    case 0x7F1ACE7Cu: goto label_7F1ACE7C;
    case 0x7F1ACE80u: goto label_7F1ACE80;
    case 0x7F1ACE84u: goto label_7F1ACE84;
    case 0x7F1ACE88u: goto label_7F1ACE88;
    case 0x7F1ACE8Cu: goto label_7F1ACE8C;
    case 0x7F1ACE90u: goto label_7F1ACE90;
    case 0x7F1ACE94u: goto label_7F1ACE94;
    case 0x7F1ACE98u: goto label_7F1ACE98;
    case 0x7F1ACE9Cu: goto label_7F1ACE9C;
    case 0x7F1ACEA0u: goto label_7F1ACEA0;
    case 0x7F1ACEA4u: goto label_7F1ACEA4;
    case 0x7F1ACEA8u: goto label_7F1ACEA8;
    case 0x7F1ACEACu: goto label_7F1ACEAC;
    case 0x7F1ACEB0u: goto label_7F1ACEB0;
    case 0x7F1ACEB4u: goto label_7F1ACEB4;
    case 0x7F1ACEB8u: goto label_7F1ACEB8;
    case 0x7F1ACEBCu: goto label_7F1ACEBC;
    case 0x7F1ACEC0u: goto label_7F1ACEC0;
    case 0x7F1ACEC4u: goto label_7F1ACEC4;
    case 0x7F1ACEC8u: goto label_7F1ACEC8;
    case 0x7F1ACECCu: goto label_7F1ACECC;
    case 0x7F1ACED0u: goto label_7F1ACED0;
    case 0x7F1ACED4u: goto label_7F1ACED4;
    case 0x7F1ACED8u: goto label_7F1ACED8;
    case 0x7F1ACEDCu: goto label_7F1ACEDC;
    case 0x7F1ACEE0u: goto label_7F1ACEE0;
    case 0x7F1ACEE4u: goto label_7F1ACEE4;
    case 0x7F1ACEE8u: goto label_7F1ACEE8;
    case 0x7F1ACEECu: goto label_7F1ACEEC;
    case 0x7F1ACEF0u: goto label_7F1ACEF0;
    case 0x7F1ACEF4u: goto label_7F1ACEF4;
    case 0x7F1ACEF8u: goto label_7F1ACEF8;
    case 0x7F1ACEFCu: goto label_7F1ACEFC;
    case 0x7F1ACF00u: goto label_7F1ACF00;
    case 0x7F1ACF04u: goto label_7F1ACF04;
    case 0x7F1ACF08u: goto label_7F1ACF08;
    case 0x7F1ACF0Cu: goto label_7F1ACF0C;
    case 0x7F1ACF10u: goto label_7F1ACF10;
    case 0x7F1ACF14u: goto label_7F1ACF14;
    case 0x7F1ACF18u: goto label_7F1ACF18;
    case 0x7F1ACF1Cu: goto label_7F1ACF1C;
    case 0x7F1ACF20u: goto label_7F1ACF20;
    case 0x7F1ACF24u: goto label_7F1ACF24;
    case 0x7F1ACF28u: goto label_7F1ACF28;
    case 0x7F1ACF2Cu: goto label_7F1ACF2C;
    case 0x7F1ACF30u: goto label_7F1ACF30;
    case 0x7F1ACF34u: goto label_7F1ACF34;
    case 0x7F1ACF38u: goto label_7F1ACF38;
    case 0x7F1ACF3Cu: goto label_7F1ACF3C;
    case 0x7F1ACF40u: goto label_7F1ACF40;
    case 0x7F1ACF44u: goto label_7F1ACF44;
    case 0x7F1ACF48u: goto label_7F1ACF48;
    case 0x7F1ACF4Cu: goto label_7F1ACF4C;
    case 0x7F1ACF50u: goto label_7F1ACF50;
    case 0x7F1ACF54u: goto label_7F1ACF54;
    case 0x7F1ACF58u: goto label_7F1ACF58;
    case 0x7F1ACF5Cu: goto label_7F1ACF5C;
    case 0x7F1ACF60u: goto label_7F1ACF60;
    case 0x7F1ACF64u: goto label_7F1ACF64;
    case 0x7F1ACF68u: goto label_7F1ACF68;
    case 0x7F1ACF6Cu: goto label_7F1ACF6C;
    case 0x7F1ACF70u: goto label_7F1ACF70;
    case 0x7F1ACF74u: goto label_7F1ACF74;
    case 0x7F1ACF78u: goto label_7F1ACF78;
    case 0x7F1ACF7Cu: goto label_7F1ACF7C;
    case 0x7F1ACF80u: goto label_7F1ACF80;
    case 0x7F1ACF84u: goto label_7F1ACF84;
    case 0x7F1ACF88u: goto label_7F1ACF88;
    case 0x7F1ACF8Cu: goto label_7F1ACF8C;
    case 0x7F1ACF90u: goto label_7F1ACF90;
    case 0x7F1ACF94u: goto label_7F1ACF94;
    case 0x7F1ACF98u: goto label_7F1ACF98;
    case 0x7F1ACF9Cu: goto label_7F1ACF9C;
    case 0x7F1ACFA0u: goto label_7F1ACFA0;
    case 0x7F1ACFA4u: goto label_7F1ACFA4;
    case 0x7F1ACFA8u: goto label_7F1ACFA8;
    case 0x7F1ACFACu: goto label_7F1ACFAC;
    case 0x7F1ACFB0u: goto label_7F1ACFB0;
    case 0x7F1ACFB4u: goto label_7F1ACFB4;
    case 0x7F1ACFB8u: goto label_7F1ACFB8;
    case 0x7F1ACFBCu: goto label_7F1ACFBC;
    case 0x7F1ACFC0u: goto label_7F1ACFC0;
    case 0x7F1ACFC4u: goto label_7F1ACFC4;
    case 0x7F1ACFC8u: goto label_7F1ACFC8;
    case 0x7F1ACFCCu: goto label_7F1ACFCC;
    case 0x7F1ACFD0u: goto label_7F1ACFD0;
    case 0x7F1ACFD4u: goto label_7F1ACFD4;
    case 0x7F1ACFD8u: goto label_7F1ACFD8;
    case 0x7F1ACFDCu: goto label_7F1ACFDC;
    case 0x7F1ACFE0u: goto label_7F1ACFE0;
    case 0x7F1ACFE4u: goto label_7F1ACFE4;
    case 0x7F1ACFE8u: goto label_7F1ACFE8;
    case 0x7F1ACFECu: goto label_7F1ACFEC;
    case 0x7F1ACFF0u: goto label_7F1ACFF0;
    case 0x7F1ACFF4u: goto label_7F1ACFF4;
    case 0x7F1ACFF8u: goto label_7F1ACFF8;
    case 0x7F1ACFFCu: goto label_7F1ACFFC;
    case 0x7F1AD000u: goto label_7F1AD000;
    case 0x7F1AD004u: goto label_7F1AD004;
    case 0x7F1AD008u: goto label_7F1AD008;
    case 0x7F1AD00Cu: goto label_7F1AD00C;
    case 0x7F1AD010u: goto label_7F1AD010;
    case 0x7F1AD014u: goto label_7F1AD014;
    case 0x7F1AD018u: goto label_7F1AD018;
    case 0x7F1AD01Cu: goto label_7F1AD01C;
    case 0x7F1AD020u: goto label_7F1AD020;
    case 0x7F1AD024u: goto label_7F1AD024;
    case 0x7F1AD028u: goto label_7F1AD028;
    case 0x7F1AD02Cu: goto label_7F1AD02C;
    case 0x7F1AD030u: goto label_7F1AD030;
    case 0x7F1AD034u: goto label_7F1AD034;
    case 0x7F1AD038u: goto label_7F1AD038;
    case 0x7F1AD03Cu: goto label_7F1AD03C;
    case 0x7F1AD040u: goto label_7F1AD040;
    case 0x7F1AD044u: goto label_7F1AD044;
    case 0x7F1AD048u: goto label_7F1AD048;
    case 0x7F1AD04Cu: goto label_7F1AD04C;
    case 0x7F1AD050u: goto label_7F1AD050;
    case 0x7F1AD054u: goto label_7F1AD054;
    case 0x7F1AD058u: goto label_7F1AD058;
    case 0x7F1AD05Cu: goto label_7F1AD05C;
    case 0x7F1AD060u: goto label_7F1AD060;
    case 0x7F1AD064u: goto label_7F1AD064;
    case 0x7F1AD068u: goto label_7F1AD068;
    case 0x7F1AD06Cu: goto label_7F1AD06C;
    case 0x7F1AD070u: goto label_7F1AD070;
    case 0x7F1AD074u: goto label_7F1AD074;
    case 0x7F1AD078u: goto label_7F1AD078;
    case 0x7F1AD07Cu: goto label_7F1AD07C;
    case 0x7F1AD080u: goto label_7F1AD080;
    case 0x7F1AD084u: goto label_7F1AD084;
    case 0x7F1AD088u: goto label_7F1AD088;
    case 0x7F1AD08Cu: goto label_7F1AD08C;
    case 0x7F1AD090u: goto label_7F1AD090;
    case 0x7F1AD094u: goto label_7F1AD094;
    case 0x7F1AD098u: goto label_7F1AD098;
    case 0x7F1AD09Cu: goto label_7F1AD09C;
    case 0x7F1AD0A0u: goto label_7F1AD0A0;
    case 0x7F1AD0A4u: goto label_7F1AD0A4;
    case 0x7F1AD0A8u: goto label_7F1AD0A8;
    case 0x7F1AD0ACu: goto label_7F1AD0AC;
    case 0x7F1AD0B0u: goto label_7F1AD0B0;
    case 0x7F1AD0B4u: goto label_7F1AD0B4;
    case 0x7F1AD0B8u: goto label_7F1AD0B8;
    case 0x7F1AD0BCu: goto label_7F1AD0BC;
    case 0x7F1AD0C0u: goto label_7F1AD0C0;
    case 0x7F1AD0C4u: goto label_7F1AD0C4;
    case 0x7F1AD0C8u: goto label_7F1AD0C8;
    case 0x7F1AD0CCu: goto label_7F1AD0CC;
    case 0x7F1AD0D0u: goto label_7F1AD0D0;
    case 0x7F1AD0D4u: goto label_7F1AD0D4;
    case 0x7F1AD0D8u: goto label_7F1AD0D8;
    case 0x7F1AD0DCu: goto label_7F1AD0DC;
    case 0x7F1AD0E0u: goto label_7F1AD0E0;
    case 0x7F1AD0E4u: goto label_7F1AD0E4;
    case 0x7F1AD0E8u: goto label_7F1AD0E8;
    case 0x7F1AD0ECu: goto label_7F1AD0EC;
    case 0x7F1AD0F0u: goto label_7F1AD0F0;
    case 0x7F1AD0F4u: goto label_7F1AD0F4;
    case 0x7F1AD0F8u: goto label_7F1AD0F8;
    case 0x7F1AD0FCu: goto label_7F1AD0FC;
    case 0x7F1AD100u: goto label_7F1AD100;
    case 0x7F1AD104u: goto label_7F1AD104;
    case 0x7F1AD108u: goto label_7F1AD108;
    case 0x7F1AD10Cu: goto label_7F1AD10C;
    case 0x7F1AD110u: goto label_7F1AD110;
    case 0x7F1AD114u: goto label_7F1AD114;
    case 0x7F1AD118u: goto label_7F1AD118;
    case 0x7F1AD11Cu: goto label_7F1AD11C;
    case 0x7F1AD120u: goto label_7F1AD120;
    case 0x7F1AD124u: goto label_7F1AD124;
    case 0x7F1AD128u: goto label_7F1AD128;
    case 0x7F1AD12Cu: goto label_7F1AD12C;
    case 0x7F1AD130u: goto label_7F1AD130;
    case 0x7F1AD134u: goto label_7F1AD134;
    case 0x7F1AD138u: goto label_7F1AD138;
    case 0x7F1AD13Cu: goto label_7F1AD13C;
    case 0x7F1AD140u: goto label_7F1AD140;
    case 0x7F1AD144u: goto label_7F1AD144;
    case 0x7F1AD148u: goto label_7F1AD148;
    case 0x7F1AD14Cu: goto label_7F1AD14C;
    case 0x7F1AD150u: goto label_7F1AD150;
    case 0x7F1AD154u: goto label_7F1AD154;
    case 0x7F1AD158u: goto label_7F1AD158;
    case 0x7F1AD15Cu: goto label_7F1AD15C;
    case 0x7F1AD160u: goto label_7F1AD160;
    case 0x7F1AD164u: goto label_7F1AD164;
    case 0x7F1AD168u: goto label_7F1AD168;
    case 0x7F1AD16Cu: goto label_7F1AD16C;
    case 0x7F1AD170u: goto label_7F1AD170;
    case 0x7F1AD174u: goto label_7F1AD174;
    case 0x7F1AD178u: goto label_7F1AD178;
    case 0x7F1AD17Cu: goto label_7F1AD17C;
    case 0x7F1AD180u: goto label_7F1AD180;
    case 0x7F1AD184u: goto label_7F1AD184;
    case 0x7F1AD188u: goto label_7F1AD188;
    case 0x7F1AD18Cu: goto label_7F1AD18C;
    case 0x7F1AD190u: goto label_7F1AD190;
    case 0x7F1AD194u: goto label_7F1AD194;
    case 0x7F1AD198u: goto label_7F1AD198;
    case 0x7F1AD19Cu: goto label_7F1AD19C;
    case 0x7F1AD1A0u: goto label_7F1AD1A0;
    case 0x7F1AD1A4u: goto label_7F1AD1A4;
    case 0x7F1AD1A8u: goto label_7F1AD1A8;
    case 0x7F1AD1ACu: goto label_7F1AD1AC;
    case 0x7F1AD1B0u: goto label_7F1AD1B0;
    case 0x7F1AD1B4u: goto label_7F1AD1B4;
    case 0x7F1AD1B8u: goto label_7F1AD1B8;
    case 0x7F1AD1BCu: goto label_7F1AD1BC;
    case 0x7F1AD1C0u: goto label_7F1AD1C0;
    case 0x7F1AD1C4u: goto label_7F1AD1C4;
    case 0x7F1AD1C8u: goto label_7F1AD1C8;
    case 0x7F1AD1CCu: goto label_7F1AD1CC;
    case 0x7F1AD1D0u: goto label_7F1AD1D0;
    case 0x7F1AD1D4u: goto label_7F1AD1D4;
    case 0x7F1AD1D8u: goto label_7F1AD1D8;
    case 0x7F1AD1DCu: goto label_7F1AD1DC;
    case 0x7F1AD1E0u: goto label_7F1AD1E0;
    case 0x7F1AD1E4u: goto label_7F1AD1E4;
    case 0x7F1AD1E8u: goto label_7F1AD1E8;
    case 0x7F1AD1ECu: goto label_7F1AD1EC;
    case 0x7F1AD1F0u: goto label_7F1AD1F0;
    case 0x7F1AD1F4u: goto label_7F1AD1F4;
    case 0x7F1AD1F8u: goto label_7F1AD1F8;
    case 0x7F1AD1FCu: goto label_7F1AD1FC;
    case 0x7F1AD200u: goto label_7F1AD200;
    case 0x7F1AD204u: goto label_7F1AD204;
    case 0x7F1AD208u: goto label_7F1AD208;
    case 0x7F1AD20Cu: goto label_7F1AD20C;
    case 0x7F1AD210u: goto label_7F1AD210;
    case 0x7F1AD214u: goto label_7F1AD214;
    case 0x7F1AD218u: goto label_7F1AD218;
    case 0x7F1AD21Cu: goto label_7F1AD21C;
    case 0x7F1AD220u: goto label_7F1AD220;
    case 0x7F1AD224u: goto label_7F1AD224;
    case 0x7F1AD228u: goto label_7F1AD228;
    case 0x7F1AD22Cu: goto label_7F1AD22C;
    case 0x7F1AD230u: goto label_7F1AD230;
    case 0x7F1AD234u: goto label_7F1AD234;
    case 0x7F1AD238u: goto label_7F1AD238;
    case 0x7F1AD23Cu: goto label_7F1AD23C;
    case 0x7F1AD240u: goto label_7F1AD240;
    case 0x7F1AD244u: goto label_7F1AD244;
    case 0x7F1AD248u: goto label_7F1AD248;
    case 0x7F1AD24Cu: goto label_7F1AD24C;
    case 0x7F1AD250u: goto label_7F1AD250;
    case 0x7F1AD254u: goto label_7F1AD254;
    case 0x7F1AD258u: goto label_7F1AD258;
    case 0x7F1AD25Cu: goto label_7F1AD25C;
    case 0x7F1AD260u: goto label_7F1AD260;
    case 0x7F1AD264u: goto label_7F1AD264;
    case 0x7F1AD268u: goto label_7F1AD268;
    case 0x7F1AD26Cu: goto label_7F1AD26C;
    case 0x7F1AD270u: goto label_7F1AD270;
    case 0x7F1AD274u: goto label_7F1AD274;
    case 0x7F1AD278u: goto label_7F1AD278;
    case 0x7F1AD27Cu: goto label_7F1AD27C;
    case 0x7F1AD280u: goto label_7F1AD280;
    case 0x7F1AD284u: goto label_7F1AD284;
    case 0x7F1AD288u: goto label_7F1AD288;
    case 0x7F1AD28Cu: goto label_7F1AD28C;
    case 0x7F1AD290u: goto label_7F1AD290;
    case 0x7F1AD294u: goto label_7F1AD294;
    case 0x7F1AD298u: goto label_7F1AD298;
    case 0x7F1AD29Cu: goto label_7F1AD29C;
    case 0x7F1AD2A0u: goto label_7F1AD2A0;
    case 0x7F1AD2A4u: goto label_7F1AD2A4;
    case 0x7F1AD2A8u: goto label_7F1AD2A8;
    case 0x7F1AD2ACu: goto label_7F1AD2AC;
    case 0x7F1AD2B0u: goto label_7F1AD2B0;
    case 0x7F1AD2B4u: goto label_7F1AD2B4;
    case 0x7F1AD2B8u: goto label_7F1AD2B8;
    case 0x7F1AD2BCu: goto label_7F1AD2BC;
    case 0x7F1AD2C0u: goto label_7F1AD2C0;
    case 0x7F1AD2C4u: goto label_7F1AD2C4;
    case 0x7F1AD2C8u: goto label_7F1AD2C8;
    case 0x7F1AD2CCu: goto label_7F1AD2CC;
    case 0x7F1AD2D0u: goto label_7F1AD2D0;
    case 0x7F1AD2D4u: goto label_7F1AD2D4;
    case 0x7F1AD2D8u: goto label_7F1AD2D8;
    case 0x7F1AD2DCu: goto label_7F1AD2DC;
    case 0x7F1AD2E0u: goto label_7F1AD2E0;
    case 0x7F1AD2E4u: goto label_7F1AD2E4;
    case 0x7F1AD2E8u: goto label_7F1AD2E8;
    case 0x7F1AD2ECu: goto label_7F1AD2EC;
    case 0x7F1AD2F0u: goto label_7F1AD2F0;
    case 0x7F1AD2F4u: goto label_7F1AD2F4;
    case 0x7F1AD2F8u: goto label_7F1AD2F8;
    case 0x7F1AD2FCu: goto label_7F1AD2FC;
    case 0x7F1AD300u: goto label_7F1AD300;
    case 0x7F1AD304u: goto label_7F1AD304;
    case 0x7F1AD308u: goto label_7F1AD308;
    case 0x7F1AD30Cu: goto label_7F1AD30C;
    case 0x7F1AD310u: goto label_7F1AD310;
    case 0x7F1AD314u: goto label_7F1AD314;
    case 0x7F1AD318u: goto label_7F1AD318;
    case 0x7F1AD31Cu: goto label_7F1AD31C;
    case 0x7F1AD320u: goto label_7F1AD320;
    case 0x7F1AD324u: goto label_7F1AD324;
    case 0x7F1AD328u: goto label_7F1AD328;
    case 0x7F1AD32Cu: goto label_7F1AD32C;
    case 0x7F1AD330u: goto label_7F1AD330;
    case 0x7F1AD334u: goto label_7F1AD334;
    case 0x7F1AD338u: goto label_7F1AD338;
    case 0x7F1AD33Cu: goto label_7F1AD33C;
    case 0x7F1AD340u: goto label_7F1AD340;
    case 0x7F1AD344u: goto label_7F1AD344;
    case 0x7F1AD348u: goto label_7F1AD348;
    case 0x7F1AD34Cu: goto label_7F1AD34C;
    case 0x7F1AD350u: goto label_7F1AD350;
    case 0x7F1AD354u: goto label_7F1AD354;
    case 0x7F1AD358u: goto label_7F1AD358;
    case 0x7F1AD35Cu: goto label_7F1AD35C;
    case 0x7F1AD360u: goto label_7F1AD360;
    case 0x7F1AD364u: goto label_7F1AD364;
    case 0x7F1AD368u: goto label_7F1AD368;
    case 0x7F1AD36Cu: goto label_7F1AD36C;
    case 0x7F1AD370u: goto label_7F1AD370;
    case 0x7F1AD374u: goto label_7F1AD374;
    case 0x7F1AD378u: goto label_7F1AD378;
    case 0x7F1AD37Cu: goto label_7F1AD37C;
    case 0x7F1AD380u: goto label_7F1AD380;
    case 0x7F1AD384u: goto label_7F1AD384;
    case 0x7F1AD388u: goto label_7F1AD388;
    case 0x7F1AD38Cu: goto label_7F1AD38C;
    case 0x7F1AD390u: goto label_7F1AD390;
    case 0x7F1AD394u: goto label_7F1AD394;
    case 0x7F1AD398u: goto label_7F1AD398;
    case 0x7F1AD39Cu: goto label_7F1AD39C;
    case 0x7F1AD3A0u: goto label_7F1AD3A0;
    case 0x7F1AD3A4u: goto label_7F1AD3A4;
    case 0x7F1AD3A8u: goto label_7F1AD3A8;
    case 0x7F1AD3ACu: goto label_7F1AD3AC;
    case 0x7F1AD3B0u: goto label_7F1AD3B0;
    case 0x7F1AD3B4u: goto label_7F1AD3B4;
    case 0x7F1AD3B8u: goto label_7F1AD3B8;
    case 0x7F1AD3BCu: goto label_7F1AD3BC;
    case 0x7F1AD3C0u: goto label_7F1AD3C0;
    case 0x7F1AD3C4u: goto label_7F1AD3C4;
    case 0x7F1AD3C8u: goto label_7F1AD3C8;
    case 0x7F1AD3CCu: goto label_7F1AD3CC;
    case 0x7F1AD3D0u: goto label_7F1AD3D0;
    case 0x7F1AD3D4u: goto label_7F1AD3D4;
    case 0x7F1AD3D8u: goto label_7F1AD3D8;
    case 0x7F1AD3DCu: goto label_7F1AD3DC;
    case 0x7F1AD3E0u: goto label_7F1AD3E0;
    case 0x7F1AD3E4u: goto label_7F1AD3E4;
    case 0x7F1AD3E8u: goto label_7F1AD3E8;
    case 0x7F1AD3ECu: goto label_7F1AD3EC;
    case 0x7F1AD3F0u: goto label_7F1AD3F0;
    case 0x7F1AD3F4u: goto label_7F1AD3F4;
    case 0x7F1AD3F8u: goto label_7F1AD3F8;
    case 0x7F1AD3FCu: goto label_7F1AD3FC;
    case 0x7F1AD400u: goto label_7F1AD400;
    case 0x7F1AD404u: goto label_7F1AD404;
    case 0x7F1AD408u: goto label_7F1AD408;
    case 0x7F1AD40Cu: goto label_7F1AD40C;
    case 0x7F1AD410u: goto label_7F1AD410;
    case 0x7F1AD414u: goto label_7F1AD414;
    case 0x7F1AD418u: goto label_7F1AD418;
    case 0x7F1AD41Cu: goto label_7F1AD41C;
    case 0x7F1AD420u: goto label_7F1AD420;
    case 0x7F1AD424u: goto label_7F1AD424;
    case 0x7F1AD428u: goto label_7F1AD428;
    case 0x7F1AD42Cu: goto label_7F1AD42C;
    case 0x7F1AD430u: goto label_7F1AD430;
    case 0x7F1AD434u: goto label_7F1AD434;
    case 0x7F1AD438u: goto label_7F1AD438;
    case 0x7F1AD43Cu: goto label_7F1AD43C;
    case 0x7F1AD440u: goto label_7F1AD440;
    case 0x7F1AD444u: goto label_7F1AD444;
    case 0x7F1AD448u: goto label_7F1AD448;
    case 0x7F1AD44Cu: goto label_7F1AD44C;
    case 0x7F1AD450u: goto label_7F1AD450;
    case 0x7F1AD454u: goto label_7F1AD454;
    case 0x7F1AD458u: goto label_7F1AD458;
    case 0x7F1AD45Cu: goto label_7F1AD45C;
    case 0x7F1AD460u: goto label_7F1AD460;
    case 0x7F1AD464u: goto label_7F1AD464;
    case 0x7F1AD468u: goto label_7F1AD468;
    case 0x7F1AD46Cu: goto label_7F1AD46C;
    case 0x7F1AD470u: goto label_7F1AD470;
    case 0x7F1AD474u: goto label_7F1AD474;
    case 0x7F1AD478u: goto label_7F1AD478;
    case 0x7F1AD47Cu: goto label_7F1AD47C;
    case 0x7F1AD480u: goto label_7F1AD480;
    case 0x7F1AD484u: goto label_7F1AD484;
    case 0x7F1AD488u: goto label_7F1AD488;
    case 0x7F1AD48Cu: goto label_7F1AD48C;
    case 0x7F1AD490u: goto label_7F1AD490;
    case 0x7F1AD494u: goto label_7F1AD494;
    case 0x7F1AD498u: goto label_7F1AD498;
    case 0x7F1AD49Cu: goto label_7F1AD49C;
    case 0x7F1AD4A0u: goto label_7F1AD4A0;
    case 0x7F1AD4A4u: goto label_7F1AD4A4;
    case 0x7F1AD4A8u: goto label_7F1AD4A8;
    case 0x7F1AD4ACu: goto label_7F1AD4AC;
    case 0x7F1AD4B0u: goto label_7F1AD4B0;
    case 0x7F1AD4B4u: goto label_7F1AD4B4;
    case 0x7F1AD4B8u: goto label_7F1AD4B8;
    case 0x7F1AD4BCu: goto label_7F1AD4BC;
    case 0x7F1AD4C0u: goto label_7F1AD4C0;
    case 0x7F1AD4C4u: goto label_7F1AD4C4;
    case 0x7F1AD4C8u: goto label_7F1AD4C8;
    case 0x7F1AD4CCu: goto label_7F1AD4CC;
    case 0x7F1AD4D0u: goto label_7F1AD4D0;
    case 0x7F1AD4D4u: goto label_7F1AD4D4;
    case 0x7F1AD4D8u: goto label_7F1AD4D8;
    case 0x7F1AD4DCu: goto label_7F1AD4DC;
    case 0x7F1AD4E0u: goto label_7F1AD4E0;
    case 0x7F1AD4E4u: goto label_7F1AD4E4;
    case 0x7F1AD4E8u: goto label_7F1AD4E8;
    case 0x7F1AD4ECu: goto label_7F1AD4EC;
    case 0x7F1AD4F0u: goto label_7F1AD4F0;
    case 0x7F1AD4F4u: goto label_7F1AD4F4;
    case 0x7F1AD4F8u: goto label_7F1AD4F8;
    case 0x7F1AD4FCu: goto label_7F1AD4FC;
    case 0x7F1AD500u: goto label_7F1AD500;
    case 0x7F1AD504u: goto label_7F1AD504;
    case 0x7F1AD508u: goto label_7F1AD508;
    case 0x7F1AD50Cu: goto label_7F1AD50C;
    case 0x7F1AD510u: goto label_7F1AD510;
    case 0x7F1AD514u: goto label_7F1AD514;
    case 0x7F1AD518u: goto label_7F1AD518;
    case 0x7F1AD51Cu: goto label_7F1AD51C;
    case 0x7F1AD520u: goto label_7F1AD520;
    case 0x7F1AD524u: goto label_7F1AD524;
    case 0x7F1AD528u: goto label_7F1AD528;
    case 0x7F1AD52Cu: goto label_7F1AD52C;
    case 0x7F1AD530u: goto label_7F1AD530;
    case 0x7F1AD534u: goto label_7F1AD534;
    case 0x7F1AD538u: goto label_7F1AD538;
    case 0x7F1AD53Cu: goto label_7F1AD53C;
    case 0x7F1AD540u: goto label_7F1AD540;
    case 0x7F1AD544u: goto label_7F1AD544;
    case 0x7F1AD548u: goto label_7F1AD548;
    case 0x7F1AD54Cu: goto label_7F1AD54C;
    case 0x7F1AD550u: goto label_7F1AD550;
    case 0x7F1AD554u: goto label_7F1AD554;
    case 0x7F1AD558u: goto label_7F1AD558;
    case 0x7F1AD55Cu: goto label_7F1AD55C;
    case 0x7F1AD560u: goto label_7F1AD560;
    case 0x7F1AD564u: goto label_7F1AD564;
    case 0x7F1AD568u: goto label_7F1AD568;
    case 0x7F1AD56Cu: goto label_7F1AD56C;
    case 0x7F1AD570u: goto label_7F1AD570;
    case 0x7F1AD574u: goto label_7F1AD574;
    case 0x7F1AD578u: goto label_7F1AD578;
    case 0x7F1AD57Cu: goto label_7F1AD57C;
    case 0x7F1AD580u: goto label_7F1AD580;
    case 0x7F1AD584u: goto label_7F1AD584;
    case 0x7F1AD588u: goto label_7F1AD588;
    case 0x7F1AD58Cu: goto label_7F1AD58C;
    case 0x7F1AD590u: goto label_7F1AD590;
    case 0x7F1AD594u: goto label_7F1AD594;
    case 0x7F1AD598u: goto label_7F1AD598;
    case 0x7F1AD59Cu: goto label_7F1AD59C;
    case 0x7F1AD5A0u: goto label_7F1AD5A0;
    case 0x7F1AD5A4u: goto label_7F1AD5A4;
    case 0x7F1AD5A8u: goto label_7F1AD5A8;
    case 0x7F1AD5ACu: goto label_7F1AD5AC;
    case 0x7F1AD5B0u: goto label_7F1AD5B0;
    case 0x7F1AD5B4u: goto label_7F1AD5B4;
    case 0x7F1AD5B8u: goto label_7F1AD5B8;
    case 0x7F1AD5BCu: goto label_7F1AD5BC;
    case 0x7F1AD5C0u: goto label_7F1AD5C0;
    case 0x7F1AD5C4u: goto label_7F1AD5C4;
    case 0x7F1AD5C8u: goto label_7F1AD5C8;
    case 0x7F1AD5CCu: goto label_7F1AD5CC;
    case 0x7F1AD5D0u: goto label_7F1AD5D0;
    case 0x7F1AD5D4u: goto label_7F1AD5D4;
    case 0x7F1AD5D8u: goto label_7F1AD5D8;
    case 0x7F1AD5DCu: goto label_7F1AD5DC;
    case 0x7F1AD5E0u: goto label_7F1AD5E0;
    case 0x7F1AD5E4u: goto label_7F1AD5E4;
    case 0x7F1AD5E8u: goto label_7F1AD5E8;
    case 0x7F1AD5ECu: goto label_7F1AD5EC;
    case 0x7F1AD5F0u: goto label_7F1AD5F0;
    case 0x7F1AD5F4u: goto label_7F1AD5F4;
    case 0x7F1AD5F8u: goto label_7F1AD5F8;
    case 0x7F1AD5FCu: goto label_7F1AD5FC;
    case 0x7F1AD600u: goto label_7F1AD600;
    case 0x7F1AD604u: goto label_7F1AD604;
    case 0x7F1AD608u: goto label_7F1AD608;
    case 0x7F1AD60Cu: goto label_7F1AD60C;
    case 0x7F1AD610u: goto label_7F1AD610;
    case 0x7F1AD614u: goto label_7F1AD614;
    case 0x7F1AD618u: goto label_7F1AD618;
    case 0x7F1AD61Cu: goto label_7F1AD61C;
    case 0x7F1AD620u: goto label_7F1AD620;
    case 0x7F1AD624u: goto label_7F1AD624;
    case 0x7F1AD628u: goto label_7F1AD628;
    case 0x7F1AD62Cu: goto label_7F1AD62C;
    case 0x7F1AD630u: goto label_7F1AD630;
    case 0x7F1AD634u: goto label_7F1AD634;
    case 0x7F1AD638u: goto label_7F1AD638;
    case 0x7F1AD63Cu: goto label_7F1AD63C;
    case 0x7F1AD640u: goto label_7F1AD640;
    case 0x7F1AD644u: goto label_7F1AD644;
    case 0x7F1AD648u: goto label_7F1AD648;
    case 0x7F1AD64Cu: goto label_7F1AD64C;
    case 0x7F1AD650u: goto label_7F1AD650;
    case 0x7F1AD654u: goto label_7F1AD654;
    case 0x7F1AD658u: goto label_7F1AD658;
    case 0x7F1AD65Cu: goto label_7F1AD65C;
    case 0x7F1AD660u: goto label_7F1AD660;
    case 0x7F1AD664u: goto label_7F1AD664;
    case 0x7F1AD668u: goto label_7F1AD668;
    case 0x7F1AD66Cu: goto label_7F1AD66C;
    case 0x7F1AD670u: goto label_7F1AD670;
    case 0x7F1AD674u: goto label_7F1AD674;
    case 0x7F1AD678u: goto label_7F1AD678;
    case 0x7F1AD67Cu: goto label_7F1AD67C;
    case 0x7F1AD680u: goto label_7F1AD680;
    case 0x7F1AD684u: goto label_7F1AD684;
    case 0x7F1AD688u: goto label_7F1AD688;
    case 0x7F1AD68Cu: goto label_7F1AD68C;
    case 0x7F1AD690u: goto label_7F1AD690;
    case 0x7F1AD694u: goto label_7F1AD694;
    case 0x7F1AD698u: goto label_7F1AD698;
    case 0x7F1AD69Cu: goto label_7F1AD69C;
    case 0x7F1AD6A0u: goto label_7F1AD6A0;
    case 0x7F1AD6A4u: goto label_7F1AD6A4;
    case 0x7F1AD6A8u: goto label_7F1AD6A8;
    case 0x7F1AD6ACu: goto label_7F1AD6AC;
    case 0x7F1AD6B0u: goto label_7F1AD6B0;
    case 0x7F1AD6B4u: goto label_7F1AD6B4;
    case 0x7F1AD6B8u: goto label_7F1AD6B8;
    case 0x7F1AD6BCu: goto label_7F1AD6BC;
    case 0x7F1AD6C0u: goto label_7F1AD6C0;
    case 0x7F1AD6C4u: goto label_7F1AD6C4;
    case 0x7F1AD6C8u: goto label_7F1AD6C8;
    case 0x7F1AD6CCu: goto label_7F1AD6CC;
    case 0x7F1AD6D0u: goto label_7F1AD6D0;
    case 0x7F1AD6D4u: goto label_7F1AD6D4;
    case 0x7F1AD6D8u: goto label_7F1AD6D8;
    case 0x7F1AD6DCu: goto label_7F1AD6DC;
    case 0x7F1AD6E0u: goto label_7F1AD6E0;
    case 0x7F1AD6E4u: goto label_7F1AD6E4;
    case 0x7F1AD6E8u: goto label_7F1AD6E8;
    case 0x7F1AD6ECu: goto label_7F1AD6EC;
    case 0x7F1AD6F0u: goto label_7F1AD6F0;
    case 0x7F1AD6F4u: goto label_7F1AD6F4;
    case 0x7F1AD6F8u: goto label_7F1AD6F8;
    case 0x7F1AD6FCu: goto label_7F1AD6FC;
    case 0x7F1AD700u: goto label_7F1AD700;
    case 0x7F1AD704u: goto label_7F1AD704;
    case 0x7F1AD708u: goto label_7F1AD708;
    case 0x7F1AD70Cu: goto label_7F1AD70C;
    case 0x7F1AD710u: goto label_7F1AD710;
    case 0x7F1AD714u: goto label_7F1AD714;
    case 0x7F1AD718u: goto label_7F1AD718;
    case 0x7F1AD71Cu: goto label_7F1AD71C;
    case 0x7F1AD720u: goto label_7F1AD720;
    case 0x7F1AD724u: goto label_7F1AD724;
    case 0x7F1AD728u: goto label_7F1AD728;
    case 0x7F1AD72Cu: goto label_7F1AD72C;
    case 0x7F1AD730u: goto label_7F1AD730;
    case 0x7F1AD734u: goto label_7F1AD734;
    case 0x7F1AD738u: goto label_7F1AD738;
    case 0x7F1AD73Cu: goto label_7F1AD73C;
    case 0x7F1AD740u: goto label_7F1AD740;
    case 0x7F1AD744u: goto label_7F1AD744;
    case 0x7F1AD748u: goto label_7F1AD748;
    case 0x7F1AD74Cu: goto label_7F1AD74C;
    case 0x7F1AD750u: goto label_7F1AD750;
    case 0x7F1AD754u: goto label_7F1AD754;
    case 0x7F1AD758u: goto label_7F1AD758;
    case 0x7F1AD75Cu: goto label_7F1AD75C;
    case 0x7F1AD760u: goto label_7F1AD760;
    case 0x7F1AD764u: goto label_7F1AD764;
    case 0x7F1AD768u: goto label_7F1AD768;
    case 0x7F1AD76Cu: goto label_7F1AD76C;
    case 0x7F1AD770u: goto label_7F1AD770;
    case 0x7F1AD774u: goto label_7F1AD774;
    case 0x7F1AD778u: goto label_7F1AD778;
    case 0x7F1AD77Cu: goto label_7F1AD77C;
    case 0x7F1AD780u: goto label_7F1AD780;
    case 0x7F1AD784u: goto label_7F1AD784;
    case 0x7F1AD788u: goto label_7F1AD788;
    case 0x7F1AD78Cu: goto label_7F1AD78C;
    case 0x7F1AD790u: goto label_7F1AD790;
    case 0x7F1AD794u: goto label_7F1AD794;
    case 0x7F1AD798u: goto label_7F1AD798;
    case 0x7F1AD79Cu: goto label_7F1AD79C;
    case 0x7F1AD7A0u: goto label_7F1AD7A0;
    case 0x7F1AD7A4u: goto label_7F1AD7A4;
    case 0x7F1AD7A8u: goto label_7F1AD7A8;
    case 0x7F1AD7ACu: goto label_7F1AD7AC;
    case 0x7F1AD7B0u: goto label_7F1AD7B0;
    case 0x7F1AD7B4u: goto label_7F1AD7B4;
    case 0x7F1AD7B8u: goto label_7F1AD7B8;
    case 0x7F1AD7BCu: goto label_7F1AD7BC;
    case 0x7F1AD7C0u: goto label_7F1AD7C0;
    case 0x7F1AD7C4u: goto label_7F1AD7C4;
    case 0x7F1AD7C8u: goto label_7F1AD7C8;
    case 0x7F1AD7CCu: goto label_7F1AD7CC;
    case 0x7F1AD7D0u: goto label_7F1AD7D0;
    case 0x7F1AD7D4u: goto label_7F1AD7D4;
    case 0x7F1AD7D8u: goto label_7F1AD7D8;
    case 0x7F1AD7DCu: goto label_7F1AD7DC;
    case 0x7F1AD7E0u: goto label_7F1AD7E0;
    case 0x7F1AD7E4u: goto label_7F1AD7E4;
    case 0x7F1AD7E8u: goto label_7F1AD7E8;
    case 0x7F1AD7ECu: goto label_7F1AD7EC;
    case 0x7F1AD7F0u: goto label_7F1AD7F0;
    case 0x7F1AD7F4u: goto label_7F1AD7F4;
    case 0x7F1AD7F8u: goto label_7F1AD7F8;
    case 0x7F1AD7FCu: goto label_7F1AD7FC;
    case 0x7F1AD800u: goto label_7F1AD800;
    case 0x7F1AD804u: goto label_7F1AD804;
    case 0x7F1AD808u: goto label_7F1AD808;
    case 0x7F1AD80Cu: goto label_7F1AD80C;
    case 0x7F1AD810u: goto label_7F1AD810;
    case 0x7F1AD814u: goto label_7F1AD814;
    case 0x7F1AD818u: goto label_7F1AD818;
    case 0x7F1AD81Cu: goto label_7F1AD81C;
    case 0x7F1AD820u: goto label_7F1AD820;
    case 0x7F1AD824u: goto label_7F1AD824;
    case 0x7F1AD828u: goto label_7F1AD828;
    case 0x7F1AD82Cu: goto label_7F1AD82C;
    case 0x7F1AD830u: goto label_7F1AD830;
    case 0x7F1AD834u: goto label_7F1AD834;
    case 0x7F1AD838u: goto label_7F1AD838;
    case 0x7F1AD83Cu: goto label_7F1AD83C;
    case 0x7F1AD840u: goto label_7F1AD840;
    case 0x7F1AD844u: goto label_7F1AD844;
    case 0x7F1AD848u: goto label_7F1AD848;
    case 0x7F1AD84Cu: goto label_7F1AD84C;
    case 0x7F1AD850u: goto label_7F1AD850;
    case 0x7F1AD854u: goto label_7F1AD854;
    case 0x7F1AD858u: goto label_7F1AD858;
    case 0x7F1AD85Cu: goto label_7F1AD85C;
    case 0x7F1AD860u: goto label_7F1AD860;
    case 0x7F1AD864u: goto label_7F1AD864;
    case 0x7F1AD868u: goto label_7F1AD868;
    case 0x7F1AD86Cu: goto label_7F1AD86C;
    case 0x7F1AD870u: goto label_7F1AD870;
    case 0x7F1AD874u: goto label_7F1AD874;
    case 0x7F1AD878u: goto label_7F1AD878;
    case 0x7F1AD87Cu: goto label_7F1AD87C;
    case 0x7F1AD880u: goto label_7F1AD880;
    case 0x7F1AD884u: goto label_7F1AD884;
    case 0x7F1AD888u: goto label_7F1AD888;
    case 0x7F1AD88Cu: goto label_7F1AD88C;
    case 0x7F1AD890u: goto label_7F1AD890;
    case 0x7F1AD894u: goto label_7F1AD894;
    case 0x7F1AD898u: goto label_7F1AD898;
    case 0x7F1AD89Cu: goto label_7F1AD89C;
    case 0x7F1AD8A0u: goto label_7F1AD8A0;
    case 0x7F1AD8A4u: goto label_7F1AD8A4;
    case 0x7F1AD8A8u: goto label_7F1AD8A8;
    case 0x7F1AD8ACu: goto label_7F1AD8AC;
    case 0x7F1AD8B0u: goto label_7F1AD8B0;
    case 0x7F1AD8B4u: goto label_7F1AD8B4;
    case 0x7F1AD8B8u: goto label_7F1AD8B8;
    case 0x7F1AD8BCu: goto label_7F1AD8BC;
    case 0x7F1AD8C0u: goto label_7F1AD8C0;
    case 0x7F1AD8C4u: goto label_7F1AD8C4;
    case 0x7F1AD8C8u: goto label_7F1AD8C8;
    case 0x7F1AD8CCu: goto label_7F1AD8CC;
    case 0x7F1AD8D0u: goto label_7F1AD8D0;
    case 0x7F1AD8D4u: goto label_7F1AD8D4;
    case 0x7F1AD8D8u: goto label_7F1AD8D8;
    case 0x7F1AD8DCu: goto label_7F1AD8DC;
    case 0x7F1AD8E0u: goto label_7F1AD8E0;
    case 0x7F1AD8E4u: goto label_7F1AD8E4;
    case 0x7F1AD8E8u: goto label_7F1AD8E8;
    case 0x7F1AD8ECu: goto label_7F1AD8EC;
    case 0x7F1AD8F0u: goto label_7F1AD8F0;
    case 0x7F1AD8F4u: goto label_7F1AD8F4;
    case 0x7F1AD8F8u: goto label_7F1AD8F8;
    case 0x7F1AD8FCu: goto label_7F1AD8FC;
    case 0x7F1AD900u: goto label_7F1AD900;
    case 0x7F1AD904u: goto label_7F1AD904;
    case 0x7F1AD908u: goto label_7F1AD908;
    case 0x7F1AD90Cu: goto label_7F1AD90C;
    case 0x7F1AD910u: goto label_7F1AD910;
    case 0x7F1AD914u: goto label_7F1AD914;
    case 0x7F1AD918u: goto label_7F1AD918;
    case 0x7F1AD91Cu: goto label_7F1AD91C;
    case 0x7F1AD920u: goto label_7F1AD920;
    case 0x7F1AD924u: goto label_7F1AD924;
    case 0x7F1AD928u: goto label_7F1AD928;
    case 0x7F1AD92Cu: goto label_7F1AD92C;
    case 0x7F1AD930u: goto label_7F1AD930;
    case 0x7F1AD934u: goto label_7F1AD934;
    case 0x7F1AD938u: goto label_7F1AD938;
    case 0x7F1AD93Cu: goto label_7F1AD93C;
    case 0x7F1AD940u: goto label_7F1AD940;
    case 0x7F1AD944u: goto label_7F1AD944;
    case 0x7F1AD948u: goto label_7F1AD948;
    case 0x7F1AD94Cu: goto label_7F1AD94C;
    case 0x7F1AD950u: goto label_7F1AD950;
    case 0x7F1AD954u: goto label_7F1AD954;
    case 0x7F1AD958u: goto label_7F1AD958;
    case 0x7F1AD95Cu: goto label_7F1AD95C;
    case 0x7F1AD960u: goto label_7F1AD960;
    case 0x7F1AD964u: goto label_7F1AD964;
    case 0x7F1AD968u: goto label_7F1AD968;
    case 0x7F1AD96Cu: goto label_7F1AD96C;
    case 0x7F1AD970u: goto label_7F1AD970;
    case 0x7F1AD974u: goto label_7F1AD974;
    case 0x7F1AD978u: goto label_7F1AD978;
    case 0x7F1AD97Cu: goto label_7F1AD97C;
    case 0x7F1AD980u: goto label_7F1AD980;
    case 0x7F1AD984u: goto label_7F1AD984;
    case 0x7F1AD988u: goto label_7F1AD988;
    case 0x7F1AD98Cu: goto label_7F1AD98C;
    case 0x7F1AD990u: goto label_7F1AD990;
    case 0x7F1AD994u: goto label_7F1AD994;
    case 0x7F1AD998u: goto label_7F1AD998;
    case 0x7F1AD99Cu: goto label_7F1AD99C;
    case 0x7F1AD9A0u: goto label_7F1AD9A0;
    case 0x7F1AD9A4u: goto label_7F1AD9A4;
    case 0x7F1AD9A8u: goto label_7F1AD9A8;
    case 0x7F1AD9ACu: goto label_7F1AD9AC;
    case 0x7F1AD9B0u: goto label_7F1AD9B0;
    case 0x7F1AD9B4u: goto label_7F1AD9B4;
    case 0x7F1AD9B8u: goto label_7F1AD9B8;
    case 0x7F1AD9BCu: goto label_7F1AD9BC;
    case 0x7F1AD9C0u: goto label_7F1AD9C0;
    case 0x7F1AD9C4u: goto label_7F1AD9C4;
    case 0x7F1AD9C8u: goto label_7F1AD9C8;
    case 0x7F1AD9CCu: goto label_7F1AD9CC;
    case 0x7F1AD9D0u: goto label_7F1AD9D0;
    case 0x7F1AD9D4u: goto label_7F1AD9D4;
    case 0x7F1AD9D8u: goto label_7F1AD9D8;
    case 0x7F1AD9DCu: goto label_7F1AD9DC;
    case 0x7F1AD9E0u: goto label_7F1AD9E0;
    case 0x7F1AD9E4u: goto label_7F1AD9E4;
    case 0x7F1AD9E8u: goto label_7F1AD9E8;
    case 0x7F1AD9ECu: goto label_7F1AD9EC;
    case 0x7F1AD9F0u: goto label_7F1AD9F0;
    case 0x7F1AD9F4u: goto label_7F1AD9F4;
    case 0x7F1AD9F8u: goto label_7F1AD9F8;
    case 0x7F1AD9FCu: goto label_7F1AD9FC;
    case 0x7F1ADA00u: goto label_7F1ADA00;
    case 0x7F1ADA04u: goto label_7F1ADA04;
    case 0x7F1ADA08u: goto label_7F1ADA08;
    case 0x7F1ADA0Cu: goto label_7F1ADA0C;
    case 0x7F1ADA10u: goto label_7F1ADA10;
    case 0x7F1ADA14u: goto label_7F1ADA14;
    case 0x7F1ADA18u: goto label_7F1ADA18;
    case 0x7F1ADA1Cu: goto label_7F1ADA1C;
    case 0x7F1ADA20u: goto label_7F1ADA20;
    case 0x7F1ADA24u: goto label_7F1ADA24;
    case 0x7F1ADA28u: goto label_7F1ADA28;
    case 0x7F1ADA2Cu: goto label_7F1ADA2C;
    case 0x7F1ADA30u: goto label_7F1ADA30;
    case 0x7F1ADA34u: goto label_7F1ADA34;
    case 0x7F1ADA38u: goto label_7F1ADA38;
    case 0x7F1ADA3Cu: goto label_7F1ADA3C;
    case 0x7F1ADA40u: goto label_7F1ADA40;
    case 0x7F1ADA44u: goto label_7F1ADA44;
    case 0x7F1ADA48u: goto label_7F1ADA48;
    case 0x7F1ADA4Cu: goto label_7F1ADA4C;
    case 0x7F1ADA50u: goto label_7F1ADA50;
    case 0x7F1ADA54u: goto label_7F1ADA54;
    case 0x7F1ADA58u: goto label_7F1ADA58;
    case 0x7F1ADA5Cu: goto label_7F1ADA5C;
    case 0x7F1ADA60u: goto label_7F1ADA60;
    case 0x7F1ADA64u: goto label_7F1ADA64;
    case 0x7F1ADA68u: goto label_7F1ADA68;
    case 0x7F1ADA6Cu: goto label_7F1ADA6C;
    case 0x7F1ADA70u: goto label_7F1ADA70;
    case 0x7F1ADA74u: goto label_7F1ADA74;
    case 0x7F1ADA78u: goto label_7F1ADA78;
    case 0x7F1ADA7Cu: goto label_7F1ADA7C;
    case 0x7F1ADA80u: goto label_7F1ADA80;
    case 0x7F1ADA84u: goto label_7F1ADA84;
    case 0x7F1ADA88u: goto label_7F1ADA88;
    case 0x7F1ADA8Cu: goto label_7F1ADA8C;
    case 0x7F1ADA90u: goto label_7F1ADA90;
    case 0x7F1ADA94u: goto label_7F1ADA94;
    case 0x7F1ADA98u: goto label_7F1ADA98;
    case 0x7F1ADA9Cu: goto label_7F1ADA9C;
    case 0x7F1ADAA0u: goto label_7F1ADAA0;
    case 0x7F1ADAA4u: goto label_7F1ADAA4;
    case 0x7F1ADAA8u: goto label_7F1ADAA8;
    case 0x7F1ADAACu: goto label_7F1ADAAC;
    case 0x7F1ADAB0u: goto label_7F1ADAB0;
    case 0x7F1ADAB4u: goto label_7F1ADAB4;
    case 0x7F1ADAB8u: goto label_7F1ADAB8;
    case 0x7F1ADABCu: goto label_7F1ADABC;
    case 0x7F1ADAC0u: goto label_7F1ADAC0;
    case 0x7F1ADAC4u: goto label_7F1ADAC4;
    case 0x7F1ADAC8u: goto label_7F1ADAC8;
    case 0x7F1ADACCu: goto label_7F1ADACC;
    case 0x7F1ADAD0u: goto label_7F1ADAD0;
    case 0x7F1ADAD4u: goto label_7F1ADAD4;
    case 0x7F1ADAD8u: goto label_7F1ADAD8;
    case 0x7F1ADADCu: goto label_7F1ADADC;
    case 0x7F1ADAE0u: goto label_7F1ADAE0;
    case 0x7F1ADAE4u: goto label_7F1ADAE4;
    case 0x7F1ADAE8u: goto label_7F1ADAE8;
    case 0x7F1ADAECu: goto label_7F1ADAEC;
    case 0x7F1ADAF0u: goto label_7F1ADAF0;
    case 0x7F1ADAF4u: goto label_7F1ADAF4;
    case 0x7F1ADAF8u: goto label_7F1ADAF8;
    case 0x7F1ADAFCu: goto label_7F1ADAFC;
    case 0x7F1ADB00u: goto label_7F1ADB00;
    case 0x7F1ADB04u: goto label_7F1ADB04;
    case 0x7F1ADB08u: goto label_7F1ADB08;
    case 0x7F1ADB0Cu: goto label_7F1ADB0C;
    case 0x7F1ADB10u: goto label_7F1ADB10;
    case 0x7F1ADB14u: goto label_7F1ADB14;
    case 0x7F1ADB18u: goto label_7F1ADB18;
    case 0x7F1ADB1Cu: goto label_7F1ADB1C;
    case 0x7F1ADB20u: goto label_7F1ADB20;
    case 0x7F1ADB24u: goto label_7F1ADB24;
    case 0x7F1ADB28u: goto label_7F1ADB28;
    case 0x7F1ADB2Cu: goto label_7F1ADB2C;
    case 0x7F1ADB30u: goto label_7F1ADB30;
    case 0x7F1ADB34u: goto label_7F1ADB34;
    case 0x7F1ADB38u: goto label_7F1ADB38;
    case 0x7F1ADB3Cu: goto label_7F1ADB3C;
    case 0x7F1ADB40u: goto label_7F1ADB40;
    case 0x7F1ADB44u: goto label_7F1ADB44;
    case 0x7F1ADB48u: goto label_7F1ADB48;
    case 0x7F1ADB4Cu: goto label_7F1ADB4C;
    case 0x7F1ADB50u: goto label_7F1ADB50;
    case 0x7F1ADB54u: goto label_7F1ADB54;
    case 0x7F1ADB58u: goto label_7F1ADB58;
    case 0x7F1ADB5Cu: goto label_7F1ADB5C;
    case 0x7F1ADB60u: goto label_7F1ADB60;
    case 0x7F1ADB64u: goto label_7F1ADB64;
    case 0x7F1ADB68u: goto label_7F1ADB68;
    case 0x7F1ADB6Cu: goto label_7F1ADB6C;
    case 0x7F1ADB70u: goto label_7F1ADB70;
    case 0x7F1ADB74u: goto label_7F1ADB74;
    case 0x7F1ADB78u: goto label_7F1ADB78;
    case 0x7F1ADB7Cu: goto label_7F1ADB7C;
    case 0x7F1ADB80u: goto label_7F1ADB80;
    case 0x7F1ADB84u: goto label_7F1ADB84;
    case 0x7F1ADB88u: goto label_7F1ADB88;
    case 0x7F1ADB8Cu: goto label_7F1ADB8C;
    case 0x7F1ADB90u: goto label_7F1ADB90;
    case 0x7F1ADB94u: goto label_7F1ADB94;
    case 0x7F1ADB98u: goto label_7F1ADB98;
    case 0x7F1ADB9Cu: goto label_7F1ADB9C;
    case 0x7F1ADBA0u: goto label_7F1ADBA0;
    case 0x7F1ADBA4u: goto label_7F1ADBA4;
    case 0x7F1ADBA8u: goto label_7F1ADBA8;
    case 0x7F1ADBACu: goto label_7F1ADBAC;
    case 0x7F1ADBB0u: goto label_7F1ADBB0;
    case 0x7F1ADBB4u: goto label_7F1ADBB4;
    case 0x7F1ADBB8u: goto label_7F1ADBB8;
    case 0x7F1ADBBCu: goto label_7F1ADBBC;
    case 0x7F1ADBC0u: goto label_7F1ADBC0;
    case 0x7F1ADBC4u: goto label_7F1ADBC4;
    case 0x7F1ADBC8u: goto label_7F1ADBC8;
    case 0x7F1ADBCCu: goto label_7F1ADBCC;
    case 0x7F1ADBD0u: goto label_7F1ADBD0;
    case 0x7F1ADBD4u: goto label_7F1ADBD4;
    case 0x7F1ADBD8u: goto label_7F1ADBD8;
    case 0x7F1ADBDCu: goto label_7F1ADBDC;
    case 0x7F1ADBE0u: goto label_7F1ADBE0;
    case 0x7F1ADBE4u: goto label_7F1ADBE4;
    case 0x7F1ADBE8u: goto label_7F1ADBE8;
    case 0x7F1ADBECu: goto label_7F1ADBEC;
    case 0x7F1ADBF0u: goto label_7F1ADBF0;
    case 0x7F1ADBF4u: goto label_7F1ADBF4;
    case 0x7F1ADBF8u: goto label_7F1ADBF8;
    case 0x7F1ADBFCu: goto label_7F1ADBFC;
    case 0x7F1ADC00u: goto label_7F1ADC00;
    case 0x7F1ADC04u: goto label_7F1ADC04;
    case 0x7F1ADC08u: goto label_7F1ADC08;
    case 0x7F1ADC0Cu: goto label_7F1ADC0C;
    case 0x7F1ADC10u: goto label_7F1ADC10;
    case 0x7F1ADC14u: goto label_7F1ADC14;
    case 0x7F1ADC18u: goto label_7F1ADC18;
    case 0x7F1ADC1Cu: goto label_7F1ADC1C;
    case 0x7F1ADC20u: goto label_7F1ADC20;
    case 0x7F1ADC24u: goto label_7F1ADC24;
    case 0x7F1ADC28u: goto label_7F1ADC28;
    case 0x7F1ADC2Cu: goto label_7F1ADC2C;
    case 0x7F1ADC30u: goto label_7F1ADC30;
    case 0x7F1ADC34u: goto label_7F1ADC34;
    case 0x7F1ADC38u: goto label_7F1ADC38;
    case 0x7F1ADC3Cu: goto label_7F1ADC3C;
    case 0x7F1ADC40u: goto label_7F1ADC40;
    case 0x7F1ADC44u: goto label_7F1ADC44;
    case 0x7F1ADC48u: goto label_7F1ADC48;
    case 0x7F1ADC4Cu: goto label_7F1ADC4C;
    case 0x7F1ADC50u: goto label_7F1ADC50;
    case 0x7F1ADC54u: goto label_7F1ADC54;
    case 0x7F1ADC58u: goto label_7F1ADC58;
    case 0x7F1ADC5Cu: goto label_7F1ADC5C;
    case 0x7F1ADC60u: goto label_7F1ADC60;
    case 0x7F1ADC64u: goto label_7F1ADC64;
    case 0x7F1ADC68u: goto label_7F1ADC68;
    case 0x7F1ADC6Cu: goto label_7F1ADC6C;
    case 0x7F1ADC70u: goto label_7F1ADC70;
    case 0x7F1ADC74u: goto label_7F1ADC74;
    case 0x7F1ADC78u: goto label_7F1ADC78;
    case 0x7F1ADC7Cu: goto label_7F1ADC7C;
    case 0x7F1ADC80u: goto label_7F1ADC80;
    case 0x7F1ADC84u: goto label_7F1ADC84;
    case 0x7F1ADC88u: goto label_7F1ADC88;
    case 0x7F1ADC8Cu: goto label_7F1ADC8C;
    case 0x7F1ADC90u: goto label_7F1ADC90;
    case 0x7F1ADC94u: goto label_7F1ADC94;
    case 0x7F1ADC98u: goto label_7F1ADC98;
    case 0x7F1ADC9Cu: goto label_7F1ADC9C;
    case 0x7F1ADCA0u: goto label_7F1ADCA0;
    case 0x7F1ADCA4u: goto label_7F1ADCA4;
    case 0x7F1ADCA8u: goto label_7F1ADCA8;
    case 0x7F1ADCACu: goto label_7F1ADCAC;
    case 0x7F1ADCB0u: goto label_7F1ADCB0;
    case 0x7F1ADCB4u: goto label_7F1ADCB4;
    case 0x7F1ADCB8u: goto label_7F1ADCB8;
    case 0x7F1ADCBCu: goto label_7F1ADCBC;
    case 0x7F1ADCC0u: goto label_7F1ADCC0;
    case 0x7F1ADCC4u: goto label_7F1ADCC4;
    case 0x7F1ADCC8u: goto label_7F1ADCC8;
    case 0x7F1ADCCCu: goto label_7F1ADCCC;
    case 0x7F1ADCD0u: goto label_7F1ADCD0;
    case 0x7F1ADCD4u: goto label_7F1ADCD4;
    case 0x7F1ADCD8u: goto label_7F1ADCD8;
    case 0x7F1ADCDCu: goto label_7F1ADCDC;
    case 0x7F1ADCE0u: goto label_7F1ADCE0;
    case 0x7F1ADCE4u: goto label_7F1ADCE4;
    case 0x7F1ADCE8u: goto label_7F1ADCE8;
    case 0x7F1ADCECu: goto label_7F1ADCEC;
    case 0x7F1ADCF0u: goto label_7F1ADCF0;
    case 0x7F1ADCF4u: goto label_7F1ADCF4;
    case 0x7F1ADCF8u: goto label_7F1ADCF8;
    case 0x7F1ADCFCu: goto label_7F1ADCFC;
    case 0x7F1ADD00u: goto label_7F1ADD00;
    case 0x7F1ADD04u: goto label_7F1ADD04;
    case 0x7F1ADD08u: goto label_7F1ADD08;
    case 0x7F1ADD0Cu: goto label_7F1ADD0C;
    case 0x7F1ADD10u: goto label_7F1ADD10;
    case 0x7F1ADD14u: goto label_7F1ADD14;
    case 0x7F1ADD18u: goto label_7F1ADD18;
    case 0x7F1ADD1Cu: goto label_7F1ADD1C;
    case 0x7F1ADD20u: goto label_7F1ADD20;
    case 0x7F1ADD24u: goto label_7F1ADD24;
    case 0x7F1ADD28u: goto label_7F1ADD28;
    case 0x7F1ADD2Cu: goto label_7F1ADD2C;
    case 0x7F1ADD30u: goto label_7F1ADD30;
    case 0x7F1ADD34u: goto label_7F1ADD34;
    case 0x7F1ADD38u: goto label_7F1ADD38;
    case 0x7F1ADD3Cu: goto label_7F1ADD3C;
    case 0x7F1ADD40u: goto label_7F1ADD40;
    case 0x7F1ADD44u: goto label_7F1ADD44;
    case 0x7F1ADD48u: goto label_7F1ADD48;
    case 0x7F1ADD4Cu: goto label_7F1ADD4C;
    case 0x7F1ADD50u: goto label_7F1ADD50;
    case 0x7F1ADD54u: goto label_7F1ADD54;
    case 0x7F1ADD58u: goto label_7F1ADD58;
    case 0x7F1ADD5Cu: goto label_7F1ADD5C;
    case 0x7F1ADD60u: goto label_7F1ADD60;
    case 0x7F1ADD64u: goto label_7F1ADD64;
    case 0x7F1ADD68u: goto label_7F1ADD68;
    case 0x7F1ADD6Cu: goto label_7F1ADD6C;
    case 0x7F1ADD70u: goto label_7F1ADD70;
    case 0x7F1ADD74u: goto label_7F1ADD74;
    case 0x7F1ADD78u: goto label_7F1ADD78;
    case 0x7F1ADD7Cu: goto label_7F1ADD7C;
    case 0x7F1ADD80u: goto label_7F1ADD80;
    case 0x7F1ADD84u: goto label_7F1ADD84;
    case 0x7F1ADD88u: goto label_7F1ADD88;
    case 0x7F1ADD8Cu: goto label_7F1ADD8C;
    case 0x7F1ADD90u: goto label_7F1ADD90;
    case 0x7F1ADD94u: goto label_7F1ADD94;
    case 0x7F1ADD98u: goto label_7F1ADD98;
    case 0x7F1ADD9Cu: goto label_7F1ADD9C;
    case 0x7F1ADDA0u: goto label_7F1ADDA0;
    case 0x7F1ADDA4u: goto label_7F1ADDA4;
    case 0x7F1ADDA8u: goto label_7F1ADDA8;
    case 0x7F1ADDACu: goto label_7F1ADDAC;
    case 0x7F1ADDB0u: goto label_7F1ADDB0;
    case 0x7F1ADDB4u: goto label_7F1ADDB4;
    case 0x7F1ADDB8u: goto label_7F1ADDB8;
    case 0x7F1ADDBCu: goto label_7F1ADDBC;
    case 0x7F1ADDC0u: goto label_7F1ADDC0;
    case 0x7F1ADDC4u: goto label_7F1ADDC4;
    case 0x7F1ADDC8u: goto label_7F1ADDC8;
    case 0x7F1ADDCCu: goto label_7F1ADDCC;
    case 0x7F1ADDD0u: goto label_7F1ADDD0;
    case 0x7F1ADDD4u: goto label_7F1ADDD4;
    case 0x7F1ADDD8u: goto label_7F1ADDD8;
    case 0x7F1ADDDCu: goto label_7F1ADDDC;
    case 0x7F1ADDE0u: goto label_7F1ADDE0;
    case 0x7F1ADDE4u: goto label_7F1ADDE4;
    case 0x7F1ADDE8u: goto label_7F1ADDE8;
    case 0x7F1ADDECu: goto label_7F1ADDEC;
    case 0x7F1ADDF0u: goto label_7F1ADDF0;
    case 0x7F1ADDF4u: goto label_7F1ADDF4;
    case 0x7F1ADDF8u: goto label_7F1ADDF8;
    case 0x7F1ADDFCu: goto label_7F1ADDFC;
    case 0x7F1ADE00u: goto label_7F1ADE00;
    case 0x7F1ADE04u: goto label_7F1ADE04;
    case 0x7F1ADE08u: goto label_7F1ADE08;
    case 0x7F1ADE0Cu: goto label_7F1ADE0C;
    case 0x7F1ADE10u: goto label_7F1ADE10;
    case 0x7F1ADE14u: goto label_7F1ADE14;
    case 0x7F1ADE18u: goto label_7F1ADE18;
    case 0x7F1ADE1Cu: goto label_7F1ADE1C;
    case 0x7F1ADE20u: goto label_7F1ADE20;
    case 0x7F1ADE24u: goto label_7F1ADE24;
    case 0x7F1ADE28u: goto label_7F1ADE28;
    case 0x7F1ADE2Cu: goto label_7F1ADE2C;
    case 0x7F1ADE30u: goto label_7F1ADE30;
    case 0x7F1ADE34u: goto label_7F1ADE34;
    case 0x7F1ADE38u: goto label_7F1ADE38;
    case 0x7F1ADE3Cu: goto label_7F1ADE3C;
    case 0x7F1ADE40u: goto label_7F1ADE40;
    case 0x7F1ADE44u: goto label_7F1ADE44;
    case 0x7F1ADE48u: goto label_7F1ADE48;
    case 0x7F1ADE4Cu: goto label_7F1ADE4C;
    case 0x7F1ADE50u: goto label_7F1ADE50;
    case 0x7F1ADE54u: goto label_7F1ADE54;
    case 0x7F1ADE58u: goto label_7F1ADE58;
    case 0x7F1ADE5Cu: goto label_7F1ADE5C;
    case 0x7F1ADE60u: goto label_7F1ADE60;
    case 0x7F1ADE64u: goto label_7F1ADE64;
    case 0x7F1ADE68u: goto label_7F1ADE68;
    case 0x7F1ADE6Cu: goto label_7F1ADE6C;
    case 0x7F1ADE70u: goto label_7F1ADE70;
    case 0x7F1ADE74u: goto label_7F1ADE74;
    case 0x7F1ADE78u: goto label_7F1ADE78;
    case 0x7F1ADE7Cu: goto label_7F1ADE7C;
    case 0x7F1ADE80u: goto label_7F1ADE80;
    case 0x7F1ADE84u: goto label_7F1ADE84;
    case 0x7F1ADE88u: goto label_7F1ADE88;
    case 0x7F1ADE8Cu: goto label_7F1ADE8C;
    case 0x7F1ADE90u: goto label_7F1ADE90;
    case 0x7F1ADE94u: goto label_7F1ADE94;
    case 0x7F1ADE98u: goto label_7F1ADE98;
    case 0x7F1ADE9Cu: goto label_7F1ADE9C;
    case 0x7F1ADEA0u: goto label_7F1ADEA0;
    case 0x7F1ADEA4u: goto label_7F1ADEA4;
    case 0x7F1ADEA8u: goto label_7F1ADEA8;
    case 0x7F1ADEACu: goto label_7F1ADEAC;
    case 0x7F1ADEB0u: goto label_7F1ADEB0;
    case 0x7F1ADEB4u: goto label_7F1ADEB4;
    case 0x7F1ADEB8u: goto label_7F1ADEB8;
    case 0x7F1ADEBCu: goto label_7F1ADEBC;
    case 0x7F1ADEC0u: goto label_7F1ADEC0;
    case 0x7F1ADEC4u: goto label_7F1ADEC4;
    case 0x7F1ADEC8u: goto label_7F1ADEC8;
    case 0x7F1ADECCu: goto label_7F1ADECC;
    case 0x7F1ADED0u: goto label_7F1ADED0;
    case 0x7F1ADED4u: goto label_7F1ADED4;
    case 0x7F1ADED8u: goto label_7F1ADED8;
    case 0x7F1ADEDCu: goto label_7F1ADEDC;
    case 0x7F1ADEE0u: goto label_7F1ADEE0;
    case 0x7F1ADEE4u: goto label_7F1ADEE4;
    case 0x7F1ADEE8u: goto label_7F1ADEE8;
    case 0x7F1ADEECu: goto label_7F1ADEEC;
    case 0x7F1ADEF0u: goto label_7F1ADEF0;
    case 0x7F1ADEF4u: goto label_7F1ADEF4;
    case 0x7F1ADEF8u: goto label_7F1ADEF8;
    case 0x7F1ADEFCu: goto label_7F1ADEFC;
    case 0x7F1ADF00u: goto label_7F1ADF00;
    case 0x7F1ADF04u: goto label_7F1ADF04;
    case 0x7F1ADF08u: goto label_7F1ADF08;
    case 0x7F1ADF0Cu: goto label_7F1ADF0C;
    case 0x7F1ADF10u: goto label_7F1ADF10;
    case 0x7F1ADF14u: goto label_7F1ADF14;
    case 0x7F1ADF18u: goto label_7F1ADF18;
    case 0x7F1ADF1Cu: goto label_7F1ADF1C;
    case 0x7F1ADF20u: goto label_7F1ADF20;
    case 0x7F1ADF24u: goto label_7F1ADF24;
    case 0x7F1ADF28u: goto label_7F1ADF28;
    case 0x7F1ADF2Cu: goto label_7F1ADF2C;
    case 0x7F1ADF30u: goto label_7F1ADF30;
    case 0x7F1ADF34u: goto label_7F1ADF34;
    case 0x7F1ADF38u: goto label_7F1ADF38;
    case 0x7F1ADF3Cu: goto label_7F1ADF3C;
    case 0x7F1ADF40u: goto label_7F1ADF40;
    case 0x7F1ADF44u: goto label_7F1ADF44;
    case 0x7F1ADF48u: goto label_7F1ADF48;
    case 0x7F1ADF4Cu: goto label_7F1ADF4C;
    case 0x7F1ADF50u: goto label_7F1ADF50;
    case 0x7F1ADF54u: goto label_7F1ADF54;
    case 0x7F1ADF58u: goto label_7F1ADF58;
    case 0x7F1ADF5Cu: goto label_7F1ADF5C;
    case 0x7F1ADF60u: goto label_7F1ADF60;
    case 0x7F1ADF64u: goto label_7F1ADF64;
    case 0x7F1ADF68u: goto label_7F1ADF68;
    case 0x7F1ADF6Cu: goto label_7F1ADF6C;
    case 0x7F1ADF70u: goto label_7F1ADF70;
    case 0x7F1ADF74u: goto label_7F1ADF74;
    case 0x7F1ADF78u: goto label_7F1ADF78;
    case 0x7F1ADF7Cu: goto label_7F1ADF7C;
    case 0x7F1ADF80u: goto label_7F1ADF80;
    case 0x7F1ADF84u: goto label_7F1ADF84;
    case 0x7F1ADF88u: goto label_7F1ADF88;
    case 0x7F1ADF8Cu: goto label_7F1ADF8C;
    case 0x7F1ADF90u: goto label_7F1ADF90;
    case 0x7F1ADF94u: goto label_7F1ADF94;
    case 0x7F1ADF98u: goto label_7F1ADF98;
    case 0x7F1ADF9Cu: goto label_7F1ADF9C;
    case 0x7F1ADFA0u: goto label_7F1ADFA0;
    case 0x7F1ADFA4u: goto label_7F1ADFA4;
    case 0x7F1ADFA8u: goto label_7F1ADFA8;
    case 0x7F1ADFACu: goto label_7F1ADFAC;
    case 0x7F1ADFB0u: goto label_7F1ADFB0;
    case 0x7F1ADFB4u: goto label_7F1ADFB4;
    case 0x7F1ADFB8u: goto label_7F1ADFB8;
    case 0x7F1ADFBCu: goto label_7F1ADFBC;
    case 0x7F1ADFC0u: goto label_7F1ADFC0;
    case 0x7F1ADFC4u: goto label_7F1ADFC4;
    case 0x7F1ADFC8u: goto label_7F1ADFC8;
    case 0x7F1ADFCCu: goto label_7F1ADFCC;
    case 0x7F1ADFD0u: goto label_7F1ADFD0;
    case 0x7F1ADFD4u: goto label_7F1ADFD4;
    case 0x7F1ADFD8u: goto label_7F1ADFD8;
    case 0x7F1ADFDCu: goto label_7F1ADFDC;
    case 0x7F1ADFE0u: goto label_7F1ADFE0;
    case 0x7F1ADFE4u: goto label_7F1ADFE4;
    case 0x7F1ADFE8u: goto label_7F1ADFE8;
    case 0x7F1ADFECu: goto label_7F1ADFEC;
    case 0x7F1ADFF0u: goto label_7F1ADFF0;
    case 0x7F1ADFF4u: goto label_7F1ADFF4;
    case 0x7F1ADFF8u: goto label_7F1ADFF8;
    case 0x7F1ADFFCu: goto label_7F1ADFFC;
    case 0x7F1AE000u: goto label_7F1AE000;
    case 0x7F1AE004u: goto label_7F1AE004;
    case 0x7F1AE008u: goto label_7F1AE008;
    case 0x7F1AE00Cu: goto label_7F1AE00C;
    case 0x7F1AE010u: goto label_7F1AE010;
    case 0x7F1AE014u: goto label_7F1AE014;
    case 0x7F1AE018u: goto label_7F1AE018;
    case 0x7F1AE01Cu: goto label_7F1AE01C;
    case 0x7F1AE020u: goto label_7F1AE020;
    case 0x7F1AE024u: goto label_7F1AE024;
    case 0x7F1AE028u: goto label_7F1AE028;
    case 0x7F1AE02Cu: goto label_7F1AE02C;
    case 0x7F1AE030u: goto label_7F1AE030;
    case 0x7F1AE034u: goto label_7F1AE034;
    case 0x7F1AE038u: goto label_7F1AE038;
    case 0x7F1AE03Cu: goto label_7F1AE03C;
    case 0x7F1AE040u: goto label_7F1AE040;
    case 0x7F1AE044u: goto label_7F1AE044;
    case 0x7F1AE048u: goto label_7F1AE048;
    case 0x7F1AE04Cu: goto label_7F1AE04C;
    case 0x7F1AE050u: goto label_7F1AE050;
    case 0x7F1AE054u: goto label_7F1AE054;
    case 0x7F1AE058u: goto label_7F1AE058;
    case 0x7F1AE05Cu: goto label_7F1AE05C;
    case 0x7F1AE060u: goto label_7F1AE060;
    case 0x7F1AE064u: goto label_7F1AE064;
    case 0x7F1AE068u: goto label_7F1AE068;
    case 0x7F1AE06Cu: goto label_7F1AE06C;
    case 0x7F1AE070u: goto label_7F1AE070;
    case 0x7F1AE074u: goto label_7F1AE074;
    case 0x7F1AE078u: goto label_7F1AE078;
    case 0x7F1AE07Cu: goto label_7F1AE07C;
    case 0x7F1AE080u: goto label_7F1AE080;
    case 0x7F1AE084u: goto label_7F1AE084;
    case 0x7F1AE088u: goto label_7F1AE088;
    case 0x7F1AE08Cu: goto label_7F1AE08C;
    case 0x7F1AE090u: goto label_7F1AE090;
    case 0x7F1AE094u: goto label_7F1AE094;
    case 0x7F1AE098u: goto label_7F1AE098;
    case 0x7F1AE09Cu: goto label_7F1AE09C;
    case 0x7F1AE0A0u: goto label_7F1AE0A0;
    case 0x7F1AE0A4u: goto label_7F1AE0A4;
    case 0x7F1AE0A8u: goto label_7F1AE0A8;
    case 0x7F1AE0ACu: goto label_7F1AE0AC;
    case 0x7F1AE0B0u: goto label_7F1AE0B0;
    case 0x7F1AE0B4u: goto label_7F1AE0B4;
    case 0x7F1AE0B8u: goto label_7F1AE0B8;
    case 0x7F1AE0BCu: goto label_7F1AE0BC;
    case 0x7F1AE0C0u: goto label_7F1AE0C0;
    case 0x7F1AE0C4u: goto label_7F1AE0C4;
    case 0x7F1AE0C8u: goto label_7F1AE0C8;
    case 0x7F1AE0CCu: goto label_7F1AE0CC;
    case 0x7F1AE0D0u: goto label_7F1AE0D0;
    case 0x7F1AE0D4u: goto label_7F1AE0D4;
    case 0x7F1AE0D8u: goto label_7F1AE0D8;
    case 0x7F1AE0DCu: goto label_7F1AE0DC;
    case 0x7F1AE0E0u: goto label_7F1AE0E0;
    case 0x7F1AE0E4u: goto label_7F1AE0E4;
    case 0x7F1AE0E8u: goto label_7F1AE0E8;
    case 0x7F1AE0ECu: goto label_7F1AE0EC;
    case 0x7F1AE0F0u: goto label_7F1AE0F0;
    case 0x7F1AE0F4u: goto label_7F1AE0F4;
    case 0x7F1AE0F8u: goto label_7F1AE0F8;
    case 0x7F1AE0FCu: goto label_7F1AE0FC;
    case 0x7F1AE100u: goto label_7F1AE100;
    case 0x7F1AE104u: goto label_7F1AE104;
    case 0x7F1AE108u: goto label_7F1AE108;
    case 0x7F1AE10Cu: goto label_7F1AE10C;
    case 0x7F1AE110u: goto label_7F1AE110;
    case 0x7F1AE114u: goto label_7F1AE114;
    case 0x7F1AE118u: goto label_7F1AE118;
    case 0x7F1AE11Cu: goto label_7F1AE11C;
    case 0x7F1AE120u: goto label_7F1AE120;
    case 0x7F1AE124u: goto label_7F1AE124;
    case 0x7F1AE128u: goto label_7F1AE128;
    case 0x7F1AE12Cu: goto label_7F1AE12C;
    case 0x7F1AE130u: goto label_7F1AE130;
    case 0x7F1AE134u: goto label_7F1AE134;
    case 0x7F1AE138u: goto label_7F1AE138;
    case 0x7F1AE13Cu: goto label_7F1AE13C;
    case 0x7F1AE140u: goto label_7F1AE140;
    case 0x7F1AE144u: goto label_7F1AE144;
    case 0x7F1AE148u: goto label_7F1AE148;
    case 0x7F1AE14Cu: goto label_7F1AE14C;
    case 0x7F1AE150u: goto label_7F1AE150;
    case 0x7F1AE154u: goto label_7F1AE154;
    case 0x7F1AE158u: goto label_7F1AE158;
    case 0x7F1AE15Cu: goto label_7F1AE15C;
    case 0x7F1AE160u: goto label_7F1AE160;
    case 0x7F1AE164u: goto label_7F1AE164;
    case 0x7F1AE168u: goto label_7F1AE168;
    case 0x7F1AE16Cu: goto label_7F1AE16C;
    case 0x7F1AE170u: goto label_7F1AE170;
    case 0x7F1AE174u: goto label_7F1AE174;
    case 0x7F1AE178u: goto label_7F1AE178;
    case 0x7F1AE17Cu: goto label_7F1AE17C;
    case 0x7F1AE180u: goto label_7F1AE180;
    case 0x7F1AE184u: goto label_7F1AE184;
    case 0x7F1AE188u: goto label_7F1AE188;
    case 0x7F1AE18Cu: goto label_7F1AE18C;
    case 0x7F1AE190u: goto label_7F1AE190;
    case 0x7F1AE194u: goto label_7F1AE194;
    case 0x7F1AE198u: goto label_7F1AE198;
    case 0x7F1AE19Cu: goto label_7F1AE19C;
    case 0x7F1AE1A0u: goto label_7F1AE1A0;
    case 0x7F1AE1A4u: goto label_7F1AE1A4;
    case 0x7F1AE1A8u: goto label_7F1AE1A8;
    case 0x7F1AE1ACu: goto label_7F1AE1AC;
    case 0x7F1AE1B0u: goto label_7F1AE1B0;
    case 0x7F1AE1B4u: goto label_7F1AE1B4;
    case 0x7F1AE1B8u: goto label_7F1AE1B8;
    case 0x7F1AE1BCu: goto label_7F1AE1BC;
    case 0x7F1AE1C0u: goto label_7F1AE1C0;
    case 0x7F1AE1C4u: goto label_7F1AE1C4;
    case 0x7F1AE1C8u: goto label_7F1AE1C8;
    case 0x7F1AE1CCu: goto label_7F1AE1CC;
    case 0x7F1AE1D0u: goto label_7F1AE1D0;
    case 0x7F1AE1D4u: goto label_7F1AE1D4;
    case 0x7F1AE1D8u: goto label_7F1AE1D8;
    case 0x7F1AE1DCu: goto label_7F1AE1DC;
    case 0x7F1AE1E0u: goto label_7F1AE1E0;
    case 0x7F1AE1E4u: goto label_7F1AE1E4;
    case 0x7F1AE1E8u: goto label_7F1AE1E8;
    case 0x7F1AE1ECu: goto label_7F1AE1EC;
    case 0x7F1AE1F0u: goto label_7F1AE1F0;
    case 0x7F1AE1F4u: goto label_7F1AE1F4;
    case 0x7F1AE1F8u: goto label_7F1AE1F8;
    case 0x7F1AE1FCu: goto label_7F1AE1FC;
    case 0x7F1AE200u: goto label_7F1AE200;
    case 0x7F1AE204u: goto label_7F1AE204;
    case 0x7F1AE208u: goto label_7F1AE208;
    case 0x7F1AE20Cu: goto label_7F1AE20C;
    case 0x7F1AE210u: goto label_7F1AE210;
    case 0x7F1AE214u: goto label_7F1AE214;
    case 0x7F1AE218u: goto label_7F1AE218;
    case 0x7F1AE21Cu: goto label_7F1AE21C;
    case 0x7F1AE220u: goto label_7F1AE220;
    case 0x7F1AE224u: goto label_7F1AE224;
    case 0x7F1AE228u: goto label_7F1AE228;
    case 0x7F1AE22Cu: goto label_7F1AE22C;
    case 0x7F1AE230u: goto label_7F1AE230;
    case 0x7F1AE234u: goto label_7F1AE234;
    case 0x7F1AE238u: goto label_7F1AE238;
    case 0x7F1AE23Cu: goto label_7F1AE23C;
    case 0x7F1AE240u: goto label_7F1AE240;
    case 0x7F1AE244u: goto label_7F1AE244;
    case 0x7F1AE248u: goto label_7F1AE248;
    case 0x7F1AE24Cu: goto label_7F1AE24C;
    case 0x7F1AE250u: goto label_7F1AE250;
    case 0x7F1AE254u: goto label_7F1AE254;
    case 0x7F1AE258u: goto label_7F1AE258;
    case 0x7F1AE25Cu: goto label_7F1AE25C;
    case 0x7F1AE260u: goto label_7F1AE260;
    case 0x7F1AE264u: goto label_7F1AE264;
    case 0x7F1AE268u: goto label_7F1AE268;
    case 0x7F1AE26Cu: goto label_7F1AE26C;
    case 0x7F1AE270u: goto label_7F1AE270;
    case 0x7F1AE274u: goto label_7F1AE274;
    case 0x7F1AE278u: goto label_7F1AE278;
    case 0x7F1AE27Cu: goto label_7F1AE27C;
    case 0x7F1AE280u: goto label_7F1AE280;
    case 0x7F1AE284u: goto label_7F1AE284;
    case 0x7F1AE288u: goto label_7F1AE288;
    case 0x7F1AE28Cu: goto label_7F1AE28C;
    case 0x7F1AE290u: goto label_7F1AE290;
    case 0x7F1AE294u: goto label_7F1AE294;
    case 0x7F1AE298u: goto label_7F1AE298;
    case 0x7F1AE29Cu: goto label_7F1AE29C;
    case 0x7F1AE2A0u: goto label_7F1AE2A0;
    case 0x7F1AE2A4u: goto label_7F1AE2A4;
    case 0x7F1AE2A8u: goto label_7F1AE2A8;
    case 0x7F1AE2ACu: goto label_7F1AE2AC;
    case 0x7F1AE2B0u: goto label_7F1AE2B0;
    case 0x7F1AE2B4u: goto label_7F1AE2B4;
    case 0x7F1AE2B8u: goto label_7F1AE2B8;
    case 0x7F1AE2BCu: goto label_7F1AE2BC;
    case 0x7F1AE2C0u: goto label_7F1AE2C0;
    case 0x7F1AE2C4u: goto label_7F1AE2C4;
    case 0x7F1AE2C8u: goto label_7F1AE2C8;
    case 0x7F1AE2CCu: goto label_7F1AE2CC;
    case 0x7F1AE2D0u: goto label_7F1AE2D0;
    case 0x7F1AE2D4u: goto label_7F1AE2D4;
    case 0x7F1AE2D8u: goto label_7F1AE2D8;
    case 0x7F1AE2DCu: goto label_7F1AE2DC;
    case 0x7F1AE2E0u: goto label_7F1AE2E0;
    case 0x7F1AE2E4u: goto label_7F1AE2E4;
    case 0x7F1AE2E8u: goto label_7F1AE2E8;
    case 0x7F1AE2ECu: goto label_7F1AE2EC;
    case 0x7F1AE2F0u: goto label_7F1AE2F0;
    case 0x7F1AE2F4u: goto label_7F1AE2F4;
    case 0x7F1AE2F8u: goto label_7F1AE2F8;
    case 0x7F1AE2FCu: goto label_7F1AE2FC;
    case 0x7F1AE300u: goto label_7F1AE300;
    case 0x7F1AE304u: goto label_7F1AE304;
    case 0x7F1AE308u: goto label_7F1AE308;
    case 0x7F1AE30Cu: goto label_7F1AE30C;
    case 0x7F1AE310u: goto label_7F1AE310;
    case 0x7F1AE314u: goto label_7F1AE314;
    case 0x7F1AE318u: goto label_7F1AE318;
    case 0x7F1AE31Cu: goto label_7F1AE31C;
    case 0x7F1AE320u: goto label_7F1AE320;
    case 0x7F1AE324u: goto label_7F1AE324;
    case 0x7F1AE328u: goto label_7F1AE328;
    case 0x7F1AE32Cu: goto label_7F1AE32C;
    case 0x7F1AE330u: goto label_7F1AE330;
    case 0x7F1AE334u: goto label_7F1AE334;
    case 0x7F1AE338u: goto label_7F1AE338;
    case 0x7F1AE33Cu: goto label_7F1AE33C;
    case 0x7F1AE340u: goto label_7F1AE340;
    case 0x7F1AE344u: goto label_7F1AE344;
    case 0x7F1AE348u: goto label_7F1AE348;
    case 0x7F1AE34Cu: goto label_7F1AE34C;
    case 0x7F1AE350u: goto label_7F1AE350;
    case 0x7F1AE354u: goto label_7F1AE354;
    case 0x7F1AE358u: goto label_7F1AE358;
    case 0x7F1AE35Cu: goto label_7F1AE35C;
    case 0x7F1AE360u: goto label_7F1AE360;
    case 0x7F1AE364u: goto label_7F1AE364;
    case 0x7F1AE368u: goto label_7F1AE368;
    case 0x7F1AE36Cu: goto label_7F1AE36C;
    case 0x7F1AE370u: goto label_7F1AE370;
    case 0x7F1AE374u: goto label_7F1AE374;
    case 0x7F1AE378u: goto label_7F1AE378;
    case 0x7F1AE37Cu: goto label_7F1AE37C;
    case 0x7F1AE380u: goto label_7F1AE380;
    case 0x7F1AE384u: goto label_7F1AE384;
    case 0x7F1AE388u: goto label_7F1AE388;
    case 0x7F1AE38Cu: goto label_7F1AE38C;
    case 0x7F1AE390u: goto label_7F1AE390;
    case 0x7F1AE394u: goto label_7F1AE394;
    case 0x7F1AE398u: goto label_7F1AE398;
    case 0x7F1AE39Cu: goto label_7F1AE39C;
    case 0x7F1AE3A0u: goto label_7F1AE3A0;
    case 0x7F1AE3A4u: goto label_7F1AE3A4;
    case 0x7F1AE3A8u: goto label_7F1AE3A8;
    case 0x7F1AE3ACu: goto label_7F1AE3AC;
    case 0x7F1AE3B0u: goto label_7F1AE3B0;
    case 0x7F1AE3B4u: goto label_7F1AE3B4;
    case 0x7F1AE3B8u: goto label_7F1AE3B8;
    case 0x7F1AE3BCu: goto label_7F1AE3BC;
    case 0x7F1AE3C0u: goto label_7F1AE3C0;
    case 0x7F1AE3C4u: goto label_7F1AE3C4;
    case 0x7F1AE3C8u: goto label_7F1AE3C8;
    case 0x7F1AE3CCu: goto label_7F1AE3CC;
    case 0x7F1AE3D0u: goto label_7F1AE3D0;
    case 0x7F1AE3D4u: goto label_7F1AE3D4;
    case 0x7F1AE3D8u: goto label_7F1AE3D8;
    case 0x7F1AE3DCu: goto label_7F1AE3DC;
    case 0x7F1AE3E0u: goto label_7F1AE3E0;
    case 0x7F1AE3E4u: goto label_7F1AE3E4;
    case 0x7F1AE3E8u: goto label_7F1AE3E8;
    case 0x7F1AE3ECu: goto label_7F1AE3EC;
    case 0x7F1AE3F0u: goto label_7F1AE3F0;
    case 0x7F1AE3F4u: goto label_7F1AE3F4;
    case 0x7F1AE3F8u: goto label_7F1AE3F8;
    case 0x7F1AE3FCu: goto label_7F1AE3FC;
    case 0x7F1AE400u: goto label_7F1AE400;
    case 0x7F1AE404u: goto label_7F1AE404;
    case 0x7F1AE408u: goto label_7F1AE408;
    case 0x7F1AE40Cu: goto label_7F1AE40C;
    case 0x7F1AE410u: goto label_7F1AE410;
    case 0x7F1AE414u: goto label_7F1AE414;
    case 0x7F1AE418u: goto label_7F1AE418;
    case 0x7F1AE41Cu: goto label_7F1AE41C;
    case 0x7F1AE420u: goto label_7F1AE420;
    case 0x7F1AE424u: goto label_7F1AE424;
    case 0x7F1AE428u: goto label_7F1AE428;
    case 0x7F1AE42Cu: goto label_7F1AE42C;
    case 0x7F1AE430u: goto label_7F1AE430;
    case 0x7F1AE434u: goto label_7F1AE434;
    case 0x7F1AE438u: goto label_7F1AE438;
    case 0x7F1AE43Cu: goto label_7F1AE43C;
    case 0x7F1AE440u: goto label_7F1AE440;
    case 0x7F1AE444u: goto label_7F1AE444;
    case 0x7F1AE448u: goto label_7F1AE448;
    case 0x7F1AE44Cu: goto label_7F1AE44C;
    case 0x7F1AE450u: goto label_7F1AE450;
    case 0x7F1AE454u: goto label_7F1AE454;
    case 0x7F1AE458u: goto label_7F1AE458;
    case 0x7F1AE45Cu: goto label_7F1AE45C;
    case 0x7F1AE460u: goto label_7F1AE460;
    case 0x7F1AE464u: goto label_7F1AE464;
    case 0x7F1AE468u: goto label_7F1AE468;
    case 0x7F1AE46Cu: goto label_7F1AE46C;
    case 0x7F1AE470u: goto label_7F1AE470;
    case 0x7F1AE474u: goto label_7F1AE474;
    case 0x7F1AE478u: goto label_7F1AE478;
    case 0x7F1AE47Cu: goto label_7F1AE47C;
    case 0x7F1AE480u: goto label_7F1AE480;
    case 0x7F1AE484u: goto label_7F1AE484;
    case 0x7F1AE488u: goto label_7F1AE488;
    case 0x7F1AE48Cu: goto label_7F1AE48C;
    case 0x7F1AE490u: goto label_7F1AE490;
    case 0x7F1AE494u: goto label_7F1AE494;
    case 0x7F1AE498u: goto label_7F1AE498;
    case 0x7F1AE49Cu: goto label_7F1AE49C;
    case 0x7F1AE4A0u: goto label_7F1AE4A0;
    case 0x7F1AE4A4u: goto label_7F1AE4A4;
    case 0x7F1AE4A8u: goto label_7F1AE4A8;
    case 0x7F1AE4ACu: goto label_7F1AE4AC;
    case 0x7F1AE4B0u: goto label_7F1AE4B0;
    case 0x7F1AE4B4u: goto label_7F1AE4B4;
    case 0x7F1AE4B8u: goto label_7F1AE4B8;
    case 0x7F1AE4BCu: goto label_7F1AE4BC;
    case 0x7F1AE4C0u: goto label_7F1AE4C0;
    case 0x7F1AE4C4u: goto label_7F1AE4C4;
    case 0x7F1AE4C8u: goto label_7F1AE4C8;
    case 0x7F1AE4CCu: goto label_7F1AE4CC;
    case 0x7F1AE4D0u: goto label_7F1AE4D0;
    case 0x7F1AE4D4u: goto label_7F1AE4D4;
    case 0x7F1AE4D8u: goto label_7F1AE4D8;
    case 0x7F1AE4DCu: goto label_7F1AE4DC;
    case 0x7F1AE4E0u: goto label_7F1AE4E0;
    case 0x7F1AE4E4u: goto label_7F1AE4E4;
    case 0x7F1AE4E8u: goto label_7F1AE4E8;
    case 0x7F1AE4ECu: goto label_7F1AE4EC;
    case 0x7F1AE4F0u: goto label_7F1AE4F0;
    case 0x7F1AE4F4u: goto label_7F1AE4F4;
    case 0x7F1AE4F8u: goto label_7F1AE4F8;
    case 0x7F1AE4FCu: goto label_7F1AE4FC;
    case 0x7F1AE500u: goto label_7F1AE500;
    case 0x7F1AE504u: goto label_7F1AE504;
    case 0x7F1AE508u: goto label_7F1AE508;
    case 0x7F1AE50Cu: goto label_7F1AE50C;
    case 0x7F1AE510u: goto label_7F1AE510;
    case 0x7F1AE514u: goto label_7F1AE514;
    case 0x7F1AE518u: goto label_7F1AE518;
    case 0x7F1AE51Cu: goto label_7F1AE51C;
    case 0x7F1AE520u: goto label_7F1AE520;
    case 0x7F1AE524u: goto label_7F1AE524;
    case 0x7F1AE528u: goto label_7F1AE528;
    case 0x7F1AE52Cu: goto label_7F1AE52C;
    case 0x7F1AE530u: goto label_7F1AE530;
    case 0x7F1AE534u: goto label_7F1AE534;
    case 0x7F1AE538u: goto label_7F1AE538;
    case 0x7F1AE53Cu: goto label_7F1AE53C;
    case 0x7F1AE540u: goto label_7F1AE540;
    case 0x7F1AE544u: goto label_7F1AE544;
    case 0x7F1AE548u: goto label_7F1AE548;
    case 0x7F1AE54Cu: goto label_7F1AE54C;
    case 0x7F1AE550u: goto label_7F1AE550;
    case 0x7F1AE554u: goto label_7F1AE554;
    case 0x7F1AE558u: goto label_7F1AE558;
    case 0x7F1AE55Cu: goto label_7F1AE55C;
    case 0x7F1AE560u: goto label_7F1AE560;
    case 0x7F1AE564u: goto label_7F1AE564;
    case 0x7F1AE568u: goto label_7F1AE568;
    case 0x7F1AE56Cu: goto label_7F1AE56C;
    case 0x7F1AE570u: goto label_7F1AE570;
    case 0x7F1AE574u: goto label_7F1AE574;
    case 0x7F1AE578u: goto label_7F1AE578;
    case 0x7F1AE57Cu: goto label_7F1AE57C;
    case 0x7F1AE580u: goto label_7F1AE580;
    case 0x7F1AE584u: goto label_7F1AE584;
    case 0x7F1AE588u: goto label_7F1AE588;
    case 0x7F1AE58Cu: goto label_7F1AE58C;
    case 0x7F1AE590u: goto label_7F1AE590;
    case 0x7F1AE594u: goto label_7F1AE594;
    case 0x7F1AE598u: goto label_7F1AE598;
    case 0x7F1AE59Cu: goto label_7F1AE59C;
    case 0x7F1AE5A0u: goto label_7F1AE5A0;
    case 0x7F1AE5A4u: goto label_7F1AE5A4;
    case 0x7F1AE5A8u: goto label_7F1AE5A8;
    case 0x7F1AE5ACu: goto label_7F1AE5AC;
    case 0x7F1AE5B0u: goto label_7F1AE5B0;
    case 0x7F1AE5B4u: goto label_7F1AE5B4;
    case 0x7F1AE5B8u: goto label_7F1AE5B8;
    case 0x7F1AE5BCu: goto label_7F1AE5BC;
    case 0x7F1AE5C0u: goto label_7F1AE5C0;
    case 0x7F1AE5C4u: goto label_7F1AE5C4;
    case 0x7F1AE5C8u: goto label_7F1AE5C8;
    case 0x7F1AE5CCu: goto label_7F1AE5CC;
    case 0x7F1AE5D0u: goto label_7F1AE5D0;
    case 0x7F1AE5D4u: goto label_7F1AE5D4;
    case 0x7F1AE5D8u: goto label_7F1AE5D8;
    case 0x7F1AE5DCu: goto label_7F1AE5DC;
    case 0x7F1AE5E0u: goto label_7F1AE5E0;
    case 0x7F1AE5E4u: goto label_7F1AE5E4;
    case 0x7F1AE5E8u: goto label_7F1AE5E8;
    case 0x7F1AE5ECu: goto label_7F1AE5EC;
    case 0x7F1AE5F0u: goto label_7F1AE5F0;
    case 0x7F1AE5F4u: goto label_7F1AE5F4;
    case 0x7F1AE5F8u: goto label_7F1AE5F8;
    case 0x7F1AE5FCu: goto label_7F1AE5FC;
    case 0x7F1AE600u: goto label_7F1AE600;
    case 0x7F1AE604u: goto label_7F1AE604;
    case 0x7F1AE608u: goto label_7F1AE608;
    case 0x7F1AE60Cu: goto label_7F1AE60C;
    case 0x7F1AE610u: goto label_7F1AE610;
    case 0x7F1AE614u: goto label_7F1AE614;
    case 0x7F1AE618u: goto label_7F1AE618;
    case 0x7F1AE61Cu: goto label_7F1AE61C;
    case 0x7F1AE620u: goto label_7F1AE620;
    case 0x7F1AE624u: goto label_7F1AE624;
    case 0x7F1AE628u: goto label_7F1AE628;
    case 0x7F1AE62Cu: goto label_7F1AE62C;
    case 0x7F1AE630u: goto label_7F1AE630;
    case 0x7F1AE634u: goto label_7F1AE634;
    case 0x7F1AE638u: goto label_7F1AE638;
    case 0x7F1AE63Cu: goto label_7F1AE63C;
    case 0x7F1AE640u: goto label_7F1AE640;
    case 0x7F1AE644u: goto label_7F1AE644;
    case 0x7F1AE648u: goto label_7F1AE648;
    case 0x7F1AE64Cu: goto label_7F1AE64C;
    case 0x7F1AE650u: goto label_7F1AE650;
    case 0x7F1AE654u: goto label_7F1AE654;
    case 0x7F1AE658u: goto label_7F1AE658;
    case 0x7F1AE65Cu: goto label_7F1AE65C;
    case 0x7F1AE660u: goto label_7F1AE660;
    case 0x7F1AE664u: goto label_7F1AE664;
    case 0x7F1AE668u: goto label_7F1AE668;
    case 0x7F1AE66Cu: goto label_7F1AE66C;
    case 0x7F1AE670u: goto label_7F1AE670;
    case 0x7F1AE674u: goto label_7F1AE674;
    case 0x7F1AE678u: goto label_7F1AE678;
    case 0x7F1AE67Cu: goto label_7F1AE67C;
    case 0x7F1AE680u: goto label_7F1AE680;
    case 0x7F1AE684u: goto label_7F1AE684;
    case 0x7F1AE688u: goto label_7F1AE688;
    case 0x7F1AE68Cu: goto label_7F1AE68C;
    case 0x7F1AE690u: goto label_7F1AE690;
    case 0x7F1AE694u: goto label_7F1AE694;
    case 0x7F1AE698u: goto label_7F1AE698;
    case 0x7F1AE69Cu: goto label_7F1AE69C;
    case 0x7F1AE6A0u: goto label_7F1AE6A0;
    case 0x7F1AE6A4u: goto label_7F1AE6A4;
    case 0x7F1AE6A8u: goto label_7F1AE6A8;
    case 0x7F1AE6ACu: goto label_7F1AE6AC;
    case 0x7F1AE6B0u: goto label_7F1AE6B0;
    case 0x7F1AE6B4u: goto label_7F1AE6B4;
    case 0x7F1AE6B8u: goto label_7F1AE6B8;
    case 0x7F1AE6BCu: goto label_7F1AE6BC;
    case 0x7F1AE6C0u: goto label_7F1AE6C0;
    case 0x7F1AE6C4u: goto label_7F1AE6C4;
    case 0x7F1AE6C8u: goto label_7F1AE6C8;
    case 0x7F1AE6CCu: goto label_7F1AE6CC;
    case 0x7F1AE6D0u: goto label_7F1AE6D0;
    case 0x7F1AE6D4u: goto label_7F1AE6D4;
    case 0x7F1AE6D8u: goto label_7F1AE6D8;
    case 0x7F1AE6DCu: goto label_7F1AE6DC;
    case 0x7F1AE6E0u: goto label_7F1AE6E0;
    case 0x7F1AE6E4u: goto label_7F1AE6E4;
    case 0x7F1AE6E8u: goto label_7F1AE6E8;
    case 0x7F1AE6ECu: goto label_7F1AE6EC;
    case 0x7F1AE6F0u: goto label_7F1AE6F0;
    case 0x7F1AE6F4u: goto label_7F1AE6F4;
    case 0x7F1AE6F8u: goto label_7F1AE6F8;
    case 0x7F1AE6FCu: goto label_7F1AE6FC;
    case 0x7F1AE700u: goto label_7F1AE700;
    case 0x7F1AE704u: goto label_7F1AE704;
    case 0x7F1AE708u: goto label_7F1AE708;
    case 0x7F1AE70Cu: goto label_7F1AE70C;
    case 0x7F1AE710u: goto label_7F1AE710;
    case 0x7F1AE714u: goto label_7F1AE714;
    case 0x7F1AE718u: goto label_7F1AE718;
    case 0x7F1AE71Cu: goto label_7F1AE71C;
    case 0x7F1AE720u: goto label_7F1AE720;
    case 0x7F1AE724u: goto label_7F1AE724;
    case 0x7F1AE728u: goto label_7F1AE728;
    case 0x7F1AE72Cu: goto label_7F1AE72C;
    case 0x7F1AE730u: goto label_7F1AE730;
    case 0x7F1AE734u: goto label_7F1AE734;
    case 0x7F1AE738u: goto label_7F1AE738;
    case 0x7F1AE73Cu: goto label_7F1AE73C;
    case 0x7F1AE740u: goto label_7F1AE740;
    case 0x7F1AE744u: goto label_7F1AE744;
    case 0x7F1AE748u: goto label_7F1AE748;
    case 0x7F1AE74Cu: goto label_7F1AE74C;
    case 0x7F1AE750u: goto label_7F1AE750;
    case 0x7F1AE754u: goto label_7F1AE754;
    case 0x7F1AE758u: goto label_7F1AE758;
    case 0x7F1AE75Cu: goto label_7F1AE75C;
    case 0x7F1AE760u: goto label_7F1AE760;
    case 0x7F1AE764u: goto label_7F1AE764;
    case 0x7F1AE768u: goto label_7F1AE768;
    case 0x7F1AE76Cu: goto label_7F1AE76C;
    case 0x7F1AE770u: goto label_7F1AE770;
    case 0x7F1AE774u: goto label_7F1AE774;
    case 0x7F1AE778u: goto label_7F1AE778;
    case 0x7F1AE77Cu: goto label_7F1AE77C;
    case 0x7F1AE780u: goto label_7F1AE780;
    case 0x7F1AE784u: goto label_7F1AE784;
    case 0x7F1AE788u: goto label_7F1AE788;
    case 0x7F1AE78Cu: goto label_7F1AE78C;
    case 0x7F1AE790u: goto label_7F1AE790;
    case 0x7F1AE794u: goto label_7F1AE794;
    case 0x7F1AE798u: goto label_7F1AE798;
    case 0x7F1AE79Cu: goto label_7F1AE79C;
    case 0x7F1AE7A0u: goto label_7F1AE7A0;
    case 0x7F1AE7A4u: goto label_7F1AE7A4;
    case 0x7F1AE7A8u: goto label_7F1AE7A8;
    case 0x7F1AE7ACu: goto label_7F1AE7AC;
    case 0x7F1AE7B0u: goto label_7F1AE7B0;
    case 0x7F1AE7B4u: goto label_7F1AE7B4;
    case 0x7F1AE7B8u: goto label_7F1AE7B8;
    case 0x7F1AE7BCu: goto label_7F1AE7BC;
    case 0x7F1AE7C0u: goto label_7F1AE7C0;
    case 0x7F1AE7C4u: goto label_7F1AE7C4;
    case 0x7F1AE7C8u: goto label_7F1AE7C8;
    case 0x7F1AE7CCu: goto label_7F1AE7CC;
    case 0x7F1AE7D0u: goto label_7F1AE7D0;
    case 0x7F1AE7D4u: goto label_7F1AE7D4;
    case 0x7F1AE7D8u: goto label_7F1AE7D8;
    case 0x7F1AE7DCu: goto label_7F1AE7DC;
    case 0x7F1AE7E0u: goto label_7F1AE7E0;
    case 0x7F1AE7E4u: goto label_7F1AE7E4;
    case 0x7F1AE7E8u: goto label_7F1AE7E8;
    case 0x7F1AE7ECu: goto label_7F1AE7EC;
    case 0x7F1AE7F0u: goto label_7F1AE7F0;
    case 0x7F1AE7F4u: goto label_7F1AE7F4;
    case 0x7F1AE7F8u: goto label_7F1AE7F8;
    case 0x7F1AE7FCu: goto label_7F1AE7FC;
    case 0x7F1AE800u: goto label_7F1AE800;
    case 0x7F1AE804u: goto label_7F1AE804;
    case 0x7F1AE808u: goto label_7F1AE808;
    case 0x7F1AE80Cu: goto label_7F1AE80C;
    case 0x7F1AE810u: goto label_7F1AE810;
    case 0x7F1AE814u: goto label_7F1AE814;
    case 0x7F1AE818u: goto label_7F1AE818;
    case 0x7F1AE81Cu: goto label_7F1AE81C;
    case 0x7F1AE820u: goto label_7F1AE820;
    case 0x7F1AE824u: goto label_7F1AE824;
    case 0x7F1AE828u: goto label_7F1AE828;
    case 0x7F1AE82Cu: goto label_7F1AE82C;
    case 0x7F1AE830u: goto label_7F1AE830;
    case 0x7F1AE834u: goto label_7F1AE834;
    case 0x7F1AE838u: goto label_7F1AE838;
    case 0x7F1AE83Cu: goto label_7F1AE83C;
    case 0x7F1AE840u: goto label_7F1AE840;
    case 0x7F1AE844u: goto label_7F1AE844;
    case 0x7F1AE848u: goto label_7F1AE848;
    case 0x7F1AE84Cu: goto label_7F1AE84C;
    case 0x7F1AE850u: goto label_7F1AE850;
    case 0x7F1AE854u: goto label_7F1AE854;
    case 0x7F1AE858u: goto label_7F1AE858;
    case 0x7F1AE85Cu: goto label_7F1AE85C;
    case 0x7F1AE860u: goto label_7F1AE860;
    case 0x7F1AE864u: goto label_7F1AE864;
    case 0x7F1AE868u: goto label_7F1AE868;
    case 0x7F1AE86Cu: goto label_7F1AE86C;
    case 0x7F1AE870u: goto label_7F1AE870;
    case 0x7F1AE874u: goto label_7F1AE874;
    case 0x7F1AE878u: goto label_7F1AE878;
    case 0x7F1AE87Cu: goto label_7F1AE87C;
    case 0x7F1AE880u: goto label_7F1AE880;
    case 0x7F1AE884u: goto label_7F1AE884;
    case 0x7F1AE888u: goto label_7F1AE888;
    case 0x7F1AE88Cu: goto label_7F1AE88C;
    case 0x7F1AE890u: goto label_7F1AE890;
    case 0x7F1AE894u: goto label_7F1AE894;
    case 0x7F1AE898u: goto label_7F1AE898;
    case 0x7F1AE89Cu: goto label_7F1AE89C;
    case 0x7F1AE8A0u: goto label_7F1AE8A0;
    case 0x7F1AE8A4u: goto label_7F1AE8A4;
    case 0x7F1AE8A8u: goto label_7F1AE8A8;
    case 0x7F1AE8ACu: goto label_7F1AE8AC;
    case 0x7F1AE8B0u: goto label_7F1AE8B0;
    case 0x7F1AE8B4u: goto label_7F1AE8B4;
    case 0x7F1AE8B8u: goto label_7F1AE8B8;
    case 0x7F1AE8BCu: goto label_7F1AE8BC;
    case 0x7F1AE8C0u: goto label_7F1AE8C0;
    case 0x7F1AE8C4u: goto label_7F1AE8C4;
    case 0x7F1AE8C8u: goto label_7F1AE8C8;
    case 0x7F1AE8CCu: goto label_7F1AE8CC;
    case 0x7F1AE8D0u: goto label_7F1AE8D0;
    case 0x7F1AE8D4u: goto label_7F1AE8D4;
    case 0x7F1AE8D8u: goto label_7F1AE8D8;
    case 0x7F1AE8DCu: goto label_7F1AE8DC;
    case 0x7F1AE8E0u: goto label_7F1AE8E0;
    case 0x7F1AE8E4u: goto label_7F1AE8E4;
    case 0x7F1AE8E8u: goto label_7F1AE8E8;
    case 0x7F1AE8ECu: goto label_7F1AE8EC;
    case 0x7F1AE8F0u: goto label_7F1AE8F0;
    case 0x7F1AE8F4u: goto label_7F1AE8F4;
    case 0x7F1AE8F8u: goto label_7F1AE8F8;
    case 0x7F1AE8FCu: goto label_7F1AE8FC;
    case 0x7F1AE900u: goto label_7F1AE900;
    case 0x7F1AE904u: goto label_7F1AE904;
    case 0x7F1AE908u: goto label_7F1AE908;
    case 0x7F1AE90Cu: goto label_7F1AE90C;
    case 0x7F1AE910u: goto label_7F1AE910;
    case 0x7F1AE914u: goto label_7F1AE914;
    case 0x7F1AE918u: goto label_7F1AE918;
    case 0x7F1AE91Cu: goto label_7F1AE91C;
    case 0x7F1AE920u: goto label_7F1AE920;
    case 0x7F1AE924u: goto label_7F1AE924;
    case 0x7F1AE928u: goto label_7F1AE928;
    case 0x7F1AE92Cu: goto label_7F1AE92C;
    case 0x7F1AE930u: goto label_7F1AE930;
    case 0x7F1AE934u: goto label_7F1AE934;
    case 0x7F1AE938u: goto label_7F1AE938;
    case 0x7F1AE93Cu: goto label_7F1AE93C;
    case 0x7F1AE940u: goto label_7F1AE940;
    case 0x7F1AE944u: goto label_7F1AE944;
    case 0x7F1AE948u: goto label_7F1AE948;
    case 0x7F1AE94Cu: goto label_7F1AE94C;
    case 0x7F1AE950u: goto label_7F1AE950;
    case 0x7F1AE954u: goto label_7F1AE954;
    case 0x7F1AE958u: goto label_7F1AE958;
    case 0x7F1AE95Cu: goto label_7F1AE95C;
    case 0x7F1AE960u: goto label_7F1AE960;
    case 0x7F1AE964u: goto label_7F1AE964;
    case 0x7F1AE968u: goto label_7F1AE968;
    case 0x7F1AE96Cu: goto label_7F1AE96C;
    case 0x7F1AE970u: goto label_7F1AE970;
    case 0x7F1AE974u: goto label_7F1AE974;
    case 0x7F1AE978u: goto label_7F1AE978;
    case 0x7F1AE97Cu: goto label_7F1AE97C;
    case 0x7F1AE980u: goto label_7F1AE980;
    case 0x7F1AE984u: goto label_7F1AE984;
    case 0x7F1AE988u: goto label_7F1AE988;
    case 0x7F1AE98Cu: goto label_7F1AE98C;
    case 0x7F1AE990u: goto label_7F1AE990;
    case 0x7F1AE994u: goto label_7F1AE994;
    case 0x7F1AE998u: goto label_7F1AE998;
    case 0x7F1AE99Cu: goto label_7F1AE99C;
    case 0x7F1AE9A0u: goto label_7F1AE9A0;
    case 0x7F1AE9A4u: goto label_7F1AE9A4;
    case 0x7F1AE9A8u: goto label_7F1AE9A8;
    case 0x7F1AE9ACu: goto label_7F1AE9AC;
    case 0x7F1AE9B0u: goto label_7F1AE9B0;
    case 0x7F1AE9B4u: goto label_7F1AE9B4;
    case 0x7F1AE9B8u: goto label_7F1AE9B8;
    case 0x7F1AE9BCu: goto label_7F1AE9BC;
    case 0x7F1AE9C0u: goto label_7F1AE9C0;
    case 0x7F1AE9C4u: goto label_7F1AE9C4;
    case 0x7F1AE9C8u: goto label_7F1AE9C8;
    case 0x7F1AE9CCu: goto label_7F1AE9CC;
    case 0x7F1AE9D0u: goto label_7F1AE9D0;
    case 0x7F1AE9D4u: goto label_7F1AE9D4;
    case 0x7F1AE9D8u: goto label_7F1AE9D8;
    case 0x7F1AE9DCu: goto label_7F1AE9DC;
    case 0x7F1AE9E0u: goto label_7F1AE9E0;
    case 0x7F1AE9E4u: goto label_7F1AE9E4;
    case 0x7F1AE9E8u: goto label_7F1AE9E8;
    case 0x7F1AE9ECu: goto label_7F1AE9EC;
    case 0x7F1AE9F0u: goto label_7F1AE9F0;
    case 0x7F1AE9F4u: goto label_7F1AE9F4;
    case 0x7F1AE9F8u: goto label_7F1AE9F8;
    case 0x7F1AE9FCu: goto label_7F1AE9FC;
    case 0x7F1AEA00u: goto label_7F1AEA00;
    case 0x7F1AEA04u: goto label_7F1AEA04;
    case 0x7F1AEA08u: goto label_7F1AEA08;
    case 0x7F1AEA0Cu: goto label_7F1AEA0C;
    case 0x7F1AEA10u: goto label_7F1AEA10;
    case 0x7F1AEA14u: goto label_7F1AEA14;
    case 0x7F1AEA18u: goto label_7F1AEA18;
    case 0x7F1AEA1Cu: goto label_7F1AEA1C;
    case 0x7F1AEA20u: goto label_7F1AEA20;
    case 0x7F1AEA24u: goto label_7F1AEA24;
    case 0x7F1AEA28u: goto label_7F1AEA28;
    case 0x7F1AEA2Cu: goto label_7F1AEA2C;
    case 0x7F1AEA30u: goto label_7F1AEA30;
    case 0x7F1AEA34u: goto label_7F1AEA34;
    case 0x7F1AEA38u: goto label_7F1AEA38;
    case 0x7F1AEA3Cu: goto label_7F1AEA3C;
    case 0x7F1AEA40u: goto label_7F1AEA40;
    case 0x7F1AEA44u: goto label_7F1AEA44;
    case 0x7F1AEA48u: goto label_7F1AEA48;
    case 0x7F1AEA4Cu: goto label_7F1AEA4C;
    case 0x7F1AEA50u: goto label_7F1AEA50;
    case 0x7F1AEA54u: goto label_7F1AEA54;
    case 0x7F1AEA58u: goto label_7F1AEA58;
    case 0x7F1AEA5Cu: goto label_7F1AEA5C;
    case 0x7F1AEA60u: goto label_7F1AEA60;
    case 0x7F1AEA64u: goto label_7F1AEA64;
    case 0x7F1AEA68u: goto label_7F1AEA68;
    case 0x7F1AEA6Cu: goto label_7F1AEA6C;
    case 0x7F1AEA70u: goto label_7F1AEA70;
    case 0x7F1AEA74u: goto label_7F1AEA74;
    case 0x7F1AEA78u: goto label_7F1AEA78;
    case 0x7F1AEA7Cu: goto label_7F1AEA7C;
    case 0x7F1AEA80u: goto label_7F1AEA80;
    case 0x7F1AEA84u: goto label_7F1AEA84;
    case 0x7F1AEA88u: goto label_7F1AEA88;
    case 0x7F1AEA8Cu: goto label_7F1AEA8C;
    case 0x7F1AEA90u: goto label_7F1AEA90;
    case 0x7F1AEA94u: goto label_7F1AEA94;
    case 0x7F1AEA98u: goto label_7F1AEA98;
    case 0x7F1AEA9Cu: goto label_7F1AEA9C;
    case 0x7F1AEAA0u: goto label_7F1AEAA0;
    case 0x7F1AEAA4u: goto label_7F1AEAA4;
    case 0x7F1AEAA8u: goto label_7F1AEAA8;
    case 0x7F1AEAACu: goto label_7F1AEAAC;
    case 0x7F1AEAB0u: goto label_7F1AEAB0;
    case 0x7F1AEAB4u: goto label_7F1AEAB4;
    case 0x7F1AEAB8u: goto label_7F1AEAB8;
    case 0x7F1AEABCu: goto label_7F1AEABC;
    case 0x7F1AEAC0u: goto label_7F1AEAC0;
    case 0x7F1AEAC4u: goto label_7F1AEAC4;
    case 0x7F1AEAC8u: goto label_7F1AEAC8;
    case 0x7F1AEACCu: goto label_7F1AEACC;
    case 0x7F1AEAD0u: goto label_7F1AEAD0;
    case 0x7F1AEAD4u: goto label_7F1AEAD4;
    case 0x7F1AEAD8u: goto label_7F1AEAD8;
    case 0x7F1AEADCu: goto label_7F1AEADC;
    case 0x7F1AEAE0u: goto label_7F1AEAE0;
    case 0x7F1AEAE4u: goto label_7F1AEAE4;
    case 0x7F1AEAE8u: goto label_7F1AEAE8;
    case 0x7F1AEAECu: goto label_7F1AEAEC;
    case 0x7F1AEAF0u: goto label_7F1AEAF0;
    case 0x7F1AEAF4u: goto label_7F1AEAF4;
    case 0x7F1AEAF8u: goto label_7F1AEAF8;
    case 0x7F1AEAFCu: goto label_7F1AEAFC;
    case 0x7F1AEB00u: goto label_7F1AEB00;
    case 0x7F1AEB04u: goto label_7F1AEB04;
    case 0x7F1AEB08u: goto label_7F1AEB08;
    case 0x7F1AEB0Cu: goto label_7F1AEB0C;
    case 0x7F1AEB10u: goto label_7F1AEB10;
    case 0x7F1AEB14u: goto label_7F1AEB14;
    case 0x7F1AEB18u: goto label_7F1AEB18;
    case 0x7F1AEB1Cu: goto label_7F1AEB1C;
    case 0x7F1AEB20u: goto label_7F1AEB20;
    case 0x7F1AEB24u: goto label_7F1AEB24;
    case 0x7F1AEB28u: goto label_7F1AEB28;
    case 0x7F1AEB2Cu: goto label_7F1AEB2C;
    case 0x7F1AEB30u: goto label_7F1AEB30;
    case 0x7F1AEB34u: goto label_7F1AEB34;
    case 0x7F1AEB38u: goto label_7F1AEB38;
    case 0x7F1AEB3Cu: goto label_7F1AEB3C;
    case 0x7F1AEB40u: goto label_7F1AEB40;
    case 0x7F1AEB44u: goto label_7F1AEB44;
    case 0x7F1AEB48u: goto label_7F1AEB48;
    case 0x7F1AEB4Cu: goto label_7F1AEB4C;
    case 0x7F1AEB50u: goto label_7F1AEB50;
    case 0x7F1AEB54u: goto label_7F1AEB54;
    case 0x7F1AEB58u: goto label_7F1AEB58;
    case 0x7F1AEB5Cu: goto label_7F1AEB5C;
    case 0x7F1AEB60u: goto label_7F1AEB60;
    case 0x7F1AEB64u: goto label_7F1AEB64;
    case 0x7F1AEB68u: goto label_7F1AEB68;
    case 0x7F1AEB6Cu: goto label_7F1AEB6C;
    case 0x7F1AEB70u: goto label_7F1AEB70;
    case 0x7F1AEB74u: goto label_7F1AEB74;
    case 0x7F1AEB78u: goto label_7F1AEB78;
    case 0x7F1AEB7Cu: goto label_7F1AEB7C;
    case 0x7F1AEB80u: goto label_7F1AEB80;
    case 0x7F1AEB84u: goto label_7F1AEB84;
    case 0x7F1AEB88u: goto label_7F1AEB88;
    case 0x7F1AEB8Cu: goto label_7F1AEB8C;
    case 0x7F1AEB90u: goto label_7F1AEB90;
    case 0x7F1AEB94u: goto label_7F1AEB94;
    case 0x7F1AEB98u: goto label_7F1AEB98;
    case 0x7F1AEB9Cu: goto label_7F1AEB9C;
    case 0x7F1AEBA0u: goto label_7F1AEBA0;
    case 0x7F1AEBA4u: goto label_7F1AEBA4;
    case 0x7F1AEBA8u: goto label_7F1AEBA8;
    case 0x7F1AEBACu: goto label_7F1AEBAC;
    case 0x7F1AEBB0u: goto label_7F1AEBB0;
    case 0x7F1AEBB4u: goto label_7F1AEBB4;
    case 0x7F1AEBB8u: goto label_7F1AEBB8;
    case 0x7F1AEBBCu: goto label_7F1AEBBC;
    case 0x7F1AEBC0u: goto label_7F1AEBC0;
    case 0x7F1AEBC4u: goto label_7F1AEBC4;
    case 0x7F1AEBC8u: goto label_7F1AEBC8;
    case 0x7F1AEBCCu: goto label_7F1AEBCC;
    case 0x7F1AEBD0u: goto label_7F1AEBD0;
    case 0x7F1AEBD4u: goto label_7F1AEBD4;
    case 0x7F1AEBD8u: goto label_7F1AEBD8;
    case 0x7F1AEBDCu: goto label_7F1AEBDC;
    case 0x7F1AEBE0u: goto label_7F1AEBE0;
    case 0x7F1AEBE4u: goto label_7F1AEBE4;
    case 0x7F1AEBE8u: goto label_7F1AEBE8;
    case 0x7F1AEBECu: goto label_7F1AEBEC;
    case 0x7F1AEBF0u: goto label_7F1AEBF0;
    case 0x7F1AEBF4u: goto label_7F1AEBF4;
    case 0x7F1AEBF8u: goto label_7F1AEBF8;
    case 0x7F1AEBFCu: goto label_7F1AEBFC;
    case 0x7F1AEC00u: goto label_7F1AEC00;
    case 0x7F1AEC04u: goto label_7F1AEC04;
    case 0x7F1AEC08u: goto label_7F1AEC08;
    case 0x7F1AEC0Cu: goto label_7F1AEC0C;
    case 0x7F1AEC10u: goto label_7F1AEC10;
    case 0x7F1AEC14u: goto label_7F1AEC14;
    case 0x7F1AEC18u: goto label_7F1AEC18;
    case 0x7F1AEC1Cu: goto label_7F1AEC1C;
    case 0x7F1AEC20u: goto label_7F1AEC20;
    case 0x7F1AEC24u: goto label_7F1AEC24;
    case 0x7F1AEC28u: goto label_7F1AEC28;
    case 0x7F1AEC2Cu: goto label_7F1AEC2C;
    case 0x7F1AEC30u: goto label_7F1AEC30;
    case 0x7F1AEC34u: goto label_7F1AEC34;
    case 0x7F1AEC38u: goto label_7F1AEC38;
    case 0x7F1AEC3Cu: goto label_7F1AEC3C;
    case 0x7F1AEC40u: goto label_7F1AEC40;
    case 0x7F1AEC44u: goto label_7F1AEC44;
    case 0x7F1AEC48u: goto label_7F1AEC48;
    case 0x7F1AEC4Cu: goto label_7F1AEC4C;
    case 0x7F1AEC50u: goto label_7F1AEC50;
    case 0x7F1AEC54u: goto label_7F1AEC54;
    case 0x7F1AEC58u: goto label_7F1AEC58;
    case 0x7F1AEC5Cu: goto label_7F1AEC5C;
    case 0x7F1AEC60u: goto label_7F1AEC60;
    case 0x7F1AEC64u: goto label_7F1AEC64;
    case 0x7F1AEC68u: goto label_7F1AEC68;
    case 0x7F1AEC6Cu: goto label_7F1AEC6C;
    case 0x7F1AEC70u: goto label_7F1AEC70;
    case 0x7F1AEC74u: goto label_7F1AEC74;
    case 0x7F1AEC78u: goto label_7F1AEC78;
    case 0x7F1AEC7Cu: goto label_7F1AEC7C;
    case 0x7F1AEC80u: goto label_7F1AEC80;
    case 0x7F1AEC84u: goto label_7F1AEC84;
    case 0x7F1AEC88u: goto label_7F1AEC88;
    case 0x7F1AEC8Cu: goto label_7F1AEC8C;
    case 0x7F1AEC90u: goto label_7F1AEC90;
    case 0x7F1AEC94u: goto label_7F1AEC94;
    case 0x7F1AEC98u: goto label_7F1AEC98;
    case 0x7F1AEC9Cu: goto label_7F1AEC9C;
    case 0x7F1AECA0u: goto label_7F1AECA0;
    case 0x7F1AECA4u: goto label_7F1AECA4;
    case 0x7F1AECA8u: goto label_7F1AECA8;
    case 0x7F1AECACu: goto label_7F1AECAC;
    case 0x7F1AECB0u: goto label_7F1AECB0;
    case 0x7F1AECB4u: goto label_7F1AECB4;
    case 0x7F1AECB8u: goto label_7F1AECB8;
    case 0x7F1AECBCu: goto label_7F1AECBC;
    case 0x7F1AECC0u: goto label_7F1AECC0;
    case 0x7F1AECC4u: goto label_7F1AECC4;
    case 0x7F1AECC8u: goto label_7F1AECC8;
    case 0x7F1AECCCu: goto label_7F1AECCC;
    case 0x7F1AECD0u: goto label_7F1AECD0;
    case 0x7F1AECD4u: goto label_7F1AECD4;
    case 0x7F1AECD8u: goto label_7F1AECD8;
    case 0x7F1AECDCu: goto label_7F1AECDC;
    case 0x7F1AECE0u: goto label_7F1AECE0;
    case 0x7F1AECE4u: goto label_7F1AECE4;
    case 0x7F1AECE8u: goto label_7F1AECE8;
    case 0x7F1AECECu: goto label_7F1AECEC;
    case 0x7F1AECF0u: goto label_7F1AECF0;
    case 0x7F1AECF4u: goto label_7F1AECF4;
    case 0x7F1AECF8u: goto label_7F1AECF8;
    case 0x7F1AECFCu: goto label_7F1AECFC;
    case 0x7F1AED00u: goto label_7F1AED00;
    case 0x7F1AED04u: goto label_7F1AED04;
    case 0x7F1AED08u: goto label_7F1AED08;
    case 0x7F1AED0Cu: goto label_7F1AED0C;
    case 0x7F1AED10u: goto label_7F1AED10;
    case 0x7F1AED14u: goto label_7F1AED14;
    case 0x7F1AED18u: goto label_7F1AED18;
    case 0x7F1AED1Cu: goto label_7F1AED1C;
    case 0x7F1AED20u: goto label_7F1AED20;
    case 0x7F1AED24u: goto label_7F1AED24;
    case 0x7F1AED28u: goto label_7F1AED28;
    case 0x7F1AED2Cu: goto label_7F1AED2C;
    case 0x7F1AED30u: goto label_7F1AED30;
    case 0x7F1AED34u: goto label_7F1AED34;
    case 0x7F1AED38u: goto label_7F1AED38;
    case 0x7F1AED3Cu: goto label_7F1AED3C;
    case 0x7F1AED40u: goto label_7F1AED40;
    case 0x7F1AED44u: goto label_7F1AED44;
    case 0x7F1AED48u: goto label_7F1AED48;
    case 0x7F1AED4Cu: goto label_7F1AED4C;
    case 0x7F1AED50u: goto label_7F1AED50;
    case 0x7F1AED54u: goto label_7F1AED54;
    case 0x7F1AED58u: goto label_7F1AED58;
    case 0x7F1AED5Cu: goto label_7F1AED5C;
    case 0x7F1AED60u: goto label_7F1AED60;
    case 0x7F1AED64u: goto label_7F1AED64;
    case 0x7F1AED68u: goto label_7F1AED68;
    case 0x7F1AED6Cu: goto label_7F1AED6C;
    case 0x7F1AED70u: goto label_7F1AED70;
    case 0x7F1AED74u: goto label_7F1AED74;
    case 0x7F1AED78u: goto label_7F1AED78;
    case 0x7F1AED7Cu: goto label_7F1AED7C;
    case 0x7F1AED80u: goto label_7F1AED80;
    case 0x7F1AED84u: goto label_7F1AED84;
    case 0x7F1AED88u: goto label_7F1AED88;
    case 0x7F1AED8Cu: goto label_7F1AED8C;
    case 0x7F1AED90u: goto label_7F1AED90;
    case 0x7F1AED94u: goto label_7F1AED94;
    case 0x7F1AED98u: goto label_7F1AED98;
    case 0x7F1AED9Cu: goto label_7F1AED9C;
    case 0x7F1AEDA0u: goto label_7F1AEDA0;
    case 0x7F1AEDA4u: goto label_7F1AEDA4;
    case 0x7F1AEDA8u: goto label_7F1AEDA8;
    case 0x7F1AEDACu: goto label_7F1AEDAC;
    case 0x7F1AEDB0u: goto label_7F1AEDB0;
    case 0x7F1AEDB4u: goto label_7F1AEDB4;
    case 0x7F1AEDB8u: goto label_7F1AEDB8;
    case 0x7F1AEDBCu: goto label_7F1AEDBC;
    case 0x7F1AEDC0u: goto label_7F1AEDC0;
    case 0x7F1AEDC4u: goto label_7F1AEDC4;
    case 0x7F1AEDC8u: goto label_7F1AEDC8;
    case 0x7F1AEDCCu: goto label_7F1AEDCC;
    case 0x7F1AEDD0u: goto label_7F1AEDD0;
    case 0x7F1AEDD4u: goto label_7F1AEDD4;
    case 0x7F1AEDD8u: goto label_7F1AEDD8;
    case 0x7F1AEDDCu: goto label_7F1AEDDC;
    case 0x7F1AEDE0u: goto label_7F1AEDE0;
    case 0x7F1AEDE4u: goto label_7F1AEDE4;
    case 0x7F1AEDE8u: goto label_7F1AEDE8;
    case 0x7F1AEDECu: goto label_7F1AEDEC;
    case 0x7F1AEDF0u: goto label_7F1AEDF0;
    case 0x7F1AEDF4u: goto label_7F1AEDF4;
    case 0x7F1AEDF8u: goto label_7F1AEDF8;
    case 0x7F1AEDFCu: goto label_7F1AEDFC;
    case 0x7F1AEE00u: goto label_7F1AEE00;
    case 0x7F1AEE04u: goto label_7F1AEE04;
    case 0x7F1AEE08u: goto label_7F1AEE08;
    case 0x7F1AEE0Cu: goto label_7F1AEE0C;
    case 0x7F1AEE10u: goto label_7F1AEE10;
    case 0x7F1AEE14u: goto label_7F1AEE14;
    case 0x7F1AEE18u: goto label_7F1AEE18;
    case 0x7F1AEE1Cu: goto label_7F1AEE1C;
    case 0x7F1AEE20u: goto label_7F1AEE20;
    case 0x7F1AEE24u: goto label_7F1AEE24;
    case 0x7F1AEE28u: goto label_7F1AEE28;
    case 0x7F1AEE2Cu: goto label_7F1AEE2C;
    case 0x7F1AEE30u: goto label_7F1AEE30;
    case 0x7F1AEE34u: goto label_7F1AEE34;
    case 0x7F1AEE38u: goto label_7F1AEE38;
    case 0x7F1AEE3Cu: goto label_7F1AEE3C;
    case 0x7F1AEE40u: goto label_7F1AEE40;
    case 0x7F1AEE44u: goto label_7F1AEE44;
    case 0x7F1AEE48u: goto label_7F1AEE48;
    case 0x7F1AEE4Cu: goto label_7F1AEE4C;
    case 0x7F1AEE50u: goto label_7F1AEE50;
    case 0x7F1AEE54u: goto label_7F1AEE54;
    case 0x7F1AEE58u: goto label_7F1AEE58;
    case 0x7F1AEE5Cu: goto label_7F1AEE5C;
    case 0x7F1AEE60u: goto label_7F1AEE60;
    case 0x7F1AEE64u: goto label_7F1AEE64;
    case 0x7F1AEE68u: goto label_7F1AEE68;
    case 0x7F1AEE6Cu: goto label_7F1AEE6C;
    case 0x7F1AEE70u: goto label_7F1AEE70;
    case 0x7F1AEE74u: goto label_7F1AEE74;
    case 0x7F1AEE78u: goto label_7F1AEE78;
    case 0x7F1AEE7Cu: goto label_7F1AEE7C;
    case 0x7F1AEE80u: goto label_7F1AEE80;
    case 0x7F1AEE84u: goto label_7F1AEE84;
    case 0x7F1AEE88u: goto label_7F1AEE88;
    case 0x7F1AEE8Cu: goto label_7F1AEE8C;
    case 0x7F1AEE90u: goto label_7F1AEE90;
    case 0x7F1AEE94u: goto label_7F1AEE94;
    case 0x7F1AEE98u: goto label_7F1AEE98;
    case 0x7F1AEE9Cu: goto label_7F1AEE9C;
    case 0x7F1AEEA0u: goto label_7F1AEEA0;
    case 0x7F1AEEA4u: goto label_7F1AEEA4;
    case 0x7F1AEEA8u: goto label_7F1AEEA8;
    case 0x7F1AEEACu: goto label_7F1AEEAC;
    case 0x7F1AEEB0u: goto label_7F1AEEB0;
    case 0x7F1AEEB4u: goto label_7F1AEEB4;
    case 0x7F1AEEB8u: goto label_7F1AEEB8;
    case 0x7F1AEEBCu: goto label_7F1AEEBC;
    case 0x7F1AEEC0u: goto label_7F1AEEC0;
    case 0x7F1AEEC4u: goto label_7F1AEEC4;
    case 0x7F1AEEC8u: goto label_7F1AEEC8;
    case 0x7F1AEECCu: goto label_7F1AEECC;
    case 0x7F1AEED0u: goto label_7F1AEED0;
    case 0x7F1AEED4u: goto label_7F1AEED4;
    case 0x7F1AEED8u: goto label_7F1AEED8;
    case 0x7F1AEEDCu: goto label_7F1AEEDC;
    case 0x7F1AEEE0u: goto label_7F1AEEE0;
    case 0x7F1AEEE4u: goto label_7F1AEEE4;
    case 0x7F1AEEE8u: goto label_7F1AEEE8;
    case 0x7F1AEEECu: goto label_7F1AEEEC;
    case 0x7F1AEEF0u: goto label_7F1AEEF0;
    case 0x7F1AEEF4u: goto label_7F1AEEF4;
    case 0x7F1AEEF8u: goto label_7F1AEEF8;
    case 0x7F1AEEFCu: goto label_7F1AEEFC;
    case 0x7F1AEF00u: goto label_7F1AEF00;
    case 0x7F1AEF04u: goto label_7F1AEF04;
    case 0x7F1AEF08u: goto label_7F1AEF08;
    case 0x7F1AEF0Cu: goto label_7F1AEF0C;
    case 0x7F1AEF10u: goto label_7F1AEF10;
    case 0x7F1AEF14u: goto label_7F1AEF14;
    case 0x7F1AEF18u: goto label_7F1AEF18;
    case 0x7F1AEF1Cu: goto label_7F1AEF1C;
    case 0x7F1AEF20u: goto label_7F1AEF20;
    case 0x7F1AEF24u: goto label_7F1AEF24;
    case 0x7F1AEF28u: goto label_7F1AEF28;
    case 0x7F1AEF2Cu: goto label_7F1AEF2C;
    case 0x7F1AEF30u: goto label_7F1AEF30;
    case 0x7F1AEF34u: goto label_7F1AEF34;
    case 0x7F1AEF38u: goto label_7F1AEF38;
    case 0x7F1AEF3Cu: goto label_7F1AEF3C;
    case 0x7F1AEF40u: goto label_7F1AEF40;
    case 0x7F1AEF44u: goto label_7F1AEF44;
    case 0x7F1AEF48u: goto label_7F1AEF48;
    case 0x7F1AEF4Cu: goto label_7F1AEF4C;
    case 0x7F1AEF50u: goto label_7F1AEF50;
    case 0x7F1AEF54u: goto label_7F1AEF54;
    case 0x7F1AEF58u: goto label_7F1AEF58;
    case 0x7F1AEF5Cu: goto label_7F1AEF5C;
    case 0x7F1AEF60u: goto label_7F1AEF60;
    case 0x7F1AEF64u: goto label_7F1AEF64;
    case 0x7F1AEF68u: goto label_7F1AEF68;
    case 0x7F1AEF6Cu: goto label_7F1AEF6C;
    case 0x7F1AEF70u: goto label_7F1AEF70;
    case 0x7F1AEF74u: goto label_7F1AEF74;
    case 0x7F1AEF78u: goto label_7F1AEF78;
    case 0x7F1AEF7Cu: goto label_7F1AEF7C;
    case 0x7F1AEF80u: goto label_7F1AEF80;
    case 0x7F1AEF84u: goto label_7F1AEF84;
    case 0x7F1AEF88u: goto label_7F1AEF88;
    case 0x7F1AEF8Cu: goto label_7F1AEF8C;
    case 0x7F1AEF90u: goto label_7F1AEF90;
    case 0x7F1AEF94u: goto label_7F1AEF94;
    case 0x7F1AEF98u: goto label_7F1AEF98;
    case 0x7F1AEF9Cu: goto label_7F1AEF9C;
    case 0x7F1AEFA0u: goto label_7F1AEFA0;
    case 0x7F1AEFA4u: goto label_7F1AEFA4;
    case 0x7F1AEFA8u: goto label_7F1AEFA8;
    case 0x7F1AEFACu: goto label_7F1AEFAC;
    case 0x7F1AEFB0u: goto label_7F1AEFB0;
    case 0x7F1AEFB4u: goto label_7F1AEFB4;
    case 0x7F1AEFB8u: goto label_7F1AEFB8;
    case 0x7F1AEFBCu: goto label_7F1AEFBC;
    case 0x7F1AEFC0u: goto label_7F1AEFC0;
    case 0x7F1AEFC4u: goto label_7F1AEFC4;
    case 0x7F1AEFC8u: goto label_7F1AEFC8;
    case 0x7F1AEFCCu: goto label_7F1AEFCC;
    case 0x7F1AEFD0u: goto label_7F1AEFD0;
    case 0x7F1AEFD4u: goto label_7F1AEFD4;
    case 0x7F1AEFD8u: goto label_7F1AEFD8;
    case 0x7F1AEFDCu: goto label_7F1AEFDC;
    case 0x7F1AEFE0u: goto label_7F1AEFE0;
    case 0x7F1AEFE4u: goto label_7F1AEFE4;
    case 0x7F1AEFE8u: goto label_7F1AEFE8;
    case 0x7F1AEFECu: goto label_7F1AEFEC;
    case 0x7F1AEFF0u: goto label_7F1AEFF0;
    case 0x7F1AEFF4u: goto label_7F1AEFF4;
    case 0x7F1AEFF8u: goto label_7F1AEFF8;
    case 0x7F1AEFFCu: goto label_7F1AEFFC;
    case 0x7F1AF000u: goto label_7F1AF000;
    case 0x7F1AF004u: goto label_7F1AF004;
    case 0x7F1AF008u: goto label_7F1AF008;
    case 0x7F1AF00Cu: goto label_7F1AF00C;
    case 0x7F1AF010u: goto label_7F1AF010;
    case 0x7F1AF014u: goto label_7F1AF014;
    case 0x7F1AF018u: goto label_7F1AF018;
    case 0x7F1AF01Cu: goto label_7F1AF01C;
    case 0x7F1AF020u: goto label_7F1AF020;
    case 0x7F1AF024u: goto label_7F1AF024;
    case 0x7F1AF028u: goto label_7F1AF028;
    case 0x7F1AF02Cu: goto label_7F1AF02C;
    case 0x7F1AF030u: goto label_7F1AF030;
    case 0x7F1AF034u: goto label_7F1AF034;
    case 0x7F1AF038u: goto label_7F1AF038;
    case 0x7F1AF03Cu: goto label_7F1AF03C;
    case 0x7F1AF040u: goto label_7F1AF040;
    case 0x7F1AF044u: goto label_7F1AF044;
    case 0x7F1AF048u: goto label_7F1AF048;
    case 0x7F1AF04Cu: goto label_7F1AF04C;
    case 0x7F1AF050u: goto label_7F1AF050;
    case 0x7F1AF054u: goto label_7F1AF054;
    case 0x7F1AF058u: goto label_7F1AF058;
    case 0x7F1AF05Cu: goto label_7F1AF05C;
    case 0x7F1AF060u: goto label_7F1AF060;
    case 0x7F1AF064u: goto label_7F1AF064;
    case 0x7F1AF068u: goto label_7F1AF068;
    case 0x7F1AF06Cu: goto label_7F1AF06C;
    case 0x7F1AF070u: goto label_7F1AF070;
    case 0x7F1AF074u: goto label_7F1AF074;
    case 0x7F1AF078u: goto label_7F1AF078;
    case 0x7F1AF07Cu: goto label_7F1AF07C;
    case 0x7F1AF080u: goto label_7F1AF080;
    case 0x7F1AF084u: goto label_7F1AF084;
    case 0x7F1AF088u: goto label_7F1AF088;
    case 0x7F1AF08Cu: goto label_7F1AF08C;
    case 0x7F1AF090u: goto label_7F1AF090;
    case 0x7F1AF094u: goto label_7F1AF094;
    case 0x7F1AF098u: goto label_7F1AF098;
    case 0x7F1AF09Cu: goto label_7F1AF09C;
    case 0x7F1AF0A0u: goto label_7F1AF0A0;
    case 0x7F1AF0A4u: goto label_7F1AF0A4;
    case 0x7F1AF0A8u: goto label_7F1AF0A8;
    case 0x7F1AF0ACu: goto label_7F1AF0AC;
    case 0x7F1AF0B0u: goto label_7F1AF0B0;
    case 0x7F1AF0B4u: goto label_7F1AF0B4;
    case 0x7F1AF0B8u: goto label_7F1AF0B8;
    case 0x7F1AF0BCu: goto label_7F1AF0BC;
    case 0x7F1AF0C0u: goto label_7F1AF0C0;
    case 0x7F1AF0C4u: goto label_7F1AF0C4;
    case 0x7F1AF0C8u: goto label_7F1AF0C8;
    case 0x7F1AF0CCu: goto label_7F1AF0CC;
    case 0x7F1AF0D0u: goto label_7F1AF0D0;
    case 0x7F1AF0D4u: goto label_7F1AF0D4;
    case 0x7F1AF0D8u: goto label_7F1AF0D8;
    case 0x7F1AF0DCu: goto label_7F1AF0DC;
    case 0x7F1AF0E0u: goto label_7F1AF0E0;
    case 0x7F1AF0E4u: goto label_7F1AF0E4;
    case 0x7F1AF0E8u: goto label_7F1AF0E8;
    case 0x7F1AF0ECu: goto label_7F1AF0EC;
    case 0x7F1AF0F0u: goto label_7F1AF0F0;
    case 0x7F1AF0F4u: goto label_7F1AF0F4;
    case 0x7F1AF0F8u: goto label_7F1AF0F8;
    case 0x7F1AF0FCu: goto label_7F1AF0FC;
    case 0x7F1AF100u: goto label_7F1AF100;
    case 0x7F1AF104u: goto label_7F1AF104;
    case 0x7F1AF108u: goto label_7F1AF108;
    case 0x7F1AF10Cu: goto label_7F1AF10C;
    case 0x7F1AF110u: goto label_7F1AF110;
    case 0x7F1AF114u: goto label_7F1AF114;
    case 0x7F1AF118u: goto label_7F1AF118;
    case 0x7F1AF11Cu: goto label_7F1AF11C;
    case 0x7F1AF120u: goto label_7F1AF120;
    case 0x7F1AF124u: goto label_7F1AF124;
    case 0x7F1AF128u: goto label_7F1AF128;
    case 0x7F1AF12Cu: goto label_7F1AF12C;
    case 0x7F1AF130u: goto label_7F1AF130;
    case 0x7F1AF134u: goto label_7F1AF134;
    case 0x7F1AF138u: goto label_7F1AF138;
    case 0x7F1AF13Cu: goto label_7F1AF13C;
    case 0x7F1AF140u: goto label_7F1AF140;
    case 0x7F1AF144u: goto label_7F1AF144;
    case 0x7F1AF148u: goto label_7F1AF148;
    case 0x7F1AF14Cu: goto label_7F1AF14C;
    case 0x7F1AF150u: goto label_7F1AF150;
    case 0x7F1AF154u: goto label_7F1AF154;
    case 0x7F1AF158u: goto label_7F1AF158;
    case 0x7F1AF15Cu: goto label_7F1AF15C;
    case 0x7F1AF160u: goto label_7F1AF160;
    case 0x7F1AF164u: goto label_7F1AF164;
    case 0x7F1AF168u: goto label_7F1AF168;
    case 0x7F1AF16Cu: goto label_7F1AF16C;
    case 0x7F1AF170u: goto label_7F1AF170;
    case 0x7F1AF174u: goto label_7F1AF174;
    case 0x7F1AF178u: goto label_7F1AF178;
    case 0x7F1AF17Cu: goto label_7F1AF17C;
    case 0x7F1AF180u: goto label_7F1AF180;
    case 0x7F1AF184u: goto label_7F1AF184;
    case 0x7F1AF188u: goto label_7F1AF188;
    case 0x7F1AF18Cu: goto label_7F1AF18C;
    case 0x7F1AF190u: goto label_7F1AF190;
    case 0x7F1AF194u: goto label_7F1AF194;
    case 0x7F1AF198u: goto label_7F1AF198;
    case 0x7F1AF19Cu: goto label_7F1AF19C;
    case 0x7F1AF1A0u: goto label_7F1AF1A0;
    case 0x7F1AF1A4u: goto label_7F1AF1A4;
    case 0x7F1AF1A8u: goto label_7F1AF1A8;
    case 0x7F1AF1ACu: goto label_7F1AF1AC;
    case 0x7F1AF1B0u: goto label_7F1AF1B0;
    case 0x7F1AF1B4u: goto label_7F1AF1B4;
    case 0x7F1AF1B8u: goto label_7F1AF1B8;
    case 0x7F1AF1BCu: goto label_7F1AF1BC;
    case 0x7F1AF1C0u: goto label_7F1AF1C0;
    case 0x7F1AF1C4u: goto label_7F1AF1C4;
    case 0x7F1AF1C8u: goto label_7F1AF1C8;
    case 0x7F1AF1CCu: goto label_7F1AF1CC;
    case 0x7F1AF1D0u: goto label_7F1AF1D0;
    case 0x7F1AF1D4u: goto label_7F1AF1D4;
    case 0x7F1AF1D8u: goto label_7F1AF1D8;
    case 0x7F1AF1DCu: goto label_7F1AF1DC;
    case 0x7F1AF1E0u: goto label_7F1AF1E0;
    case 0x7F1AF1E4u: goto label_7F1AF1E4;
    case 0x7F1AF1E8u: goto label_7F1AF1E8;
    case 0x7F1AF1ECu: goto label_7F1AF1EC;
    case 0x7F1AF1F0u: goto label_7F1AF1F0;
    case 0x7F1AF1F4u: goto label_7F1AF1F4;
    case 0x7F1AF1F8u: goto label_7F1AF1F8;
    case 0x7F1AF1FCu: goto label_7F1AF1FC;
    case 0x7F1AF200u: goto label_7F1AF200;
    case 0x7F1AF204u: goto label_7F1AF204;
    case 0x7F1AF208u: goto label_7F1AF208;
    case 0x7F1AF20Cu: goto label_7F1AF20C;
    case 0x7F1AF210u: goto label_7F1AF210;
    case 0x7F1AF214u: goto label_7F1AF214;
    case 0x7F1AF218u: goto label_7F1AF218;
    case 0x7F1AF21Cu: goto label_7F1AF21C;
    case 0x7F1AF220u: goto label_7F1AF220;
    case 0x7F1AF224u: goto label_7F1AF224;
    case 0x7F1AF228u: goto label_7F1AF228;
    case 0x7F1AF22Cu: goto label_7F1AF22C;
    case 0x7F1AF230u: goto label_7F1AF230;
    case 0x7F1AF234u: goto label_7F1AF234;
    case 0x7F1AF238u: goto label_7F1AF238;
    case 0x7F1AF23Cu: goto label_7F1AF23C;
    case 0x7F1AF240u: goto label_7F1AF240;
    case 0x7F1AF244u: goto label_7F1AF244;
    case 0x7F1AF248u: goto label_7F1AF248;
    case 0x7F1AF24Cu: goto label_7F1AF24C;
    case 0x7F1AF250u: goto label_7F1AF250;
    case 0x7F1AF254u: goto label_7F1AF254;
    case 0x7F1AF258u: goto label_7F1AF258;
    case 0x7F1AF25Cu: goto label_7F1AF25C;
    case 0x7F1AF260u: goto label_7F1AF260;
    case 0x7F1AF264u: goto label_7F1AF264;
    case 0x7F1AF268u: goto label_7F1AF268;
    case 0x7F1AF26Cu: goto label_7F1AF26C;
    case 0x7F1AF270u: goto label_7F1AF270;
    case 0x7F1AF274u: goto label_7F1AF274;
    case 0x7F1AF278u: goto label_7F1AF278;
    case 0x7F1AF27Cu: goto label_7F1AF27C;
    case 0x7F1AF280u: goto label_7F1AF280;
    case 0x7F1AF284u: goto label_7F1AF284;
    case 0x7F1AF288u: goto label_7F1AF288;
    case 0x7F1AF28Cu: goto label_7F1AF28C;
    case 0x7F1AF290u: goto label_7F1AF290;
    case 0x7F1AF294u: goto label_7F1AF294;
    case 0x7F1AF298u: goto label_7F1AF298;
    case 0x7F1AF29Cu: goto label_7F1AF29C;
    case 0x7F1AF2A0u: goto label_7F1AF2A0;
    case 0x7F1AF2A4u: goto label_7F1AF2A4;
    case 0x7F1AF2A8u: goto label_7F1AF2A8;
    case 0x7F1AF2ACu: goto label_7F1AF2AC;
    case 0x7F1AF2B0u: goto label_7F1AF2B0;
    case 0x7F1AF2B4u: goto label_7F1AF2B4;
    case 0x7F1AF2B8u: goto label_7F1AF2B8;
    case 0x7F1AF2BCu: goto label_7F1AF2BC;
    case 0x7F1AF2C0u: goto label_7F1AF2C0;
    case 0x7F1AF2C4u: goto label_7F1AF2C4;
    case 0x7F1AF2C8u: goto label_7F1AF2C8;
    case 0x7F1AF2CCu: goto label_7F1AF2CC;
    case 0x7F1AF2D0u: goto label_7F1AF2D0;
    case 0x7F1AF2D4u: goto label_7F1AF2D4;
    case 0x7F1AF2D8u: goto label_7F1AF2D8;
    case 0x7F1AF2DCu: goto label_7F1AF2DC;
    case 0x7F1AF2E0u: goto label_7F1AF2E0;
    case 0x7F1AF2E4u: goto label_7F1AF2E4;
    case 0x7F1AF2E8u: goto label_7F1AF2E8;
    case 0x7F1AF2ECu: goto label_7F1AF2EC;
    case 0x7F1AF2F0u: goto label_7F1AF2F0;
    case 0x7F1AF2F4u: goto label_7F1AF2F4;
    case 0x7F1AF2F8u: goto label_7F1AF2F8;
    case 0x7F1AF2FCu: goto label_7F1AF2FC;
    case 0x7F1AF300u: goto label_7F1AF300;
    case 0x7F1AF304u: goto label_7F1AF304;
    case 0x7F1AF308u: goto label_7F1AF308;
    case 0x7F1AF30Cu: goto label_7F1AF30C;
    case 0x7F1AF310u: goto label_7F1AF310;
    case 0x7F1AF314u: goto label_7F1AF314;
    case 0x7F1AF318u: goto label_7F1AF318;
    case 0x7F1AF31Cu: goto label_7F1AF31C;
    case 0x7F1AF320u: goto label_7F1AF320;
    case 0x7F1AF324u: goto label_7F1AF324;
    case 0x7F1AF328u: goto label_7F1AF328;
    case 0x7F1AF32Cu: goto label_7F1AF32C;
    case 0x7F1AF330u: goto label_7F1AF330;
    case 0x7F1AF334u: goto label_7F1AF334;
    case 0x7F1AF338u: goto label_7F1AF338;
    case 0x7F1AF33Cu: goto label_7F1AF33C;
    case 0x7F1AF340u: goto label_7F1AF340;
    case 0x7F1AF344u: goto label_7F1AF344;
    case 0x7F1AF348u: goto label_7F1AF348;
    case 0x7F1AF34Cu: goto label_7F1AF34C;
    case 0x7F1AF350u: goto label_7F1AF350;
    case 0x7F1AF354u: goto label_7F1AF354;
    case 0x7F1AF358u: goto label_7F1AF358;
    case 0x7F1AF35Cu: goto label_7F1AF35C;
    case 0x7F1AF360u: goto label_7F1AF360;
    case 0x7F1AF364u: goto label_7F1AF364;
    case 0x7F1AF368u: goto label_7F1AF368;
    case 0x7F1AF36Cu: goto label_7F1AF36C;
    case 0x7F1AF370u: goto label_7F1AF370;
    case 0x7F1AF374u: goto label_7F1AF374;
    case 0x7F1AF378u: goto label_7F1AF378;
    case 0x7F1AF37Cu: goto label_7F1AF37C;
    case 0x7F1AF380u: goto label_7F1AF380;
    case 0x7F1AF384u: goto label_7F1AF384;
    case 0x7F1AF388u: goto label_7F1AF388;
    case 0x7F1AF38Cu: goto label_7F1AF38C;
    case 0x7F1AF390u: goto label_7F1AF390;
    case 0x7F1AF394u: goto label_7F1AF394;
    case 0x7F1AF398u: goto label_7F1AF398;
    case 0x7F1AF39Cu: goto label_7F1AF39C;
    case 0x7F1AF3A0u: goto label_7F1AF3A0;
    case 0x7F1AF3A4u: goto label_7F1AF3A4;
    case 0x7F1AF3A8u: goto label_7F1AF3A8;
    case 0x7F1AF3ACu: goto label_7F1AF3AC;
    case 0x7F1AF3B0u: goto label_7F1AF3B0;
    case 0x7F1AF3B4u: goto label_7F1AF3B4;
    case 0x7F1AF3B8u: goto label_7F1AF3B8;
    case 0x7F1AF3BCu: goto label_7F1AF3BC;
    case 0x7F1AF3C0u: goto label_7F1AF3C0;
    case 0x7F1AF3C4u: goto label_7F1AF3C4;
    case 0x7F1AF3C8u: goto label_7F1AF3C8;
    case 0x7F1AF3CCu: goto label_7F1AF3CC;
    case 0x7F1AF3D0u: goto label_7F1AF3D0;
    case 0x7F1AF3D4u: goto label_7F1AF3D4;
    case 0x7F1AF3D8u: goto label_7F1AF3D8;
    case 0x7F1AF3DCu: goto label_7F1AF3DC;
    case 0x7F1AF3E0u: goto label_7F1AF3E0;
    case 0x7F1AF3E4u: goto label_7F1AF3E4;
    case 0x7F1AF3E8u: goto label_7F1AF3E8;
    case 0x7F1AF3ECu: goto label_7F1AF3EC;
    case 0x7F1AF3F0u: goto label_7F1AF3F0;
    case 0x7F1AF3F4u: goto label_7F1AF3F4;
    case 0x7F1AF3F8u: goto label_7F1AF3F8;
    case 0x7F1AF3FCu: goto label_7F1AF3FC;
    case 0x7F1AF400u: goto label_7F1AF400;
    case 0x7F1AF404u: goto label_7F1AF404;
    case 0x7F1AF408u: goto label_7F1AF408;
    case 0x7F1AF40Cu: goto label_7F1AF40C;
    case 0x7F1AF410u: goto label_7F1AF410;
    case 0x7F1AF414u: goto label_7F1AF414;
    case 0x7F1AF418u: goto label_7F1AF418;
    case 0x7F1AF41Cu: goto label_7F1AF41C;
    case 0x7F1AF420u: goto label_7F1AF420;
    case 0x7F1AF424u: goto label_7F1AF424;
    case 0x7F1AF428u: goto label_7F1AF428;
    case 0x7F1AF42Cu: goto label_7F1AF42C;
    case 0x7F1AF430u: goto label_7F1AF430;
    case 0x7F1AF434u: goto label_7F1AF434;
    case 0x7F1AF438u: goto label_7F1AF438;
    case 0x7F1AF43Cu: goto label_7F1AF43C;
    case 0x7F1AF440u: goto label_7F1AF440;
    case 0x7F1AF444u: goto label_7F1AF444;
    case 0x7F1AF448u: goto label_7F1AF448;
    case 0x7F1AF44Cu: goto label_7F1AF44C;
    case 0x7F1AF450u: goto label_7F1AF450;
    case 0x7F1AF454u: goto label_7F1AF454;
    case 0x7F1AF458u: goto label_7F1AF458;
    case 0x7F1AF45Cu: goto label_7F1AF45C;
    case 0x7F1AF460u: goto label_7F1AF460;
    case 0x7F1AF464u: goto label_7F1AF464;
    case 0x7F1AF468u: goto label_7F1AF468;
    case 0x7F1AF46Cu: goto label_7F1AF46C;
    case 0x7F1AF470u: goto label_7F1AF470;
    case 0x7F1AF474u: goto label_7F1AF474;
    case 0x7F1AF478u: goto label_7F1AF478;
    case 0x7F1AF47Cu: goto label_7F1AF47C;
    case 0x7F1AF480u: goto label_7F1AF480;
    case 0x7F1AF484u: goto label_7F1AF484;
    case 0x7F1AF488u: goto label_7F1AF488;
    case 0x7F1AF48Cu: goto label_7F1AF48C;
    case 0x7F1AF490u: goto label_7F1AF490;
    case 0x7F1AF494u: goto label_7F1AF494;
    case 0x7F1AF498u: goto label_7F1AF498;
    case 0x7F1AF49Cu: goto label_7F1AF49C;
    case 0x7F1AF4A0u: goto label_7F1AF4A0;
    case 0x7F1AF4A4u: goto label_7F1AF4A4;
    case 0x7F1AF4A8u: goto label_7F1AF4A8;
    case 0x7F1AF4ACu: goto label_7F1AF4AC;
    case 0x7F1AF4B0u: goto label_7F1AF4B0;
    case 0x7F1AF4B4u: goto label_7F1AF4B4;
    case 0x7F1AF4B8u: goto label_7F1AF4B8;
    case 0x7F1AF4BCu: goto label_7F1AF4BC;
    case 0x7F1AF4C0u: goto label_7F1AF4C0;
    case 0x7F1AF4C4u: goto label_7F1AF4C4;
    case 0x7F1AF4C8u: goto label_7F1AF4C8;
    case 0x7F1AF4CCu: goto label_7F1AF4CC;
    case 0x7F1AF4D0u: goto label_7F1AF4D0;
    case 0x7F1AF4D4u: goto label_7F1AF4D4;
    case 0x7F1AF4D8u: goto label_7F1AF4D8;
    case 0x7F1AF4DCu: goto label_7F1AF4DC;
    case 0x7F1AF4E0u: goto label_7F1AF4E0;
    case 0x7F1AF4E4u: goto label_7F1AF4E4;
    case 0x7F1AF4E8u: goto label_7F1AF4E8;
    case 0x7F1AF4ECu: goto label_7F1AF4EC;
    case 0x7F1AF4F0u: goto label_7F1AF4F0;
    case 0x7F1AF4F4u: goto label_7F1AF4F4;
    case 0x7F1AF4F8u: goto label_7F1AF4F8;
    case 0x7F1AF4FCu: goto label_7F1AF4FC;
    case 0x7F1AF500u: goto label_7F1AF500;
    case 0x7F1AF504u: goto label_7F1AF504;
    case 0x7F1AF508u: goto label_7F1AF508;
    case 0x7F1AF50Cu: goto label_7F1AF50C;
    case 0x7F1AF510u: goto label_7F1AF510;
    case 0x7F1AF514u: goto label_7F1AF514;
    case 0x7F1AF518u: goto label_7F1AF518;
    case 0x7F1AF51Cu: goto label_7F1AF51C;
    case 0x7F1AF520u: goto label_7F1AF520;
    case 0x7F1AF524u: goto label_7F1AF524;
    case 0x7F1AF528u: goto label_7F1AF528;
    case 0x7F1AF52Cu: goto label_7F1AF52C;
    case 0x7F1AF530u: goto label_7F1AF530;
    case 0x7F1AF534u: goto label_7F1AF534;
    case 0x7F1AF538u: goto label_7F1AF538;
    case 0x7F1AF53Cu: goto label_7F1AF53C;
    case 0x7F1AF540u: goto label_7F1AF540;
    case 0x7F1AF544u: goto label_7F1AF544;
    case 0x7F1AF548u: goto label_7F1AF548;
    case 0x7F1AF54Cu: goto label_7F1AF54C;
    case 0x7F1AF550u: goto label_7F1AF550;
    case 0x7F1AF554u: goto label_7F1AF554;
    case 0x7F1AF558u: goto label_7F1AF558;
    case 0x7F1AF55Cu: goto label_7F1AF55C;
    case 0x7F1AF560u: goto label_7F1AF560;
    case 0x7F1AF564u: goto label_7F1AF564;
    case 0x7F1AF568u: goto label_7F1AF568;
    case 0x7F1AF56Cu: goto label_7F1AF56C;
    case 0x7F1AF570u: goto label_7F1AF570;
    case 0x7F1AF574u: goto label_7F1AF574;
    case 0x7F1AF578u: goto label_7F1AF578;
    case 0x7F1AF57Cu: goto label_7F1AF57C;
    case 0x7F1AF580u: goto label_7F1AF580;
    case 0x7F1AF584u: goto label_7F1AF584;
    case 0x7F1AF588u: goto label_7F1AF588;
    case 0x7F1AF58Cu: goto label_7F1AF58C;
    case 0x7F1AF590u: goto label_7F1AF590;
    case 0x7F1AF594u: goto label_7F1AF594;
    case 0x7F1AF598u: goto label_7F1AF598;
    case 0x7F1AF59Cu: goto label_7F1AF59C;
    case 0x7F1AF5A0u: goto label_7F1AF5A0;
    case 0x7F1AF5A4u: goto label_7F1AF5A4;
    case 0x7F1AF5A8u: goto label_7F1AF5A8;
    case 0x7F1AF5ACu: goto label_7F1AF5AC;
    case 0x7F1AF5B0u: goto label_7F1AF5B0;
    case 0x7F1AF5B4u: goto label_7F1AF5B4;
    case 0x7F1AF5B8u: goto label_7F1AF5B8;
    case 0x7F1AF5BCu: goto label_7F1AF5BC;
    case 0x7F1AF5C0u: goto label_7F1AF5C0;
    case 0x7F1AF5C4u: goto label_7F1AF5C4;
    case 0x7F1AF5C8u: goto label_7F1AF5C8;
    case 0x7F1AF5CCu: goto label_7F1AF5CC;
    case 0x7F1AF5D0u: goto label_7F1AF5D0;
    case 0x7F1AF5D4u: goto label_7F1AF5D4;
    case 0x7F1AF5D8u: goto label_7F1AF5D8;
    case 0x7F1AF5DCu: goto label_7F1AF5DC;
    case 0x7F1AF5E0u: goto label_7F1AF5E0;
    case 0x7F1AF5E4u: goto label_7F1AF5E4;
    case 0x7F1AF5E8u: goto label_7F1AF5E8;
    case 0x7F1AF5ECu: goto label_7F1AF5EC;
    case 0x7F1AF5F0u: goto label_7F1AF5F0;
    case 0x7F1AF5F4u: goto label_7F1AF5F4;
    case 0x7F1AF5F8u: goto label_7F1AF5F8;
    case 0x7F1AF5FCu: goto label_7F1AF5FC;
    case 0x7F1AF600u: goto label_7F1AF600;
    case 0x7F1AF604u: goto label_7F1AF604;
    case 0x7F1AF608u: goto label_7F1AF608;
    case 0x7F1AF60Cu: goto label_7F1AF60C;
    case 0x7F1AF610u: goto label_7F1AF610;
    case 0x7F1AF614u: goto label_7F1AF614;
    case 0x7F1AF618u: goto label_7F1AF618;
    case 0x7F1AF61Cu: goto label_7F1AF61C;
    case 0x7F1AF620u: goto label_7F1AF620;
    case 0x7F1AF624u: goto label_7F1AF624;
    case 0x7F1AF628u: goto label_7F1AF628;
    case 0x7F1AF62Cu: goto label_7F1AF62C;
    case 0x7F1AF630u: goto label_7F1AF630;
    case 0x7F1AF634u: goto label_7F1AF634;
    case 0x7F1AF638u: goto label_7F1AF638;
    case 0x7F1AF63Cu: goto label_7F1AF63C;
    case 0x7F1AF640u: goto label_7F1AF640;
    case 0x7F1AF644u: goto label_7F1AF644;
    case 0x7F1AF648u: goto label_7F1AF648;
    case 0x7F1AF64Cu: goto label_7F1AF64C;
    case 0x7F1AF650u: goto label_7F1AF650;
    case 0x7F1AF654u: goto label_7F1AF654;
    case 0x7F1AF658u: goto label_7F1AF658;
    case 0x7F1AF65Cu: goto label_7F1AF65C;
    case 0x7F1AF660u: goto label_7F1AF660;
    case 0x7F1AF664u: goto label_7F1AF664;
    case 0x7F1AF668u: goto label_7F1AF668;
    case 0x7F1AF66Cu: goto label_7F1AF66C;
    case 0x7F1AF670u: goto label_7F1AF670;
    case 0x7F1AF674u: goto label_7F1AF674;
    case 0x7F1AF678u: goto label_7F1AF678;
    case 0x7F1AF67Cu: goto label_7F1AF67C;
    case 0x7F1AF680u: goto label_7F1AF680;
    case 0x7F1AF684u: goto label_7F1AF684;
    case 0x7F1AF688u: goto label_7F1AF688;
    case 0x7F1AF68Cu: goto label_7F1AF68C;
    case 0x7F1AF690u: goto label_7F1AF690;
    case 0x7F1AF694u: goto label_7F1AF694;
    case 0x7F1AF698u: goto label_7F1AF698;
    case 0x7F1AF69Cu: goto label_7F1AF69C;
    case 0x7F1AF6A0u: goto label_7F1AF6A0;
    case 0x7F1AF6A4u: goto label_7F1AF6A4;
    case 0x7F1AF6A8u: goto label_7F1AF6A8;
    case 0x7F1AF6ACu: goto label_7F1AF6AC;
    case 0x7F1AF6B0u: goto label_7F1AF6B0;
    case 0x7F1AF6B4u: goto label_7F1AF6B4;
    case 0x7F1AF6B8u: goto label_7F1AF6B8;
    case 0x7F1AF6BCu: goto label_7F1AF6BC;
    case 0x7F1AF6C0u: goto label_7F1AF6C0;
    case 0x7F1AF6C4u: goto label_7F1AF6C4;
    case 0x7F1AF6C8u: goto label_7F1AF6C8;
    case 0x7F1AF6CCu: goto label_7F1AF6CC;
    case 0x7F1AF6D0u: goto label_7F1AF6D0;
    case 0x7F1AF6D4u: goto label_7F1AF6D4;
    case 0x7F1AF6D8u: goto label_7F1AF6D8;
    case 0x7F1AF6DCu: goto label_7F1AF6DC;
    case 0x7F1AF6E0u: goto label_7F1AF6E0;
    case 0x7F1AF6E4u: goto label_7F1AF6E4;
    case 0x7F1AF6E8u: goto label_7F1AF6E8;
    case 0x7F1AF6ECu: goto label_7F1AF6EC;
    case 0x7F1AF6F0u: goto label_7F1AF6F0;
    case 0x7F1AF6F4u: goto label_7F1AF6F4;
    case 0x7F1AF6F8u: goto label_7F1AF6F8;
    case 0x7F1AF6FCu: goto label_7F1AF6FC;
    case 0x7F1AF700u: goto label_7F1AF700;
    case 0x7F1AF704u: goto label_7F1AF704;
    case 0x7F1AF708u: goto label_7F1AF708;
    case 0x7F1AF70Cu: goto label_7F1AF70C;
    case 0x7F1AF710u: goto label_7F1AF710;
    case 0x7F1AF714u: goto label_7F1AF714;
    case 0x7F1AF718u: goto label_7F1AF718;
    case 0x7F1AF71Cu: goto label_7F1AF71C;
    case 0x7F1AF720u: goto label_7F1AF720;
    case 0x7F1AF724u: goto label_7F1AF724;
    case 0x7F1AF728u: goto label_7F1AF728;
    case 0x7F1AF72Cu: goto label_7F1AF72C;
    case 0x7F1AF730u: goto label_7F1AF730;
    case 0x7F1AF734u: goto label_7F1AF734;
    case 0x7F1AF738u: goto label_7F1AF738;
    case 0x7F1AF73Cu: goto label_7F1AF73C;
    case 0x7F1AF740u: goto label_7F1AF740;
    case 0x7F1AF744u: goto label_7F1AF744;
    case 0x7F1AF748u: goto label_7F1AF748;
    case 0x7F1AF74Cu: goto label_7F1AF74C;
    case 0x7F1AF750u: goto label_7F1AF750;
    case 0x7F1AF754u: goto label_7F1AF754;
    case 0x7F1AF758u: goto label_7F1AF758;
    case 0x7F1AF75Cu: goto label_7F1AF75C;
    case 0x7F1AF760u: goto label_7F1AF760;
    case 0x7F1AF764u: goto label_7F1AF764;
    case 0x7F1AF768u: goto label_7F1AF768;
    case 0x7F1AF76Cu: goto label_7F1AF76C;
    case 0x7F1AF770u: goto label_7F1AF770;
    case 0x7F1AF774u: goto label_7F1AF774;
    case 0x7F1AF778u: goto label_7F1AF778;
    case 0x7F1AF77Cu: goto label_7F1AF77C;
    case 0x7F1AF780u: goto label_7F1AF780;
    case 0x7F1AF784u: goto label_7F1AF784;
    case 0x7F1AF788u: goto label_7F1AF788;
    case 0x7F1AF78Cu: goto label_7F1AF78C;
    case 0x7F1AF790u: goto label_7F1AF790;
    case 0x7F1AF794u: goto label_7F1AF794;
    case 0x7F1AF798u: goto label_7F1AF798;
    case 0x7F1AF79Cu: goto label_7F1AF79C;
    case 0x7F1AF7A0u: goto label_7F1AF7A0;
    case 0x7F1AF7A4u: goto label_7F1AF7A4;
    case 0x7F1AF7A8u: goto label_7F1AF7A8;
    case 0x7F1AF7ACu: goto label_7F1AF7AC;
    case 0x7F1AF7B0u: goto label_7F1AF7B0;
    case 0x7F1AF7B4u: goto label_7F1AF7B4;
    case 0x7F1AF7B8u: goto label_7F1AF7B8;
    case 0x7F1AF7BCu: goto label_7F1AF7BC;
    case 0x7F1AF7C0u: goto label_7F1AF7C0;
    case 0x7F1AF7C4u: goto label_7F1AF7C4;
    case 0x7F1AF7C8u: goto label_7F1AF7C8;
    case 0x7F1AF7CCu: goto label_7F1AF7CC;
    case 0x7F1AF7D0u: goto label_7F1AF7D0;
    case 0x7F1AF7D4u: goto label_7F1AF7D4;
    case 0x7F1AF7D8u: goto label_7F1AF7D8;
    case 0x7F1AF7DCu: goto label_7F1AF7DC;
    case 0x7F1AF7E0u: goto label_7F1AF7E0;
    case 0x7F1AF7E4u: goto label_7F1AF7E4;
    case 0x7F1AF7E8u: goto label_7F1AF7E8;
    case 0x7F1AF7ECu: goto label_7F1AF7EC;
    case 0x7F1AF7F0u: goto label_7F1AF7F0;
    case 0x7F1AF7F4u: goto label_7F1AF7F4;
    case 0x7F1AF7F8u: goto label_7F1AF7F8;
    case 0x7F1AF7FCu: goto label_7F1AF7FC;
    case 0x7F1AF800u: goto label_7F1AF800;
    case 0x7F1AF804u: goto label_7F1AF804;
    case 0x7F1AF808u: goto label_7F1AF808;
    case 0x7F1AF80Cu: goto label_7F1AF80C;
    case 0x7F1AF810u: goto label_7F1AF810;
    case 0x7F1AF814u: goto label_7F1AF814;
    case 0x7F1AF818u: goto label_7F1AF818;
    case 0x7F1AF81Cu: goto label_7F1AF81C;
    case 0x7F1AF820u: goto label_7F1AF820;
    case 0x7F1AF824u: goto label_7F1AF824;
    case 0x7F1AF828u: goto label_7F1AF828;
    case 0x7F1AF82Cu: goto label_7F1AF82C;
    case 0x7F1AF830u: goto label_7F1AF830;
    case 0x7F1AF834u: goto label_7F1AF834;
    case 0x7F1AF838u: goto label_7F1AF838;
    case 0x7F1AF83Cu: goto label_7F1AF83C;
    case 0x7F1AF840u: goto label_7F1AF840;
    case 0x7F1AF844u: goto label_7F1AF844;
    case 0x7F1AF848u: goto label_7F1AF848;
    case 0x7F1AF84Cu: goto label_7F1AF84C;
    case 0x7F1AF850u: goto label_7F1AF850;
    case 0x7F1AF854u: goto label_7F1AF854;
    case 0x7F1AF858u: goto label_7F1AF858;
    case 0x7F1AF85Cu: goto label_7F1AF85C;
    case 0x7F1AF860u: goto label_7F1AF860;
    case 0x7F1AF864u: goto label_7F1AF864;
    case 0x7F1AF868u: goto label_7F1AF868;
    case 0x7F1AF86Cu: goto label_7F1AF86C;
    case 0x7F1AF870u: goto label_7F1AF870;
    case 0x7F1AF874u: goto label_7F1AF874;
    case 0x7F1AF878u: goto label_7F1AF878;
    case 0x7F1AF87Cu: goto label_7F1AF87C;
    case 0x7F1AF880u: goto label_7F1AF880;
    case 0x7F1AF884u: goto label_7F1AF884;
    case 0x7F1AF888u: goto label_7F1AF888;
    case 0x7F1AF88Cu: goto label_7F1AF88C;
    case 0x7F1AF890u: goto label_7F1AF890;
    case 0x7F1AF894u: goto label_7F1AF894;
    case 0x7F1AF898u: goto label_7F1AF898;
    case 0x7F1AF89Cu: goto label_7F1AF89C;
    case 0x7F1AF8A0u: goto label_7F1AF8A0;
    case 0x7F1AF8A4u: goto label_7F1AF8A4;
    case 0x7F1AF8A8u: goto label_7F1AF8A8;
    case 0x7F1AF8ACu: goto label_7F1AF8AC;
    case 0x7F1AF8B0u: goto label_7F1AF8B0;
    case 0x7F1AF8B4u: goto label_7F1AF8B4;
    case 0x7F1AF8B8u: goto label_7F1AF8B8;
    case 0x7F1AF8BCu: goto label_7F1AF8BC;
    case 0x7F1AF8C0u: goto label_7F1AF8C0;
    case 0x7F1AF8C4u: goto label_7F1AF8C4;
    case 0x7F1AF8C8u: goto label_7F1AF8C8;
    case 0x7F1AF8CCu: goto label_7F1AF8CC;
    case 0x7F1AF8D0u: goto label_7F1AF8D0;
    case 0x7F1AF8D4u: goto label_7F1AF8D4;
    case 0x7F1AF8D8u: goto label_7F1AF8D8;
    case 0x7F1AF8DCu: goto label_7F1AF8DC;
    case 0x7F1AF8E0u: goto label_7F1AF8E0;
    case 0x7F1AF8E4u: goto label_7F1AF8E4;
    case 0x7F1AF8E8u: goto label_7F1AF8E8;
    case 0x7F1AF8ECu: goto label_7F1AF8EC;
    case 0x7F1AF8F0u: goto label_7F1AF8F0;
    case 0x7F1AF8F4u: goto label_7F1AF8F4;
    case 0x7F1AF8F8u: goto label_7F1AF8F8;
    case 0x7F1AF8FCu: goto label_7F1AF8FC;
    case 0x7F1AF900u: goto label_7F1AF900;
    case 0x7F1AF904u: goto label_7F1AF904;
    case 0x7F1AF908u: goto label_7F1AF908;
    case 0x7F1AF90Cu: goto label_7F1AF90C;
    case 0x7F1AF910u: goto label_7F1AF910;
    case 0x7F1AF914u: goto label_7F1AF914;
    case 0x7F1AF918u: goto label_7F1AF918;
    case 0x7F1AF91Cu: goto label_7F1AF91C;
    case 0x7F1AF920u: goto label_7F1AF920;
    case 0x7F1AF924u: goto label_7F1AF924;
    case 0x7F1AF928u: goto label_7F1AF928;
    case 0x7F1AF92Cu: goto label_7F1AF92C;
    case 0x7F1AF930u: goto label_7F1AF930;
    case 0x7F1AF934u: goto label_7F1AF934;
    case 0x7F1AF938u: goto label_7F1AF938;
    case 0x7F1AF93Cu: goto label_7F1AF93C;
    case 0x7F1AF940u: goto label_7F1AF940;
    case 0x7F1AF944u: goto label_7F1AF944;
    case 0x7F1AF948u: goto label_7F1AF948;
    case 0x7F1AF94Cu: goto label_7F1AF94C;
    case 0x7F1AF950u: goto label_7F1AF950;
    case 0x7F1AF954u: goto label_7F1AF954;
    case 0x7F1AF958u: goto label_7F1AF958;
    case 0x7F1AF95Cu: goto label_7F1AF95C;
    case 0x7F1AF960u: goto label_7F1AF960;
    case 0x7F1AF964u: goto label_7F1AF964;
    case 0x7F1AF968u: goto label_7F1AF968;
    case 0x7F1AF96Cu: goto label_7F1AF96C;
    case 0x7F1AF970u: goto label_7F1AF970;
    case 0x7F1AF974u: goto label_7F1AF974;
    case 0x7F1AF978u: goto label_7F1AF978;
    case 0x7F1AF97Cu: goto label_7F1AF97C;
    case 0x7F1AF980u: goto label_7F1AF980;
    case 0x7F1AF984u: goto label_7F1AF984;
    case 0x7F1AF988u: goto label_7F1AF988;
    case 0x7F1AF98Cu: goto label_7F1AF98C;
    case 0x7F1AF990u: goto label_7F1AF990;
    case 0x7F1AF994u: goto label_7F1AF994;
    case 0x7F1AF998u: goto label_7F1AF998;
    case 0x7F1AF99Cu: goto label_7F1AF99C;
    case 0x7F1AF9A0u: goto label_7F1AF9A0;
    case 0x7F1AF9A4u: goto label_7F1AF9A4;
    case 0x7F1AF9A8u: goto label_7F1AF9A8;
    case 0x7F1AF9ACu: goto label_7F1AF9AC;
    case 0x7F1AF9B0u: goto label_7F1AF9B0;
    case 0x7F1AF9B4u: goto label_7F1AF9B4;
    case 0x7F1AF9B8u: goto label_7F1AF9B8;
    case 0x7F1AF9BCu: goto label_7F1AF9BC;
    case 0x7F1AF9C0u: goto label_7F1AF9C0;
    case 0x7F1AF9C4u: goto label_7F1AF9C4;
    case 0x7F1AF9C8u: goto label_7F1AF9C8;
    case 0x7F1AF9CCu: goto label_7F1AF9CC;
    case 0x7F1AF9D0u: goto label_7F1AF9D0;
    case 0x7F1AF9D4u: goto label_7F1AF9D4;
    case 0x7F1AF9D8u: goto label_7F1AF9D8;
    case 0x7F1AF9DCu: goto label_7F1AF9DC;
    case 0x7F1AF9E0u: goto label_7F1AF9E0;
    case 0x7F1AF9E4u: goto label_7F1AF9E4;
    case 0x7F1AF9E8u: goto label_7F1AF9E8;
    case 0x7F1AF9ECu: goto label_7F1AF9EC;
    case 0x7F1AF9F0u: goto label_7F1AF9F0;
    case 0x7F1AF9F4u: goto label_7F1AF9F4;
    case 0x7F1AF9F8u: goto label_7F1AF9F8;
    case 0x7F1AF9FCu: goto label_7F1AF9FC;
    case 0x7F1AFA00u: goto label_7F1AFA00;
    case 0x7F1AFA04u: goto label_7F1AFA04;
    case 0x7F1AFA08u: goto label_7F1AFA08;
    case 0x7F1AFA0Cu: goto label_7F1AFA0C;
    case 0x7F1AFA10u: goto label_7F1AFA10;
    case 0x7F1AFA14u: goto label_7F1AFA14;
    case 0x7F1AFA18u: goto label_7F1AFA18;
    case 0x7F1AFA1Cu: goto label_7F1AFA1C;
    case 0x7F1AFA20u: goto label_7F1AFA20;
    case 0x7F1AFA24u: goto label_7F1AFA24;
    case 0x7F1AFA28u: goto label_7F1AFA28;
    case 0x7F1AFA2Cu: goto label_7F1AFA2C;
    case 0x7F1AFA30u: goto label_7F1AFA30;
    case 0x7F1AFA34u: goto label_7F1AFA34;
    case 0x7F1AFA38u: goto label_7F1AFA38;
    case 0x7F1AFA3Cu: goto label_7F1AFA3C;
    case 0x7F1AFA40u: goto label_7F1AFA40;
    case 0x7F1AFA44u: goto label_7F1AFA44;
    case 0x7F1AFA48u: goto label_7F1AFA48;
    case 0x7F1AFA4Cu: goto label_7F1AFA4C;
    case 0x7F1AFA50u: goto label_7F1AFA50;
    case 0x7F1AFA54u: goto label_7F1AFA54;
    case 0x7F1AFA58u: goto label_7F1AFA58;
    case 0x7F1AFA5Cu: goto label_7F1AFA5C;
    case 0x7F1AFA60u: goto label_7F1AFA60;
    case 0x7F1AFA64u: goto label_7F1AFA64;
    case 0x7F1AFA68u: goto label_7F1AFA68;
    case 0x7F1AFA6Cu: goto label_7F1AFA6C;
    case 0x7F1AFA70u: goto label_7F1AFA70;
    case 0x7F1AFA74u: goto label_7F1AFA74;
    case 0x7F1AFA78u: goto label_7F1AFA78;
    case 0x7F1AFA7Cu: goto label_7F1AFA7C;
    case 0x7F1AFA80u: goto label_7F1AFA80;
    case 0x7F1AFA84u: goto label_7F1AFA84;
    case 0x7F1AFA88u: goto label_7F1AFA88;
    case 0x7F1AFA8Cu: goto label_7F1AFA8C;
    case 0x7F1AFA90u: goto label_7F1AFA90;
    case 0x7F1AFA94u: goto label_7F1AFA94;
    case 0x7F1AFA98u: goto label_7F1AFA98;
    case 0x7F1AFA9Cu: goto label_7F1AFA9C;
    case 0x7F1AFAA0u: goto label_7F1AFAA0;
    case 0x7F1AFAA4u: goto label_7F1AFAA4;
    case 0x7F1AFAA8u: goto label_7F1AFAA8;
    case 0x7F1AFAACu: goto label_7F1AFAAC;
    case 0x7F1AFAB0u: goto label_7F1AFAB0;
    case 0x7F1AFAB4u: goto label_7F1AFAB4;
    case 0x7F1AFAB8u: goto label_7F1AFAB8;
    case 0x7F1AFABCu: goto label_7F1AFABC;
    case 0x7F1AFAC0u: goto label_7F1AFAC0;
    case 0x7F1AFAC4u: goto label_7F1AFAC4;
    case 0x7F1AFAC8u: goto label_7F1AFAC8;
    case 0x7F1AFACCu: goto label_7F1AFACC;
    case 0x7F1AFAD0u: goto label_7F1AFAD0;
    case 0x7F1AFAD4u: goto label_7F1AFAD4;
    case 0x7F1AFAD8u: goto label_7F1AFAD8;
    case 0x7F1AFADCu: goto label_7F1AFADC;
    case 0x7F1AFAE0u: goto label_7F1AFAE0;
    case 0x7F1AFAE4u: goto label_7F1AFAE4;
    case 0x7F1AFAE8u: goto label_7F1AFAE8;
    case 0x7F1AFAECu: goto label_7F1AFAEC;
    case 0x7F1AFAF0u: goto label_7F1AFAF0;
    case 0x7F1AFAF4u: goto label_7F1AFAF4;
    case 0x7F1AFAF8u: goto label_7F1AFAF8;
    case 0x7F1AFAFCu: goto label_7F1AFAFC;
    case 0x7F1AFB00u: goto label_7F1AFB00;
    case 0x7F1AFB04u: goto label_7F1AFB04;
    case 0x7F1AFB08u: goto label_7F1AFB08;
    case 0x7F1AFB0Cu: goto label_7F1AFB0C;
    case 0x7F1AFB10u: goto label_7F1AFB10;
    case 0x7F1AFB14u: goto label_7F1AFB14;
    case 0x7F1AFB18u: goto label_7F1AFB18;
    case 0x7F1AFB1Cu: goto label_7F1AFB1C;
    case 0x7F1AFB20u: goto label_7F1AFB20;
    case 0x7F1AFB24u: goto label_7F1AFB24;
    case 0x7F1AFB28u: goto label_7F1AFB28;
    case 0x7F1AFB2Cu: goto label_7F1AFB2C;
    case 0x7F1AFB30u: goto label_7F1AFB30;
    case 0x7F1AFB34u: goto label_7F1AFB34;
    case 0x7F1AFB38u: goto label_7F1AFB38;
    case 0x7F1AFB3Cu: goto label_7F1AFB3C;
    case 0x7F1AFB40u: goto label_7F1AFB40;
    case 0x7F1AFB44u: goto label_7F1AFB44;
    case 0x7F1AFB48u: goto label_7F1AFB48;
    case 0x7F1AFB4Cu: goto label_7F1AFB4C;
    case 0x7F1AFB50u: goto label_7F1AFB50;
    case 0x7F1AFB54u: goto label_7F1AFB54;
    case 0x7F1AFB58u: goto label_7F1AFB58;
    case 0x7F1AFB5Cu: goto label_7F1AFB5C;
    case 0x7F1AFB60u: goto label_7F1AFB60;
    case 0x7F1AFB64u: goto label_7F1AFB64;
    case 0x7F1AFB68u: goto label_7F1AFB68;
    case 0x7F1AFB6Cu: goto label_7F1AFB6C;
    case 0x7F1AFB70u: goto label_7F1AFB70;
    case 0x7F1AFB74u: goto label_7F1AFB74;
    case 0x7F1AFB78u: goto label_7F1AFB78;
    case 0x7F1AFB7Cu: goto label_7F1AFB7C;
    case 0x7F1AFB80u: goto label_7F1AFB80;
    case 0x7F1AFB84u: goto label_7F1AFB84;
    case 0x7F1AFB88u: goto label_7F1AFB88;
    case 0x7F1AFB8Cu: goto label_7F1AFB8C;
    case 0x7F1AFB90u: goto label_7F1AFB90;
    case 0x7F1AFB94u: goto label_7F1AFB94;
    case 0x7F1AFB98u: goto label_7F1AFB98;
    case 0x7F1AFB9Cu: goto label_7F1AFB9C;
    case 0x7F1AFBA0u: goto label_7F1AFBA0;
    case 0x7F1AFBA4u: goto label_7F1AFBA4;
    case 0x7F1AFBA8u: goto label_7F1AFBA8;
    case 0x7F1AFBACu: goto label_7F1AFBAC;
    case 0x7F1AFBB0u: goto label_7F1AFBB0;
    case 0x7F1AFBB4u: goto label_7F1AFBB4;
    case 0x7F1AFBB8u: goto label_7F1AFBB8;
    case 0x7F1AFBBCu: goto label_7F1AFBBC;
    case 0x7F1AFBC0u: goto label_7F1AFBC0;
    case 0x7F1AFBC4u: goto label_7F1AFBC4;
    case 0x7F1AFBC8u: goto label_7F1AFBC8;
    case 0x7F1AFBCCu: goto label_7F1AFBCC;
    case 0x7F1AFBD0u: goto label_7F1AFBD0;
    case 0x7F1AFBD4u: goto label_7F1AFBD4;
    case 0x7F1AFBD8u: goto label_7F1AFBD8;
    case 0x7F1AFBDCu: goto label_7F1AFBDC;
    case 0x7F1AFBE0u: goto label_7F1AFBE0;
    case 0x7F1AFBE4u: goto label_7F1AFBE4;
    case 0x7F1AFBE8u: goto label_7F1AFBE8;
    case 0x7F1AFBECu: goto label_7F1AFBEC;
    case 0x7F1AFBF0u: goto label_7F1AFBF0;
    case 0x7F1AFBF4u: goto label_7F1AFBF4;
    case 0x7F1AFBF8u: goto label_7F1AFBF8;
    case 0x7F1AFBFCu: goto label_7F1AFBFC;
    case 0x7F1AFC00u: goto label_7F1AFC00;
    case 0x7F1AFC04u: goto label_7F1AFC04;
    case 0x7F1AFC08u: goto label_7F1AFC08;
    case 0x7F1AFC0Cu: goto label_7F1AFC0C;
    case 0x7F1AFC10u: goto label_7F1AFC10;
    case 0x7F1AFC14u: goto label_7F1AFC14;
    case 0x7F1AFC18u: goto label_7F1AFC18;
    case 0x7F1AFC1Cu: goto label_7F1AFC1C;
    case 0x7F1AFC20u: goto label_7F1AFC20;
    case 0x7F1AFC24u: goto label_7F1AFC24;
    case 0x7F1AFC28u: goto label_7F1AFC28;
    case 0x7F1AFC2Cu: goto label_7F1AFC2C;
    case 0x7F1AFC30u: goto label_7F1AFC30;
    case 0x7F1AFC34u: goto label_7F1AFC34;
    case 0x7F1AFC38u: goto label_7F1AFC38;
    case 0x7F1AFC3Cu: goto label_7F1AFC3C;
    case 0x7F1AFC40u: goto label_7F1AFC40;
    case 0x7F1AFC44u: goto label_7F1AFC44;
    case 0x7F1AFC48u: goto label_7F1AFC48;
    case 0x7F1AFC4Cu: goto label_7F1AFC4C;
    case 0x7F1AFC50u: goto label_7F1AFC50;
    case 0x7F1AFC54u: goto label_7F1AFC54;
    case 0x7F1AFC58u: goto label_7F1AFC58;
    case 0x7F1AFC5Cu: goto label_7F1AFC5C;
    case 0x7F1AFC60u: goto label_7F1AFC60;
    case 0x7F1AFC64u: goto label_7F1AFC64;
    case 0x7F1AFC68u: goto label_7F1AFC68;
    case 0x7F1AFC6Cu: goto label_7F1AFC6C;
    case 0x7F1AFC70u: goto label_7F1AFC70;
    case 0x7F1AFC74u: goto label_7F1AFC74;
    case 0x7F1AFC78u: goto label_7F1AFC78;
    case 0x7F1AFC7Cu: goto label_7F1AFC7C;
    case 0x7F1AFC80u: goto label_7F1AFC80;
    case 0x7F1AFC84u: goto label_7F1AFC84;
    case 0x7F1AFC88u: goto label_7F1AFC88;
    case 0x7F1AFC8Cu: goto label_7F1AFC8C;
    case 0x7F1AFC90u: goto label_7F1AFC90;
    case 0x7F1AFC94u: goto label_7F1AFC94;
    case 0x7F1AFC98u: goto label_7F1AFC98;
    case 0x7F1AFC9Cu: goto label_7F1AFC9C;
    case 0x7F1AFCA0u: goto label_7F1AFCA0;
    case 0x7F1AFCA4u: goto label_7F1AFCA4;
    case 0x7F1AFCA8u: goto label_7F1AFCA8;
    case 0x7F1AFCACu: goto label_7F1AFCAC;
    case 0x7F1AFCB0u: goto label_7F1AFCB0;
    case 0x7F1AFCB4u: goto label_7F1AFCB4;
    case 0x7F1AFCB8u: goto label_7F1AFCB8;
    case 0x7F1AFCBCu: goto label_7F1AFCBC;
    case 0x7F1AFCC0u: goto label_7F1AFCC0;
    case 0x7F1AFCC4u: goto label_7F1AFCC4;
    case 0x7F1AFCC8u: goto label_7F1AFCC8;
    case 0x7F1AFCCCu: goto label_7F1AFCCC;
    case 0x7F1AFCD0u: goto label_7F1AFCD0;
    case 0x7F1AFCD4u: goto label_7F1AFCD4;
    case 0x7F1AFCD8u: goto label_7F1AFCD8;
    case 0x7F1AFCDCu: goto label_7F1AFCDC;
    case 0x7F1AFCE0u: goto label_7F1AFCE0;
    case 0x7F1AFCE4u: goto label_7F1AFCE4;
    case 0x7F1AFCE8u: goto label_7F1AFCE8;
    case 0x7F1AFCECu: goto label_7F1AFCEC;
    case 0x7F1AFCF0u: goto label_7F1AFCF0;
    case 0x7F1AFCF4u: goto label_7F1AFCF4;
    case 0x7F1AFCF8u: goto label_7F1AFCF8;
    case 0x7F1AFCFCu: goto label_7F1AFCFC;
    case 0x7F1AFD00u: goto label_7F1AFD00;
    case 0x7F1AFD04u: goto label_7F1AFD04;
    case 0x7F1AFD08u: goto label_7F1AFD08;
    case 0x7F1AFD0Cu: goto label_7F1AFD0C;
    case 0x7F1AFD10u: goto label_7F1AFD10;
    case 0x7F1AFD14u: goto label_7F1AFD14;
    case 0x7F1AFD18u: goto label_7F1AFD18;
    case 0x7F1AFD1Cu: goto label_7F1AFD1C;
    case 0x7F1AFD20u: goto label_7F1AFD20;
    case 0x7F1AFD24u: goto label_7F1AFD24;
    case 0x7F1AFD28u: goto label_7F1AFD28;
    case 0x7F1AFD2Cu: goto label_7F1AFD2C;
    case 0x7F1AFD30u: goto label_7F1AFD30;
    case 0x7F1AFD34u: goto label_7F1AFD34;
    case 0x7F1AFD38u: goto label_7F1AFD38;
    case 0x7F1AFD3Cu: goto label_7F1AFD3C;
    case 0x7F1AFD40u: goto label_7F1AFD40;
    case 0x7F1AFD44u: goto label_7F1AFD44;
    case 0x7F1AFD48u: goto label_7F1AFD48;
    case 0x7F1AFD4Cu: goto label_7F1AFD4C;
    case 0x7F1AFD50u: goto label_7F1AFD50;
    case 0x7F1AFD54u: goto label_7F1AFD54;
    case 0x7F1AFD58u: goto label_7F1AFD58;
    case 0x7F1AFD5Cu: goto label_7F1AFD5C;
    case 0x7F1AFD60u: goto label_7F1AFD60;
    case 0x7F1AFD64u: goto label_7F1AFD64;
    case 0x7F1AFD68u: goto label_7F1AFD68;
    case 0x7F1AFD6Cu: goto label_7F1AFD6C;
    case 0x7F1AFD70u: goto label_7F1AFD70;
    case 0x7F1AFD74u: goto label_7F1AFD74;
    case 0x7F1AFD78u: goto label_7F1AFD78;
    case 0x7F1AFD7Cu: goto label_7F1AFD7C;
    case 0x7F1AFD80u: goto label_7F1AFD80;
    case 0x7F1AFD84u: goto label_7F1AFD84;
    case 0x7F1AFD88u: goto label_7F1AFD88;
    case 0x7F1AFD8Cu: goto label_7F1AFD8C;
    case 0x7F1AFD90u: goto label_7F1AFD90;
    case 0x7F1AFD94u: goto label_7F1AFD94;
    case 0x7F1AFD98u: goto label_7F1AFD98;
    case 0x7F1AFD9Cu: goto label_7F1AFD9C;
    case 0x7F1AFDA0u: goto label_7F1AFDA0;
    case 0x7F1AFDA4u: goto label_7F1AFDA4;
    case 0x7F1AFDA8u: goto label_7F1AFDA8;
    case 0x7F1AFDACu: goto label_7F1AFDAC;
    case 0x7F1AFDB0u: goto label_7F1AFDB0;
    case 0x7F1AFDB4u: goto label_7F1AFDB4;
    case 0x7F1AFDB8u: goto label_7F1AFDB8;
    case 0x7F1AFDBCu: goto label_7F1AFDBC;
    case 0x7F1AFDC0u: goto label_7F1AFDC0;
    case 0x7F1AFDC4u: goto label_7F1AFDC4;
    case 0x7F1AFDC8u: goto label_7F1AFDC8;
    case 0x7F1AFDCCu: goto label_7F1AFDCC;
    case 0x7F1AFDD0u: goto label_7F1AFDD0;
    case 0x7F1AFDD4u: goto label_7F1AFDD4;
    case 0x7F1AFDD8u: goto label_7F1AFDD8;
    case 0x7F1AFDDCu: goto label_7F1AFDDC;
    case 0x7F1AFDE0u: goto label_7F1AFDE0;
    case 0x7F1AFDE4u: goto label_7F1AFDE4;
    case 0x7F1AFDE8u: goto label_7F1AFDE8;
    case 0x7F1AFDECu: goto label_7F1AFDEC;
    case 0x7F1AFDF0u: goto label_7F1AFDF0;
    case 0x7F1AFDF4u: goto label_7F1AFDF4;
    case 0x7F1AFDF8u: goto label_7F1AFDF8;
    case 0x7F1AFDFCu: goto label_7F1AFDFC;
    case 0x7F1AFE00u: goto label_7F1AFE00;
    case 0x7F1AFE04u: goto label_7F1AFE04;
    case 0x7F1AFE08u: goto label_7F1AFE08;
    case 0x7F1AFE0Cu: goto label_7F1AFE0C;
    case 0x7F1AFE10u: goto label_7F1AFE10;
    case 0x7F1AFE14u: goto label_7F1AFE14;
    case 0x7F1AFE18u: goto label_7F1AFE18;
    case 0x7F1AFE1Cu: goto label_7F1AFE1C;
    case 0x7F1AFE20u: goto label_7F1AFE20;
    case 0x7F1AFE24u: goto label_7F1AFE24;
    case 0x7F1AFE28u: goto label_7F1AFE28;
    case 0x7F1AFE2Cu: goto label_7F1AFE2C;
    case 0x7F1AFE30u: goto label_7F1AFE30;
    case 0x7F1AFE34u: goto label_7F1AFE34;
    case 0x7F1AFE38u: goto label_7F1AFE38;
    case 0x7F1AFE3Cu: goto label_7F1AFE3C;
    case 0x7F1AFE40u: goto label_7F1AFE40;
    case 0x7F1AFE44u: goto label_7F1AFE44;
    case 0x7F1AFE48u: goto label_7F1AFE48;
    case 0x7F1AFE4Cu: goto label_7F1AFE4C;
    case 0x7F1AFE50u: goto label_7F1AFE50;
    case 0x7F1AFE54u: goto label_7F1AFE54;
    case 0x7F1AFE58u: goto label_7F1AFE58;
    case 0x7F1AFE5Cu: goto label_7F1AFE5C;
    case 0x7F1AFE60u: goto label_7F1AFE60;
    case 0x7F1AFE64u: goto label_7F1AFE64;
    case 0x7F1AFE68u: goto label_7F1AFE68;
    case 0x7F1AFE6Cu: goto label_7F1AFE6C;
    case 0x7F1AFE70u: goto label_7F1AFE70;
    case 0x7F1AFE74u: goto label_7F1AFE74;
    case 0x7F1AFE78u: goto label_7F1AFE78;
    case 0x7F1AFE7Cu: goto label_7F1AFE7C;
    case 0x7F1AFE80u: goto label_7F1AFE80;
    case 0x7F1AFE84u: goto label_7F1AFE84;
    case 0x7F1AFE88u: goto label_7F1AFE88;
    case 0x7F1AFE8Cu: goto label_7F1AFE8C;
    case 0x7F1AFE90u: goto label_7F1AFE90;
    case 0x7F1AFE94u: goto label_7F1AFE94;
    case 0x7F1AFE98u: goto label_7F1AFE98;
    case 0x7F1AFE9Cu: goto label_7F1AFE9C;
    case 0x7F1AFEA0u: goto label_7F1AFEA0;
    case 0x7F1AFEA4u: goto label_7F1AFEA4;
    case 0x7F1AFEA8u: goto label_7F1AFEA8;
    case 0x7F1AFEACu: goto label_7F1AFEAC;
    case 0x7F1AFEB0u: goto label_7F1AFEB0;
    case 0x7F1AFEB4u: goto label_7F1AFEB4;
    case 0x7F1AFEB8u: goto label_7F1AFEB8;
    case 0x7F1AFEBCu: goto label_7F1AFEBC;
    case 0x7F1AFEC0u: goto label_7F1AFEC0;
    case 0x7F1AFEC4u: goto label_7F1AFEC4;
    case 0x7F1AFEC8u: goto label_7F1AFEC8;
    case 0x7F1AFECCu: goto label_7F1AFECC;
    case 0x7F1AFED0u: goto label_7F1AFED0;
    case 0x7F1AFED4u: goto label_7F1AFED4;
    case 0x7F1AFED8u: goto label_7F1AFED8;
    case 0x7F1AFEDCu: goto label_7F1AFEDC;
    case 0x7F1AFEE0u: goto label_7F1AFEE0;
    case 0x7F1AFEE4u: goto label_7F1AFEE4;
    case 0x7F1AFEE8u: goto label_7F1AFEE8;
    case 0x7F1AFEECu: goto label_7F1AFEEC;
    case 0x7F1AFEF0u: goto label_7F1AFEF0;
    case 0x7F1AFEF4u: goto label_7F1AFEF4;
    case 0x7F1AFEF8u: goto label_7F1AFEF8;
    case 0x7F1AFEFCu: goto label_7F1AFEFC;
    case 0x7F1AFF00u: goto label_7F1AFF00;
    case 0x7F1AFF04u: goto label_7F1AFF04;
    case 0x7F1AFF08u: goto label_7F1AFF08;
    case 0x7F1AFF0Cu: goto label_7F1AFF0C;
    case 0x7F1AFF10u: goto label_7F1AFF10;
    case 0x7F1AFF14u: goto label_7F1AFF14;
    case 0x7F1AFF18u: goto label_7F1AFF18;
    case 0x7F1AFF1Cu: goto label_7F1AFF1C;
    case 0x7F1AFF20u: goto label_7F1AFF20;
    case 0x7F1AFF24u: goto label_7F1AFF24;
    case 0x7F1AFF28u: goto label_7F1AFF28;
    case 0x7F1AFF2Cu: goto label_7F1AFF2C;
    case 0x7F1AFF30u: goto label_7F1AFF30;
    case 0x7F1AFF34u: goto label_7F1AFF34;
    case 0x7F1AFF38u: goto label_7F1AFF38;
    case 0x7F1AFF3Cu: goto label_7F1AFF3C;
    case 0x7F1AFF40u: goto label_7F1AFF40;
    case 0x7F1AFF44u: goto label_7F1AFF44;
    case 0x7F1AFF48u: goto label_7F1AFF48;
    case 0x7F1AFF4Cu: goto label_7F1AFF4C;
    case 0x7F1AFF50u: goto label_7F1AFF50;
    case 0x7F1AFF54u: goto label_7F1AFF54;
    case 0x7F1AFF58u: goto label_7F1AFF58;
    case 0x7F1AFF5Cu: goto label_7F1AFF5C;
    case 0x7F1AFF60u: goto label_7F1AFF60;
    case 0x7F1AFF64u: goto label_7F1AFF64;
    case 0x7F1AFF68u: goto label_7F1AFF68;
    case 0x7F1AFF6Cu: goto label_7F1AFF6C;
    case 0x7F1AFF70u: goto label_7F1AFF70;
    case 0x7F1AFF74u: goto label_7F1AFF74;
    case 0x7F1AFF78u: goto label_7F1AFF78;
    case 0x7F1AFF7Cu: goto label_7F1AFF7C;
    case 0x7F1AFF80u: goto label_7F1AFF80;
    case 0x7F1AFF84u: goto label_7F1AFF84;
    case 0x7F1AFF88u: goto label_7F1AFF88;
    case 0x7F1AFF8Cu: goto label_7F1AFF8C;
    case 0x7F1AFF90u: goto label_7F1AFF90;
    case 0x7F1AFF94u: goto label_7F1AFF94;
    case 0x7F1AFF98u: goto label_7F1AFF98;
    case 0x7F1AFF9Cu: goto label_7F1AFF9C;
    case 0x7F1AFFA0u: goto label_7F1AFFA0;
    case 0x7F1AFFA4u: goto label_7F1AFFA4;
    case 0x7F1AFFA8u: goto label_7F1AFFA8;
    case 0x7F1AFFACu: goto label_7F1AFFAC;
    case 0x7F1AFFB0u: goto label_7F1AFFB0;
    case 0x7F1AFFB4u: goto label_7F1AFFB4;
    case 0x7F1AFFB8u: goto label_7F1AFFB8;
    case 0x7F1AFFBCu: goto label_7F1AFFBC;
    case 0x7F1AFFC0u: goto label_7F1AFFC0;
    case 0x7F1AFFC4u: goto label_7F1AFFC4;
    case 0x7F1AFFC8u: goto label_7F1AFFC8;
    case 0x7F1AFFCCu: goto label_7F1AFFCC;
    case 0x7F1AFFD0u: goto label_7F1AFFD0;
    case 0x7F1AFFD4u: goto label_7F1AFFD4;
    case 0x7F1AFFD8u: goto label_7F1AFFD8;
    case 0x7F1AFFDCu: goto label_7F1AFFDC;
    case 0x7F1AFFE0u: goto label_7F1AFFE0;
    case 0x7F1AFFE4u: goto label_7F1AFFE4;
    case 0x7F1AFFE8u: goto label_7F1AFFE8;
    case 0x7F1AFFECu: goto label_7F1AFFEC;
    case 0x7F1AFFF0u: goto label_7F1AFFF0;
    case 0x7F1AFFF4u: goto label_7F1AFFF4;
    case 0x7F1AFFF8u: goto label_7F1AFFF8;
    case 0x7F1AFFFCu: goto label_7F1AFFFC;
    case 0x7F1B0000u: goto label_7F1B0000;
    case 0x7F1B0004u: goto label_7F1B0004;
    case 0x7F1B0008u: goto label_7F1B0008;
    case 0x7F1B000Cu: goto label_7F1B000C;
    case 0x7F1B0010u: goto label_7F1B0010;
    case 0x7F1B0014u: goto label_7F1B0014;
    case 0x7F1B0018u: goto label_7F1B0018;
    case 0x7F1B001Cu: goto label_7F1B001C;
    case 0x7F1B0020u: goto label_7F1B0020;
    case 0x7F1B0024u: goto label_7F1B0024;
    case 0x7F1B0028u: goto label_7F1B0028;
    case 0x7F1B002Cu: goto label_7F1B002C;
    case 0x7F1B0030u: goto label_7F1B0030;
    case 0x7F1B0034u: goto label_7F1B0034;
    case 0x7F1B0038u: goto label_7F1B0038;
    case 0x7F1B003Cu: goto label_7F1B003C;
    case 0x7F1B0040u: goto label_7F1B0040;
    case 0x7F1B0044u: goto label_7F1B0044;
    case 0x7F1B0048u: goto label_7F1B0048;
    case 0x7F1B004Cu: goto label_7F1B004C;
    case 0x7F1B0050u: goto label_7F1B0050;
    case 0x7F1B0054u: goto label_7F1B0054;
    case 0x7F1B0058u: goto label_7F1B0058;
    case 0x7F1B005Cu: goto label_7F1B005C;
    case 0x7F1B0060u: goto label_7F1B0060;
    case 0x7F1B0064u: goto label_7F1B0064;
    case 0x7F1B0068u: goto label_7F1B0068;
    case 0x7F1B006Cu: goto label_7F1B006C;
    case 0x7F1B0070u: goto label_7F1B0070;
    case 0x7F1B0074u: goto label_7F1B0074;
    case 0x7F1B0078u: goto label_7F1B0078;
    case 0x7F1B007Cu: goto label_7F1B007C;
    case 0x7F1B0080u: goto label_7F1B0080;
    case 0x7F1B0084u: goto label_7F1B0084;
    case 0x7F1B0088u: goto label_7F1B0088;
    case 0x7F1B008Cu: goto label_7F1B008C;
    case 0x7F1B0090u: goto label_7F1B0090;
    case 0x7F1B0094u: goto label_7F1B0094;
    case 0x7F1B0098u: goto label_7F1B0098;
    case 0x7F1B009Cu: goto label_7F1B009C;
    case 0x7F1B00A0u: goto label_7F1B00A0;
    case 0x7F1B00A4u: goto label_7F1B00A4;
    case 0x7F1B00A8u: goto label_7F1B00A8;
    case 0x7F1B00ACu: goto label_7F1B00AC;
    case 0x7F1B00B0u: goto label_7F1B00B0;
    case 0x7F1B00B4u: goto label_7F1B00B4;
    case 0x7F1B00B8u: goto label_7F1B00B8;
    case 0x7F1B00BCu: goto label_7F1B00BC;
    case 0x7F1B00C0u: goto label_7F1B00C0;
    case 0x7F1B00C4u: goto label_7F1B00C4;
    case 0x7F1B00C8u: goto label_7F1B00C8;
    case 0x7F1B00CCu: goto label_7F1B00CC;
    case 0x7F1B00D0u: goto label_7F1B00D0;
    case 0x7F1B00D4u: goto label_7F1B00D4;
    case 0x7F1B00D8u: goto label_7F1B00D8;
    case 0x7F1B00DCu: goto label_7F1B00DC;
    case 0x7F1B00E0u: goto label_7F1B00E0;
    case 0x7F1B00E4u: goto label_7F1B00E4;
    case 0x7F1B00E8u: goto label_7F1B00E8;
    default: return;
    }
label_7F1AC0EC:
    ctx->pc = 0x7F1AC0ECu;
    ctx->downcount -= 4;
    // 7F1AC0EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC0F0:
    ctx->pc = 0x7F1AC0F0u;
    // 7F1AC0F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AC0F4:
    ctx->pc = 0x7F1AC0F4u;
    // 7F1AC0F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC0F8:
    ctx->pc = 0x7F1AC0F8u;
    ctx->downcount -= 18;
    // 7F1AC0F8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC0FC:
    ctx->pc = 0x7F1AC0FCu;
    // 7F1AC0FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC100:
    ctx->pc = 0x7F1AC100u;
    // 7F1AC100: cmpwi   r4, 2
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC104:
    ctx->pc = 0x7F1AC104u;
    // 7F1AC104: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC108:
    ctx->pc = 0x7F1AC108u;
    // 7F1AC108: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AC10C:
    ctx->pc = 0x7F1AC10Cu;
    // 7F1AC10C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC110:
    ctx->pc = 0x7F1AC110u;
    // 7F1AC110: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AC114:
    ctx->pc = 0x7F1AC114u;
    // 7F1AC114: bc    12, 2, 0x7F1AC254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC254;
        }
    }

label_7F1AC118:
    ctx->pc = 0x7F1AC118u;
    ctx->downcount -= 1;
    // 7F1AC118: bc    4, 0, 0x7F1AC12C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC12C;
        }
    }

label_7F1AC11C:
    ctx->pc = 0x7F1AC11Cu;
    ctx->downcount -= 2;
    // 7F1AC11C: cmpwi   r4, 0
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

label_7F1AC120:
    ctx->pc = 0x7F1AC120u;
    // 7F1AC120: bc    12, 2, 0x7F1AC140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC140;
        }
    }

label_7F1AC124:
    ctx->pc = 0x7F1AC124u;
    ctx->downcount -= 1;
    // 7F1AC124: bc    4, 0, 0x7F1AC1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC1DC;
        }
    }

label_7F1AC128:
    ctx->pc = 0x7F1AC128u;
    ctx->downcount -= 1;
    // 7F1AC128: b       0x7F1AC2DC
    {
            goto label_7F1AC2DC;
    }

label_7F1AC12C:
    ctx->pc = 0x7F1AC12Cu;
    ctx->downcount -= 4;
    // 7F1AC12C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1AC130:
    ctx->pc = 0x7F1AC130u;
    // 7F1AC130: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F1AC134:
    ctx->pc = 0x7F1AC134u;
    // 7F1AC134: cmpw    r4, r0
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

label_7F1AC138:
    ctx->pc = 0x7F1AC138u;
    // 7F1AC138: bc    12, 2, 0x7F1AC2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC2B4;
        }
    }

label_7F1AC13C:
    ctx->pc = 0x7F1AC13Cu;
    ctx->downcount -= 1;
    // 7F1AC13C: b       0x7F1AC2DC
    {
            goto label_7F1AC2DC;
    }

label_7F1AC140:
    ctx->pc = 0x7F1AC140u;
    ctx->downcount -= 37;
    // 7F1AC140: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC144:
    ctx->pc = 0x7F1AC144u;
    // 7F1AC144: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1AC148:
    ctx->pc = 0x7F1AC148u;
    // 7F1AC148: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AC14C:
    ctx->pc = 0x7F1AC14Cu;
    // 7F1AC14C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC150:
    ctx->pc = 0x7F1AC150u;
    // 7F1AC150: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC154:
    ctx->pc = 0x7F1AC154u;
    // 7F1AC154: lfd     f2, 6672(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC154u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6672);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC158:
    ctx->pc = 0x7F1AC158u;
    // 7F1AC158: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC15C:
    ctx->pc = 0x7F1AC15Cu;
    // 7F1AC15C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC160:
    ctx->pc = 0x7F1AC160u;
    // 7F1AC160: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC164:
    ctx->pc = 0x7F1AC164u;
    // 7F1AC164: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC168:
    ctx->pc = 0x7F1AC168u;
    // 7F1AC168: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC168u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AC16C:
    ctx->pc = 0x7F1AC16Cu;
    // 7F1AC16C: lfs     f0, 6688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC16Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC170:
    ctx->pc = 0x7F1AC170u;
    // 7F1AC170: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC174:
    ctx->pc = 0x7F1AC174u;
    // 7F1AC174: stfs     f1, 132(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC174u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC178:
    ctx->pc = 0x7F1AC178u;
    // 7F1AC178: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC17C:
    ctx->pc = 0x7F1AC17Cu;
    // 7F1AC17C: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC180:
    ctx->pc = 0x7F1AC180u;
    // 7F1AC180: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC184:
    ctx->pc = 0x7F1AC184u;
    // 7F1AC184: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC188:
    ctx->pc = 0x7F1AC188u;
    // 7F1AC188: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC18C:
    ctx->pc = 0x7F1AC18Cu;
    // 7F1AC18C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC18Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AC190:
    ctx->pc = 0x7F1AC190u;
    // 7F1AC190: stfs     f1, 136(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC190u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC194:
    ctx->pc = 0x7F1AC194u;
    // 7F1AC194: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC198:
    ctx->pc = 0x7F1AC198u;
    // 7F1AC198: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC19C:
    ctx->pc = 0x7F1AC19Cu;
    // 7F1AC19C: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC1A0:
    ctx->pc = 0x7F1AC1A0u;
    // 7F1AC1A0: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC1A4:
    ctx->pc = 0x7F1AC1A4u;
    // 7F1AC1A4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1A4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AC1A8:
    ctx->pc = 0x7F1AC1A8u;
    // 7F1AC1A8: stfs     f1, 140(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1A8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC1AC:
    ctx->pc = 0x7F1AC1ACu;
    // 7F1AC1AC: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC1B0:
    ctx->pc = 0x7F1AC1B0u;
    // 7F1AC1B0: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1AC1B4:
    ctx->pc = 0x7F1AC1B4u;
    // 7F1AC1B4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC1B8:
    ctx->pc = 0x7F1AC1B8u;
    // 7F1AC1B8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC1BC:
    ctx->pc = 0x7F1AC1BCu;
    // 7F1AC1BC: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC1C0:
    ctx->pc = 0x7F1AC1C0u;
    // 7F1AC1C0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1C0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AC1C4:
    ctx->pc = 0x7F1AC1C4u;
    // 7F1AC1C4: stfs     f1, 144(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC1C8:
    ctx->pc = 0x7F1AC1C8u;
    // 7F1AC1C8: lfs     f1, 144(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC1CC:
    ctx->pc = 0x7F1AC1CCu;
    // 7F1AC1CC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AC1D0:
    ctx->pc = 0x7F1AC1D0u;
    // 7F1AC1D0: bc    4, 1, 0x7F1AC2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC2EC;
        }
    }

label_7F1AC1D4:
    ctx->pc = 0x7F1AC1D4u;
    ctx->downcount -= 2;
    // 7F1AC1D4: stfs     f0, 144(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC1D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC1D8:
    ctx->pc = 0x7F1AC1D8u;
    // 7F1AC1D8: b       0x7F1AC2EC
    {
            goto label_7F1AC2EC;
    }

label_7F1AC1DC:
    ctx->pc = 0x7F1AC1DCu;
    ctx->downcount -= 21;
    // 7F1AC1DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AC1E0:
    ctx->pc = 0x7F1AC1E0u;
    // 7F1AC1E0: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC1E4:
    ctx->pc = 0x7F1AC1E4u;
    // 7F1AC1E4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC1E8:
    ctx->pc = 0x7F1AC1E8u;
    // 7F1AC1E8: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC1EC:
    ctx->pc = 0x7F1AC1ECu;
    // 7F1AC1EC: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1AC1F0:
    ctx->pc = 0x7F1AC1F0u;
    // 7F1AC1F0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC1F4:
    ctx->pc = 0x7F1AC1F4u;
    // 7F1AC1F4: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC1F8:
    ctx->pc = 0x7F1AC1F8u;
    // 7F1AC1F8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC1FC:
    ctx->pc = 0x7F1AC1FCu;
    // 7F1AC1FC: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC200:
    ctx->pc = 0x7F1AC200u;
    // 7F1AC200: rlwinm r0, r0, 8, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x0000FF00u;
    }

label_7F1AC204:
    ctx->pc = 0x7F1AC204u;
    // 7F1AC204: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC208:
    ctx->pc = 0x7F1AC208u;
    // 7F1AC208: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC20C:
    ctx->pc = 0x7F1AC20Cu;
    // 7F1AC20C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC210:
    ctx->pc = 0x7F1AC210u;
    // 7F1AC210: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC214:
    ctx->pc = 0x7F1AC214u;
    // 7F1AC214: rlwinm r0, r0, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00FF0000u;
    }

label_7F1AC218:
    ctx->pc = 0x7F1AC218u;
    // 7F1AC218: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC21C:
    ctx->pc = 0x7F1AC21Cu;
    // 7F1AC21C: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC220:
    ctx->pc = 0x7F1AC220u;
    // 7F1AC220: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC224:
    ctx->pc = 0x7F1AC224u;
    // 7F1AC224: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1AC228:
    ctx->pc = 0x7F1AC228u;
    // 7F1AC228: cmpwi   r0, 255
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC22C:
    ctx->pc = 0x7F1AC22Cu;
    // 7F1AC22C: bc    4, 1, 0x7F1AC240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC240;
        }
    }

label_7F1AC230:
    ctx->pc = 0x7F1AC230u;
    ctx->downcount -= 4;
    // 7F1AC230: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC234:
    ctx->pc = 0x7F1AC234u;
    // 7F1AC234: addis   r0, r3, -256
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-256) << 16);

label_7F1AC238:
    ctx->pc = 0x7F1AC238u;
    // 7F1AC238: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC23C:
    ctx->pc = 0x7F1AC23Cu;
    // 7F1AC23C: b       0x7F1AC2EC
    {
            goto label_7F1AC2EC;
    }

label_7F1AC240:
    ctx->pc = 0x7F1AC240u;
    ctx->downcount -= 5;
    // 7F1AC240: lwz     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC244:
    ctx->pc = 0x7F1AC244u;
    // 7F1AC244: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AC248:
    ctx->pc = 0x7F1AC248u;
    // 7F1AC248: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC24C:
    ctx->pc = 0x7F1AC24Cu;
    // 7F1AC24C: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC250:
    ctx->pc = 0x7F1AC250u;
    // 7F1AC250: b       0x7F1AC2EC
    {
            goto label_7F1AC2EC;
    }

label_7F1AC254:
    ctx->pc = 0x7F1AC254u;
    ctx->downcount -= 11;
    // 7F1AC254: lwz     r5, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AC258:
    ctx->pc = 0x7F1AC258u;
    // 7F1AC258: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1AC25C:
    ctx->pc = 0x7F1AC25Cu;
    // 7F1AC25C: lwz     r0, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC260:
    ctx->pc = 0x7F1AC260u;
    // 7F1AC260: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AC264:
    ctx->pc = 0x7F1AC264u;
    // 7F1AC264: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AC268:
    ctx->pc = 0x7F1AC268u;
    // 7F1AC268: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC26C:
    ctx->pc = 0x7F1AC26Cu;
    // 7F1AC26C: lwz     r5, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AC270:
    ctx->pc = 0x7F1AC270u;
    // 7F1AC270: lwz     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC274:
    ctx->pc = 0x7F1AC274u;
    // 7F1AC274: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AC278:
    ctx->pc = 0x7F1AC278u;
    // 7F1AC278: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC27C:
    ctx->pc = 0x7F1AC27Cu;
    // 7F1AC27C: bl      0x7F1AC080
    {
            ctx->lr = 0x7F1AC280u;
            ctx->pc = 0x7F1AC080u;
            return;
    }

label_7F1AC280:
    ctx->pc = 0x7F1AC280u;
    ctx->downcount -= 3;
    // 7F1AC280: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC284:
    ctx->pc = 0x7F1AC284u;
    // 7F1AC284: cmpwi   r0, 1
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

label_7F1AC288:
    ctx->pc = 0x7F1AC288u;
    // 7F1AC288: bc    4, 2, 0x7F1AC2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC2EC;
        }
    }

label_7F1AC28C:
    ctx->pc = 0x7F1AC28Cu;
    ctx->downcount -= 6;
    // 7F1AC28C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC290:
    ctx->pc = 0x7F1AC290u;
    // 7F1AC290: lwz     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC294:
    ctx->pc = 0x7F1AC294u;
    // 7F1AC294: addi    r5, r3, 6680
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6680);

label_7F1AC298:
    ctx->pc = 0x7F1AC298u;
    // 7F1AC298: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1AC29C:
    ctx->pc = 0x7F1AC29Cu;
    // 7F1AC29C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC29Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC2A0:
    ctx->pc = 0x7F1AC2A0u;
    // 7F1AC2A0: bl      0x7F407DBC
    {
            ctx->lr = 0x7F1AC2A4u;
            ctx->pc = 0x7F407DBCu;
            return;
    }

label_7F1AC2A4:
    ctx->pc = 0x7F1AC2A4u;
    ctx->downcount -= 3;
    // 7F1AC2A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC2A8:
    ctx->pc = 0x7F1AC2A8u;
    // 7F1AC2A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AC2AC:
    ctx->pc = 0x7F1AC2ACu;
    // 7F1AC2AC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1AC2B0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1AC2B0:
    ctx->pc = 0x7F1AC2B0u;
    ctx->downcount -= 1;
    // 7F1AC2B0: b       0x7F1AC2EC
    {
            goto label_7F1AC2EC;
    }

label_7F1AC2B4:
    ctx->pc = 0x7F1AC2B4u;
    ctx->downcount -= 5;
    // 7F1AC2B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AC2B8:
    ctx->pc = 0x7F1AC2B8u;
    // 7F1AC2B8: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1AC2BC:
    ctx->pc = 0x7F1AC2BCu;
    // 7F1AC2BC: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F1AC2C0:
    ctx->pc = 0x7F1AC2C0u;
    // 7F1AC2C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AC2C4:
    loop_7F1AC2C4(ctx);
    if (ctx->pc == 0x7F1AC2D8u) goto label_7F1AC2D8;
    return;
label_7F1AC2C8:
    ctx->pc = 0x7F1AC2C8u;
    // 7F1AC2C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AC2CC:
    ctx->pc = 0x7F1AC2CCu;
    // 7F1AC2CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC2D0:
    ctx->pc = 0x7F1AC2D0u;
    // 7F1AC2D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AC2D4:
    // 7F1AC2D4: bc    16, 0, 0x7F1AC2C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC2C4u;
                return;
            }
            goto label_7F1AC2C4;
        }
    }

label_7F1AC2D8:
    ctx->pc = 0x7F1AC2D8u;
    ctx->downcount -= 1;
    // 7F1AC2D8: b       0x7F1AC2EC
    {
            goto label_7F1AC2EC;
    }

label_7F1AC2DC:
    ctx->pc = 0x7F1AC2DCu;
    ctx->downcount -= 3;
    // 7F1AC2DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AC2E0:
    ctx->pc = 0x7F1AC2E0u;
    // 7F1AC2E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC2E4:
    ctx->pc = 0x7F1AC2E4u;
    // 7F1AC2E4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AC2E8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AC2E8:
    ctx->pc = 0x7F1AC2E8u;
    ctx->downcount -= 1;
    // 7F1AC2E8: b       0x7F1AC2F0
    {
            goto label_7F1AC2F0;
    }

label_7F1AC2EC:
    ctx->pc = 0x7F1AC2ECu;
    ctx->downcount -= 1;
    // 7F1AC2EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AC2F0:
    ctx->pc = 0x7F1AC2F0u;
    ctx->downcount -= 16;
    // 7F1AC2F0: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AC2F4:
    ctx->pc = 0x7F1AC2F4u;
    // 7F1AC2F4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC2F8:
    ctx->pc = 0x7F1AC2F8u;
    // 7F1AC2F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC2FC:
    ctx->pc = 0x7F1AC2FCu;
    // 7F1AC2FC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1AC300:
    ctx->pc = 0x7F1AC300u;
    // 7F1AC300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC304:
    ctx->pc = 0x7F1AC304u;
    ctx->downcount -= 21;
    // 7F1AC304: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC308:
    ctx->pc = 0x7F1AC308u;
    // 7F1AC308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC30C:
    ctx->pc = 0x7F1AC30Cu;
    // 7F1AC30C: li      r5, 152
    ctx->gpr[5] = (u32)(s32)(152);

label_7F1AC310:
    ctx->pc = 0x7F1AC310u;
    // 7F1AC310: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AC314:
    ctx->pc = 0x7F1AC314u;
    // 7F1AC314: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC318:
    ctx->pc = 0x7F1AC318u;
    // 7F1AC318: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AC31C:
    ctx->pc = 0x7F1AC31Cu;
    // 7F1AC31C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC320:
    ctx->pc = 0x7F1AC320u;
    // 7F1AC320: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AC324:
    ctx->pc = 0x7F1AC324u;
    // 7F1AC324: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1AC328:
    ctx->pc = 0x7F1AC328u;
    // 7F1AC328: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AC32C:
    ctx->pc = 0x7F1AC32Cu;
    // 7F1AC32C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AC330u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AC330:
    ctx->pc = 0x7F1AC330u;
    ctx->downcount -= 2;
    // 7F1AC330: or.   r31, r3, r3
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

label_7F1AC334:
    ctx->pc = 0x7F1AC334u;
    // 7F1AC334: bc    12, 2, 0x7F1AC468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC468;
        }
    }

label_7F1AC338:
    ctx->pc = 0x7F1AC338u;
    ctx->downcount -= 5;
    // 7F1AC338: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AC33C:
    ctx->pc = 0x7F1AC33Cu;
    // 7F1AC33C: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AC340:
    ctx->pc = 0x7F1AC340u;
    // 7F1AC340: addi    r4, r4, -16272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16272);

label_7F1AC344:
    ctx->pc = 0x7F1AC344u;
    // 7F1AC344: addi    r5, r5, -16268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16268);

label_7F1AC348:
    ctx->pc = 0x7F1AC348u;
    // 7F1AC348: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AC34Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AC34C:
    ctx->pc = 0x7F1AC34Cu;
    ctx->downcount -= 15;
    // 7F1AC34C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC350:
    ctx->pc = 0x7F1AC350u;
    // 7F1AC350: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1AC354:
    ctx->pc = 0x7F1AC354u;
    // 7F1AC354: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AC358:
    ctx->pc = 0x7F1AC358u;
    // 7F1AC358: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AC35C:
    ctx->pc = 0x7F1AC35Cu;
    // 7F1AC35C: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1AC360:
    ctx->pc = 0x7F1AC360u;
    // 7F1AC360: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1AC364:
    ctx->pc = 0x7F1AC364u;
    // 7F1AC364: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC368:
    ctx->pc = 0x7F1AC368u;
    // 7F1AC368: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F1AC36C:
    ctx->pc = 0x7F1AC36Cu;
    // 7F1AC36C: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F1AC370:
    ctx->pc = 0x7F1AC370u;
    // 7F1AC370: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AC374:
    ctx->pc = 0x7F1AC374u;
    // 7F1AC374: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AC378:
    ctx->pc = 0x7F1AC378u;
    // 7F1AC378: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AC37C:
    ctx->pc = 0x7F1AC37Cu;
    // 7F1AC37C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC380:
    ctx->pc = 0x7F1AC380u;
    // 7F1AC380: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AC384:
    loop_7F1AC384(ctx);
    if (ctx->pc == 0x7F1AC398u) goto label_7F1AC398;
    return;
label_7F1AC388:
    ctx->pc = 0x7F1AC388u;
    // 7F1AC388: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AC38C:
    ctx->pc = 0x7F1AC38Cu;
    // 7F1AC38C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC390:
    ctx->pc = 0x7F1AC390u;
    // 7F1AC390: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AC394:
    // 7F1AC394: bc    16, 0, 0x7F1AC384
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC384u;
                return;
            }
            goto label_7F1AC384;
        }
    }

label_7F1AC398:
    ctx->pc = 0x7F1AC398u;
    ctx->downcount -= 5;
    // 7F1AC398: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AC39C:
    ctx->pc = 0x7F1AC39Cu;
    // 7F1AC39C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1AC3A0:
    ctx->pc = 0x7F1AC3A0u;
    // 7F1AC3A0: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F1AC3A4:
    ctx->pc = 0x7F1AC3A4u;
    // 7F1AC3A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AC3A8:
    loop_7F1AC3A8(ctx);
    if (ctx->pc == 0x7F1AC3BCu) goto label_7F1AC3BC;
    return;
label_7F1AC3AC:
    ctx->pc = 0x7F1AC3ACu;
    // 7F1AC3AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AC3B0:
    ctx->pc = 0x7F1AC3B0u;
    // 7F1AC3B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC3B4:
    ctx->pc = 0x7F1AC3B4u;
    // 7F1AC3B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AC3B8:
    // 7F1AC3B8: bc    16, 0, 0x7F1AC3A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC3A8u;
                return;
            }
            goto label_7F1AC3A8;
        }
    }

label_7F1AC3BC:
    ctx->pc = 0x7F1AC3BCu;
    ctx->downcount -= 10;
    // 7F1AC3BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC3C0:
    ctx->pc = 0x7F1AC3C0u;
    // 7F1AC3C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC3C4:
    ctx->pc = 0x7F1AC3C4u;
    // 7F1AC3C4: lfs     f2, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AC3C8:
    ctx->pc = 0x7F1AC3C8u;
    // 7F1AC3C8: lfs     f1, 6692(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6692);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC3CC:
    ctx->pc = 0x7F1AC3CCu;
    // 7F1AC3CC: lfs     f0, 6688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC3D0:
    ctx->pc = 0x7F1AC3D0u;
    // 7F1AC3D0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3D0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1AC3D4:
    ctx->pc = 0x7F1AC3D4u;
    // 7F1AC3D4: stfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC3D8:
    ctx->pc = 0x7F1AC3D8u;
    // 7F1AC3D8: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC3DC:
    ctx->pc = 0x7F1AC3DCu;
    // 7F1AC3DC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AC3E0:
    ctx->pc = 0x7F1AC3E0u;
    // 7F1AC3E0: bc    4, 1, 0x7F1AC3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC3E8;
        }
    }

label_7F1AC3E4:
    ctx->pc = 0x7F1AC3E4u;
    ctx->downcount -= 1;
    // 7F1AC3E4: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC3E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC3E8:
    ctx->pc = 0x7F1AC3E8u;
    ctx->downcount -= 22;
    // 7F1AC3E8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC3EC:
    ctx->pc = 0x7F1AC3ECu;
    // 7F1AC3EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC3F0:
    ctx->pc = 0x7F1AC3F0u;
    // 7F1AC3F0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC3F4:
    ctx->pc = 0x7F1AC3F4u;
    // 7F1AC3F4: stw     r4, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC3F8:
    ctx->pc = 0x7F1AC3F8u;
    // 7F1AC3F8: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC3FC:
    ctx->pc = 0x7F1AC3FCu;
    // 7F1AC3FC: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC400:
    ctx->pc = 0x7F1AC400u;
    // 7F1AC400: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC404:
    ctx->pc = 0x7F1AC404u;
    // 7F1AC404: stw     r4, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC408:
    ctx->pc = 0x7F1AC408u;
    // 7F1AC408: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC40C:
    ctx->pc = 0x7F1AC40Cu;
    // 7F1AC40C: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC410:
    ctx->pc = 0x7F1AC410u;
    // 7F1AC410: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F1AC414:
    ctx->pc = 0x7F1AC414u;
    // 7F1AC414: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC418:
    ctx->pc = 0x7F1AC418u;
    // 7F1AC418: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC41C:
    ctx->pc = 0x7F1AC41Cu;
    // 7F1AC41C: addi    r0, r4, 16384
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16384);

label_7F1AC420:
    ctx->pc = 0x7F1AC420u;
    // 7F1AC420: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC424:
    ctx->pc = 0x7F1AC424u;
    // 7F1AC424: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC428:
    ctx->pc = 0x7F1AC428u;
    // 7F1AC428: addis   r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(64) << 16);

label_7F1AC42C:
    ctx->pc = 0x7F1AC42Cu;
    // 7F1AC42C: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC430:
    ctx->pc = 0x7F1AC430u;
    // 7F1AC430: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC434:
    ctx->pc = 0x7F1AC434u;
    // 7F1AC434: addis   r0, r4, 8192
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(8192) << 16);

label_7F1AC438:
    ctx->pc = 0x7F1AC438u;
    // 7F1AC438: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC43C:
    ctx->pc = 0x7F1AC43Cu;
    // 7F1AC43C: bl      0x7F1AC078
    {
            ctx->lr = 0x7F1AC440u;
            ctx->pc = 0x7F1AC078u;
            return;
    }

label_7F1AC440:
    ctx->pc = 0x7F1AC440u;
    ctx->downcount -= 2;
    // 7F1AC440: cmpwi   r3, 0
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

label_7F1AC444:
    ctx->pc = 0x7F1AC444u;
    // 7F1AC444: bc    4, 0, 0x7F1AC458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC458;
        }
    }

label_7F1AC448:
    ctx->pc = 0x7F1AC448u;
    ctx->downcount -= 2;
    // 7F1AC448: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC44C:
    ctx->pc = 0x7F1AC44Cu;
    // 7F1AC44C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AC450u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AC450:
    ctx->pc = 0x7F1AC450u;
    ctx->downcount -= 2;
    // 7F1AC450: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AC454:
    ctx->pc = 0x7F1AC454u;
    // 7F1AC454: b       0x7F1AC46C
    {
            goto label_7F1AC46C;
    }

label_7F1AC458:
    ctx->pc = 0x7F1AC458u;
    ctx->downcount -= 4;
    // 7F1AC458: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AC45C:
    ctx->pc = 0x7F1AC45Cu;
    // 7F1AC45C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC460:
    ctx->pc = 0x7F1AC460u;
    // 7F1AC460: addi    r4, r4, -16136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16136);

label_7F1AC464:
    ctx->pc = 0x7F1AC464u;
    // 7F1AC464: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1AC468u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1AC468:
    ctx->pc = 0x7F1AC468u;
    ctx->downcount -= 1;
    // 7F1AC468: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC46C:
    ctx->pc = 0x7F1AC46Cu;
    ctx->downcount -= 16;
    // 7F1AC46C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AC470:
    ctx->pc = 0x7F1AC470u;
    // 7F1AC470: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC474:
    ctx->pc = 0x7F1AC474u;
    // 7F1AC474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC478:
    ctx->pc = 0x7F1AC478u;
    // 7F1AC478: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AC47C:
    ctx->pc = 0x7F1AC47Cu;
    // 7F1AC47C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC480:
    ctx->pc = 0x7F1AC480u;
    ctx->downcount -= 7;
    // 7F1AC480: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC484:
    ctx->pc = 0x7F1AC484u;
    // 7F1AC484: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1AC488:
    ctx->pc = 0x7F1AC488u;
    // 7F1AC488: lfs     f0, 6696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC488u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC48C:
    ctx->pc = 0x7F1AC48Cu;
    // 7F1AC48C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1AC490:
    ctx->pc = 0x7F1AC490u;
    // 7F1AC490: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AC494:
    ctx->pc = 0x7F1AC494u;
    // 7F1AC494: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1AC498:
    ctx->pc = 0x7F1AC498u;
    // 7F1AC498: b       0x7F1AC4C0
    {
            goto label_7F1AC4C0;
    }

label_7F1AC49C:
    ctx->pc = 0x7F1AC49Cu;
    ctx->downcount -= 9;
    // 7F1AC49C: lwz     r8, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AC4A0:
    // 7F1AC4A0: addi    r6, r5, 72
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(72);

label_7F1AC4A4:
    // 7F1AC4A4: addi    r0, r4, 160
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(160);

label_7F1AC4A8:
    // 7F1AC4A8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F1AC4AC:
    ctx->pc = 0x7F1AC4ACu;
    // 7F1AC4AC: stfsx    f0, r8, r6
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4ACu)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[6];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC4B0:
    // 7F1AC4B0: addi    r4, r4, 80
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(80);

label_7F1AC4B4:
    // 7F1AC4B4: addi    r5, r5, 84
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(84);

label_7F1AC4B8:
    ctx->pc = 0x7F1AC4B8u;
    // 7F1AC4B8: lwz     r6, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AC4BC:
    ctx->pc = 0x7F1AC4BCu;
    // 7F1AC4BC: stwx    r7, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AC4C0:
    ctx->pc = 0x7F1AC4C0u;
    ctx->downcount -= 3;
    // 7F1AC4C0: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC4C4:
    // 7F1AC4C4: cmpw    r9, r0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC4C8:
    // 7F1AC4C8: bc    12, 0, 0x7F1AC49C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC49Cu;
                return;
            }
            goto label_7F1AC49C;
        }
    }

label_7F1AC4CC:
    ctx->pc = 0x7F1AC4CCu;
    ctx->downcount -= 1;
    // 7F1AC4CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC4D0:
    ctx->pc = 0x7F1AC4D0u;
    ctx->downcount -= 25;
    // 7F1AC4D0: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC4D4:
    ctx->pc = 0x7F1AC4D4u;
    // 7F1AC4D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC4D8:
    ctx->pc = 0x7F1AC4D8u;
    // 7F1AC4D8: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC4DC:
    ctx->pc = 0x7F1AC4DCu;
    // 7F1AC4DC: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1AC4E0:
    ctx->pc = 0x7F1AC4E0u;
    // 7F1AC4E0: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AC4E0u);
        if (ctx->exception) return;
    }

label_7F1AC4E4:
    ctx->pc = 0x7F1AC4E4u;
    // 7F1AC4E4: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1AC4E8:
    ctx->pc = 0x7F1AC4E8u;
    // 7F1AC4E8: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AC4E8u);
        if (ctx->exception) return;
    }

label_7F1AC4EC:
    ctx->pc = 0x7F1AC4ECu;
    // 7F1AC4EC: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AC4F0:
    ctx->pc = 0x7F1AC4F0u;
    // 7F1AC4F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC4F4:
    ctx->pc = 0x7F1AC4F4u;
    // 7F1AC4F4: lwz     r29, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1AC4F8:
    ctx->pc = 0x7F1AC4F8u;
    // 7F1AC4F8: lfs     f31, 6696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC4F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1AC4FC:
    ctx->pc = 0x7F1AC4FCu;
    // 7F1AC4FC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC500:
    ctx->pc = 0x7F1AC500u;
    // 7F1AC500: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1AC504:
    ctx->pc = 0x7F1AC504u;
    // 7F1AC504: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1AC508:
    ctx->pc = 0x7F1AC508u;
    // 7F1AC508: b       0x7F1AC7C8
    {
            goto label_7F1AC7C8;
    }

label_7F1AC50C:
    ctx->pc = 0x7F1AC50Cu;
    ctx->downcount -= 3;
    // 7F1AC50C: lfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC50Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC510:
    ctx->pc = 0x7F1AC510u;
    // 7F1AC510: fcmpu   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC510u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], false);

label_7F1AC514:
    // 7F1AC514: bc    12, 2, 0x7F1AC520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC520;
        }
    }

label_7F1AC518:
    ctx->downcount -= 2;
    // 7F1AC518: addi    r29, r29, 84
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(84);

label_7F1AC51C:
    // 7F1AC51C: b       0x7F1AC7C4
    {
            goto label_7F1AC7C4;
    }

label_7F1AC520:
    ctx->downcount -= 1;
    // 7F1AC520: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC524u;
            goto label_7F1AC874;
    }

label_7F1AC524:
    ctx->downcount -= 8;
    // 7F1AC524: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC528:
    ctx->pc = 0x7F1AC528u;
    // 7F1AC528: lfs     f0, 6700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC528u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC52C:
    ctx->pc = 0x7F1AC52Cu;
    // 7F1AC52C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC52Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC530:
    ctx->pc = 0x7F1AC530u;
    // 7F1AC530: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC530u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AC534:
    ctx->pc = 0x7F1AC534u;
    // 7F1AC534: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AC538:
    ctx->pc = 0x7F1AC538u;
    // 7F1AC538: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC53C:
    ctx->pc = 0x7F1AC53Cu;
    // 7F1AC53C: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC540:
    // 7F1AC540: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC544u;
            goto label_7F1AC874;
    }

label_7F1AC544:
    ctx->downcount -= 8;
    // 7F1AC544: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC548:
    ctx->pc = 0x7F1AC548u;
    // 7F1AC548: lfs     f0, 6700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC548u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC54C:
    ctx->pc = 0x7F1AC54Cu;
    // 7F1AC54C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC54Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC550:
    ctx->pc = 0x7F1AC550u;
    // 7F1AC550: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC550u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AC554:
    ctx->pc = 0x7F1AC554u;
    // 7F1AC554: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC554u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AC558:
    ctx->pc = 0x7F1AC558u;
    // 7F1AC558: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC55C:
    ctx->pc = 0x7F1AC55Cu;
    // 7F1AC55C: sth     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC560:
    // 7F1AC560: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC564u;
            goto label_7F1AC874;
    }

label_7F1AC564:
    ctx->downcount -= 9;
    // 7F1AC564: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC568:
    ctx->pc = 0x7F1AC568u;
    // 7F1AC568: lfs     f0, 6700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC568u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC56C:
    ctx->pc = 0x7F1AC56Cu;
    // 7F1AC56C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC56Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC570:
    ctx->pc = 0x7F1AC570u;
    // 7F1AC570: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC570u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AC574:
    ctx->pc = 0x7F1AC574u;
    // 7F1AC574: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AC578:
    ctx->pc = 0x7F1AC578u;
    // 7F1AC578: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC57C:
    ctx->pc = 0x7F1AC57Cu;
    // 7F1AC57C: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC580:
    ctx->pc = 0x7F1AC580u;
    // 7F1AC580: lfs     f30, 124(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC580u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC584:
    // 7F1AC584: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC588u;
            goto label_7F1AC874;
    }

label_7F1AC588:
    ctx->pc = 0x7F1AC588u;
    ctx->downcount -= 6;
    // 7F1AC588: lfs     f0, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC588u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC58C:
    ctx->pc = 0x7F1AC58Cu;
    // 7F1AC58C: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC58Cu)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F1AC590:
    ctx->pc = 0x7F1AC590u;
    // 7F1AC590: fmadds f0, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC590u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AC594:
    ctx->pc = 0x7F1AC594u;
    // 7F1AC594: stfs     f0, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC594u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC598:
    ctx->pc = 0x7F1AC598u;
    // 7F1AC598: lfs     f30, 124(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC598u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC59C:
    // 7F1AC59C: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC5A0u;
            goto label_7F1AC874;
    }

label_7F1AC5A0:
    ctx->pc = 0x7F1AC5A0u;
    ctx->downcount -= 6;
    // 7F1AC5A0: lfs     f0, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5A0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC5A4:
    ctx->pc = 0x7F1AC5A4u;
    // 7F1AC5A4: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5A4u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F1AC5A8:
    ctx->pc = 0x7F1AC5A8u;
    // 7F1AC5A8: fmadds f0, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5A8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AC5AC:
    ctx->pc = 0x7F1AC5ACu;
    // 7F1AC5AC: stfs     f0, 28(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC5B0:
    ctx->pc = 0x7F1AC5B0u;
    // 7F1AC5B0: lfs     f30, 124(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5B0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC5B4:
    // 7F1AC5B4: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC5B8u;
            goto label_7F1AC874;
    }

label_7F1AC5B8:
    ctx->pc = 0x7F1AC5B8u;
    ctx->downcount -= 9;
    // 7F1AC5B8: lfs     f0, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5B8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC5BC:
    // 7F1AC5BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC5C0:
    ctx->pc = 0x7F1AC5C0u;
    // 7F1AC5C0: fsubs   f2, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5C0u)) return;
    ppc_fsubs(ctx, 2, 0, 30);

label_7F1AC5C4:
    ctx->pc = 0x7F1AC5C4u;
    // 7F1AC5C4: lfs     f0, 6712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC5C8:
    ctx->pc = 0x7F1AC5C8u;
    // 7F1AC5C8: fmadds f1, f2, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5C8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1AC5CC:
    ctx->pc = 0x7F1AC5CCu;
    // 7F1AC5CC: stfs     f1, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5CCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC5D0:
    ctx->pc = 0x7F1AC5D0u;
    // 7F1AC5D0: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC5D4:
    ctx->pc = 0x7F1AC5D4u;
    // 7F1AC5D4: lfs     f30, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5D4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC5D8:
    // 7F1AC5D8: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC5DCu;
            goto label_7F1AC874;
    }

label_7F1AC5DC:
    ctx->pc = 0x7F1AC5DCu;
    ctx->downcount -= 7;
    // 7F1AC5DC: lfs     f0, 136(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5DCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC5E0:
    // 7F1AC5E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AC5E4:
    ctx->pc = 0x7F1AC5E4u;
    // 7F1AC5E4: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5E4u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F1AC5E8:
    ctx->pc = 0x7F1AC5E8u;
    // 7F1AC5E8: fmadds f0, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5E8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AC5EC:
    ctx->pc = 0x7F1AC5ECu;
    // 7F1AC5EC: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC5ECu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC5F0:
    ctx->pc = 0x7F1AC5F0u;
    // 7F1AC5F0: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC5F4:
    // 7F1AC5F4: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC5F8u;
            goto label_7F1AC874;
    }

label_7F1AC5F8:
    ctx->pc = 0x7F1AC5F8u;
    ctx->downcount -= 12;
    // 7F1AC5F8: lwz     r4, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC5FC:
    // 7F1AC5FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC600:
    ctx->pc = 0x7F1AC600u;
    // 7F1AC600: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC604:
    // 7F1AC604: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC608:
    // 7F1AC608: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AC60C:
    ctx->pc = 0x7F1AC60Cu;
    // 7F1AC60C: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC60Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC610:
    ctx->pc = 0x7F1AC610u;
    // 7F1AC610: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC614:
    ctx->pc = 0x7F1AC614u;
    // 7F1AC614: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC618:
    ctx->pc = 0x7F1AC618u;
    // 7F1AC618: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC618u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AC61C:
    ctx->pc = 0x7F1AC61Cu;
    // 7F1AC61C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC61Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC620:
    ctx->pc = 0x7F1AC620u;
    // 7F1AC620: stfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC620u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC624:
    // 7F1AC624: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC628u;
            goto label_7F1AC874;
    }

label_7F1AC628:
    ctx->pc = 0x7F1AC628u;
    ctx->downcount -= 12;
    // 7F1AC628: lwz     r4, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC62C:
    // 7F1AC62C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC630:
    ctx->pc = 0x7F1AC630u;
    // 7F1AC630: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC634:
    // 7F1AC634: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC638:
    // 7F1AC638: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AC63C:
    ctx->pc = 0x7F1AC63Cu;
    // 7F1AC63C: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC63Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC640:
    ctx->pc = 0x7F1AC640u;
    // 7F1AC640: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC644:
    ctx->pc = 0x7F1AC644u;
    // 7F1AC644: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC648:
    ctx->pc = 0x7F1AC648u;
    // 7F1AC648: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC648u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AC64C:
    ctx->pc = 0x7F1AC64Cu;
    // 7F1AC64C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC64Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC650:
    ctx->pc = 0x7F1AC650u;
    // 7F1AC650: stfs     f0, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC650u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC654:
    // 7F1AC654: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC658u;
            goto label_7F1AC874;
    }

label_7F1AC658:
    ctx->pc = 0x7F1AC658u;
    ctx->downcount -= 12;
    // 7F1AC658: lwz     r4, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC65C:
    // 7F1AC65C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC660:
    ctx->pc = 0x7F1AC660u;
    // 7F1AC660: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC664:
    // 7F1AC664: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC668:
    // 7F1AC668: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AC66C:
    ctx->pc = 0x7F1AC66Cu;
    // 7F1AC66C: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC66Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC670:
    ctx->pc = 0x7F1AC670u;
    // 7F1AC670: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC674:
    ctx->pc = 0x7F1AC674u;
    // 7F1AC674: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC678:
    ctx->pc = 0x7F1AC678u;
    // 7F1AC678: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC678u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AC67C:
    ctx->pc = 0x7F1AC67Cu;
    // 7F1AC67C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC67Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC680:
    ctx->pc = 0x7F1AC680u;
    // 7F1AC680: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC680u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC684:
    // 7F1AC684: bl      0x7F1AC81C
    {
            ctx->lr = 0x7F1AC688u;
            goto label_7F1AC81C;
    }

label_7F1AC688:
    ctx->pc = 0x7F1AC688u;
    ctx->downcount -= 4;
    // 7F1AC688: lfs     f0, 216(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC688u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC68C:
    ctx->pc = 0x7F1AC68Cu;
    // 7F1AC68C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC68Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC690:
    ctx->pc = 0x7F1AC690u;
    // 7F1AC690: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC694:
    // 7F1AC694: bl      0x7F1AC81C
    {
            ctx->lr = 0x7F1AC698u;
            goto label_7F1AC81C;
    }

label_7F1AC698:
    ctx->pc = 0x7F1AC698u;
    ctx->downcount -= 4;
    // 7F1AC698: lfs     f0, 220(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC698u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC69C:
    ctx->pc = 0x7F1AC69Cu;
    // 7F1AC69C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC69Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AC6A0:
    ctx->pc = 0x7F1AC6A0u;
    // 7F1AC6A0: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC6A4:
    // 7F1AC6A4: bl      0x7F1AC81C
    {
            ctx->lr = 0x7F1AC6A8u;
            goto label_7F1AC81C;
    }

label_7F1AC6A8:
    ctx->pc = 0x7F1AC6A8u;
    ctx->downcount -= 10;
    // 7F1AC6A8: lfs     f0, 224(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6A8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC6AC:
    // 7F1AC6AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC6B0:
    // 7F1AC6B0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AC6B4:
    // 7F1AC6B4: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AC6B8:
    ctx->pc = 0x7F1AC6B8u;
    // 7F1AC6B8: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6B8u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F1AC6BC:
    ctx->pc = 0x7F1AC6BCu;
    // 7F1AC6BC: lfs     f0, 6712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC6C0:
    // 7F1AC6C0: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_7F1AC6C4:
    ctx->pc = 0x7F1AC6C4u;
    // 7F1AC6C4: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC6C8:
    ctx->pc = 0x7F1AC6C8u;
    // 7F1AC6C8: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC6CC:
    // 7F1AC6CC: bl      0x800261B4
    {
            ctx->lr = 0x7F1AC6D0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1AC6D0:
    ctx->downcount -= 4;
    // 7F1AC6D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC6D4:
    ctx->pc = 0x7F1AC6D4u;
    // 7F1AC6D4: lfs     f0, 6712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC6D8:
    ctx->pc = 0x7F1AC6D8u;
    // 7F1AC6D8: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC6D8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC6DC:
    // 7F1AC6DC: bl      0x7F1AC7F8
    {
            ctx->lr = 0x7F1AC6E0u;
            goto label_7F1AC7F8;
    }

label_7F1AC6E0:
    ctx->pc = 0x7F1AC6E0u;
    ctx->downcount -= 53;
    // 7F1AC6E0: lwz     r5, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AC6E4:
    ctx->pc = 0x7F1AC6E4u;
    // 7F1AC6E4: lwz     r0, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC6E8:
    // 7F1AC6E8: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1AC6EC:
    // 7F1AC6EC: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F1AC6F0:
    // 7F1AC6F0: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1AC6F4:
    // 7F1AC6F4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC6F8:
    // 7F1AC6F8: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1AC6FC:
    ctx->pc = 0x7F1AC6FCu;
    // 7F1AC6FC: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC700:
    // 7F1AC700: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC704:
    // 7F1AC704: bc    12, 0, 0x7F1AC710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC710;
        }
    }

label_7F1AC708:
    ctx->downcount -= 2;
    // 7F1AC708: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F1AC70C:
    ctx->pc = 0x7F1AC70Cu;
    // 7F1AC70C: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC710:
    ctx->downcount -= 1;
    // 7F1AC710: bl      0x7F1AC7F8
    {
            ctx->lr = 0x7F1AC714u;
            goto label_7F1AC7F8;
    }

label_7F1AC714:
    ctx->pc = 0x7F1AC714u;
    ctx->downcount -= 53;
    // 7F1AC714: lwz     r5, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AC718:
    ctx->pc = 0x7F1AC718u;
    // 7F1AC718: lwz     r0, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC71C:
    // 7F1AC71C: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1AC720:
    // 7F1AC720: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F1AC724:
    // 7F1AC724: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1AC728:
    // 7F1AC728: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC72C:
    // 7F1AC72C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1AC730:
    ctx->pc = 0x7F1AC730u;
    // 7F1AC730: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC734:
    // 7F1AC734: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC738:
    // 7F1AC738: bc    12, 0, 0x7F1AC744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC744;
        }
    }

label_7F1AC73C:
    ctx->downcount -= 2;
    // 7F1AC73C: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F1AC740:
    ctx->pc = 0x7F1AC740u;
    // 7F1AC740: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC744:
    ctx->downcount -= 4;
    // 7F1AC744: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AC748:
    // 7F1AC748: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F1AC74C:
    ctx->pc = 0x7F1AC74Cu;
    // 7F1AC74C: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC750:
    // 7F1AC750: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1AC754u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1AC754:
    ctx->downcount -= 2;
    // 7F1AC754: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AC758:
    // 7F1AC758: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F1AC75Cu;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F1AC75C:
    ctx->downcount -= 6;
    // 7F1AC75C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC760:
    ctx->pc = 0x7F1AC760u;
    // 7F1AC760: lfs     f0, 6696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC760u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC764:
    ctx->pc = 0x7F1AC764u;
    // 7F1AC764: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC764u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC768:
    ctx->pc = 0x7F1AC768u;
    // 7F1AC768: stfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC768u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC76C:
    ctx->pc = 0x7F1AC76Cu;
    // 7F1AC76C: lfs     f30, 140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC76Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC770:
    // 7F1AC770: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1AC774u;
            goto label_7F1AC874;
    }

label_7F1AC774:
    ctx->pc = 0x7F1AC774u;
    ctx->downcount -= 12;
    // 7F1AC774: lfs     f0, 144(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC774u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC778:
    // 7F1AC778: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC77C:
    // 7F1AC77C: addi    r4, r3, 6696
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6696);

label_7F1AC780:
    // 7F1AC780: addi    r3, r29, 40
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(40);

label_7F1AC784:
    ctx->pc = 0x7F1AC784u;
    // 7F1AC784: fsubs   f2, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC784u)) return;
    ppc_fsubs(ctx, 2, 0, 30);

label_7F1AC788:
    ctx->pc = 0x7F1AC788u;
    // 7F1AC788: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC788u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC78C:
    // 7F1AC78C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC790:
    // 7F1AC790: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AC794:
    ctx->pc = 0x7F1AC794u;
    // 7F1AC794: fmadds f1, f2, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC794u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1AC798:
    ctx->pc = 0x7F1AC798u;
    // 7F1AC798: stfs     f1, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC798u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AC79C:
    ctx->pc = 0x7F1AC79Cu;
    // 7F1AC79C: stfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC79Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC7A0:
    // 7F1AC7A0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1AC7A4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1AC7A4:
    ctx->downcount -= 8;
    // 7F1AC7A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC7A8:
    // 7F1AC7A8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1AC7AC:
    ctx->pc = 0x7F1AC7ACu;
    // 7F1AC7AC: lfs     f0, 6696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC7B0:
    ctx->pc = 0x7F1AC7B0u;
    // 7F1AC7B0: stfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7B0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC7B4:
    // 7F1AC7B4: addi    r29, r29, 84
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(84);

label_7F1AC7B8:
    ctx->pc = 0x7F1AC7B8u;
    // 7F1AC7B8: lwz     r0, 180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC7BC:
    // 7F1AC7BC: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC7C0:
    // 7F1AC7C0: bc    4, 0, 0x7F1AC7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC7D4;
        }
    }

label_7F1AC7C4:
    ctx->downcount -= 1;
    // 7F1AC7C4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1AC7C8:
    ctx->pc = 0x7F1AC7C8u;
    ctx->downcount -= 3;
    // 7F1AC7C8: lwz     r0, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC7CC:
    // 7F1AC7CC: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC7D0:
    // 7F1AC7D0: bc    12, 0, 0x7F1AC50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC50Cu;
                return;
            }
            goto label_7F1AC50C;
        }
    }

label_7F1AC7D4:
    ctx->pc = 0x7F1AC7D4u;
    ctx->downcount -= 20;
    // 7F1AC7D4: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AC7D4u);
        if (ctx->exception) return;
    }

label_7F1AC7D8:
    ctx->pc = 0x7F1AC7D8u;
    // 7F1AC7D8: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC7DC:
    ctx->pc = 0x7F1AC7DCu;
    // 7F1AC7DC: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AC7DCu);
        if (ctx->exception) return;
    }

label_7F1AC7E0:
    ctx->pc = 0x7F1AC7E0u;
    // 7F1AC7E0: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC7E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC7E4:
    ctx->pc = 0x7F1AC7E4u;
    // 7F1AC7E4: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AC7E8:
    ctx->pc = 0x7F1AC7E8u;
    // 7F1AC7E8: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC7EC:
    ctx->pc = 0x7F1AC7ECu;
    // 7F1AC7EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC7F0:
    ctx->pc = 0x7F1AC7F0u;
    // 7F1AC7F0: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1AC7F4:
    ctx->pc = 0x7F1AC7F4u;
    // 7F1AC7F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC7F8:
    ctx->pc = 0x7F1AC7F8u;
    ctx->downcount -= 13;
    // 7F1AC7F8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1AC7FC:
    ctx->pc = 0x7F1AC7FCu;
    // 7F1AC7FC: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1AC800:
    ctx->pc = 0x7F1AC800u;
    // 7F1AC800: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1AC804:
    ctx->pc = 0x7F1AC804u;
    // 7F1AC804: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC808:
    ctx->pc = 0x7F1AC808u;
    // 7F1AC808: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1AC80C:
    ctx->pc = 0x7F1AC80Cu;
    // 7F1AC80C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1AC810:
    ctx->pc = 0x7F1AC810u;
    // 7F1AC810: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AC814:
    ctx->pc = 0x7F1AC814u;
    // 7F1AC814: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC818:
    ctx->pc = 0x7F1AC818u;
    // 7F1AC818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC81C:
    ctx->pc = 0x7F1AC81Cu;
    ctx->downcount -= 4;
    // 7F1AC81C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC820:
    ctx->pc = 0x7F1AC820u;
    // 7F1AC820: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC824:
    ctx->pc = 0x7F1AC824u;
    // 7F1AC824: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC828:
    ctx->pc = 0x7F1AC828u;
    // 7F1AC828: bl      0x7F1AC7F8
    {
            ctx->lr = 0x7F1AC82Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC7F8u;
                return;
            }
            goto label_7F1AC7F8;
    }

label_7F1AC82C:
    ctx->pc = 0x7F1AC82Cu;
    ctx->downcount -= 35;
    // 7F1AC82C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC830:
    ctx->pc = 0x7F1AC830u;
    // 7F1AC830: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC834:
    ctx->pc = 0x7F1AC834u;
    // 7F1AC834: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC838:
    ctx->pc = 0x7F1AC838u;
    // 7F1AC838: addi    r5, r4, 6720
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6720);

label_7F1AC83C:
    ctx->pc = 0x7F1AC83Cu;
    // 7F1AC83C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC840:
    ctx->pc = 0x7F1AC840u;
    // 7F1AC840: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC840u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC844:
    ctx->pc = 0x7F1AC844u;
    // 7F1AC844: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC848:
    ctx->pc = 0x7F1AC848u;
    // 7F1AC848: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC84C:
    ctx->pc = 0x7F1AC84Cu;
    // 7F1AC84C: lfs     f1, 6716(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC84Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6716);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC850:
    ctx->pc = 0x7F1AC850u;
    // 7F1AC850: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC854:
    ctx->pc = 0x7F1AC854u;
    // 7F1AC854: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC858:
    ctx->pc = 0x7F1AC858u;
    // 7F1AC858: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC858u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1AC85C:
    ctx->pc = 0x7F1AC85Cu;
    // 7F1AC85C: lfs     f0, 6712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC85Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC860:
    ctx->pc = 0x7F1AC860u;
    // 7F1AC860: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC860u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1AC864:
    ctx->pc = 0x7F1AC864u;
    // 7F1AC864: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC864u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1AC868:
    ctx->pc = 0x7F1AC868u;
    // 7F1AC868: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC86C:
    ctx->pc = 0x7F1AC86Cu;
    // 7F1AC86C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AC870:
    ctx->pc = 0x7F1AC870u;
    // 7F1AC870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC874:
    ctx->pc = 0x7F1AC874u;
    ctx->downcount -= 4;
    // 7F1AC874: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC878:
    ctx->pc = 0x7F1AC878u;
    // 7F1AC878: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC87C:
    ctx->pc = 0x7F1AC87Cu;
    // 7F1AC87C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC880:
    ctx->pc = 0x7F1AC880u;
    // 7F1AC880: bl      0x7F1AC7F8
    {
            ctx->lr = 0x7F1AC884u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC7F8u;
                return;
            }
            goto label_7F1AC7F8;
    }

label_7F1AC884:
    ctx->pc = 0x7F1AC884u;
    ctx->downcount -= 31;
    // 7F1AC884: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC888:
    ctx->pc = 0x7F1AC888u;
    // 7F1AC888: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC88C:
    ctx->pc = 0x7F1AC88Cu;
    // 7F1AC88C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC890:
    ctx->pc = 0x7F1AC890u;
    // 7F1AC890: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC894:
    ctx->pc = 0x7F1AC894u;
    // 7F1AC894: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC898:
    ctx->pc = 0x7F1AC898u;
    // 7F1AC898: lfd     f2, 6720(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC898u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6720);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC89C:
    ctx->pc = 0x7F1AC89Cu;
    // 7F1AC89C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC89Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC8A0:
    ctx->pc = 0x7F1AC8A0u;
    // 7F1AC8A0: lfs     f0, 6728(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC8A4:
    ctx->pc = 0x7F1AC8A4u;
    // 7F1AC8A4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8A4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AC8A8:
    ctx->pc = 0x7F1AC8A8u;
    // 7F1AC8A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC8AC:
    ctx->pc = 0x7F1AC8ACu;
    // 7F1AC8AC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8ACu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AC8B0:
    ctx->pc = 0x7F1AC8B0u;
    // 7F1AC8B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC8B4:
    ctx->pc = 0x7F1AC8B4u;
    // 7F1AC8B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AC8B8:
    ctx->pc = 0x7F1AC8B8u;
    // 7F1AC8B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AC8BC:
    ctx->pc = 0x7F1AC8BCu;
    ctx->downcount -= 22;
    // 7F1AC8BC: stwu     r1, -368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-368);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC8C0:
    ctx->pc = 0x7F1AC8C0u;
    // 7F1AC8C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC8C4:
    ctx->pc = 0x7F1AC8C4u;
    // 7F1AC8C4: stw     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC8C8:
    ctx->pc = 0x7F1AC8C8u;
    // 7F1AC8C8: stfd     f31, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1AC8CC:
    ctx->pc = 0x7F1AC8CCu;
    // 7F1AC8CC: psq_st   f31, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AC8CCu);
        if (ctx->exception) return;
    }

label_7F1AC8D0:
    ctx->pc = 0x7F1AC8D0u;
    // 7F1AC8D0: stfd     f30, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1AC8D4:
    ctx->pc = 0x7F1AC8D4u;
    // 7F1AC8D4: psq_st   f30, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AC8D4u);
        if (ctx->exception) return;
    }

label_7F1AC8D8:
    ctx->pc = 0x7F1AC8D8u;
    // 7F1AC8D8: stmw     r25, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AC8DC:
    ctx->pc = 0x7F1AC8DCu;
    // 7F1AC8DC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC8E0:
    ctx->pc = 0x7F1AC8E0u;
    // 7F1AC8E0: lwz     r0, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC8E4:
    ctx->pc = 0x7F1AC8E4u;
    // 7F1AC8E4: cmpwi   r0, 1
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

label_7F1AC8E8:
    ctx->pc = 0x7F1AC8E8u;
    // 7F1AC8E8: bc    4, 0, 0x7F1AC8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC8F8;
        }
    }

label_7F1AC8EC:
    ctx->pc = 0x7F1AC8ECu;
    ctx->downcount -= 3;
    // 7F1AC8EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC8F0:
    ctx->pc = 0x7F1AC8F0u;
    // 7F1AC8F0: lfs     f30, 6712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC8F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AC8F4:
    ctx->pc = 0x7F1AC8F4u;
    // 7F1AC8F4: b       0x7F1AC934
    {
            goto label_7F1AC934;
    }

label_7F1AC8F8:
    ctx->pc = 0x7F1AC8F8u;
    ctx->downcount -= 31;
    // 7F1AC8F8: lwz     r4, 208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC8FC:
    ctx->pc = 0x7F1AC8FCu;
    // 7F1AC8FC: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1AC900:
    ctx->pc = 0x7F1AC900u;
    // 7F1AC900: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC904:
    ctx->pc = 0x7F1AC904u;
    // 7F1AC904: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AC908:
    ctx->pc = 0x7F1AC908u;
    // 7F1AC908: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AC90C:
    ctx->pc = 0x7F1AC90Cu;
    // 7F1AC90C: stw     r3, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC910:
    ctx->pc = 0x7F1AC910u;
    // 7F1AC910: lfd     f2, 6704(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC910u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC914:
    ctx->pc = 0x7F1AC914u;
    // 7F1AC914: stw     r4, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AC918:
    ctx->pc = 0x7F1AC918u;
    // 7F1AC918: lfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC91C:
    ctx->pc = 0x7F1AC91Cu;
    // 7F1AC91C: stw     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC920:
    ctx->pc = 0x7F1AC920u;
    // 7F1AC920: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC920u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AC924:
    ctx->pc = 0x7F1AC924u;
    // 7F1AC924: stw     r3, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC928:
    ctx->pc = 0x7F1AC928u;
    // 7F1AC928: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC928u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC92C:
    ctx->pc = 0x7F1AC92Cu;
    // 7F1AC92C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AC92Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AC930:
    ctx->pc = 0x7F1AC930u;
    // 7F1AC930: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC930u)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F1AC934:
    ctx->pc = 0x7F1AC934u;
    ctx->downcount -= 14;
    // 7F1AC934: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1AC938:
    ctx->pc = 0x7F1AC938u;
    // 7F1AC938: lwz     r4, 208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AC93C:
    ctx->pc = 0x7F1AC93Cu;
    // 7F1AC93C: addi    r3, r3, 5000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1AC940:
    ctx->pc = 0x7F1AC940u;
    // 7F1AC940: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC944:
    ctx->pc = 0x7F1AC944u;
    // 7F1AC944: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AC948:
    ctx->pc = 0x7F1AC948u;
    // 7F1AC948: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1AC94C:
    ctx->pc = 0x7F1AC94Cu;
    // 7F1AC94C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AC950:
    ctx->pc = 0x7F1AC950u;
    // 7F1AC950: stw     r0, 208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC954:
    ctx->pc = 0x7F1AC954u;
    // 7F1AC954: lwz     r0, 208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC958:
    ctx->pc = 0x7F1AC958u;
    // 7F1AC958: lwz     r3, 212(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC95C:
    ctx->pc = 0x7F1AC95Cu;
    // 7F1AC95C: cmpw    r0, r3
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

label_7F1AC960:
    ctx->pc = 0x7F1AC960u;
    // 7F1AC960: bc    12, 0, 0x7F1AC968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC968;
        }
    }

label_7F1AC964:
    ctx->pc = 0x7F1AC964u;
    ctx->downcount -= 1;
    // 7F1AC964: stw     r3, 208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC968:
    ctx->pc = 0x7F1AC968u;
    ctx->downcount -= 3;
    // 7F1AC968: lwz     r6, 232(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(232);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AC96C:
    ctx->pc = 0x7F1AC96Cu;
    // 7F1AC96C: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AC970:
    ctx->pc = 0x7F1AC970u;
    // 7F1AC970: bc    4, 1, 0x7F1ACE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACE7C;
        }
    }

label_7F1AC974:
    ctx->pc = 0x7F1AC974u;
    ctx->downcount -= 26;
    // 7F1AC974: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1AC978:
    ctx->pc = 0x7F1AC978u;
    // 7F1AC978: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AC97C:
    ctx->pc = 0x7F1AC97Cu;
    // 7F1AC97C: lwz     r5, 5000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AC980:
    ctx->pc = 0x7F1AC980u;
    // 7F1AC980: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AC984:
    ctx->pc = 0x7F1AC984u;
    // 7F1AC984: stw     r0, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC988:
    ctx->pc = 0x7F1AC988u;
    // 7F1AC988: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1AC98C:
    ctx->pc = 0x7F1AC98Cu;
    // 7F1AC98C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1AC990:
    ctx->pc = 0x7F1AC990u;
    // 7F1AC990: lfd     f1, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC990u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC994:
    ctx->pc = 0x7F1AC994u;
    // 7F1AC994: mulli   r0, r5, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)5);

label_7F1AC998:
    ctx->pc = 0x7F1AC998u;
    // 7F1AC998: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AC99C:
    ctx->pc = 0x7F1AC99Cu;
    // 7F1AC99C: stw     r0, 232(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC9A0:
    ctx->pc = 0x7F1AC9A0u;
    // 7F1AC9A0: lfs     f2, 148(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9A0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AC9A4:
    ctx->pc = 0x7F1AC9A4u;
    // 7F1AC9A4: lfs     f0, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC9A8:
    ctx->pc = 0x7F1AC9A8u;
    // 7F1AC9A8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9A8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F1AC9AC:
    ctx->pc = 0x7F1AC9ACu;
    // 7F1AC9AC: stfs     f0, 148(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9ACu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC9B0:
    ctx->pc = 0x7F1AC9B0u;
    // 7F1AC9B0: lwz     r0, 184(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC9B4:
    ctx->pc = 0x7F1AC9B4u;
    // 7F1AC9B4: lfs     f2, 148(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9B4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AC9B8:
    ctx->pc = 0x7F1AC9B8u;
    // 7F1AC9B8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AC9BC:
    ctx->pc = 0x7F1AC9BCu;
    // 7F1AC9BC: stw     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC9C0:
    ctx->pc = 0x7F1AC9C0u;
    // 7F1AC9C0: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC9C4:
    ctx->pc = 0x7F1AC9C4u;
    // 7F1AC9C4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9C4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AC9C8:
    ctx->pc = 0x7F1AC9C8u;
    // 7F1AC9C8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1AC9CC:
    ctx->pc = 0x7F1AC9CCu;
    // 7F1AC9CC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1AC9D0:
    ctx->pc = 0x7F1AC9D0u;
    // 7F1AC9D0: bc    4, 2, 0x7F1AC9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC9E8;
        }
    }

label_7F1AC9D4:
    ctx->pc = 0x7F1AC9D4u;
    ctx->downcount -= 5;
    // 7F1AC9D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AC9D8:
    ctx->pc = 0x7F1AC9D8u;
    // 7F1AC9D8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1AC9DC:
    ctx->pc = 0x7F1AC9DCu;
    // 7F1AC9DC: lfs     f0, 6696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AC9E0:
    ctx->pc = 0x7F1AC9E0u;
    // 7F1AC9E0: stfs     f0, 148(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC9E0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AC9E4:
    ctx->pc = 0x7F1AC9E4u;
    // 7F1AC9E4: bl      0x7F1AC4D0
    {
            ctx->lr = 0x7F1AC9E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC4D0u;
                return;
            }
            goto label_7F1AC4D0;
    }

label_7F1AC9E8:
    ctx->pc = 0x7F1AC9E8u;
    ctx->downcount -= 6;
    // 7F1AC9E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F1AC9EC:
    ctx->pc = 0x7F1AC9ECu;
    // 7F1AC9EC: lwz     r28, 112(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1AC9F0:
    ctx->pc = 0x7F1AC9F0u;
    // 7F1AC9F0: addi    r3, r3, 18308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F1AC9F4:
    ctx->pc = 0x7F1AC9F4u;
    // 7F1AC9F4: lwz     r29, 116(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1AC9F8:
    ctx->pc = 0x7F1AC9F8u;
    // 7F1AC9F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AC9FC:
    ctx->pc = 0x7F1AC9FCu;
    // 7F1AC9FC: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F1ACA00u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F1ACA00:
    ctx->pc = 0x7F1ACA00u;
    ctx->downcount -= 6;
    // 7F1ACA00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ACA04:
    ctx->pc = 0x7F1ACA04u;
    // 7F1ACA04: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1ACA08:
    ctx->pc = 0x7F1ACA08u;
    // 7F1ACA08: lfs     f31, 6696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1ACA0C:
    ctx->pc = 0x7F1ACA0Cu;
    // 7F1ACA0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ACA10:
    ctx->pc = 0x7F1ACA10u;
    // 7F1ACA10: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1ACA14:
    ctx->pc = 0x7F1ACA14u;
    // 7F1ACA14: b       0x7F1ACE70
    {
            goto label_7F1ACE70;
    }

label_7F1ACA18:
    ctx->pc = 0x7F1ACA18u;
    ctx->downcount -= 3;
    // 7F1ACA18: lfs     f2, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA18u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ACA1C:
    ctx->pc = 0x7F1ACA1Cu;
    // 7F1ACA1C: fcmpo   cr0, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[31], true);

label_7F1ACA20:
    // 7F1ACA20: bc    4, 1, 0x7F1ACE58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACE58;
        }
    }

label_7F1ACA24:
    ctx->downcount -= 10;
    // 7F1ACA24: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ACA28:
    // 7F1ACA28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACA2C:
    ctx->pc = 0x7F1ACA2Cu;
    // 7F1ACA2C: lfs     f1, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACA30:
    ctx->pc = 0x7F1ACA30u;
    // 7F1ACA30: lfs     f0, 6696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACA34:
    ctx->pc = 0x7F1ACA34u;
    // 7F1ACA34: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA34u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1ACA38:
    ctx->pc = 0x7F1ACA38u;
    // 7F1ACA38: stfs     f1, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ACA3C:
    ctx->pc = 0x7F1ACA3Cu;
    // 7F1ACA3C: lfs     f1, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA3Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACA40:
    ctx->pc = 0x7F1ACA40u;
    // 7F1ACA40: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ACA44:
    // 7F1ACA44: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1ACA48:
    // 7F1ACA48: bc    4, 2, 0x7F1ACA50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACA50;
        }
    }

label_7F1ACA4C:
    ctx->pc = 0x7F1ACA4Cu;
    ctx->downcount -= 1;
    // 7F1ACA4C: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA4Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACA50:
    ctx->downcount -= 6;
    // 7F1ACA50: add   r30, r28, r25
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F1ACA54:
    // 7F1ACA54: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F1ACA58:
    ctx->pc = 0x7F1ACA58u;
    // 7F1ACA58: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACA5C:
    ctx->pc = 0x7F1ACA5Cu;
    // 7F1ACA5C: lwz     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACA60:
    // 7F1ACA60: cmpwi   r0, 1
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

label_7F1ACA64:
    // 7F1ACA64: bc    4, 2, 0x7F1ACA74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACA74;
        }
    }

label_7F1ACA68:
    ctx->pc = 0x7F1ACA68u;
    ctx->downcount -= 3;
    // 7F1ACA68: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACA6C:
    // 7F1ACA6C: cmpwi   r0, 0
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

label_7F1ACA70:
    // 7F1ACA70: bc    4, 2, 0x7F1ACA8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACA8C;
        }
    }

label_7F1ACA74:
    ctx->downcount -= 6;
    // 7F1ACA74: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1ACA78:
    ctx->pc = 0x7F1ACA78u;
    // 7F1ACA78: lfs     f2, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA78u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ACA7C:
    ctx->pc = 0x7F1ACA7Cu;
    // 7F1ACA7C: lfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA7Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACA80:
    ctx->pc = 0x7F1ACA80u;
    // 7F1ACA80: lfs     f1, -6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACA84:
    ctx->pc = 0x7F1ACA84u;
    // 7F1ACA84: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA84u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ACA88:
    ctx->pc = 0x7F1ACA88u;
    // 7F1ACA88: stfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA88u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACA8C:
    ctx->downcount -= 6;
    // 7F1ACA8C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ACA90:
    // 7F1ACA90: addi    r3, r29, 40
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(40);

label_7F1ACA94:
    // 7F1ACA94: addi    r5, r4, -6704
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6704);

label_7F1ACA98:
    // 7F1ACA98: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACA9C:
    ctx->pc = 0x7F1ACA9Cu;
    // 7F1ACA9C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACA9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACAA0:
    // 7F1ACAA0: bl      0x800261FC
    {
            ctx->lr = 0x7F1ACAA4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ACAA4:
    ctx->downcount -= 4;
    // 7F1ACAA4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ACAA8:
    // 7F1ACAA8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACAAC:
    // 7F1ACAAC: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1ACAB0:
    // 7F1ACAB0: bl      0x800261B4
    {
            ctx->lr = 0x7F1ACAB4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ACAB4:
    ctx->pc = 0x7F1ACAB4u;
    ctx->downcount -= 3;
    // 7F1ACAB4: lwz     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACAB8:
    // 7F1ACAB8: cmpwi   r0, 2
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

label_7F1ACABC:
    // 7F1ACABC: bc    12, 2, 0x7F1ACC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACC5C;
        }
    }

label_7F1ACAC0:
    ctx->pc = 0x7F1ACAC0u;
    ctx->downcount -= 3;
    // 7F1ACAC0: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACAC4:
    // 7F1ACAC4: cmpwi   r0, 0
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

label_7F1ACAC8:
    // 7F1ACAC8: bc    4, 2, 0x7F1ACC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACC5C;
        }
    }

label_7F1ACACC:
    ctx->downcount -= 7;
    // 7F1ACACC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ACAD0:
    // 7F1ACAD0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ACAD4:
    // 7F1ACAD4: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1ACAD8:
    // 7F1ACAD8: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F1ACADC:
    // 7F1ACADC: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_7F1ACAE0:
    // 7F1ACAE0: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F1ACAE4:
    // 7F1ACAE4: bl      0x7F10B744
    {
            ctx->lr = 0x7F1ACAE8u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F1ACAE8:
    ctx->downcount -= 3;
    // 7F1ACAE8: rlwinm. r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1ACAEC:
    // 7F1ACAEC: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F1ACAF0:
    // 7F1ACAF0: bc    4, 2, 0x7F1ACAFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACAFC;
        }
    }

label_7F1ACAF4:
    ctx->downcount -= 2;
    // 7F1ACAF4: rlwinm. r0, r3, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1ACAF8:
    // 7F1ACAF8: bc    12, 2, 0x7F1ACC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACC5C;
        }
    }

label_7F1ACAFC:
    ctx->pc = 0x7F1ACAFCu;
    ctx->downcount -= 5;
    // 7F1ACAFC: lwz     r4, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACB00:
    // 7F1ACB00: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1ACB04:
    // 7F1ACB04: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F1ACB08:
    ctx->pc = 0x7F1ACB08u;
    // 7F1ACB08: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACB0C:
    // 7F1ACB0C: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F1ACB10u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F1ACB10:
    ctx->downcount -= 3;
    // 7F1ACB10: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1ACB14:
    // 7F1ACB14: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ACB18:
    // 7F1ACB18: bl      0x7F10B784
    {
            ctx->lr = 0x7F1ACB1Cu;
            ctx->pc = 0x7F10B784u;
            return;
    }

label_7F1ACB1C:
    ctx->downcount -= 3;
    // 7F1ACB1C: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1ACB20:
    // 7F1ACB20: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1ACB24:
    // 7F1ACB24: bl      0x7F0910C0
    {
            ctx->lr = 0x7F1ACB28u;
            ctx->pc = 0x7F0910C0u;
            return;
    }

label_7F1ACB28:
    ctx->downcount -= 4;
    // 7F1ACB28: addi    r4, r29, 40
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(40);

label_7F1ACB2C:
    // 7F1ACB2C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1ACB30:
    // 7F1ACB30: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1ACB34:
    // 7F1ACB34: bl      0x7F3B3800
    {
            ctx->lr = 0x7F1ACB38u;
            ctx->pc = 0x7F3B3800u;
            return;
    }

label_7F1ACB38:
    ctx->pc = 0x7F1ACB38u;
    ctx->downcount -= 14;
    // 7F1ACB38: lfs     f3, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1ACB3C:
    // 7F1ACB3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACB40:
    ctx->pc = 0x7F1ACB40u;
    // 7F1ACB40: lfs     f2, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ACB44:
    ctx->pc = 0x7F1ACB44u;
    // 7F1ACB44: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACB48:
    ctx->pc = 0x7F1ACB48u;
    // 7F1ACB48: fsubs   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB48u)) return;
    ppc_fsubs(ctx, 3, 3, 2);

label_7F1ACB4C:
    ctx->pc = 0x7F1ACB4Cu;
    // 7F1ACB4C: lfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACB50:
    ctx->pc = 0x7F1ACB50u;
    // 7F1ACB50: lfs     f2, 6696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ACB54:
    ctx->pc = 0x7F1ACB54u;
    // 7F1ACB54: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB54u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1ACB58:
    ctx->pc = 0x7F1ACB58u;
    // 7F1ACB58: stfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1ACB5C:
    ctx->pc = 0x7F1ACB5Cu;
    // 7F1ACB5C: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ACB60:
    ctx->pc = 0x7F1ACB60u;
    // 7F1ACB60: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACB64:
    ctx->pc = 0x7F1ACB64u;
    // 7F1ACB64: lwz     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACB68:
    // 7F1ACB68: cmpwi   r0, 1
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

label_7F1ACB6C:
    // 7F1ACB6C: bc    4, 2, 0x7F1ACBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACBA0;
        }
    }

label_7F1ACB70:
    ctx->pc = 0x7F1ACB70u;
    ctx->downcount -= 12;
    // 7F1ACB70: stfs     f2, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB70u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ACB74:
    ctx->pc = 0x7F1ACB74u;
    // 7F1ACB74: stfs     f2, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB74u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ACB78:
    ctx->pc = 0x7F1ACB78u;
    // 7F1ACB78: stfs     f2, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACB78u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ACB7C:
    ctx->pc = 0x7F1ACB7Cu;
    // 7F1ACB7C: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACB80:
    ctx->pc = 0x7F1ACB80u;
    // 7F1ACB80: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACB84:
    ctx->pc = 0x7F1ACB84u;
    // 7F1ACB84: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACB88:
    ctx->pc = 0x7F1ACB88u;
    // 7F1ACB88: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACB8C:
    ctx->pc = 0x7F1ACB8Cu;
    // 7F1ACB8C: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACB90:
    ctx->pc = 0x7F1ACB90u;
    // 7F1ACB90: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACB94:
    ctx->pc = 0x7F1ACB94u;
    // 7F1ACB94: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACB98:
    ctx->pc = 0x7F1ACB98u;
    // 7F1ACB98: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACB9C:
    // 7F1ACB9C: b       0x7F1ACC5C
    {
            goto label_7F1ACC5C;
    }

label_7F1ACBA0:
    ctx->downcount -= 12;
    // 7F1ACBA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACBA4:
    ctx->pc = 0x7F1ACBA4u;
    // 7F1ACBA4: lfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBA4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACBA8:
    ctx->pc = 0x7F1ACBA8u;
    // 7F1ACBA8: lfs     f1, 6732(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6732);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACBAC:
    ctx->pc = 0x7F1ACBACu;
    // 7F1ACBAC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBACu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACBB0:
    ctx->pc = 0x7F1ACBB0u;
    // 7F1ACBB0: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBB0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACBB4:
    ctx->pc = 0x7F1ACBB4u;
    // 7F1ACBB4: lfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBB4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACBB8:
    ctx->pc = 0x7F1ACBB8u;
    // 7F1ACBB8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBB8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACBBC:
    ctx->pc = 0x7F1ACBBCu;
    // 7F1ACBBC: stfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBBCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACBC0:
    ctx->pc = 0x7F1ACBC0u;
    // 7F1ACBC0: lfs     f0, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBC0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACBC4:
    ctx->pc = 0x7F1ACBC4u;
    // 7F1ACBC4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBC4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACBC8:
    ctx->pc = 0x7F1ACBC8u;
    // 7F1ACBC8: stfs     f0, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBC8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACBCC:
    // 7F1ACBCC: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1ACBD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC874u;
                return;
            }
            goto label_7F1AC874;
    }

label_7F1ACBD0:
    ctx->pc = 0x7F1ACBD0u;
    ctx->downcount -= 12;
    // 7F1ACBD0: lwz     r4, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACBD4:
    // 7F1ACBD4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ACBD8:
    ctx->pc = 0x7F1ACBD8u;
    // 7F1ACBD8: stw     r0, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACBDC:
    // 7F1ACBDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACBE0:
    // 7F1ACBE0: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1ACBE4:
    ctx->pc = 0x7F1ACBE4u;
    // 7F1ACBE4: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACBE8:
    ctx->pc = 0x7F1ACBE8u;
    // 7F1ACBE8: stw     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACBEC:
    ctx->pc = 0x7F1ACBECu;
    // 7F1ACBEC: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACBF0:
    ctx->pc = 0x7F1ACBF0u;
    // 7F1ACBF0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBF0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1ACBF4:
    ctx->pc = 0x7F1ACBF4u;
    // 7F1ACBF4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBF4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACBF8:
    ctx->pc = 0x7F1ACBF8u;
    // 7F1ACBF8: stfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACBF8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACBFC:
    // 7F1ACBFC: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1ACC00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC874u;
                return;
            }
            goto label_7F1AC874;
    }

label_7F1ACC00:
    ctx->pc = 0x7F1ACC00u;
    ctx->downcount -= 12;
    // 7F1ACC00: lwz     r4, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACC04:
    // 7F1ACC04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ACC08:
    ctx->pc = 0x7F1ACC08u;
    // 7F1ACC08: stw     r0, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACC0C:
    // 7F1ACC0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACC10:
    // 7F1ACC10: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1ACC14:
    ctx->pc = 0x7F1ACC14u;
    // 7F1ACC14: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACC18:
    ctx->pc = 0x7F1ACC18u;
    // 7F1ACC18: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACC1C:
    ctx->pc = 0x7F1ACC1Cu;
    // 7F1ACC1C: lfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACC20:
    ctx->pc = 0x7F1ACC20u;
    // 7F1ACC20: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC20u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1ACC24:
    ctx->pc = 0x7F1ACC24u;
    // 7F1ACC24: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC24u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACC28:
    ctx->pc = 0x7F1ACC28u;
    // 7F1ACC28: stfs     f0, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC28u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACC2C:
    // 7F1ACC2C: bl      0x7F1AC874
    {
            ctx->lr = 0x7F1ACC30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC874u;
                return;
            }
            goto label_7F1AC874;
    }

label_7F1ACC30:
    ctx->pc = 0x7F1ACC30u;
    ctx->downcount -= 11;
    // 7F1ACC30: lwz     r4, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACC34:
    // 7F1ACC34: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ACC38:
    ctx->pc = 0x7F1ACC38u;
    // 7F1ACC38: stw     r0, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACC3C:
    // 7F1ACC3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACC40:
    // 7F1ACC40: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1ACC44:
    ctx->pc = 0x7F1ACC44u;
    // 7F1ACC44: lfd     f2, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACC48:
    ctx->pc = 0x7F1ACC48u;
    // 7F1ACC48: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACC4C:
    ctx->pc = 0x7F1ACC4Cu;
    // 7F1ACC4C: lfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACC50:
    ctx->pc = 0x7F1ACC50u;
    // 7F1ACC50: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC50u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1ACC54:
    ctx->pc = 0x7F1ACC54u;
    // 7F1ACC54: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC54u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1ACC58:
    ctx->pc = 0x7F1ACC58u;
    // 7F1ACC58: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC58u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ACC5C:
    ctx->downcount -= 6;
    // 7F1ACC5C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ACC60:
    // 7F1ACC60: addi    r3, r29, 40
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(40);

label_7F1ACC64:
    // 7F1ACC64: addi    r5, r4, -6704
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6704);

label_7F1ACC68:
    // 7F1ACC68: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACC6C:
    ctx->pc = 0x7F1ACC6Cu;
    // 7F1ACC6C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACC70:
    // 7F1ACC70: bl      0x800261FC
    {
            ctx->lr = 0x7F1ACC74u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ACC74:
    ctx->downcount -= 4;
    // 7F1ACC74: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ACC78:
    // 7F1ACC78: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ACC7C:
    // 7F1ACC7C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACC80:
    // 7F1ACC80: bl      0x800261B4
    {
            ctx->lr = 0x7F1ACC84u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ACC84:
    ctx->downcount -= 6;
    // 7F1ACC84: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ACC88:
    // 7F1ACC88: addi    r3, r29, 56
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(56);

label_7F1ACC8C:
    // 7F1ACC8C: addi    r5, r4, -6704
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6704);

label_7F1ACC90:
    // 7F1ACC90: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACC94:
    ctx->pc = 0x7F1ACC94u;
    // 7F1ACC94: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ACC98:
    // 7F1ACC98: bl      0x800261FC
    {
            ctx->lr = 0x7F1ACC9Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ACC9C:
    ctx->pc = 0x7F1ACC9Cu;
    ctx->downcount -= 24;
    // 7F1ACC9C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACC9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACCA0:
    ctx->pc = 0x7F1ACCA0u;
    // 7F1ACCA0: lha     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACCA4:
    ctx->pc = 0x7F1ACCA4u;
    // 7F1ACCA4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACCA8:
    ctx->pc = 0x7F1ACCA8u;
    // 7F1ACCA8: stfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACCAC:
    ctx->pc = 0x7F1ACCACu;
    // 7F1ACCAC: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACCB0:
    // 7F1ACCB0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACCB4:
    ctx->pc = 0x7F1ACCB4u;
    // 7F1ACCB4: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACCB8:
    ctx->pc = 0x7F1ACCB8u;
    // 7F1ACCB8: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACCBC:
    ctx->pc = 0x7F1ACCBCu;
    // 7F1ACCBC: lha     r3, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACCC0:
    ctx->pc = 0x7F1ACCC0u;
    // 7F1ACCC0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCC0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACCC4:
    ctx->pc = 0x7F1ACCC4u;
    // 7F1ACCC4: stfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACCC8:
    ctx->pc = 0x7F1ACCC8u;
    // 7F1ACCC8: lwz     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACCCC:
    // 7F1ACCCC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACCD0:
    ctx->pc = 0x7F1ACCD0u;
    // 7F1ACCD0: sth     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACCD4:
    ctx->pc = 0x7F1ACCD4u;
    // 7F1ACCD4: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ACCD8:
    ctx->pc = 0x7F1ACCD8u;
    // 7F1ACCD8: lha     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACCDC:
    ctx->pc = 0x7F1ACCDCu;
    // 7F1ACCDC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACCE0:
    ctx->pc = 0x7F1ACCE0u;
    // 7F1ACCE0: stfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACCE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACCE4:
    ctx->pc = 0x7F1ACCE4u;
    // 7F1ACCE4: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACCE8:
    // 7F1ACCE8: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACCEC:
    ctx->pc = 0x7F1ACCECu;
    // 7F1ACCEC: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACCF0:
    ctx->pc = 0x7F1ACCF0u;
    // 7F1ACCF0: lha     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACCF4:
    // 7F1ACCF4: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ACCF8:
    // 7F1ACCF8: bc    12, 0, 0x7F1ACD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACD04;
        }
    }

label_7F1ACCFC:
    ctx->downcount -= 2;
    // 7F1ACCFC: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F1ACD00:
    ctx->pc = 0x7F1ACD00u;
    // 7F1ACD00: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACD04:
    ctx->pc = 0x7F1ACD04u;
    ctx->downcount -= 3;
    // 7F1ACD04: lha     r3, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACD08:
    // 7F1ACD08: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ACD0C:
    // 7F1ACD0C: bc    12, 0, 0x7F1ACD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACD18;
        }
    }

label_7F1ACD10:
    ctx->downcount -= 2;
    // 7F1ACD10: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F1ACD14:
    ctx->pc = 0x7F1ACD14u;
    // 7F1ACD14: sth     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACD18:
    ctx->pc = 0x7F1ACD18u;
    ctx->downcount -= 3;
    // 7F1ACD18: lha     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1ACD1C:
    // 7F1ACD1C: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ACD20:
    // 7F1ACD20: bc    12, 0, 0x7F1ACD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACD2C;
        }
    }

label_7F1ACD24:
    ctx->downcount -= 2;
    // 7F1ACD24: addi    r0, r3, -4096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F1ACD28:
    ctx->pc = 0x7F1ACD28u;
    // 7F1ACD28: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ACD2C:
    ctx->downcount -= 3;
    // 7F1ACD2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ACD30:
    // 7F1ACD30: addi    r4, r29, 16
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1ACD34:
    // 7F1ACD34: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1ACD38u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1ACD38:
    ctx->downcount -= 2;
    // 7F1ACD38: addi    r3, r29, 24
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(24);

label_7F1ACD3C:
    // 7F1ACD3C: bl      0x7F3B3504
    {
            ctx->lr = 0x7F1ACD40u;
            ctx->pc = 0x7F3B3504u;
            return;
    }

label_7F1ACD40:
    ctx->downcount -= 2;
    // 7F1ACD40: addi    r3, r30, 84
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(84);

label_7F1ACD44:
    // 7F1ACD44: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F1ACD48u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F1ACD48:
    ctx->pc = 0x7F1ACD48u;
    ctx->downcount -= 68;
    // 7F1ACD48: lwz     r5, 200(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(200);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ACD4C:
    // 7F1ACD4C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ACD50:
    ctx->pc = 0x7F1ACD50u;
    // 7F1ACD50: lwz     r4, 204(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACD54:
    // 7F1ACD54: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ACD58:
    // 7F1ACD58: rlwinm r5, r5, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_7F1ACD5C:
    ctx->pc = 0x7F1ACD5Cu;
    // 7F1ACD5C: lfd     f1, 6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACD60:
    // 7F1ACD60: rlwinm r4, r4, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_7F1ACD64:
    ctx->pc = 0x7F1ACD64u;
    // 7F1ACD64: stw     r0, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACD68:
    // 7F1ACD68: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1ACD6C:
    // 7F1ACD6C: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1ACD70:
    ctx->pc = 0x7F1ACD70u;
    // 7F1ACD70: stw     r0, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACD74:
    ctx->pc = 0x7F1ACD74u;
    // 7F1ACD74: stw     r3, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACD78:
    ctx->pc = 0x7F1ACD78u;
    // 7F1ACD78: lfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACD7C:
    ctx->pc = 0x7F1ACD7Cu;
    // 7F1ACD7C: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACD80:
    ctx->pc = 0x7F1ACD80u;
    // 7F1ACD80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1ACD84:
    ctx->pc = 0x7F1ACD84u;
    // 7F1ACD84: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACD88:
    ctx->pc = 0x7F1ACD88u;
    // 7F1ACD88: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD88u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F1ACD8C:
    ctx->pc = 0x7F1ACD8Cu;
    // 7F1ACD8C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD8Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACD90:
    ctx->pc = 0x7F1ACD90u;
    // 7F1ACD90: stfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACD90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACD94:
    ctx->pc = 0x7F1ACD94u;
    // 7F1ACD94: lwz     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACD98:
    // 7F1ACD98: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACD9C:
    ctx->pc = 0x7F1ACD9Cu;
    // 7F1ACD9C: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACDA0:
    ctx->pc = 0x7F1ACDA0u;
    // 7F1ACDA0: lwz     r3, 200(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACDA4:
    ctx->pc = 0x7F1ACDA4u;
    // 7F1ACDA4: lwz     r0, 204(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACDA8:
    // 7F1ACDA8: rlwinm r3, r3, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x000000FFu;
    }

label_7F1ACDAC:
    // 7F1ACDAC: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_7F1ACDB0:
    // 7F1ACDB0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1ACDB4:
    // 7F1ACDB4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1ACDB8:
    ctx->pc = 0x7F1ACDB8u;
    // 7F1ACDB8: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACDBC:
    ctx->pc = 0x7F1ACDBCu;
    // 7F1ACDBC: lfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACDC0:
    ctx->pc = 0x7F1ACDC0u;
    // 7F1ACDC0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDC0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1ACDC4:
    ctx->pc = 0x7F1ACDC4u;
    // 7F1ACDC4: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDC4u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F1ACDC8:
    ctx->pc = 0x7F1ACDC8u;
    // 7F1ACDC8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDC8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACDCC:
    ctx->pc = 0x7F1ACDCCu;
    // 7F1ACDCC: stfd     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACDD0:
    ctx->pc = 0x7F1ACDD0u;
    // 7F1ACDD0: lwz     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACDD4:
    // 7F1ACDD4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACDD8:
    ctx->pc = 0x7F1ACDD8u;
    // 7F1ACDD8: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACDDC:
    ctx->pc = 0x7F1ACDDCu;
    // 7F1ACDDC: lwz     r3, 200(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACDE0:
    ctx->pc = 0x7F1ACDE0u;
    // 7F1ACDE0: lwz     r0, 204(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACDE4:
    // 7F1ACDE4: rlwinm r3, r3, 16, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x000000FFu;
    }

label_7F1ACDE8:
    // 7F1ACDE8: rlwinm r0, r0, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x000000FFu;
    }

label_7F1ACDEC:
    // 7F1ACDEC: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1ACDF0:
    // 7F1ACDF0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1ACDF4:
    ctx->pc = 0x7F1ACDF4u;
    // 7F1ACDF4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACDF8:
    ctx->pc = 0x7F1ACDF8u;
    // 7F1ACDF8: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACDFC:
    ctx->pc = 0x7F1ACDFCu;
    // 7F1ACDFC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACDFCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1ACE00:
    ctx->pc = 0x7F1ACE00u;
    // 7F1ACE00: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE00u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F1ACE04:
    ctx->pc = 0x7F1ACE04u;
    // 7F1ACE04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACE08:
    ctx->pc = 0x7F1ACE08u;
    // 7F1ACE08: stfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACE0C:
    ctx->pc = 0x7F1ACE0Cu;
    // 7F1ACE0C: lwz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE10:
    // 7F1ACE10: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACE14:
    ctx->pc = 0x7F1ACE14u;
    // 7F1ACE14: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACE18:
    ctx->pc = 0x7F1ACE18u;
    // 7F1ACE18: lwz     r3, 200(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACE1C:
    ctx->pc = 0x7F1ACE1Cu;
    // 7F1ACE1C: lwz     r0, 204(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE20:
    // 7F1ACE20: rlwinm r3, r3, 8, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x000000FFu;
    }

label_7F1ACE24:
    // 7F1ACE24: rlwinm r0, r0, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x000000FFu;
    }

label_7F1ACE28:
    // 7F1ACE28: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1ACE2C:
    // 7F1ACE2C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1ACE30:
    ctx->pc = 0x7F1ACE30u;
    // 7F1ACE30: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACE34:
    ctx->pc = 0x7F1ACE34u;
    // 7F1ACE34: lfd     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACE38:
    ctx->pc = 0x7F1ACE38u;
    // 7F1ACE38: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE38u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1ACE3C:
    ctx->pc = 0x7F1ACE3Cu;
    // 7F1ACE3C: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE3Cu)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F1ACE40:
    ctx->pc = 0x7F1ACE40u;
    // 7F1ACE40: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ACE44:
    ctx->pc = 0x7F1ACE44u;
    // 7F1ACE44: stfd     f0, 296(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACE44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ACE48:
    ctx->pc = 0x7F1ACE48u;
    // 7F1ACE48: lwz     r0, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE4C:
    // 7F1ACE4C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ACE50:
    ctx->pc = 0x7F1ACE50u;
    // 7F1ACE50: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACE54:
    // 7F1ACE54: b       0x7F1ACE64
    {
            goto label_7F1ACE64;
    }

label_7F1ACE58:
    ctx->downcount -= 3;
    // 7F1ACE58: addi    r0, r25, 160
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(160);

label_7F1ACE5C:
    // 7F1ACE5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1ACE60:
    ctx->pc = 0x7F1ACE60u;
    // 7F1ACE60: stwx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACE64:
    ctx->downcount -= 3;
    // 7F1ACE64: addi    r29, r29, 84
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(84);

label_7F1ACE68:
    // 7F1ACE68: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1ACE6C:
    // 7F1ACE6C: addi    r25, r25, 80
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(80);

label_7F1ACE70:
    ctx->pc = 0x7F1ACE70u;
    ctx->downcount -= 3;
    // 7F1ACE70: lwz     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE74:
    // 7F1ACE74: cmpw    r27, r0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ACE78:
    // 7F1ACE78: bc    12, 0, 0x7F1ACA18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ACA18u;
                return;
            }
            goto label_7F1ACA18;
        }
    }

label_7F1ACE7C:
    ctx->pc = 0x7F1ACE7Cu;
    ctx->downcount -= 3;
    // 7F1ACE7C: lwz     r0, 232(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE80:
    ctx->pc = 0x7F1ACE80u;
    // 7F1ACE80: cmpwi   r0, 0
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

label_7F1ACE84:
    ctx->pc = 0x7F1ACE84u;
    // 7F1ACE84: bc    12, 1, 0x7F1ACEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACEA4;
        }
    }

label_7F1ACE88:
    ctx->pc = 0x7F1ACE88u;
    ctx->downcount -= 3;
    // 7F1ACE88: lwz     r0, 188(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACE8C:
    ctx->pc = 0x7F1ACE8Cu;
    // 7F1ACE8C: cmpwi   r0, 0
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

label_7F1ACE90:
    ctx->pc = 0x7F1ACE90u;
    // 7F1ACE90: bc    12, 2, 0x7F1ACEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACEA4;
        }
    }

label_7F1ACE94:
    ctx->pc = 0x7F1ACE94u;
    ctx->downcount -= 4;
    // 7F1ACE94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ACE98:
    ctx->pc = 0x7F1ACE98u;
    // 7F1ACE98: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1ACE9C:
    ctx->pc = 0x7F1ACE9Cu;
    // 7F1ACE9C: stw     r0, 188(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACEA0:
    ctx->pc = 0x7F1ACEA0u;
    // 7F1ACEA0: bl      0x7F1AC480
    {
            ctx->lr = 0x7F1ACEA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC480u;
                return;
            }
            goto label_7F1AC480;
    }

label_7F1ACEA4:
    ctx->pc = 0x7F1ACEA4u;
    ctx->downcount -= 20;
    // 7F1ACEA4: psq_l   f31, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACEA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ACEA4u);
        if (ctx->exception) return;
    }

label_7F1ACEA8:
    ctx->pc = 0x7F1ACEA8u;
    // 7F1ACEA8: lfd     f31, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACEA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACEAC:
    ctx->pc = 0x7F1ACEACu;
    // 7F1ACEAC: psq_l   f30, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ACEACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ACEACu);
        if (ctx->exception) return;
    }

label_7F1ACEB0:
    ctx->pc = 0x7F1ACEB0u;
    // 7F1ACEB0: lfd     f30, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ACEB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ACEB4:
    ctx->pc = 0x7F1ACEB4u;
    // 7F1ACEB4: lmw     r25, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ACEB8:
    ctx->pc = 0x7F1ACEB8u;
    // 7F1ACEB8: lwz     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACEBC:
    ctx->pc = 0x7F1ACEBCu;
    // 7F1ACEBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ACEC0:
    ctx->pc = 0x7F1ACEC0u;
    // 7F1ACEC0: addi    r1, r1, 368
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(368);

label_7F1ACEC4:
    ctx->pc = 0x7F1ACEC4u;
    // 7F1ACEC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ACEC8:
    ctx->pc = 0x7F1ACEC8u;
    ctx->downcount -= 8;
    // 7F1ACEC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ACECC:
    ctx->pc = 0x7F1ACECCu;
    // 7F1ACECC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ACED0:
    ctx->pc = 0x7F1ACED0u;
    // 7F1ACED0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACED4:
    ctx->pc = 0x7F1ACED4u;
    // 7F1ACED4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1ACED8:
    ctx->pc = 0x7F1ACED8u;
    // 7F1ACED8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ACEDC:
    ctx->pc = 0x7F1ACEDCu;
    // 7F1ACEDC: lwz     r3, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACEE0:
    ctx->pc = 0x7F1ACEE0u;
    // 7F1ACEE0: cmplwi  r3, 0x0000
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

label_7F1ACEE4:
    ctx->pc = 0x7F1ACEE4u;
    // 7F1ACEE4: bc    12, 2, 0x7F1ACEEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACEEC;
        }
    }

label_7F1ACEE8:
    ctx->pc = 0x7F1ACEE8u;
    ctx->downcount -= 1;
    // 7F1ACEE8: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F1ACEECu;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F1ACEEC:
    ctx->pc = 0x7F1ACEECu;
    ctx->downcount -= 3;
    // 7F1ACEEC: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACEF0:
    ctx->pc = 0x7F1ACEF0u;
    // 7F1ACEF0: cmplwi  r3, 0x0000
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

label_7F1ACEF4:
    ctx->pc = 0x7F1ACEF4u;
    // 7F1ACEF4: bc    12, 2, 0x7F1ACF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACF04;
        }
    }

label_7F1ACEF8:
    ctx->pc = 0x7F1ACEF8u;
    ctx->downcount -= 1;
    // 7F1ACEF8: bl      0x7F3AEE44
    {
            ctx->lr = 0x7F1ACEFCu;
            ctx->pc = 0x7F3AEE44u;
            return;
    }

label_7F1ACEFC:
    ctx->pc = 0x7F1ACEFCu;
    ctx->downcount -= 2;
    // 7F1ACEFC: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACF00:
    ctx->pc = 0x7F1ACF00u;
    // 7F1ACF00: bl      0x7F3AF484
    {
            ctx->lr = 0x7F1ACF04u;
            ctx->pc = 0x7F3AF484u;
            return;
    }

label_7F1ACF04:
    ctx->pc = 0x7F1ACF04u;
    ctx->downcount -= 6;
    // 7F1ACF04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACF08:
    ctx->pc = 0x7F1ACF08u;
    // 7F1ACF08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1ACF0C:
    ctx->pc = 0x7F1ACF0Cu;
    // 7F1ACF0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ACF10:
    ctx->pc = 0x7F1ACF10u;
    // 7F1ACF10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ACF14:
    ctx->pc = 0x7F1ACF14u;
    // 7F1ACF14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ACF18:
    ctx->pc = 0x7F1ACF18u;
    ctx->downcount -= 8;
    // 7F1ACF18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ACF1C:
    ctx->pc = 0x7F1ACF1Cu;
    // 7F1ACF1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ACF20:
    ctx->pc = 0x7F1ACF20u;
    // 7F1ACF20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ACF24:
    ctx->pc = 0x7F1ACF24u;
    // 7F1ACF24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1ACF28:
    ctx->pc = 0x7F1ACF28u;
    // 7F1ACF28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ACF2C:
    ctx->pc = 0x7F1ACF2Cu;
    // 7F1ACF2C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1ACF30:
    ctx->pc = 0x7F1ACF30u;
    // 7F1ACF30: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F1ACF34:
    ctx->pc = 0x7F1ACF34u;
    // 7F1ACF34: bl      0x7F3C8470
    {
            ctx->lr = 0x7F1ACF38u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F1ACF38:
    ctx->pc = 0x7F1ACF38u;
    ctx->downcount -= 1;
    // 7F1ACF38: bl      0x7F3C8480
    {
            ctx->lr = 0x7F1ACF3Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F1ACF3C:
    ctx->pc = 0x7F1ACF3Cu;
    ctx->downcount -= 2;
    // 7F1ACF3C: cmplwi  r3, 0x0000
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

label_7F1ACF40:
    ctx->pc = 0x7F1ACF40u;
    // 7F1ACF40: bc    4, 2, 0x7F1ACF4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACF4C;
        }
    }

label_7F1ACF44:
    ctx->pc = 0x7F1ACF44u;
    ctx->downcount -= 2;
    // 7F1ACF44: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1ACF48:
    ctx->pc = 0x7F1ACF48u;
    // 7F1ACF48: b       0x7F1AD0EC
    {
            goto label_7F1AD0EC;
    }

label_7F1ACF4C:
    ctx->pc = 0x7F1ACF4Cu;
    ctx->downcount -= 5;
    // 7F1ACF4C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F1ACF50:
    ctx->pc = 0x7F1ACF50u;
    // 7F1ACF50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ACF54:
    ctx->pc = 0x7F1ACF54u;
    // 7F1ACF54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1ACF58:
    ctx->pc = 0x7F1ACF58u;
    // 7F1ACF58: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ACF5C:
    ctx->pc = 0x7F1ACF5Cu;
    ctx->downcount -= 6;
    // 7F1ACF5C: lwz     r5, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ACF60:
    // 7F1ACF60: addi    r0, r4, 68
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(68);

label_7F1ACF64:
    ctx->pc = 0x7F1ACF64u;
    // 7F1ACF64: lwz     r5, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ACF68:
    ctx->pc = 0x7F1ACF68u;
    // 7F1ACF68: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACF6C:
    // 7F1ACF6C: cmplwi  r0, 0x0000
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

label_7F1ACF70:
    // 7F1ACF70: bc    4, 2, 0x7F1ACF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACF80;
        }
    }

label_7F1ACF74:
    ctx->downcount -= 3;
    // 7F1ACF74: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1ACF78:
    // 7F1ACF78: addi    r4, r4, 72
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(72);

label_7F1ACF7C:
    // 7F1ACF7C: bc    16, 0, 0x7F1ACF5C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ACF5Cu;
                return;
            }
            goto label_7F1ACF5C;
        }
    }

label_7F1ACF80:
    ctx->pc = 0x7F1ACF80u;
    ctx->downcount -= 12;
    // 7F1ACF80: lwz     r4, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ACF84:
    ctx->pc = 0x7F1ACF84u;
    // 7F1ACF84: mulli   r0, r6, 72
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)72);

label_7F1ACF88:
    ctx->pc = 0x7F1ACF88u;
    // 7F1ACF88: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ACF8C:
    ctx->pc = 0x7F1ACF8Cu;
    // 7F1ACF8C: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ACF90:
    ctx->pc = 0x7F1ACF90u;
    // 7F1ACF90: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACF94:
    ctx->pc = 0x7F1ACF94u;
    // 7F1ACF94: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1ACF98:
    ctx->pc = 0x7F1ACF98u;
    // 7F1ACF98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ACF9C:
    ctx->pc = 0x7F1ACF9Cu;
    // 7F1ACF9C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1ACFA0:
    ctx->pc = 0x7F1ACFA0u;
    // 7F1ACFA0: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACFA4:
    ctx->pc = 0x7F1ACFA4u;
    // 7F1ACFA4: bl      0x7F3AF3CC
    {
            ctx->lr = 0x7F1ACFA8u;
            ctx->pc = 0x7F3AF3CCu;
            return;
    }

label_7F1ACFA8:
    ctx->pc = 0x7F1ACFA8u;
    ctx->downcount -= 4;
    // 7F1ACFA8: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACFAC:
    ctx->pc = 0x7F1ACFACu;
    // 7F1ACFAC: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACFB0:
    ctx->pc = 0x7F1ACFB0u;
    // 7F1ACFB0: cmplwi  r0, 0x0000
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

label_7F1ACFB4:
    ctx->pc = 0x7F1ACFB4u;
    // 7F1ACFB4: bc    4, 2, 0x7F1ACFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACFC0;
        }
    }

label_7F1ACFB8:
    ctx->pc = 0x7F1ACFB8u;
    ctx->downcount -= 2;
    // 7F1ACFB8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1ACFBC:
    ctx->pc = 0x7F1ACFBCu;
    // 7F1ACFBC: b       0x7F1AD0EC
    {
            goto label_7F1AD0EC;
    }

label_7F1ACFC0:
    ctx->pc = 0x7F1ACFC0u;
    ctx->downcount -= 5;
    // 7F1ACFC0: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACFC4:
    ctx->pc = 0x7F1ACFC4u;
    // 7F1ACFC4: mulli   r3, r0, 84
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)84);

label_7F1ACFC8:
    ctx->pc = 0x7F1ACFC8u;
    // 7F1ACFC8: bl      0x7F3C9148
    {
            ctx->lr = 0x7F1ACFCCu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F1ACFCC:
    ctx->pc = 0x7F1ACFCCu;
    ctx->downcount -= 4;
    // 7F1ACFCC: stw     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ACFD0:
    ctx->pc = 0x7F1ACFD0u;
    // 7F1ACFD0: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ACFD4:
    ctx->pc = 0x7F1ACFD4u;
    // 7F1ACFD4: cmplwi  r0, 0x0000
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

label_7F1ACFD8:
    ctx->pc = 0x7F1ACFD8u;
    // 7F1ACFD8: bc    4, 2, 0x7F1ACFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ACFE4;
        }
    }

label_7F1ACFDC:
    ctx->pc = 0x7F1ACFDCu;
    ctx->downcount -= 2;
    // 7F1ACFDC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1ACFE0:
    ctx->pc = 0x7F1ACFE0u;
    // 7F1ACFE0: b       0x7F1AD0EC
    {
            goto label_7F1AD0EC;
    }

label_7F1ACFE4:
    ctx->pc = 0x7F1ACFE4u;
    ctx->downcount -= 2;
    // 7F1ACFE4: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACFE8:
    ctx->pc = 0x7F1ACFE8u;
    // 7F1ACFE8: bl      0x7F3AEDF8
    {
            ctx->lr = 0x7F1ACFECu;
            ctx->pc = 0x7F3AEDF8u;
            return;
    }

label_7F1ACFEC:
    ctx->pc = 0x7F1ACFECu;
    ctx->downcount -= 4;
    // 7F1ACFEC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F1ACFF0:
    ctx->pc = 0x7F1ACFF0u;
    // 7F1ACFF0: addi    r3, r3, 18312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F1ACFF4:
    ctx->pc = 0x7F1ACFF4u;
    // 7F1ACFF4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ACFF8:
    ctx->pc = 0x7F1ACFF8u;
    // 7F1ACFF8: bl      0x7F01B234
    {
            ctx->lr = 0x7F1ACFFCu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1ACFFC:
    ctx->pc = 0x7F1ACFFCu;
    ctx->downcount -= 24;
    // 7F1ACFFC: lwz     r7, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD000:
    ctx->pc = 0x7F1AD000u;
    // 7F1AD000: lis     r6, -32512
    ctx->gpr[6] = ((u32)(s32)(-32512) << 16);

label_7F1AD004:
    ctx->pc = 0x7F1AD004u;
    // 7F1AD004: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AD008:
    ctx->pc = 0x7F1AD008u;
    // 7F1AD008: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1AD00C:
    ctx->pc = 0x7F1AD00Cu;
    // 7F1AD00C: stw     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD010:
    ctx->pc = 0x7F1AD010u;
    // 7F1AD010: addi    r11, r4, 12860
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(12860);

label_7F1AD014:
    ctx->pc = 0x7F1AD014u;
    // 7F1AD014: lfs     f0, 6696(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD014u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AD018:
    ctx->pc = 0x7F1AD018u;
    // 7F1AD018: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AD01C:
    ctx->pc = 0x7F1AD01Cu;
    // 7F1AD01C: lwz     r9, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1AD020:
    ctx->pc = 0x7F1AD020u;
    // 7F1AD020: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F1AD024:
    ctx->pc = 0x7F1AD024u;
    // 7F1AD024: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD028:
    ctx->pc = 0x7F1AD028u;
    // 7F1AD028: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD02C:
    ctx->pc = 0x7F1AD02Cu;
    // 7F1AD02C: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD030:
    ctx->pc = 0x7F1AD030u;
    // 7F1AD030: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1AD034:
    ctx->pc = 0x7F1AD034u;
    // 7F1AD034: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1AD038:
    ctx->pc = 0x7F1AD038u;
    // 7F1AD038: rlwinm r8, r8, 0, 28, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x0000000Fu;
    }

label_7F1AD03C:
    ctx->pc = 0x7F1AD03Cu;
    // 7F1AD03C: stw     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD040:
    ctx->pc = 0x7F1AD040u;
    // 7F1AD040: stw     r7, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD044:
    ctx->pc = 0x7F1AD044u;
    // 7F1AD044: stw     r6, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD048:
    ctx->pc = 0x7F1AD048u;
    // 7F1AD048: stw     r6, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD04C:
    ctx->pc = 0x7F1AD04Cu;
    // 7F1AD04C: stw     r0, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD050:
    ctx->pc = 0x7F1AD050u;
    // 7F1AD050: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD054:
    ctx->pc = 0x7F1AD054u;
    // 7F1AD054: stw     r7, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD058:
    ctx->pc = 0x7F1AD058u;
    // 7F1AD058: b       0x7F1AD0DC
    {
            goto label_7F1AD0DC;
    }

label_7F1AD05C:
    ctx->pc = 0x7F1AD05Cu;
    ctx->downcount -= 11;
    // 7F1AD05C: lwz     r8, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD060:
    // 7F1AD060: addi    r7, r5, 72
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(72);

label_7F1AD064:
    // 7F1AD064: addi    r6, r4, 84
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(84);

label_7F1AD068:
    // 7F1AD068: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD06C:
    ctx->pc = 0x7F1AD06Cu;
    // 7F1AD06C: stfsx    f0, r8, r7
    if (!ppc_fp_available_inline(ctx, 0x7F1AD06Cu)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD070:
    // 7F1AD070: addi    r7, r11, -4
    ctx->gpr[7] = ctx->gpr[11] + (u32)(s32)(-4);

label_7F1AD074:
    ctx->pc = 0x7F1AD074u;
    // 7F1AD074: lwz     r8, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD078:
    // 7F1AD078: add   r8, r8, r6
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F1AD07C:
    ctx->pc = 0x7F1AD07Cu;
    // 7F1AD07C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD080:
    // 7F1AD080: addi    r8, r8, -4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-4);

label_7F1AD084:
    loop_7F1AD084(ctx);
    if (ctx->pc == 0x7F1AD098u) goto label_7F1AD098;
    return;
label_7F1AD088:
    ctx->pc = 0x7F1AD088u;
    // 7F1AD088: lwzu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

label_7F1AD08C:
    ctx->pc = 0x7F1AD08Cu;
    // 7F1AD08C: stw     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD090:
    ctx->pc = 0x7F1AD090u;
    // 7F1AD090: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

label_7F1AD094:
    // 7F1AD094: bc    16, 0, 0x7F1AD084
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD084u;
                return;
            }
            goto label_7F1AD084;
        }
    }

label_7F1AD098:
    ctx->pc = 0x7F1AD098u;
    ctx->downcount -= 17;
    // 7F1AD098: lwz     r6, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD09C:
    // 7F1AD09C: addi    r0, r4, 148
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(148);

label_7F1AD0A0:
    // 7F1AD0A0: li      r10, 255
    ctx->gpr[10] = (u32)(s32)(255);

label_7F1AD0A4:
    // 7F1AD0A4: addi    r8, r4, 152
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(152);

label_7F1AD0A8:
    ctx->pc = 0x7F1AD0A8u;
    // 7F1AD0A8: stwx    r10, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1AD0AC:
    // 7F1AD0AC: addi    r6, r4, 156
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(156);

label_7F1AD0B0:
    // 7F1AD0B0: addi    r0, r4, 160
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(160);

label_7F1AD0B4:
    // 7F1AD0B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AD0B8:
    ctx->pc = 0x7F1AD0B8u;
    // 7F1AD0B8: lwz     r9, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1AD0BC:
    // 7F1AD0BC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AD0C0:
    // 7F1AD0C0: addi    r4, r4, 80
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(80);

label_7F1AD0C4:
    // 7F1AD0C4: addi    r5, r5, 84
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(84);

label_7F1AD0C8:
    ctx->pc = 0x7F1AD0C8u;
    // 7F1AD0C8: stwx    r10, r9, r8
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1AD0CC:
    ctx->pc = 0x7F1AD0CCu;
    // 7F1AD0CC: lwz     r8, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD0D0:
    ctx->pc = 0x7F1AD0D0u;
    // 7F1AD0D0: stwx    r10, r8, r6
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1AD0D4:
    ctx->pc = 0x7F1AD0D4u;
    // 7F1AD0D4: lwz     r6, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD0D8:
    ctx->pc = 0x7F1AD0D8u;
    // 7F1AD0D8: stwx    r7, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD0DC:
    ctx->pc = 0x7F1AD0DCu;
    ctx->downcount -= 3;
    // 7F1AD0DC: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD0E0:
    // 7F1AD0E0: cmpw    r3, r0
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

label_7F1AD0E4:
    // 7F1AD0E4: bc    12, 0, 0x7F1AD05C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD05Cu;
                return;
            }
            goto label_7F1AD05C;
        }
    }

label_7F1AD0E8:
    ctx->pc = 0x7F1AD0E8u;
    ctx->downcount -= 1;
    // 7F1AD0E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD0EC:
    ctx->pc = 0x7F1AD0ECu;
    ctx->downcount -= 6;
    // 7F1AD0EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD0F0:
    ctx->pc = 0x7F1AD0F0u;
    // 7F1AD0F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AD0F4:
    ctx->pc = 0x7F1AD0F4u;
    // 7F1AD0F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AD0F8:
    ctx->pc = 0x7F1AD0F8u;
    // 7F1AD0F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AD0FC:
    ctx->pc = 0x7F1AD0FCu;
    // 7F1AD0FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD100:
    ctx->pc = 0x7F1AD100u;
    ctx->downcount -= 5;
    // 7F1AD100: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AD104:
    ctx->pc = 0x7F1AD104u;
    // 7F1AD104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AD108:
    ctx->pc = 0x7F1AD108u;
    // 7F1AD108: cmpwi   r4, 0
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

label_7F1AD10C:
    ctx->pc = 0x7F1AD10Cu;
    // 7F1AD10C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD110:
    ctx->pc = 0x7F1AD110u;
    // 7F1AD110: bc    12, 2, 0x7F1AD118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD118;
        }
    }

label_7F1AD114:
    ctx->pc = 0x7F1AD114u;
    ctx->downcount -= 1;
    // 7F1AD114: b       0x7F1AD260
    {
            goto label_7F1AD260;
    }

label_7F1AD118:
    ctx->pc = 0x7F1AD118u;
    ctx->downcount -= 4;
    // 7F1AD118: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD11C:
    ctx->pc = 0x7F1AD11Cu;
    // 7F1AD11C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD120:
    ctx->pc = 0x7F1AD120u;
    // 7F1AD120: cmpw    r0, r4
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

label_7F1AD124:
    ctx->pc = 0x7F1AD124u;
    // 7F1AD124: bc    4, 1, 0x7F1AD12C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD12C;
        }
    }

label_7F1AD128:
    ctx->pc = 0x7F1AD128u;
    ctx->downcount -= 1;
    // 7F1AD128: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD12C:
    ctx->pc = 0x7F1AD12Cu;
    ctx->downcount -= 45;
    // 7F1AD12C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD130:
    ctx->pc = 0x7F1AD130u;
    // 7F1AD130: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1AD134:
    ctx->pc = 0x7F1AD134u;
    // 7F1AD134: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1AD138:
    ctx->pc = 0x7F1AD138u;
    // 7F1AD138: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AD13C:
    ctx->pc = 0x7F1AD13Cu;
    // 7F1AD13C: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD140:
    ctx->pc = 0x7F1AD140u;
    // 7F1AD140: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD144:
    ctx->pc = 0x7F1AD144u;
    // 7F1AD144: lfs     f0, 6696(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD144u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AD148:
    ctx->pc = 0x7F1AD148u;
    // 7F1AD148: lwz     r8, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD14C:
    ctx->pc = 0x7F1AD14Cu;
    // 7F1AD14C: lfd     f1, 6704(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD14Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD150:
    ctx->pc = 0x7F1AD150u;
    // 7F1AD150: stw     r8, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD154:
    ctx->pc = 0x7F1AD154u;
    // 7F1AD154: stfs     f0, 148(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD154u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD158:
    ctx->pc = 0x7F1AD158u;
    // 7F1AD158: lwz     r7, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD15C:
    ctx->pc = 0x7F1AD15Cu;
    // 7F1AD15C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD160:
    ctx->pc = 0x7F1AD160u;
    // 7F1AD160: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F1AD164:
    ctx->pc = 0x7F1AD164u;
    // 7F1AD164: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD168:
    ctx->pc = 0x7F1AD168u;
    // 7F1AD168: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD16C:
    ctx->pc = 0x7F1AD16Cu;
    // 7F1AD16C: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD170:
    ctx->pc = 0x7F1AD170u;
    // 7F1AD170: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD170u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD174:
    ctx->pc = 0x7F1AD174u;
    // 7F1AD174: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD178:
    ctx->pc = 0x7F1AD178u;
    // 7F1AD178: stfs     f0, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD178u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD17C:
    ctx->pc = 0x7F1AD17Cu;
    // 7F1AD17C: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD180:
    ctx->pc = 0x7F1AD180u;
    // 7F1AD180: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD184:
    ctx->pc = 0x7F1AD184u;
    // 7F1AD184: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD188:
    ctx->pc = 0x7F1AD188u;
    // 7F1AD188: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD18C:
    ctx->pc = 0x7F1AD18Cu;
    // 7F1AD18C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD18Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD190:
    ctx->pc = 0x7F1AD190u;
    // 7F1AD190: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD190u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD194:
    ctx->pc = 0x7F1AD194u;
    // 7F1AD194: stfs     f0, 136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD198:
    ctx->pc = 0x7F1AD198u;
    // 7F1AD198: lwz     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD19C:
    ctx->pc = 0x7F1AD19Cu;
    // 7F1AD19C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD1A0:
    ctx->pc = 0x7F1AD1A0u;
    // 7F1AD1A0: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD1A4:
    ctx->pc = 0x7F1AD1A4u;
    // 7F1AD1A4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD1A8:
    ctx->pc = 0x7F1AD1A8u;
    // 7F1AD1A8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1A8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD1AC:
    ctx->pc = 0x7F1AD1ACu;
    // 7F1AD1AC: stfs     f0, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD1B0:
    ctx->pc = 0x7F1AD1B0u;
    // 7F1AD1B0: lwz     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD1B4:
    ctx->pc = 0x7F1AD1B4u;
    // 7F1AD1B4: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD1B8:
    ctx->pc = 0x7F1AD1B8u;
    // 7F1AD1B8: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD1BC:
    ctx->pc = 0x7F1AD1BCu;
    // 7F1AD1BC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD1C0:
    ctx->pc = 0x7F1AD1C0u;
    // 7F1AD1C0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1C0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD1C4:
    ctx->pc = 0x7F1AD1C4u;
    // 7F1AD1C4: stfs     f0, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD1C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD1C8:
    ctx->pc = 0x7F1AD1C8u;
    // 7F1AD1C8: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD1CC:
    ctx->pc = 0x7F1AD1CCu;
    // 7F1AD1CC: stw     r4, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD1D0:
    ctx->pc = 0x7F1AD1D0u;
    // 7F1AD1D0: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD1D4:
    ctx->pc = 0x7F1AD1D4u;
    // 7F1AD1D4: lwz     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD1D8:
    ctx->pc = 0x7F1AD1D8u;
    // 7F1AD1D8: cmpwi   r4, 2048
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AD1DC:
    ctx->pc = 0x7F1AD1DCu;
    // 7F1AD1DC: bc    12, 0, 0x7F1AD1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD1E4;
        }
    }

label_7F1AD1E0:
    ctx->pc = 0x7F1AD1E0u;
    ctx->downcount -= 1;
    // 7F1AD1E0: li      r4, 2047
    ctx->gpr[4] = (u32)(s32)(2047);

label_7F1AD1E4:
    ctx->pc = 0x7F1AD1E4u;
    ctx->downcount -= 13;
    // 7F1AD1E4: subfic  r5, r4, 4096
    {
        u64 res = (u64)(u32)(s32)(4096) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AD1E8:
    ctx->pc = 0x7F1AD1E8u;
    // 7F1AD1E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AD1EC:
    ctx->pc = 0x7F1AD1ECu;
    // 7F1AD1EC: stw     r5, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AD1F0:
    ctx->pc = 0x7F1AD1F0u;
    // 7F1AD1F0: rlwinm r7, r4, 1, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F1AD1F4:
    ctx->pc = 0x7F1AD1F4u;
    // 7F1AD1F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1AD1F8:
    ctx->pc = 0x7F1AD1F8u;
    // 7F1AD1F8: stw     r5, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AD1FC:
    ctx->pc = 0x7F1AD1FCu;
    // 7F1AD1FC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD200:
    ctx->pc = 0x7F1AD200u;
    // 7F1AD200: stw     r7, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD204:
    ctx->pc = 0x7F1AD204u;
    // 7F1AD204: stw     r7, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD208:
    ctx->pc = 0x7F1AD208u;
    // 7F1AD208: stw     r4, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD20C:
    ctx->pc = 0x7F1AD20Cu;
    // 7F1AD20C: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD210:
    ctx->pc = 0x7F1AD210u;
    // 7F1AD210: cmpwi   r0, 0
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

label_7F1AD214:
    ctx->pc = 0x7F1AD214u;
    // 7F1AD214: bc    4, 2, 0x7F1AD21C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD21C;
        }
    }

label_7F1AD218:
    ctx->pc = 0x7F1AD218u;
    ctx->downcount -= 1;
    // 7F1AD218: stw     r4, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD21C:
    ctx->pc = 0x7F1AD21Cu;
    ctx->downcount -= 3;
    // 7F1AD21C: lwz     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD220:
    ctx->pc = 0x7F1AD220u;
    // 7F1AD220: cmpwi   r0, 0
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

label_7F1AD224:
    ctx->pc = 0x7F1AD224u;
    // 7F1AD224: bc    4, 2, 0x7F1AD230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD230;
        }
    }

label_7F1AD228:
    ctx->pc = 0x7F1AD228u;
    ctx->downcount -= 2;
    // 7F1AD228: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD22C:
    ctx->pc = 0x7F1AD22Cu;
    // 7F1AD22C: stw     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD230:
    ctx->pc = 0x7F1AD230u;
    ctx->downcount -= 5;
    // 7F1AD230: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD234:
    ctx->pc = 0x7F1AD234u;
    // 7F1AD234: addi    r7, r3, 44
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(44);

label_7F1AD238:
    ctx->pc = 0x7F1AD238u;
    // 7F1AD238: addi    r5, r6, -4
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4);

label_7F1AD23C:
    ctx->pc = 0x7F1AD23Cu;
    // 7F1AD23C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD240:
    loop_7F1AD240(ctx);
    if (ctx->pc == 0x7F1AD254u) goto label_7F1AD254;
    return;
label_7F1AD244:
    ctx->pc = 0x7F1AD244u;
    // 7F1AD244: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F1AD248:
    ctx->pc = 0x7F1AD248u;
    // 7F1AD248: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD24C:
    ctx->pc = 0x7F1AD24Cu;
    // 7F1AD24C: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F1AD250:
    // 7F1AD250: bc    16, 0, 0x7F1AD240
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD240u;
                return;
            }
            goto label_7F1AD240;
        }
    }

label_7F1AD254:
    ctx->pc = 0x7F1AD254u;
    ctx->downcount -= 3;
    // 7F1AD254: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AD258:
    ctx->pc = 0x7F1AD258u;
    // 7F1AD258: stw     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD25C:
    ctx->pc = 0x7F1AD25Cu;
    // 7F1AD25C: bl      0x7F1AC4D0
    {
            ctx->lr = 0x7F1AD260u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC4D0u;
                return;
            }
            goto label_7F1AC4D0;
    }

label_7F1AD260:
    ctx->pc = 0x7F1AD260u;
    ctx->downcount -= 5;
    // 7F1AD260: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD264:
    ctx->pc = 0x7F1AD264u;
    // 7F1AD264: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AD268:
    ctx->pc = 0x7F1AD268u;
    // 7F1AD268: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AD26C:
    ctx->pc = 0x7F1AD26Cu;
    // 7F1AD26C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD270:
    ctx->pc = 0x7F1AD270u;
    ctx->downcount -= 6;
    // 7F1AD270: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AD274:
    ctx->pc = 0x7F1AD274u;
    // 7F1AD274: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AD278:
    ctx->pc = 0x7F1AD278u;
    // 7F1AD278: cmpwi   r4, 3
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AD27C:
    ctx->pc = 0x7F1AD27Cu;
    // 7F1AD27C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD280:
    ctx->pc = 0x7F1AD280u;
    // 7F1AD280: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AD284:
    ctx->pc = 0x7F1AD284u;
    // 7F1AD284: bc    12, 2, 0x7F1AD6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD6D8;
        }
    }

label_7F1AD288:
    ctx->pc = 0x7F1AD288u;
    ctx->downcount -= 1;
    // 7F1AD288: bc    4, 0, 0x7F1AD2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD2A4;
        }
    }

label_7F1AD28C:
    ctx->pc = 0x7F1AD28Cu;
    ctx->downcount -= 2;
    // 7F1AD28C: cmpwi   r4, 1
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

label_7F1AD290:
    ctx->pc = 0x7F1AD290u;
    // 7F1AD290: bc    12, 2, 0x7F1AD3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD3EC;
        }
    }

label_7F1AD294:
    ctx->pc = 0x7F1AD294u;
    ctx->downcount -= 1;
    // 7F1AD294: bc    4, 0, 0x7F1AD540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD540;
        }
    }

label_7F1AD298:
    ctx->pc = 0x7F1AD298u;
    ctx->downcount -= 2;
    // 7F1AD298: cmpwi   r4, 0
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

label_7F1AD29C:
    ctx->pc = 0x7F1AD29Cu;
    // 7F1AD29C: bc    4, 0, 0x7F1AD2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD2C4;
        }
    }

label_7F1AD2A0:
    ctx->pc = 0x7F1AD2A0u;
    ctx->downcount -= 1;
    // 7F1AD2A0: b       0x7F1AD6D8
    {
            goto label_7F1AD6D8;
    }

label_7F1AD2A4:
    ctx->pc = 0x7F1AD2A4u;
    ctx->downcount -= 4;
    // 7F1AD2A4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1AD2A8:
    ctx->pc = 0x7F1AD2A8u;
    // 7F1AD2A8: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1AD2AC:
    ctx->pc = 0x7F1AD2ACu;
    // 7F1AD2AC: cmpw    r4, r0
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

label_7F1AD2B0:
    ctx->pc = 0x7F1AD2B0u;
    // 7F1AD2B0: bc    12, 2, 0x7F1AD6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD6B0;
        }
    }

label_7F1AD2B4:
    ctx->pc = 0x7F1AD2B4u;
    ctx->downcount -= 1;
    // 7F1AD2B4: bc    4, 0, 0x7F1AD6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD6D8;
        }
    }

label_7F1AD2B8:
    ctx->pc = 0x7F1AD2B8u;
    ctx->downcount -= 2;
    // 7F1AD2B8: cmpwi   r4, 5
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

label_7F1AD2BC:
    ctx->pc = 0x7F1AD2BCu;
    // 7F1AD2BC: bc    4, 0, 0x7F1AD6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD6D8;
        }
    }

label_7F1AD2C0:
    ctx->pc = 0x7F1AD2C0u;
    ctx->downcount -= 1;
    // 7F1AD2C0: b       0x7F1AD690
    {
            goto label_7F1AD690;
    }

label_7F1AD2C4:
    ctx->pc = 0x7F1AD2C4u;
    ctx->downcount -= 4;
    // 7F1AD2C4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD2C8:
    ctx->pc = 0x7F1AD2C8u;
    // 7F1AD2C8: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD2CC:
    ctx->pc = 0x7F1AD2CCu;
    // 7F1AD2CC: cmpw    r0, r4
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

label_7F1AD2D0:
    ctx->pc = 0x7F1AD2D0u;
    // 7F1AD2D0: bc    4, 1, 0x7F1AD2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD2D8;
        }
    }

label_7F1AD2D4:
    ctx->pc = 0x7F1AD2D4u;
    ctx->downcount -= 1;
    // 7F1AD2D4: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD2D8:
    ctx->pc = 0x7F1AD2D8u;
    ctx->downcount -= 45;
    // 7F1AD2D8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD2DC:
    ctx->pc = 0x7F1AD2DCu;
    // 7F1AD2DC: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1AD2E0:
    ctx->pc = 0x7F1AD2E0u;
    // 7F1AD2E0: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AD2E4:
    ctx->pc = 0x7F1AD2E4u;
    // 7F1AD2E4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AD2E8:
    ctx->pc = 0x7F1AD2E8u;
    // 7F1AD2E8: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD2EC:
    ctx->pc = 0x7F1AD2ECu;
    // 7F1AD2EC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD2F0:
    ctx->pc = 0x7F1AD2F0u;
    // 7F1AD2F0: lfs     f0, 6696(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD2F0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AD2F4:
    ctx->pc = 0x7F1AD2F4u;
    // 7F1AD2F4: lwz     r7, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD2F8:
    ctx->pc = 0x7F1AD2F8u;
    // 7F1AD2F8: lfd     f1, 6704(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD2F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD2FC:
    ctx->pc = 0x7F1AD2FCu;
    // 7F1AD2FC: stw     r7, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD300:
    ctx->pc = 0x7F1AD300u;
    // 7F1AD300: stfs     f0, 148(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD300u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD304:
    ctx->pc = 0x7F1AD304u;
    // 7F1AD304: lwz     r6, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD308:
    ctx->pc = 0x7F1AD308u;
    // 7F1AD308: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD30C:
    ctx->pc = 0x7F1AD30Cu;
    // 7F1AD30C: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1AD310:
    ctx->pc = 0x7F1AD310u;
    // 7F1AD310: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD314:
    ctx->pc = 0x7F1AD314u;
    // 7F1AD314: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD314u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD318:
    ctx->pc = 0x7F1AD318u;
    // 7F1AD318: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD31C:
    ctx->pc = 0x7F1AD31Cu;
    // 7F1AD31C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD31Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD320:
    ctx->pc = 0x7F1AD320u;
    // 7F1AD320: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD324:
    ctx->pc = 0x7F1AD324u;
    // 7F1AD324: stfs     f0, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD324u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD328:
    ctx->pc = 0x7F1AD328u;
    // 7F1AD328: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD32C:
    ctx->pc = 0x7F1AD32Cu;
    // 7F1AD32C: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD330:
    ctx->pc = 0x7F1AD330u;
    // 7F1AD330: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD334:
    ctx->pc = 0x7F1AD334u;
    // 7F1AD334: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD338:
    ctx->pc = 0x7F1AD338u;
    // 7F1AD338: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD33C:
    ctx->pc = 0x7F1AD33Cu;
    // 7F1AD33C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD33Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD340:
    ctx->pc = 0x7F1AD340u;
    // 7F1AD340: stfs     f0, 136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD340u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD344:
    ctx->pc = 0x7F1AD344u;
    // 7F1AD344: lwz     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD348:
    ctx->pc = 0x7F1AD348u;
    // 7F1AD348: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD34C:
    ctx->pc = 0x7F1AD34Cu;
    // 7F1AD34C: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD350:
    ctx->pc = 0x7F1AD350u;
    // 7F1AD350: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD354:
    ctx->pc = 0x7F1AD354u;
    // 7F1AD354: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD354u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD358:
    ctx->pc = 0x7F1AD358u;
    // 7F1AD358: stfs     f0, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD35C:
    ctx->pc = 0x7F1AD35Cu;
    // 7F1AD35C: lwz     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD360:
    ctx->pc = 0x7F1AD360u;
    // 7F1AD360: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD364:
    ctx->pc = 0x7F1AD364u;
    // 7F1AD364: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD368:
    ctx->pc = 0x7F1AD368u;
    // 7F1AD368: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD36C:
    ctx->pc = 0x7F1AD36Cu;
    // 7F1AD36C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD36Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AD370:
    ctx->pc = 0x7F1AD370u;
    // 7F1AD370: stfs     f0, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD370u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD374:
    ctx->pc = 0x7F1AD374u;
    // 7F1AD374: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD378:
    ctx->pc = 0x7F1AD378u;
    // 7F1AD378: stw     r4, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD37C:
    ctx->pc = 0x7F1AD37Cu;
    // 7F1AD37C: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD380:
    ctx->pc = 0x7F1AD380u;
    // 7F1AD380: lwz     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD384:
    ctx->pc = 0x7F1AD384u;
    // 7F1AD384: cmpwi   r4, 2048
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AD388:
    ctx->pc = 0x7F1AD388u;
    // 7F1AD388: bc    12, 0, 0x7F1AD390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD390;
        }
    }

label_7F1AD38C:
    ctx->pc = 0x7F1AD38Cu;
    ctx->downcount -= 1;
    // 7F1AD38C: li      r4, 2047
    ctx->gpr[4] = (u32)(s32)(2047);

label_7F1AD390:
    ctx->pc = 0x7F1AD390u;
    ctx->downcount -= 13;
    // 7F1AD390: subfic  r5, r4, 4096
    {
        u64 res = (u64)(u32)(s32)(4096) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AD394:
    ctx->pc = 0x7F1AD394u;
    // 7F1AD394: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AD398:
    ctx->pc = 0x7F1AD398u;
    // 7F1AD398: stw     r5, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AD39C:
    ctx->pc = 0x7F1AD39Cu;
    // 7F1AD39C: rlwinm r6, r4, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F1AD3A0:
    ctx->pc = 0x7F1AD3A0u;
    // 7F1AD3A0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1AD3A4:
    ctx->pc = 0x7F1AD3A4u;
    // 7F1AD3A4: stw     r5, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AD3A8:
    ctx->pc = 0x7F1AD3A8u;
    // 7F1AD3A8: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD3AC:
    ctx->pc = 0x7F1AD3ACu;
    // 7F1AD3AC: stw     r6, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD3B0:
    ctx->pc = 0x7F1AD3B0u;
    // 7F1AD3B0: stw     r6, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD3B4:
    ctx->pc = 0x7F1AD3B4u;
    // 7F1AD3B4: stw     r4, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD3B8:
    ctx->pc = 0x7F1AD3B8u;
    // 7F1AD3B8: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD3BC:
    ctx->pc = 0x7F1AD3BCu;
    // 7F1AD3BC: cmpwi   r0, 0
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

label_7F1AD3C0:
    ctx->pc = 0x7F1AD3C0u;
    // 7F1AD3C0: bc    4, 2, 0x7F1AD3C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD3C8;
        }
    }

label_7F1AD3C4:
    ctx->pc = 0x7F1AD3C4u;
    ctx->downcount -= 1;
    // 7F1AD3C4: stw     r4, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD3C8:
    ctx->pc = 0x7F1AD3C8u;
    ctx->downcount -= 3;
    // 7F1AD3C8: lwz     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD3CC:
    ctx->pc = 0x7F1AD3CCu;
    // 7F1AD3CC: cmpwi   r0, 0
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

label_7F1AD3D0:
    ctx->pc = 0x7F1AD3D0u;
    // 7F1AD3D0: bc    4, 2, 0x7F1AD3DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD3DC;
        }
    }

label_7F1AD3D4:
    ctx->pc = 0x7F1AD3D4u;
    ctx->downcount -= 2;
    // 7F1AD3D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD3D8:
    ctx->pc = 0x7F1AD3D8u;
    // 7F1AD3D8: stw     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD3DC:
    ctx->pc = 0x7F1AD3DCu;
    ctx->downcount -= 3;
    // 7F1AD3DC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F1AD3E0:
    ctx->pc = 0x7F1AD3E0u;
    // 7F1AD3E0: stw     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD3E4:
    ctx->pc = 0x7F1AD3E4u;
    // 7F1AD3E4: bl      0x7F1AC4D0
    {
            ctx->lr = 0x7F1AD3E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC4D0u;
                return;
            }
            goto label_7F1AC4D0;
    }

label_7F1AD3E8:
    ctx->pc = 0x7F1AD3E8u;
    ctx->downcount -= 1;
    // 7F1AD3E8: b       0x7F1AD6E0
    {
            goto label_7F1AD6E0;
    }

label_7F1AD3EC:
    ctx->pc = 0x7F1AD3ECu;
    ctx->downcount -= 124;
    // 7F1AD3EC: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD3F0:
    ctx->pc = 0x7F1AD3F0u;
    // 7F1AD3F0: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F1AD3F4:
    ctx->pc = 0x7F1AD3F4u;
    // 7F1AD3F4: lwz     r0, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD3F8:
    ctx->pc = 0x7F1AD3F8u;
    // 7F1AD3F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AD3FC:
    ctx->pc = 0x7F1AD3FCu;
    // 7F1AD3FC: lwz     r7, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD400:
    ctx->pc = 0x7F1AD400u;
    // 7F1AD400: divw   r6, r6, r0
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1AD404:
    ctx->pc = 0x7F1AD404u;
    // 7F1AD404: lwz     r10, 204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(204);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1AD408:
    ctx->pc = 0x7F1AD408u;
    // 7F1AD408: lfd     f3, 6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD408u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6704);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD40C:
    ctx->pc = 0x7F1AD40Cu;
    // 7F1AD40C: rlwinm r9, r7, 16, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0x000000FFu;
    }

label_7F1AD410:
    ctx->pc = 0x7F1AD410u;
    // 7F1AD410: rlwinm r0, r10, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 16u) & 0x000000FFu;
    }

label_7F1AD414:
    ctx->pc = 0x7F1AD414u;
    // 7F1AD414: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD418:
    ctx->pc = 0x7F1AD418u;
    // 7F1AD418: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1AD41C:
    ctx->pc = 0x7F1AD41Cu;
    // 7F1AD41C: subf   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AD420:
    ctx->pc = 0x7F1AD420u;
    // 7F1AD420: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD424:
    ctx->pc = 0x7F1AD424u;
    // 7F1AD424: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AD428:
    ctx->pc = 0x7F1AD428u;
    // 7F1AD428: rlwinm r11, r7, 8, 24, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0x000000FFu;
    }

label_7F1AD42C:
    ctx->pc = 0x7F1AD42Cu;
    // 7F1AD42C: rlwinm r4, r10, 8, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[10], 8u) & 0x000000FFu;
    }

label_7F1AD430:
    ctx->pc = 0x7F1AD430u;
    // 7F1AD430: subf   r4, r11, r4
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1AD434:
    ctx->pc = 0x7F1AD434u;
    // 7F1AD434: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD438:
    ctx->pc = 0x7F1AD438u;
    // 7F1AD438: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD43C:
    ctx->pc = 0x7F1AD43Cu;
    // 7F1AD43C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD440:
    ctx->pc = 0x7F1AD440u;
    // 7F1AD440: rlwinm r12, r7, 24, 24, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0x000000FFu;
    }

label_7F1AD444:
    ctx->pc = 0x7F1AD444u;
    // 7F1AD444: rlwinm r6, r10, 24, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 24u) & 0x000000FFu;
    }

label_7F1AD448:
    ctx->pc = 0x7F1AD448u;
    // 7F1AD448: stw     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD44C:
    ctx->pc = 0x7F1AD44Cu;
    // 7F1AD44C: subf   r0, r12, r6
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AD450:
    ctx->pc = 0x7F1AD450u;
    // 7F1AD450: fsubs   f4, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD450u)) return;
    ppc_fsubs(ctx, 4, 1, 3);

label_7F1AD454:
    ctx->pc = 0x7F1AD454u;
    // 7F1AD454: rlwinm r31, r7, 0, 24, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_7F1AD458:
    ctx->pc = 0x7F1AD458u;
    // 7F1AD458: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD458u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD45C:
    ctx->pc = 0x7F1AD45Cu;
    // 7F1AD45C: rlwinm r6, r10, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 0u) & 0x000000FFu;
    }

label_7F1AD460:
    ctx->pc = 0x7F1AD460u;
    // 7F1AD460: subf   r7, r31, r6
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F1AD464:
    ctx->pc = 0x7F1AD464u;
    // 7F1AD464: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD468:
    ctx->pc = 0x7F1AD468u;
    // 7F1AD468: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AD46C:
    ctx->pc = 0x7F1AD46Cu;
    // 7F1AD46C: stw     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD470:
    ctx->pc = 0x7F1AD470u;
    // 7F1AD470: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD470u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1AD474:
    ctx->pc = 0x7F1AD474u;
    // 7F1AD474: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F1AD478:
    ctx->pc = 0x7F1AD478u;
    // 7F1AD478: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD478u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD47C:
    ctx->pc = 0x7F1AD47Cu;
    // 7F1AD47C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD480:
    ctx->pc = 0x7F1AD480u;
    // 7F1AD480: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD484:
    ctx->pc = 0x7F1AD484u;
    // 7F1AD484: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD484u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F1AD488:
    ctx->pc = 0x7F1AD488u;
    // 7F1AD488: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD488u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F1AD48C:
    ctx->pc = 0x7F1AD48Cu;
    // 7F1AD48C: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD490:
    ctx->pc = 0x7F1AD490u;
    // 7F1AD490: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD490u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD494:
    ctx->pc = 0x7F1AD494u;
    // 7F1AD494: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD494u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD498:
    ctx->pc = 0x7F1AD498u;
    // 7F1AD498: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD498u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_7F1AD49C:
    ctx->pc = 0x7F1AD49Cu;
    // 7F1AD49C: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD4A0:
    ctx->pc = 0x7F1AD4A0u;
    // 7F1AD4A0: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4A0u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1AD4A4:
    ctx->pc = 0x7F1AD4A4u;
    // 7F1AD4A4: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD4A8:
    ctx->pc = 0x7F1AD4A8u;
    // 7F1AD4A8: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD4AC:
    ctx->pc = 0x7F1AD4ACu;
    // 7F1AD4AC: fmuls   f1, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4ACu)) return;
    ppc_fmuls(ctx, 1, 4, 2);

label_7F1AD4B0:
    ctx->pc = 0x7F1AD4B0u;
    // 7F1AD4B0: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD4B4:
    ctx->pc = 0x7F1AD4B4u;
    // 7F1AD4B4: lwz     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD4B8:
    ctx->pc = 0x7F1AD4B8u;
    // 7F1AD4B8: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD4BC:
    ctx->pc = 0x7F1AD4BCu;
    // 7F1AD4BC: lfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD4C0:
    ctx->pc = 0x7F1AD4C0u;
    // 7F1AD4C0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1AD4C4:
    ctx->pc = 0x7F1AD4C4u;
    // 7F1AD4C4: lwz     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD4C8:
    ctx->pc = 0x7F1AD4C8u;
    // 7F1AD4C8: add   r4, r9, r4
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1AD4CC:
    ctx->pc = 0x7F1AD4CCu;
    // 7F1AD4CC: fsubs   f0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4CCu)) return;
    ppc_fsubs(ctx, 0, 2, 3);

label_7F1AD4D0:
    ctx->pc = 0x7F1AD4D0u;
    // 7F1AD4D0: rlwinm r4, r4, 16, 8, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x00FF0000u;
    }

label_7F1AD4D4:
    ctx->pc = 0x7F1AD4D4u;
    // 7F1AD4D4: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1AD4D8:
    ctx->pc = 0x7F1AD4D8u;
    // 7F1AD4D8: add   r6, r11, r6
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1AD4DC:
    ctx->pc = 0x7F1AD4DCu;
    // 7F1AD4DC: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4DCu)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F1AD4E0:
    ctx->pc = 0x7F1AD4E0u;
    // 7F1AD4E0: lwz     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD4E4:
    ctx->pc = 0x7F1AD4E4u;
    // 7F1AD4E4: rlwimi r4, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F1AD4E8:
    ctx->pc = 0x7F1AD4E8u;
    // 7F1AD4E8: add   r7, r12, r7
    {
        u32 a = ctx->gpr[12];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1AD4EC:
    ctx->pc = 0x7F1AD4ECu;
    // 7F1AD4EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD4F0:
    ctx->pc = 0x7F1AD4F0u;
    // 7F1AD4F0: rlwimi r4, r7, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 8u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F1AD4F4:
    ctx->pc = 0x7F1AD4F4u;
    // 7F1AD4F4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD4F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD4F8:
    ctx->pc = 0x7F1AD4F8u;
    // 7F1AD4F8: lwz     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD4FC:
    ctx->pc = 0x7F1AD4FCu;
    // 7F1AD4FC: add   r6, r31, r6
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1AD500:
    ctx->pc = 0x7F1AD500u;
    // 7F1AD500: rlwimi r4, r6, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 0u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_7F1AD504:
    ctx->pc = 0x7F1AD504u;
    // 7F1AD504: stw     r4, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD508:
    ctx->pc = 0x7F1AD508u;
    // 7F1AD508: lwz     r6, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD50C:
    ctx->pc = 0x7F1AD50Cu;
    // 7F1AD50C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD510:
    ctx->pc = 0x7F1AD510u;
    // 7F1AD510: rlwinm r6, r6, 16, 8, 15
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 16u) & 0x00FF0000u;
    }

label_7F1AD514:
    ctx->pc = 0x7F1AD514u;
    // 7F1AD514: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD518:
    ctx->pc = 0x7F1AD518u;
    // 7F1AD518: oris    r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] | (0x8000u << 16);

label_7F1AD51C:
    ctx->pc = 0x7F1AD51Cu;
    // 7F1AD51C: rlwinm r4, r4, 8, 16, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0x0000FF00u;
    }

label_7F1AD520:
    ctx->pc = 0x7F1AD520u;
    // 7F1AD520: rlwinm r7, r7, 0, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_7F1AD524:
    ctx->pc = 0x7F1AD524u;
    // 7F1AD524: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_7F1AD528:
    ctx->pc = 0x7F1AD528u;
    // 7F1AD528: or   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[4];
    }

label_7F1AD52C:
    ctx->pc = 0x7F1AD52Cu;
    // 7F1AD52C: stw     r4, 204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD530:
    ctx->pc = 0x7F1AD530u;
    // 7F1AD530: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD534:
    ctx->pc = 0x7F1AD534u;
    // 7F1AD534: stw     r4, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD538:
    ctx->pc = 0x7F1AD538u;
    // 7F1AD538: stw     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD53C:
    ctx->pc = 0x7F1AD53Cu;
    // 7F1AD53C: b       0x7F1AD6E0
    {
            goto label_7F1AD6E0;
    }

label_7F1AD540:
    ctx->pc = 0x7F1AD540u;
    ctx->downcount -= 123;
    // 7F1AD540: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD544:
    ctx->pc = 0x7F1AD544u;
    // 7F1AD544: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F1AD548:
    ctx->pc = 0x7F1AD548u;
    // 7F1AD548: lwz     r0, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD54C:
    ctx->pc = 0x7F1AD54Cu;
    // 7F1AD54C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AD550:
    ctx->pc = 0x7F1AD550u;
    // 7F1AD550: lwz     r9, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1AD554:
    ctx->pc = 0x7F1AD554u;
    // 7F1AD554: divw   r6, r6, r0
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1AD558:
    ctx->pc = 0x7F1AD558u;
    // 7F1AD558: lwz     r10, 204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(204);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1AD55C:
    ctx->pc = 0x7F1AD55Cu;
    // 7F1AD55C: lfd     f3, 6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD55Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6704);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD560:
    ctx->pc = 0x7F1AD560u;
    // 7F1AD560: rlwinm r8, r9, 16, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[9], 16u) & 0x000000FFu;
    }

label_7F1AD564:
    ctx->pc = 0x7F1AD564u;
    // 7F1AD564: rlwinm r0, r10, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 16u) & 0x000000FFu;
    }

label_7F1AD568:
    ctx->pc = 0x7F1AD568u;
    // 7F1AD568: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD56C:
    ctx->pc = 0x7F1AD56Cu;
    // 7F1AD56C: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1AD570:
    ctx->pc = 0x7F1AD570u;
    // 7F1AD570: subf   r0, r8, r0
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AD574:
    ctx->pc = 0x7F1AD574u;
    // 7F1AD574: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD578:
    ctx->pc = 0x7F1AD578u;
    // 7F1AD578: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AD57C:
    ctx->pc = 0x7F1AD57Cu;
    // 7F1AD57C: rlwinm r11, r9, 8, 24, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[9], 8u) & 0x000000FFu;
    }

label_7F1AD580:
    ctx->pc = 0x7F1AD580u;
    // 7F1AD580: rlwinm r4, r10, 8, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[10], 8u) & 0x000000FFu;
    }

label_7F1AD584:
    ctx->pc = 0x7F1AD584u;
    // 7F1AD584: subf   r4, r11, r4
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1AD588:
    ctx->pc = 0x7F1AD588u;
    // 7F1AD588: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD588u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD58C:
    ctx->pc = 0x7F1AD58Cu;
    // 7F1AD58C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AD590:
    ctx->pc = 0x7F1AD590u;
    // 7F1AD590: rlwinm r12, r9, 24, 24, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[9], 24u) & 0x000000FFu;
    }

label_7F1AD594:
    ctx->pc = 0x7F1AD594u;
    // 7F1AD594: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD598:
    ctx->pc = 0x7F1AD598u;
    // 7F1AD598: rlwinm r6, r10, 24, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 24u) & 0x000000FFu;
    }

label_7F1AD59C:
    ctx->pc = 0x7F1AD59Cu;
    // 7F1AD59C: subf   r0, r12, r6
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AD5A0:
    ctx->pc = 0x7F1AD5A0u;
    // 7F1AD5A0: fsubs   f4, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5A0u)) return;
    ppc_fsubs(ctx, 4, 1, 3);

label_7F1AD5A4:
    ctx->pc = 0x7F1AD5A4u;
    // 7F1AD5A4: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD5A8:
    ctx->pc = 0x7F1AD5A8u;
    // 7F1AD5A8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AD5AC:
    ctx->pc = 0x7F1AD5ACu;
    // 7F1AD5AC: rlwinm r9, r9, 0, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x000000FFu;
    }

label_7F1AD5B0:
    ctx->pc = 0x7F1AD5B0u;
    // 7F1AD5B0: rlwinm r6, r10, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 0u) & 0x000000FFu;
    }

label_7F1AD5B4:
    ctx->pc = 0x7F1AD5B4u;
    // 7F1AD5B4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD5B8:
    ctx->pc = 0x7F1AD5B8u;
    // 7F1AD5B8: subf   r6, r9, r6
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1AD5BC:
    ctx->pc = 0x7F1AD5BCu;
    // 7F1AD5BC: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD5C0:
    ctx->pc = 0x7F1AD5C0u;
    // 7F1AD5C0: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5C0u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1AD5C4:
    ctx->pc = 0x7F1AD5C4u;
    // 7F1AD5C4: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1AD5C8:
    ctx->pc = 0x7F1AD5C8u;
    // 7F1AD5C8: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD5CC:
    ctx->pc = 0x7F1AD5CCu;
    // 7F1AD5CC: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD5D0:
    ctx->pc = 0x7F1AD5D0u;
    // 7F1AD5D0: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5D0u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F1AD5D4:
    ctx->pc = 0x7F1AD5D4u;
    // 7F1AD5D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD5D8:
    ctx->pc = 0x7F1AD5D8u;
    // 7F1AD5D8: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5D8u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F1AD5DC:
    ctx->pc = 0x7F1AD5DCu;
    // 7F1AD5DC: stw     r7, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD5E0:
    ctx->pc = 0x7F1AD5E0u;
    // 7F1AD5E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD5E4:
    ctx->pc = 0x7F1AD5E4u;
    // 7F1AD5E4: lfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD5E8:
    ctx->pc = 0x7F1AD5E8u;
    // 7F1AD5E8: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5E8u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_7F1AD5EC:
    ctx->pc = 0x7F1AD5ECu;
    // 7F1AD5EC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD5F0:
    ctx->pc = 0x7F1AD5F0u;
    // 7F1AD5F0: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5F0u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1AD5F4:
    ctx->pc = 0x7F1AD5F4u;
    // 7F1AD5F4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD5F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD5F8:
    ctx->pc = 0x7F1AD5F8u;
    // 7F1AD5F8: stw     r6, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD5FC:
    ctx->pc = 0x7F1AD5FCu;
    // 7F1AD5FC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD600:
    ctx->pc = 0x7F1AD600u;
    // 7F1AD600: fmuls   f1, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AD600u)) return;
    ppc_fmuls(ctx, 1, 4, 2);

label_7F1AD604:
    ctx->pc = 0x7F1AD604u;
    // 7F1AD604: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD608:
    ctx->pc = 0x7F1AD608u;
    // 7F1AD608: add   r0, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1AD60C:
    ctx->pc = 0x7F1AD60Cu;
    // 7F1AD60C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD60Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD610:
    ctx->pc = 0x7F1AD610u;
    // 7F1AD610: rlwinm r0, r0, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00FF0000u;
    }

label_7F1AD614:
    ctx->pc = 0x7F1AD614u;
    // 7F1AD614: lfd     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD618:
    ctx->pc = 0x7F1AD618u;
    // 7F1AD618: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD618u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1AD61C:
    ctx->pc = 0x7F1AD61Cu;
    // 7F1AD61C: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD620:
    ctx->pc = 0x7F1AD620u;
    // 7F1AD620: fsubs   f0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD620u)) return;
    ppc_fsubs(ctx, 0, 2, 3);

label_7F1AD624:
    ctx->pc = 0x7F1AD624u;
    // 7F1AD624: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1AD628:
    ctx->pc = 0x7F1AD628u;
    // 7F1AD628: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD628u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1AD62C:
    ctx->pc = 0x7F1AD62Cu;
    // 7F1AD62C: rlwimi r0, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F1AD630:
    ctx->pc = 0x7F1AD630u;
    // 7F1AD630: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD630u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F1AD634:
    ctx->pc = 0x7F1AD634u;
    // 7F1AD634: lwz     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD638:
    ctx->pc = 0x7F1AD638u;
    // 7F1AD638: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD638u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AD63C:
    ctx->pc = 0x7F1AD63Cu;
    // 7F1AD63C: add   r6, r12, r6
    {
        u32 a = ctx->gpr[12];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1AD640:
    ctx->pc = 0x7F1AD640u;
    // 7F1AD640: rlwimi r0, r6, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F1AD644:
    ctx->pc = 0x7F1AD644u;
    // 7F1AD644: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AD648:
    ctx->pc = 0x7F1AD648u;
    // 7F1AD648: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD64C:
    ctx->pc = 0x7F1AD64Cu;
    // 7F1AD64C: add   r4, r9, r4
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1AD650:
    ctx->pc = 0x7F1AD650u;
    // 7F1AD650: rlwimi r0, r4, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_7F1AD654:
    ctx->pc = 0x7F1AD654u;
    // 7F1AD654: stw     r0, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD658:
    ctx->pc = 0x7F1AD658u;
    // 7F1AD658: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD65C:
    ctx->pc = 0x7F1AD65Cu;
    // 7F1AD65C: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD660:
    ctx->pc = 0x7F1AD660u;
    // 7F1AD660: rlwinm r0, r0, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00FF0000u;
    }

label_7F1AD664:
    ctx->pc = 0x7F1AD664u;
    // 7F1AD664: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD668:
    ctx->pc = 0x7F1AD668u;
    // 7F1AD668: rlwimi r0, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F1AD66C:
    ctx->pc = 0x7F1AD66Cu;
    // 7F1AD66C: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD670:
    ctx->pc = 0x7F1AD670u;
    // 7F1AD670: rlwimi r0, r6, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F1AD674:
    ctx->pc = 0x7F1AD674u;
    // 7F1AD674: rlwimi r0, r7, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_7F1AD678:
    ctx->pc = 0x7F1AD678u;
    // 7F1AD678: stw     r0, 204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD67C:
    ctx->pc = 0x7F1AD67Cu;
    // 7F1AD67C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AD680:
    ctx->pc = 0x7F1AD680u;
    // 7F1AD680: lwz     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD684:
    ctx->pc = 0x7F1AD684u;
    // 7F1AD684: stw     r4, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD688:
    ctx->pc = 0x7F1AD688u;
    // 7F1AD688: stw     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD68C:
    ctx->pc = 0x7F1AD68Cu;
    // 7F1AD68C: b       0x7F1AD6E0
    {
            goto label_7F1AD6E0;
    }

label_7F1AD690:
    ctx->pc = 0x7F1AD690u;
    ctx->downcount -= 5;
    // 7F1AD690: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD694:
    ctx->pc = 0x7F1AD694u;
    // 7F1AD694: stw     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD698:
    ctx->pc = 0x7F1AD698u;
    // 7F1AD698: lwz     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD69C:
    ctx->pc = 0x7F1AD69Cu;
    // 7F1AD69C: cmpwi   r0, 3
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

label_7F1AD6A0:
    ctx->pc = 0x7F1AD6A0u;
    // 7F1AD6A0: bc    12, 0, 0x7F1AD6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD6E0;
        }
    }

label_7F1AD6A4:
    ctx->pc = 0x7F1AD6A4u;
    ctx->downcount -= 3;
    // 7F1AD6A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AD6A8:
    ctx->pc = 0x7F1AD6A8u;
    // 7F1AD6A8: stw     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD6AC:
    ctx->pc = 0x7F1AD6ACu;
    // 7F1AD6AC: b       0x7F1AD6E0
    {
            goto label_7F1AD6E0;
    }

label_7F1AD6B0:
    ctx->pc = 0x7F1AD6B0u;
    ctx->downcount -= 5;
    // 7F1AD6B0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD6B4:
    ctx->pc = 0x7F1AD6B4u;
    // 7F1AD6B4: addi    r6, r3, 44
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(44);

label_7F1AD6B8:
    ctx->pc = 0x7F1AD6B8u;
    // 7F1AD6B8: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1AD6BC:
    ctx->pc = 0x7F1AD6BCu;
    // 7F1AD6BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD6C0:
    loop_7F1AD6C0(ctx);
    if (ctx->pc == 0x7F1AD6D4u) goto label_7F1AD6D4;
    return;
label_7F1AD6C4:
    ctx->pc = 0x7F1AD6C4u;
    // 7F1AD6C4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AD6C8:
    ctx->pc = 0x7F1AD6C8u;
    // 7F1AD6C8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD6CC:
    ctx->pc = 0x7F1AD6CCu;
    // 7F1AD6CC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F1AD6D0:
    // 7F1AD6D0: bc    16, 0, 0x7F1AD6C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD6C0u;
                return;
            }
            goto label_7F1AD6C0;
        }
    }

label_7F1AD6D4:
    ctx->pc = 0x7F1AD6D4u;
    ctx->downcount -= 1;
    // 7F1AD6D4: b       0x7F1AD6E0
    {
            goto label_7F1AD6E0;
    }

label_7F1AD6D8:
    ctx->pc = 0x7F1AD6D8u;
    ctx->downcount -= 1;
    // 7F1AD6D8: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AD6DCu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AD6DC:
    ctx->pc = 0x7F1AD6DCu;
    ctx->downcount -= 1;
    // 7F1AD6DC: b       0x7F1AD6E4
    {
            goto label_7F1AD6E4;
    }

label_7F1AD6E0:
    ctx->pc = 0x7F1AD6E0u;
    ctx->downcount -= 1;
    // 7F1AD6E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD6E4:
    ctx->pc = 0x7F1AD6E4u;
    ctx->downcount -= 6;
    // 7F1AD6E4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD6E8:
    ctx->pc = 0x7F1AD6E8u;
    // 7F1AD6E8: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AD6EC:
    ctx->pc = 0x7F1AD6ECu;
    // 7F1AD6EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AD6F0:
    ctx->pc = 0x7F1AD6F0u;
    // 7F1AD6F0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1AD6F4:
    ctx->pc = 0x7F1AD6F4u;
    // 7F1AD6F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD6F8:
    ctx->pc = 0x7F1AD6F8u;
    ctx->downcount -= 40;
    // 7F1AD6F8: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AD6FC:
    ctx->pc = 0x7F1AD6FCu;
    // 7F1AD6FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AD700:
    ctx->pc = 0x7F1AD700u;
    // 7F1AD700: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD704:
    ctx->pc = 0x7F1AD704u;
    // 7F1AD704: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD704u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1AD708:
    ctx->pc = 0x7F1AD708u;
    // 7F1AD708: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD708u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AD708u);
        if (ctx->exception) return;
    }

label_7F1AD70C:
    ctx->pc = 0x7F1AD70Cu;
    // 7F1AD70C: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD70Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1AD710:
    ctx->pc = 0x7F1AD710u;
    // 7F1AD710: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD710u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AD710u);
        if (ctx->exception) return;
    }

label_7F1AD714:
    ctx->pc = 0x7F1AD714u;
    // 7F1AD714: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD714u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AD718:
    ctx->pc = 0x7F1AD718u;
    // 7F1AD718: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD718u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1AD718u);
        if (ctx->exception) return;
    }

label_7F1AD71C:
    ctx->pc = 0x7F1AD71Cu;
    // 7F1AD71C: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD71Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AD720:
    ctx->pc = 0x7F1AD720u;
    // 7F1AD720: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD720u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1AD720u);
        if (ctx->exception) return;
    }

label_7F1AD724:
    ctx->pc = 0x7F1AD724u;
    // 7F1AD724: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD724u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1AD728:
    ctx->pc = 0x7F1AD728u;
    // 7F1AD728: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD728u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1AD728u);
        if (ctx->exception) return;
    }

label_7F1AD72C:
    ctx->pc = 0x7F1AD72Cu;
    // 7F1AD72C: stfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD72Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F1AD730:
    ctx->pc = 0x7F1AD730u;
    // 7F1AD730: psq_st   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD730u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F1AD730u);
        if (ctx->exception) return;
    }

label_7F1AD734:
    ctx->pc = 0x7F1AD734u;
    // 7F1AD734: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AD738:
    ctx->pc = 0x7F1AD738u;
    // 7F1AD738: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AD738u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_7F1AD73C:
    ctx->pc = 0x7F1AD73Cu;
    // 7F1AD73C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AD740:
    ctx->pc = 0x7F1AD740u;
    // 7F1AD740: fmr    f27, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AD740u)) return;
    ctx->fpr[27] = ctx->fpr[2];

label_7F1AD744:
    ctx->pc = 0x7F1AD744u;
    // 7F1AD744: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AD748:
    ctx->pc = 0x7F1AD748u;
    // 7F1AD748: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AD74C:
    ctx->pc = 0x7F1AD74Cu;
    // 7F1AD74C: fmr    f28, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AD74Cu)) return;
    ctx->fpr[28] = ctx->fpr[3];

label_7F1AD750:
    ctx->pc = 0x7F1AD750u;
    // 7F1AD750: fmr    f29, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1AD750u)) return;
    ctx->fpr[29] = ctx->fpr[4];

label_7F1AD754:
    ctx->pc = 0x7F1AD754u;
    // 7F1AD754: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1AD758:
    ctx->pc = 0x7F1AD758u;
    // 7F1AD758: fmr    f30, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1AD758u)) return;
    ctx->fpr[30] = ctx->fpr[5];

label_7F1AD75C:
    ctx->pc = 0x7F1AD75Cu;
    // 7F1AD75C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AD760:
    ctx->pc = 0x7F1AD760u;
    // 7F1AD760: fmr    f31, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1AD760u)) return;
    ctx->fpr[31] = ctx->fpr[6];

label_7F1AD764:
    ctx->pc = 0x7F1AD764u;
    // 7F1AD764: li      r5, 236
    ctx->gpr[5] = (u32)(s32)(236);

label_7F1AD768:
    ctx->pc = 0x7F1AD768u;
    // 7F1AD768: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AD76C:
    ctx->pc = 0x7F1AD76Cu;
    // 7F1AD76C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AD770u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AD770:
    ctx->pc = 0x7F1AD770u;
    ctx->downcount -= 2;
    // 7F1AD770: or.   r31, r3, r3
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

label_7F1AD774:
    ctx->pc = 0x7F1AD774u;
    // 7F1AD774: bc    12, 2, 0x7F1AD84C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD84C;
        }
    }

label_7F1AD778:
    ctx->pc = 0x7F1AD778u;
    ctx->downcount -= 5;
    // 7F1AD778: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AD77C:
    ctx->pc = 0x7F1AD77Cu;
    // 7F1AD77C: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AD780:
    ctx->pc = 0x7F1AD780u;
    // 7F1AD780: addi    r4, r4, -14148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14148);

label_7F1AD784:
    ctx->pc = 0x7F1AD784u;
    // 7F1AD784: addi    r5, r5, -12600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12600);

label_7F1AD788:
    ctx->pc = 0x7F1AD788u;
    // 7F1AD788: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AD78Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AD78C:
    ctx->pc = 0x7F1AD78Cu;
    ctx->downcount -= 15;
    // 7F1AD78C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AD790:
    ctx->pc = 0x7F1AD790u;
    // 7F1AD790: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1AD794:
    ctx->pc = 0x7F1AD794u;
    // 7F1AD794: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AD798:
    ctx->pc = 0x7F1AD798u;
    // 7F1AD798: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD79C:
    ctx->pc = 0x7F1AD79Cu;
    // 7F1AD79C: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1AD7A0:
    ctx->pc = 0x7F1AD7A0u;
    // 7F1AD7A0: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1AD7A4:
    ctx->pc = 0x7F1AD7A4u;
    // 7F1AD7A4: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AD7A8:
    ctx->pc = 0x7F1AD7A8u;
    // 7F1AD7A8: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F1AD7AC:
    ctx->pc = 0x7F1AD7ACu;
    // 7F1AD7AC: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F1AD7B0:
    ctx->pc = 0x7F1AD7B0u;
    // 7F1AD7B0: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD7B4:
    ctx->pc = 0x7F1AD7B4u;
    // 7F1AD7B4: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD7B8:
    ctx->pc = 0x7F1AD7B8u;
    // 7F1AD7B8: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD7BC:
    ctx->pc = 0x7F1AD7BCu;
    // 7F1AD7BC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD7C0:
    ctx->pc = 0x7F1AD7C0u;
    // 7F1AD7C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD7C4:
    loop_7F1AD7C4(ctx);
    if (ctx->pc == 0x7F1AD7D8u) goto label_7F1AD7D8;
    return;
label_7F1AD7C8:
    ctx->pc = 0x7F1AD7C8u;
    // 7F1AD7C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AD7CC:
    ctx->pc = 0x7F1AD7CCu;
    // 7F1AD7CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD7D0:
    ctx->pc = 0x7F1AD7D0u;
    // 7F1AD7D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AD7D4:
    // 7F1AD7D4: bc    16, 0, 0x7F1AD7C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD7C4u;
                return;
            }
            goto label_7F1AD7C4;
        }
    }

label_7F1AD7D8:
    ctx->pc = 0x7F1AD7D8u;
    ctx->downcount -= 19;
    // 7F1AD7D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AD7DC:
    ctx->pc = 0x7F1AD7DCu;
    // 7F1AD7DC: stw     r29, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1AD7E0:
    ctx->pc = 0x7F1AD7E0u;
    // 7F1AD7E0: lfs     f0, 6736(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD7E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AD7E4:
    ctx->pc = 0x7F1AD7E4u;
    // 7F1AD7E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1AD7E8:
    ctx->pc = 0x7F1AD7E8u;
    // 7F1AD7E8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F1AD7EC:
    ctx->pc = 0x7F1AD7ECu;
    // 7F1AD7EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AD7F0:
    ctx->pc = 0x7F1AD7F0u;
    // 7F1AD7F0: fmuls   f2, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1AD7F0u)) return;
    ppc_fmuls(ctx, 2, 0, 26);

label_7F1AD7F4:
    ctx->pc = 0x7F1AD7F4u;
    // 7F1AD7F4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AD7F8:
    ctx->pc = 0x7F1AD7F8u;
    // 7F1AD7F8: fmuls   f1, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1AD7F8u)) return;
    ppc_fmuls(ctx, 1, 0, 27);

label_7F1AD7FC:
    ctx->pc = 0x7F1AD7FCu;
    // 7F1AD7FC: fmuls   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1AD7FCu)) return;
    ppc_fmuls(ctx, 0, 0, 28);

label_7F1AD800:
    ctx->pc = 0x7F1AD800u;
    // 7F1AD800: stfs     f2, 216(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD800u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1AD804:
    ctx->pc = 0x7F1AD804u;
    // 7F1AD804: stfs     f1, 220(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD804u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AD808:
    ctx->pc = 0x7F1AD808u;
    // 7F1AD808: stfs     f0, 224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD808u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AD80C:
    ctx->pc = 0x7F1AD80Cu;
    // 7F1AD80C: stfs     f29, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD80Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1AD810:
    ctx->pc = 0x7F1AD810u;
    // 7F1AD810: stfs     f30, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD810u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AD814:
    ctx->pc = 0x7F1AD814u;
    // 7F1AD814: stfs     f31, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD814u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AD818:
    ctx->pc = 0x7F1AD818u;
    // 7F1AD818: stw     r5, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AD81C:
    ctx->pc = 0x7F1AD81Cu;
    // 7F1AD81C: stw     r0, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD820:
    ctx->pc = 0x7F1AD820u;
    // 7F1AD820: bl      0x7F1ACF18
    {
            ctx->lr = 0x7F1AD824u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ACF18u;
                return;
            }
            goto label_7F1ACF18;
    }

label_7F1AD824:
    ctx->pc = 0x7F1AD824u;
    ctx->downcount -= 2;
    // 7F1AD824: cmpwi   r3, 0
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

label_7F1AD828:
    ctx->pc = 0x7F1AD828u;
    // 7F1AD828: bc    4, 0, 0x7F1AD83C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD83C;
        }
    }

label_7F1AD82C:
    ctx->pc = 0x7F1AD82Cu;
    ctx->downcount -= 2;
    // 7F1AD82C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AD830:
    ctx->pc = 0x7F1AD830u;
    // 7F1AD830: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AD834u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AD834:
    ctx->pc = 0x7F1AD834u;
    ctx->downcount -= 2;
    // 7F1AD834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD838:
    ctx->pc = 0x7F1AD838u;
    // 7F1AD838: b       0x7F1AD850
    {
            goto label_7F1AD850;
    }

label_7F1AD83C:
    ctx->pc = 0x7F1AD83Cu;
    ctx->downcount -= 4;
    // 7F1AD83C: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AD840:
    ctx->pc = 0x7F1AD840u;
    // 7F1AD840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AD844:
    ctx->pc = 0x7F1AD844u;
    // 7F1AD844: addi    r4, r4, -11664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11664);

label_7F1AD848:
    ctx->pc = 0x7F1AD848u;
    // 7F1AD848: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1AD84Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1AD84C:
    ctx->pc = 0x7F1AD84Cu;
    ctx->downcount -= 1;
    // 7F1AD84C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AD850:
    ctx->pc = 0x7F1AD850u;
    ctx->downcount -= 28;
    // 7F1AD850: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AD850u);
        if (ctx->exception) return;
    }

label_7F1AD854:
    ctx->pc = 0x7F1AD854u;
    // 7F1AD854: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD854u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD858:
    ctx->pc = 0x7F1AD858u;
    // 7F1AD858: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AD858u);
        if (ctx->exception) return;
    }

label_7F1AD85C:
    ctx->pc = 0x7F1AD85Cu;
    // 7F1AD85C: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD85Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD860:
    ctx->pc = 0x7F1AD860u;
    // 7F1AD860: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1AD860u);
        if (ctx->exception) return;
    }

label_7F1AD864:
    ctx->pc = 0x7F1AD864u;
    // 7F1AD864: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD864u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD868:
    ctx->pc = 0x7F1AD868u;
    // 7F1AD868: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD868u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1AD868u);
        if (ctx->exception) return;
    }

label_7F1AD86C:
    ctx->pc = 0x7F1AD86Cu;
    // 7F1AD86C: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD86Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD870:
    ctx->pc = 0x7F1AD870u;
    // 7F1AD870: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1AD870u);
        if (ctx->exception) return;
    }

label_7F1AD874:
    ctx->pc = 0x7F1AD874u;
    // 7F1AD874: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD878:
    ctx->pc = 0x7F1AD878u;
    // 7F1AD878: psq_l   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AD878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F1AD878u);
        if (ctx->exception) return;
    }

label_7F1AD87C:
    ctx->pc = 0x7F1AD87Cu;
    // 7F1AD87C: lfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD87Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AD880:
    ctx->pc = 0x7F1AD880u;
    // 7F1AD880: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AD884:
    ctx->pc = 0x7F1AD884u;
    // 7F1AD884: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD888:
    ctx->pc = 0x7F1AD888u;
    // 7F1AD888: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AD88C:
    ctx->pc = 0x7F1AD88Cu;
    // 7F1AD88C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1AD890:
    ctx->pc = 0x7F1AD890u;
    // 7F1AD890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD894:
    ctx->pc = 0x7F1AD894u;
    ctx->downcount -= 1;
    // 7F1AD894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD898:
    ctx->pc = 0x7F1AD898u;
    ctx->downcount -= 1;
    // 7F1AD898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD89C:
    ctx->pc = 0x7F1AD89Cu;
    ctx->downcount -= 2;
    // 7F1AD89C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD8A0:
    ctx->pc = 0x7F1AD8A0u;
    // 7F1AD8A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD8A4:
    ctx->pc = 0x7F1AD8A4u;
    ctx->downcount -= 19;
    // 7F1AD8A4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AD8A8:
    ctx->pc = 0x7F1AD8A8u;
    // 7F1AD8A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AD8AC:
    ctx->pc = 0x7F1AD8ACu;
    // 7F1AD8AC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AD8B0:
    ctx->pc = 0x7F1AD8B0u;
    // 7F1AD8B0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1AD8B4:
    ctx->pc = 0x7F1AD8B4u;
    // 7F1AD8B4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD8B8:
    ctx->pc = 0x7F1AD8B8u;
    // 7F1AD8B8: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1AD8BC:
    ctx->pc = 0x7F1AD8BCu;
    // 7F1AD8BC: addi    r9, r7, 6744
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(6744);

label_7F1AD8C0:
    ctx->pc = 0x7F1AD8C0u;
    // 7F1AD8C0: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AD8C4:
    ctx->pc = 0x7F1AD8C4u;
    // 7F1AD8C4: cmpw    r4, r0
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

label_7F1AD8C8:
    ctx->pc = 0x7F1AD8C8u;
    // 7F1AD8C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AD8CC:
    ctx->pc = 0x7F1AD8CCu;
    // 7F1AD8CC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AD8D0:
    ctx->pc = 0x7F1AD8D0u;
    // 7F1AD8D0: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AD8D4:
    ctx->pc = 0x7F1AD8D4u;
    // 7F1AD8D4: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AD8D8:
    ctx->pc = 0x7F1AD8D8u;
    // 7F1AD8D8: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD8DC:
    ctx->pc = 0x7F1AD8DCu;
    // 7F1AD8DC: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AD8E0:
    ctx->pc = 0x7F1AD8E0u;
    // 7F1AD8E0: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AD8E4:
    ctx->pc = 0x7F1AD8E4u;
    // 7F1AD8E4: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AD8E8:
    ctx->pc = 0x7F1AD8E8u;
    // 7F1AD8E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD8EC:
    ctx->pc = 0x7F1AD8ECu;
    // 7F1AD8EC: bc    12, 2, 0x7F1AD99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD99C;
        }
    }

label_7F1AD8F0:
    ctx->pc = 0x7F1AD8F0u;
    ctx->downcount -= 1;
    // 7F1AD8F0: bc    4, 0, 0x7F1AD9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD9C4;
        }
    }

label_7F1AD8F4:
    ctx->pc = 0x7F1AD8F4u;
    ctx->downcount -= 2;
    // 7F1AD8F4: cmpwi   r4, 0
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

label_7F1AD8F8:
    ctx->pc = 0x7F1AD8F8u;
    // 7F1AD8F8: bc    12, 2, 0x7F1AD900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD900;
        }
    }

label_7F1AD8FC:
    ctx->pc = 0x7F1AD8FCu;
    ctx->downcount -= 1;
    // 7F1AD8FC: b       0x7F1AD9C4
    {
            goto label_7F1AD9C4;
    }

label_7F1AD900:
    ctx->pc = 0x7F1AD900u;
    ctx->downcount -= 3;
    // 7F1AD900: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD904:
    ctx->pc = 0x7F1AD904u;
    // 7F1AD904: cmpwi   r0, 0
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

label_7F1AD908:
    ctx->pc = 0x7F1AD908u;
    // 7F1AD908: bc    12, 2, 0x7F1AD990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AD990;
        }
    }

label_7F1AD90C:
    ctx->pc = 0x7F1AD90Cu;
    ctx->downcount -= 4;
    // 7F1AD90C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AD910:
    ctx->pc = 0x7F1AD910u;
    // 7F1AD910: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1AD914:
    ctx->pc = 0x7F1AD914u;
    // 7F1AD914: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AD918:
    ctx->pc = 0x7F1AD918u;
    // 7F1AD918: bl      0x7F114508
    {
            ctx->lr = 0x7F1AD91Cu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AD91C:
    ctx->pc = 0x7F1AD91Cu;
    ctx->downcount -= 8;
    // 7F1AD91C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AD920:
    ctx->pc = 0x7F1AD920u;
    // 7F1AD920: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1AD924:
    ctx->pc = 0x7F1AD924u;
    // 7F1AD924: addi    r5, r4, 6760
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6760);

label_7F1AD928:
    ctx->pc = 0x7F1AD928u;
    // 7F1AD928: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AD92C:
    ctx->pc = 0x7F1AD92Cu;
    // 7F1AD92C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD92Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AD930:
    ctx->pc = 0x7F1AD930u;
    // 7F1AD930: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F1AD934:
    ctx->pc = 0x7F1AD934u;
    // 7F1AD934: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F1AD938:
    ctx->pc = 0x7F1AD938u;
    // 7F1AD938: bl      0x7F1B53D8
    {
            ctx->lr = 0x7F1AD93Cu;
            ctx->pc = 0x7F1B53D8u;
            return;
    }

label_7F1AD93C:
    ctx->pc = 0x7F1AD93Cu;
    ctx->downcount -= 5;
    // 7F1AD93C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD940:
    ctx->pc = 0x7F1AD940u;
    // 7F1AD940: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_7F1AD944:
    ctx->pc = 0x7F1AD944u;
    // 7F1AD944: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1AD948:
    ctx->pc = 0x7F1AD948u;
    // 7F1AD948: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD94C:
    loop_7F1AD94C(ctx);
    if (ctx->pc == 0x7F1AD960u) goto label_7F1AD960;
    return;
label_7F1AD950:
    ctx->pc = 0x7F1AD950u;
    // 7F1AD950: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AD954:
    ctx->pc = 0x7F1AD954u;
    // 7F1AD954: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD958:
    ctx->pc = 0x7F1AD958u;
    // 7F1AD958: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AD95C:
    // 7F1AD95C: bc    16, 0, 0x7F1AD94C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD94Cu;
                return;
            }
            goto label_7F1AD94C;
        }
    }

label_7F1AD960:
    ctx->pc = 0x7F1AD960u;
    ctx->downcount -= 12;
    // 7F1AD960: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AD964:
    ctx->pc = 0x7F1AD964u;
    // 7F1AD964: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AD968:
    ctx->pc = 0x7F1AD968u;
    // 7F1AD968: addi    r5, r3, 6764
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6764);

label_7F1AD96C:
    ctx->pc = 0x7F1AD96Cu;
    // 7F1AD96C: lfs     f2, 6768(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD96Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6768);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AD970:
    ctx->pc = 0x7F1AD970u;
    // 7F1AD970: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AD970u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AD974:
    ctx->pc = 0x7F1AD974u;
    // 7F1AD974: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AD978:
    ctx->pc = 0x7F1AD978u;
    // 7F1AD978: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1AD97C:
    ctx->pc = 0x7F1AD97Cu;
    // 7F1AD97C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1AD980:
    ctx->pc = 0x7F1AD980u;
    // 7F1AD980: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1AD984:
    ctx->pc = 0x7F1AD984u;
    // 7F1AD984: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1AD988:
    ctx->pc = 0x7F1AD988u;
    // 7F1AD988: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F1AD98C:
    ctx->pc = 0x7F1AD98Cu;
    // 7F1AD98C: bl      0x7F1ABF50
    {
            ctx->lr = 0x7F1AD990u;
            ctx->pc = 0x7F1ABF50u;
            return;
    }

label_7F1AD990:
    ctx->pc = 0x7F1AD990u;
    ctx->downcount -= 2;
    // 7F1AD990: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1AD994:
    ctx->pc = 0x7F1AD994u;
    // 7F1AD994: bl      0x7F1AE360
    {
            ctx->lr = 0x7F1AD998u;
            goto label_7F1AE360;
    }

label_7F1AD998:
    ctx->pc = 0x7F1AD998u;
    ctx->downcount -= 1;
    // 7F1AD998: b       0x7F1AD9D0
    {
            goto label_7F1AD9D0;
    }

label_7F1AD99C:
    ctx->pc = 0x7F1AD99Cu;
    ctx->downcount -= 5;
    // 7F1AD99C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AD9A0:
    ctx->pc = 0x7F1AD9A0u;
    // 7F1AD9A0: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1AD9A4:
    ctx->pc = 0x7F1AD9A4u;
    // 7F1AD9A4: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1AD9A8:
    ctx->pc = 0x7F1AD9A8u;
    // 7F1AD9A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AD9AC:
    loop_7F1AD9AC(ctx);
    if (ctx->pc == 0x7F1AD9C0u) goto label_7F1AD9C0;
    return;
label_7F1AD9B0:
    ctx->pc = 0x7F1AD9B0u;
    // 7F1AD9B0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AD9B4:
    ctx->pc = 0x7F1AD9B4u;
    // 7F1AD9B4: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AD9B8:
    ctx->pc = 0x7F1AD9B8u;
    // 7F1AD9B8: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F1AD9BC:
    // 7F1AD9BC: bc    16, 0, 0x7F1AD9AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD9ACu;
                return;
            }
            goto label_7F1AD9AC;
        }
    }

label_7F1AD9C0:
    ctx->pc = 0x7F1AD9C0u;
    ctx->downcount -= 1;
    // 7F1AD9C0: b       0x7F1AD9D0
    {
            goto label_7F1AD9D0;
    }

label_7F1AD9C4:
    ctx->pc = 0x7F1AD9C4u;
    ctx->downcount -= 2;
    // 7F1AD9C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AD9C8:
    ctx->pc = 0x7F1AD9C8u;
    // 7F1AD9C8: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AD9CCu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AD9CC:
    ctx->pc = 0x7F1AD9CCu;
    ctx->downcount -= 1;
    // 7F1AD9CC: b       0x7F1AD9D4
    {
            goto label_7F1AD9D4;
    }

label_7F1AD9D0:
    ctx->pc = 0x7F1AD9D0u;
    ctx->downcount -= 1;
    // 7F1AD9D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AD9D4:
    ctx->pc = 0x7F1AD9D4u;
    ctx->downcount -= 6;
    // 7F1AD9D4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AD9D8:
    ctx->pc = 0x7F1AD9D8u;
    // 7F1AD9D8: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AD9DC:
    ctx->pc = 0x7F1AD9DCu;
    // 7F1AD9DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AD9E0:
    ctx->pc = 0x7F1AD9E0u;
    // 7F1AD9E0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1AD9E4:
    ctx->pc = 0x7F1AD9E4u;
    // 7F1AD9E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AD9E8:
    ctx->pc = 0x7F1AD9E8u;
    ctx->downcount -= 20;
    // 7F1AD9E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AD9EC:
    ctx->pc = 0x7F1AD9ECu;
    // 7F1AD9EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AD9F0:
    ctx->pc = 0x7F1AD9F0u;
    // 7F1AD9F0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AD9F4:
    ctx->pc = 0x7F1AD9F4u;
    // 7F1AD9F4: li      r5, 116
    ctx->gpr[5] = (u32)(s32)(116);

label_7F1AD9F8:
    ctx->pc = 0x7F1AD9F8u;
    // 7F1AD9F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AD9FC:
    ctx->pc = 0x7F1AD9FCu;
    // 7F1AD9FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ADA00:
    ctx->pc = 0x7F1ADA00u;
    // 7F1ADA00: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ADA04:
    ctx->pc = 0x7F1ADA04u;
    // 7F1ADA04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADA08:
    ctx->pc = 0x7F1ADA08u;
    // 7F1ADA08: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1ADA0C:
    ctx->pc = 0x7F1ADA0Cu;
    // 7F1ADA0C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1ADA10u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1ADA10:
    ctx->pc = 0x7F1ADA10u;
    ctx->downcount -= 2;
    // 7F1ADA10: or.   r31, r3, r3
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

label_7F1ADA14:
    ctx->pc = 0x7F1ADA14u;
    // 7F1ADA14: bc    12, 2, 0x7F1ADACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ADACC;
        }
    }

label_7F1ADA18:
    ctx->pc = 0x7F1ADA18u;
    ctx->downcount -= 5;
    // 7F1ADA18: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1ADA1C:
    ctx->pc = 0x7F1ADA1Cu;
    // 7F1ADA1C: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1ADA20:
    ctx->pc = 0x7F1ADA20u;
    // 7F1ADA20: addi    r4, r4, -10092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10092);

label_7F1ADA24:
    ctx->pc = 0x7F1ADA24u;
    // 7F1ADA24: addi    r5, r5, -10088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10088);

label_7F1ADA28:
    ctx->pc = 0x7F1ADA28u;
    // 7F1ADA28: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1ADA2Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1ADA2C:
    ctx->pc = 0x7F1ADA2Cu;
    ctx->downcount -= 15;
    // 7F1ADA2C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ADA30:
    ctx->pc = 0x7F1ADA30u;
    // 7F1ADA30: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1ADA34:
    ctx->pc = 0x7F1ADA34u;
    // 7F1ADA34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ADA38:
    ctx->pc = 0x7F1ADA38u;
    // 7F1ADA38: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1ADA3C:
    ctx->pc = 0x7F1ADA3Cu;
    // 7F1ADA3C: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1ADA40:
    ctx->pc = 0x7F1ADA40u;
    // 7F1ADA40: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1ADA44:
    ctx->pc = 0x7F1ADA44u;
    // 7F1ADA44: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ADA48:
    ctx->pc = 0x7F1ADA48u;
    // 7F1ADA48: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F1ADA4C:
    ctx->pc = 0x7F1ADA4Cu;
    // 7F1ADA4C: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1ADA50:
    ctx->pc = 0x7F1ADA50u;
    // 7F1ADA50: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1ADA54:
    ctx->pc = 0x7F1ADA54u;
    // 7F1ADA54: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1ADA58:
    ctx->pc = 0x7F1ADA58u;
    // 7F1ADA58: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1ADA5C:
    ctx->pc = 0x7F1ADA5Cu;
    // 7F1ADA5C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ADA60:
    ctx->pc = 0x7F1ADA60u;
    // 7F1ADA60: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ADA64:
    loop_7F1ADA64(ctx);
    if (ctx->pc == 0x7F1ADA78u) goto label_7F1ADA78;
    return;
label_7F1ADA68:
    ctx->pc = 0x7F1ADA68u;
    // 7F1ADA68: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1ADA6C:
    ctx->pc = 0x7F1ADA6Cu;
    // 7F1ADA6C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ADA70:
    ctx->pc = 0x7F1ADA70u;
    // 7F1ADA70: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1ADA74:
    // 7F1ADA74: bc    16, 0, 0x7F1ADA64
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADA64u;
                return;
            }
            goto label_7F1ADA64;
        }
    }

label_7F1ADA78:
    ctx->pc = 0x7F1ADA78u;
    ctx->downcount -= 5;
    // 7F1ADA78: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1ADA7C:
    ctx->pc = 0x7F1ADA7Cu;
    // 7F1ADA7C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1ADA80:
    ctx->pc = 0x7F1ADA80u;
    // 7F1ADA80: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1ADA84:
    ctx->pc = 0x7F1ADA84u;
    // 7F1ADA84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ADA88:
    loop_7F1ADA88(ctx);
    if (ctx->pc == 0x7F1ADA9Cu) goto label_7F1ADA9C;
    return;
label_7F1ADA8C:
    ctx->pc = 0x7F1ADA8Cu;
    // 7F1ADA8C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1ADA90:
    ctx->pc = 0x7F1ADA90u;
    // 7F1ADA90: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ADA94:
    ctx->pc = 0x7F1ADA94u;
    // 7F1ADA94: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1ADA98:
    // 7F1ADA98: bc    16, 0, 0x7F1ADA88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADA88u;
                return;
            }
            goto label_7F1ADA88;
        }
    }

label_7F1ADA9C:
    ctx->pc = 0x7F1ADA9Cu;
    ctx->downcount -= 2;
    // 7F1ADA9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADAA0:
    ctx->pc = 0x7F1ADAA0u;
    // 7F1ADAA0: bl      0x7F1AD89C
    {
            ctx->lr = 0x7F1ADAA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD89Cu;
                return;
            }
            goto label_7F1AD89C;
    }

label_7F1ADAA4:
    ctx->pc = 0x7F1ADAA4u;
    ctx->downcount -= 2;
    // 7F1ADAA4: cmpwi   r3, 0
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

label_7F1ADAA8:
    ctx->pc = 0x7F1ADAA8u;
    // 7F1ADAA8: bc    4, 0, 0x7F1ADABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ADABC;
        }
    }

label_7F1ADAAC:
    ctx->pc = 0x7F1ADAACu;
    ctx->downcount -= 2;
    // 7F1ADAAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADAB0:
    ctx->pc = 0x7F1ADAB0u;
    // 7F1ADAB0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1ADAB4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1ADAB4:
    ctx->pc = 0x7F1ADAB4u;
    ctx->downcount -= 2;
    // 7F1ADAB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1ADAB8:
    ctx->pc = 0x7F1ADAB8u;
    // 7F1ADAB8: b       0x7F1ADAD0
    {
            goto label_7F1ADAD0;
    }

label_7F1ADABC:
    ctx->pc = 0x7F1ADABCu;
    ctx->downcount -= 4;
    // 7F1ADABC: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1ADAC0:
    ctx->pc = 0x7F1ADAC0u;
    // 7F1ADAC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADAC4:
    ctx->pc = 0x7F1ADAC4u;
    // 7F1ADAC4: addi    r4, r4, -10076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10076);

label_7F1ADAC8:
    ctx->pc = 0x7F1ADAC8u;
    // 7F1ADAC8: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1ADACCu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1ADACC:
    ctx->pc = 0x7F1ADACCu;
    ctx->downcount -= 1;
    // 7F1ADACC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADAD0:
    ctx->pc = 0x7F1ADAD0u;
    ctx->downcount -= 16;
    // 7F1ADAD0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ADAD4:
    ctx->pc = 0x7F1ADAD4u;
    // 7F1ADAD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADAD8:
    ctx->pc = 0x7F1ADAD8u;
    // 7F1ADAD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ADADC:
    ctx->pc = 0x7F1ADADCu;
    // 7F1ADADC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ADAE0:
    ctx->pc = 0x7F1ADAE0u;
    // 7F1ADAE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ADAE4:
    ctx->pc = 0x7F1ADAE4u;
    ctx->downcount -= 27;
    // 7F1ADAE4: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ADAE8:
    ctx->pc = 0x7F1ADAE8u;
    // 7F1ADAE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ADAEC:
    ctx->pc = 0x7F1ADAECu;
    // 7F1ADAEC: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADAF0:
    ctx->pc = 0x7F1ADAF0u;
    // 7F1ADAF0: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADAF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1ADAF4:
    ctx->pc = 0x7F1ADAF4u;
    // 7F1ADAF4: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADAF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ADAF4u);
        if (ctx->exception) return;
    }

label_7F1ADAF8:
    ctx->pc = 0x7F1ADAF8u;
    // 7F1ADAF8: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADAF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1ADAFC:
    ctx->pc = 0x7F1ADAFCu;
    // 7F1ADAFC: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADAFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ADAFCu);
        if (ctx->exception) return;
    }

label_7F1ADB00:
    ctx->pc = 0x7F1ADB00u;
    // 7F1ADB00: stmw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ADB04:
    ctx->pc = 0x7F1ADB04u;
    // 7F1ADB04: lis     r6, 32590
    ctx->gpr[6] = ((u32)(s32)(32590) << 16);

label_7F1ADB08:
    ctx->pc = 0x7F1ADB08u;
    // 7F1ADB08: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB08u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F1ADB0C:
    ctx->pc = 0x7F1ADB0Cu;
    // 7F1ADB0C: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB0Cu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F1ADB10:
    ctx->pc = 0x7F1ADB10u;
    // 7F1ADB10: addi    r0, r6, 28636
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(28636);

label_7F1ADB14:
    ctx->pc = 0x7F1ADB14u;
    // 7F1ADB14: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADB18:
    ctx->pc = 0x7F1ADB18u;
    // 7F1ADB18: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1ADB1C:
    ctx->pc = 0x7F1ADB1Cu;
    // 7F1ADB1C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1ADB20:
    ctx->pc = 0x7F1ADB20u;
    // 7F1ADB20: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1ADB24:
    ctx->pc = 0x7F1ADB24u;
    // 7F1ADB24: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1ADB28u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1ADB28:
    ctx->pc = 0x7F1ADB28u;
    ctx->downcount -= 4;
    // 7F1ADB28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1ADB2C:
    ctx->pc = 0x7F1ADB2Cu;
    // 7F1ADB2C: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADB30:
    ctx->pc = 0x7F1ADB30u;
    // 7F1ADB30: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1ADB34:
    ctx->pc = 0x7F1ADB34u;
    // 7F1ADB34: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1ADB38u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1ADB38:
    ctx->pc = 0x7F1ADB38u;
    ctx->downcount -= 4;
    // 7F1ADB38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADB3C:
    ctx->pc = 0x7F1ADB3Cu;
    // 7F1ADB3C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1ADB40:
    ctx->pc = 0x7F1ADB40u;
    // 7F1ADB40: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1ADB44:
    ctx->pc = 0x7F1ADB44u;
    // 7F1ADB44: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1ADB48u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1ADB48:
    ctx->pc = 0x7F1ADB48u;
    ctx->downcount -= 20;
    // 7F1ADB48: lfs     f5, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1ADB4C:
    ctx->pc = 0x7F1ADB4Cu;
    // 7F1ADB4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADB50:
    ctx->pc = 0x7F1ADB50u;
    // 7F1ADB50: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADB54:
    ctx->pc = 0x7F1ADB54u;
    // 7F1ADB54: addi    r5, r3, 6776
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6776);

label_7F1ADB58:
    ctx->pc = 0x7F1ADB58u;
    // 7F1ADB58: lfs     f3, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1ADB5C:
    ctx->pc = 0x7F1ADB5Cu;
    // 7F1ADB5C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1ADB60:
    ctx->pc = 0x7F1ADB60u;
    // 7F1ADB60: lfs     f6, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1ADB64:
    ctx->pc = 0x7F1ADB64u;
    // 7F1ADB64: fmuls   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB64u)) return;
    ppc_fmuls(ctx, 1, 0, 5);

label_7F1ADB68:
    ctx->pc = 0x7F1ADB68u;
    // 7F1ADB68: lfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADB6C:
    ctx->pc = 0x7F1ADB6Cu;
    // 7F1ADB6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADB70:
    ctx->pc = 0x7F1ADB70u;
    // 7F1ADB70: fmuls   f3, f3, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB70u)) return;
    ppc_fmuls(ctx, 3, 3, 6);

label_7F1ADB74:
    ctx->pc = 0x7F1ADB74u;
    // 7F1ADB74: lfs     f4, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1ADB78:
    ctx->pc = 0x7F1ADB78u;
    // 7F1ADB78: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADB7C:
    ctx->pc = 0x7F1ADB7Cu;
    // 7F1ADB7C: fmsubs f1, f2, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB7Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[6], ctx->fpr[1], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1ADB80:
    ctx->pc = 0x7F1ADB80u;
    // 7F1ADB80: fmsubs f2, f4, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB80u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[5], ctx->fpr[3], true, true, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F1ADB84:
    ctx->pc = 0x7F1ADB84u;
    // 7F1ADB84: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADB88:
    ctx->pc = 0x7F1ADB88u;
    // 7F1ADB88: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ADB8C:
    ctx->pc = 0x7F1ADB8Cu;
    // 7F1ADB8C: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ADB90:
    ctx->pc = 0x7F1ADB90u;
    // 7F1ADB90: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADB94:
    ctx->pc = 0x7F1ADB94u;
    // 7F1ADB94: bl      0x7F114F50
    {
            ctx->lr = 0x7F1ADB98u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1ADB98:
    ctx->pc = 0x7F1ADB98u;
    ctx->downcount -= 13;
    // 7F1ADB98: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADB98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADB9C:
    ctx->pc = 0x7F1ADB9Cu;
    // 7F1ADB9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADBA0:
    ctx->pc = 0x7F1ADBA0u;
    // 7F1ADBA0: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADBA4:
    ctx->pc = 0x7F1ADBA4u;
    // 7F1ADBA4: fneg    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBA4u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F1ADBA8:
    ctx->pc = 0x7F1ADBA8u;
    // 7F1ADBA8: lfs     f0, 6776(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADBAC:
    ctx->pc = 0x7F1ADBACu;
    // 7F1ADBAC: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1ADBB0:
    ctx->pc = 0x7F1ADBB0u;
    // 7F1ADBB0: stfs     f1, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ADBB4:
    ctx->pc = 0x7F1ADBB4u;
    // 7F1ADBB4: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1ADBB8:
    ctx->pc = 0x7F1ADBB8u;
    // 7F1ADBB8: stfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ADBBC:
    ctx->pc = 0x7F1ADBBCu;
    // 7F1ADBBC: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_7F1ADBC0:
    ctx->pc = 0x7F1ADBC0u;
    // 7F1ADBC0: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADBC4:
    ctx->pc = 0x7F1ADBC4u;
    // 7F1ADBC4: stfs     f0, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADBC8:
    ctx->pc = 0x7F1ADBC8u;
    // 7F1ADBC8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1ADBCCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1ADBCC:
    ctx->pc = 0x7F1ADBCCu;
    ctx->downcount -= 4;
    // 7F1ADBCC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1ADBD0:
    ctx->pc = 0x7F1ADBD0u;
    // 7F1ADBD0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADBD4:
    ctx->pc = 0x7F1ADBD4u;
    // 7F1ADBD4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1ADBD8:
    ctx->pc = 0x7F1ADBD8u;
    // 7F1ADBD8: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1ADBDCu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1ADBDC:
    ctx->pc = 0x7F1ADBDCu;
    ctx->downcount -= 4;
    // 7F1ADBDC: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADBE0:
    ctx->pc = 0x7F1ADBE0u;
    // 7F1ADBE0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1ADBE4:
    ctx->pc = 0x7F1ADBE4u;
    // 7F1ADBE4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1ADBE8:
    ctx->pc = 0x7F1ADBE8u;
    // 7F1ADBE8: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1ADBECu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1ADBEC:
    ctx->pc = 0x7F1ADBECu;
    ctx->downcount -= 4;
    // 7F1ADBEC: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBECu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F1ADBF0:
    ctx->pc = 0x7F1ADBF0u;
    // 7F1ADBF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADBF4:
    ctx->pc = 0x7F1ADBF4u;
    // 7F1ADBF4: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADBF8:
    ctx->pc = 0x7F1ADBF8u;
    // 7F1ADBF8: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADBFCu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADBFC:
    ctx->pc = 0x7F1ADBFCu;
    ctx->downcount -= 4;
    // 7F1ADBFC: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1ADBFCu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F1ADC00:
    ctx->pc = 0x7F1ADC00u;
    // 7F1ADC00: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1ADC04:
    ctx->pc = 0x7F1ADC04u;
    // 7F1ADC04: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1ADC08:
    ctx->pc = 0x7F1ADC08u;
    // 7F1ADC08: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADC0Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADC0C:
    ctx->pc = 0x7F1ADC0Cu;
    ctx->downcount -= 4;
    // 7F1ADC0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADC10:
    ctx->pc = 0x7F1ADC10u;
    // 7F1ADC10: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ADC14:
    ctx->pc = 0x7F1ADC14u;
    // 7F1ADC14: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADC18:
    ctx->pc = 0x7F1ADC18u;
    // 7F1ADC18: bl      0x800261B4
    {
            ctx->lr = 0x7F1ADC1Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ADC1C:
    ctx->pc = 0x7F1ADC1Cu;
    ctx->downcount -= 4;
    // 7F1ADC1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADC20:
    ctx->pc = 0x7F1ADC20u;
    // 7F1ADC20: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADC24:
    ctx->pc = 0x7F1ADC24u;
    // 7F1ADC24: addi    r5, r29, 16
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1ADC28:
    ctx->pc = 0x7F1ADC28u;
    // 7F1ADC28: bl      0x800261D8
    {
            ctx->lr = 0x7F1ADC2Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1ADC2C:
    ctx->pc = 0x7F1ADC2Cu;
    ctx->downcount -= 4;
    // 7F1ADC2C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC2Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1ADC30:
    ctx->pc = 0x7F1ADC30u;
    // 7F1ADC30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADC34:
    ctx->pc = 0x7F1ADC34u;
    // 7F1ADC34: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADC38:
    ctx->pc = 0x7F1ADC38u;
    // 7F1ADC38: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADC3Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADC3C:
    ctx->pc = 0x7F1ADC3Cu;
    ctx->downcount -= 4;
    // 7F1ADC3C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC3Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1ADC40:
    ctx->pc = 0x7F1ADC40u;
    // 7F1ADC40: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1ADC44:
    ctx->pc = 0x7F1ADC44u;
    // 7F1ADC44: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1ADC48:
    ctx->pc = 0x7F1ADC48u;
    // 7F1ADC48: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADC4Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADC4C:
    ctx->pc = 0x7F1ADC4Cu;
    ctx->downcount -= 4;
    // 7F1ADC4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1ADC50:
    ctx->pc = 0x7F1ADC50u;
    // 7F1ADC50: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADC54:
    ctx->pc = 0x7F1ADC54u;
    // 7F1ADC54: addi    r5, r29, 32
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(32);

label_7F1ADC58:
    ctx->pc = 0x7F1ADC58u;
    // 7F1ADC58: bl      0x800261B4
    {
            ctx->lr = 0x7F1ADC5Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ADC5C:
    ctx->pc = 0x7F1ADC5Cu;
    ctx->downcount -= 4;
    // 7F1ADC5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1ADC60:
    ctx->pc = 0x7F1ADC60u;
    // 7F1ADC60: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1ADC64:
    ctx->pc = 0x7F1ADC64u;
    // 7F1ADC64: addi    r5, r29, 48
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1ADC68:
    ctx->pc = 0x7F1ADC68u;
    // 7F1ADC68: bl      0x800261D8
    {
            ctx->lr = 0x7F1ADC6Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1ADC6C:
    ctx->pc = 0x7F1ADC6Cu;
    ctx->downcount -= 20;
    // 7F1ADC6C: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ADC6Cu);
        if (ctx->exception) return;
    }

label_7F1ADC70:
    ctx->pc = 0x7F1ADC70u;
    // 7F1ADC70: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ADC74:
    ctx->pc = 0x7F1ADC74u;
    // 7F1ADC74: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ADC74u);
        if (ctx->exception) return;
    }

label_7F1ADC78:
    ctx->pc = 0x7F1ADC78u;
    // 7F1ADC78: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ADC7C:
    ctx->pc = 0x7F1ADC7Cu;
    // 7F1ADC7C: lmw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ADC80:
    ctx->pc = 0x7F1ADC80u;
    // 7F1ADC80: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADC84:
    ctx->pc = 0x7F1ADC84u;
    // 7F1ADC84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ADC88:
    ctx->pc = 0x7F1ADC88u;
    // 7F1ADC88: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F1ADC8C:
    ctx->pc = 0x7F1ADC8Cu;
    // 7F1ADC8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ADC90:
    ctx->pc = 0x7F1ADC90u;
    ctx->downcount -= 75;
    // 7F1ADC90: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ADC94:
    ctx->pc = 0x7F1ADC94u;
    // 7F1ADC94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ADC98:
    ctx->pc = 0x7F1ADC98u;
    // 7F1ADC98: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADC9C:
    ctx->pc = 0x7F1ADC9Cu;
    // 7F1ADC9C: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADC9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1ADCA0:
    ctx->pc = 0x7F1ADCA0u;
    // 7F1ADCA0: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ADCA0u);
        if (ctx->exception) return;
    }

label_7F1ADCA4:
    ctx->pc = 0x7F1ADCA4u;
    // 7F1ADCA4: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1ADCA8:
    ctx->pc = 0x7F1ADCA8u;
    // 7F1ADCA8: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ADCA8u);
        if (ctx->exception) return;
    }

label_7F1ADCAC:
    ctx->pc = 0x7F1ADCACu;
    // 7F1ADCAC: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1ADCB0:
    ctx->pc = 0x7F1ADCB0u;
    // 7F1ADCB0: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ADCB0u);
        if (ctx->exception) return;
    }

label_7F1ADCB4:
    ctx->pc = 0x7F1ADCB4u;
    // 7F1ADCB4: stmw     r19, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ADCB8:
    ctx->pc = 0x7F1ADCB8u;
    // 7F1ADCB8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ADCBC:
    ctx->pc = 0x7F1ADCBCu;
    // 7F1ADCBC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADCC0:
    ctx->pc = 0x7F1ADCC0u;
    // 7F1ADCC0: addi    r5, r4, 6780
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6780);

label_7F1ADCC4:
    ctx->pc = 0x7F1ADCC4u;
    // 7F1ADCC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADCC8:
    ctx->pc = 0x7F1ADCC8u;
    // 7F1ADCC8: lfs     f1, 876(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCC8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADCCC:
    ctx->pc = 0x7F1ADCCCu;
    // 7F1ADCCC: addi    r4, r3, 6784
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6784);

label_7F1ADCD0:
    ctx->pc = 0x7F1ADCD0u;
    // 7F1ADCD0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADCD4:
    ctx->pc = 0x7F1ADCD4u;
    // 7F1ADCD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADCD8:
    ctx->pc = 0x7F1ADCD8u;
    // 7F1ADCD8: lwz     r5, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ADCDC:
    ctx->pc = 0x7F1ADCDCu;
    // 7F1ADCDC: addi    r6, r3, 6788
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(6788);

label_7F1ADCE0:
    ctx->pc = 0x7F1ADCE0u;
    // 7F1ADCE0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCE0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1ADCE4:
    ctx->pc = 0x7F1ADCE4u;
    // 7F1ADCE4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADCE8:
    ctx->pc = 0x7F1ADCE8u;
    // 7F1ADCE8: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADCEC:
    ctx->pc = 0x7F1ADCECu;
    // 7F1ADCEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADCF0:
    ctx->pc = 0x7F1ADCF0u;
    // 7F1ADCF0: addi    r4, r3, 6776
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6776);

label_7F1ADCF4:
    ctx->pc = 0x7F1ADCF4u;
    // 7F1ADCF4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADCF8:
    ctx->pc = 0x7F1ADCF8u;
    // 7F1ADCF8: fsubs   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADCF8u)) return;
    ppc_fsubs(ctx, 3, 2, 0);

label_7F1ADCFC:
    ctx->pc = 0x7F1ADCFCu;
    // 7F1ADCFC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1ADD00:
    ctx->pc = 0x7F1ADD00u;
    // 7F1ADD00: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADD04:
    ctx->pc = 0x7F1ADD04u;
    // 7F1ADD04: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F1ADD08:
    ctx->pc = 0x7F1ADD08u;
    // 7F1ADD08: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADD0C:
    ctx->pc = 0x7F1ADD0Cu;
    // 7F1ADD0C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1ADD10:
    ctx->pc = 0x7F1ADD10u;
    // 7F1ADD10: fmuls   f3, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD10u)) return;
    ppc_fmuls(ctx, 3, 3, 3);

label_7F1ADD14:
    ctx->pc = 0x7F1ADD14u;
    // 7F1ADD14: lwz     r6, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1ADD18:
    ctx->pc = 0x7F1ADD18u;
    // 7F1ADD18: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1ADD1C:
    ctx->pc = 0x7F1ADD1Cu;
    // 7F1ADD1C: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADD20:
    ctx->pc = 0x7F1ADD20u;
    // 7F1ADD20: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD20u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_7F1ADD24:
    ctx->pc = 0x7F1ADD24u;
    // 7F1ADD24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1ADD28:
    ctx->pc = 0x7F1ADD28u;
    // 7F1ADD28: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1ADD2C:
    ctx->pc = 0x7F1ADD2Cu;
    // 7F1ADD2C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD2Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1ADD30:
    ctx->pc = 0x7F1ADD30u;
    // 7F1ADD30: lwz     r31, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1ADD34:
    ctx->pc = 0x7F1ADD34u;
    // 7F1ADD34: lwz     r30, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1ADD38:
    ctx->pc = 0x7F1ADD38u;
    // 7F1ADD38: stfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1ADD3C:
    ctx->pc = 0x7F1ADD3Cu;
    // 7F1ADD3C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADD40:
    ctx->pc = 0x7F1ADD40u;
    // 7F1ADD40: lwz     r29, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1ADD44:
    ctx->pc = 0x7F1ADD44u;
    // 7F1ADD44: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADD48:
    ctx->pc = 0x7F1ADD48u;
    // 7F1ADD48: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADD4C:
    ctx->pc = 0x7F1ADD4Cu;
    // 7F1ADD4C: stfs     f2, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1ADD50:
    ctx->pc = 0x7F1ADD50u;
    // 7F1ADD50: bl      0x7F114508
    {
            ctx->lr = 0x7F1ADD54u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1ADD54:
    ctx->pc = 0x7F1ADD54u;
    ctx->downcount -= 15;
    // 7F1ADD54: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1ADD58:
    ctx->pc = 0x7F1ADD58u;
    // 7F1ADD58: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ADD5C:
    ctx->pc = 0x7F1ADD5Cu;
    // 7F1ADD5C: addi    r7, r6, 6792
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(6792);

label_7F1ADD60:
    ctx->pc = 0x7F1ADD60u;
    // 7F1ADD60: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADD64:
    ctx->pc = 0x7F1ADD64u;
    // 7F1ADD64: addi    r6, r4, 6796
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6796);

label_7F1ADD68:
    ctx->pc = 0x7F1ADD68u;
    // 7F1ADD68: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1ADD6C:
    ctx->pc = 0x7F1ADD6Cu;
    // 7F1ADD6C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ADD70:
    ctx->pc = 0x7F1ADD70u;
    // 7F1ADD70: lfs     f29, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD70u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1ADD74:
    ctx->pc = 0x7F1ADD74u;
    // 7F1ADD74: lfs     f30, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD74u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1ADD78:
    ctx->pc = 0x7F1ADD78u;
    // 7F1ADD78: addi    r24, r5, -6704
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(-6704);

label_7F1ADD7C:
    ctx->pc = 0x7F1ADD7Cu;
    // 7F1ADD7C: lfs     f31, 6804(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1ADD80:
    ctx->pc = 0x7F1ADD80u;
    // 7F1ADD80: addi    r25, r4, 6800
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(6800);

label_7F1ADD84:
    ctx->pc = 0x7F1ADD84u;
    // 7F1ADD84: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F1ADD88:
    ctx->pc = 0x7F1ADD88u;
    // 7F1ADD88: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1ADD8C:
    ctx->pc = 0x7F1ADD8Cu;
    // 7F1ADD8C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1ADD90:
    ctx->downcount -= 42;
    // 7F1ADD90: add   r4, r28, r26
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1ADD94:
    // 7F1ADD94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ADD98:
    ctx->pc = 0x7F1ADD98u;
    // 7F1ADD98: lfs     f0, 128(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADD98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADD9C:
    // 7F1ADD9C: addi    r21, r4, 100
    ctx->gpr[21] = ctx->gpr[4] + (u32)(s32)(100);

label_7F1ADDA0:
    // 7F1ADDA0: addi    r23, r4, 116
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(116);

label_7F1ADDA4:
    ctx->pc = 0x7F1ADDA4u;
    // 7F1ADDA4: fdivs   f1, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1ADDA4u)) return;
    ppc_fdivs(ctx, 1, 0, 29);

label_7F1ADDA8:
    // 7F1ADDA8: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F1ADDAC:
    // 7F1ADDAC: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F1ADDB0:
    ctx->pc = 0x7F1ADDB0u;
    // 7F1ADDB0: fdivs   f2, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1ADDB0u)) return;
    ppc_fdivs(ctx, 2, 0, 30);

label_7F1ADDB4:
    // 7F1ADDB4: bl      0x7F1ADAE4
    {
            ctx->lr = 0x7F1ADDB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADAE4u;
                return;
            }
            goto label_7F1ADAE4;
    }

label_7F1ADDB8:
    ctx->downcount -= 6;
    // 7F1ADDB8: add   r20, r28, r27
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F1ADDBC:
    ctx->pc = 0x7F1ADDBCu;
    // 7F1ADDBC: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADDBCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADDC0:
    // 7F1ADDC0: addi    r22, r20, 612
    ctx->gpr[22] = ctx->gpr[20] + (u32)(s32)(612);

label_7F1ADDC4:
    // 7F1ADDC4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADDC8:
    // 7F1ADDC8: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1ADDCC:
    // 7F1ADDCC: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADDD0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADDD0:
    ctx->downcount -= 4;
    // 7F1ADDD0: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F1ADDD4:
    // 7F1ADDD4: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F1ADDD8:
    // 7F1ADDD8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADDDC:
    // 7F1ADDDC: bl      0x800261B4
    {
            ctx->lr = 0x7F1ADDE0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ADDE0:
    ctx->pc = 0x7F1ADDE0u;
    ctx->downcount -= 4;
    // 7F1ADDE0: lfs     f1, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADDE0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADDE4:
    // 7F1ADDE4: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1ADDE8:
    // 7F1ADDE8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADDEC:
    // 7F1ADDEC: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADDF0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADDF0:
    ctx->downcount -= 4;
    // 7F1ADDF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADDF4:
    ctx->pc = 0x7F1ADDF4u;
    // 7F1ADDF4: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADDF4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADDF8:
    // 7F1ADDF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADDFC:
    // 7F1ADDFC: bl      0x800261FC
    {
            ctx->lr = 0x7F1ADE00u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1ADE00:
    ctx->downcount -= 4;
    // 7F1ADE00: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F1ADE04:
    // 7F1ADE04: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F1ADE08:
    // 7F1ADE08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1ADE0C:
    // 7F1ADE0C: bl      0x800261B4
    {
            ctx->lr = 0x7F1ADE10u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1ADE10:
    ctx->pc = 0x7F1ADE10u;
    ctx->downcount -= 41;
    // 7F1ADE10: lfs     f2, 612(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE10u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADE14:
    // 7F1ADE14: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F1ADE18:
    ctx->pc = 0x7F1ADE18u;
    // 7F1ADE18: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE18u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADE1C:
    // 7F1ADE1C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_7F1ADE20:
    ctx->pc = 0x7F1ADE20u;
    // 7F1ADE20: fnmsubs f0, f31, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE20u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[2], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE24:
    // 7F1ADE24: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F1ADE28:
    // 7F1ADE28: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F1ADE2C:
    // 7F1ADE2C: cmpwi   r19, 16
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ADE30:
    // 7F1ADE30: addi    r31, r31, 64
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1ADE34:
    // 7F1ADE34: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F1ADE38:
    ctx->pc = 0x7F1ADE38u;
    // 7F1ADE38: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE38u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE3C:
    // 7F1ADE3C: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F1ADE40:
    ctx->pc = 0x7F1ADE40u;
    // 7F1ADE40: stfs     f0, 612(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE40u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(612);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADE44:
    ctx->pc = 0x7F1ADE44u;
    // 7F1ADE44: lfs     f2, 616(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE44u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADE48:
    ctx->pc = 0x7F1ADE48u;
    // 7F1ADE48: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE48u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADE4C:
    ctx->pc = 0x7F1ADE4Cu;
    // 7F1ADE4C: fnmsubs f0, f31, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE4Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[2], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE50:
    ctx->pc = 0x7F1ADE50u;
    // 7F1ADE50: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE50u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE54:
    ctx->pc = 0x7F1ADE54u;
    // 7F1ADE54: stfs     f0, 616(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE54u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(616);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADE58:
    ctx->pc = 0x7F1ADE58u;
    // 7F1ADE58: lfs     f2, 620(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE58u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADE5C:
    ctx->pc = 0x7F1ADE5Cu;
    // 7F1ADE5C: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE5Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADE60:
    ctx->pc = 0x7F1ADE60u;
    // 7F1ADE60: fnmsubs f0, f31, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE60u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[2], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE64:
    ctx->pc = 0x7F1ADE64u;
    // 7F1ADE64: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE64u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ADE68:
    ctx->pc = 0x7F1ADE68u;
    // 7F1ADE68: stfs     f0, 620(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADE68u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(620);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ADE6C:
    ctx->pc = 0x7F1ADE6Cu;
    // 7F1ADE6C: stb     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1ADE70:
    ctx->pc = 0x7F1ADE70u;
    // 7F1ADE70: stb     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ADE74:
    ctx->pc = 0x7F1ADE74u;
    // 7F1ADE74: stb     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ADE78:
    ctx->pc = 0x7F1ADE78u;
    // 7F1ADE78: stb     r29, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F1ADE7C:
    ctx->pc = 0x7F1ADE7Cu;
    // 7F1ADE7C: stb     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1ADE80:
    ctx->pc = 0x7F1ADE80u;
    // 7F1ADE80: stb     r3, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ADE84:
    ctx->pc = 0x7F1ADE84u;
    // 7F1ADE84: stb     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ADE88:
    ctx->pc = 0x7F1ADE88u;
    // 7F1ADE88: stb     r29, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F1ADE8C:
    ctx->pc = 0x7F1ADE8Cu;
    // 7F1ADE8C: stb     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1ADE90:
    ctx->pc = 0x7F1ADE90u;
    // 7F1ADE90: stb     r3, 25(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ADE94:
    ctx->pc = 0x7F1ADE94u;
    // 7F1ADE94: stb     r0, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ADE98:
    ctx->pc = 0x7F1ADE98u;
    // 7F1ADE98: stb     r29, 27(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F1ADE9C:
    ctx->pc = 0x7F1ADE9Cu;
    // 7F1ADE9C: stb     r4, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1ADEA0:
    ctx->pc = 0x7F1ADEA0u;
    // 7F1ADEA0: stb     r3, 37(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ADEA4:
    ctx->pc = 0x7F1ADEA4u;
    // 7F1ADEA4: stb     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ADEA8:
    ctx->pc = 0x7F1ADEA8u;
    // 7F1ADEA8: stb     r29, 39(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F1ADEAC:
    // 7F1ADEAC: addi    r30, r30, 48
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1ADEB0:
    // 7F1ADEB0: bc    12, 0, 0x7F1ADD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADD90u;
                return;
            }
            goto label_7F1ADD90;
        }
    }

label_7F1ADEB4:
    ctx->pc = 0x7F1ADEB4u;
    ctx->downcount -= 16;
    // 7F1ADEB4: lwz     r6, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1ADEB8:
    ctx->pc = 0x7F1ADEB8u;
    // 7F1ADEB8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1ADEBC:
    ctx->pc = 0x7F1ADEBCu;
    // 7F1ADEBC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADEC0:
    ctx->pc = 0x7F1ADEC0u;
    // 7F1ADEC0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ADEC4:
    ctx->pc = 0x7F1ADEC4u;
    // 7F1ADEC4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADEC8:
    ctx->pc = 0x7F1ADEC8u;
    // 7F1ADEC8: lfs     f3, 6808(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEC8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1ADECC:
    ctx->pc = 0x7F1ADECCu;
    // 7F1ADECC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1ADED0:
    ctx->pc = 0x7F1ADED0u;
    // 7F1ADED0: lfs     f0, 6780(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADED0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ADED4:
    ctx->pc = 0x7F1ADED4u;
    // 7F1ADED4: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADED8:
    ctx->pc = 0x7F1ADED8u;
    // 7F1ADED8: lfs     f2, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADED8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ADEDC:
    ctx->pc = 0x7F1ADEDCu;
    // 7F1ADEDC: lfs     f1, 876(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEDCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADEE0:
    ctx->pc = 0x7F1ADEE0u;
    // 7F1ADEE0: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEE0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1ADEE4:
    ctx->pc = 0x7F1ADEE4u;
    // 7F1ADEE4: stfs     f1, 876(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEE4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(876);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ADEE8:
    ctx->pc = 0x7F1ADEE8u;
    // 7F1ADEE8: lfs     f1, 876(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEE8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADEEC:
    ctx->pc = 0x7F1ADEECu;
    // 7F1ADEEC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ADEF0:
    ctx->pc = 0x7F1ADEF0u;
    // 7F1ADEF0: bc    4, 1, 0x7F1ADEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ADEFC;
        }
    }

label_7F1ADEF4:
    ctx->pc = 0x7F1ADEF4u;
    ctx->downcount -= 2;
    // 7F1ADEF4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1ADEF8:
    ctx->pc = 0x7F1ADEF8u;
    // 7F1ADEF8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1ADEFCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1ADEFC:
    ctx->pc = 0x7F1ADEFCu;
    ctx->downcount -= 22;
    // 7F1ADEFC: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ADEFCu);
        if (ctx->exception) return;
    }

label_7F1ADF00:
    ctx->pc = 0x7F1ADF00u;
    // 7F1ADF00: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ADF04:
    ctx->pc = 0x7F1ADF04u;
    // 7F1ADF04: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ADF04u);
        if (ctx->exception) return;
    }

label_7F1ADF08:
    ctx->pc = 0x7F1ADF08u;
    // 7F1ADF08: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ADF0C:
    ctx->pc = 0x7F1ADF0Cu;
    // 7F1ADF0C: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ADF0Cu);
        if (ctx->exception) return;
    }

label_7F1ADF10:
    ctx->pc = 0x7F1ADF10u;
    // 7F1ADF10: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ADF14:
    ctx->pc = 0x7F1ADF14u;
    // 7F1ADF14: lmw     r19, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ADF18:
    ctx->pc = 0x7F1ADF18u;
    // 7F1ADF18: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADF1C:
    ctx->pc = 0x7F1ADF1Cu;
    // 7F1ADF1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ADF20:
    ctx->pc = 0x7F1ADF20u;
    // 7F1ADF20: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F1ADF24:
    ctx->pc = 0x7F1ADF24u;
    // 7F1ADF24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ADF28:
    ctx->pc = 0x7F1ADF28u;
    ctx->downcount -= 5;
    // 7F1ADF28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ADF2C:
    ctx->pc = 0x7F1ADF2Cu;
    // 7F1ADF2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ADF30:
    ctx->pc = 0x7F1ADF30u;
    // 7F1ADF30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADF34:
    ctx->pc = 0x7F1ADF34u;
    // 7F1ADF34: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ADF38:
    ctx->pc = 0x7F1ADF38u;
    // 7F1ADF38: bl      0x7F3C2440
    {
            ctx->lr = 0x7F1ADF3Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F1ADF3C:
    ctx->pc = 0x7F1ADF3Cu;
    ctx->downcount -= 5;
    // 7F1ADF3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ADF40:
    ctx->pc = 0x7F1ADF40u;
    // 7F1ADF40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ADF44:
    ctx->pc = 0x7F1ADF44u;
    // 7F1ADF44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ADF48:
    ctx->pc = 0x7F1ADF48u;
    // 7F1ADF48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1ADF4C:
    ctx->pc = 0x7F1ADF4Cu;
    ctx->downcount -= 30;
    // 7F1ADF4C: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ADF50:
    ctx->pc = 0x7F1ADF50u;
    // 7F1ADF50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ADF54:
    ctx->pc = 0x7F1ADF54u;
    // 7F1ADF54: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ADF58:
    ctx->pc = 0x7F1ADF58u;
    // 7F1ADF58: stfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1ADF5C:
    ctx->pc = 0x7F1ADF5Cu;
    // 7F1ADF5C: psq_st   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ADF5Cu);
        if (ctx->exception) return;
    }

label_7F1ADF60:
    ctx->pc = 0x7F1ADF60u;
    // 7F1ADF60: stfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1ADF64:
    ctx->pc = 0x7F1ADF64u;
    // 7F1ADF64: psq_st   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ADF64u);
        if (ctx->exception) return;
    }

label_7F1ADF68:
    ctx->pc = 0x7F1ADF68u;
    // 7F1ADF68: stfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1ADF6C:
    ctx->pc = 0x7F1ADF6Cu;
    // 7F1ADF6C: psq_st   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ADF6Cu);
        if (ctx->exception) return;
    }

label_7F1ADF70:
    ctx->pc = 0x7F1ADF70u;
    // 7F1ADF70: stfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1ADF74:
    ctx->pc = 0x7F1ADF74u;
    // 7F1ADF74: psq_st   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1ADF74u);
        if (ctx->exception) return;
    }

label_7F1ADF78:
    ctx->pc = 0x7F1ADF78u;
    // 7F1ADF78: stfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1ADF7C:
    ctx->pc = 0x7F1ADF7Cu;
    // 7F1ADF7C: psq_st   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ADF7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1ADF7Cu);
        if (ctx->exception) return;
    }

label_7F1ADF80:
    ctx->pc = 0x7F1ADF80u;
    // 7F1ADF80: stmw     r21, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ADF84:
    ctx->pc = 0x7F1ADF84u;
    // 7F1ADF84: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADF88:
    ctx->pc = 0x7F1ADF88u;
    // 7F1ADF88: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1ADF8C:
    ctx->pc = 0x7F1ADF8Cu;
    // 7F1ADF8C: addi    r5, r23, 28
    ctx->gpr[5] = ctx->gpr[23] + (u32)(s32)(28);

label_7F1ADF90:
    ctx->pc = 0x7F1ADF90u;
    // 7F1ADF90: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F1ADF94:
    ctx->pc = 0x7F1ADF94u;
    // 7F1ADF94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ADF98:
    loop_7F1ADF98(ctx);
    if (ctx->pc == 0x7F1ADFACu) goto label_7F1ADFAC;
    return;
label_7F1ADF9C:
    ctx->pc = 0x7F1ADF9Cu;
    // 7F1ADF9C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1ADFA0:
    ctx->pc = 0x7F1ADFA0u;
    // 7F1ADFA0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ADFA4:
    ctx->pc = 0x7F1ADFA4u;
    // 7F1ADFA4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1ADFA8:
    // 7F1ADFA8: bc    16, 0, 0x7F1ADF98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADF98u;
                return;
            }
            goto label_7F1ADF98;
        }
    }

label_7F1ADFAC:
    ctx->pc = 0x7F1ADFACu;
    ctx->downcount -= 3;
    // 7F1ADFAC: lis     r3, 170
    ctx->gpr[3] = ((u32)(s32)(170) << 16);

label_7F1ADFB0:
    ctx->pc = 0x7F1ADFB0u;
    // 7F1ADFB0: addi    r3, r3, 30525
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30525);

label_7F1ADFB4:
    ctx->pc = 0x7F1ADFB4u;
    // 7F1ADFB4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1ADFB8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1ADFB8:
    ctx->pc = 0x7F1ADFB8u;
    ctx->downcount -= 7;
    // 7F1ADFB8: lis     r5, 11
    ctx->gpr[5] = ((u32)(s32)(11) << 16);

label_7F1ADFBC:
    ctx->pc = 0x7F1ADFBCu;
    // 7F1ADFBC: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ADFC0:
    ctx->pc = 0x7F1ADFC0u;
    // 7F1ADFC0: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_7F1ADFC4:
    ctx->pc = 0x7F1ADFC4u;
    // 7F1ADFC4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1ADFC8:
    ctx->pc = 0x7F1ADFC8u;
    // 7F1ADFC8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F1ADFCC:
    ctx->pc = 0x7F1ADFCCu;
    // 7F1ADFCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ADFD0:
    ctx->pc = 0x7F1ADFD0u;
    // 7F1ADFD0: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1ADFD4u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1ADFD4:
    ctx->pc = 0x7F1ADFD4u;
    ctx->downcount -= 3;
    // 7F1ADFD4: or.   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1ADFD8:
    ctx->pc = 0x7F1ADFD8u;
    // 7F1ADFD8: stw     r29, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1ADFDC:
    ctx->pc = 0x7F1ADFDCu;
    // 7F1ADFDC: bc    4, 2, 0x7F1ADFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ADFE8;
        }
    }

label_7F1ADFE0:
    ctx->pc = 0x7F1ADFE0u;
    ctx->downcount -= 2;
    // 7F1ADFE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1ADFE4:
    ctx->pc = 0x7F1ADFE4u;
    // 7F1ADFE4: b       0x7F1AE2E0
    {
            goto label_7F1AE2E0;
    }

label_7F1ADFE8:
    ctx->pc = 0x7F1ADFE8u;
    ctx->downcount -= 2;
    // 7F1ADFE8: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F1ADFEC:
    ctx->pc = 0x7F1ADFECu;
    // 7F1ADFEC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1ADFF0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1ADFF0:
    ctx->pc = 0x7F1ADFF0u;
    ctx->downcount -= 15;
    // 7F1ADFF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ADFF4:
    ctx->pc = 0x7F1ADFF4u;
    // 7F1ADFF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ADFF8:
    ctx->pc = 0x7F1ADFF8u;
    // 7F1ADFF8: lfs     f1, 6776(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ADFF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ADFFC:
    ctx->pc = 0x7F1ADFFCu;
    // 7F1ADFFC: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1AE000:
    ctx->pc = 0x7F1AE000u;
    // 7F1AE000: lfs     f0, 6812(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE000u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6812);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AE004:
    ctx->pc = 0x7F1AE004u;
    // 7F1AE004: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1AE008:
    ctx->pc = 0x7F1AE008u;
    // 7F1AE008: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE00C:
    ctx->pc = 0x7F1AE00Cu;
    // 7F1AE00C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1AE010:
    ctx->pc = 0x7F1AE010u;
    // 7F1AE010: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1AE014:
    ctx->pc = 0x7F1AE014u;
    // 7F1AE014: fctiwz    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AE014u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[29] = dolrecomp_f64_from_bits(result); }

label_7F1AE018:
    ctx->pc = 0x7F1AE018u;
    // 7F1AE018: fctiwz    f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE018u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[28] = dolrecomp_f64_from_bits(result); }

label_7F1AE01C:
    ctx->pc = 0x7F1AE01Cu;
    // 7F1AE01C: stw     r30, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AE020:
    ctx->pc = 0x7F1AE020u;
    // 7F1AE020: addi    r31, r4, 12832
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1AE024:
    ctx->pc = 0x7F1AE024u;
    // 7F1AE024: addi    r22, r3, -28673
    ctx->gpr[22] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F1AE028:
    ctx->pc = 0x7F1AE028u;
    // 7F1AE028: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1AE02C:
    ctx->downcount -= 4;
    // 7F1AE02C: add   r3, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AE030:
    // 7F1AE030: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F1AE034:
    ctx->pc = 0x7F1AE034u;
    // 7F1AE034: lwz     r27, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1AE038:
    ctx->pc = 0x7F1AE038u;
    // 7F1AE038: lwz     r26, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F1AE03C:
    ctx->downcount -= 1;
    // 7F1AE03C: bl      0x800147F8
    {
            ctx->lr = 0x7F1AE040u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1AE040:
    ctx->pc = 0x7F1AE040u;
    ctx->downcount -= 89;
    // 7F1AE040: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE044:
    // 7F1AE044: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F1AE048:
    ctx->pc = 0x7F1AE048u;
    // 7F1AE048: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE04C:
    // 7F1AE04C: li      r12, 128
    ctx->gpr[12] = (u32)(s32)(128);

label_7F1AE050:
    ctx->pc = 0x7F1AE050u;
    // 7F1AE050: stfd     f29, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AE054:
    // 7F1AE054: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1AE058:
    // 7F1AE058: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

label_7F1AE05C:
    // 7F1AE05C: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F1AE060:
    ctx->pc = 0x7F1AE060u;
    // 7F1AE060: stw     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE064:
    // 7F1AE064: cmpwi   r24, 64
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AE068:
    ctx->pc = 0x7F1AE068u;
    // 7F1AE068: lwz     r11, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1AE06C:
    ctx->pc = 0x7F1AE06Cu;
    // 7F1AE06C: stw     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE070:
    ctx->pc = 0x7F1AE070u;
    // 7F1AE070: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE074:
    ctx->pc = 0x7F1AE074u;
    // 7F1AE074: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE078:
    ctx->pc = 0x7F1AE078u;
    // 7F1AE078: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AE07C:
    ctx->pc = 0x7F1AE07Cu;
    // 7F1AE07C: stw     r4, 56(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE080:
    ctx->pc = 0x7F1AE080u;
    // 7F1AE080: lwz     r10, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1AE084:
    ctx->pc = 0x7F1AE084u;
    // 7F1AE084: stw     r3, 60(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE088:
    ctx->pc = 0x7F1AE088u;
    // 7F1AE088: lwz     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE08C:
    ctx->pc = 0x7F1AE08Cu;
    // 7F1AE08C: lwz     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE090:
    ctx->pc = 0x7F1AE090u;
    // 7F1AE090: stfd     f28, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AE094:
    ctx->pc = 0x7F1AE094u;
    // 7F1AE094: stw     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE098:
    ctx->pc = 0x7F1AE098u;
    // 7F1AE098: lwz     r8, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AE09C:
    ctx->pc = 0x7F1AE09Cu;
    // 7F1AE09C: stw     r3, 36(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE0A0:
    ctx->pc = 0x7F1AE0A0u;
    // 7F1AE0A0: lwz     r4, 56(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE0A4:
    ctx->pc = 0x7F1AE0A4u;
    // 7F1AE0A4: lwz     r3, 60(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE0A8:
    ctx->pc = 0x7F1AE0A8u;
    // 7F1AE0A8: stfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE0A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AE0AC:
    ctx->pc = 0x7F1AE0ACu;
    // 7F1AE0AC: stw     r4, 40(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE0B0:
    ctx->pc = 0x7F1AE0B0u;
    // 7F1AE0B0: lwz     r7, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AE0B4:
    ctx->pc = 0x7F1AE0B4u;
    // 7F1AE0B4: stw     r3, 44(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE0B8:
    ctx->pc = 0x7F1AE0B8u;
    // 7F1AE0B8: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE0BC:
    ctx->pc = 0x7F1AE0BCu;
    // 7F1AE0BC: lwz     r3, 36(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE0C0:
    ctx->pc = 0x7F1AE0C0u;
    // 7F1AE0C0: stfd     f29, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE0C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AE0C4:
    ctx->pc = 0x7F1AE0C4u;
    // 7F1AE0C4: stw     r4, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE0C8:
    ctx->pc = 0x7F1AE0C8u;
    // 7F1AE0C8: lwz     r6, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE0CC:
    ctx->pc = 0x7F1AE0CCu;
    // 7F1AE0CC: stw     r3, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE0D0:
    ctx->pc = 0x7F1AE0D0u;
    // 7F1AE0D0: lwz     r4, 40(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE0D4:
    ctx->pc = 0x7F1AE0D4u;
    // 7F1AE0D4: lwz     r3, 44(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE0D8:
    ctx->pc = 0x7F1AE0D8u;
    // 7F1AE0D8: stfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE0D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AE0DC:
    ctx->pc = 0x7F1AE0DCu;
    // 7F1AE0DC: stw     r4, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE0E0:
    ctx->pc = 0x7F1AE0E0u;
    // 7F1AE0E0: lwz     r5, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE0E4:
    ctx->pc = 0x7F1AE0E4u;
    // 7F1AE0E4: stw     r3, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE0E8:
    ctx->pc = 0x7F1AE0E8u;
    // 7F1AE0E8: lwz     r4, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE0EC:
    ctx->pc = 0x7F1AE0ECu;
    // 7F1AE0EC: lwz     r3, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE0F0:
    ctx->pc = 0x7F1AE0F0u;
    // 7F1AE0F0: stfd     f28, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE0F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AE0F4:
    ctx->pc = 0x7F1AE0F4u;
    // 7F1AE0F4: stw     r4, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AE0F8:
    ctx->pc = 0x7F1AE0F8u;
    // 7F1AE0F8: lwz     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE0FC:
    ctx->pc = 0x7F1AE0FCu;
    // 7F1AE0FC: stw     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE100:
    ctx->pc = 0x7F1AE100u;
    // 7F1AE100: lwz     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE104:
    ctx->pc = 0x7F1AE104u;
    // 7F1AE104: lwz     r21, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F1AE108:
    ctx->pc = 0x7F1AE108u;
    // 7F1AE108: stfd     f28, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AE10C:
    ctx->pc = 0x7F1AE10Cu;
    // 7F1AE10C: stw     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE110:
    ctx->pc = 0x7F1AE110u;
    // 7F1AE110: lwz     r3, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE114:
    ctx->pc = 0x7F1AE114u;
    // 7F1AE114: stw     r21, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F1AE118:
    // 7F1AE118: addi    r26, r26, 64
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(64);

label_7F1AE11C:
    ctx->pc = 0x7F1AE11Cu;
    // 7F1AE11C: stb     r12, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE120:
    ctx->pc = 0x7F1AE120u;
    // 7F1AE120: stb     r12, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE124:
    ctx->pc = 0x7F1AE124u;
    // 7F1AE124: stb     r12, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE128:
    ctx->pc = 0x7F1AE128u;
    // 7F1AE128: stb     r12, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE12C:
    ctx->pc = 0x7F1AE12Cu;
    // 7F1AE12C: stb     r12, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE130:
    ctx->pc = 0x7F1AE130u;
    // 7F1AE130: stb     r12, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE134:
    ctx->pc = 0x7F1AE134u;
    // 7F1AE134: stb     r12, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE138:
    ctx->pc = 0x7F1AE138u;
    // 7F1AE138: stb     r12, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE13C:
    ctx->pc = 0x7F1AE13Cu;
    // 7F1AE13C: stb     r12, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE140:
    ctx->pc = 0x7F1AE140u;
    // 7F1AE140: stb     r12, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE144:
    ctx->pc = 0x7F1AE144u;
    // 7F1AE144: stb     r12, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE148:
    ctx->pc = 0x7F1AE148u;
    // 7F1AE148: stb     r28, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F1AE14C:
    ctx->pc = 0x7F1AE14Cu;
    // 7F1AE14C: stb     r12, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE150:
    ctx->pc = 0x7F1AE150u;
    // 7F1AE150: stb     r12, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE154:
    ctx->pc = 0x7F1AE154u;
    // 7F1AE154: stb     r12, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F1AE158:
    ctx->pc = 0x7F1AE158u;
    // 7F1AE158: stb     r28, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F1AE15C:
    ctx->pc = 0x7F1AE15Cu;
    // 7F1AE15C: sth     r11, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F1AE160:
    ctx->pc = 0x7F1AE160u;
    // 7F1AE160: sth     r10, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F1AE164:
    ctx->pc = 0x7F1AE164u;
    // 7F1AE164: sth     r9, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AE168:
    ctx->pc = 0x7F1AE168u;
    // 7F1AE168: sth     r8, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1AE16C:
    ctx->pc = 0x7F1AE16Cu;
    // 7F1AE16C: sth     r7, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1AE170:
    ctx->pc = 0x7F1AE170u;
    // 7F1AE170: sth     r9, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AE174:
    ctx->pc = 0x7F1AE174u;
    // 7F1AE174: sth     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1AE178:
    ctx->pc = 0x7F1AE178u;
    // 7F1AE178: sth     r5, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1AE17C:
    ctx->pc = 0x7F1AE17Cu;
    // 7F1AE17C: sth     r9, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AE180:
    ctx->pc = 0x7F1AE180u;
    // 7F1AE180: sth     r4, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1AE184:
    ctx->pc = 0x7F1AE184u;
    // 7F1AE184: sth     r3, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AE188:
    ctx->pc = 0x7F1AE188u;
    // 7F1AE188: sth     r9, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AE18C:
    ctx->pc = 0x7F1AE18Cu;
    // 7F1AE18C: sth     r22, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F1AE190:
    ctx->pc = 0x7F1AE190u;
    // 7F1AE190: sth     r22, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F1AE194:
    ctx->pc = 0x7F1AE194u;
    // 7F1AE194: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AE198:
    ctx->pc = 0x7F1AE198u;
    // 7F1AE198: sth     r0, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AE19C:
    // 7F1AE19C: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F1AE1A0:
    // 7F1AE1A0: bc    12, 0, 0x7F1AE03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AE03Cu;
                return;
            }
            goto label_7F1AE03C;
        }
    }

label_7F1AE1A4:
    ctx->downcount -= 4;
    // 7F1AE1A4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F1AE1A8:
    // 7F1AE1A8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1AE1AC:
    // 7F1AE1AC: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AE1B0:
    // 7F1AE1B0: bc    12, 0, 0x7F1AE02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AE02Cu;
                return;
            }
            goto label_7F1AE02C;
        }
    }

label_7F1AE1B4:
    ctx->pc = 0x7F1AE1B4u;
    ctx->downcount -= 18;
    // 7F1AE1B4: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE1B8:
    ctx->pc = 0x7F1AE1B8u;
    // 7F1AE1B8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AE1BC:
    ctx->pc = 0x7F1AE1BCu;
    // 7F1AE1BC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AE1C0:
    ctx->pc = 0x7F1AE1C0u;
    // 7F1AE1C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AE1C4:
    ctx->pc = 0x7F1AE1C4u;
    // 7F1AE1C4: addi    r7, r6, 6816
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(6816);

label_7F1AE1C8:
    ctx->pc = 0x7F1AE1C8u;
    // 7F1AE1C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AE1CC:
    ctx->pc = 0x7F1AE1CCu;
    // 7F1AE1CC: addi    r6, r5, 6824
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(6824);

label_7F1AE1D0:
    ctx->pc = 0x7F1AE1D0u;
    // 7F1AE1D0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1AE1D4:
    ctx->pc = 0x7F1AE1D4u;
    // 7F1AE1D4: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1AE1D8:
    ctx->pc = 0x7F1AE1D8u;
    // 7F1AE1D8: stw     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE1DC:
    ctx->pc = 0x7F1AE1DCu;
    // 7F1AE1DC: lfs     f28, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE1DCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1AE1E0:
    ctx->pc = 0x7F1AE1E0u;
    // 7F1AE1E0: addi    r26, r5, -6936
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(-6936);

label_7F1AE1E4:
    ctx->pc = 0x7F1AE1E4u;
    // 7F1AE1E4: lfd     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE1E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE1E8:
    ctx->pc = 0x7F1AE1E8u;
    // 7F1AE1E8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F1AE1EC:
    ctx->pc = 0x7F1AE1ECu;
    // 7F1AE1EC: lfs     f30, 6784(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE1ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AE1F0:
    ctx->pc = 0x7F1AE1F0u;
    // 7F1AE1F0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1AE1F4:
    ctx->pc = 0x7F1AE1F4u;
    // 7F1AE1F4: lfs     f31, 6776(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE1F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1AE1F8:
    ctx->pc = 0x7F1AE1F8u;
    // 7F1AE1F8: lis     r27, 17200
    ctx->gpr[27] = ((u32)(s32)(17200) << 16);

label_7F1AE1FC:
    ctx->downcount -= 1;
    // 7F1AE1FC: bl      0x800147F8
    {
            ctx->lr = 0x7F1AE200u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1AE200:
    ctx->downcount -= 2;
    // 7F1AE200: rlwinm r21, r3, 25, 15, 31
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[3], 25u) & 0x0001FFFFu;
    }

label_7F1AE204:
    // 7F1AE204: bl      0x800147F8
    {
            ctx->lr = 0x7F1AE208u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1AE208:
    ctx->downcount -= 28;
    // 7F1AE208: addi    r0, r21, 64
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(64);

label_7F1AE20C:
    // 7F1AE20C: rlwinm r22, r3, 29, 15, 31
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0x0001FFFFu;
    }

label_7F1AE210:
    // 7F1AE210: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE214:
    ctx->pc = 0x7F1AE214u;
    // 7F1AE214: stw     r27, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1AE218:
    // 7F1AE218: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1AE21C:
    // 7F1AE21C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE220:
    ctx->pc = 0x7F1AE220u;
    // 7F1AE220: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE224:
    ctx->pc = 0x7F1AE224u;
    // 7F1AE224: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE228:
    ctx->pc = 0x7F1AE228u;
    // 7F1AE228: fsubs   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1AE228u)) return;
    ppc_fsubs(ctx, 0, 0, 29);

label_7F1AE22C:
    ctx->pc = 0x7F1AE22Cu;
    // 7F1AE22C: fdivs   f27, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE22Cu)) return;
    ppc_fdivs(ctx, 27, 28, 0);

label_7F1AE230:
    ctx->pc = 0x7F1AE230u;
    // 7F1AE230: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1AE230u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F1AE234:
    // 7F1AE234: bl      0x800261FC
    {
            ctx->lr = 0x7F1AE238u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1AE238:
    ctx->pc = 0x7F1AE238u;
    ctx->downcount -= 3;
    // 7F1AE238: stfs     f30, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AE23C:
    // 7F1AE23C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AE240:
    // 7F1AE240: bl      0x80025A08
    {
            ctx->lr = 0x7F1AE244u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AE244:
    ctx->downcount -= 2;
    // 7F1AE244: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F1AE248:
    // 7F1AE248: bl      0x7F1AE31C
    {
            ctx->lr = 0x7F1AE24Cu;
            goto label_7F1AE31C;
    }

label_7F1AE24C:
    ctx->downcount -= 3;
    // 7F1AE24C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AE250:
    // 7F1AE250: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE254:
    // 7F1AE254: bl      0x7F114738
    {
            ctx->lr = 0x7F1AE258u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AE258:
    ctx->downcount -= 2;
    // 7F1AE258: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1AE25C:
    // 7F1AE25C: bl      0x7F1AE31C
    {
            ctx->lr = 0x7F1AE260u;
            goto label_7F1AE31C;
    }

label_7F1AE260:
    ctx->downcount -= 3;
    // 7F1AE260: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AE264:
    // 7F1AE264: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE268:
    // 7F1AE268: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AE26Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AE26C:
    ctx->downcount -= 10;
    // 7F1AE26C: add   r21, r23, r25
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F1AE270:
    // 7F1AE270: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AE274:
    ctx->pc = 0x7F1AE274u;
    // 7F1AE274: stfs     f31, 100(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE274u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AE278:
    // 7F1AE278: addi    r22, r21, 116
    ctx->gpr[22] = ctx->gpr[21] + (u32)(s32)(116);

label_7F1AE27C:
    // 7F1AE27C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1AE280:
    // 7F1AE280: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE284:
    ctx->pc = 0x7F1AE284u;
    // 7F1AE284: stfs     f31, 104(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE284u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AE288:
    ctx->pc = 0x7F1AE288u;
    // 7F1AE288: stfs     f31, 108(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE288u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AE28C:
    ctx->pc = 0x7F1AE28Cu;
    // 7F1AE28C: stfs     f30, 112(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE28Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AE290:
    // 7F1AE290: bl      0x7F114508
    {
            ctx->lr = 0x7F1AE294u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AE294:
    ctx->downcount -= 2;
    // 7F1AE294: addi    r3, r23, 32
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(32);

label_7F1AE298:
    // 7F1AE298: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1AE29Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1AE29C:
    ctx->downcount -= 5;
    // 7F1AE29C: add   r29, r23, r24
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F1AE2A0:
    // 7F1AE2A0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1AE2A4:
    // 7F1AE2A4: addi    r4, r29, 612
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(612);

label_7F1AE2A8:
    // 7F1AE2A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AE2AC:
    // 7F1AE2AC: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1AE2B0u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1AE2B0:
    ctx->downcount -= 4;
    // 7F1AE2B0: addi    r3, r21, 100
    ctx->gpr[3] = ctx->gpr[21] + (u32)(s32)(100);

label_7F1AE2B4:
    // 7F1AE2B4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1AE2B8:
    // 7F1AE2B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE2BC:
    // 7F1AE2BC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1AE2C0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1AE2C0:
    ctx->pc = 0x7F1AE2C0u;
    ctx->downcount -= 7;
    // 7F1AE2C0: stfs     f27, 128(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2C0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F1AE2C4:
    // 7F1AE2C4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1AE2C8:
    // 7F1AE2C8: cmpwi   r28, 16
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AE2CC:
    // 7F1AE2CC: addi    r25, r25, 32
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(32);

label_7F1AE2D0:
    ctx->pc = 0x7F1AE2D0u;
    // 7F1AE2D0: stfs     f27, 624(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(624);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F1AE2D4:
    // 7F1AE2D4: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F1AE2D8:
    // 7F1AE2D8: bc    12, 0, 0x7F1AE1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AE1FCu;
                return;
            }
            goto label_7F1AE1FC;
        }
    }

label_7F1AE2DC:
    ctx->pc = 0x7F1AE2DCu;
    ctx->downcount -= 1;
    // 7F1AE2DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AE2E0:
    ctx->pc = 0x7F1AE2E0u;
    ctx->downcount -= 26;
    // 7F1AE2E0: psq_l   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AE2E0u);
        if (ctx->exception) return;
    }

label_7F1AE2E4:
    ctx->pc = 0x7F1AE2E4u;
    // 7F1AE2E4: lfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE2E8:
    ctx->pc = 0x7F1AE2E8u;
    // 7F1AE2E8: psq_l   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AE2E8u);
        if (ctx->exception) return;
    }

label_7F1AE2EC:
    ctx->pc = 0x7F1AE2ECu;
    // 7F1AE2EC: lfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE2F0:
    ctx->pc = 0x7F1AE2F0u;
    // 7F1AE2F0: psq_l   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1AE2F0u);
        if (ctx->exception) return;
    }

label_7F1AE2F4:
    ctx->pc = 0x7F1AE2F4u;
    // 7F1AE2F4: lfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE2F8:
    ctx->pc = 0x7F1AE2F8u;
    // 7F1AE2F8: psq_l   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1AE2F8u);
        if (ctx->exception) return;
    }

label_7F1AE2FC:
    ctx->pc = 0x7F1AE2FCu;
    // 7F1AE2FC: lfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE2FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE300:
    ctx->pc = 0x7F1AE300u;
    // 7F1AE300: psq_l   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE300u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1AE300u);
        if (ctx->exception) return;
    }

label_7F1AE304:
    ctx->pc = 0x7F1AE304u;
    // 7F1AE304: lfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE304u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE308:
    ctx->pc = 0x7F1AE308u;
    // 7F1AE308: lmw     r21, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE30C:
    ctx->pc = 0x7F1AE30Cu;
    // 7F1AE30C: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE310:
    ctx->pc = 0x7F1AE310u;
    // 7F1AE310: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE314:
    ctx->pc = 0x7F1AE314u;
    // 7F1AE314: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_7F1AE318:
    ctx->pc = 0x7F1AE318u;
    // 7F1AE318: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE31C:
    ctx->pc = 0x7F1AE31Cu;
    ctx->downcount -= 17;
    // 7F1AE31C: rlwinm r3, r3, 4, 12, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0x000FFFF0u;
    }

label_7F1AE320:
    ctx->pc = 0x7F1AE320u;
    // 7F1AE320: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AE324:
    ctx->pc = 0x7F1AE324u;
    // 7F1AE324: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F1AE328:
    ctx->pc = 0x7F1AE328u;
    // 7F1AE328: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AE32C:
    ctx->pc = 0x7F1AE32Cu;
    // 7F1AE32C: srawi r3, r3, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[3] = value;
        } else if (sh > 31) {
            ctx->gpr[3] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[3] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F1AE330:
    ctx->pc = 0x7F1AE330u;
    // 7F1AE330: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE334:
    ctx->pc = 0x7F1AE334u;
    // 7F1AE334: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AE338:
    ctx->pc = 0x7F1AE338u;
    // 7F1AE338: lfd     f1, 6824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE338u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6824);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE33C:
    ctx->pc = 0x7F1AE33Cu;
    // 7F1AE33C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AE340:
    ctx->pc = 0x7F1AE340u;
    // 7F1AE340: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE344:
    ctx->pc = 0x7F1AE344u;
    // 7F1AE344: lfs     f2, 6832(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE344u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AE348:
    ctx->pc = 0x7F1AE348u;
    // 7F1AE348: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AE34C:
    ctx->pc = 0x7F1AE34Cu;
    // 7F1AE34C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE34Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE350:
    ctx->pc = 0x7F1AE350u;
    // 7F1AE350: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AE350u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AE354:
    ctx->pc = 0x7F1AE354u;
    // 7F1AE354: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE354u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F1AE358:
    ctx->pc = 0x7F1AE358u;
    // 7F1AE358: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE35C:
    ctx->pc = 0x7F1AE35Cu;
    // 7F1AE35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE360:
    ctx->pc = 0x7F1AE360u;
    ctx->downcount -= 20;
    // 7F1AE360: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE364:
    ctx->pc = 0x7F1AE364u;
    // 7F1AE364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE368:
    ctx->pc = 0x7F1AE368u;
    // 7F1AE368: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AE36C:
    ctx->pc = 0x7F1AE36Cu;
    // 7F1AE36C: li      r5, 880
    ctx->gpr[5] = (u32)(s32)(880);

label_7F1AE370:
    ctx->pc = 0x7F1AE370u;
    // 7F1AE370: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE374:
    ctx->pc = 0x7F1AE374u;
    // 7F1AE374: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AE378:
    ctx->pc = 0x7F1AE378u;
    // 7F1AE378: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE37C:
    ctx->pc = 0x7F1AE37Cu;
    // 7F1AE37C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE380:
    ctx->pc = 0x7F1AE380u;
    // 7F1AE380: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1AE384:
    ctx->pc = 0x7F1AE384u;
    // 7F1AE384: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AE388u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AE388:
    ctx->pc = 0x7F1AE388u;
    ctx->downcount -= 2;
    // 7F1AE388: or.   r31, r3, r3
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

label_7F1AE38C:
    ctx->pc = 0x7F1AE38Cu;
    // 7F1AE38C: bc    12, 2, 0x7F1AE3C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AE3C8;
        }
    }

label_7F1AE390:
    ctx->pc = 0x7F1AE390u;
    ctx->downcount -= 5;
    // 7F1AE390: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AE394:
    ctx->pc = 0x7F1AE394u;
    // 7F1AE394: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AE398:
    ctx->pc = 0x7F1AE398u;
    // 7F1AE398: addi    r4, r4, -9072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9072);

label_7F1AE39C:
    ctx->pc = 0x7F1AE39Cu;
    // 7F1AE39C: addi    r5, r5, -8408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8408);

label_7F1AE3A0:
    ctx->pc = 0x7F1AE3A0u;
    // 7F1AE3A0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AE3A4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AE3A4:
    ctx->pc = 0x7F1AE3A4u;
    ctx->downcount -= 3;
    // 7F1AE3A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE3A8:
    ctx->pc = 0x7F1AE3A8u;
    // 7F1AE3A8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AE3AC:
    ctx->pc = 0x7F1AE3ACu;
    // 7F1AE3AC: bl      0x7F1ADF4C
    {
            ctx->lr = 0x7F1AE3B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ADF4Cu;
                return;
            }
            goto label_7F1ADF4C;
    }

label_7F1AE3B0:
    ctx->pc = 0x7F1AE3B0u;
    ctx->downcount -= 2;
    // 7F1AE3B0: cmpwi   r3, 0
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

label_7F1AE3B4:
    ctx->pc = 0x7F1AE3B4u;
    // 7F1AE3B4: bc    4, 0, 0x7F1AE3C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AE3C8;
        }
    }

label_7F1AE3B8:
    ctx->pc = 0x7F1AE3B8u;
    ctx->downcount -= 2;
    // 7F1AE3B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE3BC:
    ctx->pc = 0x7F1AE3BCu;
    // 7F1AE3BC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AE3C0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AE3C0:
    ctx->pc = 0x7F1AE3C0u;
    ctx->downcount -= 2;
    // 7F1AE3C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AE3C4:
    ctx->pc = 0x7F1AE3C4u;
    // 7F1AE3C4: b       0x7F1AE3CC
    {
            goto label_7F1AE3CC;
    }

label_7F1AE3C8:
    ctx->pc = 0x7F1AE3C8u;
    ctx->downcount -= 1;
    // 7F1AE3C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE3CC:
    ctx->pc = 0x7F1AE3CCu;
    ctx->downcount -= 16;
    // 7F1AE3CC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE3D0:
    ctx->pc = 0x7F1AE3D0u;
    // 7F1AE3D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE3D4:
    ctx->pc = 0x7F1AE3D4u;
    // 7F1AE3D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE3D8:
    ctx->pc = 0x7F1AE3D8u;
    // 7F1AE3D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE3DC:
    ctx->pc = 0x7F1AE3DCu;
    // 7F1AE3DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE3E0:
    ctx->pc = 0x7F1AE3E0u;
    ctx->downcount -= 5;
    // 7F1AE3E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE3E4:
    ctx->pc = 0x7F1AE3E4u;
    // 7F1AE3E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE3E8:
    ctx->pc = 0x7F1AE3E8u;
    // 7F1AE3E8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE3EC:
    ctx->pc = 0x7F1AE3ECu;
    // 7F1AE3EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE3F0:
    ctx->pc = 0x7F1AE3F0u;
    // 7F1AE3F0: bl      0x7F19840C
    {
            ctx->lr = 0x7F1AE3F4u;
            ctx->pc = 0x7F19840Cu;
            return;
    }

label_7F1AE3F4:
    ctx->pc = 0x7F1AE3F4u;
    ctx->downcount -= 5;
    // 7F1AE3F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE3F8:
    ctx->pc = 0x7F1AE3F8u;
    // 7F1AE3F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE3FC:
    ctx->pc = 0x7F1AE3FCu;
    // 7F1AE3FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE400:
    ctx->pc = 0x7F1AE400u;
    // 7F1AE400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE404:
    ctx->pc = 0x7F1AE404u;
    ctx->downcount -= 5;
    // 7F1AE404: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE408:
    ctx->pc = 0x7F1AE408u;
    // 7F1AE408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE40C:
    ctx->pc = 0x7F1AE40Cu;
    // 7F1AE40C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE410:
    ctx->pc = 0x7F1AE410u;
    // 7F1AE410: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE414:
    ctx->pc = 0x7F1AE414u;
    // 7F1AE414: bl      0x7F1A2218
    {
            ctx->lr = 0x7F1AE418u;
            ctx->pc = 0x7F1A2218u;
            return;
    }

label_7F1AE418:
    ctx->pc = 0x7F1AE418u;
    ctx->downcount -= 5;
    // 7F1AE418: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE41C:
    ctx->pc = 0x7F1AE41Cu;
    // 7F1AE41C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE420:
    ctx->pc = 0x7F1AE420u;
    // 7F1AE420: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE424:
    ctx->pc = 0x7F1AE424u;
    // 7F1AE424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE428:
    ctx->pc = 0x7F1AE428u;
    ctx->downcount -= 5;
    // 7F1AE428: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE42C:
    ctx->pc = 0x7F1AE42Cu;
    // 7F1AE42C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE430:
    ctx->pc = 0x7F1AE430u;
    // 7F1AE430: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE434:
    ctx->pc = 0x7F1AE434u;
    // 7F1AE434: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE438:
    ctx->pc = 0x7F1AE438u;
    // 7F1AE438: bl      0x7F1A2140
    {
            ctx->lr = 0x7F1AE43Cu;
            ctx->pc = 0x7F1A2140u;
            return;
    }

label_7F1AE43C:
    ctx->pc = 0x7F1AE43Cu;
    ctx->downcount -= 5;
    // 7F1AE43C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE440:
    ctx->pc = 0x7F1AE440u;
    // 7F1AE440: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE444:
    ctx->pc = 0x7F1AE444u;
    // 7F1AE444: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE448:
    ctx->pc = 0x7F1AE448u;
    // 7F1AE448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE44C:
    ctx->pc = 0x7F1AE44Cu;
    ctx->downcount -= 6;
    // 7F1AE44C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE450:
    ctx->pc = 0x7F1AE450u;
    // 7F1AE450: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE454:
    ctx->pc = 0x7F1AE454u;
    // 7F1AE454: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE458:
    ctx->pc = 0x7F1AE458u;
    // 7F1AE458: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F1AE45C:
    ctx->pc = 0x7F1AE45Cu;
    // 7F1AE45C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE460:
    ctx->pc = 0x7F1AE460u;
    // 7F1AE460: bl      0x7F198440
    {
            ctx->lr = 0x7F1AE464u;
            ctx->pc = 0x7F198440u;
            return;
    }

label_7F1AE464:
    ctx->pc = 0x7F1AE464u;
    ctx->downcount -= 5;
    // 7F1AE464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE468:
    ctx->pc = 0x7F1AE468u;
    // 7F1AE468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE46C:
    ctx->pc = 0x7F1AE46Cu;
    // 7F1AE46C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE470:
    ctx->pc = 0x7F1AE470u;
    // 7F1AE470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE474:
    ctx->pc = 0x7F1AE474u;
    ctx->downcount -= 8;
    // 7F1AE474: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE478:
    ctx->pc = 0x7F1AE478u;
    // 7F1AE478: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE47C:
    ctx->pc = 0x7F1AE47Cu;
    // 7F1AE47C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE480:
    ctx->pc = 0x7F1AE480u;
    // 7F1AE480: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE480u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE484:
    ctx->pc = 0x7F1AE484u;
    // 7F1AE484: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE484u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AE488:
    ctx->pc = 0x7F1AE488u;
    // 7F1AE488: lfs     f3, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE488u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AE48C:
    ctx->pc = 0x7F1AE48Cu;
    // 7F1AE48C: lfs     f4, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE48Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1AE490:
    ctx->pc = 0x7F1AE490u;
    // 7F1AE490: bl      0x7F19D160
    {
            ctx->lr = 0x7F1AE494u;
            ctx->pc = 0x7F19D160u;
            return;
    }

label_7F1AE494:
    ctx->pc = 0x7F1AE494u;
    ctx->downcount -= 5;
    // 7F1AE494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE498:
    ctx->pc = 0x7F1AE498u;
    // 7F1AE498: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE49C:
    ctx->pc = 0x7F1AE49Cu;
    // 7F1AE49C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE4A0:
    ctx->pc = 0x7F1AE4A0u;
    // 7F1AE4A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE4A4:
    ctx->pc = 0x7F1AE4A4u;
    ctx->downcount -= 6;
    // 7F1AE4A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE4A8:
    ctx->pc = 0x7F1AE4A8u;
    // 7F1AE4A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE4AC:
    ctx->pc = 0x7F1AE4ACu;
    // 7F1AE4AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE4B0:
    ctx->pc = 0x7F1AE4B0u;
    // 7F1AE4B0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE4B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE4B4:
    ctx->pc = 0x7F1AE4B4u;
    // 7F1AE4B4: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE4B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AE4B8:
    ctx->pc = 0x7F1AE4B8u;
    // 7F1AE4B8: bl      0x7F19D144
    {
            ctx->lr = 0x7F1AE4BCu;
            ctx->pc = 0x7F19D144u;
            return;
    }

label_7F1AE4BC:
    ctx->pc = 0x7F1AE4BCu;
    ctx->downcount -= 5;
    // 7F1AE4BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE4C0:
    ctx->pc = 0x7F1AE4C0u;
    // 7F1AE4C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE4C4:
    ctx->pc = 0x7F1AE4C4u;
    // 7F1AE4C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE4C8:
    ctx->pc = 0x7F1AE4C8u;
    // 7F1AE4C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE4CC:
    ctx->pc = 0x7F1AE4CCu;
    ctx->downcount -= 18;
    // 7F1AE4CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE4D0:
    ctx->pc = 0x7F1AE4D0u;
    // 7F1AE4D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE4D4:
    ctx->pc = 0x7F1AE4D4u;
    // 7F1AE4D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE4D8:
    ctx->pc = 0x7F1AE4D8u;
    // 7F1AE4D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE4DC:
    ctx->pc = 0x7F1AE4DCu;
    // 7F1AE4DC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE4E0:
    ctx->pc = 0x7F1AE4E0u;
    // 7F1AE4E0: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE4E4:
    ctx->pc = 0x7F1AE4E4u;
    // 7F1AE4E4: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE4E8:
    ctx->pc = 0x7F1AE4E8u;
    // 7F1AE4E8: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AE4ECu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AE4EC:
    ctx->pc = 0x7F1AE4ECu;
    ctx->downcount -= 1;
    // 7F1AE4EC: bl      0x7F199494
    {
            ctx->lr = 0x7F1AE4F0u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AE4F0:
    ctx->pc = 0x7F1AE4F0u;
    ctx->downcount -= 4;
    // 7F1AE4F0: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE4F4:
    ctx->pc = 0x7F1AE4F4u;
    // 7F1AE4F4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE4F8:
    ctx->pc = 0x7F1AE4F8u;
    // 7F1AE4F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE4FC:
    ctx->pc = 0x7F1AE4FCu;
    // 7F1AE4FC: bl      0x7F1A6768
    {
            ctx->lr = 0x7F1AE500u;
            ctx->pc = 0x7F1A6768u;
            return;
    }

label_7F1AE500:
    ctx->pc = 0x7F1AE500u;
    ctx->downcount -= 16;
    // 7F1AE500: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE504:
    ctx->pc = 0x7F1AE504u;
    // 7F1AE504: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE508:
    ctx->pc = 0x7F1AE508u;
    // 7F1AE508: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE50C:
    ctx->pc = 0x7F1AE50Cu;
    // 7F1AE50C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE510:
    ctx->pc = 0x7F1AE510u;
    // 7F1AE510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE514:
    ctx->pc = 0x7F1AE514u;
    ctx->downcount -= 5;
    // 7F1AE514: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE518:
    ctx->pc = 0x7F1AE518u;
    // 7F1AE518: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE51C:
    ctx->pc = 0x7F1AE51Cu;
    // 7F1AE51C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE520:
    ctx->pc = 0x7F1AE520u;
    // 7F1AE520: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE524:
    ctx->pc = 0x7F1AE524u;
    // 7F1AE524: bl      0x7F2CF788
    {
            ctx->lr = 0x7F1AE528u;
            ctx->pc = 0x7F2CF788u;
            return;
    }

label_7F1AE528:
    ctx->pc = 0x7F1AE528u;
    ctx->downcount -= 5;
    // 7F1AE528: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE52C:
    ctx->pc = 0x7F1AE52Cu;
    // 7F1AE52C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE530:
    ctx->pc = 0x7F1AE530u;
    // 7F1AE530: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE534:
    ctx->pc = 0x7F1AE534u;
    // 7F1AE534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE538:
    ctx->pc = 0x7F1AE538u;
    ctx->downcount -= 7;
    // 7F1AE538: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE53C:
    ctx->pc = 0x7F1AE53Cu;
    // 7F1AE53C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE540:
    ctx->pc = 0x7F1AE540u;
    // 7F1AE540: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE544:
    ctx->pc = 0x7F1AE544u;
    // 7F1AE544: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE548:
    ctx->pc = 0x7F1AE548u;
    // 7F1AE548: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AE54C:
    ctx->pc = 0x7F1AE54Cu;
    // 7F1AE54C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE550:
    ctx->pc = 0x7F1AE550u;
    // 7F1AE550: bl      0x80025A08
    {
            ctx->lr = 0x7F1AE554u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AE554:
    ctx->pc = 0x7F1AE554u;
    ctx->downcount -= 4;
    // 7F1AE554: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE558:
    ctx->pc = 0x7F1AE558u;
    // 7F1AE558: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE558u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE55C:
    ctx->pc = 0x7F1AE55Cu;
    // 7F1AE55C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE560:
    ctx->pc = 0x7F1AE560u;
    // 7F1AE560: bl      0x7F114738
    {
            ctx->lr = 0x7F1AE564u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AE564:
    ctx->pc = 0x7F1AE564u;
    ctx->downcount -= 4;
    // 7F1AE564: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE568:
    ctx->pc = 0x7F1AE568u;
    // 7F1AE568: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE568u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE56C:
    ctx->pc = 0x7F1AE56Cu;
    // 7F1AE56C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE570:
    ctx->pc = 0x7F1AE570u;
    // 7F1AE570: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AE574u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AE574:
    ctx->pc = 0x7F1AE574u;
    ctx->downcount -= 4;
    // 7F1AE574: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE578:
    ctx->pc = 0x7F1AE578u;
    // 7F1AE578: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE578u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE57C:
    ctx->pc = 0x7F1AE57Cu;
    // 7F1AE57C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE580:
    ctx->pc = 0x7F1AE580u;
    // 7F1AE580: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AE584u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AE584:
    ctx->pc = 0x7F1AE584u;
    ctx->downcount -= 12;
    // 7F1AE584: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE588:
    ctx->pc = 0x7F1AE588u;
    // 7F1AE588: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE58C:
    ctx->pc = 0x7F1AE58Cu;
    // 7F1AE58C: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE590:
    ctx->pc = 0x7F1AE590u;
    // 7F1AE590: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE594:
    ctx->pc = 0x7F1AE594u;
    // 7F1AE594: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AE598:
    ctx->pc = 0x7F1AE598u;
    // 7F1AE598: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE59C:
    ctx->pc = 0x7F1AE59Cu;
    // 7F1AE59C: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AE5A0:
    ctx->pc = 0x7F1AE5A0u;
    // 7F1AE5A0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AE5A4:
    ctx->pc = 0x7F1AE5A4u;
    // 7F1AE5A4: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AE5A8:
    ctx->pc = 0x7F1AE5A8u;
    // 7F1AE5A8: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AE5AC:
    ctx->pc = 0x7F1AE5ACu;
    // 7F1AE5AC: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AE5B0:
    ctx->pc = 0x7F1AE5B0u;
    // 7F1AE5B0: bl      0x7F3EF0D0
    {
            ctx->lr = 0x7F1AE5B4u;
            ctx->pc = 0x7F3EF0D0u;
            return;
    }

label_7F1AE5B4:
    ctx->pc = 0x7F1AE5B4u;
    ctx->downcount -= 6;
    // 7F1AE5B4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE5B8:
    ctx->pc = 0x7F1AE5B8u;
    // 7F1AE5B8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE5BC:
    ctx->pc = 0x7F1AE5BCu;
    // 7F1AE5BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE5C0:
    ctx->pc = 0x7F1AE5C0u;
    // 7F1AE5C0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AE5C4:
    ctx->pc = 0x7F1AE5C4u;
    // 7F1AE5C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE5C8:
    ctx->pc = 0x7F1AE5C8u;
    ctx->downcount -= 6;
    // 7F1AE5C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE5CC:
    ctx->pc = 0x7F1AE5CCu;
    // 7F1AE5CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE5D0:
    ctx->pc = 0x7F1AE5D0u;
    // 7F1AE5D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE5D4:
    ctx->pc = 0x7F1AE5D4u;
    // 7F1AE5D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AE5D8:
    ctx->pc = 0x7F1AE5D8u;
    // 7F1AE5D8: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE5DC:
    ctx->pc = 0x7F1AE5DCu;
    // 7F1AE5DC: bl      0x7F198524
    {
            ctx->lr = 0x7F1AE5E0u;
            ctx->pc = 0x7F198524u;
            return;
    }

label_7F1AE5E0:
    ctx->pc = 0x7F1AE5E0u;
    ctx->downcount -= 3;
    // 7F1AE5E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE5E4:
    ctx->pc = 0x7F1AE5E4u;
    // 7F1AE5E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE5E8:
    ctx->pc = 0x7F1AE5E8u;
    // 7F1AE5E8: bl      0x7F1E8E44
    {
            ctx->lr = 0x7F1AE5ECu;
            ctx->pc = 0x7F1E8E44u;
            return;
    }

label_7F1AE5EC:
    ctx->pc = 0x7F1AE5ECu;
    ctx->downcount -= 6;
    // 7F1AE5EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE5F0:
    ctx->pc = 0x7F1AE5F0u;
    // 7F1AE5F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE5F4:
    ctx->pc = 0x7F1AE5F4u;
    // 7F1AE5F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE5F8:
    ctx->pc = 0x7F1AE5F8u;
    // 7F1AE5F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE5FC:
    ctx->pc = 0x7F1AE5FCu;
    // 7F1AE5FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE600:
    ctx->pc = 0x7F1AE600u;
    ctx->downcount -= 18;
    // 7F1AE600: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE604:
    ctx->pc = 0x7F1AE604u;
    // 7F1AE604: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE608:
    ctx->pc = 0x7F1AE608u;
    // 7F1AE608: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE60C:
    ctx->pc = 0x7F1AE60Cu;
    // 7F1AE60C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE610:
    ctx->pc = 0x7F1AE610u;
    // 7F1AE610: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE614:
    ctx->pc = 0x7F1AE614u;
    // 7F1AE614: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE618:
    ctx->pc = 0x7F1AE618u;
    // 7F1AE618: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE61C:
    ctx->pc = 0x7F1AE61Cu;
    // 7F1AE61C: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AE620u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AE620:
    ctx->pc = 0x7F1AE620u;
    ctx->downcount -= 2;
    // 7F1AE620: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE624:
    ctx->pc = 0x7F1AE624u;
    // 7F1AE624: bl      0x7F199504
    {
            ctx->lr = 0x7F1AE628u;
            ctx->pc = 0x7F199504u;
            return;
    }

label_7F1AE628:
    ctx->pc = 0x7F1AE628u;
    ctx->downcount -= 4;
    // 7F1AE628: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE62C:
    ctx->pc = 0x7F1AE62Cu;
    // 7F1AE62C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE630:
    ctx->pc = 0x7F1AE630u;
    // 7F1AE630: addi    r5, r30, 32
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(32);

label_7F1AE634:
    ctx->pc = 0x7F1AE634u;
    // 7F1AE634: bl      0x7F1C9478
    {
            ctx->lr = 0x7F1AE638u;
            ctx->pc = 0x7F1C9478u;
            return;
    }

label_7F1AE638:
    ctx->pc = 0x7F1AE638u;
    ctx->downcount -= 16;
    // 7F1AE638: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE63C:
    ctx->pc = 0x7F1AE63Cu;
    // 7F1AE63C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE640:
    ctx->pc = 0x7F1AE640u;
    // 7F1AE640: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE644:
    ctx->pc = 0x7F1AE644u;
    // 7F1AE644: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE648:
    ctx->pc = 0x7F1AE648u;
    // 7F1AE648: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE64C:
    ctx->pc = 0x7F1AE64Cu;
    ctx->downcount -= 57;
    // 7F1AE64C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE650:
    ctx->pc = 0x7F1AE650u;
    // 7F1AE650: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE654:
    ctx->pc = 0x7F1AE654u;
    // 7F1AE654: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F1AE658:
    ctx->pc = 0x7F1AE658u;
    // 7F1AE658: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AE65C:
    ctx->pc = 0x7F1AE65Cu;
    // 7F1AE65C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE660:
    ctx->pc = 0x7F1AE660u;
    // 7F1AE660: addi    r6, r3, 6840
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(6840);

label_7F1AE664:
    ctx->pc = 0x7F1AE664u;
    // 7F1AE664: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE664u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE668:
    ctx->pc = 0x7F1AE668u;
    // 7F1AE668: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AE66C:
    ctx->pc = 0x7F1AE66Cu;
    // 7F1AE66C: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE670:
    ctx->pc = 0x7F1AE670u;
    // 7F1AE670: addi    r7, r5, 6848
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(6848);

label_7F1AE674:
    ctx->pc = 0x7F1AE674u;
    // 7F1AE674: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE674u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE678:
    ctx->pc = 0x7F1AE678u;
    // 7F1AE678: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE67C:
    ctx->pc = 0x7F1AE67Cu;
    // 7F1AE67C: lwz     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE680:
    ctx->pc = 0x7F1AE680u;
    // 7F1AE680: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE684:
    ctx->pc = 0x7F1AE684u;
    // 7F1AE684: lwz     r6, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE688:
    ctx->pc = 0x7F1AE688u;
    // 7F1AE688: rlwinm r5, r3, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_7F1AE68C:
    ctx->pc = 0x7F1AE68Cu;
    // 7F1AE68C: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AE690:
    ctx->pc = 0x7F1AE690u;
    // 7F1AE690: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE694:
    ctx->pc = 0x7F1AE694u;
    // 7F1AE694: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AE698:
    ctx->pc = 0x7F1AE698u;
    // 7F1AE698: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE69C:
    ctx->pc = 0x7F1AE69Cu;
    // 7F1AE69C: rlwinm r3, r0, 16, 0, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_7F1AE6A0:
    ctx->pc = 0x7F1AE6A0u;
    // 7F1AE6A0: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE6A4:
    ctx->pc = 0x7F1AE6A4u;
    // 7F1AE6A4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6A4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE6A8:
    ctx->pc = 0x7F1AE6A8u;
    // 7F1AE6A8: lwz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AE6AC:
    ctx->pc = 0x7F1AE6ACu;
    // 7F1AE6AC: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE6B0:
    ctx->pc = 0x7F1AE6B0u;
    // 7F1AE6B0: or   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F1AE6B4:
    ctx->pc = 0x7F1AE6B4u;
    // 7F1AE6B4: stw     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AE6B8:
    ctx->pc = 0x7F1AE6B8u;
    // 7F1AE6B8: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AE6BC:
    ctx->pc = 0x7F1AE6BCu;
    // 7F1AE6BC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6BCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AE6C0:
    ctx->pc = 0x7F1AE6C0u;
    // 7F1AE6C0: subf   r5, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F1AE6C4:
    ctx->pc = 0x7F1AE6C4u;
    // 7F1AE6C4: xoris   r6, r5, 0x8000
    ctx->gpr[6] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1AE6C8:
    ctx->pc = 0x7F1AE6C8u;
    // 7F1AE6C8: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE6CC:
    ctx->pc = 0x7F1AE6CCu;
    // 7F1AE6CC: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AE6D0:
    ctx->pc = 0x7F1AE6D0u;
    // 7F1AE6D0: or   r4, r3, r0
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F1AE6D4:
    ctx->pc = 0x7F1AE6D4u;
    // 7F1AE6D4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE6D8:
    ctx->pc = 0x7F1AE6D8u;
    // 7F1AE6D8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6D8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE6DC:
    ctx->pc = 0x7F1AE6DCu;
    // 7F1AE6DC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6DCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AE6E0:
    ctx->pc = 0x7F1AE6E0u;
    // 7F1AE6E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AE6E4:
    ctx->pc = 0x7F1AE6E4u;
    // 7F1AE6E4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE6E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AE6E8:
    ctx->pc = 0x7F1AE6E8u;
    // 7F1AE6E8: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE6EC:
    ctx->pc = 0x7F1AE6ECu;
    // 7F1AE6EC: bl      0x7F1D6768
    {
            ctx->lr = 0x7F1AE6F0u;
            ctx->pc = 0x7F1D6768u;
            return;
    }

label_7F1AE6F0:
    ctx->pc = 0x7F1AE6F0u;
    ctx->downcount -= 5;
    // 7F1AE6F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE6F4:
    ctx->pc = 0x7F1AE6F4u;
    // 7F1AE6F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE6F8:
    ctx->pc = 0x7F1AE6F8u;
    // 7F1AE6F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AE6FC:
    ctx->pc = 0x7F1AE6FCu;
    // 7F1AE6FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE700:
    ctx->pc = 0x7F1AE700u;
    ctx->downcount -= 59;
    // 7F1AE700: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE704:
    ctx->pc = 0x7F1AE704u;
    // 7F1AE704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE708:
    ctx->pc = 0x7F1AE708u;
    // 7F1AE708: lis     r9, 17200
    ctx->gpr[9] = ((u32)(s32)(17200) << 16);

label_7F1AE70C:
    ctx->pc = 0x7F1AE70Cu;
    // 7F1AE70C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AE710:
    ctx->pc = 0x7F1AE710u;
    // 7F1AE710: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE714:
    ctx->pc = 0x7F1AE714u;
    // 7F1AE714: or   r10, r4, r4
    {
        ctx->gpr[10] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE718:
    ctx->pc = 0x7F1AE718u;
    // 7F1AE718: lfd     f2, 6856(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE718u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6856);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE71C:
    ctx->pc = 0x7F1AE71Cu;
    // 7F1AE71C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AE720:
    ctx->pc = 0x7F1AE720u;
    // 7F1AE720: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE724:
    ctx->pc = 0x7F1AE724u;
    // 7F1AE724: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AE728:
    ctx->pc = 0x7F1AE728u;
    // 7F1AE728: addi    r6, r4, 6864
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6864);

label_7F1AE72C:
    ctx->pc = 0x7F1AE72Cu;
    // 7F1AE72C: lwz     r5, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE730:
    ctx->pc = 0x7F1AE730u;
    // 7F1AE730: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE734:
    ctx->pc = 0x7F1AE734u;
    // 7F1AE734: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AE738:
    ctx->pc = 0x7F1AE738u;
    // 7F1AE738: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE738u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE73C:
    ctx->pc = 0x7F1AE73Cu;
    // 7F1AE73C: mulli   r4, r5, 10
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)10);

label_7F1AE740:
    ctx->pc = 0x7F1AE740u;
    // 7F1AE740: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE744:
    ctx->pc = 0x7F1AE744u;
    // 7F1AE744: lwz     r0, 16(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE748:
    ctx->pc = 0x7F1AE748u;
    // 7F1AE748: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE74C:
    ctx->pc = 0x7F1AE74Cu;
    // 7F1AE74C: mulli   r5, r0, 10
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_7F1AE750:
    ctx->pc = 0x7F1AE750u;
    // 7F1AE750: lwz     r0, 20(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE754:
    ctx->pc = 0x7F1AE754u;
    // 7F1AE754: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE754u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE758:
    ctx->pc = 0x7F1AE758u;
    // 7F1AE758: lwz     r8, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AE75C:
    ctx->pc = 0x7F1AE75Cu;
    // 7F1AE75C: lwz     r3, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE760:
    ctx->pc = 0x7F1AE760u;
    // 7F1AE760: mulli   r6, r0, 10
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)10);

label_7F1AE764:
    ctx->pc = 0x7F1AE764u;
    // 7F1AE764: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE764u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AE768:
    ctx->pc = 0x7F1AE768u;
    // 7F1AE768: subf   r0, r8, r3
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AE76C:
    ctx->pc = 0x7F1AE76Cu;
    // 7F1AE76C: stw     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AE770:
    ctx->pc = 0x7F1AE770u;
    // 7F1AE770: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE774:
    ctx->pc = 0x7F1AE774u;
    // 7F1AE774: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE778:
    ctx->pc = 0x7F1AE778u;
    // 7F1AE778: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE77C:
    ctx->pc = 0x7F1AE77Cu;
    // 7F1AE77C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE77Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE780:
    ctx->pc = 0x7F1AE780u;
    // 7F1AE780: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE780u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AE784:
    ctx->pc = 0x7F1AE784u;
    // 7F1AE784: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE784u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AE788:
    ctx->pc = 0x7F1AE788u;
    // 7F1AE788: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AE78C:
    ctx->pc = 0x7F1AE78Cu;
    // 7F1AE78C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE790:
    ctx->pc = 0x7F1AE790u;
    // 7F1AE790: bl      0x7F1A7588
    {
            ctx->lr = 0x7F1AE794u;
            ctx->pc = 0x7F1A7588u;
            return;
    }

label_7F1AE794:
    ctx->pc = 0x7F1AE794u;
    ctx->downcount -= 5;
    // 7F1AE794: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE798:
    ctx->pc = 0x7F1AE798u;
    // 7F1AE798: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE79C:
    ctx->pc = 0x7F1AE79Cu;
    // 7F1AE79C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AE7A0:
    ctx->pc = 0x7F1AE7A0u;
    // 7F1AE7A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE7A4:
    ctx->pc = 0x7F1AE7A4u;
    ctx->downcount -= 44;
    // 7F1AE7A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE7A8:
    ctx->pc = 0x7F1AE7A8u;
    // 7F1AE7A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE7AC:
    ctx->pc = 0x7F1AE7ACu;
    // 7F1AE7AC: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1AE7B0:
    ctx->pc = 0x7F1AE7B0u;
    // 7F1AE7B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AE7B4:
    ctx->pc = 0x7F1AE7B4u;
    // 7F1AE7B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE7B8:
    ctx->pc = 0x7F1AE7B8u;
    // 7F1AE7B8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AE7BC:
    ctx->pc = 0x7F1AE7BCu;
    // 7F1AE7BC: lfd     f2, 6872(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6872);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE7C0:
    ctx->pc = 0x7F1AE7C0u;
    // 7F1AE7C0: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE7C4:
    ctx->pc = 0x7F1AE7C4u;
    // 7F1AE7C4: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AE7C8:
    ctx->pc = 0x7F1AE7C8u;
    // 7F1AE7C8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE7CC:
    ctx->pc = 0x7F1AE7CCu;
    // 7F1AE7CC: lfs     f1, 6880(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE7D0:
    ctx->pc = 0x7F1AE7D0u;
    // 7F1AE7D0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE7D4:
    ctx->pc = 0x7F1AE7D4u;
    // 7F1AE7D4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE7D8:
    ctx->pc = 0x7F1AE7D8u;
    // 7F1AE7D8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE7DC:
    ctx->pc = 0x7F1AE7DCu;
    // 7F1AE7DC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE7E0:
    ctx->pc = 0x7F1AE7E0u;
    // 7F1AE7E0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7E0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE7E4:
    ctx->pc = 0x7F1AE7E4u;
    // 7F1AE7E4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AE7E8:
    ctx->pc = 0x7F1AE7E8u;
    // 7F1AE7E8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AE7EC:
    ctx->pc = 0x7F1AE7ECu;
    // 7F1AE7EC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AE7F0:
    ctx->pc = 0x7F1AE7F0u;
    // 7F1AE7F0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7F0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AE7F4:
    ctx->pc = 0x7F1AE7F4u;
    // 7F1AE7F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE7F8:
    ctx->pc = 0x7F1AE7F8u;
    // 7F1AE7F8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AE7FC:
    ctx->pc = 0x7F1AE7FCu;
    // 7F1AE7FC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AE7FCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AE800:
    ctx->pc = 0x7F1AE800u;
    // 7F1AE800: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE800u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AE804:
    ctx->pc = 0x7F1AE804u;
    // 7F1AE804: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AE804u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AE808:
    ctx->pc = 0x7F1AE808u;
    // 7F1AE808: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE808u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AE80C:
    ctx->pc = 0x7F1AE80Cu;
    // 7F1AE80C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE810:
    ctx->pc = 0x7F1AE810u;
    // 7F1AE810: bl      0x7F1A74DC
    {
            ctx->lr = 0x7F1AE814u;
            ctx->pc = 0x7F1A74DCu;
            return;
    }

label_7F1AE814:
    ctx->pc = 0x7F1AE814u;
    ctx->downcount -= 5;
    // 7F1AE814: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE818:
    ctx->pc = 0x7F1AE818u;
    // 7F1AE818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE81C:
    ctx->pc = 0x7F1AE81Cu;
    // 7F1AE81C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AE820:
    ctx->pc = 0x7F1AE820u;
    // 7F1AE820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE824:
    ctx->pc = 0x7F1AE824u;
    ctx->downcount -= 19;
    // 7F1AE824: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE828:
    ctx->pc = 0x7F1AE828u;
    // 7F1AE828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE82C:
    ctx->pc = 0x7F1AE82Cu;
    // 7F1AE82C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE830:
    ctx->pc = 0x7F1AE830u;
    // 7F1AE830: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE834:
    ctx->pc = 0x7F1AE834u;
    // 7F1AE834: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE838:
    ctx->pc = 0x7F1AE838u;
    // 7F1AE838: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE83C:
    ctx->pc = 0x7F1AE83Cu;
    // 7F1AE83C: lwz     r30, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1AE840:
    ctx->pc = 0x7F1AE840u;
    // 7F1AE840: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE844:
    ctx->pc = 0x7F1AE844u;
    // 7F1AE844: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AE848u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AE848:
    ctx->pc = 0x7F1AE848u;
    ctx->downcount -= 2;
    // 7F1AE848: lwz     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE84C:
    ctx->pc = 0x7F1AE84Cu;
    // 7F1AE84C: bl      0x7F199504
    {
            ctx->lr = 0x7F1AE850u;
            ctx->pc = 0x7F199504u;
            return;
    }

label_7F1AE850:
    ctx->pc = 0x7F1AE850u;
    ctx->downcount -= 5;
    // 7F1AE850: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE854:
    ctx->pc = 0x7F1AE854u;
    // 7F1AE854: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE858:
    ctx->pc = 0x7F1AE858u;
    // 7F1AE858: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE85C:
    ctx->pc = 0x7F1AE85Cu;
    // 7F1AE85C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AE860:
    ctx->pc = 0x7F1AE860u;
    // 7F1AE860: bl      0x7F33E3AC
    {
            ctx->lr = 0x7F1AE864u;
            ctx->pc = 0x7F33E3ACu;
            return;
    }

label_7F1AE864:
    ctx->pc = 0x7F1AE864u;
    ctx->downcount -= 16;
    // 7F1AE864: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE868:
    ctx->pc = 0x7F1AE868u;
    // 7F1AE868: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE86C:
    ctx->pc = 0x7F1AE86Cu;
    // 7F1AE86C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE870:
    ctx->pc = 0x7F1AE870u;
    // 7F1AE870: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AE874:
    ctx->pc = 0x7F1AE874u;
    // 7F1AE874: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE878:
    ctx->pc = 0x7F1AE878u;
    ctx->downcount -= 18;
    // 7F1AE878: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE87C:
    ctx->pc = 0x7F1AE87Cu;
    // 7F1AE87C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE880:
    ctx->pc = 0x7F1AE880u;
    // 7F1AE880: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE884:
    ctx->pc = 0x7F1AE884u;
    // 7F1AE884: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE888:
    ctx->pc = 0x7F1AE888u;
    // 7F1AE888: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE88C:
    ctx->pc = 0x7F1AE88Cu;
    // 7F1AE88C: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE890:
    ctx->pc = 0x7F1AE890u;
    // 7F1AE890: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE894:
    ctx->pc = 0x7F1AE894u;
    // 7F1AE894: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AE898u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AE898:
    ctx->pc = 0x7F1AE898u;
    ctx->downcount -= 2;
    // 7F1AE898: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE89C:
    ctx->pc = 0x7F1AE89Cu;
    // 7F1AE89C: bl      0x7F199504
    {
            ctx->lr = 0x7F1AE8A0u;
            ctx->pc = 0x7F199504u;
            return;
    }

label_7F1AE8A0:
    ctx->pc = 0x7F1AE8A0u;
    ctx->downcount -= 5;
    // 7F1AE8A0: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE8A4:
    ctx->pc = 0x7F1AE8A4u;
    // 7F1AE8A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE8A8:
    ctx->pc = 0x7F1AE8A8u;
    // 7F1AE8A8: lwz     r6, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AE8AC:
    ctx->pc = 0x7F1AE8ACu;
    // 7F1AE8AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AE8B0:
    ctx->pc = 0x7F1AE8B0u;
    // 7F1AE8B0: bl      0x7F17810C
    {
            ctx->lr = 0x7F1AE8B4u;
            ctx->pc = 0x7F17810Cu;
            return;
    }

label_7F1AE8B4:
    ctx->pc = 0x7F1AE8B4u;
    ctx->downcount -= 16;
    // 7F1AE8B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AE8B8:
    ctx->pc = 0x7F1AE8B8u;
    // 7F1AE8B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE8BC:
    ctx->pc = 0x7F1AE8BCu;
    // 7F1AE8BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE8C0:
    ctx->pc = 0x7F1AE8C0u;
    // 7F1AE8C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE8C4:
    ctx->pc = 0x7F1AE8C4u;
    // 7F1AE8C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE8C8:
    ctx->pc = 0x7F1AE8C8u;
    ctx->downcount -= 7;
    // 7F1AE8C8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE8CC:
    ctx->pc = 0x7F1AE8CCu;
    // 7F1AE8CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE8D0:
    ctx->pc = 0x7F1AE8D0u;
    // 7F1AE8D0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE8D4:
    ctx->pc = 0x7F1AE8D4u;
    // 7F1AE8D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE8D8:
    ctx->pc = 0x7F1AE8D8u;
    // 7F1AE8D8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AE8DC:
    ctx->pc = 0x7F1AE8DCu;
    // 7F1AE8DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE8E0:
    ctx->pc = 0x7F1AE8E0u;
    // 7F1AE8E0: bl      0x80025A08
    {
            ctx->lr = 0x7F1AE8E4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AE8E4:
    ctx->pc = 0x7F1AE8E4u;
    ctx->downcount -= 4;
    // 7F1AE8E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE8E8:
    ctx->pc = 0x7F1AE8E8u;
    // 7F1AE8E8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE8E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE8EC:
    ctx->pc = 0x7F1AE8ECu;
    // 7F1AE8EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE8F0:
    ctx->pc = 0x7F1AE8F0u;
    // 7F1AE8F0: bl      0x7F114738
    {
            ctx->lr = 0x7F1AE8F4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AE8F4:
    ctx->pc = 0x7F1AE8F4u;
    ctx->downcount -= 4;
    // 7F1AE8F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE8F8:
    ctx->pc = 0x7F1AE8F8u;
    // 7F1AE8F8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE8F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE8FC:
    ctx->pc = 0x7F1AE8FCu;
    // 7F1AE8FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE900:
    ctx->pc = 0x7F1AE900u;
    // 7F1AE900: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AE904u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AE904:
    ctx->pc = 0x7F1AE904u;
    ctx->downcount -= 4;
    // 7F1AE904: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE908:
    ctx->pc = 0x7F1AE908u;
    // 7F1AE908: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE908u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE90C:
    ctx->pc = 0x7F1AE90Cu;
    // 7F1AE90C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE910:
    ctx->pc = 0x7F1AE910u;
    // 7F1AE910: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AE914u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AE914:
    ctx->pc = 0x7F1AE914u;
    ctx->downcount -= 3;
    // 7F1AE914: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AE918:
    ctx->pc = 0x7F1AE918u;
    // 7F1AE918: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE91C:
    ctx->pc = 0x7F1AE91Cu;
    // 7F1AE91C: bl      0x7F1A22EC
    {
            ctx->lr = 0x7F1AE920u;
            ctx->pc = 0x7F1A22ECu;
            return;
    }

label_7F1AE920:
    ctx->pc = 0x7F1AE920u;
    ctx->downcount -= 6;
    // 7F1AE920: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE924:
    ctx->pc = 0x7F1AE924u;
    // 7F1AE924: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AE928:
    ctx->pc = 0x7F1AE928u;
    // 7F1AE928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE92C:
    ctx->pc = 0x7F1AE92Cu;
    // 7F1AE92C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AE930:
    ctx->pc = 0x7F1AE930u;
    // 7F1AE930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE934:
    ctx->pc = 0x7F1AE934u;
    ctx->downcount -= 5;
    // 7F1AE934: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE938:
    ctx->pc = 0x7F1AE938u;
    // 7F1AE938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE93C:
    ctx->pc = 0x7F1AE93Cu;
    // 7F1AE93C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE940:
    ctx->pc = 0x7F1AE940u;
    // 7F1AE940: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE944:
    ctx->pc = 0x7F1AE944u;
    // 7F1AE944: bl      0x7F23108C
    {
            ctx->lr = 0x7F1AE948u;
            ctx->pc = 0x7F23108Cu;
            return;
    }

label_7F1AE948:
    ctx->pc = 0x7F1AE948u;
    ctx->downcount -= 5;
    // 7F1AE948: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE94C:
    ctx->pc = 0x7F1AE94Cu;
    // 7F1AE94C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE950:
    ctx->pc = 0x7F1AE950u;
    // 7F1AE950: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE954:
    ctx->pc = 0x7F1AE954u;
    // 7F1AE954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE958:
    ctx->pc = 0x7F1AE958u;
    ctx->downcount -= 15;
    // 7F1AE958: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE95C:
    ctx->pc = 0x7F1AE95Cu;
    // 7F1AE95C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE960:
    ctx->pc = 0x7F1AE960u;
    // 7F1AE960: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE964:
    ctx->pc = 0x7F1AE964u;
    // 7F1AE964: lwz     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AE968:
    ctx->pc = 0x7F1AE968u;
    // 7F1AE968: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE96C:
    ctx->pc = 0x7F1AE96Cu;
    // 7F1AE96C: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE970:
    ctx->pc = 0x7F1AE970u;
    // 7F1AE970: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AE974:
    ctx->pc = 0x7F1AE974u;
    // 7F1AE974: rlwinm r5, r3, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_7F1AE978:
    ctx->pc = 0x7F1AE978u;
    // 7F1AE978: lwz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AE97C:
    ctx->pc = 0x7F1AE97Cu;
    // 7F1AE97C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE980:
    ctx->pc = 0x7F1AE980u;
    // 7F1AE980: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AE984:
    ctx->pc = 0x7F1AE984u;
    // 7F1AE984: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AE988:
    ctx->pc = 0x7F1AE988u;
    // 7F1AE988: or   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[5];
    }

label_7F1AE98C:
    ctx->pc = 0x7F1AE98Cu;
    // 7F1AE98C: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AE990:
    ctx->pc = 0x7F1AE990u;
    // 7F1AE990: bl      0x7F205014
    {
            ctx->lr = 0x7F1AE994u;
            ctx->pc = 0x7F205014u;
            return;
    }

label_7F1AE994:
    ctx->pc = 0x7F1AE994u;
    ctx->downcount -= 5;
    // 7F1AE994: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AE998:
    ctx->pc = 0x7F1AE998u;
    // 7F1AE998: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AE99C:
    ctx->pc = 0x7F1AE99Cu;
    // 7F1AE99C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AE9A0:
    ctx->pc = 0x7F1AE9A0u;
    // 7F1AE9A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AE9A4:
    ctx->pc = 0x7F1AE9A4u;
    ctx->downcount -= 17;
    // 7F1AE9A4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AE9A8:
    ctx->pc = 0x7F1AE9A8u;
    // 7F1AE9A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AE9AC:
    ctx->pc = 0x7F1AE9ACu;
    // 7F1AE9AC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AE9B0:
    ctx->pc = 0x7F1AE9B0u;
    // 7F1AE9B0: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AE9B4:
    ctx->pc = 0x7F1AE9B4u;
    // 7F1AE9B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AE9B8:
    ctx->pc = 0x7F1AE9B8u;
    // 7F1AE9B8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AE9BC:
    ctx->pc = 0x7F1AE9BCu;
    // 7F1AE9BC: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AE9C0u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AE9C0:
    ctx->pc = 0x7F1AE9C0u;
    ctx->downcount -= 1;
    // 7F1AE9C0: bl      0x7F199494
    {
            ctx->lr = 0x7F1AE9C4u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AE9C4:
    ctx->pc = 0x7F1AE9C4u;
    ctx->downcount -= 3;
    // 7F1AE9C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE9C8:
    ctx->pc = 0x7F1AE9C8u;
    // 7F1AE9C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE9CC:
    ctx->pc = 0x7F1AE9CCu;
    // 7F1AE9CC: bl      0x80025A08
    {
            ctx->lr = 0x7F1AE9D0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AE9D0:
    ctx->pc = 0x7F1AE9D0u;
    ctx->downcount -= 4;
    // 7F1AE9D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE9D4:
    ctx->pc = 0x7F1AE9D4u;
    // 7F1AE9D4: lfs     f1, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE9D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE9D8:
    ctx->pc = 0x7F1AE9D8u;
    // 7F1AE9D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE9DC:
    ctx->pc = 0x7F1AE9DCu;
    // 7F1AE9DC: bl      0x7F114738
    {
            ctx->lr = 0x7F1AE9E0u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AE9E0:
    ctx->pc = 0x7F1AE9E0u;
    ctx->downcount -= 4;
    // 7F1AE9E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE9E4:
    ctx->pc = 0x7F1AE9E4u;
    // 7F1AE9E4: lfs     f1, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE9E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE9E8:
    ctx->pc = 0x7F1AE9E8u;
    // 7F1AE9E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE9EC:
    ctx->pc = 0x7F1AE9ECu;
    // 7F1AE9EC: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AE9F0u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AE9F0:
    ctx->pc = 0x7F1AE9F0u;
    ctx->downcount -= 4;
    // 7F1AE9F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AE9F4:
    ctx->pc = 0x7F1AE9F4u;
    // 7F1AE9F4: lfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AE9F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AE9F8:
    ctx->pc = 0x7F1AE9F8u;
    // 7F1AE9F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AE9FC:
    ctx->pc = 0x7F1AE9FCu;
    // 7F1AE9FC: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEA00u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEA00:
    ctx->pc = 0x7F1AEA00u;
    ctx->downcount -= 8;
    // 7F1AEA00: lwz     r5, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEA04:
    ctx->pc = 0x7F1AEA04u;
    // 7F1AEA04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AEA08:
    ctx->pc = 0x7F1AEA08u;
    // 7F1AEA08: lfs     f1, 68(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA08u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEA0C:
    ctx->pc = 0x7F1AEA0Cu;
    // 7F1AEA0C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA10:
    ctx->pc = 0x7F1AEA10u;
    // 7F1AEA10: lfs     f2, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA10u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AEA14:
    ctx->pc = 0x7F1AEA14u;
    // 7F1AEA14: lfs     f3, 76(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA14u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AEA18:
    ctx->pc = 0x7F1AEA18u;
    // 7F1AEA18: lfs     f4, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA18u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1AEA1C:
    ctx->pc = 0x7F1AEA1Cu;
    // 7F1AEA1C: bl      0x7F2316DC
    {
            ctx->lr = 0x7F1AEA20u;
            ctx->pc = 0x7F2316DCu;
            return;
    }

label_7F1AEA20:
    ctx->pc = 0x7F1AEA20u;
    ctx->downcount -= 16;
    // 7F1AEA20: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AEA24:
    ctx->pc = 0x7F1AEA24u;
    // 7F1AEA24: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEA28:
    ctx->pc = 0x7F1AEA28u;
    // 7F1AEA28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEA2C:
    ctx->pc = 0x7F1AEA2Cu;
    // 7F1AEA2C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEA30:
    ctx->pc = 0x7F1AEA30u;
    // 7F1AEA30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEA34:
    ctx->pc = 0x7F1AEA34u;
    ctx->downcount -= 7;
    // 7F1AEA34: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEA38:
    ctx->pc = 0x7F1AEA38u;
    // 7F1AEA38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEA3C:
    ctx->pc = 0x7F1AEA3Cu;
    // 7F1AEA3C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEA40:
    ctx->pc = 0x7F1AEA40u;
    // 7F1AEA40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA44:
    ctx->pc = 0x7F1AEA44u;
    // 7F1AEA44: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEA48:
    ctx->pc = 0x7F1AEA48u;
    // 7F1AEA48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEA4C:
    ctx->pc = 0x7F1AEA4Cu;
    // 7F1AEA4C: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEA50u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEA50:
    ctx->pc = 0x7F1AEA50u;
    ctx->downcount -= 4;
    // 7F1AEA50: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA54:
    ctx->pc = 0x7F1AEA54u;
    // 7F1AEA54: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEA58:
    ctx->pc = 0x7F1AEA58u;
    // 7F1AEA58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEA5C:
    ctx->pc = 0x7F1AEA5Cu;
    // 7F1AEA5C: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEA60u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEA60:
    ctx->pc = 0x7F1AEA60u;
    ctx->downcount -= 4;
    // 7F1AEA60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA64:
    ctx->pc = 0x7F1AEA64u;
    // 7F1AEA64: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEA68:
    ctx->pc = 0x7F1AEA68u;
    // 7F1AEA68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEA6C:
    ctx->pc = 0x7F1AEA6Cu;
    // 7F1AEA6C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEA70u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEA70:
    ctx->pc = 0x7F1AEA70u;
    ctx->downcount -= 4;
    // 7F1AEA70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA74:
    ctx->pc = 0x7F1AEA74u;
    // 7F1AEA74: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEA74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEA78:
    ctx->pc = 0x7F1AEA78u;
    // 7F1AEA78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEA7C:
    ctx->pc = 0x7F1AEA7Cu;
    // 7F1AEA7C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEA80u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEA80:
    ctx->pc = 0x7F1AEA80u;
    ctx->downcount -= 15;
    // 7F1AEA80: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEA84:
    ctx->pc = 0x7F1AEA84u;
    // 7F1AEA84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEA88:
    ctx->pc = 0x7F1AEA88u;
    // 7F1AEA88: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEA8C:
    ctx->pc = 0x7F1AEA8Cu;
    // 7F1AEA8C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEA90:
    ctx->pc = 0x7F1AEA90u;
    // 7F1AEA90: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AEA94:
    ctx->pc = 0x7F1AEA94u;
    // 7F1AEA94: lwz     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AEA98:
    ctx->pc = 0x7F1AEA98u;
    // 7F1AEA98: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AEA9C:
    ctx->pc = 0x7F1AEA9Cu;
    // 7F1AEA9C: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AEAA0:
    ctx->pc = 0x7F1AEAA0u;
    // 7F1AEAA0: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEAA4:
    ctx->pc = 0x7F1AEAA4u;
    // 7F1AEAA4: or   r7, r7, r6
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AEAA8:
    ctx->pc = 0x7F1AEAA8u;
    // 7F1AEAA8: lwz     r6, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AEAAC:
    ctx->pc = 0x7F1AEAACu;
    // 7F1AEAAC: or   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[4];
    }

label_7F1AEAB0:
    ctx->pc = 0x7F1AEAB0u;
    // 7F1AEAB0: lwz     r7, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AEAB4:
    ctx->pc = 0x7F1AEAB4u;
    // 7F1AEAB4: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AEAB8:
    ctx->pc = 0x7F1AEAB8u;
    // 7F1AEAB8: bl      0x7F1A46E8
    {
            ctx->lr = 0x7F1AEABCu;
            ctx->pc = 0x7F1A46E8u;
            return;
    }

label_7F1AEABC:
    ctx->pc = 0x7F1AEABCu;
    ctx->downcount -= 6;
    // 7F1AEABC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEAC0:
    ctx->pc = 0x7F1AEAC0u;
    // 7F1AEAC0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEAC4:
    ctx->pc = 0x7F1AEAC4u;
    // 7F1AEAC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEAC8:
    ctx->pc = 0x7F1AEAC8u;
    // 7F1AEAC8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEACC:
    ctx->pc = 0x7F1AEACCu;
    // 7F1AEACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEAD0:
    ctx->pc = 0x7F1AEAD0u;
    ctx->downcount -= 7;
    // 7F1AEAD0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEAD4:
    ctx->pc = 0x7F1AEAD4u;
    // 7F1AEAD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEAD8:
    ctx->pc = 0x7F1AEAD8u;
    // 7F1AEAD8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEADC:
    ctx->pc = 0x7F1AEADCu;
    // 7F1AEADC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEAE0:
    ctx->pc = 0x7F1AEAE0u;
    // 7F1AEAE0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEAE4:
    ctx->pc = 0x7F1AEAE4u;
    // 7F1AEAE4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEAE8:
    ctx->pc = 0x7F1AEAE8u;
    // 7F1AEAE8: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEAECu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEAEC:
    ctx->pc = 0x7F1AEAECu;
    ctx->downcount -= 4;
    // 7F1AEAEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEAF0:
    ctx->pc = 0x7F1AEAF0u;
    // 7F1AEAF0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEAF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEAF4:
    ctx->pc = 0x7F1AEAF4u;
    // 7F1AEAF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEAF8:
    ctx->pc = 0x7F1AEAF8u;
    // 7F1AEAF8: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEAFCu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEAFC:
    ctx->pc = 0x7F1AEAFCu;
    ctx->downcount -= 4;
    // 7F1AEAFC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB00:
    ctx->pc = 0x7F1AEB00u;
    // 7F1AEB00: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEB00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEB04:
    ctx->pc = 0x7F1AEB04u;
    // 7F1AEB04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEB08:
    ctx->pc = 0x7F1AEB08u;
    // 7F1AEB08: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEB0Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEB0C:
    ctx->pc = 0x7F1AEB0Cu;
    ctx->downcount -= 4;
    // 7F1AEB0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB10:
    ctx->pc = 0x7F1AEB10u;
    // 7F1AEB10: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEB10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEB14:
    ctx->pc = 0x7F1AEB14u;
    // 7F1AEB14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEB18:
    ctx->pc = 0x7F1AEB18u;
    // 7F1AEB18: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEB1Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEB1C:
    ctx->pc = 0x7F1AEB1Cu;
    ctx->downcount -= 2;
    // 7F1AEB1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB20:
    ctx->pc = 0x7F1AEB20u;
    // 7F1AEB20: bl      0x7F231A00
    {
            ctx->lr = 0x7F1AEB24u;
            ctx->pc = 0x7F231A00u;
            return;
    }

label_7F1AEB24:
    ctx->pc = 0x7F1AEB24u;
    ctx->downcount -= 6;
    // 7F1AEB24: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEB28:
    ctx->pc = 0x7F1AEB28u;
    // 7F1AEB28: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEB2C:
    ctx->pc = 0x7F1AEB2Cu;
    // 7F1AEB2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEB30:
    ctx->pc = 0x7F1AEB30u;
    // 7F1AEB30: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEB34:
    ctx->pc = 0x7F1AEB34u;
    // 7F1AEB34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEB38:
    ctx->pc = 0x7F1AEB38u;
    ctx->downcount -= 7;
    // 7F1AEB38: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEB3C:
    ctx->pc = 0x7F1AEB3Cu;
    // 7F1AEB3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEB40:
    ctx->pc = 0x7F1AEB40u;
    // 7F1AEB40: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEB44:
    ctx->pc = 0x7F1AEB44u;
    // 7F1AEB44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB48:
    ctx->pc = 0x7F1AEB48u;
    // 7F1AEB48: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEB4C:
    ctx->pc = 0x7F1AEB4Cu;
    // 7F1AEB4C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEB50:
    ctx->pc = 0x7F1AEB50u;
    // 7F1AEB50: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEB54u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEB54:
    ctx->pc = 0x7F1AEB54u;
    ctx->downcount -= 4;
    // 7F1AEB54: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB58:
    ctx->pc = 0x7F1AEB58u;
    // 7F1AEB58: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEB58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEB5C:
    ctx->pc = 0x7F1AEB5Cu;
    // 7F1AEB5C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEB60:
    ctx->pc = 0x7F1AEB60u;
    // 7F1AEB60: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEB64u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEB64:
    ctx->pc = 0x7F1AEB64u;
    ctx->downcount -= 4;
    // 7F1AEB64: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB68:
    ctx->pc = 0x7F1AEB68u;
    // 7F1AEB68: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEB68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEB6C:
    ctx->pc = 0x7F1AEB6Cu;
    // 7F1AEB6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEB70:
    ctx->pc = 0x7F1AEB70u;
    // 7F1AEB70: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEB74u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEB74:
    ctx->pc = 0x7F1AEB74u;
    ctx->downcount -= 4;
    // 7F1AEB74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB78:
    ctx->pc = 0x7F1AEB78u;
    // 7F1AEB78: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEB78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEB7C:
    ctx->pc = 0x7F1AEB7Cu;
    // 7F1AEB7C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEB80:
    ctx->pc = 0x7F1AEB80u;
    // 7F1AEB80: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEB84u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEB84:
    ctx->pc = 0x7F1AEB84u;
    ctx->downcount -= 2;
    // 7F1AEB84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEB88:
    ctx->pc = 0x7F1AEB88u;
    // 7F1AEB88: bl      0x7F1AD9E8
    {
            ctx->lr = 0x7F1AEB8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD9E8u;
                return;
            }
            goto label_7F1AD9E8;
    }

label_7F1AEB8C:
    ctx->pc = 0x7F1AEB8Cu;
    ctx->downcount -= 6;
    // 7F1AEB8C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEB90:
    ctx->pc = 0x7F1AEB90u;
    // 7F1AEB90: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEB94:
    ctx->pc = 0x7F1AEB94u;
    // 7F1AEB94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEB98:
    ctx->pc = 0x7F1AEB98u;
    // 7F1AEB98: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEB9C:
    ctx->pc = 0x7F1AEB9Cu;
    // 7F1AEB9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEBA0:
    ctx->pc = 0x7F1AEBA0u;
    ctx->downcount -= 7;
    // 7F1AEBA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEBA4:
    ctx->pc = 0x7F1AEBA4u;
    // 7F1AEBA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEBA8:
    ctx->pc = 0x7F1AEBA8u;
    // 7F1AEBA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEBAC:
    ctx->pc = 0x7F1AEBACu;
    // 7F1AEBAC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEBB0:
    ctx->pc = 0x7F1AEBB0u;
    // 7F1AEBB0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEBB4:
    ctx->pc = 0x7F1AEBB4u;
    // 7F1AEBB4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AEBB8:
    ctx->pc = 0x7F1AEBB8u;
    // 7F1AEBB8: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AEBBCu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AEBBC:
    ctx->pc = 0x7F1AEBBCu;
    ctx->downcount -= 2;
    // 7F1AEBBC: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEBC0:
    ctx->pc = 0x7F1AEBC0u;
    // 7F1AEBC0: bl      0x7F199504
    {
            ctx->lr = 0x7F1AEBC4u;
            ctx->pc = 0x7F199504u;
            return;
    }

label_7F1AEBC4:
    ctx->pc = 0x7F1AEBC4u;
    ctx->downcount -= 4;
    // 7F1AEBC4: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEBC8:
    ctx->pc = 0x7F1AEBC8u;
    // 7F1AEBC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AEBCC:
    ctx->pc = 0x7F1AEBCCu;
    // 7F1AEBCC: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEBD0:
    ctx->pc = 0x7F1AEBD0u;
    // 7F1AEBD0: bl      0x7F1A3F80
    {
            ctx->lr = 0x7F1AEBD4u;
            ctx->pc = 0x7F1A3F80u;
            return;
    }

label_7F1AEBD4:
    ctx->pc = 0x7F1AEBD4u;
    ctx->downcount -= 6;
    // 7F1AEBD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEBD8:
    ctx->pc = 0x7F1AEBD8u;
    // 7F1AEBD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEBDC:
    ctx->pc = 0x7F1AEBDCu;
    // 7F1AEBDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEBE0:
    ctx->pc = 0x7F1AEBE0u;
    // 7F1AEBE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AEBE4:
    ctx->pc = 0x7F1AEBE4u;
    // 7F1AEBE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEBE8:
    ctx->pc = 0x7F1AEBE8u;
    ctx->downcount -= 7;
    // 7F1AEBE8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEBEC:
    ctx->pc = 0x7F1AEBECu;
    // 7F1AEBEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEBF0:
    ctx->pc = 0x7F1AEBF0u;
    // 7F1AEBF0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEBF4:
    ctx->pc = 0x7F1AEBF4u;
    // 7F1AEBF4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEBF8:
    ctx->pc = 0x7F1AEBF8u;
    // 7F1AEBF8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEBFC:
    ctx->pc = 0x7F1AEBFCu;
    // 7F1AEBFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEC00:
    ctx->pc = 0x7F1AEC00u;
    // 7F1AEC00: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEC04u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEC04:
    ctx->pc = 0x7F1AEC04u;
    ctx->downcount -= 4;
    // 7F1AEC04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEC08:
    ctx->pc = 0x7F1AEC08u;
    // 7F1AEC08: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEC0C:
    ctx->pc = 0x7F1AEC0Cu;
    // 7F1AEC0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEC10:
    ctx->pc = 0x7F1AEC10u;
    // 7F1AEC10: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEC14u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEC14:
    ctx->pc = 0x7F1AEC14u;
    ctx->downcount -= 4;
    // 7F1AEC14: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEC18:
    ctx->pc = 0x7F1AEC18u;
    // 7F1AEC18: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEC1C:
    ctx->pc = 0x7F1AEC1Cu;
    // 7F1AEC1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEC20:
    ctx->pc = 0x7F1AEC20u;
    // 7F1AEC20: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEC24u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEC24:
    ctx->pc = 0x7F1AEC24u;
    ctx->downcount -= 4;
    // 7F1AEC24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEC28:
    ctx->pc = 0x7F1AEC28u;
    // 7F1AEC28: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEC2C:
    ctx->pc = 0x7F1AEC2Cu;
    // 7F1AEC2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEC30:
    ctx->pc = 0x7F1AEC30u;
    // 7F1AEC30: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEC34u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEC34:
    ctx->pc = 0x7F1AEC34u;
    ctx->downcount -= 10;
    // 7F1AEC34: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEC38:
    ctx->pc = 0x7F1AEC38u;
    // 7F1AEC38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEC3C:
    ctx->pc = 0x7F1AEC3Cu;
    // 7F1AEC3C: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEC40:
    ctx->pc = 0x7F1AEC40u;
    // 7F1AEC40: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AEC44:
    ctx->pc = 0x7F1AEC44u;
    // 7F1AEC44: lfs     f3, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AEC48:
    ctx->pc = 0x7F1AEC48u;
    // 7F1AEC48: lfs     f4, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1AEC4C:
    ctx->pc = 0x7F1AEC4Cu;
    // 7F1AEC4C: lfs     f5, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1AEC50:
    ctx->pc = 0x7F1AEC50u;
    // 7F1AEC50: lfs     f6, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1AEC54:
    ctx->pc = 0x7F1AEC54u;
    // 7F1AEC54: lwz     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEC58:
    ctx->pc = 0x7F1AEC58u;
    // 7F1AEC58: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F1AEC5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AD6F8u;
                return;
            }
            goto label_7F1AD6F8;
    }

label_7F1AEC5C:
    ctx->pc = 0x7F1AEC5Cu;
    ctx->downcount -= 6;
    // 7F1AEC5C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEC60:
    ctx->pc = 0x7F1AEC60u;
    // 7F1AEC60: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEC64:
    ctx->pc = 0x7F1AEC64u;
    // 7F1AEC64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEC68:
    ctx->pc = 0x7F1AEC68u;
    // 7F1AEC68: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEC6C:
    ctx->pc = 0x7F1AEC6Cu;
    // 7F1AEC6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEC70:
    ctx->pc = 0x7F1AEC70u;
    ctx->downcount -= 7;
    // 7F1AEC70: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEC74:
    ctx->pc = 0x7F1AEC74u;
    // 7F1AEC74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEC78:
    ctx->pc = 0x7F1AEC78u;
    // 7F1AEC78: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEC7C:
    ctx->pc = 0x7F1AEC7Cu;
    // 7F1AEC7C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AEC80:
    ctx->pc = 0x7F1AEC80u;
    // 7F1AEC80: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEC84:
    ctx->pc = 0x7F1AEC84u;
    // 7F1AEC84: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEC88:
    ctx->pc = 0x7F1AEC88u;
    // 7F1AEC88: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEC8Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEC8C:
    ctx->pc = 0x7F1AEC8Cu;
    ctx->downcount -= 4;
    // 7F1AEC8C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AEC90:
    ctx->pc = 0x7F1AEC90u;
    // 7F1AEC90: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEC90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEC94:
    ctx->pc = 0x7F1AEC94u;
    // 7F1AEC94: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEC98:
    ctx->pc = 0x7F1AEC98u;
    // 7F1AEC98: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEC9Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEC9C:
    ctx->pc = 0x7F1AEC9Cu;
    ctx->downcount -= 4;
    // 7F1AEC9C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AECA0:
    ctx->pc = 0x7F1AECA0u;
    // 7F1AECA0: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AECA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AECA4:
    ctx->pc = 0x7F1AECA4u;
    // 7F1AECA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AECA8:
    ctx->pc = 0x7F1AECA8u;
    // 7F1AECA8: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AECACu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AECAC:
    ctx->pc = 0x7F1AECACu;
    ctx->downcount -= 4;
    // 7F1AECAC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AECB0:
    ctx->pc = 0x7F1AECB0u;
    // 7F1AECB0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AECB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AECB4:
    ctx->pc = 0x7F1AECB4u;
    // 7F1AECB4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AECB8:
    ctx->pc = 0x7F1AECB8u;
    // 7F1AECB8: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AECBCu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AECBC:
    ctx->pc = 0x7F1AECBCu;
    ctx->downcount -= 3;
    // 7F1AECBC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AECC0:
    ctx->pc = 0x7F1AECC0u;
    // 7F1AECC0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1AECC4:
    ctx->pc = 0x7F1AECC4u;
    // 7F1AECC4: bl      0x7F1AECE8
    {
            ctx->lr = 0x7F1AECC8u;
            goto label_7F1AECE8;
    }

label_7F1AECC8:
    ctx->pc = 0x7F1AECC8u;
    ctx->downcount -= 3;
    // 7F1AECC8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AECCC:
    ctx->pc = 0x7F1AECCCu;
    // 7F1AECCC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AECD0:
    ctx->pc = 0x7F1AECD0u;
    // 7F1AECD0: bl      0x7F1AC304
    {
            ctx->lr = 0x7F1AECD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AC304u;
                return;
            }
            goto label_7F1AC304;
    }

label_7F1AECD4:
    ctx->pc = 0x7F1AECD4u;
    ctx->downcount -= 6;
    // 7F1AECD4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AECD8:
    ctx->pc = 0x7F1AECD8u;
    // 7F1AECD8: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AECDC:
    ctx->pc = 0x7F1AECDCu;
    // 7F1AECDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AECE0:
    ctx->pc = 0x7F1AECE0u;
    // 7F1AECE0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1AECE4:
    ctx->pc = 0x7F1AECE4u;
    // 7F1AECE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AECE8:
    ctx->pc = 0x7F1AECE8u;
    ctx->downcount -= 19;
    // 7F1AECE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AECEC:
    ctx->pc = 0x7F1AECECu;
    // 7F1AECEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AECF0:
    ctx->pc = 0x7F1AECF0u;
    // 7F1AECF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AECF4:
    ctx->pc = 0x7F1AECF4u;
    // 7F1AECF4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AECF8:
    ctx->pc = 0x7F1AECF8u;
    // 7F1AECF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AECFC:
    ctx->pc = 0x7F1AECFCu;
    // 7F1AECFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AED00:
    ctx->pc = 0x7F1AED00u;
    // 7F1AED00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AED04:
    ctx->pc = 0x7F1AED04u;
    // 7F1AED04: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AED08:
    ctx->pc = 0x7F1AED08u;
    // 7F1AED08: bl      0x7F1AED44
    {
            ctx->lr = 0x7F1AED0Cu;
            goto label_7F1AED44;
    }

label_7F1AED0C:
    ctx->pc = 0x7F1AED0Cu;
    ctx->downcount -= 3;
    // 7F1AED0C: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F1AED10:
    ctx->pc = 0x7F1AED10u;
    // 7F1AED10: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1AED14:
    ctx->pc = 0x7F1AED14u;
    // 7F1AED14: bl      0x7F1AED44
    {
            ctx->lr = 0x7F1AED18u;
            goto label_7F1AED44;
    }

label_7F1AED18:
    ctx->pc = 0x7F1AED18u;
    ctx->downcount -= 3;
    // 7F1AED18: addi    r3, r31, 8
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(8);

label_7F1AED1C:
    ctx->pc = 0x7F1AED1Cu;
    // 7F1AED1C: addi    r4, r30, 8
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(8);

label_7F1AED20:
    ctx->pc = 0x7F1AED20u;
    // 7F1AED20: bl      0x7F1AED44
    {
            ctx->lr = 0x7F1AED24u;
            goto label_7F1AED44;
    }

label_7F1AED24:
    ctx->pc = 0x7F1AED24u;
    ctx->downcount -= 3;
    // 7F1AED24: addi    r3, r31, 12
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(12);

label_7F1AED28:
    ctx->pc = 0x7F1AED28u;
    // 7F1AED28: addi    r4, r30, 12
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(12);

label_7F1AED2C:
    ctx->pc = 0x7F1AED2Cu;
    // 7F1AED2C: bl      0x7F1AED44
    {
            ctx->lr = 0x7F1AED30u;
            goto label_7F1AED44;
    }

label_7F1AED30:
    ctx->pc = 0x7F1AED30u;
    ctx->downcount -= 16;
    // 7F1AED30: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AED34:
    ctx->pc = 0x7F1AED34u;
    // 7F1AED34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AED38:
    ctx->pc = 0x7F1AED38u;
    // 7F1AED38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AED3C:
    ctx->pc = 0x7F1AED3Cu;
    // 7F1AED3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AED40:
    ctx->pc = 0x7F1AED40u;
    // 7F1AED40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AED44:
    ctx->pc = 0x7F1AED44u;
    ctx->downcount -= 6;
    // 7F1AED44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AED48:
    ctx->pc = 0x7F1AED48u;
    // 7F1AED48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AED4C:
    ctx->pc = 0x7F1AED4Cu;
    // 7F1AED4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AED50:
    ctx->pc = 0x7F1AED50u;
    // 7F1AED50: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AED54:
    ctx->pc = 0x7F1AED54u;
    // 7F1AED54: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AED58:
    ctx->pc = 0x7F1AED58u;
    // 7F1AED58: bl      0x7F1AED74
    {
            ctx->lr = 0x7F1AED5Cu;
            goto label_7F1AED74;
    }

label_7F1AED5C:
    ctx->pc = 0x7F1AED5Cu;
    ctx->downcount -= 7;
    // 7F1AED5C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AED5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AED60:
    ctx->pc = 0x7F1AED60u;
    // 7F1AED60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AED64:
    ctx->pc = 0x7F1AED64u;
    // 7F1AED64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AED68:
    ctx->pc = 0x7F1AED68u;
    // 7F1AED68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AED6C:
    ctx->pc = 0x7F1AED6Cu;
    // 7F1AED6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AED70:
    ctx->pc = 0x7F1AED70u;
    // 7F1AED70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AED74:
    ctx->pc = 0x7F1AED74u;
    ctx->downcount -= 4;
    // 7F1AED74: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F1AED74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F1AED74u);
        if (ctx->exception) return;
    }

label_7F1AED78:
    ctx->pc = 0x7F1AED78u;
    // 7F1AED78: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F1AED78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F1AED78u);
        if (ctx->exception) return;
    }

label_7F1AED7C:
    ctx->pc = 0x7F1AED7Cu;
    // 7F1AED7C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AED7Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1AED80:
    ctx->pc = 0x7F1AED80u;
    // 7F1AED80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AED84:
    ctx->pc = 0x7F1AED84u;
    ctx->downcount -= 7;
    // 7F1AED84: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AED88:
    ctx->pc = 0x7F1AED88u;
    // 7F1AED88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AED8C:
    ctx->pc = 0x7F1AED8Cu;
    // 7F1AED8C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AED90:
    ctx->pc = 0x7F1AED90u;
    // 7F1AED90: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AED94:
    ctx->pc = 0x7F1AED94u;
    // 7F1AED94: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AED98:
    ctx->pc = 0x7F1AED98u;
    // 7F1AED98: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AED9C:
    ctx->pc = 0x7F1AED9Cu;
    // 7F1AED9C: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEDA0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEDA0:
    ctx->pc = 0x7F1AEDA0u;
    ctx->downcount -= 4;
    // 7F1AEDA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEDA4:
    ctx->pc = 0x7F1AEDA4u;
    // 7F1AEDA4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEDA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEDA8:
    ctx->pc = 0x7F1AEDA8u;
    // 7F1AEDA8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEDAC:
    ctx->pc = 0x7F1AEDACu;
    // 7F1AEDAC: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEDB0u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEDB0:
    ctx->pc = 0x7F1AEDB0u;
    ctx->downcount -= 4;
    // 7F1AEDB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEDB4:
    ctx->pc = 0x7F1AEDB4u;
    // 7F1AEDB4: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEDB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEDB8:
    ctx->pc = 0x7F1AEDB8u;
    // 7F1AEDB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEDBC:
    ctx->pc = 0x7F1AEDBCu;
    // 7F1AEDBC: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEDC0u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEDC0:
    ctx->pc = 0x7F1AEDC0u;
    ctx->downcount -= 4;
    // 7F1AEDC0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEDC4:
    ctx->pc = 0x7F1AEDC4u;
    // 7F1AEDC4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEDC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEDC8:
    ctx->pc = 0x7F1AEDC8u;
    // 7F1AEDC8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEDCC:
    ctx->pc = 0x7F1AEDCCu;
    // 7F1AEDCC: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEDD0u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEDD0:
    ctx->pc = 0x7F1AEDD0u;
    ctx->downcount -= 14;
    // 7F1AEDD0: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEDD4:
    ctx->pc = 0x7F1AEDD4u;
    // 7F1AEDD4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEDD8:
    ctx->pc = 0x7F1AEDD8u;
    // 7F1AEDD8: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEDDC:
    ctx->pc = 0x7F1AEDDCu;
    // 7F1AEDDC: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEDE0:
    ctx->pc = 0x7F1AEDE0u;
    // 7F1AEDE0: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AEDE4:
    ctx->pc = 0x7F1AEDE4u;
    // 7F1AEDE4: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AEDE8:
    ctx->pc = 0x7F1AEDE8u;
    // 7F1AEDE8: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AEDEC:
    ctx->pc = 0x7F1AEDECu;
    // 7F1AEDEC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AEDF0:
    ctx->pc = 0x7F1AEDF0u;
    // 7F1AEDF0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEDF4:
    ctx->pc = 0x7F1AEDF4u;
    // 7F1AEDF4: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AEDF8:
    ctx->pc = 0x7F1AEDF8u;
    // 7F1AEDF8: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEDF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEDFC:
    ctx->pc = 0x7F1AEDFCu;
    // 7F1AEDFC: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AEE00:
    ctx->pc = 0x7F1AEE00u;
    // 7F1AEE00: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AEE04:
    ctx->pc = 0x7F1AEE04u;
    // 7F1AEE04: bl      0x7F3DFB18
    {
            ctx->lr = 0x7F1AEE08u;
            ctx->pc = 0x7F3DFB18u;
            return;
    }

label_7F1AEE08:
    ctx->pc = 0x7F1AEE08u;
    ctx->downcount -= 6;
    // 7F1AEE08: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEE0C:
    ctx->pc = 0x7F1AEE0Cu;
    // 7F1AEE0C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEE10:
    ctx->pc = 0x7F1AEE10u;
    // 7F1AEE10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEE14:
    ctx->pc = 0x7F1AEE14u;
    // 7F1AEE14: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEE18:
    ctx->pc = 0x7F1AEE18u;
    // 7F1AEE18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEE1C:
    ctx->pc = 0x7F1AEE1Cu;
    ctx->downcount -= 7;
    // 7F1AEE1C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEE20:
    ctx->pc = 0x7F1AEE20u;
    // 7F1AEE20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEE24:
    ctx->pc = 0x7F1AEE24u;
    // 7F1AEE24: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEE28:
    ctx->pc = 0x7F1AEE28u;
    // 7F1AEE28: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEE2C:
    ctx->pc = 0x7F1AEE2Cu;
    // 7F1AEE2C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEE30:
    ctx->pc = 0x7F1AEE30u;
    // 7F1AEE30: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEE34:
    ctx->pc = 0x7F1AEE34u;
    // 7F1AEE34: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEE38u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEE38:
    ctx->pc = 0x7F1AEE38u;
    ctx->downcount -= 4;
    // 7F1AEE38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEE3C:
    ctx->pc = 0x7F1AEE3Cu;
    // 7F1AEE3C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEE40:
    ctx->pc = 0x7F1AEE40u;
    // 7F1AEE40: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEE44:
    ctx->pc = 0x7F1AEE44u;
    // 7F1AEE44: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEE48u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEE48:
    ctx->pc = 0x7F1AEE48u;
    ctx->downcount -= 4;
    // 7F1AEE48: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEE4C:
    ctx->pc = 0x7F1AEE4Cu;
    // 7F1AEE4C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEE50:
    ctx->pc = 0x7F1AEE50u;
    // 7F1AEE50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEE54:
    ctx->pc = 0x7F1AEE54u;
    // 7F1AEE54: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEE58u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEE58:
    ctx->pc = 0x7F1AEE58u;
    ctx->downcount -= 4;
    // 7F1AEE58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEE5C:
    ctx->pc = 0x7F1AEE5Cu;
    // 7F1AEE5C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEE60:
    ctx->pc = 0x7F1AEE60u;
    // 7F1AEE60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEE64:
    ctx->pc = 0x7F1AEE64u;
    // 7F1AEE64: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEE68u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEE68:
    ctx->pc = 0x7F1AEE68u;
    ctx->downcount -= 5;
    // 7F1AEE68: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEE6C:
    ctx->pc = 0x7F1AEE6Cu;
    // 7F1AEE6C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEE70:
    ctx->pc = 0x7F1AEE70u;
    // 7F1AEE70: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AEE74:
    ctx->pc = 0x7F1AEE74u;
    // 7F1AEE74: lfs     f3, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEE74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AEE78:
    ctx->pc = 0x7F1AEE78u;
    // 7F1AEE78: bl      0x7F1AA7A8
    {
            ctx->lr = 0x7F1AEE7Cu;
            ctx->pc = 0x7F1AA7A8u;
            return;
    }

label_7F1AEE7C:
    ctx->pc = 0x7F1AEE7Cu;
    ctx->downcount -= 6;
    // 7F1AEE7C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEE80:
    ctx->pc = 0x7F1AEE80u;
    // 7F1AEE80: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEE84:
    ctx->pc = 0x7F1AEE84u;
    // 7F1AEE84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEE88:
    ctx->pc = 0x7F1AEE88u;
    // 7F1AEE88: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEE8C:
    ctx->pc = 0x7F1AEE8Cu;
    // 7F1AEE8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEE90:
    ctx->pc = 0x7F1AEE90u;
    ctx->downcount -= 7;
    // 7F1AEE90: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEE94:
    ctx->pc = 0x7F1AEE94u;
    // 7F1AEE94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEE98:
    ctx->pc = 0x7F1AEE98u;
    // 7F1AEE98: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEE9C:
    ctx->pc = 0x7F1AEE9Cu;
    // 7F1AEE9C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEEA0:
    ctx->pc = 0x7F1AEEA0u;
    // 7F1AEEA0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEEA4:
    ctx->pc = 0x7F1AEEA4u;
    // 7F1AEEA4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEEA8:
    ctx->pc = 0x7F1AEEA8u;
    // 7F1AEEA8: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEEACu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEEAC:
    ctx->pc = 0x7F1AEEACu;
    ctx->downcount -= 4;
    // 7F1AEEAC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEEB0:
    ctx->pc = 0x7F1AEEB0u;
    // 7F1AEEB0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEEB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEEB4:
    ctx->pc = 0x7F1AEEB4u;
    // 7F1AEEB4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEEB8:
    ctx->pc = 0x7F1AEEB8u;
    // 7F1AEEB8: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEEBCu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEEBC:
    ctx->pc = 0x7F1AEEBCu;
    ctx->downcount -= 4;
    // 7F1AEEBC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEEC0:
    ctx->pc = 0x7F1AEEC0u;
    // 7F1AEEC0: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEEC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEEC4:
    ctx->pc = 0x7F1AEEC4u;
    // 7F1AEEC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEEC8:
    ctx->pc = 0x7F1AEEC8u;
    // 7F1AEEC8: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEECCu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEECC:
    ctx->pc = 0x7F1AEECCu;
    ctx->downcount -= 4;
    // 7F1AEECC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEED0:
    ctx->pc = 0x7F1AEED0u;
    // 7F1AEED0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEED0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEED4:
    ctx->pc = 0x7F1AEED4u;
    // 7F1AEED4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEED8:
    ctx->pc = 0x7F1AEED8u;
    // 7F1AEED8: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEEDCu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEEDC:
    ctx->pc = 0x7F1AEEDCu;
    ctx->downcount -= 19;
    // 7F1AEEDC: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEEE0:
    ctx->pc = 0x7F1AEEE0u;
    // 7F1AEEE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEEE4:
    ctx->pc = 0x7F1AEEE4u;
    // 7F1AEEE4: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEEE8:
    ctx->pc = 0x7F1AEEE8u;
    // 7F1AEEE8: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEEEC:
    ctx->pc = 0x7F1AEEECu;
    // 7F1AEEEC: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AEEF0:
    ctx->pc = 0x7F1AEEF0u;
    // 7F1AEEF0: lwz     r7, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AEEF4:
    ctx->pc = 0x7F1AEEF4u;
    // 7F1AEEF4: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AEEF8:
    ctx->pc = 0x7F1AEEF8u;
    // 7F1AEEF8: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AEEFC:
    ctx->pc = 0x7F1AEEFCu;
    // 7F1AEEFC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEF00:
    ctx->pc = 0x7F1AEF00u;
    // 7F1AEF00: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AEF04:
    ctx->pc = 0x7F1AEF04u;
    // 7F1AEF04: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEF08:
    ctx->pc = 0x7F1AEF08u;
    // 7F1AEF08: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AEF0C:
    ctx->pc = 0x7F1AEF0Cu;
    // 7F1AEF0C: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF0Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AEF10:
    ctx->pc = 0x7F1AEF10u;
    // 7F1AEF10: lfs     f3, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AEF14:
    ctx->pc = 0x7F1AEF14u;
    // 7F1AEF14: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AEF18:
    ctx->pc = 0x7F1AEF18u;
    // 7F1AEF18: lfs     f4, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1AEF1C:
    ctx->pc = 0x7F1AEF1Cu;
    // 7F1AEF1C: lfs     f5, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1AEF20:
    ctx->pc = 0x7F1AEF20u;
    // 7F1AEF20: lfs     f6, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1AEF24:
    ctx->pc = 0x7F1AEF24u;
    // 7F1AEF24: bl      0x7F3DD54C
    {
            ctx->lr = 0x7F1AEF28u;
            ctx->pc = 0x7F3DD54Cu;
            return;
    }

label_7F1AEF28:
    ctx->pc = 0x7F1AEF28u;
    ctx->downcount -= 6;
    // 7F1AEF28: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEF2C:
    ctx->pc = 0x7F1AEF2Cu;
    // 7F1AEF2C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEF30:
    ctx->pc = 0x7F1AEF30u;
    // 7F1AEF30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEF34:
    ctx->pc = 0x7F1AEF34u;
    // 7F1AEF34: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEF38:
    ctx->pc = 0x7F1AEF38u;
    // 7F1AEF38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEF3C:
    ctx->pc = 0x7F1AEF3Cu;
    ctx->downcount -= 7;
    // 7F1AEF3C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEF40:
    ctx->pc = 0x7F1AEF40u;
    // 7F1AEF40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEF44:
    ctx->pc = 0x7F1AEF44u;
    // 7F1AEF44: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEF48:
    ctx->pc = 0x7F1AEF48u;
    // 7F1AEF48: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEF4C:
    ctx->pc = 0x7F1AEF4Cu;
    // 7F1AEF4C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEF50:
    ctx->pc = 0x7F1AEF50u;
    // 7F1AEF50: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEF54:
    ctx->pc = 0x7F1AEF54u;
    // 7F1AEF54: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEF58u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEF58:
    ctx->pc = 0x7F1AEF58u;
    ctx->downcount -= 4;
    // 7F1AEF58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEF5C:
    ctx->pc = 0x7F1AEF5Cu;
    // 7F1AEF5C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEF60:
    ctx->pc = 0x7F1AEF60u;
    // 7F1AEF60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEF64:
    ctx->pc = 0x7F1AEF64u;
    // 7F1AEF64: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEF68u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEF68:
    ctx->pc = 0x7F1AEF68u;
    ctx->downcount -= 4;
    // 7F1AEF68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEF6C:
    ctx->pc = 0x7F1AEF6Cu;
    // 7F1AEF6C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEF70:
    ctx->pc = 0x7F1AEF70u;
    // 7F1AEF70: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEF74:
    ctx->pc = 0x7F1AEF74u;
    // 7F1AEF74: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AEF78u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AEF78:
    ctx->pc = 0x7F1AEF78u;
    ctx->downcount -= 4;
    // 7F1AEF78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEF7C:
    ctx->pc = 0x7F1AEF7Cu;
    // 7F1AEF7C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEF7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEF80:
    ctx->pc = 0x7F1AEF80u;
    // 7F1AEF80: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEF84:
    ctx->pc = 0x7F1AEF84u;
    // 7F1AEF84: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AEF88u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AEF88:
    ctx->pc = 0x7F1AEF88u;
    ctx->downcount -= 13;
    // 7F1AEF88: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AEF8C:
    ctx->pc = 0x7F1AEF8Cu;
    // 7F1AEF8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEF90:
    ctx->pc = 0x7F1AEF90u;
    // 7F1AEF90: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEF94:
    ctx->pc = 0x7F1AEF94u;
    // 7F1AEF94: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEF98:
    ctx->pc = 0x7F1AEF98u;
    // 7F1AEF98: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AEF9C:
    ctx->pc = 0x7F1AEF9Cu;
    // 7F1AEF9C: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AEFA0:
    ctx->pc = 0x7F1AEFA0u;
    // 7F1AEFA0: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AEFA4:
    ctx->pc = 0x7F1AEFA4u;
    // 7F1AEFA4: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AEFA8:
    ctx->pc = 0x7F1AEFA8u;
    // 7F1AEFA8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AEFAC:
    ctx->pc = 0x7F1AEFACu;
    // 7F1AEFAC: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AEFB0:
    ctx->pc = 0x7F1AEFB0u;
    // 7F1AEFB0: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AEFB4:
    ctx->pc = 0x7F1AEFB4u;
    // 7F1AEFB4: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AEFB8:
    ctx->pc = 0x7F1AEFB8u;
    // 7F1AEFB8: bl      0x7F3DB4C8
    {
            ctx->lr = 0x7F1AEFBCu;
            ctx->pc = 0x7F3DB4C8u;
            return;
    }

label_7F1AEFBC:
    ctx->pc = 0x7F1AEFBCu;
    ctx->downcount -= 6;
    // 7F1AEFBC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AEFC0:
    ctx->pc = 0x7F1AEFC0u;
    // 7F1AEFC0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AEFC4:
    ctx->pc = 0x7F1AEFC4u;
    // 7F1AEFC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AEFC8:
    ctx->pc = 0x7F1AEFC8u;
    // 7F1AEFC8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AEFCC:
    ctx->pc = 0x7F1AEFCCu;
    // 7F1AEFCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AEFD0:
    ctx->pc = 0x7F1AEFD0u;
    ctx->downcount -= 7;
    // 7F1AEFD0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AEFD4:
    ctx->pc = 0x7F1AEFD4u;
    // 7F1AEFD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AEFD8:
    ctx->pc = 0x7F1AEFD8u;
    // 7F1AEFD8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AEFDC:
    ctx->pc = 0x7F1AEFDCu;
    // 7F1AEFDC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEFE0:
    ctx->pc = 0x7F1AEFE0u;
    // 7F1AEFE0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AEFE4:
    ctx->pc = 0x7F1AEFE4u;
    // 7F1AEFE4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AEFE8:
    ctx->pc = 0x7F1AEFE8u;
    // 7F1AEFE8: bl      0x80025A08
    {
            ctx->lr = 0x7F1AEFECu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AEFEC:
    ctx->pc = 0x7F1AEFECu;
    ctx->downcount -= 4;
    // 7F1AEFEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AEFF0:
    ctx->pc = 0x7F1AEFF0u;
    // 7F1AEFF0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AEFF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AEFF4:
    ctx->pc = 0x7F1AEFF4u;
    // 7F1AEFF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AEFF8:
    ctx->pc = 0x7F1AEFF8u;
    // 7F1AEFF8: bl      0x7F114738
    {
            ctx->lr = 0x7F1AEFFCu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AEFFC:
    ctx->pc = 0x7F1AEFFCu;
    ctx->downcount -= 4;
    // 7F1AEFFC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF000:
    ctx->pc = 0x7F1AF000u;
    // 7F1AF000: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF000u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF004:
    ctx->pc = 0x7F1AF004u;
    // 7F1AF004: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF008:
    ctx->pc = 0x7F1AF008u;
    // 7F1AF008: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF00Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF00C:
    ctx->pc = 0x7F1AF00Cu;
    ctx->downcount -= 4;
    // 7F1AF00C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF010:
    ctx->pc = 0x7F1AF010u;
    // 7F1AF010: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF010u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF014:
    ctx->pc = 0x7F1AF014u;
    // 7F1AF014: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF018:
    ctx->pc = 0x7F1AF018u;
    // 7F1AF018: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF01Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF01C:
    ctx->pc = 0x7F1AF01Cu;
    ctx->downcount -= 2;
    // 7F1AF01C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF020:
    ctx->pc = 0x7F1AF020u;
    // 7F1AF020: bl      0x7F4103B8
    {
            ctx->lr = 0x7F1AF024u;
            ctx->pc = 0x7F4103B8u;
            return;
    }

label_7F1AF024:
    ctx->pc = 0x7F1AF024u;
    ctx->downcount -= 6;
    // 7F1AF024: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF028:
    ctx->pc = 0x7F1AF028u;
    // 7F1AF028: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF02C:
    ctx->pc = 0x7F1AF02Cu;
    // 7F1AF02C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF030:
    ctx->pc = 0x7F1AF030u;
    // 7F1AF030: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF034:
    ctx->pc = 0x7F1AF034u;
    // 7F1AF034: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF038:
    ctx->pc = 0x7F1AF038u;
    ctx->downcount -= 7;
    // 7F1AF038: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF03C:
    ctx->pc = 0x7F1AF03Cu;
    // 7F1AF03C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF040:
    ctx->pc = 0x7F1AF040u;
    // 7F1AF040: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF044:
    ctx->pc = 0x7F1AF044u;
    // 7F1AF044: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF048:
    ctx->pc = 0x7F1AF048u;
    // 7F1AF048: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF04C:
    ctx->pc = 0x7F1AF04Cu;
    // 7F1AF04C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF050:
    ctx->pc = 0x7F1AF050u;
    // 7F1AF050: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF054u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF054:
    ctx->pc = 0x7F1AF054u;
    ctx->downcount -= 4;
    // 7F1AF054: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF058:
    ctx->pc = 0x7F1AF058u;
    // 7F1AF058: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF058u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF05C:
    ctx->pc = 0x7F1AF05Cu;
    // 7F1AF05C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF060:
    ctx->pc = 0x7F1AF060u;
    // 7F1AF060: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF064u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF064:
    ctx->pc = 0x7F1AF064u;
    ctx->downcount -= 4;
    // 7F1AF064: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF068:
    ctx->pc = 0x7F1AF068u;
    // 7F1AF068: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF068u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF06C:
    ctx->pc = 0x7F1AF06Cu;
    // 7F1AF06C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF070:
    ctx->pc = 0x7F1AF070u;
    // 7F1AF070: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF074u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF074:
    ctx->pc = 0x7F1AF074u;
    ctx->downcount -= 4;
    // 7F1AF074: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF078:
    ctx->pc = 0x7F1AF078u;
    // 7F1AF078: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF078u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF07C:
    ctx->pc = 0x7F1AF07Cu;
    // 7F1AF07C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF080:
    ctx->pc = 0x7F1AF080u;
    // 7F1AF080: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF084u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF084:
    ctx->pc = 0x7F1AF084u;
    ctx->downcount -= 13;
    // 7F1AF084: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF088:
    ctx->pc = 0x7F1AF088u;
    // 7F1AF088: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF08C:
    ctx->pc = 0x7F1AF08Cu;
    // 7F1AF08C: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF090:
    ctx->pc = 0x7F1AF090u;
    // 7F1AF090: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF094:
    ctx->pc = 0x7F1AF094u;
    // 7F1AF094: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF098:
    ctx->pc = 0x7F1AF098u;
    // 7F1AF098: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF09C:
    ctx->pc = 0x7F1AF09Cu;
    // 7F1AF09C: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AF0A0:
    ctx->pc = 0x7F1AF0A0u;
    // 7F1AF0A0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AF0A4:
    ctx->pc = 0x7F1AF0A4u;
    // 7F1AF0A4: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF0A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF0A8:
    ctx->pc = 0x7F1AF0A8u;
    // 7F1AF0A8: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AF0AC:
    ctx->pc = 0x7F1AF0ACu;
    // 7F1AF0AC: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AF0B0:
    ctx->pc = 0x7F1AF0B0u;
    // 7F1AF0B0: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AF0B4:
    ctx->pc = 0x7F1AF0B4u;
    // 7F1AF0B4: bl      0x7F40F2A0
    {
            ctx->lr = 0x7F1AF0B8u;
            ctx->pc = 0x7F40F2A0u;
            return;
    }

label_7F1AF0B8:
    ctx->pc = 0x7F1AF0B8u;
    ctx->downcount -= 6;
    // 7F1AF0B8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF0BC:
    ctx->pc = 0x7F1AF0BCu;
    // 7F1AF0BC: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF0C0:
    ctx->pc = 0x7F1AF0C0u;
    // 7F1AF0C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF0C4:
    ctx->pc = 0x7F1AF0C4u;
    // 7F1AF0C4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF0C8:
    ctx->pc = 0x7F1AF0C8u;
    // 7F1AF0C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF0CC:
    ctx->pc = 0x7F1AF0CCu;
    ctx->downcount -= 7;
    // 7F1AF0CC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF0D0:
    ctx->pc = 0x7F1AF0D0u;
    // 7F1AF0D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF0D4:
    ctx->pc = 0x7F1AF0D4u;
    // 7F1AF0D4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF0D8:
    ctx->pc = 0x7F1AF0D8u;
    // 7F1AF0D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF0DC:
    ctx->pc = 0x7F1AF0DCu;
    // 7F1AF0DC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF0E0:
    ctx->pc = 0x7F1AF0E0u;
    // 7F1AF0E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF0E4:
    ctx->pc = 0x7F1AF0E4u;
    // 7F1AF0E4: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF0E8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF0E8:
    ctx->pc = 0x7F1AF0E8u;
    ctx->downcount -= 4;
    // 7F1AF0E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF0EC:
    ctx->pc = 0x7F1AF0ECu;
    // 7F1AF0EC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF0ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF0F0:
    ctx->pc = 0x7F1AF0F0u;
    // 7F1AF0F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF0F4:
    ctx->pc = 0x7F1AF0F4u;
    // 7F1AF0F4: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF0F8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF0F8:
    ctx->pc = 0x7F1AF0F8u;
    ctx->downcount -= 4;
    // 7F1AF0F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF0FC:
    ctx->pc = 0x7F1AF0FCu;
    // 7F1AF0FC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF0FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF100:
    ctx->pc = 0x7F1AF100u;
    // 7F1AF100: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF104:
    ctx->pc = 0x7F1AF104u;
    // 7F1AF104: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF108u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF108:
    ctx->pc = 0x7F1AF108u;
    ctx->downcount -= 4;
    // 7F1AF108: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF10C:
    ctx->pc = 0x7F1AF10Cu;
    // 7F1AF10C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF10Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF110:
    ctx->pc = 0x7F1AF110u;
    // 7F1AF110: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF114:
    ctx->pc = 0x7F1AF114u;
    // 7F1AF114: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF118u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF118:
    ctx->pc = 0x7F1AF118u;
    ctx->downcount -= 2;
    // 7F1AF118: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF11C:
    ctx->pc = 0x7F1AF11Cu;
    // 7F1AF11C: bl      0x7F40F92C
    {
            ctx->lr = 0x7F1AF120u;
            ctx->pc = 0x7F40F92Cu;
            return;
    }

label_7F1AF120:
    ctx->pc = 0x7F1AF120u;
    ctx->downcount -= 6;
    // 7F1AF120: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF124:
    ctx->pc = 0x7F1AF124u;
    // 7F1AF124: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF128:
    ctx->pc = 0x7F1AF128u;
    // 7F1AF128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF12C:
    ctx->pc = 0x7F1AF12Cu;
    // 7F1AF12C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF130:
    ctx->pc = 0x7F1AF130u;
    // 7F1AF130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF134:
    ctx->pc = 0x7F1AF134u;
    ctx->downcount -= 7;
    // 7F1AF134: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF138:
    ctx->pc = 0x7F1AF138u;
    // 7F1AF138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF13C:
    ctx->pc = 0x7F1AF13Cu;
    // 7F1AF13C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF140:
    ctx->pc = 0x7F1AF140u;
    // 7F1AF140: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF144:
    ctx->pc = 0x7F1AF144u;
    // 7F1AF144: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF148:
    ctx->pc = 0x7F1AF148u;
    // 7F1AF148: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF14C:
    ctx->pc = 0x7F1AF14Cu;
    // 7F1AF14C: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF150u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF150:
    ctx->pc = 0x7F1AF150u;
    ctx->downcount -= 4;
    // 7F1AF150: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF154:
    ctx->pc = 0x7F1AF154u;
    // 7F1AF154: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF154u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF158:
    ctx->pc = 0x7F1AF158u;
    // 7F1AF158: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF15C:
    ctx->pc = 0x7F1AF15Cu;
    // 7F1AF15C: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF160u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF160:
    ctx->pc = 0x7F1AF160u;
    ctx->downcount -= 4;
    // 7F1AF160: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF164:
    ctx->pc = 0x7F1AF164u;
    // 7F1AF164: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF164u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF168:
    ctx->pc = 0x7F1AF168u;
    // 7F1AF168: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF16C:
    ctx->pc = 0x7F1AF16Cu;
    // 7F1AF16C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF170u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF170:
    ctx->pc = 0x7F1AF170u;
    ctx->downcount -= 4;
    // 7F1AF170: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF174:
    ctx->pc = 0x7F1AF174u;
    // 7F1AF174: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF174u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF178:
    ctx->pc = 0x7F1AF178u;
    // 7F1AF178: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF17C:
    ctx->pc = 0x7F1AF17Cu;
    // 7F1AF17C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF180u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF180:
    ctx->pc = 0x7F1AF180u;
    ctx->downcount -= 2;
    // 7F1AF180: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF184:
    ctx->pc = 0x7F1AF184u;
    // 7F1AF184: bl      0x7F40FD4C
    {
            ctx->lr = 0x7F1AF188u;
            ctx->pc = 0x7F40FD4Cu;
            return;
    }

label_7F1AF188:
    ctx->pc = 0x7F1AF188u;
    ctx->downcount -= 6;
    // 7F1AF188: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF18C:
    ctx->pc = 0x7F1AF18Cu;
    // 7F1AF18C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF190:
    ctx->pc = 0x7F1AF190u;
    // 7F1AF190: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF194:
    ctx->pc = 0x7F1AF194u;
    // 7F1AF194: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF198:
    ctx->pc = 0x7F1AF198u;
    // 7F1AF198: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF19C:
    ctx->pc = 0x7F1AF19Cu;
    ctx->downcount -= 7;
    // 7F1AF19C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF1A0:
    ctx->pc = 0x7F1AF1A0u;
    // 7F1AF1A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF1A4:
    ctx->pc = 0x7F1AF1A4u;
    // 7F1AF1A4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF1A8:
    ctx->pc = 0x7F1AF1A8u;
    // 7F1AF1A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF1AC:
    ctx->pc = 0x7F1AF1ACu;
    // 7F1AF1AC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF1B0:
    ctx->pc = 0x7F1AF1B0u;
    // 7F1AF1B0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF1B4:
    ctx->pc = 0x7F1AF1B4u;
    // 7F1AF1B4: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF1B8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF1B8:
    ctx->pc = 0x7F1AF1B8u;
    ctx->downcount -= 4;
    // 7F1AF1B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF1BC:
    ctx->pc = 0x7F1AF1BCu;
    // 7F1AF1BC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF1BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF1C0:
    ctx->pc = 0x7F1AF1C0u;
    // 7F1AF1C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF1C4:
    ctx->pc = 0x7F1AF1C4u;
    // 7F1AF1C4: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF1C8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF1C8:
    ctx->pc = 0x7F1AF1C8u;
    ctx->downcount -= 4;
    // 7F1AF1C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF1CC:
    ctx->pc = 0x7F1AF1CCu;
    // 7F1AF1CC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF1CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF1D0:
    ctx->pc = 0x7F1AF1D0u;
    // 7F1AF1D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF1D4:
    ctx->pc = 0x7F1AF1D4u;
    // 7F1AF1D4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF1D8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF1D8:
    ctx->pc = 0x7F1AF1D8u;
    ctx->downcount -= 4;
    // 7F1AF1D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF1DC:
    ctx->pc = 0x7F1AF1DCu;
    // 7F1AF1DC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF1DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF1E0:
    ctx->pc = 0x7F1AF1E0u;
    // 7F1AF1E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF1E4:
    ctx->pc = 0x7F1AF1E4u;
    // 7F1AF1E4: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF1E8u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF1E8:
    ctx->pc = 0x7F1AF1E8u;
    ctx->downcount -= 12;
    // 7F1AF1E8: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF1EC:
    ctx->pc = 0x7F1AF1ECu;
    // 7F1AF1EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF1F0:
    ctx->pc = 0x7F1AF1F0u;
    // 7F1AF1F0: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF1F4:
    ctx->pc = 0x7F1AF1F4u;
    // 7F1AF1F4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF1F8:
    ctx->pc = 0x7F1AF1F8u;
    // 7F1AF1F8: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF1FC:
    ctx->pc = 0x7F1AF1FCu;
    // 7F1AF1FC: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF200:
    ctx->pc = 0x7F1AF200u;
    // 7F1AF200: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AF204:
    ctx->pc = 0x7F1AF204u;
    // 7F1AF204: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AF208:
    ctx->pc = 0x7F1AF208u;
    // 7F1AF208: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AF20C:
    ctx->pc = 0x7F1AF20Cu;
    // 7F1AF20C: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AF210:
    ctx->pc = 0x7F1AF210u;
    // 7F1AF210: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AF214:
    ctx->pc = 0x7F1AF214u;
    // 7F1AF214: bl      0x7F40EF10
    {
            ctx->lr = 0x7F1AF218u;
            ctx->pc = 0x7F40EF10u;
            return;
    }

label_7F1AF218:
    ctx->pc = 0x7F1AF218u;
    ctx->downcount -= 6;
    // 7F1AF218: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF21C:
    ctx->pc = 0x7F1AF21Cu;
    // 7F1AF21C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF220:
    ctx->pc = 0x7F1AF220u;
    // 7F1AF220: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF224:
    ctx->pc = 0x7F1AF224u;
    // 7F1AF224: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF228:
    ctx->pc = 0x7F1AF228u;
    // 7F1AF228: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF22C:
    ctx->pc = 0x7F1AF22Cu;
    ctx->downcount -= 7;
    // 7F1AF22C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF230:
    ctx->pc = 0x7F1AF230u;
    // 7F1AF230: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF234:
    ctx->pc = 0x7F1AF234u;
    // 7F1AF234: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF238:
    ctx->pc = 0x7F1AF238u;
    // 7F1AF238: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF23C:
    ctx->pc = 0x7F1AF23Cu;
    // 7F1AF23C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF240:
    ctx->pc = 0x7F1AF240u;
    // 7F1AF240: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF244:
    ctx->pc = 0x7F1AF244u;
    // 7F1AF244: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF248u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF248:
    ctx->pc = 0x7F1AF248u;
    ctx->downcount -= 4;
    // 7F1AF248: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF24C:
    ctx->pc = 0x7F1AF24Cu;
    // 7F1AF24C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF24Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF250:
    ctx->pc = 0x7F1AF250u;
    // 7F1AF250: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF254:
    ctx->pc = 0x7F1AF254u;
    // 7F1AF254: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF258u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF258:
    ctx->pc = 0x7F1AF258u;
    ctx->downcount -= 4;
    // 7F1AF258: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF25C:
    ctx->pc = 0x7F1AF25Cu;
    // 7F1AF25C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF25Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF260:
    ctx->pc = 0x7F1AF260u;
    // 7F1AF260: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF264:
    ctx->pc = 0x7F1AF264u;
    // 7F1AF264: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF268u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF268:
    ctx->pc = 0x7F1AF268u;
    ctx->downcount -= 4;
    // 7F1AF268: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF26C:
    ctx->pc = 0x7F1AF26Cu;
    // 7F1AF26C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF26Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF270:
    ctx->pc = 0x7F1AF270u;
    // 7F1AF270: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF274:
    ctx->pc = 0x7F1AF274u;
    // 7F1AF274: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF278u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF278:
    ctx->pc = 0x7F1AF278u;
    ctx->downcount -= 12;
    // 7F1AF278: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF27C:
    ctx->pc = 0x7F1AF27Cu;
    // 7F1AF27C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF280:
    ctx->pc = 0x7F1AF280u;
    // 7F1AF280: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF284:
    ctx->pc = 0x7F1AF284u;
    // 7F1AF284: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF288:
    ctx->pc = 0x7F1AF288u;
    // 7F1AF288: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF28C:
    ctx->pc = 0x7F1AF28Cu;
    // 7F1AF28C: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF290:
    ctx->pc = 0x7F1AF290u;
    // 7F1AF290: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AF294:
    ctx->pc = 0x7F1AF294u;
    // 7F1AF294: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AF298:
    ctx->pc = 0x7F1AF298u;
    // 7F1AF298: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AF29C:
    ctx->pc = 0x7F1AF29Cu;
    // 7F1AF29C: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AF2A0:
    ctx->pc = 0x7F1AF2A0u;
    // 7F1AF2A0: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AF2A4:
    ctx->pc = 0x7F1AF2A4u;
    // 7F1AF2A4: bl      0x7F4106FC
    {
            ctx->lr = 0x7F1AF2A8u;
            ctx->pc = 0x7F4106FCu;
            return;
    }

label_7F1AF2A8:
    ctx->pc = 0x7F1AF2A8u;
    ctx->downcount -= 6;
    // 7F1AF2A8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF2AC:
    ctx->pc = 0x7F1AF2ACu;
    // 7F1AF2AC: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF2B0:
    ctx->pc = 0x7F1AF2B0u;
    // 7F1AF2B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF2B4:
    ctx->pc = 0x7F1AF2B4u;
    // 7F1AF2B4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF2B8:
    ctx->pc = 0x7F1AF2B8u;
    // 7F1AF2B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF2BC:
    ctx->pc = 0x7F1AF2BCu;
    ctx->downcount -= 18;
    // 7F1AF2BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF2C0:
    ctx->pc = 0x7F1AF2C0u;
    // 7F1AF2C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF2C4:
    ctx->pc = 0x7F1AF2C4u;
    // 7F1AF2C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF2C8:
    ctx->pc = 0x7F1AF2C8u;
    // 7F1AF2C8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AF2CC:
    ctx->pc = 0x7F1AF2CCu;
    // 7F1AF2CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF2D0:
    ctx->pc = 0x7F1AF2D0u;
    // 7F1AF2D0: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF2D4:
    ctx->pc = 0x7F1AF2D4u;
    // 7F1AF2D4: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF2D8:
    ctx->pc = 0x7F1AF2D8u;
    // 7F1AF2D8: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF2DCu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF2DC:
    ctx->pc = 0x7F1AF2DCu;
    ctx->downcount -= 1;
    // 7F1AF2DC: bl      0x7F199494
    {
            ctx->lr = 0x7F1AF2E0u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AF2E0:
    ctx->pc = 0x7F1AF2E0u;
    ctx->downcount -= 4;
    // 7F1AF2E0: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF2E4:
    ctx->pc = 0x7F1AF2E4u;
    // 7F1AF2E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF2E8:
    ctx->pc = 0x7F1AF2E8u;
    // 7F1AF2E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AF2EC:
    ctx->pc = 0x7F1AF2ECu;
    // 7F1AF2EC: bl      0x7F1AAFD8
    {
            ctx->lr = 0x7F1AF2F0u;
            ctx->pc = 0x7F1AAFD8u;
            return;
    }

label_7F1AF2F0:
    ctx->pc = 0x7F1AF2F0u;
    ctx->downcount -= 16;
    // 7F1AF2F0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AF2F4:
    ctx->pc = 0x7F1AF2F4u;
    // 7F1AF2F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF2F8:
    ctx->pc = 0x7F1AF2F8u;
    // 7F1AF2F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF2FC:
    ctx->pc = 0x7F1AF2FCu;
    // 7F1AF2FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF300:
    ctx->pc = 0x7F1AF300u;
    // 7F1AF300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF304:
    ctx->pc = 0x7F1AF304u;
    ctx->downcount -= 7;
    // 7F1AF304: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF308:
    ctx->pc = 0x7F1AF308u;
    // 7F1AF308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF30C:
    ctx->pc = 0x7F1AF30Cu;
    // 7F1AF30C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF310:
    ctx->pc = 0x7F1AF310u;
    // 7F1AF310: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF314:
    ctx->pc = 0x7F1AF314u;
    // 7F1AF314: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF318:
    ctx->pc = 0x7F1AF318u;
    // 7F1AF318: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF31C:
    ctx->pc = 0x7F1AF31Cu;
    // 7F1AF31C: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF320u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF320:
    ctx->pc = 0x7F1AF320u;
    ctx->downcount -= 4;
    // 7F1AF320: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF324:
    ctx->pc = 0x7F1AF324u;
    // 7F1AF324: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF328:
    ctx->pc = 0x7F1AF328u;
    // 7F1AF328: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF32C:
    ctx->pc = 0x7F1AF32Cu;
    // 7F1AF32C: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF330u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF330:
    ctx->pc = 0x7F1AF330u;
    ctx->downcount -= 4;
    // 7F1AF330: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF334:
    ctx->pc = 0x7F1AF334u;
    // 7F1AF334: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF334u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF338:
    ctx->pc = 0x7F1AF338u;
    // 7F1AF338: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF33C:
    ctx->pc = 0x7F1AF33Cu;
    // 7F1AF33C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF340u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF340:
    ctx->pc = 0x7F1AF340u;
    ctx->downcount -= 4;
    // 7F1AF340: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF344:
    ctx->pc = 0x7F1AF344u;
    // 7F1AF344: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF344u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF348:
    ctx->pc = 0x7F1AF348u;
    // 7F1AF348: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF34C:
    ctx->pc = 0x7F1AF34Cu;
    // 7F1AF34C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF350u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF350:
    ctx->pc = 0x7F1AF350u;
    ctx->downcount -= 13;
    // 7F1AF350: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF354:
    ctx->pc = 0x7F1AF354u;
    // 7F1AF354: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF358:
    ctx->pc = 0x7F1AF358u;
    // 7F1AF358: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF35C:
    ctx->pc = 0x7F1AF35Cu;
    // 7F1AF35C: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF360:
    ctx->pc = 0x7F1AF360u;
    // 7F1AF360: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF364:
    ctx->pc = 0x7F1AF364u;
    // 7F1AF364: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AF368:
    ctx->pc = 0x7F1AF368u;
    // 7F1AF368: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AF36C:
    ctx->pc = 0x7F1AF36Cu;
    // 7F1AF36C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AF370:
    ctx->pc = 0x7F1AF370u;
    // 7F1AF370: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF374:
    ctx->pc = 0x7F1AF374u;
    // 7F1AF374: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AF378:
    ctx->pc = 0x7F1AF378u;
    // 7F1AF378: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AF37C:
    ctx->pc = 0x7F1AF37Cu;
    // 7F1AF37C: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AF380:
    ctx->pc = 0x7F1AF380u;
    // 7F1AF380: bl      0x7F3DE668
    {
            ctx->lr = 0x7F1AF384u;
            ctx->pc = 0x7F3DE668u;
            return;
    }

label_7F1AF384:
    ctx->pc = 0x7F1AF384u;
    ctx->downcount -= 6;
    // 7F1AF384: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF388:
    ctx->pc = 0x7F1AF388u;
    // 7F1AF388: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF38C:
    ctx->pc = 0x7F1AF38Cu;
    // 7F1AF38C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF390:
    ctx->pc = 0x7F1AF390u;
    // 7F1AF390: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF394:
    ctx->pc = 0x7F1AF394u;
    // 7F1AF394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF398:
    ctx->pc = 0x7F1AF398u;
    ctx->downcount -= 7;
    // 7F1AF398: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF39C:
    ctx->pc = 0x7F1AF39Cu;
    // 7F1AF39C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF3A0:
    ctx->pc = 0x7F1AF3A0u;
    // 7F1AF3A0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF3A4:
    ctx->pc = 0x7F1AF3A4u;
    // 7F1AF3A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF3A8:
    ctx->pc = 0x7F1AF3A8u;
    // 7F1AF3A8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF3AC:
    ctx->pc = 0x7F1AF3ACu;
    // 7F1AF3AC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF3B0:
    ctx->pc = 0x7F1AF3B0u;
    // 7F1AF3B0: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF3B4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF3B4:
    ctx->pc = 0x7F1AF3B4u;
    ctx->downcount -= 4;
    // 7F1AF3B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF3B8:
    ctx->pc = 0x7F1AF3B8u;
    // 7F1AF3B8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF3B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF3BC:
    ctx->pc = 0x7F1AF3BCu;
    // 7F1AF3BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF3C0:
    ctx->pc = 0x7F1AF3C0u;
    // 7F1AF3C0: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF3C4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF3C4:
    ctx->pc = 0x7F1AF3C4u;
    ctx->downcount -= 4;
    // 7F1AF3C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF3C8:
    ctx->pc = 0x7F1AF3C8u;
    // 7F1AF3C8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF3C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF3CC:
    ctx->pc = 0x7F1AF3CCu;
    // 7F1AF3CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF3D0:
    ctx->pc = 0x7F1AF3D0u;
    // 7F1AF3D0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF3D4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF3D4:
    ctx->pc = 0x7F1AF3D4u;
    ctx->downcount -= 4;
    // 7F1AF3D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF3D8:
    ctx->pc = 0x7F1AF3D8u;
    // 7F1AF3D8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF3D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF3DC:
    ctx->pc = 0x7F1AF3DCu;
    // 7F1AF3DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF3E0:
    ctx->pc = 0x7F1AF3E0u;
    // 7F1AF3E0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF3E4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF3E4:
    ctx->pc = 0x7F1AF3E4u;
    ctx->downcount -= 2;
    // 7F1AF3E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF3E8:
    ctx->pc = 0x7F1AF3E8u;
    // 7F1AF3E8: bl      0x7F41092C
    {
            ctx->lr = 0x7F1AF3ECu;
            ctx->pc = 0x7F41092Cu;
            return;
    }

label_7F1AF3EC:
    ctx->pc = 0x7F1AF3ECu;
    ctx->downcount -= 6;
    // 7F1AF3EC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF3F0:
    ctx->pc = 0x7F1AF3F0u;
    // 7F1AF3F0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF3F4:
    ctx->pc = 0x7F1AF3F4u;
    // 7F1AF3F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF3F8:
    ctx->pc = 0x7F1AF3F8u;
    // 7F1AF3F8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF3FC:
    ctx->pc = 0x7F1AF3FCu;
    // 7F1AF3FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF400:
    ctx->pc = 0x7F1AF400u;
    ctx->downcount -= 4;
    // 7F1AF400: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF404:
    ctx->pc = 0x7F1AF404u;
    // 7F1AF404: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF408:
    ctx->pc = 0x7F1AF408u;
    // 7F1AF408: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF40C:
    ctx->pc = 0x7F1AF40Cu;
    // 7F1AF40C: bl      0x7F2331CC
    {
            ctx->lr = 0x7F1AF410u;
            ctx->pc = 0x7F2331CCu;
            return;
    }

label_7F1AF410:
    ctx->pc = 0x7F1AF410u;
    ctx->downcount -= 5;
    // 7F1AF410: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF414:
    ctx->pc = 0x7F1AF414u;
    // 7F1AF414: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF418:
    ctx->pc = 0x7F1AF418u;
    // 7F1AF418: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF41C:
    ctx->pc = 0x7F1AF41Cu;
    // 7F1AF41C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF420:
    ctx->pc = 0x7F1AF420u;
    ctx->downcount -= 4;
    // 7F1AF420: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF424:
    ctx->pc = 0x7F1AF424u;
    // 7F1AF424: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF428:
    ctx->pc = 0x7F1AF428u;
    // 7F1AF428: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF42C:
    ctx->pc = 0x7F1AF42Cu;
    // 7F1AF42C: bl      0x7F232D94
    {
            ctx->lr = 0x7F1AF430u;
            ctx->pc = 0x7F232D94u;
            return;
    }

label_7F1AF430:
    ctx->pc = 0x7F1AF430u;
    ctx->downcount -= 5;
    // 7F1AF430: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF434:
    ctx->pc = 0x7F1AF434u;
    // 7F1AF434: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF438:
    ctx->pc = 0x7F1AF438u;
    // 7F1AF438: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF43C:
    ctx->pc = 0x7F1AF43Cu;
    // 7F1AF43C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF440:
    ctx->pc = 0x7F1AF440u;
    ctx->downcount -= 4;
    // 7F1AF440: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF444:
    ctx->pc = 0x7F1AF444u;
    // 7F1AF444: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF448:
    ctx->pc = 0x7F1AF448u;
    // 7F1AF448: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF44C:
    ctx->pc = 0x7F1AF44Cu;
    // 7F1AF44C: bl      0x7F230ED8
    {
            ctx->lr = 0x7F1AF450u;
            ctx->pc = 0x7F230ED8u;
            return;
    }

label_7F1AF450:
    ctx->pc = 0x7F1AF450u;
    ctx->downcount -= 5;
    // 7F1AF450: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF454:
    ctx->pc = 0x7F1AF454u;
    // 7F1AF454: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF458:
    ctx->pc = 0x7F1AF458u;
    // 7F1AF458: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF45C:
    ctx->pc = 0x7F1AF45Cu;
    // 7F1AF45C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF460:
    ctx->pc = 0x7F1AF460u;
    ctx->downcount -= 45;
    // 7F1AF460: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF464:
    ctx->pc = 0x7F1AF464u;
    // 7F1AF464: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF468:
    ctx->pc = 0x7F1AF468u;
    // 7F1AF468: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1AF46C:
    ctx->pc = 0x7F1AF46Cu;
    // 7F1AF46C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AF470:
    ctx->pc = 0x7F1AF470u;
    // 7F1AF470: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF474:
    ctx->pc = 0x7F1AF474u;
    // 7F1AF474: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AF478:
    ctx->pc = 0x7F1AF478u;
    // 7F1AF478: lfd     f2, 6888(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF478u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6888);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AF47C:
    ctx->pc = 0x7F1AF47Cu;
    // 7F1AF47C: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF480:
    ctx->pc = 0x7F1AF480u;
    // 7F1AF480: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AF484:
    ctx->pc = 0x7F1AF484u;
    // 7F1AF484: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AF488:
    ctx->pc = 0x7F1AF488u;
    // 7F1AF488: lfs     f1, 6896(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF488u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF48C:
    ctx->pc = 0x7F1AF48Cu;
    // 7F1AF48C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF490:
    ctx->pc = 0x7F1AF490u;
    // 7F1AF490: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF494:
    ctx->pc = 0x7F1AF494u;
    // 7F1AF494: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AF498:
    ctx->pc = 0x7F1AF498u;
    // 7F1AF498: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF49C:
    ctx->pc = 0x7F1AF49Cu;
    // 7F1AF49C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AF49Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AF4A0:
    ctx->pc = 0x7F1AF4A0u;
    // 7F1AF4A0: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AF4A4:
    ctx->pc = 0x7F1AF4A4u;
    // 7F1AF4A4: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1AF4A8:
    ctx->pc = 0x7F1AF4A8u;
    // 7F1AF4A8: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF4AC:
    ctx->pc = 0x7F1AF4ACu;
    // 7F1AF4AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AF4B0:
    ctx->pc = 0x7F1AF4B0u;
    // 7F1AF4B0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4B0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AF4B4:
    ctx->pc = 0x7F1AF4B4u;
    // 7F1AF4B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF4B8:
    ctx->pc = 0x7F1AF4B8u;
    // 7F1AF4B8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AF4BC:
    ctx->pc = 0x7F1AF4BCu;
    // 7F1AF4BC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4BCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AF4C0:
    ctx->pc = 0x7F1AF4C0u;
    // 7F1AF4C0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4C0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AF4C4:
    ctx->pc = 0x7F1AF4C4u;
    // 7F1AF4C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AF4C8:
    ctx->pc = 0x7F1AF4C8u;
    // 7F1AF4C8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF4C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AF4CC:
    ctx->pc = 0x7F1AF4CCu;
    // 7F1AF4CC: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF4D0:
    ctx->pc = 0x7F1AF4D0u;
    // 7F1AF4D0: bl      0x7F1A8BF0
    {
            ctx->lr = 0x7F1AF4D4u;
            ctx->pc = 0x7F1A8BF0u;
            return;
    }

label_7F1AF4D4:
    ctx->pc = 0x7F1AF4D4u;
    ctx->downcount -= 5;
    // 7F1AF4D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF4D8:
    ctx->pc = 0x7F1AF4D8u;
    // 7F1AF4D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF4DC:
    ctx->pc = 0x7F1AF4DCu;
    // 7F1AF4DC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AF4E0:
    ctx->pc = 0x7F1AF4E0u;
    // 7F1AF4E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF4E4:
    ctx->pc = 0x7F1AF4E4u;
    ctx->downcount -= 7;
    // 7F1AF4E4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF4E8:
    ctx->pc = 0x7F1AF4E8u;
    // 7F1AF4E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF4EC:
    ctx->pc = 0x7F1AF4ECu;
    // 7F1AF4EC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF4F0:
    ctx->pc = 0x7F1AF4F0u;
    // 7F1AF4F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF4F4:
    ctx->pc = 0x7F1AF4F4u;
    // 7F1AF4F4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF4F8:
    ctx->pc = 0x7F1AF4F8u;
    // 7F1AF4F8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF4FC:
    ctx->pc = 0x7F1AF4FCu;
    // 7F1AF4FC: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF500u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF500:
    ctx->pc = 0x7F1AF500u;
    ctx->downcount -= 4;
    // 7F1AF500: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF504:
    ctx->pc = 0x7F1AF504u;
    // 7F1AF504: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF504u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF508:
    ctx->pc = 0x7F1AF508u;
    // 7F1AF508: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF50C:
    ctx->pc = 0x7F1AF50Cu;
    // 7F1AF50C: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF510u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF510:
    ctx->pc = 0x7F1AF510u;
    ctx->downcount -= 4;
    // 7F1AF510: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF514:
    ctx->pc = 0x7F1AF514u;
    // 7F1AF514: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF514u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF518:
    ctx->pc = 0x7F1AF518u;
    // 7F1AF518: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF51C:
    ctx->pc = 0x7F1AF51Cu;
    // 7F1AF51C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF520u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF520:
    ctx->pc = 0x7F1AF520u;
    ctx->downcount -= 4;
    // 7F1AF520: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF524:
    ctx->pc = 0x7F1AF524u;
    // 7F1AF524: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF524u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF528:
    ctx->pc = 0x7F1AF528u;
    // 7F1AF528: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF52C:
    ctx->pc = 0x7F1AF52Cu;
    // 7F1AF52C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF530u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF530:
    ctx->pc = 0x7F1AF530u;
    ctx->downcount -= 2;
    // 7F1AF530: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF534:
    ctx->pc = 0x7F1AF534u;
    // 7F1AF534: bl      0x7F3D047C
    {
            ctx->lr = 0x7F1AF538u;
            ctx->pc = 0x7F3D047Cu;
            return;
    }

label_7F1AF538:
    ctx->pc = 0x7F1AF538u;
    ctx->downcount -= 6;
    // 7F1AF538: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF53C:
    ctx->pc = 0x7F1AF53Cu;
    // 7F1AF53C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF540:
    ctx->pc = 0x7F1AF540u;
    // 7F1AF540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF544:
    ctx->pc = 0x7F1AF544u;
    // 7F1AF544: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF548:
    ctx->pc = 0x7F1AF548u;
    // 7F1AF548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF54C:
    ctx->pc = 0x7F1AF54Cu;
    ctx->downcount -= 18;
    // 7F1AF54C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF550:
    ctx->pc = 0x7F1AF550u;
    // 7F1AF550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF554:
    ctx->pc = 0x7F1AF554u;
    // 7F1AF554: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF558:
    ctx->pc = 0x7F1AF558u;
    // 7F1AF558: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AF55C:
    ctx->pc = 0x7F1AF55Cu;
    // 7F1AF55C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF560:
    ctx->pc = 0x7F1AF560u;
    // 7F1AF560: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF564:
    ctx->pc = 0x7F1AF564u;
    // 7F1AF564: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF568:
    ctx->pc = 0x7F1AF568u;
    // 7F1AF568: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF56Cu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF56C:
    ctx->pc = 0x7F1AF56Cu;
    ctx->downcount -= 1;
    // 7F1AF56C: bl      0x7F199494
    {
            ctx->lr = 0x7F1AF570u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AF570:
    ctx->pc = 0x7F1AF570u;
    ctx->downcount -= 4;
    // 7F1AF570: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF574:
    ctx->pc = 0x7F1AF574u;
    // 7F1AF574: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF578:
    ctx->pc = 0x7F1AF578u;
    // 7F1AF578: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AF57C:
    ctx->pc = 0x7F1AF57Cu;
    // 7F1AF57C: bl      0x7F1A6AEC
    {
            ctx->lr = 0x7F1AF580u;
            ctx->pc = 0x7F1A6AECu;
            return;
    }

label_7F1AF580:
    ctx->pc = 0x7F1AF580u;
    ctx->downcount -= 16;
    // 7F1AF580: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AF584:
    ctx->pc = 0x7F1AF584u;
    // 7F1AF584: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF588:
    ctx->pc = 0x7F1AF588u;
    // 7F1AF588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF58C:
    ctx->pc = 0x7F1AF58Cu;
    // 7F1AF58C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF590:
    ctx->pc = 0x7F1AF590u;
    // 7F1AF590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF594:
    ctx->pc = 0x7F1AF594u;
    ctx->downcount -= 10;
    // 7F1AF594: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF598:
    ctx->pc = 0x7F1AF598u;
    // 7F1AF598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF59C:
    ctx->pc = 0x7F1AF59Cu;
    // 7F1AF59C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF5A0:
    ctx->pc = 0x7F1AF5A0u;
    // 7F1AF5A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF5A4:
    ctx->pc = 0x7F1AF5A4u;
    // 7F1AF5A4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF5A8:
    ctx->pc = 0x7F1AF5A8u;
    // 7F1AF5A8: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF5AC:
    ctx->pc = 0x7F1AF5ACu;
    // 7F1AF5AC: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF5ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF5B0:
    ctx->pc = 0x7F1AF5B0u;
    // 7F1AF5B0: lfs     f2, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF5B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AF5B4:
    ctx->pc = 0x7F1AF5B4u;
    // 7F1AF5B4: lwz     r5, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF5B8:
    ctx->pc = 0x7F1AF5B8u;
    // 7F1AF5B8: bl      0x7F3F1C98
    {
            ctx->lr = 0x7F1AF5BCu;
            ctx->pc = 0x7F3F1C98u;
            return;
    }

label_7F1AF5BC:
    ctx->pc = 0x7F1AF5BCu;
    ctx->downcount -= 5;
    // 7F1AF5BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF5C0:
    ctx->pc = 0x7F1AF5C0u;
    // 7F1AF5C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF5C4:
    ctx->pc = 0x7F1AF5C4u;
    // 7F1AF5C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF5C8:
    ctx->pc = 0x7F1AF5C8u;
    // 7F1AF5C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF5CC:
    ctx->pc = 0x7F1AF5CCu;
    ctx->downcount -= 6;
    // 7F1AF5CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF5D0:
    ctx->pc = 0x7F1AF5D0u;
    // 7F1AF5D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF5D4:
    ctx->pc = 0x7F1AF5D4u;
    // 7F1AF5D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF5D8:
    ctx->pc = 0x7F1AF5D8u;
    // 7F1AF5D8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF5DC:
    ctx->pc = 0x7F1AF5DCu;
    // 7F1AF5DC: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F1AF5E0:
    ctx->pc = 0x7F1AF5E0u;
    // 7F1AF5E0: bl      0x7F2CF678
    {
            ctx->lr = 0x7F1AF5E4u;
            ctx->pc = 0x7F2CF678u;
            return;
    }

label_7F1AF5E4:
    ctx->pc = 0x7F1AF5E4u;
    ctx->downcount -= 5;
    // 7F1AF5E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF5E8:
    ctx->pc = 0x7F1AF5E8u;
    // 7F1AF5E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF5EC:
    ctx->pc = 0x7F1AF5ECu;
    // 7F1AF5EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF5F0:
    ctx->pc = 0x7F1AF5F0u;
    // 7F1AF5F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF5F4:
    ctx->pc = 0x7F1AF5F4u;
    ctx->downcount -= 4;
    // 7F1AF5F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF5F8:
    ctx->pc = 0x7F1AF5F8u;
    // 7F1AF5F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF5FC:
    ctx->pc = 0x7F1AF5FCu;
    // 7F1AF5FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF600:
    ctx->pc = 0x7F1AF600u;
    // 7F1AF600: bl      0x7F255688
    {
            ctx->lr = 0x7F1AF604u;
            ctx->pc = 0x7F255688u;
            return;
    }

label_7F1AF604:
    ctx->pc = 0x7F1AF604u;
    ctx->downcount -= 5;
    // 7F1AF604: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF608:
    ctx->pc = 0x7F1AF608u;
    // 7F1AF608: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF60C:
    ctx->pc = 0x7F1AF60Cu;
    // 7F1AF60C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF610:
    ctx->pc = 0x7F1AF610u;
    // 7F1AF610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF614:
    ctx->pc = 0x7F1AF614u;
    ctx->downcount -= 18;
    // 7F1AF614: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF618:
    ctx->pc = 0x7F1AF618u;
    // 7F1AF618: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF61C:
    ctx->pc = 0x7F1AF61Cu;
    // 7F1AF61C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF620:
    ctx->pc = 0x7F1AF620u;
    // 7F1AF620: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AF624:
    ctx->pc = 0x7F1AF624u;
    // 7F1AF624: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF628:
    ctx->pc = 0x7F1AF628u;
    // 7F1AF628: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF62C:
    ctx->pc = 0x7F1AF62Cu;
    // 7F1AF62C: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF630:
    ctx->pc = 0x7F1AF630u;
    // 7F1AF630: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF634u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF634:
    ctx->pc = 0x7F1AF634u;
    ctx->downcount -= 1;
    // 7F1AF634: bl      0x7F199494
    {
            ctx->lr = 0x7F1AF638u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AF638:
    ctx->pc = 0x7F1AF638u;
    ctx->downcount -= 4;
    // 7F1AF638: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF63C:
    ctx->pc = 0x7F1AF63Cu;
    // 7F1AF63C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF640:
    ctx->pc = 0x7F1AF640u;
    // 7F1AF640: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AF644:
    ctx->pc = 0x7F1AF644u;
    // 7F1AF644: bl      0x7F1A6CB0
    {
            ctx->lr = 0x7F1AF648u;
            ctx->pc = 0x7F1A6CB0u;
            return;
    }

label_7F1AF648:
    ctx->pc = 0x7F1AF648u;
    ctx->downcount -= 16;
    // 7F1AF648: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AF64C:
    ctx->pc = 0x7F1AF64Cu;
    // 7F1AF64C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF650:
    ctx->pc = 0x7F1AF650u;
    // 7F1AF650: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF654:
    ctx->pc = 0x7F1AF654u;
    // 7F1AF654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF658:
    ctx->pc = 0x7F1AF658u;
    // 7F1AF658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF65C:
    ctx->pc = 0x7F1AF65Cu;
    ctx->downcount -= 7;
    // 7F1AF65C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF660:
    ctx->pc = 0x7F1AF660u;
    // 7F1AF660: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF664:
    ctx->pc = 0x7F1AF664u;
    // 7F1AF664: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF668:
    ctx->pc = 0x7F1AF668u;
    // 7F1AF668: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF66C:
    ctx->pc = 0x7F1AF66Cu;
    // 7F1AF66C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF670:
    ctx->pc = 0x7F1AF670u;
    // 7F1AF670: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF674:
    ctx->pc = 0x7F1AF674u;
    // 7F1AF674: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF678u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF678:
    ctx->pc = 0x7F1AF678u;
    ctx->downcount -= 1;
    // 7F1AF678: bl      0x7F1994CC
    {
            ctx->lr = 0x7F1AF67Cu;
            ctx->pc = 0x7F1994CCu;
            return;
    }

label_7F1AF67C:
    ctx->pc = 0x7F1AF67Cu;
    ctx->downcount -= 2;
    // 7F1AF67C: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF680:
    ctx->pc = 0x7F1AF680u;
    // 7F1AF680: bl      0x7F2D02B8
    {
            ctx->lr = 0x7F1AF684u;
            ctx->pc = 0x7F2D02B8u;
            return;
    }

label_7F1AF684:
    ctx->pc = 0x7F1AF684u;
    ctx->downcount -= 6;
    // 7F1AF684: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF688:
    ctx->pc = 0x7F1AF688u;
    // 7F1AF688: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF68C:
    ctx->pc = 0x7F1AF68Cu;
    // 7F1AF68C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF690:
    ctx->pc = 0x7F1AF690u;
    // 7F1AF690: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF694:
    ctx->pc = 0x7F1AF694u;
    // 7F1AF694: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF698:
    ctx->pc = 0x7F1AF698u;
    ctx->downcount -= 7;
    // 7F1AF698: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF69C:
    ctx->pc = 0x7F1AF69Cu;
    // 7F1AF69C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF6A0:
    ctx->pc = 0x7F1AF6A0u;
    // 7F1AF6A0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF6A4:
    ctx->pc = 0x7F1AF6A4u;
    // 7F1AF6A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF6A8:
    ctx->pc = 0x7F1AF6A8u;
    // 7F1AF6A8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AF6AC:
    ctx->pc = 0x7F1AF6ACu;
    // 7F1AF6AC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF6B0:
    ctx->pc = 0x7F1AF6B0u;
    // 7F1AF6B0: bl      0x80025A08
    {
            ctx->lr = 0x7F1AF6B4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AF6B4:
    ctx->pc = 0x7F1AF6B4u;
    ctx->downcount -= 4;
    // 7F1AF6B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF6B8:
    ctx->pc = 0x7F1AF6B8u;
    // 7F1AF6B8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF6B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF6BC:
    ctx->pc = 0x7F1AF6BCu;
    // 7F1AF6BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF6C0:
    ctx->pc = 0x7F1AF6C0u;
    // 7F1AF6C0: bl      0x7F114738
    {
            ctx->lr = 0x7F1AF6C4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AF6C4:
    ctx->pc = 0x7F1AF6C4u;
    ctx->downcount -= 4;
    // 7F1AF6C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF6C8:
    ctx->pc = 0x7F1AF6C8u;
    // 7F1AF6C8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF6C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF6CC:
    ctx->pc = 0x7F1AF6CCu;
    // 7F1AF6CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF6D0:
    ctx->pc = 0x7F1AF6D0u;
    // 7F1AF6D0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AF6D4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AF6D4:
    ctx->pc = 0x7F1AF6D4u;
    ctx->downcount -= 4;
    // 7F1AF6D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF6D8:
    ctx->pc = 0x7F1AF6D8u;
    // 7F1AF6D8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF6D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF6DC:
    ctx->pc = 0x7F1AF6DCu;
    // 7F1AF6DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF6E0:
    ctx->pc = 0x7F1AF6E0u;
    // 7F1AF6E0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AF6E4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AF6E4:
    ctx->pc = 0x7F1AF6E4u;
    ctx->downcount -= 23;
    // 7F1AF6E4: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF6E8:
    ctx->pc = 0x7F1AF6E8u;
    // 7F1AF6E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AF6EC:
    ctx->pc = 0x7F1AF6ECu;
    // 7F1AF6EC: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF6F0:
    ctx->pc = 0x7F1AF6F0u;
    // 7F1AF6F0: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF6F4:
    ctx->pc = 0x7F1AF6F4u;
    // 7F1AF6F4: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF6F8:
    ctx->pc = 0x7F1AF6F8u;
    // 7F1AF6F8: lwz     r7, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AF6FC:
    ctx->pc = 0x7F1AF6FCu;
    // 7F1AF6FC: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AF700:
    ctx->pc = 0x7F1AF700u;
    // 7F1AF700: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AF704:
    ctx->pc = 0x7F1AF704u;
    // 7F1AF704: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF708:
    ctx->pc = 0x7F1AF708u;
    // 7F1AF708: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AF70C:
    ctx->pc = 0x7F1AF70Cu;
    // 7F1AF70C: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF70Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF710:
    ctx->pc = 0x7F1AF710u;
    // 7F1AF710: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AF714:
    ctx->pc = 0x7F1AF714u;
    // 7F1AF714: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF714u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AF718:
    ctx->pc = 0x7F1AF718u;
    // 7F1AF718: lfs     f3, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF718u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AF71C:
    ctx->pc = 0x7F1AF71Cu;
    // 7F1AF71C: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AF720:
    ctx->pc = 0x7F1AF720u;
    // 7F1AF720: lfs     f4, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF720u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1AF724:
    ctx->pc = 0x7F1AF724u;
    // 7F1AF724: lfs     f5, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF724u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1AF728:
    ctx->pc = 0x7F1AF728u;
    // 7F1AF728: lfs     f6, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF728u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1AF72C:
    ctx->pc = 0x7F1AF72Cu;
    // 7F1AF72C: lfs     f7, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF72Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F1AF730:
    ctx->pc = 0x7F1AF730u;
    // 7F1AF730: lwz     r6, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF734:
    ctx->pc = 0x7F1AF734u;
    // 7F1AF734: lfs     f8, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F1AF738:
    ctx->pc = 0x7F1AF738u;
    // 7F1AF738: lwz     r7, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AF73C:
    ctx->pc = 0x7F1AF73Cu;
    // 7F1AF73C: bl      0x7F23265C
    {
            ctx->lr = 0x7F1AF740u;
            ctx->pc = 0x7F23265Cu;
            return;
    }

label_7F1AF740:
    ctx->pc = 0x7F1AF740u;
    ctx->downcount -= 6;
    // 7F1AF740: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF744:
    ctx->pc = 0x7F1AF744u;
    // 7F1AF744: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF748:
    ctx->pc = 0x7F1AF748u;
    // 7F1AF748: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF74C:
    ctx->pc = 0x7F1AF74Cu;
    // 7F1AF74C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AF750:
    ctx->pc = 0x7F1AF750u;
    // 7F1AF750: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF754:
    ctx->pc = 0x7F1AF754u;
    ctx->downcount -= 4;
    // 7F1AF754: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF758:
    ctx->pc = 0x7F1AF758u;
    // 7F1AF758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF75C:
    ctx->pc = 0x7F1AF75Cu;
    // 7F1AF75C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF760:
    ctx->pc = 0x7F1AF760u;
    // 7F1AF760: bl      0x7F2333C8
    {
            ctx->lr = 0x7F1AF764u;
            ctx->pc = 0x7F2333C8u;
            return;
    }

label_7F1AF764:
    ctx->pc = 0x7F1AF764u;
    ctx->downcount -= 5;
    // 7F1AF764: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF768:
    ctx->pc = 0x7F1AF768u;
    // 7F1AF768: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF76C:
    ctx->pc = 0x7F1AF76Cu;
    // 7F1AF76C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF770:
    ctx->pc = 0x7F1AF770u;
    // 7F1AF770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF774:
    ctx->pc = 0x7F1AF774u;
    ctx->downcount -= 4;
    // 7F1AF774: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF778:
    ctx->pc = 0x7F1AF778u;
    // 7F1AF778: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF77C:
    ctx->pc = 0x7F1AF77Cu;
    // 7F1AF77C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF780:
    ctx->pc = 0x7F1AF780u;
    // 7F1AF780: bl      0x7F2539E8
    {
            ctx->lr = 0x7F1AF784u;
            ctx->pc = 0x7F2539E8u;
            return;
    }

label_7F1AF784:
    ctx->pc = 0x7F1AF784u;
    ctx->downcount -= 5;
    // 7F1AF784: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF788:
    ctx->pc = 0x7F1AF788u;
    // 7F1AF788: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF78C:
    ctx->pc = 0x7F1AF78Cu;
    // 7F1AF78C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF790:
    ctx->pc = 0x7F1AF790u;
    // 7F1AF790: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF794:
    ctx->pc = 0x7F1AF794u;
    ctx->downcount -= 16;
    // 7F1AF794: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF798:
    ctx->pc = 0x7F1AF798u;
    // 7F1AF798: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF79C:
    ctx->pc = 0x7F1AF79Cu;
    // 7F1AF79C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF7A0:
    ctx->pc = 0x7F1AF7A0u;
    // 7F1AF7A0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AF7A4:
    ctx->pc = 0x7F1AF7A4u;
    // 7F1AF7A4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF7A8:
    ctx->pc = 0x7F1AF7A8u;
    // 7F1AF7A8: bl      0x7F198404
    {
            ctx->lr = 0x7F1AF7ACu;
            ctx->pc = 0x7F198404u;
            return;
    }

label_7F1AF7AC:
    ctx->pc = 0x7F1AF7ACu;
    ctx->downcount -= 3;
    // 7F1AF7AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF7B0:
    ctx->pc = 0x7F1AF7B0u;
    // 7F1AF7B0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF7B4:
    ctx->pc = 0x7F1AF7B4u;
    // 7F1AF7B4: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF7B8u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF7B8:
    ctx->pc = 0x7F1AF7B8u;
    ctx->downcount -= 1;
    // 7F1AF7B8: bl      0x7F199494
    {
            ctx->lr = 0x7F1AF7BCu;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AF7BC:
    ctx->pc = 0x7F1AF7BCu;
    ctx->downcount -= 5;
    // 7F1AF7BC: lwz     r6, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF7C0:
    ctx->pc = 0x7F1AF7C0u;
    // 7F1AF7C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF7C4:
    ctx->pc = 0x7F1AF7C4u;
    // 7F1AF7C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AF7C8:
    ctx->pc = 0x7F1AF7C8u;
    // 7F1AF7C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AF7CC:
    ctx->pc = 0x7F1AF7CCu;
    // 7F1AF7CC: bl      0x7F115F20
    {
            ctx->lr = 0x7F1AF7D0u;
            ctx->pc = 0x7F115F20u;
            return;
    }

label_7F1AF7D0:
    ctx->pc = 0x7F1AF7D0u;
    ctx->downcount -= 16;
    // 7F1AF7D0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AF7D4:
    ctx->pc = 0x7F1AF7D4u;
    // 7F1AF7D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF7D8:
    ctx->pc = 0x7F1AF7D8u;
    // 7F1AF7D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF7DC:
    ctx->pc = 0x7F1AF7DCu;
    // 7F1AF7DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF7E0:
    ctx->pc = 0x7F1AF7E0u;
    // 7F1AF7E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF7E4:
    ctx->pc = 0x7F1AF7E4u;
    ctx->downcount -= 15;
    // 7F1AF7E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF7E8:
    ctx->pc = 0x7F1AF7E8u;
    // 7F1AF7E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF7EC:
    ctx->pc = 0x7F1AF7ECu;
    // 7F1AF7EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF7F0:
    ctx->pc = 0x7F1AF7F0u;
    // 7F1AF7F0: lwz     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF7F4:
    ctx->pc = 0x7F1AF7F4u;
    // 7F1AF7F4: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF7F8:
    ctx->pc = 0x7F1AF7F8u;
    // 7F1AF7F8: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF7FC:
    ctx->pc = 0x7F1AF7FCu;
    // 7F1AF7FC: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AF800:
    ctx->pc = 0x7F1AF800u;
    // 7F1AF800: rlwinm r5, r3, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_7F1AF804:
    ctx->pc = 0x7F1AF804u;
    // 7F1AF804: lwz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AF808:
    ctx->pc = 0x7F1AF808u;
    // 7F1AF808: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF80C:
    ctx->pc = 0x7F1AF80Cu;
    // 7F1AF80C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AF810:
    ctx->pc = 0x7F1AF810u;
    // 7F1AF810: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AF814:
    ctx->pc = 0x7F1AF814u;
    // 7F1AF814: or   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[5];
    }

label_7F1AF818:
    ctx->pc = 0x7F1AF818u;
    // 7F1AF818: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AF81C:
    ctx->pc = 0x7F1AF81Cu;
    // 7F1AF81C: bl      0x7F1F9194
    {
            ctx->lr = 0x7F1AF820u;
            ctx->pc = 0x7F1F9194u;
            return;
    }

label_7F1AF820:
    ctx->pc = 0x7F1AF820u;
    ctx->downcount -= 5;
    // 7F1AF820: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF824:
    ctx->pc = 0x7F1AF824u;
    // 7F1AF824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF828:
    ctx->pc = 0x7F1AF828u;
    // 7F1AF828: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF82C:
    ctx->pc = 0x7F1AF82Cu;
    // 7F1AF82C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF830:
    ctx->pc = 0x7F1AF830u;
    ctx->downcount -= 20;
    // 7F1AF830: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF834:
    ctx->pc = 0x7F1AF834u;
    // 7F1AF834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF838:
    ctx->pc = 0x7F1AF838u;
    // 7F1AF838: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF83C:
    ctx->pc = 0x7F1AF83Cu;
    // 7F1AF83C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AF840:
    ctx->pc = 0x7F1AF840u;
    // 7F1AF840: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF844:
    ctx->pc = 0x7F1AF844u;
    // 7F1AF844: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF848:
    ctx->pc = 0x7F1AF848u;
    // 7F1AF848: lwz     r31, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AF84C:
    ctx->pc = 0x7F1AF84Cu;
    // 7F1AF84C: lwz     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF850:
    ctx->pc = 0x7F1AF850u;
    // 7F1AF850: addi    r30, r4, 2
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(2);

label_7F1AF854:
    ctx->pc = 0x7F1AF854u;
    // 7F1AF854: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AF858u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AF858:
    ctx->pc = 0x7F1AF858u;
    ctx->downcount -= 1;
    // 7F1AF858: bl      0x7F199494
    {
            ctx->lr = 0x7F1AF85Cu;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AF85C:
    ctx->pc = 0x7F1AF85Cu;
    ctx->downcount -= 14;
    // 7F1AF85C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AF860:
    ctx->pc = 0x7F1AF860u;
    // 7F1AF860: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AF864:
    ctx->pc = 0x7F1AF864u;
    // 7F1AF864: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF868:
    ctx->pc = 0x7F1AF868u;
    // 7F1AF868: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AF86C:
    ctx->pc = 0x7F1AF86Cu;
    // 7F1AF86C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AF870:
    ctx->pc = 0x7F1AF870u;
    // 7F1AF870: addi    r7, r29, 32
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(32);

label_7F1AF874:
    ctx->pc = 0x7F1AF874u;
    // 7F1AF874: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF878:
    ctx->pc = 0x7F1AF878u;
    // 7F1AF878: addi    r8, r29, 48
    ctx->gpr[8] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1AF87C:
    ctx->pc = 0x7F1AF87Cu;
    // 7F1AF87C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F1AF880:
    ctx->pc = 0x7F1AF880u;
    // 7F1AF880: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F1AF884:
    ctx->pc = 0x7F1AF884u;
    // 7F1AF884: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF888:
    ctx->pc = 0x7F1AF888u;
    // 7F1AF888: lwz     r6, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AF88C:
    ctx->pc = 0x7F1AF88Cu;
    // 7F1AF88C: lfs     f1, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF88Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF890:
    ctx->pc = 0x7F1AF890u;
    // 7F1AF890: bl      0x7F303188
    {
            ctx->lr = 0x7F1AF894u;
            ctx->pc = 0x7F303188u;
            return;
    }

label_7F1AF894:
    ctx->pc = 0x7F1AF894u;
    ctx->downcount -= 16;
    // 7F1AF894: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AF898:
    ctx->pc = 0x7F1AF898u;
    // 7F1AF898: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF89C:
    ctx->pc = 0x7F1AF89Cu;
    // 7F1AF89C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF8A0:
    ctx->pc = 0x7F1AF8A0u;
    // 7F1AF8A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AF8A4:
    ctx->pc = 0x7F1AF8A4u;
    // 7F1AF8A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF8A8:
    ctx->pc = 0x7F1AF8A8u;
    ctx->downcount -= 18;
    // 7F1AF8A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF8AC:
    ctx->pc = 0x7F1AF8ACu;
    // 7F1AF8AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF8B0:
    ctx->pc = 0x7F1AF8B0u;
    // 7F1AF8B0: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AF8B4:
    ctx->pc = 0x7F1AF8B4u;
    // 7F1AF8B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF8B8:
    ctx->pc = 0x7F1AF8B8u;
    // 7F1AF8B8: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF8BC:
    ctx->pc = 0x7F1AF8BCu;
    // 7F1AF8BC: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF8C0:
    ctx->pc = 0x7F1AF8C0u;
    // 7F1AF8C0: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF8C4:
    ctx->pc = 0x7F1AF8C4u;
    // 7F1AF8C4: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F1AF8C8:
    ctx->pc = 0x7F1AF8C8u;
    // 7F1AF8C8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF8CC:
    ctx->pc = 0x7F1AF8CCu;
    // 7F1AF8CC: rlwinm r3, r3, 16, 0, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_7F1AF8D0:
    ctx->pc = 0x7F1AF8D0u;
    // 7F1AF8D0: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AF8D4:
    ctx->pc = 0x7F1AF8D4u;
    // 7F1AF8D4: lfs     f1, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF8D4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF8D8:
    ctx->pc = 0x7F1AF8D8u;
    // 7F1AF8D8: or   r5, r5, r4
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AF8DC:
    ctx->pc = 0x7F1AF8DCu;
    // 7F1AF8DC: lwz     r4, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF8E0:
    ctx->pc = 0x7F1AF8E0u;
    // 7F1AF8E0: or   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F1AF8E4:
    ctx->pc = 0x7F1AF8E4u;
    // 7F1AF8E4: lwz     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AF8E8:
    ctx->pc = 0x7F1AF8E8u;
    // 7F1AF8E8: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F1AF8EC:
    ctx->pc = 0x7F1AF8ECu;
    // 7F1AF8EC: bl      0x7F230C88
    {
            ctx->lr = 0x7F1AF8F0u;
            ctx->pc = 0x7F230C88u;
            return;
    }

label_7F1AF8F0:
    ctx->pc = 0x7F1AF8F0u;
    ctx->downcount -= 5;
    // 7F1AF8F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF8F4:
    ctx->pc = 0x7F1AF8F4u;
    // 7F1AF8F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF8F8:
    ctx->pc = 0x7F1AF8F8u;
    // 7F1AF8F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF8FC:
    ctx->pc = 0x7F1AF8FCu;
    // 7F1AF8FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF900:
    ctx->pc = 0x7F1AF900u;
    ctx->downcount -= 5;
    // 7F1AF900: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF904:
    ctx->pc = 0x7F1AF904u;
    // 7F1AF904: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF908:
    ctx->pc = 0x7F1AF908u;
    // 7F1AF908: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF90C:
    ctx->pc = 0x7F1AF90Cu;
    // 7F1AF90C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF910:
    ctx->pc = 0x7F1AF910u;
    // 7F1AF910: bl      0x7F1A92E0
    {
            ctx->lr = 0x7F1AF914u;
            ctx->pc = 0x7F1A92E0u;
            return;
    }

label_7F1AF914:
    ctx->pc = 0x7F1AF914u;
    ctx->downcount -= 5;
    // 7F1AF914: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF918:
    ctx->pc = 0x7F1AF918u;
    // 7F1AF918: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF91C:
    ctx->pc = 0x7F1AF91Cu;
    // 7F1AF91C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF920:
    ctx->pc = 0x7F1AF920u;
    // 7F1AF920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF924:
    ctx->pc = 0x7F1AF924u;
    ctx->downcount -= 5;
    // 7F1AF924: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF928:
    ctx->pc = 0x7F1AF928u;
    // 7F1AF928: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF92C:
    ctx->pc = 0x7F1AF92Cu;
    // 7F1AF92C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF930:
    ctx->pc = 0x7F1AF930u;
    // 7F1AF930: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF934:
    ctx->pc = 0x7F1AF934u;
    // 7F1AF934: bl      0x7F1C29C4
    {
            ctx->lr = 0x7F1AF938u;
            ctx->pc = 0x7F1C29C4u;
            return;
    }

label_7F1AF938:
    ctx->pc = 0x7F1AF938u;
    ctx->downcount -= 5;
    // 7F1AF938: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF93C:
    ctx->pc = 0x7F1AF93Cu;
    // 7F1AF93C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF940:
    ctx->pc = 0x7F1AF940u;
    // 7F1AF940: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF944:
    ctx->pc = 0x7F1AF944u;
    // 7F1AF944: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF948:
    ctx->pc = 0x7F1AF948u;
    ctx->downcount -= 5;
    // 7F1AF948: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF94C:
    ctx->pc = 0x7F1AF94Cu;
    // 7F1AF94C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF950:
    ctx->pc = 0x7F1AF950u;
    // 7F1AF950: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF954:
    ctx->pc = 0x7F1AF954u;
    // 7F1AF954: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF958:
    ctx->pc = 0x7F1AF958u;
    // 7F1AF958: bl      0x7F2303AC
    {
            ctx->lr = 0x7F1AF95Cu;
            ctx->pc = 0x7F2303ACu;
            return;
    }

label_7F1AF95C:
    ctx->pc = 0x7F1AF95Cu;
    ctx->downcount -= 5;
    // 7F1AF95C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF960:
    ctx->pc = 0x7F1AF960u;
    // 7F1AF960: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF964:
    ctx->pc = 0x7F1AF964u;
    // 7F1AF964: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF968:
    ctx->pc = 0x7F1AF968u;
    // 7F1AF968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF96C:
    ctx->pc = 0x7F1AF96Cu;
    ctx->downcount -= 10;
    // 7F1AF96C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF970:
    ctx->pc = 0x7F1AF970u;
    // 7F1AF970: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF974:
    ctx->pc = 0x7F1AF974u;
    // 7F1AF974: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AF978:
    ctx->pc = 0x7F1AF978u;
    // 7F1AF978: addi    r5, r3, 6904
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6904);

label_7F1AF97C:
    ctx->pc = 0x7F1AF97Cu;
    // 7F1AF97C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF980:
    ctx->pc = 0x7F1AF980u;
    // 7F1AF980: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF980u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF984:
    ctx->pc = 0x7F1AF984u;
    // 7F1AF984: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF988:
    ctx->pc = 0x7F1AF988u;
    // 7F1AF988: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AF988u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1AF98C:
    ctx->pc = 0x7F1AF98Cu;
    // 7F1AF98C: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF990:
    ctx->pc = 0x7F1AF990u;
    // 7F1AF990: bl      0x7F233B68
    {
            ctx->lr = 0x7F1AF994u;
            ctx->pc = 0x7F233B68u;
            return;
    }

label_7F1AF994:
    ctx->pc = 0x7F1AF994u;
    ctx->downcount -= 5;
    // 7F1AF994: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF998:
    ctx->pc = 0x7F1AF998u;
    // 7F1AF998: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF99C:
    ctx->pc = 0x7F1AF99Cu;
    // 7F1AF99C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF9A0:
    ctx->pc = 0x7F1AF9A0u;
    // 7F1AF9A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF9A4:
    ctx->pc = 0x7F1AF9A4u;
    ctx->downcount -= 10;
    // 7F1AF9A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF9A8:
    ctx->pc = 0x7F1AF9A8u;
    // 7F1AF9A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF9AC:
    ctx->pc = 0x7F1AF9ACu;
    // 7F1AF9AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AF9B0:
    ctx->pc = 0x7F1AF9B0u;
    // 7F1AF9B0: addi    r5, r3, 6912
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6912);

label_7F1AF9B4:
    ctx->pc = 0x7F1AF9B4u;
    // 7F1AF9B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF9B8:
    ctx->pc = 0x7F1AF9B8u;
    // 7F1AF9B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AF9B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AF9BC:
    ctx->pc = 0x7F1AF9BCu;
    // 7F1AF9BC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AF9C0:
    ctx->pc = 0x7F1AF9C0u;
    // 7F1AF9C0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AF9C0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1AF9C4:
    ctx->pc = 0x7F1AF9C4u;
    // 7F1AF9C4: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AF9C8:
    ctx->pc = 0x7F1AF9C8u;
    // 7F1AF9C8: bl      0x7F2343CC
    {
            ctx->lr = 0x7F1AF9CCu;
            ctx->pc = 0x7F2343CCu;
            return;
    }

label_7F1AF9CC:
    ctx->pc = 0x7F1AF9CCu;
    ctx->downcount -= 5;
    // 7F1AF9CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF9D0:
    ctx->pc = 0x7F1AF9D0u;
    // 7F1AF9D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF9D4:
    ctx->pc = 0x7F1AF9D4u;
    // 7F1AF9D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF9D8:
    ctx->pc = 0x7F1AF9D8u;
    // 7F1AF9D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF9DC:
    ctx->pc = 0x7F1AF9DCu;
    ctx->downcount -= 4;
    // 7F1AF9DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AF9E0:
    ctx->pc = 0x7F1AF9E0u;
    // 7F1AF9E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AF9E4:
    ctx->pc = 0x7F1AF9E4u;
    // 7F1AF9E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AF9E8:
    ctx->pc = 0x7F1AF9E8u;
    // 7F1AF9E8: bl      0x7F252798
    {
            ctx->lr = 0x7F1AF9ECu;
            ctx->pc = 0x7F252798u;
            return;
    }

label_7F1AF9EC:
    ctx->pc = 0x7F1AF9ECu;
    ctx->downcount -= 5;
    // 7F1AF9EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AF9F0:
    ctx->pc = 0x7F1AF9F0u;
    // 7F1AF9F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AF9F4:
    ctx->pc = 0x7F1AF9F4u;
    // 7F1AF9F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AF9F8:
    ctx->pc = 0x7F1AF9F8u;
    // 7F1AF9F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AF9FC:
    ctx->pc = 0x7F1AF9FCu;
    ctx->downcount -= 18;
    // 7F1AF9FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFA00:
    ctx->pc = 0x7F1AFA00u;
    // 7F1AFA00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFA04:
    ctx->pc = 0x7F1AFA04u;
    // 7F1AFA04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFA08:
    ctx->pc = 0x7F1AFA08u;
    // 7F1AFA08: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AFA0C:
    ctx->pc = 0x7F1AFA0Cu;
    // 7F1AFA0C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFA10:
    ctx->pc = 0x7F1AFA10u;
    // 7F1AFA10: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFA14:
    ctx->pc = 0x7F1AFA14u;
    // 7F1AFA14: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFA18:
    ctx->pc = 0x7F1AFA18u;
    // 7F1AFA18: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AFA1Cu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AFA1C:
    ctx->pc = 0x7F1AFA1Cu;
    ctx->downcount -= 1;
    // 7F1AFA1C: bl      0x7F199494
    {
            ctx->lr = 0x7F1AFA20u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AFA20:
    ctx->pc = 0x7F1AFA20u;
    ctx->downcount -= 4;
    // 7F1AFA20: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFA24:
    ctx->pc = 0x7F1AFA24u;
    // 7F1AFA24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFA28:
    ctx->pc = 0x7F1AFA28u;
    // 7F1AFA28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AFA2C:
    ctx->pc = 0x7F1AFA2Cu;
    // 7F1AFA2C: bl      0x7F1A6F20
    {
            ctx->lr = 0x7F1AFA30u;
            ctx->pc = 0x7F1A6F20u;
            return;
    }

label_7F1AFA30:
    ctx->pc = 0x7F1AFA30u;
    ctx->downcount -= 16;
    // 7F1AFA30: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AFA34:
    ctx->pc = 0x7F1AFA34u;
    // 7F1AFA34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFA38:
    ctx->pc = 0x7F1AFA38u;
    // 7F1AFA38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFA3C:
    ctx->pc = 0x7F1AFA3Cu;
    // 7F1AFA3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFA40:
    ctx->pc = 0x7F1AFA40u;
    // 7F1AFA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFA44:
    ctx->pc = 0x7F1AFA44u;
    ctx->downcount -= 23;
    // 7F1AFA44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFA48:
    ctx->pc = 0x7F1AFA48u;
    // 7F1AFA48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFA4C:
    ctx->pc = 0x7F1AFA4Cu;
    // 7F1AFA4C: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFA50:
    ctx->pc = 0x7F1AFA50u;
    // 7F1AFA50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFA54:
    ctx->pc = 0x7F1AFA54u;
    // 7F1AFA54: lwz     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFA58:
    ctx->pc = 0x7F1AFA58u;
    // 7F1AFA58: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFA5C:
    ctx->pc = 0x7F1AFA5Cu;
    // 7F1AFA5C: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFA60:
    ctx->pc = 0x7F1AFA60u;
    // 7F1AFA60: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_7F1AFA64:
    ctx->pc = 0x7F1AFA64u;
    // 7F1AFA64: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_7F1AFA68:
    ctx->pc = 0x7F1AFA68u;
    // 7F1AFA68: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_7F1AFA6C:
    ctx->pc = 0x7F1AFA6Cu;
    // 7F1AFA6C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F1AFA70:
    ctx->pc = 0x7F1AFA70u;
    // 7F1AFA70: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFA74:
    ctx->pc = 0x7F1AFA74u;
    // 7F1AFA74: lwz     r4, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFA78:
    ctx->pc = 0x7F1AFA78u;
    // 7F1AFA78: lwz     r0, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFA7C:
    ctx->pc = 0x7F1AFA7Cu;
    // 7F1AFA7C: rlwinm r9, r4, 1, 0, 30
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F1AFA80:
    ctx->pc = 0x7F1AFA80u;
    // 7F1AFA80: lwz     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFA84:
    ctx->pc = 0x7F1AFA84u;
    // 7F1AFA84: lwz     r4, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFA88:
    ctx->pc = 0x7F1AFA88u;
    // 7F1AFA88: rlwinm r10, r0, 1, 0, 30
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1AFA8C:
    ctx->pc = 0x7F1AFA8Cu;
    // 7F1AFA8C: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFA90:
    ctx->pc = 0x7F1AFA90u;
    // 7F1AFA90: lwz     r6, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AFA94:
    ctx->pc = 0x7F1AFA94u;
    // 7F1AFA94: lwz     r7, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFA98:
    ctx->pc = 0x7F1AFA98u;
    // 7F1AFA98: lwz     r8, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AFA9C:
    ctx->pc = 0x7F1AFA9Cu;
    // 7F1AFA9C: bl      0x7F1AA410
    {
            ctx->lr = 0x7F1AFAA0u;
            ctx->pc = 0x7F1AA410u;
            return;
    }

label_7F1AFAA0:
    ctx->pc = 0x7F1AFAA0u;
    ctx->downcount -= 5;
    // 7F1AFAA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFAA4:
    ctx->pc = 0x7F1AFAA4u;
    // 7F1AFAA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFAA8:
    ctx->pc = 0x7F1AFAA8u;
    // 7F1AFAA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFAAC:
    ctx->pc = 0x7F1AFAACu;
    // 7F1AFAAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFAB0:
    ctx->pc = 0x7F1AFAB0u;
    ctx->downcount -= 5;
    // 7F1AFAB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFAB4:
    ctx->pc = 0x7F1AFAB4u;
    // 7F1AFAB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFAB8:
    ctx->pc = 0x7F1AFAB8u;
    // 7F1AFAB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFABC:
    ctx->pc = 0x7F1AFABCu;
    // 7F1AFABC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFAC0:
    ctx->pc = 0x7F1AFAC0u;
    // 7F1AFAC0: bl      0x7F2030E4
    {
            ctx->lr = 0x7F1AFAC4u;
            ctx->pc = 0x7F2030E4u;
            return;
    }

label_7F1AFAC4:
    ctx->pc = 0x7F1AFAC4u;
    ctx->downcount -= 5;
    // 7F1AFAC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFAC8:
    ctx->pc = 0x7F1AFAC8u;
    // 7F1AFAC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFACC:
    ctx->pc = 0x7F1AFACCu;
    // 7F1AFACC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFAD0:
    ctx->pc = 0x7F1AFAD0u;
    // 7F1AFAD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFAD4:
    ctx->pc = 0x7F1AFAD4u;
    ctx->downcount -= 7;
    // 7F1AFAD4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFAD8:
    ctx->pc = 0x7F1AFAD8u;
    // 7F1AFAD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFADC:
    ctx->pc = 0x7F1AFADCu;
    // 7F1AFADC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFAE0:
    ctx->pc = 0x7F1AFAE0u;
    // 7F1AFAE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFAE4:
    ctx->pc = 0x7F1AFAE4u;
    // 7F1AFAE4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AFAE8:
    ctx->pc = 0x7F1AFAE8u;
    // 7F1AFAE8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFAEC:
    ctx->pc = 0x7F1AFAECu;
    // 7F1AFAEC: bl      0x80025A08
    {
            ctx->lr = 0x7F1AFAF0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AFAF0:
    ctx->pc = 0x7F1AFAF0u;
    ctx->downcount -= 4;
    // 7F1AFAF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFAF4:
    ctx->pc = 0x7F1AFAF4u;
    // 7F1AFAF4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFAF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFAF8:
    ctx->pc = 0x7F1AFAF8u;
    // 7F1AFAF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFAFC:
    ctx->pc = 0x7F1AFAFCu;
    // 7F1AFAFC: bl      0x7F114738
    {
            ctx->lr = 0x7F1AFB00u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AFB00:
    ctx->pc = 0x7F1AFB00u;
    ctx->downcount -= 4;
    // 7F1AFB00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB04:
    ctx->pc = 0x7F1AFB04u;
    // 7F1AFB04: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFB04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFB08:
    ctx->pc = 0x7F1AFB08u;
    // 7F1AFB08: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFB0C:
    ctx->pc = 0x7F1AFB0Cu;
    // 7F1AFB0C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AFB10u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AFB10:
    ctx->pc = 0x7F1AFB10u;
    ctx->downcount -= 4;
    // 7F1AFB10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB14:
    ctx->pc = 0x7F1AFB14u;
    // 7F1AFB14: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFB14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFB18:
    ctx->pc = 0x7F1AFB18u;
    // 7F1AFB18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFB1C:
    ctx->pc = 0x7F1AFB1Cu;
    // 7F1AFB1C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AFB20u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AFB20:
    ctx->pc = 0x7F1AFB20u;
    ctx->downcount -= 13;
    // 7F1AFB20: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFB24:
    ctx->pc = 0x7F1AFB24u;
    // 7F1AFB24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB28:
    ctx->pc = 0x7F1AFB28u;
    // 7F1AFB28: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFB2C:
    ctx->pc = 0x7F1AFB2Cu;
    // 7F1AFB2C: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFB30:
    ctx->pc = 0x7F1AFB30u;
    // 7F1AFB30: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AFB34:
    ctx->pc = 0x7F1AFB34u;
    // 7F1AFB34: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFB38:
    ctx->pc = 0x7F1AFB38u;
    // 7F1AFB38: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AFB3C:
    ctx->pc = 0x7F1AFB3Cu;
    // 7F1AFB3C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AFB40:
    ctx->pc = 0x7F1AFB40u;
    // 7F1AFB40: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFB44:
    ctx->pc = 0x7F1AFB44u;
    // 7F1AFB44: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AFB48:
    ctx->pc = 0x7F1AFB48u;
    // 7F1AFB48: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AFB4C:
    ctx->pc = 0x7F1AFB4Cu;
    // 7F1AFB4C: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AFB50:
    ctx->pc = 0x7F1AFB50u;
    // 7F1AFB50: bl      0x7F3CD61C
    {
            ctx->lr = 0x7F1AFB54u;
            ctx->pc = 0x7F3CD61Cu;
            return;
    }

label_7F1AFB54:
    ctx->pc = 0x7F1AFB54u;
    ctx->downcount -= 6;
    // 7F1AFB54: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFB58:
    ctx->pc = 0x7F1AFB58u;
    // 7F1AFB58: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFB5C:
    ctx->pc = 0x7F1AFB5Cu;
    // 7F1AFB5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFB60:
    ctx->pc = 0x7F1AFB60u;
    // 7F1AFB60: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AFB64:
    ctx->pc = 0x7F1AFB64u;
    // 7F1AFB64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFB68:
    ctx->pc = 0x7F1AFB68u;
    ctx->downcount -= 7;
    // 7F1AFB68: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFB6C:
    ctx->pc = 0x7F1AFB6Cu;
    // 7F1AFB6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFB70:
    ctx->pc = 0x7F1AFB70u;
    // 7F1AFB70: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFB74:
    ctx->pc = 0x7F1AFB74u;
    // 7F1AFB74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB78:
    ctx->pc = 0x7F1AFB78u;
    // 7F1AFB78: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AFB7C:
    ctx->pc = 0x7F1AFB7Cu;
    // 7F1AFB7C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFB80:
    ctx->pc = 0x7F1AFB80u;
    // 7F1AFB80: bl      0x80025A08
    {
            ctx->lr = 0x7F1AFB84u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AFB84:
    ctx->pc = 0x7F1AFB84u;
    ctx->downcount -= 4;
    // 7F1AFB84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB88:
    ctx->pc = 0x7F1AFB88u;
    // 7F1AFB88: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFB88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFB8C:
    ctx->pc = 0x7F1AFB8Cu;
    // 7F1AFB8C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFB90:
    ctx->pc = 0x7F1AFB90u;
    // 7F1AFB90: bl      0x7F114738
    {
            ctx->lr = 0x7F1AFB94u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AFB94:
    ctx->pc = 0x7F1AFB94u;
    ctx->downcount -= 4;
    // 7F1AFB94: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFB98:
    ctx->pc = 0x7F1AFB98u;
    // 7F1AFB98: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFB98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFB9C:
    ctx->pc = 0x7F1AFB9Cu;
    // 7F1AFB9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFBA0:
    ctx->pc = 0x7F1AFBA0u;
    // 7F1AFBA0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AFBA4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AFBA4:
    ctx->pc = 0x7F1AFBA4u;
    ctx->downcount -= 4;
    // 7F1AFBA4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFBA8:
    ctx->pc = 0x7F1AFBA8u;
    // 7F1AFBA8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFBA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFBAC:
    ctx->pc = 0x7F1AFBACu;
    // 7F1AFBAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFBB0:
    ctx->pc = 0x7F1AFBB0u;
    // 7F1AFBB0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AFBB4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AFBB4:
    ctx->pc = 0x7F1AFBB4u;
    ctx->downcount -= 2;
    // 7F1AFBB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFBB8:
    ctx->pc = 0x7F1AFBB8u;
    // 7F1AFBB8: bl      0x7F3CDD2C
    {
            ctx->lr = 0x7F1AFBBCu;
            ctx->pc = 0x7F3CDD2Cu;
            return;
    }

label_7F1AFBBC:
    ctx->pc = 0x7F1AFBBCu;
    ctx->downcount -= 6;
    // 7F1AFBBC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFBC0:
    ctx->pc = 0x7F1AFBC0u;
    // 7F1AFBC0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFBC4:
    ctx->pc = 0x7F1AFBC4u;
    // 7F1AFBC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFBC8:
    ctx->pc = 0x7F1AFBC8u;
    // 7F1AFBC8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AFBCC:
    ctx->pc = 0x7F1AFBCCu;
    // 7F1AFBCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFBD0:
    ctx->pc = 0x7F1AFBD0u;
    ctx->downcount -= 4;
    // 7F1AFBD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFBD4:
    ctx->pc = 0x7F1AFBD4u;
    // 7F1AFBD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFBD8:
    ctx->pc = 0x7F1AFBD8u;
    // 7F1AFBD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFBDC:
    ctx->pc = 0x7F1AFBDCu;
    // 7F1AFBDC: bl      0x7F2CF58C
    {
            ctx->lr = 0x7F1AFBE0u;
            ctx->pc = 0x7F2CF58Cu;
            return;
    }

label_7F1AFBE0:
    ctx->pc = 0x7F1AFBE0u;
    ctx->downcount -= 5;
    // 7F1AFBE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFBE4:
    ctx->pc = 0x7F1AFBE4u;
    // 7F1AFBE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFBE8:
    ctx->pc = 0x7F1AFBE8u;
    // 7F1AFBE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFBEC:
    ctx->pc = 0x7F1AFBECu;
    // 7F1AFBEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFBF0:
    ctx->pc = 0x7F1AFBF0u;
    ctx->downcount -= 10;
    // 7F1AFBF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFBF4:
    ctx->pc = 0x7F1AFBF4u;
    // 7F1AFBF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFBF8:
    ctx->pc = 0x7F1AFBF8u;
    // 7F1AFBF8: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFBFC:
    ctx->pc = 0x7F1AFBFCu;
    // 7F1AFBFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFC00:
    ctx->pc = 0x7F1AFC00u;
    // 7F1AFC00: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFC04:
    ctx->pc = 0x7F1AFC04u;
    // 7F1AFC04: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFC08:
    ctx->pc = 0x7F1AFC08u;
    // 7F1AFC08: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFC0C:
    ctx->pc = 0x7F1AFC0Cu;
    // 7F1AFC0C: lwz     r6, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AFC10:
    ctx->pc = 0x7F1AFC10u;
    // 7F1AFC10: lwz     r7, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFC14:
    ctx->pc = 0x7F1AFC14u;
    // 7F1AFC14: bl      0x7F1A9A28
    {
            ctx->lr = 0x7F1AFC18u;
            ctx->pc = 0x7F1A9A28u;
            return;
    }

label_7F1AFC18:
    ctx->pc = 0x7F1AFC18u;
    ctx->downcount -= 5;
    // 7F1AFC18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFC1C:
    ctx->pc = 0x7F1AFC1Cu;
    // 7F1AFC1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFC20:
    ctx->pc = 0x7F1AFC20u;
    // 7F1AFC20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFC24:
    ctx->pc = 0x7F1AFC24u;
    // 7F1AFC24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFC28:
    ctx->pc = 0x7F1AFC28u;
    ctx->downcount -= 4;
    // 7F1AFC28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFC2C:
    ctx->pc = 0x7F1AFC2Cu;
    // 7F1AFC2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFC30:
    ctx->pc = 0x7F1AFC30u;
    // 7F1AFC30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFC34:
    ctx->pc = 0x7F1AFC34u;
    // 7F1AFC34: bl      0x7F1A8A5C
    {
            ctx->lr = 0x7F1AFC38u;
            ctx->pc = 0x7F1A8A5Cu;
            return;
    }

label_7F1AFC38:
    ctx->pc = 0x7F1AFC38u;
    ctx->downcount -= 5;
    // 7F1AFC38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFC3C:
    ctx->pc = 0x7F1AFC3Cu;
    // 7F1AFC3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFC40:
    ctx->pc = 0x7F1AFC40u;
    // 7F1AFC40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFC44:
    ctx->pc = 0x7F1AFC44u;
    // 7F1AFC44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFC48:
    ctx->pc = 0x7F1AFC48u;
    ctx->downcount -= 15;
    // 7F1AFC48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFC4C:
    ctx->pc = 0x7F1AFC4Cu;
    // 7F1AFC4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFC50:
    ctx->pc = 0x7F1AFC50u;
    // 7F1AFC50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFC54:
    ctx->pc = 0x7F1AFC54u;
    // 7F1AFC54: lwz     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFC58:
    ctx->pc = 0x7F1AFC58u;
    // 7F1AFC58: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFC5C:
    ctx->pc = 0x7F1AFC5Cu;
    // 7F1AFC5C: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFC60:
    ctx->pc = 0x7F1AFC60u;
    // 7F1AFC60: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AFC64:
    ctx->pc = 0x7F1AFC64u;
    // 7F1AFC64: rlwinm r5, r3, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_7F1AFC68:
    ctx->pc = 0x7F1AFC68u;
    // 7F1AFC68: lwz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFC6C:
    ctx->pc = 0x7F1AFC6Cu;
    // 7F1AFC6C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFC70:
    ctx->pc = 0x7F1AFC70u;
    // 7F1AFC70: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AFC74:
    ctx->pc = 0x7F1AFC74u;
    // 7F1AFC74: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AFC78:
    ctx->pc = 0x7F1AFC78u;
    // 7F1AFC78: or   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[5];
    }

label_7F1AFC7C:
    ctx->pc = 0x7F1AFC7Cu;
    // 7F1AFC7C: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AFC80:
    ctx->pc = 0x7F1AFC80u;
    // 7F1AFC80: bl      0x7F2CF960
    {
            ctx->lr = 0x7F1AFC84u;
            ctx->pc = 0x7F2CF960u;
            return;
    }

label_7F1AFC84:
    ctx->pc = 0x7F1AFC84u;
    ctx->downcount -= 5;
    // 7F1AFC84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFC88:
    ctx->pc = 0x7F1AFC88u;
    // 7F1AFC88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFC8C:
    ctx->pc = 0x7F1AFC8Cu;
    // 7F1AFC8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFC90:
    ctx->pc = 0x7F1AFC90u;
    // 7F1AFC90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFC94:
    ctx->pc = 0x7F1AFC94u;
    ctx->downcount -= 7;
    // 7F1AFC94: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFC98:
    ctx->pc = 0x7F1AFC98u;
    // 7F1AFC98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFC9C:
    ctx->pc = 0x7F1AFC9Cu;
    // 7F1AFC9C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFCA0:
    ctx->pc = 0x7F1AFCA0u;
    // 7F1AFCA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFCA4:
    ctx->pc = 0x7F1AFCA4u;
    // 7F1AFCA4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AFCA8:
    ctx->pc = 0x7F1AFCA8u;
    // 7F1AFCA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFCAC:
    ctx->pc = 0x7F1AFCACu;
    // 7F1AFCAC: bl      0x80025A08
    {
            ctx->lr = 0x7F1AFCB0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AFCB0:
    ctx->pc = 0x7F1AFCB0u;
    ctx->downcount -= 4;
    // 7F1AFCB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFCB4:
    ctx->pc = 0x7F1AFCB4u;
    // 7F1AFCB4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFCB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFCB8:
    ctx->pc = 0x7F1AFCB8u;
    // 7F1AFCB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFCBC:
    ctx->pc = 0x7F1AFCBCu;
    // 7F1AFCBC: bl      0x7F114738
    {
            ctx->lr = 0x7F1AFCC0u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AFCC0:
    ctx->pc = 0x7F1AFCC0u;
    ctx->downcount -= 4;
    // 7F1AFCC0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFCC4:
    ctx->pc = 0x7F1AFCC4u;
    // 7F1AFCC4: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFCC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFCC8:
    ctx->pc = 0x7F1AFCC8u;
    // 7F1AFCC8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFCCC:
    ctx->pc = 0x7F1AFCCCu;
    // 7F1AFCCC: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AFCD0u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AFCD0:
    ctx->pc = 0x7F1AFCD0u;
    ctx->downcount -= 4;
    // 7F1AFCD0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFCD4:
    ctx->pc = 0x7F1AFCD4u;
    // 7F1AFCD4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFCD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFCD8:
    ctx->pc = 0x7F1AFCD8u;
    // 7F1AFCD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFCDC:
    ctx->pc = 0x7F1AFCDCu;
    // 7F1AFCDC: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AFCE0u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AFCE0:
    ctx->pc = 0x7F1AFCE0u;
    ctx->downcount -= 12;
    // 7F1AFCE0: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFCE4:
    ctx->pc = 0x7F1AFCE4u;
    // 7F1AFCE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFCE8:
    ctx->pc = 0x7F1AFCE8u;
    // 7F1AFCE8: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFCEC:
    ctx->pc = 0x7F1AFCECu;
    // 7F1AFCEC: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFCF0:
    ctx->pc = 0x7F1AFCF0u;
    // 7F1AFCF0: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1AFCF4:
    ctx->pc = 0x7F1AFCF4u;
    // 7F1AFCF4: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AFCF8:
    ctx->pc = 0x7F1AFCF8u;
    // 7F1AFCF8: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1AFCFC:
    ctx->pc = 0x7F1AFCFCu;
    // 7F1AFCFC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1AFD00:
    ctx->pc = 0x7F1AFD00u;
    // 7F1AFD00: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AFD04:
    ctx->pc = 0x7F1AFD04u;
    // 7F1AFD04: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1AFD08:
    ctx->pc = 0x7F1AFD08u;
    // 7F1AFD08: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1AFD0C:
    ctx->pc = 0x7F1AFD0Cu;
    // 7F1AFD0C: bl      0x7F40A450
    {
            ctx->lr = 0x7F1AFD10u;
            ctx->pc = 0x7F40A450u;
            return;
    }

label_7F1AFD10:
    ctx->pc = 0x7F1AFD10u;
    ctx->downcount -= 6;
    // 7F1AFD10: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFD14:
    ctx->pc = 0x7F1AFD14u;
    // 7F1AFD14: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFD18:
    ctx->pc = 0x7F1AFD18u;
    // 7F1AFD18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFD1C:
    ctx->pc = 0x7F1AFD1Cu;
    // 7F1AFD1C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AFD20:
    ctx->pc = 0x7F1AFD20u;
    // 7F1AFD20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFD24:
    ctx->pc = 0x7F1AFD24u;
    ctx->downcount -= 17;
    // 7F1AFD24: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFD28:
    ctx->pc = 0x7F1AFD28u;
    // 7F1AFD28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFD2C:
    ctx->pc = 0x7F1AFD2Cu;
    // 7F1AFD2C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFD30:
    ctx->pc = 0x7F1AFD30u;
    // 7F1AFD30: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AFD34:
    ctx->pc = 0x7F1AFD34u;
    // 7F1AFD34: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFD38:
    ctx->pc = 0x7F1AFD38u;
    // 7F1AFD38: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFD3C:
    ctx->pc = 0x7F1AFD3Cu;
    // 7F1AFD3C: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AFD40u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AFD40:
    ctx->pc = 0x7F1AFD40u;
    ctx->downcount -= 2;
    // 7F1AFD40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFD44:
    ctx->pc = 0x7F1AFD44u;
    // 7F1AFD44: bl      0x7F1994CC
    {
            ctx->lr = 0x7F1AFD48u;
            ctx->pc = 0x7F1994CCu;
            return;
    }

label_7F1AFD48:
    ctx->pc = 0x7F1AFD48u;
    ctx->downcount -= 3;
    // 7F1AFD48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFD4C:
    ctx->pc = 0x7F1AFD4Cu;
    // 7F1AFD4C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AFD50:
    ctx->pc = 0x7F1AFD50u;
    // 7F1AFD50: bl      0x7F19945C
    {
            ctx->lr = 0x7F1AFD54u;
            ctx->pc = 0x7F19945Cu;
            return;
    }

label_7F1AFD54:
    ctx->pc = 0x7F1AFD54u;
    ctx->downcount -= 36;
    // 7F1AFD54: lwz     r6, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AFD58:
    ctx->pc = 0x7F1AFD58u;
    // 7F1AFD58: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AFD5C:
    ctx->pc = 0x7F1AFD5Cu;
    // 7F1AFD5C: lwz     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFD60:
    ctx->pc = 0x7F1AFD60u;
    // 7F1AFD60: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFD64:
    ctx->pc = 0x7F1AFD64u;
    // 7F1AFD64: rlwinm r6, r6, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F1AFD68:
    ctx->pc = 0x7F1AFD68u;
    // 7F1AFD68: lwz     r7, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFD6C:
    ctx->pc = 0x7F1AFD6Cu;
    // 7F1AFD6C: rlwinm r5, r5, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F1AFD70:
    ctx->pc = 0x7F1AFD70u;
    // 7F1AFD70: lwz     r8, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AFD74:
    ctx->pc = 0x7F1AFD74u;
    // 7F1AFD74: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1AFD78:
    ctx->pc = 0x7F1AFD78u;
    // 7F1AFD78: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1AFD7C:
    ctx->pc = 0x7F1AFD7Cu;
    // 7F1AFD7C: lwz     r7, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AFD80:
    ctx->pc = 0x7F1AFD80u;
    // 7F1AFD80: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1AFD84:
    ctx->pc = 0x7F1AFD84u;
    // 7F1AFD84: lwz     r6, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AFD88:
    ctx->pc = 0x7F1AFD88u;
    // 7F1AFD88: lfs     f1, 6920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFD88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFD8C:
    ctx->pc = 0x7F1AFD8Cu;
    // 7F1AFD8C: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1AFD90:
    ctx->pc = 0x7F1AFD90u;
    // 7F1AFD90: lwz     r9, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1AFD94:
    ctx->pc = 0x7F1AFD94u;
    // 7F1AFD94: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F1AFD98:
    ctx->pc = 0x7F1AFD98u;
    // 7F1AFD98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFD9C:
    ctx->pc = 0x7F1AFD9Cu;
    // 7F1AFD9C: rlwinm r3, r7, 16, 0, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_7F1AFDA0:
    ctx->pc = 0x7F1AFDA0u;
    // 7F1AFDA0: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AFDA4:
    ctx->pc = 0x7F1AFDA4u;
    // 7F1AFDA4: rlwinm r8, r8, 8, 0, 23
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 8u) & 0xFFFFFF00u;
    }

label_7F1AFDA8:
    ctx->pc = 0x7F1AFDA8u;
    // 7F1AFDA8: or   r5, r9, r8
    {
        ctx->gpr[5] = ctx->gpr[9] | ctx->gpr[8];
    }

label_7F1AFDAC:
    ctx->pc = 0x7F1AFDACu;
    // 7F1AFDAC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AFDACu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1AFDB0:
    ctx->pc = 0x7F1AFDB0u;
    // 7F1AFDB0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFDB4:
    ctx->pc = 0x7F1AFDB4u;
    // 7F1AFDB4: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F1AFDB8:
    ctx->pc = 0x7F1AFDB8u;
    // 7F1AFDB8: or   r5, r5, r3
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F1AFDBC:
    ctx->pc = 0x7F1AFDBCu;
    // 7F1AFDBC: rlwinm r3, r6, 25, 0, 6
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 25u) & 0xFE000000u;
    }

label_7F1AFDC0:
    ctx->pc = 0x7F1AFDC0u;
    // 7F1AFDC0: or   r10, r5, r3
    {
        ctx->gpr[10] = ctx->gpr[5] | ctx->gpr[3];
    }

label_7F1AFDC4:
    ctx->pc = 0x7F1AFDC4u;
    // 7F1AFDC4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFDC8:
    ctx->pc = 0x7F1AFDC8u;
    // 7F1AFDC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AFDCC:
    ctx->pc = 0x7F1AFDCCu;
    // 7F1AFDCC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F1AFDD0:
    ctx->pc = 0x7F1AFDD0u;
    // 7F1AFDD0: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F1AFDD4:
    ctx->pc = 0x7F1AFDD4u;
    // 7F1AFDD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AFDD8:
    ctx->pc = 0x7F1AFDD8u;
    // 7F1AFDD8: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F1AFDDC:
    ctx->pc = 0x7F1AFDDCu;
    // 7F1AFDDC: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_7F1AFDE0:
    ctx->pc = 0x7F1AFDE0u;
    // 7F1AFDE0: bl      0x7F1A6340
    {
            ctx->lr = 0x7F1AFDE4u;
            ctx->pc = 0x7F1A6340u;
            return;
    }

label_7F1AFDE4:
    ctx->pc = 0x7F1AFDE4u;
    ctx->downcount -= 16;
    // 7F1AFDE4: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AFDE8:
    ctx->pc = 0x7F1AFDE8u;
    // 7F1AFDE8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFDEC:
    ctx->pc = 0x7F1AFDECu;
    // 7F1AFDEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFDF0:
    ctx->pc = 0x7F1AFDF0u;
    // 7F1AFDF0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AFDF4:
    ctx->pc = 0x7F1AFDF4u;
    // 7F1AFDF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFDF8:
    ctx->pc = 0x7F1AFDF8u;
    ctx->downcount -= 7;
    // 7F1AFDF8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFDFC:
    ctx->pc = 0x7F1AFDFCu;
    // 7F1AFDFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFE00:
    ctx->pc = 0x7F1AFE00u;
    // 7F1AFE00: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFE04:
    ctx->pc = 0x7F1AFE04u;
    // 7F1AFE04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE08:
    ctx->pc = 0x7F1AFE08u;
    // 7F1AFE08: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AFE0C:
    ctx->pc = 0x7F1AFE0Cu;
    // 7F1AFE0C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFE10:
    ctx->pc = 0x7F1AFE10u;
    // 7F1AFE10: bl      0x80025A08
    {
            ctx->lr = 0x7F1AFE14u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AFE14:
    ctx->pc = 0x7F1AFE14u;
    ctx->downcount -= 4;
    // 7F1AFE14: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE18:
    ctx->pc = 0x7F1AFE18u;
    // 7F1AFE18: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFE18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFE1C:
    ctx->pc = 0x7F1AFE1Cu;
    // 7F1AFE1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFE20:
    ctx->pc = 0x7F1AFE20u;
    // 7F1AFE20: bl      0x7F114738
    {
            ctx->lr = 0x7F1AFE24u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AFE24:
    ctx->pc = 0x7F1AFE24u;
    ctx->downcount -= 4;
    // 7F1AFE24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE28:
    ctx->pc = 0x7F1AFE28u;
    // 7F1AFE28: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFE28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFE2C:
    ctx->pc = 0x7F1AFE2Cu;
    // 7F1AFE2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFE30:
    ctx->pc = 0x7F1AFE30u;
    // 7F1AFE30: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AFE34u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AFE34:
    ctx->pc = 0x7F1AFE34u;
    ctx->downcount -= 4;
    // 7F1AFE34: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE38:
    ctx->pc = 0x7F1AFE38u;
    // 7F1AFE38: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFE38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFE3C:
    ctx->pc = 0x7F1AFE3Cu;
    // 7F1AFE3C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFE40:
    ctx->pc = 0x7F1AFE40u;
    // 7F1AFE40: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AFE44u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AFE44:
    ctx->pc = 0x7F1AFE44u;
    ctx->downcount -= 2;
    // 7F1AFE44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE48:
    ctx->pc = 0x7F1AFE48u;
    // 7F1AFE48: bl      0x7F2376D4
    {
            ctx->lr = 0x7F1AFE4Cu;
            ctx->pc = 0x7F2376D4u;
            return;
    }

label_7F1AFE4C:
    ctx->pc = 0x7F1AFE4Cu;
    ctx->downcount -= 6;
    // 7F1AFE4C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFE50:
    ctx->pc = 0x7F1AFE50u;
    // 7F1AFE50: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFE54:
    ctx->pc = 0x7F1AFE54u;
    // 7F1AFE54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFE58:
    ctx->pc = 0x7F1AFE58u;
    // 7F1AFE58: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AFE5C:
    ctx->pc = 0x7F1AFE5Cu;
    // 7F1AFE5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFE60:
    ctx->pc = 0x7F1AFE60u;
    ctx->downcount -= 7;
    // 7F1AFE60: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFE64:
    ctx->pc = 0x7F1AFE64u;
    // 7F1AFE64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFE68:
    ctx->pc = 0x7F1AFE68u;
    // 7F1AFE68: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFE6C:
    ctx->pc = 0x7F1AFE6Cu;
    // 7F1AFE6C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE70:
    ctx->pc = 0x7F1AFE70u;
    // 7F1AFE70: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AFE74:
    ctx->pc = 0x7F1AFE74u;
    // 7F1AFE74: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFE78:
    ctx->pc = 0x7F1AFE78u;
    // 7F1AFE78: bl      0x80025A08
    {
            ctx->lr = 0x7F1AFE7Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1AFE7C:
    ctx->pc = 0x7F1AFE7Cu;
    ctx->downcount -= 4;
    // 7F1AFE7C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE80:
    ctx->pc = 0x7F1AFE80u;
    // 7F1AFE80: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFE80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFE84:
    ctx->pc = 0x7F1AFE84u;
    // 7F1AFE84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFE88:
    ctx->pc = 0x7F1AFE88u;
    // 7F1AFE88: bl      0x7F114738
    {
            ctx->lr = 0x7F1AFE8Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1AFE8C:
    ctx->pc = 0x7F1AFE8Cu;
    ctx->downcount -= 4;
    // 7F1AFE8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFE90:
    ctx->pc = 0x7F1AFE90u;
    // 7F1AFE90: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFE90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFE94:
    ctx->pc = 0x7F1AFE94u;
    // 7F1AFE94: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFE98:
    ctx->pc = 0x7F1AFE98u;
    // 7F1AFE98: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1AFE9Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1AFE9C:
    ctx->pc = 0x7F1AFE9Cu;
    ctx->downcount -= 4;
    // 7F1AFE9C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFEA0:
    ctx->pc = 0x7F1AFEA0u;
    // 7F1AFEA0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AFEA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AFEA4:
    ctx->pc = 0x7F1AFEA4u;
    // 7F1AFEA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFEA8:
    ctx->pc = 0x7F1AFEA8u;
    // 7F1AFEA8: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1AFEACu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1AFEAC:
    ctx->pc = 0x7F1AFEACu;
    ctx->downcount -= 4;
    // 7F1AFEAC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFEB0:
    ctx->pc = 0x7F1AFEB0u;
    // 7F1AFEB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AFEB4:
    ctx->pc = 0x7F1AFEB4u;
    // 7F1AFEB4: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFEB8:
    ctx->pc = 0x7F1AFEB8u;
    // 7F1AFEB8: bl      0x7F1E8728
    {
            ctx->lr = 0x7F1AFEBCu;
            ctx->pc = 0x7F1E8728u;
            return;
    }

label_7F1AFEBC:
    ctx->pc = 0x7F1AFEBCu;
    ctx->downcount -= 6;
    // 7F1AFEBC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFEC0:
    ctx->pc = 0x7F1AFEC0u;
    // 7F1AFEC0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFEC4:
    ctx->pc = 0x7F1AFEC4u;
    // 7F1AFEC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFEC8:
    ctx->pc = 0x7F1AFEC8u;
    // 7F1AFEC8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AFECC:
    ctx->pc = 0x7F1AFECCu;
    // 7F1AFECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFED0:
    ctx->pc = 0x7F1AFED0u;
    ctx->downcount -= 18;
    // 7F1AFED0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFED4:
    ctx->pc = 0x7F1AFED4u;
    // 7F1AFED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFED8:
    ctx->pc = 0x7F1AFED8u;
    // 7F1AFED8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFEDC:
    ctx->pc = 0x7F1AFEDCu;
    // 7F1AFEDC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AFEE0:
    ctx->pc = 0x7F1AFEE0u;
    // 7F1AFEE0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFEE4:
    ctx->pc = 0x7F1AFEE4u;
    // 7F1AFEE4: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFEE8:
    ctx->pc = 0x7F1AFEE8u;
    // 7F1AFEE8: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFEEC:
    ctx->pc = 0x7F1AFEECu;
    // 7F1AFEEC: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AFEF0u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AFEF0:
    ctx->pc = 0x7F1AFEF0u;
    ctx->downcount -= 1;
    // 7F1AFEF0: bl      0x7F199494
    {
            ctx->lr = 0x7F1AFEF4u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1AFEF4:
    ctx->pc = 0x7F1AFEF4u;
    ctx->downcount -= 4;
    // 7F1AFEF4: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AFEF8:
    ctx->pc = 0x7F1AFEF8u;
    // 7F1AFEF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFEFC:
    ctx->pc = 0x7F1AFEFCu;
    // 7F1AFEFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AFF00:
    ctx->pc = 0x7F1AFF00u;
    // 7F1AFF00: bl      0x7F1AAE78
    {
            ctx->lr = 0x7F1AFF04u;
            ctx->pc = 0x7F1AAE78u;
            return;
    }

label_7F1AFF04:
    ctx->pc = 0x7F1AFF04u;
    ctx->downcount -= 16;
    // 7F1AFF04: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AFF08:
    ctx->pc = 0x7F1AFF08u;
    // 7F1AFF08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFF0C:
    ctx->pc = 0x7F1AFF0Cu;
    // 7F1AFF0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFF10:
    ctx->pc = 0x7F1AFF10u;
    // 7F1AFF10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFF14:
    ctx->pc = 0x7F1AFF14u;
    // 7F1AFF14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFF18:
    ctx->pc = 0x7F1AFF18u;
    ctx->downcount -= 18;
    // 7F1AFF18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFF1C:
    ctx->pc = 0x7F1AFF1Cu;
    // 7F1AFF1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFF20:
    ctx->pc = 0x7F1AFF20u;
    // 7F1AFF20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFF24:
    ctx->pc = 0x7F1AFF24u;
    // 7F1AFF24: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AFF28:
    ctx->pc = 0x7F1AFF28u;
    // 7F1AFF28: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AFF2C:
    ctx->pc = 0x7F1AFF2Cu;
    // 7F1AFF2C: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AFF30:
    ctx->pc = 0x7F1AFF30u;
    // 7F1AFF30: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFF34:
    ctx->pc = 0x7F1AFF34u;
    // 7F1AFF34: bl      0x7F19943C
    {
            ctx->lr = 0x7F1AFF38u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1AFF38:
    ctx->pc = 0x7F1AFF38u;
    ctx->downcount -= 2;
    // 7F1AFF38: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AFF3C:
    ctx->pc = 0x7F1AFF3Cu;
    // 7F1AFF3C: bl      0x7F199504
    {
            ctx->lr = 0x7F1AFF40u;
            ctx->pc = 0x7F199504u;
            return;
    }

label_7F1AFF40:
    ctx->pc = 0x7F1AFF40u;
    ctx->downcount -= 3;
    // 7F1AFF40: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFF44:
    ctx->pc = 0x7F1AFF44u;
    // 7F1AFF44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AFF48:
    ctx->pc = 0x7F1AFF48u;
    // 7F1AFF48: bl      0x7F1CCAFC
    {
            ctx->lr = 0x7F1AFF4Cu;
            ctx->pc = 0x7F1CCAFCu;
            return;
    }

label_7F1AFF4C:
    ctx->pc = 0x7F1AFF4Cu;
    ctx->downcount -= 16;
    // 7F1AFF4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AFF50:
    ctx->pc = 0x7F1AFF50u;
    // 7F1AFF50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFF54:
    ctx->pc = 0x7F1AFF54u;
    // 7F1AFF54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AFF58:
    ctx->pc = 0x7F1AFF58u;
    // 7F1AFF58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AFF5C:
    ctx->pc = 0x7F1AFF5Cu;
    // 7F1AFF5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1AC0EC;
        }
    }

label_7F1AFF60:
    ctx->pc = 0x7F1AFF60u;
    ctx->downcount -= 18;
    // 7F1AFF60: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AFF64:
    ctx->pc = 0x7F1AFF64u;
    // 7F1AFF64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AFF68:
    ctx->pc = 0x7F1AFF68u;
    // 7F1AFF68: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFF6C:
    ctx->pc = 0x7F1AFF6Cu;
    // 7F1AFF6C: stmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AFF70:
    ctx->pc = 0x7F1AFF70u;
    // 7F1AFF70: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AFF74:
    ctx->pc = 0x7F1AFF74u;
    // 7F1AFF74: lwz     r0, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFF78:
    ctx->pc = 0x7F1AFF78u;
    // 7F1AFF78: rlwinm. r0, r0, 0, 28, 28
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

label_7F1AFF7C:
    ctx->pc = 0x7F1AFF7Cu;
    // 7F1AFF7C: bc    4, 2, 0x7F1B016C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F1B016Cu;
            return;
        }
    }

label_7F1AFF80:
    ctx->pc = 0x7F1AFF80u;
    ctx->downcount -= 8;
    // 7F1AFF80: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFF84:
    ctx->pc = 0x7F1AFF84u;
    // 7F1AFF84: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AFF88:
    ctx->pc = 0x7F1AFF88u;
    // 7F1AFF88: stw     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFF8C:
    ctx->pc = 0x7F1AFF8Cu;
    // 7F1AFF8C: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AFF90:
    ctx->pc = 0x7F1AFF90u;
    // 7F1AFF90: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AFF94:
    ctx->pc = 0x7F1AFF94u;
    // 7F1AFF94: cmpwi   r3, 35
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(35);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AFF98:
    ctx->pc = 0x7F1AFF98u;
    // 7F1AFF98: stw     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFF9C:
    ctx->pc = 0x7F1AFF9Cu;
    // 7F1AFF9C: bc    12, 0, 0x7F1AFFB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AFFB4;
        }
    }

label_7F1AFFA0:
    ctx->pc = 0x7F1AFFA0u;
    ctx->downcount -= 5;
    // 7F1AFFA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AFFA4:
    ctx->pc = 0x7F1AFFA4u;
    // 7F1AFFA4: stw     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFFA8:
    ctx->pc = 0x7F1AFFA8u;
    // 7F1AFFA8: lwz     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFFAC:
    ctx->pc = 0x7F1AFFACu;
    // 7F1AFFAC: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AFFB0:
    ctx->pc = 0x7F1AFFB0u;
    // 7F1AFFB0: stw     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AFFB4:
    ctx->pc = 0x7F1AFFB4u;
    ctx->downcount -= 3;
    // 7F1AFFB4: lwz     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AFFB8:
    ctx->pc = 0x7F1AFFB8u;
    // 7F1AFFB8: cmpwi   r0, 0
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

label_7F1AFFBC:
    ctx->pc = 0x7F1AFFBCu;
    // 7F1AFFBC: bc    12, 2, 0x7F1B002C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B002C;
        }
    }

label_7F1AFFC0:
    ctx->pc = 0x7F1AFFC0u;
    ctx->downcount -= 3;
    // 7F1AFFC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1AFFC4:
    ctx->pc = 0x7F1AFFC4u;
    // 7F1AFFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AFFC8:
    ctx->pc = 0x7F1AFFC8u;
    // 7F1AFFC8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1AFFCC:
    ctx->downcount -= 5;
    // 7F1AFFCC: add   r4, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1AFFD0:
    // 7F1AFFD0: addi    r7, r4, 72
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(72);

label_7F1AFFD4:
    // 7F1AFFD4: addi    r6, r4, 112
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(112);

label_7F1AFFD8:
    ctx->pc = 0x7F1AFFD8u;
    // 7F1AFFD8: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F1AFFDC:
    loop_7F1AFFDC(ctx);
    if (ctx->pc == 0x7F1AFFF0u) goto label_7F1AFFF0;
    return;
label_7F1AFFE0:
    ctx->pc = 0x7F1AFFE0u;
    // 7F1AFFE0: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F1AFFE4:
    ctx->pc = 0x7F1AFFE4u;
    // 7F1AFFE4: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AFFE8:
    ctx->pc = 0x7F1AFFE8u;
    // 7F1AFFE8: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F1AFFEC:
    // 7F1AFFEC: bc    16, 0, 0x7F1AFFDC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AFFDCu;
                return;
            }
            goto label_7F1AFFDC;
        }
    }

label_7F1AFFF0:
    ctx->downcount -= 4;
    // 7F1AFFF0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F1AFFF4:
    // 7F1AFFF4: addi    r3, r3, 40
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(40);

label_7F1AFFF8:
    // 7F1AFFF8: cmpwi   r8, 4
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AFFFC:
    // 7F1AFFFC: bc    12, 0, 0x7F1AFFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AFFCCu;
                return;
            }
            goto label_7F1AFFCC;
        }
    }

label_7F1B0000:
    ctx->pc = 0x7F1B0000u;
    ctx->downcount -= 1;
    // 7F1B0000: bl      0x80024A8C
    {
            ctx->lr = 0x7F1B0004u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F1B0004:
    ctx->pc = 0x7F1B0004u;
    ctx->downcount -= 2;
    // 7F1B0004: addi    r5, r29, 236
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(236);

label_7F1B0008:
    ctx->pc = 0x7F1B0008u;
    // 7F1B0008: bl      0x80024CAC
    {
            ctx->lr = 0x7F1B000Cu;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F1B000C:
    ctx->pc = 0x7F1B000Cu;
    ctx->downcount -= 6;
    // 7F1B000C: lwz     r3, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B0010:
    ctx->pc = 0x7F1B0010u;
    // 7F1B0010: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1B0014:
    ctx->pc = 0x7F1B0014u;
    // 7F1B0014: stw     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B0018:
    ctx->pc = 0x7F1B0018u;
    // 7F1B0018: lwz     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B001C:
    ctx->pc = 0x7F1B001Cu;
    // 7F1B001C: cmpwi   r0, 0
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

label_7F1B0020:
    ctx->pc = 0x7F1B0020u;
    // 7F1B0020: bc    4, 0, 0x7F1B002C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B002C;
        }
    }

label_7F1B0024:
    ctx->pc = 0x7F1B0024u;
    ctx->downcount -= 2;
    // 7F1B0024: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F1B0028:
    ctx->pc = 0x7F1B0028u;
    // 7F1B0028: stw     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B002C:
    ctx->pc = 0x7F1B002Cu;
    ctx->downcount -= 6;
    // 7F1B002C: lwz     r3, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B0030:
    ctx->pc = 0x7F1B0030u;
    // 7F1B0030: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B0034:
    ctx->pc = 0x7F1B0034u;
    // 7F1B0034: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B0038:
    ctx->pc = 0x7F1B0038u;
    // 7F1B0038: addi    r30, r3, 32
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(32);

label_7F1B003C:
    ctx->pc = 0x7F1B003Cu;
    // 7F1B003C: cmpwi   r30, 48
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B0040:
    ctx->pc = 0x7F1B0040u;
    // 7F1B0040: bc    4, 0, 0x7F1B0094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B0094;
        }
    }

label_7F1B0044:
    ctx->pc = 0x7F1B0044u;
    ctx->downcount -= 20;
    // 7F1B0044: subfic  r3, r30, 48
    {
        u64 res = (u64)(u32)(s32)(48) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B0048:
    ctx->pc = 0x7F1B0048u;
    // 7F1B0048: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B004C:
    ctx->pc = 0x7F1B004Cu;
    // 7F1B004C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B0050:
    ctx->pc = 0x7F1B0050u;
    // 7F1B0050: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B0054:
    ctx->pc = 0x7F1B0054u;
    // 7F1B0054: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B0058:
    ctx->pc = 0x7F1B0058u;
    // 7F1B0058: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B005C:
    ctx->pc = 0x7F1B005Cu;
    // 7F1B005C: lfd     f2, 6936(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B005Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6936);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B0060:
    ctx->pc = 0x7F1B0060u;
    // 7F1B0060: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B0064:
    ctx->pc = 0x7F1B0064u;
    // 7F1B0064: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B0068:
    ctx->pc = 0x7F1B0068u;
    // 7F1B0068: lfs     f0, 6948(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B0068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B006C:
    ctx->pc = 0x7F1B006Cu;
    // 7F1B006C: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B006Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B0070:
    ctx->pc = 0x7F1B0070u;
    // 7F1B0070: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B0070u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B0074:
    ctx->pc = 0x7F1B0074u;
    // 7F1B0074: lfs     f2, 6944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B0074u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B0078:
    ctx->pc = 0x7F1B0078u;
    // 7F1B0078: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B0078u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B007C:
    ctx->pc = 0x7F1B007Cu;
    // 7F1B007C: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B007Cu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1B0080:
    ctx->pc = 0x7F1B0080u;
    // 7F1B0080: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B0080u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B0084:
    ctx->pc = 0x7F1B0084u;
    // 7F1B0084: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B0084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B0088:
    ctx->pc = 0x7F1B0088u;
    // 7F1B0088: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B008C:
    ctx->pc = 0x7F1B008Cu;
    // 7F1B008C: subfic  r27, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B0090:
    ctx->pc = 0x7F1B0090u;
    // 7F1B0090: b       0x7F1B00E0
    {
            goto label_7F1B00E0;
    }

label_7F1B0094:
    ctx->pc = 0x7F1B0094u;
    ctx->downcount -= 19;
    // 7F1B0094: addi    r3, r30, -48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(-48);

label_7F1B0098:
    ctx->pc = 0x7F1B0098u;
    // 7F1B0098: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B009C:
    ctx->pc = 0x7F1B009Cu;
    // 7F1B009C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B00A0:
    ctx->pc = 0x7F1B00A0u;
    // 7F1B00A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B00A4:
    ctx->pc = 0x7F1B00A4u;
    // 7F1B00A4: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B00A8:
    ctx->pc = 0x7F1B00A8u;
    // 7F1B00A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B00AC:
    ctx->pc = 0x7F1B00ACu;
    // 7F1B00AC: lfd     f2, 6936(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B00ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6936);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B00B0:
    ctx->pc = 0x7F1B00B0u;
    // 7F1B00B0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B00B4:
    ctx->pc = 0x7F1B00B4u;
    // 7F1B00B4: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B00B8:
    ctx->pc = 0x7F1B00B8u;
    // 7F1B00B8: lfs     f0, 6948(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B00B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B00BC:
    ctx->pc = 0x7F1B00BCu;
    // 7F1B00BC: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B00BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B00C0:
    ctx->pc = 0x7F1B00C0u;
    // 7F1B00C0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B00C0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B00C4:
    ctx->pc = 0x7F1B00C4u;
    // 7F1B00C4: lfs     f2, 6944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B00C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B00C8:
    ctx->pc = 0x7F1B00C8u;
    // 7F1B00C8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B00C8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B00CC:
    ctx->pc = 0x7F1B00CCu;
    // 7F1B00CC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B00CCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1B00D0:
    ctx->pc = 0x7F1B00D0u;
    // 7F1B00D0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B00D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B00D4:
    ctx->pc = 0x7F1B00D4u;
    // 7F1B00D4: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B00D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B00D8:
    ctx->pc = 0x7F1B00D8u;
    // 7F1B00D8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B00DC:
    ctx->pc = 0x7F1B00DCu;
    // 7F1B00DC: subfic  r27, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B00E0:
    ctx->pc = 0x7F1B00E0u;
    ctx->downcount -= 2;
    // 7F1B00E0: cmpwi   r27, 0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B00E4:
    ctx->pc = 0x7F1B00E4u;
    // 7F1B00E4: bc    4, 1, 0x7F1B0158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F1B0158u;
            return;
        }
    }

label_7F1B00E8:
    ctx->pc = 0x7F1B00E8u;
    ctx->downcount -= 1;
    // 7F1B00E8: add   r7, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    ctx->pc = 0x7F1B00ECu;
    return;
return_dispatch_7F1AC0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1AC280u: goto label_7F1AC280;
    case 0x7F1AC2A4u: goto label_7F1AC2A4;
    case 0x7F1AC2B0u: goto label_7F1AC2B0;
    case 0x7F1AC2E8u: goto label_7F1AC2E8;
    case 0x7F1AC330u: goto label_7F1AC330;
    case 0x7F1AC34Cu: goto label_7F1AC34C;
    case 0x7F1AC440u: goto label_7F1AC440;
    case 0x7F1AC450u: goto label_7F1AC450;
    case 0x7F1AC468u: goto label_7F1AC468;
    case 0x7F1AC524u: goto label_7F1AC524;
    case 0x7F1AC544u: goto label_7F1AC544;
    case 0x7F1AC564u: goto label_7F1AC564;
    case 0x7F1AC588u: goto label_7F1AC588;
    case 0x7F1AC5A0u: goto label_7F1AC5A0;
    case 0x7F1AC5B8u: goto label_7F1AC5B8;
    case 0x7F1AC5DCu: goto label_7F1AC5DC;
    case 0x7F1AC5F8u: goto label_7F1AC5F8;
    case 0x7F1AC628u: goto label_7F1AC628;
    case 0x7F1AC658u: goto label_7F1AC658;
    case 0x7F1AC688u: goto label_7F1AC688;
    case 0x7F1AC698u: goto label_7F1AC698;
    case 0x7F1AC6A8u: goto label_7F1AC6A8;
    case 0x7F1AC6D0u: goto label_7F1AC6D0;
    case 0x7F1AC6E0u: goto label_7F1AC6E0;
    case 0x7F1AC714u: goto label_7F1AC714;
    case 0x7F1AC754u: goto label_7F1AC754;
    case 0x7F1AC75Cu: goto label_7F1AC75C;
    case 0x7F1AC774u: goto label_7F1AC774;
    case 0x7F1AC7A4u: goto label_7F1AC7A4;
    case 0x7F1AC82Cu: goto label_7F1AC82C;
    case 0x7F1AC884u: goto label_7F1AC884;
    case 0x7F1AC9E8u: goto label_7F1AC9E8;
    case 0x7F1ACA00u: goto label_7F1ACA00;
    case 0x7F1ACAA4u: goto label_7F1ACAA4;
    case 0x7F1ACAB4u: goto label_7F1ACAB4;
    case 0x7F1ACAE8u: goto label_7F1ACAE8;
    case 0x7F1ACB10u: goto label_7F1ACB10;
    case 0x7F1ACB1Cu: goto label_7F1ACB1C;
    case 0x7F1ACB28u: goto label_7F1ACB28;
    case 0x7F1ACB38u: goto label_7F1ACB38;
    case 0x7F1ACBD0u: goto label_7F1ACBD0;
    case 0x7F1ACC00u: goto label_7F1ACC00;
    case 0x7F1ACC30u: goto label_7F1ACC30;
    case 0x7F1ACC74u: goto label_7F1ACC74;
    case 0x7F1ACC84u: goto label_7F1ACC84;
    case 0x7F1ACC9Cu: goto label_7F1ACC9C;
    case 0x7F1ACD38u: goto label_7F1ACD38;
    case 0x7F1ACD40u: goto label_7F1ACD40;
    case 0x7F1ACD48u: goto label_7F1ACD48;
    case 0x7F1ACEA4u: goto label_7F1ACEA4;
    case 0x7F1ACEECu: goto label_7F1ACEEC;
    case 0x7F1ACEFCu: goto label_7F1ACEFC;
    case 0x7F1ACF04u: goto label_7F1ACF04;
    case 0x7F1ACF38u: goto label_7F1ACF38;
    case 0x7F1ACF3Cu: goto label_7F1ACF3C;
    case 0x7F1ACFA8u: goto label_7F1ACFA8;
    case 0x7F1ACFCCu: goto label_7F1ACFCC;
    case 0x7F1ACFECu: goto label_7F1ACFEC;
    case 0x7F1ACFFCu: goto label_7F1ACFFC;
    case 0x7F1AD260u: goto label_7F1AD260;
    case 0x7F1AD3E8u: goto label_7F1AD3E8;
    case 0x7F1AD6DCu: goto label_7F1AD6DC;
    case 0x7F1AD770u: goto label_7F1AD770;
    case 0x7F1AD78Cu: goto label_7F1AD78C;
    case 0x7F1AD824u: goto label_7F1AD824;
    case 0x7F1AD834u: goto label_7F1AD834;
    case 0x7F1AD84Cu: goto label_7F1AD84C;
    case 0x7F1AD91Cu: goto label_7F1AD91C;
    case 0x7F1AD93Cu: goto label_7F1AD93C;
    case 0x7F1AD990u: goto label_7F1AD990;
    case 0x7F1AD998u: goto label_7F1AD998;
    case 0x7F1AD9CCu: goto label_7F1AD9CC;
    case 0x7F1ADA10u: goto label_7F1ADA10;
    case 0x7F1ADA2Cu: goto label_7F1ADA2C;
    case 0x7F1ADAA4u: goto label_7F1ADAA4;
    case 0x7F1ADAB4u: goto label_7F1ADAB4;
    case 0x7F1ADACCu: goto label_7F1ADACC;
    case 0x7F1ADB28u: goto label_7F1ADB28;
    case 0x7F1ADB38u: goto label_7F1ADB38;
    case 0x7F1ADB48u: goto label_7F1ADB48;
    case 0x7F1ADB98u: goto label_7F1ADB98;
    case 0x7F1ADBCCu: goto label_7F1ADBCC;
    case 0x7F1ADBDCu: goto label_7F1ADBDC;
    case 0x7F1ADBECu: goto label_7F1ADBEC;
    case 0x7F1ADBFCu: goto label_7F1ADBFC;
    case 0x7F1ADC0Cu: goto label_7F1ADC0C;
    case 0x7F1ADC1Cu: goto label_7F1ADC1C;
    case 0x7F1ADC2Cu: goto label_7F1ADC2C;
    case 0x7F1ADC3Cu: goto label_7F1ADC3C;
    case 0x7F1ADC4Cu: goto label_7F1ADC4C;
    case 0x7F1ADC5Cu: goto label_7F1ADC5C;
    case 0x7F1ADC6Cu: goto label_7F1ADC6C;
    case 0x7F1ADD54u: goto label_7F1ADD54;
    case 0x7F1ADDB8u: goto label_7F1ADDB8;
    case 0x7F1ADDD0u: goto label_7F1ADDD0;
    case 0x7F1ADDE0u: goto label_7F1ADDE0;
    case 0x7F1ADDF0u: goto label_7F1ADDF0;
    case 0x7F1ADE00u: goto label_7F1ADE00;
    case 0x7F1ADE10u: goto label_7F1ADE10;
    case 0x7F1ADEFCu: goto label_7F1ADEFC;
    case 0x7F1ADF3Cu: goto label_7F1ADF3C;
    case 0x7F1ADFB8u: goto label_7F1ADFB8;
    case 0x7F1ADFD4u: goto label_7F1ADFD4;
    case 0x7F1ADFF0u: goto label_7F1ADFF0;
    case 0x7F1AE040u: goto label_7F1AE040;
    case 0x7F1AE200u: goto label_7F1AE200;
    case 0x7F1AE208u: goto label_7F1AE208;
    case 0x7F1AE238u: goto label_7F1AE238;
    case 0x7F1AE244u: goto label_7F1AE244;
    case 0x7F1AE24Cu: goto label_7F1AE24C;
    case 0x7F1AE258u: goto label_7F1AE258;
    case 0x7F1AE260u: goto label_7F1AE260;
    case 0x7F1AE26Cu: goto label_7F1AE26C;
    case 0x7F1AE294u: goto label_7F1AE294;
    case 0x7F1AE29Cu: goto label_7F1AE29C;
    case 0x7F1AE2B0u: goto label_7F1AE2B0;
    case 0x7F1AE2C0u: goto label_7F1AE2C0;
    case 0x7F1AE388u: goto label_7F1AE388;
    case 0x7F1AE3A4u: goto label_7F1AE3A4;
    case 0x7F1AE3B0u: goto label_7F1AE3B0;
    case 0x7F1AE3C0u: goto label_7F1AE3C0;
    case 0x7F1AE3F4u: goto label_7F1AE3F4;
    case 0x7F1AE418u: goto label_7F1AE418;
    case 0x7F1AE43Cu: goto label_7F1AE43C;
    case 0x7F1AE464u: goto label_7F1AE464;
    case 0x7F1AE494u: goto label_7F1AE494;
    case 0x7F1AE4BCu: goto label_7F1AE4BC;
    case 0x7F1AE4ECu: goto label_7F1AE4EC;
    case 0x7F1AE4F0u: goto label_7F1AE4F0;
    case 0x7F1AE500u: goto label_7F1AE500;
    case 0x7F1AE528u: goto label_7F1AE528;
    case 0x7F1AE554u: goto label_7F1AE554;
    case 0x7F1AE564u: goto label_7F1AE564;
    case 0x7F1AE574u: goto label_7F1AE574;
    case 0x7F1AE584u: goto label_7F1AE584;
    case 0x7F1AE5B4u: goto label_7F1AE5B4;
    case 0x7F1AE5E0u: goto label_7F1AE5E0;
    case 0x7F1AE5ECu: goto label_7F1AE5EC;
    case 0x7F1AE620u: goto label_7F1AE620;
    case 0x7F1AE628u: goto label_7F1AE628;
    case 0x7F1AE638u: goto label_7F1AE638;
    case 0x7F1AE6F0u: goto label_7F1AE6F0;
    case 0x7F1AE794u: goto label_7F1AE794;
    case 0x7F1AE814u: goto label_7F1AE814;
    case 0x7F1AE848u: goto label_7F1AE848;
    case 0x7F1AE850u: goto label_7F1AE850;
    case 0x7F1AE864u: goto label_7F1AE864;
    case 0x7F1AE898u: goto label_7F1AE898;
    case 0x7F1AE8A0u: goto label_7F1AE8A0;
    case 0x7F1AE8B4u: goto label_7F1AE8B4;
    case 0x7F1AE8E4u: goto label_7F1AE8E4;
    case 0x7F1AE8F4u: goto label_7F1AE8F4;
    case 0x7F1AE904u: goto label_7F1AE904;
    case 0x7F1AE914u: goto label_7F1AE914;
    case 0x7F1AE920u: goto label_7F1AE920;
    case 0x7F1AE948u: goto label_7F1AE948;
    case 0x7F1AE994u: goto label_7F1AE994;
    case 0x7F1AE9C0u: goto label_7F1AE9C0;
    case 0x7F1AE9C4u: goto label_7F1AE9C4;
    case 0x7F1AE9D0u: goto label_7F1AE9D0;
    case 0x7F1AE9E0u: goto label_7F1AE9E0;
    case 0x7F1AE9F0u: goto label_7F1AE9F0;
    case 0x7F1AEA00u: goto label_7F1AEA00;
    case 0x7F1AEA20u: goto label_7F1AEA20;
    case 0x7F1AEA50u: goto label_7F1AEA50;
    case 0x7F1AEA60u: goto label_7F1AEA60;
    case 0x7F1AEA70u: goto label_7F1AEA70;
    case 0x7F1AEA80u: goto label_7F1AEA80;
    case 0x7F1AEABCu: goto label_7F1AEABC;
    case 0x7F1AEAECu: goto label_7F1AEAEC;
    case 0x7F1AEAFCu: goto label_7F1AEAFC;
    case 0x7F1AEB0Cu: goto label_7F1AEB0C;
    case 0x7F1AEB1Cu: goto label_7F1AEB1C;
    case 0x7F1AEB24u: goto label_7F1AEB24;
    case 0x7F1AEB54u: goto label_7F1AEB54;
    case 0x7F1AEB64u: goto label_7F1AEB64;
    case 0x7F1AEB74u: goto label_7F1AEB74;
    case 0x7F1AEB84u: goto label_7F1AEB84;
    case 0x7F1AEB8Cu: goto label_7F1AEB8C;
    case 0x7F1AEBBCu: goto label_7F1AEBBC;
    case 0x7F1AEBC4u: goto label_7F1AEBC4;
    case 0x7F1AEBD4u: goto label_7F1AEBD4;
    case 0x7F1AEC04u: goto label_7F1AEC04;
    case 0x7F1AEC14u: goto label_7F1AEC14;
    case 0x7F1AEC24u: goto label_7F1AEC24;
    case 0x7F1AEC34u: goto label_7F1AEC34;
    case 0x7F1AEC5Cu: goto label_7F1AEC5C;
    case 0x7F1AEC8Cu: goto label_7F1AEC8C;
    case 0x7F1AEC9Cu: goto label_7F1AEC9C;
    case 0x7F1AECACu: goto label_7F1AECAC;
    case 0x7F1AECBCu: goto label_7F1AECBC;
    case 0x7F1AECC8u: goto label_7F1AECC8;
    case 0x7F1AECD4u: goto label_7F1AECD4;
    case 0x7F1AED0Cu: goto label_7F1AED0C;
    case 0x7F1AED18u: goto label_7F1AED18;
    case 0x7F1AED24u: goto label_7F1AED24;
    case 0x7F1AED30u: goto label_7F1AED30;
    case 0x7F1AED5Cu: goto label_7F1AED5C;
    case 0x7F1AEDA0u: goto label_7F1AEDA0;
    case 0x7F1AEDB0u: goto label_7F1AEDB0;
    case 0x7F1AEDC0u: goto label_7F1AEDC0;
    case 0x7F1AEDD0u: goto label_7F1AEDD0;
    case 0x7F1AEE08u: goto label_7F1AEE08;
    case 0x7F1AEE38u: goto label_7F1AEE38;
    case 0x7F1AEE48u: goto label_7F1AEE48;
    case 0x7F1AEE58u: goto label_7F1AEE58;
    case 0x7F1AEE68u: goto label_7F1AEE68;
    case 0x7F1AEE7Cu: goto label_7F1AEE7C;
    case 0x7F1AEEACu: goto label_7F1AEEAC;
    case 0x7F1AEEBCu: goto label_7F1AEEBC;
    case 0x7F1AEECCu: goto label_7F1AEECC;
    case 0x7F1AEEDCu: goto label_7F1AEEDC;
    case 0x7F1AEF28u: goto label_7F1AEF28;
    case 0x7F1AEF58u: goto label_7F1AEF58;
    case 0x7F1AEF68u: goto label_7F1AEF68;
    case 0x7F1AEF78u: goto label_7F1AEF78;
    case 0x7F1AEF88u: goto label_7F1AEF88;
    case 0x7F1AEFBCu: goto label_7F1AEFBC;
    case 0x7F1AEFECu: goto label_7F1AEFEC;
    case 0x7F1AEFFCu: goto label_7F1AEFFC;
    case 0x7F1AF00Cu: goto label_7F1AF00C;
    case 0x7F1AF01Cu: goto label_7F1AF01C;
    case 0x7F1AF024u: goto label_7F1AF024;
    case 0x7F1AF054u: goto label_7F1AF054;
    case 0x7F1AF064u: goto label_7F1AF064;
    case 0x7F1AF074u: goto label_7F1AF074;
    case 0x7F1AF084u: goto label_7F1AF084;
    case 0x7F1AF0B8u: goto label_7F1AF0B8;
    case 0x7F1AF0E8u: goto label_7F1AF0E8;
    case 0x7F1AF0F8u: goto label_7F1AF0F8;
    case 0x7F1AF108u: goto label_7F1AF108;
    case 0x7F1AF118u: goto label_7F1AF118;
    case 0x7F1AF120u: goto label_7F1AF120;
    case 0x7F1AF150u: goto label_7F1AF150;
    case 0x7F1AF160u: goto label_7F1AF160;
    case 0x7F1AF170u: goto label_7F1AF170;
    case 0x7F1AF180u: goto label_7F1AF180;
    case 0x7F1AF188u: goto label_7F1AF188;
    case 0x7F1AF1B8u: goto label_7F1AF1B8;
    case 0x7F1AF1C8u: goto label_7F1AF1C8;
    case 0x7F1AF1D8u: goto label_7F1AF1D8;
    case 0x7F1AF1E8u: goto label_7F1AF1E8;
    case 0x7F1AF218u: goto label_7F1AF218;
    case 0x7F1AF248u: goto label_7F1AF248;
    case 0x7F1AF258u: goto label_7F1AF258;
    case 0x7F1AF268u: goto label_7F1AF268;
    case 0x7F1AF278u: goto label_7F1AF278;
    case 0x7F1AF2A8u: goto label_7F1AF2A8;
    case 0x7F1AF2DCu: goto label_7F1AF2DC;
    case 0x7F1AF2E0u: goto label_7F1AF2E0;
    case 0x7F1AF2F0u: goto label_7F1AF2F0;
    case 0x7F1AF320u: goto label_7F1AF320;
    case 0x7F1AF330u: goto label_7F1AF330;
    case 0x7F1AF340u: goto label_7F1AF340;
    case 0x7F1AF350u: goto label_7F1AF350;
    case 0x7F1AF384u: goto label_7F1AF384;
    case 0x7F1AF3B4u: goto label_7F1AF3B4;
    case 0x7F1AF3C4u: goto label_7F1AF3C4;
    case 0x7F1AF3D4u: goto label_7F1AF3D4;
    case 0x7F1AF3E4u: goto label_7F1AF3E4;
    case 0x7F1AF3ECu: goto label_7F1AF3EC;
    case 0x7F1AF410u: goto label_7F1AF410;
    case 0x7F1AF430u: goto label_7F1AF430;
    case 0x7F1AF450u: goto label_7F1AF450;
    case 0x7F1AF4D4u: goto label_7F1AF4D4;
    case 0x7F1AF500u: goto label_7F1AF500;
    case 0x7F1AF510u: goto label_7F1AF510;
    case 0x7F1AF520u: goto label_7F1AF520;
    case 0x7F1AF530u: goto label_7F1AF530;
    case 0x7F1AF538u: goto label_7F1AF538;
    case 0x7F1AF56Cu: goto label_7F1AF56C;
    case 0x7F1AF570u: goto label_7F1AF570;
    case 0x7F1AF580u: goto label_7F1AF580;
    case 0x7F1AF5BCu: goto label_7F1AF5BC;
    case 0x7F1AF5E4u: goto label_7F1AF5E4;
    case 0x7F1AF604u: goto label_7F1AF604;
    case 0x7F1AF634u: goto label_7F1AF634;
    case 0x7F1AF638u: goto label_7F1AF638;
    case 0x7F1AF648u: goto label_7F1AF648;
    case 0x7F1AF678u: goto label_7F1AF678;
    case 0x7F1AF67Cu: goto label_7F1AF67C;
    case 0x7F1AF684u: goto label_7F1AF684;
    case 0x7F1AF6B4u: goto label_7F1AF6B4;
    case 0x7F1AF6C4u: goto label_7F1AF6C4;
    case 0x7F1AF6D4u: goto label_7F1AF6D4;
    case 0x7F1AF6E4u: goto label_7F1AF6E4;
    case 0x7F1AF740u: goto label_7F1AF740;
    case 0x7F1AF764u: goto label_7F1AF764;
    case 0x7F1AF784u: goto label_7F1AF784;
    case 0x7F1AF7ACu: goto label_7F1AF7AC;
    case 0x7F1AF7B8u: goto label_7F1AF7B8;
    case 0x7F1AF7BCu: goto label_7F1AF7BC;
    case 0x7F1AF7D0u: goto label_7F1AF7D0;
    case 0x7F1AF820u: goto label_7F1AF820;
    case 0x7F1AF858u: goto label_7F1AF858;
    case 0x7F1AF85Cu: goto label_7F1AF85C;
    case 0x7F1AF894u: goto label_7F1AF894;
    case 0x7F1AF8F0u: goto label_7F1AF8F0;
    case 0x7F1AF914u: goto label_7F1AF914;
    case 0x7F1AF938u: goto label_7F1AF938;
    case 0x7F1AF95Cu: goto label_7F1AF95C;
    case 0x7F1AF994u: goto label_7F1AF994;
    case 0x7F1AF9CCu: goto label_7F1AF9CC;
    case 0x7F1AF9ECu: goto label_7F1AF9EC;
    case 0x7F1AFA1Cu: goto label_7F1AFA1C;
    case 0x7F1AFA20u: goto label_7F1AFA20;
    case 0x7F1AFA30u: goto label_7F1AFA30;
    case 0x7F1AFAA0u: goto label_7F1AFAA0;
    case 0x7F1AFAC4u: goto label_7F1AFAC4;
    case 0x7F1AFAF0u: goto label_7F1AFAF0;
    case 0x7F1AFB00u: goto label_7F1AFB00;
    case 0x7F1AFB10u: goto label_7F1AFB10;
    case 0x7F1AFB20u: goto label_7F1AFB20;
    case 0x7F1AFB54u: goto label_7F1AFB54;
    case 0x7F1AFB84u: goto label_7F1AFB84;
    case 0x7F1AFB94u: goto label_7F1AFB94;
    case 0x7F1AFBA4u: goto label_7F1AFBA4;
    case 0x7F1AFBB4u: goto label_7F1AFBB4;
    case 0x7F1AFBBCu: goto label_7F1AFBBC;
    case 0x7F1AFBE0u: goto label_7F1AFBE0;
    case 0x7F1AFC18u: goto label_7F1AFC18;
    case 0x7F1AFC38u: goto label_7F1AFC38;
    case 0x7F1AFC84u: goto label_7F1AFC84;
    case 0x7F1AFCB0u: goto label_7F1AFCB0;
    case 0x7F1AFCC0u: goto label_7F1AFCC0;
    case 0x7F1AFCD0u: goto label_7F1AFCD0;
    case 0x7F1AFCE0u: goto label_7F1AFCE0;
    case 0x7F1AFD10u: goto label_7F1AFD10;
    case 0x7F1AFD40u: goto label_7F1AFD40;
    case 0x7F1AFD48u: goto label_7F1AFD48;
    case 0x7F1AFD54u: goto label_7F1AFD54;
    case 0x7F1AFDE4u: goto label_7F1AFDE4;
    case 0x7F1AFE14u: goto label_7F1AFE14;
    case 0x7F1AFE24u: goto label_7F1AFE24;
    case 0x7F1AFE34u: goto label_7F1AFE34;
    case 0x7F1AFE44u: goto label_7F1AFE44;
    case 0x7F1AFE4Cu: goto label_7F1AFE4C;
    case 0x7F1AFE7Cu: goto label_7F1AFE7C;
    case 0x7F1AFE8Cu: goto label_7F1AFE8C;
    case 0x7F1AFE9Cu: goto label_7F1AFE9C;
    case 0x7F1AFEACu: goto label_7F1AFEAC;
    case 0x7F1AFEBCu: goto label_7F1AFEBC;
    case 0x7F1AFEF0u: goto label_7F1AFEF0;
    case 0x7F1AFEF4u: goto label_7F1AFEF4;
    case 0x7F1AFF04u: goto label_7F1AFF04;
    case 0x7F1AFF38u: goto label_7F1AFF38;
    case 0x7F1AFF40u: goto label_7F1AFF40;
    case 0x7F1AFF4Cu: goto label_7F1AFF4C;
    case 0x7F1B0004u: goto label_7F1B0004;
    case 0x7F1B000Cu: goto label_7F1B000C;
    default: return;
    }
}

