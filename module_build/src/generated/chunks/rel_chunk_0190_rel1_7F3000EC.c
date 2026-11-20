// DolRecomp output
#include "../generated.h"

static void loop_7F3001D8(CPUState* ctx) {
label_7F3001D8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3001D8u;
    // 7F3001D8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3001DCu;
    // 7F3001DC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3001E0u;
    // 7F3001E0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3001E4u;
    // 7F3001E4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3001E8: bc    16, 0, 0x7F3001D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3001D8u;
                return;
            }
            goto label_7F3001D8;
        }
    }

    ctx->pc = 0x7F3001ECu;
}

static void loop_7F300204(CPUState* ctx) {
label_7F300204:
    ctx->downcount -= 5;
    ctx->pc = 0x7F300204u;
    // 7F300204: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F300208u;
    // 7F300208: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30020Cu;
    // 7F30020C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F300210u;
    // 7F300210: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F300214: bc    16, 0, 0x7F300204
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300204u;
                return;
            }
            goto label_7F300204;
        }
    }

    ctx->pc = 0x7F300218u;
}

static void loop_7F30024C(CPUState* ctx) {
label_7F30024C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30024Cu;
    // 7F30024C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F300250u;
    // 7F300250: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F300254u;
    // 7F300254: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F300258u;
    // 7F300258: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F30025C: bc    16, 0, 0x7F30024C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30024Cu;
                return;
            }
            goto label_7F30024C;
        }
    }

    ctx->pc = 0x7F300260u;
}

static void loop_7F300274(CPUState* ctx) {
label_7F300274:
    ctx->downcount -= 5;
    ctx->pc = 0x7F300274u;
    // 7F300274: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F300278u;
    // 7F300278: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30027Cu;
    // 7F30027C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F300280u;
    // 7F300280: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F300284: bc    16, 0, 0x7F300274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300274u;
                return;
            }
            goto label_7F300274;
        }
    }

    ctx->pc = 0x7F300288u;
}

static void loop_7F300344(CPUState* ctx) {
label_7F300344:
    ctx->downcount -= 5;
    ctx->pc = 0x7F300344u;
    // 7F300344: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F300348u;
    // 7F300348: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30034Cu;
    // 7F30034C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F300350u;
    // 7F300350: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F300354: bc    16, 0, 0x7F300344
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300344u;
                return;
            }
            goto label_7F300344;
        }
    }

    ctx->pc = 0x7F300358u;
}

static void loop_7F300658(CPUState* ctx) {
label_7F300658:
    ctx->downcount -= 5;
    ctx->pc = 0x7F300658u;
    // 7F300658: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30065Cu;
    // 7F30065C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F300660u;
    // 7F300660: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F300664u;
    // 7F300664: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F300668: bc    16, 0, 0x7F300658
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300658u;
                return;
            }
            goto label_7F300658;
        }
    }

    ctx->pc = 0x7F30066Cu;
}

static void loop_7F3013A8(CPUState* ctx) {
label_7F3013A8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3013A8u;
    // 7F3013A8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3013ACu;
    // 7F3013AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3013B0u;
    // 7F3013B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3013B4u;
    // 7F3013B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3013B8: bc    16, 0, 0x7F3013A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3013A8u;
                return;
            }
            goto label_7F3013A8;
        }
    }

    ctx->pc = 0x7F3013BCu;
}

static void loop_7F301584(CPUState* ctx) {
label_7F301584:
    ctx->downcount -= 5;
    ctx->pc = 0x7F301584u;
    // 7F301584: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F301588u;
    // 7F301588: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30158Cu;
    // 7F30158C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F301590u;
    // 7F301590: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F301594: bc    16, 0, 0x7F301584
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301584u;
                return;
            }
            goto label_7F301584;
        }
    }

    ctx->pc = 0x7F301598u;
}

static void loop_7F30199C(CPUState* ctx) {
label_7F30199C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30199Cu;
    // 7F30199C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3019A0u;
    // 7F3019A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3019A4u;
    // 7F3019A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3019A8u;
    // 7F3019A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3019AC: bc    16, 0, 0x7F30199C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30199Cu;
                return;
            }
            goto label_7F30199C;
        }
    }

    ctx->pc = 0x7F3019B0u;
}

static void loop_7F3019C8(CPUState* ctx) {
label_7F3019C8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3019C8u;
    // 7F3019C8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3019CCu;
    // 7F3019CC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3019D0u;
    // 7F3019D0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3019D4u;
    // 7F3019D4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3019D8: bc    16, 0, 0x7F3019C8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3019C8u;
                return;
            }
            goto label_7F3019C8;
        }
    }

    ctx->pc = 0x7F3019DCu;
}

static void loop_7F301E2C(CPUState* ctx) {
label_7F301E2C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F301E2Cu;
    // 7F301E2C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F301E30u;
    // 7F301E30: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F301E34u;
    // 7F301E34: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F301E38u;
    // 7F301E38: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F301E3C: bc    16, 0, 0x7F301E2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301E2Cu;
                return;
            }
            goto label_7F301E2C;
        }
    }

    ctx->pc = 0x7F301E40u;
}

static void loop_7F30226C(CPUState* ctx) {
label_7F30226C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30226Cu;
    // 7F30226C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F302270u;
    // 7F302270: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F302274u;
    // 7F302274: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F302278u;
    // 7F302278: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F30227C: bc    16, 0, 0x7F30226C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30226Cu;
                return;
            }
            goto label_7F30226C;
        }
    }

    ctx->pc = 0x7F302280u;
}

static void loop_7F3029D0(CPUState* ctx) {
label_7F3029D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3029D0u;
    // 7F3029D0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3029D4u;
    // 7F3029D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3029D8u;
    // 7F3029D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3029DCu;
    // 7F3029DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3029E0: bc    16, 0, 0x7F3029D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3029D0u;
                return;
            }
            goto label_7F3029D0;
        }
    }

    ctx->pc = 0x7F3029E4u;
}

static void loop_7F3029FC(CPUState* ctx) {
label_7F3029FC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3029FCu;
    // 7F3029FC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F302A00u;
    // 7F302A00: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F302A04u;
    // 7F302A04: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F302A08u;
    // 7F302A08: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F302A0C: bc    16, 0, 0x7F3029FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3029FCu;
                return;
            }
            goto label_7F3029FC;
        }
    }

    ctx->pc = 0x7F302A10u;
}

static void loop_7F302A48(CPUState* ctx) {
label_7F302A48:
    ctx->downcount -= 5;
    ctx->pc = 0x7F302A48u;
    // 7F302A48: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F302A4Cu;
    // 7F302A4C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F302A50u;
    // 7F302A50: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F302A54u;
    // 7F302A54: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F302A58: bc    16, 0, 0x7F302A48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302A48u;
                return;
            }
            goto label_7F302A48;
        }
    }

    ctx->pc = 0x7F302A5Cu;
}

static void loop_7F302E38(CPUState* ctx) {
label_7F302E38:
    ctx->downcount -= 5;
    ctx->pc = 0x7F302E38u;
    // 7F302E38: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F302E3Cu;
    // 7F302E3C: lwzu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

    ctx->pc = 0x7F302E40u;
    // 7F302E40: stw     r3, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F302E44u;
    // 7F302E44: stwu     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[9] = ea;
    }

    // 7F302E48: bc    16, 0, 0x7F302E38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302E38u;
                return;
            }
            goto label_7F302E38;
        }
    }

    ctx->pc = 0x7F302E4Cu;
}

static void loop_7F3038A0(CPUState* ctx) {
label_7F3038A0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3038A0u;
    // 7F3038A0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3038A4u;
    // 7F3038A4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3038A8u;
    // 7F3038A8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3038ACu;
    // 7F3038AC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3038B0: bc    16, 0, 0x7F3038A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3038A0u;
                return;
            }
            goto label_7F3038A0;
        }
    }

    ctx->pc = 0x7F3038B4u;
}

static void loop_7F30401C(CPUState* ctx) {
label_7F30401C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30401Cu;
    // 7F30401C: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F304020u;
    // 7F304020: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F304024u;
    // 7F304024: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F304028u;
    // 7F304028: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F30402C: bc    16, 0, 0x7F30401C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30401Cu;
                return;
            }
            goto label_7F30401C;
        }
    }

    ctx->pc = 0x7F304030u;
}

void func_7F3000EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3000ECu: goto label_7F3000EC;
    case 0x7F3000F0u: goto label_7F3000F0;
    case 0x7F3000F4u: goto label_7F3000F4;
    case 0x7F3000F8u: goto label_7F3000F8;
    case 0x7F3000FCu: goto label_7F3000FC;
    case 0x7F300100u: goto label_7F300100;
    case 0x7F300104u: goto label_7F300104;
    case 0x7F300108u: goto label_7F300108;
    case 0x7F30010Cu: goto label_7F30010C;
    case 0x7F300110u: goto label_7F300110;
    case 0x7F300114u: goto label_7F300114;
    case 0x7F300118u: goto label_7F300118;
    case 0x7F30011Cu: goto label_7F30011C;
    case 0x7F300120u: goto label_7F300120;
    case 0x7F300124u: goto label_7F300124;
    case 0x7F300128u: goto label_7F300128;
    case 0x7F30012Cu: goto label_7F30012C;
    case 0x7F300130u: goto label_7F300130;
    case 0x7F300134u: goto label_7F300134;
    case 0x7F300138u: goto label_7F300138;
    case 0x7F30013Cu: goto label_7F30013C;
    case 0x7F300140u: goto label_7F300140;
    case 0x7F300144u: goto label_7F300144;
    case 0x7F300148u: goto label_7F300148;
    case 0x7F30014Cu: goto label_7F30014C;
    case 0x7F300150u: goto label_7F300150;
    case 0x7F300154u: goto label_7F300154;
    case 0x7F300158u: goto label_7F300158;
    case 0x7F30015Cu: goto label_7F30015C;
    case 0x7F300160u: goto label_7F300160;
    case 0x7F300164u: goto label_7F300164;
    case 0x7F300168u: goto label_7F300168;
    case 0x7F30016Cu: goto label_7F30016C;
    case 0x7F300170u: goto label_7F300170;
    case 0x7F300174u: goto label_7F300174;
    case 0x7F300178u: goto label_7F300178;
    case 0x7F30017Cu: goto label_7F30017C;
    case 0x7F300180u: goto label_7F300180;
    case 0x7F300184u: goto label_7F300184;
    case 0x7F300188u: goto label_7F300188;
    case 0x7F30018Cu: goto label_7F30018C;
    case 0x7F300190u: goto label_7F300190;
    case 0x7F300194u: goto label_7F300194;
    case 0x7F300198u: goto label_7F300198;
    case 0x7F30019Cu: goto label_7F30019C;
    case 0x7F3001A0u: goto label_7F3001A0;
    case 0x7F3001A4u: goto label_7F3001A4;
    case 0x7F3001A8u: goto label_7F3001A8;
    case 0x7F3001ACu: goto label_7F3001AC;
    case 0x7F3001B0u: goto label_7F3001B0;
    case 0x7F3001B4u: goto label_7F3001B4;
    case 0x7F3001B8u: goto label_7F3001B8;
    case 0x7F3001BCu: goto label_7F3001BC;
    case 0x7F3001C0u: goto label_7F3001C0;
    case 0x7F3001C4u: goto label_7F3001C4;
    case 0x7F3001C8u: goto label_7F3001C8;
    case 0x7F3001CCu: goto label_7F3001CC;
    case 0x7F3001D0u: goto label_7F3001D0;
    case 0x7F3001D4u: goto label_7F3001D4;
    case 0x7F3001D8u: goto label_7F3001D8;
    case 0x7F3001DCu: goto label_7F3001DC;
    case 0x7F3001E0u: goto label_7F3001E0;
    case 0x7F3001E4u: goto label_7F3001E4;
    case 0x7F3001E8u: goto label_7F3001E8;
    case 0x7F3001ECu: goto label_7F3001EC;
    case 0x7F3001F0u: goto label_7F3001F0;
    case 0x7F3001F4u: goto label_7F3001F4;
    case 0x7F3001F8u: goto label_7F3001F8;
    case 0x7F3001FCu: goto label_7F3001FC;
    case 0x7F300200u: goto label_7F300200;
    case 0x7F300204u: goto label_7F300204;
    case 0x7F300208u: goto label_7F300208;
    case 0x7F30020Cu: goto label_7F30020C;
    case 0x7F300210u: goto label_7F300210;
    case 0x7F300214u: goto label_7F300214;
    case 0x7F300218u: goto label_7F300218;
    case 0x7F30021Cu: goto label_7F30021C;
    case 0x7F300220u: goto label_7F300220;
    case 0x7F300224u: goto label_7F300224;
    case 0x7F300228u: goto label_7F300228;
    case 0x7F30022Cu: goto label_7F30022C;
    case 0x7F300230u: goto label_7F300230;
    case 0x7F300234u: goto label_7F300234;
    case 0x7F300238u: goto label_7F300238;
    case 0x7F30023Cu: goto label_7F30023C;
    case 0x7F300240u: goto label_7F300240;
    case 0x7F300244u: goto label_7F300244;
    case 0x7F300248u: goto label_7F300248;
    case 0x7F30024Cu: goto label_7F30024C;
    case 0x7F300250u: goto label_7F300250;
    case 0x7F300254u: goto label_7F300254;
    case 0x7F300258u: goto label_7F300258;
    case 0x7F30025Cu: goto label_7F30025C;
    case 0x7F300260u: goto label_7F300260;
    case 0x7F300264u: goto label_7F300264;
    case 0x7F300268u: goto label_7F300268;
    case 0x7F30026Cu: goto label_7F30026C;
    case 0x7F300270u: goto label_7F300270;
    case 0x7F300274u: goto label_7F300274;
    case 0x7F300278u: goto label_7F300278;
    case 0x7F30027Cu: goto label_7F30027C;
    case 0x7F300280u: goto label_7F300280;
    case 0x7F300284u: goto label_7F300284;
    case 0x7F300288u: goto label_7F300288;
    case 0x7F30028Cu: goto label_7F30028C;
    case 0x7F300290u: goto label_7F300290;
    case 0x7F300294u: goto label_7F300294;
    case 0x7F300298u: goto label_7F300298;
    case 0x7F30029Cu: goto label_7F30029C;
    case 0x7F3002A0u: goto label_7F3002A0;
    case 0x7F3002A4u: goto label_7F3002A4;
    case 0x7F3002A8u: goto label_7F3002A8;
    case 0x7F3002ACu: goto label_7F3002AC;
    case 0x7F3002B0u: goto label_7F3002B0;
    case 0x7F3002B4u: goto label_7F3002B4;
    case 0x7F3002B8u: goto label_7F3002B8;
    case 0x7F3002BCu: goto label_7F3002BC;
    case 0x7F3002C0u: goto label_7F3002C0;
    case 0x7F3002C4u: goto label_7F3002C4;
    case 0x7F3002C8u: goto label_7F3002C8;
    case 0x7F3002CCu: goto label_7F3002CC;
    case 0x7F3002D0u: goto label_7F3002D0;
    case 0x7F3002D4u: goto label_7F3002D4;
    case 0x7F3002D8u: goto label_7F3002D8;
    case 0x7F3002DCu: goto label_7F3002DC;
    case 0x7F3002E0u: goto label_7F3002E0;
    case 0x7F3002E4u: goto label_7F3002E4;
    case 0x7F3002E8u: goto label_7F3002E8;
    case 0x7F3002ECu: goto label_7F3002EC;
    case 0x7F3002F0u: goto label_7F3002F0;
    case 0x7F3002F4u: goto label_7F3002F4;
    case 0x7F3002F8u: goto label_7F3002F8;
    case 0x7F3002FCu: goto label_7F3002FC;
    case 0x7F300300u: goto label_7F300300;
    case 0x7F300304u: goto label_7F300304;
    case 0x7F300308u: goto label_7F300308;
    case 0x7F30030Cu: goto label_7F30030C;
    case 0x7F300310u: goto label_7F300310;
    case 0x7F300314u: goto label_7F300314;
    case 0x7F300318u: goto label_7F300318;
    case 0x7F30031Cu: goto label_7F30031C;
    case 0x7F300320u: goto label_7F300320;
    case 0x7F300324u: goto label_7F300324;
    case 0x7F300328u: goto label_7F300328;
    case 0x7F30032Cu: goto label_7F30032C;
    case 0x7F300330u: goto label_7F300330;
    case 0x7F300334u: goto label_7F300334;
    case 0x7F300338u: goto label_7F300338;
    case 0x7F30033Cu: goto label_7F30033C;
    case 0x7F300340u: goto label_7F300340;
    case 0x7F300344u: goto label_7F300344;
    case 0x7F300348u: goto label_7F300348;
    case 0x7F30034Cu: goto label_7F30034C;
    case 0x7F300350u: goto label_7F300350;
    case 0x7F300354u: goto label_7F300354;
    case 0x7F300358u: goto label_7F300358;
    case 0x7F30035Cu: goto label_7F30035C;
    case 0x7F300360u: goto label_7F300360;
    case 0x7F300364u: goto label_7F300364;
    case 0x7F300368u: goto label_7F300368;
    case 0x7F30036Cu: goto label_7F30036C;
    case 0x7F300370u: goto label_7F300370;
    case 0x7F300374u: goto label_7F300374;
    case 0x7F300378u: goto label_7F300378;
    case 0x7F30037Cu: goto label_7F30037C;
    case 0x7F300380u: goto label_7F300380;
    case 0x7F300384u: goto label_7F300384;
    case 0x7F300388u: goto label_7F300388;
    case 0x7F30038Cu: goto label_7F30038C;
    case 0x7F300390u: goto label_7F300390;
    case 0x7F300394u: goto label_7F300394;
    case 0x7F300398u: goto label_7F300398;
    case 0x7F30039Cu: goto label_7F30039C;
    case 0x7F3003A0u: goto label_7F3003A0;
    case 0x7F3003A4u: goto label_7F3003A4;
    case 0x7F3003A8u: goto label_7F3003A8;
    case 0x7F3003ACu: goto label_7F3003AC;
    case 0x7F3003B0u: goto label_7F3003B0;
    case 0x7F3003B4u: goto label_7F3003B4;
    case 0x7F3003B8u: goto label_7F3003B8;
    case 0x7F3003BCu: goto label_7F3003BC;
    case 0x7F3003C0u: goto label_7F3003C0;
    case 0x7F3003C4u: goto label_7F3003C4;
    case 0x7F3003C8u: goto label_7F3003C8;
    case 0x7F3003CCu: goto label_7F3003CC;
    case 0x7F3003D0u: goto label_7F3003D0;
    case 0x7F3003D4u: goto label_7F3003D4;
    case 0x7F3003D8u: goto label_7F3003D8;
    case 0x7F3003DCu: goto label_7F3003DC;
    case 0x7F3003E0u: goto label_7F3003E0;
    case 0x7F3003E4u: goto label_7F3003E4;
    case 0x7F3003E8u: goto label_7F3003E8;
    case 0x7F3003ECu: goto label_7F3003EC;
    case 0x7F3003F0u: goto label_7F3003F0;
    case 0x7F3003F4u: goto label_7F3003F4;
    case 0x7F3003F8u: goto label_7F3003F8;
    case 0x7F3003FCu: goto label_7F3003FC;
    case 0x7F300400u: goto label_7F300400;
    case 0x7F300404u: goto label_7F300404;
    case 0x7F300408u: goto label_7F300408;
    case 0x7F30040Cu: goto label_7F30040C;
    case 0x7F300410u: goto label_7F300410;
    case 0x7F300414u: goto label_7F300414;
    case 0x7F300418u: goto label_7F300418;
    case 0x7F30041Cu: goto label_7F30041C;
    case 0x7F300420u: goto label_7F300420;
    case 0x7F300424u: goto label_7F300424;
    case 0x7F300428u: goto label_7F300428;
    case 0x7F30042Cu: goto label_7F30042C;
    case 0x7F300430u: goto label_7F300430;
    case 0x7F300434u: goto label_7F300434;
    case 0x7F300438u: goto label_7F300438;
    case 0x7F30043Cu: goto label_7F30043C;
    case 0x7F300440u: goto label_7F300440;
    case 0x7F300444u: goto label_7F300444;
    case 0x7F300448u: goto label_7F300448;
    case 0x7F30044Cu: goto label_7F30044C;
    case 0x7F300450u: goto label_7F300450;
    case 0x7F300454u: goto label_7F300454;
    case 0x7F300458u: goto label_7F300458;
    case 0x7F30045Cu: goto label_7F30045C;
    case 0x7F300460u: goto label_7F300460;
    case 0x7F300464u: goto label_7F300464;
    case 0x7F300468u: goto label_7F300468;
    case 0x7F30046Cu: goto label_7F30046C;
    case 0x7F300470u: goto label_7F300470;
    case 0x7F300474u: goto label_7F300474;
    case 0x7F300478u: goto label_7F300478;
    case 0x7F30047Cu: goto label_7F30047C;
    case 0x7F300480u: goto label_7F300480;
    case 0x7F300484u: goto label_7F300484;
    case 0x7F300488u: goto label_7F300488;
    case 0x7F30048Cu: goto label_7F30048C;
    case 0x7F300490u: goto label_7F300490;
    case 0x7F300494u: goto label_7F300494;
    case 0x7F300498u: goto label_7F300498;
    case 0x7F30049Cu: goto label_7F30049C;
    case 0x7F3004A0u: goto label_7F3004A0;
    case 0x7F3004A4u: goto label_7F3004A4;
    case 0x7F3004A8u: goto label_7F3004A8;
    case 0x7F3004ACu: goto label_7F3004AC;
    case 0x7F3004B0u: goto label_7F3004B0;
    case 0x7F3004B4u: goto label_7F3004B4;
    case 0x7F3004B8u: goto label_7F3004B8;
    case 0x7F3004BCu: goto label_7F3004BC;
    case 0x7F3004C0u: goto label_7F3004C0;
    case 0x7F3004C4u: goto label_7F3004C4;
    case 0x7F3004C8u: goto label_7F3004C8;
    case 0x7F3004CCu: goto label_7F3004CC;
    case 0x7F3004D0u: goto label_7F3004D0;
    case 0x7F3004D4u: goto label_7F3004D4;
    case 0x7F3004D8u: goto label_7F3004D8;
    case 0x7F3004DCu: goto label_7F3004DC;
    case 0x7F3004E0u: goto label_7F3004E0;
    case 0x7F3004E4u: goto label_7F3004E4;
    case 0x7F3004E8u: goto label_7F3004E8;
    case 0x7F3004ECu: goto label_7F3004EC;
    case 0x7F3004F0u: goto label_7F3004F0;
    case 0x7F3004F4u: goto label_7F3004F4;
    case 0x7F3004F8u: goto label_7F3004F8;
    case 0x7F3004FCu: goto label_7F3004FC;
    case 0x7F300500u: goto label_7F300500;
    case 0x7F300504u: goto label_7F300504;
    case 0x7F300508u: goto label_7F300508;
    case 0x7F30050Cu: goto label_7F30050C;
    case 0x7F300510u: goto label_7F300510;
    case 0x7F300514u: goto label_7F300514;
    case 0x7F300518u: goto label_7F300518;
    case 0x7F30051Cu: goto label_7F30051C;
    case 0x7F300520u: goto label_7F300520;
    case 0x7F300524u: goto label_7F300524;
    case 0x7F300528u: goto label_7F300528;
    case 0x7F30052Cu: goto label_7F30052C;
    case 0x7F300530u: goto label_7F300530;
    case 0x7F300534u: goto label_7F300534;
    case 0x7F300538u: goto label_7F300538;
    case 0x7F30053Cu: goto label_7F30053C;
    case 0x7F300540u: goto label_7F300540;
    case 0x7F300544u: goto label_7F300544;
    case 0x7F300548u: goto label_7F300548;
    case 0x7F30054Cu: goto label_7F30054C;
    case 0x7F300550u: goto label_7F300550;
    case 0x7F300554u: goto label_7F300554;
    case 0x7F300558u: goto label_7F300558;
    case 0x7F30055Cu: goto label_7F30055C;
    case 0x7F300560u: goto label_7F300560;
    case 0x7F300564u: goto label_7F300564;
    case 0x7F300568u: goto label_7F300568;
    case 0x7F30056Cu: goto label_7F30056C;
    case 0x7F300570u: goto label_7F300570;
    case 0x7F300574u: goto label_7F300574;
    case 0x7F300578u: goto label_7F300578;
    case 0x7F30057Cu: goto label_7F30057C;
    case 0x7F300580u: goto label_7F300580;
    case 0x7F300584u: goto label_7F300584;
    case 0x7F300588u: goto label_7F300588;
    case 0x7F30058Cu: goto label_7F30058C;
    case 0x7F300590u: goto label_7F300590;
    case 0x7F300594u: goto label_7F300594;
    case 0x7F300598u: goto label_7F300598;
    case 0x7F30059Cu: goto label_7F30059C;
    case 0x7F3005A0u: goto label_7F3005A0;
    case 0x7F3005A4u: goto label_7F3005A4;
    case 0x7F3005A8u: goto label_7F3005A8;
    case 0x7F3005ACu: goto label_7F3005AC;
    case 0x7F3005B0u: goto label_7F3005B0;
    case 0x7F3005B4u: goto label_7F3005B4;
    case 0x7F3005B8u: goto label_7F3005B8;
    case 0x7F3005BCu: goto label_7F3005BC;
    case 0x7F3005C0u: goto label_7F3005C0;
    case 0x7F3005C4u: goto label_7F3005C4;
    case 0x7F3005C8u: goto label_7F3005C8;
    case 0x7F3005CCu: goto label_7F3005CC;
    case 0x7F3005D0u: goto label_7F3005D0;
    case 0x7F3005D4u: goto label_7F3005D4;
    case 0x7F3005D8u: goto label_7F3005D8;
    case 0x7F3005DCu: goto label_7F3005DC;
    case 0x7F3005E0u: goto label_7F3005E0;
    case 0x7F3005E4u: goto label_7F3005E4;
    case 0x7F3005E8u: goto label_7F3005E8;
    case 0x7F3005ECu: goto label_7F3005EC;
    case 0x7F3005F0u: goto label_7F3005F0;
    case 0x7F3005F4u: goto label_7F3005F4;
    case 0x7F3005F8u: goto label_7F3005F8;
    case 0x7F3005FCu: goto label_7F3005FC;
    case 0x7F300600u: goto label_7F300600;
    case 0x7F300604u: goto label_7F300604;
    case 0x7F300608u: goto label_7F300608;
    case 0x7F30060Cu: goto label_7F30060C;
    case 0x7F300610u: goto label_7F300610;
    case 0x7F300614u: goto label_7F300614;
    case 0x7F300618u: goto label_7F300618;
    case 0x7F30061Cu: goto label_7F30061C;
    case 0x7F300620u: goto label_7F300620;
    case 0x7F300624u: goto label_7F300624;
    case 0x7F300628u: goto label_7F300628;
    case 0x7F30062Cu: goto label_7F30062C;
    case 0x7F300630u: goto label_7F300630;
    case 0x7F300634u: goto label_7F300634;
    case 0x7F300638u: goto label_7F300638;
    case 0x7F30063Cu: goto label_7F30063C;
    case 0x7F300640u: goto label_7F300640;
    case 0x7F300644u: goto label_7F300644;
    case 0x7F300648u: goto label_7F300648;
    case 0x7F30064Cu: goto label_7F30064C;
    case 0x7F300650u: goto label_7F300650;
    case 0x7F300654u: goto label_7F300654;
    case 0x7F300658u: goto label_7F300658;
    case 0x7F30065Cu: goto label_7F30065C;
    case 0x7F300660u: goto label_7F300660;
    case 0x7F300664u: goto label_7F300664;
    case 0x7F300668u: goto label_7F300668;
    case 0x7F30066Cu: goto label_7F30066C;
    case 0x7F300670u: goto label_7F300670;
    case 0x7F300674u: goto label_7F300674;
    case 0x7F300678u: goto label_7F300678;
    case 0x7F30067Cu: goto label_7F30067C;
    case 0x7F300680u: goto label_7F300680;
    case 0x7F300684u: goto label_7F300684;
    case 0x7F300688u: goto label_7F300688;
    case 0x7F30068Cu: goto label_7F30068C;
    case 0x7F300690u: goto label_7F300690;
    case 0x7F300694u: goto label_7F300694;
    case 0x7F300698u: goto label_7F300698;
    case 0x7F30069Cu: goto label_7F30069C;
    case 0x7F3006A0u: goto label_7F3006A0;
    case 0x7F3006A4u: goto label_7F3006A4;
    case 0x7F3006A8u: goto label_7F3006A8;
    case 0x7F3006ACu: goto label_7F3006AC;
    case 0x7F3006B0u: goto label_7F3006B0;
    case 0x7F3006B4u: goto label_7F3006B4;
    case 0x7F3006B8u: goto label_7F3006B8;
    case 0x7F3006BCu: goto label_7F3006BC;
    case 0x7F3006C0u: goto label_7F3006C0;
    case 0x7F3006C4u: goto label_7F3006C4;
    case 0x7F3006C8u: goto label_7F3006C8;
    case 0x7F3006CCu: goto label_7F3006CC;
    case 0x7F3006D0u: goto label_7F3006D0;
    case 0x7F3006D4u: goto label_7F3006D4;
    case 0x7F3006D8u: goto label_7F3006D8;
    case 0x7F3006DCu: goto label_7F3006DC;
    case 0x7F3006E0u: goto label_7F3006E0;
    case 0x7F3006E4u: goto label_7F3006E4;
    case 0x7F3006E8u: goto label_7F3006E8;
    case 0x7F3006ECu: goto label_7F3006EC;
    case 0x7F3006F0u: goto label_7F3006F0;
    case 0x7F3006F4u: goto label_7F3006F4;
    case 0x7F3006F8u: goto label_7F3006F8;
    case 0x7F3006FCu: goto label_7F3006FC;
    case 0x7F300700u: goto label_7F300700;
    case 0x7F300704u: goto label_7F300704;
    case 0x7F300708u: goto label_7F300708;
    case 0x7F30070Cu: goto label_7F30070C;
    case 0x7F300710u: goto label_7F300710;
    case 0x7F300714u: goto label_7F300714;
    case 0x7F300718u: goto label_7F300718;
    case 0x7F30071Cu: goto label_7F30071C;
    case 0x7F300720u: goto label_7F300720;
    case 0x7F300724u: goto label_7F300724;
    case 0x7F300728u: goto label_7F300728;
    case 0x7F30072Cu: goto label_7F30072C;
    case 0x7F300730u: goto label_7F300730;
    case 0x7F300734u: goto label_7F300734;
    case 0x7F300738u: goto label_7F300738;
    case 0x7F30073Cu: goto label_7F30073C;
    case 0x7F300740u: goto label_7F300740;
    case 0x7F300744u: goto label_7F300744;
    case 0x7F300748u: goto label_7F300748;
    case 0x7F30074Cu: goto label_7F30074C;
    case 0x7F300750u: goto label_7F300750;
    case 0x7F300754u: goto label_7F300754;
    case 0x7F300758u: goto label_7F300758;
    case 0x7F30075Cu: goto label_7F30075C;
    case 0x7F300760u: goto label_7F300760;
    case 0x7F300764u: goto label_7F300764;
    case 0x7F300768u: goto label_7F300768;
    case 0x7F30076Cu: goto label_7F30076C;
    case 0x7F300770u: goto label_7F300770;
    case 0x7F300774u: goto label_7F300774;
    case 0x7F300778u: goto label_7F300778;
    case 0x7F30077Cu: goto label_7F30077C;
    case 0x7F300780u: goto label_7F300780;
    case 0x7F300784u: goto label_7F300784;
    case 0x7F300788u: goto label_7F300788;
    case 0x7F30078Cu: goto label_7F30078C;
    case 0x7F300790u: goto label_7F300790;
    case 0x7F300794u: goto label_7F300794;
    case 0x7F300798u: goto label_7F300798;
    case 0x7F30079Cu: goto label_7F30079C;
    case 0x7F3007A0u: goto label_7F3007A0;
    case 0x7F3007A4u: goto label_7F3007A4;
    case 0x7F3007A8u: goto label_7F3007A8;
    case 0x7F3007ACu: goto label_7F3007AC;
    case 0x7F3007B0u: goto label_7F3007B0;
    case 0x7F3007B4u: goto label_7F3007B4;
    case 0x7F3007B8u: goto label_7F3007B8;
    case 0x7F3007BCu: goto label_7F3007BC;
    case 0x7F3007C0u: goto label_7F3007C0;
    case 0x7F3007C4u: goto label_7F3007C4;
    case 0x7F3007C8u: goto label_7F3007C8;
    case 0x7F3007CCu: goto label_7F3007CC;
    case 0x7F3007D0u: goto label_7F3007D0;
    case 0x7F3007D4u: goto label_7F3007D4;
    case 0x7F3007D8u: goto label_7F3007D8;
    case 0x7F3007DCu: goto label_7F3007DC;
    case 0x7F3007E0u: goto label_7F3007E0;
    case 0x7F3007E4u: goto label_7F3007E4;
    case 0x7F3007E8u: goto label_7F3007E8;
    case 0x7F3007ECu: goto label_7F3007EC;
    case 0x7F3007F0u: goto label_7F3007F0;
    case 0x7F3007F4u: goto label_7F3007F4;
    case 0x7F3007F8u: goto label_7F3007F8;
    case 0x7F3007FCu: goto label_7F3007FC;
    case 0x7F300800u: goto label_7F300800;
    case 0x7F300804u: goto label_7F300804;
    case 0x7F300808u: goto label_7F300808;
    case 0x7F30080Cu: goto label_7F30080C;
    case 0x7F300810u: goto label_7F300810;
    case 0x7F300814u: goto label_7F300814;
    case 0x7F300818u: goto label_7F300818;
    case 0x7F30081Cu: goto label_7F30081C;
    case 0x7F300820u: goto label_7F300820;
    case 0x7F300824u: goto label_7F300824;
    case 0x7F300828u: goto label_7F300828;
    case 0x7F30082Cu: goto label_7F30082C;
    case 0x7F300830u: goto label_7F300830;
    case 0x7F300834u: goto label_7F300834;
    case 0x7F300838u: goto label_7F300838;
    case 0x7F30083Cu: goto label_7F30083C;
    case 0x7F300840u: goto label_7F300840;
    case 0x7F300844u: goto label_7F300844;
    case 0x7F300848u: goto label_7F300848;
    case 0x7F30084Cu: goto label_7F30084C;
    case 0x7F300850u: goto label_7F300850;
    case 0x7F300854u: goto label_7F300854;
    case 0x7F300858u: goto label_7F300858;
    case 0x7F30085Cu: goto label_7F30085C;
    case 0x7F300860u: goto label_7F300860;
    case 0x7F300864u: goto label_7F300864;
    case 0x7F300868u: goto label_7F300868;
    case 0x7F30086Cu: goto label_7F30086C;
    case 0x7F300870u: goto label_7F300870;
    case 0x7F300874u: goto label_7F300874;
    case 0x7F300878u: goto label_7F300878;
    case 0x7F30087Cu: goto label_7F30087C;
    case 0x7F300880u: goto label_7F300880;
    case 0x7F300884u: goto label_7F300884;
    case 0x7F300888u: goto label_7F300888;
    case 0x7F30088Cu: goto label_7F30088C;
    case 0x7F300890u: goto label_7F300890;
    case 0x7F300894u: goto label_7F300894;
    case 0x7F300898u: goto label_7F300898;
    case 0x7F30089Cu: goto label_7F30089C;
    case 0x7F3008A0u: goto label_7F3008A0;
    case 0x7F3008A4u: goto label_7F3008A4;
    case 0x7F3008A8u: goto label_7F3008A8;
    case 0x7F3008ACu: goto label_7F3008AC;
    case 0x7F3008B0u: goto label_7F3008B0;
    case 0x7F3008B4u: goto label_7F3008B4;
    case 0x7F3008B8u: goto label_7F3008B8;
    case 0x7F3008BCu: goto label_7F3008BC;
    case 0x7F3008C0u: goto label_7F3008C0;
    case 0x7F3008C4u: goto label_7F3008C4;
    case 0x7F3008C8u: goto label_7F3008C8;
    case 0x7F3008CCu: goto label_7F3008CC;
    case 0x7F3008D0u: goto label_7F3008D0;
    case 0x7F3008D4u: goto label_7F3008D4;
    case 0x7F3008D8u: goto label_7F3008D8;
    case 0x7F3008DCu: goto label_7F3008DC;
    case 0x7F3008E0u: goto label_7F3008E0;
    case 0x7F3008E4u: goto label_7F3008E4;
    case 0x7F3008E8u: goto label_7F3008E8;
    case 0x7F3008ECu: goto label_7F3008EC;
    case 0x7F3008F0u: goto label_7F3008F0;
    case 0x7F3008F4u: goto label_7F3008F4;
    case 0x7F3008F8u: goto label_7F3008F8;
    case 0x7F3008FCu: goto label_7F3008FC;
    case 0x7F300900u: goto label_7F300900;
    case 0x7F300904u: goto label_7F300904;
    case 0x7F300908u: goto label_7F300908;
    case 0x7F30090Cu: goto label_7F30090C;
    case 0x7F300910u: goto label_7F300910;
    case 0x7F300914u: goto label_7F300914;
    case 0x7F300918u: goto label_7F300918;
    case 0x7F30091Cu: goto label_7F30091C;
    case 0x7F300920u: goto label_7F300920;
    case 0x7F300924u: goto label_7F300924;
    case 0x7F300928u: goto label_7F300928;
    case 0x7F30092Cu: goto label_7F30092C;
    case 0x7F300930u: goto label_7F300930;
    case 0x7F300934u: goto label_7F300934;
    case 0x7F300938u: goto label_7F300938;
    case 0x7F30093Cu: goto label_7F30093C;
    case 0x7F300940u: goto label_7F300940;
    case 0x7F300944u: goto label_7F300944;
    case 0x7F300948u: goto label_7F300948;
    case 0x7F30094Cu: goto label_7F30094C;
    case 0x7F300950u: goto label_7F300950;
    case 0x7F300954u: goto label_7F300954;
    case 0x7F300958u: goto label_7F300958;
    case 0x7F30095Cu: goto label_7F30095C;
    case 0x7F300960u: goto label_7F300960;
    case 0x7F300964u: goto label_7F300964;
    case 0x7F300968u: goto label_7F300968;
    case 0x7F30096Cu: goto label_7F30096C;
    case 0x7F300970u: goto label_7F300970;
    case 0x7F300974u: goto label_7F300974;
    case 0x7F300978u: goto label_7F300978;
    case 0x7F30097Cu: goto label_7F30097C;
    case 0x7F300980u: goto label_7F300980;
    case 0x7F300984u: goto label_7F300984;
    case 0x7F300988u: goto label_7F300988;
    case 0x7F30098Cu: goto label_7F30098C;
    case 0x7F300990u: goto label_7F300990;
    case 0x7F300994u: goto label_7F300994;
    case 0x7F300998u: goto label_7F300998;
    case 0x7F30099Cu: goto label_7F30099C;
    case 0x7F3009A0u: goto label_7F3009A0;
    case 0x7F3009A4u: goto label_7F3009A4;
    case 0x7F3009A8u: goto label_7F3009A8;
    case 0x7F3009ACu: goto label_7F3009AC;
    case 0x7F3009B0u: goto label_7F3009B0;
    case 0x7F3009B4u: goto label_7F3009B4;
    case 0x7F3009B8u: goto label_7F3009B8;
    case 0x7F3009BCu: goto label_7F3009BC;
    case 0x7F3009C0u: goto label_7F3009C0;
    case 0x7F3009C4u: goto label_7F3009C4;
    case 0x7F3009C8u: goto label_7F3009C8;
    case 0x7F3009CCu: goto label_7F3009CC;
    case 0x7F3009D0u: goto label_7F3009D0;
    case 0x7F3009D4u: goto label_7F3009D4;
    case 0x7F3009D8u: goto label_7F3009D8;
    case 0x7F3009DCu: goto label_7F3009DC;
    case 0x7F3009E0u: goto label_7F3009E0;
    case 0x7F3009E4u: goto label_7F3009E4;
    case 0x7F3009E8u: goto label_7F3009E8;
    case 0x7F3009ECu: goto label_7F3009EC;
    case 0x7F3009F0u: goto label_7F3009F0;
    case 0x7F3009F4u: goto label_7F3009F4;
    case 0x7F3009F8u: goto label_7F3009F8;
    case 0x7F3009FCu: goto label_7F3009FC;
    case 0x7F300A00u: goto label_7F300A00;
    case 0x7F300A04u: goto label_7F300A04;
    case 0x7F300A08u: goto label_7F300A08;
    case 0x7F300A0Cu: goto label_7F300A0C;
    case 0x7F300A10u: goto label_7F300A10;
    case 0x7F300A14u: goto label_7F300A14;
    case 0x7F300A18u: goto label_7F300A18;
    case 0x7F300A1Cu: goto label_7F300A1C;
    case 0x7F300A20u: goto label_7F300A20;
    case 0x7F300A24u: goto label_7F300A24;
    case 0x7F300A28u: goto label_7F300A28;
    case 0x7F300A2Cu: goto label_7F300A2C;
    case 0x7F300A30u: goto label_7F300A30;
    case 0x7F300A34u: goto label_7F300A34;
    case 0x7F300A38u: goto label_7F300A38;
    case 0x7F300A3Cu: goto label_7F300A3C;
    case 0x7F300A40u: goto label_7F300A40;
    case 0x7F300A44u: goto label_7F300A44;
    case 0x7F300A48u: goto label_7F300A48;
    case 0x7F300A4Cu: goto label_7F300A4C;
    case 0x7F300A50u: goto label_7F300A50;
    case 0x7F300A54u: goto label_7F300A54;
    case 0x7F300A58u: goto label_7F300A58;
    case 0x7F300A5Cu: goto label_7F300A5C;
    case 0x7F300A60u: goto label_7F300A60;
    case 0x7F300A64u: goto label_7F300A64;
    case 0x7F300A68u: goto label_7F300A68;
    case 0x7F300A6Cu: goto label_7F300A6C;
    case 0x7F300A70u: goto label_7F300A70;
    case 0x7F300A74u: goto label_7F300A74;
    case 0x7F300A78u: goto label_7F300A78;
    case 0x7F300A7Cu: goto label_7F300A7C;
    case 0x7F300A80u: goto label_7F300A80;
    case 0x7F300A84u: goto label_7F300A84;
    case 0x7F300A88u: goto label_7F300A88;
    case 0x7F300A8Cu: goto label_7F300A8C;
    case 0x7F300A90u: goto label_7F300A90;
    case 0x7F300A94u: goto label_7F300A94;
    case 0x7F300A98u: goto label_7F300A98;
    case 0x7F300A9Cu: goto label_7F300A9C;
    case 0x7F300AA0u: goto label_7F300AA0;
    case 0x7F300AA4u: goto label_7F300AA4;
    case 0x7F300AA8u: goto label_7F300AA8;
    case 0x7F300AACu: goto label_7F300AAC;
    case 0x7F300AB0u: goto label_7F300AB0;
    case 0x7F300AB4u: goto label_7F300AB4;
    case 0x7F300AB8u: goto label_7F300AB8;
    case 0x7F300ABCu: goto label_7F300ABC;
    case 0x7F300AC0u: goto label_7F300AC0;
    case 0x7F300AC4u: goto label_7F300AC4;
    case 0x7F300AC8u: goto label_7F300AC8;
    case 0x7F300ACCu: goto label_7F300ACC;
    case 0x7F300AD0u: goto label_7F300AD0;
    case 0x7F300AD4u: goto label_7F300AD4;
    case 0x7F300AD8u: goto label_7F300AD8;
    case 0x7F300ADCu: goto label_7F300ADC;
    case 0x7F300AE0u: goto label_7F300AE0;
    case 0x7F300AE4u: goto label_7F300AE4;
    case 0x7F300AE8u: goto label_7F300AE8;
    case 0x7F300AECu: goto label_7F300AEC;
    case 0x7F300AF0u: goto label_7F300AF0;
    case 0x7F300AF4u: goto label_7F300AF4;
    case 0x7F300AF8u: goto label_7F300AF8;
    case 0x7F300AFCu: goto label_7F300AFC;
    case 0x7F300B00u: goto label_7F300B00;
    case 0x7F300B04u: goto label_7F300B04;
    case 0x7F300B08u: goto label_7F300B08;
    case 0x7F300B0Cu: goto label_7F300B0C;
    case 0x7F300B10u: goto label_7F300B10;
    case 0x7F300B14u: goto label_7F300B14;
    case 0x7F300B18u: goto label_7F300B18;
    case 0x7F300B1Cu: goto label_7F300B1C;
    case 0x7F300B20u: goto label_7F300B20;
    case 0x7F300B24u: goto label_7F300B24;
    case 0x7F300B28u: goto label_7F300B28;
    case 0x7F300B2Cu: goto label_7F300B2C;
    case 0x7F300B30u: goto label_7F300B30;
    case 0x7F300B34u: goto label_7F300B34;
    case 0x7F300B38u: goto label_7F300B38;
    case 0x7F300B3Cu: goto label_7F300B3C;
    case 0x7F300B40u: goto label_7F300B40;
    case 0x7F300B44u: goto label_7F300B44;
    case 0x7F300B48u: goto label_7F300B48;
    case 0x7F300B4Cu: goto label_7F300B4C;
    case 0x7F300B50u: goto label_7F300B50;
    case 0x7F300B54u: goto label_7F300B54;
    case 0x7F300B58u: goto label_7F300B58;
    case 0x7F300B5Cu: goto label_7F300B5C;
    case 0x7F300B60u: goto label_7F300B60;
    case 0x7F300B64u: goto label_7F300B64;
    case 0x7F300B68u: goto label_7F300B68;
    case 0x7F300B6Cu: goto label_7F300B6C;
    case 0x7F300B70u: goto label_7F300B70;
    case 0x7F300B74u: goto label_7F300B74;
    case 0x7F300B78u: goto label_7F300B78;
    case 0x7F300B7Cu: goto label_7F300B7C;
    case 0x7F300B80u: goto label_7F300B80;
    case 0x7F300B84u: goto label_7F300B84;
    case 0x7F300B88u: goto label_7F300B88;
    case 0x7F300B8Cu: goto label_7F300B8C;
    case 0x7F300B90u: goto label_7F300B90;
    case 0x7F300B94u: goto label_7F300B94;
    case 0x7F300B98u: goto label_7F300B98;
    case 0x7F300B9Cu: goto label_7F300B9C;
    case 0x7F300BA0u: goto label_7F300BA0;
    case 0x7F300BA4u: goto label_7F300BA4;
    case 0x7F300BA8u: goto label_7F300BA8;
    case 0x7F300BACu: goto label_7F300BAC;
    case 0x7F300BB0u: goto label_7F300BB0;
    case 0x7F300BB4u: goto label_7F300BB4;
    case 0x7F300BB8u: goto label_7F300BB8;
    case 0x7F300BBCu: goto label_7F300BBC;
    case 0x7F300BC0u: goto label_7F300BC0;
    case 0x7F300BC4u: goto label_7F300BC4;
    case 0x7F300BC8u: goto label_7F300BC8;
    case 0x7F300BCCu: goto label_7F300BCC;
    case 0x7F300BD0u: goto label_7F300BD0;
    case 0x7F300BD4u: goto label_7F300BD4;
    case 0x7F300BD8u: goto label_7F300BD8;
    case 0x7F300BDCu: goto label_7F300BDC;
    case 0x7F300BE0u: goto label_7F300BE0;
    case 0x7F300BE4u: goto label_7F300BE4;
    case 0x7F300BE8u: goto label_7F300BE8;
    case 0x7F300BECu: goto label_7F300BEC;
    case 0x7F300BF0u: goto label_7F300BF0;
    case 0x7F300BF4u: goto label_7F300BF4;
    case 0x7F300BF8u: goto label_7F300BF8;
    case 0x7F300BFCu: goto label_7F300BFC;
    case 0x7F300C00u: goto label_7F300C00;
    case 0x7F300C04u: goto label_7F300C04;
    case 0x7F300C08u: goto label_7F300C08;
    case 0x7F300C0Cu: goto label_7F300C0C;
    case 0x7F300C10u: goto label_7F300C10;
    case 0x7F300C14u: goto label_7F300C14;
    case 0x7F300C18u: goto label_7F300C18;
    case 0x7F300C1Cu: goto label_7F300C1C;
    case 0x7F300C20u: goto label_7F300C20;
    case 0x7F300C24u: goto label_7F300C24;
    case 0x7F300C28u: goto label_7F300C28;
    case 0x7F300C2Cu: goto label_7F300C2C;
    case 0x7F300C30u: goto label_7F300C30;
    case 0x7F300C34u: goto label_7F300C34;
    case 0x7F300C38u: goto label_7F300C38;
    case 0x7F300C3Cu: goto label_7F300C3C;
    case 0x7F300C40u: goto label_7F300C40;
    case 0x7F300C44u: goto label_7F300C44;
    case 0x7F300C48u: goto label_7F300C48;
    case 0x7F300C4Cu: goto label_7F300C4C;
    case 0x7F300C50u: goto label_7F300C50;
    case 0x7F300C54u: goto label_7F300C54;
    case 0x7F300C58u: goto label_7F300C58;
    case 0x7F300C5Cu: goto label_7F300C5C;
    case 0x7F300C60u: goto label_7F300C60;
    case 0x7F300C64u: goto label_7F300C64;
    case 0x7F300C68u: goto label_7F300C68;
    case 0x7F300C6Cu: goto label_7F300C6C;
    case 0x7F300C70u: goto label_7F300C70;
    case 0x7F300C74u: goto label_7F300C74;
    case 0x7F300C78u: goto label_7F300C78;
    case 0x7F300C7Cu: goto label_7F300C7C;
    case 0x7F300C80u: goto label_7F300C80;
    case 0x7F300C84u: goto label_7F300C84;
    case 0x7F300C88u: goto label_7F300C88;
    case 0x7F300C8Cu: goto label_7F300C8C;
    case 0x7F300C90u: goto label_7F300C90;
    case 0x7F300C94u: goto label_7F300C94;
    case 0x7F300C98u: goto label_7F300C98;
    case 0x7F300C9Cu: goto label_7F300C9C;
    case 0x7F300CA0u: goto label_7F300CA0;
    case 0x7F300CA4u: goto label_7F300CA4;
    case 0x7F300CA8u: goto label_7F300CA8;
    case 0x7F300CACu: goto label_7F300CAC;
    case 0x7F300CB0u: goto label_7F300CB0;
    case 0x7F300CB4u: goto label_7F300CB4;
    case 0x7F300CB8u: goto label_7F300CB8;
    case 0x7F300CBCu: goto label_7F300CBC;
    case 0x7F300CC0u: goto label_7F300CC0;
    case 0x7F300CC4u: goto label_7F300CC4;
    case 0x7F300CC8u: goto label_7F300CC8;
    case 0x7F300CCCu: goto label_7F300CCC;
    case 0x7F300CD0u: goto label_7F300CD0;
    case 0x7F300CD4u: goto label_7F300CD4;
    case 0x7F300CD8u: goto label_7F300CD8;
    case 0x7F300CDCu: goto label_7F300CDC;
    case 0x7F300CE0u: goto label_7F300CE0;
    case 0x7F300CE4u: goto label_7F300CE4;
    case 0x7F300CE8u: goto label_7F300CE8;
    case 0x7F300CECu: goto label_7F300CEC;
    case 0x7F300CF0u: goto label_7F300CF0;
    case 0x7F300CF4u: goto label_7F300CF4;
    case 0x7F300CF8u: goto label_7F300CF8;
    case 0x7F300CFCu: goto label_7F300CFC;
    case 0x7F300D00u: goto label_7F300D00;
    case 0x7F300D04u: goto label_7F300D04;
    case 0x7F300D08u: goto label_7F300D08;
    case 0x7F300D0Cu: goto label_7F300D0C;
    case 0x7F300D10u: goto label_7F300D10;
    case 0x7F300D14u: goto label_7F300D14;
    case 0x7F300D18u: goto label_7F300D18;
    case 0x7F300D1Cu: goto label_7F300D1C;
    case 0x7F300D20u: goto label_7F300D20;
    case 0x7F300D24u: goto label_7F300D24;
    case 0x7F300D28u: goto label_7F300D28;
    case 0x7F300D2Cu: goto label_7F300D2C;
    case 0x7F300D30u: goto label_7F300D30;
    case 0x7F300D34u: goto label_7F300D34;
    case 0x7F300D38u: goto label_7F300D38;
    case 0x7F300D3Cu: goto label_7F300D3C;
    case 0x7F300D40u: goto label_7F300D40;
    case 0x7F300D44u: goto label_7F300D44;
    case 0x7F300D48u: goto label_7F300D48;
    case 0x7F300D4Cu: goto label_7F300D4C;
    case 0x7F300D50u: goto label_7F300D50;
    case 0x7F300D54u: goto label_7F300D54;
    case 0x7F300D58u: goto label_7F300D58;
    case 0x7F300D5Cu: goto label_7F300D5C;
    case 0x7F300D60u: goto label_7F300D60;
    case 0x7F300D64u: goto label_7F300D64;
    case 0x7F300D68u: goto label_7F300D68;
    case 0x7F300D6Cu: goto label_7F300D6C;
    case 0x7F300D70u: goto label_7F300D70;
    case 0x7F300D74u: goto label_7F300D74;
    case 0x7F300D78u: goto label_7F300D78;
    case 0x7F300D7Cu: goto label_7F300D7C;
    case 0x7F300D80u: goto label_7F300D80;
    case 0x7F300D84u: goto label_7F300D84;
    case 0x7F300D88u: goto label_7F300D88;
    case 0x7F300D8Cu: goto label_7F300D8C;
    case 0x7F300D90u: goto label_7F300D90;
    case 0x7F300D94u: goto label_7F300D94;
    case 0x7F300D98u: goto label_7F300D98;
    case 0x7F300D9Cu: goto label_7F300D9C;
    case 0x7F300DA0u: goto label_7F300DA0;
    case 0x7F300DA4u: goto label_7F300DA4;
    case 0x7F300DA8u: goto label_7F300DA8;
    case 0x7F300DACu: goto label_7F300DAC;
    case 0x7F300DB0u: goto label_7F300DB0;
    case 0x7F300DB4u: goto label_7F300DB4;
    case 0x7F300DB8u: goto label_7F300DB8;
    case 0x7F300DBCu: goto label_7F300DBC;
    case 0x7F300DC0u: goto label_7F300DC0;
    case 0x7F300DC4u: goto label_7F300DC4;
    case 0x7F300DC8u: goto label_7F300DC8;
    case 0x7F300DCCu: goto label_7F300DCC;
    case 0x7F300DD0u: goto label_7F300DD0;
    case 0x7F300DD4u: goto label_7F300DD4;
    case 0x7F300DD8u: goto label_7F300DD8;
    case 0x7F300DDCu: goto label_7F300DDC;
    case 0x7F300DE0u: goto label_7F300DE0;
    case 0x7F300DE4u: goto label_7F300DE4;
    case 0x7F300DE8u: goto label_7F300DE8;
    case 0x7F300DECu: goto label_7F300DEC;
    case 0x7F300DF0u: goto label_7F300DF0;
    case 0x7F300DF4u: goto label_7F300DF4;
    case 0x7F300DF8u: goto label_7F300DF8;
    case 0x7F300DFCu: goto label_7F300DFC;
    case 0x7F300E00u: goto label_7F300E00;
    case 0x7F300E04u: goto label_7F300E04;
    case 0x7F300E08u: goto label_7F300E08;
    case 0x7F300E0Cu: goto label_7F300E0C;
    case 0x7F300E10u: goto label_7F300E10;
    case 0x7F300E14u: goto label_7F300E14;
    case 0x7F300E18u: goto label_7F300E18;
    case 0x7F300E1Cu: goto label_7F300E1C;
    case 0x7F300E20u: goto label_7F300E20;
    case 0x7F300E24u: goto label_7F300E24;
    case 0x7F300E28u: goto label_7F300E28;
    case 0x7F300E2Cu: goto label_7F300E2C;
    case 0x7F300E30u: goto label_7F300E30;
    case 0x7F300E34u: goto label_7F300E34;
    case 0x7F300E38u: goto label_7F300E38;
    case 0x7F300E3Cu: goto label_7F300E3C;
    case 0x7F300E40u: goto label_7F300E40;
    case 0x7F300E44u: goto label_7F300E44;
    case 0x7F300E48u: goto label_7F300E48;
    case 0x7F300E4Cu: goto label_7F300E4C;
    case 0x7F300E50u: goto label_7F300E50;
    case 0x7F300E54u: goto label_7F300E54;
    case 0x7F300E58u: goto label_7F300E58;
    case 0x7F300E5Cu: goto label_7F300E5C;
    case 0x7F300E60u: goto label_7F300E60;
    case 0x7F300E64u: goto label_7F300E64;
    case 0x7F300E68u: goto label_7F300E68;
    case 0x7F300E6Cu: goto label_7F300E6C;
    case 0x7F300E70u: goto label_7F300E70;
    case 0x7F300E74u: goto label_7F300E74;
    case 0x7F300E78u: goto label_7F300E78;
    case 0x7F300E7Cu: goto label_7F300E7C;
    case 0x7F300E80u: goto label_7F300E80;
    case 0x7F300E84u: goto label_7F300E84;
    case 0x7F300E88u: goto label_7F300E88;
    case 0x7F300E8Cu: goto label_7F300E8C;
    case 0x7F300E90u: goto label_7F300E90;
    case 0x7F300E94u: goto label_7F300E94;
    case 0x7F300E98u: goto label_7F300E98;
    case 0x7F300E9Cu: goto label_7F300E9C;
    case 0x7F300EA0u: goto label_7F300EA0;
    case 0x7F300EA4u: goto label_7F300EA4;
    case 0x7F300EA8u: goto label_7F300EA8;
    case 0x7F300EACu: goto label_7F300EAC;
    case 0x7F300EB0u: goto label_7F300EB0;
    case 0x7F300EB4u: goto label_7F300EB4;
    case 0x7F300EB8u: goto label_7F300EB8;
    case 0x7F300EBCu: goto label_7F300EBC;
    case 0x7F300EC0u: goto label_7F300EC0;
    case 0x7F300EC4u: goto label_7F300EC4;
    case 0x7F300EC8u: goto label_7F300EC8;
    case 0x7F300ECCu: goto label_7F300ECC;
    case 0x7F300ED0u: goto label_7F300ED0;
    case 0x7F300ED4u: goto label_7F300ED4;
    case 0x7F300ED8u: goto label_7F300ED8;
    case 0x7F300EDCu: goto label_7F300EDC;
    case 0x7F300EE0u: goto label_7F300EE0;
    case 0x7F300EE4u: goto label_7F300EE4;
    case 0x7F300EE8u: goto label_7F300EE8;
    case 0x7F300EECu: goto label_7F300EEC;
    case 0x7F300EF0u: goto label_7F300EF0;
    case 0x7F300EF4u: goto label_7F300EF4;
    case 0x7F300EF8u: goto label_7F300EF8;
    case 0x7F300EFCu: goto label_7F300EFC;
    case 0x7F300F00u: goto label_7F300F00;
    case 0x7F300F04u: goto label_7F300F04;
    case 0x7F300F08u: goto label_7F300F08;
    case 0x7F300F0Cu: goto label_7F300F0C;
    case 0x7F300F10u: goto label_7F300F10;
    case 0x7F300F14u: goto label_7F300F14;
    case 0x7F300F18u: goto label_7F300F18;
    case 0x7F300F1Cu: goto label_7F300F1C;
    case 0x7F300F20u: goto label_7F300F20;
    case 0x7F300F24u: goto label_7F300F24;
    case 0x7F300F28u: goto label_7F300F28;
    case 0x7F300F2Cu: goto label_7F300F2C;
    case 0x7F300F30u: goto label_7F300F30;
    case 0x7F300F34u: goto label_7F300F34;
    case 0x7F300F38u: goto label_7F300F38;
    case 0x7F300F3Cu: goto label_7F300F3C;
    case 0x7F300F40u: goto label_7F300F40;
    case 0x7F300F44u: goto label_7F300F44;
    case 0x7F300F48u: goto label_7F300F48;
    case 0x7F300F4Cu: goto label_7F300F4C;
    case 0x7F300F50u: goto label_7F300F50;
    case 0x7F300F54u: goto label_7F300F54;
    case 0x7F300F58u: goto label_7F300F58;
    case 0x7F300F5Cu: goto label_7F300F5C;
    case 0x7F300F60u: goto label_7F300F60;
    case 0x7F300F64u: goto label_7F300F64;
    case 0x7F300F68u: goto label_7F300F68;
    case 0x7F300F6Cu: goto label_7F300F6C;
    case 0x7F300F70u: goto label_7F300F70;
    case 0x7F300F74u: goto label_7F300F74;
    case 0x7F300F78u: goto label_7F300F78;
    case 0x7F300F7Cu: goto label_7F300F7C;
    case 0x7F300F80u: goto label_7F300F80;
    case 0x7F300F84u: goto label_7F300F84;
    case 0x7F300F88u: goto label_7F300F88;
    case 0x7F300F8Cu: goto label_7F300F8C;
    case 0x7F300F90u: goto label_7F300F90;
    case 0x7F300F94u: goto label_7F300F94;
    case 0x7F300F98u: goto label_7F300F98;
    case 0x7F300F9Cu: goto label_7F300F9C;
    case 0x7F300FA0u: goto label_7F300FA0;
    case 0x7F300FA4u: goto label_7F300FA4;
    case 0x7F300FA8u: goto label_7F300FA8;
    case 0x7F300FACu: goto label_7F300FAC;
    case 0x7F300FB0u: goto label_7F300FB0;
    case 0x7F300FB4u: goto label_7F300FB4;
    case 0x7F300FB8u: goto label_7F300FB8;
    case 0x7F300FBCu: goto label_7F300FBC;
    case 0x7F300FC0u: goto label_7F300FC0;
    case 0x7F300FC4u: goto label_7F300FC4;
    case 0x7F300FC8u: goto label_7F300FC8;
    case 0x7F300FCCu: goto label_7F300FCC;
    case 0x7F300FD0u: goto label_7F300FD0;
    case 0x7F300FD4u: goto label_7F300FD4;
    case 0x7F300FD8u: goto label_7F300FD8;
    case 0x7F300FDCu: goto label_7F300FDC;
    case 0x7F300FE0u: goto label_7F300FE0;
    case 0x7F300FE4u: goto label_7F300FE4;
    case 0x7F300FE8u: goto label_7F300FE8;
    case 0x7F300FECu: goto label_7F300FEC;
    case 0x7F300FF0u: goto label_7F300FF0;
    case 0x7F300FF4u: goto label_7F300FF4;
    case 0x7F300FF8u: goto label_7F300FF8;
    case 0x7F300FFCu: goto label_7F300FFC;
    case 0x7F301000u: goto label_7F301000;
    case 0x7F301004u: goto label_7F301004;
    case 0x7F301008u: goto label_7F301008;
    case 0x7F30100Cu: goto label_7F30100C;
    case 0x7F301010u: goto label_7F301010;
    case 0x7F301014u: goto label_7F301014;
    case 0x7F301018u: goto label_7F301018;
    case 0x7F30101Cu: goto label_7F30101C;
    case 0x7F301020u: goto label_7F301020;
    case 0x7F301024u: goto label_7F301024;
    case 0x7F301028u: goto label_7F301028;
    case 0x7F30102Cu: goto label_7F30102C;
    case 0x7F301030u: goto label_7F301030;
    case 0x7F301034u: goto label_7F301034;
    case 0x7F301038u: goto label_7F301038;
    case 0x7F30103Cu: goto label_7F30103C;
    case 0x7F301040u: goto label_7F301040;
    case 0x7F301044u: goto label_7F301044;
    case 0x7F301048u: goto label_7F301048;
    case 0x7F30104Cu: goto label_7F30104C;
    case 0x7F301050u: goto label_7F301050;
    case 0x7F301054u: goto label_7F301054;
    case 0x7F301058u: goto label_7F301058;
    case 0x7F30105Cu: goto label_7F30105C;
    case 0x7F301060u: goto label_7F301060;
    case 0x7F301064u: goto label_7F301064;
    case 0x7F301068u: goto label_7F301068;
    case 0x7F30106Cu: goto label_7F30106C;
    case 0x7F301070u: goto label_7F301070;
    case 0x7F301074u: goto label_7F301074;
    case 0x7F301078u: goto label_7F301078;
    case 0x7F30107Cu: goto label_7F30107C;
    case 0x7F301080u: goto label_7F301080;
    case 0x7F301084u: goto label_7F301084;
    case 0x7F301088u: goto label_7F301088;
    case 0x7F30108Cu: goto label_7F30108C;
    case 0x7F301090u: goto label_7F301090;
    case 0x7F301094u: goto label_7F301094;
    case 0x7F301098u: goto label_7F301098;
    case 0x7F30109Cu: goto label_7F30109C;
    case 0x7F3010A0u: goto label_7F3010A0;
    case 0x7F3010A4u: goto label_7F3010A4;
    case 0x7F3010A8u: goto label_7F3010A8;
    case 0x7F3010ACu: goto label_7F3010AC;
    case 0x7F3010B0u: goto label_7F3010B0;
    case 0x7F3010B4u: goto label_7F3010B4;
    case 0x7F3010B8u: goto label_7F3010B8;
    case 0x7F3010BCu: goto label_7F3010BC;
    case 0x7F3010C0u: goto label_7F3010C0;
    case 0x7F3010C4u: goto label_7F3010C4;
    case 0x7F3010C8u: goto label_7F3010C8;
    case 0x7F3010CCu: goto label_7F3010CC;
    case 0x7F3010D0u: goto label_7F3010D0;
    case 0x7F3010D4u: goto label_7F3010D4;
    case 0x7F3010D8u: goto label_7F3010D8;
    case 0x7F3010DCu: goto label_7F3010DC;
    case 0x7F3010E0u: goto label_7F3010E0;
    case 0x7F3010E4u: goto label_7F3010E4;
    case 0x7F3010E8u: goto label_7F3010E8;
    case 0x7F3010ECu: goto label_7F3010EC;
    case 0x7F3010F0u: goto label_7F3010F0;
    case 0x7F3010F4u: goto label_7F3010F4;
    case 0x7F3010F8u: goto label_7F3010F8;
    case 0x7F3010FCu: goto label_7F3010FC;
    case 0x7F301100u: goto label_7F301100;
    case 0x7F301104u: goto label_7F301104;
    case 0x7F301108u: goto label_7F301108;
    case 0x7F30110Cu: goto label_7F30110C;
    case 0x7F301110u: goto label_7F301110;
    case 0x7F301114u: goto label_7F301114;
    case 0x7F301118u: goto label_7F301118;
    case 0x7F30111Cu: goto label_7F30111C;
    case 0x7F301120u: goto label_7F301120;
    case 0x7F301124u: goto label_7F301124;
    case 0x7F301128u: goto label_7F301128;
    case 0x7F30112Cu: goto label_7F30112C;
    case 0x7F301130u: goto label_7F301130;
    case 0x7F301134u: goto label_7F301134;
    case 0x7F301138u: goto label_7F301138;
    case 0x7F30113Cu: goto label_7F30113C;
    case 0x7F301140u: goto label_7F301140;
    case 0x7F301144u: goto label_7F301144;
    case 0x7F301148u: goto label_7F301148;
    case 0x7F30114Cu: goto label_7F30114C;
    case 0x7F301150u: goto label_7F301150;
    case 0x7F301154u: goto label_7F301154;
    case 0x7F301158u: goto label_7F301158;
    case 0x7F30115Cu: goto label_7F30115C;
    case 0x7F301160u: goto label_7F301160;
    case 0x7F301164u: goto label_7F301164;
    case 0x7F301168u: goto label_7F301168;
    case 0x7F30116Cu: goto label_7F30116C;
    case 0x7F301170u: goto label_7F301170;
    case 0x7F301174u: goto label_7F301174;
    case 0x7F301178u: goto label_7F301178;
    case 0x7F30117Cu: goto label_7F30117C;
    case 0x7F301180u: goto label_7F301180;
    case 0x7F301184u: goto label_7F301184;
    case 0x7F301188u: goto label_7F301188;
    case 0x7F30118Cu: goto label_7F30118C;
    case 0x7F301190u: goto label_7F301190;
    case 0x7F301194u: goto label_7F301194;
    case 0x7F301198u: goto label_7F301198;
    case 0x7F30119Cu: goto label_7F30119C;
    case 0x7F3011A0u: goto label_7F3011A0;
    case 0x7F3011A4u: goto label_7F3011A4;
    case 0x7F3011A8u: goto label_7F3011A8;
    case 0x7F3011ACu: goto label_7F3011AC;
    case 0x7F3011B0u: goto label_7F3011B0;
    case 0x7F3011B4u: goto label_7F3011B4;
    case 0x7F3011B8u: goto label_7F3011B8;
    case 0x7F3011BCu: goto label_7F3011BC;
    case 0x7F3011C0u: goto label_7F3011C0;
    case 0x7F3011C4u: goto label_7F3011C4;
    case 0x7F3011C8u: goto label_7F3011C8;
    case 0x7F3011CCu: goto label_7F3011CC;
    case 0x7F3011D0u: goto label_7F3011D0;
    case 0x7F3011D4u: goto label_7F3011D4;
    case 0x7F3011D8u: goto label_7F3011D8;
    case 0x7F3011DCu: goto label_7F3011DC;
    case 0x7F3011E0u: goto label_7F3011E0;
    case 0x7F3011E4u: goto label_7F3011E4;
    case 0x7F3011E8u: goto label_7F3011E8;
    case 0x7F3011ECu: goto label_7F3011EC;
    case 0x7F3011F0u: goto label_7F3011F0;
    case 0x7F3011F4u: goto label_7F3011F4;
    case 0x7F3011F8u: goto label_7F3011F8;
    case 0x7F3011FCu: goto label_7F3011FC;
    case 0x7F301200u: goto label_7F301200;
    case 0x7F301204u: goto label_7F301204;
    case 0x7F301208u: goto label_7F301208;
    case 0x7F30120Cu: goto label_7F30120C;
    case 0x7F301210u: goto label_7F301210;
    case 0x7F301214u: goto label_7F301214;
    case 0x7F301218u: goto label_7F301218;
    case 0x7F30121Cu: goto label_7F30121C;
    case 0x7F301220u: goto label_7F301220;
    case 0x7F301224u: goto label_7F301224;
    case 0x7F301228u: goto label_7F301228;
    case 0x7F30122Cu: goto label_7F30122C;
    case 0x7F301230u: goto label_7F301230;
    case 0x7F301234u: goto label_7F301234;
    case 0x7F301238u: goto label_7F301238;
    case 0x7F30123Cu: goto label_7F30123C;
    case 0x7F301240u: goto label_7F301240;
    case 0x7F301244u: goto label_7F301244;
    case 0x7F301248u: goto label_7F301248;
    case 0x7F30124Cu: goto label_7F30124C;
    case 0x7F301250u: goto label_7F301250;
    case 0x7F301254u: goto label_7F301254;
    case 0x7F301258u: goto label_7F301258;
    case 0x7F30125Cu: goto label_7F30125C;
    case 0x7F301260u: goto label_7F301260;
    case 0x7F301264u: goto label_7F301264;
    case 0x7F301268u: goto label_7F301268;
    case 0x7F30126Cu: goto label_7F30126C;
    case 0x7F301270u: goto label_7F301270;
    case 0x7F301274u: goto label_7F301274;
    case 0x7F301278u: goto label_7F301278;
    case 0x7F30127Cu: goto label_7F30127C;
    case 0x7F301280u: goto label_7F301280;
    case 0x7F301284u: goto label_7F301284;
    case 0x7F301288u: goto label_7F301288;
    case 0x7F30128Cu: goto label_7F30128C;
    case 0x7F301290u: goto label_7F301290;
    case 0x7F301294u: goto label_7F301294;
    case 0x7F301298u: goto label_7F301298;
    case 0x7F30129Cu: goto label_7F30129C;
    case 0x7F3012A0u: goto label_7F3012A0;
    case 0x7F3012A4u: goto label_7F3012A4;
    case 0x7F3012A8u: goto label_7F3012A8;
    case 0x7F3012ACu: goto label_7F3012AC;
    case 0x7F3012B0u: goto label_7F3012B0;
    case 0x7F3012B4u: goto label_7F3012B4;
    case 0x7F3012B8u: goto label_7F3012B8;
    case 0x7F3012BCu: goto label_7F3012BC;
    case 0x7F3012C0u: goto label_7F3012C0;
    case 0x7F3012C4u: goto label_7F3012C4;
    case 0x7F3012C8u: goto label_7F3012C8;
    case 0x7F3012CCu: goto label_7F3012CC;
    case 0x7F3012D0u: goto label_7F3012D0;
    case 0x7F3012D4u: goto label_7F3012D4;
    case 0x7F3012D8u: goto label_7F3012D8;
    case 0x7F3012DCu: goto label_7F3012DC;
    case 0x7F3012E0u: goto label_7F3012E0;
    case 0x7F3012E4u: goto label_7F3012E4;
    case 0x7F3012E8u: goto label_7F3012E8;
    case 0x7F3012ECu: goto label_7F3012EC;
    case 0x7F3012F0u: goto label_7F3012F0;
    case 0x7F3012F4u: goto label_7F3012F4;
    case 0x7F3012F8u: goto label_7F3012F8;
    case 0x7F3012FCu: goto label_7F3012FC;
    case 0x7F301300u: goto label_7F301300;
    case 0x7F301304u: goto label_7F301304;
    case 0x7F301308u: goto label_7F301308;
    case 0x7F30130Cu: goto label_7F30130C;
    case 0x7F301310u: goto label_7F301310;
    case 0x7F301314u: goto label_7F301314;
    case 0x7F301318u: goto label_7F301318;
    case 0x7F30131Cu: goto label_7F30131C;
    case 0x7F301320u: goto label_7F301320;
    case 0x7F301324u: goto label_7F301324;
    case 0x7F301328u: goto label_7F301328;
    case 0x7F30132Cu: goto label_7F30132C;
    case 0x7F301330u: goto label_7F301330;
    case 0x7F301334u: goto label_7F301334;
    case 0x7F301338u: goto label_7F301338;
    case 0x7F30133Cu: goto label_7F30133C;
    case 0x7F301340u: goto label_7F301340;
    case 0x7F301344u: goto label_7F301344;
    case 0x7F301348u: goto label_7F301348;
    case 0x7F30134Cu: goto label_7F30134C;
    case 0x7F301350u: goto label_7F301350;
    case 0x7F301354u: goto label_7F301354;
    case 0x7F301358u: goto label_7F301358;
    case 0x7F30135Cu: goto label_7F30135C;
    case 0x7F301360u: goto label_7F301360;
    case 0x7F301364u: goto label_7F301364;
    case 0x7F301368u: goto label_7F301368;
    case 0x7F30136Cu: goto label_7F30136C;
    case 0x7F301370u: goto label_7F301370;
    case 0x7F301374u: goto label_7F301374;
    case 0x7F301378u: goto label_7F301378;
    case 0x7F30137Cu: goto label_7F30137C;
    case 0x7F301380u: goto label_7F301380;
    case 0x7F301384u: goto label_7F301384;
    case 0x7F301388u: goto label_7F301388;
    case 0x7F30138Cu: goto label_7F30138C;
    case 0x7F301390u: goto label_7F301390;
    case 0x7F301394u: goto label_7F301394;
    case 0x7F301398u: goto label_7F301398;
    case 0x7F30139Cu: goto label_7F30139C;
    case 0x7F3013A0u: goto label_7F3013A0;
    case 0x7F3013A4u: goto label_7F3013A4;
    case 0x7F3013A8u: goto label_7F3013A8;
    case 0x7F3013ACu: goto label_7F3013AC;
    case 0x7F3013B0u: goto label_7F3013B0;
    case 0x7F3013B4u: goto label_7F3013B4;
    case 0x7F3013B8u: goto label_7F3013B8;
    case 0x7F3013BCu: goto label_7F3013BC;
    case 0x7F3013C0u: goto label_7F3013C0;
    case 0x7F3013C4u: goto label_7F3013C4;
    case 0x7F3013C8u: goto label_7F3013C8;
    case 0x7F3013CCu: goto label_7F3013CC;
    case 0x7F3013D0u: goto label_7F3013D0;
    case 0x7F3013D4u: goto label_7F3013D4;
    case 0x7F3013D8u: goto label_7F3013D8;
    case 0x7F3013DCu: goto label_7F3013DC;
    case 0x7F3013E0u: goto label_7F3013E0;
    case 0x7F3013E4u: goto label_7F3013E4;
    case 0x7F3013E8u: goto label_7F3013E8;
    case 0x7F3013ECu: goto label_7F3013EC;
    case 0x7F3013F0u: goto label_7F3013F0;
    case 0x7F3013F4u: goto label_7F3013F4;
    case 0x7F3013F8u: goto label_7F3013F8;
    case 0x7F3013FCu: goto label_7F3013FC;
    case 0x7F301400u: goto label_7F301400;
    case 0x7F301404u: goto label_7F301404;
    case 0x7F301408u: goto label_7F301408;
    case 0x7F30140Cu: goto label_7F30140C;
    case 0x7F301410u: goto label_7F301410;
    case 0x7F301414u: goto label_7F301414;
    case 0x7F301418u: goto label_7F301418;
    case 0x7F30141Cu: goto label_7F30141C;
    case 0x7F301420u: goto label_7F301420;
    case 0x7F301424u: goto label_7F301424;
    case 0x7F301428u: goto label_7F301428;
    case 0x7F30142Cu: goto label_7F30142C;
    case 0x7F301430u: goto label_7F301430;
    case 0x7F301434u: goto label_7F301434;
    case 0x7F301438u: goto label_7F301438;
    case 0x7F30143Cu: goto label_7F30143C;
    case 0x7F301440u: goto label_7F301440;
    case 0x7F301444u: goto label_7F301444;
    case 0x7F301448u: goto label_7F301448;
    case 0x7F30144Cu: goto label_7F30144C;
    case 0x7F301450u: goto label_7F301450;
    case 0x7F301454u: goto label_7F301454;
    case 0x7F301458u: goto label_7F301458;
    case 0x7F30145Cu: goto label_7F30145C;
    case 0x7F301460u: goto label_7F301460;
    case 0x7F301464u: goto label_7F301464;
    case 0x7F301468u: goto label_7F301468;
    case 0x7F30146Cu: goto label_7F30146C;
    case 0x7F301470u: goto label_7F301470;
    case 0x7F301474u: goto label_7F301474;
    case 0x7F301478u: goto label_7F301478;
    case 0x7F30147Cu: goto label_7F30147C;
    case 0x7F301480u: goto label_7F301480;
    case 0x7F301484u: goto label_7F301484;
    case 0x7F301488u: goto label_7F301488;
    case 0x7F30148Cu: goto label_7F30148C;
    case 0x7F301490u: goto label_7F301490;
    case 0x7F301494u: goto label_7F301494;
    case 0x7F301498u: goto label_7F301498;
    case 0x7F30149Cu: goto label_7F30149C;
    case 0x7F3014A0u: goto label_7F3014A0;
    case 0x7F3014A4u: goto label_7F3014A4;
    case 0x7F3014A8u: goto label_7F3014A8;
    case 0x7F3014ACu: goto label_7F3014AC;
    case 0x7F3014B0u: goto label_7F3014B0;
    case 0x7F3014B4u: goto label_7F3014B4;
    case 0x7F3014B8u: goto label_7F3014B8;
    case 0x7F3014BCu: goto label_7F3014BC;
    case 0x7F3014C0u: goto label_7F3014C0;
    case 0x7F3014C4u: goto label_7F3014C4;
    case 0x7F3014C8u: goto label_7F3014C8;
    case 0x7F3014CCu: goto label_7F3014CC;
    case 0x7F3014D0u: goto label_7F3014D0;
    case 0x7F3014D4u: goto label_7F3014D4;
    case 0x7F3014D8u: goto label_7F3014D8;
    case 0x7F3014DCu: goto label_7F3014DC;
    case 0x7F3014E0u: goto label_7F3014E0;
    case 0x7F3014E4u: goto label_7F3014E4;
    case 0x7F3014E8u: goto label_7F3014E8;
    case 0x7F3014ECu: goto label_7F3014EC;
    case 0x7F3014F0u: goto label_7F3014F0;
    case 0x7F3014F4u: goto label_7F3014F4;
    case 0x7F3014F8u: goto label_7F3014F8;
    case 0x7F3014FCu: goto label_7F3014FC;
    case 0x7F301500u: goto label_7F301500;
    case 0x7F301504u: goto label_7F301504;
    case 0x7F301508u: goto label_7F301508;
    case 0x7F30150Cu: goto label_7F30150C;
    case 0x7F301510u: goto label_7F301510;
    case 0x7F301514u: goto label_7F301514;
    case 0x7F301518u: goto label_7F301518;
    case 0x7F30151Cu: goto label_7F30151C;
    case 0x7F301520u: goto label_7F301520;
    case 0x7F301524u: goto label_7F301524;
    case 0x7F301528u: goto label_7F301528;
    case 0x7F30152Cu: goto label_7F30152C;
    case 0x7F301530u: goto label_7F301530;
    case 0x7F301534u: goto label_7F301534;
    case 0x7F301538u: goto label_7F301538;
    case 0x7F30153Cu: goto label_7F30153C;
    case 0x7F301540u: goto label_7F301540;
    case 0x7F301544u: goto label_7F301544;
    case 0x7F301548u: goto label_7F301548;
    case 0x7F30154Cu: goto label_7F30154C;
    case 0x7F301550u: goto label_7F301550;
    case 0x7F301554u: goto label_7F301554;
    case 0x7F301558u: goto label_7F301558;
    case 0x7F30155Cu: goto label_7F30155C;
    case 0x7F301560u: goto label_7F301560;
    case 0x7F301564u: goto label_7F301564;
    case 0x7F301568u: goto label_7F301568;
    case 0x7F30156Cu: goto label_7F30156C;
    case 0x7F301570u: goto label_7F301570;
    case 0x7F301574u: goto label_7F301574;
    case 0x7F301578u: goto label_7F301578;
    case 0x7F30157Cu: goto label_7F30157C;
    case 0x7F301580u: goto label_7F301580;
    case 0x7F301584u: goto label_7F301584;
    case 0x7F301588u: goto label_7F301588;
    case 0x7F30158Cu: goto label_7F30158C;
    case 0x7F301590u: goto label_7F301590;
    case 0x7F301594u: goto label_7F301594;
    case 0x7F301598u: goto label_7F301598;
    case 0x7F30159Cu: goto label_7F30159C;
    case 0x7F3015A0u: goto label_7F3015A0;
    case 0x7F3015A4u: goto label_7F3015A4;
    case 0x7F3015A8u: goto label_7F3015A8;
    case 0x7F3015ACu: goto label_7F3015AC;
    case 0x7F3015B0u: goto label_7F3015B0;
    case 0x7F3015B4u: goto label_7F3015B4;
    case 0x7F3015B8u: goto label_7F3015B8;
    case 0x7F3015BCu: goto label_7F3015BC;
    case 0x7F3015C0u: goto label_7F3015C0;
    case 0x7F3015C4u: goto label_7F3015C4;
    case 0x7F3015C8u: goto label_7F3015C8;
    case 0x7F3015CCu: goto label_7F3015CC;
    case 0x7F3015D0u: goto label_7F3015D0;
    case 0x7F3015D4u: goto label_7F3015D4;
    case 0x7F3015D8u: goto label_7F3015D8;
    case 0x7F3015DCu: goto label_7F3015DC;
    case 0x7F3015E0u: goto label_7F3015E0;
    case 0x7F3015E4u: goto label_7F3015E4;
    case 0x7F3015E8u: goto label_7F3015E8;
    case 0x7F3015ECu: goto label_7F3015EC;
    case 0x7F3015F0u: goto label_7F3015F0;
    case 0x7F3015F4u: goto label_7F3015F4;
    case 0x7F3015F8u: goto label_7F3015F8;
    case 0x7F3015FCu: goto label_7F3015FC;
    case 0x7F301600u: goto label_7F301600;
    case 0x7F301604u: goto label_7F301604;
    case 0x7F301608u: goto label_7F301608;
    case 0x7F30160Cu: goto label_7F30160C;
    case 0x7F301610u: goto label_7F301610;
    case 0x7F301614u: goto label_7F301614;
    case 0x7F301618u: goto label_7F301618;
    case 0x7F30161Cu: goto label_7F30161C;
    case 0x7F301620u: goto label_7F301620;
    case 0x7F301624u: goto label_7F301624;
    case 0x7F301628u: goto label_7F301628;
    case 0x7F30162Cu: goto label_7F30162C;
    case 0x7F301630u: goto label_7F301630;
    case 0x7F301634u: goto label_7F301634;
    case 0x7F301638u: goto label_7F301638;
    case 0x7F30163Cu: goto label_7F30163C;
    case 0x7F301640u: goto label_7F301640;
    case 0x7F301644u: goto label_7F301644;
    case 0x7F301648u: goto label_7F301648;
    case 0x7F30164Cu: goto label_7F30164C;
    case 0x7F301650u: goto label_7F301650;
    case 0x7F301654u: goto label_7F301654;
    case 0x7F301658u: goto label_7F301658;
    case 0x7F30165Cu: goto label_7F30165C;
    case 0x7F301660u: goto label_7F301660;
    case 0x7F301664u: goto label_7F301664;
    case 0x7F301668u: goto label_7F301668;
    case 0x7F30166Cu: goto label_7F30166C;
    case 0x7F301670u: goto label_7F301670;
    case 0x7F301674u: goto label_7F301674;
    case 0x7F301678u: goto label_7F301678;
    case 0x7F30167Cu: goto label_7F30167C;
    case 0x7F301680u: goto label_7F301680;
    case 0x7F301684u: goto label_7F301684;
    case 0x7F301688u: goto label_7F301688;
    case 0x7F30168Cu: goto label_7F30168C;
    case 0x7F301690u: goto label_7F301690;
    case 0x7F301694u: goto label_7F301694;
    case 0x7F301698u: goto label_7F301698;
    case 0x7F30169Cu: goto label_7F30169C;
    case 0x7F3016A0u: goto label_7F3016A0;
    case 0x7F3016A4u: goto label_7F3016A4;
    case 0x7F3016A8u: goto label_7F3016A8;
    case 0x7F3016ACu: goto label_7F3016AC;
    case 0x7F3016B0u: goto label_7F3016B0;
    case 0x7F3016B4u: goto label_7F3016B4;
    case 0x7F3016B8u: goto label_7F3016B8;
    case 0x7F3016BCu: goto label_7F3016BC;
    case 0x7F3016C0u: goto label_7F3016C0;
    case 0x7F3016C4u: goto label_7F3016C4;
    case 0x7F3016C8u: goto label_7F3016C8;
    case 0x7F3016CCu: goto label_7F3016CC;
    case 0x7F3016D0u: goto label_7F3016D0;
    case 0x7F3016D4u: goto label_7F3016D4;
    case 0x7F3016D8u: goto label_7F3016D8;
    case 0x7F3016DCu: goto label_7F3016DC;
    case 0x7F3016E0u: goto label_7F3016E0;
    case 0x7F3016E4u: goto label_7F3016E4;
    case 0x7F3016E8u: goto label_7F3016E8;
    case 0x7F3016ECu: goto label_7F3016EC;
    case 0x7F3016F0u: goto label_7F3016F0;
    case 0x7F3016F4u: goto label_7F3016F4;
    case 0x7F3016F8u: goto label_7F3016F8;
    case 0x7F3016FCu: goto label_7F3016FC;
    case 0x7F301700u: goto label_7F301700;
    case 0x7F301704u: goto label_7F301704;
    case 0x7F301708u: goto label_7F301708;
    case 0x7F30170Cu: goto label_7F30170C;
    case 0x7F301710u: goto label_7F301710;
    case 0x7F301714u: goto label_7F301714;
    case 0x7F301718u: goto label_7F301718;
    case 0x7F30171Cu: goto label_7F30171C;
    case 0x7F301720u: goto label_7F301720;
    case 0x7F301724u: goto label_7F301724;
    case 0x7F301728u: goto label_7F301728;
    case 0x7F30172Cu: goto label_7F30172C;
    case 0x7F301730u: goto label_7F301730;
    case 0x7F301734u: goto label_7F301734;
    case 0x7F301738u: goto label_7F301738;
    case 0x7F30173Cu: goto label_7F30173C;
    case 0x7F301740u: goto label_7F301740;
    case 0x7F301744u: goto label_7F301744;
    case 0x7F301748u: goto label_7F301748;
    case 0x7F30174Cu: goto label_7F30174C;
    case 0x7F301750u: goto label_7F301750;
    case 0x7F301754u: goto label_7F301754;
    case 0x7F301758u: goto label_7F301758;
    case 0x7F30175Cu: goto label_7F30175C;
    case 0x7F301760u: goto label_7F301760;
    case 0x7F301764u: goto label_7F301764;
    case 0x7F301768u: goto label_7F301768;
    case 0x7F30176Cu: goto label_7F30176C;
    case 0x7F301770u: goto label_7F301770;
    case 0x7F301774u: goto label_7F301774;
    case 0x7F301778u: goto label_7F301778;
    case 0x7F30177Cu: goto label_7F30177C;
    case 0x7F301780u: goto label_7F301780;
    case 0x7F301784u: goto label_7F301784;
    case 0x7F301788u: goto label_7F301788;
    case 0x7F30178Cu: goto label_7F30178C;
    case 0x7F301790u: goto label_7F301790;
    case 0x7F301794u: goto label_7F301794;
    case 0x7F301798u: goto label_7F301798;
    case 0x7F30179Cu: goto label_7F30179C;
    case 0x7F3017A0u: goto label_7F3017A0;
    case 0x7F3017A4u: goto label_7F3017A4;
    case 0x7F3017A8u: goto label_7F3017A8;
    case 0x7F3017ACu: goto label_7F3017AC;
    case 0x7F3017B0u: goto label_7F3017B0;
    case 0x7F3017B4u: goto label_7F3017B4;
    case 0x7F3017B8u: goto label_7F3017B8;
    case 0x7F3017BCu: goto label_7F3017BC;
    case 0x7F3017C0u: goto label_7F3017C0;
    case 0x7F3017C4u: goto label_7F3017C4;
    case 0x7F3017C8u: goto label_7F3017C8;
    case 0x7F3017CCu: goto label_7F3017CC;
    case 0x7F3017D0u: goto label_7F3017D0;
    case 0x7F3017D4u: goto label_7F3017D4;
    case 0x7F3017D8u: goto label_7F3017D8;
    case 0x7F3017DCu: goto label_7F3017DC;
    case 0x7F3017E0u: goto label_7F3017E0;
    case 0x7F3017E4u: goto label_7F3017E4;
    case 0x7F3017E8u: goto label_7F3017E8;
    case 0x7F3017ECu: goto label_7F3017EC;
    case 0x7F3017F0u: goto label_7F3017F0;
    case 0x7F3017F4u: goto label_7F3017F4;
    case 0x7F3017F8u: goto label_7F3017F8;
    case 0x7F3017FCu: goto label_7F3017FC;
    case 0x7F301800u: goto label_7F301800;
    case 0x7F301804u: goto label_7F301804;
    case 0x7F301808u: goto label_7F301808;
    case 0x7F30180Cu: goto label_7F30180C;
    case 0x7F301810u: goto label_7F301810;
    case 0x7F301814u: goto label_7F301814;
    case 0x7F301818u: goto label_7F301818;
    case 0x7F30181Cu: goto label_7F30181C;
    case 0x7F301820u: goto label_7F301820;
    case 0x7F301824u: goto label_7F301824;
    case 0x7F301828u: goto label_7F301828;
    case 0x7F30182Cu: goto label_7F30182C;
    case 0x7F301830u: goto label_7F301830;
    case 0x7F301834u: goto label_7F301834;
    case 0x7F301838u: goto label_7F301838;
    case 0x7F30183Cu: goto label_7F30183C;
    case 0x7F301840u: goto label_7F301840;
    case 0x7F301844u: goto label_7F301844;
    case 0x7F301848u: goto label_7F301848;
    case 0x7F30184Cu: goto label_7F30184C;
    case 0x7F301850u: goto label_7F301850;
    case 0x7F301854u: goto label_7F301854;
    case 0x7F301858u: goto label_7F301858;
    case 0x7F30185Cu: goto label_7F30185C;
    case 0x7F301860u: goto label_7F301860;
    case 0x7F301864u: goto label_7F301864;
    case 0x7F301868u: goto label_7F301868;
    case 0x7F30186Cu: goto label_7F30186C;
    case 0x7F301870u: goto label_7F301870;
    case 0x7F301874u: goto label_7F301874;
    case 0x7F301878u: goto label_7F301878;
    case 0x7F30187Cu: goto label_7F30187C;
    case 0x7F301880u: goto label_7F301880;
    case 0x7F301884u: goto label_7F301884;
    case 0x7F301888u: goto label_7F301888;
    case 0x7F30188Cu: goto label_7F30188C;
    case 0x7F301890u: goto label_7F301890;
    case 0x7F301894u: goto label_7F301894;
    case 0x7F301898u: goto label_7F301898;
    case 0x7F30189Cu: goto label_7F30189C;
    case 0x7F3018A0u: goto label_7F3018A0;
    case 0x7F3018A4u: goto label_7F3018A4;
    case 0x7F3018A8u: goto label_7F3018A8;
    case 0x7F3018ACu: goto label_7F3018AC;
    case 0x7F3018B0u: goto label_7F3018B0;
    case 0x7F3018B4u: goto label_7F3018B4;
    case 0x7F3018B8u: goto label_7F3018B8;
    case 0x7F3018BCu: goto label_7F3018BC;
    case 0x7F3018C0u: goto label_7F3018C0;
    case 0x7F3018C4u: goto label_7F3018C4;
    case 0x7F3018C8u: goto label_7F3018C8;
    case 0x7F3018CCu: goto label_7F3018CC;
    case 0x7F3018D0u: goto label_7F3018D0;
    case 0x7F3018D4u: goto label_7F3018D4;
    case 0x7F3018D8u: goto label_7F3018D8;
    case 0x7F3018DCu: goto label_7F3018DC;
    case 0x7F3018E0u: goto label_7F3018E0;
    case 0x7F3018E4u: goto label_7F3018E4;
    case 0x7F3018E8u: goto label_7F3018E8;
    case 0x7F3018ECu: goto label_7F3018EC;
    case 0x7F3018F0u: goto label_7F3018F0;
    case 0x7F3018F4u: goto label_7F3018F4;
    case 0x7F3018F8u: goto label_7F3018F8;
    case 0x7F3018FCu: goto label_7F3018FC;
    case 0x7F301900u: goto label_7F301900;
    case 0x7F301904u: goto label_7F301904;
    case 0x7F301908u: goto label_7F301908;
    case 0x7F30190Cu: goto label_7F30190C;
    case 0x7F301910u: goto label_7F301910;
    case 0x7F301914u: goto label_7F301914;
    case 0x7F301918u: goto label_7F301918;
    case 0x7F30191Cu: goto label_7F30191C;
    case 0x7F301920u: goto label_7F301920;
    case 0x7F301924u: goto label_7F301924;
    case 0x7F301928u: goto label_7F301928;
    case 0x7F30192Cu: goto label_7F30192C;
    case 0x7F301930u: goto label_7F301930;
    case 0x7F301934u: goto label_7F301934;
    case 0x7F301938u: goto label_7F301938;
    case 0x7F30193Cu: goto label_7F30193C;
    case 0x7F301940u: goto label_7F301940;
    case 0x7F301944u: goto label_7F301944;
    case 0x7F301948u: goto label_7F301948;
    case 0x7F30194Cu: goto label_7F30194C;
    case 0x7F301950u: goto label_7F301950;
    case 0x7F301954u: goto label_7F301954;
    case 0x7F301958u: goto label_7F301958;
    case 0x7F30195Cu: goto label_7F30195C;
    case 0x7F301960u: goto label_7F301960;
    case 0x7F301964u: goto label_7F301964;
    case 0x7F301968u: goto label_7F301968;
    case 0x7F30196Cu: goto label_7F30196C;
    case 0x7F301970u: goto label_7F301970;
    case 0x7F301974u: goto label_7F301974;
    case 0x7F301978u: goto label_7F301978;
    case 0x7F30197Cu: goto label_7F30197C;
    case 0x7F301980u: goto label_7F301980;
    case 0x7F301984u: goto label_7F301984;
    case 0x7F301988u: goto label_7F301988;
    case 0x7F30198Cu: goto label_7F30198C;
    case 0x7F301990u: goto label_7F301990;
    case 0x7F301994u: goto label_7F301994;
    case 0x7F301998u: goto label_7F301998;
    case 0x7F30199Cu: goto label_7F30199C;
    case 0x7F3019A0u: goto label_7F3019A0;
    case 0x7F3019A4u: goto label_7F3019A4;
    case 0x7F3019A8u: goto label_7F3019A8;
    case 0x7F3019ACu: goto label_7F3019AC;
    case 0x7F3019B0u: goto label_7F3019B0;
    case 0x7F3019B4u: goto label_7F3019B4;
    case 0x7F3019B8u: goto label_7F3019B8;
    case 0x7F3019BCu: goto label_7F3019BC;
    case 0x7F3019C0u: goto label_7F3019C0;
    case 0x7F3019C4u: goto label_7F3019C4;
    case 0x7F3019C8u: goto label_7F3019C8;
    case 0x7F3019CCu: goto label_7F3019CC;
    case 0x7F3019D0u: goto label_7F3019D0;
    case 0x7F3019D4u: goto label_7F3019D4;
    case 0x7F3019D8u: goto label_7F3019D8;
    case 0x7F3019DCu: goto label_7F3019DC;
    case 0x7F3019E0u: goto label_7F3019E0;
    case 0x7F3019E4u: goto label_7F3019E4;
    case 0x7F3019E8u: goto label_7F3019E8;
    case 0x7F3019ECu: goto label_7F3019EC;
    case 0x7F3019F0u: goto label_7F3019F0;
    case 0x7F3019F4u: goto label_7F3019F4;
    case 0x7F3019F8u: goto label_7F3019F8;
    case 0x7F3019FCu: goto label_7F3019FC;
    case 0x7F301A00u: goto label_7F301A00;
    case 0x7F301A04u: goto label_7F301A04;
    case 0x7F301A08u: goto label_7F301A08;
    case 0x7F301A0Cu: goto label_7F301A0C;
    case 0x7F301A10u: goto label_7F301A10;
    case 0x7F301A14u: goto label_7F301A14;
    case 0x7F301A18u: goto label_7F301A18;
    case 0x7F301A1Cu: goto label_7F301A1C;
    case 0x7F301A20u: goto label_7F301A20;
    case 0x7F301A24u: goto label_7F301A24;
    case 0x7F301A28u: goto label_7F301A28;
    case 0x7F301A2Cu: goto label_7F301A2C;
    case 0x7F301A30u: goto label_7F301A30;
    case 0x7F301A34u: goto label_7F301A34;
    case 0x7F301A38u: goto label_7F301A38;
    case 0x7F301A3Cu: goto label_7F301A3C;
    case 0x7F301A40u: goto label_7F301A40;
    case 0x7F301A44u: goto label_7F301A44;
    case 0x7F301A48u: goto label_7F301A48;
    case 0x7F301A4Cu: goto label_7F301A4C;
    case 0x7F301A50u: goto label_7F301A50;
    case 0x7F301A54u: goto label_7F301A54;
    case 0x7F301A58u: goto label_7F301A58;
    case 0x7F301A5Cu: goto label_7F301A5C;
    case 0x7F301A60u: goto label_7F301A60;
    case 0x7F301A64u: goto label_7F301A64;
    case 0x7F301A68u: goto label_7F301A68;
    case 0x7F301A6Cu: goto label_7F301A6C;
    case 0x7F301A70u: goto label_7F301A70;
    case 0x7F301A74u: goto label_7F301A74;
    case 0x7F301A78u: goto label_7F301A78;
    case 0x7F301A7Cu: goto label_7F301A7C;
    case 0x7F301A80u: goto label_7F301A80;
    case 0x7F301A84u: goto label_7F301A84;
    case 0x7F301A88u: goto label_7F301A88;
    case 0x7F301A8Cu: goto label_7F301A8C;
    case 0x7F301A90u: goto label_7F301A90;
    case 0x7F301A94u: goto label_7F301A94;
    case 0x7F301A98u: goto label_7F301A98;
    case 0x7F301A9Cu: goto label_7F301A9C;
    case 0x7F301AA0u: goto label_7F301AA0;
    case 0x7F301AA4u: goto label_7F301AA4;
    case 0x7F301AA8u: goto label_7F301AA8;
    case 0x7F301AACu: goto label_7F301AAC;
    case 0x7F301AB0u: goto label_7F301AB0;
    case 0x7F301AB4u: goto label_7F301AB4;
    case 0x7F301AB8u: goto label_7F301AB8;
    case 0x7F301ABCu: goto label_7F301ABC;
    case 0x7F301AC0u: goto label_7F301AC0;
    case 0x7F301AC4u: goto label_7F301AC4;
    case 0x7F301AC8u: goto label_7F301AC8;
    case 0x7F301ACCu: goto label_7F301ACC;
    case 0x7F301AD0u: goto label_7F301AD0;
    case 0x7F301AD4u: goto label_7F301AD4;
    case 0x7F301AD8u: goto label_7F301AD8;
    case 0x7F301ADCu: goto label_7F301ADC;
    case 0x7F301AE0u: goto label_7F301AE0;
    case 0x7F301AE4u: goto label_7F301AE4;
    case 0x7F301AE8u: goto label_7F301AE8;
    case 0x7F301AECu: goto label_7F301AEC;
    case 0x7F301AF0u: goto label_7F301AF0;
    case 0x7F301AF4u: goto label_7F301AF4;
    case 0x7F301AF8u: goto label_7F301AF8;
    case 0x7F301AFCu: goto label_7F301AFC;
    case 0x7F301B00u: goto label_7F301B00;
    case 0x7F301B04u: goto label_7F301B04;
    case 0x7F301B08u: goto label_7F301B08;
    case 0x7F301B0Cu: goto label_7F301B0C;
    case 0x7F301B10u: goto label_7F301B10;
    case 0x7F301B14u: goto label_7F301B14;
    case 0x7F301B18u: goto label_7F301B18;
    case 0x7F301B1Cu: goto label_7F301B1C;
    case 0x7F301B20u: goto label_7F301B20;
    case 0x7F301B24u: goto label_7F301B24;
    case 0x7F301B28u: goto label_7F301B28;
    case 0x7F301B2Cu: goto label_7F301B2C;
    case 0x7F301B30u: goto label_7F301B30;
    case 0x7F301B34u: goto label_7F301B34;
    case 0x7F301B38u: goto label_7F301B38;
    case 0x7F301B3Cu: goto label_7F301B3C;
    case 0x7F301B40u: goto label_7F301B40;
    case 0x7F301B44u: goto label_7F301B44;
    case 0x7F301B48u: goto label_7F301B48;
    case 0x7F301B4Cu: goto label_7F301B4C;
    case 0x7F301B50u: goto label_7F301B50;
    case 0x7F301B54u: goto label_7F301B54;
    case 0x7F301B58u: goto label_7F301B58;
    case 0x7F301B5Cu: goto label_7F301B5C;
    case 0x7F301B60u: goto label_7F301B60;
    case 0x7F301B64u: goto label_7F301B64;
    case 0x7F301B68u: goto label_7F301B68;
    case 0x7F301B6Cu: goto label_7F301B6C;
    case 0x7F301B70u: goto label_7F301B70;
    case 0x7F301B74u: goto label_7F301B74;
    case 0x7F301B78u: goto label_7F301B78;
    case 0x7F301B7Cu: goto label_7F301B7C;
    case 0x7F301B80u: goto label_7F301B80;
    case 0x7F301B84u: goto label_7F301B84;
    case 0x7F301B88u: goto label_7F301B88;
    case 0x7F301B8Cu: goto label_7F301B8C;
    case 0x7F301B90u: goto label_7F301B90;
    case 0x7F301B94u: goto label_7F301B94;
    case 0x7F301B98u: goto label_7F301B98;
    case 0x7F301B9Cu: goto label_7F301B9C;
    case 0x7F301BA0u: goto label_7F301BA0;
    case 0x7F301BA4u: goto label_7F301BA4;
    case 0x7F301BA8u: goto label_7F301BA8;
    case 0x7F301BACu: goto label_7F301BAC;
    case 0x7F301BB0u: goto label_7F301BB0;
    case 0x7F301BB4u: goto label_7F301BB4;
    case 0x7F301BB8u: goto label_7F301BB8;
    case 0x7F301BBCu: goto label_7F301BBC;
    case 0x7F301BC0u: goto label_7F301BC0;
    case 0x7F301BC4u: goto label_7F301BC4;
    case 0x7F301BC8u: goto label_7F301BC8;
    case 0x7F301BCCu: goto label_7F301BCC;
    case 0x7F301BD0u: goto label_7F301BD0;
    case 0x7F301BD4u: goto label_7F301BD4;
    case 0x7F301BD8u: goto label_7F301BD8;
    case 0x7F301BDCu: goto label_7F301BDC;
    case 0x7F301BE0u: goto label_7F301BE0;
    case 0x7F301BE4u: goto label_7F301BE4;
    case 0x7F301BE8u: goto label_7F301BE8;
    case 0x7F301BECu: goto label_7F301BEC;
    case 0x7F301BF0u: goto label_7F301BF0;
    case 0x7F301BF4u: goto label_7F301BF4;
    case 0x7F301BF8u: goto label_7F301BF8;
    case 0x7F301BFCu: goto label_7F301BFC;
    case 0x7F301C00u: goto label_7F301C00;
    case 0x7F301C04u: goto label_7F301C04;
    case 0x7F301C08u: goto label_7F301C08;
    case 0x7F301C0Cu: goto label_7F301C0C;
    case 0x7F301C10u: goto label_7F301C10;
    case 0x7F301C14u: goto label_7F301C14;
    case 0x7F301C18u: goto label_7F301C18;
    case 0x7F301C1Cu: goto label_7F301C1C;
    case 0x7F301C20u: goto label_7F301C20;
    case 0x7F301C24u: goto label_7F301C24;
    case 0x7F301C28u: goto label_7F301C28;
    case 0x7F301C2Cu: goto label_7F301C2C;
    case 0x7F301C30u: goto label_7F301C30;
    case 0x7F301C34u: goto label_7F301C34;
    case 0x7F301C38u: goto label_7F301C38;
    case 0x7F301C3Cu: goto label_7F301C3C;
    case 0x7F301C40u: goto label_7F301C40;
    case 0x7F301C44u: goto label_7F301C44;
    case 0x7F301C48u: goto label_7F301C48;
    case 0x7F301C4Cu: goto label_7F301C4C;
    case 0x7F301C50u: goto label_7F301C50;
    case 0x7F301C54u: goto label_7F301C54;
    case 0x7F301C58u: goto label_7F301C58;
    case 0x7F301C5Cu: goto label_7F301C5C;
    case 0x7F301C60u: goto label_7F301C60;
    case 0x7F301C64u: goto label_7F301C64;
    case 0x7F301C68u: goto label_7F301C68;
    case 0x7F301C6Cu: goto label_7F301C6C;
    case 0x7F301C70u: goto label_7F301C70;
    case 0x7F301C74u: goto label_7F301C74;
    case 0x7F301C78u: goto label_7F301C78;
    case 0x7F301C7Cu: goto label_7F301C7C;
    case 0x7F301C80u: goto label_7F301C80;
    case 0x7F301C84u: goto label_7F301C84;
    case 0x7F301C88u: goto label_7F301C88;
    case 0x7F301C8Cu: goto label_7F301C8C;
    case 0x7F301C90u: goto label_7F301C90;
    case 0x7F301C94u: goto label_7F301C94;
    case 0x7F301C98u: goto label_7F301C98;
    case 0x7F301C9Cu: goto label_7F301C9C;
    case 0x7F301CA0u: goto label_7F301CA0;
    case 0x7F301CA4u: goto label_7F301CA4;
    case 0x7F301CA8u: goto label_7F301CA8;
    case 0x7F301CACu: goto label_7F301CAC;
    case 0x7F301CB0u: goto label_7F301CB0;
    case 0x7F301CB4u: goto label_7F301CB4;
    case 0x7F301CB8u: goto label_7F301CB8;
    case 0x7F301CBCu: goto label_7F301CBC;
    case 0x7F301CC0u: goto label_7F301CC0;
    case 0x7F301CC4u: goto label_7F301CC4;
    case 0x7F301CC8u: goto label_7F301CC8;
    case 0x7F301CCCu: goto label_7F301CCC;
    case 0x7F301CD0u: goto label_7F301CD0;
    case 0x7F301CD4u: goto label_7F301CD4;
    case 0x7F301CD8u: goto label_7F301CD8;
    case 0x7F301CDCu: goto label_7F301CDC;
    case 0x7F301CE0u: goto label_7F301CE0;
    case 0x7F301CE4u: goto label_7F301CE4;
    case 0x7F301CE8u: goto label_7F301CE8;
    case 0x7F301CECu: goto label_7F301CEC;
    case 0x7F301CF0u: goto label_7F301CF0;
    case 0x7F301CF4u: goto label_7F301CF4;
    case 0x7F301CF8u: goto label_7F301CF8;
    case 0x7F301CFCu: goto label_7F301CFC;
    case 0x7F301D00u: goto label_7F301D00;
    case 0x7F301D04u: goto label_7F301D04;
    case 0x7F301D08u: goto label_7F301D08;
    case 0x7F301D0Cu: goto label_7F301D0C;
    case 0x7F301D10u: goto label_7F301D10;
    case 0x7F301D14u: goto label_7F301D14;
    case 0x7F301D18u: goto label_7F301D18;
    case 0x7F301D1Cu: goto label_7F301D1C;
    case 0x7F301D20u: goto label_7F301D20;
    case 0x7F301D24u: goto label_7F301D24;
    case 0x7F301D28u: goto label_7F301D28;
    case 0x7F301D2Cu: goto label_7F301D2C;
    case 0x7F301D30u: goto label_7F301D30;
    case 0x7F301D34u: goto label_7F301D34;
    case 0x7F301D38u: goto label_7F301D38;
    case 0x7F301D3Cu: goto label_7F301D3C;
    case 0x7F301D40u: goto label_7F301D40;
    case 0x7F301D44u: goto label_7F301D44;
    case 0x7F301D48u: goto label_7F301D48;
    case 0x7F301D4Cu: goto label_7F301D4C;
    case 0x7F301D50u: goto label_7F301D50;
    case 0x7F301D54u: goto label_7F301D54;
    case 0x7F301D58u: goto label_7F301D58;
    case 0x7F301D5Cu: goto label_7F301D5C;
    case 0x7F301D60u: goto label_7F301D60;
    case 0x7F301D64u: goto label_7F301D64;
    case 0x7F301D68u: goto label_7F301D68;
    case 0x7F301D6Cu: goto label_7F301D6C;
    case 0x7F301D70u: goto label_7F301D70;
    case 0x7F301D74u: goto label_7F301D74;
    case 0x7F301D78u: goto label_7F301D78;
    case 0x7F301D7Cu: goto label_7F301D7C;
    case 0x7F301D80u: goto label_7F301D80;
    case 0x7F301D84u: goto label_7F301D84;
    case 0x7F301D88u: goto label_7F301D88;
    case 0x7F301D8Cu: goto label_7F301D8C;
    case 0x7F301D90u: goto label_7F301D90;
    case 0x7F301D94u: goto label_7F301D94;
    case 0x7F301D98u: goto label_7F301D98;
    case 0x7F301D9Cu: goto label_7F301D9C;
    case 0x7F301DA0u: goto label_7F301DA0;
    case 0x7F301DA4u: goto label_7F301DA4;
    case 0x7F301DA8u: goto label_7F301DA8;
    case 0x7F301DACu: goto label_7F301DAC;
    case 0x7F301DB0u: goto label_7F301DB0;
    case 0x7F301DB4u: goto label_7F301DB4;
    case 0x7F301DB8u: goto label_7F301DB8;
    case 0x7F301DBCu: goto label_7F301DBC;
    case 0x7F301DC0u: goto label_7F301DC0;
    case 0x7F301DC4u: goto label_7F301DC4;
    case 0x7F301DC8u: goto label_7F301DC8;
    case 0x7F301DCCu: goto label_7F301DCC;
    case 0x7F301DD0u: goto label_7F301DD0;
    case 0x7F301DD4u: goto label_7F301DD4;
    case 0x7F301DD8u: goto label_7F301DD8;
    case 0x7F301DDCu: goto label_7F301DDC;
    case 0x7F301DE0u: goto label_7F301DE0;
    case 0x7F301DE4u: goto label_7F301DE4;
    case 0x7F301DE8u: goto label_7F301DE8;
    case 0x7F301DECu: goto label_7F301DEC;
    case 0x7F301DF0u: goto label_7F301DF0;
    case 0x7F301DF4u: goto label_7F301DF4;
    case 0x7F301DF8u: goto label_7F301DF8;
    case 0x7F301DFCu: goto label_7F301DFC;
    case 0x7F301E00u: goto label_7F301E00;
    case 0x7F301E04u: goto label_7F301E04;
    case 0x7F301E08u: goto label_7F301E08;
    case 0x7F301E0Cu: goto label_7F301E0C;
    case 0x7F301E10u: goto label_7F301E10;
    case 0x7F301E14u: goto label_7F301E14;
    case 0x7F301E18u: goto label_7F301E18;
    case 0x7F301E1Cu: goto label_7F301E1C;
    case 0x7F301E20u: goto label_7F301E20;
    case 0x7F301E24u: goto label_7F301E24;
    case 0x7F301E28u: goto label_7F301E28;
    case 0x7F301E2Cu: goto label_7F301E2C;
    case 0x7F301E30u: goto label_7F301E30;
    case 0x7F301E34u: goto label_7F301E34;
    case 0x7F301E38u: goto label_7F301E38;
    case 0x7F301E3Cu: goto label_7F301E3C;
    case 0x7F301E40u: goto label_7F301E40;
    case 0x7F301E44u: goto label_7F301E44;
    case 0x7F301E48u: goto label_7F301E48;
    case 0x7F301E4Cu: goto label_7F301E4C;
    case 0x7F301E50u: goto label_7F301E50;
    case 0x7F301E54u: goto label_7F301E54;
    case 0x7F301E58u: goto label_7F301E58;
    case 0x7F301E5Cu: goto label_7F301E5C;
    case 0x7F301E60u: goto label_7F301E60;
    case 0x7F301E64u: goto label_7F301E64;
    case 0x7F301E68u: goto label_7F301E68;
    case 0x7F301E6Cu: goto label_7F301E6C;
    case 0x7F301E70u: goto label_7F301E70;
    case 0x7F301E74u: goto label_7F301E74;
    case 0x7F301E78u: goto label_7F301E78;
    case 0x7F301E7Cu: goto label_7F301E7C;
    case 0x7F301E80u: goto label_7F301E80;
    case 0x7F301E84u: goto label_7F301E84;
    case 0x7F301E88u: goto label_7F301E88;
    case 0x7F301E8Cu: goto label_7F301E8C;
    case 0x7F301E90u: goto label_7F301E90;
    case 0x7F301E94u: goto label_7F301E94;
    case 0x7F301E98u: goto label_7F301E98;
    case 0x7F301E9Cu: goto label_7F301E9C;
    case 0x7F301EA0u: goto label_7F301EA0;
    case 0x7F301EA4u: goto label_7F301EA4;
    case 0x7F301EA8u: goto label_7F301EA8;
    case 0x7F301EACu: goto label_7F301EAC;
    case 0x7F301EB0u: goto label_7F301EB0;
    case 0x7F301EB4u: goto label_7F301EB4;
    case 0x7F301EB8u: goto label_7F301EB8;
    case 0x7F301EBCu: goto label_7F301EBC;
    case 0x7F301EC0u: goto label_7F301EC0;
    case 0x7F301EC4u: goto label_7F301EC4;
    case 0x7F301EC8u: goto label_7F301EC8;
    case 0x7F301ECCu: goto label_7F301ECC;
    case 0x7F301ED0u: goto label_7F301ED0;
    case 0x7F301ED4u: goto label_7F301ED4;
    case 0x7F301ED8u: goto label_7F301ED8;
    case 0x7F301EDCu: goto label_7F301EDC;
    case 0x7F301EE0u: goto label_7F301EE0;
    case 0x7F301EE4u: goto label_7F301EE4;
    case 0x7F301EE8u: goto label_7F301EE8;
    case 0x7F301EECu: goto label_7F301EEC;
    case 0x7F301EF0u: goto label_7F301EF0;
    case 0x7F301EF4u: goto label_7F301EF4;
    case 0x7F301EF8u: goto label_7F301EF8;
    case 0x7F301EFCu: goto label_7F301EFC;
    case 0x7F301F00u: goto label_7F301F00;
    case 0x7F301F04u: goto label_7F301F04;
    case 0x7F301F08u: goto label_7F301F08;
    case 0x7F301F0Cu: goto label_7F301F0C;
    case 0x7F301F10u: goto label_7F301F10;
    case 0x7F301F14u: goto label_7F301F14;
    case 0x7F301F18u: goto label_7F301F18;
    case 0x7F301F1Cu: goto label_7F301F1C;
    case 0x7F301F20u: goto label_7F301F20;
    case 0x7F301F24u: goto label_7F301F24;
    case 0x7F301F28u: goto label_7F301F28;
    case 0x7F301F2Cu: goto label_7F301F2C;
    case 0x7F301F30u: goto label_7F301F30;
    case 0x7F301F34u: goto label_7F301F34;
    case 0x7F301F38u: goto label_7F301F38;
    case 0x7F301F3Cu: goto label_7F301F3C;
    case 0x7F301F40u: goto label_7F301F40;
    case 0x7F301F44u: goto label_7F301F44;
    case 0x7F301F48u: goto label_7F301F48;
    case 0x7F301F4Cu: goto label_7F301F4C;
    case 0x7F301F50u: goto label_7F301F50;
    case 0x7F301F54u: goto label_7F301F54;
    case 0x7F301F58u: goto label_7F301F58;
    case 0x7F301F5Cu: goto label_7F301F5C;
    case 0x7F301F60u: goto label_7F301F60;
    case 0x7F301F64u: goto label_7F301F64;
    case 0x7F301F68u: goto label_7F301F68;
    case 0x7F301F6Cu: goto label_7F301F6C;
    case 0x7F301F70u: goto label_7F301F70;
    case 0x7F301F74u: goto label_7F301F74;
    case 0x7F301F78u: goto label_7F301F78;
    case 0x7F301F7Cu: goto label_7F301F7C;
    case 0x7F301F80u: goto label_7F301F80;
    case 0x7F301F84u: goto label_7F301F84;
    case 0x7F301F88u: goto label_7F301F88;
    case 0x7F301F8Cu: goto label_7F301F8C;
    case 0x7F301F90u: goto label_7F301F90;
    case 0x7F301F94u: goto label_7F301F94;
    case 0x7F301F98u: goto label_7F301F98;
    case 0x7F301F9Cu: goto label_7F301F9C;
    case 0x7F301FA0u: goto label_7F301FA0;
    case 0x7F301FA4u: goto label_7F301FA4;
    case 0x7F301FA8u: goto label_7F301FA8;
    case 0x7F301FACu: goto label_7F301FAC;
    case 0x7F301FB0u: goto label_7F301FB0;
    case 0x7F301FB4u: goto label_7F301FB4;
    case 0x7F301FB8u: goto label_7F301FB8;
    case 0x7F301FBCu: goto label_7F301FBC;
    case 0x7F301FC0u: goto label_7F301FC0;
    case 0x7F301FC4u: goto label_7F301FC4;
    case 0x7F301FC8u: goto label_7F301FC8;
    case 0x7F301FCCu: goto label_7F301FCC;
    case 0x7F301FD0u: goto label_7F301FD0;
    case 0x7F301FD4u: goto label_7F301FD4;
    case 0x7F301FD8u: goto label_7F301FD8;
    case 0x7F301FDCu: goto label_7F301FDC;
    case 0x7F301FE0u: goto label_7F301FE0;
    case 0x7F301FE4u: goto label_7F301FE4;
    case 0x7F301FE8u: goto label_7F301FE8;
    case 0x7F301FECu: goto label_7F301FEC;
    case 0x7F301FF0u: goto label_7F301FF0;
    case 0x7F301FF4u: goto label_7F301FF4;
    case 0x7F301FF8u: goto label_7F301FF8;
    case 0x7F301FFCu: goto label_7F301FFC;
    case 0x7F302000u: goto label_7F302000;
    case 0x7F302004u: goto label_7F302004;
    case 0x7F302008u: goto label_7F302008;
    case 0x7F30200Cu: goto label_7F30200C;
    case 0x7F302010u: goto label_7F302010;
    case 0x7F302014u: goto label_7F302014;
    case 0x7F302018u: goto label_7F302018;
    case 0x7F30201Cu: goto label_7F30201C;
    case 0x7F302020u: goto label_7F302020;
    case 0x7F302024u: goto label_7F302024;
    case 0x7F302028u: goto label_7F302028;
    case 0x7F30202Cu: goto label_7F30202C;
    case 0x7F302030u: goto label_7F302030;
    case 0x7F302034u: goto label_7F302034;
    case 0x7F302038u: goto label_7F302038;
    case 0x7F30203Cu: goto label_7F30203C;
    case 0x7F302040u: goto label_7F302040;
    case 0x7F302044u: goto label_7F302044;
    case 0x7F302048u: goto label_7F302048;
    case 0x7F30204Cu: goto label_7F30204C;
    case 0x7F302050u: goto label_7F302050;
    case 0x7F302054u: goto label_7F302054;
    case 0x7F302058u: goto label_7F302058;
    case 0x7F30205Cu: goto label_7F30205C;
    case 0x7F302060u: goto label_7F302060;
    case 0x7F302064u: goto label_7F302064;
    case 0x7F302068u: goto label_7F302068;
    case 0x7F30206Cu: goto label_7F30206C;
    case 0x7F302070u: goto label_7F302070;
    case 0x7F302074u: goto label_7F302074;
    case 0x7F302078u: goto label_7F302078;
    case 0x7F30207Cu: goto label_7F30207C;
    case 0x7F302080u: goto label_7F302080;
    case 0x7F302084u: goto label_7F302084;
    case 0x7F302088u: goto label_7F302088;
    case 0x7F30208Cu: goto label_7F30208C;
    case 0x7F302090u: goto label_7F302090;
    case 0x7F302094u: goto label_7F302094;
    case 0x7F302098u: goto label_7F302098;
    case 0x7F30209Cu: goto label_7F30209C;
    case 0x7F3020A0u: goto label_7F3020A0;
    case 0x7F3020A4u: goto label_7F3020A4;
    case 0x7F3020A8u: goto label_7F3020A8;
    case 0x7F3020ACu: goto label_7F3020AC;
    case 0x7F3020B0u: goto label_7F3020B0;
    case 0x7F3020B4u: goto label_7F3020B4;
    case 0x7F3020B8u: goto label_7F3020B8;
    case 0x7F3020BCu: goto label_7F3020BC;
    case 0x7F3020C0u: goto label_7F3020C0;
    case 0x7F3020C4u: goto label_7F3020C4;
    case 0x7F3020C8u: goto label_7F3020C8;
    case 0x7F3020CCu: goto label_7F3020CC;
    case 0x7F3020D0u: goto label_7F3020D0;
    case 0x7F3020D4u: goto label_7F3020D4;
    case 0x7F3020D8u: goto label_7F3020D8;
    case 0x7F3020DCu: goto label_7F3020DC;
    case 0x7F3020E0u: goto label_7F3020E0;
    case 0x7F3020E4u: goto label_7F3020E4;
    case 0x7F3020E8u: goto label_7F3020E8;
    case 0x7F3020ECu: goto label_7F3020EC;
    case 0x7F3020F0u: goto label_7F3020F0;
    case 0x7F3020F4u: goto label_7F3020F4;
    case 0x7F3020F8u: goto label_7F3020F8;
    case 0x7F3020FCu: goto label_7F3020FC;
    case 0x7F302100u: goto label_7F302100;
    case 0x7F302104u: goto label_7F302104;
    case 0x7F302108u: goto label_7F302108;
    case 0x7F30210Cu: goto label_7F30210C;
    case 0x7F302110u: goto label_7F302110;
    case 0x7F302114u: goto label_7F302114;
    case 0x7F302118u: goto label_7F302118;
    case 0x7F30211Cu: goto label_7F30211C;
    case 0x7F302120u: goto label_7F302120;
    case 0x7F302124u: goto label_7F302124;
    case 0x7F302128u: goto label_7F302128;
    case 0x7F30212Cu: goto label_7F30212C;
    case 0x7F302130u: goto label_7F302130;
    case 0x7F302134u: goto label_7F302134;
    case 0x7F302138u: goto label_7F302138;
    case 0x7F30213Cu: goto label_7F30213C;
    case 0x7F302140u: goto label_7F302140;
    case 0x7F302144u: goto label_7F302144;
    case 0x7F302148u: goto label_7F302148;
    case 0x7F30214Cu: goto label_7F30214C;
    case 0x7F302150u: goto label_7F302150;
    case 0x7F302154u: goto label_7F302154;
    case 0x7F302158u: goto label_7F302158;
    case 0x7F30215Cu: goto label_7F30215C;
    case 0x7F302160u: goto label_7F302160;
    case 0x7F302164u: goto label_7F302164;
    case 0x7F302168u: goto label_7F302168;
    case 0x7F30216Cu: goto label_7F30216C;
    case 0x7F302170u: goto label_7F302170;
    case 0x7F302174u: goto label_7F302174;
    case 0x7F302178u: goto label_7F302178;
    case 0x7F30217Cu: goto label_7F30217C;
    case 0x7F302180u: goto label_7F302180;
    case 0x7F302184u: goto label_7F302184;
    case 0x7F302188u: goto label_7F302188;
    case 0x7F30218Cu: goto label_7F30218C;
    case 0x7F302190u: goto label_7F302190;
    case 0x7F302194u: goto label_7F302194;
    case 0x7F302198u: goto label_7F302198;
    case 0x7F30219Cu: goto label_7F30219C;
    case 0x7F3021A0u: goto label_7F3021A0;
    case 0x7F3021A4u: goto label_7F3021A4;
    case 0x7F3021A8u: goto label_7F3021A8;
    case 0x7F3021ACu: goto label_7F3021AC;
    case 0x7F3021B0u: goto label_7F3021B0;
    case 0x7F3021B4u: goto label_7F3021B4;
    case 0x7F3021B8u: goto label_7F3021B8;
    case 0x7F3021BCu: goto label_7F3021BC;
    case 0x7F3021C0u: goto label_7F3021C0;
    case 0x7F3021C4u: goto label_7F3021C4;
    case 0x7F3021C8u: goto label_7F3021C8;
    case 0x7F3021CCu: goto label_7F3021CC;
    case 0x7F3021D0u: goto label_7F3021D0;
    case 0x7F3021D4u: goto label_7F3021D4;
    case 0x7F3021D8u: goto label_7F3021D8;
    case 0x7F3021DCu: goto label_7F3021DC;
    case 0x7F3021E0u: goto label_7F3021E0;
    case 0x7F3021E4u: goto label_7F3021E4;
    case 0x7F3021E8u: goto label_7F3021E8;
    case 0x7F3021ECu: goto label_7F3021EC;
    case 0x7F3021F0u: goto label_7F3021F0;
    case 0x7F3021F4u: goto label_7F3021F4;
    case 0x7F3021F8u: goto label_7F3021F8;
    case 0x7F3021FCu: goto label_7F3021FC;
    case 0x7F302200u: goto label_7F302200;
    case 0x7F302204u: goto label_7F302204;
    case 0x7F302208u: goto label_7F302208;
    case 0x7F30220Cu: goto label_7F30220C;
    case 0x7F302210u: goto label_7F302210;
    case 0x7F302214u: goto label_7F302214;
    case 0x7F302218u: goto label_7F302218;
    case 0x7F30221Cu: goto label_7F30221C;
    case 0x7F302220u: goto label_7F302220;
    case 0x7F302224u: goto label_7F302224;
    case 0x7F302228u: goto label_7F302228;
    case 0x7F30222Cu: goto label_7F30222C;
    case 0x7F302230u: goto label_7F302230;
    case 0x7F302234u: goto label_7F302234;
    case 0x7F302238u: goto label_7F302238;
    case 0x7F30223Cu: goto label_7F30223C;
    case 0x7F302240u: goto label_7F302240;
    case 0x7F302244u: goto label_7F302244;
    case 0x7F302248u: goto label_7F302248;
    case 0x7F30224Cu: goto label_7F30224C;
    case 0x7F302250u: goto label_7F302250;
    case 0x7F302254u: goto label_7F302254;
    case 0x7F302258u: goto label_7F302258;
    case 0x7F30225Cu: goto label_7F30225C;
    case 0x7F302260u: goto label_7F302260;
    case 0x7F302264u: goto label_7F302264;
    case 0x7F302268u: goto label_7F302268;
    case 0x7F30226Cu: goto label_7F30226C;
    case 0x7F302270u: goto label_7F302270;
    case 0x7F302274u: goto label_7F302274;
    case 0x7F302278u: goto label_7F302278;
    case 0x7F30227Cu: goto label_7F30227C;
    case 0x7F302280u: goto label_7F302280;
    case 0x7F302284u: goto label_7F302284;
    case 0x7F302288u: goto label_7F302288;
    case 0x7F30228Cu: goto label_7F30228C;
    case 0x7F302290u: goto label_7F302290;
    case 0x7F302294u: goto label_7F302294;
    case 0x7F302298u: goto label_7F302298;
    case 0x7F30229Cu: goto label_7F30229C;
    case 0x7F3022A0u: goto label_7F3022A0;
    case 0x7F3022A4u: goto label_7F3022A4;
    case 0x7F3022A8u: goto label_7F3022A8;
    case 0x7F3022ACu: goto label_7F3022AC;
    case 0x7F3022B0u: goto label_7F3022B0;
    case 0x7F3022B4u: goto label_7F3022B4;
    case 0x7F3022B8u: goto label_7F3022B8;
    case 0x7F3022BCu: goto label_7F3022BC;
    case 0x7F3022C0u: goto label_7F3022C0;
    case 0x7F3022C4u: goto label_7F3022C4;
    case 0x7F3022C8u: goto label_7F3022C8;
    case 0x7F3022CCu: goto label_7F3022CC;
    case 0x7F3022D0u: goto label_7F3022D0;
    case 0x7F3022D4u: goto label_7F3022D4;
    case 0x7F3022D8u: goto label_7F3022D8;
    case 0x7F3022DCu: goto label_7F3022DC;
    case 0x7F3022E0u: goto label_7F3022E0;
    case 0x7F3022E4u: goto label_7F3022E4;
    case 0x7F3022E8u: goto label_7F3022E8;
    case 0x7F3022ECu: goto label_7F3022EC;
    case 0x7F3022F0u: goto label_7F3022F0;
    case 0x7F3022F4u: goto label_7F3022F4;
    case 0x7F3022F8u: goto label_7F3022F8;
    case 0x7F3022FCu: goto label_7F3022FC;
    case 0x7F302300u: goto label_7F302300;
    case 0x7F302304u: goto label_7F302304;
    case 0x7F302308u: goto label_7F302308;
    case 0x7F30230Cu: goto label_7F30230C;
    case 0x7F302310u: goto label_7F302310;
    case 0x7F302314u: goto label_7F302314;
    case 0x7F302318u: goto label_7F302318;
    case 0x7F30231Cu: goto label_7F30231C;
    case 0x7F302320u: goto label_7F302320;
    case 0x7F302324u: goto label_7F302324;
    case 0x7F302328u: goto label_7F302328;
    case 0x7F30232Cu: goto label_7F30232C;
    case 0x7F302330u: goto label_7F302330;
    case 0x7F302334u: goto label_7F302334;
    case 0x7F302338u: goto label_7F302338;
    case 0x7F30233Cu: goto label_7F30233C;
    case 0x7F302340u: goto label_7F302340;
    case 0x7F302344u: goto label_7F302344;
    case 0x7F302348u: goto label_7F302348;
    case 0x7F30234Cu: goto label_7F30234C;
    case 0x7F302350u: goto label_7F302350;
    case 0x7F302354u: goto label_7F302354;
    case 0x7F302358u: goto label_7F302358;
    case 0x7F30235Cu: goto label_7F30235C;
    case 0x7F302360u: goto label_7F302360;
    case 0x7F302364u: goto label_7F302364;
    case 0x7F302368u: goto label_7F302368;
    case 0x7F30236Cu: goto label_7F30236C;
    case 0x7F302370u: goto label_7F302370;
    case 0x7F302374u: goto label_7F302374;
    case 0x7F302378u: goto label_7F302378;
    case 0x7F30237Cu: goto label_7F30237C;
    case 0x7F302380u: goto label_7F302380;
    case 0x7F302384u: goto label_7F302384;
    case 0x7F302388u: goto label_7F302388;
    case 0x7F30238Cu: goto label_7F30238C;
    case 0x7F302390u: goto label_7F302390;
    case 0x7F302394u: goto label_7F302394;
    case 0x7F302398u: goto label_7F302398;
    case 0x7F30239Cu: goto label_7F30239C;
    case 0x7F3023A0u: goto label_7F3023A0;
    case 0x7F3023A4u: goto label_7F3023A4;
    case 0x7F3023A8u: goto label_7F3023A8;
    case 0x7F3023ACu: goto label_7F3023AC;
    case 0x7F3023B0u: goto label_7F3023B0;
    case 0x7F3023B4u: goto label_7F3023B4;
    case 0x7F3023B8u: goto label_7F3023B8;
    case 0x7F3023BCu: goto label_7F3023BC;
    case 0x7F3023C0u: goto label_7F3023C0;
    case 0x7F3023C4u: goto label_7F3023C4;
    case 0x7F3023C8u: goto label_7F3023C8;
    case 0x7F3023CCu: goto label_7F3023CC;
    case 0x7F3023D0u: goto label_7F3023D0;
    case 0x7F3023D4u: goto label_7F3023D4;
    case 0x7F3023D8u: goto label_7F3023D8;
    case 0x7F3023DCu: goto label_7F3023DC;
    case 0x7F3023E0u: goto label_7F3023E0;
    case 0x7F3023E4u: goto label_7F3023E4;
    case 0x7F3023E8u: goto label_7F3023E8;
    case 0x7F3023ECu: goto label_7F3023EC;
    case 0x7F3023F0u: goto label_7F3023F0;
    case 0x7F3023F4u: goto label_7F3023F4;
    case 0x7F3023F8u: goto label_7F3023F8;
    case 0x7F3023FCu: goto label_7F3023FC;
    case 0x7F302400u: goto label_7F302400;
    case 0x7F302404u: goto label_7F302404;
    case 0x7F302408u: goto label_7F302408;
    case 0x7F30240Cu: goto label_7F30240C;
    case 0x7F302410u: goto label_7F302410;
    case 0x7F302414u: goto label_7F302414;
    case 0x7F302418u: goto label_7F302418;
    case 0x7F30241Cu: goto label_7F30241C;
    case 0x7F302420u: goto label_7F302420;
    case 0x7F302424u: goto label_7F302424;
    case 0x7F302428u: goto label_7F302428;
    case 0x7F30242Cu: goto label_7F30242C;
    case 0x7F302430u: goto label_7F302430;
    case 0x7F302434u: goto label_7F302434;
    case 0x7F302438u: goto label_7F302438;
    case 0x7F30243Cu: goto label_7F30243C;
    case 0x7F302440u: goto label_7F302440;
    case 0x7F302444u: goto label_7F302444;
    case 0x7F302448u: goto label_7F302448;
    case 0x7F30244Cu: goto label_7F30244C;
    case 0x7F302450u: goto label_7F302450;
    case 0x7F302454u: goto label_7F302454;
    case 0x7F302458u: goto label_7F302458;
    case 0x7F30245Cu: goto label_7F30245C;
    case 0x7F302460u: goto label_7F302460;
    case 0x7F302464u: goto label_7F302464;
    case 0x7F302468u: goto label_7F302468;
    case 0x7F30246Cu: goto label_7F30246C;
    case 0x7F302470u: goto label_7F302470;
    case 0x7F302474u: goto label_7F302474;
    case 0x7F302478u: goto label_7F302478;
    case 0x7F30247Cu: goto label_7F30247C;
    case 0x7F302480u: goto label_7F302480;
    case 0x7F302484u: goto label_7F302484;
    case 0x7F302488u: goto label_7F302488;
    case 0x7F30248Cu: goto label_7F30248C;
    case 0x7F302490u: goto label_7F302490;
    case 0x7F302494u: goto label_7F302494;
    case 0x7F302498u: goto label_7F302498;
    case 0x7F30249Cu: goto label_7F30249C;
    case 0x7F3024A0u: goto label_7F3024A0;
    case 0x7F3024A4u: goto label_7F3024A4;
    case 0x7F3024A8u: goto label_7F3024A8;
    case 0x7F3024ACu: goto label_7F3024AC;
    case 0x7F3024B0u: goto label_7F3024B0;
    case 0x7F3024B4u: goto label_7F3024B4;
    case 0x7F3024B8u: goto label_7F3024B8;
    case 0x7F3024BCu: goto label_7F3024BC;
    case 0x7F3024C0u: goto label_7F3024C0;
    case 0x7F3024C4u: goto label_7F3024C4;
    case 0x7F3024C8u: goto label_7F3024C8;
    case 0x7F3024CCu: goto label_7F3024CC;
    case 0x7F3024D0u: goto label_7F3024D0;
    case 0x7F3024D4u: goto label_7F3024D4;
    case 0x7F3024D8u: goto label_7F3024D8;
    case 0x7F3024DCu: goto label_7F3024DC;
    case 0x7F3024E0u: goto label_7F3024E0;
    case 0x7F3024E4u: goto label_7F3024E4;
    case 0x7F3024E8u: goto label_7F3024E8;
    case 0x7F3024ECu: goto label_7F3024EC;
    case 0x7F3024F0u: goto label_7F3024F0;
    case 0x7F3024F4u: goto label_7F3024F4;
    case 0x7F3024F8u: goto label_7F3024F8;
    case 0x7F3024FCu: goto label_7F3024FC;
    case 0x7F302500u: goto label_7F302500;
    case 0x7F302504u: goto label_7F302504;
    case 0x7F302508u: goto label_7F302508;
    case 0x7F30250Cu: goto label_7F30250C;
    case 0x7F302510u: goto label_7F302510;
    case 0x7F302514u: goto label_7F302514;
    case 0x7F302518u: goto label_7F302518;
    case 0x7F30251Cu: goto label_7F30251C;
    case 0x7F302520u: goto label_7F302520;
    case 0x7F302524u: goto label_7F302524;
    case 0x7F302528u: goto label_7F302528;
    case 0x7F30252Cu: goto label_7F30252C;
    case 0x7F302530u: goto label_7F302530;
    case 0x7F302534u: goto label_7F302534;
    case 0x7F302538u: goto label_7F302538;
    case 0x7F30253Cu: goto label_7F30253C;
    case 0x7F302540u: goto label_7F302540;
    case 0x7F302544u: goto label_7F302544;
    case 0x7F302548u: goto label_7F302548;
    case 0x7F30254Cu: goto label_7F30254C;
    case 0x7F302550u: goto label_7F302550;
    case 0x7F302554u: goto label_7F302554;
    case 0x7F302558u: goto label_7F302558;
    case 0x7F30255Cu: goto label_7F30255C;
    case 0x7F302560u: goto label_7F302560;
    case 0x7F302564u: goto label_7F302564;
    case 0x7F302568u: goto label_7F302568;
    case 0x7F30256Cu: goto label_7F30256C;
    case 0x7F302570u: goto label_7F302570;
    case 0x7F302574u: goto label_7F302574;
    case 0x7F302578u: goto label_7F302578;
    case 0x7F30257Cu: goto label_7F30257C;
    case 0x7F302580u: goto label_7F302580;
    case 0x7F302584u: goto label_7F302584;
    case 0x7F302588u: goto label_7F302588;
    case 0x7F30258Cu: goto label_7F30258C;
    case 0x7F302590u: goto label_7F302590;
    case 0x7F302594u: goto label_7F302594;
    case 0x7F302598u: goto label_7F302598;
    case 0x7F30259Cu: goto label_7F30259C;
    case 0x7F3025A0u: goto label_7F3025A0;
    case 0x7F3025A4u: goto label_7F3025A4;
    case 0x7F3025A8u: goto label_7F3025A8;
    case 0x7F3025ACu: goto label_7F3025AC;
    case 0x7F3025B0u: goto label_7F3025B0;
    case 0x7F3025B4u: goto label_7F3025B4;
    case 0x7F3025B8u: goto label_7F3025B8;
    case 0x7F3025BCu: goto label_7F3025BC;
    case 0x7F3025C0u: goto label_7F3025C0;
    case 0x7F3025C4u: goto label_7F3025C4;
    case 0x7F3025C8u: goto label_7F3025C8;
    case 0x7F3025CCu: goto label_7F3025CC;
    case 0x7F3025D0u: goto label_7F3025D0;
    case 0x7F3025D4u: goto label_7F3025D4;
    case 0x7F3025D8u: goto label_7F3025D8;
    case 0x7F3025DCu: goto label_7F3025DC;
    case 0x7F3025E0u: goto label_7F3025E0;
    case 0x7F3025E4u: goto label_7F3025E4;
    case 0x7F3025E8u: goto label_7F3025E8;
    case 0x7F3025ECu: goto label_7F3025EC;
    case 0x7F3025F0u: goto label_7F3025F0;
    case 0x7F3025F4u: goto label_7F3025F4;
    case 0x7F3025F8u: goto label_7F3025F8;
    case 0x7F3025FCu: goto label_7F3025FC;
    case 0x7F302600u: goto label_7F302600;
    case 0x7F302604u: goto label_7F302604;
    case 0x7F302608u: goto label_7F302608;
    case 0x7F30260Cu: goto label_7F30260C;
    case 0x7F302610u: goto label_7F302610;
    case 0x7F302614u: goto label_7F302614;
    case 0x7F302618u: goto label_7F302618;
    case 0x7F30261Cu: goto label_7F30261C;
    case 0x7F302620u: goto label_7F302620;
    case 0x7F302624u: goto label_7F302624;
    case 0x7F302628u: goto label_7F302628;
    case 0x7F30262Cu: goto label_7F30262C;
    case 0x7F302630u: goto label_7F302630;
    case 0x7F302634u: goto label_7F302634;
    case 0x7F302638u: goto label_7F302638;
    case 0x7F30263Cu: goto label_7F30263C;
    case 0x7F302640u: goto label_7F302640;
    case 0x7F302644u: goto label_7F302644;
    case 0x7F302648u: goto label_7F302648;
    case 0x7F30264Cu: goto label_7F30264C;
    case 0x7F302650u: goto label_7F302650;
    case 0x7F302654u: goto label_7F302654;
    case 0x7F302658u: goto label_7F302658;
    case 0x7F30265Cu: goto label_7F30265C;
    case 0x7F302660u: goto label_7F302660;
    case 0x7F302664u: goto label_7F302664;
    case 0x7F302668u: goto label_7F302668;
    case 0x7F30266Cu: goto label_7F30266C;
    case 0x7F302670u: goto label_7F302670;
    case 0x7F302674u: goto label_7F302674;
    case 0x7F302678u: goto label_7F302678;
    case 0x7F30267Cu: goto label_7F30267C;
    case 0x7F302680u: goto label_7F302680;
    case 0x7F302684u: goto label_7F302684;
    case 0x7F302688u: goto label_7F302688;
    case 0x7F30268Cu: goto label_7F30268C;
    case 0x7F302690u: goto label_7F302690;
    case 0x7F302694u: goto label_7F302694;
    case 0x7F302698u: goto label_7F302698;
    case 0x7F30269Cu: goto label_7F30269C;
    case 0x7F3026A0u: goto label_7F3026A0;
    case 0x7F3026A4u: goto label_7F3026A4;
    case 0x7F3026A8u: goto label_7F3026A8;
    case 0x7F3026ACu: goto label_7F3026AC;
    case 0x7F3026B0u: goto label_7F3026B0;
    case 0x7F3026B4u: goto label_7F3026B4;
    case 0x7F3026B8u: goto label_7F3026B8;
    case 0x7F3026BCu: goto label_7F3026BC;
    case 0x7F3026C0u: goto label_7F3026C0;
    case 0x7F3026C4u: goto label_7F3026C4;
    case 0x7F3026C8u: goto label_7F3026C8;
    case 0x7F3026CCu: goto label_7F3026CC;
    case 0x7F3026D0u: goto label_7F3026D0;
    case 0x7F3026D4u: goto label_7F3026D4;
    case 0x7F3026D8u: goto label_7F3026D8;
    case 0x7F3026DCu: goto label_7F3026DC;
    case 0x7F3026E0u: goto label_7F3026E0;
    case 0x7F3026E4u: goto label_7F3026E4;
    case 0x7F3026E8u: goto label_7F3026E8;
    case 0x7F3026ECu: goto label_7F3026EC;
    case 0x7F3026F0u: goto label_7F3026F0;
    case 0x7F3026F4u: goto label_7F3026F4;
    case 0x7F3026F8u: goto label_7F3026F8;
    case 0x7F3026FCu: goto label_7F3026FC;
    case 0x7F302700u: goto label_7F302700;
    case 0x7F302704u: goto label_7F302704;
    case 0x7F302708u: goto label_7F302708;
    case 0x7F30270Cu: goto label_7F30270C;
    case 0x7F302710u: goto label_7F302710;
    case 0x7F302714u: goto label_7F302714;
    case 0x7F302718u: goto label_7F302718;
    case 0x7F30271Cu: goto label_7F30271C;
    case 0x7F302720u: goto label_7F302720;
    case 0x7F302724u: goto label_7F302724;
    case 0x7F302728u: goto label_7F302728;
    case 0x7F30272Cu: goto label_7F30272C;
    case 0x7F302730u: goto label_7F302730;
    case 0x7F302734u: goto label_7F302734;
    case 0x7F302738u: goto label_7F302738;
    case 0x7F30273Cu: goto label_7F30273C;
    case 0x7F302740u: goto label_7F302740;
    case 0x7F302744u: goto label_7F302744;
    case 0x7F302748u: goto label_7F302748;
    case 0x7F30274Cu: goto label_7F30274C;
    case 0x7F302750u: goto label_7F302750;
    case 0x7F302754u: goto label_7F302754;
    case 0x7F302758u: goto label_7F302758;
    case 0x7F30275Cu: goto label_7F30275C;
    case 0x7F302760u: goto label_7F302760;
    case 0x7F302764u: goto label_7F302764;
    case 0x7F302768u: goto label_7F302768;
    case 0x7F30276Cu: goto label_7F30276C;
    case 0x7F302770u: goto label_7F302770;
    case 0x7F302774u: goto label_7F302774;
    case 0x7F302778u: goto label_7F302778;
    case 0x7F30277Cu: goto label_7F30277C;
    case 0x7F302780u: goto label_7F302780;
    case 0x7F302784u: goto label_7F302784;
    case 0x7F302788u: goto label_7F302788;
    case 0x7F30278Cu: goto label_7F30278C;
    case 0x7F302790u: goto label_7F302790;
    case 0x7F302794u: goto label_7F302794;
    case 0x7F302798u: goto label_7F302798;
    case 0x7F30279Cu: goto label_7F30279C;
    case 0x7F3027A0u: goto label_7F3027A0;
    case 0x7F3027A4u: goto label_7F3027A4;
    case 0x7F3027A8u: goto label_7F3027A8;
    case 0x7F3027ACu: goto label_7F3027AC;
    case 0x7F3027B0u: goto label_7F3027B0;
    case 0x7F3027B4u: goto label_7F3027B4;
    case 0x7F3027B8u: goto label_7F3027B8;
    case 0x7F3027BCu: goto label_7F3027BC;
    case 0x7F3027C0u: goto label_7F3027C0;
    case 0x7F3027C4u: goto label_7F3027C4;
    case 0x7F3027C8u: goto label_7F3027C8;
    case 0x7F3027CCu: goto label_7F3027CC;
    case 0x7F3027D0u: goto label_7F3027D0;
    case 0x7F3027D4u: goto label_7F3027D4;
    case 0x7F3027D8u: goto label_7F3027D8;
    case 0x7F3027DCu: goto label_7F3027DC;
    case 0x7F3027E0u: goto label_7F3027E0;
    case 0x7F3027E4u: goto label_7F3027E4;
    case 0x7F3027E8u: goto label_7F3027E8;
    case 0x7F3027ECu: goto label_7F3027EC;
    case 0x7F3027F0u: goto label_7F3027F0;
    case 0x7F3027F4u: goto label_7F3027F4;
    case 0x7F3027F8u: goto label_7F3027F8;
    case 0x7F3027FCu: goto label_7F3027FC;
    case 0x7F302800u: goto label_7F302800;
    case 0x7F302804u: goto label_7F302804;
    case 0x7F302808u: goto label_7F302808;
    case 0x7F30280Cu: goto label_7F30280C;
    case 0x7F302810u: goto label_7F302810;
    case 0x7F302814u: goto label_7F302814;
    case 0x7F302818u: goto label_7F302818;
    case 0x7F30281Cu: goto label_7F30281C;
    case 0x7F302820u: goto label_7F302820;
    case 0x7F302824u: goto label_7F302824;
    case 0x7F302828u: goto label_7F302828;
    case 0x7F30282Cu: goto label_7F30282C;
    case 0x7F302830u: goto label_7F302830;
    case 0x7F302834u: goto label_7F302834;
    case 0x7F302838u: goto label_7F302838;
    case 0x7F30283Cu: goto label_7F30283C;
    case 0x7F302840u: goto label_7F302840;
    case 0x7F302844u: goto label_7F302844;
    case 0x7F302848u: goto label_7F302848;
    case 0x7F30284Cu: goto label_7F30284C;
    case 0x7F302850u: goto label_7F302850;
    case 0x7F302854u: goto label_7F302854;
    case 0x7F302858u: goto label_7F302858;
    case 0x7F30285Cu: goto label_7F30285C;
    case 0x7F302860u: goto label_7F302860;
    case 0x7F302864u: goto label_7F302864;
    case 0x7F302868u: goto label_7F302868;
    case 0x7F30286Cu: goto label_7F30286C;
    case 0x7F302870u: goto label_7F302870;
    case 0x7F302874u: goto label_7F302874;
    case 0x7F302878u: goto label_7F302878;
    case 0x7F30287Cu: goto label_7F30287C;
    case 0x7F302880u: goto label_7F302880;
    case 0x7F302884u: goto label_7F302884;
    case 0x7F302888u: goto label_7F302888;
    case 0x7F30288Cu: goto label_7F30288C;
    case 0x7F302890u: goto label_7F302890;
    case 0x7F302894u: goto label_7F302894;
    case 0x7F302898u: goto label_7F302898;
    case 0x7F30289Cu: goto label_7F30289C;
    case 0x7F3028A0u: goto label_7F3028A0;
    case 0x7F3028A4u: goto label_7F3028A4;
    case 0x7F3028A8u: goto label_7F3028A8;
    case 0x7F3028ACu: goto label_7F3028AC;
    case 0x7F3028B0u: goto label_7F3028B0;
    case 0x7F3028B4u: goto label_7F3028B4;
    case 0x7F3028B8u: goto label_7F3028B8;
    case 0x7F3028BCu: goto label_7F3028BC;
    case 0x7F3028C0u: goto label_7F3028C0;
    case 0x7F3028C4u: goto label_7F3028C4;
    case 0x7F3028C8u: goto label_7F3028C8;
    case 0x7F3028CCu: goto label_7F3028CC;
    case 0x7F3028D0u: goto label_7F3028D0;
    case 0x7F3028D4u: goto label_7F3028D4;
    case 0x7F3028D8u: goto label_7F3028D8;
    case 0x7F3028DCu: goto label_7F3028DC;
    case 0x7F3028E0u: goto label_7F3028E0;
    case 0x7F3028E4u: goto label_7F3028E4;
    case 0x7F3028E8u: goto label_7F3028E8;
    case 0x7F3028ECu: goto label_7F3028EC;
    case 0x7F3028F0u: goto label_7F3028F0;
    case 0x7F3028F4u: goto label_7F3028F4;
    case 0x7F3028F8u: goto label_7F3028F8;
    case 0x7F3028FCu: goto label_7F3028FC;
    case 0x7F302900u: goto label_7F302900;
    case 0x7F302904u: goto label_7F302904;
    case 0x7F302908u: goto label_7F302908;
    case 0x7F30290Cu: goto label_7F30290C;
    case 0x7F302910u: goto label_7F302910;
    case 0x7F302914u: goto label_7F302914;
    case 0x7F302918u: goto label_7F302918;
    case 0x7F30291Cu: goto label_7F30291C;
    case 0x7F302920u: goto label_7F302920;
    case 0x7F302924u: goto label_7F302924;
    case 0x7F302928u: goto label_7F302928;
    case 0x7F30292Cu: goto label_7F30292C;
    case 0x7F302930u: goto label_7F302930;
    case 0x7F302934u: goto label_7F302934;
    case 0x7F302938u: goto label_7F302938;
    case 0x7F30293Cu: goto label_7F30293C;
    case 0x7F302940u: goto label_7F302940;
    case 0x7F302944u: goto label_7F302944;
    case 0x7F302948u: goto label_7F302948;
    case 0x7F30294Cu: goto label_7F30294C;
    case 0x7F302950u: goto label_7F302950;
    case 0x7F302954u: goto label_7F302954;
    case 0x7F302958u: goto label_7F302958;
    case 0x7F30295Cu: goto label_7F30295C;
    case 0x7F302960u: goto label_7F302960;
    case 0x7F302964u: goto label_7F302964;
    case 0x7F302968u: goto label_7F302968;
    case 0x7F30296Cu: goto label_7F30296C;
    case 0x7F302970u: goto label_7F302970;
    case 0x7F302974u: goto label_7F302974;
    case 0x7F302978u: goto label_7F302978;
    case 0x7F30297Cu: goto label_7F30297C;
    case 0x7F302980u: goto label_7F302980;
    case 0x7F302984u: goto label_7F302984;
    case 0x7F302988u: goto label_7F302988;
    case 0x7F30298Cu: goto label_7F30298C;
    case 0x7F302990u: goto label_7F302990;
    case 0x7F302994u: goto label_7F302994;
    case 0x7F302998u: goto label_7F302998;
    case 0x7F30299Cu: goto label_7F30299C;
    case 0x7F3029A0u: goto label_7F3029A0;
    case 0x7F3029A4u: goto label_7F3029A4;
    case 0x7F3029A8u: goto label_7F3029A8;
    case 0x7F3029ACu: goto label_7F3029AC;
    case 0x7F3029B0u: goto label_7F3029B0;
    case 0x7F3029B4u: goto label_7F3029B4;
    case 0x7F3029B8u: goto label_7F3029B8;
    case 0x7F3029BCu: goto label_7F3029BC;
    case 0x7F3029C0u: goto label_7F3029C0;
    case 0x7F3029C4u: goto label_7F3029C4;
    case 0x7F3029C8u: goto label_7F3029C8;
    case 0x7F3029CCu: goto label_7F3029CC;
    case 0x7F3029D0u: goto label_7F3029D0;
    case 0x7F3029D4u: goto label_7F3029D4;
    case 0x7F3029D8u: goto label_7F3029D8;
    case 0x7F3029DCu: goto label_7F3029DC;
    case 0x7F3029E0u: goto label_7F3029E0;
    case 0x7F3029E4u: goto label_7F3029E4;
    case 0x7F3029E8u: goto label_7F3029E8;
    case 0x7F3029ECu: goto label_7F3029EC;
    case 0x7F3029F0u: goto label_7F3029F0;
    case 0x7F3029F4u: goto label_7F3029F4;
    case 0x7F3029F8u: goto label_7F3029F8;
    case 0x7F3029FCu: goto label_7F3029FC;
    case 0x7F302A00u: goto label_7F302A00;
    case 0x7F302A04u: goto label_7F302A04;
    case 0x7F302A08u: goto label_7F302A08;
    case 0x7F302A0Cu: goto label_7F302A0C;
    case 0x7F302A10u: goto label_7F302A10;
    case 0x7F302A14u: goto label_7F302A14;
    case 0x7F302A18u: goto label_7F302A18;
    case 0x7F302A1Cu: goto label_7F302A1C;
    case 0x7F302A20u: goto label_7F302A20;
    case 0x7F302A24u: goto label_7F302A24;
    case 0x7F302A28u: goto label_7F302A28;
    case 0x7F302A2Cu: goto label_7F302A2C;
    case 0x7F302A30u: goto label_7F302A30;
    case 0x7F302A34u: goto label_7F302A34;
    case 0x7F302A38u: goto label_7F302A38;
    case 0x7F302A3Cu: goto label_7F302A3C;
    case 0x7F302A40u: goto label_7F302A40;
    case 0x7F302A44u: goto label_7F302A44;
    case 0x7F302A48u: goto label_7F302A48;
    case 0x7F302A4Cu: goto label_7F302A4C;
    case 0x7F302A50u: goto label_7F302A50;
    case 0x7F302A54u: goto label_7F302A54;
    case 0x7F302A58u: goto label_7F302A58;
    case 0x7F302A5Cu: goto label_7F302A5C;
    case 0x7F302A60u: goto label_7F302A60;
    case 0x7F302A64u: goto label_7F302A64;
    case 0x7F302A68u: goto label_7F302A68;
    case 0x7F302A6Cu: goto label_7F302A6C;
    case 0x7F302A70u: goto label_7F302A70;
    case 0x7F302A74u: goto label_7F302A74;
    case 0x7F302A78u: goto label_7F302A78;
    case 0x7F302A7Cu: goto label_7F302A7C;
    case 0x7F302A80u: goto label_7F302A80;
    case 0x7F302A84u: goto label_7F302A84;
    case 0x7F302A88u: goto label_7F302A88;
    case 0x7F302A8Cu: goto label_7F302A8C;
    case 0x7F302A90u: goto label_7F302A90;
    case 0x7F302A94u: goto label_7F302A94;
    case 0x7F302A98u: goto label_7F302A98;
    case 0x7F302A9Cu: goto label_7F302A9C;
    case 0x7F302AA0u: goto label_7F302AA0;
    case 0x7F302AA4u: goto label_7F302AA4;
    case 0x7F302AA8u: goto label_7F302AA8;
    case 0x7F302AACu: goto label_7F302AAC;
    case 0x7F302AB0u: goto label_7F302AB0;
    case 0x7F302AB4u: goto label_7F302AB4;
    case 0x7F302AB8u: goto label_7F302AB8;
    case 0x7F302ABCu: goto label_7F302ABC;
    case 0x7F302AC0u: goto label_7F302AC0;
    case 0x7F302AC4u: goto label_7F302AC4;
    case 0x7F302AC8u: goto label_7F302AC8;
    case 0x7F302ACCu: goto label_7F302ACC;
    case 0x7F302AD0u: goto label_7F302AD0;
    case 0x7F302AD4u: goto label_7F302AD4;
    case 0x7F302AD8u: goto label_7F302AD8;
    case 0x7F302ADCu: goto label_7F302ADC;
    case 0x7F302AE0u: goto label_7F302AE0;
    case 0x7F302AE4u: goto label_7F302AE4;
    case 0x7F302AE8u: goto label_7F302AE8;
    case 0x7F302AECu: goto label_7F302AEC;
    case 0x7F302AF0u: goto label_7F302AF0;
    case 0x7F302AF4u: goto label_7F302AF4;
    case 0x7F302AF8u: goto label_7F302AF8;
    case 0x7F302AFCu: goto label_7F302AFC;
    case 0x7F302B00u: goto label_7F302B00;
    case 0x7F302B04u: goto label_7F302B04;
    case 0x7F302B08u: goto label_7F302B08;
    case 0x7F302B0Cu: goto label_7F302B0C;
    case 0x7F302B10u: goto label_7F302B10;
    case 0x7F302B14u: goto label_7F302B14;
    case 0x7F302B18u: goto label_7F302B18;
    case 0x7F302B1Cu: goto label_7F302B1C;
    case 0x7F302B20u: goto label_7F302B20;
    case 0x7F302B24u: goto label_7F302B24;
    case 0x7F302B28u: goto label_7F302B28;
    case 0x7F302B2Cu: goto label_7F302B2C;
    case 0x7F302B30u: goto label_7F302B30;
    case 0x7F302B34u: goto label_7F302B34;
    case 0x7F302B38u: goto label_7F302B38;
    case 0x7F302B3Cu: goto label_7F302B3C;
    case 0x7F302B40u: goto label_7F302B40;
    case 0x7F302B44u: goto label_7F302B44;
    case 0x7F302B48u: goto label_7F302B48;
    case 0x7F302B4Cu: goto label_7F302B4C;
    case 0x7F302B50u: goto label_7F302B50;
    case 0x7F302B54u: goto label_7F302B54;
    case 0x7F302B58u: goto label_7F302B58;
    case 0x7F302B5Cu: goto label_7F302B5C;
    case 0x7F302B60u: goto label_7F302B60;
    case 0x7F302B64u: goto label_7F302B64;
    case 0x7F302B68u: goto label_7F302B68;
    case 0x7F302B6Cu: goto label_7F302B6C;
    case 0x7F302B70u: goto label_7F302B70;
    case 0x7F302B74u: goto label_7F302B74;
    case 0x7F302B78u: goto label_7F302B78;
    case 0x7F302B7Cu: goto label_7F302B7C;
    case 0x7F302B80u: goto label_7F302B80;
    case 0x7F302B84u: goto label_7F302B84;
    case 0x7F302B88u: goto label_7F302B88;
    case 0x7F302B8Cu: goto label_7F302B8C;
    case 0x7F302B90u: goto label_7F302B90;
    case 0x7F302B94u: goto label_7F302B94;
    case 0x7F302B98u: goto label_7F302B98;
    case 0x7F302B9Cu: goto label_7F302B9C;
    case 0x7F302BA0u: goto label_7F302BA0;
    case 0x7F302BA4u: goto label_7F302BA4;
    case 0x7F302BA8u: goto label_7F302BA8;
    case 0x7F302BACu: goto label_7F302BAC;
    case 0x7F302BB0u: goto label_7F302BB0;
    case 0x7F302BB4u: goto label_7F302BB4;
    case 0x7F302BB8u: goto label_7F302BB8;
    case 0x7F302BBCu: goto label_7F302BBC;
    case 0x7F302BC0u: goto label_7F302BC0;
    case 0x7F302BC4u: goto label_7F302BC4;
    case 0x7F302BC8u: goto label_7F302BC8;
    case 0x7F302BCCu: goto label_7F302BCC;
    case 0x7F302BD0u: goto label_7F302BD0;
    case 0x7F302BD4u: goto label_7F302BD4;
    case 0x7F302BD8u: goto label_7F302BD8;
    case 0x7F302BDCu: goto label_7F302BDC;
    case 0x7F302BE0u: goto label_7F302BE0;
    case 0x7F302BE4u: goto label_7F302BE4;
    case 0x7F302BE8u: goto label_7F302BE8;
    case 0x7F302BECu: goto label_7F302BEC;
    case 0x7F302BF0u: goto label_7F302BF0;
    case 0x7F302BF4u: goto label_7F302BF4;
    case 0x7F302BF8u: goto label_7F302BF8;
    case 0x7F302BFCu: goto label_7F302BFC;
    case 0x7F302C00u: goto label_7F302C00;
    case 0x7F302C04u: goto label_7F302C04;
    case 0x7F302C08u: goto label_7F302C08;
    case 0x7F302C0Cu: goto label_7F302C0C;
    case 0x7F302C10u: goto label_7F302C10;
    case 0x7F302C14u: goto label_7F302C14;
    case 0x7F302C18u: goto label_7F302C18;
    case 0x7F302C1Cu: goto label_7F302C1C;
    case 0x7F302C20u: goto label_7F302C20;
    case 0x7F302C24u: goto label_7F302C24;
    case 0x7F302C28u: goto label_7F302C28;
    case 0x7F302C2Cu: goto label_7F302C2C;
    case 0x7F302C30u: goto label_7F302C30;
    case 0x7F302C34u: goto label_7F302C34;
    case 0x7F302C38u: goto label_7F302C38;
    case 0x7F302C3Cu: goto label_7F302C3C;
    case 0x7F302C40u: goto label_7F302C40;
    case 0x7F302C44u: goto label_7F302C44;
    case 0x7F302C48u: goto label_7F302C48;
    case 0x7F302C4Cu: goto label_7F302C4C;
    case 0x7F302C50u: goto label_7F302C50;
    case 0x7F302C54u: goto label_7F302C54;
    case 0x7F302C58u: goto label_7F302C58;
    case 0x7F302C5Cu: goto label_7F302C5C;
    case 0x7F302C60u: goto label_7F302C60;
    case 0x7F302C64u: goto label_7F302C64;
    case 0x7F302C68u: goto label_7F302C68;
    case 0x7F302C6Cu: goto label_7F302C6C;
    case 0x7F302C70u: goto label_7F302C70;
    case 0x7F302C74u: goto label_7F302C74;
    case 0x7F302C78u: goto label_7F302C78;
    case 0x7F302C7Cu: goto label_7F302C7C;
    case 0x7F302C80u: goto label_7F302C80;
    case 0x7F302C84u: goto label_7F302C84;
    case 0x7F302C88u: goto label_7F302C88;
    case 0x7F302C8Cu: goto label_7F302C8C;
    case 0x7F302C90u: goto label_7F302C90;
    case 0x7F302C94u: goto label_7F302C94;
    case 0x7F302C98u: goto label_7F302C98;
    case 0x7F302C9Cu: goto label_7F302C9C;
    case 0x7F302CA0u: goto label_7F302CA0;
    case 0x7F302CA4u: goto label_7F302CA4;
    case 0x7F302CA8u: goto label_7F302CA8;
    case 0x7F302CACu: goto label_7F302CAC;
    case 0x7F302CB0u: goto label_7F302CB0;
    case 0x7F302CB4u: goto label_7F302CB4;
    case 0x7F302CB8u: goto label_7F302CB8;
    case 0x7F302CBCu: goto label_7F302CBC;
    case 0x7F302CC0u: goto label_7F302CC0;
    case 0x7F302CC4u: goto label_7F302CC4;
    case 0x7F302CC8u: goto label_7F302CC8;
    case 0x7F302CCCu: goto label_7F302CCC;
    case 0x7F302CD0u: goto label_7F302CD0;
    case 0x7F302CD4u: goto label_7F302CD4;
    case 0x7F302CD8u: goto label_7F302CD8;
    case 0x7F302CDCu: goto label_7F302CDC;
    case 0x7F302CE0u: goto label_7F302CE0;
    case 0x7F302CE4u: goto label_7F302CE4;
    case 0x7F302CE8u: goto label_7F302CE8;
    case 0x7F302CECu: goto label_7F302CEC;
    case 0x7F302CF0u: goto label_7F302CF0;
    case 0x7F302CF4u: goto label_7F302CF4;
    case 0x7F302CF8u: goto label_7F302CF8;
    case 0x7F302CFCu: goto label_7F302CFC;
    case 0x7F302D00u: goto label_7F302D00;
    case 0x7F302D04u: goto label_7F302D04;
    case 0x7F302D08u: goto label_7F302D08;
    case 0x7F302D0Cu: goto label_7F302D0C;
    case 0x7F302D10u: goto label_7F302D10;
    case 0x7F302D14u: goto label_7F302D14;
    case 0x7F302D18u: goto label_7F302D18;
    case 0x7F302D1Cu: goto label_7F302D1C;
    case 0x7F302D20u: goto label_7F302D20;
    case 0x7F302D24u: goto label_7F302D24;
    case 0x7F302D28u: goto label_7F302D28;
    case 0x7F302D2Cu: goto label_7F302D2C;
    case 0x7F302D30u: goto label_7F302D30;
    case 0x7F302D34u: goto label_7F302D34;
    case 0x7F302D38u: goto label_7F302D38;
    case 0x7F302D3Cu: goto label_7F302D3C;
    case 0x7F302D40u: goto label_7F302D40;
    case 0x7F302D44u: goto label_7F302D44;
    case 0x7F302D48u: goto label_7F302D48;
    case 0x7F302D4Cu: goto label_7F302D4C;
    case 0x7F302D50u: goto label_7F302D50;
    case 0x7F302D54u: goto label_7F302D54;
    case 0x7F302D58u: goto label_7F302D58;
    case 0x7F302D5Cu: goto label_7F302D5C;
    case 0x7F302D60u: goto label_7F302D60;
    case 0x7F302D64u: goto label_7F302D64;
    case 0x7F302D68u: goto label_7F302D68;
    case 0x7F302D6Cu: goto label_7F302D6C;
    case 0x7F302D70u: goto label_7F302D70;
    case 0x7F302D74u: goto label_7F302D74;
    case 0x7F302D78u: goto label_7F302D78;
    case 0x7F302D7Cu: goto label_7F302D7C;
    case 0x7F302D80u: goto label_7F302D80;
    case 0x7F302D84u: goto label_7F302D84;
    case 0x7F302D88u: goto label_7F302D88;
    case 0x7F302D8Cu: goto label_7F302D8C;
    case 0x7F302D90u: goto label_7F302D90;
    case 0x7F302D94u: goto label_7F302D94;
    case 0x7F302D98u: goto label_7F302D98;
    case 0x7F302D9Cu: goto label_7F302D9C;
    case 0x7F302DA0u: goto label_7F302DA0;
    case 0x7F302DA4u: goto label_7F302DA4;
    case 0x7F302DA8u: goto label_7F302DA8;
    case 0x7F302DACu: goto label_7F302DAC;
    case 0x7F302DB0u: goto label_7F302DB0;
    case 0x7F302DB4u: goto label_7F302DB4;
    case 0x7F302DB8u: goto label_7F302DB8;
    case 0x7F302DBCu: goto label_7F302DBC;
    case 0x7F302DC0u: goto label_7F302DC0;
    case 0x7F302DC4u: goto label_7F302DC4;
    case 0x7F302DC8u: goto label_7F302DC8;
    case 0x7F302DCCu: goto label_7F302DCC;
    case 0x7F302DD0u: goto label_7F302DD0;
    case 0x7F302DD4u: goto label_7F302DD4;
    case 0x7F302DD8u: goto label_7F302DD8;
    case 0x7F302DDCu: goto label_7F302DDC;
    case 0x7F302DE0u: goto label_7F302DE0;
    case 0x7F302DE4u: goto label_7F302DE4;
    case 0x7F302DE8u: goto label_7F302DE8;
    case 0x7F302DECu: goto label_7F302DEC;
    case 0x7F302DF0u: goto label_7F302DF0;
    case 0x7F302DF4u: goto label_7F302DF4;
    case 0x7F302DF8u: goto label_7F302DF8;
    case 0x7F302DFCu: goto label_7F302DFC;
    case 0x7F302E00u: goto label_7F302E00;
    case 0x7F302E04u: goto label_7F302E04;
    case 0x7F302E08u: goto label_7F302E08;
    case 0x7F302E0Cu: goto label_7F302E0C;
    case 0x7F302E10u: goto label_7F302E10;
    case 0x7F302E14u: goto label_7F302E14;
    case 0x7F302E18u: goto label_7F302E18;
    case 0x7F302E1Cu: goto label_7F302E1C;
    case 0x7F302E20u: goto label_7F302E20;
    case 0x7F302E24u: goto label_7F302E24;
    case 0x7F302E28u: goto label_7F302E28;
    case 0x7F302E2Cu: goto label_7F302E2C;
    case 0x7F302E30u: goto label_7F302E30;
    case 0x7F302E34u: goto label_7F302E34;
    case 0x7F302E38u: goto label_7F302E38;
    case 0x7F302E3Cu: goto label_7F302E3C;
    case 0x7F302E40u: goto label_7F302E40;
    case 0x7F302E44u: goto label_7F302E44;
    case 0x7F302E48u: goto label_7F302E48;
    case 0x7F302E4Cu: goto label_7F302E4C;
    case 0x7F302E50u: goto label_7F302E50;
    case 0x7F302E54u: goto label_7F302E54;
    case 0x7F302E58u: goto label_7F302E58;
    case 0x7F302E5Cu: goto label_7F302E5C;
    case 0x7F302E60u: goto label_7F302E60;
    case 0x7F302E64u: goto label_7F302E64;
    case 0x7F302E68u: goto label_7F302E68;
    case 0x7F302E6Cu: goto label_7F302E6C;
    case 0x7F302E70u: goto label_7F302E70;
    case 0x7F302E74u: goto label_7F302E74;
    case 0x7F302E78u: goto label_7F302E78;
    case 0x7F302E7Cu: goto label_7F302E7C;
    case 0x7F302E80u: goto label_7F302E80;
    case 0x7F302E84u: goto label_7F302E84;
    case 0x7F302E88u: goto label_7F302E88;
    case 0x7F302E8Cu: goto label_7F302E8C;
    case 0x7F302E90u: goto label_7F302E90;
    case 0x7F302E94u: goto label_7F302E94;
    case 0x7F302E98u: goto label_7F302E98;
    case 0x7F302E9Cu: goto label_7F302E9C;
    case 0x7F302EA0u: goto label_7F302EA0;
    case 0x7F302EA4u: goto label_7F302EA4;
    case 0x7F302EA8u: goto label_7F302EA8;
    case 0x7F302EACu: goto label_7F302EAC;
    case 0x7F302EB0u: goto label_7F302EB0;
    case 0x7F302EB4u: goto label_7F302EB4;
    case 0x7F302EB8u: goto label_7F302EB8;
    case 0x7F302EBCu: goto label_7F302EBC;
    case 0x7F302EC0u: goto label_7F302EC0;
    case 0x7F302EC4u: goto label_7F302EC4;
    case 0x7F302EC8u: goto label_7F302EC8;
    case 0x7F302ECCu: goto label_7F302ECC;
    case 0x7F302ED0u: goto label_7F302ED0;
    case 0x7F302ED4u: goto label_7F302ED4;
    case 0x7F302ED8u: goto label_7F302ED8;
    case 0x7F302EDCu: goto label_7F302EDC;
    case 0x7F302EE0u: goto label_7F302EE0;
    case 0x7F302EE4u: goto label_7F302EE4;
    case 0x7F302EE8u: goto label_7F302EE8;
    case 0x7F302EECu: goto label_7F302EEC;
    case 0x7F302EF0u: goto label_7F302EF0;
    case 0x7F302EF4u: goto label_7F302EF4;
    case 0x7F302EF8u: goto label_7F302EF8;
    case 0x7F302EFCu: goto label_7F302EFC;
    case 0x7F302F00u: goto label_7F302F00;
    case 0x7F302F04u: goto label_7F302F04;
    case 0x7F302F08u: goto label_7F302F08;
    case 0x7F302F0Cu: goto label_7F302F0C;
    case 0x7F302F10u: goto label_7F302F10;
    case 0x7F302F14u: goto label_7F302F14;
    case 0x7F302F18u: goto label_7F302F18;
    case 0x7F302F1Cu: goto label_7F302F1C;
    case 0x7F302F20u: goto label_7F302F20;
    case 0x7F302F24u: goto label_7F302F24;
    case 0x7F302F28u: goto label_7F302F28;
    case 0x7F302F2Cu: goto label_7F302F2C;
    case 0x7F302F30u: goto label_7F302F30;
    case 0x7F302F34u: goto label_7F302F34;
    case 0x7F302F38u: goto label_7F302F38;
    case 0x7F302F3Cu: goto label_7F302F3C;
    case 0x7F302F40u: goto label_7F302F40;
    case 0x7F302F44u: goto label_7F302F44;
    case 0x7F302F48u: goto label_7F302F48;
    case 0x7F302F4Cu: goto label_7F302F4C;
    case 0x7F302F50u: goto label_7F302F50;
    case 0x7F302F54u: goto label_7F302F54;
    case 0x7F302F58u: goto label_7F302F58;
    case 0x7F302F5Cu: goto label_7F302F5C;
    case 0x7F302F60u: goto label_7F302F60;
    case 0x7F302F64u: goto label_7F302F64;
    case 0x7F302F68u: goto label_7F302F68;
    case 0x7F302F6Cu: goto label_7F302F6C;
    case 0x7F302F70u: goto label_7F302F70;
    case 0x7F302F74u: goto label_7F302F74;
    case 0x7F302F78u: goto label_7F302F78;
    case 0x7F302F7Cu: goto label_7F302F7C;
    case 0x7F302F80u: goto label_7F302F80;
    case 0x7F302F84u: goto label_7F302F84;
    case 0x7F302F88u: goto label_7F302F88;
    case 0x7F302F8Cu: goto label_7F302F8C;
    case 0x7F302F90u: goto label_7F302F90;
    case 0x7F302F94u: goto label_7F302F94;
    case 0x7F302F98u: goto label_7F302F98;
    case 0x7F302F9Cu: goto label_7F302F9C;
    case 0x7F302FA0u: goto label_7F302FA0;
    case 0x7F302FA4u: goto label_7F302FA4;
    case 0x7F302FA8u: goto label_7F302FA8;
    case 0x7F302FACu: goto label_7F302FAC;
    case 0x7F302FB0u: goto label_7F302FB0;
    case 0x7F302FB4u: goto label_7F302FB4;
    case 0x7F302FB8u: goto label_7F302FB8;
    case 0x7F302FBCu: goto label_7F302FBC;
    case 0x7F302FC0u: goto label_7F302FC0;
    case 0x7F302FC4u: goto label_7F302FC4;
    case 0x7F302FC8u: goto label_7F302FC8;
    case 0x7F302FCCu: goto label_7F302FCC;
    case 0x7F302FD0u: goto label_7F302FD0;
    case 0x7F302FD4u: goto label_7F302FD4;
    case 0x7F302FD8u: goto label_7F302FD8;
    case 0x7F302FDCu: goto label_7F302FDC;
    case 0x7F302FE0u: goto label_7F302FE0;
    case 0x7F302FE4u: goto label_7F302FE4;
    case 0x7F302FE8u: goto label_7F302FE8;
    case 0x7F302FECu: goto label_7F302FEC;
    case 0x7F302FF0u: goto label_7F302FF0;
    case 0x7F302FF4u: goto label_7F302FF4;
    case 0x7F302FF8u: goto label_7F302FF8;
    case 0x7F302FFCu: goto label_7F302FFC;
    case 0x7F303000u: goto label_7F303000;
    case 0x7F303004u: goto label_7F303004;
    case 0x7F303008u: goto label_7F303008;
    case 0x7F30300Cu: goto label_7F30300C;
    case 0x7F303010u: goto label_7F303010;
    case 0x7F303014u: goto label_7F303014;
    case 0x7F303018u: goto label_7F303018;
    case 0x7F30301Cu: goto label_7F30301C;
    case 0x7F303020u: goto label_7F303020;
    case 0x7F303024u: goto label_7F303024;
    case 0x7F303028u: goto label_7F303028;
    case 0x7F30302Cu: goto label_7F30302C;
    case 0x7F303030u: goto label_7F303030;
    case 0x7F303034u: goto label_7F303034;
    case 0x7F303038u: goto label_7F303038;
    case 0x7F30303Cu: goto label_7F30303C;
    case 0x7F303040u: goto label_7F303040;
    case 0x7F303044u: goto label_7F303044;
    case 0x7F303048u: goto label_7F303048;
    case 0x7F30304Cu: goto label_7F30304C;
    case 0x7F303050u: goto label_7F303050;
    case 0x7F303054u: goto label_7F303054;
    case 0x7F303058u: goto label_7F303058;
    case 0x7F30305Cu: goto label_7F30305C;
    case 0x7F303060u: goto label_7F303060;
    case 0x7F303064u: goto label_7F303064;
    case 0x7F303068u: goto label_7F303068;
    case 0x7F30306Cu: goto label_7F30306C;
    case 0x7F303070u: goto label_7F303070;
    case 0x7F303074u: goto label_7F303074;
    case 0x7F303078u: goto label_7F303078;
    case 0x7F30307Cu: goto label_7F30307C;
    case 0x7F303080u: goto label_7F303080;
    case 0x7F303084u: goto label_7F303084;
    case 0x7F303088u: goto label_7F303088;
    case 0x7F30308Cu: goto label_7F30308C;
    case 0x7F303090u: goto label_7F303090;
    case 0x7F303094u: goto label_7F303094;
    case 0x7F303098u: goto label_7F303098;
    case 0x7F30309Cu: goto label_7F30309C;
    case 0x7F3030A0u: goto label_7F3030A0;
    case 0x7F3030A4u: goto label_7F3030A4;
    case 0x7F3030A8u: goto label_7F3030A8;
    case 0x7F3030ACu: goto label_7F3030AC;
    case 0x7F3030B0u: goto label_7F3030B0;
    case 0x7F3030B4u: goto label_7F3030B4;
    case 0x7F3030B8u: goto label_7F3030B8;
    case 0x7F3030BCu: goto label_7F3030BC;
    case 0x7F3030C0u: goto label_7F3030C0;
    case 0x7F3030C4u: goto label_7F3030C4;
    case 0x7F3030C8u: goto label_7F3030C8;
    case 0x7F3030CCu: goto label_7F3030CC;
    case 0x7F3030D0u: goto label_7F3030D0;
    case 0x7F3030D4u: goto label_7F3030D4;
    case 0x7F3030D8u: goto label_7F3030D8;
    case 0x7F3030DCu: goto label_7F3030DC;
    case 0x7F3030E0u: goto label_7F3030E0;
    case 0x7F3030E4u: goto label_7F3030E4;
    case 0x7F3030E8u: goto label_7F3030E8;
    case 0x7F3030ECu: goto label_7F3030EC;
    case 0x7F3030F0u: goto label_7F3030F0;
    case 0x7F3030F4u: goto label_7F3030F4;
    case 0x7F3030F8u: goto label_7F3030F8;
    case 0x7F3030FCu: goto label_7F3030FC;
    case 0x7F303100u: goto label_7F303100;
    case 0x7F303104u: goto label_7F303104;
    case 0x7F303108u: goto label_7F303108;
    case 0x7F30310Cu: goto label_7F30310C;
    case 0x7F303110u: goto label_7F303110;
    case 0x7F303114u: goto label_7F303114;
    case 0x7F303118u: goto label_7F303118;
    case 0x7F30311Cu: goto label_7F30311C;
    case 0x7F303120u: goto label_7F303120;
    case 0x7F303124u: goto label_7F303124;
    case 0x7F303128u: goto label_7F303128;
    case 0x7F30312Cu: goto label_7F30312C;
    case 0x7F303130u: goto label_7F303130;
    case 0x7F303134u: goto label_7F303134;
    case 0x7F303138u: goto label_7F303138;
    case 0x7F30313Cu: goto label_7F30313C;
    case 0x7F303140u: goto label_7F303140;
    case 0x7F303144u: goto label_7F303144;
    case 0x7F303148u: goto label_7F303148;
    case 0x7F30314Cu: goto label_7F30314C;
    case 0x7F303150u: goto label_7F303150;
    case 0x7F303154u: goto label_7F303154;
    case 0x7F303158u: goto label_7F303158;
    case 0x7F30315Cu: goto label_7F30315C;
    case 0x7F303160u: goto label_7F303160;
    case 0x7F303164u: goto label_7F303164;
    case 0x7F303168u: goto label_7F303168;
    case 0x7F30316Cu: goto label_7F30316C;
    case 0x7F303170u: goto label_7F303170;
    case 0x7F303174u: goto label_7F303174;
    case 0x7F303178u: goto label_7F303178;
    case 0x7F30317Cu: goto label_7F30317C;
    case 0x7F303180u: goto label_7F303180;
    case 0x7F303184u: goto label_7F303184;
    case 0x7F303188u: goto label_7F303188;
    case 0x7F30318Cu: goto label_7F30318C;
    case 0x7F303190u: goto label_7F303190;
    case 0x7F303194u: goto label_7F303194;
    case 0x7F303198u: goto label_7F303198;
    case 0x7F30319Cu: goto label_7F30319C;
    case 0x7F3031A0u: goto label_7F3031A0;
    case 0x7F3031A4u: goto label_7F3031A4;
    case 0x7F3031A8u: goto label_7F3031A8;
    case 0x7F3031ACu: goto label_7F3031AC;
    case 0x7F3031B0u: goto label_7F3031B0;
    case 0x7F3031B4u: goto label_7F3031B4;
    case 0x7F3031B8u: goto label_7F3031B8;
    case 0x7F3031BCu: goto label_7F3031BC;
    case 0x7F3031C0u: goto label_7F3031C0;
    case 0x7F3031C4u: goto label_7F3031C4;
    case 0x7F3031C8u: goto label_7F3031C8;
    case 0x7F3031CCu: goto label_7F3031CC;
    case 0x7F3031D0u: goto label_7F3031D0;
    case 0x7F3031D4u: goto label_7F3031D4;
    case 0x7F3031D8u: goto label_7F3031D8;
    case 0x7F3031DCu: goto label_7F3031DC;
    case 0x7F3031E0u: goto label_7F3031E0;
    case 0x7F3031E4u: goto label_7F3031E4;
    case 0x7F3031E8u: goto label_7F3031E8;
    case 0x7F3031ECu: goto label_7F3031EC;
    case 0x7F3031F0u: goto label_7F3031F0;
    case 0x7F3031F4u: goto label_7F3031F4;
    case 0x7F3031F8u: goto label_7F3031F8;
    case 0x7F3031FCu: goto label_7F3031FC;
    case 0x7F303200u: goto label_7F303200;
    case 0x7F303204u: goto label_7F303204;
    case 0x7F303208u: goto label_7F303208;
    case 0x7F30320Cu: goto label_7F30320C;
    case 0x7F303210u: goto label_7F303210;
    case 0x7F303214u: goto label_7F303214;
    case 0x7F303218u: goto label_7F303218;
    case 0x7F30321Cu: goto label_7F30321C;
    case 0x7F303220u: goto label_7F303220;
    case 0x7F303224u: goto label_7F303224;
    case 0x7F303228u: goto label_7F303228;
    case 0x7F30322Cu: goto label_7F30322C;
    case 0x7F303230u: goto label_7F303230;
    case 0x7F303234u: goto label_7F303234;
    case 0x7F303238u: goto label_7F303238;
    case 0x7F30323Cu: goto label_7F30323C;
    case 0x7F303240u: goto label_7F303240;
    case 0x7F303244u: goto label_7F303244;
    case 0x7F303248u: goto label_7F303248;
    case 0x7F30324Cu: goto label_7F30324C;
    case 0x7F303250u: goto label_7F303250;
    case 0x7F303254u: goto label_7F303254;
    case 0x7F303258u: goto label_7F303258;
    case 0x7F30325Cu: goto label_7F30325C;
    case 0x7F303260u: goto label_7F303260;
    case 0x7F303264u: goto label_7F303264;
    case 0x7F303268u: goto label_7F303268;
    case 0x7F30326Cu: goto label_7F30326C;
    case 0x7F303270u: goto label_7F303270;
    case 0x7F303274u: goto label_7F303274;
    case 0x7F303278u: goto label_7F303278;
    case 0x7F30327Cu: goto label_7F30327C;
    case 0x7F303280u: goto label_7F303280;
    case 0x7F303284u: goto label_7F303284;
    case 0x7F303288u: goto label_7F303288;
    case 0x7F30328Cu: goto label_7F30328C;
    case 0x7F303290u: goto label_7F303290;
    case 0x7F303294u: goto label_7F303294;
    case 0x7F303298u: goto label_7F303298;
    case 0x7F30329Cu: goto label_7F30329C;
    case 0x7F3032A0u: goto label_7F3032A0;
    case 0x7F3032A4u: goto label_7F3032A4;
    case 0x7F3032A8u: goto label_7F3032A8;
    case 0x7F3032ACu: goto label_7F3032AC;
    case 0x7F3032B0u: goto label_7F3032B0;
    case 0x7F3032B4u: goto label_7F3032B4;
    case 0x7F3032B8u: goto label_7F3032B8;
    case 0x7F3032BCu: goto label_7F3032BC;
    case 0x7F3032C0u: goto label_7F3032C0;
    case 0x7F3032C4u: goto label_7F3032C4;
    case 0x7F3032C8u: goto label_7F3032C8;
    case 0x7F3032CCu: goto label_7F3032CC;
    case 0x7F3032D0u: goto label_7F3032D0;
    case 0x7F3032D4u: goto label_7F3032D4;
    case 0x7F3032D8u: goto label_7F3032D8;
    case 0x7F3032DCu: goto label_7F3032DC;
    case 0x7F3032E0u: goto label_7F3032E0;
    case 0x7F3032E4u: goto label_7F3032E4;
    case 0x7F3032E8u: goto label_7F3032E8;
    case 0x7F3032ECu: goto label_7F3032EC;
    case 0x7F3032F0u: goto label_7F3032F0;
    case 0x7F3032F4u: goto label_7F3032F4;
    case 0x7F3032F8u: goto label_7F3032F8;
    case 0x7F3032FCu: goto label_7F3032FC;
    case 0x7F303300u: goto label_7F303300;
    case 0x7F303304u: goto label_7F303304;
    case 0x7F303308u: goto label_7F303308;
    case 0x7F30330Cu: goto label_7F30330C;
    case 0x7F303310u: goto label_7F303310;
    case 0x7F303314u: goto label_7F303314;
    case 0x7F303318u: goto label_7F303318;
    case 0x7F30331Cu: goto label_7F30331C;
    case 0x7F303320u: goto label_7F303320;
    case 0x7F303324u: goto label_7F303324;
    case 0x7F303328u: goto label_7F303328;
    case 0x7F30332Cu: goto label_7F30332C;
    case 0x7F303330u: goto label_7F303330;
    case 0x7F303334u: goto label_7F303334;
    case 0x7F303338u: goto label_7F303338;
    case 0x7F30333Cu: goto label_7F30333C;
    case 0x7F303340u: goto label_7F303340;
    case 0x7F303344u: goto label_7F303344;
    case 0x7F303348u: goto label_7F303348;
    case 0x7F30334Cu: goto label_7F30334C;
    case 0x7F303350u: goto label_7F303350;
    case 0x7F303354u: goto label_7F303354;
    case 0x7F303358u: goto label_7F303358;
    case 0x7F30335Cu: goto label_7F30335C;
    case 0x7F303360u: goto label_7F303360;
    case 0x7F303364u: goto label_7F303364;
    case 0x7F303368u: goto label_7F303368;
    case 0x7F30336Cu: goto label_7F30336C;
    case 0x7F303370u: goto label_7F303370;
    case 0x7F303374u: goto label_7F303374;
    case 0x7F303378u: goto label_7F303378;
    case 0x7F30337Cu: goto label_7F30337C;
    case 0x7F303380u: goto label_7F303380;
    case 0x7F303384u: goto label_7F303384;
    case 0x7F303388u: goto label_7F303388;
    case 0x7F30338Cu: goto label_7F30338C;
    case 0x7F303390u: goto label_7F303390;
    case 0x7F303394u: goto label_7F303394;
    case 0x7F303398u: goto label_7F303398;
    case 0x7F30339Cu: goto label_7F30339C;
    case 0x7F3033A0u: goto label_7F3033A0;
    case 0x7F3033A4u: goto label_7F3033A4;
    case 0x7F3033A8u: goto label_7F3033A8;
    case 0x7F3033ACu: goto label_7F3033AC;
    case 0x7F3033B0u: goto label_7F3033B0;
    case 0x7F3033B4u: goto label_7F3033B4;
    case 0x7F3033B8u: goto label_7F3033B8;
    case 0x7F3033BCu: goto label_7F3033BC;
    case 0x7F3033C0u: goto label_7F3033C0;
    case 0x7F3033C4u: goto label_7F3033C4;
    case 0x7F3033C8u: goto label_7F3033C8;
    case 0x7F3033CCu: goto label_7F3033CC;
    case 0x7F3033D0u: goto label_7F3033D0;
    case 0x7F3033D4u: goto label_7F3033D4;
    case 0x7F3033D8u: goto label_7F3033D8;
    case 0x7F3033DCu: goto label_7F3033DC;
    case 0x7F3033E0u: goto label_7F3033E0;
    case 0x7F3033E4u: goto label_7F3033E4;
    case 0x7F3033E8u: goto label_7F3033E8;
    case 0x7F3033ECu: goto label_7F3033EC;
    case 0x7F3033F0u: goto label_7F3033F0;
    case 0x7F3033F4u: goto label_7F3033F4;
    case 0x7F3033F8u: goto label_7F3033F8;
    case 0x7F3033FCu: goto label_7F3033FC;
    case 0x7F303400u: goto label_7F303400;
    case 0x7F303404u: goto label_7F303404;
    case 0x7F303408u: goto label_7F303408;
    case 0x7F30340Cu: goto label_7F30340C;
    case 0x7F303410u: goto label_7F303410;
    case 0x7F303414u: goto label_7F303414;
    case 0x7F303418u: goto label_7F303418;
    case 0x7F30341Cu: goto label_7F30341C;
    case 0x7F303420u: goto label_7F303420;
    case 0x7F303424u: goto label_7F303424;
    case 0x7F303428u: goto label_7F303428;
    case 0x7F30342Cu: goto label_7F30342C;
    case 0x7F303430u: goto label_7F303430;
    case 0x7F303434u: goto label_7F303434;
    case 0x7F303438u: goto label_7F303438;
    case 0x7F30343Cu: goto label_7F30343C;
    case 0x7F303440u: goto label_7F303440;
    case 0x7F303444u: goto label_7F303444;
    case 0x7F303448u: goto label_7F303448;
    case 0x7F30344Cu: goto label_7F30344C;
    case 0x7F303450u: goto label_7F303450;
    case 0x7F303454u: goto label_7F303454;
    case 0x7F303458u: goto label_7F303458;
    case 0x7F30345Cu: goto label_7F30345C;
    case 0x7F303460u: goto label_7F303460;
    case 0x7F303464u: goto label_7F303464;
    case 0x7F303468u: goto label_7F303468;
    case 0x7F30346Cu: goto label_7F30346C;
    case 0x7F303470u: goto label_7F303470;
    case 0x7F303474u: goto label_7F303474;
    case 0x7F303478u: goto label_7F303478;
    case 0x7F30347Cu: goto label_7F30347C;
    case 0x7F303480u: goto label_7F303480;
    case 0x7F303484u: goto label_7F303484;
    case 0x7F303488u: goto label_7F303488;
    case 0x7F30348Cu: goto label_7F30348C;
    case 0x7F303490u: goto label_7F303490;
    case 0x7F303494u: goto label_7F303494;
    case 0x7F303498u: goto label_7F303498;
    case 0x7F30349Cu: goto label_7F30349C;
    case 0x7F3034A0u: goto label_7F3034A0;
    case 0x7F3034A4u: goto label_7F3034A4;
    case 0x7F3034A8u: goto label_7F3034A8;
    case 0x7F3034ACu: goto label_7F3034AC;
    case 0x7F3034B0u: goto label_7F3034B0;
    case 0x7F3034B4u: goto label_7F3034B4;
    case 0x7F3034B8u: goto label_7F3034B8;
    case 0x7F3034BCu: goto label_7F3034BC;
    case 0x7F3034C0u: goto label_7F3034C0;
    case 0x7F3034C4u: goto label_7F3034C4;
    case 0x7F3034C8u: goto label_7F3034C8;
    case 0x7F3034CCu: goto label_7F3034CC;
    case 0x7F3034D0u: goto label_7F3034D0;
    case 0x7F3034D4u: goto label_7F3034D4;
    case 0x7F3034D8u: goto label_7F3034D8;
    case 0x7F3034DCu: goto label_7F3034DC;
    case 0x7F3034E0u: goto label_7F3034E0;
    case 0x7F3034E4u: goto label_7F3034E4;
    case 0x7F3034E8u: goto label_7F3034E8;
    case 0x7F3034ECu: goto label_7F3034EC;
    case 0x7F3034F0u: goto label_7F3034F0;
    case 0x7F3034F4u: goto label_7F3034F4;
    case 0x7F3034F8u: goto label_7F3034F8;
    case 0x7F3034FCu: goto label_7F3034FC;
    case 0x7F303500u: goto label_7F303500;
    case 0x7F303504u: goto label_7F303504;
    case 0x7F303508u: goto label_7F303508;
    case 0x7F30350Cu: goto label_7F30350C;
    case 0x7F303510u: goto label_7F303510;
    case 0x7F303514u: goto label_7F303514;
    case 0x7F303518u: goto label_7F303518;
    case 0x7F30351Cu: goto label_7F30351C;
    case 0x7F303520u: goto label_7F303520;
    case 0x7F303524u: goto label_7F303524;
    case 0x7F303528u: goto label_7F303528;
    case 0x7F30352Cu: goto label_7F30352C;
    case 0x7F303530u: goto label_7F303530;
    case 0x7F303534u: goto label_7F303534;
    case 0x7F303538u: goto label_7F303538;
    case 0x7F30353Cu: goto label_7F30353C;
    case 0x7F303540u: goto label_7F303540;
    case 0x7F303544u: goto label_7F303544;
    case 0x7F303548u: goto label_7F303548;
    case 0x7F30354Cu: goto label_7F30354C;
    case 0x7F303550u: goto label_7F303550;
    case 0x7F303554u: goto label_7F303554;
    case 0x7F303558u: goto label_7F303558;
    case 0x7F30355Cu: goto label_7F30355C;
    case 0x7F303560u: goto label_7F303560;
    case 0x7F303564u: goto label_7F303564;
    case 0x7F303568u: goto label_7F303568;
    case 0x7F30356Cu: goto label_7F30356C;
    case 0x7F303570u: goto label_7F303570;
    case 0x7F303574u: goto label_7F303574;
    case 0x7F303578u: goto label_7F303578;
    case 0x7F30357Cu: goto label_7F30357C;
    case 0x7F303580u: goto label_7F303580;
    case 0x7F303584u: goto label_7F303584;
    case 0x7F303588u: goto label_7F303588;
    case 0x7F30358Cu: goto label_7F30358C;
    case 0x7F303590u: goto label_7F303590;
    case 0x7F303594u: goto label_7F303594;
    case 0x7F303598u: goto label_7F303598;
    case 0x7F30359Cu: goto label_7F30359C;
    case 0x7F3035A0u: goto label_7F3035A0;
    case 0x7F3035A4u: goto label_7F3035A4;
    case 0x7F3035A8u: goto label_7F3035A8;
    case 0x7F3035ACu: goto label_7F3035AC;
    case 0x7F3035B0u: goto label_7F3035B0;
    case 0x7F3035B4u: goto label_7F3035B4;
    case 0x7F3035B8u: goto label_7F3035B8;
    case 0x7F3035BCu: goto label_7F3035BC;
    case 0x7F3035C0u: goto label_7F3035C0;
    case 0x7F3035C4u: goto label_7F3035C4;
    case 0x7F3035C8u: goto label_7F3035C8;
    case 0x7F3035CCu: goto label_7F3035CC;
    case 0x7F3035D0u: goto label_7F3035D0;
    case 0x7F3035D4u: goto label_7F3035D4;
    case 0x7F3035D8u: goto label_7F3035D8;
    case 0x7F3035DCu: goto label_7F3035DC;
    case 0x7F3035E0u: goto label_7F3035E0;
    case 0x7F3035E4u: goto label_7F3035E4;
    case 0x7F3035E8u: goto label_7F3035E8;
    case 0x7F3035ECu: goto label_7F3035EC;
    case 0x7F3035F0u: goto label_7F3035F0;
    case 0x7F3035F4u: goto label_7F3035F4;
    case 0x7F3035F8u: goto label_7F3035F8;
    case 0x7F3035FCu: goto label_7F3035FC;
    case 0x7F303600u: goto label_7F303600;
    case 0x7F303604u: goto label_7F303604;
    case 0x7F303608u: goto label_7F303608;
    case 0x7F30360Cu: goto label_7F30360C;
    case 0x7F303610u: goto label_7F303610;
    case 0x7F303614u: goto label_7F303614;
    case 0x7F303618u: goto label_7F303618;
    case 0x7F30361Cu: goto label_7F30361C;
    case 0x7F303620u: goto label_7F303620;
    case 0x7F303624u: goto label_7F303624;
    case 0x7F303628u: goto label_7F303628;
    case 0x7F30362Cu: goto label_7F30362C;
    case 0x7F303630u: goto label_7F303630;
    case 0x7F303634u: goto label_7F303634;
    case 0x7F303638u: goto label_7F303638;
    case 0x7F30363Cu: goto label_7F30363C;
    case 0x7F303640u: goto label_7F303640;
    case 0x7F303644u: goto label_7F303644;
    case 0x7F303648u: goto label_7F303648;
    case 0x7F30364Cu: goto label_7F30364C;
    case 0x7F303650u: goto label_7F303650;
    case 0x7F303654u: goto label_7F303654;
    case 0x7F303658u: goto label_7F303658;
    case 0x7F30365Cu: goto label_7F30365C;
    case 0x7F303660u: goto label_7F303660;
    case 0x7F303664u: goto label_7F303664;
    case 0x7F303668u: goto label_7F303668;
    case 0x7F30366Cu: goto label_7F30366C;
    case 0x7F303670u: goto label_7F303670;
    case 0x7F303674u: goto label_7F303674;
    case 0x7F303678u: goto label_7F303678;
    case 0x7F30367Cu: goto label_7F30367C;
    case 0x7F303680u: goto label_7F303680;
    case 0x7F303684u: goto label_7F303684;
    case 0x7F303688u: goto label_7F303688;
    case 0x7F30368Cu: goto label_7F30368C;
    case 0x7F303690u: goto label_7F303690;
    case 0x7F303694u: goto label_7F303694;
    case 0x7F303698u: goto label_7F303698;
    case 0x7F30369Cu: goto label_7F30369C;
    case 0x7F3036A0u: goto label_7F3036A0;
    case 0x7F3036A4u: goto label_7F3036A4;
    case 0x7F3036A8u: goto label_7F3036A8;
    case 0x7F3036ACu: goto label_7F3036AC;
    case 0x7F3036B0u: goto label_7F3036B0;
    case 0x7F3036B4u: goto label_7F3036B4;
    case 0x7F3036B8u: goto label_7F3036B8;
    case 0x7F3036BCu: goto label_7F3036BC;
    case 0x7F3036C0u: goto label_7F3036C0;
    case 0x7F3036C4u: goto label_7F3036C4;
    case 0x7F3036C8u: goto label_7F3036C8;
    case 0x7F3036CCu: goto label_7F3036CC;
    case 0x7F3036D0u: goto label_7F3036D0;
    case 0x7F3036D4u: goto label_7F3036D4;
    case 0x7F3036D8u: goto label_7F3036D8;
    case 0x7F3036DCu: goto label_7F3036DC;
    case 0x7F3036E0u: goto label_7F3036E0;
    case 0x7F3036E4u: goto label_7F3036E4;
    case 0x7F3036E8u: goto label_7F3036E8;
    case 0x7F3036ECu: goto label_7F3036EC;
    case 0x7F3036F0u: goto label_7F3036F0;
    case 0x7F3036F4u: goto label_7F3036F4;
    case 0x7F3036F8u: goto label_7F3036F8;
    case 0x7F3036FCu: goto label_7F3036FC;
    case 0x7F303700u: goto label_7F303700;
    case 0x7F303704u: goto label_7F303704;
    case 0x7F303708u: goto label_7F303708;
    case 0x7F30370Cu: goto label_7F30370C;
    case 0x7F303710u: goto label_7F303710;
    case 0x7F303714u: goto label_7F303714;
    case 0x7F303718u: goto label_7F303718;
    case 0x7F30371Cu: goto label_7F30371C;
    case 0x7F303720u: goto label_7F303720;
    case 0x7F303724u: goto label_7F303724;
    case 0x7F303728u: goto label_7F303728;
    case 0x7F30372Cu: goto label_7F30372C;
    case 0x7F303730u: goto label_7F303730;
    case 0x7F303734u: goto label_7F303734;
    case 0x7F303738u: goto label_7F303738;
    case 0x7F30373Cu: goto label_7F30373C;
    case 0x7F303740u: goto label_7F303740;
    case 0x7F303744u: goto label_7F303744;
    case 0x7F303748u: goto label_7F303748;
    case 0x7F30374Cu: goto label_7F30374C;
    case 0x7F303750u: goto label_7F303750;
    case 0x7F303754u: goto label_7F303754;
    case 0x7F303758u: goto label_7F303758;
    case 0x7F30375Cu: goto label_7F30375C;
    case 0x7F303760u: goto label_7F303760;
    case 0x7F303764u: goto label_7F303764;
    case 0x7F303768u: goto label_7F303768;
    case 0x7F30376Cu: goto label_7F30376C;
    case 0x7F303770u: goto label_7F303770;
    case 0x7F303774u: goto label_7F303774;
    case 0x7F303778u: goto label_7F303778;
    case 0x7F30377Cu: goto label_7F30377C;
    case 0x7F303780u: goto label_7F303780;
    case 0x7F303784u: goto label_7F303784;
    case 0x7F303788u: goto label_7F303788;
    case 0x7F30378Cu: goto label_7F30378C;
    case 0x7F303790u: goto label_7F303790;
    case 0x7F303794u: goto label_7F303794;
    case 0x7F303798u: goto label_7F303798;
    case 0x7F30379Cu: goto label_7F30379C;
    case 0x7F3037A0u: goto label_7F3037A0;
    case 0x7F3037A4u: goto label_7F3037A4;
    case 0x7F3037A8u: goto label_7F3037A8;
    case 0x7F3037ACu: goto label_7F3037AC;
    case 0x7F3037B0u: goto label_7F3037B0;
    case 0x7F3037B4u: goto label_7F3037B4;
    case 0x7F3037B8u: goto label_7F3037B8;
    case 0x7F3037BCu: goto label_7F3037BC;
    case 0x7F3037C0u: goto label_7F3037C0;
    case 0x7F3037C4u: goto label_7F3037C4;
    case 0x7F3037C8u: goto label_7F3037C8;
    case 0x7F3037CCu: goto label_7F3037CC;
    case 0x7F3037D0u: goto label_7F3037D0;
    case 0x7F3037D4u: goto label_7F3037D4;
    case 0x7F3037D8u: goto label_7F3037D8;
    case 0x7F3037DCu: goto label_7F3037DC;
    case 0x7F3037E0u: goto label_7F3037E0;
    case 0x7F3037E4u: goto label_7F3037E4;
    case 0x7F3037E8u: goto label_7F3037E8;
    case 0x7F3037ECu: goto label_7F3037EC;
    case 0x7F3037F0u: goto label_7F3037F0;
    case 0x7F3037F4u: goto label_7F3037F4;
    case 0x7F3037F8u: goto label_7F3037F8;
    case 0x7F3037FCu: goto label_7F3037FC;
    case 0x7F303800u: goto label_7F303800;
    case 0x7F303804u: goto label_7F303804;
    case 0x7F303808u: goto label_7F303808;
    case 0x7F30380Cu: goto label_7F30380C;
    case 0x7F303810u: goto label_7F303810;
    case 0x7F303814u: goto label_7F303814;
    case 0x7F303818u: goto label_7F303818;
    case 0x7F30381Cu: goto label_7F30381C;
    case 0x7F303820u: goto label_7F303820;
    case 0x7F303824u: goto label_7F303824;
    case 0x7F303828u: goto label_7F303828;
    case 0x7F30382Cu: goto label_7F30382C;
    case 0x7F303830u: goto label_7F303830;
    case 0x7F303834u: goto label_7F303834;
    case 0x7F303838u: goto label_7F303838;
    case 0x7F30383Cu: goto label_7F30383C;
    case 0x7F303840u: goto label_7F303840;
    case 0x7F303844u: goto label_7F303844;
    case 0x7F303848u: goto label_7F303848;
    case 0x7F30384Cu: goto label_7F30384C;
    case 0x7F303850u: goto label_7F303850;
    case 0x7F303854u: goto label_7F303854;
    case 0x7F303858u: goto label_7F303858;
    case 0x7F30385Cu: goto label_7F30385C;
    case 0x7F303860u: goto label_7F303860;
    case 0x7F303864u: goto label_7F303864;
    case 0x7F303868u: goto label_7F303868;
    case 0x7F30386Cu: goto label_7F30386C;
    case 0x7F303870u: goto label_7F303870;
    case 0x7F303874u: goto label_7F303874;
    case 0x7F303878u: goto label_7F303878;
    case 0x7F30387Cu: goto label_7F30387C;
    case 0x7F303880u: goto label_7F303880;
    case 0x7F303884u: goto label_7F303884;
    case 0x7F303888u: goto label_7F303888;
    case 0x7F30388Cu: goto label_7F30388C;
    case 0x7F303890u: goto label_7F303890;
    case 0x7F303894u: goto label_7F303894;
    case 0x7F303898u: goto label_7F303898;
    case 0x7F30389Cu: goto label_7F30389C;
    case 0x7F3038A0u: goto label_7F3038A0;
    case 0x7F3038A4u: goto label_7F3038A4;
    case 0x7F3038A8u: goto label_7F3038A8;
    case 0x7F3038ACu: goto label_7F3038AC;
    case 0x7F3038B0u: goto label_7F3038B0;
    case 0x7F3038B4u: goto label_7F3038B4;
    case 0x7F3038B8u: goto label_7F3038B8;
    case 0x7F3038BCu: goto label_7F3038BC;
    case 0x7F3038C0u: goto label_7F3038C0;
    case 0x7F3038C4u: goto label_7F3038C4;
    case 0x7F3038C8u: goto label_7F3038C8;
    case 0x7F3038CCu: goto label_7F3038CC;
    case 0x7F3038D0u: goto label_7F3038D0;
    case 0x7F3038D4u: goto label_7F3038D4;
    case 0x7F3038D8u: goto label_7F3038D8;
    case 0x7F3038DCu: goto label_7F3038DC;
    case 0x7F3038E0u: goto label_7F3038E0;
    case 0x7F3038E4u: goto label_7F3038E4;
    case 0x7F3038E8u: goto label_7F3038E8;
    case 0x7F3038ECu: goto label_7F3038EC;
    case 0x7F3038F0u: goto label_7F3038F0;
    case 0x7F3038F4u: goto label_7F3038F4;
    case 0x7F3038F8u: goto label_7F3038F8;
    case 0x7F3038FCu: goto label_7F3038FC;
    case 0x7F303900u: goto label_7F303900;
    case 0x7F303904u: goto label_7F303904;
    case 0x7F303908u: goto label_7F303908;
    case 0x7F30390Cu: goto label_7F30390C;
    case 0x7F303910u: goto label_7F303910;
    case 0x7F303914u: goto label_7F303914;
    case 0x7F303918u: goto label_7F303918;
    case 0x7F30391Cu: goto label_7F30391C;
    case 0x7F303920u: goto label_7F303920;
    case 0x7F303924u: goto label_7F303924;
    case 0x7F303928u: goto label_7F303928;
    case 0x7F30392Cu: goto label_7F30392C;
    case 0x7F303930u: goto label_7F303930;
    case 0x7F303934u: goto label_7F303934;
    case 0x7F303938u: goto label_7F303938;
    case 0x7F30393Cu: goto label_7F30393C;
    case 0x7F303940u: goto label_7F303940;
    case 0x7F303944u: goto label_7F303944;
    case 0x7F303948u: goto label_7F303948;
    case 0x7F30394Cu: goto label_7F30394C;
    case 0x7F303950u: goto label_7F303950;
    case 0x7F303954u: goto label_7F303954;
    case 0x7F303958u: goto label_7F303958;
    case 0x7F30395Cu: goto label_7F30395C;
    case 0x7F303960u: goto label_7F303960;
    case 0x7F303964u: goto label_7F303964;
    case 0x7F303968u: goto label_7F303968;
    case 0x7F30396Cu: goto label_7F30396C;
    case 0x7F303970u: goto label_7F303970;
    case 0x7F303974u: goto label_7F303974;
    case 0x7F303978u: goto label_7F303978;
    case 0x7F30397Cu: goto label_7F30397C;
    case 0x7F303980u: goto label_7F303980;
    case 0x7F303984u: goto label_7F303984;
    case 0x7F303988u: goto label_7F303988;
    case 0x7F30398Cu: goto label_7F30398C;
    case 0x7F303990u: goto label_7F303990;
    case 0x7F303994u: goto label_7F303994;
    case 0x7F303998u: goto label_7F303998;
    case 0x7F30399Cu: goto label_7F30399C;
    case 0x7F3039A0u: goto label_7F3039A0;
    case 0x7F3039A4u: goto label_7F3039A4;
    case 0x7F3039A8u: goto label_7F3039A8;
    case 0x7F3039ACu: goto label_7F3039AC;
    case 0x7F3039B0u: goto label_7F3039B0;
    case 0x7F3039B4u: goto label_7F3039B4;
    case 0x7F3039B8u: goto label_7F3039B8;
    case 0x7F3039BCu: goto label_7F3039BC;
    case 0x7F3039C0u: goto label_7F3039C0;
    case 0x7F3039C4u: goto label_7F3039C4;
    case 0x7F3039C8u: goto label_7F3039C8;
    case 0x7F3039CCu: goto label_7F3039CC;
    case 0x7F3039D0u: goto label_7F3039D0;
    case 0x7F3039D4u: goto label_7F3039D4;
    case 0x7F3039D8u: goto label_7F3039D8;
    case 0x7F3039DCu: goto label_7F3039DC;
    case 0x7F3039E0u: goto label_7F3039E0;
    case 0x7F3039E4u: goto label_7F3039E4;
    case 0x7F3039E8u: goto label_7F3039E8;
    case 0x7F3039ECu: goto label_7F3039EC;
    case 0x7F3039F0u: goto label_7F3039F0;
    case 0x7F3039F4u: goto label_7F3039F4;
    case 0x7F3039F8u: goto label_7F3039F8;
    case 0x7F3039FCu: goto label_7F3039FC;
    case 0x7F303A00u: goto label_7F303A00;
    case 0x7F303A04u: goto label_7F303A04;
    case 0x7F303A08u: goto label_7F303A08;
    case 0x7F303A0Cu: goto label_7F303A0C;
    case 0x7F303A10u: goto label_7F303A10;
    case 0x7F303A14u: goto label_7F303A14;
    case 0x7F303A18u: goto label_7F303A18;
    case 0x7F303A1Cu: goto label_7F303A1C;
    case 0x7F303A20u: goto label_7F303A20;
    case 0x7F303A24u: goto label_7F303A24;
    case 0x7F303A28u: goto label_7F303A28;
    case 0x7F303A2Cu: goto label_7F303A2C;
    case 0x7F303A30u: goto label_7F303A30;
    case 0x7F303A34u: goto label_7F303A34;
    case 0x7F303A38u: goto label_7F303A38;
    case 0x7F303A3Cu: goto label_7F303A3C;
    case 0x7F303A40u: goto label_7F303A40;
    case 0x7F303A44u: goto label_7F303A44;
    case 0x7F303A48u: goto label_7F303A48;
    case 0x7F303A4Cu: goto label_7F303A4C;
    case 0x7F303A50u: goto label_7F303A50;
    case 0x7F303A54u: goto label_7F303A54;
    case 0x7F303A58u: goto label_7F303A58;
    case 0x7F303A5Cu: goto label_7F303A5C;
    case 0x7F303A60u: goto label_7F303A60;
    case 0x7F303A64u: goto label_7F303A64;
    case 0x7F303A68u: goto label_7F303A68;
    case 0x7F303A6Cu: goto label_7F303A6C;
    case 0x7F303A70u: goto label_7F303A70;
    case 0x7F303A74u: goto label_7F303A74;
    case 0x7F303A78u: goto label_7F303A78;
    case 0x7F303A7Cu: goto label_7F303A7C;
    case 0x7F303A80u: goto label_7F303A80;
    case 0x7F303A84u: goto label_7F303A84;
    case 0x7F303A88u: goto label_7F303A88;
    case 0x7F303A8Cu: goto label_7F303A8C;
    case 0x7F303A90u: goto label_7F303A90;
    case 0x7F303A94u: goto label_7F303A94;
    case 0x7F303A98u: goto label_7F303A98;
    case 0x7F303A9Cu: goto label_7F303A9C;
    case 0x7F303AA0u: goto label_7F303AA0;
    case 0x7F303AA4u: goto label_7F303AA4;
    case 0x7F303AA8u: goto label_7F303AA8;
    case 0x7F303AACu: goto label_7F303AAC;
    case 0x7F303AB0u: goto label_7F303AB0;
    case 0x7F303AB4u: goto label_7F303AB4;
    case 0x7F303AB8u: goto label_7F303AB8;
    case 0x7F303ABCu: goto label_7F303ABC;
    case 0x7F303AC0u: goto label_7F303AC0;
    case 0x7F303AC4u: goto label_7F303AC4;
    case 0x7F303AC8u: goto label_7F303AC8;
    case 0x7F303ACCu: goto label_7F303ACC;
    case 0x7F303AD0u: goto label_7F303AD0;
    case 0x7F303AD4u: goto label_7F303AD4;
    case 0x7F303AD8u: goto label_7F303AD8;
    case 0x7F303ADCu: goto label_7F303ADC;
    case 0x7F303AE0u: goto label_7F303AE0;
    case 0x7F303AE4u: goto label_7F303AE4;
    case 0x7F303AE8u: goto label_7F303AE8;
    case 0x7F303AECu: goto label_7F303AEC;
    case 0x7F303AF0u: goto label_7F303AF0;
    case 0x7F303AF4u: goto label_7F303AF4;
    case 0x7F303AF8u: goto label_7F303AF8;
    case 0x7F303AFCu: goto label_7F303AFC;
    case 0x7F303B00u: goto label_7F303B00;
    case 0x7F303B04u: goto label_7F303B04;
    case 0x7F303B08u: goto label_7F303B08;
    case 0x7F303B0Cu: goto label_7F303B0C;
    case 0x7F303B10u: goto label_7F303B10;
    case 0x7F303B14u: goto label_7F303B14;
    case 0x7F303B18u: goto label_7F303B18;
    case 0x7F303B1Cu: goto label_7F303B1C;
    case 0x7F303B20u: goto label_7F303B20;
    case 0x7F303B24u: goto label_7F303B24;
    case 0x7F303B28u: goto label_7F303B28;
    case 0x7F303B2Cu: goto label_7F303B2C;
    case 0x7F303B30u: goto label_7F303B30;
    case 0x7F303B34u: goto label_7F303B34;
    case 0x7F303B38u: goto label_7F303B38;
    case 0x7F303B3Cu: goto label_7F303B3C;
    case 0x7F303B40u: goto label_7F303B40;
    case 0x7F303B44u: goto label_7F303B44;
    case 0x7F303B48u: goto label_7F303B48;
    case 0x7F303B4Cu: goto label_7F303B4C;
    case 0x7F303B50u: goto label_7F303B50;
    case 0x7F303B54u: goto label_7F303B54;
    case 0x7F303B58u: goto label_7F303B58;
    case 0x7F303B5Cu: goto label_7F303B5C;
    case 0x7F303B60u: goto label_7F303B60;
    case 0x7F303B64u: goto label_7F303B64;
    case 0x7F303B68u: goto label_7F303B68;
    case 0x7F303B6Cu: goto label_7F303B6C;
    case 0x7F303B70u: goto label_7F303B70;
    case 0x7F303B74u: goto label_7F303B74;
    case 0x7F303B78u: goto label_7F303B78;
    case 0x7F303B7Cu: goto label_7F303B7C;
    case 0x7F303B80u: goto label_7F303B80;
    case 0x7F303B84u: goto label_7F303B84;
    case 0x7F303B88u: goto label_7F303B88;
    case 0x7F303B8Cu: goto label_7F303B8C;
    case 0x7F303B90u: goto label_7F303B90;
    case 0x7F303B94u: goto label_7F303B94;
    case 0x7F303B98u: goto label_7F303B98;
    case 0x7F303B9Cu: goto label_7F303B9C;
    case 0x7F303BA0u: goto label_7F303BA0;
    case 0x7F303BA4u: goto label_7F303BA4;
    case 0x7F303BA8u: goto label_7F303BA8;
    case 0x7F303BACu: goto label_7F303BAC;
    case 0x7F303BB0u: goto label_7F303BB0;
    case 0x7F303BB4u: goto label_7F303BB4;
    case 0x7F303BB8u: goto label_7F303BB8;
    case 0x7F303BBCu: goto label_7F303BBC;
    case 0x7F303BC0u: goto label_7F303BC0;
    case 0x7F303BC4u: goto label_7F303BC4;
    case 0x7F303BC8u: goto label_7F303BC8;
    case 0x7F303BCCu: goto label_7F303BCC;
    case 0x7F303BD0u: goto label_7F303BD0;
    case 0x7F303BD4u: goto label_7F303BD4;
    case 0x7F303BD8u: goto label_7F303BD8;
    case 0x7F303BDCu: goto label_7F303BDC;
    case 0x7F303BE0u: goto label_7F303BE0;
    case 0x7F303BE4u: goto label_7F303BE4;
    case 0x7F303BE8u: goto label_7F303BE8;
    case 0x7F303BECu: goto label_7F303BEC;
    case 0x7F303BF0u: goto label_7F303BF0;
    case 0x7F303BF4u: goto label_7F303BF4;
    case 0x7F303BF8u: goto label_7F303BF8;
    case 0x7F303BFCu: goto label_7F303BFC;
    case 0x7F303C00u: goto label_7F303C00;
    case 0x7F303C04u: goto label_7F303C04;
    case 0x7F303C08u: goto label_7F303C08;
    case 0x7F303C0Cu: goto label_7F303C0C;
    case 0x7F303C10u: goto label_7F303C10;
    case 0x7F303C14u: goto label_7F303C14;
    case 0x7F303C18u: goto label_7F303C18;
    case 0x7F303C1Cu: goto label_7F303C1C;
    case 0x7F303C20u: goto label_7F303C20;
    case 0x7F303C24u: goto label_7F303C24;
    case 0x7F303C28u: goto label_7F303C28;
    case 0x7F303C2Cu: goto label_7F303C2C;
    case 0x7F303C30u: goto label_7F303C30;
    case 0x7F303C34u: goto label_7F303C34;
    case 0x7F303C38u: goto label_7F303C38;
    case 0x7F303C3Cu: goto label_7F303C3C;
    case 0x7F303C40u: goto label_7F303C40;
    case 0x7F303C44u: goto label_7F303C44;
    case 0x7F303C48u: goto label_7F303C48;
    case 0x7F303C4Cu: goto label_7F303C4C;
    case 0x7F303C50u: goto label_7F303C50;
    case 0x7F303C54u: goto label_7F303C54;
    case 0x7F303C58u: goto label_7F303C58;
    case 0x7F303C5Cu: goto label_7F303C5C;
    case 0x7F303C60u: goto label_7F303C60;
    case 0x7F303C64u: goto label_7F303C64;
    case 0x7F303C68u: goto label_7F303C68;
    case 0x7F303C6Cu: goto label_7F303C6C;
    case 0x7F303C70u: goto label_7F303C70;
    case 0x7F303C74u: goto label_7F303C74;
    case 0x7F303C78u: goto label_7F303C78;
    case 0x7F303C7Cu: goto label_7F303C7C;
    case 0x7F303C80u: goto label_7F303C80;
    case 0x7F303C84u: goto label_7F303C84;
    case 0x7F303C88u: goto label_7F303C88;
    case 0x7F303C8Cu: goto label_7F303C8C;
    case 0x7F303C90u: goto label_7F303C90;
    case 0x7F303C94u: goto label_7F303C94;
    case 0x7F303C98u: goto label_7F303C98;
    case 0x7F303C9Cu: goto label_7F303C9C;
    case 0x7F303CA0u: goto label_7F303CA0;
    case 0x7F303CA4u: goto label_7F303CA4;
    case 0x7F303CA8u: goto label_7F303CA8;
    case 0x7F303CACu: goto label_7F303CAC;
    case 0x7F303CB0u: goto label_7F303CB0;
    case 0x7F303CB4u: goto label_7F303CB4;
    case 0x7F303CB8u: goto label_7F303CB8;
    case 0x7F303CBCu: goto label_7F303CBC;
    case 0x7F303CC0u: goto label_7F303CC0;
    case 0x7F303CC4u: goto label_7F303CC4;
    case 0x7F303CC8u: goto label_7F303CC8;
    case 0x7F303CCCu: goto label_7F303CCC;
    case 0x7F303CD0u: goto label_7F303CD0;
    case 0x7F303CD4u: goto label_7F303CD4;
    case 0x7F303CD8u: goto label_7F303CD8;
    case 0x7F303CDCu: goto label_7F303CDC;
    case 0x7F303CE0u: goto label_7F303CE0;
    case 0x7F303CE4u: goto label_7F303CE4;
    case 0x7F303CE8u: goto label_7F303CE8;
    case 0x7F303CECu: goto label_7F303CEC;
    case 0x7F303CF0u: goto label_7F303CF0;
    case 0x7F303CF4u: goto label_7F303CF4;
    case 0x7F303CF8u: goto label_7F303CF8;
    case 0x7F303CFCu: goto label_7F303CFC;
    case 0x7F303D00u: goto label_7F303D00;
    case 0x7F303D04u: goto label_7F303D04;
    case 0x7F303D08u: goto label_7F303D08;
    case 0x7F303D0Cu: goto label_7F303D0C;
    case 0x7F303D10u: goto label_7F303D10;
    case 0x7F303D14u: goto label_7F303D14;
    case 0x7F303D18u: goto label_7F303D18;
    case 0x7F303D1Cu: goto label_7F303D1C;
    case 0x7F303D20u: goto label_7F303D20;
    case 0x7F303D24u: goto label_7F303D24;
    case 0x7F303D28u: goto label_7F303D28;
    case 0x7F303D2Cu: goto label_7F303D2C;
    case 0x7F303D30u: goto label_7F303D30;
    case 0x7F303D34u: goto label_7F303D34;
    case 0x7F303D38u: goto label_7F303D38;
    case 0x7F303D3Cu: goto label_7F303D3C;
    case 0x7F303D40u: goto label_7F303D40;
    case 0x7F303D44u: goto label_7F303D44;
    case 0x7F303D48u: goto label_7F303D48;
    case 0x7F303D4Cu: goto label_7F303D4C;
    case 0x7F303D50u: goto label_7F303D50;
    case 0x7F303D54u: goto label_7F303D54;
    case 0x7F303D58u: goto label_7F303D58;
    case 0x7F303D5Cu: goto label_7F303D5C;
    case 0x7F303D60u: goto label_7F303D60;
    case 0x7F303D64u: goto label_7F303D64;
    case 0x7F303D68u: goto label_7F303D68;
    case 0x7F303D6Cu: goto label_7F303D6C;
    case 0x7F303D70u: goto label_7F303D70;
    case 0x7F303D74u: goto label_7F303D74;
    case 0x7F303D78u: goto label_7F303D78;
    case 0x7F303D7Cu: goto label_7F303D7C;
    case 0x7F303D80u: goto label_7F303D80;
    case 0x7F303D84u: goto label_7F303D84;
    case 0x7F303D88u: goto label_7F303D88;
    case 0x7F303D8Cu: goto label_7F303D8C;
    case 0x7F303D90u: goto label_7F303D90;
    case 0x7F303D94u: goto label_7F303D94;
    case 0x7F303D98u: goto label_7F303D98;
    case 0x7F303D9Cu: goto label_7F303D9C;
    case 0x7F303DA0u: goto label_7F303DA0;
    case 0x7F303DA4u: goto label_7F303DA4;
    case 0x7F303DA8u: goto label_7F303DA8;
    case 0x7F303DACu: goto label_7F303DAC;
    case 0x7F303DB0u: goto label_7F303DB0;
    case 0x7F303DB4u: goto label_7F303DB4;
    case 0x7F303DB8u: goto label_7F303DB8;
    case 0x7F303DBCu: goto label_7F303DBC;
    case 0x7F303DC0u: goto label_7F303DC0;
    case 0x7F303DC4u: goto label_7F303DC4;
    case 0x7F303DC8u: goto label_7F303DC8;
    case 0x7F303DCCu: goto label_7F303DCC;
    case 0x7F303DD0u: goto label_7F303DD0;
    case 0x7F303DD4u: goto label_7F303DD4;
    case 0x7F303DD8u: goto label_7F303DD8;
    case 0x7F303DDCu: goto label_7F303DDC;
    case 0x7F303DE0u: goto label_7F303DE0;
    case 0x7F303DE4u: goto label_7F303DE4;
    case 0x7F303DE8u: goto label_7F303DE8;
    case 0x7F303DECu: goto label_7F303DEC;
    case 0x7F303DF0u: goto label_7F303DF0;
    case 0x7F303DF4u: goto label_7F303DF4;
    case 0x7F303DF8u: goto label_7F303DF8;
    case 0x7F303DFCu: goto label_7F303DFC;
    case 0x7F303E00u: goto label_7F303E00;
    case 0x7F303E04u: goto label_7F303E04;
    case 0x7F303E08u: goto label_7F303E08;
    case 0x7F303E0Cu: goto label_7F303E0C;
    case 0x7F303E10u: goto label_7F303E10;
    case 0x7F303E14u: goto label_7F303E14;
    case 0x7F303E18u: goto label_7F303E18;
    case 0x7F303E1Cu: goto label_7F303E1C;
    case 0x7F303E20u: goto label_7F303E20;
    case 0x7F303E24u: goto label_7F303E24;
    case 0x7F303E28u: goto label_7F303E28;
    case 0x7F303E2Cu: goto label_7F303E2C;
    case 0x7F303E30u: goto label_7F303E30;
    case 0x7F303E34u: goto label_7F303E34;
    case 0x7F303E38u: goto label_7F303E38;
    case 0x7F303E3Cu: goto label_7F303E3C;
    case 0x7F303E40u: goto label_7F303E40;
    case 0x7F303E44u: goto label_7F303E44;
    case 0x7F303E48u: goto label_7F303E48;
    case 0x7F303E4Cu: goto label_7F303E4C;
    case 0x7F303E50u: goto label_7F303E50;
    case 0x7F303E54u: goto label_7F303E54;
    case 0x7F303E58u: goto label_7F303E58;
    case 0x7F303E5Cu: goto label_7F303E5C;
    case 0x7F303E60u: goto label_7F303E60;
    case 0x7F303E64u: goto label_7F303E64;
    case 0x7F303E68u: goto label_7F303E68;
    case 0x7F303E6Cu: goto label_7F303E6C;
    case 0x7F303E70u: goto label_7F303E70;
    case 0x7F303E74u: goto label_7F303E74;
    case 0x7F303E78u: goto label_7F303E78;
    case 0x7F303E7Cu: goto label_7F303E7C;
    case 0x7F303E80u: goto label_7F303E80;
    case 0x7F303E84u: goto label_7F303E84;
    case 0x7F303E88u: goto label_7F303E88;
    case 0x7F303E8Cu: goto label_7F303E8C;
    case 0x7F303E90u: goto label_7F303E90;
    case 0x7F303E94u: goto label_7F303E94;
    case 0x7F303E98u: goto label_7F303E98;
    case 0x7F303E9Cu: goto label_7F303E9C;
    case 0x7F303EA0u: goto label_7F303EA0;
    case 0x7F303EA4u: goto label_7F303EA4;
    case 0x7F303EA8u: goto label_7F303EA8;
    case 0x7F303EACu: goto label_7F303EAC;
    case 0x7F303EB0u: goto label_7F303EB0;
    case 0x7F303EB4u: goto label_7F303EB4;
    case 0x7F303EB8u: goto label_7F303EB8;
    case 0x7F303EBCu: goto label_7F303EBC;
    case 0x7F303EC0u: goto label_7F303EC0;
    case 0x7F303EC4u: goto label_7F303EC4;
    case 0x7F303EC8u: goto label_7F303EC8;
    case 0x7F303ECCu: goto label_7F303ECC;
    case 0x7F303ED0u: goto label_7F303ED0;
    case 0x7F303ED4u: goto label_7F303ED4;
    case 0x7F303ED8u: goto label_7F303ED8;
    case 0x7F303EDCu: goto label_7F303EDC;
    case 0x7F303EE0u: goto label_7F303EE0;
    case 0x7F303EE4u: goto label_7F303EE4;
    case 0x7F303EE8u: goto label_7F303EE8;
    case 0x7F303EECu: goto label_7F303EEC;
    case 0x7F303EF0u: goto label_7F303EF0;
    case 0x7F303EF4u: goto label_7F303EF4;
    case 0x7F303EF8u: goto label_7F303EF8;
    case 0x7F303EFCu: goto label_7F303EFC;
    case 0x7F303F00u: goto label_7F303F00;
    case 0x7F303F04u: goto label_7F303F04;
    case 0x7F303F08u: goto label_7F303F08;
    case 0x7F303F0Cu: goto label_7F303F0C;
    case 0x7F303F10u: goto label_7F303F10;
    case 0x7F303F14u: goto label_7F303F14;
    case 0x7F303F18u: goto label_7F303F18;
    case 0x7F303F1Cu: goto label_7F303F1C;
    case 0x7F303F20u: goto label_7F303F20;
    case 0x7F303F24u: goto label_7F303F24;
    case 0x7F303F28u: goto label_7F303F28;
    case 0x7F303F2Cu: goto label_7F303F2C;
    case 0x7F303F30u: goto label_7F303F30;
    case 0x7F303F34u: goto label_7F303F34;
    case 0x7F303F38u: goto label_7F303F38;
    case 0x7F303F3Cu: goto label_7F303F3C;
    case 0x7F303F40u: goto label_7F303F40;
    case 0x7F303F44u: goto label_7F303F44;
    case 0x7F303F48u: goto label_7F303F48;
    case 0x7F303F4Cu: goto label_7F303F4C;
    case 0x7F303F50u: goto label_7F303F50;
    case 0x7F303F54u: goto label_7F303F54;
    case 0x7F303F58u: goto label_7F303F58;
    case 0x7F303F5Cu: goto label_7F303F5C;
    case 0x7F303F60u: goto label_7F303F60;
    case 0x7F303F64u: goto label_7F303F64;
    case 0x7F303F68u: goto label_7F303F68;
    case 0x7F303F6Cu: goto label_7F303F6C;
    case 0x7F303F70u: goto label_7F303F70;
    case 0x7F303F74u: goto label_7F303F74;
    case 0x7F303F78u: goto label_7F303F78;
    case 0x7F303F7Cu: goto label_7F303F7C;
    case 0x7F303F80u: goto label_7F303F80;
    case 0x7F303F84u: goto label_7F303F84;
    case 0x7F303F88u: goto label_7F303F88;
    case 0x7F303F8Cu: goto label_7F303F8C;
    case 0x7F303F90u: goto label_7F303F90;
    case 0x7F303F94u: goto label_7F303F94;
    case 0x7F303F98u: goto label_7F303F98;
    case 0x7F303F9Cu: goto label_7F303F9C;
    case 0x7F303FA0u: goto label_7F303FA0;
    case 0x7F303FA4u: goto label_7F303FA4;
    case 0x7F303FA8u: goto label_7F303FA8;
    case 0x7F303FACu: goto label_7F303FAC;
    case 0x7F303FB0u: goto label_7F303FB0;
    case 0x7F303FB4u: goto label_7F303FB4;
    case 0x7F303FB8u: goto label_7F303FB8;
    case 0x7F303FBCu: goto label_7F303FBC;
    case 0x7F303FC0u: goto label_7F303FC0;
    case 0x7F303FC4u: goto label_7F303FC4;
    case 0x7F303FC8u: goto label_7F303FC8;
    case 0x7F303FCCu: goto label_7F303FCC;
    case 0x7F303FD0u: goto label_7F303FD0;
    case 0x7F303FD4u: goto label_7F303FD4;
    case 0x7F303FD8u: goto label_7F303FD8;
    case 0x7F303FDCu: goto label_7F303FDC;
    case 0x7F303FE0u: goto label_7F303FE0;
    case 0x7F303FE4u: goto label_7F303FE4;
    case 0x7F303FE8u: goto label_7F303FE8;
    case 0x7F303FECu: goto label_7F303FEC;
    case 0x7F303FF0u: goto label_7F303FF0;
    case 0x7F303FF4u: goto label_7F303FF4;
    case 0x7F303FF8u: goto label_7F303FF8;
    case 0x7F303FFCu: goto label_7F303FFC;
    case 0x7F304000u: goto label_7F304000;
    case 0x7F304004u: goto label_7F304004;
    case 0x7F304008u: goto label_7F304008;
    case 0x7F30400Cu: goto label_7F30400C;
    case 0x7F304010u: goto label_7F304010;
    case 0x7F304014u: goto label_7F304014;
    case 0x7F304018u: goto label_7F304018;
    case 0x7F30401Cu: goto label_7F30401C;
    case 0x7F304020u: goto label_7F304020;
    case 0x7F304024u: goto label_7F304024;
    case 0x7F304028u: goto label_7F304028;
    case 0x7F30402Cu: goto label_7F30402C;
    case 0x7F304030u: goto label_7F304030;
    case 0x7F304034u: goto label_7F304034;
    case 0x7F304038u: goto label_7F304038;
    case 0x7F30403Cu: goto label_7F30403C;
    case 0x7F304040u: goto label_7F304040;
    case 0x7F304044u: goto label_7F304044;
    case 0x7F304048u: goto label_7F304048;
    case 0x7F30404Cu: goto label_7F30404C;
    case 0x7F304050u: goto label_7F304050;
    case 0x7F304054u: goto label_7F304054;
    case 0x7F304058u: goto label_7F304058;
    case 0x7F30405Cu: goto label_7F30405C;
    case 0x7F304060u: goto label_7F304060;
    case 0x7F304064u: goto label_7F304064;
    case 0x7F304068u: goto label_7F304068;
    case 0x7F30406Cu: goto label_7F30406C;
    case 0x7F304070u: goto label_7F304070;
    case 0x7F304074u: goto label_7F304074;
    case 0x7F304078u: goto label_7F304078;
    case 0x7F30407Cu: goto label_7F30407C;
    case 0x7F304080u: goto label_7F304080;
    case 0x7F304084u: goto label_7F304084;
    case 0x7F304088u: goto label_7F304088;
    case 0x7F30408Cu: goto label_7F30408C;
    case 0x7F304090u: goto label_7F304090;
    case 0x7F304094u: goto label_7F304094;
    case 0x7F304098u: goto label_7F304098;
    case 0x7F30409Cu: goto label_7F30409C;
    case 0x7F3040A0u: goto label_7F3040A0;
    case 0x7F3040A4u: goto label_7F3040A4;
    case 0x7F3040A8u: goto label_7F3040A8;
    case 0x7F3040ACu: goto label_7F3040AC;
    case 0x7F3040B0u: goto label_7F3040B0;
    case 0x7F3040B4u: goto label_7F3040B4;
    case 0x7F3040B8u: goto label_7F3040B8;
    case 0x7F3040BCu: goto label_7F3040BC;
    case 0x7F3040C0u: goto label_7F3040C0;
    case 0x7F3040C4u: goto label_7F3040C4;
    case 0x7F3040C8u: goto label_7F3040C8;
    case 0x7F3040CCu: goto label_7F3040CC;
    case 0x7F3040D0u: goto label_7F3040D0;
    case 0x7F3040D4u: goto label_7F3040D4;
    case 0x7F3040D8u: goto label_7F3040D8;
    case 0x7F3040DCu: goto label_7F3040DC;
    case 0x7F3040E0u: goto label_7F3040E0;
    case 0x7F3040E4u: goto label_7F3040E4;
    case 0x7F3040E8u: goto label_7F3040E8;
    default: return;
    }
label_7F3000EC:
    ctx->pc = 0x7F3000ECu;
    ctx->downcount -= 33;
    // 7F3000EC: stfd     f29, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3000ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F3000F0:
    ctx->pc = 0x7F3000F0u;
    // 7F3000F0: psq_st   f29, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3000F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F3000F0u);
        if (ctx->exception) return;
    }

label_7F3000F4:
    ctx->pc = 0x7F3000F4u;
    // 7F3000F4: stfd     f28, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3000F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F3000F8:
    ctx->pc = 0x7F3000F8u;
    // 7F3000F8: psq_st   f28, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3000F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F3000F8u);
        if (ctx->exception) return;
    }

label_7F3000FC:
    ctx->pc = 0x7F3000FCu;
    // 7F3000FC: stfd     f27, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3000FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F300100:
    ctx->pc = 0x7F300100u;
    // 7F300100: psq_st   f27, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F300100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F300100u);
        if (ctx->exception) return;
    }

label_7F300104:
    ctx->pc = 0x7F300104u;
    // 7F300104: stfd     f26, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F300104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F300108:
    ctx->pc = 0x7F300108u;
    // 7F300108: psq_st   f26, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F300108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F300108u);
        if (ctx->exception) return;
    }

label_7F30010C:
    ctx->pc = 0x7F30010Cu;
    // 7F30010C: stfd     f25, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30010Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F300110:
    ctx->pc = 0x7F300110u;
    // 7F300110: psq_st   f25, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F300110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F300110u);
        if (ctx->exception) return;
    }

label_7F300114:
    ctx->pc = 0x7F300114u;
    // 7F300114: stfd     f24, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F300114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F300118:
    ctx->pc = 0x7F300118u;
    // 7F300118: psq_st   f24, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F300118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F300118u);
        if (ctx->exception) return;
    }

label_7F30011C:
    ctx->pc = 0x7F30011Cu;
    // 7F30011C: stmw     r15, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        for (u32 r = 15; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F300120:
    ctx->pc = 0x7F300120u;
    // 7F300120: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F300124:
    ctx->pc = 0x7F300124u;
    // 7F300124: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300128:
    ctx->pc = 0x7F300128u;
    // 7F300128: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30012C:
    ctx->pc = 0x7F30012Cu;
    // 7F30012C: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F300130:
    ctx->pc = 0x7F300130u;
    // 7F300130: lwz     r3, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300134:
    ctx->pc = 0x7F300134u;
    // 7F300134: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F300138:
    ctx->pc = 0x7F300138u;
    // 7F300138: lwz     r30, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F30013C:
    ctx->pc = 0x7F30013Cu;
    // 7F30013C: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300140:
    ctx->pc = 0x7F300140u;
    // 7F300140: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300144:
    ctx->pc = 0x7F300144u;
    // 7F300144: bl      0x7F0FB8B8
    {
            ctx->lr = 0x7F300148u;
            ctx->pc = 0x7F0FB8B8u;
            return;
    }

label_7F300148:
    ctx->pc = 0x7F300148u;
    ctx->downcount -= 2;
    // 7F300148: li      r3, 164
    ctx->gpr[3] = (u32)(s32)(164);

label_7F30014C:
    ctx->pc = 0x7F30014Cu;
    // 7F30014C: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F300150u;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F300150:
    ctx->pc = 0x7F300150u;
    ctx->downcount -= 4;
    // 7F300150: lwz     r4, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300154:
    ctx->pc = 0x7F300154u;
    // 7F300154: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300158:
    ctx->pc = 0x7F300158u;
    // 7F300158: cmplwi  r4, 0x0000
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

label_7F30015C:
    ctx->pc = 0x7F30015Cu;
    // 7F30015C: bc    12, 2, 0x7F300174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300174;
        }
    }

label_7F300160:
    ctx->pc = 0x7F300160u;
    ctx->downcount -= 4;
    // 7F300160: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300164:
    ctx->pc = 0x7F300164u;
    // 7F300164: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F300168:
    ctx->pc = 0x7F300168u;
    // 7F300168: rlwinm r3, r0, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F30016C:
    ctx->pc = 0x7F30016Cu;
    // 7F30016C: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F300170u;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F300170:
    ctx->pc = 0x7F300170u;
    ctx->downcount -= 1;
    // 7F300170: stw     r3, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300174:
    ctx->pc = 0x7F300174u;
    ctx->downcount -= 2;
    // 7F300174: rlwinm r3, r30, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 6u) & 0xFFFFFFC0u;
    }

label_7F300178:
    ctx->pc = 0x7F300178u;
    // 7F300178: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F30017Cu;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F30017C:
    ctx->pc = 0x7F30017Cu;
    ctx->downcount -= 17;
    // 7F30017C: stw     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300180:
    ctx->pc = 0x7F300180u;
    // 7F300180: rlwinm r0, r30, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 4u) & 0xFFFFFFF0u;
    }

label_7F300184:
    ctx->pc = 0x7F300184u;
    // 7F300184: lwz     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300188:
    ctx->pc = 0x7F300188u;
    // 7F300188: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30018C:
    ctx->pc = 0x7F30018Cu;
    // 7F30018C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F300190:
    ctx->pc = 0x7F300190u;
    // 7F300190: stw     r0, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300194:
    ctx->pc = 0x7F300194u;
    // 7F300194: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300198:
    ctx->pc = 0x7F300198u;
    // 7F300198: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30019C:
    ctx->pc = 0x7F30019Cu;
    // 7F30019C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3001A0:
    ctx->pc = 0x7F3001A0u;
    // 7F3001A0: stw     r0, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3001A4:
    ctx->pc = 0x7F3001A4u;
    // 7F3001A4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3001A8:
    ctx->pc = 0x7F3001A8u;
    // 7F3001A8: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3001AC:
    ctx->pc = 0x7F3001ACu;
    // 7F3001AC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3001B0:
    ctx->pc = 0x7F3001B0u;
    // 7F3001B0: stw     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3001B4:
    ctx->pc = 0x7F3001B4u;
    // 7F3001B4: lwz     r4, 64(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3001B8:
    ctx->pc = 0x7F3001B8u;
    // 7F3001B8: cmplwi  r4, 0x0000
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

label_7F3001BC:
    ctx->pc = 0x7F3001BCu;
    // 7F3001BC: bc    12, 2, 0x7F300264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300264;
        }
    }

label_7F3001C0:
    ctx->pc = 0x7F3001C0u;
    ctx->downcount -= 7;
    // 7F3001C0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3001C4:
    ctx->pc = 0x7F3001C4u;
    // 7F3001C4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3001C8:
    ctx->pc = 0x7F3001C8u;
    // 7F3001C8: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F3001CC:
    ctx->pc = 0x7F3001CCu;
    // 7F3001CC: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F3001D0:
    ctx->pc = 0x7F3001D0u;
    // 7F3001D0: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3001D4:
    ctx->pc = 0x7F3001D4u;
    // 7F3001D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3001D8:
    loop_7F3001D8(ctx);
    if (ctx->pc == 0x7F3001ECu) goto label_7F3001EC;
    return;
label_7F3001DC:
    ctx->pc = 0x7F3001DCu;
    // 7F3001DC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3001E0:
    ctx->pc = 0x7F3001E0u;
    // 7F3001E0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3001E4:
    ctx->pc = 0x7F3001E4u;
    // 7F3001E4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3001E8:
    // 7F3001E8: bc    16, 0, 0x7F3001D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3001D8u;
                return;
            }
            goto label_7F3001D8;
        }
    }

label_7F3001EC:
    ctx->pc = 0x7F3001ECu;
    ctx->downcount -= 7;
    // 7F3001EC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3001F0:
    ctx->pc = 0x7F3001F0u;
    // 7F3001F0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3001F4:
    ctx->pc = 0x7F3001F4u;
    // 7F3001F4: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F3001F8:
    ctx->pc = 0x7F3001F8u;
    // 7F3001F8: addi    r4, r26, -4
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(-4);

label_7F3001FC:
    ctx->pc = 0x7F3001FCu;
    // 7F3001FC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F300200:
    ctx->pc = 0x7F300200u;
    // 7F300200: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F300204:
    loop_7F300204(ctx);
    if (ctx->pc == 0x7F300218u) goto label_7F300218;
    return;
label_7F300208:
    ctx->pc = 0x7F300208u;
    // 7F300208: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30020C:
    ctx->pc = 0x7F30020Cu;
    // 7F30020C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300210:
    ctx->pc = 0x7F300210u;
    // 7F300210: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F300214:
    // 7F300214: bc    16, 0, 0x7F300204
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300204u;
                return;
            }
            goto label_7F300204;
        }
    }

label_7F300218:
    ctx->pc = 0x7F300218u;
    ctx->downcount -= 7;
    // 7F300218: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30021C:
    ctx->pc = 0x7F30021Cu;
    // 7F30021C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300220:
    ctx->pc = 0x7F300220u;
    // 7F300220: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F300224:
    ctx->pc = 0x7F300224u;
    // 7F300224: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F300228:
    ctx->pc = 0x7F300228u;
    // 7F300228: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F30022C:
    ctx->pc = 0x7F30022Cu;
    // 7F30022C: addi    r5, r5, -1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F300230:
    ctx->pc = 0x7F300230u;
    // 7F300230: bl      0x80025A80
    {
            ctx->lr = 0x7F300234u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F300234:
    ctx->pc = 0x7F300234u;
    ctx->downcount -= 7;
    // 7F300234: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300238:
    ctx->pc = 0x7F300238u;
    // 7F300238: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30023C:
    ctx->pc = 0x7F30023Cu;
    // 7F30023C: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F300240:
    ctx->pc = 0x7F300240u;
    // 7F300240: addi    r5, r29, -4
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F300244:
    ctx->pc = 0x7F300244u;
    // 7F300244: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F300248:
    ctx->pc = 0x7F300248u;
    // 7F300248: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30024C:
    loop_7F30024C(ctx);
    if (ctx->pc == 0x7F300260u) goto label_7F300260;
    return;
label_7F300250:
    ctx->pc = 0x7F300250u;
    // 7F300250: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F300254:
    ctx->pc = 0x7F300254u;
    // 7F300254: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300258:
    ctx->pc = 0x7F300258u;
    // 7F300258: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F30025C:
    // 7F30025C: bc    16, 0, 0x7F30024C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30024Cu;
                return;
            }
            goto label_7F30024C;
        }
    }

label_7F300260:
    ctx->pc = 0x7F300260u;
    ctx->downcount -= 1;
    // 7F300260: b       0x7F300288
    {
            goto label_7F300288;
    }

label_7F300264:
    ctx->pc = 0x7F300264u;
    ctx->downcount -= 5;
    // 7F300264: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F300268:
    ctx->pc = 0x7F300268u;
    // 7F300268: addi    r5, r29, -4
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F30026C:
    ctx->pc = 0x7F30026Cu;
    // 7F30026C: addi    r4, r26, -4
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(-4);

label_7F300270:
    ctx->pc = 0x7F300270u;
    // 7F300270: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F300274:
    loop_7F300274(ctx);
    if (ctx->pc == 0x7F300288u) goto label_7F300288;
    return;
label_7F300278:
    ctx->pc = 0x7F300278u;
    // 7F300278: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30027C:
    ctx->pc = 0x7F30027Cu;
    // 7F30027C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300280:
    ctx->pc = 0x7F300280u;
    // 7F300280: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F300284:
    // 7F300284: bc    16, 0, 0x7F300274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300274u;
                return;
            }
            goto label_7F300274;
        }
    }

label_7F300288:
    ctx->pc = 0x7F300288u;
    ctx->downcount -= 3;
    // 7F300288: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30028C:
    ctx->pc = 0x7F30028Cu;
    // 7F30028C: addi    r3, r29, 128
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(128);

label_7F300290:
    ctx->pc = 0x7F300290u;
    // 7F300290: bl      0x7F11365C
    {
            ctx->lr = 0x7F300294u;
            ctx->pc = 0x7F11365Cu;
            return;
    }

label_7F300294:
    ctx->pc = 0x7F300294u;
    ctx->downcount -= 3;
    // 7F300294: lwz     r0, 120(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300298:
    ctx->pc = 0x7F300298u;
    // 7F300298: cmpwi   r0, 0
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

label_7F30029C:
    ctx->pc = 0x7F30029Cu;
    // 7F30029C: bc    12, 2, 0x7F3002EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3002EC;
        }
    }

label_7F3002A0:
    ctx->pc = 0x7F3002A0u;
    ctx->downcount -= 3;
    // 7F3002A0: lwz     r3, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3002A4:
    ctx->pc = 0x7F3002A4u;
    // 7F3002A4: cmplwi  r3, 0x0000
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

label_7F3002A8:
    ctx->pc = 0x7F3002A8u;
    // 7F3002A8: bc    12, 2, 0x7F3002EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3002EC;
        }
    }

label_7F3002AC:
    ctx->pc = 0x7F3002ACu;
    ctx->downcount -= 6;
    // 7F3002AC: lwz     r17, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F3002B0:
    ctx->pc = 0x7F3002B0u;
    // 7F3002B0: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F3002B4:
    ctx->pc = 0x7F3002B4u;
    // 7F3002B4: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_7F3002B8:
    ctx->pc = 0x7F3002B8u;
    // 7F3002B8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F3002BC:
    ctx->pc = 0x7F3002BCu;
    // 7F3002BC: lha     r19, 92(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(92);
        ctx->gpr[19] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3002C0:
    ctx->pc = 0x7F3002C0u;
    // 7F3002C0: b       0x7F3002E4
    {
            goto label_7F3002E4;
    }

label_7F3002C4:
    ctx->pc = 0x7F3002C4u;
    ctx->downcount -= 5;
    // 7F3002C4: lwz     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3002C8:
    // 7F3002C8: addi    r4, r15, 444
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(444);

label_7F3002CC:
    // 7F3002CC: add   r4, r17, r4
    {
        u32 a = ctx->gpr[17];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3002D0:
    // 7F3002D0: add   r3, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3002D4:
    // 7F3002D4: bl      0x7F301AD8
    {
            ctx->lr = 0x7F3002D8u;
            goto label_7F301AD8;
    }

label_7F3002D8:
    ctx->downcount -= 3;
    // 7F3002D8: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F3002DC:
    // 7F3002DC: addi    r15, r15, 324
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(324);

label_7F3002E0:
    // 7F3002E0: addi    r16, r16, 64
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(64);

label_7F3002E4:
    ctx->downcount -= 2;
    // 7F3002E4: cmpw    r18, r19
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[19]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3002E8:
    // 7F3002E8: bc    12, 0, 0x7F3002C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3002C4u;
                return;
            }
            goto label_7F3002C4;
        }
    }

label_7F3002EC:
    ctx->pc = 0x7F3002ECu;
    ctx->downcount -= 3;
    // 7F3002EC: lwz     r0, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3002F0:
    ctx->pc = 0x7F3002F0u;
    // 7F3002F0: cmplwi  r0, 0x0000
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

label_7F3002F4:
    ctx->pc = 0x7F3002F4u;
    // 7F3002F4: bc    12, 2, 0x7F300558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300558;
        }
    }

label_7F3002F8:
    ctx->pc = 0x7F3002F8u;
    ctx->downcount -= 3;
    // 7F3002F8: lwz     r0, 128(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3002FC:
    ctx->pc = 0x7F3002FCu;
    // 7F3002FC: cmpwi   r0, 0
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

label_7F300300:
    ctx->pc = 0x7F300300u;
    // 7F300300: bc    12, 2, 0x7F3003C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3003C8;
        }
    }

label_7F300304:
    ctx->pc = 0x7F300304u;
    ctx->downcount -= 17;
    // 7F300304: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300308:
    ctx->pc = 0x7F300308u;
    // 7F300308: lwz     r4, 1056(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1056);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30030C:
    ctx->pc = 0x7F30030Cu;
    // 7F30030C: lwz     r6, 1060(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1060);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300310:
    ctx->pc = 0x7F300310u;
    // 7F300310: addi    r7, r3, -1052
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300314:
    ctx->pc = 0x7F300314u;
    // 7F300314: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300318:
    ctx->pc = 0x7F300318u;
    // 7F300318: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30031C:
    ctx->pc = 0x7F30031Cu;
    // 7F30031C: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300320:
    ctx->pc = 0x7F300320u;
    // 7F300320: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F300324:
    ctx->pc = 0x7F300324u;
    // 7F300324: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F300328:
    ctx->pc = 0x7F300328u;
    // 7F300328: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F30032C:
    ctx->pc = 0x7F30032Cu;
    // 7F30032C: stw     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300330:
    ctx->pc = 0x7F300330u;
    // 7F300330: lwz     r6, 1064(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1064);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300334:
    ctx->pc = 0x7F300334u;
    // 7F300334: lwz     r3, 1068(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1068);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300338:
    ctx->pc = 0x7F300338u;
    // 7F300338: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30033C:
    ctx->pc = 0x7F30033Cu;
    // 7F30033C: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300340:
    ctx->pc = 0x7F300340u;
    // 7F300340: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F300344:
    loop_7F300344(ctx);
    if (ctx->pc == 0x7F300358u) goto label_7F300358;
    return;
label_7F300348:
    ctx->pc = 0x7F300348u;
    // 7F300348: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30034C:
    ctx->pc = 0x7F30034Cu;
    // 7F30034C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300350:
    ctx->pc = 0x7F300350u;
    // 7F300350: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F300354:
    // 7F300354: bc    16, 0, 0x7F300344
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300344u;
                return;
            }
            goto label_7F300344;
        }
    }

label_7F300358:
    ctx->pc = 0x7F300358u;
    ctx->downcount -= 6;
    // 7F300358: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30035C:
    ctx->pc = 0x7F30035Cu;
    // 7F30035C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F300360:
    ctx->pc = 0x7F300360u;
    // 7F300360: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300364:
    ctx->pc = 0x7F300364u;
    // 7F300364: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F300368:
    ctx->pc = 0x7F300368u;
    // 7F300368: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30036C:
    ctx->pc = 0x7F30036Cu;
    // 7F30036C: bl      0x7F114508
    {
            ctx->lr = 0x7F300370u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F300370:
    ctx->pc = 0x7F300370u;
    ctx->downcount -= 21;
    // 7F300370: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300374:
    ctx->pc = 0x7F300374u;
    // 7F300374: lwz     r5, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300378:
    ctx->pc = 0x7F300378u;
    // 7F300378: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F30037C:
    ctx->pc = 0x7F30037Cu;
    // 7F30037C: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300380:
    ctx->pc = 0x7F300380u;
    // 7F300380: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300384:
    ctx->pc = 0x7F300384u;
    // 7F300384: lwzu     r6, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F300388:
    ctx->pc = 0x7F300388u;
    // 7F300388: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30038C:
    ctx->pc = 0x7F30038Cu;
    // 7F30038C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300390:
    ctx->pc = 0x7F300390u;
    // 7F300390: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300394:
    ctx->pc = 0x7F300394u;
    // 7F300394: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300398:
    ctx->pc = 0x7F300398u;
    // 7F300398: lwz     r8, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F30039C:
    ctx->pc = 0x7F30039Cu;
    // 7F30039C: lwz     r7, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3003A0:
    ctx->pc = 0x7F3003A0u;
    // 7F3003A0: stw     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3003A4:
    ctx->pc = 0x7F3003A4u;
    // 7F3003A4: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3003A8:
    ctx->pc = 0x7F3003A8u;
    // 7F3003A8: stw     r6, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3003AC:
    ctx->pc = 0x7F3003ACu;
    // 7F3003AC: stw     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3003B0:
    ctx->pc = 0x7F3003B0u;
    // 7F3003B0: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3003B4:
    ctx->pc = 0x7F3003B4u;
    // 7F3003B4: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3003B8:
    ctx->pc = 0x7F3003B8u;
    // 7F3003B8: stw     r6, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3003BC:
    ctx->pc = 0x7F3003BCu;
    // 7F3003BC: stw     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3003C0:
    ctx->pc = 0x7F3003C0u;
    // 7F3003C0: bl      0x80025FFC
    {
            ctx->lr = 0x7F3003C4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F3003C4:
    ctx->pc = 0x7F3003C4u;
    ctx->downcount -= 1;
    // 7F3003C4: b       0x7F300438
    {
            goto label_7F300438;
    }

label_7F3003C8:
    ctx->pc = 0x7F3003C8u;
    ctx->downcount -= 20;
    // 7F3003C8: lwz     r5, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3003CC:
    ctx->pc = 0x7F3003CCu;
    // 7F3003CC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3003D0:
    ctx->pc = 0x7F3003D0u;
    // 7F3003D0: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3003D4:
    ctx->pc = 0x7F3003D4u;
    // 7F3003D4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3003D8:
    ctx->pc = 0x7F3003D8u;
    // 7F3003D8: stwu     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F3003DC:
    ctx->pc = 0x7F3003DCu;
    // 7F3003DC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3003E0:
    ctx->pc = 0x7F3003E0u;
    // 7F3003E0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3003E4:
    ctx->pc = 0x7F3003E4u;
    // 7F3003E4: lwz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3003E8:
    ctx->pc = 0x7F3003E8u;
    // 7F3003E8: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3003EC:
    ctx->pc = 0x7F3003ECu;
    // 7F3003EC: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3003F0:
    ctx->pc = 0x7F3003F0u;
    // 7F3003F0: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3003F4:
    ctx->pc = 0x7F3003F4u;
    // 7F3003F4: lwz     r6, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3003F8:
    ctx->pc = 0x7F3003F8u;
    // 7F3003F8: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3003FC:
    ctx->pc = 0x7F3003FCu;
    // 7F3003FC: stwu     r6, -1068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[4] = ea;
    }

label_7F300400:
    ctx->pc = 0x7F300400u;
    // 7F300400: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300404:
    ctx->pc = 0x7F300404u;
    // 7F300404: lwz     r6, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300408:
    ctx->pc = 0x7F300408u;
    // 7F300408: lwz     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30040C:
    ctx->pc = 0x7F30040Cu;
    // 7F30040C: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300410:
    ctx->pc = 0x7F300410u;
    // 7F300410: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300414:
    ctx->pc = 0x7F300414u;
    // 7F300414: bl      0x80025FFC
    {
            ctx->lr = 0x7F300418u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F300418:
    ctx->pc = 0x7F300418u;
    ctx->downcount -= 8;
    // 7F300418: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30041C:
    ctx->pc = 0x7F30041Cu;
    // 7F30041C: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300420:
    ctx->pc = 0x7F300420u;
    // 7F300420: stw     r3, 76(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300424:
    ctx->pc = 0x7F300424u;
    // 7F300424: stw     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300428:
    ctx->pc = 0x7F300428u;
    // 7F300428: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30042C:
    ctx->pc = 0x7F30042Cu;
    // 7F30042C: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300430:
    ctx->pc = 0x7F300430u;
    // 7F300430: stw     r3, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300434:
    ctx->pc = 0x7F300434u;
    // 7F300434: stw     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300438:
    ctx->pc = 0x7F300438u;
    ctx->downcount -= 33;
    // 7F300438: lwz     r6, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30043C:
    ctx->pc = 0x7F30043Cu;
    // 7F30043C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300440:
    ctx->pc = 0x7F300440u;
    // 7F300440: addi    r17, r3, -1068
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300444:
    ctx->pc = 0x7F300444u;
    // 7F300444: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F300448:
    ctx->pc = 0x7F300448u;
    // 7F300448: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30044C:
    ctx->pc = 0x7F30044Cu;
    // 7F30044C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300450:
    ctx->pc = 0x7F300450u;
    // 7F300450: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300454:
    ctx->pc = 0x7F300454u;
    // 7F300454: addi    r16, r3, -1052
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300458:
    ctx->pc = 0x7F300458u;
    // 7F300458: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30045C:
    ctx->pc = 0x7F30045Cu;
    // 7F30045C: lfs     f2, 0(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F30045Cu)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F300460:
    ctx->pc = 0x7F300460u;
    // 7F300460: addi    r4, r3, 32136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32136);

label_7F300464:
    ctx->pc = 0x7F300464u;
    // 7F300464: stw     r5, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300468:
    ctx->pc = 0x7F300468u;
    // 7F300468: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30046C:
    ctx->pc = 0x7F30046Cu;
    // 7F30046C: lfs     f3, 4(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F30046Cu)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F300470:
    ctx->pc = 0x7F300470u;
    // 7F300470: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300474:
    ctx->pc = 0x7F300474u;
    // 7F300474: addi    r15, r3, -1084
    ctx->gpr[15] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F300478:
    ctx->pc = 0x7F300478u;
    // 7F300478: lfs     f1, 8(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F300478u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30047C:
    ctx->pc = 0x7F30047Cu;
    // 7F30047C: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F300480:
    ctx->pc = 0x7F300480u;
    // 7F300480: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300484:
    ctx->pc = 0x7F300484u;
    // 7F300484: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300488:
    ctx->pc = 0x7F300488u;
    // 7F300488: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F300488u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30048C:
    ctx->pc = 0x7F30048Cu;
    // 7F30048C: stw     r3, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300490:
    ctx->pc = 0x7F300490u;
    // 7F300490: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300494:
    ctx->pc = 0x7F300494u;
    // 7F300494: lfs     f4, 152(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300494u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F300498:
    ctx->pc = 0x7F300498u;
    // 7F300498: fmuls   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F300498u)) return;
    ppc_fmuls(ctx, 2, 2, 4);

label_7F30049C:
    ctx->pc = 0x7F30049Cu;
    // 7F30049C: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F30049Cu)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_7F3004A0:
    ctx->pc = 0x7F3004A0u;
    // 7F3004A0: stfs     f2, 0(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F3004A0u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3004A4:
    ctx->pc = 0x7F3004A4u;
    // 7F3004A4: lfs     f2, 156(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3004A4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3004A8:
    ctx->pc = 0x7F3004A8u;
    // 7F3004A8: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3004A8u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F3004AC:
    ctx->pc = 0x7F3004ACu;
    // 7F3004AC: stfs     f1, 8(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F3004ACu)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3004B0:
    ctx->pc = 0x7F3004B0u;
    // 7F3004B0: stfs     f0, 12(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F3004B0u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3004B4:
    ctx->pc = 0x7F3004B4u;
    // 7F3004B4: stfs     f2, 4(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F3004B4u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3004B8:
    ctx->pc = 0x7F3004B8u;
    // 7F3004B8: b       0x7F300550
    {
            goto label_7F300550;
    }

label_7F3004BC:
    ctx->downcount -= 4;
    // 7F3004BC: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F3004C0:
    // 7F3004C0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3004C4:
    // 7F3004C4: or   r5, r15, r15
    {
        ctx->gpr[5] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F3004C8:
    // 7F3004C8: bl      0x80025FD8
    {
            ctx->lr = 0x7F3004CCu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3004CC:
    ctx->pc = 0x7F3004CCu;
    ctx->downcount -= 33;
    // 7F3004CC: lwz     r5, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3004D0:
    // 7F3004D0: addi    r0, r19, 16
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(16);

label_7F3004D4:
    ctx->pc = 0x7F3004D4u;
    // 7F3004D4: lwz     r4, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3004D8:
    // 7F3004D8: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F3004DC:
    ctx->pc = 0x7F3004DCu;
    // 7F3004DC: lwz     r3, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3004E0:
    // 7F3004E0: add   r5, r5, r19
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3004E4:
    ctx->pc = 0x7F3004E4u;
    // 7F3004E4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3004E8:
    ctx->pc = 0x7F3004E8u;
    // 7F3004E8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3004EC:
    ctx->pc = 0x7F3004ECu;
    // 7F3004EC: lwz     r4, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3004F0:
    ctx->pc = 0x7F3004F0u;
    // 7F3004F0: lwz     r3, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3004F4:
    ctx->pc = 0x7F3004F4u;
    // 7F3004F4: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3004F8:
    ctx->pc = 0x7F3004F8u;
    // 7F3004F8: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3004FC:
    ctx->pc = 0x7F3004FCu;
    // 7F3004FC: lwz     r3, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300500:
    ctx->pc = 0x7F300500u;
    // 7F300500: lwz     r4, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300504:
    // 7F300504: add   r5, r3, r19
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300508:
    ctx->pc = 0x7F300508u;
    // 7F300508: lwz     r3, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30050C:
    // 7F30050C: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F300510:
    ctx->pc = 0x7F300510u;
    // 7F300510: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300514:
    ctx->pc = 0x7F300514u;
    // 7F300514: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300518:
    ctx->pc = 0x7F300518u;
    // 7F300518: lwz     r4, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30051C:
    ctx->pc = 0x7F30051Cu;
    // 7F30051C: lwz     r3, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300520:
    ctx->pc = 0x7F300520u;
    // 7F300520: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300524:
    ctx->pc = 0x7F300524u;
    // 7F300524: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300528:
    ctx->pc = 0x7F300528u;
    // 7F300528: lwz     r3, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30052C:
    // 7F30052C: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F300530:
    ctx->pc = 0x7F300530u;
    // 7F300530: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300534:
    ctx->pc = 0x7F300534u;
    // 7F300534: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300538:
    ctx->pc = 0x7F300538u;
    // 7F300538: stw     r3, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30053C:
    ctx->pc = 0x7F30053Cu;
    // 7F30053C: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300540:
    ctx->pc = 0x7F300540u;
    // 7F300540: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300544:
    ctx->pc = 0x7F300544u;
    // 7F300544: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300548:
    ctx->pc = 0x7F300548u;
    // 7F300548: stw     r3, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30054C:
    ctx->pc = 0x7F30054Cu;
    // 7F30054C: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300550:
    ctx->downcount -= 2;
    // 7F300550: cmpw    r18, r30
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F300554:
    // 7F300554: bc    12, 0, 0x7F3004BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3004BCu;
                return;
            }
            goto label_7F3004BC;
        }
    }

label_7F300558:
    ctx->pc = 0x7F300558u;
    ctx->downcount -= 46;
    // 7F300558: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30055C:
    ctx->pc = 0x7F30055Cu;
    // 7F30055C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F300560:
    ctx->pc = 0x7F300560u;
    // 7F300560: addi    r4, r3, 32088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32088);

label_7F300564:
    ctx->pc = 0x7F300564u;
    // 7F300564: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F300568:
    ctx->pc = 0x7F300568u;
    // 7F300568: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30056C:
    ctx->pc = 0x7F30056Cu;
    // 7F30056C: addi    r6, r5, 32072
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(32072);

label_7F300570:
    ctx->pc = 0x7F300570u;
    // 7F300570: addi    r15, r3, -1068
    ctx->gpr[15] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300574:
    ctx->pc = 0x7F300574u;
    // 7F300574: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F300578:
    ctx->pc = 0x7F300578u;
    // 7F300578: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30057C:
    ctx->pc = 0x7F30057Cu;
    // 7F30057C: lfs     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F30057Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F300580:
    ctx->pc = 0x7F300580u;
    // 7F300580: addi    r17, r3, -1052
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300584:
    ctx->pc = 0x7F300584u;
    // 7F300584: lwz     r18, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F300588:
    ctx->pc = 0x7F300588u;
    // 7F300588: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30058C:
    ctx->pc = 0x7F30058Cu;
    // 7F30058C: lwz     r19, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F300590:
    ctx->pc = 0x7F300590u;
    // 7F300590: addi    r22, r3, -1084
    ctx->gpr[22] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F300594:
    ctx->pc = 0x7F300594u;
    // 7F300594: lwz     r20, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F300598:
    ctx->pc = 0x7F300598u;
    // 7F300598: lwz     r21, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F30059C:
    ctx->pc = 0x7F30059Cu;
    // 7F30059C: addi    r16, r5, -1148
    ctx->gpr[16] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3005A0:
    ctx->pc = 0x7F3005A0u;
    // 7F3005A0: stw     r17, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005A4:
    ctx->pc = 0x7F3005A4u;
    // 7F3005A4: li      r23, 16
    ctx->gpr[23] = (u32)(s32)(16);

label_7F3005A8:
    ctx->pc = 0x7F3005A8u;
    // 7F3005A8: stw     r15, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005AC:
    ctx->pc = 0x7F3005ACu;
    // 7F3005AC: stw     r17, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005B0:
    ctx->pc = 0x7F3005B0u;
    // 7F3005B0: stw     r15, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005B4:
    ctx->pc = 0x7F3005B4u;
    // 7F3005B4: stw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005B8:
    ctx->pc = 0x7F3005B8u;
    // 7F3005B8: stw     r15, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005BC:
    ctx->pc = 0x7F3005BCu;
    // 7F3005BC: stw     r22, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005C0:
    ctx->pc = 0x7F3005C0u;
    // 7F3005C0: stw     r15, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005C4:
    ctx->pc = 0x7F3005C4u;
    // 7F3005C4: stw     r17, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005C8:
    ctx->pc = 0x7F3005C8u;
    // 7F3005C8: stw     r17, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005CC:
    ctx->pc = 0x7F3005CCu;
    // 7F3005CC: stw     r15, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005D0:
    ctx->pc = 0x7F3005D0u;
    // 7F3005D0: stw     r17, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005D4:
    ctx->pc = 0x7F3005D4u;
    // 7F3005D4: stw     r15, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F3005D8:
    ctx->pc = 0x7F3005D8u;
    // 7F3005D8: stw     r22, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005DC:
    ctx->pc = 0x7F3005DCu;
    // 7F3005DC: stw     r17, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005E0:
    ctx->pc = 0x7F3005E0u;
    // 7F3005E0: stw     r22, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005E4:
    ctx->pc = 0x7F3005E4u;
    // 7F3005E4: stw     r22, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005E8:
    ctx->pc = 0x7F3005E8u;
    // 7F3005E8: stw     r22, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005EC:
    ctx->pc = 0x7F3005ECu;
    // 7F3005EC: stw     r17, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3005F0:
    ctx->pc = 0x7F3005F0u;
    // 7F3005F0: stw     r22, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005F4:
    ctx->pc = 0x7F3005F4u;
    // 7F3005F4: stw     r22, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005F8:
    ctx->pc = 0x7F3005F8u;
    // 7F3005F8: stw     r22, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3005FC:
    ctx->pc = 0x7F3005FCu;
    // 7F3005FC: stw     r22, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F300600:
    ctx->pc = 0x7F300600u;
    // 7F300600: stw     r15, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F300604:
    ctx->pc = 0x7F300604u;
    // 7F300604: stw     r22, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F300608:
    ctx->pc = 0x7F300608u;
    // 7F300608: stw     r15, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F30060C:
    ctx->pc = 0x7F30060Cu;
    // 7F30060C: b       0x7F300EB0
    {
            goto label_7F300EB0;
    }

label_7F300610:
    ctx->pc = 0x7F300610u;
    ctx->downcount -= 5;
    // 7F300610: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300614:
    // 7F300614: addi    r28, r1, 24
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(24);

label_7F300618:
    // 7F300618: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30061C:
    // 7F30061C: add   r3, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F300620:
    // 7F300620: bl      0x7F1FF888
    {
            ctx->lr = 0x7F300624u;
            ctx->pc = 0x7F1FF888u;
            return;
    }

label_7F300624:
    ctx->downcount -= 2;
    // 7F300624: cmpwi   r3, 0
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

label_7F300628:
    // 7F300628: bc    4, 2, 0x7F300638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300638;
        }
    }

label_7F30062C:
    ctx->downcount -= 3;
    // 7F30062C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F300630:
    // 7F300630: addi    r0, r3, -4824
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F300634:
    // 7F300634: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F300638:
    ctx->downcount -= 9;
    // 7F300638: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30063C:
    ctx->pc = 0x7F30063Cu;
    // 7F30063C: stfs     f29, 12(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F30063Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F300640:
    // 7F300640: addi    r5, r16, -4
    ctx->gpr[5] = ctx->gpr[16] + (u32)(s32)(-4);

label_7F300644:
    // 7F300644: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F300648:
    ctx->pc = 0x7F300648u;
    // 7F300648: stfs     f29, 8(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F300648u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F30064C:
    ctx->pc = 0x7F30064Cu;
    // 7F30064C: stfs     f29, 4(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F30064Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F300650:
    ctx->pc = 0x7F300650u;
    // 7F300650: stfs     f29, 0(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F300650u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F300654:
    ctx->pc = 0x7F300654u;
    // 7F300654: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F300658:
    loop_7F300658(ctx);
    if (ctx->pc == 0x7F30066Cu) goto label_7F30066C;
    return;
label_7F30065C:
    ctx->pc = 0x7F30065Cu;
    // 7F30065C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F300660:
    ctx->pc = 0x7F300660u;
    // 7F300660: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300664:
    ctx->pc = 0x7F300664u;
    // 7F300664: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F300668:
    // 7F300668: bc    16, 0, 0x7F300658
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300658u;
                return;
            }
            goto label_7F300658;
        }
    }

label_7F30066C:
    ctx->pc = 0x7F30066Cu;
    ctx->downcount -= 18;
    // 7F30066C: lwz     r0, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300670:
    // 7F300670: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F300674:
    // 7F300674: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F300678:
    // 7F300678: or   r5, r15, r15
    {
        ctx->gpr[5] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F30067C:
    // 7F30067C: add   r7, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F300680:
    ctx->pc = 0x7F300680u;
    // 7F300680: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300684:
    ctx->pc = 0x7F300684u;
    // 7F300684: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300688:
    ctx->pc = 0x7F300688u;
    // 7F300688: stw     r6, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30068C:
    ctx->pc = 0x7F30068Cu;
    // 7F30068C: stw     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300690:
    ctx->pc = 0x7F300690u;
    // 7F300690: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300694:
    ctx->pc = 0x7F300694u;
    // 7F300694: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300698:
    ctx->pc = 0x7F300698u;
    // 7F300698: stw     r6, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30069C:
    ctx->pc = 0x7F30069Cu;
    // 7F30069C: stw     r0, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3006A0:
    ctx->pc = 0x7F3006A0u;
    // 7F3006A0: stw     r18, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F3006A4:
    ctx->pc = 0x7F3006A4u;
    // 7F3006A4: stw     r19, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F3006A8:
    ctx->pc = 0x7F3006A8u;
    // 7F3006A8: stw     r20, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F3006AC:
    ctx->pc = 0x7F3006ACu;
    // 7F3006AC: stw     r21, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F3006B0:
    // 7F3006B0: bl      0x7F114508
    {
            ctx->lr = 0x7F3006B4u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3006B4:
    ctx->pc = 0x7F3006B4u;
    ctx->downcount -= 4;
    // 7F3006B4: lfs     f1, 96(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3006B4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3006B8:
    // 7F3006B8: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3006BC:
    ctx->pc = 0x7F3006BCu;
    // 7F3006BC: lwz     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3006C0:
    // 7F3006C0: bl      0x80026020
    {
            ctx->lr = 0x7F3006C4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3006C4:
    ctx->pc = 0x7F3006C4u;
    ctx->downcount -= 12;
    // 7F3006C4: lwz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3006C8:
    ctx->pc = 0x7F3006C8u;
    // 7F3006C8: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3006CC:
    ctx->pc = 0x7F3006CCu;
    // 7F3006CC: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3006D0:
    ctx->pc = 0x7F3006D0u;
    // 7F3006D0: stw     r6, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3006D4:
    ctx->pc = 0x7F3006D4u;
    // 7F3006D4: lwz     r4, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3006D8:
    ctx->pc = 0x7F3006D8u;
    // 7F3006D8: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3006DC:
    ctx->pc = 0x7F3006DCu;
    // 7F3006DC: lwz     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3006E0:
    ctx->pc = 0x7F3006E0u;
    // 7F3006E0: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3006E4:
    ctx->pc = 0x7F3006E4u;
    // 7F3006E4: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3006E8:
    ctx->pc = 0x7F3006E8u;
    // 7F3006E8: stw     r6, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3006EC:
    ctx->pc = 0x7F3006ECu;
    // 7F3006EC: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3006F0:
    // 7F3006F0: bl      0x80025FD8
    {
            ctx->lr = 0x7F3006F4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3006F4:
    ctx->pc = 0x7F3006F4u;
    ctx->downcount -= 4;
    // 7F3006F4: lfs     f1, 92(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3006F4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3006F8:
    // 7F3006F8: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3006FC:
    ctx->pc = 0x7F3006FCu;
    // 7F3006FC: lwz     r4, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300700:
    // 7F300700: bl      0x80026020
    {
            ctx->lr = 0x7F300704u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300704:
    ctx->pc = 0x7F300704u;
    ctx->downcount -= 14;
    // 7F300704: lwz     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300708:
    ctx->pc = 0x7F300708u;
    // 7F300708: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30070C:
    // 7F30070C: add   r7, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F300710:
    ctx->pc = 0x7F300710u;
    // 7F300710: lwz     r4, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300714:
    ctx->pc = 0x7F300714u;
    // 7F300714: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300718:
    ctx->pc = 0x7F300718u;
    // 7F300718: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30071C:
    ctx->pc = 0x7F30071Cu;
    // 7F30071C: lwz     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300720:
    ctx->pc = 0x7F300720u;
    // 7F300720: stw     r6, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300724:
    ctx->pc = 0x7F300724u;
    // 7F300724: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300728:
    ctx->pc = 0x7F300728u;
    // 7F300728: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30072C:
    ctx->pc = 0x7F30072Cu;
    // 7F30072C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300730:
    ctx->pc = 0x7F300730u;
    // 7F300730: stw     r6, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300734:
    ctx->pc = 0x7F300734u;
    // 7F300734: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300738:
    // 7F300738: bl      0x80025FD8
    {
            ctx->lr = 0x7F30073Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30073C:
    ctx->pc = 0x7F30073Cu;
    ctx->downcount -= 4;
    // 7F30073C: lfs     f1, 104(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F30073Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F300740:
    ctx->pc = 0x7F300740u;
    // 7F300740: lwz     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300744:
    ctx->pc = 0x7F300744u;
    // 7F300744: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300748:
    // 7F300748: bl      0x80026020
    {
            ctx->lr = 0x7F30074Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F30074C:
    ctx->pc = 0x7F30074Cu;
    ctx->downcount -= 4;
    // 7F30074C: lwz     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300750:
    ctx->pc = 0x7F300750u;
    // 7F300750: lwz     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300754:
    ctx->pc = 0x7F300754u;
    // 7F300754: lwz     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300758:
    // 7F300758: bl      0x80025FD8
    {
            ctx->lr = 0x7F30075Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30075C:
    ctx->pc = 0x7F30075Cu;
    ctx->downcount -= 24;
    // 7F30075C: lwz     r10, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F300760:
    ctx->pc = 0x7F300760u;
    // 7F300760: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300764:
    ctx->pc = 0x7F300764u;
    // 7F300764: lwz     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F300768:
    // 7F300768: addi    r6, r10, -16
    ctx->gpr[6] = ctx->gpr[10] + (u32)(s32)(-16);

label_7F30076C:
    ctx->pc = 0x7F30076Cu;
    // 7F30076C: lwz     r8, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F300770:
    // 7F300770: add   r7, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F300774:
    ctx->pc = 0x7F300774u;
    // 7F300774: lwz     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300778:
    ctx->pc = 0x7F300778u;
    // 7F300778: stw     r9, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F30077C:
    ctx->pc = 0x7F30077Cu;
    // 7F30077C: lwz     r4, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300780:
    ctx->pc = 0x7F300780u;
    // 7F300780: stw     r8, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F300784:
    ctx->pc = 0x7F300784u;
    // 7F300784: lwz     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300788:
    ctx->pc = 0x7F300788u;
    // 7F300788: lwz     r6, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30078C:
    ctx->pc = 0x7F30078Cu;
    // 7F30078C: lwz     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300790:
    ctx->pc = 0x7F300790u;
    // 7F300790: stw     r6, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300794:
    ctx->pc = 0x7F300794u;
    // 7F300794: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300798:
    ctx->pc = 0x7F300798u;
    // 7F300798: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30079C:
    ctx->pc = 0x7F30079Cu;
    // 7F30079C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3007A0:
    ctx->pc = 0x7F3007A0u;
    // 7F3007A0: stw     r6, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3007A4:
    ctx->pc = 0x7F3007A4u;
    // 7F3007A4: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3007A8:
    ctx->pc = 0x7F3007A8u;
    // 7F3007A8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3007AC:
    ctx->pc = 0x7F3007ACu;
    // 7F3007AC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3007B0:
    ctx->pc = 0x7F3007B0u;
    // 7F3007B0: stw     r6, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3007B4:
    ctx->pc = 0x7F3007B4u;
    // 7F3007B4: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3007B8:
    // 7F3007B8: bl      0x80025FFC
    {
            ctx->lr = 0x7F3007BCu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F3007BC:
    ctx->pc = 0x7F3007BCu;
    ctx->downcount -= 2;
    // 7F3007BC: lwz     r3, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3007C0:
    // 7F3007C0: bl      0x80026080
    {
            ctx->lr = 0x7F3007C4u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3007C4:
    ctx->downcount -= 1;
    // 7F3007C4: bl      0x7F02A76C
    {
            ctx->lr = 0x7F3007C8u;
            ctx->pc = 0x7F02A76Cu;
            return;
    }

label_7F3007C8:
    ctx->pc = 0x7F3007C8u;
    ctx->downcount -= 23;
    // 7F3007C8: lwz     r8, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3007CC:
    ctx->pc = 0x7F3007CCu;
    // 7F3007CC: frsp    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3007CCu)) return;
    ppc_frsp(ctx, 26, 1);

label_7F3007D0:
    ctx->pc = 0x7F3007D0u;
    // 7F3007D0: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3007D4:
    ctx->pc = 0x7F3007D4u;
    // 7F3007D4: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3007D8:
    // 7F3007D8: add   r7, r8, r23
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3007DC:
    ctx->pc = 0x7F3007DCu;
    // 7F3007DC: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3007E0:
    ctx->pc = 0x7F3007E0u;
    // 7F3007E0: lwz     r4, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3007E4:
    ctx->pc = 0x7F3007E4u;
    // 7F3007E4: stw     r6, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3007E8:
    ctx->pc = 0x7F3007E8u;
    // 7F3007E8: lwz     r5, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3007EC:
    ctx->pc = 0x7F3007ECu;
    // 7F3007EC: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3007F0:
    ctx->pc = 0x7F3007F0u;
    // 7F3007F0: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3007F4:
    ctx->pc = 0x7F3007F4u;
    // 7F3007F4: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3007F8:
    ctx->pc = 0x7F3007F8u;
    // 7F3007F8: stw     r6, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3007FC:
    ctx->pc = 0x7F3007FCu;
    // 7F3007FC: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300800:
    ctx->pc = 0x7F300800u;
    // 7F300800: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300804:
    ctx->pc = 0x7F300804u;
    // 7F300804: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300808:
    ctx->pc = 0x7F300808u;
    // 7F300808: stw     r6, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30080C:
    ctx->pc = 0x7F30080Cu;
    // 7F30080C: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300810:
    ctx->pc = 0x7F300810u;
    // 7F300810: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300814:
    ctx->pc = 0x7F300814u;
    // 7F300814: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300818:
    ctx->pc = 0x7F300818u;
    // 7F300818: stw     r6, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30081C:
    ctx->pc = 0x7F30081Cu;
    // 7F30081C: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300820:
    // 7F300820: bl      0x80025FFC
    {
            ctx->lr = 0x7F300824u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F300824:
    ctx->pc = 0x7F300824u;
    ctx->downcount -= 2;
    // 7F300824: lwz     r3, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300828:
    // 7F300828: bl      0x80026080
    {
            ctx->lr = 0x7F30082Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F30082C:
    ctx->downcount -= 1;
    // 7F30082C: bl      0x7F02A76C
    {
            ctx->lr = 0x7F300830u;
            ctx->pc = 0x7F02A76Cu;
            return;
    }

label_7F300830:
    ctx->pc = 0x7F300830u;
    ctx->downcount -= 29;
    // 7F300830: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300830u)) return;
    ppc_frsp(ctx, 0, 1);

label_7F300834:
    ctx->pc = 0x7F300834u;
    // 7F300834: lwz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300838:
    ctx->pc = 0x7F300838u;
    // 7F300838: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30083C:
    ctx->pc = 0x7F30083Cu;
    // 7F30083C: lwz     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300840:
    ctx->pc = 0x7F300840u;
    // 7F300840: fdivs   f1, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F300840u)) return;
    ppc_fdivs(ctx, 1, 0, 26);

label_7F300844:
    ctx->pc = 0x7F300844u;
    // 7F300844: stw     r5, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300848:
    ctx->pc = 0x7F300848u;
    // 7F300848: lwz     r4, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30084C:
    ctx->pc = 0x7F30084Cu;
    // 7F30084C: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300850:
    ctx->pc = 0x7F300850u;
    // 7F300850: lwz     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300854:
    ctx->pc = 0x7F300854u;
    // 7F300854: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300858:
    ctx->pc = 0x7F300858u;
    // 7F300858: stw     r5, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30085C:
    ctx->pc = 0x7F30085Cu;
    // 7F30085C: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300860:
    // 7F300860: bl      0x80026020
    {
            ctx->lr = 0x7F300864u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300864:
    ctx->pc = 0x7F300864u;
    ctx->downcount -= 4;
    // 7F300864: lwz     r3, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300868:
    ctx->pc = 0x7F300868u;
    // 7F300868: lwz     r4, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30086C:
    ctx->pc = 0x7F30086Cu;
    // 7F30086C: lwz     r5, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300870:
    // 7F300870: bl      0x80025FD8
    {
            ctx->lr = 0x7F300874u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300874:
    ctx->pc = 0x7F300874u;
    ctx->downcount -= 13;
    // 7F300874: lwz     r4, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300878:
    ctx->pc = 0x7F300878u;
    // 7F300878: lwz     r3, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30087C:
    ctx->pc = 0x7F30087Cu;
    // 7F30087C: lwz     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300880:
    // 7F300880: add   r4, r4, r23
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F300884:
    ctx->pc = 0x7F300884u;
    // 7F300884: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300888:
    ctx->pc = 0x7F300888u;
    // 7F300888: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30088C:
    ctx->pc = 0x7F30088Cu;
    // 7F30088C: lwz     r3, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300890:
    ctx->pc = 0x7F300890u;
    // 7F300890: lwz     r0, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300894:
    ctx->pc = 0x7F300894u;
    // 7F300894: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300898:
    ctx->pc = 0x7F300898u;
    // 7F300898: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30089C:
    ctx->pc = 0x7F30089Cu;
    // 7F30089C: lwz     r0, 120(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3008A0:
    // 7F3008A0: cmpwi   r0, 0
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

label_7F3008A4:
    // 7F3008A4: bc    12, 2, 0x7F300EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300EA8;
        }
    }

label_7F3008A8:
    ctx->pc = 0x7F3008A8u;
    ctx->downcount -= 3;
    // 7F3008A8: lwz     r4, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3008AC:
    // 7F3008AC: cmplwi  r4, 0x0000
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

label_7F3008B0:
    // 7F3008B0: bc    12, 2, 0x7F300BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300BC4;
        }
    }

label_7F3008B4:
    ctx->pc = 0x7F3008B4u;
    ctx->downcount -= 3;
    // 7F3008B4: lwz     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3008B8:
    // 7F3008B8: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3008BC:
    // 7F3008BC: bc    12, 2, 0x7F3008E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3008E8;
        }
    }

label_7F3008C0:
    ctx->pc = 0x7F3008C0u;
    ctx->downcount -= 7;
    // 7F3008C0: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3008C4:
    // 7F3008C4: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F3008C8:
    ctx->pc = 0x7F3008C8u;
    // 7F3008C8: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3008CC:
    ctx->pc = 0x7F3008CCu;
    // 7F3008CC: lfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3008CCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3008D0:
    // 7F3008D0: add   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3008D4:
    ctx->pc = 0x7F3008D4u;
    // 7F3008D4: lwz     r7, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3008D8:
    // 7F3008D8: bl      0x7F0FCDEC
    {
            ctx->lr = 0x7F3008DCu;
            ctx->pc = 0x7F0FCDECu;
            return;
    }

label_7F3008DC:
    ctx->downcount -= 2;
    // 7F3008DC: cmpwi   r3, 0
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

label_7F3008E0:
    // 7F3008E0: bc    12, 2, 0x7F300A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300A80;
        }
    }

label_7F3008E4:
    ctx->downcount -= 1;
    // 7F3008E4: b       0x7F30090C
    {
            goto label_7F30090C;
    }

label_7F3008E8:
    ctx->pc = 0x7F3008E8u;
    ctx->downcount -= 7;
    // 7F3008E8: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3008EC:
    // 7F3008EC: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F3008F0:
    ctx->pc = 0x7F3008F0u;
    // 7F3008F0: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3008F4:
    ctx->pc = 0x7F3008F4u;
    // 7F3008F4: lfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3008F4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3008F8:
    // 7F3008F8: add   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3008FC:
    ctx->pc = 0x7F3008FCu;
    // 7F3008FC: lwz     r6, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300900:
    // 7F300900: bl      0x7F0FCD2C
    {
            ctx->lr = 0x7F300904u;
            ctx->pc = 0x7F0FCD2Cu;
            return;
    }

label_7F300904:
    ctx->downcount -= 2;
    // 7F300904: cmpwi   r3, 0
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

label_7F300908:
    // 7F300908: bc    12, 2, 0x7F300A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300A80;
        }
    }

label_7F30090C:
    ctx->pc = 0x7F30090Cu;
    ctx->downcount -= 28;
    // 7F30090C: lwz     r7, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F300910:
    // 7F300910: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300914:
    ctx->pc = 0x7F300914u;
    // 7F300914: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300918:
    // 7F300918: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F30091C:
    ctx->pc = 0x7F30091Cu;
    // 7F30091C: stwu     r7, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

label_7F300920:
    ctx->pc = 0x7F300920u;
    // 7F300920: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300924:
    // 7F300924: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300928:
    ctx->pc = 0x7F300928u;
    // 7F300928: lwz     r8, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F30092C:
    ctx->pc = 0x7F30092Cu;
    // 7F30092C: lwz     r6, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300930:
    ctx->pc = 0x7F300930u;
    // 7F300930: stw     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F300934:
    ctx->pc = 0x7F300934u;
    // 7F300934: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300938:
    ctx->pc = 0x7F300938u;
    // 7F300938: lwz     r6, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30093C:
    // 7F30093C: add   r6, r6, r23
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F300940:
    ctx->pc = 0x7F300940u;
    // 7F300940: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F300944:
    ctx->pc = 0x7F300944u;
    // 7F300944: lwz     r8, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F300948:
    ctx->pc = 0x7F300948u;
    // 7F300948: stwu     r9, -1068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
        ctx->gpr[4] = ea;
    }

label_7F30094C:
    ctx->pc = 0x7F30094Cu;
    // 7F30094C: stw     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F300950:
    ctx->pc = 0x7F300950u;
    // 7F300950: lwz     r9, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F300954:
    ctx->pc = 0x7F300954u;
    // 7F300954: lwz     r8, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F300958:
    ctx->pc = 0x7F300958u;
    // 7F300958: stw     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F30095C:
    ctx->pc = 0x7F30095Cu;
    // 7F30095C: stw     r8, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F300960:
    ctx->pc = 0x7F300960u;
    // 7F300960: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F300964:
    ctx->pc = 0x7F300964u;
    // 7F300964: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300968:
    ctx->pc = 0x7F300968u;
    // 7F300968: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30096C:
    ctx->pc = 0x7F30096Cu;
    // 7F30096C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300970:
    ctx->pc = 0x7F300970u;
    // 7F300970: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F300974:
    ctx->pc = 0x7F300974u;
    // 7F300974: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300978:
    // 7F300978: bl      0x80025FFC
    {
            ctx->lr = 0x7F30097Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F30097C:
    ctx->pc = 0x7F30097Cu;
    ctx->downcount -= 15;
    // 7F30097C: lwz     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300980:
    // 7F300980: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300984:
    // 7F300984: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300988:
    // 7F300988: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F30098C:
    // 7F30098C: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300990:
    ctx->pc = 0x7F300990u;
    // 7F300990: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300994:
    // 7F300994: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300998:
    ctx->pc = 0x7F300998u;
    // 7F300998: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30099C:
    ctx->pc = 0x7F30099Cu;
    // 7F30099C: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3009A0:
    ctx->pc = 0x7F3009A0u;
    // 7F3009A0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3009A4:
    ctx->pc = 0x7F3009A4u;
    // 7F3009A4: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3009A8:
    ctx->pc = 0x7F3009A8u;
    // 7F3009A8: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3009AC:
    ctx->pc = 0x7F3009ACu;
    // 7F3009AC: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3009B0:
    ctx->pc = 0x7F3009B0u;
    // 7F3009B0: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3009B4:
    // 7F3009B4: bl      0x80026080
    {
            ctx->lr = 0x7F3009B8u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3009B8:
    ctx->downcount -= 3;
    // 7F3009B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3009BC:
    ctx->pc = 0x7F3009BCu;
    // 7F3009BC: lfs     f2, 32136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3009BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3009C0:
    // 7F3009C0: bl      0x7F301A84
    {
            ctx->lr = 0x7F3009C4u;
            goto label_7F301A84;
    }

label_7F3009C4:
    ctx->downcount -= 4;
    // 7F3009C4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3009C8:
    // 7F3009C8: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3009CC:
    // 7F3009CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3009D0:
    // 7F3009D0: bl      0x80026020
    {
            ctx->lr = 0x7F3009D4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3009D4:
    ctx->downcount -= 5;
    // 7F3009D4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3009D8:
    // 7F3009D8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3009DC:
    // 7F3009DC: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3009E0:
    // 7F3009E0: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F3009E4:
    // 7F3009E4: bl      0x800260DC
    {
            ctx->lr = 0x7F3009E8u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3009E8:
    ctx->pc = 0x7F3009E8u;
    ctx->downcount -= 20;
    // 7F3009E8: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3009EC:
    // 7F3009EC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3009F0:
    // 7F3009F0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3009F4:
    // 7F3009F4: add   r6, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3009F8:
    // 7F3009F8: addi    r7, r4, -1068
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F3009FC:
    ctx->pc = 0x7F3009FCu;
    // 7F3009FC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300A00:
    // 7F300A00: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300A04:
    ctx->pc = 0x7F300A04u;
    // 7F300A04: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A08:
    // 7F300A08: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300A0C:
    ctx->pc = 0x7F300A0Cu;
    // 7F300A0C: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300A10:
    ctx->pc = 0x7F300A10u;
    // 7F300A10: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300A14:
    ctx->pc = 0x7F300A14u;
    // 7F300A14: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300A18:
    ctx->pc = 0x7F300A18u;
    // 7F300A18: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A1C:
    ctx->pc = 0x7F300A1Cu;
    // 7F300A1C: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300A20:
    ctx->pc = 0x7F300A20u;
    // 7F300A20: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300A24:
    ctx->pc = 0x7F300A24u;
    // 7F300A24: lfs     f0, 96(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300A24u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300A28:
    ctx->pc = 0x7F300A28u;
    // 7F300A28: lfs     f2, 108(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300A28u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F300A2C:
    ctx->pc = 0x7F300A2Cu;
    // 7F300A2C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300A2Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F300A30:
    ctx->pc = 0x7F300A30u;
    // 7F300A30: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300A30u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F300A34:
    // 7F300A34: bl      0x80026020
    {
            ctx->lr = 0x7F300A38u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300A38:
    ctx->downcount -= 6;
    // 7F300A38: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300A3C:
    // 7F300A3C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300A40:
    // 7F300A40: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300A44:
    // 7F300A44: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F300A48:
    // 7F300A48: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300A4C:
    // 7F300A4C: bl      0x80025FD8
    {
            ctx->lr = 0x7F300A50u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300A50:
    ctx->downcount -= 12;
    // 7F300A50: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300A54:
    ctx->pc = 0x7F300A54u;
    // 7F300A54: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A58:
    // 7F300A58: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300A5C:
    ctx->pc = 0x7F300A5Cu;
    // 7F300A5C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300A60:
    // 7F300A60: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300A64:
    ctx->pc = 0x7F300A64u;
    // 7F300A64: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A68:
    ctx->pc = 0x7F300A68u;
    // 7F300A68: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300A6C:
    ctx->pc = 0x7F300A6Cu;
    // 7F300A6C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300A70:
    ctx->pc = 0x7F300A70u;
    // 7F300A70: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300A74:
    ctx->pc = 0x7F300A74u;
    // 7F300A74: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A78:
    ctx->pc = 0x7F300A78u;
    // 7F300A78: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300A7C:
    ctx->pc = 0x7F300A7Cu;
    // 7F300A7C: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300A80:
    ctx->pc = 0x7F300A80u;
    ctx->downcount -= 6;
    // 7F300A80: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300A84:
    // 7F300A84: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F300A88:
    // 7F300A88: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F300A8C:
    // 7F300A8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F300A90:
    // 7F300A90: add   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F300A94:
    // 7F300A94: bl      0x7F106A30
    {
            ctx->lr = 0x7F300A98u;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F300A98:
    ctx->downcount -= 2;
    // 7F300A98: cmpwi   r3, 0
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

label_7F300A9C:
    // 7F300A9C: bc    12, 2, 0x7F300EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300EA8;
        }
    }

label_7F300AA0:
    ctx->downcount -= 1;
    // 7F300AA0: bl      0x7F106FDC
    {
            ctx->lr = 0x7F300AA4u;
            ctx->pc = 0x7F106FDCu;
            return;
    }

label_7F300AA4:
    ctx->pc = 0x7F300AA4u;
    ctx->downcount -= 15;
    // 7F300AA4: lwz     r4, 112(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300AA8:
    // 7F300AA8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F300AAC:
    ctx->pc = 0x7F300AACu;
    // 7F300AAC: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300AB0:
    // 7F300AB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300AB4:
    // 7F300AB4: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F300AB8:
    ctx->pc = 0x7F300AB8u;
    // 7F300AB8: lfd     f2, 32080(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300AB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32080);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F300ABC:
    ctx->pc = 0x7F300ABCu;
    // 7F300ABC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300AC0:
    // 7F300AC0: addi    r8, r23, 4
    ctx->gpr[8] = ctx->gpr[23] + (u32)(s32)(4);

label_7F300AC4:
    ctx->pc = 0x7F300AC4u;
    // 7F300AC4: lwz     r9, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F300AC8:
    ctx->pc = 0x7F300AC8u;
    // 7F300AC8: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F300AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F300ACC:
    ctx->pc = 0x7F300ACCu;
    // 7F300ACC: lfsx    f3, r9, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300ACCu)) return;
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F300AD0:
    ctx->pc = 0x7F300AD0u;
    // 7F300AD0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F300AD0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F300AD4:
    ctx->pc = 0x7F300AD4u;
    // 7F300AD4: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300AD4u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F300AD8:
    ctx->pc = 0x7F300AD8u;
    // 7F300AD8: fcmpo   cr0, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300AD8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[1], true);

label_7F300ADC:
    // 7F300ADC: bc    4, 0, 0x7F300EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300EA8;
        }
    }

label_7F300AE0:
    ctx->downcount -= 5;
    // 7F300AE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300AE4:
    ctx->pc = 0x7F300AE4u;
    // 7F300AE4: lfs     f0, 32140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300AE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300AE8:
    ctx->pc = 0x7F300AE8u;
    // 7F300AE8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300AE8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F300AEC:
    ctx->pc = 0x7F300AECu;
    // 7F300AEC: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300AECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F300AF0:
    // 7F300AF0: bc    4, 1, 0x7F300EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300EA8;
        }
    }

label_7F300AF4:
    ctx->pc = 0x7F300AF4u;
    ctx->downcount -= 33;
    // 7F300AF4: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300AF8:
    // 7F300AF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300AFC:
    // 7F300AFC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300B00:
    // 7F300B00: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F300B04:
    // 7F300B04: add   r6, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F300B08:
    // 7F300B08: lis     r11, 32587
    ctx->gpr[11] = ((u32)(s32)(32587) << 16);

label_7F300B0C:
    ctx->pc = 0x7F300B0Cu;
    // 7F300B0C: lwz     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F300B10:
    // 7F300B10: addi    r5, r3, 32104
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32104);

label_7F300B14:
    ctx->pc = 0x7F300B14u;
    // 7F300B14: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300B18:
    // 7F300B18: addi    r3, r11, -1052
    ctx->gpr[3] = ctx->gpr[11] + (u32)(s32)(-1052);

label_7F300B1C:
    ctx->pc = 0x7F300B1Cu;
    // 7F300B1C: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F300B20:
    // 7F300B20: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300B24:
    ctx->pc = 0x7F300B24u;
    // 7F300B24: stwu     r10, -1068(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
        ctx->gpr[7] = ea;
    }

label_7F300B28:
    ctx->pc = 0x7F300B28u;
    // 7F300B28: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F300B2C:
    ctx->pc = 0x7F300B2Cu;
    // 7F300B2C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300B30:
    ctx->pc = 0x7F300B30u;
    // 7F300B30: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300B34:
    ctx->pc = 0x7F300B34u;
    // 7F300B34: lwz     r12, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F300B38:
    ctx->pc = 0x7F300B38u;
    // 7F300B38: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300B3C:
    ctx->pc = 0x7F300B3Cu;
    // 7F300B3C: stw     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300B40:
    ctx->pc = 0x7F300B40u;
    // 7F300B40: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300B44:
    ctx->pc = 0x7F300B44u;
    // 7F300B44: stw     r12, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F300B48:
    ctx->pc = 0x7F300B48u;
    // 7F300B48: stfsx    f1, r9, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300B48u)) return;
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F300B4C:
    ctx->pc = 0x7F300B4Cu;
    // 7F300B4C: stw     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F300B50:
    ctx->pc = 0x7F300B50u;
    // 7F300B50: stw     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F300B54:
    ctx->pc = 0x7F300B54u;
    // 7F300B54: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300B58:
    ctx->pc = 0x7F300B58u;
    // 7F300B58: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300B5C:
    ctx->pc = 0x7F300B5Cu;
    // 7F300B5C: lwz     r5, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300B60:
    ctx->pc = 0x7F300B60u;
    // 7F300B60: lfs     f1, 96(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300B60u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F300B64:
    ctx->pc = 0x7F300B64u;
    // 7F300B64: lfsx    f0, r5, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300B64u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300B68:
    ctx->pc = 0x7F300B68u;
    // 7F300B68: lfs     f2, 108(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300B68u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F300B6C:
    ctx->pc = 0x7F300B6Cu;
    // 7F300B6C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300B6Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F300B70:
    ctx->pc = 0x7F300B70u;
    // 7F300B70: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300B70u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F300B74:
    // 7F300B74: bl      0x80026020
    {
            ctx->lr = 0x7F300B78u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300B78:
    ctx->downcount -= 6;
    // 7F300B78: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300B7C:
    // 7F300B7C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300B80:
    // 7F300B80: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300B84:
    // 7F300B84: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300B88:
    // 7F300B88: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300B8C:
    // 7F300B8C: bl      0x80025FD8
    {
            ctx->lr = 0x7F300B90u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300B90:
    ctx->downcount -= 13;
    // 7F300B90: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300B94:
    ctx->pc = 0x7F300B94u;
    // 7F300B94: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300B98:
    // 7F300B98: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300B9C:
    ctx->pc = 0x7F300B9Cu;
    // 7F300B9C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300BA0:
    // 7F300BA0: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300BA4:
    ctx->pc = 0x7F300BA4u;
    // 7F300BA4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300BA8:
    ctx->pc = 0x7F300BA8u;
    // 7F300BA8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300BAC:
    ctx->pc = 0x7F300BACu;
    // 7F300BAC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300BB0:
    ctx->pc = 0x7F300BB0u;
    // 7F300BB0: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300BB4:
    ctx->pc = 0x7F300BB4u;
    // 7F300BB4: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300BB8:
    ctx->pc = 0x7F300BB8u;
    // 7F300BB8: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300BBC:
    ctx->pc = 0x7F300BBCu;
    // 7F300BBC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300BC0:
    // 7F300BC0: b       0x7F300EA8
    {
            goto label_7F300EA8;
    }

label_7F300BC4:
    ctx->pc = 0x7F300BC4u;
    ctx->downcount -= 8;
    // 7F300BC4: lwz     r5, 112(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300BC8:
    // 7F300BC8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F300BCC:
    ctx->pc = 0x7F300BCCu;
    // 7F300BCC: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300BD0:
    // 7F300BD0: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F300BD4:
    // 7F300BD4: or   r8, r5, r5
    {
        ctx->gpr[8] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F300BD8:
    // 7F300BD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F300BDC:
    // 7F300BDC: add   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F300BE0:
    // 7F300BE0: bl      0x7F1081A8
    {
            ctx->lr = 0x7F300BE4u;
            ctx->pc = 0x7F1081A8u;
            return;
    }

label_7F300BE4:
    ctx->downcount -= 2;
    // 7F300BE4: cmpwi   r3, 0
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

label_7F300BE8:
    // 7F300BE8: bc    12, 2, 0x7F300D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F300D84;
        }
    }

label_7F300BEC:
    ctx->downcount -= 2;
    // 7F300BEC: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F300BF0:
    // 7F300BF0: bl      0x7F108740
    {
            ctx->lr = 0x7F300BF4u;
            ctx->pc = 0x7F108740u;
            return;
    }

label_7F300BF4:
    ctx->pc = 0x7F300BF4u;
    ctx->downcount -= 34;
    // 7F300BF4: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300BF8:
    // 7F300BF8: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F300BFC:
    // 7F300BFC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300C00:
    // 7F300C00: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300C04:
    // 7F300C04: add   r7, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F300C08:
    // 7F300C08: addi    r8, r5, -1068
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F300C0C:
    ctx->pc = 0x7F300C0Cu;
    // 7F300C0C: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300C10:
    // 7F300C10: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300C14:
    ctx->pc = 0x7F300C14u;
    // 7F300C14: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C18:
    ctx->pc = 0x7F300C18u;
    // 7F300C18: stw     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300C1C:
    ctx->pc = 0x7F300C1Cu;
    // 7F300C1C: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C20:
    ctx->pc = 0x7F300C20u;
    // 7F300C20: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300C24:
    ctx->pc = 0x7F300C24u;
    // 7F300C24: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C28:
    ctx->pc = 0x7F300C28u;
    // 7F300C28: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300C2C:
    ctx->pc = 0x7F300C2Cu;
    // 7F300C2C: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C30:
    ctx->pc = 0x7F300C30u;
    // 7F300C30: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300C34:
    ctx->pc = 0x7F300C34u;
    // 7F300C34: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C38:
    ctx->pc = 0x7F300C38u;
    // 7F300C38: stwu     r4, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[3] = ea;
    }

label_7F300C3C:
    ctx->pc = 0x7F300C3Cu;
    // 7F300C3C: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C40:
    ctx->pc = 0x7F300C40u;
    // 7F300C40: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300C44:
    ctx->pc = 0x7F300C44u;
    // 7F300C44: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C48:
    ctx->pc = 0x7F300C48u;
    // 7F300C48: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300C4C:
    ctx->pc = 0x7F300C4Cu;
    // 7F300C4C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C50:
    ctx->pc = 0x7F300C50u;
    // 7F300C50: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C54:
    // 7F300C54: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300C58:
    ctx->pc = 0x7F300C58u;
    // 7F300C58: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300C5C:
    ctx->pc = 0x7F300C5Cu;
    // 7F300C5C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C60:
    ctx->pc = 0x7F300C60u;
    // 7F300C60: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300C64:
    ctx->pc = 0x7F300C64u;
    // 7F300C64: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C68:
    ctx->pc = 0x7F300C68u;
    // 7F300C68: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300C6C:
    ctx->pc = 0x7F300C6Cu;
    // 7F300C6C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300C70:
    ctx->pc = 0x7F300C70u;
    // 7F300C70: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300C74:
    ctx->pc = 0x7F300C74u;
    // 7F300C74: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300C78:
    // 7F300C78: bl      0x80026080
    {
            ctx->lr = 0x7F300C7Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F300C7C:
    ctx->downcount -= 7;
    // 7F300C7C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300C80:
    ctx->pc = 0x7F300C80u;
    // 7F300C80: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300C80u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_7F300C84:
    // 7F300C84: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F300C88:
    // 7F300C88: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300C8C:
    // 7F300C8C: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F300C90:
    // 7F300C90: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300C94:
    // 7F300C94: bl      0x80025FD8
    {
            ctx->lr = 0x7F300C98u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300C98:
    ctx->downcount -= 25;
    // 7F300C98: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300C9C:
    ctx->pc = 0x7F300C9Cu;
    // 7F300C9C: lwz     r6, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300CA0:
    // 7F300CA0: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F300CA4:
    ctx->pc = 0x7F300CA4u;
    // 7F300CA4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300CA8:
    // 7F300CA8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300CAC:
    ctx->pc = 0x7F300CACu;
    // 7F300CAC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300CB0:
    // 7F300CB0: add   r6, r6, r23
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F300CB4:
    // 7F300CB4: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300CB8:
    ctx->pc = 0x7F300CB8u;
    // 7F300CB8: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300CBC:
    ctx->pc = 0x7F300CBCu;
    // 7F300CBC: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300CC0:
    ctx->pc = 0x7F300CC0u;
    // 7F300CC0: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300CC4:
    ctx->pc = 0x7F300CC4u;
    // 7F300CC4: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300CC8:
    ctx->pc = 0x7F300CC8u;
    // 7F300CC8: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300CCC:
    ctx->pc = 0x7F300CCCu;
    // 7F300CCC: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300CD0:
    ctx->pc = 0x7F300CD0u;
    // 7F300CD0: lwz     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300CD4:
    // 7F300CD4: add   r6, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F300CD8:
    ctx->pc = 0x7F300CD8u;
    // 7F300CD8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300CDC:
    ctx->pc = 0x7F300CDCu;
    // 7F300CDC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300CE0:
    ctx->pc = 0x7F300CE0u;
    // 7F300CE0: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300CE4:
    ctx->pc = 0x7F300CE4u;
    // 7F300CE4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300CE8:
    ctx->pc = 0x7F300CE8u;
    // 7F300CE8: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300CEC:
    ctx->pc = 0x7F300CECu;
    // 7F300CEC: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300CF0:
    ctx->pc = 0x7F300CF0u;
    // 7F300CF0: stw     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F300CF4:
    ctx->pc = 0x7F300CF4u;
    // 7F300CF4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300CF8:
    // 7F300CF8: bl      0x800260DC
    {
            ctx->lr = 0x7F300CFCu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F300CFC:
    ctx->downcount -= 4;
    // 7F300CFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300D00:
    ctx->pc = 0x7F300D00u;
    // 7F300D00: lfs     f0, 32072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300D00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300D04:
    ctx->pc = 0x7F300D04u;
    // 7F300D04: fcmpu   cr0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F300D04u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[26], false);

label_7F300D08:
    // 7F300D08: bc    4, 2, 0x7F300D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300D14;
        }
    }

label_7F300D0C:
    ctx->downcount -= 2;
    // 7F300D0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300D10:
    ctx->pc = 0x7F300D10u;
    // 7F300D10: lfs     f26, 32144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300D10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F300D14:
    ctx->pc = 0x7F300D14u;
    ctx->downcount -= 26;
    // 7F300D14: fdivs   f0, f1, f26
    if (!ppc_fp_available_inline(ctx, 0x7F300D14u)) return;
    ppc_fdivs(ctx, 0, 1, 26);

label_7F300D18:
    ctx->pc = 0x7F300D18u;
    // 7F300D18: lfs     f1, 96(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300D18u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F300D1C:
    // 7F300D1C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300D20:
    // 7F300D20: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300D24:
    ctx->pc = 0x7F300D24u;
    // 7F300D24: lfs     f2, 108(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300D24u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F300D28:
    // 7F300D28: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300D2C:
    ctx->pc = 0x7F300D2Cu;
    // 7F300D2C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300D2Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F300D30:
    // 7F300D30: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300D34:
    ctx->pc = 0x7F300D34u;
    // 7F300D34: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300D34u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F300D38:
    // 7F300D38: bl      0x80026020
    {
            ctx->lr = 0x7F300D3Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300D3C:
    ctx->downcount -= 6;
    // 7F300D3C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300D40:
    // 7F300D40: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300D44:
    // 7F300D44: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300D48:
    // 7F300D48: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300D4C:
    // 7F300D4C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300D50:
    // 7F300D50: bl      0x80025FD8
    {
            ctx->lr = 0x7F300D54u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300D54:
    ctx->downcount -= 12;
    // 7F300D54: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300D58:
    ctx->pc = 0x7F300D58u;
    // 7F300D58: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300D5C:
    // 7F300D5C: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300D60:
    ctx->pc = 0x7F300D60u;
    // 7F300D60: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300D64:
    // 7F300D64: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300D68:
    ctx->pc = 0x7F300D68u;
    // 7F300D68: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300D6C:
    ctx->pc = 0x7F300D6Cu;
    // 7F300D6C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300D70:
    ctx->pc = 0x7F300D70u;
    // 7F300D70: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300D74:
    ctx->pc = 0x7F300D74u;
    // 7F300D74: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300D78:
    ctx->pc = 0x7F300D78u;
    // 7F300D78: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300D7C:
    ctx->pc = 0x7F300D7Cu;
    // 7F300D7C: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300D80:
    ctx->pc = 0x7F300D80u;
    // 7F300D80: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300D84:
    ctx->pc = 0x7F300D84u;
    ctx->downcount -= 6;
    // 7F300D84: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300D88:
    // 7F300D88: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F300D8C:
    // 7F300D8C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F300D90:
    // 7F300D90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F300D94:
    // 7F300D94: add   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F300D98:
    // 7F300D98: bl      0x7F106A30
    {
            ctx->lr = 0x7F300D9Cu;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F300D9C:
    ctx->downcount -= 1;
    // 7F300D9C: bl      0x7F106FDC
    {
            ctx->lr = 0x7F300DA0u;
            ctx->pc = 0x7F106FDCu;
            return;
    }

label_7F300DA0:
    ctx->pc = 0x7F300DA0u;
    ctx->downcount -= 15;
    // 7F300DA0: lwz     r4, 112(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300DA4:
    // 7F300DA4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F300DA8:
    ctx->pc = 0x7F300DA8u;
    // 7F300DA8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300DAC:
    // 7F300DAC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300DB0:
    // 7F300DB0: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F300DB4:
    ctx->pc = 0x7F300DB4u;
    // 7F300DB4: lfd     f3, 32080(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300DB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32080);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F300DB8:
    ctx->pc = 0x7F300DB8u;
    // 7F300DB8: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300DBC:
    // 7F300DBC: addi    r8, r23, 4
    ctx->gpr[8] = ctx->gpr[23] + (u32)(s32)(4);

label_7F300DC0:
    ctx->pc = 0x7F300DC0u;
    // 7F300DC0: lwz     r9, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F300DC4:
    ctx->pc = 0x7F300DC4u;
    // 7F300DC4: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F300DC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F300DC8:
    ctx->pc = 0x7F300DC8u;
    // 7F300DC8: lfsx    f0, r9, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300DC8u)) return;
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300DCC:
    ctx->pc = 0x7F300DCCu;
    // 7F300DCC: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F300DCCu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F300DD0:
    ctx->pc = 0x7F300DD0u;
    // 7F300DD0: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300DD0u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F300DD4:
    ctx->pc = 0x7F300DD4u;
    // 7F300DD4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300DD4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F300DD8:
    // 7F300DD8: bc    4, 0, 0x7F300EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300EA8;
        }
    }

label_7F300DDC:
    ctx->pc = 0x7F300DDCu;
    ctx->downcount -= 33;
    // 7F300DDC: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300DE0:
    // 7F300DE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300DE4:
    // 7F300DE4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300DE8:
    // 7F300DE8: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F300DEC:
    // 7F300DEC: add   r6, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F300DF0:
    // 7F300DF0: lis     r11, 32587
    ctx->gpr[11] = ((u32)(s32)(32587) << 16);

label_7F300DF4:
    ctx->pc = 0x7F300DF4u;
    // 7F300DF4: lwz     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F300DF8:
    // 7F300DF8: addi    r5, r3, 32120
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32120);

label_7F300DFC:
    ctx->pc = 0x7F300DFCu;
    // 7F300DFC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300E00:
    // 7F300E00: addi    r3, r11, -1052
    ctx->gpr[3] = ctx->gpr[11] + (u32)(s32)(-1052);

label_7F300E04:
    ctx->pc = 0x7F300E04u;
    // 7F300E04: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F300E08:
    // 7F300E08: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300E0C:
    ctx->pc = 0x7F300E0Cu;
    // 7F300E0C: stwu     r10, -1068(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
        ctx->gpr[7] = ea;
    }

label_7F300E10:
    ctx->pc = 0x7F300E10u;
    // 7F300E10: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F300E14:
    ctx->pc = 0x7F300E14u;
    // 7F300E14: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300E18:
    ctx->pc = 0x7F300E18u;
    // 7F300E18: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300E1C:
    ctx->pc = 0x7F300E1Cu;
    // 7F300E1C: lwz     r12, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F300E20:
    ctx->pc = 0x7F300E20u;
    // 7F300E20: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300E24:
    ctx->pc = 0x7F300E24u;
    // 7F300E24: stw     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300E28:
    ctx->pc = 0x7F300E28u;
    // 7F300E28: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300E2C:
    ctx->pc = 0x7F300E2Cu;
    // 7F300E2C: stw     r12, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F300E30:
    ctx->pc = 0x7F300E30u;
    // 7F300E30: stfsx    f1, r9, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300E30u)) return;
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F300E34:
    ctx->pc = 0x7F300E34u;
    // 7F300E34: stw     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F300E38:
    ctx->pc = 0x7F300E38u;
    // 7F300E38: stw     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F300E3C:
    ctx->pc = 0x7F300E3Cu;
    // 7F300E3C: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300E40:
    ctx->pc = 0x7F300E40u;
    // 7F300E40: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300E44:
    ctx->pc = 0x7F300E44u;
    // 7F300E44: lwz     r5, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F300E48:
    ctx->pc = 0x7F300E48u;
    // 7F300E48: lfs     f1, 96(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300E48u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F300E4C:
    ctx->pc = 0x7F300E4Cu;
    // 7F300E4C: lfsx    f0, r5, r8
    if (!ppc_fp_available_inline(ctx, 0x7F300E4Cu)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300E50:
    ctx->pc = 0x7F300E50u;
    // 7F300E50: lfs     f2, 108(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F300E50u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F300E54:
    ctx->pc = 0x7F300E54u;
    // 7F300E54: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300E54u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F300E58:
    ctx->pc = 0x7F300E58u;
    // 7F300E58: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F300E58u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F300E5C:
    // 7F300E5C: bl      0x80026020
    {
            ctx->lr = 0x7F300E60u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300E60:
    ctx->downcount -= 6;
    // 7F300E60: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300E64:
    // 7F300E64: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300E68:
    // 7F300E68: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300E6C:
    // 7F300E6C: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300E70:
    // 7F300E70: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300E74:
    // 7F300E74: bl      0x80025FD8
    {
            ctx->lr = 0x7F300E78u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F300E78:
    ctx->downcount -= 12;
    // 7F300E78: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300E7C:
    ctx->pc = 0x7F300E7Cu;
    // 7F300E7C: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300E80:
    // 7F300E80: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F300E84:
    ctx->pc = 0x7F300E84u;
    // 7F300E84: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300E88:
    // 7F300E88: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300E8C:
    ctx->pc = 0x7F300E8Cu;
    // 7F300E8C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300E90:
    ctx->pc = 0x7F300E90u;
    // 7F300E90: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300E94:
    ctx->pc = 0x7F300E94u;
    // 7F300E94: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300E98:
    ctx->pc = 0x7F300E98u;
    // 7F300E98: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F300E9C:
    ctx->pc = 0x7F300E9Cu;
    // 7F300E9C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300EA0:
    ctx->pc = 0x7F300EA0u;
    // 7F300EA0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F300EA4:
    ctx->pc = 0x7F300EA4u;
    // 7F300EA4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300EA8:
    ctx->downcount -= 2;
    // 7F300EA8: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F300EAC:
    // 7F300EAC: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F300EB0:
    ctx->downcount -= 2;
    // 7F300EB0: cmpw    r31, r30
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F300EB4:
    // 7F300EB4: bc    12, 0, 0x7F300610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F300610u;
                return;
            }
            goto label_7F300610;
        }
    }

label_7F300EB8:
    ctx->pc = 0x7F300EB8u;
    ctx->downcount -= 43;
    // 7F300EB8: addi    r15, r30, -1
    ctx->gpr[15] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F300EBC:
    ctx->pc = 0x7F300EBCu;
    // 7F300EBC: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300EC0:
    ctx->pc = 0x7F300EC0u;
    // 7F300EC0: rlwinm r16, r15, 4, 0, 27
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[15], 4u) & 0xFFFFFFF0u;
    }

label_7F300EC4:
    ctx->pc = 0x7F300EC4u;
    // 7F300EC4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300EC8:
    ctx->pc = 0x7F300EC8u;
    // 7F300EC8: add   r7, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F300ECC:
    ctx->pc = 0x7F300ECCu;
    // 7F300ECC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300ED0:
    ctx->pc = 0x7F300ED0u;
    // 7F300ED0: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300ED4:
    ctx->pc = 0x7F300ED4u;
    // 7F300ED4: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300ED8:
    ctx->pc = 0x7F300ED8u;
    // 7F300ED8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300EDC:
    ctx->pc = 0x7F300EDCu;
    // 7F300EDC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300EE0:
    ctx->pc = 0x7F300EE0u;
    // 7F300EE0: stw     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300EE4:
    ctx->pc = 0x7F300EE4u;
    // 7F300EE4: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300EE8:
    ctx->pc = 0x7F300EE8u;
    // 7F300EE8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300EEC:
    ctx->pc = 0x7F300EECu;
    // 7F300EEC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300EF0:
    ctx->pc = 0x7F300EF0u;
    // 7F300EF0: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300EF4:
    ctx->pc = 0x7F300EF4u;
    // 7F300EF4: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300EF8:
    ctx->pc = 0x7F300EF8u;
    // 7F300EF8: lwz     r6, -16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300EFC:
    ctx->pc = 0x7F300EFCu;
    // 7F300EFC: lwz     r0, -12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F00:
    ctx->pc = 0x7F300F00u;
    // 7F300F00: stwu     r6, -1068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[4] = ea;
    }

label_7F300F04:
    ctx->pc = 0x7F300F04u;
    // 7F300F04: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F08:
    ctx->pc = 0x7F300F08u;
    // 7F300F08: lwz     r6, -8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300F0C:
    ctx->pc = 0x7F300F0Cu;
    // 7F300F0C: lwz     r0, -4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F10:
    ctx->pc = 0x7F300F10u;
    // 7F300F10: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300F14:
    ctx->pc = 0x7F300F14u;
    // 7F300F14: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F18:
    ctx->pc = 0x7F300F18u;
    // 7F300F18: lwz     r7, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F300F1C:
    ctx->pc = 0x7F300F1Cu;
    // 7F300F1C: lwz     r6, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300F20:
    ctx->pc = 0x7F300F20u;
    // 7F300F20: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F24:
    ctx->pc = 0x7F300F24u;
    // 7F300F24: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300F28:
    ctx->pc = 0x7F300F28u;
    // 7F300F28: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F2C:
    ctx->pc = 0x7F300F2Cu;
    // 7F300F2C: lwz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300F30:
    ctx->pc = 0x7F300F30u;
    // 7F300F30: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F34:
    ctx->pc = 0x7F300F34u;
    // 7F300F34: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300F38:
    ctx->pc = 0x7F300F38u;
    // 7F300F38: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F3C:
    ctx->pc = 0x7F300F3Cu;
    // 7F300F3C: lwz     r7, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F300F40:
    ctx->pc = 0x7F300F40u;
    // 7F300F40: lwz     r6, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300F44:
    ctx->pc = 0x7F300F44u;
    // 7F300F44: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F48:
    ctx->pc = 0x7F300F48u;
    // 7F300F48: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300F4C:
    ctx->pc = 0x7F300F4Cu;
    // 7F300F4C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F50:
    ctx->pc = 0x7F300F50u;
    // 7F300F50: lwz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F300F54:
    ctx->pc = 0x7F300F54u;
    // 7F300F54: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F58:
    ctx->pc = 0x7F300F58u;
    // 7F300F58: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F300F5C:
    ctx->pc = 0x7F300F5Cu;
    // 7F300F5C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F60:
    ctx->pc = 0x7F300F60u;
    // 7F300F60: bl      0x80025FFC
    {
            ctx->lr = 0x7F300F64u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F300F64:
    ctx->pc = 0x7F300F64u;
    ctx->downcount -= 15;
    // 7F300F64: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F68:
    ctx->pc = 0x7F300F68u;
    // 7F300F68: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300F6C:
    ctx->pc = 0x7F300F6Cu;
    // 7F300F6C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300F70:
    ctx->pc = 0x7F300F70u;
    // 7F300F70: add   r5, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F300F74:
    ctx->pc = 0x7F300F74u;
    // 7F300F74: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300F78:
    ctx->pc = 0x7F300F78u;
    // 7F300F78: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300F7C:
    ctx->pc = 0x7F300F7Cu;
    // 7F300F7C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300F80:
    ctx->pc = 0x7F300F80u;
    // 7F300F80: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F84:
    ctx->pc = 0x7F300F84u;
    // 7F300F84: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300F88:
    ctx->pc = 0x7F300F88u;
    // 7F300F88: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F8C:
    ctx->pc = 0x7F300F8Cu;
    // 7F300F8C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F300F90:
    ctx->pc = 0x7F300F90u;
    // 7F300F90: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F300F94:
    ctx->pc = 0x7F300F94u;
    // 7F300F94: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F300F98:
    ctx->pc = 0x7F300F98u;
    // 7F300F98: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F300F9C:
    ctx->pc = 0x7F300F9Cu;
    // 7F300F9C: bl      0x80026080
    {
            ctx->lr = 0x7F300FA0u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F300FA0:
    ctx->pc = 0x7F300FA0u;
    ctx->downcount -= 6;
    // 7F300FA0: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F300FA0u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_7F300FA4:
    ctx->pc = 0x7F300FA4u;
    // 7F300FA4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300FA8:
    ctx->pc = 0x7F300FA8u;
    // 7F300FA8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300FAC:
    ctx->pc = 0x7F300FACu;
    // 7F300FAC: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300FB0:
    ctx->pc = 0x7F300FB0u;
    // 7F300FB0: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F300FB4:
    ctx->pc = 0x7F300FB4u;
    // 7F300FB4: bl      0x800260DC
    {
            ctx->lr = 0x7F300FB8u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F300FB8:
    ctx->pc = 0x7F300FB8u;
    ctx->downcount -= 4;
    // 7F300FB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300FBC:
    ctx->pc = 0x7F300FBCu;
    // 7F300FBC: lfs     f0, 32072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300FBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F300FC0:
    ctx->pc = 0x7F300FC0u;
    // 7F300FC0: fcmpu   cr0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F300FC0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[26], false);

label_7F300FC4:
    ctx->pc = 0x7F300FC4u;
    // 7F300FC4: bc    4, 2, 0x7F300FD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F300FD0;
        }
    }

label_7F300FC8:
    ctx->pc = 0x7F300FC8u;
    ctx->downcount -= 2;
    // 7F300FC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F300FCC:
    ctx->pc = 0x7F300FCCu;
    // 7F300FCC: lfs     f26, 32144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F300FCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F300FD0:
    ctx->pc = 0x7F300FD0u;
    ctx->downcount -= 21;
    // 7F300FD0: fdivs   f1, f1, f26
    if (!ppc_fp_available_inline(ctx, 0x7F300FD0u)) return;
    ppc_fdivs(ctx, 1, 1, 26);

label_7F300FD4:
    ctx->pc = 0x7F300FD4u;
    // 7F300FD4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300FD8:
    ctx->pc = 0x7F300FD8u;
    // 7F300FD8: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F300FDC:
    ctx->pc = 0x7F300FDCu;
    // 7F300FDC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300FE0:
    ctx->pc = 0x7F300FE0u;
    // 7F300FE0: bl      0x80026020
    {
            ctx->lr = 0x7F300FE4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F300FE4:
    ctx->pc = 0x7F300FE4u;
    ctx->downcount -= 6;
    // 7F300FE4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F300FE8:
    ctx->pc = 0x7F300FE8u;
    // 7F300FE8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F300FEC:
    ctx->pc = 0x7F300FECu;
    // 7F300FEC: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F300FF0:
    ctx->pc = 0x7F300FF0u;
    // 7F300FF0: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F300FF4:
    ctx->pc = 0x7F300FF4u;
    // 7F300FF4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F300FF8:
    ctx->pc = 0x7F300FF8u;
    // 7F300FF8: bl      0x80025FFC
    {
            ctx->lr = 0x7F300FFCu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F300FFC:
    ctx->pc = 0x7F300FFCu;
    ctx->downcount -= 20;
    // 7F300FFC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F301000:
    ctx->pc = 0x7F301000u;
    // 7F301000: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F301004:
    ctx->pc = 0x7F301004u;
    // 7F301004: addi    r28, r4, -1052
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F301008:
    ctx->pc = 0x7F301008u;
    // 7F301008: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30100C:
    ctx->pc = 0x7F30100Cu;
    // 7F30100C: addi    r27, r5, -1084
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F301010:
    ctx->pc = 0x7F301010u;
    // 7F301010: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F301014:
    ctx->pc = 0x7F301014u;
    // 7F301014: addi    r15, r15, -1
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(-1);

label_7F301018:
    ctx->pc = 0x7F301018u;
    // 7F301018: lfs     f26, 32072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301018u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F30101C:
    ctx->pc = 0x7F30101Cu;
    // 7F30101C: stw     r28, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F301020:
    ctx->pc = 0x7F301020u;
    // 7F301020: addi    r25, r4, -1068
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F301024:
    ctx->pc = 0x7F301024u;
    // 7F301024: or   r23, r28, r28
    {
        ctx->gpr[23] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F301028:
    ctx->pc = 0x7F301028u;
    // 7F301028: or   r22, r28, r28
    {
        ctx->gpr[22] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30102C:
    ctx->pc = 0x7F30102Cu;
    // 7F30102C: stw     r27, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F301030:
    ctx->pc = 0x7F301030u;
    // 7F301030: or   r21, r28, r28
    {
        ctx->gpr[21] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F301034:
    ctx->pc = 0x7F301034u;
    // 7F301034: or   r20, r27, r27
    {
        ctx->gpr[20] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F301038:
    ctx->pc = 0x7F301038u;
    // 7F301038: or   r19, r28, r28
    {
        ctx->gpr[19] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30103C:
    ctx->pc = 0x7F30103Cu;
    // 7F30103C: or   r18, r28, r28
    {
        ctx->gpr[18] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F301040:
    ctx->pc = 0x7F301040u;
    // 7F301040: or   r17, r27, r27
    {
        ctx->gpr[17] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F301044:
    ctx->pc = 0x7F301044u;
    // 7F301044: rlwinm r16, r15, 4, 0, 27
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[15], 4u) & 0xFFFFFFF0u;
    }

label_7F301048:
    ctx->pc = 0x7F301048u;
    // 7F301048: b       0x7F301184
    {
            goto label_7F301184;
    }

label_7F30104C:
    ctx->pc = 0x7F30104Cu;
    ctx->downcount -= 35;
    // 7F30104C: lwz     r4, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301050:
    // 7F301050: addi    r7, r16, 16
    ctx->gpr[7] = ctx->gpr[16] + (u32)(s32)(16);

label_7F301054:
    ctx->pc = 0x7F301054u;
    // 7F301054: lwz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301058:
    // 7F301058: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30105C:
    ctx->pc = 0x7F30105Cu;
    // 7F30105C: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301060:
    // 7F301060: add   r8, r4, r16
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F301064:
    // 7F301064: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F301068:
    // 7F301068: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30106C:
    ctx->pc = 0x7F30106Cu;
    // 7F30106C: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301070:
    ctx->pc = 0x7F301070u;
    // 7F301070: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301074:
    ctx->pc = 0x7F301074u;
    // 7F301074: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301078:
    ctx->pc = 0x7F301078u;
    // 7F301078: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30107C:
    ctx->pc = 0x7F30107Cu;
    // 7F30107C: stw     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301080:
    ctx->pc = 0x7F301080u;
    // 7F301080: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301084:
    ctx->pc = 0x7F301084u;
    // 7F301084: lwz     r8, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F301088:
    ctx->pc = 0x7F301088u;
    // 7F301088: lwz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30108C:
    ctx->pc = 0x7F30108Cu;
    // 7F30108C: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301090:
    // 7F301090: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F301094:
    ctx->pc = 0x7F301094u;
    // 7F301094: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301098:
    ctx->pc = 0x7F301098u;
    // 7F301098: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30109C:
    ctx->pc = 0x7F30109Cu;
    // 7F30109C: lwz     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3010A0:
    ctx->pc = 0x7F3010A0u;
    // 7F3010A0: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3010A4:
    ctx->pc = 0x7F3010A4u;
    // 7F3010A4: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3010A8:
    ctx->pc = 0x7F3010A8u;
    // 7F3010A8: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3010AC:
    ctx->pc = 0x7F3010ACu;
    // 7F3010AC: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3010B0:
    // 7F3010B0: add   r7, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3010B4:
    ctx->pc = 0x7F3010B4u;
    // 7F3010B4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3010B8:
    ctx->pc = 0x7F3010B8u;
    // 7F3010B8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3010BC:
    ctx->pc = 0x7F3010BCu;
    // 7F3010BC: stw     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3010C0:
    ctx->pc = 0x7F3010C0u;
    // 7F3010C0: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3010C4:
    ctx->pc = 0x7F3010C4u;
    // 7F3010C4: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3010C8:
    ctx->pc = 0x7F3010C8u;
    // 7F3010C8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3010CC:
    ctx->pc = 0x7F3010CCu;
    // 7F3010CC: stw     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3010D0:
    ctx->pc = 0x7F3010D0u;
    // 7F3010D0: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3010D4:
    // 7F3010D4: bl      0x80025FD8
    {
            ctx->lr = 0x7F3010D8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3010D8:
    ctx->pc = 0x7F3010D8u;
    ctx->downcount -= 23;
    // 7F3010D8: lwz     r9, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3010DC:
    // 7F3010DC: addi    r0, r16, -16
    ctx->gpr[0] = ctx->gpr[16] + (u32)(s32)(-16);

label_7F3010E0:
    ctx->pc = 0x7F3010E0u;
    // 7F3010E0: lwz     r8, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3010E4:
    // 7F3010E4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3010E8:
    ctx->pc = 0x7F3010E8u;
    // 7F3010E8: lwz     r7, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3010EC:
    // 7F3010EC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3010F0:
    ctx->pc = 0x7F3010F0u;
    // 7F3010F0: lwz     r6, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3010F4:
    // 7F3010F4: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3010F8:
    ctx->pc = 0x7F3010F8u;
    // 7F3010F8: stw     r9, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3010FC:
    ctx->pc = 0x7F3010FCu;
    // 7F3010FC: stw     r8, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F301100:
    ctx->pc = 0x7F301100u;
    // 7F301100: stw     r7, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F301104:
    ctx->pc = 0x7F301104u;
    // 7F301104: stw     r6, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301108:
    ctx->pc = 0x7F301108u;
    // 7F301108: lwz     r6, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30110C:
    // 7F30110C: add   r7, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F301110:
    ctx->pc = 0x7F301110u;
    // 7F301110: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301114:
    ctx->pc = 0x7F301114u;
    // 7F301114: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301118:
    ctx->pc = 0x7F301118u;
    // 7F301118: stw     r6, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30111C:
    ctx->pc = 0x7F30111Cu;
    // 7F30111C: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301120:
    ctx->pc = 0x7F301120u;
    // 7F301120: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301124:
    ctx->pc = 0x7F301124u;
    // 7F301124: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301128:
    ctx->pc = 0x7F301128u;
    // 7F301128: stw     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30112C:
    ctx->pc = 0x7F30112Cu;
    // 7F30112C: stw     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301130:
    // 7F301130: bl      0x80025FFC
    {
            ctx->lr = 0x7F301134u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F301134:
    ctx->downcount -= 2;
    // 7F301134: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F301138:
    // 7F301138: bl      0x80026080
    {
            ctx->lr = 0x7F30113Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F30113C:
    ctx->pc = 0x7F30113Cu;
    ctx->downcount -= 4;
    // 7F30113C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30113Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_7F301140:
    // 7F301140: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F301144:
    // 7F301144: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F301148:
    // 7F301148: bl      0x800260DC
    {
            ctx->lr = 0x7F30114Cu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F30114C:
    ctx->pc = 0x7F30114Cu;
    ctx->downcount -= 2;
    // 7F30114C: fcmpu   cr0, f26, f27
    if (!ppc_fp_available_inline(ctx, 0x7F30114Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[26], ctx->fpr[27], false);

label_7F301150:
    // 7F301150: bc    4, 2, 0x7F30115C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30115C;
        }
    }

label_7F301154:
    ctx->downcount -= 2;
    // 7F301154: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301158:
    ctx->pc = 0x7F301158u;
    // 7F301158: lfs     f27, 32144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301158u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F30115C:
    ctx->pc = 0x7F30115Cu;
    ctx->downcount -= 20;
    // 7F30115C: fdivs   f1, f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F30115Cu)) return;
    ppc_fdivs(ctx, 1, 1, 27);

label_7F301160:
    // 7F301160: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F301164:
    // 7F301164: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F301168:
    // 7F301168: bl      0x80026020
    {
            ctx->lr = 0x7F30116Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F30116C:
    ctx->pc = 0x7F30116Cu;
    ctx->downcount -= 4;
    // 7F30116C: lwz     r4, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301170:
    // 7F301170: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F301174:
    ctx->pc = 0x7F301174u;
    // 7F301174: lwz     r5, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301178:
    // 7F301178: bl      0x80025FFC
    {
            ctx->lr = 0x7F30117Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F30117C:
    ctx->downcount -= 2;
    // 7F30117C: addi    r15, r15, -1
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(-1);

label_7F301180:
    // 7F301180: addi    r16, r16, -16
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(-16);

label_7F301184:
    ctx->downcount -= 2;
    // 7F301184: cmpwi   r15, 0
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F301188:
    // 7F301188: bc    12, 1, 0x7F30104C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30104Cu;
                return;
            }
            goto label_7F30104C;
        }
    }

label_7F30118C:
    ctx->pc = 0x7F30118Cu;
    ctx->downcount -= 29;
    // 7F30118C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F301190:
    ctx->pc = 0x7F301190u;
    // 7F301190: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F301194:
    ctx->pc = 0x7F301194u;
    // 7F301194: addi    r19, r3, -1052
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F301198:
    ctx->pc = 0x7F301198u;
    // 7F301198: addi    r20, r30, -1
    ctx->gpr[20] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F30119C:
    ctx->pc = 0x7F30119Cu;
    // 7F30119C: addi    r18, r4, -1084
    ctx->gpr[18] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F3011A0:
    ctx->pc = 0x7F3011A0u;
    // 7F3011A0: lwz     r5, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3011A4:
    ctx->pc = 0x7F3011A4u;
    // 7F3011A4: lwz     r4, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3011A8:
    ctx->pc = 0x7F3011A8u;
    // 7F3011A8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3011AC:
    ctx->pc = 0x7F3011ACu;
    // 7F3011AC: lwz     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3011B0:
    ctx->pc = 0x7F3011B0u;
    // 7F3011B0: addi    r17, r3, -1068
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3011B4:
    ctx->pc = 0x7F3011B4u;
    // 7F3011B4: or   r16, r18, r18
    {
        ctx->gpr[16] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3011B8:
    ctx->pc = 0x7F3011B8u;
    // 7F3011B8: rlwinm r21, r20, 4, 0, 27
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[20], 4u) & 0xFFFFFFF0u;
    }

label_7F3011BC:
    ctx->pc = 0x7F3011BCu;
    // 7F3011BC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3011C0:
    ctx->pc = 0x7F3011C0u;
    // 7F3011C0: or   r15, r17, r17
    {
        ctx->gpr[15] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3011C4:
    ctx->pc = 0x7F3011C4u;
    // 7F3011C4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3011C8:
    ctx->pc = 0x7F3011C8u;
    // 7F3011C8: lwz     r3, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3011CC:
    ctx->pc = 0x7F3011CCu;
    // 7F3011CC: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3011D0:
    ctx->pc = 0x7F3011D0u;
    // 7F3011D0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3011D4:
    ctx->pc = 0x7F3011D4u;
    // 7F3011D4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3011D8:
    ctx->pc = 0x7F3011D8u;
    // 7F3011D8: lwz     r4, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3011DC:
    ctx->pc = 0x7F3011DCu;
    // 7F3011DC: lwz     r3, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3011E0:
    ctx->pc = 0x7F3011E0u;
    // 7F3011E0: lwz     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3011E4:
    ctx->pc = 0x7F3011E4u;
    // 7F3011E4: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3011E8:
    ctx->pc = 0x7F3011E8u;
    // 7F3011E8: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3011EC:
    ctx->pc = 0x7F3011ECu;
    // 7F3011EC: lwz     r3, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3011F0:
    ctx->pc = 0x7F3011F0u;
    // 7F3011F0: lwz     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3011F4:
    ctx->pc = 0x7F3011F4u;
    // 7F3011F4: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3011F8:
    ctx->pc = 0x7F3011F8u;
    // 7F3011F8: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3011FC:
    ctx->pc = 0x7F3011FCu;
    // 7F3011FC: b       0x7F3012D8
    {
            goto label_7F3012D8;
    }

label_7F301200:
    ctx->pc = 0x7F301200u;
    ctx->downcount -= 24;
    // 7F301200: lwz     r0, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301204:
    // 7F301204: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F301208:
    // 7F301208: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F30120C:
    // 7F30120C: add   r6, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F301210:
    ctx->pc = 0x7F301210u;
    // 7F301210: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301214:
    ctx->pc = 0x7F301214u;
    // 7F301214: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301218:
    ctx->pc = 0x7F301218u;
    // 7F301218: stw     r5, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30121C:
    ctx->pc = 0x7F30121Cu;
    // 7F30121C: stw     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301220:
    ctx->pc = 0x7F301220u;
    // 7F301220: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301224:
    ctx->pc = 0x7F301224u;
    // 7F301224: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301228:
    ctx->pc = 0x7F301228u;
    // 7F301228: stw     r5, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30122C:
    ctx->pc = 0x7F30122Cu;
    // 7F30122C: stw     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301230:
    ctx->pc = 0x7F301230u;
    // 7F301230: lwz     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301234:
    // 7F301234: add   r6, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F301238:
    ctx->pc = 0x7F301238u;
    // 7F301238: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30123C:
    ctx->pc = 0x7F30123Cu;
    // 7F30123C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301240:
    ctx->pc = 0x7F301240u;
    // 7F301240: stw     r5, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F301244:
    ctx->pc = 0x7F301244u;
    // 7F301244: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301248:
    ctx->pc = 0x7F301248u;
    // 7F301248: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30124C:
    ctx->pc = 0x7F30124Cu;
    // 7F30124C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301250:
    ctx->pc = 0x7F301250u;
    // 7F301250: stw     r5, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F301254:
    ctx->pc = 0x7F301254u;
    // 7F301254: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301258:
    ctx->pc = 0x7F301258u;
    // 7F301258: lfs     f1, 100(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F301258u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30125C:
    // 7F30125C: bl      0x80026020
    {
            ctx->lr = 0x7F301260u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F301260:
    ctx->pc = 0x7F301260u;
    ctx->downcount -= 14;
    // 7F301260: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301264:
    // 7F301264: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F301268:
    // 7F301268: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F30126C:
    // 7F30126C: or   r5, r17, r17
    {
        ctx->gpr[5] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F301270:
    // 7F301270: add   r7, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F301274:
    ctx->pc = 0x7F301274u;
    // 7F301274: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301278:
    ctx->pc = 0x7F301278u;
    // 7F301278: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30127C:
    ctx->pc = 0x7F30127Cu;
    // 7F30127C: stw     r6, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301280:
    ctx->pc = 0x7F301280u;
    // 7F301280: stw     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301284:
    ctx->pc = 0x7F301284u;
    // 7F301284: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301288:
    ctx->pc = 0x7F301288u;
    // 7F301288: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30128C:
    ctx->pc = 0x7F30128Cu;
    // 7F30128C: stw     r6, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301290:
    ctx->pc = 0x7F301290u;
    // 7F301290: stw     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301294:
    // 7F301294: bl      0x80025FD8
    {
            ctx->lr = 0x7F301298u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F301298:
    ctx->downcount -= 4;
    // 7F301298: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F30129C:
    // 7F30129C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F3012A0:
    // 7F3012A0: or   r5, r19, r19
    {
        ctx->gpr[5] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3012A4:
    // 7F3012A4: bl      0x80025FD8
    {
            ctx->lr = 0x7F3012A8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3012A8:
    ctx->pc = 0x7F3012A8u;
    ctx->downcount -= 12;
    // 7F3012A8: lwz     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3012AC:
    // 7F3012AC: addi    r20, r20, -1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(-1);

label_7F3012B0:
    ctx->pc = 0x7F3012B0u;
    // 7F3012B0: lwz     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3012B4:
    // 7F3012B4: add   r4, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3012B8:
    ctx->pc = 0x7F3012B8u;
    // 7F3012B8: lwz     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3012BC:
    // 7F3012BC: addi    r21, r21, -16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(-16);

label_7F3012C0:
    ctx->pc = 0x7F3012C0u;
    // 7F3012C0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3012C4:
    ctx->pc = 0x7F3012C4u;
    // 7F3012C4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3012C8:
    ctx->pc = 0x7F3012C8u;
    // 7F3012C8: lwz     r3, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3012CC:
    ctx->pc = 0x7F3012CCu;
    // 7F3012CC: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3012D0:
    ctx->pc = 0x7F3012D0u;
    // 7F3012D0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3012D4:
    ctx->pc = 0x7F3012D4u;
    // 7F3012D4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3012D8:
    ctx->downcount -= 2;
    // 7F3012D8: cmpwi   r20, 0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3012DC:
    // 7F3012DC: bc    12, 1, 0x7F301200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301200u;
                return;
            }
            goto label_7F301200;
        }
    }

label_7F3012E0:
    ctx->pc = 0x7F3012E0u;
    ctx->downcount -= 21;
    // 7F3012E0: lwz     r4, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3012E4:
    ctx->pc = 0x7F3012E4u;
    // 7F3012E4: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3012E8:
    ctx->pc = 0x7F3012E8u;
    // 7F3012E8: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3012EC:
    ctx->pc = 0x7F3012ECu;
    // 7F3012EC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3012F0:
    ctx->pc = 0x7F3012F0u;
    // 7F3012F0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3012F4:
    ctx->pc = 0x7F3012F4u;
    // 7F3012F4: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3012F8:
    ctx->pc = 0x7F3012F8u;
    // 7F3012F8: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3012FC:
    ctx->pc = 0x7F3012FCu;
    // 7F3012FC: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301300:
    ctx->pc = 0x7F301300u;
    // 7F301300: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301304:
    ctx->pc = 0x7F301304u;
    // 7F301304: lwz     r4, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301308:
    ctx->pc = 0x7F301308u;
    // 7F301308: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30130C:
    ctx->pc = 0x7F30130Cu;
    // 7F30130C: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301310:
    ctx->pc = 0x7F301310u;
    // 7F301310: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301314:
    ctx->pc = 0x7F301314u;
    // 7F301314: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301318:
    ctx->pc = 0x7F301318u;
    // 7F301318: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30131C:
    ctx->pc = 0x7F30131Cu;
    // 7F30131C: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301320:
    ctx->pc = 0x7F301320u;
    // 7F301320: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301324:
    ctx->pc = 0x7F301324u;
    // 7F301324: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301328:
    ctx->pc = 0x7F301328u;
    // 7F301328: lwz     r0, 128(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30132C:
    ctx->pc = 0x7F30132Cu;
    // 7F30132C: cmpwi   r0, 0
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

label_7F301330:
    ctx->pc = 0x7F301330u;
    // 7F301330: bc    12, 2, 0x7F301424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301424;
        }
    }

label_7F301334:
    ctx->pc = 0x7F301334u;
    ctx->downcount -= 30;
    // 7F301334: lwz     r6, 72(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301338:
    ctx->pc = 0x7F301338u;
    // 7F301338: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30133C:
    ctx->pc = 0x7F30133Cu;
    // 7F30133C: addi    r5, r3, 32136
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32136);

label_7F301340:
    ctx->pc = 0x7F301340u;
    // 7F301340: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F301344:
    ctx->pc = 0x7F301344u;
    // 7F301344: lwz     r6, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301348:
    ctx->pc = 0x7F301348u;
    // 7F301348: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30134C:
    ctx->pc = 0x7F30134Cu;
    // 7F30134C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F30134Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301350:
    ctx->pc = 0x7F301350u;
    // 7F301350: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F301354:
    ctx->pc = 0x7F301354u;
    // 7F301354: lwz     r6, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301358:
    ctx->pc = 0x7F301358u;
    // 7F301358: addi    r9, r4, -1052
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F30135C:
    ctx->pc = 0x7F30135Cu;
    // 7F30135C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30135Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301360:
    ctx->pc = 0x7F301360u;
    // 7F301360: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F301364:
    ctx->pc = 0x7F301364u;
    // 7F301364: lfs     f2, 104(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F301364u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F301368:
    ctx->pc = 0x7F301368u;
    // 7F301368: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F30136C:
    ctx->pc = 0x7F30136Cu;
    // 7F30136C: lfs     f1, 108(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F30136Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F301370:
    ctx->pc = 0x7F301370u;
    // 7F301370: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F301374:
    ctx->pc = 0x7F301374u;
    // 7F301374: lfs     f0, 112(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F301374u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301378:
    ctx->pc = 0x7F301378u;
    // 7F301378: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F30137C:
    ctx->pc = 0x7F30137Cu;
    // 7F30137C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301380:
    ctx->pc = 0x7F301380u;
    // 7F301380: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301380u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F301384:
    ctx->pc = 0x7F301384u;
    // 7F301384: lwz     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F301388:
    ctx->pc = 0x7F301388u;
    // 7F301388: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30138C:
    ctx->pc = 0x7F30138Cu;
    // 7F30138C: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F301390:
    ctx->pc = 0x7F301390u;
    // 7F301390: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301394:
    ctx->pc = 0x7F301394u;
    // 7F301394: stw     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F301398:
    ctx->pc = 0x7F301398u;
    // 7F301398: stw     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F30139C:
    ctx->pc = 0x7F30139Cu;
    // 7F30139C: stw     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3013A0:
    ctx->pc = 0x7F3013A0u;
    // 7F3013A0: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3013A4:
    ctx->pc = 0x7F3013A4u;
    // 7F3013A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3013A8:
    loop_7F3013A8(ctx);
    if (ctx->pc == 0x7F3013BCu) goto label_7F3013BC;
    return;
label_7F3013AC:
    ctx->pc = 0x7F3013ACu;
    // 7F3013AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3013B0:
    ctx->pc = 0x7F3013B0u;
    // 7F3013B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3013B4:
    ctx->pc = 0x7F3013B4u;
    // 7F3013B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3013B8:
    // 7F3013B8: bc    16, 0, 0x7F3013A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3013A8u;
                return;
            }
            goto label_7F3013A8;
        }
    }

label_7F3013BC:
    ctx->pc = 0x7F3013BCu;
    ctx->downcount -= 6;
    // 7F3013BC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3013C0:
    ctx->pc = 0x7F3013C0u;
    // 7F3013C0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3013C4:
    ctx->pc = 0x7F3013C4u;
    // 7F3013C4: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3013C8:
    ctx->pc = 0x7F3013C8u;
    // 7F3013C8: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3013CC:
    ctx->pc = 0x7F3013CCu;
    // 7F3013CC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3013D0:
    ctx->pc = 0x7F3013D0u;
    // 7F3013D0: bl      0x7F114508
    {
            ctx->lr = 0x7F3013D4u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3013D4:
    ctx->pc = 0x7F3013D4u;
    ctx->downcount -= 20;
    // 7F3013D4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3013D8:
    ctx->pc = 0x7F3013D8u;
    // 7F3013D8: lwz     r4, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3013DC:
    ctx->pc = 0x7F3013DCu;
    // 7F3013DC: addi    r5, r3, -1052
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3013E0:
    ctx->pc = 0x7F3013E0u;
    // 7F3013E0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3013E4:
    ctx->pc = 0x7F3013E4u;
    // 7F3013E4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3013E8:
    ctx->pc = 0x7F3013E8u;
    // 7F3013E8: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3013EC:
    ctx->pc = 0x7F3013ECu;
    // 7F3013EC: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3013F0:
    ctx->pc = 0x7F3013F0u;
    // 7F3013F0: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3013F4:
    ctx->pc = 0x7F3013F4u;
    // 7F3013F4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3013F8:
    ctx->pc = 0x7F3013F8u;
    // 7F3013F8: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3013FC:
    ctx->pc = 0x7F3013FCu;
    // 7F3013FC: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301400:
    ctx->pc = 0x7F301400u;
    // 7F301400: lwz     r4, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301404:
    ctx->pc = 0x7F301404u;
    // 7F301404: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301408:
    ctx->pc = 0x7F301408u;
    // 7F301408: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30140C:
    ctx->pc = 0x7F30140Cu;
    // 7F30140C: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301410:
    ctx->pc = 0x7F301410u;
    // 7F301410: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301414:
    ctx->pc = 0x7F301414u;
    // 7F301414: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301418:
    ctx->pc = 0x7F301418u;
    // 7F301418: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30141C:
    ctx->pc = 0x7F30141Cu;
    // 7F30141C: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301420:
    ctx->pc = 0x7F301420u;
    // 7F301420: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301424:
    ctx->pc = 0x7F301424u;
    ctx->downcount -= 47;
    // 7F301424: lwz     r7, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F301428:
    ctx->pc = 0x7F301428u;
    // 7F301428: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F30142C:
    ctx->pc = 0x7F30142Cu;
    // 7F30142C: lwz     r0, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301430:
    ctx->pc = 0x7F301430u;
    // 7F301430: addi    r8, r6, 32072
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(32072);

label_7F301434:
    ctx->pc = 0x7F301434u;
    // 7F301434: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F301438:
    ctx->pc = 0x7F301438u;
    // 7F301438: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F30143C:
    ctx->pc = 0x7F30143Cu;
    // 7F30143C: stw     r7, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F301440:
    ctx->pc = 0x7F301440u;
    // 7F301440: addi    r27, r6, -1068
    ctx->gpr[27] = ctx->gpr[6] + (u32)(s32)(-1068);

label_7F301444:
    ctx->pc = 0x7F301444u;
    // 7F301444: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F301448:
    ctx->pc = 0x7F301448u;
    // 7F301448: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F30144C:
    ctx->pc = 0x7F30144Cu;
    // 7F30144C: stw     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301450:
    ctx->pc = 0x7F301450u;
    // 7F301450: addi    r28, r7, -1052
    ctx->gpr[28] = ctx->gpr[7] + (u32)(s32)(-1052);

label_7F301454:
    ctx->pc = 0x7F301454u;
    // 7F301454: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F301458:
    ctx->pc = 0x7F301458u;
    // 7F301458: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30145C:
    ctx->pc = 0x7F30145Cu;
    // 7F30145C: lwz     r9, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F301460:
    ctx->pc = 0x7F301460u;
    // 7F301460: addi    r25, r7, -1084
    ctx->gpr[25] = ctx->gpr[7] + (u32)(s32)(-1084);

label_7F301464:
    ctx->pc = 0x7F301464u;
    // 7F301464: lwz     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301468:
    ctx->pc = 0x7F301468u;
    // 7F301468: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F30146C:
    ctx->pc = 0x7F30146Cu;
    // 7F30146C: lfs     f29, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F30146Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F301470:
    ctx->pc = 0x7F301470u;
    // 7F301470: addi    r23, r6, -1148
    ctx->gpr[23] = ctx->gpr[6] + (u32)(s32)(-1148);

label_7F301474:
    ctx->pc = 0x7F301474u;
    // 7F301474: stw     r9, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F301478:
    ctx->pc = 0x7F301478u;
    // 7F301478: or   r22, r28, r28
    {
        ctx->gpr[22] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30147C:
    ctx->pc = 0x7F30147Cu;
    // 7F30147C: lfs     f30, 32148(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F30147Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F301480:
    ctx->pc = 0x7F301480u;
    // 7F301480: or   r21, r25, r25
    {
        ctx->gpr[21] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F301484:
    ctx->pc = 0x7F301484u;
    // 7F301484: stw     r0, 108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301488:
    ctx->pc = 0x7F301488u;
    // 7F301488: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F30148C:
    ctx->pc = 0x7F30148Cu;
    // 7F30148C: lfs     f31, 32136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30148Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F301490:
    ctx->pc = 0x7F301490u;
    // 7F301490: or   r20, r28, r28
    {
        ctx->gpr[20] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F301494:
    ctx->pc = 0x7F301494u;
    // 7F301494: lfs     f28, 32152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301494u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F301498:
    ctx->pc = 0x7F301498u;
    // 7F301498: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F30149C:
    ctx->pc = 0x7F30149Cu;
    // 7F30149C: stw     r25, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014A0:
    ctx->pc = 0x7F3014A0u;
    // 7F3014A0: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F3014A4:
    ctx->pc = 0x7F3014A4u;
    // 7F3014A4: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F3014A8:
    ctx->pc = 0x7F3014A8u;
    // 7F3014A8: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3014AC:
    ctx->pc = 0x7F3014ACu;
    // 7F3014AC: stw     r25, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014B0:
    ctx->pc = 0x7F3014B0u;
    // 7F3014B0: stw     r28, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3014B4:
    ctx->pc = 0x7F3014B4u;
    // 7F3014B4: stw     r25, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014B8:
    ctx->pc = 0x7F3014B8u;
    // 7F3014B8: stw     r25, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014BC:
    ctx->pc = 0x7F3014BCu;
    // 7F3014BC: stw     r25, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014C0:
    ctx->pc = 0x7F3014C0u;
    // 7F3014C0: stw     r25, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3014C4:
    ctx->pc = 0x7F3014C4u;
    // 7F3014C4: stw     r28, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3014C8:
    ctx->pc = 0x7F3014C8u;
    // 7F3014C8: stw     r27, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3014CC:
    ctx->pc = 0x7F3014CCu;
    // 7F3014CC: stw     r27, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3014D0:
    ctx->pc = 0x7F3014D0u;
    // 7F3014D0: stw     r27, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3014D4:
    ctx->pc = 0x7F3014D4u;
    // 7F3014D4: stw     r27, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3014D8:
    ctx->pc = 0x7F3014D8u;
    // 7F3014D8: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3014DC:
    ctx->pc = 0x7F3014DCu;
    // 7F3014DC: b       0x7F301980
    {
            goto label_7F301980;
    }

label_7F3014E0:
    ctx->pc = 0x7F3014E0u;
    ctx->downcount -= 42;
    // 7F3014E0: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3014E4:
    // 7F3014E4: addi    r3, r18, 16
    ctx->gpr[3] = ctx->gpr[18] + (u32)(s32)(16);

label_7F3014E8:
    // 7F3014E8: addi    r5, r23, -4
    ctx->gpr[5] = ctx->gpr[23] + (u32)(s32)(-4);

label_7F3014EC:
    // 7F3014EC: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F3014F0:
    // 7F3014F0: add   r6, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3014F4:
    // 7F3014F4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3014F8:
    ctx->pc = 0x7F3014F8u;
    // 7F3014F8: lfs     f0, 104(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3014F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3014FC:
    ctx->pc = 0x7F3014FCu;
    // 7F3014FC: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3014FCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301500:
    ctx->pc = 0x7F301500u;
    // 7F301500: lfs     f0, 108(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F301500u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301504:
    ctx->pc = 0x7F301504u;
    // 7F301504: stfs     f0, 68(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F301504u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301508:
    ctx->pc = 0x7F301508u;
    // 7F301508: lfs     f0, 112(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F301508u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30150C:
    ctx->pc = 0x7F30150Cu;
    // 7F30150C: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30150Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301510:
    ctx->pc = 0x7F301510u;
    // 7F301510: stfs     f29, 76(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F301510u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F301514:
    ctx->pc = 0x7F301514u;
    // 7F301514: lwz     r6, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301518:
    // 7F301518: add   r8, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F30151C:
    // 7F30151C: add   r7, r6, r18
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F301520:
    ctx->pc = 0x7F301520u;
    // 7F301520: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301524:
    ctx->pc = 0x7F301524u;
    // 7F301524: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301528:
    ctx->pc = 0x7F301528u;
    // 7F301528: stw     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30152C:
    ctx->pc = 0x7F30152Cu;
    // 7F30152C: stw     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301530:
    ctx->pc = 0x7F301530u;
    // 7F301530: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301534:
    ctx->pc = 0x7F301534u;
    // 7F301534: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301538:
    ctx->pc = 0x7F301538u;
    // 7F301538: stw     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30153C:
    ctx->pc = 0x7F30153Cu;
    // 7F30153C: stw     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301540:
    ctx->pc = 0x7F301540u;
    // 7F301540: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301544:
    ctx->pc = 0x7F301544u;
    // 7F301544: lwz     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301548:
    ctx->pc = 0x7F301548u;
    // 7F301548: stw     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30154C:
    ctx->pc = 0x7F30154Cu;
    // 7F30154C: stw     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301550:
    ctx->pc = 0x7F301550u;
    // 7F301550: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301554:
    ctx->pc = 0x7F301554u;
    // 7F301554: lwz     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301558:
    ctx->pc = 0x7F301558u;
    // 7F301558: stw     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30155C:
    ctx->pc = 0x7F30155Cu;
    // 7F30155C: stw     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301560:
    ctx->pc = 0x7F301560u;
    // 7F301560: lwz     r6, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301564:
    ctx->pc = 0x7F301564u;
    // 7F301564: lwz     r3, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301568:
    ctx->pc = 0x7F301568u;
    // 7F301568: stw     r6, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30156C:
    ctx->pc = 0x7F30156Cu;
    // 7F30156C: stw     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301570:
    ctx->pc = 0x7F301570u;
    // 7F301570: lwz     r6, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301574:
    ctx->pc = 0x7F301574u;
    // 7F301574: lwz     r3, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301578:
    ctx->pc = 0x7F301578u;
    // 7F301578: stw     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30157C:
    ctx->pc = 0x7F30157Cu;
    // 7F30157C: stw     r3, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301580:
    ctx->pc = 0x7F301580u;
    // 7F301580: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F301584:
    loop_7F301584(ctx);
    if (ctx->pc == 0x7F301598u) goto label_7F301598;
    return;
label_7F301588:
    ctx->pc = 0x7F301588u;
    // 7F301588: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30158C:
    ctx->pc = 0x7F30158Cu;
    // 7F30158C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301590:
    ctx->pc = 0x7F301590u;
    // 7F301590: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F301594:
    // 7F301594: bc    16, 0, 0x7F301584
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301584u;
                return;
            }
            goto label_7F301584;
        }
    }

label_7F301598:
    ctx->downcount -= 4;
    // 7F301598: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30159C:
    // 7F30159C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3015A0:
    // 7F3015A0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3015A4:
    // 7F3015A4: bl      0x80025FFC
    {
            ctx->lr = 0x7F3015A8u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F3015A8:
    ctx->downcount -= 4;
    // 7F3015A8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3015AC:
    // 7F3015AC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3015B0:
    // 7F3015B0: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3015B4:
    // 7F3015B4: bl      0x7F114508
    {
            ctx->lr = 0x7F3015B8u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3015B8:
    ctx->downcount -= 2;
    // 7F3015B8: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3015BC:
    // 7F3015BC: bl      0x80026080
    {
            ctx->lr = 0x7F3015C0u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3015C0:
    ctx->pc = 0x7F3015C0u;
    ctx->downcount -= 3;
    // 7F3015C0: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3015C0u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_7F3015C4:
    // 7F3015C4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3015C8:
    // 7F3015C8: bl      0x80026080
    {
            ctx->lr = 0x7F3015CCu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3015CC:
    ctx->pc = 0x7F3015CCu;
    ctx->downcount -= 5;
    // 7F3015CC: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3015CCu)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F3015D0:
    ctx->pc = 0x7F3015D0u;
    // 7F3015D0: lwz     r4, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3015D4:
    // 7F3015D4: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3015D8:
    ctx->pc = 0x7F3015D8u;
    // 7F3015D8: fmuls   f27, f26, f24
    if (!ppc_fp_available_inline(ctx, 0x7F3015D8u)) return;
    ppc_fmuls(ctx, 27, 26, 24);

label_7F3015DC:
    // 7F3015DC: bl      0x800260DC
    {
            ctx->lr = 0x7F3015E0u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3015E0:
    ctx->pc = 0x7F3015E0u;
    ctx->downcount -= 13;
    // 7F3015E0: lwz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3015E4:
    ctx->pc = 0x7F3015E4u;
    // 7F3015E4: fmr    f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3015E4u)) return;
    ctx->fpr[25] = ctx->fpr[1];

label_7F3015E8:
    ctx->pc = 0x7F3015E8u;
    // 7F3015E8: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3015EC:
    ctx->pc = 0x7F3015ECu;
    // 7F3015EC: lwz     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3015F0:
    ctx->pc = 0x7F3015F0u;
    // 7F3015F0: stw     r6, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3015F4:
    ctx->pc = 0x7F3015F4u;
    // 7F3015F4: lwz     r4, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3015F8:
    ctx->pc = 0x7F3015F8u;
    // 7F3015F8: stw     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3015FC:
    ctx->pc = 0x7F3015FCu;
    // 7F3015FC: lwz     r5, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301600:
    ctx->pc = 0x7F301600u;
    // 7F301600: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301604:
    ctx->pc = 0x7F301604u;
    // 7F301604: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301608:
    ctx->pc = 0x7F301608u;
    // 7F301608: stw     r6, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30160C:
    ctx->pc = 0x7F30160Cu;
    // 7F30160C: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301610:
    // 7F301610: bl      0x800260FC
    {
            ctx->lr = 0x7F301614u;
            ctx->pc = 0x800260FCu;
            return;
    }

label_7F301614:
    ctx->pc = 0x7F301614u;
    ctx->downcount -= 3;
    // 7F301614: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F301614u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F301618:
    ctx->pc = 0x7F301618u;
    // 7F301618: fmr    f2, f25
    if (!ppc_fp_available_inline(ctx, 0x7F301618u)) return;
    ctx->fpr[2] = ctx->fpr[25];

label_7F30161C:
    // 7F30161C: bl      0x7F301A84
    {
            ctx->lr = 0x7F301620u;
            goto label_7F301A84;
    }

label_7F301620:
    ctx->pc = 0x7F301620u;
    ctx->downcount -= 3;
    // 7F301620: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301620u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_7F301624:
    ctx->pc = 0x7F301624u;
    // 7F301624: lwz     r3, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301628:
    // 7F301628: bl      0x80026080
    {
            ctx->lr = 0x7F30162Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F30162C:
    ctx->pc = 0x7F30162Cu;
    ctx->downcount -= 2;
    // 7F30162C: fcmpu   cr0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30162Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[1], false);

label_7F301630:
    // 7F301630: bc    4, 2, 0x7F30163C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30163C;
        }
    }

label_7F301634:
    ctx->downcount -= 2;
    // 7F301634: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301638:
    ctx->pc = 0x7F301638u;
    // 7F301638: lfs     f1, 32144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301638u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30163C:
    ctx->pc = 0x7F30163Cu;
    ctx->downcount -= 20;
    // 7F30163C: fsubs   f0, f31, f27
    if (!ppc_fp_available_inline(ctx, 0x7F30163Cu)) return;
    ppc_fsubs(ctx, 0, 31, 27);

label_7F301640:
    ctx->pc = 0x7F301640u;
    // 7F301640: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301640u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F301644:
    ctx->pc = 0x7F301644u;
    // 7F301644: fdivs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301644u)) return;
    ppc_fdivs(ctx, 1, 0, 1);

label_7F301648:
    // 7F301648: bl      0x80006668
    {
            ctx->lr = 0x7F30164Cu;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F30164C:
    ctx->pc = 0x7F30164Cu;
    ctx->downcount -= 3;
    // 7F30164C: lwz     r3, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301650:
    ctx->pc = 0x7F301650u;
    // 7F301650: lwz     r4, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301654:
    // 7F301654: bl      0x80026020
    {
            ctx->lr = 0x7F301658u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F301658:
    ctx->pc = 0x7F301658u;
    ctx->downcount -= 3;
    // 7F301658: fadds   f0, f31, f27
    if (!ppc_fp_available_inline(ctx, 0x7F301658u)) return;
    ppc_fadds(ctx, 0, 31, 27);

label_7F30165C:
    ctx->pc = 0x7F30165Cu;
    // 7F30165C: fmuls   f1, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30165Cu)) return;
    ppc_fmuls(ctx, 1, 30, 0);

label_7F301660:
    // 7F301660: bl      0x80006668
    {
            ctx->lr = 0x7F301664u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F301664:
    ctx->pc = 0x7F301664u;
    ctx->downcount -= 2;
    // 7F301664: fcmpu   cr0, f29, f24
    if (!ppc_fp_available_inline(ctx, 0x7F301664u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[24], false);

label_7F301668:
    // 7F301668: bc    4, 2, 0x7F301674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301674;
        }
    }

label_7F30166C:
    ctx->downcount -= 2;
    // 7F30166C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301670:
    ctx->pc = 0x7F301670u;
    // 7F301670: lfs     f24, 32144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301670u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

label_7F301674:
    ctx->pc = 0x7F301674u;
    ctx->downcount -= 30;
    // 7F301674: fdivs   f25, f26, f24
    if (!ppc_fp_available_inline(ctx, 0x7F301674u)) return;
    ppc_fdivs(ctx, 25, 26, 24);

label_7F301678:
    // 7F301678: addi    r3, r29, 80
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(80);

label_7F30167C:
    ctx->pc = 0x7F30167Cu;
    // 7F30167C: lwz     r6, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301680:
    // 7F301680: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301684:
    ctx->pc = 0x7F301684u;
    // 7F301684: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301688:
    // 7F301688: addi    r5, r29, 128
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(128);

label_7F30168C:
    ctx->pc = 0x7F30168Cu;
    // 7F30168C: stw     r6, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301690:
    ctx->pc = 0x7F301690u;
    // 7F301690: stw     r0, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301694:
    ctx->pc = 0x7F301694u;
    // 7F301694: lwz     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301698:
    ctx->pc = 0x7F301698u;
    // 7F301698: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30169C:
    ctx->pc = 0x7F30169Cu;
    // 7F30169C: stw     r6, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3016A0:
    ctx->pc = 0x7F3016A0u;
    // 7F3016A0: stw     r0, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3016A4:
    ctx->pc = 0x7F3016A4u;
    // 7F3016A4: stfs     f1, 92(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3016A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3016A8:
    // 7F3016A8: bl      0x7F113AB0
    {
            ctx->lr = 0x7F3016ACu;
            ctx->pc = 0x7F113AB0u;
            return;
    }

label_7F3016AC:
    ctx->downcount -= 4;
    // 7F3016AC: add   r15, r24, r17
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[15] = res;
    }

label_7F3016B0:
    // 7F3016B0: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F3016B4:
    // 7F3016B4: addi    r3, r15, 444
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(444);

label_7F3016B8:
    // 7F3016B8: bl      0x7F113430
    {
            ctx->lr = 0x7F3016BCu;
            ctx->pc = 0x7F113430u;
            return;
    }

label_7F3016BC:
    ctx->pc = 0x7F3016BCu;
    ctx->downcount -= 30;
    // 7F3016BC: lwz     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3016C0:
    ctx->pc = 0x7F3016C0u;
    // 7F3016C0: fcmpo   cr0, f25, f28
    if (!ppc_fp_available_inline(ctx, 0x7F3016C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[28], true);

label_7F3016C4:
    // 7F3016C4: add   r4, r0, r18
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3016C8:
    ctx->pc = 0x7F3016C8u;
    // 7F3016C8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3016CC:
    ctx->pc = 0x7F3016CCu;
    // 7F3016CC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3016D0:
    ctx->pc = 0x7F3016D0u;
    // 7F3016D0: stw     r3, 492(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3016D4:
    ctx->pc = 0x7F3016D4u;
    // 7F3016D4: stw     r0, 496(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3016D8:
    ctx->pc = 0x7F3016D8u;
    // 7F3016D8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3016DC:
    ctx->pc = 0x7F3016DCu;
    // 7F3016DC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3016E0:
    ctx->pc = 0x7F3016E0u;
    // 7F3016E0: stw     r3, 500(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3016E4:
    ctx->pc = 0x7F3016E4u;
    // 7F3016E4: stw     r0, 504(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3016E8:
    ctx->pc = 0x7F3016E8u;
    // 7F3016E8: lwz     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3016EC:
    ctx->pc = 0x7F3016ECu;
    // 7F3016EC: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3016F0:
    ctx->pc = 0x7F3016F0u;
    // 7F3016F0: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3016F4:
    ctx->pc = 0x7F3016F4u;
    // 7F3016F4: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3016F8:
    ctx->pc = 0x7F3016F8u;
    // 7F3016F8: lwz     r3, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3016FC:
    ctx->pc = 0x7F3016FCu;
    // 7F3016FC: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301700:
    ctx->pc = 0x7F301700u;
    // 7F301700: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301704:
    ctx->pc = 0x7F301704u;
    // 7F301704: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301708:
    ctx->pc = 0x7F301708u;
    // 7F301708: lwz     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30170C:
    // 7F30170C: add   r4, r0, r18
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F301710:
    ctx->pc = 0x7F301710u;
    // 7F301710: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301714:
    ctx->pc = 0x7F301714u;
    // 7F301714: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301718:
    ctx->pc = 0x7F301718u;
    // 7F301718: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30171C:
    ctx->pc = 0x7F30171Cu;
    // 7F30171C: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301720:
    ctx->pc = 0x7F301720u;
    // 7F301720: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301724:
    ctx->pc = 0x7F301724u;
    // 7F301724: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301728:
    ctx->pc = 0x7F301728u;
    // 7F301728: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30172C:
    ctx->pc = 0x7F30172Cu;
    // 7F30172C: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301730:
    // 7F301730: bc    4, 1, 0x7F3017AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3017AC;
        }
    }

label_7F301734:
    ctx->downcount -= 4;
    // 7F301734: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301738:
    ctx->pc = 0x7F301738u;
    // 7F301738: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F301738u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F30173C:
    ctx->pc = 0x7F30173Cu;
    // 7F30173C: lfs     f2, 32156(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30173Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F301740:
    // 7F301740: bl      0x7F301A84
    {
            ctx->lr = 0x7F301744u;
            goto label_7F301A84;
    }

label_7F301744:
    ctx->downcount -= 4;
    // 7F301744: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F301748:
    // 7F301748: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F30174C:
    // 7F30174C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301750:
    // 7F301750: bl      0x80026020
    {
            ctx->lr = 0x7F301754u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F301754:
    ctx->downcount -= 6;
    // 7F301754: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F301758:
    // 7F301758: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F30175C:
    // 7F30175C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F301760:
    // 7F301760: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F301764:
    // 7F301764: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301768:
    // 7F301768: bl      0x80025FD8
    {
            ctx->lr = 0x7F30176Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30176C:
    ctx->downcount -= 16;
    // 7F30176C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F301770:
    // 7F301770: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301774:
    // 7F301774: addi    r5, r4, -1052
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F301778:
    ctx->pc = 0x7F301778u;
    // 7F301778: lwz     r7, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30177C:
    // 7F30177C: addi    r6, r18, 16
    ctx->gpr[6] = ctx->gpr[18] + (u32)(s32)(16);

label_7F301780:
    ctx->pc = 0x7F301780u;
    // 7F301780: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301784:
    ctx->pc = 0x7F301784u;
    // 7F301784: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301788:
    // 7F301788: add   r6, r7, r6
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30178C:
    ctx->pc = 0x7F30178Cu;
    // 7F30178C: lfs     f26, 32160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30178Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F301790:
    ctx->pc = 0x7F301790u;
    // 7F301790: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F301794:
    ctx->pc = 0x7F301794u;
    // 7F301794: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301798:
    ctx->pc = 0x7F301798u;
    // 7F301798: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30179C:
    ctx->pc = 0x7F30179Cu;
    // 7F30179C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3017A0:
    ctx->pc = 0x7F3017A0u;
    // 7F3017A0: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3017A4:
    ctx->pc = 0x7F3017A4u;
    // 7F3017A4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3017A8:
    // 7F3017A8: b       0x7F3018A4
    {
            goto label_7F3018A4;
    }

label_7F3017AC:
    ctx->downcount -= 4;
    // 7F3017AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3017B0:
    ctx->pc = 0x7F3017B0u;
    // 7F3017B0: lfs     f0, 32164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3017B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3017B4:
    ctx->pc = 0x7F3017B4u;
    // 7F3017B4: fcmpo   cr0, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3017B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[0], true);

label_7F3017B8:
    // 7F3017B8: bc    4, 0, 0x7F301834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301834;
        }
    }

label_7F3017BC:
    ctx->downcount -= 4;
    // 7F3017BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3017C0:
    ctx->pc = 0x7F3017C0u;
    // 7F3017C0: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F3017C0u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F3017C4:
    ctx->pc = 0x7F3017C4u;
    // 7F3017C4: lfs     f2, 32168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3017C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3017C8:
    // 7F3017C8: bl      0x7F301A84
    {
            ctx->lr = 0x7F3017CCu;
            goto label_7F301A84;
    }

label_7F3017CC:
    ctx->downcount -= 4;
    // 7F3017CC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3017D0:
    // 7F3017D0: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3017D4:
    // 7F3017D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3017D8:
    // 7F3017D8: bl      0x80026020
    {
            ctx->lr = 0x7F3017DCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3017DC:
    ctx->downcount -= 6;
    // 7F3017DC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3017E0:
    // 7F3017E0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3017E4:
    // 7F3017E4: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3017E8:
    // 7F3017E8: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F3017EC:
    // 7F3017EC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3017F0:
    // 7F3017F0: bl      0x80025FD8
    {
            ctx->lr = 0x7F3017F4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3017F4:
    ctx->downcount -= 16;
    // 7F3017F4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3017F8:
    // 7F3017F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3017FC:
    // 7F3017FC: addi    r5, r4, -1052
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F301800:
    ctx->pc = 0x7F301800u;
    // 7F301800: lwz     r7, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F301804:
    // 7F301804: addi    r6, r18, 16
    ctx->gpr[6] = ctx->gpr[18] + (u32)(s32)(16);

label_7F301808:
    ctx->pc = 0x7F301808u;
    // 7F301808: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30180C:
    ctx->pc = 0x7F30180Cu;
    // 7F30180C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301810:
    // 7F301810: add   r6, r7, r6
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F301814:
    ctx->pc = 0x7F301814u;
    // 7F301814: lfs     f26, 32160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301814u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F301818:
    ctx->pc = 0x7F301818u;
    // 7F301818: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30181C:
    ctx->pc = 0x7F30181Cu;
    // 7F30181C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301820:
    ctx->pc = 0x7F301820u;
    // 7F301820: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301824:
    ctx->pc = 0x7F301824u;
    // 7F301824: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301828:
    ctx->pc = 0x7F301828u;
    // 7F301828: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30182C:
    ctx->pc = 0x7F30182Cu;
    // 7F30182C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301830:
    // 7F301830: b       0x7F3018A4
    {
            goto label_7F3018A4;
    }

label_7F301834:
    ctx->downcount -= 4;
    // 7F301834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301838:
    ctx->pc = 0x7F301838u;
    // 7F301838: lfs     f0, 32172(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301838u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30183C:
    ctx->pc = 0x7F30183Cu;
    // 7F30183C: fcmpo   cr0, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30183Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[0], true);

label_7F301840:
    // 7F301840: bc    4, 1, 0x7F301868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301868;
        }
    }

label_7F301844:
    ctx->pc = 0x7F301844u;
    ctx->downcount -= 2;
    // 7F301844: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F301844u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F301848:
    // 7F301848: bl      0x80006668
    {
            ctx->lr = 0x7F30184Cu;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F30184C:
    ctx->downcount -= 23;
    // 7F30184C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F301850:
    // 7F301850: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301854:
    ctx->pc = 0x7F301854u;
    // 7F301854: lfs     f2, 32176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F301854u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F301858:
    ctx->pc = 0x7F301858u;
    // 7F301858: lfs     f0, 32180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301858u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30185C:
    ctx->pc = 0x7F30185Cu;
    // 7F30185C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30185Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F301860:
    ctx->pc = 0x7F301860u;
    // 7F301860: fdivs   f26, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301860u)) return;
    ppc_fdivs(ctx, 26, 1, 0);

label_7F301864:
    // 7F301864: b       0x7F3018A4
    {
            goto label_7F3018A4;
    }

label_7F301868:
    ctx->downcount -= 4;
    // 7F301868: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30186C:
    ctx->pc = 0x7F30186Cu;
    // 7F30186C: lfs     f0, 32184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30186Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301870:
    ctx->pc = 0x7F301870u;
    // 7F301870: fcmpo   cr0, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301870u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[0], true);

label_7F301874:
    // 7F301874: bc    4, 0, 0x7F30189C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30189C;
        }
    }

label_7F301878:
    ctx->pc = 0x7F301878u;
    ctx->downcount -= 2;
    // 7F301878: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F301878u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F30187C:
    // 7F30187C: bl      0x80006668
    {
            ctx->lr = 0x7F301880u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F301880:
    ctx->downcount -= 23;
    // 7F301880: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F301884:
    // 7F301884: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301888:
    ctx->pc = 0x7F301888u;
    // 7F301888: lfs     f2, 32188(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F301888u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F30188C:
    ctx->pc = 0x7F30188Cu;
    // 7F30188C: lfs     f0, 32180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30188Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301890:
    ctx->pc = 0x7F301890u;
    // 7F301890: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F301890u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F301894:
    ctx->pc = 0x7F301894u;
    // 7F301894: fdivs   f26, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301894u)) return;
    ppc_fdivs(ctx, 26, 1, 0);

label_7F301898:
    // 7F301898: b       0x7F3018A4
    {
            goto label_7F3018A4;
    }

label_7F30189C:
    ctx->downcount -= 2;
    // 7F30189C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3018A0:
    ctx->pc = 0x7F3018A0u;
    // 7F3018A0: lfs     f26, 32136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3018A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F3018A4:
    ctx->pc = 0x7F3018A4u;
    ctx->downcount -= 25;
    // 7F3018A4: lwz     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018A8:
    // 7F3018A8: addi    r8, r18, 16
    ctx->gpr[8] = ctx->gpr[18] + (u32)(s32)(16);

label_7F3018AC:
    ctx->pc = 0x7F3018ACu;
    // 7F3018AC: lwz     r3, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3018B0:
    // 7F3018B0: add   r7, r0, r8
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3018B4:
    ctx->pc = 0x7F3018B4u;
    // 7F3018B4: lwz     r4, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3018B8:
    ctx->pc = 0x7F3018B8u;
    // 7F3018B8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3018BC:
    ctx->pc = 0x7F3018BCu;
    // 7F3018BC: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018C0:
    ctx->pc = 0x7F3018C0u;
    // 7F3018C0: lwz     r5, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3018C4:
    ctx->pc = 0x7F3018C4u;
    // 7F3018C4: stw     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3018C8:
    ctx->pc = 0x7F3018C8u;
    // 7F3018C8: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3018CC:
    ctx->pc = 0x7F3018CCu;
    // 7F3018CC: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3018D0:
    ctx->pc = 0x7F3018D0u;
    // 7F3018D0: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018D4:
    ctx->pc = 0x7F3018D4u;
    // 7F3018D4: stw     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3018D8:
    ctx->pc = 0x7F3018D8u;
    // 7F3018D8: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3018DC:
    ctx->pc = 0x7F3018DCu;
    // 7F3018DC: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018E0:
    // 7F3018E0: add   r7, r0, r8
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3018E4:
    ctx->pc = 0x7F3018E4u;
    // 7F3018E4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3018E8:
    ctx->pc = 0x7F3018E8u;
    // 7F3018E8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018EC:
    ctx->pc = 0x7F3018ECu;
    // 7F3018EC: stw     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3018F0:
    ctx->pc = 0x7F3018F0u;
    // 7F3018F0: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3018F4:
    ctx->pc = 0x7F3018F4u;
    // 7F3018F4: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3018F8:
    ctx->pc = 0x7F3018F8u;
    // 7F3018F8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3018FC:
    ctx->pc = 0x7F3018FCu;
    // 7F3018FC: stw     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F301900:
    ctx->pc = 0x7F301900u;
    // 7F301900: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301904:
    // 7F301904: bl      0x80025FFC
    {
            ctx->lr = 0x7F301908u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F301908:
    ctx->pc = 0x7F301908u;
    ctx->downcount -= 5;
    // 7F301908: fmr    f1, f26
    if (!ppc_fp_available_inline(ctx, 0x7F301908u)) return;
    ctx->fpr[1] = ctx->fpr[26];

label_7F30190C:
    ctx->pc = 0x7F30190Cu;
    // 7F30190C: stfs     f31, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F30190Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F301910:
    ctx->pc = 0x7F301910u;
    // 7F301910: lwz     r3, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301914:
    ctx->pc = 0x7F301914u;
    // 7F301914: lwz     r4, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301918:
    // 7F301918: bl      0x80026020
    {
            ctx->lr = 0x7F30191Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F30191C:
    ctx->pc = 0x7F30191Cu;
    ctx->downcount -= 25;
    // 7F30191C: lwz     r4, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301920:
    // 7F301920: addi    r5, r18, 16
    ctx->gpr[5] = ctx->gpr[18] + (u32)(s32)(16);

label_7F301924:
    ctx->pc = 0x7F301924u;
    // 7F301924: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301928:
    // 7F301928: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F30192C:
    ctx->pc = 0x7F30192Cu;
    // 7F30192C: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301930:
    // 7F301930: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F301934:
    // 7F301934: addi    r17, r17, 324
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(324);

label_7F301938:
    // 7F301938: addi    r18, r18, 16
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(16);

label_7F30193C:
    ctx->pc = 0x7F30193Cu;
    // 7F30193C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301940:
    // 7F301940: addi    r19, r19, 72
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(72);

label_7F301944:
    ctx->pc = 0x7F301944u;
    // 7F301944: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301948:
    ctx->pc = 0x7F301948u;
    // 7F301948: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30194C:
    ctx->pc = 0x7F30194Cu;
    // 7F30194C: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301950:
    ctx->pc = 0x7F301950u;
    // 7F301950: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301954:
    ctx->pc = 0x7F301954u;
    // 7F301954: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301958:
    ctx->pc = 0x7F301958u;
    // 7F301958: lwz     r4, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30195C:
    ctx->pc = 0x7F30195Cu;
    // 7F30195C: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301960:
    ctx->pc = 0x7F301960u;
    // 7F301960: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301964:
    // 7F301964: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F301968:
    ctx->pc = 0x7F301968u;
    // 7F301968: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30196C:
    ctx->pc = 0x7F30196Cu;
    // 7F30196C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301970:
    ctx->pc = 0x7F301970u;
    // 7F301970: lwz     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301974:
    ctx->pc = 0x7F301974u;
    // 7F301974: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301978:
    ctx->pc = 0x7F301978u;
    // 7F301978: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30197C:
    ctx->pc = 0x7F30197Cu;
    // 7F30197C: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301980:
    ctx->pc = 0x7F301980u;
    ctx->downcount -= 3;
    // 7F301980: lwz     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301984:
    // 7F301984: cmpw    r16, r0
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F301988:
    // 7F301988: bc    12, 0, 0x7F3014E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3014E0u;
                return;
            }
            goto label_7F3014E0;
        }
    }

label_7F30198C:
    ctx->pc = 0x7F30198Cu;
    ctx->downcount -= 5;
    // 7F30198C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F301990:
    ctx->pc = 0x7F301990u;
    // 7F301990: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F301994:
    ctx->pc = 0x7F301994u;
    // 7F301994: addi    r4, r24, 440
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(440);

label_7F301998:
    ctx->pc = 0x7F301998u;
    // 7F301998: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30199C:
    loop_7F30199C(ctx);
    if (ctx->pc == 0x7F3019B0u) goto label_7F3019B0;
    return;
label_7F3019A0:
    ctx->pc = 0x7F3019A0u;
    // 7F3019A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3019A4:
    ctx->pc = 0x7F3019A4u;
    // 7F3019A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3019A8:
    ctx->pc = 0x7F3019A8u;
    // 7F3019A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3019AC:
    // 7F3019AC: bc    16, 0, 0x7F30199C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30199Cu;
                return;
            }
            goto label_7F30199C;
        }
    }

label_7F3019B0:
    ctx->pc = 0x7F3019B0u;
    ctx->downcount -= 9;
    // 7F3019B0: mulli   r3, r30, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)324);

label_7F3019B4:
    ctx->pc = 0x7F3019B4u;
    // 7F3019B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3019B8:
    ctx->pc = 0x7F3019B8u;
    // 7F3019B8: add   r3, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3019BC:
    ctx->pc = 0x7F3019BCu;
    // 7F3019BC: addi    r5, r3, 116
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(116);

label_7F3019C0:
    ctx->pc = 0x7F3019C0u;
    // 7F3019C0: addi    r4, r3, -208
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-208);

label_7F3019C4:
    ctx->pc = 0x7F3019C4u;
    // 7F3019C4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3019C8:
    loop_7F3019C8(ctx);
    if (ctx->pc == 0x7F3019DCu) goto label_7F3019DC;
    return;
label_7F3019CC:
    ctx->pc = 0x7F3019CCu;
    // 7F3019CC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3019D0:
    ctx->pc = 0x7F3019D0u;
    // 7F3019D0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3019D4:
    ctx->pc = 0x7F3019D4u;
    // 7F3019D4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3019D8:
    // 7F3019D8: bc    16, 0, 0x7F3019C8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3019C8u;
                return;
            }
            goto label_7F3019C8;
        }
    }

label_7F3019DC:
    ctx->pc = 0x7F3019DCu;
    ctx->downcount -= 18;
    // 7F3019DC: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F3019E0:
    ctx->pc = 0x7F3019E0u;
    // 7F3019E0: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3019E4:
    ctx->pc = 0x7F3019E4u;
    // 7F3019E4: mulli   r4, r0, 324
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3019E8:
    ctx->pc = 0x7F3019E8u;
    // 7F3019E8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3019EC:
    ctx->pc = 0x7F3019ECu;
    // 7F3019EC: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3019F0:
    ctx->pc = 0x7F3019F0u;
    // 7F3019F0: addi    r4, r4, 492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(492);

label_7F3019F4:
    ctx->pc = 0x7F3019F4u;
    // 7F3019F4: lwz     r3, -16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3019F8:
    ctx->pc = 0x7F3019F8u;
    // 7F3019F8: lwz     r0, -12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3019FC:
    ctx->pc = 0x7F3019FCu;
    // 7F3019FC: add   r4, r24, r4
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F301A00:
    ctx->pc = 0x7F301A00u;
    // 7F301A00: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301A04:
    ctx->pc = 0x7F301A04u;
    // 7F301A04: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301A08:
    ctx->pc = 0x7F301A08u;
    // 7F301A08: lwz     r3, -8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301A0C:
    ctx->pc = 0x7F301A0Cu;
    // 7F301A0C: lwz     r0, -4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301A10:
    ctx->pc = 0x7F301A10u;
    // 7F301A10: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301A14:
    ctx->pc = 0x7F301A14u;
    // 7F301A14: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301A18:
    ctx->pc = 0x7F301A18u;
    // 7F301A18: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F301A1Cu;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F301A1C:
    ctx->pc = 0x7F301A1Cu;
    ctx->downcount -= 3;
    // 7F301A1C: lwz     r0, 68(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301A20:
    ctx->pc = 0x7F301A20u;
    // 7F301A20: cmplwi  r0, 0x0000
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

label_7F301A24:
    ctx->pc = 0x7F301A24u;
    // 7F301A24: bc    12, 2, 0x7F301A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301A2C;
        }
    }

label_7F301A28:
    ctx->pc = 0x7F301A28u;
    ctx->downcount -= 1;
    // 7F301A28: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F301A2Cu;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F301A2C:
    ctx->pc = 0x7F301A2Cu;
    ctx->downcount -= 1;
    // 7F301A2C: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F301A30u;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F301A30:
    ctx->pc = 0x7F301A30u;
    ctx->downcount -= 32;
    // 7F301A30: psq_l   f31, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F301A30u);
        if (ctx->exception) return;
    }

label_7F301A34:
    ctx->pc = 0x7F301A34u;
    // 7F301A34: lfd     f31, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A38:
    ctx->pc = 0x7F301A38u;
    // 7F301A38: psq_l   f30, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F301A38u);
        if (ctx->exception) return;
    }

label_7F301A3C:
    ctx->pc = 0x7F301A3Cu;
    // 7F301A3C: lfd     f30, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A40:
    ctx->pc = 0x7F301A40u;
    // 7F301A40: psq_l   f29, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F301A40u);
        if (ctx->exception) return;
    }

label_7F301A44:
    ctx->pc = 0x7F301A44u;
    // 7F301A44: lfd     f29, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A48:
    ctx->pc = 0x7F301A48u;
    // 7F301A48: psq_l   f28, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F301A48u);
        if (ctx->exception) return;
    }

label_7F301A4C:
    ctx->pc = 0x7F301A4Cu;
    // 7F301A4C: lfd     f28, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A50:
    ctx->pc = 0x7F301A50u;
    // 7F301A50: psq_l   f27, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F301A50u);
        if (ctx->exception) return;
    }

label_7F301A54:
    ctx->pc = 0x7F301A54u;
    // 7F301A54: lfd     f27, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A58:
    ctx->pc = 0x7F301A58u;
    // 7F301A58: psq_l   f26, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F301A58u);
        if (ctx->exception) return;
    }

label_7F301A5C:
    ctx->pc = 0x7F301A5Cu;
    // 7F301A5C: lfd     f26, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A60:
    ctx->pc = 0x7F301A60u;
    // 7F301A60: psq_l   f25, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F301A60u);
        if (ctx->exception) return;
    }

label_7F301A64:
    ctx->pc = 0x7F301A64u;
    // 7F301A64: lfd     f25, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A68:
    ctx->pc = 0x7F301A68u;
    // 7F301A68: psq_l   f24, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F301A68u);
        if (ctx->exception) return;
    }

label_7F301A6C:
    ctx->pc = 0x7F301A6Cu;
    // 7F301A6C: lfd     f24, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301A70:
    ctx->pc = 0x7F301A70u;
    // 7F301A70: lmw     r15, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        for (u32 r = 15; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F301A74:
    ctx->pc = 0x7F301A74u;
    // 7F301A74: lwz     r0, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301A78:
    ctx->pc = 0x7F301A78u;
    // 7F301A78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F301A7C:
    ctx->pc = 0x7F301A7Cu;
    // 7F301A7C: addi    r1, r1, 432
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(432);

label_7F301A80:
    ctx->pc = 0x7F301A80u;
    // 7F301A80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F301A84:
    ctx->pc = 0x7F301A84u;
    ctx->downcount -= 7;
    // 7F301A84: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F301A88:
    ctx->pc = 0x7F301A88u;
    // 7F301A88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F301A8C:
    ctx->pc = 0x7F301A8Cu;
    // 7F301A8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301A90:
    ctx->pc = 0x7F301A90u;
    // 7F301A90: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F301A94:
    ctx->pc = 0x7F301A94u;
    // 7F301A94: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F301A94u);
        if (ctx->exception) return;
    }

label_7F301A98:
    ctx->pc = 0x7F301A98u;
    // 7F301A98: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F301A98u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F301A9C:
    ctx->pc = 0x7F301A9Cu;
    // 7F301A9C: bl      0x80006668
    {
            ctx->lr = 0x7F301AA0u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F301AA0:
    ctx->pc = 0x7F301AA0u;
    ctx->downcount -= 4;
    // 7F301AA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301AA4:
    ctx->pc = 0x7F301AA4u;
    // 7F301AA4: lfs     f0, 32072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301AA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301AA8:
    ctx->pc = 0x7F301AA8u;
    // 7F301AA8: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301AA8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F301AAC:
    ctx->pc = 0x7F301AACu;
    // 7F301AAC: bc    12, 2, 0x7F301AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301AB8;
        }
    }

label_7F301AB0:
    ctx->pc = 0x7F301AB0u;
    ctx->downcount -= 18;
    // 7F301AB0: fdivs   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301AB0u)) return;
    ppc_fdivs(ctx, 1, 31, 1);

label_7F301AB4:
    ctx->pc = 0x7F301AB4u;
    // 7F301AB4: b       0x7F301AC0
    {
            goto label_7F301AC0;
    }

label_7F301AB8:
    ctx->pc = 0x7F301AB8u;
    ctx->downcount -= 2;
    // 7F301AB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301ABC:
    ctx->pc = 0x7F301ABCu;
    // 7F301ABC: lfs     f1, 32192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301ABCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F301AC0:
    ctx->pc = 0x7F301AC0u;
    ctx->downcount -= 7;
    // 7F301AC0: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F301AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F301AC0u);
        if (ctx->exception) return;
    }

label_7F301AC4:
    ctx->pc = 0x7F301AC4u;
    // 7F301AC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301AC8:
    ctx->pc = 0x7F301AC8u;
    // 7F301AC8: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301ACC:
    ctx->pc = 0x7F301ACCu;
    // 7F301ACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F301AD0:
    ctx->pc = 0x7F301AD0u;
    // 7F301AD0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F301AD4:
    ctx->pc = 0x7F301AD4u;
    // 7F301AD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F301AD8:
    ctx->pc = 0x7F301AD8u;
    ctx->downcount -= 7;
    // 7F301AD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F301ADC:
    ctx->pc = 0x7F301ADCu;
    // 7F301ADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F301AE0:
    ctx->pc = 0x7F301AE0u;
    // 7F301AE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301AE4:
    ctx->pc = 0x7F301AE4u;
    // 7F301AE4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301AE8:
    ctx->pc = 0x7F301AE8u;
    // 7F301AE8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F301AEC:
    ctx->pc = 0x7F301AECu;
    // 7F301AEC: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F301AF0:
    ctx->pc = 0x7F301AF0u;
    // 7F301AF0: bl      0x7F1146A0
    {
            ctx->lr = 0x7F301AF4u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F301AF4:
    ctx->pc = 0x7F301AF4u;
    ctx->downcount -= 5;
    // 7F301AF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301AF8:
    ctx->pc = 0x7F301AF8u;
    // 7F301AF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F301AFC:
    ctx->pc = 0x7F301AFCu;
    // 7F301AFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F301B00:
    ctx->pc = 0x7F301B00u;
    // 7F301B00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F301B04:
    ctx->pc = 0x7F301B04u;
    ctx->downcount -= 38;
    // 7F301B04: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F301B08:
    ctx->pc = 0x7F301B08u;
    // 7F301B08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F301B0C:
    ctx->pc = 0x7F301B0Cu;
    // 7F301B0C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F301B10:
    ctx->pc = 0x7F301B10u;
    // 7F301B10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301B14:
    ctx->pc = 0x7F301B14u;
    // 7F301B14: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F301B18:
    ctx->pc = 0x7F301B18u;
    // 7F301B18: lfs     f3, 32204(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F301B18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F301B1C:
    ctx->pc = 0x7F301B1Cu;
    // 7F301B1C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F301B20:
    ctx->pc = 0x7F301B20u;
    // 7F301B20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301B24:
    ctx->pc = 0x7F301B24u;
    // 7F301B24: lwz     r4, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301B28:
    ctx->pc = 0x7F301B28u;
    // 7F301B28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301B2C:
    ctx->pc = 0x7F301B2Cu;
    // 7F301B2C: addi    r5, r3, 32208
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32208);

label_7F301B30:
    ctx->pc = 0x7F301B30u;
    // 7F301B30: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301B34:
    ctx->pc = 0x7F301B34u;
    // 7F301B34: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F301B38:
    ctx->pc = 0x7F301B38u;
    // 7F301B38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F301B3C:
    ctx->pc = 0x7F301B3Cu;
    // 7F301B3C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F301B40:
    ctx->pc = 0x7F301B40u;
    // 7F301B40: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F301B40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301B44:
    ctx->pc = 0x7F301B44u;
    // 7F301B44: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F301B44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F301B48:
    ctx->pc = 0x7F301B48u;
    // 7F301B48: lfs     f0, 32216(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F301B48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301B4C:
    ctx->pc = 0x7F301B4Cu;
    // 7F301B4C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F301B4Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F301B50:
    ctx->pc = 0x7F301B50u;
    // 7F301B50: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301B50u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F301B54:
    ctx->pc = 0x7F301B54u;
    // 7F301B54: fmuls   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F301B54u)) return;
    ppc_fmuls(ctx, 1, 3, 0);

label_7F301B58:
    ctx->pc = 0x7F301B58u;
    // 7F301B58: bl      0x80017E28
    {
            ctx->lr = 0x7F301B5Cu;
            ctx->pc = 0x80017E28u;
            return;
    }

label_7F301B5C:
    ctx->pc = 0x7F301B5Cu;
    ctx->downcount -= 17;
    // 7F301B5C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301B5Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_7F301B60:
    ctx->pc = 0x7F301B60u;
    // 7F301B60: lfs     f0, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301B64:
    ctx->pc = 0x7F301B64u;
    // 7F301B64: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301B64u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F301B68:
    ctx->pc = 0x7F301B68u;
    // 7F301B68: stfs     f0, 364(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301B6C:
    ctx->pc = 0x7F301B6Cu;
    // 7F301B6C: lfs     f0, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301B70:
    ctx->pc = 0x7F301B70u;
    // 7F301B70: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301B70u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F301B74:
    ctx->pc = 0x7F301B74u;
    // 7F301B74: stfs     f0, 368(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301B78:
    ctx->pc = 0x7F301B78u;
    // 7F301B78: lfs     f0, 356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F301B7C:
    ctx->pc = 0x7F301B7Cu;
    // 7F301B7C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F301B7Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F301B80:
    ctx->pc = 0x7F301B80u;
    // 7F301B80: stfs     f0, 372(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F301B80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F301B84:
    ctx->pc = 0x7F301B84u;
    // 7F301B84: lwz     r3, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301B88:
    ctx->pc = 0x7F301B88u;
    // 7F301B88: lwz     r0, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301B8C:
    ctx->pc = 0x7F301B8Cu;
    // 7F301B8C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F301B90:
    ctx->pc = 0x7F301B90u;
    // 7F301B90: stw     r0, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301B94:
    ctx->pc = 0x7F301B94u;
    // 7F301B94: lwz     r4, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301B98:
    ctx->pc = 0x7F301B98u;
    // 7F301B98: cmpwi   r4, 360
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(360);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F301B9C:
    ctx->pc = 0x7F301B9Cu;
    // 7F301B9C: bc    4, 1, 0x7F301BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301BB4;
        }
    }

label_7F301BA0:
    ctx->pc = 0x7F301BA0u;
    ctx->downcount -= 48;
    // 7F301BA0: li      r3, 360
    ctx->gpr[3] = (u32)(s32)(360);

label_7F301BA4:
    ctx->pc = 0x7F301BA4u;
    // 7F301BA4: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F301BA8:
    ctx->pc = 0x7F301BA8u;
    // 7F301BA8: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F301BAC:
    ctx->pc = 0x7F301BACu;
    // 7F301BAC: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F301BB0:
    ctx->pc = 0x7F301BB0u;
    // 7F301BB0: stw     r0, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301BB4:
    ctx->pc = 0x7F301BB4u;
    ctx->downcount -= 6;
    // 7F301BB4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301BB8:
    ctx->pc = 0x7F301BB8u;
    // 7F301BB8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F301BBC:
    ctx->pc = 0x7F301BBCu;
    // 7F301BBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F301BC0:
    ctx->pc = 0x7F301BC0u;
    // 7F301BC0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F301BC4:
    ctx->pc = 0x7F301BC4u;
    // 7F301BC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F301BC8:
    ctx->pc = 0x7F301BC8u;
    ctx->downcount -= 21;
    // 7F301BC8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F301BCC:
    ctx->pc = 0x7F301BCCu;
    // 7F301BCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F301BD0:
    ctx->pc = 0x7F301BD0u;
    // 7F301BD0: lis     r5, 1024
    ctx->gpr[5] = ((u32)(s32)(1024) << 16);

label_7F301BD4:
    ctx->pc = 0x7F301BD4u;
    // 7F301BD4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301BD8:
    ctx->pc = 0x7F301BD8u;
    // 7F301BD8: addi    r5, r5, 128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(128);

label_7F301BDC:
    ctx->pc = 0x7F301BDCu;
    // 7F301BDC: stmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F301BE0:
    ctx->pc = 0x7F301BE0u;
    // 7F301BE0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301BE4:
    ctx->pc = 0x7F301BE4u;
    // 7F301BE4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F301BE8:
    ctx->pc = 0x7F301BE8u;
    // 7F301BE8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301BEC:
    ctx->pc = 0x7F301BECu;
    // 7F301BEC: and.   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F301BF0:
    ctx->pc = 0x7F301BF0u;
    // 7F301BF0: bc    12, 2, 0x7F301D04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301D04;
        }
    }

label_7F301BF4:
    ctx->pc = 0x7F301BF4u;
    ctx->downcount -= 8;
    // 7F301BF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F301BF8:
    ctx->pc = 0x7F301BF8u;
    // 7F301BF8: addi    r4, r1, 9
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(9);

label_7F301BFC:
    ctx->pc = 0x7F301BFCu;
    // 7F301BFC: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F301C00:
    ctx->pc = 0x7F301C00u;
    // 7F301C00: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F301C04:
    ctx->pc = 0x7F301C04u;
    // 7F301C04: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F301C08:
    ctx->pc = 0x7F301C08u;
    // 7F301C08: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F301C0C:
    ctx->pc = 0x7F301C0Cu;
    // 7F301C0C: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F301C10:
    ctx->pc = 0x7F301C10u;
    // 7F301C10: bl      0x7F3B1800
    {
            ctx->lr = 0x7F301C14u;
            ctx->pc = 0x7F3B1800u;
            return;
    }

label_7F301C14:
    ctx->pc = 0x7F301C14u;
    ctx->downcount -= 3;
    // 7F301C14: lbz     r4, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F301C18:
    ctx->pc = 0x7F301C18u;
    // 7F301C18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301C1C:
    ctx->pc = 0x7F301C1Cu;
    // 7F301C1C: bl      0x7F3B1398
    {
            ctx->lr = 0x7F301C20u;
            ctx->pc = 0x7F3B1398u;
            return;
    }

label_7F301C20:
    ctx->pc = 0x7F301C20u;
    ctx->downcount -= 3;
    // 7F301C20: lbz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F301C24:
    ctx->pc = 0x7F301C24u;
    // 7F301C24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301C28:
    ctx->pc = 0x7F301C28u;
    // 7F301C28: bl      0x7F3B1348
    {
            ctx->lr = 0x7F301C2Cu;
            ctx->pc = 0x7F3B1348u;
            return;
    }

label_7F301C2C:
    ctx->pc = 0x7F301C2Cu;
    ctx->downcount -= 7;
    // 7F301C2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F301C30:
    ctx->pc = 0x7F301C30u;
    // 7F301C30: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F301C34:
    ctx->pc = 0x7F301C34u;
    // 7F301C34: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_7F301C38:
    ctx->pc = 0x7F301C38u;
    // 7F301C38: addi    r6, r1, 14
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(14);

label_7F301C3C:
    ctx->pc = 0x7F301C3Cu;
    // 7F301C3C: addi    r7, r1, 13
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(13);

label_7F301C40:
    ctx->pc = 0x7F301C40u;
    // 7F301C40: addi    r8, r1, 12
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(12);

label_7F301C44:
    ctx->pc = 0x7F301C44u;
    // 7F301C44: bl      0x7F3B16FC
    {
            ctx->lr = 0x7F301C48u;
            ctx->pc = 0x7F3B16FCu;
            return;
    }

label_7F301C48:
    ctx->pc = 0x7F301C48u;
    ctx->downcount -= 5;
    // 7F301C48: lis     r3, 1024
    ctx->gpr[3] = ((u32)(s32)(1024) << 16);

label_7F301C4C:
    ctx->pc = 0x7F301C4Cu;
    // 7F301C4C: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301C50:
    ctx->pc = 0x7F301C50u;
    // 7F301C50: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_7F301C54:
    ctx->pc = 0x7F301C54u;
    // 7F301C54: and.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F301C58:
    ctx->pc = 0x7F301C58u;
    // 7F301C58: bc    4, 2, 0x7F301C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301C78;
        }
    }

label_7F301C5C:
    ctx->pc = 0x7F301C5Cu;
    ctx->downcount -= 6;
    // 7F301C5C: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301C60:
    ctx->pc = 0x7F301C60u;
    // 7F301C60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301C64:
    ctx->pc = 0x7F301C64u;
    // 7F301C64: lbz     r5, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F301C68:
    ctx->pc = 0x7F301C68u;
    // 7F301C68: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F301C6C:
    ctx->pc = 0x7F301C6Cu;
    // 7F301C6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301C70:
    ctx->pc = 0x7F301C70u;
    // 7F301C70: bl      0x7F3B1628
    {
            ctx->lr = 0x7F301C74u;
            ctx->pc = 0x7F3B1628u;
            return;
    }

label_7F301C74:
    ctx->pc = 0x7F301C74u;
    ctx->downcount -= 1;
    // 7F301C74: b       0x7F301C94
    {
            goto label_7F301C94;
    }

label_7F301C78:
    ctx->pc = 0x7F301C78u;
    ctx->downcount -= 7;
    // 7F301C78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301C7C:
    ctx->pc = 0x7F301C7Cu;
    // 7F301C7C: addi    r7, r1, 11
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(11);

label_7F301C80:
    ctx->pc = 0x7F301C80u;
    // 7F301C80: addi    r8, r1, 10
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(10);

label_7F301C84:
    ctx->pc = 0x7F301C84u;
    // 7F301C84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F301C88:
    ctx->pc = 0x7F301C88u;
    // 7F301C88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F301C8C:
    ctx->pc = 0x7F301C8Cu;
    // 7F301C8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F301C90:
    ctx->pc = 0x7F301C90u;
    // 7F301C90: bl      0x7F3B16FC
    {
            ctx->lr = 0x7F301C94u;
            ctx->pc = 0x7F3B16FCu;
            return;
    }

label_7F301C94:
    ctx->pc = 0x7F301C94u;
    ctx->downcount -= 6;
    // 7F301C94: lbz     r3, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F301C98:
    ctx->pc = 0x7F301C98u;
    // 7F301C98: lbz     r0, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F301C9C:
    ctx->pc = 0x7F301C9Cu;
    // 7F301C9C: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F301CA0:
    ctx->pc = 0x7F301CA0u;
    // 7F301CA0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F301CA4:
    ctx->pc = 0x7F301CA4u;
    // 7F301CA4: cmpw    r3, r0
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

label_7F301CA8:
    ctx->pc = 0x7F301CA8u;
    // 7F301CA8: bc    12, 2, 0x7F301CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301CB4;
        }
    }

label_7F301CAC:
    ctx->pc = 0x7F301CACu;
    ctx->downcount -= 2;
    // 7F301CAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301CB0:
    ctx->pc = 0x7F301CB0u;
    // 7F301CB0: bl      0x7F3B1520
    {
            ctx->lr = 0x7F301CB4u;
            ctx->pc = 0x7F3B1520u;
            return;
    }

label_7F301CB4:
    ctx->pc = 0x7F301CB4u;
    ctx->downcount -= 6;
    // 7F301CB4: lbz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F301CB8:
    ctx->pc = 0x7F301CB8u;
    // 7F301CB8: lbz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F301CBC:
    ctx->pc = 0x7F301CBCu;
    // 7F301CBC: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F301CC0:
    ctx->pc = 0x7F301CC0u;
    // 7F301CC0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F301CC4:
    ctx->pc = 0x7F301CC4u;
    // 7F301CC4: cmpw    r3, r0
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

label_7F301CC8:
    ctx->pc = 0x7F301CC8u;
    // 7F301CC8: bc    12, 2, 0x7F301CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301CD4;
        }
    }

label_7F301CCC:
    ctx->pc = 0x7F301CCCu;
    ctx->downcount -= 2;
    // 7F301CCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301CD0:
    ctx->pc = 0x7F301CD0u;
    // 7F301CD0: bl      0x7F3B1578
    {
            ctx->lr = 0x7F301CD4u;
            ctx->pc = 0x7F3B1578u;
            return;
    }

label_7F301CD4:
    ctx->pc = 0x7F301CD4u;
    ctx->downcount -= 5;
    // 7F301CD4: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301CD8:
    ctx->pc = 0x7F301CD8u;
    // 7F301CD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301CDC:
    ctx->pc = 0x7F301CDCu;
    // 7F301CDC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F301CE0:
    ctx->pc = 0x7F301CE0u;
    // 7F301CE0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301CE4:
    ctx->pc = 0x7F301CE4u;
    // 7F301CE4: bl      0x7F3B14CC
    {
            ctx->lr = 0x7F301CE8u;
            ctx->pc = 0x7F3B14CCu;
            return;
    }

label_7F301CE8:
    ctx->pc = 0x7F301CE8u;
    ctx->downcount -= 3;
    // 7F301CE8: lbz     r4, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F301CEC:
    ctx->pc = 0x7F301CECu;
    // 7F301CEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301CF0:
    ctx->pc = 0x7F301CF0u;
    // 7F301CF0: bl      0x7F3B147C
    {
            ctx->lr = 0x7F301CF4u;
            ctx->pc = 0x7F3B147Cu;
            return;
    }

label_7F301CF4:
    ctx->pc = 0x7F301CF4u;
    ctx->downcount -= 3;
    // 7F301CF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301CF8:
    ctx->pc = 0x7F301CF8u;
    // 7F301CF8: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F301CFC:
    ctx->pc = 0x7F301CFCu;
    // 7F301CFC: bl      0x7F3B13E8
    {
            ctx->lr = 0x7F301D00u;
            ctx->pc = 0x7F3B13E8u;
            return;
    }

label_7F301D00:
    ctx->pc = 0x7F301D00u;
    ctx->downcount -= 1;
    // 7F301D00: b       0x7F301D18
    {
            goto label_7F301D18;
    }

label_7F301D04:
    ctx->pc = 0x7F301D04u;
    ctx->downcount -= 3;
    // 7F301D04: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301D08:
    ctx->pc = 0x7F301D08u;
    // 7F301D08: and.   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F301D0C:
    ctx->pc = 0x7F301D0Cu;
    // 7F301D0C: bc    12, 2, 0x7F301D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301D18;
        }
    }

label_7F301D10:
    ctx->pc = 0x7F301D10u;
    ctx->downcount -= 2;
    // 7F301D10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F301D14:
    ctx->pc = 0x7F301D14u;
    // 7F301D14: bl      0x7F3B1F94
    {
            ctx->lr = 0x7F301D18u;
            ctx->pc = 0x7F3B1F94u;
            return;
    }

label_7F301D18:
    ctx->pc = 0x7F301D18u;
    ctx->downcount -= 16;
    // 7F301D18: lmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F301D1C:
    ctx->pc = 0x7F301D1Cu;
    // 7F301D1C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301D20:
    ctx->pc = 0x7F301D20u;
    // 7F301D20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F301D24:
    ctx->pc = 0x7F301D24u;
    // 7F301D24: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F301D28:
    ctx->pc = 0x7F301D28u;
    // 7F301D28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F301D2C:
    ctx->pc = 0x7F301D2Cu;
    ctx->downcount -= 20;
    // 7F301D2C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F301D30:
    ctx->pc = 0x7F301D30u;
    // 7F301D30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F301D34:
    ctx->pc = 0x7F301D34u;
    // 7F301D34: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F301D38:
    ctx->pc = 0x7F301D38u;
    // 7F301D38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301D3C:
    ctx->pc = 0x7F301D3Cu;
    // 7F301D3C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F301D40:
    ctx->pc = 0x7F301D40u;
    // 7F301D40: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301D44:
    ctx->pc = 0x7F301D44u;
    // 7F301D44: lwz     r31, -27956(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-27956);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F301D48:
    ctx->pc = 0x7F301D48u;
    // 7F301D48: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F301D4C:
    ctx->pc = 0x7F301D4Cu;
    // 7F301D4C: lwz     r3, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301D50:
    ctx->pc = 0x7F301D50u;
    // 7F301D50: bl      0x7F3C9624
    {
            ctx->lr = 0x7F301D54u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F301D54:
    ctx->pc = 0x7F301D54u;
    ctx->downcount -= 2;
    // 7F301D54: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F301D58:
    ctx->pc = 0x7F301D58u;
    // 7F301D58: b       0x7F301DC8
    {
            goto label_7F301DC8;
    }

label_7F301D5C:
    ctx->pc = 0x7F301D5Cu;
    ctx->downcount -= 5;
    // 7F301D5C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301D60:
    ctx->pc = 0x7F301D60u;
    // 7F301D60: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301D64:
    ctx->pc = 0x7F301D64u;
    // 7F301D64: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301D68:
    // 7F301D68: cmpwi   r0, 1
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

label_7F301D6C:
    // 7F301D6C: bc    12, 2, 0x7F301DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301DB0;
        }
    }

label_7F301D70:
    ctx->downcount -= 1;
    // 7F301D70: bc    4, 0, 0x7F301DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301DB8;
        }
    }

label_7F301D74:
    ctx->downcount -= 2;
    // 7F301D74: cmpwi   r0, 0
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

label_7F301D78:
    // 7F301D78: bc    4, 0, 0x7F301D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301D80;
        }
    }

label_7F301D7C:
    ctx->downcount -= 1;
    // 7F301D7C: b       0x7F301DB8
    {
            goto label_7F301DB8;
    }

label_7F301D80:
    ctx->pc = 0x7F301D80u;
    ctx->downcount -= 3;
    // 7F301D80: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301D84:
    // 7F301D84: cmpwi   r0, -1
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

label_7F301D88:
    // 7F301D88: bc    12, 2, 0x7F301DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301DA0;
        }
    }

label_7F301D8C:
    ctx->downcount -= 1;
    // 7F301D8C: bc    12, 0, 0x7F301DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301DB8;
        }
    }

label_7F301D90:
    ctx->downcount -= 2;
    // 7F301D90: cmpwi   r0, 2
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

label_7F301D94:
    // 7F301D94: bc    4, 0, 0x7F301DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301DB8;
        }
    }

label_7F301D98:
    ctx->pc = 0x7F301D98u;
    ctx->downcount -= 2;
    // 7F301D98: stw     r0, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301D9C:
    // 7F301D9C: b       0x7F301DB8
    {
            goto label_7F301DB8;
    }

label_7F301DA0:
    ctx->pc = 0x7F301DA0u;
    ctx->downcount -= 4;
    // 7F301DA0: lwz     r0, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301DA4:
    // 7F301DA4: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F301DA8:
    ctx->pc = 0x7F301DA8u;
    // 7F301DA8: stw     r0, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301DAC:
    // 7F301DAC: b       0x7F301DB8
    {
            goto label_7F301DB8;
    }

label_7F301DB0:
    ctx->downcount -= 2;
    // 7F301DB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F301DB4:
    // 7F301DB4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F301DB8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F301DB8:
    ctx->pc = 0x7F301DB8u;
    ctx->downcount -= 4;
    // 7F301DB8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301DBC:
    // 7F301DBC: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F301DC0:
    // 7F301DC0: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F301DC4:
    ctx->pc = 0x7F301DC4u;
    // 7F301DC4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301DC8:
    ctx->downcount -= 2;
    // 7F301DC8: cmpwi   r29, 0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F301DCC:
    // 7F301DCC: bc    12, 1, 0x7F301D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301D5Cu;
                return;
            }
            goto label_7F301D5C;
        }
    }

label_7F301DD0:
    ctx->pc = 0x7F301DD0u;
    ctx->downcount -= 3;
    // 7F301DD0: lwz     r3, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301DD4:
    ctx->pc = 0x7F301DD4u;
    // 7F301DD4: cmplwi  r3, 0x0000
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

label_7F301DD8:
    ctx->pc = 0x7F301DD8u;
    // 7F301DD8: bc    12, 2, 0x7F301F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301F60;
        }
    }

label_7F301DDC:
    ctx->pc = 0x7F301DDCu;
    ctx->downcount -= 3;
    // 7F301DDC: lwz     r0, 252(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301DE0:
    ctx->pc = 0x7F301DE0u;
    // 7F301DE0: cmpwi   r0, -1
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

label_7F301DE4:
    ctx->pc = 0x7F301DE4u;
    // 7F301DE4: bc    12, 2, 0x7F301F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301F60;
        }
    }

label_7F301DE8:
    ctx->pc = 0x7F301DE8u;
    ctx->downcount -= 3;
    // 7F301DE8: lbz     r0, 392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(392);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F301DEC:
    ctx->pc = 0x7F301DECu;
    // 7F301DEC: cmplwi  r0, 0x0000
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

label_7F301DF0:
    ctx->pc = 0x7F301DF0u;
    // 7F301DF0: bc    12, 2, 0x7F301F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301F60;
        }
    }

label_7F301DF4:
    ctx->pc = 0x7F301DF4u;
    ctx->downcount -= 3;
    // 7F301DF4: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301DF8:
    ctx->pc = 0x7F301DF8u;
    // 7F301DF8: cmplwi  r4, 0x0000
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

label_7F301DFC:
    ctx->pc = 0x7F301DFCu;
    // 7F301DFC: bc    4, 2, 0x7F301E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301E60;
        }
    }

label_7F301E00:
    ctx->pc = 0x7F301E00u;
    ctx->downcount -= 12;
    // 7F301E00: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E04:
    ctx->pc = 0x7F301E04u;
    // 7F301E04: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F301E08:
    ctx->pc = 0x7F301E08u;
    // 7F301E08: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E0C:
    ctx->pc = 0x7F301E0Cu;
    // 7F301E0C: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E10:
    ctx->pc = 0x7F301E10u;
    // 7F301E10: stw     r4, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F301E14:
    ctx->pc = 0x7F301E14u;
    // 7F301E14: lwz     r4, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E18:
    ctx->pc = 0x7F301E18u;
    // 7F301E18: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E1C:
    ctx->pc = 0x7F301E1Cu;
    // 7F301E1C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E20:
    ctx->pc = 0x7F301E20u;
    // 7F301E20: addi    r5, r3, 152
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(152);

label_7F301E24:
    ctx->pc = 0x7F301E24u;
    // 7F301E24: addi    r4, r4, 152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(152);

label_7F301E28:
    ctx->pc = 0x7F301E28u;
    // 7F301E28: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F301E2C:
    loop_7F301E2C(ctx);
    if (ctx->pc == 0x7F301E40u) goto label_7F301E40;
    return;
label_7F301E30:
    ctx->pc = 0x7F301E30u;
    // 7F301E30: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F301E34:
    ctx->pc = 0x7F301E34u;
    // 7F301E34: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301E38:
    ctx->pc = 0x7F301E38u;
    // 7F301E38: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F301E3C:
    // 7F301E3C: bc    16, 0, 0x7F301E2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301E2Cu;
                return;
            }
            goto label_7F301E2C;
        }
    }

label_7F301E40:
    ctx->pc = 0x7F301E40u;
    ctx->downcount -= 7;
    // 7F301E40: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301E44:
    ctx->pc = 0x7F301E44u;
    // 7F301E44: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301E48:
    ctx->pc = 0x7F301E48u;
    // 7F301E48: lwz     r4, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E4C:
    ctx->pc = 0x7F301E4Cu;
    // 7F301E4C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E50:
    ctx->pc = 0x7F301E50u;
    // 7F301E50: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E54:
    ctx->pc = 0x7F301E54u;
    // 7F301E54: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301E58:
    ctx->pc = 0x7F301E58u;
    // 7F301E58: bl      0x7F3BC518
    {
            ctx->lr = 0x7F301E5Cu;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F301E5C:
    ctx->pc = 0x7F301E5Cu;
    ctx->downcount -= 1;
    // 7F301E5C: b       0x7F301E6C
    {
            goto label_7F301E6C;
    }

label_7F301E60:
    ctx->pc = 0x7F301E60u;
    ctx->downcount -= 3;
    // 7F301E60: lwz     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301E64:
    ctx->pc = 0x7F301E64u;
    // 7F301E64: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E68:
    ctx->pc = 0x7F301E68u;
    // 7F301E68: stw     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301E6C:
    ctx->pc = 0x7F301E6Cu;
    ctx->downcount -= 3;
    // 7F301E6C: lwz     r0, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301E70:
    ctx->pc = 0x7F301E70u;
    // 7F301E70: cmpwi   r0, 0
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

label_7F301E74:
    ctx->pc = 0x7F301E74u;
    // 7F301E74: bc    12, 2, 0x7F301E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301E9C;
        }
    }

label_7F301E78:
    ctx->pc = 0x7F301E78u;
    ctx->downcount -= 9;
    // 7F301E78: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E7C:
    ctx->pc = 0x7F301E7Cu;
    // 7F301E7C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301E80:
    ctx->pc = 0x7F301E80u;
    // 7F301E80: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F301E84:
    ctx->pc = 0x7F301E84u;
    // 7F301E84: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301E88:
    ctx->pc = 0x7F301E88u;
    // 7F301E88: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301E8C:
    ctx->pc = 0x7F301E8Cu;
    // 7F301E8C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301E90:
    ctx->pc = 0x7F301E90u;
    // 7F301E90: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F301E94:
    ctx->pc = 0x7F301E94u;
    // 7F301E94: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301E98:
    ctx->pc = 0x7F301E98u;
    // 7F301E98: b       0x7F301FB0
    {
            goto label_7F301FB0;
    }

label_7F301E9C:
    ctx->pc = 0x7F301E9Cu;
    ctx->downcount -= 3;
    // 7F301E9C: lwz     r0, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301EA0:
    ctx->pc = 0x7F301EA0u;
    // 7F301EA0: cmpwi   r0, 0
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

label_7F301EA4:
    ctx->pc = 0x7F301EA4u;
    // 7F301EA4: bc    12, 2, 0x7F301F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301F3C;
        }
    }

label_7F301EA8:
    ctx->pc = 0x7F301EA8u;
    ctx->downcount -= 5;
    // 7F301EA8: lwz     r4, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301EAC:
    ctx->pc = 0x7F301EACu;
    // 7F301EAC: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F301EB0:
    ctx->pc = 0x7F301EB0u;
    // 7F301EB0: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301EB4:
    ctx->pc = 0x7F301EB4u;
    // 7F301EB4: cmplwi  r3, 0x0000
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

label_7F301EB8:
    ctx->pc = 0x7F301EB8u;
    // 7F301EB8: bc    12, 2, 0x7F301EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301EC8;
        }
    }

label_7F301EBC:
    ctx->pc = 0x7F301EBCu;
    ctx->downcount -= 3;
    // 7F301EBC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301EC0:
    ctx->pc = 0x7F301EC0u;
    // 7F301EC0: rlwinm r0, r0, 24, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x0000000Fu;
    }

label_7F301EC4:
    ctx->pc = 0x7F301EC4u;
    // 7F301EC4: and   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F301EC8:
    ctx->pc = 0x7F301EC8u;
    ctx->downcount -= 21;
    // 7F301EC8: lwz     r0, 252(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301ECC:
    ctx->pc = 0x7F301ECCu;
    // 7F301ECC: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F301ED0:
    ctx->pc = 0x7F301ED0u;
    // 7F301ED0: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F301ED4:
    ctx->pc = 0x7F301ED4u;
    // 7F301ED4: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301ED8:
    ctx->pc = 0x7F301ED8u;
    // 7F301ED8: lwz     r5, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301EDC:
    ctx->pc = 0x7F301EDCu;
    // 7F301EDC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301EE0:
    ctx->pc = 0x7F301EE0u;
    // 7F301EE0: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F301EE4:
    ctx->pc = 0x7F301EE4u;
    // 7F301EE4: rlwinm r6, r5, 0, 16, 19
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000F000u;
    }

label_7F301EE8:
    ctx->pc = 0x7F301EE8u;
    // 7F301EE8: lwz     r5, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F301EEC:
    ctx->pc = 0x7F301EECu;
    // 7F301EEC: rlwinm r3, r0, 0, 20, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF0FFFu;
    }

label_7F301EF0:
    ctx->pc = 0x7F301EF0u;
    // 7F301EF0: rlwinm r0, r5, 0, 16, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000F000u;
    }

label_7F301EF4:
    ctx->pc = 0x7F301EF4u;
    // 7F301EF4: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_7F301EF8:
    ctx->pc = 0x7F301EF8u;
    // 7F301EF8: rlwinm r0, r0, 20, 12, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x000FFFFFu;
    }

label_7F301EFC:
    ctx->pc = 0x7F301EFCu;
    // 7F301EFC: and   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F301F00:
    ctx->pc = 0x7F301F00u;
    // 7F301F00: rlwinm r0, r7, 12, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 12u) & 0x00003000u;
    }

label_7F301F04:
    ctx->pc = 0x7F301F04u;
    // 7F301F04: rlwimi r3, r7, 12, 16, 19
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 12u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x0000F000u) | (rot & 0x0000F000u);
    }

label_7F301F08:
    ctx->pc = 0x7F301F08u;
    // 7F301F08: cmpwi   r0, 12288
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12288);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F301F0C:
    ctx->pc = 0x7F301F0Cu;
    // 7F301F0C: stw     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F301F10:
    ctx->pc = 0x7F301F10u;
    // 7F301F10: bc    4, 2, 0x7F301F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F301F28;
        }
    }

label_7F301F14:
    ctx->pc = 0x7F301F14u;
    ctx->downcount -= 5;
    // 7F301F14: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F18:
    ctx->pc = 0x7F301F18u;
    // 7F301F18: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F1C:
    ctx->pc = 0x7F301F1Cu;
    // 7F301F1C: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F301F20:
    ctx->pc = 0x7F301F20u;
    // 7F301F20: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F24:
    ctx->pc = 0x7F301F24u;
    // 7F301F24: b       0x7F301FB0
    {
            goto label_7F301FB0;
    }

label_7F301F28:
    ctx->pc = 0x7F301F28u;
    ctx->downcount -= 5;
    // 7F301F28: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F2C:
    ctx->pc = 0x7F301F2Cu;
    // 7F301F2C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F30:
    ctx->pc = 0x7F301F30u;
    // 7F301F30: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F301F34:
    ctx->pc = 0x7F301F34u;
    // 7F301F34: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F38:
    ctx->pc = 0x7F301F38u;
    // 7F301F38: b       0x7F301FB0
    {
            goto label_7F301FB0;
    }

label_7F301F3C:
    ctx->pc = 0x7F301F3Cu;
    ctx->downcount -= 9;
    // 7F301F3C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F40:
    ctx->pc = 0x7F301F40u;
    // 7F301F40: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F44:
    ctx->pc = 0x7F301F44u;
    // 7F301F44: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F301F48:
    ctx->pc = 0x7F301F48u;
    // 7F301F48: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F4C:
    ctx->pc = 0x7F301F4Cu;
    // 7F301F4C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F50:
    ctx->pc = 0x7F301F50u;
    // 7F301F50: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F54:
    ctx->pc = 0x7F301F54u;
    // 7F301F54: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F301F58:
    ctx->pc = 0x7F301F58u;
    // 7F301F58: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F5C:
    ctx->pc = 0x7F301F5Cu;
    // 7F301F5C: b       0x7F301FB0
    {
            goto label_7F301FB0;
    }

label_7F301F60:
    ctx->pc = 0x7F301F60u;
    ctx->downcount -= 3;
    // 7F301F60: lwz     r0, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F64:
    ctx->pc = 0x7F301F64u;
    // 7F301F64: cmpwi   r0, 0
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

label_7F301F68:
    ctx->pc = 0x7F301F68u;
    // 7F301F68: bc    12, 2, 0x7F301F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301F90;
        }
    }

label_7F301F6C:
    ctx->pc = 0x7F301F6Cu;
    ctx->downcount -= 9;
    // 7F301F6C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F70:
    ctx->pc = 0x7F301F70u;
    // 7F301F70: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F74:
    ctx->pc = 0x7F301F74u;
    // 7F301F74: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F301F78:
    ctx->pc = 0x7F301F78u;
    // 7F301F78: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F7C:
    ctx->pc = 0x7F301F7Cu;
    // 7F301F7C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F80:
    ctx->pc = 0x7F301F80u;
    // 7F301F80: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F84:
    ctx->pc = 0x7F301F84u;
    // 7F301F84: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F301F88:
    ctx->pc = 0x7F301F88u;
    // 7F301F88: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301F8C:
    ctx->pc = 0x7F301F8Cu;
    // 7F301F8C: b       0x7F301FB0
    {
            goto label_7F301FB0;
    }

label_7F301F90:
    ctx->pc = 0x7F301F90u;
    ctx->downcount -= 8;
    // 7F301F90: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301F94:
    ctx->pc = 0x7F301F94u;
    // 7F301F94: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301F98:
    ctx->pc = 0x7F301F98u;
    // 7F301F98: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F301F9C:
    ctx->pc = 0x7F301F9Cu;
    // 7F301F9C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301FA0:
    ctx->pc = 0x7F301FA0u;
    // 7F301FA0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301FA4:
    ctx->pc = 0x7F301FA4u;
    // 7F301FA4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301FA8:
    ctx->pc = 0x7F301FA8u;
    // 7F301FA8: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F301FAC:
    ctx->pc = 0x7F301FACu;
    // 7F301FAC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F301FB0:
    ctx->pc = 0x7F301FB0u;
    ctx->downcount -= 3;
    // 7F301FB0: lwz     r3, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301FB4:
    ctx->pc = 0x7F301FB4u;
    // 7F301FB4: cmplwi  r3, 0x0000
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

label_7F301FB8:
    ctx->pc = 0x7F301FB8u;
    // 7F301FB8: bc    12, 2, 0x7F301FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301FD4;
        }
    }

label_7F301FBC:
    ctx->pc = 0x7F301FBCu;
    ctx->downcount -= 3;
    // 7F301FBC: lbz     r0, 392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(392);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F301FC0:
    ctx->pc = 0x7F301FC0u;
    // 7F301FC0: cmplwi  r0, 0x0000
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

label_7F301FC4:
    ctx->pc = 0x7F301FC4u;
    // 7F301FC4: bc    12, 2, 0x7F301FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F301FD4;
        }
    }

label_7F301FC8:
    ctx->pc = 0x7F301FC8u;
    ctx->downcount -= 3;
    // 7F301FC8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301FCC:
    ctx->pc = 0x7F301FCCu;
    // 7F301FCC: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F301FD0:
    ctx->pc = 0x7F301FD0u;
    // 7F301FD0: bl      0x7F301BC8
    {
            ctx->lr = 0x7F301FD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301BC8u;
                return;
            }
            goto label_7F301BC8;
    }

label_7F301FD4:
    ctx->pc = 0x7F301FD4u;
    ctx->downcount -= 2;
    // 7F301FD4: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F301FD8:
    ctx->pc = 0x7F301FD8u;
    // 7F301FD8: bl      0x7F012050
    {
            ctx->lr = 0x7F301FDCu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F301FDC:
    ctx->pc = 0x7F301FDCu;
    ctx->downcount -= 2;
    // 7F301FDC: cmpwi   r3, 0
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

label_7F301FE0:
    ctx->pc = 0x7F301FE0u;
    // 7F301FE0: bc    12, 2, 0x7F302000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302000;
        }
    }

label_7F301FE4:
    ctx->pc = 0x7F301FE4u;
    ctx->downcount -= 4;
    // 7F301FE4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F301FE8:
    ctx->pc = 0x7F301FE8u;
    // 7F301FE8: lwz     r0, 4452(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F301FEC:
    ctx->pc = 0x7F301FECu;
    // 7F301FEC: rlwinm. r0, r0, 0, 31, 31
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

label_7F301FF0:
    ctx->pc = 0x7F301FF0u;
    // 7F301FF0: bc    12, 2, 0x7F302000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302000;
        }
    }

label_7F301FF4:
    ctx->pc = 0x7F301FF4u;
    ctx->downcount -= 3;
    // 7F301FF4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F301FF8:
    ctx->pc = 0x7F301FF8u;
    // 7F301FF8: addi    r4, r30, 180
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(180);

label_7F301FFC:
    ctx->pc = 0x7F301FFCu;
    // 7F301FFC: bl      0x7F2FFCBC
    {
            ctx->lr = 0x7F302000u;
            ctx->pc = 0x7F2FFCBCu;
            return;
    }

label_7F302000:
    ctx->pc = 0x7F302000u;
    ctx->downcount -= 2;
    // 7F302000: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F302004:
    ctx->pc = 0x7F302004u;
    // 7F302004: bl      0x7F301B04
    {
            ctx->lr = 0x7F302008u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301B04u;
                return;
            }
            goto label_7F301B04;
    }

label_7F302008:
    ctx->pc = 0x7F302008u;
    ctx->downcount -= 5;
    // 7F302008: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30200C:
    ctx->pc = 0x7F30200Cu;
    // 7F30200C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302010:
    ctx->pc = 0x7F302010u;
    // 7F302010: addi    r5, r30, 180
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(180);

label_7F302014:
    ctx->pc = 0x7F302014u;
    // 7F302014: addi    r6, r30, 364
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(364);

label_7F302018:
    ctx->pc = 0x7F302018u;
    // 7F302018: bl      0x7F3000D0
    {
            ctx->lr = 0x7F30201Cu;
            ctx->pc = 0x7F3000D0u;
            return;
    }

label_7F30201C:
    ctx->pc = 0x7F30201Cu;
    ctx->downcount -= 16;
    // 7F30201C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F302020:
    ctx->pc = 0x7F302020u;
    // 7F302020: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302024:
    ctx->pc = 0x7F302024u;
    // 7F302024: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302028:
    ctx->pc = 0x7F302028u;
    // 7F302028: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30202C:
    ctx->pc = 0x7F30202Cu;
    // 7F30202C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302030:
    ctx->pc = 0x7F302030u;
    ctx->downcount -= 8;
    // 7F302030: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302034:
    ctx->pc = 0x7F302034u;
    // 7F302034: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302038:
    ctx->pc = 0x7F302038u;
    // 7F302038: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30203C:
    ctx->pc = 0x7F30203Cu;
    // 7F30203C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F302040:
    ctx->pc = 0x7F302040u;
    // 7F302040: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302044:
    ctx->pc = 0x7F302044u;
    // 7F302044: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_7F302048:
    ctx->pc = 0x7F302048u;
    // 7F302048: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30204C:
    ctx->pc = 0x7F30204Cu;
    // 7F30204C: bl      0x7F3000A4
    {
            ctx->lr = 0x7F302050u;
            ctx->pc = 0x7F3000A4u;
            return;
    }

label_7F302050:
    ctx->pc = 0x7F302050u;
    ctx->downcount -= 3;
    // 7F302050: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302054:
    ctx->pc = 0x7F302054u;
    // 7F302054: cmplwi  r3, 0x0000
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

label_7F302058:
    ctx->pc = 0x7F302058u;
    // 7F302058: bc    12, 2, 0x7F302084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302084;
        }
    }

label_7F30205C:
    ctx->pc = 0x7F30205Cu;
    ctx->downcount -= 5;
    // 7F30205C: lis     r4, 1024
    ctx->gpr[4] = ((u32)(s32)(1024) << 16);

label_7F302060:
    ctx->pc = 0x7F302060u;
    // 7F302060: lwz     r5, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302064:
    ctx->pc = 0x7F302064u;
    // 7F302064: addi    r0, r4, 128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(128);

label_7F302068:
    ctx->pc = 0x7F302068u;
    // 7F302068: and.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F30206C:
    ctx->pc = 0x7F30206Cu;
    // 7F30206C: bc    12, 2, 0x7F302074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302074;
        }
    }

label_7F302070:
    ctx->pc = 0x7F302070u;
    ctx->downcount -= 1;
    // 7F302070: bl      0x7F3B1F94
    {
            ctx->lr = 0x7F302074u;
            ctx->pc = 0x7F3B1F94u;
            return;
    }

label_7F302074:
    ctx->pc = 0x7F302074u;
    ctx->downcount -= 2;
    // 7F302074: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302078:
    ctx->pc = 0x7F302078u;
    // 7F302078: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F30207Cu;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F30207C:
    ctx->pc = 0x7F30207Cu;
    ctx->downcount -= 2;
    // 7F30207C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302080:
    ctx->pc = 0x7F302080u;
    // 7F302080: bl      0x7F3B0820
    {
            ctx->lr = 0x7F302084u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F302084:
    ctx->pc = 0x7F302084u;
    ctx->downcount -= 6;
    // 7F302084: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302088:
    ctx->pc = 0x7F302088u;
    // 7F302088: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30208C:
    ctx->pc = 0x7F30208Cu;
    // 7F30208C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302090:
    ctx->pc = 0x7F302090u;
    // 7F302090: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F302094:
    ctx->pc = 0x7F302094u;
    // 7F302094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302098:
    ctx->pc = 0x7F302098u;
    ctx->downcount -= 11;
    // 7F302098: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30209C:
    ctx->pc = 0x7F30209Cu;
    // 7F30209C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3020A0:
    ctx->pc = 0x7F3020A0u;
    // 7F3020A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3020A4:
    ctx->pc = 0x7F3020A4u;
    // 7F3020A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3020A8:
    ctx->pc = 0x7F3020A8u;
    // 7F3020A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3020AC:
    ctx->pc = 0x7F3020ACu;
    // 7F3020AC: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_7F3020B0:
    ctx->pc = 0x7F3020B0u;
    // 7F3020B0: lwz     r3, 396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(396);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3020B4:
    ctx->pc = 0x7F3020B4u;
    // 7F3020B4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3020B8:
    ctx->pc = 0x7F3020B8u;
    // 7F3020B8: stw     r0, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3020BC:
    ctx->pc = 0x7F3020BCu;
    // 7F3020BC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3020C0:
    ctx->pc = 0x7F3020C0u;
    // 7F3020C0: bl      0x7F2FFCBC
    {
            ctx->lr = 0x7F3020C4u;
            ctx->pc = 0x7F2FFCBCu;
            return;
    }

label_7F3020C4:
    ctx->pc = 0x7F3020C4u;
    ctx->downcount -= 3;
    // 7F3020C4: lwz     r0, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3020C8:
    ctx->pc = 0x7F3020C8u;
    // 7F3020C8: cmpwi   r0, 0
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

label_7F3020CC:
    ctx->pc = 0x7F3020CCu;
    // 7F3020CC: bc    12, 1, 0x7F3020E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3020E4;
        }
    }

label_7F3020D0:
    ctx->pc = 0x7F3020D0u;
    ctx->downcount -= 4;
    // 7F3020D0: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F3020D4:
    ctx->pc = 0x7F3020D4u;
    // 7F3020D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3020D8:
    ctx->pc = 0x7F3020D8u;
    // 7F3020D8: addi    r4, r4, 7468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7468);

label_7F3020DC:
    ctx->pc = 0x7F3020DCu;
    // 7F3020DC: bl      0x7F3C8A30
    {
            ctx->lr = 0x7F3020E0u;
            ctx->pc = 0x7F3C8A30u;
            return;
    }

label_7F3020E0:
    ctx->pc = 0x7F3020E0u;
    ctx->downcount -= 1;
    // 7F3020E0: b       0x7F3020EC
    {
            goto label_7F3020EC;
    }

label_7F3020E4:
    ctx->pc = 0x7F3020E4u;
    ctx->downcount -= 2;
    // 7F3020E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3020E8:
    ctx->pc = 0x7F3020E8u;
    // 7F3020E8: bl      0x7F301D2C
    {
            ctx->lr = 0x7F3020ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F301D2Cu;
                return;
            }
            goto label_7F301D2C;
    }

label_7F3020EC:
    ctx->pc = 0x7F3020ECu;
    ctx->downcount -= 6;
    // 7F3020EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3020F0:
    ctx->pc = 0x7F3020F0u;
    // 7F3020F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3020F4:
    ctx->pc = 0x7F3020F4u;
    // 7F3020F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3020F8:
    ctx->pc = 0x7F3020F8u;
    // 7F3020F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3020FC:
    ctx->pc = 0x7F3020FCu;
    // 7F3020FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302100:
    ctx->pc = 0x7F302100u;
    ctx->downcount -= 8;
    // 7F302100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302104:
    ctx->pc = 0x7F302104u;
    // 7F302104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302108:
    ctx->pc = 0x7F302108u;
    // 7F302108: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30210C:
    ctx->pc = 0x7F30210Cu;
    // 7F30210C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F302110:
    ctx->pc = 0x7F302110u;
    // 7F302110: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302114:
    ctx->pc = 0x7F302114u;
    // 7F302114: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F302118:
    ctx->pc = 0x7F302118u;
    // 7F302118: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F30211C:
    ctx->pc = 0x7F30211Cu;
    // 7F30211C: bl      0x7F3C8470
    {
            ctx->lr = 0x7F302120u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F302120:
    ctx->pc = 0x7F302120u;
    ctx->downcount -= 1;
    // 7F302120: bl      0x7F3C8480
    {
            ctx->lr = 0x7F302124u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F302124:
    ctx->pc = 0x7F302124u;
    ctx->downcount -= 4;
    // 7F302124: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F302128:
    ctx->pc = 0x7F302128u;
    // 7F302128: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30212C:
    ctx->pc = 0x7F30212Cu;
    // 7F30212C: addi    r4, r4, 290
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(290);

label_7F302130:
    ctx->pc = 0x7F302130u;
    // 7F302130: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F302134u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F302134:
    ctx->pc = 0x7F302134u;
    ctx->downcount -= 3;
    // 7F302134: cmplwi  r3, 0x0000
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

label_7F302138:
    ctx->pc = 0x7F302138u;
    // 7F302138: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30213C:
    ctx->pc = 0x7F30213Cu;
    // 7F30213C: bc    4, 2, 0x7F302148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F302148;
        }
    }

label_7F302140:
    ctx->pc = 0x7F302140u;
    ctx->downcount -= 2;
    // 7F302140: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F302144:
    ctx->pc = 0x7F302144u;
    // 7F302144: b       0x7F302164
    {
            goto label_7F302164;
    }

label_7F302148:
    ctx->pc = 0x7F302148u;
    ctx->downcount -= 2;
    // 7F302148: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30214C:
    ctx->pc = 0x7F30214Cu;
    // 7F30214C: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F302150u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F302150:
    ctx->pc = 0x7F302150u;
    ctx->downcount -= 5;
    // 7F302150: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302154:
    ctx->pc = 0x7F302154u;
    // 7F302154: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F302158:
    ctx->pc = 0x7F302158u;
    // 7F302158: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30215C:
    ctx->pc = 0x7F30215Cu;
    // 7F30215C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F302160:
    ctx->pc = 0x7F302160u;
    // 7F302160: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302164:
    ctx->pc = 0x7F302164u;
    ctx->downcount -= 6;
    // 7F302164: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302168:
    ctx->pc = 0x7F302168u;
    // 7F302168: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30216C:
    ctx->pc = 0x7F30216Cu;
    // 7F30216C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302170:
    ctx->pc = 0x7F302170u;
    // 7F302170: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F302174:
    ctx->pc = 0x7F302174u;
    // 7F302174: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302178:
    ctx->pc = 0x7F302178u;
    ctx->downcount -= 78;
    // 7F302178: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30217C:
    ctx->pc = 0x7F30217Cu;
    // 7F30217C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302180:
    ctx->pc = 0x7F302180u;
    // 7F302180: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302184:
    ctx->pc = 0x7F302184u;
    // 7F302184: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F302188:
    ctx->pc = 0x7F302188u;
    // 7F302188: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30218C:
    ctx->pc = 0x7F30218Cu;
    // 7F30218C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F302190:
    ctx->pc = 0x7F302190u;
    // 7F302190: lfs     f3, 32220(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302190u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F302194:
    ctx->pc = 0x7F302194u;
    // 7F302194: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302198:
    ctx->pc = 0x7F302198u;
    // 7F302198: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30219C:
    ctx->pc = 0x7F30219Cu;
    // 7F30219C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3021A0:
    ctx->pc = 0x7F3021A0u;
    // 7F3021A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3021A4:
    ctx->pc = 0x7F3021A4u;
    // 7F3021A4: addi    r7, r4, 32228
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(32228);

label_7F3021A8:
    ctx->pc = 0x7F3021A8u;
    // 7F3021A8: stfs     f3, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3021A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3021AC:
    ctx->pc = 0x7F3021ACu;
    // 7F3021AC: addi    r8, r3, 32224
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(32224);

label_7F3021B0:
    ctx->pc = 0x7F3021B0u;
    // 7F3021B0: lfs     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F3021B0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3021B4:
    ctx->pc = 0x7F3021B4u;
    // 7F3021B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3021B8:
    ctx->pc = 0x7F3021B8u;
    // 7F3021B8: lfs     f0, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3021B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3021BC:
    ctx->pc = 0x7F3021BCu;
    // 7F3021BC: addi    r6, r3, 32232
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(32232);

label_7F3021C0:
    ctx->pc = 0x7F3021C0u;
    // 7F3021C0: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F3021C0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3021C4:
    ctx->pc = 0x7F3021C4u;
    // 7F3021C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3021C8:
    ctx->pc = 0x7F3021C8u;
    // 7F3021C8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3021C8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F3021CC:
    ctx->pc = 0x7F3021CCu;
    // 7F3021CC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3021CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3021D0:
    ctx->pc = 0x7F3021D0u;
    // 7F3021D0: addi    r4, r3, 32236
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32236);

label_7F3021D4:
    ctx->pc = 0x7F3021D4u;
    // 7F3021D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3021D8:
    ctx->pc = 0x7F3021D8u;
    // 7F3021D8: addi    r8, r5, 12832
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F3021DC:
    ctx->pc = 0x7F3021DCu;
    // 7F3021DC: li      r7, 100
    ctx->gpr[7] = (u32)(s32)(100);

label_7F3021E0:
    ctx->pc = 0x7F3021E0u;
    // 7F3021E0: stfs     f0, 280(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3021E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3021E4:
    ctx->pc = 0x7F3021E4u;
    // 7F3021E4: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F3021E8:
    ctx->pc = 0x7F3021E8u;
    // 7F3021E8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3021E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3021EC:
    ctx->pc = 0x7F3021ECu;
    // 7F3021EC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3021F0:
    ctx->pc = 0x7F3021F0u;
    // 7F3021F0: stfs     f3, 272(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3021F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3021F4:
    ctx->pc = 0x7F3021F4u;
    // 7F3021F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3021F8:
    ctx->pc = 0x7F3021F8u;
    // 7F3021F8: addi    r5, r31, 176
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(176);

label_7F3021FC:
    ctx->pc = 0x7F3021FCu;
    // 7F3021FC: stfs     f2, 284(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3021FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F302200:
    ctx->pc = 0x7F302200u;
    // 7F302200: stfs     f1, 288(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302200u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302204:
    ctx->pc = 0x7F302204u;
    // 7F302204: stw     r7, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302208:
    ctx->pc = 0x7F302208u;
    // 7F302208: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30220C:
    ctx->pc = 0x7F30220Cu;
    // 7F30220C: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302210:
    ctx->pc = 0x7F302210u;
    // 7F302210: stw     r7, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302214:
    ctx->pc = 0x7F302214u;
    // 7F302214: stw     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302218:
    ctx->pc = 0x7F302218u;
    // 7F302218: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30221C:
    ctx->pc = 0x7F30221Cu;
    // 7F30221C: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302220:
    ctx->pc = 0x7F302220u;
    // 7F302220: stw     r7, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302224:
    ctx->pc = 0x7F302224u;
    // 7F302224: stw     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302228:
    ctx->pc = 0x7F302228u;
    // 7F302228: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30222C:
    ctx->pc = 0x7F30222Cu;
    // 7F30222C: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302230:
    ctx->pc = 0x7F302230u;
    // 7F302230: stw     r7, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302234:
    ctx->pc = 0x7F302234u;
    // 7F302234: stw     r3, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302238:
    ctx->pc = 0x7F302238u;
    // 7F302238: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30223C:
    ctx->pc = 0x7F30223Cu;
    // 7F30223C: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302240:
    ctx->pc = 0x7F302240u;
    // 7F302240: stw     r7, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302244:
    ctx->pc = 0x7F302244u;
    // 7F302244: stw     r3, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302248:
    ctx->pc = 0x7F302248u;
    // 7F302248: stw     r6, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30224C:
    ctx->pc = 0x7F30224Cu;
    // 7F30224C: stw     r6, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302250:
    ctx->pc = 0x7F302250u;
    // 7F302250: stw     r6, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302254:
    ctx->pc = 0x7F302254u;
    // 7F302254: stfs     f0, 296(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302254u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302258:
    ctx->pc = 0x7F302258u;
    // 7F302258: stw     r6, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30225C:
    ctx->pc = 0x7F30225Cu;
    // 7F30225C: stw     r6, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302260:
    ctx->pc = 0x7F302260u;
    // 7F302260: stw     r6, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302264:
    ctx->pc = 0x7F302264u;
    // 7F302264: stw     r6, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302268:
    ctx->pc = 0x7F302268u;
    // 7F302268: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30226C:
    loop_7F30226C(ctx);
    if (ctx->pc == 0x7F302280u) goto label_7F302280;
    return;
label_7F302270:
    ctx->pc = 0x7F302270u;
    // 7F302270: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F302274:
    ctx->pc = 0x7F302274u;
    // 7F302274: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302278:
    ctx->pc = 0x7F302278u;
    // 7F302278: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F30227C:
    // 7F30227C: bc    16, 0, 0x7F30226C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30226Cu;
                return;
            }
            goto label_7F30226C;
        }
    }

label_7F302280:
    ctx->pc = 0x7F302280u;
    ctx->downcount -= 22;
    // 7F302280: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F302284:
    ctx->pc = 0x7F302284u;
    // 7F302284: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F302288:
    ctx->pc = 0x7F302288u;
    // 7F302288: addi    r5, r3, 12808
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F30228C:
    ctx->pc = 0x7F30228Cu;
    // 7F30228C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302290:
    ctx->pc = 0x7F302290u;
    // 7F302290: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F302294:
    ctx->pc = 0x7F302294u;
    // 7F302294: addi    r4, r3, 32200
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32200);

label_7F302298:
    ctx->pc = 0x7F302298u;
    // 7F302298: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30229C:
    ctx->pc = 0x7F30229Cu;
    // 7F30229C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3022A0:
    ctx->pc = 0x7F3022A0u;
    // 7F3022A0: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022A4:
    ctx->pc = 0x7F3022A4u;
    // 7F3022A4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F3022A8:
    ctx->pc = 0x7F3022A8u;
    // 7F3022A8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3022A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3022AC:
    ctx->pc = 0x7F3022ACu;
    // 7F3022AC: stw     r7, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022B0:
    ctx->pc = 0x7F3022B0u;
    // 7F3022B0: stw     r7, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022B4:
    ctx->pc = 0x7F3022B4u;
    // 7F3022B4: stw     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022B8:
    ctx->pc = 0x7F3022B8u;
    // 7F3022B8: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3022BC:
    ctx->pc = 0x7F3022BCu;
    // 7F3022BC: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3022C0:
    ctx->pc = 0x7F3022C0u;
    // 7F3022C0: stw     r7, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022C4:
    ctx->pc = 0x7F3022C4u;
    // 7F3022C4: stw     r0, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3022C8:
    ctx->pc = 0x7F3022C8u;
    // 7F3022C8: stw     r7, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3022CC:
    ctx->pc = 0x7F3022CCu;
    // 7F3022CC: stfs     f0, 332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3022CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3022D0:
    ctx->pc = 0x7F3022D0u;
    // 7F3022D0: stfs     f0, 336(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3022D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3022D4:
    ctx->pc = 0x7F3022D4u;
    // 7F3022D4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3022D8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3022D8:
    ctx->pc = 0x7F3022D8u;
    ctx->downcount -= 2;
    // 7F3022D8: cmplwi  r3, 0x0000
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

label_7F3022DC:
    ctx->pc = 0x7F3022DCu;
    // 7F3022DC: bc    12, 2, 0x7F302348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302348;
        }
    }

label_7F3022E0:
    ctx->pc = 0x7F3022E0u;
    ctx->downcount -= 1;
    // 7F3022E0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3022E4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3022E4:
    ctx->pc = 0x7F3022E4u;
    ctx->downcount -= 43;
    // 7F3022E4: mulli   r0, r3, 28
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)28);

label_7F3022E8:
    ctx->pc = 0x7F3022E8u;
    // 7F3022E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3022EC:
    ctx->pc = 0x7F3022ECu;
    // 7F3022EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3022F0:
    ctx->pc = 0x7F3022F0u;
    // 7F3022F0: addi    r5, r4, 31720
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(31720);

label_7F3022F4:
    ctx->pc = 0x7F3022F4u;
    // 7F3022F4: lfs     f5, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3022F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3022F8:
    ctx->pc = 0x7F3022F8u;
    // 7F3022F8: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3022FC:
    ctx->pc = 0x7F3022FCu;
    // 7F3022FC: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3022FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302300:
    ctx->pc = 0x7F302300u;
    // 7F302300: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302300u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302304:
    ctx->pc = 0x7F302304u;
    // 7F302304: stfs     f0, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302304u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302308:
    ctx->pc = 0x7F302308u;
    // 7F302308: fneg    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302308u)) return;
    ctx->fpr[3] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F30230C:
    ctx->pc = 0x7F30230Cu;
    // 7F30230C: lfsx    f4, r5, r0
    if (!ppc_fp_available_inline(ctx, 0x7F30230Cu)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F302310:
    ctx->pc = 0x7F302310u;
    // 7F302310: lfs     f1, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302310u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302314:
    ctx->pc = 0x7F302314u;
    // 7F302314: lfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302314u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302318:
    ctx->pc = 0x7F302318u;
    // 7F302318: fdivs   f5, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302318u)) return;
    ppc_fdivs(ctx, 5, 5, 1);

label_7F30231C:
    ctx->pc = 0x7F30231Cu;
    // 7F30231C: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302320:
    ctx->pc = 0x7F302320u;
    // 7F302320: lfs     f1, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302320u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302324:
    ctx->pc = 0x7F302324u;
    // 7F302324: stfs     f5, 280(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302328:
    ctx->pc = 0x7F302328u;
    // 7F302328: fneg    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302328u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F30232C:
    ctx->pc = 0x7F30232Cu;
    // 7F30232C: lfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30232Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302330:
    ctx->pc = 0x7F302330u;
    // 7F302330: stfs     f4, 272(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302330u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F302334:
    ctx->pc = 0x7F302334u;
    // 7F302334: stfs     f3, 284(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302334u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F302338:
    ctx->pc = 0x7F302338u;
    // 7F302338: stfs     f2, 288(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302338u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F30233C:
    ctx->pc = 0x7F30233Cu;
    // 7F30233C: stw     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302340:
    ctx->pc = 0x7F302340u;
    // 7F302340: stfs     f1, 332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302340u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302344:
    ctx->pc = 0x7F302344u;
    // 7F302344: stfs     f0, 336(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302344u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302348:
    ctx->pc = 0x7F302348u;
    ctx->downcount -= 2;
    // 7F302348: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F30234C:
    ctx->pc = 0x7F30234Cu;
    // 7F30234C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302350u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302350:
    ctx->pc = 0x7F302350u;
    ctx->downcount -= 2;
    // 7F302350: cmplwi  r3, 0x0000
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

label_7F302354:
    ctx->pc = 0x7F302354u;
    // 7F302354: bc    12, 2, 0x7F302370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302370;
        }
    }

label_7F302358:
    ctx->pc = 0x7F302358u;
    ctx->downcount -= 1;
    // 7F302358: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F30235Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F30235C:
    ctx->pc = 0x7F30235Cu;
    ctx->downcount -= 2;
    // 7F30235C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F302360:
    ctx->pc = 0x7F302360u;
    // 7F302360: bl      0x7F3C6780
    {
            ctx->lr = 0x7F302364u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F302364:
    ctx->pc = 0x7F302364u;
    ctx->downcount -= 3;
    // 7F302364: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F302368:
    ctx->pc = 0x7F302368u;
    // 7F302368: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F30236C:
    ctx->pc = 0x7F30236Cu;
    // 7F30236C: bl      0x7F3028F0
    {
            ctx->lr = 0x7F302370u;
            goto label_7F3028F0;
    }

label_7F302370:
    ctx->pc = 0x7F302370u;
    ctx->downcount -= 5;
    // 7F302370: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302374:
    ctx->pc = 0x7F302374u;
    // 7F302374: li      r3, 121
    ctx->gpr[3] = (u32)(s32)(121);

label_7F302378:
    ctx->pc = 0x7F302378u;
    // 7F302378: lfs     f0, 32224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302378u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30237C:
    ctx->pc = 0x7F30237Cu;
    // 7F30237C: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30237Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302380:
    ctx->pc = 0x7F302380u;
    // 7F302380: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302384u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302384:
    ctx->pc = 0x7F302384u;
    ctx->downcount -= 2;
    // 7F302384: cmplwi  r3, 0x0000
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

label_7F302388:
    ctx->pc = 0x7F302388u;
    // 7F302388: bc    12, 2, 0x7F3023B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3023B4;
        }
    }

label_7F30238C:
    ctx->pc = 0x7F30238Cu;
    ctx->downcount -= 1;
    // 7F30238C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302390u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302390:
    ctx->pc = 0x7F302390u;
    ctx->downcount -= 1;
    // 7F302390: bl      0x7F022AEC
    {
            ctx->lr = 0x7F302394u;
            ctx->pc = 0x7F022AECu;
            return;
    }

label_7F302394:
    ctx->pc = 0x7F302394u;
    ctx->downcount -= 2;
    // 7F302394: cmplwi  r3, 0x0000
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

label_7F302398:
    ctx->pc = 0x7F302398u;
    // 7F302398: bc    12, 2, 0x7F3023B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3023B4;
        }
    }

label_7F30239C:
    ctx->pc = 0x7F30239Cu;
    ctx->downcount -= 4;
    // 7F30239C: lwz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3023A0:
    ctx->pc = 0x7F3023A0u;
    // 7F3023A0: cmplwi  r0, 0x0000
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

label_7F3023A4:
    ctx->pc = 0x7F3023A4u;
    // 7F3023A4: stw     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3023A8:
    ctx->pc = 0x7F3023A8u;
    // 7F3023A8: bc    4, 2, 0x7F3023B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3023B4;
        }
    }

label_7F3023AC:
    ctx->pc = 0x7F3023ACu;
    ctx->downcount -= 2;
    // 7F3023AC: addi    r0, r3, 400
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(400);

label_7F3023B0:
    ctx->pc = 0x7F3023B0u;
    // 7F3023B0: stw     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3023B4:
    ctx->pc = 0x7F3023B4u;
    ctx->downcount -= 2;
    // 7F3023B4: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F3023B8:
    ctx->pc = 0x7F3023B8u;
    // 7F3023B8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3023BCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3023BC:
    ctx->pc = 0x7F3023BCu;
    ctx->downcount -= 2;
    // 7F3023BC: cmplwi  r3, 0x0000
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

label_7F3023C0:
    ctx->pc = 0x7F3023C0u;
    // 7F3023C0: bc    12, 2, 0x7F3023D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3023D0;
        }
    }

label_7F3023C4:
    ctx->pc = 0x7F3023C4u;
    ctx->downcount -= 3;
    // 7F3023C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3023C8:
    ctx->pc = 0x7F3023C8u;
    // 7F3023C8: stb     r0, 392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(392);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3023CC:
    ctx->pc = 0x7F3023CCu;
    // 7F3023CC: b       0x7F3023D8
    {
            goto label_7F3023D8;
    }

label_7F3023D0:
    ctx->pc = 0x7F3023D0u;
    ctx->downcount -= 2;
    // 7F3023D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3023D4:
    ctx->pc = 0x7F3023D4u;
    // 7F3023D4: stb     r0, 392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(392);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3023D8:
    ctx->pc = 0x7F3023D8u;
    ctx->downcount -= 2;
    // 7F3023D8: li      r3, 122
    ctx->gpr[3] = (u32)(s32)(122);

label_7F3023DC:
    ctx->pc = 0x7F3023DCu;
    // 7F3023DC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3023E0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3023E0:
    ctx->pc = 0x7F3023E0u;
    ctx->downcount -= 2;
    // 7F3023E0: cmplwi  r3, 0x0000
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

label_7F3023E4:
    ctx->pc = 0x7F3023E4u;
    // 7F3023E4: bc    12, 2, 0x7F3023F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3023F0;
        }
    }

label_7F3023E8:
    ctx->pc = 0x7F3023E8u;
    ctx->downcount -= 1;
    // 7F3023E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3023ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3023EC:
    ctx->pc = 0x7F3023ECu;
    ctx->downcount -= 1;
    // 7F3023EC: stw     r3, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3023F0:
    ctx->pc = 0x7F3023F0u;
    ctx->downcount -= 3;
    // 7F3023F0: lwz     r4, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3023F4:
    ctx->pc = 0x7F3023F4u;
    // 7F3023F4: cmplwi  r4, 0x0000
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

label_7F3023F8:
    ctx->pc = 0x7F3023F8u;
    // 7F3023F8: bc    12, 2, 0x7F302450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302450;
        }
    }

label_7F3023FC:
    ctx->pc = 0x7F3023FCu;
    ctx->downcount -= 3;
    // 7F3023FC: lwz     r0, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302400:
    ctx->pc = 0x7F302400u;
    // 7F302400: cmpwi   r0, -1
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

label_7F302404:
    ctx->pc = 0x7F302404u;
    // 7F302404: bc    12, 2, 0x7F302470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302470;
        }
    }

label_7F302408:
    ctx->pc = 0x7F302408u;
    ctx->downcount -= 11;
    // 7F302408: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F30240C:
    ctx->pc = 0x7F30240Cu;
    // 7F30240C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302410:
    ctx->pc = 0x7F302410u;
    // 7F302410: addi    r0, r3, 444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(444);

label_7F302414:
    ctx->pc = 0x7F302414u;
    // 7F302414: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F302418:
    ctx->pc = 0x7F302418u;
    // 7F302418: stw     r0, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30241C:
    ctx->pc = 0x7F30241Cu;
    // 7F30241C: lwz     r3, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302420:
    ctx->pc = 0x7F302420u;
    // 7F302420: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302424:
    ctx->pc = 0x7F302424u;
    // 7F302424: cmplwi  r4, 0x0000
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

label_7F302428:
    ctx->pc = 0x7F302428u;
    // 7F302428: bc    12, 2, 0x7F30243C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30243C;
        }
    }

label_7F30242C:
    ctx->pc = 0x7F30242Cu;
    ctx->downcount -= 3;
    // 7F30242C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302430:
    ctx->pc = 0x7F302430u;
    // 7F302430: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302434:
    ctx->pc = 0x7F302434u;
    // 7F302434: bl      0x7F3BC518
    {
            ctx->lr = 0x7F302438u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F302438:
    ctx->pc = 0x7F302438u;
    ctx->downcount -= 1;
    // 7F302438: b       0x7F302470
    {
            goto label_7F302470;
    }

label_7F30243C:
    ctx->pc = 0x7F30243Cu;
    ctx->downcount -= 4;
    // 7F30243C: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302440:
    ctx->pc = 0x7F302440u;
    // 7F302440: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302444:
    ctx->pc = 0x7F302444u;
    // 7F302444: lwz     r4, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302448:
    ctx->pc = 0x7F302448u;
    // 7F302448: bl      0x7F3BC518
    {
            ctx->lr = 0x7F30244Cu;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F30244C:
    ctx->pc = 0x7F30244Cu;
    ctx->downcount -= 1;
    // 7F30244C: b       0x7F302470
    {
            goto label_7F302470;
    }

label_7F302450:
    ctx->pc = 0x7F302450u;
    ctx->downcount -= 5;
    // 7F302450: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302454:
    ctx->pc = 0x7F302454u;
    // 7F302454: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F302458:
    ctx->pc = 0x7F302458u;
    // 7F302458: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_7F30245C:
    ctx->pc = 0x7F30245Cu;
    // 7F30245C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F302460:
    ctx->pc = 0x7F302460u;
    // 7F302460: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F302464u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F302464:
    ctx->pc = 0x7F302464u;
    ctx->downcount -= 3;
    // 7F302464: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302468:
    ctx->pc = 0x7F302468u;
    // 7F302468: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_7F30246C:
    ctx->pc = 0x7F30246Cu;
    // 7F30246C: bl      0x7F3BC518
    {
            ctx->lr = 0x7F302470u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F302470:
    ctx->pc = 0x7F302470u;
    ctx->downcount -= 2;
    // 7F302470: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F302474:
    ctx->pc = 0x7F302474u;
    // 7F302474: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302478u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302478:
    ctx->pc = 0x7F302478u;
    ctx->downcount -= 2;
    // 7F302478: cmplwi  r3, 0x0000
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

label_7F30247C:
    ctx->pc = 0x7F30247Cu;
    // 7F30247C: bc    12, 2, 0x7F302494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302494;
        }
    }

label_7F302480:
    ctx->pc = 0x7F302480u;
    ctx->downcount -= 1;
    // 7F302480: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302484u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302484:
    ctx->pc = 0x7F302484u;
    ctx->downcount -= 2;
    // 7F302484: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F302488:
    ctx->pc = 0x7F302488u;
    // 7F302488: bl      0x7F3C8470
    {
            ctx->lr = 0x7F30248Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F30248C:
    ctx->pc = 0x7F30248Cu;
    ctx->downcount -= 1;
    // 7F30248C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F302490u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F302490:
    ctx->pc = 0x7F302490u;
    ctx->downcount -= 1;
    // 7F302490: stw     r3, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302494:
    ctx->pc = 0x7F302494u;
    ctx->downcount -= 2;
    // 7F302494: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F302498:
    ctx->pc = 0x7F302498u;
    // 7F302498: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30249Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30249C:
    ctx->pc = 0x7F30249Cu;
    ctx->downcount -= 2;
    // 7F30249C: cmplwi  r3, 0x0000
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

label_7F3024A0:
    ctx->pc = 0x7F3024A0u;
    // 7F3024A0: bc    12, 2, 0x7F3024EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3024EC;
        }
    }

label_7F3024A4:
    ctx->pc = 0x7F3024A4u;
    ctx->downcount -= 1;
    // 7F3024A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3024A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3024A8:
    ctx->pc = 0x7F3024A8u;
    ctx->downcount -= 33;
    // 7F3024A8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3024AC:
    ctx->pc = 0x7F3024ACu;
    // 7F3024AC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3024B0:
    ctx->pc = 0x7F3024B0u;
    // 7F3024B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3024B4:
    ctx->pc = 0x7F3024B4u;
    // 7F3024B4: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3024B8:
    ctx->pc = 0x7F3024B8u;
    // 7F3024B8: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F3024BC:
    ctx->pc = 0x7F3024BCu;
    // 7F3024BC: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3024C0:
    ctx->pc = 0x7F3024C0u;
    // 7F3024C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3024C4:
    ctx->pc = 0x7F3024C4u;
    // 7F3024C4: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3024C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3024C8:
    ctx->pc = 0x7F3024C8u;
    // 7F3024C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3024CC:
    ctx->pc = 0x7F3024CCu;
    // 7F3024CC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3024CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3024D0:
    ctx->pc = 0x7F3024D0u;
    // 7F3024D0: lfs     f2, 32220(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3024D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3024D4:
    ctx->pc = 0x7F3024D4u;
    // 7F3024D4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3024D4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F3024D8:
    ctx->pc = 0x7F3024D8u;
    // 7F3024D8: lfs     f0, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3024D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3024DC:
    ctx->pc = 0x7F3024DCu;
    // 7F3024DC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3024DCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F3024E0:
    ctx->pc = 0x7F3024E0u;
    // 7F3024E0: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3024E0u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F3024E4:
    ctx->pc = 0x7F3024E4u;
    // 7F3024E4: stfs     f1, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3024E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3024E8:
    ctx->pc = 0x7F3024E8u;
    // 7F3024E8: stfs     f0, 280(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3024E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3024EC:
    ctx->pc = 0x7F3024ECu;
    ctx->downcount -= 2;
    // 7F3024EC: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F3024F0:
    ctx->pc = 0x7F3024F0u;
    // 7F3024F0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3024F4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3024F4:
    ctx->pc = 0x7F3024F4u;
    ctx->downcount -= 2;
    // 7F3024F4: cmplwi  r3, 0x0000
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

label_7F3024F8:
    ctx->pc = 0x7F3024F8u;
    // 7F3024F8: bc    12, 2, 0x7F302530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302530;
        }
    }

label_7F3024FC:
    ctx->pc = 0x7F3024FCu;
    ctx->downcount -= 1;
    // 7F3024FC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302500u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302500:
    ctx->pc = 0x7F302500u;
    ctx->downcount -= 28;
    // 7F302500: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F302504:
    ctx->pc = 0x7F302504u;
    // 7F302504: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F302508:
    ctx->pc = 0x7F302508u;
    // 7F302508: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30250C:
    ctx->pc = 0x7F30250Cu;
    // 7F30250C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302510:
    ctx->pc = 0x7F302510u;
    // 7F302510: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302514:
    ctx->pc = 0x7F302514u;
    // 7F302514: lfd     f2, 32208(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302514u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32208);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302518:
    ctx->pc = 0x7F302518u;
    // 7F302518: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30251C:
    ctx->pc = 0x7F30251Cu;
    // 7F30251C: lfs     f0, 32240(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30251Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302520:
    ctx->pc = 0x7F302520u;
    // 7F302520: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302524:
    ctx->pc = 0x7F302524u;
    // 7F302524: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F302524u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F302528:
    ctx->pc = 0x7F302528u;
    // 7F302528: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302528u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F30252C:
    ctx->pc = 0x7F30252Cu;
    // 7F30252C: stfs     f0, 280(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30252Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302530:
    ctx->pc = 0x7F302530u;
    ctx->downcount -= 2;
    // 7F302530: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F302534:
    ctx->pc = 0x7F302534u;
    // 7F302534: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302538u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302538:
    ctx->pc = 0x7F302538u;
    ctx->downcount -= 2;
    // 7F302538: cmplwi  r3, 0x0000
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

label_7F30253C:
    ctx->pc = 0x7F30253Cu;
    // 7F30253C: bc    12, 2, 0x7F302578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302578;
        }
    }

label_7F302540:
    ctx->pc = 0x7F302540u;
    ctx->downcount -= 1;
    // 7F302540: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302544u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302544:
    ctx->pc = 0x7F302544u;
    ctx->downcount -= 13;
    // 7F302544: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F302548:
    ctx->pc = 0x7F302548u;
    // 7F302548: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F30254C:
    ctx->pc = 0x7F30254Cu;
    // 7F30254C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302550:
    ctx->pc = 0x7F302550u;
    // 7F302550: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302554:
    ctx->pc = 0x7F302554u;
    // 7F302554: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F302558:
    ctx->pc = 0x7F302558u;
    // 7F302558: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30255C:
    ctx->pc = 0x7F30255Cu;
    // 7F30255C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302560:
    ctx->pc = 0x7F302560u;
    // 7F302560: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302560u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302564:
    ctx->pc = 0x7F302564u;
    // 7F302564: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302568:
    ctx->pc = 0x7F302568u;
    // 7F302568: lfs     f2, 32244(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302568u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F30256C:
    ctx->pc = 0x7F30256Cu;
    // 7F30256C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30256Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F302570:
    ctx->pc = 0x7F302570u;
    // 7F302570: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302570u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F302574:
    ctx->pc = 0x7F302574u;
    // 7F302574: stfs     f0, 272(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302574u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302578:
    ctx->pc = 0x7F302578u;
    ctx->downcount -= 2;
    // 7F302578: li      r3, 107
    ctx->gpr[3] = (u32)(s32)(107);

label_7F30257C:
    ctx->pc = 0x7F30257Cu;
    // 7F30257C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302580u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302580:
    ctx->pc = 0x7F302580u;
    ctx->downcount -= 2;
    // 7F302580: cmplwi  r3, 0x0000
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

label_7F302584:
    ctx->pc = 0x7F302584u;
    // 7F302584: bc    12, 2, 0x7F3025C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3025C4;
        }
    }

label_7F302588:
    ctx->pc = 0x7F302588u;
    ctx->downcount -= 1;
    // 7F302588: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30258Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30258C:
    ctx->pc = 0x7F30258Cu;
    ctx->downcount -= 14;
    // 7F30258C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F302590:
    ctx->pc = 0x7F302590u;
    // 7F302590: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F302594:
    ctx->pc = 0x7F302594u;
    // 7F302594: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302598:
    ctx->pc = 0x7F302598u;
    // 7F302598: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30259C:
    ctx->pc = 0x7F30259Cu;
    // 7F30259C: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F3025A0:
    ctx->pc = 0x7F3025A0u;
    // 7F3025A0: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3025A4:
    ctx->pc = 0x7F3025A4u;
    // 7F3025A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3025A8:
    ctx->pc = 0x7F3025A8u;
    // 7F3025A8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3025A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3025AC:
    ctx->pc = 0x7F3025ACu;
    // 7F3025AC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3025ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3025B0:
    ctx->pc = 0x7F3025B0u;
    // 7F3025B0: lfs     f2, 32244(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3025B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3025B4:
    ctx->pc = 0x7F3025B4u;
    // 7F3025B4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3025B4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3025B8:
    ctx->pc = 0x7F3025B8u;
    // 7F3025B8: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3025B8u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F3025BC:
    ctx->pc = 0x7F3025BCu;
    // 7F3025BC: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3025BCu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3025C0:
    ctx->pc = 0x7F3025C0u;
    // 7F3025C0: stfs     f0, 284(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3025C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3025C4:
    ctx->pc = 0x7F3025C4u;
    ctx->downcount -= 2;
    // 7F3025C4: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F3025C8:
    ctx->pc = 0x7F3025C8u;
    // 7F3025C8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3025CCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3025CC:
    ctx->pc = 0x7F3025CCu;
    ctx->downcount -= 2;
    // 7F3025CC: cmplwi  r3, 0x0000
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

label_7F3025D0:
    ctx->pc = 0x7F3025D0u;
    // 7F3025D0: bc    12, 2, 0x7F302614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302614;
        }
    }

label_7F3025D4:
    ctx->pc = 0x7F3025D4u;
    ctx->downcount -= 1;
    // 7F3025D4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3025D8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3025D8:
    ctx->pc = 0x7F3025D8u;
    ctx->downcount -= 15;
    // 7F3025D8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3025DC:
    ctx->pc = 0x7F3025DCu;
    // 7F3025DC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3025E0:
    ctx->pc = 0x7F3025E0u;
    // 7F3025E0: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3025E4:
    ctx->pc = 0x7F3025E4u;
    // 7F3025E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3025E8:
    ctx->pc = 0x7F3025E8u;
    // 7F3025E8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F3025EC:
    ctx->pc = 0x7F3025ECu;
    // 7F3025EC: lfd     f1, 32208(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3025ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32208);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3025F0:
    ctx->pc = 0x7F3025F0u;
    // 7F3025F0: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3025F4:
    ctx->pc = 0x7F3025F4u;
    // 7F3025F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3025F8:
    ctx->pc = 0x7F3025F8u;
    // 7F3025F8: lfs     f2, 32220(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3025F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3025FC:
    ctx->pc = 0x7F3025FCu;
    // 7F3025FC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3025FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302600:
    ctx->pc = 0x7F302600u;
    // 7F302600: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302600u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F302604:
    ctx->pc = 0x7F302604u;
    // 7F302604: lfs     f0, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302604u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302608:
    ctx->pc = 0x7F302608u;
    // 7F302608: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302608u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F30260C:
    ctx->pc = 0x7F30260Cu;
    // 7F30260C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30260Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F302610:
    ctx->pc = 0x7F302610u;
    // 7F302610: stfs     f0, 288(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302610u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302614:
    ctx->pc = 0x7F302614u;
    ctx->downcount -= 2;
    // 7F302614: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F302618:
    ctx->pc = 0x7F302618u;
    // 7F302618: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30261Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30261C:
    ctx->pc = 0x7F30261Cu;
    ctx->downcount -= 2;
    // 7F30261C: cmplwi  r3, 0x0000
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

label_7F302620:
    ctx->pc = 0x7F302620u;
    // 7F302620: bc    12, 2, 0x7F30262C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30262C;
        }
    }

label_7F302624:
    ctx->pc = 0x7F302624u;
    ctx->downcount -= 1;
    // 7F302624: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302628u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302628:
    ctx->pc = 0x7F302628u;
    ctx->downcount -= 1;
    // 7F302628: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30262C:
    ctx->pc = 0x7F30262Cu;
    ctx->downcount -= 2;
    // 7F30262C: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F302630:
    ctx->pc = 0x7F302630u;
    // 7F302630: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302634u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302634:
    ctx->pc = 0x7F302634u;
    ctx->downcount -= 2;
    // 7F302634: cmplwi  r3, 0x0000
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

label_7F302638:
    ctx->pc = 0x7F302638u;
    // 7F302638: bc    12, 2, 0x7F302674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302674;
        }
    }

label_7F30263C:
    ctx->pc = 0x7F30263Cu;
    ctx->downcount -= 1;
    // 7F30263C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302640u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302640:
    ctx->pc = 0x7F302640u;
    ctx->downcount -= 13;
    // 7F302640: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F302644:
    ctx->pc = 0x7F302644u;
    // 7F302644: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F302648:
    ctx->pc = 0x7F302648u;
    // 7F302648: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F30264C:
    ctx->pc = 0x7F30264Cu;
    // 7F30264C: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302650:
    ctx->pc = 0x7F302650u;
    // 7F302650: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F302654:
    ctx->pc = 0x7F302654u;
    // 7F302654: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302658:
    ctx->pc = 0x7F302658u;
    // 7F302658: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F30265C:
    ctx->pc = 0x7F30265Cu;
    // 7F30265C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30265Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302660:
    ctx->pc = 0x7F302660u;
    // 7F302660: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302664:
    ctx->pc = 0x7F302664u;
    // 7F302664: lfs     f2, 32248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302664u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F302668:
    ctx->pc = 0x7F302668u;
    // 7F302668: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302668u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F30266C:
    ctx->pc = 0x7F30266Cu;
    // 7F30266C: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30266Cu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F302670:
    ctx->pc = 0x7F302670u;
    // 7F302670: stfs     f0, 296(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302670u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302674:
    ctx->pc = 0x7F302674u;
    ctx->downcount -= 2;
    // 7F302674: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F302678:
    ctx->pc = 0x7F302678u;
    // 7F302678: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30267Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30267C:
    ctx->pc = 0x7F30267Cu;
    ctx->downcount -= 2;
    // 7F30267C: cmplwi  r3, 0x0000
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

label_7F302680:
    ctx->pc = 0x7F302680u;
    // 7F302680: bc    12, 2, 0x7F3026BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3026BC;
        }
    }

label_7F302684:
    ctx->pc = 0x7F302684u;
    ctx->downcount -= 1;
    // 7F302684: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302688u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302688:
    ctx->pc = 0x7F302688u;
    ctx->downcount -= 13;
    // 7F302688: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F30268C:
    ctx->pc = 0x7F30268Cu;
    // 7F30268C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F302690:
    ctx->pc = 0x7F302690u;
    // 7F302690: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F302694:
    ctx->pc = 0x7F302694u;
    // 7F302694: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302698:
    ctx->pc = 0x7F302698u;
    // 7F302698: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F30269C:
    ctx->pc = 0x7F30269Cu;
    // 7F30269C: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3026A0:
    ctx->pc = 0x7F3026A0u;
    // 7F3026A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3026A4:
    ctx->pc = 0x7F3026A4u;
    // 7F3026A4: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3026A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3026A8:
    ctx->pc = 0x7F3026A8u;
    // 7F3026A8: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3026A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3026AC:
    ctx->pc = 0x7F3026ACu;
    // 7F3026AC: lfs     f2, 32248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3026ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3026B0:
    ctx->pc = 0x7F3026B0u;
    // 7F3026B0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3026B0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3026B4:
    ctx->pc = 0x7F3026B4u;
    // 7F3026B4: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3026B4u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F3026B8:
    ctx->pc = 0x7F3026B8u;
    // 7F3026B8: stfs     f0, 332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3026B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3026BC:
    ctx->pc = 0x7F3026BCu;
    ctx->downcount -= 2;
    // 7F3026BC: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_7F3026C0:
    ctx->pc = 0x7F3026C0u;
    // 7F3026C0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3026C4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3026C4:
    ctx->pc = 0x7F3026C4u;
    ctx->downcount -= 2;
    // 7F3026C4: cmplwi  r3, 0x0000
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

label_7F3026C8:
    ctx->pc = 0x7F3026C8u;
    // 7F3026C8: bc    12, 2, 0x7F302704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302704;
        }
    }

label_7F3026CC:
    ctx->pc = 0x7F3026CCu;
    ctx->downcount -= 1;
    // 7F3026CC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3026D0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3026D0:
    ctx->pc = 0x7F3026D0u;
    ctx->downcount -= 13;
    // 7F3026D0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3026D4:
    ctx->pc = 0x7F3026D4u;
    // 7F3026D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3026D8:
    ctx->pc = 0x7F3026D8u;
    // 7F3026D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3026DC:
    ctx->pc = 0x7F3026DCu;
    // 7F3026DC: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3026E0:
    ctx->pc = 0x7F3026E0u;
    // 7F3026E0: addi    r3, r4, 32208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32208);

label_7F3026E4:
    ctx->pc = 0x7F3026E4u;
    // 7F3026E4: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3026E8:
    ctx->pc = 0x7F3026E8u;
    // 7F3026E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3026EC:
    ctx->pc = 0x7F3026ECu;
    // 7F3026EC: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3026ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3026F0:
    ctx->pc = 0x7F3026F0u;
    // 7F3026F0: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3026F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3026F4:
    ctx->pc = 0x7F3026F4u;
    // 7F3026F4: lfs     f2, 32248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3026F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3026F8:
    ctx->pc = 0x7F3026F8u;
    // 7F3026F8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3026F8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3026FC:
    ctx->pc = 0x7F3026FCu;
    // 7F3026FC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3026FCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F302700:
    ctx->pc = 0x7F302700u;
    // 7F302700: stfs     f0, 336(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302700u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302704:
    ctx->pc = 0x7F302704u;
    ctx->downcount -= 2;
    // 7F302704: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F302708:
    ctx->pc = 0x7F302708u;
    // 7F302708: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30270Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30270C:
    ctx->pc = 0x7F30270Cu;
    ctx->downcount -= 2;
    // 7F30270C: cmplwi  r3, 0x0000
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

label_7F302710:
    ctx->pc = 0x7F302710u;
    // 7F302710: bc    12, 2, 0x7F302724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302724;
        }
    }

label_7F302714:
    ctx->pc = 0x7F302714u;
    ctx->downcount -= 1;
    // 7F302714: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302718u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302718:
    ctx->pc = 0x7F302718u;
    ctx->downcount -= 3;
    // 7F302718: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F30271C:
    ctx->pc = 0x7F30271Cu;
    // 7F30271C: subfe   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F302720:
    ctx->pc = 0x7F302720u;
    // 7F302720: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302724:
    ctx->pc = 0x7F302724u;
    ctx->downcount -= 2;
    // 7F302724: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F302728:
    ctx->pc = 0x7F302728u;
    // 7F302728: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30272Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30272C:
    ctx->pc = 0x7F30272Cu;
    ctx->downcount -= 2;
    // 7F30272C: cmplwi  r3, 0x0000
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

label_7F302730:
    ctx->pc = 0x7F302730u;
    // 7F302730: bc    12, 2, 0x7F30273C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30273C;
        }
    }

label_7F302734:
    ctx->pc = 0x7F302734u;
    ctx->downcount -= 2;
    // 7F302734: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F302738:
    ctx->pc = 0x7F302738u;
    // 7F302738: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30273C:
    ctx->pc = 0x7F30273Cu;
    ctx->downcount -= 2;
    // 7F30273C: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F302740:
    ctx->pc = 0x7F302740u;
    // 7F302740: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302744u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302744:
    ctx->pc = 0x7F302744u;
    ctx->downcount -= 2;
    // 7F302744: cmplwi  r3, 0x0000
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

label_7F302748:
    ctx->pc = 0x7F302748u;
    // 7F302748: bc    12, 2, 0x7F302754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302754;
        }
    }

label_7F30274C:
    ctx->pc = 0x7F30274Cu;
    ctx->downcount -= 1;
    // 7F30274C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302750u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302750:
    ctx->pc = 0x7F302750u;
    ctx->downcount -= 1;
    // 7F302750: stw     r3, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302754:
    ctx->pc = 0x7F302754u;
    ctx->downcount -= 2;
    // 7F302754: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F302758:
    ctx->pc = 0x7F302758u;
    // 7F302758: bl      0x7F3C664C
    {
            ctx->lr = 0x7F30275Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F30275C:
    ctx->pc = 0x7F30275Cu;
    ctx->downcount -= 2;
    // 7F30275C: cmplwi  r3, 0x0000
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

label_7F302760:
    ctx->pc = 0x7F302760u;
    // 7F302760: bc    12, 2, 0x7F302788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302788;
        }
    }

label_7F302764:
    ctx->pc = 0x7F302764u;
    ctx->downcount -= 1;
    // 7F302764: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F302768u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F302768:
    ctx->pc = 0x7F302768u;
    ctx->downcount -= 2;
    // 7F302768: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F30276C:
    ctx->pc = 0x7F30276Cu;
    // 7F30276C: bl      0x7F3C6780
    {
            ctx->lr = 0x7F302770u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F302770:
    ctx->pc = 0x7F302770u;
    ctx->downcount -= 6;
    // 7F302770: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302774:
    ctx->pc = 0x7F302774u;
    // 7F302774: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302778:
    ctx->pc = 0x7F302778u;
    // 7F302778: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30277C:
    ctx->pc = 0x7F30277Cu;
    // 7F30277C: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F302780:
    ctx->pc = 0x7F302780u;
    // 7F302780: sth     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F302784:
    ctx->pc = 0x7F302784u;
    // 7F302784: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F302788:
    ctx->pc = 0x7F302788u;
    ctx->downcount -= 2;
    // 7F302788: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F30278C:
    ctx->pc = 0x7F30278Cu;
    // 7F30278C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F302790u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F302790:
    ctx->pc = 0x7F302790u;
    ctx->downcount -= 2;
    // 7F302790: cmplwi  r3, 0x0000
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

label_7F302794:
    ctx->pc = 0x7F302794u;
    // 7F302794: bc    12, 2, 0x7F3028A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3028A0;
        }
    }

label_7F302798:
    ctx->pc = 0x7F302798u;
    ctx->downcount -= 1;
    // 7F302798: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F30279Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F30279C:
    ctx->pc = 0x7F30279Cu;
    ctx->downcount -= 2;
    // 7F30279C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3027A0:
    ctx->pc = 0x7F3027A0u;
    // 7F3027A0: bl      0x7F3C6780
    {
            ctx->lr = 0x7F3027A4u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F3027A4:
    ctx->pc = 0x7F3027A4u;
    ctx->downcount -= 33;
    // 7F3027A4: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3027A8:
    ctx->pc = 0x7F3027A8u;
    // 7F3027A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3027AC:
    ctx->pc = 0x7F3027ACu;
    // 7F3027AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3027B0:
    ctx->pc = 0x7F3027B0u;
    // 7F3027B0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F3027B4:
    ctx->pc = 0x7F3027B4u;
    // 7F3027B4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3027B8:
    ctx->pc = 0x7F3027B8u;
    // 7F3027B8: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3027BC:
    ctx->pc = 0x7F3027BCu;
    // 7F3027BC: lfd     f1, 32208(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3027BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32208);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3027C0:
    ctx->pc = 0x7F3027C0u;
    // 7F3027C0: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3027C4:
    ctx->pc = 0x7F3027C4u;
    // 7F3027C4: lfd     f2, 32256(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3027C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32256);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3027C8:
    ctx->pc = 0x7F3027C8u;
    // 7F3027C8: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3027C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3027CC:
    ctx->pc = 0x7F3027CCu;
    // 7F3027CC: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3027D0:
    ctx->pc = 0x7F3027D0u;
    // 7F3027D0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3027D0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_7F3027D4:
    ctx->pc = 0x7F3027D4u;
    // 7F3027D4: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3027D8:
    ctx->pc = 0x7F3027D8u;
    // 7F3027D8: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3027D8u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_7F3027DC:
    ctx->pc = 0x7F3027DCu;
    // 7F3027DC: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3027DCu)) return;
    ppc_frsp(ctx, 0, 0);

label_7F3027E0:
    ctx->pc = 0x7F3027E0u;
    // 7F3027E0: stfs     f0, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3027E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3027E4:
    ctx->pc = 0x7F3027E4u;
    // 7F3027E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3027E8:
    ctx->pc = 0x7F3027E8u;
    // 7F3027E8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3027EC:
    ctx->pc = 0x7F3027ECu;
    // 7F3027EC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3027F0:
    ctx->pc = 0x7F3027F0u;
    // 7F3027F0: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3027F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3027F4:
    ctx->pc = 0x7F3027F4u;
    // 7F3027F4: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3027F4u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_7F3027F8:
    ctx->pc = 0x7F3027F8u;
    // 7F3027F8: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3027F8u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_7F3027FC:
    ctx->pc = 0x7F3027FCu;
    // 7F3027FC: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3027FCu)) return;
    ppc_frsp(ctx, 0, 0);

label_7F302800:
    ctx->pc = 0x7F302800u;
    // 7F302800: stfs     f0, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302800u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302804:
    ctx->pc = 0x7F302804u;
    // 7F302804: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302808:
    ctx->pc = 0x7F302808u;
    // 7F302808: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F30280C:
    ctx->pc = 0x7F30280Cu;
    // 7F30280C: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302810:
    ctx->pc = 0x7F302810u;
    // 7F302810: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302814:
    ctx->pc = 0x7F302814u;
    // 7F302814: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302814u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_7F302818:
    ctx->pc = 0x7F302818u;
    // 7F302818: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302818u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_7F30281C:
    ctx->pc = 0x7F30281Cu;
    // 7F30281C: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30281Cu)) return;
    ppc_frsp(ctx, 0, 0);

label_7F302820:
    ctx->pc = 0x7F302820u;
    // 7F302820: stfs     f0, 356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302820u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302824:
    ctx->pc = 0x7F302824u;
    // 7F302824: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F302828u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F302828:
    ctx->pc = 0x7F302828u;
    ctx->downcount -= 133;
    // 7F302828: stw     r3, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30282C:
    ctx->pc = 0x7F30282Cu;
    // 7F30282C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F302830:
    ctx->pc = 0x7F302830u;
    // 7F302830: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F302834:
    ctx->pc = 0x7F302834u;
    // 7F302834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302838:
    ctx->pc = 0x7F302838u;
    // 7F302838: lwz     r8, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F30283C:
    ctx->pc = 0x7F30283Cu;
    // 7F30283C: addi    r7, r5, 32224
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(32224);

label_7F302840:
    ctx->pc = 0x7F302840u;
    // 7F302840: addi    r6, r3, 32208
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(32208);

label_7F302844:
    ctx->pc = 0x7F302844u;
    // 7F302844: li      r0, 360
    ctx->gpr[0] = (u32)(s32)(360);

label_7F302848:
    ctx->pc = 0x7F302848u;
    // 7F302848: xoris   r5, r8, 0x8000
    ctx->gpr[5] = ctx->gpr[8] ^ (0x8000u << 16);

label_7F30284C:
    ctx->pc = 0x7F30284Cu;
    // 7F30284C: stw     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F302850:
    ctx->pc = 0x7F302850u;
    // 7F302850: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F302854:
    ctx->pc = 0x7F302854u;
    // 7F302854: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F302854u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302858:
    ctx->pc = 0x7F302858u;
    // 7F302858: stw     r5, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30285C:
    ctx->pc = 0x7F30285Cu;
    // 7F30285C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302860:
    ctx->pc = 0x7F302860u;
    // 7F302860: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F302860u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F302864:
    ctx->pc = 0x7F302864u;
    // 7F302864: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302864u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F302868:
    ctx->pc = 0x7F302868u;
    // 7F302868: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302868u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F30286C:
    ctx->pc = 0x7F30286Cu;
    // 7F30286C: stw     r0, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302870:
    ctx->pc = 0x7F302870u;
    // 7F302870: lfs     f0, 32200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302870u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302874:
    ctx->pc = 0x7F302874u;
    // 7F302874: lfs     f1, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302874u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302878:
    ctx->pc = 0x7F302878u;
    // 7F302878: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F302878u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F30287C:
    ctx->pc = 0x7F30287Cu;
    // 7F30287C: fdivs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F30287Cu)) return;
    ppc_fdivs(ctx, 1, 1, 2);

label_7F302880:
    ctx->pc = 0x7F302880u;
    // 7F302880: stfs     f1, 364(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302880u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302884:
    ctx->pc = 0x7F302884u;
    // 7F302884: lfs     f1, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302884u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302888:
    ctx->pc = 0x7F302888u;
    // 7F302888: fdivs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F302888u)) return;
    ppc_fdivs(ctx, 1, 1, 2);

label_7F30288C:
    ctx->pc = 0x7F30288Cu;
    // 7F30288C: stfs     f1, 368(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30288Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302890:
    ctx->pc = 0x7F302890u;
    // 7F302890: lfs     f1, 356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302890u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302894:
    ctx->pc = 0x7F302894u;
    // 7F302894: fdivs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F302894u)) return;
    ppc_fdivs(ctx, 1, 1, 2);

label_7F302898:
    ctx->pc = 0x7F302898u;
    // 7F302898: stfs     f1, 372(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F302898u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F30289C:
    ctx->pc = 0x7F30289Cu;
    // 7F30289C: stfs     f0, 376(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30289Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3028A0:
    ctx->pc = 0x7F3028A0u;
    ctx->downcount -= 3;
    // 7F3028A0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3028A4:
    ctx->pc = 0x7F3028A4u;
    // 7F3028A4: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F3028A8:
    ctx->pc = 0x7F3028A8u;
    // 7F3028A8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F3028ACu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F3028AC:
    ctx->pc = 0x7F3028ACu;
    ctx->downcount -= 2;
    // 7F3028AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3028B0:
    ctx->pc = 0x7F3028B0u;
    // 7F3028B0: bl      0x7F3B3370
    {
            ctx->lr = 0x7F3028B4u;
            ctx->pc = 0x7F3B3370u;
            return;
    }

label_7F3028B4:
    ctx->pc = 0x7F3028B4u;
    ctx->downcount -= 2;
    // 7F3028B4: addi    r3, r31, 180
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(180);

label_7F3028B8:
    ctx->pc = 0x7F3028B8u;
    // 7F3028B8: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F3028BCu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F3028BC:
    ctx->pc = 0x7F3028BCu;
    ctx->downcount -= 14;
    // 7F3028BC: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3028C0:
    ctx->pc = 0x7F3028C0u;
    // 7F3028C0: lwz     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3028C4:
    ctx->pc = 0x7F3028C4u;
    // 7F3028C4: stw     r3, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3028C8:
    ctx->pc = 0x7F3028C8u;
    // 7F3028C8: stw     r0, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3028CC:
    ctx->pc = 0x7F3028CCu;
    // 7F3028CC: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3028D0:
    ctx->pc = 0x7F3028D0u;
    // 7F3028D0: lwz     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3028D4:
    ctx->pc = 0x7F3028D4u;
    // 7F3028D4: stw     r3, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3028D8:
    ctx->pc = 0x7F3028D8u;
    // 7F3028D8: stw     r0, 240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3028DC:
    ctx->pc = 0x7F3028DCu;
    // 7F3028DC: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3028E0:
    ctx->pc = 0x7F3028E0u;
    // 7F3028E0: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3028E4:
    ctx->pc = 0x7F3028E4u;
    // 7F3028E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3028E8:
    ctx->pc = 0x7F3028E8u;
    // 7F3028E8: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F3028EC:
    ctx->pc = 0x7F3028ECu;
    // 7F3028EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3028F0:
    ctx->pc = 0x7F3028F0u;
    ctx->downcount -= 17;
    // 7F3028F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3028F4:
    ctx->pc = 0x7F3028F4u;
    // 7F3028F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3028F8:
    ctx->pc = 0x7F3028F8u;
    // 7F3028F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3028FC:
    ctx->pc = 0x7F3028FCu;
    // 7F3028FC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F302900:
    ctx->pc = 0x7F302900u;
    // 7F302900: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302904:
    ctx->pc = 0x7F302904u;
    // 7F302904: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F302908:
    ctx->pc = 0x7F302908u;
    // 7F302908: bl      0x7F302944
    {
            ctx->lr = 0x7F30290Cu;
            goto label_7F302944;
    }

label_7F30290C:
    ctx->pc = 0x7F30290Cu;
    ctx->downcount -= 3;
    // 7F30290C: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F302910:
    ctx->pc = 0x7F302910u;
    // 7F302910: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F302914:
    ctx->pc = 0x7F302914u;
    // 7F302914: bl      0x7F302944
    {
            ctx->lr = 0x7F302918u;
            goto label_7F302944;
    }

label_7F302918:
    ctx->pc = 0x7F302918u;
    ctx->downcount -= 3;
    // 7F302918: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F30291C:
    ctx->pc = 0x7F30291Cu;
    // 7F30291C: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F302920:
    ctx->pc = 0x7F302920u;
    // 7F302920: bl      0x7F302944
    {
            ctx->lr = 0x7F302924u;
            goto label_7F302944;
    }

label_7F302924:
    ctx->pc = 0x7F302924u;
    ctx->downcount -= 3;
    // 7F302924: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F302928:
    ctx->pc = 0x7F302928u;
    // 7F302928: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F30292C:
    ctx->pc = 0x7F30292Cu;
    // 7F30292C: bl      0x7F302944
    {
            ctx->lr = 0x7F302930u;
            goto label_7F302944;
    }

label_7F302930:
    ctx->pc = 0x7F302930u;
    ctx->downcount -= 16;
    // 7F302930: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F302934:
    ctx->pc = 0x7F302934u;
    // 7F302934: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302938:
    ctx->pc = 0x7F302938u;
    // 7F302938: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30293C:
    ctx->pc = 0x7F30293Cu;
    // 7F30293C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F302940:
    ctx->pc = 0x7F302940u;
    // 7F302940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302944:
    ctx->pc = 0x7F302944u;
    ctx->downcount -= 6;
    // 7F302944: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302948:
    ctx->pc = 0x7F302948u;
    // 7F302948: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30294C:
    ctx->pc = 0x7F30294Cu;
    // 7F30294C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302950:
    ctx->pc = 0x7F302950u;
    // 7F302950: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F302954:
    ctx->pc = 0x7F302954u;
    // 7F302954: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F302958:
    ctx->pc = 0x7F302958u;
    // 7F302958: bl      0x7F302974
    {
            ctx->lr = 0x7F30295Cu;
            goto label_7F302974;
    }

label_7F30295C:
    ctx->pc = 0x7F30295Cu;
    ctx->downcount -= 7;
    // 7F30295C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30295Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302960:
    ctx->pc = 0x7F302960u;
    // 7F302960: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302964:
    ctx->pc = 0x7F302964u;
    // 7F302964: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F302968:
    ctx->pc = 0x7F302968u;
    // 7F302968: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30296C:
    ctx->pc = 0x7F30296Cu;
    // 7F30296C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F302970:
    ctx->pc = 0x7F302970u;
    // 7F302970: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302974:
    ctx->pc = 0x7F302974u;
    ctx->downcount -= 4;
    // 7F302974: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F302974u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F302974u);
        if (ctx->exception) return;
    }

label_7F302978:
    ctx->pc = 0x7F302978u;
    // 7F302978: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F302978u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F302978u);
        if (ctx->exception) return;
    }

label_7F30297C:
    ctx->pc = 0x7F30297Cu;
    // 7F30297C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30297Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F302980:
    ctx->pc = 0x7F302980u;
    // 7F302980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302984:
    ctx->pc = 0x7F302984u;
    ctx->downcount -= 23;
    // 7F302984: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302988:
    ctx->pc = 0x7F302988u;
    // 7F302988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30298C:
    ctx->pc = 0x7F30298Cu;
    // 7F30298C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302990:
    ctx->pc = 0x7F302990u;
    // 7F302990: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F302994:
    ctx->pc = 0x7F302994u;
    // 7F302994: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302998:
    ctx->pc = 0x7F302998u;
    // 7F302998: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30299C:
    ctx->pc = 0x7F30299Cu;
    // 7F30299C: lwz     r5, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3029A0:
    ctx->pc = 0x7F3029A0u;
    // 7F3029A0: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3029A4:
    ctx->pc = 0x7F3029A4u;
    // 7F3029A4: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3029A8:
    ctx->pc = 0x7F3029A8u;
    // 7F3029A8: lwz     r3, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3029AC:
    ctx->pc = 0x7F3029ACu;
    // 7F3029AC: lwz     r28, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3029B0:
    ctx->pc = 0x7F3029B0u;
    // 7F3029B0: lwz     r29, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3029B4:
    ctx->pc = 0x7F3029B4u;
    // 7F3029B4: bc    12, 2, 0x7F302A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302A30;
        }
    }

label_7F3029B8:
    ctx->pc = 0x7F3029B8u;
    ctx->downcount -= 7;
    // 7F3029B8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3029BC:
    ctx->pc = 0x7F3029BCu;
    // 7F3029BC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3029C0:
    ctx->pc = 0x7F3029C0u;
    // 7F3029C0: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F3029C4:
    ctx->pc = 0x7F3029C4u;
    // 7F3029C4: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F3029C8:
    ctx->pc = 0x7F3029C8u;
    // 7F3029C8: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3029CC:
    ctx->pc = 0x7F3029CCu;
    // 7F3029CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3029D0:
    loop_7F3029D0(ctx);
    if (ctx->pc == 0x7F3029E4u) goto label_7F3029E4;
    return;
label_7F3029D4:
    ctx->pc = 0x7F3029D4u;
    // 7F3029D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3029D8:
    ctx->pc = 0x7F3029D8u;
    // 7F3029D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3029DC:
    ctx->pc = 0x7F3029DCu;
    // 7F3029DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3029E0:
    // 7F3029E0: bc    16, 0, 0x7F3029D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3029D0u;
                return;
            }
            goto label_7F3029D0;
        }
    }

label_7F3029E4:
    ctx->pc = 0x7F3029E4u;
    ctx->downcount -= 7;
    // 7F3029E4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3029E8:
    ctx->pc = 0x7F3029E8u;
    // 7F3029E8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3029EC:
    ctx->pc = 0x7F3029ECu;
    // 7F3029EC: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F3029F0:
    ctx->pc = 0x7F3029F0u;
    // 7F3029F0: addi    r4, r31, 176
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(176);

label_7F3029F4:
    ctx->pc = 0x7F3029F4u;
    // 7F3029F4: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3029F8:
    ctx->pc = 0x7F3029F8u;
    // 7F3029F8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3029FC:
    loop_7F3029FC(ctx);
    if (ctx->pc == 0x7F302A10u) goto label_7F302A10;
    return;
label_7F302A00:
    ctx->pc = 0x7F302A00u;
    // 7F302A00: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F302A04:
    ctx->pc = 0x7F302A04u;
    // 7F302A04: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302A08:
    ctx->pc = 0x7F302A08u;
    // 7F302A08: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F302A0C:
    // 7F302A0C: bc    16, 0, 0x7F3029FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3029FCu;
                return;
            }
            goto label_7F3029FC;
        }
    }

label_7F302A10:
    ctx->pc = 0x7F302A10u;
    ctx->downcount -= 7;
    // 7F302A10: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302A14:
    ctx->pc = 0x7F302A14u;
    // 7F302A14: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302A18:
    ctx->pc = 0x7F302A18u;
    // 7F302A18: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F302A1C:
    ctx->pc = 0x7F302A1Cu;
    // 7F302A1C: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F302A20:
    ctx->pc = 0x7F302A20u;
    // 7F302A20: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F302A24:
    ctx->pc = 0x7F302A24u;
    // 7F302A24: addi    r5, r5, -1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F302A28:
    ctx->pc = 0x7F302A28u;
    // 7F302A28: bl      0x80025A80
    {
            ctx->lr = 0x7F302A2Cu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F302A2C:
    ctx->pc = 0x7F302A2Cu;
    ctx->downcount -= 1;
    // 7F302A2C: b       0x7F302A5C
    {
            goto label_7F302A5C;
    }

label_7F302A30:
    ctx->pc = 0x7F302A30u;
    ctx->downcount -= 7;
    // 7F302A30: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302A34:
    ctx->pc = 0x7F302A34u;
    // 7F302A34: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F302A38:
    ctx->pc = 0x7F302A38u;
    // 7F302A38: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F302A3C:
    ctx->pc = 0x7F302A3Cu;
    // 7F302A3C: addi    r4, r31, 176
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(176);

label_7F302A40:
    ctx->pc = 0x7F302A40u;
    // 7F302A40: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F302A44:
    ctx->pc = 0x7F302A44u;
    // 7F302A44: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F302A48:
    loop_7F302A48(ctx);
    if (ctx->pc == 0x7F302A5Cu) goto label_7F302A5C;
    return;
label_7F302A4C:
    ctx->pc = 0x7F302A4Cu;
    // 7F302A4C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F302A50:
    ctx->pc = 0x7F302A50u;
    // 7F302A50: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302A54:
    ctx->pc = 0x7F302A54u;
    // 7F302A54: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F302A58:
    // 7F302A58: bc    16, 0, 0x7F302A48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302A48u;
                return;
            }
            goto label_7F302A48;
        }
    }

label_7F302A5C:
    ctx->pc = 0x7F302A5Cu;
    ctx->downcount -= 23;
    // 7F302A5C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302A60:
    ctx->pc = 0x7F302A60u;
    // 7F302A60: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302A64:
    ctx->pc = 0x7F302A64u;
    // 7F302A64: addi    r5, r3, 32200
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32200);

label_7F302A68:
    ctx->pc = 0x7F302A68u;
    // 7F302A68: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F302A68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302A6C:
    ctx->pc = 0x7F302A6Cu;
    // 7F302A6C: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F302A70:
    ctx->pc = 0x7F302A70u;
    // 7F302A70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302A74:
    ctx->pc = 0x7F302A74u;
    // 7F302A74: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F302A78:
    ctx->pc = 0x7F302A78u;
    // 7F302A78: lfs     f0, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302A78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302A7C:
    ctx->pc = 0x7F302A7Cu;
    // 7F302A7C: addi    r6, r5, -1084
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F302A80:
    ctx->pc = 0x7F302A80u;
    // 7F302A80: stfs     f1, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302A80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302A84:
    ctx->pc = 0x7F302A84u;
    // 7F302A84: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302A88:
    ctx->pc = 0x7F302A88u;
    // 7F302A88: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F302A8C:
    ctx->pc = 0x7F302A8Cu;
    // 7F302A8C: stfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302A8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302A90:
    ctx->pc = 0x7F302A90u;
    // 7F302A90: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F302A94:
    ctx->pc = 0x7F302A94u;
    // 7F302A94: addi    r5, r5, -1068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F302A98:
    ctx->pc = 0x7F302A98u;
    // 7F302A98: stfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302A98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302A9C:
    ctx->pc = 0x7F302A9Cu;
    // 7F302A9C: stfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302A9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302AA0:
    ctx->pc = 0x7F302AA0u;
    // 7F302AA0: stfs     f1, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F302AA0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302AA4:
    ctx->pc = 0x7F302AA4u;
    // 7F302AA4: stfs     f1, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F302AA4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302AA8:
    ctx->pc = 0x7F302AA8u;
    // 7F302AA8: stfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F302AA8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302AAC:
    ctx->pc = 0x7F302AACu;
    // 7F302AAC: stfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F302AACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302AB0:
    ctx->pc = 0x7F302AB0u;
    // 7F302AB0: stfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302AB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302AB4:
    ctx->pc = 0x7F302AB4u;
    // 7F302AB4: bl      0x7F114508
    {
            ctx->lr = 0x7F302AB8u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F302AB8:
    ctx->pc = 0x7F302AB8u;
    ctx->downcount -= 20;
    // 7F302AB8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302ABC:
    ctx->pc = 0x7F302ABCu;
    // 7F302ABC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302AC0:
    ctx->pc = 0x7F302AC0u;
    // 7F302AC0: addi    r30, r4, -1068
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F302AC4:
    ctx->pc = 0x7F302AC4u;
    // 7F302AC4: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_7F302AC8:
    ctx->pc = 0x7F302AC8u;
    // 7F302AC8: lwz     r7, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F302ACC:
    ctx->pc = 0x7F302ACCu;
    // 7F302ACC: addi    r23, r3, -1052
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F302AD0:
    ctx->pc = 0x7F302AD0u;
    // 7F302AD0: lwz     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F302AD4:
    ctx->pc = 0x7F302AD4u;
    // 7F302AD4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302AD8:
    ctx->pc = 0x7F302AD8u;
    // 7F302AD8: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302ADC:
    ctx->pc = 0x7F302ADCu;
    // 7F302ADC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302AE0:
    ctx->pc = 0x7F302AE0u;
    // 7F302AE0: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302AE4:
    ctx->pc = 0x7F302AE4u;
    // 7F302AE4: or   r25, r23, r23
    {
        ctx->gpr[25] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F302AE8:
    ctx->pc = 0x7F302AE8u;
    // 7F302AE8: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302AEC:
    ctx->pc = 0x7F302AECu;
    // 7F302AEC: addi    r22, r4, -1276
    ctx->gpr[22] = ctx->gpr[4] + (u32)(s32)(-1276);

label_7F302AF0:
    ctx->pc = 0x7F302AF0u;
    // 7F302AF0: addi    r24, r3, -1084
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F302AF4:
    ctx->pc = 0x7F302AF4u;
    // 7F302AF4: li      r26, 72
    ctx->gpr[26] = (u32)(s32)(72);

label_7F302AF8:
    ctx->pc = 0x7F302AF8u;
    // 7F302AF8: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302AFC:
    ctx->pc = 0x7F302AFCu;
    // 7F302AFC: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F302B00:
    ctx->pc = 0x7F302B00u;
    // 7F302B00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302B04:
    ctx->pc = 0x7F302B04u;
    // 7F302B04: b       0x7F302B6C
    {
            goto label_7F302B6C;
    }

label_7F302B08:
    ctx->downcount -= 4;
    // 7F302B08: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F302B0C:
    // 7F302B0C: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F302B10:
    // 7F302B10: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F302B14:
    // 7F302B14: bl      0x7F114508
    {
            ctx->lr = 0x7F302B18u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F302B18:
    ctx->downcount -= 19;
    // 7F302B18: add   r5, r29, r26
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F302B1C:
    ctx->pc = 0x7F302B1Cu;
    // 7F302B1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302B20:
    ctx->pc = 0x7F302B20u;
    // 7F302B20: lfs     f2, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F302B20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F302B24:
    // 7F302B24: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F302B28:
    ctx->pc = 0x7F302B28u;
    // 7F302B28: lfs     f1, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F302B28u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302B2C:
    // 7F302B2C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F302B30:
    ctx->pc = 0x7F302B30u;
    // 7F302B30: lfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F302B30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302B34:
    // 7F302B34: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F302B38:
    ctx->pc = 0x7F302B38u;
    // 7F302B38: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F302B3C:
    ctx->pc = 0x7F302B3Cu;
    // 7F302B3C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302B40:
    ctx->pc = 0x7F302B40u;
    // 7F302B40: lwz     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F302B44:
    ctx->pc = 0x7F302B44u;
    // 7F302B44: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302B44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302B48:
    ctx->pc = 0x7F302B48u;
    // 7F302B48: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F302B4C:
    ctx->pc = 0x7F302B4Cu;
    // 7F302B4C: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F302B50:
    ctx->pc = 0x7F302B50u;
    // 7F302B50: stw     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F302B54:
    ctx->pc = 0x7F302B54u;
    // 7F302B54: stw     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302B58:
    ctx->pc = 0x7F302B58u;
    // 7F302B58: stw     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302B5C:
    ctx->pc = 0x7F302B5Cu;
    // 7F302B5C: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302B60:
    // 7F302B60: bl      0x80025FD8
    {
            ctx->lr = 0x7F302B64u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F302B64:
    ctx->downcount -= 2;
    // 7F302B64: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F302B68:
    // 7F302B68: addi    r26, r26, 72
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(72);

label_7F302B6C:
    ctx->downcount -= 2;
    // 7F302B6C: cmpw    r27, r28
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F302B70:
    // 7F302B70: bc    12, 0, 0x7F302B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302B08u;
                return;
            }
            goto label_7F302B08;
        }
    }

label_7F302B74:
    ctx->pc = 0x7F302B74u;
    ctx->downcount -= 7;
    // 7F302B74: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302B78:
    ctx->pc = 0x7F302B78u;
    // 7F302B78: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302B7C:
    ctx->pc = 0x7F302B7Cu;
    // 7F302B7C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F302B80:
    ctx->pc = 0x7F302B80u;
    // 7F302B80: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F302B84:
    ctx->pc = 0x7F302B84u;
    // 7F302B84: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F302B88:
    ctx->pc = 0x7F302B88u;
    // 7F302B88: addi    r5, r5, -1084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F302B8C:
    ctx->pc = 0x7F302B8Cu;
    // 7F302B8C: bl      0x7F114508
    {
            ctx->lr = 0x7F302B90u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F302B90:
    ctx->pc = 0x7F302B90u;
    ctx->downcount -= 13;
    // 7F302B90: lwz     r5, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302B94:
    ctx->pc = 0x7F302B94u;
    // 7F302B94: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302B98:
    ctx->pc = 0x7F302B98u;
    // 7F302B98: lwz     r0, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302B9C:
    ctx->pc = 0x7F302B9Cu;
    // 7F302B9C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302BA0:
    ctx->pc = 0x7F302BA0u;
    // 7F302BA0: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F302BA4:
    ctx->pc = 0x7F302BA4u;
    // 7F302BA4: stwu     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F302BA8:
    ctx->pc = 0x7F302BA8u;
    // 7F302BA8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F302BAC:
    ctx->pc = 0x7F302BACu;
    // 7F302BAC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302BB0:
    ctx->pc = 0x7F302BB0u;
    // 7F302BB0: lwz     r6, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F302BB4:
    ctx->pc = 0x7F302BB4u;
    // 7F302BB4: lwz     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302BB8:
    ctx->pc = 0x7F302BB8u;
    // 7F302BB8: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302BBC:
    ctx->pc = 0x7F302BBCu;
    // 7F302BBC: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302BC0:
    ctx->pc = 0x7F302BC0u;
    // 7F302BC0: bl      0x80025FD8
    {
            ctx->lr = 0x7F302BC4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F302BC4:
    ctx->pc = 0x7F302BC4u;
    ctx->downcount -= 13;
    // 7F302BC4: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302BC8:
    ctx->pc = 0x7F302BC8u;
    // 7F302BC8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F302BCC:
    ctx->pc = 0x7F302BCCu;
    // 7F302BCC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F302BD0:
    ctx->pc = 0x7F302BD0u;
    // 7F302BD0: lwz     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F302BD4:
    ctx->pc = 0x7F302BD4u;
    // 7F302BD4: stwu     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F302BD8:
    ctx->pc = 0x7F302BD8u;
    // 7F302BD8: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F302BDC:
    ctx->pc = 0x7F302BDCu;
    // 7F302BDC: lwz     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F302BE0:
    ctx->pc = 0x7F302BE0u;
    // 7F302BE0: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F302BE4:
    ctx->pc = 0x7F302BE4u;
    // 7F302BE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302BE8:
    ctx->pc = 0x7F302BE8u;
    // 7F302BE8: stw     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F302BEC:
    ctx->pc = 0x7F302BECu;
    // 7F302BEC: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302BF0:
    ctx->pc = 0x7F302BF0u;
    // 7F302BF0: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302BF4:
    ctx->pc = 0x7F302BF4u;
    // 7F302BF4: bl      0x80025FFC
    {
            ctx->lr = 0x7F302BF8u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F302BF8:
    ctx->pc = 0x7F302BF8u;
    ctx->downcount -= 16;
    // 7F302BF8: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F302BFC:
    ctx->pc = 0x7F302BFCu;
    // 7F302BFC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302C00:
    ctx->pc = 0x7F302C00u;
    // 7F302C00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302C04:
    ctx->pc = 0x7F302C04u;
    // 7F302C04: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F302C08:
    ctx->pc = 0x7F302C08u;
    // 7F302C08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302C0C:
    ctx->pc = 0x7F302C0Cu;
    ctx->downcount -= 7;
    // 7F302C0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302C10:
    ctx->pc = 0x7F302C10u;
    // 7F302C10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302C14:
    ctx->pc = 0x7F302C14u;
    // 7F302C14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302C18:
    ctx->pc = 0x7F302C18u;
    // 7F302C18: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F302C1C:
    ctx->pc = 0x7F302C1Cu;
    // 7F302C1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302C20:
    ctx->pc = 0x7F302C20u;
    // 7F302C20: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F302C24:
    ctx->pc = 0x7F302C24u;
    // 7F302C24: bl      0x7F2FFC6C
    {
            ctx->lr = 0x7F302C28u;
            ctx->pc = 0x7F2FFC6Cu;
            return;
    }

label_7F302C28:
    ctx->pc = 0x7F302C28u;
    ctx->downcount -= 2;
    // 7F302C28: cmpwi   r3, 0
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

label_7F302C2C:
    ctx->pc = 0x7F302C2Cu;
    // 7F302C2C: bc    4, 2, 0x7F302C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F302C38;
        }
    }

label_7F302C30:
    ctx->pc = 0x7F302C30u;
    ctx->downcount -= 2;
    // 7F302C30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F302C34:
    ctx->pc = 0x7F302C34u;
    // 7F302C34: b       0x7F302C8C
    {
            goto label_7F302C8C;
    }

label_7F302C38:
    ctx->pc = 0x7F302C38u;
    ctx->downcount -= 3;
    // 7F302C38: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302C3C:
    ctx->pc = 0x7F302C3Cu;
    // 7F302C3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302C40:
    ctx->pc = 0x7F302C40u;
    // 7F302C40: bl      0x7F302100
    {
            ctx->lr = 0x7F302C44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302100u;
                return;
            }
            goto label_7F302100;
    }

label_7F302C44:
    ctx->pc = 0x7F302C44u;
    ctx->downcount -= 2;
    // 7F302C44: cmpwi   r3, 0
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

label_7F302C48:
    ctx->pc = 0x7F302C48u;
    // 7F302C48: bc    4, 2, 0x7F302C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F302C54;
        }
    }

label_7F302C4C:
    ctx->pc = 0x7F302C4Cu;
    ctx->downcount -= 2;
    // 7F302C4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F302C50:
    ctx->pc = 0x7F302C50u;
    // 7F302C50: b       0x7F302C8C
    {
            goto label_7F302C8C;
    }

label_7F302C54:
    ctx->pc = 0x7F302C54u;
    ctx->downcount -= 2;
    // 7F302C54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302C58:
    ctx->pc = 0x7F302C58u;
    // 7F302C58: bl      0x7F302178
    {
            ctx->lr = 0x7F302C5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302178u;
                return;
            }
            goto label_7F302178;
    }

label_7F302C5C:
    ctx->pc = 0x7F302C5Cu;
    ctx->downcount -= 3;
    // 7F302C5C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302C60:
    ctx->pc = 0x7F302C60u;
    // 7F302C60: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_7F302C64:
    ctx->pc = 0x7F302C64u;
    // 7F302C64: bl      0x7F300024
    {
            ctx->lr = 0x7F302C68u;
            ctx->pc = 0x7F300024u;
            return;
    }

label_7F302C68:
    ctx->pc = 0x7F302C68u;
    ctx->downcount -= 2;
    // 7F302C68: cmpwi   r3, 0
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

label_7F302C6C:
    ctx->pc = 0x7F302C6Cu;
    // 7F302C6C: bc    4, 2, 0x7F302C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F302C78;
        }
    }

label_7F302C70:
    ctx->pc = 0x7F302C70u;
    ctx->downcount -= 2;
    // 7F302C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F302C74:
    ctx->pc = 0x7F302C74u;
    // 7F302C74: b       0x7F302C8C
    {
            goto label_7F302C8C;
    }

label_7F302C78:
    ctx->pc = 0x7F302C78u;
    ctx->downcount -= 2;
    // 7F302C78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302C7C:
    ctx->pc = 0x7F302C7Cu;
    // 7F302C7C: bl      0x7F302984
    {
            ctx->lr = 0x7F302C80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302984u;
                return;
            }
            goto label_7F302984;
    }

label_7F302C80:
    ctx->pc = 0x7F302C80u;
    ctx->downcount -= 3;
    // 7F302C80: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F302C84:
    ctx->pc = 0x7F302C84u;
    // 7F302C84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F302C88:
    ctx->pc = 0x7F302C88u;
    // 7F302C88: stw     r0, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302C8C:
    ctx->pc = 0x7F302C8Cu;
    ctx->downcount -= 6;
    // 7F302C8C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302C90:
    ctx->pc = 0x7F302C90u;
    // 7F302C90: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F302C94:
    ctx->pc = 0x7F302C94u;
    // 7F302C94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302C98:
    ctx->pc = 0x7F302C98u;
    // 7F302C98: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F302C9C:
    ctx->pc = 0x7F302C9Cu;
    // 7F302C9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302CA0:
    ctx->pc = 0x7F302CA0u;
    ctx->downcount -= 16;
    // 7F302CA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302CA4:
    ctx->pc = 0x7F302CA4u;
    // 7F302CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302CA8:
    ctx->pc = 0x7F302CA8u;
    // 7F302CA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302CAC:
    ctx->pc = 0x7F302CACu;
    // 7F302CAC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F302CB0:
    ctx->pc = 0x7F302CB0u;
    // 7F302CB0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302CB4:
    ctx->pc = 0x7F302CB4u;
    // 7F302CB4: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F302CB8u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F302CB8:
    ctx->pc = 0x7F302CB8u;
    ctx->downcount -= 2;
    // 7F302CB8: cmpwi   r3, 0
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

label_7F302CBC:
    ctx->pc = 0x7F302CBCu;
    // 7F302CBC: bc    12, 2, 0x7F302CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302CDC;
        }
    }

label_7F302CC0:
    ctx->pc = 0x7F302CC0u;
    ctx->downcount -= 5;
    // 7F302CC0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F302CC4:
    ctx->pc = 0x7F302CC4u;
    // 7F302CC4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F302CC8:
    ctx->pc = 0x7F302CC8u;
    // 7F302CC8: li      r5, 400
    ctx->gpr[5] = (u32)(s32)(400);

label_7F302CCC:
    ctx->pc = 0x7F302CCCu;
    // 7F302CCC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F302CD0:
    ctx->pc = 0x7F302CD0u;
    // 7F302CD0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F302CD4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F302CD4:
    ctx->pc = 0x7F302CD4u;
    ctx->downcount -= 2;
    // 7F302CD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302CD8:
    ctx->pc = 0x7F302CD8u;
    // 7F302CD8: b       0x7F302CF4
    {
            goto label_7F302CF4;
    }

label_7F302CDC:
    ctx->pc = 0x7F302CDCu;
    ctx->downcount -= 5;
    // 7F302CDC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F302CE0:
    ctx->pc = 0x7F302CE0u;
    // 7F302CE0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F302CE4:
    ctx->pc = 0x7F302CE4u;
    // 7F302CE4: li      r5, 400
    ctx->gpr[5] = (u32)(s32)(400);

label_7F302CE8:
    ctx->pc = 0x7F302CE8u;
    // 7F302CE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F302CEC:
    ctx->pc = 0x7F302CECu;
    // 7F302CEC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F302CF0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F302CF0:
    ctx->pc = 0x7F302CF0u;
    ctx->downcount -= 1;
    // 7F302CF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302CF4:
    ctx->pc = 0x7F302CF4u;
    ctx->downcount -= 2;
    // 7F302CF4: cmplwi  r31, 0x0000
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

label_7F302CF8:
    ctx->pc = 0x7F302CF8u;
    // 7F302CF8: bc    12, 2, 0x7F302D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302D60;
        }
    }

label_7F302CFC:
    ctx->pc = 0x7F302CFCu;
    ctx->downcount -= 6;
    // 7F302CFC: lis     r3, 32560
    ctx->gpr[3] = ((u32)(s32)(32560) << 16);

label_7F302D00:
    ctx->pc = 0x7F302D00u;
    // 7F302D00: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F302D04:
    ctx->pc = 0x7F302D04u;
    // 7F302D04: addi    r4, r3, 8344
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8344);

label_7F302D08:
    ctx->pc = 0x7F302D08u;
    // 7F302D08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302D0C:
    ctx->pc = 0x7F302D0Cu;
    // 7F302D0C: addi    r5, r5, 8240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8240);

label_7F302D10:
    ctx->pc = 0x7F302D10u;
    // 7F302D10: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F302D14u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F302D14:
    ctx->pc = 0x7F302D14u;
    ctx->downcount -= 13;
    // 7F302D14: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302D18:
    ctx->pc = 0x7F302D18u;
    // 7F302D18: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F302D1C:
    ctx->pc = 0x7F302D1Cu;
    // 7F302D1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F302D20:
    ctx->pc = 0x7F302D20u;
    // 7F302D20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302D24:
    ctx->pc = 0x7F302D24u;
    // 7F302D24: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F302D28:
    ctx->pc = 0x7F302D28u;
    // 7F302D28: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F302D2C:
    ctx->pc = 0x7F302D2Cu;
    // 7F302D2C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302D30:
    ctx->pc = 0x7F302D30u;
    // 7F302D30: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F302D34:
    ctx->pc = 0x7F302D34u;
    // 7F302D34: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F302D38:
    ctx->pc = 0x7F302D38u;
    // 7F302D38: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F302D3C:
    ctx->pc = 0x7F302D3Cu;
    // 7F302D3C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302D40:
    ctx->pc = 0x7F302D40u;
    // 7F302D40: stw     r30, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F302D44:
    ctx->pc = 0x7F302D44u;
    // 7F302D44: bl      0x7F302C0C
    {
            ctx->lr = 0x7F302D48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302C0Cu;
                return;
            }
            goto label_7F302C0C;
    }

label_7F302D48:
    ctx->pc = 0x7F302D48u;
    ctx->downcount -= 2;
    // 7F302D48: cmpwi   r3, 0
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

label_7F302D4C:
    ctx->pc = 0x7F302D4Cu;
    // 7F302D4C: bc    4, 2, 0x7F302D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F302D60;
        }
    }

label_7F302D50:
    ctx->pc = 0x7F302D50u;
    ctx->downcount -= 2;
    // 7F302D50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302D54:
    ctx->pc = 0x7F302D54u;
    // 7F302D54: bl      0x7F3C8210
    {
            ctx->lr = 0x7F302D58u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F302D58:
    ctx->pc = 0x7F302D58u;
    ctx->downcount -= 2;
    // 7F302D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F302D5C:
    ctx->pc = 0x7F302D5Cu;
    // 7F302D5C: b       0x7F302D64
    {
            goto label_7F302D64;
    }

label_7F302D60:
    ctx->pc = 0x7F302D60u;
    ctx->downcount -= 1;
    // 7F302D60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302D64:
    ctx->pc = 0x7F302D64u;
    ctx->downcount -= 16;
    // 7F302D64: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F302D68:
    ctx->pc = 0x7F302D68u;
    // 7F302D68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302D6C:
    ctx->pc = 0x7F302D6Cu;
    // 7F302D6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F302D70:
    ctx->pc = 0x7F302D70u;
    // 7F302D70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F302D74:
    ctx->pc = 0x7F302D74u;
    // 7F302D74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F302D78:
    ctx->pc = 0x7F302D78u;
    ctx->downcount -= 75;
    // 7F302D78: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F302D7C:
    ctx->pc = 0x7F302D7Cu;
    // 7F302D7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F302D80:
    ctx->pc = 0x7F302D80u;
    // 7F302D80: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302D84:
    ctx->pc = 0x7F302D84u;
    // 7F302D84: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302D84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F302D88:
    ctx->pc = 0x7F302D88u;
    // 7F302D88: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F302D88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F302D88u);
        if (ctx->exception) return;
    }

label_7F302D8C:
    ctx->pc = 0x7F302D8Cu;
    // 7F302D8C: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F302D90:
    ctx->pc = 0x7F302D90u;
    // 7F302D90: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F302D94:
    ctx->pc = 0x7F302D94u;
    // 7F302D94: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F302D98:
    ctx->pc = 0x7F302D98u;
    // 7F302D98: lfs     f5, 32220(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F302D98u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F302D9C:
    ctx->pc = 0x7F302D9Cu;
    // 7F302D9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302DA0:
    ctx->pc = 0x7F302DA0u;
    // 7F302DA0: addi    r28, r3, 32224
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(32224);

label_7F302DA4:
    ctx->pc = 0x7F302DA4u;
    // 7F302DA4: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F302DA8:
    ctx->pc = 0x7F302DA8u;
    // 7F302DA8: stfs     f5, 276(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302DA8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302DAC:
    ctx->pc = 0x7F302DACu;
    // 7F302DAC: addi    r27, r11, 32228
    ctx->gpr[27] = ctx->gpr[11] + (u32)(s32)(32228);

label_7F302DB0:
    ctx->pc = 0x7F302DB0u;
    // 7F302DB0: lfs     f2, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F302DB0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F302DB4:
    ctx->pc = 0x7F302DB4u;
    // 7F302DB4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302DB8:
    ctx->pc = 0x7F302DB8u;
    // 7F302DB8: lfs     f0, 276(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302DB8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302DBC:
    ctx->pc = 0x7F302DBCu;
    // 7F302DBC: addi    r12, r3, 32232
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(32232);

label_7F302DC0:
    ctx->pc = 0x7F302DC0u;
    // 7F302DC0: lfs     f3, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F302DC0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F302DC4:
    ctx->pc = 0x7F302DC4u;
    // 7F302DC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302DC8:
    ctx->pc = 0x7F302DC8u;
    // 7F302DC8: fdivs   f4, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302DC8u)) return;
    ppc_fdivs(ctx, 4, 2, 0);

label_7F302DCC:
    ctx->pc = 0x7F302DCCu;
    // 7F302DCC: addi    r11, r3, 32236
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(32236);

label_7F302DD0:
    ctx->pc = 0x7F302DD0u;
    // 7F302DD0: lfs     f2, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F302DD0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F302DD4:
    ctx->pc = 0x7F302DD4u;
    // 7F302DD4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F302DD8:
    ctx->pc = 0x7F302DD8u;
    // 7F302DD8: lfs     f0, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F302DD8u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302DDC:
    ctx->pc = 0x7F302DDCu;
    // 7F302DDC: or   r28, r9, r9
    {
        ctx->gpr[28] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F302DE0:
    ctx->pc = 0x7F302DE0u;
    // 7F302DE0: stfs     f4, 280(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302DE0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F302DE4:
    ctx->pc = 0x7F302DE4u;
    // 7F302DE4: li      r12, 100
    ctx->gpr[12] = (u32)(s32)(100);

label_7F302DE8:
    ctx->pc = 0x7F302DE8u;
    // 7F302DE8: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F302DEC:
    ctx->pc = 0x7F302DECu;
    // 7F302DEC: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F302DF0:
    ctx->pc = 0x7F302DF0u;
    // 7F302DF0: stfs     f5, 272(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302DF0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302DF4:
    ctx->pc = 0x7F302DF4u;
    // 7F302DF4: or   r27, r8, r8
    {
        ctx->gpr[27] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F302DF8:
    ctx->pc = 0x7F302DF8u;
    // 7F302DF8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F302DFC:
    ctx->pc = 0x7F302DFCu;
    // 7F302DFC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F302DFCu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F302E00:
    ctx->pc = 0x7F302E00u;
    // 7F302E00: stfs     f3, 284(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302E00u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F302E04:
    ctx->pc = 0x7F302E04u;
    // 7F302E04: or   r29, r10, r10
    {
        ctx->gpr[29] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F302E08:
    ctx->pc = 0x7F302E08u;
    // 7F302E08: addi    r9, r26, 176
    ctx->gpr[9] = ctx->gpr[26] + (u32)(s32)(176);

label_7F302E0C:
    ctx->pc = 0x7F302E0Cu;
    // 7F302E0C: addi    r8, r3, -4
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F302E10:
    ctx->pc = 0x7F302E10u;
    // 7F302E10: stfs     f2, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302E10u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F302E14:
    ctx->pc = 0x7F302E14u;
    // 7F302E14: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F302E18:
    ctx->pc = 0x7F302E18u;
    // 7F302E18: stw     r12, 292(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F302E1C:
    ctx->pc = 0x7F302E1Cu;
    // 7F302E1C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F302E20:
    ctx->pc = 0x7F302E20u;
    // 7F302E20: stfs     f0, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302E20u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302E24:
    ctx->pc = 0x7F302E24u;
    // 7F302E24: stw     r11, 300(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F302E28:
    ctx->pc = 0x7F302E28u;
    // 7F302E28: stw     r11, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F302E2C:
    ctx->pc = 0x7F302E2Cu;
    // 7F302E2C: stw     r11, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F302E30:
    ctx->pc = 0x7F302E30u;
    // 7F302E30: stw     r11, 244(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F302E34:
    ctx->pc = 0x7F302E34u;
    // 7F302E34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F302E38:
    loop_7F302E38(ctx);
    if (ctx->pc == 0x7F302E4Cu) goto label_7F302E4C;
    return;
label_7F302E3C:
    ctx->pc = 0x7F302E3Cu;
    // 7F302E3C: lwzu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[8] = ea;
    }

label_7F302E40:
    ctx->pc = 0x7F302E40u;
    // 7F302E40: stw     r3, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302E44:
    ctx->pc = 0x7F302E44u;
    // 7F302E44: stwu     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[9] = ea;
    }

label_7F302E48:
    // 7F302E48: bc    16, 0, 0x7F302E38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302E38u;
                return;
            }
            goto label_7F302E38;
        }
    }

label_7F302E4C:
    ctx->pc = 0x7F302E4Cu;
    ctx->downcount -= 58;
    // 7F302E4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F302E50:
    ctx->pc = 0x7F302E50u;
    // 7F302E50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302E54:
    ctx->pc = 0x7F302E54u;
    // 7F302E54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E58:
    ctx->pc = 0x7F302E58u;
    // 7F302E58: addi    r9, r3, 32200
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(32200);

label_7F302E5C:
    ctx->pc = 0x7F302E5Cu;
    // 7F302E5C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F302E60:
    ctx->pc = 0x7F302E60u;
    // 7F302E60: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302E64:
    ctx->pc = 0x7F302E64u;
    // 7F302E64: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E68:
    ctx->pc = 0x7F302E68u;
    // 7F302E68: mulli   r10, r4, 28
    ctx->gpr[10] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)28);

label_7F302E6C:
    ctx->pc = 0x7F302E6Cu;
    // 7F302E6C: addi    r8, r8, 31720
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(31720);

label_7F302E70:
    ctx->pc = 0x7F302E70u;
    // 7F302E70: lfs     f5, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F302E70u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F302E74:
    ctx->pc = 0x7F302E74u;
    // 7F302E74: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E78:
    ctx->pc = 0x7F302E78u;
    // 7F302E78: cmplwi  r7, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F302E7C:
    ctx->pc = 0x7F302E7Cu;
    // 7F302E7C: add   r4, r8, r10
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F302E80:
    ctx->pc = 0x7F302E80u;
    // 7F302E80: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E84:
    ctx->pc = 0x7F302E84u;
    // 7F302E84: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302E84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302E88:
    ctx->pc = 0x7F302E88u;
    // 7F302E88: stw     r0, 248(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E8C:
    ctx->pc = 0x7F302E8Cu;
    // 7F302E8C: fneg    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302E8Cu)) return;
    ctx->fpr[3] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F302E90:
    ctx->pc = 0x7F302E90u;
    // 7F302E90: lfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302E90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302E94:
    ctx->pc = 0x7F302E94u;
    // 7F302E94: stw     r0, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302E98:
    ctx->pc = 0x7F302E98u;
    // 7F302E98: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302E98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302E9C:
    ctx->pc = 0x7F302E9Cu;
    // 7F302E9C: fneg    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F302E9Cu)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F302EA0:
    ctx->pc = 0x7F302EA0u;
    // 7F302EA0: stw     r0, 328(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302EA4:
    ctx->pc = 0x7F302EA4u;
    // 7F302EA4: lfs     f6, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302EA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F302EA8:
    ctx->pc = 0x7F302EA8u;
    // 7F302EA8: stfs     f5, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EA8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302EAC:
    ctx->pc = 0x7F302EACu;
    // 7F302EAC: lfsx    f4, r8, r10
    if (!ppc_fp_available_inline(ctx, 0x7F302EACu)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[10];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F302EB0:
    ctx->pc = 0x7F302EB0u;
    // 7F302EB0: stfs     f5, 336(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EB0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302EB4:
    ctx->pc = 0x7F302EB4u;
    // 7F302EB4: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302EB8:
    ctx->pc = 0x7F302EB8u;
    // 7F302EB8: stfs     f1, 276(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EB8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302EBC:
    ctx->pc = 0x7F302EBCu;
    // 7F302EBC: lfs     f1, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302EBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F302EC0:
    ctx->pc = 0x7F302EC0u;
    // 7F302EC0: lfs     f5, 276(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EC0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F302EC4:
    ctx->pc = 0x7F302EC4u;
    // 7F302EC4: lfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F302EC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302EC8:
    ctx->pc = 0x7F302EC8u;
    // 7F302EC8: fdivs   f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x7F302EC8u)) return;
    ppc_fdivs(ctx, 5, 6, 5);

label_7F302ECC:
    ctx->pc = 0x7F302ECCu;
    // 7F302ECC: stfs     f5, 280(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302ECCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F302ED0:
    ctx->pc = 0x7F302ED0u;
    // 7F302ED0: stfs     f4, 272(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302ED0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F302ED4:
    ctx->pc = 0x7F302ED4u;
    // 7F302ED4: stfs     f3, 284(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302ED4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F302ED8:
    ctx->pc = 0x7F302ED8u;
    // 7F302ED8: stfs     f2, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302ED8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F302EDC:
    ctx->pc = 0x7F302EDCu;
    // 7F302EDC: stw     r0, 292(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302EE0:
    ctx->pc = 0x7F302EE0u;
    // 7F302EE0: stfs     f1, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EE0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F302EE4:
    ctx->pc = 0x7F302EE4u;
    // 7F302EE4: stfs     f0, 336(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302EE4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302EE8:
    ctx->pc = 0x7F302EE8u;
    // 7F302EE8: bc    12, 2, 0x7F302F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302F0C;
        }
    }

label_7F302EEC:
    ctx->pc = 0x7F302EECu;
    ctx->downcount -= 8;
    // 7F302EEC: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302EF0:
    ctx->pc = 0x7F302EF0u;
    // 7F302EF0: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302EF4:
    ctx->pc = 0x7F302EF4u;
    // 7F302EF4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302EF8:
    ctx->pc = 0x7F302EF8u;
    // 7F302EF8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302EFC:
    ctx->pc = 0x7F302EFCu;
    // 7F302EFC: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302F00:
    ctx->pc = 0x7F302F00u;
    // 7F302F00: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302F04:
    ctx->pc = 0x7F302F04u;
    // 7F302F04: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302F08:
    ctx->pc = 0x7F302F08u;
    // 7F302F08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302F0C:
    ctx->pc = 0x7F302F0Cu;
    ctx->downcount -= 8;
    // 7F302F0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F302F10:
    ctx->pc = 0x7F302F10u;
    // 7F302F10: lfs     f0, 32224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F302F10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F302F14:
    ctx->pc = 0x7F302F14u;
    // 7F302F14: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F302F14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F302F18:
    ctx->pc = 0x7F302F18u;
    // 7F302F18: stw     r5, 248(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F302F1C:
    ctx->pc = 0x7F302F1Cu;
    // 7F302F1C: stw     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F302F20:
    ctx->pc = 0x7F302F20u;
    // 7F302F20: lwz     r3, 248(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302F24:
    ctx->pc = 0x7F302F24u;
    // 7F302F24: cmplwi  r3, 0x0000
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

label_7F302F28:
    ctx->pc = 0x7F302F28u;
    // 7F302F28: bc    12, 2, 0x7F302F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302F5C;
        }
    }

label_7F302F2C:
    ctx->pc = 0x7F302F2Cu;
    ctx->downcount -= 13;
    // 7F302F2C: lwz     r0, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302F30:
    ctx->pc = 0x7F302F30u;
    // 7F302F30: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302F34:
    ctx->pc = 0x7F302F34u;
    // 7F302F34: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F302F38:
    ctx->pc = 0x7F302F38u;
    // 7F302F38: addi    r0, r3, 444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(444);

label_7F302F3C:
    ctx->pc = 0x7F302F3Cu;
    // 7F302F3C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F302F40:
    ctx->pc = 0x7F302F40u;
    // 7F302F40: stw     r0, 244(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302F44:
    ctx->pc = 0x7F302F44u;
    // 7F302F44: lwz     r4, 248(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302F48:
    ctx->pc = 0x7F302F48u;
    // 7F302F48: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302F4C:
    ctx->pc = 0x7F302F4Cu;
    // 7F302F4C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302F50:
    ctx->pc = 0x7F302F50u;
    // 7F302F50: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F302F54:
    ctx->pc = 0x7F302F54u;
    // 7F302F54: bl      0x7F3BC518
    {
            ctx->lr = 0x7F302F58u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F302F58:
    ctx->pc = 0x7F302F58u;
    ctx->downcount -= 1;
    // 7F302F58: b       0x7F302F7C
    {
            goto label_7F302F7C;
    }

label_7F302F5C:
    ctx->pc = 0x7F302F5Cu;
    ctx->downcount -= 5;
    // 7F302F5C: lwz     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F302F60:
    ctx->pc = 0x7F302F60u;
    // 7F302F60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F302F64:
    ctx->pc = 0x7F302F64u;
    // 7F302F64: addi    r4, r26, 52
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(52);

label_7F302F68:
    ctx->pc = 0x7F302F68u;
    // 7F302F68: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F302F6C:
    ctx->pc = 0x7F302F6Cu;
    // 7F302F6C: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F302F70u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F302F70:
    ctx->pc = 0x7F302F70u;
    ctx->downcount -= 3;
    // 7F302F70: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302F74:
    ctx->pc = 0x7F302F74u;
    // 7F302F74: addi    r4, r26, 52
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(52);

label_7F302F78:
    ctx->pc = 0x7F302F78u;
    // 7F302F78: bl      0x7F3BC518
    {
            ctx->lr = 0x7F302F7Cu;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F302F7C:
    ctx->pc = 0x7F302F7Cu;
    ctx->downcount -= 2;
    // 7F302F7C: cmpwi   r31, 0
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

label_7F302F80:
    ctx->pc = 0x7F302F80u;
    // 7F302F80: bc    12, 2, 0x7F302F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302F98;
        }
    }

label_7F302F84:
    ctx->pc = 0x7F302F84u;
    ctx->downcount -= 3;
    // 7F302F84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F302F88:
    ctx->pc = 0x7F302F88u;
    // 7F302F88: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F302F8C:
    ctx->pc = 0x7F302F8Cu;
    // 7F302F8C: bl      0x7F3C8470
    {
            ctx->lr = 0x7F302F90u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F302F90:
    ctx->pc = 0x7F302F90u;
    ctx->downcount -= 1;
    // 7F302F90: bl      0x7F3C8480
    {
            ctx->lr = 0x7F302F94u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F302F94:
    ctx->pc = 0x7F302F94u;
    ctx->downcount -= 1;
    // 7F302F94: stw     r3, 328(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302F98:
    ctx->pc = 0x7F302F98u;
    ctx->downcount -= 11;
    // 7F302F98: addic   r0, r28, -1
    {
        u64 a = ctx->gpr[28];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F302F9C:
    ctx->pc = 0x7F302F9Cu;
    // 7F302F9C: stfs     f31, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F302F9Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F302FA0:
    ctx->pc = 0x7F302FA0u;
    // 7F302FA0: subfe   r4, r0, r28
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F302FA4:
    ctx->pc = 0x7F302FA4u;
    // 7F302FA4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F302FA8:
    ctx->pc = 0x7F302FA8u;
    // 7F302FA8: addic   r0, r29, -1
    {
        u64 a = ctx->gpr[29];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F302FAC:
    ctx->pc = 0x7F302FACu;
    // 7F302FAC: stw     r4, 300(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F302FB0:
    ctx->pc = 0x7F302FB0u;
    // 7F302FB0: subfe   r0, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F302FB4:
    ctx->pc = 0x7F302FB4u;
    // 7F302FB4: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F302FB8:
    ctx->pc = 0x7F302FB8u;
    // 7F302FB8: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302FBC:
    ctx->pc = 0x7F302FBCu;
    // 7F302FBC: stw     r30, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F302FC0:
    ctx->pc = 0x7F302FC0u;
    // 7F302FC0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F302FC4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F302FC4:
    ctx->pc = 0x7F302FC4u;
    ctx->downcount -= 2;
    // 7F302FC4: cmplwi  r27, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F302FC8:
    ctx->pc = 0x7F302FC8u;
    // 7F302FC8: bc    12, 2, 0x7F302FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F302FD4;
        }
    }

label_7F302FCC:
    ctx->pc = 0x7F302FCCu;
    ctx->downcount -= 2;
    // 7F302FCC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F302FD0:
    ctx->pc = 0x7F302FD0u;
    // 7F302FD0: bl      0x7F3B3370
    {
            ctx->lr = 0x7F302FD4u;
            ctx->pc = 0x7F3B3370u;
            return;
    }

label_7F302FD4:
    ctx->pc = 0x7F302FD4u;
    ctx->downcount -= 2;
    // 7F302FD4: addi    r3, r26, 180
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(180);

label_7F302FD8:
    ctx->pc = 0x7F302FD8u;
    // 7F302FD8: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F302FDCu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F302FDC:
    ctx->pc = 0x7F302FDCu;
    ctx->downcount -= 26;
    // 7F302FDC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302FE0:
    ctx->pc = 0x7F302FE0u;
    // 7F302FE0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302FE4:
    ctx->pc = 0x7F302FE4u;
    // 7F302FE4: stw     r3, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302FE8:
    ctx->pc = 0x7F302FE8u;
    // 7F302FE8: stw     r0, 232(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302FEC:
    ctx->pc = 0x7F302FECu;
    // 7F302FEC: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F302FF0:
    ctx->pc = 0x7F302FF0u;
    // 7F302FF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F302FF4:
    ctx->pc = 0x7F302FF4u;
    // 7F302FF4: stw     r3, 236(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F302FF8:
    ctx->pc = 0x7F302FF8u;
    // 7F302FF8: stw     r0, 240(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F302FFC:
    ctx->pc = 0x7F302FFCu;
    // 7F302FFC: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F302FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F302FFCu);
        if (ctx->exception) return;
    }

label_7F303000:
    ctx->pc = 0x7F303000u;
    // 7F303000: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303004:
    ctx->pc = 0x7F303004u;
    // 7F303004: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F303008:
    ctx->pc = 0x7F303008u;
    // 7F303008: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30300C:
    ctx->pc = 0x7F30300Cu;
    // 7F30300C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303010:
    ctx->pc = 0x7F303010u;
    // 7F303010: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F303014:
    ctx->pc = 0x7F303014u;
    // 7F303014: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303018:
    ctx->pc = 0x7F303018u;
    ctx->downcount -= 27;
    // 7F303018: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30301C:
    ctx->pc = 0x7F30301Cu;
    // 7F30301C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303020:
    ctx->pc = 0x7F303020u;
    // 7F303020: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303024:
    ctx->pc = 0x7F303024u;
    // 7F303024: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F303028:
    ctx->pc = 0x7F303028u;
    // 7F303028: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303028u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F30302C:
    ctx->pc = 0x7F30302Cu;
    // 7F30302C: stmw     r22, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F303030:
    ctx->pc = 0x7F303030u;
    // 7F303030: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303034:
    ctx->pc = 0x7F303034u;
    // 7F303034: lwz     r29, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F303038:
    ctx->pc = 0x7F303038u;
    // 7F303038: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30303C:
    ctx->pc = 0x7F30303Cu;
    // 7F30303C: lwz     r30, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F303040:
    ctx->pc = 0x7F303040u;
    // 7F303040: or   r24, r6, r6
    {
        ctx->gpr[24] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F303044:
    ctx->pc = 0x7F303044u;
    // 7F303044: lwz     r31, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F303048:
    ctx->pc = 0x7F303048u;
    // 7F303048: or   r25, r7, r7
    {
        ctx->gpr[25] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F30304C:
    ctx->pc = 0x7F30304Cu;
    // 7F30304C: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F303050:
    ctx->pc = 0x7F303050u;
    // 7F303050: or   r27, r9, r9
    {
        ctx->gpr[27] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F303054:
    ctx->pc = 0x7F303054u;
    // 7F303054: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F303058:
    ctx->pc = 0x7F303058u;
    // 7F303058: bl      0x7F302100
    {
            ctx->lr = 0x7F30305Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302100u;
                return;
            }
            goto label_7F302100;
    }

label_7F30305C:
    ctx->pc = 0x7F30305Cu;
    ctx->downcount -= 2;
    // 7F30305C: cmpwi   r3, 0
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

label_7F303060:
    ctx->pc = 0x7F303060u;
    // 7F303060: bc    4, 2, 0x7F30306C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30306C;
        }
    }

label_7F303064:
    ctx->pc = 0x7F303064u;
    ctx->downcount -= 2;
    // 7F303064: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F303068:
    ctx->pc = 0x7F303068u;
    // 7F303068: b       0x7F3030CC
    {
            goto label_7F3030CC;
    }

label_7F30306C:
    ctx->pc = 0x7F30306Cu;
    ctx->downcount -= 12;
    // 7F30306C: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F303070:
    ctx->pc = 0x7F303070u;
    // 7F303070: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303070u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F303074:
    ctx->pc = 0x7F303074u;
    // 7F303074: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F303078:
    ctx->pc = 0x7F303078u;
    // 7F303078: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F30307C:
    ctx->pc = 0x7F30307Cu;
    // 7F30307C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303080:
    ctx->pc = 0x7F303080u;
    // 7F303080: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F303084:
    ctx->pc = 0x7F303084u;
    // 7F303084: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F303088:
    ctx->pc = 0x7F303088u;
    // 7F303088: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30308C:
    ctx->pc = 0x7F30308Cu;
    // 7F30308C: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F303090:
    ctx->pc = 0x7F303090u;
    // 7F303090: or   r9, r28, r28
    {
        ctx->gpr[9] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F303094:
    ctx->pc = 0x7F303094u;
    // 7F303094: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F303098:
    ctx->pc = 0x7F303098u;
    // 7F303098: bl      0x7F302D78
    {
            ctx->lr = 0x7F30309Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F302D78u;
                return;
            }
            goto label_7F302D78;
    }

label_7F30309C:
    ctx->pc = 0x7F30309Cu;
    ctx->downcount -= 3;
    // 7F30309C: lwz     r3, 48(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3030A0:
    ctx->pc = 0x7F3030A0u;
    // 7F3030A0: addi    r4, r22, 180
    ctx->gpr[4] = ctx->gpr[22] + (u32)(s32)(180);

label_7F3030A4:
    ctx->pc = 0x7F3030A4u;
    // 7F3030A4: bl      0x7F300024
    {
            ctx->lr = 0x7F3030A8u;
            ctx->pc = 0x7F300024u;
            return;
    }

label_7F3030A8:
    ctx->pc = 0x7F3030A8u;
    ctx->downcount -= 2;
    // 7F3030A8: cmpwi   r3, 0
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

label_7F3030AC:
    ctx->pc = 0x7F3030ACu;
    // 7F3030AC: bc    4, 2, 0x7F3030B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3030B8;
        }
    }

label_7F3030B0:
    ctx->pc = 0x7F3030B0u;
    ctx->downcount -= 2;
    // 7F3030B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3030B4:
    ctx->pc = 0x7F3030B4u;
    // 7F3030B4: b       0x7F3030CC
    {
            goto label_7F3030CC;
    }

label_7F3030B8:
    ctx->pc = 0x7F3030B8u;
    ctx->downcount -= 5;
    // 7F3030B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3030BC:
    ctx->pc = 0x7F3030BCu;
    // 7F3030BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3030C0:
    ctx->pc = 0x7F3030C0u;
    // 7F3030C0: stw     r3, 344(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3030C4:
    ctx->pc = 0x7F3030C4u;
    // 7F3030C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3030C8:
    ctx->pc = 0x7F3030C8u;
    // 7F3030C8: stw     r0, 396(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3030CC:
    ctx->pc = 0x7F3030CCu;
    ctx->downcount -= 17;
    // 7F3030CC: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3030CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3030D0:
    ctx->pc = 0x7F3030D0u;
    // 7F3030D0: lmw     r22, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3030D4:
    ctx->pc = 0x7F3030D4u;
    // 7F3030D4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3030D8:
    ctx->pc = 0x7F3030D8u;
    // 7F3030D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3030DC:
    ctx->pc = 0x7F3030DCu;
    // 7F3030DC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3030E0:
    ctx->pc = 0x7F3030E0u;
    // 7F3030E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3030E4:
    ctx->pc = 0x7F3030E4u;
    ctx->downcount -= 5;
    // 7F3030E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3030E8:
    ctx->pc = 0x7F3030E8u;
    // 7F3030E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3030EC:
    ctx->pc = 0x7F3030ECu;
    // 7F3030EC: cmpwi   r4, 1
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

label_7F3030F0:
    ctx->pc = 0x7F3030F0u;
    // 7F3030F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3030F4:
    ctx->pc = 0x7F3030F4u;
    // 7F3030F4: bc    12, 2, 0x7F303134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303134;
        }
    }

label_7F3030F8:
    ctx->pc = 0x7F3030F8u;
    ctx->downcount -= 1;
    // 7F3030F8: bc    4, 0, 0x7F303108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303108;
        }
    }

label_7F3030FC:
    ctx->pc = 0x7F3030FCu;
    ctx->downcount -= 2;
    // 7F3030FC: cmpwi   r4, 0
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

label_7F303100:
    ctx->pc = 0x7F303100u;
    // 7F303100: bc    4, 0, 0x7F303114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303114;
        }
    }

label_7F303104:
    ctx->pc = 0x7F303104u;
    ctx->downcount -= 1;
    // 7F303104: b       0x7F30316C
    {
            goto label_7F30316C;
    }

label_7F303108:
    ctx->pc = 0x7F303108u;
    ctx->downcount -= 2;
    // 7F303108: cmpwi   r4, 3
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

label_7F30310C:
    ctx->pc = 0x7F30310Cu;
    // 7F30310C: bc    4, 0, 0x7F30316C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30316C;
        }
    }

label_7F303110:
    ctx->pc = 0x7F303110u;
    ctx->downcount -= 1;
    // 7F303110: b       0x7F303154
    {
            goto label_7F303154;
    }

label_7F303114:
    ctx->pc = 0x7F303114u;
    ctx->downcount -= 8;
    // 7F303114: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F303118:
    ctx->pc = 0x7F303118u;
    // 7F303118: stw     r0, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30311C:
    ctx->pc = 0x7F30311Cu;
    // 7F30311C: stw     r0, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303120:
    ctx->pc = 0x7F303120u;
    // 7F303120: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303124:
    ctx->pc = 0x7F303124u;
    // 7F303124: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303128:
    ctx->pc = 0x7F303128u;
    // 7F303128: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F30312C:
    ctx->pc = 0x7F30312Cu;
    // 7F30312C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303130:
    ctx->pc = 0x7F303130u;
    // 7F303130: b       0x7F303174
    {
            goto label_7F303174;
    }

label_7F303134:
    ctx->pc = 0x7F303134u;
    ctx->downcount -= 8;
    // 7F303134: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F303138:
    ctx->pc = 0x7F303138u;
    // 7F303138: stw     r0, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30313C:
    ctx->pc = 0x7F30313Cu;
    // 7F30313C: stw     r0, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303140:
    ctx->pc = 0x7F303140u;
    // 7F303140: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303144:
    ctx->pc = 0x7F303144u;
    // 7F303144: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303148:
    ctx->pc = 0x7F303148u;
    // 7F303148: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F30314C:
    ctx->pc = 0x7F30314Cu;
    // 7F30314C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303150:
    ctx->pc = 0x7F303150u;
    // 7F303150: b       0x7F303174
    {
            goto label_7F303174;
    }

label_7F303154:
    ctx->pc = 0x7F303154u;
    ctx->downcount -= 5;
    // 7F303154: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F303158:
    ctx->pc = 0x7F303158u;
    // 7F303158: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F30315C:
    ctx->pc = 0x7F30315Cu;
    // 7F30315C: stw     r0, 396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303160:
    ctx->pc = 0x7F303160u;
    // 7F303160: addi    r4, r4, 8344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8344);

label_7F303164:
    ctx->pc = 0x7F303164u;
    // 7F303164: bl      0x7F3C8A30
    {
            ctx->lr = 0x7F303168u;
            ctx->pc = 0x7F3C8A30u;
            return;
    }

label_7F303168:
    ctx->pc = 0x7F303168u;
    ctx->downcount -= 1;
    // 7F303168: b       0x7F303174
    {
            goto label_7F303174;
    }

label_7F30316C:
    ctx->pc = 0x7F30316Cu;
    ctx->downcount -= 1;
    // 7F30316C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F303170u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F303170:
    ctx->pc = 0x7F303170u;
    ctx->downcount -= 1;
    // 7F303170: b       0x7F303178
    {
            goto label_7F303178;
    }

label_7F303174:
    ctx->pc = 0x7F303174u;
    ctx->downcount -= 1;
    // 7F303174: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F303178:
    ctx->pc = 0x7F303178u;
    ctx->downcount -= 5;
    // 7F303178: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30317C:
    ctx->pc = 0x7F30317Cu;
    // 7F30317C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303180:
    ctx->pc = 0x7F303180u;
    // 7F303180: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303184:
    ctx->pc = 0x7F303184u;
    // 7F303184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303188:
    ctx->pc = 0x7F303188u;
    ctx->downcount -= 31;
    // 7F303188: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30318C:
    ctx->pc = 0x7F30318Cu;
    // 7F30318C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303190:
    ctx->pc = 0x7F303190u;
    // 7F303190: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303194:
    ctx->pc = 0x7F303194u;
    // 7F303194: stfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F303198:
    ctx->pc = 0x7F303198u;
    // 7F303198: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303198u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F30319C:
    ctx->pc = 0x7F30319Cu;
    // 7F30319C: stmw     r21, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3031A0:
    ctx->pc = 0x7F3031A0u;
    // 7F3031A0: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3031A4:
    ctx->pc = 0x7F3031A4u;
    // 7F3031A4: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3031A8:
    ctx->pc = 0x7F3031A8u;
    // 7F3031A8: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3031AC:
    ctx->pc = 0x7F3031ACu;
    // 7F3031AC: or   r24, r6, r6
    {
        ctx->gpr[24] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3031B0:
    ctx->pc = 0x7F3031B0u;
    // 7F3031B0: lwz     r29, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3031B4:
    ctx->pc = 0x7F3031B4u;
    // 7F3031B4: lwz     r30, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3031B8:
    ctx->pc = 0x7F3031B8u;
    // 7F3031B8: or   r25, r7, r7
    {
        ctx->gpr[25] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3031BC:
    ctx->pc = 0x7F3031BCu;
    // 7F3031BC: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3031C0:
    ctx->pc = 0x7F3031C0u;
    // 7F3031C0: or   r27, r9, r9
    {
        ctx->gpr[27] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3031C4:
    ctx->pc = 0x7F3031C4u;
    // 7F3031C4: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3031C8:
    ctx->pc = 0x7F3031C8u;
    // 7F3031C8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F3031CC:
    ctx->pc = 0x7F3031CCu;
    // 7F3031CC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F3031D0:
    ctx->pc = 0x7F3031D0u;
    // 7F3031D0: li      r5, 400
    ctx->gpr[5] = (u32)(s32)(400);

label_7F3031D4:
    ctx->pc = 0x7F3031D4u;
    // 7F3031D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3031D8:
    ctx->pc = 0x7F3031D8u;
    // 7F3031D8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3031DCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3031DC:
    ctx->pc = 0x7F3031DCu;
    ctx->downcount -= 2;
    // 7F3031DC: or.   r31, r3, r3
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

label_7F3031E0:
    ctx->pc = 0x7F3031E0u;
    // 7F3031E0: bc    12, 2, 0x7F303284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303284;
        }
    }

label_7F3031E4:
    ctx->pc = 0x7F3031E4u;
    ctx->downcount -= 5;
    // 7F3031E4: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F3031E8:
    ctx->pc = 0x7F3031E8u;
    // 7F3031E8: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F3031EC:
    ctx->pc = 0x7F3031ECu;
    // 7F3031EC: addi    r4, r4, 8344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8344);

label_7F3031F0:
    ctx->pc = 0x7F3031F0u;
    // 7F3031F0: addi    r5, r5, 8240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8240);

label_7F3031F4:
    ctx->pc = 0x7F3031F4u;
    // 7F3031F4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F3031F8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F3031F8:
    ctx->pc = 0x7F3031F8u;
    ctx->downcount -= 25;
    // 7F3031F8: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3031FC:
    ctx->pc = 0x7F3031FCu;
    // 7F3031FC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F303200:
    ctx->pc = 0x7F303200u;
    // 7F303200: srawi r0, r24, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[24];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F303204:
    ctx->pc = 0x7F303204u;
    // 7F303204: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F303208:
    ctx->pc = 0x7F303208u;
    // 7F303208: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F30320C:
    ctx->pc = 0x7F30320Cu;
    // 7F30320C: addi    r11, r3, 32548
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F303210:
    ctx->pc = 0x7F303210u;
    // 7F303210: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303214:
    ctx->pc = 0x7F303214u;
    // 7F303214: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303214u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F303218:
    ctx->pc = 0x7F303218u;
    // 7F303218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30321C:
    ctx->pc = 0x7F30321Cu;
    // 7F30321C: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F303220:
    ctx->pc = 0x7F303220u;
    // 7F303220: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F303224:
    ctx->pc = 0x7F303224u;
    // 7F303224: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F303228:
    ctx->pc = 0x7F303228u;
    // 7F303228: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F30322C:
    ctx->pc = 0x7F30322Cu;
    // 7F30322C: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F303230:
    ctx->pc = 0x7F303230u;
    // 7F303230: or   r8, r25, r25
    {
        ctx->gpr[8] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F303234:
    ctx->pc = 0x7F303234u;
    // 7F303234: or   r9, r26, r26
    {
        ctx->gpr[9] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F303238:
    ctx->pc = 0x7F303238u;
    // 7F303238: or   r10, r27, r27
    {
        ctx->gpr[10] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30323C:
    ctx->pc = 0x7F30323Cu;
    // 7F30323C: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F303240:
    ctx->pc = 0x7F303240u;
    // 7F303240: andc   r7, r24, r0
    {
        ctx->gpr[7] = ctx->gpr[24] & ~ctx->gpr[0];
    }

label_7F303244:
    ctx->pc = 0x7F303244u;
    // 7F303244: stw     r11, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F303248:
    ctx->pc = 0x7F303248u;
    // 7F303248: stw     r21, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F30324C:
    ctx->pc = 0x7F30324Cu;
    // 7F30324C: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F303250:
    ctx->pc = 0x7F303250u;
    // 7F303250: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F303254:
    ctx->pc = 0x7F303254u;
    // 7F303254: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F303258:
    ctx->pc = 0x7F303258u;
    // 7F303258: bl      0x7F303018
    {
            ctx->lr = 0x7F30325Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303018u;
                return;
            }
            goto label_7F303018;
    }

label_7F30325C:
    ctx->pc = 0x7F30325Cu;
    ctx->downcount -= 2;
    // 7F30325C: cmpwi   r3, 0
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

label_7F303260:
    ctx->pc = 0x7F303260u;
    // 7F303260: bc    4, 2, 0x7F303274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303274;
        }
    }

label_7F303264:
    ctx->pc = 0x7F303264u;
    ctx->downcount -= 2;
    // 7F303264: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F303268:
    ctx->pc = 0x7F303268u;
    // 7F303268: bl      0x7F3C8210
    {
            ctx->lr = 0x7F30326Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F30326C:
    ctx->pc = 0x7F30326Cu;
    ctx->downcount -= 2;
    // 7F30326C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F303270:
    ctx->pc = 0x7F303270u;
    // 7F303270: b       0x7F303288
    {
            goto label_7F303288;
    }

label_7F303274:
    ctx->pc = 0x7F303274u;
    ctx->downcount -= 4;
    // 7F303274: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F303278:
    ctx->pc = 0x7F303278u;
    // 7F303278: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30327C:
    ctx->pc = 0x7F30327Cu;
    // 7F30327C: addi    r4, r4, 12516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12516);

label_7F303280:
    ctx->pc = 0x7F303280u;
    // 7F303280: bl      0x7F3C8990
    {
            ctx->lr = 0x7F303284u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F303284:
    ctx->pc = 0x7F303284u;
    ctx->downcount -= 1;
    // 7F303284: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F303288:
    ctx->pc = 0x7F303288u;
    ctx->downcount -= 17;
    // 7F303288: lfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30328C:
    ctx->pc = 0x7F30328Cu;
    // 7F30328C: lmw     r21, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F303290:
    ctx->pc = 0x7F303290u;
    // 7F303290: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303294:
    ctx->pc = 0x7F303294u;
    // 7F303294: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303298:
    ctx->pc = 0x7F303298u;
    // 7F303298: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F30329C:
    ctx->pc = 0x7F30329Cu;
    // 7F30329C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3032A0:
    ctx->pc = 0x7F3032A0u;
    ctx->downcount -= 6;
    // 7F3032A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3032A4:
    ctx->pc = 0x7F3032A4u;
    // 7F3032A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3032A8:
    ctx->pc = 0x7F3032A8u;
    // 7F3032A8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3032AC:
    ctx->pc = 0x7F3032ACu;
    // 7F3032AC: lwz     r5, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3032B0:
    ctx->pc = 0x7F3032B0u;
    // 7F3032B0: cmpwi   r5, 0
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

label_7F3032B4:
    ctx->pc = 0x7F3032B4u;
    // 7F3032B4: bc    12, 2, 0x7F3032E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3032E4;
        }
    }

label_7F3032B8:
    ctx->pc = 0x7F3032B8u;
    ctx->downcount -= 2;
    // 7F3032B8: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3032BC:
    ctx->pc = 0x7F3032BCu;
    // 7F3032BC: bc    12, 2, 0x7F3032E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3032E4;
        }
    }

label_7F3032C0:
    ctx->pc = 0x7F3032C0u;
    ctx->downcount -= 9;
    // 7F3032C0: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3032C4:
    ctx->pc = 0x7F3032C4u;
    // 7F3032C4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F3032C8:
    ctx->pc = 0x7F3032C8u;
    // 7F3032C8: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3032CC:
    ctx->pc = 0x7F3032CCu;
    // 7F3032CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3032D0:
    ctx->pc = 0x7F3032D0u;
    // 7F3032D0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3032D4:
    ctx->pc = 0x7F3032D4u;
    // 7F3032D4: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3032D8:
    ctx->pc = 0x7F3032D8u;
    // 7F3032D8: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3032DC:
    ctx->pc = 0x7F3032DCu;
    // 7F3032DC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3032E0:
    ctx->pc = 0x7F3032E0u;
    // 7F3032E0: bl      0x7F3C7728
    {
            ctx->lr = 0x7F3032E4u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F3032E4:
    ctx->pc = 0x7F3032E4u;
    ctx->downcount -= 5;
    // 7F3032E4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3032E8:
    ctx->pc = 0x7F3032E8u;
    // 7F3032E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3032EC:
    ctx->pc = 0x7F3032ECu;
    // 7F3032EC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3032F0:
    ctx->pc = 0x7F3032F0u;
    // 7F3032F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3032F4:
    ctx->pc = 0x7F3032F4u;
    ctx->downcount -= 3;
    // 7F3032F4: lbz     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3032F8:
    ctx->pc = 0x7F3032F8u;
    // 7F3032F8: cmplwi  r0, 0x0000
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

label_7F3032FC:
    ctx->pc = 0x7F3032FCu;
    // 7F3032FC: bc    4, 2, 0x7F30332C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30332C;
        }
    }

label_7F303300:
    ctx->pc = 0x7F303300u;
    ctx->downcount -= 4;
    // 7F303300: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F303304:
    ctx->pc = 0x7F303304u;
    // 7F303304: lwz     r0, -3576(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303308:
    ctx->pc = 0x7F303308u;
    // 7F303308: cmpwi   r0, 0
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

label_7F30330C:
    ctx->pc = 0x7F30330Cu;
    // 7F30330C: bc    12, 2, 0x7F30332C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30332C;
        }
    }

label_7F303310:
    ctx->pc = 0x7F303310u;
    ctx->downcount -= 5;
    // 7F303310: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F303314:
    ctx->pc = 0x7F303314u;
    // 7F303314: addi    r4, r4, 14256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F303318:
    ctx->pc = 0x7F303318u;
    // 7F303318: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30331C:
    ctx->pc = 0x7F30331Cu;
    // 7F30331C: rlwinm. r0, r0, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F303320:
    ctx->pc = 0x7F303320u;
    // 7F303320: bc    12, 2, 0x7F30332C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30332C;
        }
    }

label_7F303324:
    ctx->pc = 0x7F303324u;
    ctx->downcount -= 2;
    // 7F303324: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F303328:
    ctx->pc = 0x7F303328u;
    // 7F303328: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30332C:
    ctx->pc = 0x7F30332Cu;
    ctx->downcount -= 3;
    // 7F30332C: lwz     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303330:
    ctx->pc = 0x7F303330u;
    // 7F303330: cmpwi   r4, 0
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

label_7F303334:
    ctx->pc = 0x7F303334u;
    // 7F303334: bc    4, 2, 0x7F30334C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30334C;
        }
    }

label_7F303338:
    ctx->pc = 0x7F303338u;
    ctx->downcount -= 5;
    // 7F303338: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30333C:
    ctx->pc = 0x7F30333Cu;
    // 7F30333C: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303340:
    ctx->pc = 0x7F303340u;
    // 7F303340: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F303344:
    ctx->pc = 0x7F303344u;
    // 7F303344: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303348:
    ctx->pc = 0x7F303348u;
    // 7F303348: b       0x7F303370
    {
            goto label_7F303370;
    }

label_7F30334C:
    ctx->pc = 0x7F30334Cu;
    ctx->downcount -= 3;
    // 7F30334C: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303350:
    ctx->pc = 0x7F303350u;
    // 7F303350: cmpw    r4, r0
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

label_7F303354:
    ctx->pc = 0x7F303354u;
    // 7F303354: bc    4, 1, 0x7F303370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303370;
        }
    }

label_7F303358:
    ctx->pc = 0x7F303358u;
    ctx->downcount -= 6;
    // 7F303358: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30335C:
    ctx->pc = 0x7F30335Cu;
    // 7F30335C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F303360:
    ctx->pc = 0x7F303360u;
    // 7F303360: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303364:
    ctx->pc = 0x7F303364u;
    // 7F303364: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F303368:
    ctx->pc = 0x7F303368u;
    // 7F303368: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30336C:
    ctx->pc = 0x7F30336Cu;
    // 7F30336C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303370:
    ctx->pc = 0x7F303370u;
    ctx->downcount -= 4;
    // 7F303370: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303374:
    ctx->pc = 0x7F303374u;
    // 7F303374: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303378:
    ctx->pc = 0x7F303378u;
    // 7F303378: cmpw    r0, r4
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

label_7F30337C:
    ctx->pc = 0x7F30337Cu;
    // 7F30337C: bc    4, 0, 0x7F30339C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30339C;
        }
    }

label_7F303380:
    ctx->pc = 0x7F303380u;
    ctx->downcount -= 46;
    // 7F303380: rlwinm r0, r0, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFF80u;
    }

label_7F303384:
    ctx->pc = 0x7F303384u;
    // 7F303384: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303388:
    ctx->pc = 0x7F303388u;
    // 7F303388: divw   r4, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30338C:
    ctx->pc = 0x7F30338Cu;
    // 7F30338C: li      r0, -256
    ctx->gpr[0] = (u32)(s32)(-256);

label_7F303390:
    ctx->pc = 0x7F303390u;
    // 7F303390: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F303394:
    ctx->pc = 0x7F303394u;
    // 7F303394: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303398:
    ctx->pc = 0x7F303398u;
    // 7F303398: b       0x7F303408
    {
            goto label_7F303408;
    }

label_7F30339C:
    ctx->pc = 0x7F30339Cu;
    ctx->downcount -= 3;
    // 7F30339C: lwz     r6, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3033A0:
    ctx->pc = 0x7F3033A0u;
    // 7F3033A0: cmpw    r0, r6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3033A4:
    ctx->pc = 0x7F3033A4u;
    // 7F3033A4: bc    4, 0, 0x7F3033CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3033CC;
        }
    }

label_7F3033A8:
    ctx->pc = 0x7F3033A8u;
    ctx->downcount -= 6;
    // 7F3033A8: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3033AC:
    ctx->pc = 0x7F3033ACu;
    // 7F3033AC: li      r0, -128
    ctx->gpr[0] = (u32)(s32)(-128);

label_7F3033B0:
    ctx->pc = 0x7F3033B0u;
    // 7F3033B0: stw     r0, 140(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3033B4:
    ctx->pc = 0x7F3033B4u;
    // 7F3033B4: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3033B8:
    ctx->pc = 0x7F3033B8u;
    // 7F3033B8: cmpwi   r0, 0
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

label_7F3033BC:
    ctx->pc = 0x7F3033BCu;
    // 7F3033BC: bc    12, 2, 0x7F303408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303408;
        }
    }

label_7F3033C0:
    ctx->pc = 0x7F3033C0u;
    ctx->downcount -= 3;
    // 7F3033C0: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3033C4:
    ctx->pc = 0x7F3033C4u;
    // 7F3033C4: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3033C8:
    ctx->pc = 0x7F3033C8u;
    // 7F3033C8: b       0x7F303408
    {
            goto label_7F303408;
    }

label_7F3033CC:
    ctx->pc = 0x7F3033CCu;
    ctx->downcount -= 3;
    // 7F3033CC: lwz     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3033D0:
    ctx->pc = 0x7F3033D0u;
    // 7F3033D0: cmpw    r0, r5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3033D4:
    ctx->pc = 0x7F3033D4u;
    // 7F3033D4: bc    4, 0, 0x7F3033FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3033FC;
        }
    }

label_7F3033D8:
    ctx->pc = 0x7F3033D8u;
    ctx->downcount -= 48;
    // 7F3033D8: subf   r4, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F3033DC:
    ctx->pc = 0x7F3033DCu;
    // 7F3033DC: subf   r0, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3033E0:
    ctx->pc = 0x7F3033E0u;
    // 7F3033E0: rlwinm r4, r4, 7, 0, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 7u) & 0xFFFFFF80u;
    }

label_7F3033E4:
    ctx->pc = 0x7F3033E4u;
    // 7F3033E4: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3033E8:
    ctx->pc = 0x7F3033E8u;
    // 7F3033E8: divw   r4, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3033EC:
    ctx->pc = 0x7F3033ECu;
    // 7F3033EC: li      r0, -256
    ctx->gpr[0] = (u32)(s32)(-256);

label_7F3033F0:
    ctx->pc = 0x7F3033F0u;
    // 7F3033F0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F3033F4:
    ctx->pc = 0x7F3033F4u;
    // 7F3033F4: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3033F8:
    ctx->pc = 0x7F3033F8u;
    // 7F3033F8: b       0x7F303408
    {
            goto label_7F303408;
    }

label_7F3033FC:
    ctx->pc = 0x7F3033FCu;
    ctx->downcount -= 3;
    // 7F3033FC: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303400:
    ctx->pc = 0x7F303400u;
    // 7F303400: li      r0, -256
    ctx->gpr[0] = (u32)(s32)(-256);

label_7F303404:
    ctx->pc = 0x7F303404u;
    // 7F303404: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303408:
    ctx->pc = 0x7F303408u;
    ctx->downcount -= 2;
    // 7F303408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30340C:
    ctx->pc = 0x7F30340Cu;
    // 7F30340C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303410:
    ctx->pc = 0x7F303410u;
    ctx->downcount -= 6;
    // 7F303410: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303414:
    ctx->pc = 0x7F303414u;
    // 7F303414: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303418:
    ctx->pc = 0x7F303418u;
    // 7F303418: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30341C:
    ctx->pc = 0x7F30341Cu;
    // 7F30341C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303420:
    ctx->pc = 0x7F303420u;
    // 7F303420: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303424:
    ctx->pc = 0x7F303424u;
    // 7F303424: bl      0x7F3032F4
    {
            ctx->lr = 0x7F303428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3032F4u;
                return;
            }
            goto label_7F3032F4;
    }

label_7F303428:
    ctx->pc = 0x7F303428u;
    ctx->downcount -= 2;
    // 7F303428: cmpwi   r3, 0
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

label_7F30342C:
    ctx->pc = 0x7F30342Cu;
    // 7F30342C: bc    12, 2, 0x7F303458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303458;
        }
    }

label_7F303430:
    ctx->pc = 0x7F303430u;
    ctx->downcount -= 3;
    // 7F303430: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303434:
    ctx->pc = 0x7F303434u;
    // 7F303434: cmplwi  r3, 0x0000
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

label_7F303438:
    ctx->pc = 0x7F303438u;
    // 7F303438: bc    12, 2, 0x7F303440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303440;
        }
    }

label_7F30343C:
    ctx->pc = 0x7F30343Cu;
    ctx->downcount -= 1;
    // 7F30343C: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F303440u;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F303440:
    ctx->pc = 0x7F303440u;
    ctx->downcount -= 2;
    // 7F303440: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303444:
    ctx->pc = 0x7F303444u;
    // 7F303444: bl      0x7F2E4330
    {
            ctx->lr = 0x7F303448u;
            ctx->pc = 0x7F2E4330u;
            return;
    }

label_7F303448:
    ctx->pc = 0x7F303448u;
    ctx->downcount -= 2;
    // 7F303448: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30344C:
    ctx->pc = 0x7F30344Cu;
    // 7F30344C: bl      0x7F3032A0
    {
            ctx->lr = 0x7F303450u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3032A0u;
                return;
            }
            goto label_7F3032A0;
    }

label_7F303450:
    ctx->pc = 0x7F303450u;
    ctx->downcount -= 2;
    // 7F303450: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F303454:
    ctx->pc = 0x7F303454u;
    // 7F303454: bl      0x7F3C8210
    {
            ctx->lr = 0x7F303458u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F303458:
    ctx->pc = 0x7F303458u;
    ctx->downcount -= 9;
    // 7F303458: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30345C:
    ctx->pc = 0x7F30345Cu;
    // 7F30345C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F303460:
    ctx->pc = 0x7F303460u;
    // 7F303460: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303464:
    ctx->pc = 0x7F303464u;
    // 7F303464: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F303468:
    ctx->pc = 0x7F303468u;
    // 7F303468: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30346C:
    ctx->pc = 0x7F30346Cu;
    // 7F30346C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303470:
    ctx->pc = 0x7F303470u;
    // 7F303470: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303474:
    ctx->pc = 0x7F303474u;
    // 7F303474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303478:
    ctx->pc = 0x7F303478u;
    ctx->downcount -= 1;
    // 7F303478: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F30347C:
    ctx->pc = 0x7F30347Cu;
    ctx->downcount -= 7;
    // 7F30347C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303480:
    ctx->pc = 0x7F303480u;
    // 7F303480: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303484:
    ctx->pc = 0x7F303484u;
    // 7F303484: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303488:
    ctx->pc = 0x7F303488u;
    // 7F303488: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30348C:
    ctx->pc = 0x7F30348Cu;
    // 7F30348C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303490:
    ctx->pc = 0x7F303490u;
    // 7F303490: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F303494:
    ctx->pc = 0x7F303494u;
    // 7F303494: bl      0x7F3C664C
    {
            ctx->lr = 0x7F303498u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F303498:
    ctx->pc = 0x7F303498u;
    ctx->downcount -= 2;
    // 7F303498: cmplwi  r3, 0x0000
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

label_7F30349C:
    ctx->pc = 0x7F30349Cu;
    // 7F30349C: bc    12, 2, 0x7F3034A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3034A8;
        }
    }

label_7F3034A0:
    ctx->pc = 0x7F3034A0u;
    ctx->downcount -= 1;
    // 7F3034A0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034A4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034A4:
    ctx->pc = 0x7F3034A4u;
    ctx->downcount -= 1;
    // 7F3034A4: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3034A8:
    ctx->pc = 0x7F3034A8u;
    ctx->downcount -= 2;
    // 7F3034A8: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F3034AC:
    ctx->pc = 0x7F3034ACu;
    // 7F3034AC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3034B0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3034B0:
    ctx->pc = 0x7F3034B0u;
    ctx->downcount -= 2;
    // 7F3034B0: cmplwi  r3, 0x0000
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

label_7F3034B4:
    ctx->pc = 0x7F3034B4u;
    // 7F3034B4: bc    12, 2, 0x7F3034E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3034E0;
        }
    }

label_7F3034B8:
    ctx->pc = 0x7F3034B8u;
    ctx->downcount -= 1;
    // 7F3034B8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034BCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034BC:
    ctx->pc = 0x7F3034BCu;
    ctx->downcount -= 2;
    // 7F3034BC: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3034C0:
    ctx->pc = 0x7F3034C0u;
    // 7F3034C0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034C4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034C4:
    ctx->pc = 0x7F3034C4u;
    ctx->downcount -= 4;
    // 7F3034C4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3034C8:
    ctx->pc = 0x7F3034C8u;
    // 7F3034C8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3034CC:
    ctx->pc = 0x7F3034CCu;
    // 7F3034CC: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3034D0:
    ctx->pc = 0x7F3034D0u;
    // 7F3034D0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034D4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034D4:
    ctx->pc = 0x7F3034D4u;
    ctx->downcount -= 3;
    // 7F3034D4: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3034D8:
    ctx->pc = 0x7F3034D8u;
    // 7F3034D8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3034DC:
    ctx->pc = 0x7F3034DCu;
    // 7F3034DC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3034E0:
    ctx->pc = 0x7F3034E0u;
    ctx->downcount -= 2;
    // 7F3034E0: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F3034E4:
    ctx->pc = 0x7F3034E4u;
    // 7F3034E4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3034E8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3034E8:
    ctx->pc = 0x7F3034E8u;
    ctx->downcount -= 2;
    // 7F3034E8: cmplwi  r3, 0x0000
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

label_7F3034EC:
    ctx->pc = 0x7F3034ECu;
    // 7F3034EC: bc    12, 2, 0x7F303500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303500;
        }
    }

label_7F3034F0:
    ctx->pc = 0x7F3034F0u;
    ctx->downcount -= 1;
    // 7F3034F0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034F4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034F4:
    ctx->pc = 0x7F3034F4u;
    ctx->downcount -= 2;
    // 7F3034F4: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3034F8:
    ctx->pc = 0x7F3034F8u;
    // 7F3034F8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3034FCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3034FC:
    ctx->pc = 0x7F3034FCu;
    ctx->downcount -= 1;
    // 7F3034FC: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303500:
    ctx->pc = 0x7F303500u;
    ctx->downcount -= 2;
    // 7F303500: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F303504:
    ctx->pc = 0x7F303504u;
    // 7F303504: bl      0x7F3C664C
    {
            ctx->lr = 0x7F303508u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F303508:
    ctx->pc = 0x7F303508u;
    ctx->downcount -= 2;
    // 7F303508: cmplwi  r3, 0x0000
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

label_7F30350C:
    ctx->pc = 0x7F30350Cu;
    // 7F30350C: bc    12, 2, 0x7F30351C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30351C;
        }
    }

label_7F303510:
    ctx->pc = 0x7F303510u;
    ctx->downcount -= 3;
    // 7F303510: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F303514:
    ctx->pc = 0x7F303514u;
    // 7F303514: stb     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F303518:
    ctx->pc = 0x7F303518u;
    // 7F303518: b       0x7F303524
    {
            goto label_7F303524;
    }

label_7F30351C:
    ctx->pc = 0x7F30351Cu;
    ctx->downcount -= 2;
    // 7F30351C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F303520:
    ctx->pc = 0x7F303520u;
    // 7F303520: stb     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F303524:
    ctx->pc = 0x7F303524u;
    ctx->downcount -= 6;
    // 7F303524: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303528:
    ctx->pc = 0x7F303528u;
    // 7F303528: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30352C:
    ctx->pc = 0x7F30352Cu;
    // 7F30352C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303530:
    ctx->pc = 0x7F303530u;
    // 7F303530: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303534:
    ctx->pc = 0x7F303534u;
    // 7F303534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303538:
    ctx->pc = 0x7F303538u;
    ctx->downcount -= 6;
    // 7F303538: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30353C:
    ctx->pc = 0x7F30353Cu;
    // 7F30353C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303540:
    ctx->pc = 0x7F303540u;
    // 7F303540: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303544:
    ctx->pc = 0x7F303544u;
    // 7F303544: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303548:
    ctx->pc = 0x7F303548u;
    // 7F303548: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30354C:
    ctx->pc = 0x7F30354Cu;
    // 7F30354C: bl      0x7F30347C
    {
            ctx->lr = 0x7F303550u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30347Cu;
                return;
            }
            goto label_7F30347C;
    }

label_7F303550:
    ctx->pc = 0x7F303550u;
    ctx->downcount -= 2;
    // 7F303550: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303554:
    ctx->pc = 0x7F303554u;
    // 7F303554: bl      0x7F2E425C
    {
            ctx->lr = 0x7F303558u;
            ctx->pc = 0x7F2E425Cu;
            return;
    }

label_7F303558:
    ctx->pc = 0x7F303558u;
    ctx->downcount -= 5;
    // 7F303558: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30355C:
    ctx->pc = 0x7F30355Cu;
    // 7F30355C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F303560:
    ctx->pc = 0x7F303560u;
    // 7F303560: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F303564:
    ctx->pc = 0x7F303564u;
    // 7F303564: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F303568:
    ctx->pc = 0x7F303568u;
    // 7F303568: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F30356Cu;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F30356C:
    ctx->pc = 0x7F30356Cu;
    ctx->downcount -= 5;
    // 7F30356C: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303570:
    ctx->pc = 0x7F303570u;
    // 7F303570: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303574:
    ctx->pc = 0x7F303574u;
    // 7F303574: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303578:
    ctx->pc = 0x7F303578u;
    // 7F303578: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30357C:
    ctx->pc = 0x7F30357Cu;
    // 7F30357C: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F303580u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F303580:
    ctx->pc = 0x7F303580u;
    ctx->downcount -= 9;
    // 7F303580: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F303584:
    ctx->pc = 0x7F303584u;
    // 7F303584: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F303588:
    ctx->pc = 0x7F303588u;
    // 7F303588: addi    r5, r3, 32264
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32264);

label_7F30358C:
    ctx->pc = 0x7F30358Cu;
    // 7F30358C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303590:
    ctx->pc = 0x7F303590u;
    // 7F303590: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303594:
    ctx->pc = 0x7F303594u;
    // 7F303594: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303598:
    ctx->pc = 0x7F303598u;
    // 7F303598: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30359C:
    ctx->pc = 0x7F30359Cu;
    // 7F30359C: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035A0:
    ctx->pc = 0x7F3035A0u;
    // 7F3035A0: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F3035A4u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F3035A4:
    ctx->pc = 0x7F3035A4u;
    ctx->downcount -= 7;
    // 7F3035A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3035A8:
    ctx->pc = 0x7F3035A8u;
    // 7F3035A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3035AC:
    ctx->pc = 0x7F3035ACu;
    // 7F3035AC: addi    r5, r3, 32272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32272);

label_7F3035B0:
    ctx->pc = 0x7F3035B0u;
    // 7F3035B0: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035B4:
    ctx->pc = 0x7F3035B4u;
    // 7F3035B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3035B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3035B8:
    ctx->pc = 0x7F3035B8u;
    // 7F3035B8: lfs     f2, 32276(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3035B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3035BC:
    ctx->pc = 0x7F3035BCu;
    // 7F3035BC: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F3035C0u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F3035C0:
    ctx->pc = 0x7F3035C0u;
    ctx->downcount -= 10;
    // 7F3035C0: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035C4:
    ctx->pc = 0x7F3035C4u;
    // 7F3035C4: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F3035C8:
    ctx->pc = 0x7F3035C8u;
    // 7F3035C8: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3035CC:
    ctx->pc = 0x7F3035CCu;
    // 7F3035CC: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035D0:
    ctx->pc = 0x7F3035D0u;
    // 7F3035D0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3035D4:
    ctx->pc = 0x7F3035D4u;
    // 7F3035D4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3035D8:
    ctx->pc = 0x7F3035D8u;
    // 7F3035D8: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3035DC:
    ctx->pc = 0x7F3035DCu;
    // 7F3035DC: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3035E0:
    ctx->pc = 0x7F3035E0u;
    // 7F3035E0: cmpwi   r0, 0
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

label_7F3035E4:
    ctx->pc = 0x7F3035E4u;
    // 7F3035E4: bc    12, 2, 0x7F3035F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3035F8;
        }
    }

label_7F3035E8:
    ctx->pc = 0x7F3035E8u;
    ctx->downcount -= 4;
    // 7F3035E8: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035EC:
    ctx->pc = 0x7F3035ECu;
    // 7F3035EC: li      r0, -256
    ctx->gpr[0] = (u32)(s32)(-256);

label_7F3035F0:
    ctx->pc = 0x7F3035F0u;
    // 7F3035F0: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3035F4:
    ctx->pc = 0x7F3035F4u;
    // 7F3035F4: b       0x7F303604
    {
            goto label_7F303604;
    }

label_7F3035F8:
    ctx->pc = 0x7F3035F8u;
    ctx->downcount -= 3;
    // 7F3035F8: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3035FC:
    ctx->pc = 0x7F3035FCu;
    // 7F3035FC: li      r0, -128
    ctx->gpr[0] = (u32)(s32)(-128);

label_7F303600:
    ctx->pc = 0x7F303600u;
    // 7F303600: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303604:
    ctx->pc = 0x7F303604u;
    ctx->downcount -= 6;
    // 7F303604: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303608:
    ctx->pc = 0x7F303608u;
    // 7F303608: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30360C:
    ctx->pc = 0x7F30360Cu;
    // 7F30360C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303610:
    ctx->pc = 0x7F303610u;
    // 7F303610: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F303614:
    ctx->pc = 0x7F303614u;
    // 7F303614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303618:
    ctx->pc = 0x7F303618u;
    ctx->downcount -= 20;
    // 7F303618: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30361C:
    ctx->pc = 0x7F30361Cu;
    // 7F30361C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303620:
    ctx->pc = 0x7F303620u;
    // 7F303620: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F303624:
    ctx->pc = 0x7F303624u;
    // 7F303624: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F303628:
    ctx->pc = 0x7F303628u;
    // 7F303628: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30362C:
    ctx->pc = 0x7F30362Cu;
    // 7F30362C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F303630:
    ctx->pc = 0x7F303630u;
    // 7F303630: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F303634:
    ctx->pc = 0x7F303634u;
    // 7F303634: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303638:
    ctx->pc = 0x7F303638u;
    // 7F303638: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F30363C:
    ctx->pc = 0x7F30363Cu;
    // 7F30363C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F303640u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F303640:
    ctx->pc = 0x7F303640u;
    ctx->downcount -= 2;
    // 7F303640: or.   r31, r3, r3
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

label_7F303644:
    ctx->pc = 0x7F303644u;
    // 7F303644: bc    12, 2, 0x7F3036B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3036B0;
        }
    }

label_7F303648:
    ctx->pc = 0x7F303648u;
    ctx->downcount -= 12;
    // 7F303648: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F30364C:
    ctx->pc = 0x7F30364Cu;
    // 7F30364C: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F303650:
    ctx->pc = 0x7F303650u;
    // 7F303650: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F303654:
    ctx->pc = 0x7F303654u;
    // 7F303654: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F303658:
    ctx->pc = 0x7F303658u;
    // 7F303658: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30365C:
    ctx->pc = 0x7F30365Cu;
    // 7F30365C: li      r0, 184
    ctx->gpr[0] = (u32)(s32)(184);

label_7F303660:
    ctx->pc = 0x7F303660u;
    // 7F303660: addi    r4, r4, 13328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13328);

label_7F303664:
    ctx->pc = 0x7F303664u;
    // 7F303664: addi    r5, r5, 13432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13432);

label_7F303668:
    ctx->pc = 0x7F303668u;
    // 7F303668: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30366C:
    ctx->pc = 0x7F30366Cu;
    // 7F30366C: li      r0, 248
    ctx->gpr[0] = (u32)(s32)(248);

label_7F303670:
    ctx->pc = 0x7F303670u;
    // 7F303670: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303674:
    ctx->pc = 0x7F303674u;
    // 7F303674: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F303678u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F303678:
    ctx->pc = 0x7F303678u;
    ctx->downcount -= 12;
    // 7F303678: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30367C:
    ctx->pc = 0x7F30367Cu;
    // 7F30367C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F303680:
    ctx->pc = 0x7F303680u;
    // 7F303680: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F303684:
    ctx->pc = 0x7F303684u;
    // 7F303684: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F303688:
    ctx->pc = 0x7F303688u;
    // 7F303688: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F30368C:
    ctx->pc = 0x7F30368Cu;
    // 7F30368C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F303690:
    ctx->pc = 0x7F303690u;
    // 7F303690: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303694:
    ctx->pc = 0x7F303694u;
    // 7F303694: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303698:
    ctx->pc = 0x7F303698u;
    // 7F303698: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30369C:
    ctx->pc = 0x7F30369Cu;
    // 7F30369C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3036A0:
    ctx->pc = 0x7F3036A0u;
    // 7F3036A0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3036A4:
    ctx->pc = 0x7F3036A4u;
    // 7F3036A4: bl      0x7F303538
    {
            ctx->lr = 0x7F3036A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303538u;
                return;
            }
            goto label_7F303538;
    }

label_7F3036A8:
    ctx->pc = 0x7F3036A8u;
    ctx->downcount -= 2;
    // 7F3036A8: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3036AC:
    ctx->pc = 0x7F3036ACu;
    // 7F3036AC: bl      0x7F0208E4
    {
            ctx->lr = 0x7F3036B0u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F3036B0:
    ctx->pc = 0x7F3036B0u;
    ctx->downcount -= 17;
    // 7F3036B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3036B4:
    ctx->pc = 0x7F3036B4u;
    // 7F3036B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3036B8:
    ctx->pc = 0x7F3036B8u;
    // 7F3036B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3036BC:
    ctx->pc = 0x7F3036BCu;
    // 7F3036BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3036C0:
    ctx->pc = 0x7F3036C0u;
    // 7F3036C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3036C4:
    ctx->pc = 0x7F3036C4u;
    // 7F3036C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3036C8:
    ctx->pc = 0x7F3036C8u;
    ctx->downcount -= 4;
    // 7F3036C8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F3036CC:
    ctx->pc = 0x7F3036CCu;
    // 7F3036CC: addi    r3, r3, -32744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32744);

label_7F3036D0:
    ctx->pc = 0x7F3036D0u;
    // 7F3036D0: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3036D4:
    ctx->pc = 0x7F3036D4u;
    // 7F3036D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3036D8:
    ctx->pc = 0x7F3036D8u;
    ctx->downcount -= 17;
    // 7F3036D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3036DC:
    ctx->pc = 0x7F3036DCu;
    // 7F3036DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3036E0:
    ctx->pc = 0x7F3036E0u;
    // 7F3036E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3036E4:
    ctx->pc = 0x7F3036E4u;
    // 7F3036E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3036E8:
    ctx->pc = 0x7F3036E8u;
    // 7F3036E8: or.   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3036EC:
    ctx->pc = 0x7F3036ECu;
    // 7F3036EC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3036F0:
    ctx->pc = 0x7F3036F0u;
    // 7F3036F0: bc    12, 0, 0x7F3036FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3036FC;
        }
    }

label_7F3036F4:
    ctx->pc = 0x7F3036F4u;
    ctx->downcount -= 2;
    // 7F3036F4: cmpwi   r31, 54
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(54);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3036F8:
    ctx->pc = 0x7F3036F8u;
    // 7F3036F8: bc    4, 1, 0x7F303704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303704;
        }
    }

label_7F3036FC:
    ctx->pc = 0x7F3036FCu;
    ctx->downcount -= 2;
    // 7F3036FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F303700:
    ctx->pc = 0x7F303700u;
    // 7F303700: b       0x7F303748
    {
            goto label_7F303748;
    }

label_7F303704:
    ctx->pc = 0x7F303704u;
    ctx->downcount -= 12;
    // 7F303704: mulli   r6, r31, 84
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)84);

label_7F303708:
    ctx->pc = 0x7F303708u;
    // 7F303708: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F30370C:
    ctx->pc = 0x7F30370Cu;
    // 7F30370C: lis     r8, 120
    ctx->gpr[8] = ((u32)(s32)(120) << 16);

label_7F303710:
    ctx->pc = 0x7F303710u;
    // 7F303710: addi    r0, r5, 32520
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32520);

label_7F303714:
    ctx->pc = 0x7F303714u;
    // 7F303714: lis     r5, 152
    ctx->gpr[5] = ((u32)(s32)(152) << 16);

label_7F303718:
    ctx->pc = 0x7F303718u;
    // 7F303718: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30371C:
    ctx->pc = 0x7F30371Cu;
    // 7F30371C: addi    r4, r8, -5739
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(-5739);

label_7F303720:
    ctx->pc = 0x7F303720u;
    // 7F303720: add   r6, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F303724:
    ctx->pc = 0x7F303724u;
    // 7F303724: addi    r5, r5, 16281
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16281);

label_7F303728:
    ctx->pc = 0x7F303728u;
    // 7F303728: bl      0x7F0FAF74
    {
            ctx->lr = 0x7F30372Cu;
            ctx->pc = 0x7F0FAF74u;
            return;
    }

label_7F30372C:
    ctx->pc = 0x7F30372Cu;
    ctx->downcount -= 3;
    // 7F30372C: cmplwi  r3, 0x0000
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

label_7F303730:
    ctx->pc = 0x7F303730u;
    // 7F303730: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303734:
    ctx->pc = 0x7F303734u;
    // 7F303734: bc    4, 2, 0x7F303740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303740;
        }
    }

label_7F303738:
    ctx->pc = 0x7F303738u;
    ctx->downcount -= 2;
    // 7F303738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30373C:
    ctx->pc = 0x7F30373Cu;
    // 7F30373C: b       0x7F303748
    {
            goto label_7F303748;
    }

label_7F303740:
    ctx->pc = 0x7F303740u;
    ctx->downcount -= 2;
    // 7F303740: stw     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303744:
    ctx->pc = 0x7F303744u;
    // 7F303744: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F303748:
    ctx->pc = 0x7F303748u;
    ctx->downcount -= 16;
    // 7F303748: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30374C:
    ctx->pc = 0x7F30374Cu;
    // 7F30374C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303750:
    ctx->pc = 0x7F303750u;
    // 7F303750: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303754:
    ctx->pc = 0x7F303754u;
    // 7F303754: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303758:
    ctx->pc = 0x7F303758u;
    // 7F303758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F30375C:
    ctx->pc = 0x7F30375Cu;
    ctx->downcount -= 53;
    // 7F30375C: stwu     r1, -496(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-496);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303760:
    ctx->pc = 0x7F303760u;
    // 7F303760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303764:
    ctx->pc = 0x7F303764u;
    // 7F303764: stw     r0, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303768:
    ctx->pc = 0x7F303768u;
    // 7F303768: stfd     f31, 480(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F30376C:
    ctx->pc = 0x7F30376Cu;
    // 7F30376C: psq_st   f31, 488(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30376Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F30376Cu);
        if (ctx->exception) return;
    }

label_7F303770:
    ctx->pc = 0x7F303770u;
    // 7F303770: stfd     f30, 464(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F303774:
    ctx->pc = 0x7F303774u;
    // 7F303774: psq_st   f30, 472(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F303774u);
        if (ctx->exception) return;
    }

label_7F303778:
    ctx->pc = 0x7F303778u;
    // 7F303778: stfd     f29, 448(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F30377C:
    ctx->pc = 0x7F30377Cu;
    // 7F30377C: psq_st   f29, 456(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30377Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F30377Cu);
        if (ctx->exception) return;
    }

label_7F303780:
    ctx->pc = 0x7F303780u;
    // 7F303780: stfd     f28, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F303784:
    ctx->pc = 0x7F303784u;
    // 7F303784: psq_st   f28, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F303784u);
        if (ctx->exception) return;
    }

label_7F303788:
    ctx->pc = 0x7F303788u;
    // 7F303788: stfd     f27, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F30378C:
    ctx->pc = 0x7F30378Cu;
    // 7F30378C: psq_st   f27, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30378Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F30378Cu);
        if (ctx->exception) return;
    }

label_7F303790:
    ctx->pc = 0x7F303790u;
    // 7F303790: stfd     f26, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303790u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F303794:
    ctx->pc = 0x7F303794u;
    // 7F303794: psq_st   f26, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F303794u);
        if (ctx->exception) return;
    }

label_7F303798:
    ctx->pc = 0x7F303798u;
    // 7F303798: stfd     f25, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303798u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F30379C:
    ctx->pc = 0x7F30379Cu;
    // 7F30379C: psq_st   f25, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30379Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F30379Cu);
        if (ctx->exception) return;
    }

label_7F3037A0:
    ctx->pc = 0x7F3037A0u;
    // 7F3037A0: stmw     r14, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3037A4:
    ctx->pc = 0x7F3037A4u;
    // 7F3037A4: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F3037A8:
    ctx->pc = 0x7F3037A8u;
    // 7F3037A8: lwz     r9, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3037AC:
    ctx->pc = 0x7F3037ACu;
    // 7F3037AC: lfs     f0, 32280(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F3037ACu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3037B0:
    ctx->pc = 0x7F3037B0u;
    // 7F3037B0: or   r17, r5, r5
    {
        ctx->gpr[17] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3037B4:
    ctx->pc = 0x7F3037B4u;
    // 7F3037B4: lwz     r0, 80(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3037B8:
    ctx->pc = 0x7F3037B8u;
    // 7F3037B8: lis     r5, -32728
    ctx->gpr[5] = ((u32)(s32)(-32728) << 16);

label_7F3037BC:
    ctx->pc = 0x7F3037BCu;
    // 7F3037BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3037BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3037C0:
    ctx->pc = 0x7F3037C0u;
    // 7F3037C0: addi    r8, r5, -8740
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-8740);

label_7F3037C4:
    ctx->pc = 0x7F3037C4u;
    // 7F3037C4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3037C8:
    ctx->pc = 0x7F3037C8u;
    // 7F3037C8: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3037CC:
    ctx->pc = 0x7F3037CCu;
    // 7F3037CC: lwz     r0, 84(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3037D0:
    ctx->pc = 0x7F3037D0u;
    // 7F3037D0: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3037D4:
    ctx->pc = 0x7F3037D4u;
    // 7F3037D4: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3037D8:
    ctx->pc = 0x7F3037D8u;
    // 7F3037D8: addi    r0, r5, -1052
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F3037DC:
    ctx->pc = 0x7F3037DCu;
    // 7F3037DC: lfs     f26, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F3037DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F3037E0:
    ctx->pc = 0x7F3037E0u;
    // 7F3037E0: or   r16, r4, r4
    {
        ctx->gpr[16] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3037E4:
    ctx->pc = 0x7F3037E4u;
    // 7F3037E4: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3037E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3037E8:
    ctx->pc = 0x7F3037E8u;
    // 7F3037E8: or   r18, r7, r7
    {
        ctx->gpr[18] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3037EC:
    ctx->pc = 0x7F3037ECu;
    // 7F3037EC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3037F0:
    ctx->pc = 0x7F3037F0u;
    // 7F3037F0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3037F4:
    ctx->pc = 0x7F3037F4u;
    // 7F3037F4: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3037F8:
    ctx->pc = 0x7F3037F8u;
    // 7F3037F8: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3037FC:
    ctx->pc = 0x7F3037FCu;
    // 7F3037FC: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303800:
    ctx->pc = 0x7F303800u;
    // 7F303800: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303804:
    ctx->pc = 0x7F303804u;
    // 7F303804: b       0x7F303CBC
    {
            goto label_7F303CBC;
    }

label_7F303808:
    ctx->pc = 0x7F303808u;
    ctx->downcount -= 3;
    // 7F303808: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30380C:
    // 7F30380C: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F303810:
    // 7F303810: bc    12, 2, 0x7F30382C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30382C;
        }
    }

label_7F303814:
    ctx->downcount -= 6;
    // 7F303814: addi    r0, r31, 660
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(660);

label_7F303818:
    ctx->pc = 0x7F303818u;
    // 7F303818: lwzx    r3, r17, r0
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30381C:
    ctx->pc = 0x7F30381Cu;
    // 7F30381C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303820:
    ctx->pc = 0x7F303820u;
    // 7F303820: lha     r3, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303824:
    // 7F303824: cmpw    r3, r0
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

label_7F303828:
    // 7F303828: bc    4, 2, 0x7F303CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303CB4;
        }
    }

label_7F30382C:
    ctx->downcount -= 9;
    // 7F30382C: addi    r21, r31, 444
    ctx->gpr[21] = ctx->gpr[31] + (u32)(s32)(444);

label_7F303830:
    // 7F303830: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F303834:
    // 7F303834: add   r21, r17, r21
    {
        u32 a = ctx->gpr[17];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F303838:
    ctx->pc = 0x7F303838u;
    // 7F303838: lwz     r5, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30383C:
    // 7F30383C: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F303840:
    ctx->pc = 0x7F303840u;
    // 7F303840: lha     r0, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303844:
    ctx->pc = 0x7F303844u;
    // 7F303844: lwz     r24, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F303848:
    ctx->pc = 0x7F303848u;
    // 7F303848: stw     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30384C:
    // 7F30384C: bl      0x7F303E3C
    {
            ctx->lr = 0x7F303850u;
            goto label_7F303E3C;
    }

label_7F303850:
    ctx->downcount -= 21;
    // 7F303850: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303854:
    ctx->pc = 0x7F303854u;
    // 7F303854: lwz     r5, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303858:
    // 7F303858: addi    r7, r3, -1052
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F30385C:
    ctx->pc = 0x7F30385Cu;
    // 7F30385C: lwz     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303860:
    // 7F303860: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303864:
    // 7F303864: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F303868:
    ctx->pc = 0x7F303868u;
    // 7F303868: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30386C:
    // 7F30386C: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F303870:
    ctx->pc = 0x7F303870u;
    // 7F303870: lfs     f0, 32296(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F303870u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F303874:
    // 7F303874: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F303878:
    ctx->pc = 0x7F303878u;
    // 7F303878: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30387C:
    // 7F30387C: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F303880:
    // 7F303880: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F303884:
    ctx->pc = 0x7F303884u;
    // 7F303884: lwz     r6, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F303888:
    ctx->pc = 0x7F303888u;
    // 7F303888: lwz     r3, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30388C:
    ctx->pc = 0x7F30388Cu;
    // 7F30388C: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303890:
    ctx->pc = 0x7F303890u;
    // 7F303890: lwz     r3, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303894:
    ctx->pc = 0x7F303894u;
    // 7F303894: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303898:
    ctx->pc = 0x7F303898u;
    // 7F303898: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F303898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30389C:
    ctx->pc = 0x7F30389Cu;
    // 7F30389C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3038A0:
    loop_7F3038A0(ctx);
    if (ctx->pc == 0x7F3038B4u) goto label_7F3038B4;
    return;
label_7F3038A4:
    ctx->pc = 0x7F3038A4u;
    // 7F3038A4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3038A8:
    ctx->pc = 0x7F3038A8u;
    // 7F3038A8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3038AC:
    ctx->pc = 0x7F3038ACu;
    // 7F3038AC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3038B0:
    // 7F3038B0: bc    16, 0, 0x7F3038A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3038A0u;
                return;
            }
            goto label_7F3038A0;
        }
    }

label_7F3038B4:
    ctx->downcount -= 6;
    // 7F3038B4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3038B8:
    // 7F3038B8: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3038BC:
    // 7F3038BC: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3038C0:
    // 7F3038C0: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3038C4:
    // 7F3038C4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3038C8:
    // 7F3038C8: bl      0x7F114508
    {
            ctx->lr = 0x7F3038CCu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3038CC:
    ctx->downcount -= 16;
    // 7F3038CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3038D0:
    // 7F3038D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3038D4:
    // 7F3038D4: addi    r6, r3, 32288
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(32288);

label_7F3038D8:
    // 7F3038D8: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F3038DC:
    // 7F3038DC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3038E0:
    // 7F3038E0: addi    r5, r4, 32300
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32300);

label_7F3038E4:
    // 7F3038E4: addi    r14, r3, -1084
    ctx->gpr[14] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F3038E8:
    // 7F3038E8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3038EC:
    // 7F3038EC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3038F0:
    ctx->pc = 0x7F3038F0u;
    // 7F3038F0: lfd     f30, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3038F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3038F4:
    // 7F3038F4: addi    r0, r3, -1052
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3038F8:
    ctx->pc = 0x7F3038F8u;
    // 7F3038F8: lfs     f31, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3038F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F3038FC:
    ctx->pc = 0x7F3038FCu;
    // 7F3038FC: stw     r0, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303900:
    // 7F303900: addi    r28, r4, -1068
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F303904:
    // 7F303904: lis     r27, 17200
    ctx->gpr[27] = ((u32)(s32)(17200) << 16);

label_7F303908:
    // 7F303908: b       0x7F303CA8
    {
            goto label_7F303CA8;
    }

label_7F30390C:
    ctx->pc = 0x7F30390Cu;
    ctx->downcount -= 8;
    // 7F30390C: lwz     r0, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303910:
    // 7F303910: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F303914:
    ctx->pc = 0x7F303914u;
    // 7F303914: lhz     r3, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F303918:
    // 7F303918: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F30391C:
    ctx->pc = 0x7F30391Cu;
    // 7F30391C: stw     r0, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303920:
    // 7F303920: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F303924:
    ctx->pc = 0x7F303924u;
    // 7F303924: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303928:
    // 7F303928: b       0x7F303C94
    {
            goto label_7F303C94;
    }

label_7F30392C:
    ctx->pc = 0x7F30392Cu;
    ctx->downcount -= 5;
    // 7F30392C: lwz     r0, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303930:
    // 7F303930: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F303934:
    // 7F303934: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F303938:
    // 7F303938: add   r25, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F30393C:
    // 7F30393C: b       0x7F303C80
    {
            goto label_7F303C80;
    }

label_7F303940:
    ctx->pc = 0x7F303940u;
    ctx->downcount -= 61;
    // 7F303940: lwz     r5, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303944:
    // 7F303944: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F303948:
    ctx->pc = 0x7F303948u;
    // 7F303948: lwz     r4, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30394C:
    ctx->pc = 0x7F30394Cu;
    // 7F30394C: lhzx    r0, r5, r29
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[29];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F303950:
    ctx->pc = 0x7F303950u;
    // 7F303950: lwz     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F303954:
    // 7F303954: mulli   r5, r0, 6
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)6);

label_7F303958:
    ctx->pc = 0x7F303958u;
    // 7F303958: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30395C:
    ctx->pc = 0x7F30395Cu;
    // 7F30395C: lhzx    r6, r6, r29
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F303960:
    ctx->pc = 0x7F303960u;
    // 7F303960: stw     r27, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303964:
    // 7F303964: add   r5, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F303968:
    ctx->pc = 0x7F303968u;
    // 7F303968: lfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F303968u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30396C:
    ctx->pc = 0x7F30396Cu;
    // 7F30396C: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303970:
    // 7F303970: mulli   r6, r6, 3
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)3);

label_7F303974:
    ctx->pc = 0x7F303974u;
    // 7F303974: stw     r27, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303978:
    // 7F303978: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F30397C:
    ctx->pc = 0x7F30397Cu;
    // 7F30397C: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303980:
    ctx->pc = 0x7F303980u;
    // 7F303980: lwz     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303984:
    ctx->pc = 0x7F303984u;
    // 7F303984: lfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303988:
    // 7F303988: add   r6, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30398C:
    ctx->pc = 0x7F30398Cu;
    // 7F30398C: stw     r27, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303990:
    ctx->pc = 0x7F303990u;
    // 7F303990: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303990u)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F303994:
    ctx->pc = 0x7F303994u;
    // 7F303994: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F303998:
    ctx->pc = 0x7F303998u;
    // 7F303998: lbz     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F30399C:
    // 7F30399C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3039A0:
    ctx->pc = 0x7F3039A0u;
    // 7F3039A0: lbz     r6, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F3039A4:
    ctx->pc = 0x7F3039A4u;
    // 7F3039A4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3039A4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F3039A8:
    ctx->pc = 0x7F3039A8u;
    // 7F3039A8: stb     r0, 285(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(285);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3039AC:
    // 7F3039AC: extsb r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F3039B0:
    // 7F3039B0: extsb r26, r6
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F3039B4:
    ctx->pc = 0x7F3039B4u;
    // 7F3039B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3039B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3039B8:
    ctx->pc = 0x7F3039B8u;
    // 7F3039B8: stb     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3039BC:
    ctx->pc = 0x7F3039BCu;
    // 7F3039BC: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3039BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3039C0:
    ctx->pc = 0x7F3039C0u;
    // 7F3039C0: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3039C4:
    ctx->pc = 0x7F3039C4u;
    // 7F3039C4: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3039C8:
    ctx->pc = 0x7F3039C8u;
    // 7F3039C8: lha     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3039CC:
    ctx->pc = 0x7F3039CCu;
    // 7F3039CC: lfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3039CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3039D0:
    // 7F3039D0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3039D4:
    ctx->pc = 0x7F3039D4u;
    // 7F3039D4: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3039D8:
    ctx->pc = 0x7F3039D8u;
    // 7F3039D8: lfd     f1, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3039D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3039DC:
    ctx->pc = 0x7F3039DCu;
    // 7F3039DC: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F3039DCu)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F3039E0:
    ctx->pc = 0x7F3039E0u;
    // 7F3039E0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3039E0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F3039E4:
    ctx->pc = 0x7F3039E4u;
    // 7F3039E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3039E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3039E8:
    ctx->pc = 0x7F3039E8u;
    // 7F3039E8: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3039E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3039EC:
    ctx->pc = 0x7F3039ECu;
    // 7F3039EC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3039F0:
    ctx->pc = 0x7F3039F0u;
    // 7F3039F0: sth     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3039F4:
    ctx->pc = 0x7F3039F4u;
    // 7F3039F4: lha     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3039F8:
    ctx->pc = 0x7F3039F8u;
    // 7F3039F8: lfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3039F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3039FC:
    // 7F3039FC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303A00:
    ctx->pc = 0x7F303A00u;
    // 7F303A00: stw     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303A04:
    ctx->pc = 0x7F303A04u;
    // 7F303A04: lfd     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303A08:
    ctx->pc = 0x7F303A08u;
    // 7F303A08: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303A08u)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F303A0C:
    ctx->pc = 0x7F303A0Cu;
    // 7F303A0C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303A0Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F303A10:
    ctx->pc = 0x7F303A10u;
    // 7F303A10: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303A10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F303A14:
    ctx->pc = 0x7F303A14u;
    // 7F303A14: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F303A18:
    ctx->pc = 0x7F303A18u;
    // 7F303A18: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303A1C:
    ctx->pc = 0x7F303A1Cu;
    // 7F303A1C: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F303A20:
    // 7F303A20: bl      0x7F303E18
    {
            ctx->lr = 0x7F303A24u;
            goto label_7F303E18;
    }

label_7F303A24:
    ctx->downcount -= 1;
    // 7F303A24: bl      0x7F303DB0
    {
            ctx->lr = 0x7F303A28u;
            goto label_7F303DB0;
    }

label_7F303A28:
    ctx->pc = 0x7F303A28u;
    ctx->downcount -= 86;
    // 7F303A28: lbz     r0, 285(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(285);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F303A2C:
    // 7F303A2C: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F303A30:
    ctx->pc = 0x7F303A30u;
    // 7F303A30: stw     r27, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303A34:
    // 7F303A34: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303A38:
    ctx->pc = 0x7F303A38u;
    // 7F303A38: lbz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F303A3C:
    ctx->pc = 0x7F303A3Cu;
    // 7F303A3C: stw     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303A40:
    // 7F303A40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F303A44:
    // 7F303A44: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303A48:
    // 7F303A48: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F303A4C:
    ctx->pc = 0x7F303A4Cu;
    // 7F303A4C: lfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303A50:
    ctx->pc = 0x7F303A50u;
    // 7F303A50: stw     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303A54:
    ctx->pc = 0x7F303A54u;
    // 7F303A54: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303A54u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F303A58:
    ctx->pc = 0x7F303A58u;
    // 7F303A58: lwz     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303A5C:
    ctx->pc = 0x7F303A5Cu;
    // 7F303A5C: stw     r6, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303A60:
    ctx->pc = 0x7F303A60u;
    // 7F303A60: lwz     r4, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303A64:
    ctx->pc = 0x7F303A64u;
    // 7F303A64: stw     r27, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303A68:
    ctx->pc = 0x7F303A68u;
    // 7F303A68: fdivs   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303A68u)) return;
    ppc_fdivs(ctx, 2, 0, 31);

label_7F303A6C:
    ctx->pc = 0x7F303A6Cu;
    // 7F303A6C: stw     r27, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303A70:
    ctx->pc = 0x7F303A70u;
    // 7F303A70: lfd     f1, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303A74:
    ctx->pc = 0x7F303A74u;
    // 7F303A74: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303A78:
    ctx->pc = 0x7F303A78u;
    // 7F303A78: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303A7C:
    ctx->pc = 0x7F303A7Cu;
    // 7F303A7C: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303A7Cu)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F303A80:
    ctx->pc = 0x7F303A80u;
    // 7F303A80: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303A80u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F303A84:
    ctx->pc = 0x7F303A84u;
    // 7F303A84: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F303A84u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F303A88:
    ctx->pc = 0x7F303A88u;
    // 7F303A88: fdivs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303A88u)) return;
    ppc_fdivs(ctx, 1, 1, 31);

label_7F303A8C:
    ctx->pc = 0x7F303A8Cu;
    // 7F303A8C: stfd     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F303A90:
    ctx->pc = 0x7F303A90u;
    // 7F303A90: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303A94:
    ctx->pc = 0x7F303A94u;
    // 7F303A94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303A98:
    ctx->pc = 0x7F303A98u;
    // 7F303A98: fdivs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303A98u)) return;
    ppc_fdivs(ctx, 0, 0, 31);

label_7F303A9C:
    ctx->pc = 0x7F303A9Cu;
    // 7F303A9C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303A9Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F303AA0:
    ctx->pc = 0x7F303AA0u;
    // 7F303AA0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303AA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F303AA4:
    ctx->pc = 0x7F303AA4u;
    // 7F303AA4: stfd     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F303AA8:
    ctx->pc = 0x7F303AA8u;
    // 7F303AA8: stfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303AA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F303AAC:
    ctx->pc = 0x7F303AACu;
    // 7F303AAC: lwz     r6, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F303AB0:
    ctx->pc = 0x7F303AB0u;
    // 7F303AB0: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303AB4:
    ctx->pc = 0x7F303AB4u;
    // 7F303AB4: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303AB8:
    ctx->pc = 0x7F303AB8u;
    // 7F303AB8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303ABC:
    // 7F303ABC: bl      0x80025FFC
    {
            ctx->lr = 0x7F303AC0u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F303AC0:
    ctx->pc = 0x7F303AC0u;
    ctx->downcount -= 10;
    // 7F303AC0: lwz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F303AC4:
    // 7F303AC4: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F303AC8:
    ctx->pc = 0x7F303AC8u;
    // 7F303AC8: lwz     r5, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303ACC:
    ctx->pc = 0x7F303ACCu;
    // 7F303ACC: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303AD0:
    ctx->pc = 0x7F303AD0u;
    // 7F303AD0: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303AD4:
    ctx->pc = 0x7F303AD4u;
    // 7F303AD4: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303AD8:
    ctx->pc = 0x7F303AD8u;
    // 7F303AD8: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303ADC:
    ctx->pc = 0x7F303ADCu;
    // 7F303ADC: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303AE0:
    ctx->pc = 0x7F303AE0u;
    // 7F303AE0: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303AE4:
    // 7F303AE4: bl      0x7F303E18
    {
            ctx->lr = 0x7F303AE8u;
            goto label_7F303E18;
    }

label_7F303AE8:
    ctx->pc = 0x7F303AE8u;
    ctx->downcount -= 36;
    // 7F303AE8: lbz     r0, 285(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(285);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F303AEC:
    // 7F303AEC: xoris   r4, r26, 0x8000
    ctx->gpr[4] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F303AF0:
    ctx->pc = 0x7F303AF0u;
    // 7F303AF0: stw     r27, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303AF4:
    // 7F303AF4: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303AF8:
    ctx->pc = 0x7F303AF8u;
    // 7F303AF8: lbz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F303AFC:
    ctx->pc = 0x7F303AFCu;
    // 7F303AFC: stw     r3, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303B00:
    // 7F303B00: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F303B04:
    // 7F303B04: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303B08:
    // 7F303B08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F303B0C:
    ctx->pc = 0x7F303B0Cu;
    // 7F303B0C: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303B10:
    ctx->pc = 0x7F303B10u;
    // 7F303B10: stw     r5, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303B14:
    ctx->pc = 0x7F303B14u;
    // 7F303B14: fsubs   f29, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303B14u)) return;
    ppc_fsubs(ctx, 29, 0, 30);

label_7F303B18:
    ctx->pc = 0x7F303B18u;
    // 7F303B18: stw     r27, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303B1C:
    ctx->pc = 0x7F303B1Cu;
    // 7F303B1C: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303B20:
    ctx->pc = 0x7F303B20u;
    // 7F303B20: fneg    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F303B20u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[29]) ^ 0x8000000000000000ull);

label_7F303B24:
    ctx->pc = 0x7F303B24u;
    // 7F303B24: stw     r4, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303B28:
    ctx->pc = 0x7F303B28u;
    // 7F303B28: fsubs   f28, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303B28u)) return;
    ppc_fsubs(ctx, 28, 0, 30);

label_7F303B2C:
    ctx->pc = 0x7F303B2Cu;
    // 7F303B2C: stw     r27, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F303B30:
    ctx->pc = 0x7F303B30u;
    // 7F303B30: fctiwz    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303B30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F303B34:
    ctx->pc = 0x7F303B34u;
    // 7F303B34: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303B38:
    ctx->pc = 0x7F303B38u;
    // 7F303B38: fneg    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F303B38u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[28]) ^ 0x8000000000000000ull);

label_7F303B3C:
    ctx->pc = 0x7F303B3Cu;
    // 7F303B3C: stfd     f2, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F303B40:
    ctx->pc = 0x7F303B40u;
    // 7F303B40: fsubs   f27, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F303B40u)) return;
    ppc_fsubs(ctx, 27, 0, 30);

label_7F303B44:
    ctx->pc = 0x7F303B44u;
    // 7F303B44: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303B44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F303B48:
    ctx->pc = 0x7F303B48u;
    // 7F303B48: lwz     r5, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303B4C:
    ctx->pc = 0x7F303B4Cu;
    // 7F303B4C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303B50:
    ctx->pc = 0x7F303B50u;
    // 7F303B50: fneg    f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F303B50u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[27]) ^ 0x8000000000000000ull);

label_7F303B54:
    ctx->pc = 0x7F303B54u;
    // 7F303B54: stfd     f1, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F303B58:
    ctx->pc = 0x7F303B58u;
    // 7F303B58: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303B58u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F303B5C:
    ctx->pc = 0x7F303B5Cu;
    // 7F303B5C: lwz     r4, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303B60:
    ctx->pc = 0x7F303B60u;
    // 7F303B60: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303B64:
    ctx->pc = 0x7F303B64u;
    // 7F303B64: stfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F303B68:
    ctx->pc = 0x7F303B68u;
    // 7F303B68: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303B6C:
    ctx->pc = 0x7F303B6Cu;
    // 7F303B6C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303B70:
    ctx->pc = 0x7F303B70u;
    // 7F303B70: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303B74:
    // 7F303B74: bl      0x80026080
    {
            ctx->lr = 0x7F303B78u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F303B78:
    ctx->pc = 0x7F303B78u;
    ctx->downcount -= 2;
    // 7F303B78: fmr    f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303B78u)) return;
    ctx->fpr[25] = ctx->fpr[1];

label_7F303B7C:
    // 7F303B7C: bl      0x7F303DB0
    {
            ctx->lr = 0x7F303B80u;
            goto label_7F303DB0;
    }

label_7F303B80:
    ctx->pc = 0x7F303B80u;
    ctx->downcount -= 2;
    // 7F303B80: fcmpo   cr0, f25, f26
    if (!ppc_fp_available_inline(ctx, 0x7F303B80u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[26], true);

label_7F303B84:
    // 7F303B84: bc    4, 0, 0x7F303C34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303C34;
        }
    }

label_7F303B88:
    ctx->pc = 0x7F303B88u;
    ctx->downcount -= 11;
    // 7F303B88: lwz     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303B8C:
    // 7F303B8C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F303B90:
    ctx->pc = 0x7F303B90u;
    // 7F303B90: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303B94:
    // 7F303B94: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F303B98:
    ctx->pc = 0x7F303B98u;
    // 7F303B98: stw     r5, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303B9C:
    ctx->pc = 0x7F303B9Cu;
    // 7F303B9C: lwz     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F303BA0:
    ctx->pc = 0x7F303BA0u;
    // 7F303BA0: stw     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303BA4:
    ctx->pc = 0x7F303BA4u;
    // 7F303BA4: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303BA8:
    ctx->pc = 0x7F303BA8u;
    // 7F303BA8: stw     r5, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F303BAC:
    ctx->pc = 0x7F303BACu;
    // 7F303BAC: stw     r0, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303BB0:
    // 7F303BB0: bl      0x7F303D14
    {
            ctx->lr = 0x7F303BB4u;
            goto label_7F303D14;
    }

label_7F303BB4:
    ctx->pc = 0x7F303BB4u;
    ctx->downcount -= 32;
    // 7F303BB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303BB8:
    // 7F303BB8: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F303BBC:
    // 7F303BBC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F303BC0:
    ctx->pc = 0x7F303BC0u;
    // 7F303BC0: stw     r3, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303BC4:
    // 7F303BC4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303BC8:
    ctx->pc = 0x7F303BC8u;
    // 7F303BC8: lfd     f1, 32288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F303BC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303BCC:
    ctx->pc = 0x7F303BCCu;
    // 7F303BCC: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303BD0:
    ctx->pc = 0x7F303BD0u;
    // 7F303BD0: fmr    f26, f25
    if (!ppc_fp_available_inline(ctx, 0x7F303BD0u)) return;
    ctx->fpr[26] = ctx->fpr[25];

label_7F303BD4:
    ctx->pc = 0x7F303BD4u;
    // 7F303BD4: lfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303BD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303BD8:
    ctx->pc = 0x7F303BD8u;
    // 7F303BD8: stw     r3, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303BDC:
    ctx->pc = 0x7F303BDCu;
    // 7F303BDC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303BDCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F303BE0:
    ctx->pc = 0x7F303BE0u;
    // 7F303BE0: stw     r3, 240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303BE4:
    ctx->pc = 0x7F303BE4u;
    // 7F303BE4: stfs     f0, 0(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F303BE4u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F303BE8:
    ctx->pc = 0x7F303BE8u;
    // 7F303BE8: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303BEC:
    ctx->pc = 0x7F303BECu;
    // 7F303BEC: stw     r3, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303BF0:
    // 7F303BF0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303BF4:
    ctx->pc = 0x7F303BF4u;
    // 7F303BF4: stw     r0, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303BF8:
    ctx->pc = 0x7F303BF8u;
    // 7F303BF8: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303BF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303BFC:
    ctx->pc = 0x7F303BFCu;
    // 7F303BFC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303BFCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F303C00:
    ctx->pc = 0x7F303C00u;
    // 7F303C00: stfs     f0, 4(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F303C00u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F303C04:
    ctx->pc = 0x7F303C04u;
    // 7F303C04: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303C08:
    // 7F303C08: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303C0C:
    ctx->pc = 0x7F303C0Cu;
    // 7F303C0C: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303C10:
    ctx->pc = 0x7F303C10u;
    // 7F303C10: lfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303C10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303C14:
    ctx->pc = 0x7F303C14u;
    // 7F303C14: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303C14u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F303C18:
    ctx->pc = 0x7F303C18u;
    // 7F303C18: stfs     f0, 8(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F303C18u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F303C1C:
    ctx->pc = 0x7F303C1Cu;
    // 7F303C1C: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303C20:
    // 7F303C20: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F303C24:
    ctx->pc = 0x7F303C24u;
    // 7F303C24: stw     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303C28:
    ctx->pc = 0x7F303C28u;
    // 7F303C28: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303C2C:
    ctx->pc = 0x7F303C2Cu;
    // 7F303C2C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303C2Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F303C30:
    ctx->pc = 0x7F303C30u;
    // 7F303C30: stfs     f0, 12(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F303C30u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F303C34:
    ctx->pc = 0x7F303C34u;
    ctx->downcount -= 67;
    // 7F303C34: fdivs   f2, f29, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303C34u)) return;
    ppc_fdivs(ctx, 2, 29, 31);

label_7F303C38:
    ctx->pc = 0x7F303C38u;
    // 7F303C38: lwz     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303C3C:
    // 7F303C3C: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F303C40:
    // 7F303C40: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_7F303C44:
    ctx->pc = 0x7F303C44u;
    // 7F303C44: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303C48:
    ctx->pc = 0x7F303C48u;
    // 7F303C48: fdivs   f1, f28, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303C48u)) return;
    ppc_fdivs(ctx, 1, 28, 31);

label_7F303C4C:
    ctx->pc = 0x7F303C4Cu;
    // 7F303C4C: fdivs   f0, f27, f31
    if (!ppc_fp_available_inline(ctx, 0x7F303C4Cu)) return;
    ppc_fdivs(ctx, 0, 27, 31);

label_7F303C50:
    ctx->pc = 0x7F303C50u;
    // 7F303C50: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F303C50u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F303C54:
    ctx->pc = 0x7F303C54u;
    // 7F303C54: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303C54u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F303C58:
    ctx->pc = 0x7F303C58u;
    // 7F303C58: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303C58u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F303C5C:
    ctx->pc = 0x7F303C5Cu;
    // 7F303C5C: stfd     f2, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F303C60:
    ctx->pc = 0x7F303C60u;
    // 7F303C60: stfd     f1, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303C60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F303C64:
    ctx->pc = 0x7F303C64u;
    // 7F303C64: lwz     r4, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303C68:
    ctx->pc = 0x7F303C68u;
    // 7F303C68: stfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F303C6C:
    ctx->pc = 0x7F303C6Cu;
    // 7F303C6C: lwz     r3, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303C70:
    ctx->pc = 0x7F303C70u;
    // 7F303C70: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303C74:
    ctx->pc = 0x7F303C74u;
    // 7F303C74: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303C78:
    ctx->pc = 0x7F303C78u;
    // 7F303C78: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303C7C:
    ctx->pc = 0x7F303C7Cu;
    // 7F303C7C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303C80:
    ctx->pc = 0x7F303C80u;
    ctx->downcount -= 3;
    // 7F303C80: lhz     r0, 28(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F303C84:
    // 7F303C84: cmpw    r19, r0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F303C88:
    // 7F303C88: bc    12, 0, 0x7F303940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303940u;
                return;
            }
            goto label_7F303940;
        }
    }

label_7F303C8C:
    ctx->downcount -= 2;
    // 7F303C8C: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_7F303C90:
    // 7F303C90: addi    r30, r30, 32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(32);

label_7F303C94:
    ctx->pc = 0x7F303C94u;
    ctx->downcount -= 3;
    // 7F303C94: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303C98:
    // 7F303C98: cmpw    r20, r0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F303C9C:
    // 7F303C9C: bc    12, 0, 0x7F30392C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30392Cu;
                return;
            }
            goto label_7F30392C;
        }
    }

label_7F303CA0:
    ctx->downcount -= 2;
    // 7F303CA0: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F303CA4:
    // 7F303CA4: addi    r24, r24, 36
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(36);

label_7F303CA8:
    ctx->pc = 0x7F303CA8u;
    ctx->downcount -= 3;
    // 7F303CA8: lwz     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303CAC:
    // 7F303CAC: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F303CB0:
    // 7F303CB0: bc    12, 0, 0x7F30390C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30390Cu;
                return;
            }
            goto label_7F30390C;
        }
    }

label_7F303CB4:
    ctx->downcount -= 2;
    // 7F303CB4: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F303CB8:
    // 7F303CB8: addi    r31, r31, 324
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(324);

label_7F303CBC:
    ctx->pc = 0x7F303CBCu;
    ctx->downcount -= 3;
    // 7F303CBC: lha     r0, 92(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303CC0:
    // 7F303CC0: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F303CC4:
    // 7F303CC4: bc    12, 0, 0x7F303808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303808u;
                return;
            }
            goto label_7F303808;
        }
    }

label_7F303CC8:
    ctx->pc = 0x7F303CC8u;
    ctx->downcount -= 30;
    // 7F303CC8: psq_l   f31, 488(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F303CC8u);
        if (ctx->exception) return;
    }

label_7F303CCC:
    ctx->pc = 0x7F303CCCu;
    // 7F303CCC: lfd     f31, 480(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CD0:
    ctx->pc = 0x7F303CD0u;
    // 7F303CD0: psq_l   f30, 472(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F303CD0u);
        if (ctx->exception) return;
    }

label_7F303CD4:
    ctx->pc = 0x7F303CD4u;
    // 7F303CD4: lfd     f30, 464(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CD8:
    ctx->pc = 0x7F303CD8u;
    // 7F303CD8: psq_l   f29, 456(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F303CD8u);
        if (ctx->exception) return;
    }

label_7F303CDC:
    ctx->pc = 0x7F303CDCu;
    // 7F303CDC: lfd     f29, 448(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CE0:
    ctx->pc = 0x7F303CE0u;
    // 7F303CE0: psq_l   f28, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F303CE0u);
        if (ctx->exception) return;
    }

label_7F303CE4:
    ctx->pc = 0x7F303CE4u;
    // 7F303CE4: lfd     f28, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CE8:
    ctx->pc = 0x7F303CE8u;
    // 7F303CE8: psq_l   f27, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F303CE8u);
        if (ctx->exception) return;
    }

label_7F303CEC:
    ctx->pc = 0x7F303CECu;
    // 7F303CEC: lfd     f27, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CF0:
    ctx->pc = 0x7F303CF0u;
    // 7F303CF0: psq_l   f26, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F303CF0u);
        if (ctx->exception) return;
    }

label_7F303CF4:
    ctx->pc = 0x7F303CF4u;
    // 7F303CF4: lfd     f26, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303CF8:
    ctx->pc = 0x7F303CF8u;
    // 7F303CF8: psq_l   f25, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303CF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F303CF8u);
        if (ctx->exception) return;
    }

label_7F303CFC:
    ctx->pc = 0x7F303CFCu;
    // 7F303CFC: lfd     f25, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303CFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303D00:
    ctx->pc = 0x7F303D00u;
    // 7F303D00: lmw     r14, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F303D04:
    ctx->pc = 0x7F303D04u;
    // 7F303D04: lwz     r0, 500(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303D08:
    ctx->pc = 0x7F303D08u;
    // 7F303D08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303D0C:
    ctx->pc = 0x7F303D0Cu;
    // 7F303D0C: addi    r1, r1, 496
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(496);

label_7F303D10:
    ctx->pc = 0x7F303D10u;
    // 7F303D10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303D14:
    ctx->pc = 0x7F303D14u;
    ctx->downcount -= 19;
    // 7F303D14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303D18:
    ctx->pc = 0x7F303D18u;
    // 7F303D18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303D1C:
    ctx->pc = 0x7F303D1Cu;
    // 7F303D1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303D20:
    ctx->pc = 0x7F303D20u;
    // 7F303D20: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F303D24:
    ctx->pc = 0x7F303D24u;
    // 7F303D24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303D28:
    ctx->pc = 0x7F303D28u;
    // 7F303D28: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F303D2C:
    ctx->pc = 0x7F303D2Cu;
    // 7F303D2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F303D30:
    ctx->pc = 0x7F303D30u;
    // 7F303D30: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F303D34:
    ctx->pc = 0x7F303D34u;
    // 7F303D34: bl      0x7F303D70
    {
            ctx->lr = 0x7F303D38u;
            goto label_7F303D70;
    }

label_7F303D38:
    ctx->pc = 0x7F303D38u;
    ctx->downcount -= 3;
    // 7F303D38: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F303D3C:
    ctx->pc = 0x7F303D3Cu;
    // 7F303D3C: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_7F303D40:
    ctx->pc = 0x7F303D40u;
    // 7F303D40: bl      0x7F303D70
    {
            ctx->lr = 0x7F303D44u;
            goto label_7F303D70;
    }

label_7F303D44:
    ctx->pc = 0x7F303D44u;
    ctx->downcount -= 3;
    // 7F303D44: addi    r3, r31, 8
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(8);

label_7F303D48:
    ctx->pc = 0x7F303D48u;
    // 7F303D48: addi    r4, r30, 8
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(8);

label_7F303D4C:
    ctx->pc = 0x7F303D4Cu;
    // 7F303D4C: bl      0x7F303D70
    {
            ctx->lr = 0x7F303D50u;
            goto label_7F303D70;
    }

label_7F303D50:
    ctx->pc = 0x7F303D50u;
    ctx->downcount -= 3;
    // 7F303D50: addi    r3, r31, 12
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(12);

label_7F303D54:
    ctx->pc = 0x7F303D54u;
    // 7F303D54: addi    r4, r30, 12
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(12);

label_7F303D58:
    ctx->pc = 0x7F303D58u;
    // 7F303D58: bl      0x7F303D70
    {
            ctx->lr = 0x7F303D5Cu;
            goto label_7F303D70;
    }

label_7F303D5C:
    ctx->pc = 0x7F303D5Cu;
    ctx->downcount -= 16;
    // 7F303D5C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F303D60:
    ctx->pc = 0x7F303D60u;
    // 7F303D60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303D64:
    ctx->pc = 0x7F303D64u;
    // 7F303D64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303D68:
    ctx->pc = 0x7F303D68u;
    // 7F303D68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303D6C:
    ctx->pc = 0x7F303D6Cu;
    // 7F303D6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303D70:
    ctx->pc = 0x7F303D70u;
    ctx->downcount -= 6;
    // 7F303D70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303D74:
    ctx->pc = 0x7F303D74u;
    // 7F303D74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303D78:
    ctx->pc = 0x7F303D78u;
    // 7F303D78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303D7C:
    ctx->pc = 0x7F303D7Cu;
    // 7F303D7C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303D80:
    ctx->pc = 0x7F303D80u;
    // 7F303D80: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F303D84:
    ctx->pc = 0x7F303D84u;
    // 7F303D84: bl      0x7F303DA0
    {
            ctx->lr = 0x7F303D88u;
            goto label_7F303DA0;
    }

label_7F303D88:
    ctx->pc = 0x7F303D88u;
    ctx->downcount -= 7;
    // 7F303D88: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F303D88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F303D8C:
    ctx->pc = 0x7F303D8Cu;
    // 7F303D8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303D90:
    ctx->pc = 0x7F303D90u;
    // 7F303D90: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F303D94:
    ctx->pc = 0x7F303D94u;
    // 7F303D94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303D98:
    ctx->pc = 0x7F303D98u;
    // 7F303D98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303D9C:
    ctx->pc = 0x7F303D9Cu;
    // 7F303D9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303DA0:
    ctx->pc = 0x7F303DA0u;
    ctx->downcount -= 4;
    // 7F303DA0: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F303DA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F303DA0u);
        if (ctx->exception) return;
    }

label_7F303DA4:
    ctx->pc = 0x7F303DA4u;
    // 7F303DA4: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F303DA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F303DA4u);
        if (ctx->exception) return;
    }

label_7F303DA8:
    ctx->pc = 0x7F303DA8u;
    // 7F303DA8: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F303DA8u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F303DAC:
    ctx->pc = 0x7F303DACu;
    // 7F303DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303DB0:
    ctx->pc = 0x7F303DB0u;
    ctx->downcount -= 7;
    // 7F303DB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303DB4:
    ctx->pc = 0x7F303DB4u;
    // 7F303DB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303DB8:
    ctx->pc = 0x7F303DB8u;
    // 7F303DB8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303DBC:
    ctx->pc = 0x7F303DBCu;
    // 7F303DBC: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F303DC0:
    ctx->pc = 0x7F303DC0u;
    // 7F303DC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303DC4:
    ctx->pc = 0x7F303DC4u;
    // 7F303DC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303DC8:
    ctx->pc = 0x7F303DC8u;
    // 7F303DC8: bl      0x7F303D70
    {
            ctx->lr = 0x7F303DCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303D70u;
                return;
            }
            goto label_7F303D70;
    }

label_7F303DCC:
    ctx->pc = 0x7F303DCCu;
    ctx->downcount -= 5;
    // 7F303DCC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303DD0:
    ctx->pc = 0x7F303DD0u;
    // 7F303DD0: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F303DD4:
    ctx->pc = 0x7F303DD4u;
    // 7F303DD4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F303DD8:
    ctx->pc = 0x7F303DD8u;
    // 7F303DD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303DDC:
    ctx->pc = 0x7F303DDCu;
    // 7F303DDC: bl      0x7F303D70
    {
            ctx->lr = 0x7F303DE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303D70u;
                return;
            }
            goto label_7F303D70;
    }

label_7F303DE0:
    ctx->pc = 0x7F303DE0u;
    ctx->downcount -= 5;
    // 7F303DE0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303DE4:
    ctx->pc = 0x7F303DE4u;
    // 7F303DE4: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F303DE8:
    ctx->pc = 0x7F303DE8u;
    // 7F303DE8: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F303DEC:
    ctx->pc = 0x7F303DECu;
    // 7F303DEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303DF0:
    ctx->pc = 0x7F303DF0u;
    // 7F303DF0: bl      0x7F303D70
    {
            ctx->lr = 0x7F303DF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303D70u;
                return;
            }
            goto label_7F303D70;
    }

label_7F303DF4:
    ctx->pc = 0x7F303DF4u;
    ctx->downcount -= 5;
    // 7F303DF4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303DF8:
    ctx->pc = 0x7F303DF8u;
    // 7F303DF8: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F303DFC:
    ctx->pc = 0x7F303DFCu;
    // 7F303DFC: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_7F303E00:
    ctx->pc = 0x7F303E00u;
    // 7F303E00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303E04:
    ctx->pc = 0x7F303E04u;
    // 7F303E04: bl      0x7F303D70
    {
            ctx->lr = 0x7F303E08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F303D70u;
                return;
            }
            goto label_7F303D70;
    }

label_7F303E08:
    ctx->pc = 0x7F303E08u;
    ctx->downcount -= 5;
    // 7F303E08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303E0C:
    ctx->pc = 0x7F303E0Cu;
    // 7F303E0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303E10:
    ctx->pc = 0x7F303E10u;
    // 7F303E10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303E14:
    ctx->pc = 0x7F303E14u;
    // 7F303E14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303E18:
    ctx->pc = 0x7F303E18u;
    ctx->downcount -= 9;
    // 7F303E18: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F303E1C:
    ctx->pc = 0x7F303E1Cu;
    // 7F303E1C: lha     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303E20:
    ctx->pc = 0x7F303E20u;
    // 7F303E20: addi    r5, r4, -1068
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F303E24:
    ctx->pc = 0x7F303E24u;
    // 7F303E24: lha     r4, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303E28:
    ctx->pc = 0x7F303E28u;
    // 7F303E28: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F303E2C:
    ctx->pc = 0x7F303E2Cu;
    // 7F303E2C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F303E30:
    ctx->pc = 0x7F303E30u;
    // 7F303E30: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F303E34:
    ctx->pc = 0x7F303E34u;
    // 7F303E34: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303E38:
    ctx->pc = 0x7F303E38u;
    // 7F303E38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303E3C:
    ctx->pc = 0x7F303E3Cu;
    ctx->downcount -= 7;
    // 7F303E3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303E40:
    ctx->pc = 0x7F303E40u;
    // 7F303E40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303E44:
    ctx->pc = 0x7F303E44u;
    // 7F303E44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303E48:
    ctx->pc = 0x7F303E48u;
    // 7F303E48: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303E4C:
    ctx->pc = 0x7F303E4Cu;
    // 7F303E4C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F303E50:
    ctx->pc = 0x7F303E50u;
    // 7F303E50: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F303E54:
    ctx->pc = 0x7F303E54u;
    // 7F303E54: bl      0x7F1146A0
    {
            ctx->lr = 0x7F303E58u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F303E58:
    ctx->pc = 0x7F303E58u;
    ctx->downcount -= 5;
    // 7F303E58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303E5C:
    ctx->pc = 0x7F303E5Cu;
    // 7F303E5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303E60:
    ctx->pc = 0x7F303E60u;
    // 7F303E60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303E64:
    ctx->pc = 0x7F303E64u;
    // 7F303E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303E68:
    ctx->pc = 0x7F303E68u;
    ctx->downcount -= 7;
    // 7F303E68: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303E6C:
    ctx->pc = 0x7F303E6Cu;
    // 7F303E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303E70:
    ctx->pc = 0x7F303E70u;
    // 7F303E70: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303E74:
    ctx->pc = 0x7F303E74u;
    // 7F303E74: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303E74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F303E78:
    ctx->pc = 0x7F303E78u;
    // 7F303E78: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F303E78u);
        if (ctx->exception) return;
    }

label_7F303E7C:
    ctx->pc = 0x7F303E7Cu;
    // 7F303E7C: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F303E7Cu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F303E80:
    ctx->pc = 0x7F303E80u;
    // 7F303E80: bl      0x80006668
    {
            ctx->lr = 0x7F303E84u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F303E84:
    ctx->pc = 0x7F303E84u;
    ctx->downcount -= 4;
    // 7F303E84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F303E88:
    ctx->pc = 0x7F303E88u;
    // 7F303E88: lfs     f0, 32308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F303E88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F303E8C:
    ctx->pc = 0x7F303E8Cu;
    // 7F303E8C: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303E8Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F303E90:
    ctx->pc = 0x7F303E90u;
    // 7F303E90: bc    4, 2, 0x7F303E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303E9C;
        }
    }

label_7F303E94:
    ctx->pc = 0x7F303E94u;
    ctx->downcount -= 2;
    // 7F303E94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F303E98:
    ctx->pc = 0x7F303E98u;
    // 7F303E98: lfs     f1, 32304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F303E98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F303E9C:
    ctx->pc = 0x7F303E9Cu;
    ctx->downcount -= 26;
    // 7F303E9C: fdivs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F303E9Cu)) return;
    ppc_fdivs(ctx, 0, 31, 1);

label_7F303EA0:
    ctx->pc = 0x7F303EA0u;
    // 7F303EA0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F303EA4:
    ctx->pc = 0x7F303EA4u;
    // 7F303EA4: stfs     f0, -1280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F303EA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F303EA8:
    ctx->pc = 0x7F303EA8u;
    // 7F303EA8: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F303EA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F303EA8u);
        if (ctx->exception) return;
    }

label_7F303EAC:
    ctx->pc = 0x7F303EACu;
    // 7F303EAC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303EB0:
    ctx->pc = 0x7F303EB0u;
    // 7F303EB0: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F303EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F303EB4:
    ctx->pc = 0x7F303EB4u;
    // 7F303EB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303EB8:
    ctx->pc = 0x7F303EB8u;
    // 7F303EB8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F303EBC:
    ctx->pc = 0x7F303EBCu;
    // 7F303EBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303EC0:
    ctx->pc = 0x7F303EC0u;
    ctx->downcount -= 34;
    // 7F303EC0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303EC4:
    ctx->pc = 0x7F303EC4u;
    // 7F303EC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303EC8:
    ctx->pc = 0x7F303EC8u;
    // 7F303EC8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303ECC:
    ctx->pc = 0x7F303ECCu;
    // 7F303ECC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F303ED0:
    ctx->pc = 0x7F303ED0u;
    // 7F303ED0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F303ED4:
    ctx->pc = 0x7F303ED4u;
    // 7F303ED4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303ED8:
    ctx->pc = 0x7F303ED8u;
    // 7F303ED8: lwz     r3, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303EDC:
    ctx->pc = 0x7F303EDCu;
    // 7F303EDC: lwz     r4, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F303EE0:
    ctx->pc = 0x7F303EE0u;
    // 7F303EE0: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F303EE4:
    ctx->pc = 0x7F303EE4u;
    // 7F303EE4: lwzx    r30, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F303EE8:
    ctx->pc = 0x7F303EE8u;
    // 7F303EE8: stw     r0, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303EEC:
    ctx->pc = 0x7F303EECu;
    // 7F303EEC: stw     r0, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303EF0:
    ctx->pc = 0x7F303EF0u;
    // 7F303EF0: stw     r0, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303EF4:
    ctx->pc = 0x7F303EF4u;
    // 7F303EF4: stw     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303EF8:
    ctx->pc = 0x7F303EF8u;
    // 7F303EF8: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303EFC:
    ctx->pc = 0x7F303EFCu;
    // 7F303EFC: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F00:
    ctx->pc = 0x7F303F00u;
    // 7F303F00: stw     r0, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F04:
    ctx->pc = 0x7F303F04u;
    // 7F303F04: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303F08:
    ctx->pc = 0x7F303F08u;
    // 7F303F08: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F303F0C:
    ctx->pc = 0x7F303F0Cu;
    // 7F303F0C: rlwinm r29, r0, 0, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_7F303F10:
    ctx->pc = 0x7F303F10u;
    // 7F303F10: mulli   r3, r29, 96
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)96);

label_7F303F14:
    ctx->pc = 0x7F303F14u;
    // 7F303F14: bl      0x7F3C9148
    {
            ctx->lr = 0x7F303F18u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F303F18:
    ctx->pc = 0x7F303F18u;
    ctx->downcount -= 3;
    // 7F303F18: cmplwi  r3, 0x0000
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

label_7F303F1C:
    ctx->pc = 0x7F303F1Cu;
    // 7F303F1C: stw     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F303F20:
    ctx->pc = 0x7F303F20u;
    // 7F303F20: bc    4, 2, 0x7F303F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F303F2C;
        }
    }

label_7F303F24:
    ctx->pc = 0x7F303F24u;
    ctx->downcount -= 2;
    // 7F303F24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F303F28:
    ctx->pc = 0x7F303F28u;
    // 7F303F28: b       0x7F303F78
    {
            goto label_7F303F78;
    }

label_7F303F2C:
    ctx->pc = 0x7F303F2Cu;
    ctx->downcount -= 19;
    // 7F303F2C: lwz     r0, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F30:
    ctx->pc = 0x7F303F30u;
    // 7F303F30: rlwinm r4, r29, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 4u) & 0xFFFFFFF0u;
    }

label_7F303F34:
    ctx->pc = 0x7F303F34u;
    // 7F303F34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F303F38:
    ctx->pc = 0x7F303F38u;
    // 7F303F38: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F303F3C:
    ctx->pc = 0x7F303F3Cu;
    // 7F303F3C: stw     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F40:
    ctx->pc = 0x7F303F40u;
    // 7F303F40: lwz     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F44:
    ctx->pc = 0x7F303F44u;
    // 7F303F44: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F303F48:
    ctx->pc = 0x7F303F48u;
    // 7F303F48: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F4C:
    ctx->pc = 0x7F303F4Cu;
    // 7F303F4C: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F50:
    ctx->pc = 0x7F303F50u;
    // 7F303F50: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F303F54:
    ctx->pc = 0x7F303F54u;
    // 7F303F54: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F58:
    ctx->pc = 0x7F303F58u;
    // 7F303F58: lwz     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F5C:
    ctx->pc = 0x7F303F5Cu;
    // 7F303F5C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F303F60:
    ctx->pc = 0x7F303F60u;
    // 7F303F60: stw     r0, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F64:
    ctx->pc = 0x7F303F64u;
    // 7F303F64: lwz     r0, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F68:
    ctx->pc = 0x7F303F68u;
    // 7F303F68: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F303F6C:
    ctx->pc = 0x7F303F6Cu;
    // 7F303F6C: stw     r0, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F70:
    ctx->pc = 0x7F303F70u;
    // 7F303F70: lwz     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F74:
    ctx->pc = 0x7F303F74u;
    // 7F303F74: stw     r0, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F78:
    ctx->pc = 0x7F303F78u;
    ctx->downcount -= 16;
    // 7F303F78: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F303F7C:
    ctx->pc = 0x7F303F7Cu;
    // 7F303F7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303F80:
    ctx->pc = 0x7F303F80u;
    // 7F303F80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303F84:
    ctx->pc = 0x7F303F84u;
    // 7F303F84: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F303F88:
    ctx->pc = 0x7F303F88u;
    // 7F303F88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303F8C:
    ctx->pc = 0x7F303F8Cu;
    ctx->downcount -= 8;
    // 7F303F8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303F90:
    ctx->pc = 0x7F303F90u;
    // 7F303F90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303F94:
    ctx->pc = 0x7F303F94u;
    // 7F303F94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303F98:
    ctx->pc = 0x7F303F98u;
    // 7F303F98: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F303F9C:
    ctx->pc = 0x7F303F9Cu;
    // 7F303F9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F303FA0:
    ctx->pc = 0x7F303FA0u;
    // 7F303FA0: lwz     r3, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303FA4:
    ctx->pc = 0x7F303FA4u;
    // 7F303FA4: cmplwi  r3, 0x0000
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

label_7F303FA8:
    ctx->pc = 0x7F303FA8u;
    // 7F303FA8: bc    12, 2, 0x7F303FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303FB0;
        }
    }

label_7F303FAC:
    ctx->pc = 0x7F303FACu;
    ctx->downcount -= 1;
    // 7F303FAC: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F303FB0u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F303FB0:
    ctx->pc = 0x7F303FB0u;
    ctx->downcount -= 3;
    // 7F303FB0: lwz     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F303FB4:
    ctx->pc = 0x7F303FB4u;
    // 7F303FB4: cmplwi  r3, 0x0000
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

label_7F303FB8:
    ctx->pc = 0x7F303FB8u;
    // 7F303FB8: bc    12, 2, 0x7F303FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F303FC0;
        }
    }

label_7F303FBC:
    ctx->pc = 0x7F303FBCu;
    ctx->downcount -= 1;
    // 7F303FBC: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F303FC0u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F303FC0:
    ctx->pc = 0x7F303FC0u;
    ctx->downcount -= 6;
    // 7F303FC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303FC4:
    ctx->pc = 0x7F303FC4u;
    // 7F303FC4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F303FC8:
    ctx->pc = 0x7F303FC8u;
    // 7F303FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F303FCC:
    ctx->pc = 0x7F303FCCu;
    // 7F303FCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F303FD0:
    ctx->pc = 0x7F303FD0u;
    // 7F303FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F303FD4:
    ctx->pc = 0x7F303FD4u;
    ctx->downcount -= 29;
    // 7F303FD4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F303FD8:
    ctx->pc = 0x7F303FD8u;
    // 7F303FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F303FDC:
    ctx->pc = 0x7F303FDCu;
    // 7F303FDC: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F303FE0:
    ctx->pc = 0x7F303FE0u;
    // 7F303FE0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F303FE4:
    ctx->pc = 0x7F303FE4u;
    // 7F303FE4: addi    r5, r5, -1148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F303FE8:
    ctx->pc = 0x7F303FE8u;
    // 7F303FE8: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F303FEC:
    ctx->pc = 0x7F303FECu;
    // 7F303FEC: lwz     r0, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F303FF0:
    ctx->pc = 0x7F303FF0u;
    // 7F303FF0: lwz     r7, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F303FF4:
    ctx->pc = 0x7F303FF4u;
    // 7F303FF4: rlwinm r6, r0, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F303FF8:
    ctx->pc = 0x7F303FF8u;
    // 7F303FF8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F303FFC:
    ctx->pc = 0x7F303FFCu;
    // 7F303FFC: lwzx    r7, r7, r6
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[6];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F304000:
    ctx->pc = 0x7F304000u;
    // 7F304000: addi    r6, r5, -4
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F304004:
    ctx->pc = 0x7F304004u;
    // 7F304004: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F304008:
    ctx->pc = 0x7F304008u;
    // 7F304008: lwz     r28, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30400C:
    ctx->pc = 0x7F30400Cu;
    // 7F30400C: lwz     r27, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F304010:
    ctx->pc = 0x7F304010u;
    // 7F304010: lwz     r26, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F304014:
    ctx->pc = 0x7F304014u;
    // 7F304014: lwz     r25, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F304018:
    ctx->pc = 0x7F304018u;
    // 7F304018: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30401C:
    loop_7F30401C(ctx);
    if (ctx->pc == 0x7F304030u) goto label_7F304030;
    return;
label_7F304020:
    ctx->pc = 0x7F304020u;
    // 7F304020: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F304024:
    ctx->pc = 0x7F304024u;
    // 7F304024: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F304028:
    ctx->pc = 0x7F304028u;
    // 7F304028: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F30402C:
    // 7F30402C: bc    16, 0, 0x7F30401C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30401Cu;
                return;
            }
            goto label_7F30401C;
        }
    }

label_7F304030:
    ctx->pc = 0x7F304030u;
    ctx->downcount -= 6;
    // 7F304030: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304034:
    ctx->pc = 0x7F304034u;
    // 7F304034: lwz     r24, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F304038:
    ctx->pc = 0x7F304038u;
    // 7F304038: addi    r29, r4, -1148
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F30403C:
    ctx->pc = 0x7F30403Cu;
    // 7F30403C: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F304040:
    ctx->pc = 0x7F304040u;
    // 7F304040: or   r31, r29, r29
    {
        ctx->gpr[31] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F304044:
    ctx->pc = 0x7F304044u;
    // 7F304044: b       0x7F30409C
    {
            goto label_7F30409C;
    }

label_7F304048:
    ctx->downcount -= 4;
    // 7F304048: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30404C:
    // 7F30404C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F304050:
    // 7F304050: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F304054:
    // 7F304054: bl      0x7F3040B8
    {
            ctx->lr = 0x7F304058u;
            goto label_7F3040B8;
    }

label_7F304058:
    ctx->downcount -= 4;
    // 7F304058: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30405C:
    // 7F30405C: addi    r3, r28, 16
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(16);

label_7F304060:
    // 7F304060: addi    r5, r25, 16
    ctx->gpr[5] = ctx->gpr[25] + (u32)(s32)(16);

label_7F304064:
    // 7F304064: bl      0x7F3040B8
    {
            ctx->lr = 0x7F304068u;
            goto label_7F3040B8;
    }

label_7F304068:
    ctx->downcount -= 4;
    // 7F304068: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30406C:
    // 7F30406C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F304070:
    // 7F304070: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F304074:
    // 7F304074: bl      0x7F3040B8
    {
            ctx->lr = 0x7F304078u;
            goto label_7F3040B8;
    }

label_7F304078:
    ctx->downcount -= 4;
    // 7F304078: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30407C:
    // 7F30407C: addi    r3, r26, 16
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(16);

label_7F304080:
    // 7F304080: addi    r5, r27, 16
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(16);

label_7F304084:
    // 7F304084: bl      0x7F3040B8
    {
            ctx->lr = 0x7F304088u;
            goto label_7F3040B8;
    }

label_7F304088:
    ctx->downcount -= 5;
    // 7F304088: addi    r24, r24, -2
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-2);

label_7F30408C:
    // 7F30408C: addi    r25, r25, 32
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(32);

label_7F304090:
    // 7F304090: addi    r28, r28, 32
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(32);

label_7F304094:
    // 7F304094: addi    r27, r27, 32
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(32);

label_7F304098:
    // 7F304098: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F30409C:
    ctx->downcount -= 2;
    // 7F30409C: cmpwi   r24, 0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3040A0:
    // 7F3040A0: bc    12, 1, 0x7F304048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304048u;
                return;
            }
            goto label_7F304048;
        }
    }

label_7F3040A4:
    ctx->pc = 0x7F3040A4u;
    ctx->downcount -= 16;
    // 7F3040A4: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3040A8:
    ctx->pc = 0x7F3040A8u;
    // 7F3040A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3040AC:
    ctx->pc = 0x7F3040ACu;
    // 7F3040AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3040B0:
    ctx->pc = 0x7F3040B0u;
    // 7F3040B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3040B4:
    ctx->pc = 0x7F3040B4u;
    // 7F3040B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3000EC;
        }
    }

label_7F3040B8:
    ctx->pc = 0x7F3040B8u;
    ctx->downcount -= 13;
    // 7F3040B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3040BC:
    ctx->pc = 0x7F3040BCu;
    // 7F3040BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3040C0:
    ctx->pc = 0x7F3040C0u;
    // 7F3040C0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F3040C4:
    ctx->pc = 0x7F3040C4u;
    // 7F3040C4: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3040C8:
    ctx->pc = 0x7F3040C8u;
    // 7F3040C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3040CC:
    ctx->pc = 0x7F3040CCu;
    // 7F3040CC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3040D0:
    ctx->pc = 0x7F3040D0u;
    // 7F3040D0: lfs     f0, 32312(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3040D0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3040D4:
    ctx->pc = 0x7F3040D4u;
    // 7F3040D4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3040D8:
    ctx->pc = 0x7F3040D8u;
    // 7F3040D8: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3040DC:
    ctx->pc = 0x7F3040DCu;
    // 7F3040DC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3040E0:
    ctx->pc = 0x7F3040E0u;
    // 7F3040E0: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3040E4:
    ctx->pc = 0x7F3040E4u;
    // 7F3040E4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3040E8:
    ctx->pc = 0x7F3040E8u;
    // 7F3040E8: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3040ECu;
    return;
return_dispatch_7F3000EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F300148u: goto label_7F300148;
    case 0x7F300150u: goto label_7F300150;
    case 0x7F300170u: goto label_7F300170;
    case 0x7F30017Cu: goto label_7F30017C;
    case 0x7F300234u: goto label_7F300234;
    case 0x7F300294u: goto label_7F300294;
    case 0x7F3002D8u: goto label_7F3002D8;
    case 0x7F300370u: goto label_7F300370;
    case 0x7F3003C4u: goto label_7F3003C4;
    case 0x7F300418u: goto label_7F300418;
    case 0x7F3004CCu: goto label_7F3004CC;
    case 0x7F300624u: goto label_7F300624;
    case 0x7F3006B4u: goto label_7F3006B4;
    case 0x7F3006C4u: goto label_7F3006C4;
    case 0x7F3006F4u: goto label_7F3006F4;
    case 0x7F300704u: goto label_7F300704;
    case 0x7F30073Cu: goto label_7F30073C;
    case 0x7F30074Cu: goto label_7F30074C;
    case 0x7F30075Cu: goto label_7F30075C;
    case 0x7F3007BCu: goto label_7F3007BC;
    case 0x7F3007C4u: goto label_7F3007C4;
    case 0x7F3007C8u: goto label_7F3007C8;
    case 0x7F300824u: goto label_7F300824;
    case 0x7F30082Cu: goto label_7F30082C;
    case 0x7F300830u: goto label_7F300830;
    case 0x7F300864u: goto label_7F300864;
    case 0x7F300874u: goto label_7F300874;
    case 0x7F3008DCu: goto label_7F3008DC;
    case 0x7F300904u: goto label_7F300904;
    case 0x7F30097Cu: goto label_7F30097C;
    case 0x7F3009B8u: goto label_7F3009B8;
    case 0x7F3009C4u: goto label_7F3009C4;
    case 0x7F3009D4u: goto label_7F3009D4;
    case 0x7F3009E8u: goto label_7F3009E8;
    case 0x7F300A38u: goto label_7F300A38;
    case 0x7F300A50u: goto label_7F300A50;
    case 0x7F300A98u: goto label_7F300A98;
    case 0x7F300AA4u: goto label_7F300AA4;
    case 0x7F300B78u: goto label_7F300B78;
    case 0x7F300B90u: goto label_7F300B90;
    case 0x7F300BE4u: goto label_7F300BE4;
    case 0x7F300BF4u: goto label_7F300BF4;
    case 0x7F300C7Cu: goto label_7F300C7C;
    case 0x7F300C98u: goto label_7F300C98;
    case 0x7F300CFCu: goto label_7F300CFC;
    case 0x7F300D3Cu: goto label_7F300D3C;
    case 0x7F300D54u: goto label_7F300D54;
    case 0x7F300D9Cu: goto label_7F300D9C;
    case 0x7F300DA0u: goto label_7F300DA0;
    case 0x7F300E60u: goto label_7F300E60;
    case 0x7F300E78u: goto label_7F300E78;
    case 0x7F300F64u: goto label_7F300F64;
    case 0x7F300FA0u: goto label_7F300FA0;
    case 0x7F300FB8u: goto label_7F300FB8;
    case 0x7F300FE4u: goto label_7F300FE4;
    case 0x7F300FFCu: goto label_7F300FFC;
    case 0x7F3010D8u: goto label_7F3010D8;
    case 0x7F301134u: goto label_7F301134;
    case 0x7F30113Cu: goto label_7F30113C;
    case 0x7F30114Cu: goto label_7F30114C;
    case 0x7F30116Cu: goto label_7F30116C;
    case 0x7F30117Cu: goto label_7F30117C;
    case 0x7F301260u: goto label_7F301260;
    case 0x7F301298u: goto label_7F301298;
    case 0x7F3012A8u: goto label_7F3012A8;
    case 0x7F3013D4u: goto label_7F3013D4;
    case 0x7F3015A8u: goto label_7F3015A8;
    case 0x7F3015B8u: goto label_7F3015B8;
    case 0x7F3015C0u: goto label_7F3015C0;
    case 0x7F3015CCu: goto label_7F3015CC;
    case 0x7F3015E0u: goto label_7F3015E0;
    case 0x7F301614u: goto label_7F301614;
    case 0x7F301620u: goto label_7F301620;
    case 0x7F30162Cu: goto label_7F30162C;
    case 0x7F30164Cu: goto label_7F30164C;
    case 0x7F301658u: goto label_7F301658;
    case 0x7F301664u: goto label_7F301664;
    case 0x7F3016ACu: goto label_7F3016AC;
    case 0x7F3016BCu: goto label_7F3016BC;
    case 0x7F301744u: goto label_7F301744;
    case 0x7F301754u: goto label_7F301754;
    case 0x7F30176Cu: goto label_7F30176C;
    case 0x7F3017CCu: goto label_7F3017CC;
    case 0x7F3017DCu: goto label_7F3017DC;
    case 0x7F3017F4u: goto label_7F3017F4;
    case 0x7F30184Cu: goto label_7F30184C;
    case 0x7F301880u: goto label_7F301880;
    case 0x7F301908u: goto label_7F301908;
    case 0x7F30191Cu: goto label_7F30191C;
    case 0x7F301A1Cu: goto label_7F301A1C;
    case 0x7F301A2Cu: goto label_7F301A2C;
    case 0x7F301A30u: goto label_7F301A30;
    case 0x7F301AA0u: goto label_7F301AA0;
    case 0x7F301AF4u: goto label_7F301AF4;
    case 0x7F301B5Cu: goto label_7F301B5C;
    case 0x7F301C14u: goto label_7F301C14;
    case 0x7F301C20u: goto label_7F301C20;
    case 0x7F301C2Cu: goto label_7F301C2C;
    case 0x7F301C48u: goto label_7F301C48;
    case 0x7F301C74u: goto label_7F301C74;
    case 0x7F301C94u: goto label_7F301C94;
    case 0x7F301CB4u: goto label_7F301CB4;
    case 0x7F301CD4u: goto label_7F301CD4;
    case 0x7F301CE8u: goto label_7F301CE8;
    case 0x7F301CF4u: goto label_7F301CF4;
    case 0x7F301D00u: goto label_7F301D00;
    case 0x7F301D18u: goto label_7F301D18;
    case 0x7F301D54u: goto label_7F301D54;
    case 0x7F301DB8u: goto label_7F301DB8;
    case 0x7F301E5Cu: goto label_7F301E5C;
    case 0x7F301FD4u: goto label_7F301FD4;
    case 0x7F301FDCu: goto label_7F301FDC;
    case 0x7F302000u: goto label_7F302000;
    case 0x7F302008u: goto label_7F302008;
    case 0x7F30201Cu: goto label_7F30201C;
    case 0x7F302050u: goto label_7F302050;
    case 0x7F302074u: goto label_7F302074;
    case 0x7F30207Cu: goto label_7F30207C;
    case 0x7F302084u: goto label_7F302084;
    case 0x7F3020C4u: goto label_7F3020C4;
    case 0x7F3020E0u: goto label_7F3020E0;
    case 0x7F3020ECu: goto label_7F3020EC;
    case 0x7F302120u: goto label_7F302120;
    case 0x7F302124u: goto label_7F302124;
    case 0x7F302134u: goto label_7F302134;
    case 0x7F302150u: goto label_7F302150;
    case 0x7F3022D8u: goto label_7F3022D8;
    case 0x7F3022E4u: goto label_7F3022E4;
    case 0x7F302350u: goto label_7F302350;
    case 0x7F30235Cu: goto label_7F30235C;
    case 0x7F302364u: goto label_7F302364;
    case 0x7F302370u: goto label_7F302370;
    case 0x7F302384u: goto label_7F302384;
    case 0x7F302390u: goto label_7F302390;
    case 0x7F302394u: goto label_7F302394;
    case 0x7F3023BCu: goto label_7F3023BC;
    case 0x7F3023E0u: goto label_7F3023E0;
    case 0x7F3023ECu: goto label_7F3023EC;
    case 0x7F302438u: goto label_7F302438;
    case 0x7F30244Cu: goto label_7F30244C;
    case 0x7F302464u: goto label_7F302464;
    case 0x7F302470u: goto label_7F302470;
    case 0x7F302478u: goto label_7F302478;
    case 0x7F302484u: goto label_7F302484;
    case 0x7F30248Cu: goto label_7F30248C;
    case 0x7F302490u: goto label_7F302490;
    case 0x7F30249Cu: goto label_7F30249C;
    case 0x7F3024A8u: goto label_7F3024A8;
    case 0x7F3024F4u: goto label_7F3024F4;
    case 0x7F302500u: goto label_7F302500;
    case 0x7F302538u: goto label_7F302538;
    case 0x7F302544u: goto label_7F302544;
    case 0x7F302580u: goto label_7F302580;
    case 0x7F30258Cu: goto label_7F30258C;
    case 0x7F3025CCu: goto label_7F3025CC;
    case 0x7F3025D8u: goto label_7F3025D8;
    case 0x7F30261Cu: goto label_7F30261C;
    case 0x7F302628u: goto label_7F302628;
    case 0x7F302634u: goto label_7F302634;
    case 0x7F302640u: goto label_7F302640;
    case 0x7F30267Cu: goto label_7F30267C;
    case 0x7F302688u: goto label_7F302688;
    case 0x7F3026C4u: goto label_7F3026C4;
    case 0x7F3026D0u: goto label_7F3026D0;
    case 0x7F30270Cu: goto label_7F30270C;
    case 0x7F302718u: goto label_7F302718;
    case 0x7F30272Cu: goto label_7F30272C;
    case 0x7F302744u: goto label_7F302744;
    case 0x7F302750u: goto label_7F302750;
    case 0x7F30275Cu: goto label_7F30275C;
    case 0x7F302768u: goto label_7F302768;
    case 0x7F302770u: goto label_7F302770;
    case 0x7F302790u: goto label_7F302790;
    case 0x7F30279Cu: goto label_7F30279C;
    case 0x7F3027A4u: goto label_7F3027A4;
    case 0x7F302828u: goto label_7F302828;
    case 0x7F3028ACu: goto label_7F3028AC;
    case 0x7F3028B4u: goto label_7F3028B4;
    case 0x7F3028BCu: goto label_7F3028BC;
    case 0x7F30290Cu: goto label_7F30290C;
    case 0x7F302918u: goto label_7F302918;
    case 0x7F302924u: goto label_7F302924;
    case 0x7F302930u: goto label_7F302930;
    case 0x7F30295Cu: goto label_7F30295C;
    case 0x7F302A2Cu: goto label_7F302A2C;
    case 0x7F302AB8u: goto label_7F302AB8;
    case 0x7F302B18u: goto label_7F302B18;
    case 0x7F302B64u: goto label_7F302B64;
    case 0x7F302B90u: goto label_7F302B90;
    case 0x7F302BC4u: goto label_7F302BC4;
    case 0x7F302BF8u: goto label_7F302BF8;
    case 0x7F302C28u: goto label_7F302C28;
    case 0x7F302C44u: goto label_7F302C44;
    case 0x7F302C5Cu: goto label_7F302C5C;
    case 0x7F302C68u: goto label_7F302C68;
    case 0x7F302C80u: goto label_7F302C80;
    case 0x7F302CB8u: goto label_7F302CB8;
    case 0x7F302CD4u: goto label_7F302CD4;
    case 0x7F302CF0u: goto label_7F302CF0;
    case 0x7F302D14u: goto label_7F302D14;
    case 0x7F302D48u: goto label_7F302D48;
    case 0x7F302D58u: goto label_7F302D58;
    case 0x7F302F58u: goto label_7F302F58;
    case 0x7F302F70u: goto label_7F302F70;
    case 0x7F302F7Cu: goto label_7F302F7C;
    case 0x7F302F90u: goto label_7F302F90;
    case 0x7F302F94u: goto label_7F302F94;
    case 0x7F302FC4u: goto label_7F302FC4;
    case 0x7F302FD4u: goto label_7F302FD4;
    case 0x7F302FDCu: goto label_7F302FDC;
    case 0x7F30305Cu: goto label_7F30305C;
    case 0x7F30309Cu: goto label_7F30309C;
    case 0x7F3030A8u: goto label_7F3030A8;
    case 0x7F303168u: goto label_7F303168;
    case 0x7F303170u: goto label_7F303170;
    case 0x7F3031DCu: goto label_7F3031DC;
    case 0x7F3031F8u: goto label_7F3031F8;
    case 0x7F30325Cu: goto label_7F30325C;
    case 0x7F30326Cu: goto label_7F30326C;
    case 0x7F303284u: goto label_7F303284;
    case 0x7F3032E4u: goto label_7F3032E4;
    case 0x7F303428u: goto label_7F303428;
    case 0x7F303440u: goto label_7F303440;
    case 0x7F303448u: goto label_7F303448;
    case 0x7F303450u: goto label_7F303450;
    case 0x7F303458u: goto label_7F303458;
    case 0x7F303498u: goto label_7F303498;
    case 0x7F3034A4u: goto label_7F3034A4;
    case 0x7F3034B0u: goto label_7F3034B0;
    case 0x7F3034BCu: goto label_7F3034BC;
    case 0x7F3034C4u: goto label_7F3034C4;
    case 0x7F3034D4u: goto label_7F3034D4;
    case 0x7F3034E8u: goto label_7F3034E8;
    case 0x7F3034F4u: goto label_7F3034F4;
    case 0x7F3034FCu: goto label_7F3034FC;
    case 0x7F303508u: goto label_7F303508;
    case 0x7F303550u: goto label_7F303550;
    case 0x7F303558u: goto label_7F303558;
    case 0x7F30356Cu: goto label_7F30356C;
    case 0x7F303580u: goto label_7F303580;
    case 0x7F3035A4u: goto label_7F3035A4;
    case 0x7F3035C0u: goto label_7F3035C0;
    case 0x7F303640u: goto label_7F303640;
    case 0x7F303678u: goto label_7F303678;
    case 0x7F3036A8u: goto label_7F3036A8;
    case 0x7F3036B0u: goto label_7F3036B0;
    case 0x7F30372Cu: goto label_7F30372C;
    case 0x7F303850u: goto label_7F303850;
    case 0x7F3038CCu: goto label_7F3038CC;
    case 0x7F303A24u: goto label_7F303A24;
    case 0x7F303A28u: goto label_7F303A28;
    case 0x7F303AC0u: goto label_7F303AC0;
    case 0x7F303AE8u: goto label_7F303AE8;
    case 0x7F303B78u: goto label_7F303B78;
    case 0x7F303B80u: goto label_7F303B80;
    case 0x7F303BB4u: goto label_7F303BB4;
    case 0x7F303D38u: goto label_7F303D38;
    case 0x7F303D44u: goto label_7F303D44;
    case 0x7F303D50u: goto label_7F303D50;
    case 0x7F303D5Cu: goto label_7F303D5C;
    case 0x7F303D88u: goto label_7F303D88;
    case 0x7F303DCCu: goto label_7F303DCC;
    case 0x7F303DE0u: goto label_7F303DE0;
    case 0x7F303DF4u: goto label_7F303DF4;
    case 0x7F303E08u: goto label_7F303E08;
    case 0x7F303E58u: goto label_7F303E58;
    case 0x7F303E84u: goto label_7F303E84;
    case 0x7F303F18u: goto label_7F303F18;
    case 0x7F303FB0u: goto label_7F303FB0;
    case 0x7F303FC0u: goto label_7F303FC0;
    case 0x7F304058u: goto label_7F304058;
    case 0x7F304068u: goto label_7F304068;
    case 0x7F304078u: goto label_7F304078;
    case 0x7F304088u: goto label_7F304088;
    default: return;
    }
}

