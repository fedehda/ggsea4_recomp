// DolRecomp output
#include "../generated.h"

static void loop_7F304978(CPUState* ctx) {
label_7F304978:
    ctx->downcount -= 5;
    ctx->pc = 0x7F304978u;
    // 7F304978: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30497Cu;
    // 7F30497C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F304980u;
    // 7F304980: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F304984u;
    // 7F304984: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F304988: bc    16, 0, 0x7F304978
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304978u;
                return;
            }
            goto label_7F304978;
        }
    }

    ctx->pc = 0x7F30498Cu;
}

static void loop_7F305320(CPUState* ctx) {
label_7F305320:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305320u;
    // 7F305320: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305324u;
    // 7F305324: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305328u;
    // 7F305328: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F30532Cu;
    // 7F30532C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305330: bc    16, 0, 0x7F305320
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305320u;
                return;
            }
            goto label_7F305320;
        }
    }

    ctx->pc = 0x7F305334u;
}

static void loop_7F30534C(CPUState* ctx) {
label_7F30534C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30534Cu;
    // 7F30534C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305350u;
    // 7F305350: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305354u;
    // 7F305354: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305358u;
    // 7F305358: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F30535C: bc    16, 0, 0x7F30534C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30534Cu;
                return;
            }
            goto label_7F30534C;
        }
    }

    ctx->pc = 0x7F305360u;
}

static void loop_7F305394(CPUState* ctx) {
label_7F305394:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305394u;
    // 7F305394: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305398u;
    // 7F305398: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30539Cu;
    // 7F30539C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3053A0u;
    // 7F3053A0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3053A4: bc    16, 0, 0x7F305394
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305394u;
                return;
            }
            goto label_7F305394;
        }
    }

    ctx->pc = 0x7F3053A8u;
}

static void loop_7F3053C4(CPUState* ctx) {
label_7F3053C4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3053C4u;
    // 7F3053C4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3053C8u;
    // 7F3053C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3053CCu;
    // 7F3053CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3053D0u;
    // 7F3053D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3053D4: bc    16, 0, 0x7F3053C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3053C4u;
                return;
            }
            goto label_7F3053C4;
        }
    }

    ctx->pc = 0x7F3053D8u;
}

static void loop_7F305770(CPUState* ctx) {
label_7F305770:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305770u;
    // 7F305770: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305774u;
    // 7F305774: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305778u;
    // 7F305778: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F30577Cu;
    // 7F30577C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305780: bc    16, 0, 0x7F305770
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305770u;
                return;
            }
            goto label_7F305770;
        }
    }

    ctx->pc = 0x7F305784u;
}

static void loop_7F30579C(CPUState* ctx) {
label_7F30579C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30579Cu;
    // 7F30579C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3057A0u;
    // 7F3057A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3057A4u;
    // 7F3057A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3057A8u;
    // 7F3057A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3057AC: bc    16, 0, 0x7F30579C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30579Cu;
                return;
            }
            goto label_7F30579C;
        }
    }

    ctx->pc = 0x7F3057B0u;
}

static void loop_7F305AE4(CPUState* ctx) {
label_7F305AE4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305AE4u;
    // 7F305AE4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305AE8u;
    // 7F305AE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305AECu;
    // 7F305AEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305AF0u;
    // 7F305AF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305AF4: bc    16, 0, 0x7F305AE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305AE4u;
                return;
            }
            goto label_7F305AE4;
        }
    }

    ctx->pc = 0x7F305AF8u;
}

static void loop_7F305B30(CPUState* ctx) {
label_7F305B30:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305B30u;
    // 7F305B30: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305B34u;
    // 7F305B34: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305B38u;
    // 7F305B38: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305B3Cu;
    // 7F305B3C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305B40: bc    16, 0, 0x7F305B30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305B30u;
                return;
            }
            goto label_7F305B30;
        }
    }

    ctx->pc = 0x7F305B44u;
}

static void loop_7F305BBC(CPUState* ctx) {
label_7F305BBC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305BBCu;
    // 7F305BBC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305BC0u;
    // 7F305BC0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305BC4u;
    // 7F305BC4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305BC8u;
    // 7F305BC8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305BCC: bc    16, 0, 0x7F305BBC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305BBCu;
                return;
            }
            goto label_7F305BBC;
        }
    }

    ctx->pc = 0x7F305BD0u;
}

static void loop_7F305BE8(CPUState* ctx) {
label_7F305BE8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305BE8u;
    // 7F305BE8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305BECu;
    // 7F305BEC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305BF0u;
    // 7F305BF0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305BF4u;
    // 7F305BF4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305BF8: bc    16, 0, 0x7F305BE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305BE8u;
                return;
            }
            goto label_7F305BE8;
        }
    }

    ctx->pc = 0x7F305BFCu;
}

static void loop_7F305C38(CPUState* ctx) {
label_7F305C38:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305C38u;
    // 7F305C38: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305C3Cu;
    // 7F305C3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305C40u;
    // 7F305C40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305C44u;
    // 7F305C44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305C48: bc    16, 0, 0x7F305C38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305C38u;
                return;
            }
            goto label_7F305C38;
        }
    }

    ctx->pc = 0x7F305C4Cu;
}

static void loop_7F305CE0(CPUState* ctx) {
label_7F305CE0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305CE0u;
    // 7F305CE0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305CE4u;
    // 7F305CE4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305CE8u;
    // 7F305CE8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305CECu;
    // 7F305CEC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305CF0: bc    16, 0, 0x7F305CE0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305CE0u;
                return;
            }
            goto label_7F305CE0;
        }
    }

    ctx->pc = 0x7F305CF4u;
}

static void loop_7F305DB4(CPUState* ctx) {
label_7F305DB4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305DB4u;
    // 7F305DB4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305DB8u;
    // 7F305DB8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305DBCu;
    // 7F305DBC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305DC0u;
    // 7F305DC0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305DC4: bc    16, 0, 0x7F305DB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305DB4u;
                return;
            }
            goto label_7F305DB4;
        }
    }

    ctx->pc = 0x7F305DC8u;
}

static void loop_7F305DF0(CPUState* ctx) {
label_7F305DF0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F305DF0u;
    // 7F305DF0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F305DF4u;
    // 7F305DF4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F305DF8u;
    // 7F305DF8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F305DFCu;
    // 7F305DFC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F305E00: bc    16, 0, 0x7F305DF0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305DF0u;
                return;
            }
            goto label_7F305DF0;
        }
    }

    ctx->pc = 0x7F305E04u;
}

static void loop_7F306438(CPUState* ctx) {
label_7F306438:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306438u;
    // 7F306438: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30643Cu;
    // 7F30643C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306440u;
    // 7F306440: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306444u;
    // 7F306444: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306448: bc    16, 0, 0x7F306438
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306438u;
                return;
            }
            goto label_7F306438;
        }
    }

    ctx->pc = 0x7F30644Cu;
}

static void loop_7F306560(CPUState* ctx) {
label_7F306560:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306560u;
    // 7F306560: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306564u;
    // 7F306564: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306568u;
    // 7F306568: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F30656Cu;
    // 7F30656C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306570: bc    16, 0, 0x7F306560
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306560u;
                return;
            }
            goto label_7F306560;
        }
    }

    ctx->pc = 0x7F306574u;
}

static void loop_7F306998(CPUState* ctx) {
label_7F306998:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306998u;
    // 7F306998: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30699Cu;
    // 7F30699C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3069A0u;
    // 7F3069A0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3069A4u;
    // 7F3069A4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3069A8: bc    16, 0, 0x7F306998
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306998u;
                return;
            }
            goto label_7F306998;
        }
    }

    ctx->pc = 0x7F3069ACu;
}

static void loop_7F3069DC(CPUState* ctx) {
label_7F3069DC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3069DCu;
    // 7F3069DC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3069E0u;
    // 7F3069E0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3069E4u;
    // 7F3069E4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3069E8u;
    // 7F3069E8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3069EC: bc    16, 0, 0x7F3069DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3069DCu;
                return;
            }
            goto label_7F3069DC;
        }
    }

    ctx->pc = 0x7F3069F0u;
}

static void loop_7F306A8C(CPUState* ctx) {
label_7F306A8C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306A8Cu;
    // 7F306A8C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306A90u;
    // 7F306A90: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306A94u;
    // 7F306A94: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306A98u;
    // 7F306A98: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306A9C: bc    16, 0, 0x7F306A8C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306A8Cu;
                return;
            }
            goto label_7F306A8C;
        }
    }

    ctx->pc = 0x7F306AA0u;
}

static void loop_7F306CC8(CPUState* ctx) {
label_7F306CC8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306CC8u;
    // 7F306CC8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306CCCu;
    // 7F306CCC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306CD0u;
    // 7F306CD0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306CD4u;
    // 7F306CD4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306CD8: bc    16, 0, 0x7F306CC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306CC8u;
                return;
            }
            goto label_7F306CC8;
        }
    }

    ctx->pc = 0x7F306CDCu;
}

static void loop_7F306CF4(CPUState* ctx) {
label_7F306CF4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306CF4u;
    // 7F306CF4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306CF8u;
    // 7F306CF8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306CFCu;
    // 7F306CFC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306D00u;
    // 7F306D00: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306D04: bc    16, 0, 0x7F306CF4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306CF4u;
                return;
            }
            goto label_7F306CF4;
        }
    }

    ctx->pc = 0x7F306D08u;
}

static void loop_7F306DC4(CPUState* ctx) {
label_7F306DC4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306DC4u;
    // 7F306DC4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306DC8u;
    // 7F306DC8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306DCCu;
    // 7F306DCC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306DD0u;
    // 7F306DD0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306DD4: bc    16, 0, 0x7F306DC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306DC4u;
                return;
            }
            goto label_7F306DC4;
        }
    }

    ctx->pc = 0x7F306DD8u;
}

static void loop_7F306EC0(CPUState* ctx) {
label_7F306EC0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F306EC0u;
    // 7F306EC0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F306EC4u;
    // 7F306EC4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F306EC8u;
    // 7F306EC8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F306ECCu;
    // 7F306ECC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F306ED0: bc    16, 0, 0x7F306EC0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306EC0u;
                return;
            }
            goto label_7F306EC0;
        }
    }

    ctx->pc = 0x7F306ED4u;
}

static void loop_7F307970(CPUState* ctx) {
label_7F307970:
    ctx->downcount -= 6;
    // 7F307970: addi    r0, r3, 259
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(259);

    // 7F307974: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

    ctx->pc = 0x7F307978u;
    // 7F307978: lbzx    r0, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    // 7F30797C: or   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] | ctx->gpr[0];
    }

    // 7F307980: rlwinm r29, r0, 0, 24, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    // 7F307984: bc    16, 0, 0x7F307970
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307970u;
                return;
            }
            goto label_7F307970;
        }
    }

    ctx->pc = 0x7F307988u;
}

void func_7F3040EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3040ECu: goto label_7F3040EC;
    case 0x7F3040F0u: goto label_7F3040F0;
    case 0x7F3040F4u: goto label_7F3040F4;
    case 0x7F3040F8u: goto label_7F3040F8;
    case 0x7F3040FCu: goto label_7F3040FC;
    case 0x7F304100u: goto label_7F304100;
    case 0x7F304104u: goto label_7F304104;
    case 0x7F304108u: goto label_7F304108;
    case 0x7F30410Cu: goto label_7F30410C;
    case 0x7F304110u: goto label_7F304110;
    case 0x7F304114u: goto label_7F304114;
    case 0x7F304118u: goto label_7F304118;
    case 0x7F30411Cu: goto label_7F30411C;
    case 0x7F304120u: goto label_7F304120;
    case 0x7F304124u: goto label_7F304124;
    case 0x7F304128u: goto label_7F304128;
    case 0x7F30412Cu: goto label_7F30412C;
    case 0x7F304130u: goto label_7F304130;
    case 0x7F304134u: goto label_7F304134;
    case 0x7F304138u: goto label_7F304138;
    case 0x7F30413Cu: goto label_7F30413C;
    case 0x7F304140u: goto label_7F304140;
    case 0x7F304144u: goto label_7F304144;
    case 0x7F304148u: goto label_7F304148;
    case 0x7F30414Cu: goto label_7F30414C;
    case 0x7F304150u: goto label_7F304150;
    case 0x7F304154u: goto label_7F304154;
    case 0x7F304158u: goto label_7F304158;
    case 0x7F30415Cu: goto label_7F30415C;
    case 0x7F304160u: goto label_7F304160;
    case 0x7F304164u: goto label_7F304164;
    case 0x7F304168u: goto label_7F304168;
    case 0x7F30416Cu: goto label_7F30416C;
    case 0x7F304170u: goto label_7F304170;
    case 0x7F304174u: goto label_7F304174;
    case 0x7F304178u: goto label_7F304178;
    case 0x7F30417Cu: goto label_7F30417C;
    case 0x7F304180u: goto label_7F304180;
    case 0x7F304184u: goto label_7F304184;
    case 0x7F304188u: goto label_7F304188;
    case 0x7F30418Cu: goto label_7F30418C;
    case 0x7F304190u: goto label_7F304190;
    case 0x7F304194u: goto label_7F304194;
    case 0x7F304198u: goto label_7F304198;
    case 0x7F30419Cu: goto label_7F30419C;
    case 0x7F3041A0u: goto label_7F3041A0;
    case 0x7F3041A4u: goto label_7F3041A4;
    case 0x7F3041A8u: goto label_7F3041A8;
    case 0x7F3041ACu: goto label_7F3041AC;
    case 0x7F3041B0u: goto label_7F3041B0;
    case 0x7F3041B4u: goto label_7F3041B4;
    case 0x7F3041B8u: goto label_7F3041B8;
    case 0x7F3041BCu: goto label_7F3041BC;
    case 0x7F3041C0u: goto label_7F3041C0;
    case 0x7F3041C4u: goto label_7F3041C4;
    case 0x7F3041C8u: goto label_7F3041C8;
    case 0x7F3041CCu: goto label_7F3041CC;
    case 0x7F3041D0u: goto label_7F3041D0;
    case 0x7F3041D4u: goto label_7F3041D4;
    case 0x7F3041D8u: goto label_7F3041D8;
    case 0x7F3041DCu: goto label_7F3041DC;
    case 0x7F3041E0u: goto label_7F3041E0;
    case 0x7F3041E4u: goto label_7F3041E4;
    case 0x7F3041E8u: goto label_7F3041E8;
    case 0x7F3041ECu: goto label_7F3041EC;
    case 0x7F3041F0u: goto label_7F3041F0;
    case 0x7F3041F4u: goto label_7F3041F4;
    case 0x7F3041F8u: goto label_7F3041F8;
    case 0x7F3041FCu: goto label_7F3041FC;
    case 0x7F304200u: goto label_7F304200;
    case 0x7F304204u: goto label_7F304204;
    case 0x7F304208u: goto label_7F304208;
    case 0x7F30420Cu: goto label_7F30420C;
    case 0x7F304210u: goto label_7F304210;
    case 0x7F304214u: goto label_7F304214;
    case 0x7F304218u: goto label_7F304218;
    case 0x7F30421Cu: goto label_7F30421C;
    case 0x7F304220u: goto label_7F304220;
    case 0x7F304224u: goto label_7F304224;
    case 0x7F304228u: goto label_7F304228;
    case 0x7F30422Cu: goto label_7F30422C;
    case 0x7F304230u: goto label_7F304230;
    case 0x7F304234u: goto label_7F304234;
    case 0x7F304238u: goto label_7F304238;
    case 0x7F30423Cu: goto label_7F30423C;
    case 0x7F304240u: goto label_7F304240;
    case 0x7F304244u: goto label_7F304244;
    case 0x7F304248u: goto label_7F304248;
    case 0x7F30424Cu: goto label_7F30424C;
    case 0x7F304250u: goto label_7F304250;
    case 0x7F304254u: goto label_7F304254;
    case 0x7F304258u: goto label_7F304258;
    case 0x7F30425Cu: goto label_7F30425C;
    case 0x7F304260u: goto label_7F304260;
    case 0x7F304264u: goto label_7F304264;
    case 0x7F304268u: goto label_7F304268;
    case 0x7F30426Cu: goto label_7F30426C;
    case 0x7F304270u: goto label_7F304270;
    case 0x7F304274u: goto label_7F304274;
    case 0x7F304278u: goto label_7F304278;
    case 0x7F30427Cu: goto label_7F30427C;
    case 0x7F304280u: goto label_7F304280;
    case 0x7F304284u: goto label_7F304284;
    case 0x7F304288u: goto label_7F304288;
    case 0x7F30428Cu: goto label_7F30428C;
    case 0x7F304290u: goto label_7F304290;
    case 0x7F304294u: goto label_7F304294;
    case 0x7F304298u: goto label_7F304298;
    case 0x7F30429Cu: goto label_7F30429C;
    case 0x7F3042A0u: goto label_7F3042A0;
    case 0x7F3042A4u: goto label_7F3042A4;
    case 0x7F3042A8u: goto label_7F3042A8;
    case 0x7F3042ACu: goto label_7F3042AC;
    case 0x7F3042B0u: goto label_7F3042B0;
    case 0x7F3042B4u: goto label_7F3042B4;
    case 0x7F3042B8u: goto label_7F3042B8;
    case 0x7F3042BCu: goto label_7F3042BC;
    case 0x7F3042C0u: goto label_7F3042C0;
    case 0x7F3042C4u: goto label_7F3042C4;
    case 0x7F3042C8u: goto label_7F3042C8;
    case 0x7F3042CCu: goto label_7F3042CC;
    case 0x7F3042D0u: goto label_7F3042D0;
    case 0x7F3042D4u: goto label_7F3042D4;
    case 0x7F3042D8u: goto label_7F3042D8;
    case 0x7F3042DCu: goto label_7F3042DC;
    case 0x7F3042E0u: goto label_7F3042E0;
    case 0x7F3042E4u: goto label_7F3042E4;
    case 0x7F3042E8u: goto label_7F3042E8;
    case 0x7F3042ECu: goto label_7F3042EC;
    case 0x7F3042F0u: goto label_7F3042F0;
    case 0x7F3042F4u: goto label_7F3042F4;
    case 0x7F3042F8u: goto label_7F3042F8;
    case 0x7F3042FCu: goto label_7F3042FC;
    case 0x7F304300u: goto label_7F304300;
    case 0x7F304304u: goto label_7F304304;
    case 0x7F304308u: goto label_7F304308;
    case 0x7F30430Cu: goto label_7F30430C;
    case 0x7F304310u: goto label_7F304310;
    case 0x7F304314u: goto label_7F304314;
    case 0x7F304318u: goto label_7F304318;
    case 0x7F30431Cu: goto label_7F30431C;
    case 0x7F304320u: goto label_7F304320;
    case 0x7F304324u: goto label_7F304324;
    case 0x7F304328u: goto label_7F304328;
    case 0x7F30432Cu: goto label_7F30432C;
    case 0x7F304330u: goto label_7F304330;
    case 0x7F304334u: goto label_7F304334;
    case 0x7F304338u: goto label_7F304338;
    case 0x7F30433Cu: goto label_7F30433C;
    case 0x7F304340u: goto label_7F304340;
    case 0x7F304344u: goto label_7F304344;
    case 0x7F304348u: goto label_7F304348;
    case 0x7F30434Cu: goto label_7F30434C;
    case 0x7F304350u: goto label_7F304350;
    case 0x7F304354u: goto label_7F304354;
    case 0x7F304358u: goto label_7F304358;
    case 0x7F30435Cu: goto label_7F30435C;
    case 0x7F304360u: goto label_7F304360;
    case 0x7F304364u: goto label_7F304364;
    case 0x7F304368u: goto label_7F304368;
    case 0x7F30436Cu: goto label_7F30436C;
    case 0x7F304370u: goto label_7F304370;
    case 0x7F304374u: goto label_7F304374;
    case 0x7F304378u: goto label_7F304378;
    case 0x7F30437Cu: goto label_7F30437C;
    case 0x7F304380u: goto label_7F304380;
    case 0x7F304384u: goto label_7F304384;
    case 0x7F304388u: goto label_7F304388;
    case 0x7F30438Cu: goto label_7F30438C;
    case 0x7F304390u: goto label_7F304390;
    case 0x7F304394u: goto label_7F304394;
    case 0x7F304398u: goto label_7F304398;
    case 0x7F30439Cu: goto label_7F30439C;
    case 0x7F3043A0u: goto label_7F3043A0;
    case 0x7F3043A4u: goto label_7F3043A4;
    case 0x7F3043A8u: goto label_7F3043A8;
    case 0x7F3043ACu: goto label_7F3043AC;
    case 0x7F3043B0u: goto label_7F3043B0;
    case 0x7F3043B4u: goto label_7F3043B4;
    case 0x7F3043B8u: goto label_7F3043B8;
    case 0x7F3043BCu: goto label_7F3043BC;
    case 0x7F3043C0u: goto label_7F3043C0;
    case 0x7F3043C4u: goto label_7F3043C4;
    case 0x7F3043C8u: goto label_7F3043C8;
    case 0x7F3043CCu: goto label_7F3043CC;
    case 0x7F3043D0u: goto label_7F3043D0;
    case 0x7F3043D4u: goto label_7F3043D4;
    case 0x7F3043D8u: goto label_7F3043D8;
    case 0x7F3043DCu: goto label_7F3043DC;
    case 0x7F3043E0u: goto label_7F3043E0;
    case 0x7F3043E4u: goto label_7F3043E4;
    case 0x7F3043E8u: goto label_7F3043E8;
    case 0x7F3043ECu: goto label_7F3043EC;
    case 0x7F3043F0u: goto label_7F3043F0;
    case 0x7F3043F4u: goto label_7F3043F4;
    case 0x7F3043F8u: goto label_7F3043F8;
    case 0x7F3043FCu: goto label_7F3043FC;
    case 0x7F304400u: goto label_7F304400;
    case 0x7F304404u: goto label_7F304404;
    case 0x7F304408u: goto label_7F304408;
    case 0x7F30440Cu: goto label_7F30440C;
    case 0x7F304410u: goto label_7F304410;
    case 0x7F304414u: goto label_7F304414;
    case 0x7F304418u: goto label_7F304418;
    case 0x7F30441Cu: goto label_7F30441C;
    case 0x7F304420u: goto label_7F304420;
    case 0x7F304424u: goto label_7F304424;
    case 0x7F304428u: goto label_7F304428;
    case 0x7F30442Cu: goto label_7F30442C;
    case 0x7F304430u: goto label_7F304430;
    case 0x7F304434u: goto label_7F304434;
    case 0x7F304438u: goto label_7F304438;
    case 0x7F30443Cu: goto label_7F30443C;
    case 0x7F304440u: goto label_7F304440;
    case 0x7F304444u: goto label_7F304444;
    case 0x7F304448u: goto label_7F304448;
    case 0x7F30444Cu: goto label_7F30444C;
    case 0x7F304450u: goto label_7F304450;
    case 0x7F304454u: goto label_7F304454;
    case 0x7F304458u: goto label_7F304458;
    case 0x7F30445Cu: goto label_7F30445C;
    case 0x7F304460u: goto label_7F304460;
    case 0x7F304464u: goto label_7F304464;
    case 0x7F304468u: goto label_7F304468;
    case 0x7F30446Cu: goto label_7F30446C;
    case 0x7F304470u: goto label_7F304470;
    case 0x7F304474u: goto label_7F304474;
    case 0x7F304478u: goto label_7F304478;
    case 0x7F30447Cu: goto label_7F30447C;
    case 0x7F304480u: goto label_7F304480;
    case 0x7F304484u: goto label_7F304484;
    case 0x7F304488u: goto label_7F304488;
    case 0x7F30448Cu: goto label_7F30448C;
    case 0x7F304490u: goto label_7F304490;
    case 0x7F304494u: goto label_7F304494;
    case 0x7F304498u: goto label_7F304498;
    case 0x7F30449Cu: goto label_7F30449C;
    case 0x7F3044A0u: goto label_7F3044A0;
    case 0x7F3044A4u: goto label_7F3044A4;
    case 0x7F3044A8u: goto label_7F3044A8;
    case 0x7F3044ACu: goto label_7F3044AC;
    case 0x7F3044B0u: goto label_7F3044B0;
    case 0x7F3044B4u: goto label_7F3044B4;
    case 0x7F3044B8u: goto label_7F3044B8;
    case 0x7F3044BCu: goto label_7F3044BC;
    case 0x7F3044C0u: goto label_7F3044C0;
    case 0x7F3044C4u: goto label_7F3044C4;
    case 0x7F3044C8u: goto label_7F3044C8;
    case 0x7F3044CCu: goto label_7F3044CC;
    case 0x7F3044D0u: goto label_7F3044D0;
    case 0x7F3044D4u: goto label_7F3044D4;
    case 0x7F3044D8u: goto label_7F3044D8;
    case 0x7F3044DCu: goto label_7F3044DC;
    case 0x7F3044E0u: goto label_7F3044E0;
    case 0x7F3044E4u: goto label_7F3044E4;
    case 0x7F3044E8u: goto label_7F3044E8;
    case 0x7F3044ECu: goto label_7F3044EC;
    case 0x7F3044F0u: goto label_7F3044F0;
    case 0x7F3044F4u: goto label_7F3044F4;
    case 0x7F3044F8u: goto label_7F3044F8;
    case 0x7F3044FCu: goto label_7F3044FC;
    case 0x7F304500u: goto label_7F304500;
    case 0x7F304504u: goto label_7F304504;
    case 0x7F304508u: goto label_7F304508;
    case 0x7F30450Cu: goto label_7F30450C;
    case 0x7F304510u: goto label_7F304510;
    case 0x7F304514u: goto label_7F304514;
    case 0x7F304518u: goto label_7F304518;
    case 0x7F30451Cu: goto label_7F30451C;
    case 0x7F304520u: goto label_7F304520;
    case 0x7F304524u: goto label_7F304524;
    case 0x7F304528u: goto label_7F304528;
    case 0x7F30452Cu: goto label_7F30452C;
    case 0x7F304530u: goto label_7F304530;
    case 0x7F304534u: goto label_7F304534;
    case 0x7F304538u: goto label_7F304538;
    case 0x7F30453Cu: goto label_7F30453C;
    case 0x7F304540u: goto label_7F304540;
    case 0x7F304544u: goto label_7F304544;
    case 0x7F304548u: goto label_7F304548;
    case 0x7F30454Cu: goto label_7F30454C;
    case 0x7F304550u: goto label_7F304550;
    case 0x7F304554u: goto label_7F304554;
    case 0x7F304558u: goto label_7F304558;
    case 0x7F30455Cu: goto label_7F30455C;
    case 0x7F304560u: goto label_7F304560;
    case 0x7F304564u: goto label_7F304564;
    case 0x7F304568u: goto label_7F304568;
    case 0x7F30456Cu: goto label_7F30456C;
    case 0x7F304570u: goto label_7F304570;
    case 0x7F304574u: goto label_7F304574;
    case 0x7F304578u: goto label_7F304578;
    case 0x7F30457Cu: goto label_7F30457C;
    case 0x7F304580u: goto label_7F304580;
    case 0x7F304584u: goto label_7F304584;
    case 0x7F304588u: goto label_7F304588;
    case 0x7F30458Cu: goto label_7F30458C;
    case 0x7F304590u: goto label_7F304590;
    case 0x7F304594u: goto label_7F304594;
    case 0x7F304598u: goto label_7F304598;
    case 0x7F30459Cu: goto label_7F30459C;
    case 0x7F3045A0u: goto label_7F3045A0;
    case 0x7F3045A4u: goto label_7F3045A4;
    case 0x7F3045A8u: goto label_7F3045A8;
    case 0x7F3045ACu: goto label_7F3045AC;
    case 0x7F3045B0u: goto label_7F3045B0;
    case 0x7F3045B4u: goto label_7F3045B4;
    case 0x7F3045B8u: goto label_7F3045B8;
    case 0x7F3045BCu: goto label_7F3045BC;
    case 0x7F3045C0u: goto label_7F3045C0;
    case 0x7F3045C4u: goto label_7F3045C4;
    case 0x7F3045C8u: goto label_7F3045C8;
    case 0x7F3045CCu: goto label_7F3045CC;
    case 0x7F3045D0u: goto label_7F3045D0;
    case 0x7F3045D4u: goto label_7F3045D4;
    case 0x7F3045D8u: goto label_7F3045D8;
    case 0x7F3045DCu: goto label_7F3045DC;
    case 0x7F3045E0u: goto label_7F3045E0;
    case 0x7F3045E4u: goto label_7F3045E4;
    case 0x7F3045E8u: goto label_7F3045E8;
    case 0x7F3045ECu: goto label_7F3045EC;
    case 0x7F3045F0u: goto label_7F3045F0;
    case 0x7F3045F4u: goto label_7F3045F4;
    case 0x7F3045F8u: goto label_7F3045F8;
    case 0x7F3045FCu: goto label_7F3045FC;
    case 0x7F304600u: goto label_7F304600;
    case 0x7F304604u: goto label_7F304604;
    case 0x7F304608u: goto label_7F304608;
    case 0x7F30460Cu: goto label_7F30460C;
    case 0x7F304610u: goto label_7F304610;
    case 0x7F304614u: goto label_7F304614;
    case 0x7F304618u: goto label_7F304618;
    case 0x7F30461Cu: goto label_7F30461C;
    case 0x7F304620u: goto label_7F304620;
    case 0x7F304624u: goto label_7F304624;
    case 0x7F304628u: goto label_7F304628;
    case 0x7F30462Cu: goto label_7F30462C;
    case 0x7F304630u: goto label_7F304630;
    case 0x7F304634u: goto label_7F304634;
    case 0x7F304638u: goto label_7F304638;
    case 0x7F30463Cu: goto label_7F30463C;
    case 0x7F304640u: goto label_7F304640;
    case 0x7F304644u: goto label_7F304644;
    case 0x7F304648u: goto label_7F304648;
    case 0x7F30464Cu: goto label_7F30464C;
    case 0x7F304650u: goto label_7F304650;
    case 0x7F304654u: goto label_7F304654;
    case 0x7F304658u: goto label_7F304658;
    case 0x7F30465Cu: goto label_7F30465C;
    case 0x7F304660u: goto label_7F304660;
    case 0x7F304664u: goto label_7F304664;
    case 0x7F304668u: goto label_7F304668;
    case 0x7F30466Cu: goto label_7F30466C;
    case 0x7F304670u: goto label_7F304670;
    case 0x7F304674u: goto label_7F304674;
    case 0x7F304678u: goto label_7F304678;
    case 0x7F30467Cu: goto label_7F30467C;
    case 0x7F304680u: goto label_7F304680;
    case 0x7F304684u: goto label_7F304684;
    case 0x7F304688u: goto label_7F304688;
    case 0x7F30468Cu: goto label_7F30468C;
    case 0x7F304690u: goto label_7F304690;
    case 0x7F304694u: goto label_7F304694;
    case 0x7F304698u: goto label_7F304698;
    case 0x7F30469Cu: goto label_7F30469C;
    case 0x7F3046A0u: goto label_7F3046A0;
    case 0x7F3046A4u: goto label_7F3046A4;
    case 0x7F3046A8u: goto label_7F3046A8;
    case 0x7F3046ACu: goto label_7F3046AC;
    case 0x7F3046B0u: goto label_7F3046B0;
    case 0x7F3046B4u: goto label_7F3046B4;
    case 0x7F3046B8u: goto label_7F3046B8;
    case 0x7F3046BCu: goto label_7F3046BC;
    case 0x7F3046C0u: goto label_7F3046C0;
    case 0x7F3046C4u: goto label_7F3046C4;
    case 0x7F3046C8u: goto label_7F3046C8;
    case 0x7F3046CCu: goto label_7F3046CC;
    case 0x7F3046D0u: goto label_7F3046D0;
    case 0x7F3046D4u: goto label_7F3046D4;
    case 0x7F3046D8u: goto label_7F3046D8;
    case 0x7F3046DCu: goto label_7F3046DC;
    case 0x7F3046E0u: goto label_7F3046E0;
    case 0x7F3046E4u: goto label_7F3046E4;
    case 0x7F3046E8u: goto label_7F3046E8;
    case 0x7F3046ECu: goto label_7F3046EC;
    case 0x7F3046F0u: goto label_7F3046F0;
    case 0x7F3046F4u: goto label_7F3046F4;
    case 0x7F3046F8u: goto label_7F3046F8;
    case 0x7F3046FCu: goto label_7F3046FC;
    case 0x7F304700u: goto label_7F304700;
    case 0x7F304704u: goto label_7F304704;
    case 0x7F304708u: goto label_7F304708;
    case 0x7F30470Cu: goto label_7F30470C;
    case 0x7F304710u: goto label_7F304710;
    case 0x7F304714u: goto label_7F304714;
    case 0x7F304718u: goto label_7F304718;
    case 0x7F30471Cu: goto label_7F30471C;
    case 0x7F304720u: goto label_7F304720;
    case 0x7F304724u: goto label_7F304724;
    case 0x7F304728u: goto label_7F304728;
    case 0x7F30472Cu: goto label_7F30472C;
    case 0x7F304730u: goto label_7F304730;
    case 0x7F304734u: goto label_7F304734;
    case 0x7F304738u: goto label_7F304738;
    case 0x7F30473Cu: goto label_7F30473C;
    case 0x7F304740u: goto label_7F304740;
    case 0x7F304744u: goto label_7F304744;
    case 0x7F304748u: goto label_7F304748;
    case 0x7F30474Cu: goto label_7F30474C;
    case 0x7F304750u: goto label_7F304750;
    case 0x7F304754u: goto label_7F304754;
    case 0x7F304758u: goto label_7F304758;
    case 0x7F30475Cu: goto label_7F30475C;
    case 0x7F304760u: goto label_7F304760;
    case 0x7F304764u: goto label_7F304764;
    case 0x7F304768u: goto label_7F304768;
    case 0x7F30476Cu: goto label_7F30476C;
    case 0x7F304770u: goto label_7F304770;
    case 0x7F304774u: goto label_7F304774;
    case 0x7F304778u: goto label_7F304778;
    case 0x7F30477Cu: goto label_7F30477C;
    case 0x7F304780u: goto label_7F304780;
    case 0x7F304784u: goto label_7F304784;
    case 0x7F304788u: goto label_7F304788;
    case 0x7F30478Cu: goto label_7F30478C;
    case 0x7F304790u: goto label_7F304790;
    case 0x7F304794u: goto label_7F304794;
    case 0x7F304798u: goto label_7F304798;
    case 0x7F30479Cu: goto label_7F30479C;
    case 0x7F3047A0u: goto label_7F3047A0;
    case 0x7F3047A4u: goto label_7F3047A4;
    case 0x7F3047A8u: goto label_7F3047A8;
    case 0x7F3047ACu: goto label_7F3047AC;
    case 0x7F3047B0u: goto label_7F3047B0;
    case 0x7F3047B4u: goto label_7F3047B4;
    case 0x7F3047B8u: goto label_7F3047B8;
    case 0x7F3047BCu: goto label_7F3047BC;
    case 0x7F3047C0u: goto label_7F3047C0;
    case 0x7F3047C4u: goto label_7F3047C4;
    case 0x7F3047C8u: goto label_7F3047C8;
    case 0x7F3047CCu: goto label_7F3047CC;
    case 0x7F3047D0u: goto label_7F3047D0;
    case 0x7F3047D4u: goto label_7F3047D4;
    case 0x7F3047D8u: goto label_7F3047D8;
    case 0x7F3047DCu: goto label_7F3047DC;
    case 0x7F3047E0u: goto label_7F3047E0;
    case 0x7F3047E4u: goto label_7F3047E4;
    case 0x7F3047E8u: goto label_7F3047E8;
    case 0x7F3047ECu: goto label_7F3047EC;
    case 0x7F3047F0u: goto label_7F3047F0;
    case 0x7F3047F4u: goto label_7F3047F4;
    case 0x7F3047F8u: goto label_7F3047F8;
    case 0x7F3047FCu: goto label_7F3047FC;
    case 0x7F304800u: goto label_7F304800;
    case 0x7F304804u: goto label_7F304804;
    case 0x7F304808u: goto label_7F304808;
    case 0x7F30480Cu: goto label_7F30480C;
    case 0x7F304810u: goto label_7F304810;
    case 0x7F304814u: goto label_7F304814;
    case 0x7F304818u: goto label_7F304818;
    case 0x7F30481Cu: goto label_7F30481C;
    case 0x7F304820u: goto label_7F304820;
    case 0x7F304824u: goto label_7F304824;
    case 0x7F304828u: goto label_7F304828;
    case 0x7F30482Cu: goto label_7F30482C;
    case 0x7F304830u: goto label_7F304830;
    case 0x7F304834u: goto label_7F304834;
    case 0x7F304838u: goto label_7F304838;
    case 0x7F30483Cu: goto label_7F30483C;
    case 0x7F304840u: goto label_7F304840;
    case 0x7F304844u: goto label_7F304844;
    case 0x7F304848u: goto label_7F304848;
    case 0x7F30484Cu: goto label_7F30484C;
    case 0x7F304850u: goto label_7F304850;
    case 0x7F304854u: goto label_7F304854;
    case 0x7F304858u: goto label_7F304858;
    case 0x7F30485Cu: goto label_7F30485C;
    case 0x7F304860u: goto label_7F304860;
    case 0x7F304864u: goto label_7F304864;
    case 0x7F304868u: goto label_7F304868;
    case 0x7F30486Cu: goto label_7F30486C;
    case 0x7F304870u: goto label_7F304870;
    case 0x7F304874u: goto label_7F304874;
    case 0x7F304878u: goto label_7F304878;
    case 0x7F30487Cu: goto label_7F30487C;
    case 0x7F304880u: goto label_7F304880;
    case 0x7F304884u: goto label_7F304884;
    case 0x7F304888u: goto label_7F304888;
    case 0x7F30488Cu: goto label_7F30488C;
    case 0x7F304890u: goto label_7F304890;
    case 0x7F304894u: goto label_7F304894;
    case 0x7F304898u: goto label_7F304898;
    case 0x7F30489Cu: goto label_7F30489C;
    case 0x7F3048A0u: goto label_7F3048A0;
    case 0x7F3048A4u: goto label_7F3048A4;
    case 0x7F3048A8u: goto label_7F3048A8;
    case 0x7F3048ACu: goto label_7F3048AC;
    case 0x7F3048B0u: goto label_7F3048B0;
    case 0x7F3048B4u: goto label_7F3048B4;
    case 0x7F3048B8u: goto label_7F3048B8;
    case 0x7F3048BCu: goto label_7F3048BC;
    case 0x7F3048C0u: goto label_7F3048C0;
    case 0x7F3048C4u: goto label_7F3048C4;
    case 0x7F3048C8u: goto label_7F3048C8;
    case 0x7F3048CCu: goto label_7F3048CC;
    case 0x7F3048D0u: goto label_7F3048D0;
    case 0x7F3048D4u: goto label_7F3048D4;
    case 0x7F3048D8u: goto label_7F3048D8;
    case 0x7F3048DCu: goto label_7F3048DC;
    case 0x7F3048E0u: goto label_7F3048E0;
    case 0x7F3048E4u: goto label_7F3048E4;
    case 0x7F3048E8u: goto label_7F3048E8;
    case 0x7F3048ECu: goto label_7F3048EC;
    case 0x7F3048F0u: goto label_7F3048F0;
    case 0x7F3048F4u: goto label_7F3048F4;
    case 0x7F3048F8u: goto label_7F3048F8;
    case 0x7F3048FCu: goto label_7F3048FC;
    case 0x7F304900u: goto label_7F304900;
    case 0x7F304904u: goto label_7F304904;
    case 0x7F304908u: goto label_7F304908;
    case 0x7F30490Cu: goto label_7F30490C;
    case 0x7F304910u: goto label_7F304910;
    case 0x7F304914u: goto label_7F304914;
    case 0x7F304918u: goto label_7F304918;
    case 0x7F30491Cu: goto label_7F30491C;
    case 0x7F304920u: goto label_7F304920;
    case 0x7F304924u: goto label_7F304924;
    case 0x7F304928u: goto label_7F304928;
    case 0x7F30492Cu: goto label_7F30492C;
    case 0x7F304930u: goto label_7F304930;
    case 0x7F304934u: goto label_7F304934;
    case 0x7F304938u: goto label_7F304938;
    case 0x7F30493Cu: goto label_7F30493C;
    case 0x7F304940u: goto label_7F304940;
    case 0x7F304944u: goto label_7F304944;
    case 0x7F304948u: goto label_7F304948;
    case 0x7F30494Cu: goto label_7F30494C;
    case 0x7F304950u: goto label_7F304950;
    case 0x7F304954u: goto label_7F304954;
    case 0x7F304958u: goto label_7F304958;
    case 0x7F30495Cu: goto label_7F30495C;
    case 0x7F304960u: goto label_7F304960;
    case 0x7F304964u: goto label_7F304964;
    case 0x7F304968u: goto label_7F304968;
    case 0x7F30496Cu: goto label_7F30496C;
    case 0x7F304970u: goto label_7F304970;
    case 0x7F304974u: goto label_7F304974;
    case 0x7F304978u: goto label_7F304978;
    case 0x7F30497Cu: goto label_7F30497C;
    case 0x7F304980u: goto label_7F304980;
    case 0x7F304984u: goto label_7F304984;
    case 0x7F304988u: goto label_7F304988;
    case 0x7F30498Cu: goto label_7F30498C;
    case 0x7F304990u: goto label_7F304990;
    case 0x7F304994u: goto label_7F304994;
    case 0x7F304998u: goto label_7F304998;
    case 0x7F30499Cu: goto label_7F30499C;
    case 0x7F3049A0u: goto label_7F3049A0;
    case 0x7F3049A4u: goto label_7F3049A4;
    case 0x7F3049A8u: goto label_7F3049A8;
    case 0x7F3049ACu: goto label_7F3049AC;
    case 0x7F3049B0u: goto label_7F3049B0;
    case 0x7F3049B4u: goto label_7F3049B4;
    case 0x7F3049B8u: goto label_7F3049B8;
    case 0x7F3049BCu: goto label_7F3049BC;
    case 0x7F3049C0u: goto label_7F3049C0;
    case 0x7F3049C4u: goto label_7F3049C4;
    case 0x7F3049C8u: goto label_7F3049C8;
    case 0x7F3049CCu: goto label_7F3049CC;
    case 0x7F3049D0u: goto label_7F3049D0;
    case 0x7F3049D4u: goto label_7F3049D4;
    case 0x7F3049D8u: goto label_7F3049D8;
    case 0x7F3049DCu: goto label_7F3049DC;
    case 0x7F3049E0u: goto label_7F3049E0;
    case 0x7F3049E4u: goto label_7F3049E4;
    case 0x7F3049E8u: goto label_7F3049E8;
    case 0x7F3049ECu: goto label_7F3049EC;
    case 0x7F3049F0u: goto label_7F3049F0;
    case 0x7F3049F4u: goto label_7F3049F4;
    case 0x7F3049F8u: goto label_7F3049F8;
    case 0x7F3049FCu: goto label_7F3049FC;
    case 0x7F304A00u: goto label_7F304A00;
    case 0x7F304A04u: goto label_7F304A04;
    case 0x7F304A08u: goto label_7F304A08;
    case 0x7F304A0Cu: goto label_7F304A0C;
    case 0x7F304A10u: goto label_7F304A10;
    case 0x7F304A14u: goto label_7F304A14;
    case 0x7F304A18u: goto label_7F304A18;
    case 0x7F304A1Cu: goto label_7F304A1C;
    case 0x7F304A20u: goto label_7F304A20;
    case 0x7F304A24u: goto label_7F304A24;
    case 0x7F304A28u: goto label_7F304A28;
    case 0x7F304A2Cu: goto label_7F304A2C;
    case 0x7F304A30u: goto label_7F304A30;
    case 0x7F304A34u: goto label_7F304A34;
    case 0x7F304A38u: goto label_7F304A38;
    case 0x7F304A3Cu: goto label_7F304A3C;
    case 0x7F304A40u: goto label_7F304A40;
    case 0x7F304A44u: goto label_7F304A44;
    case 0x7F304A48u: goto label_7F304A48;
    case 0x7F304A4Cu: goto label_7F304A4C;
    case 0x7F304A50u: goto label_7F304A50;
    case 0x7F304A54u: goto label_7F304A54;
    case 0x7F304A58u: goto label_7F304A58;
    case 0x7F304A5Cu: goto label_7F304A5C;
    case 0x7F304A60u: goto label_7F304A60;
    case 0x7F304A64u: goto label_7F304A64;
    case 0x7F304A68u: goto label_7F304A68;
    case 0x7F304A6Cu: goto label_7F304A6C;
    case 0x7F304A70u: goto label_7F304A70;
    case 0x7F304A74u: goto label_7F304A74;
    case 0x7F304A78u: goto label_7F304A78;
    case 0x7F304A7Cu: goto label_7F304A7C;
    case 0x7F304A80u: goto label_7F304A80;
    case 0x7F304A84u: goto label_7F304A84;
    case 0x7F304A88u: goto label_7F304A88;
    case 0x7F304A8Cu: goto label_7F304A8C;
    case 0x7F304A90u: goto label_7F304A90;
    case 0x7F304A94u: goto label_7F304A94;
    case 0x7F304A98u: goto label_7F304A98;
    case 0x7F304A9Cu: goto label_7F304A9C;
    case 0x7F304AA0u: goto label_7F304AA0;
    case 0x7F304AA4u: goto label_7F304AA4;
    case 0x7F304AA8u: goto label_7F304AA8;
    case 0x7F304AACu: goto label_7F304AAC;
    case 0x7F304AB0u: goto label_7F304AB0;
    case 0x7F304AB4u: goto label_7F304AB4;
    case 0x7F304AB8u: goto label_7F304AB8;
    case 0x7F304ABCu: goto label_7F304ABC;
    case 0x7F304AC0u: goto label_7F304AC0;
    case 0x7F304AC4u: goto label_7F304AC4;
    case 0x7F304AC8u: goto label_7F304AC8;
    case 0x7F304ACCu: goto label_7F304ACC;
    case 0x7F304AD0u: goto label_7F304AD0;
    case 0x7F304AD4u: goto label_7F304AD4;
    case 0x7F304AD8u: goto label_7F304AD8;
    case 0x7F304ADCu: goto label_7F304ADC;
    case 0x7F304AE0u: goto label_7F304AE0;
    case 0x7F304AE4u: goto label_7F304AE4;
    case 0x7F304AE8u: goto label_7F304AE8;
    case 0x7F304AECu: goto label_7F304AEC;
    case 0x7F304AF0u: goto label_7F304AF0;
    case 0x7F304AF4u: goto label_7F304AF4;
    case 0x7F304AF8u: goto label_7F304AF8;
    case 0x7F304AFCu: goto label_7F304AFC;
    case 0x7F304B00u: goto label_7F304B00;
    case 0x7F304B04u: goto label_7F304B04;
    case 0x7F304B08u: goto label_7F304B08;
    case 0x7F304B0Cu: goto label_7F304B0C;
    case 0x7F304B10u: goto label_7F304B10;
    case 0x7F304B14u: goto label_7F304B14;
    case 0x7F304B18u: goto label_7F304B18;
    case 0x7F304B1Cu: goto label_7F304B1C;
    case 0x7F304B20u: goto label_7F304B20;
    case 0x7F304B24u: goto label_7F304B24;
    case 0x7F304B28u: goto label_7F304B28;
    case 0x7F304B2Cu: goto label_7F304B2C;
    case 0x7F304B30u: goto label_7F304B30;
    case 0x7F304B34u: goto label_7F304B34;
    case 0x7F304B38u: goto label_7F304B38;
    case 0x7F304B3Cu: goto label_7F304B3C;
    case 0x7F304B40u: goto label_7F304B40;
    case 0x7F304B44u: goto label_7F304B44;
    case 0x7F304B48u: goto label_7F304B48;
    case 0x7F304B4Cu: goto label_7F304B4C;
    case 0x7F304B50u: goto label_7F304B50;
    case 0x7F304B54u: goto label_7F304B54;
    case 0x7F304B58u: goto label_7F304B58;
    case 0x7F304B5Cu: goto label_7F304B5C;
    case 0x7F304B60u: goto label_7F304B60;
    case 0x7F304B64u: goto label_7F304B64;
    case 0x7F304B68u: goto label_7F304B68;
    case 0x7F304B6Cu: goto label_7F304B6C;
    case 0x7F304B70u: goto label_7F304B70;
    case 0x7F304B74u: goto label_7F304B74;
    case 0x7F304B78u: goto label_7F304B78;
    case 0x7F304B7Cu: goto label_7F304B7C;
    case 0x7F304B80u: goto label_7F304B80;
    case 0x7F304B84u: goto label_7F304B84;
    case 0x7F304B88u: goto label_7F304B88;
    case 0x7F304B8Cu: goto label_7F304B8C;
    case 0x7F304B90u: goto label_7F304B90;
    case 0x7F304B94u: goto label_7F304B94;
    case 0x7F304B98u: goto label_7F304B98;
    case 0x7F304B9Cu: goto label_7F304B9C;
    case 0x7F304BA0u: goto label_7F304BA0;
    case 0x7F304BA4u: goto label_7F304BA4;
    case 0x7F304BA8u: goto label_7F304BA8;
    case 0x7F304BACu: goto label_7F304BAC;
    case 0x7F304BB0u: goto label_7F304BB0;
    case 0x7F304BB4u: goto label_7F304BB4;
    case 0x7F304BB8u: goto label_7F304BB8;
    case 0x7F304BBCu: goto label_7F304BBC;
    case 0x7F304BC0u: goto label_7F304BC0;
    case 0x7F304BC4u: goto label_7F304BC4;
    case 0x7F304BC8u: goto label_7F304BC8;
    case 0x7F304BCCu: goto label_7F304BCC;
    case 0x7F304BD0u: goto label_7F304BD0;
    case 0x7F304BD4u: goto label_7F304BD4;
    case 0x7F304BD8u: goto label_7F304BD8;
    case 0x7F304BDCu: goto label_7F304BDC;
    case 0x7F304BE0u: goto label_7F304BE0;
    case 0x7F304BE4u: goto label_7F304BE4;
    case 0x7F304BE8u: goto label_7F304BE8;
    case 0x7F304BECu: goto label_7F304BEC;
    case 0x7F304BF0u: goto label_7F304BF0;
    case 0x7F304BF4u: goto label_7F304BF4;
    case 0x7F304BF8u: goto label_7F304BF8;
    case 0x7F304BFCu: goto label_7F304BFC;
    case 0x7F304C00u: goto label_7F304C00;
    case 0x7F304C04u: goto label_7F304C04;
    case 0x7F304C08u: goto label_7F304C08;
    case 0x7F304C0Cu: goto label_7F304C0C;
    case 0x7F304C10u: goto label_7F304C10;
    case 0x7F304C14u: goto label_7F304C14;
    case 0x7F304C18u: goto label_7F304C18;
    case 0x7F304C1Cu: goto label_7F304C1C;
    case 0x7F304C20u: goto label_7F304C20;
    case 0x7F304C24u: goto label_7F304C24;
    case 0x7F304C28u: goto label_7F304C28;
    case 0x7F304C2Cu: goto label_7F304C2C;
    case 0x7F304C30u: goto label_7F304C30;
    case 0x7F304C34u: goto label_7F304C34;
    case 0x7F304C38u: goto label_7F304C38;
    case 0x7F304C3Cu: goto label_7F304C3C;
    case 0x7F304C40u: goto label_7F304C40;
    case 0x7F304C44u: goto label_7F304C44;
    case 0x7F304C48u: goto label_7F304C48;
    case 0x7F304C4Cu: goto label_7F304C4C;
    case 0x7F304C50u: goto label_7F304C50;
    case 0x7F304C54u: goto label_7F304C54;
    case 0x7F304C58u: goto label_7F304C58;
    case 0x7F304C5Cu: goto label_7F304C5C;
    case 0x7F304C60u: goto label_7F304C60;
    case 0x7F304C64u: goto label_7F304C64;
    case 0x7F304C68u: goto label_7F304C68;
    case 0x7F304C6Cu: goto label_7F304C6C;
    case 0x7F304C70u: goto label_7F304C70;
    case 0x7F304C74u: goto label_7F304C74;
    case 0x7F304C78u: goto label_7F304C78;
    case 0x7F304C7Cu: goto label_7F304C7C;
    case 0x7F304C80u: goto label_7F304C80;
    case 0x7F304C84u: goto label_7F304C84;
    case 0x7F304C88u: goto label_7F304C88;
    case 0x7F304C8Cu: goto label_7F304C8C;
    case 0x7F304C90u: goto label_7F304C90;
    case 0x7F304C94u: goto label_7F304C94;
    case 0x7F304C98u: goto label_7F304C98;
    case 0x7F304C9Cu: goto label_7F304C9C;
    case 0x7F304CA0u: goto label_7F304CA0;
    case 0x7F304CA4u: goto label_7F304CA4;
    case 0x7F304CA8u: goto label_7F304CA8;
    case 0x7F304CACu: goto label_7F304CAC;
    case 0x7F304CB0u: goto label_7F304CB0;
    case 0x7F304CB4u: goto label_7F304CB4;
    case 0x7F304CB8u: goto label_7F304CB8;
    case 0x7F304CBCu: goto label_7F304CBC;
    case 0x7F304CC0u: goto label_7F304CC0;
    case 0x7F304CC4u: goto label_7F304CC4;
    case 0x7F304CC8u: goto label_7F304CC8;
    case 0x7F304CCCu: goto label_7F304CCC;
    case 0x7F304CD0u: goto label_7F304CD0;
    case 0x7F304CD4u: goto label_7F304CD4;
    case 0x7F304CD8u: goto label_7F304CD8;
    case 0x7F304CDCu: goto label_7F304CDC;
    case 0x7F304CE0u: goto label_7F304CE0;
    case 0x7F304CE4u: goto label_7F304CE4;
    case 0x7F304CE8u: goto label_7F304CE8;
    case 0x7F304CECu: goto label_7F304CEC;
    case 0x7F304CF0u: goto label_7F304CF0;
    case 0x7F304CF4u: goto label_7F304CF4;
    case 0x7F304CF8u: goto label_7F304CF8;
    case 0x7F304CFCu: goto label_7F304CFC;
    case 0x7F304D00u: goto label_7F304D00;
    case 0x7F304D04u: goto label_7F304D04;
    case 0x7F304D08u: goto label_7F304D08;
    case 0x7F304D0Cu: goto label_7F304D0C;
    case 0x7F304D10u: goto label_7F304D10;
    case 0x7F304D14u: goto label_7F304D14;
    case 0x7F304D18u: goto label_7F304D18;
    case 0x7F304D1Cu: goto label_7F304D1C;
    case 0x7F304D20u: goto label_7F304D20;
    case 0x7F304D24u: goto label_7F304D24;
    case 0x7F304D28u: goto label_7F304D28;
    case 0x7F304D2Cu: goto label_7F304D2C;
    case 0x7F304D30u: goto label_7F304D30;
    case 0x7F304D34u: goto label_7F304D34;
    case 0x7F304D38u: goto label_7F304D38;
    case 0x7F304D3Cu: goto label_7F304D3C;
    case 0x7F304D40u: goto label_7F304D40;
    case 0x7F304D44u: goto label_7F304D44;
    case 0x7F304D48u: goto label_7F304D48;
    case 0x7F304D4Cu: goto label_7F304D4C;
    case 0x7F304D50u: goto label_7F304D50;
    case 0x7F304D54u: goto label_7F304D54;
    case 0x7F304D58u: goto label_7F304D58;
    case 0x7F304D5Cu: goto label_7F304D5C;
    case 0x7F304D60u: goto label_7F304D60;
    case 0x7F304D64u: goto label_7F304D64;
    case 0x7F304D68u: goto label_7F304D68;
    case 0x7F304D6Cu: goto label_7F304D6C;
    case 0x7F304D70u: goto label_7F304D70;
    case 0x7F304D74u: goto label_7F304D74;
    case 0x7F304D78u: goto label_7F304D78;
    case 0x7F304D7Cu: goto label_7F304D7C;
    case 0x7F304D80u: goto label_7F304D80;
    case 0x7F304D84u: goto label_7F304D84;
    case 0x7F304D88u: goto label_7F304D88;
    case 0x7F304D8Cu: goto label_7F304D8C;
    case 0x7F304D90u: goto label_7F304D90;
    case 0x7F304D94u: goto label_7F304D94;
    case 0x7F304D98u: goto label_7F304D98;
    case 0x7F304D9Cu: goto label_7F304D9C;
    case 0x7F304DA0u: goto label_7F304DA0;
    case 0x7F304DA4u: goto label_7F304DA4;
    case 0x7F304DA8u: goto label_7F304DA8;
    case 0x7F304DACu: goto label_7F304DAC;
    case 0x7F304DB0u: goto label_7F304DB0;
    case 0x7F304DB4u: goto label_7F304DB4;
    case 0x7F304DB8u: goto label_7F304DB8;
    case 0x7F304DBCu: goto label_7F304DBC;
    case 0x7F304DC0u: goto label_7F304DC0;
    case 0x7F304DC4u: goto label_7F304DC4;
    case 0x7F304DC8u: goto label_7F304DC8;
    case 0x7F304DCCu: goto label_7F304DCC;
    case 0x7F304DD0u: goto label_7F304DD0;
    case 0x7F304DD4u: goto label_7F304DD4;
    case 0x7F304DD8u: goto label_7F304DD8;
    case 0x7F304DDCu: goto label_7F304DDC;
    case 0x7F304DE0u: goto label_7F304DE0;
    case 0x7F304DE4u: goto label_7F304DE4;
    case 0x7F304DE8u: goto label_7F304DE8;
    case 0x7F304DECu: goto label_7F304DEC;
    case 0x7F304DF0u: goto label_7F304DF0;
    case 0x7F304DF4u: goto label_7F304DF4;
    case 0x7F304DF8u: goto label_7F304DF8;
    case 0x7F304DFCu: goto label_7F304DFC;
    case 0x7F304E00u: goto label_7F304E00;
    case 0x7F304E04u: goto label_7F304E04;
    case 0x7F304E08u: goto label_7F304E08;
    case 0x7F304E0Cu: goto label_7F304E0C;
    case 0x7F304E10u: goto label_7F304E10;
    case 0x7F304E14u: goto label_7F304E14;
    case 0x7F304E18u: goto label_7F304E18;
    case 0x7F304E1Cu: goto label_7F304E1C;
    case 0x7F304E20u: goto label_7F304E20;
    case 0x7F304E24u: goto label_7F304E24;
    case 0x7F304E28u: goto label_7F304E28;
    case 0x7F304E2Cu: goto label_7F304E2C;
    case 0x7F304E30u: goto label_7F304E30;
    case 0x7F304E34u: goto label_7F304E34;
    case 0x7F304E38u: goto label_7F304E38;
    case 0x7F304E3Cu: goto label_7F304E3C;
    case 0x7F304E40u: goto label_7F304E40;
    case 0x7F304E44u: goto label_7F304E44;
    case 0x7F304E48u: goto label_7F304E48;
    case 0x7F304E4Cu: goto label_7F304E4C;
    case 0x7F304E50u: goto label_7F304E50;
    case 0x7F304E54u: goto label_7F304E54;
    case 0x7F304E58u: goto label_7F304E58;
    case 0x7F304E5Cu: goto label_7F304E5C;
    case 0x7F304E60u: goto label_7F304E60;
    case 0x7F304E64u: goto label_7F304E64;
    case 0x7F304E68u: goto label_7F304E68;
    case 0x7F304E6Cu: goto label_7F304E6C;
    case 0x7F304E70u: goto label_7F304E70;
    case 0x7F304E74u: goto label_7F304E74;
    case 0x7F304E78u: goto label_7F304E78;
    case 0x7F304E7Cu: goto label_7F304E7C;
    case 0x7F304E80u: goto label_7F304E80;
    case 0x7F304E84u: goto label_7F304E84;
    case 0x7F304E88u: goto label_7F304E88;
    case 0x7F304E8Cu: goto label_7F304E8C;
    case 0x7F304E90u: goto label_7F304E90;
    case 0x7F304E94u: goto label_7F304E94;
    case 0x7F304E98u: goto label_7F304E98;
    case 0x7F304E9Cu: goto label_7F304E9C;
    case 0x7F304EA0u: goto label_7F304EA0;
    case 0x7F304EA4u: goto label_7F304EA4;
    case 0x7F304EA8u: goto label_7F304EA8;
    case 0x7F304EACu: goto label_7F304EAC;
    case 0x7F304EB0u: goto label_7F304EB0;
    case 0x7F304EB4u: goto label_7F304EB4;
    case 0x7F304EB8u: goto label_7F304EB8;
    case 0x7F304EBCu: goto label_7F304EBC;
    case 0x7F304EC0u: goto label_7F304EC0;
    case 0x7F304EC4u: goto label_7F304EC4;
    case 0x7F304EC8u: goto label_7F304EC8;
    case 0x7F304ECCu: goto label_7F304ECC;
    case 0x7F304ED0u: goto label_7F304ED0;
    case 0x7F304ED4u: goto label_7F304ED4;
    case 0x7F304ED8u: goto label_7F304ED8;
    case 0x7F304EDCu: goto label_7F304EDC;
    case 0x7F304EE0u: goto label_7F304EE0;
    case 0x7F304EE4u: goto label_7F304EE4;
    case 0x7F304EE8u: goto label_7F304EE8;
    case 0x7F304EECu: goto label_7F304EEC;
    case 0x7F304EF0u: goto label_7F304EF0;
    case 0x7F304EF4u: goto label_7F304EF4;
    case 0x7F304EF8u: goto label_7F304EF8;
    case 0x7F304EFCu: goto label_7F304EFC;
    case 0x7F304F00u: goto label_7F304F00;
    case 0x7F304F04u: goto label_7F304F04;
    case 0x7F304F08u: goto label_7F304F08;
    case 0x7F304F0Cu: goto label_7F304F0C;
    case 0x7F304F10u: goto label_7F304F10;
    case 0x7F304F14u: goto label_7F304F14;
    case 0x7F304F18u: goto label_7F304F18;
    case 0x7F304F1Cu: goto label_7F304F1C;
    case 0x7F304F20u: goto label_7F304F20;
    case 0x7F304F24u: goto label_7F304F24;
    case 0x7F304F28u: goto label_7F304F28;
    case 0x7F304F2Cu: goto label_7F304F2C;
    case 0x7F304F30u: goto label_7F304F30;
    case 0x7F304F34u: goto label_7F304F34;
    case 0x7F304F38u: goto label_7F304F38;
    case 0x7F304F3Cu: goto label_7F304F3C;
    case 0x7F304F40u: goto label_7F304F40;
    case 0x7F304F44u: goto label_7F304F44;
    case 0x7F304F48u: goto label_7F304F48;
    case 0x7F304F4Cu: goto label_7F304F4C;
    case 0x7F304F50u: goto label_7F304F50;
    case 0x7F304F54u: goto label_7F304F54;
    case 0x7F304F58u: goto label_7F304F58;
    case 0x7F304F5Cu: goto label_7F304F5C;
    case 0x7F304F60u: goto label_7F304F60;
    case 0x7F304F64u: goto label_7F304F64;
    case 0x7F304F68u: goto label_7F304F68;
    case 0x7F304F6Cu: goto label_7F304F6C;
    case 0x7F304F70u: goto label_7F304F70;
    case 0x7F304F74u: goto label_7F304F74;
    case 0x7F304F78u: goto label_7F304F78;
    case 0x7F304F7Cu: goto label_7F304F7C;
    case 0x7F304F80u: goto label_7F304F80;
    case 0x7F304F84u: goto label_7F304F84;
    case 0x7F304F88u: goto label_7F304F88;
    case 0x7F304F8Cu: goto label_7F304F8C;
    case 0x7F304F90u: goto label_7F304F90;
    case 0x7F304F94u: goto label_7F304F94;
    case 0x7F304F98u: goto label_7F304F98;
    case 0x7F304F9Cu: goto label_7F304F9C;
    case 0x7F304FA0u: goto label_7F304FA0;
    case 0x7F304FA4u: goto label_7F304FA4;
    case 0x7F304FA8u: goto label_7F304FA8;
    case 0x7F304FACu: goto label_7F304FAC;
    case 0x7F304FB0u: goto label_7F304FB0;
    case 0x7F304FB4u: goto label_7F304FB4;
    case 0x7F304FB8u: goto label_7F304FB8;
    case 0x7F304FBCu: goto label_7F304FBC;
    case 0x7F304FC0u: goto label_7F304FC0;
    case 0x7F304FC4u: goto label_7F304FC4;
    case 0x7F304FC8u: goto label_7F304FC8;
    case 0x7F304FCCu: goto label_7F304FCC;
    case 0x7F304FD0u: goto label_7F304FD0;
    case 0x7F304FD4u: goto label_7F304FD4;
    case 0x7F304FD8u: goto label_7F304FD8;
    case 0x7F304FDCu: goto label_7F304FDC;
    case 0x7F304FE0u: goto label_7F304FE0;
    case 0x7F304FE4u: goto label_7F304FE4;
    case 0x7F304FE8u: goto label_7F304FE8;
    case 0x7F304FECu: goto label_7F304FEC;
    case 0x7F304FF0u: goto label_7F304FF0;
    case 0x7F304FF4u: goto label_7F304FF4;
    case 0x7F304FF8u: goto label_7F304FF8;
    case 0x7F304FFCu: goto label_7F304FFC;
    case 0x7F305000u: goto label_7F305000;
    case 0x7F305004u: goto label_7F305004;
    case 0x7F305008u: goto label_7F305008;
    case 0x7F30500Cu: goto label_7F30500C;
    case 0x7F305010u: goto label_7F305010;
    case 0x7F305014u: goto label_7F305014;
    case 0x7F305018u: goto label_7F305018;
    case 0x7F30501Cu: goto label_7F30501C;
    case 0x7F305020u: goto label_7F305020;
    case 0x7F305024u: goto label_7F305024;
    case 0x7F305028u: goto label_7F305028;
    case 0x7F30502Cu: goto label_7F30502C;
    case 0x7F305030u: goto label_7F305030;
    case 0x7F305034u: goto label_7F305034;
    case 0x7F305038u: goto label_7F305038;
    case 0x7F30503Cu: goto label_7F30503C;
    case 0x7F305040u: goto label_7F305040;
    case 0x7F305044u: goto label_7F305044;
    case 0x7F305048u: goto label_7F305048;
    case 0x7F30504Cu: goto label_7F30504C;
    case 0x7F305050u: goto label_7F305050;
    case 0x7F305054u: goto label_7F305054;
    case 0x7F305058u: goto label_7F305058;
    case 0x7F30505Cu: goto label_7F30505C;
    case 0x7F305060u: goto label_7F305060;
    case 0x7F305064u: goto label_7F305064;
    case 0x7F305068u: goto label_7F305068;
    case 0x7F30506Cu: goto label_7F30506C;
    case 0x7F305070u: goto label_7F305070;
    case 0x7F305074u: goto label_7F305074;
    case 0x7F305078u: goto label_7F305078;
    case 0x7F30507Cu: goto label_7F30507C;
    case 0x7F305080u: goto label_7F305080;
    case 0x7F305084u: goto label_7F305084;
    case 0x7F305088u: goto label_7F305088;
    case 0x7F30508Cu: goto label_7F30508C;
    case 0x7F305090u: goto label_7F305090;
    case 0x7F305094u: goto label_7F305094;
    case 0x7F305098u: goto label_7F305098;
    case 0x7F30509Cu: goto label_7F30509C;
    case 0x7F3050A0u: goto label_7F3050A0;
    case 0x7F3050A4u: goto label_7F3050A4;
    case 0x7F3050A8u: goto label_7F3050A8;
    case 0x7F3050ACu: goto label_7F3050AC;
    case 0x7F3050B0u: goto label_7F3050B0;
    case 0x7F3050B4u: goto label_7F3050B4;
    case 0x7F3050B8u: goto label_7F3050B8;
    case 0x7F3050BCu: goto label_7F3050BC;
    case 0x7F3050C0u: goto label_7F3050C0;
    case 0x7F3050C4u: goto label_7F3050C4;
    case 0x7F3050C8u: goto label_7F3050C8;
    case 0x7F3050CCu: goto label_7F3050CC;
    case 0x7F3050D0u: goto label_7F3050D0;
    case 0x7F3050D4u: goto label_7F3050D4;
    case 0x7F3050D8u: goto label_7F3050D8;
    case 0x7F3050DCu: goto label_7F3050DC;
    case 0x7F3050E0u: goto label_7F3050E0;
    case 0x7F3050E4u: goto label_7F3050E4;
    case 0x7F3050E8u: goto label_7F3050E8;
    case 0x7F3050ECu: goto label_7F3050EC;
    case 0x7F3050F0u: goto label_7F3050F0;
    case 0x7F3050F4u: goto label_7F3050F4;
    case 0x7F3050F8u: goto label_7F3050F8;
    case 0x7F3050FCu: goto label_7F3050FC;
    case 0x7F305100u: goto label_7F305100;
    case 0x7F305104u: goto label_7F305104;
    case 0x7F305108u: goto label_7F305108;
    case 0x7F30510Cu: goto label_7F30510C;
    case 0x7F305110u: goto label_7F305110;
    case 0x7F305114u: goto label_7F305114;
    case 0x7F305118u: goto label_7F305118;
    case 0x7F30511Cu: goto label_7F30511C;
    case 0x7F305120u: goto label_7F305120;
    case 0x7F305124u: goto label_7F305124;
    case 0x7F305128u: goto label_7F305128;
    case 0x7F30512Cu: goto label_7F30512C;
    case 0x7F305130u: goto label_7F305130;
    case 0x7F305134u: goto label_7F305134;
    case 0x7F305138u: goto label_7F305138;
    case 0x7F30513Cu: goto label_7F30513C;
    case 0x7F305140u: goto label_7F305140;
    case 0x7F305144u: goto label_7F305144;
    case 0x7F305148u: goto label_7F305148;
    case 0x7F30514Cu: goto label_7F30514C;
    case 0x7F305150u: goto label_7F305150;
    case 0x7F305154u: goto label_7F305154;
    case 0x7F305158u: goto label_7F305158;
    case 0x7F30515Cu: goto label_7F30515C;
    case 0x7F305160u: goto label_7F305160;
    case 0x7F305164u: goto label_7F305164;
    case 0x7F305168u: goto label_7F305168;
    case 0x7F30516Cu: goto label_7F30516C;
    case 0x7F305170u: goto label_7F305170;
    case 0x7F305174u: goto label_7F305174;
    case 0x7F305178u: goto label_7F305178;
    case 0x7F30517Cu: goto label_7F30517C;
    case 0x7F305180u: goto label_7F305180;
    case 0x7F305184u: goto label_7F305184;
    case 0x7F305188u: goto label_7F305188;
    case 0x7F30518Cu: goto label_7F30518C;
    case 0x7F305190u: goto label_7F305190;
    case 0x7F305194u: goto label_7F305194;
    case 0x7F305198u: goto label_7F305198;
    case 0x7F30519Cu: goto label_7F30519C;
    case 0x7F3051A0u: goto label_7F3051A0;
    case 0x7F3051A4u: goto label_7F3051A4;
    case 0x7F3051A8u: goto label_7F3051A8;
    case 0x7F3051ACu: goto label_7F3051AC;
    case 0x7F3051B0u: goto label_7F3051B0;
    case 0x7F3051B4u: goto label_7F3051B4;
    case 0x7F3051B8u: goto label_7F3051B8;
    case 0x7F3051BCu: goto label_7F3051BC;
    case 0x7F3051C0u: goto label_7F3051C0;
    case 0x7F3051C4u: goto label_7F3051C4;
    case 0x7F3051C8u: goto label_7F3051C8;
    case 0x7F3051CCu: goto label_7F3051CC;
    case 0x7F3051D0u: goto label_7F3051D0;
    case 0x7F3051D4u: goto label_7F3051D4;
    case 0x7F3051D8u: goto label_7F3051D8;
    case 0x7F3051DCu: goto label_7F3051DC;
    case 0x7F3051E0u: goto label_7F3051E0;
    case 0x7F3051E4u: goto label_7F3051E4;
    case 0x7F3051E8u: goto label_7F3051E8;
    case 0x7F3051ECu: goto label_7F3051EC;
    case 0x7F3051F0u: goto label_7F3051F0;
    case 0x7F3051F4u: goto label_7F3051F4;
    case 0x7F3051F8u: goto label_7F3051F8;
    case 0x7F3051FCu: goto label_7F3051FC;
    case 0x7F305200u: goto label_7F305200;
    case 0x7F305204u: goto label_7F305204;
    case 0x7F305208u: goto label_7F305208;
    case 0x7F30520Cu: goto label_7F30520C;
    case 0x7F305210u: goto label_7F305210;
    case 0x7F305214u: goto label_7F305214;
    case 0x7F305218u: goto label_7F305218;
    case 0x7F30521Cu: goto label_7F30521C;
    case 0x7F305220u: goto label_7F305220;
    case 0x7F305224u: goto label_7F305224;
    case 0x7F305228u: goto label_7F305228;
    case 0x7F30522Cu: goto label_7F30522C;
    case 0x7F305230u: goto label_7F305230;
    case 0x7F305234u: goto label_7F305234;
    case 0x7F305238u: goto label_7F305238;
    case 0x7F30523Cu: goto label_7F30523C;
    case 0x7F305240u: goto label_7F305240;
    case 0x7F305244u: goto label_7F305244;
    case 0x7F305248u: goto label_7F305248;
    case 0x7F30524Cu: goto label_7F30524C;
    case 0x7F305250u: goto label_7F305250;
    case 0x7F305254u: goto label_7F305254;
    case 0x7F305258u: goto label_7F305258;
    case 0x7F30525Cu: goto label_7F30525C;
    case 0x7F305260u: goto label_7F305260;
    case 0x7F305264u: goto label_7F305264;
    case 0x7F305268u: goto label_7F305268;
    case 0x7F30526Cu: goto label_7F30526C;
    case 0x7F305270u: goto label_7F305270;
    case 0x7F305274u: goto label_7F305274;
    case 0x7F305278u: goto label_7F305278;
    case 0x7F30527Cu: goto label_7F30527C;
    case 0x7F305280u: goto label_7F305280;
    case 0x7F305284u: goto label_7F305284;
    case 0x7F305288u: goto label_7F305288;
    case 0x7F30528Cu: goto label_7F30528C;
    case 0x7F305290u: goto label_7F305290;
    case 0x7F305294u: goto label_7F305294;
    case 0x7F305298u: goto label_7F305298;
    case 0x7F30529Cu: goto label_7F30529C;
    case 0x7F3052A0u: goto label_7F3052A0;
    case 0x7F3052A4u: goto label_7F3052A4;
    case 0x7F3052A8u: goto label_7F3052A8;
    case 0x7F3052ACu: goto label_7F3052AC;
    case 0x7F3052B0u: goto label_7F3052B0;
    case 0x7F3052B4u: goto label_7F3052B4;
    case 0x7F3052B8u: goto label_7F3052B8;
    case 0x7F3052BCu: goto label_7F3052BC;
    case 0x7F3052C0u: goto label_7F3052C0;
    case 0x7F3052C4u: goto label_7F3052C4;
    case 0x7F3052C8u: goto label_7F3052C8;
    case 0x7F3052CCu: goto label_7F3052CC;
    case 0x7F3052D0u: goto label_7F3052D0;
    case 0x7F3052D4u: goto label_7F3052D4;
    case 0x7F3052D8u: goto label_7F3052D8;
    case 0x7F3052DCu: goto label_7F3052DC;
    case 0x7F3052E0u: goto label_7F3052E0;
    case 0x7F3052E4u: goto label_7F3052E4;
    case 0x7F3052E8u: goto label_7F3052E8;
    case 0x7F3052ECu: goto label_7F3052EC;
    case 0x7F3052F0u: goto label_7F3052F0;
    case 0x7F3052F4u: goto label_7F3052F4;
    case 0x7F3052F8u: goto label_7F3052F8;
    case 0x7F3052FCu: goto label_7F3052FC;
    case 0x7F305300u: goto label_7F305300;
    case 0x7F305304u: goto label_7F305304;
    case 0x7F305308u: goto label_7F305308;
    case 0x7F30530Cu: goto label_7F30530C;
    case 0x7F305310u: goto label_7F305310;
    case 0x7F305314u: goto label_7F305314;
    case 0x7F305318u: goto label_7F305318;
    case 0x7F30531Cu: goto label_7F30531C;
    case 0x7F305320u: goto label_7F305320;
    case 0x7F305324u: goto label_7F305324;
    case 0x7F305328u: goto label_7F305328;
    case 0x7F30532Cu: goto label_7F30532C;
    case 0x7F305330u: goto label_7F305330;
    case 0x7F305334u: goto label_7F305334;
    case 0x7F305338u: goto label_7F305338;
    case 0x7F30533Cu: goto label_7F30533C;
    case 0x7F305340u: goto label_7F305340;
    case 0x7F305344u: goto label_7F305344;
    case 0x7F305348u: goto label_7F305348;
    case 0x7F30534Cu: goto label_7F30534C;
    case 0x7F305350u: goto label_7F305350;
    case 0x7F305354u: goto label_7F305354;
    case 0x7F305358u: goto label_7F305358;
    case 0x7F30535Cu: goto label_7F30535C;
    case 0x7F305360u: goto label_7F305360;
    case 0x7F305364u: goto label_7F305364;
    case 0x7F305368u: goto label_7F305368;
    case 0x7F30536Cu: goto label_7F30536C;
    case 0x7F305370u: goto label_7F305370;
    case 0x7F305374u: goto label_7F305374;
    case 0x7F305378u: goto label_7F305378;
    case 0x7F30537Cu: goto label_7F30537C;
    case 0x7F305380u: goto label_7F305380;
    case 0x7F305384u: goto label_7F305384;
    case 0x7F305388u: goto label_7F305388;
    case 0x7F30538Cu: goto label_7F30538C;
    case 0x7F305390u: goto label_7F305390;
    case 0x7F305394u: goto label_7F305394;
    case 0x7F305398u: goto label_7F305398;
    case 0x7F30539Cu: goto label_7F30539C;
    case 0x7F3053A0u: goto label_7F3053A0;
    case 0x7F3053A4u: goto label_7F3053A4;
    case 0x7F3053A8u: goto label_7F3053A8;
    case 0x7F3053ACu: goto label_7F3053AC;
    case 0x7F3053B0u: goto label_7F3053B0;
    case 0x7F3053B4u: goto label_7F3053B4;
    case 0x7F3053B8u: goto label_7F3053B8;
    case 0x7F3053BCu: goto label_7F3053BC;
    case 0x7F3053C0u: goto label_7F3053C0;
    case 0x7F3053C4u: goto label_7F3053C4;
    case 0x7F3053C8u: goto label_7F3053C8;
    case 0x7F3053CCu: goto label_7F3053CC;
    case 0x7F3053D0u: goto label_7F3053D0;
    case 0x7F3053D4u: goto label_7F3053D4;
    case 0x7F3053D8u: goto label_7F3053D8;
    case 0x7F3053DCu: goto label_7F3053DC;
    case 0x7F3053E0u: goto label_7F3053E0;
    case 0x7F3053E4u: goto label_7F3053E4;
    case 0x7F3053E8u: goto label_7F3053E8;
    case 0x7F3053ECu: goto label_7F3053EC;
    case 0x7F3053F0u: goto label_7F3053F0;
    case 0x7F3053F4u: goto label_7F3053F4;
    case 0x7F3053F8u: goto label_7F3053F8;
    case 0x7F3053FCu: goto label_7F3053FC;
    case 0x7F305400u: goto label_7F305400;
    case 0x7F305404u: goto label_7F305404;
    case 0x7F305408u: goto label_7F305408;
    case 0x7F30540Cu: goto label_7F30540C;
    case 0x7F305410u: goto label_7F305410;
    case 0x7F305414u: goto label_7F305414;
    case 0x7F305418u: goto label_7F305418;
    case 0x7F30541Cu: goto label_7F30541C;
    case 0x7F305420u: goto label_7F305420;
    case 0x7F305424u: goto label_7F305424;
    case 0x7F305428u: goto label_7F305428;
    case 0x7F30542Cu: goto label_7F30542C;
    case 0x7F305430u: goto label_7F305430;
    case 0x7F305434u: goto label_7F305434;
    case 0x7F305438u: goto label_7F305438;
    case 0x7F30543Cu: goto label_7F30543C;
    case 0x7F305440u: goto label_7F305440;
    case 0x7F305444u: goto label_7F305444;
    case 0x7F305448u: goto label_7F305448;
    case 0x7F30544Cu: goto label_7F30544C;
    case 0x7F305450u: goto label_7F305450;
    case 0x7F305454u: goto label_7F305454;
    case 0x7F305458u: goto label_7F305458;
    case 0x7F30545Cu: goto label_7F30545C;
    case 0x7F305460u: goto label_7F305460;
    case 0x7F305464u: goto label_7F305464;
    case 0x7F305468u: goto label_7F305468;
    case 0x7F30546Cu: goto label_7F30546C;
    case 0x7F305470u: goto label_7F305470;
    case 0x7F305474u: goto label_7F305474;
    case 0x7F305478u: goto label_7F305478;
    case 0x7F30547Cu: goto label_7F30547C;
    case 0x7F305480u: goto label_7F305480;
    case 0x7F305484u: goto label_7F305484;
    case 0x7F305488u: goto label_7F305488;
    case 0x7F30548Cu: goto label_7F30548C;
    case 0x7F305490u: goto label_7F305490;
    case 0x7F305494u: goto label_7F305494;
    case 0x7F305498u: goto label_7F305498;
    case 0x7F30549Cu: goto label_7F30549C;
    case 0x7F3054A0u: goto label_7F3054A0;
    case 0x7F3054A4u: goto label_7F3054A4;
    case 0x7F3054A8u: goto label_7F3054A8;
    case 0x7F3054ACu: goto label_7F3054AC;
    case 0x7F3054B0u: goto label_7F3054B0;
    case 0x7F3054B4u: goto label_7F3054B4;
    case 0x7F3054B8u: goto label_7F3054B8;
    case 0x7F3054BCu: goto label_7F3054BC;
    case 0x7F3054C0u: goto label_7F3054C0;
    case 0x7F3054C4u: goto label_7F3054C4;
    case 0x7F3054C8u: goto label_7F3054C8;
    case 0x7F3054CCu: goto label_7F3054CC;
    case 0x7F3054D0u: goto label_7F3054D0;
    case 0x7F3054D4u: goto label_7F3054D4;
    case 0x7F3054D8u: goto label_7F3054D8;
    case 0x7F3054DCu: goto label_7F3054DC;
    case 0x7F3054E0u: goto label_7F3054E0;
    case 0x7F3054E4u: goto label_7F3054E4;
    case 0x7F3054E8u: goto label_7F3054E8;
    case 0x7F3054ECu: goto label_7F3054EC;
    case 0x7F3054F0u: goto label_7F3054F0;
    case 0x7F3054F4u: goto label_7F3054F4;
    case 0x7F3054F8u: goto label_7F3054F8;
    case 0x7F3054FCu: goto label_7F3054FC;
    case 0x7F305500u: goto label_7F305500;
    case 0x7F305504u: goto label_7F305504;
    case 0x7F305508u: goto label_7F305508;
    case 0x7F30550Cu: goto label_7F30550C;
    case 0x7F305510u: goto label_7F305510;
    case 0x7F305514u: goto label_7F305514;
    case 0x7F305518u: goto label_7F305518;
    case 0x7F30551Cu: goto label_7F30551C;
    case 0x7F305520u: goto label_7F305520;
    case 0x7F305524u: goto label_7F305524;
    case 0x7F305528u: goto label_7F305528;
    case 0x7F30552Cu: goto label_7F30552C;
    case 0x7F305530u: goto label_7F305530;
    case 0x7F305534u: goto label_7F305534;
    case 0x7F305538u: goto label_7F305538;
    case 0x7F30553Cu: goto label_7F30553C;
    case 0x7F305540u: goto label_7F305540;
    case 0x7F305544u: goto label_7F305544;
    case 0x7F305548u: goto label_7F305548;
    case 0x7F30554Cu: goto label_7F30554C;
    case 0x7F305550u: goto label_7F305550;
    case 0x7F305554u: goto label_7F305554;
    case 0x7F305558u: goto label_7F305558;
    case 0x7F30555Cu: goto label_7F30555C;
    case 0x7F305560u: goto label_7F305560;
    case 0x7F305564u: goto label_7F305564;
    case 0x7F305568u: goto label_7F305568;
    case 0x7F30556Cu: goto label_7F30556C;
    case 0x7F305570u: goto label_7F305570;
    case 0x7F305574u: goto label_7F305574;
    case 0x7F305578u: goto label_7F305578;
    case 0x7F30557Cu: goto label_7F30557C;
    case 0x7F305580u: goto label_7F305580;
    case 0x7F305584u: goto label_7F305584;
    case 0x7F305588u: goto label_7F305588;
    case 0x7F30558Cu: goto label_7F30558C;
    case 0x7F305590u: goto label_7F305590;
    case 0x7F305594u: goto label_7F305594;
    case 0x7F305598u: goto label_7F305598;
    case 0x7F30559Cu: goto label_7F30559C;
    case 0x7F3055A0u: goto label_7F3055A0;
    case 0x7F3055A4u: goto label_7F3055A4;
    case 0x7F3055A8u: goto label_7F3055A8;
    case 0x7F3055ACu: goto label_7F3055AC;
    case 0x7F3055B0u: goto label_7F3055B0;
    case 0x7F3055B4u: goto label_7F3055B4;
    case 0x7F3055B8u: goto label_7F3055B8;
    case 0x7F3055BCu: goto label_7F3055BC;
    case 0x7F3055C0u: goto label_7F3055C0;
    case 0x7F3055C4u: goto label_7F3055C4;
    case 0x7F3055C8u: goto label_7F3055C8;
    case 0x7F3055CCu: goto label_7F3055CC;
    case 0x7F3055D0u: goto label_7F3055D0;
    case 0x7F3055D4u: goto label_7F3055D4;
    case 0x7F3055D8u: goto label_7F3055D8;
    case 0x7F3055DCu: goto label_7F3055DC;
    case 0x7F3055E0u: goto label_7F3055E0;
    case 0x7F3055E4u: goto label_7F3055E4;
    case 0x7F3055E8u: goto label_7F3055E8;
    case 0x7F3055ECu: goto label_7F3055EC;
    case 0x7F3055F0u: goto label_7F3055F0;
    case 0x7F3055F4u: goto label_7F3055F4;
    case 0x7F3055F8u: goto label_7F3055F8;
    case 0x7F3055FCu: goto label_7F3055FC;
    case 0x7F305600u: goto label_7F305600;
    case 0x7F305604u: goto label_7F305604;
    case 0x7F305608u: goto label_7F305608;
    case 0x7F30560Cu: goto label_7F30560C;
    case 0x7F305610u: goto label_7F305610;
    case 0x7F305614u: goto label_7F305614;
    case 0x7F305618u: goto label_7F305618;
    case 0x7F30561Cu: goto label_7F30561C;
    case 0x7F305620u: goto label_7F305620;
    case 0x7F305624u: goto label_7F305624;
    case 0x7F305628u: goto label_7F305628;
    case 0x7F30562Cu: goto label_7F30562C;
    case 0x7F305630u: goto label_7F305630;
    case 0x7F305634u: goto label_7F305634;
    case 0x7F305638u: goto label_7F305638;
    case 0x7F30563Cu: goto label_7F30563C;
    case 0x7F305640u: goto label_7F305640;
    case 0x7F305644u: goto label_7F305644;
    case 0x7F305648u: goto label_7F305648;
    case 0x7F30564Cu: goto label_7F30564C;
    case 0x7F305650u: goto label_7F305650;
    case 0x7F305654u: goto label_7F305654;
    case 0x7F305658u: goto label_7F305658;
    case 0x7F30565Cu: goto label_7F30565C;
    case 0x7F305660u: goto label_7F305660;
    case 0x7F305664u: goto label_7F305664;
    case 0x7F305668u: goto label_7F305668;
    case 0x7F30566Cu: goto label_7F30566C;
    case 0x7F305670u: goto label_7F305670;
    case 0x7F305674u: goto label_7F305674;
    case 0x7F305678u: goto label_7F305678;
    case 0x7F30567Cu: goto label_7F30567C;
    case 0x7F305680u: goto label_7F305680;
    case 0x7F305684u: goto label_7F305684;
    case 0x7F305688u: goto label_7F305688;
    case 0x7F30568Cu: goto label_7F30568C;
    case 0x7F305690u: goto label_7F305690;
    case 0x7F305694u: goto label_7F305694;
    case 0x7F305698u: goto label_7F305698;
    case 0x7F30569Cu: goto label_7F30569C;
    case 0x7F3056A0u: goto label_7F3056A0;
    case 0x7F3056A4u: goto label_7F3056A4;
    case 0x7F3056A8u: goto label_7F3056A8;
    case 0x7F3056ACu: goto label_7F3056AC;
    case 0x7F3056B0u: goto label_7F3056B0;
    case 0x7F3056B4u: goto label_7F3056B4;
    case 0x7F3056B8u: goto label_7F3056B8;
    case 0x7F3056BCu: goto label_7F3056BC;
    case 0x7F3056C0u: goto label_7F3056C0;
    case 0x7F3056C4u: goto label_7F3056C4;
    case 0x7F3056C8u: goto label_7F3056C8;
    case 0x7F3056CCu: goto label_7F3056CC;
    case 0x7F3056D0u: goto label_7F3056D0;
    case 0x7F3056D4u: goto label_7F3056D4;
    case 0x7F3056D8u: goto label_7F3056D8;
    case 0x7F3056DCu: goto label_7F3056DC;
    case 0x7F3056E0u: goto label_7F3056E0;
    case 0x7F3056E4u: goto label_7F3056E4;
    case 0x7F3056E8u: goto label_7F3056E8;
    case 0x7F3056ECu: goto label_7F3056EC;
    case 0x7F3056F0u: goto label_7F3056F0;
    case 0x7F3056F4u: goto label_7F3056F4;
    case 0x7F3056F8u: goto label_7F3056F8;
    case 0x7F3056FCu: goto label_7F3056FC;
    case 0x7F305700u: goto label_7F305700;
    case 0x7F305704u: goto label_7F305704;
    case 0x7F305708u: goto label_7F305708;
    case 0x7F30570Cu: goto label_7F30570C;
    case 0x7F305710u: goto label_7F305710;
    case 0x7F305714u: goto label_7F305714;
    case 0x7F305718u: goto label_7F305718;
    case 0x7F30571Cu: goto label_7F30571C;
    case 0x7F305720u: goto label_7F305720;
    case 0x7F305724u: goto label_7F305724;
    case 0x7F305728u: goto label_7F305728;
    case 0x7F30572Cu: goto label_7F30572C;
    case 0x7F305730u: goto label_7F305730;
    case 0x7F305734u: goto label_7F305734;
    case 0x7F305738u: goto label_7F305738;
    case 0x7F30573Cu: goto label_7F30573C;
    case 0x7F305740u: goto label_7F305740;
    case 0x7F305744u: goto label_7F305744;
    case 0x7F305748u: goto label_7F305748;
    case 0x7F30574Cu: goto label_7F30574C;
    case 0x7F305750u: goto label_7F305750;
    case 0x7F305754u: goto label_7F305754;
    case 0x7F305758u: goto label_7F305758;
    case 0x7F30575Cu: goto label_7F30575C;
    case 0x7F305760u: goto label_7F305760;
    case 0x7F305764u: goto label_7F305764;
    case 0x7F305768u: goto label_7F305768;
    case 0x7F30576Cu: goto label_7F30576C;
    case 0x7F305770u: goto label_7F305770;
    case 0x7F305774u: goto label_7F305774;
    case 0x7F305778u: goto label_7F305778;
    case 0x7F30577Cu: goto label_7F30577C;
    case 0x7F305780u: goto label_7F305780;
    case 0x7F305784u: goto label_7F305784;
    case 0x7F305788u: goto label_7F305788;
    case 0x7F30578Cu: goto label_7F30578C;
    case 0x7F305790u: goto label_7F305790;
    case 0x7F305794u: goto label_7F305794;
    case 0x7F305798u: goto label_7F305798;
    case 0x7F30579Cu: goto label_7F30579C;
    case 0x7F3057A0u: goto label_7F3057A0;
    case 0x7F3057A4u: goto label_7F3057A4;
    case 0x7F3057A8u: goto label_7F3057A8;
    case 0x7F3057ACu: goto label_7F3057AC;
    case 0x7F3057B0u: goto label_7F3057B0;
    case 0x7F3057B4u: goto label_7F3057B4;
    case 0x7F3057B8u: goto label_7F3057B8;
    case 0x7F3057BCu: goto label_7F3057BC;
    case 0x7F3057C0u: goto label_7F3057C0;
    case 0x7F3057C4u: goto label_7F3057C4;
    case 0x7F3057C8u: goto label_7F3057C8;
    case 0x7F3057CCu: goto label_7F3057CC;
    case 0x7F3057D0u: goto label_7F3057D0;
    case 0x7F3057D4u: goto label_7F3057D4;
    case 0x7F3057D8u: goto label_7F3057D8;
    case 0x7F3057DCu: goto label_7F3057DC;
    case 0x7F3057E0u: goto label_7F3057E0;
    case 0x7F3057E4u: goto label_7F3057E4;
    case 0x7F3057E8u: goto label_7F3057E8;
    case 0x7F3057ECu: goto label_7F3057EC;
    case 0x7F3057F0u: goto label_7F3057F0;
    case 0x7F3057F4u: goto label_7F3057F4;
    case 0x7F3057F8u: goto label_7F3057F8;
    case 0x7F3057FCu: goto label_7F3057FC;
    case 0x7F305800u: goto label_7F305800;
    case 0x7F305804u: goto label_7F305804;
    case 0x7F305808u: goto label_7F305808;
    case 0x7F30580Cu: goto label_7F30580C;
    case 0x7F305810u: goto label_7F305810;
    case 0x7F305814u: goto label_7F305814;
    case 0x7F305818u: goto label_7F305818;
    case 0x7F30581Cu: goto label_7F30581C;
    case 0x7F305820u: goto label_7F305820;
    case 0x7F305824u: goto label_7F305824;
    case 0x7F305828u: goto label_7F305828;
    case 0x7F30582Cu: goto label_7F30582C;
    case 0x7F305830u: goto label_7F305830;
    case 0x7F305834u: goto label_7F305834;
    case 0x7F305838u: goto label_7F305838;
    case 0x7F30583Cu: goto label_7F30583C;
    case 0x7F305840u: goto label_7F305840;
    case 0x7F305844u: goto label_7F305844;
    case 0x7F305848u: goto label_7F305848;
    case 0x7F30584Cu: goto label_7F30584C;
    case 0x7F305850u: goto label_7F305850;
    case 0x7F305854u: goto label_7F305854;
    case 0x7F305858u: goto label_7F305858;
    case 0x7F30585Cu: goto label_7F30585C;
    case 0x7F305860u: goto label_7F305860;
    case 0x7F305864u: goto label_7F305864;
    case 0x7F305868u: goto label_7F305868;
    case 0x7F30586Cu: goto label_7F30586C;
    case 0x7F305870u: goto label_7F305870;
    case 0x7F305874u: goto label_7F305874;
    case 0x7F305878u: goto label_7F305878;
    case 0x7F30587Cu: goto label_7F30587C;
    case 0x7F305880u: goto label_7F305880;
    case 0x7F305884u: goto label_7F305884;
    case 0x7F305888u: goto label_7F305888;
    case 0x7F30588Cu: goto label_7F30588C;
    case 0x7F305890u: goto label_7F305890;
    case 0x7F305894u: goto label_7F305894;
    case 0x7F305898u: goto label_7F305898;
    case 0x7F30589Cu: goto label_7F30589C;
    case 0x7F3058A0u: goto label_7F3058A0;
    case 0x7F3058A4u: goto label_7F3058A4;
    case 0x7F3058A8u: goto label_7F3058A8;
    case 0x7F3058ACu: goto label_7F3058AC;
    case 0x7F3058B0u: goto label_7F3058B0;
    case 0x7F3058B4u: goto label_7F3058B4;
    case 0x7F3058B8u: goto label_7F3058B8;
    case 0x7F3058BCu: goto label_7F3058BC;
    case 0x7F3058C0u: goto label_7F3058C0;
    case 0x7F3058C4u: goto label_7F3058C4;
    case 0x7F3058C8u: goto label_7F3058C8;
    case 0x7F3058CCu: goto label_7F3058CC;
    case 0x7F3058D0u: goto label_7F3058D0;
    case 0x7F3058D4u: goto label_7F3058D4;
    case 0x7F3058D8u: goto label_7F3058D8;
    case 0x7F3058DCu: goto label_7F3058DC;
    case 0x7F3058E0u: goto label_7F3058E0;
    case 0x7F3058E4u: goto label_7F3058E4;
    case 0x7F3058E8u: goto label_7F3058E8;
    case 0x7F3058ECu: goto label_7F3058EC;
    case 0x7F3058F0u: goto label_7F3058F0;
    case 0x7F3058F4u: goto label_7F3058F4;
    case 0x7F3058F8u: goto label_7F3058F8;
    case 0x7F3058FCu: goto label_7F3058FC;
    case 0x7F305900u: goto label_7F305900;
    case 0x7F305904u: goto label_7F305904;
    case 0x7F305908u: goto label_7F305908;
    case 0x7F30590Cu: goto label_7F30590C;
    case 0x7F305910u: goto label_7F305910;
    case 0x7F305914u: goto label_7F305914;
    case 0x7F305918u: goto label_7F305918;
    case 0x7F30591Cu: goto label_7F30591C;
    case 0x7F305920u: goto label_7F305920;
    case 0x7F305924u: goto label_7F305924;
    case 0x7F305928u: goto label_7F305928;
    case 0x7F30592Cu: goto label_7F30592C;
    case 0x7F305930u: goto label_7F305930;
    case 0x7F305934u: goto label_7F305934;
    case 0x7F305938u: goto label_7F305938;
    case 0x7F30593Cu: goto label_7F30593C;
    case 0x7F305940u: goto label_7F305940;
    case 0x7F305944u: goto label_7F305944;
    case 0x7F305948u: goto label_7F305948;
    case 0x7F30594Cu: goto label_7F30594C;
    case 0x7F305950u: goto label_7F305950;
    case 0x7F305954u: goto label_7F305954;
    case 0x7F305958u: goto label_7F305958;
    case 0x7F30595Cu: goto label_7F30595C;
    case 0x7F305960u: goto label_7F305960;
    case 0x7F305964u: goto label_7F305964;
    case 0x7F305968u: goto label_7F305968;
    case 0x7F30596Cu: goto label_7F30596C;
    case 0x7F305970u: goto label_7F305970;
    case 0x7F305974u: goto label_7F305974;
    case 0x7F305978u: goto label_7F305978;
    case 0x7F30597Cu: goto label_7F30597C;
    case 0x7F305980u: goto label_7F305980;
    case 0x7F305984u: goto label_7F305984;
    case 0x7F305988u: goto label_7F305988;
    case 0x7F30598Cu: goto label_7F30598C;
    case 0x7F305990u: goto label_7F305990;
    case 0x7F305994u: goto label_7F305994;
    case 0x7F305998u: goto label_7F305998;
    case 0x7F30599Cu: goto label_7F30599C;
    case 0x7F3059A0u: goto label_7F3059A0;
    case 0x7F3059A4u: goto label_7F3059A4;
    case 0x7F3059A8u: goto label_7F3059A8;
    case 0x7F3059ACu: goto label_7F3059AC;
    case 0x7F3059B0u: goto label_7F3059B0;
    case 0x7F3059B4u: goto label_7F3059B4;
    case 0x7F3059B8u: goto label_7F3059B8;
    case 0x7F3059BCu: goto label_7F3059BC;
    case 0x7F3059C0u: goto label_7F3059C0;
    case 0x7F3059C4u: goto label_7F3059C4;
    case 0x7F3059C8u: goto label_7F3059C8;
    case 0x7F3059CCu: goto label_7F3059CC;
    case 0x7F3059D0u: goto label_7F3059D0;
    case 0x7F3059D4u: goto label_7F3059D4;
    case 0x7F3059D8u: goto label_7F3059D8;
    case 0x7F3059DCu: goto label_7F3059DC;
    case 0x7F3059E0u: goto label_7F3059E0;
    case 0x7F3059E4u: goto label_7F3059E4;
    case 0x7F3059E8u: goto label_7F3059E8;
    case 0x7F3059ECu: goto label_7F3059EC;
    case 0x7F3059F0u: goto label_7F3059F0;
    case 0x7F3059F4u: goto label_7F3059F4;
    case 0x7F3059F8u: goto label_7F3059F8;
    case 0x7F3059FCu: goto label_7F3059FC;
    case 0x7F305A00u: goto label_7F305A00;
    case 0x7F305A04u: goto label_7F305A04;
    case 0x7F305A08u: goto label_7F305A08;
    case 0x7F305A0Cu: goto label_7F305A0C;
    case 0x7F305A10u: goto label_7F305A10;
    case 0x7F305A14u: goto label_7F305A14;
    case 0x7F305A18u: goto label_7F305A18;
    case 0x7F305A1Cu: goto label_7F305A1C;
    case 0x7F305A20u: goto label_7F305A20;
    case 0x7F305A24u: goto label_7F305A24;
    case 0x7F305A28u: goto label_7F305A28;
    case 0x7F305A2Cu: goto label_7F305A2C;
    case 0x7F305A30u: goto label_7F305A30;
    case 0x7F305A34u: goto label_7F305A34;
    case 0x7F305A38u: goto label_7F305A38;
    case 0x7F305A3Cu: goto label_7F305A3C;
    case 0x7F305A40u: goto label_7F305A40;
    case 0x7F305A44u: goto label_7F305A44;
    case 0x7F305A48u: goto label_7F305A48;
    case 0x7F305A4Cu: goto label_7F305A4C;
    case 0x7F305A50u: goto label_7F305A50;
    case 0x7F305A54u: goto label_7F305A54;
    case 0x7F305A58u: goto label_7F305A58;
    case 0x7F305A5Cu: goto label_7F305A5C;
    case 0x7F305A60u: goto label_7F305A60;
    case 0x7F305A64u: goto label_7F305A64;
    case 0x7F305A68u: goto label_7F305A68;
    case 0x7F305A6Cu: goto label_7F305A6C;
    case 0x7F305A70u: goto label_7F305A70;
    case 0x7F305A74u: goto label_7F305A74;
    case 0x7F305A78u: goto label_7F305A78;
    case 0x7F305A7Cu: goto label_7F305A7C;
    case 0x7F305A80u: goto label_7F305A80;
    case 0x7F305A84u: goto label_7F305A84;
    case 0x7F305A88u: goto label_7F305A88;
    case 0x7F305A8Cu: goto label_7F305A8C;
    case 0x7F305A90u: goto label_7F305A90;
    case 0x7F305A94u: goto label_7F305A94;
    case 0x7F305A98u: goto label_7F305A98;
    case 0x7F305A9Cu: goto label_7F305A9C;
    case 0x7F305AA0u: goto label_7F305AA0;
    case 0x7F305AA4u: goto label_7F305AA4;
    case 0x7F305AA8u: goto label_7F305AA8;
    case 0x7F305AACu: goto label_7F305AAC;
    case 0x7F305AB0u: goto label_7F305AB0;
    case 0x7F305AB4u: goto label_7F305AB4;
    case 0x7F305AB8u: goto label_7F305AB8;
    case 0x7F305ABCu: goto label_7F305ABC;
    case 0x7F305AC0u: goto label_7F305AC0;
    case 0x7F305AC4u: goto label_7F305AC4;
    case 0x7F305AC8u: goto label_7F305AC8;
    case 0x7F305ACCu: goto label_7F305ACC;
    case 0x7F305AD0u: goto label_7F305AD0;
    case 0x7F305AD4u: goto label_7F305AD4;
    case 0x7F305AD8u: goto label_7F305AD8;
    case 0x7F305ADCu: goto label_7F305ADC;
    case 0x7F305AE0u: goto label_7F305AE0;
    case 0x7F305AE4u: goto label_7F305AE4;
    case 0x7F305AE8u: goto label_7F305AE8;
    case 0x7F305AECu: goto label_7F305AEC;
    case 0x7F305AF0u: goto label_7F305AF0;
    case 0x7F305AF4u: goto label_7F305AF4;
    case 0x7F305AF8u: goto label_7F305AF8;
    case 0x7F305AFCu: goto label_7F305AFC;
    case 0x7F305B00u: goto label_7F305B00;
    case 0x7F305B04u: goto label_7F305B04;
    case 0x7F305B08u: goto label_7F305B08;
    case 0x7F305B0Cu: goto label_7F305B0C;
    case 0x7F305B10u: goto label_7F305B10;
    case 0x7F305B14u: goto label_7F305B14;
    case 0x7F305B18u: goto label_7F305B18;
    case 0x7F305B1Cu: goto label_7F305B1C;
    case 0x7F305B20u: goto label_7F305B20;
    case 0x7F305B24u: goto label_7F305B24;
    case 0x7F305B28u: goto label_7F305B28;
    case 0x7F305B2Cu: goto label_7F305B2C;
    case 0x7F305B30u: goto label_7F305B30;
    case 0x7F305B34u: goto label_7F305B34;
    case 0x7F305B38u: goto label_7F305B38;
    case 0x7F305B3Cu: goto label_7F305B3C;
    case 0x7F305B40u: goto label_7F305B40;
    case 0x7F305B44u: goto label_7F305B44;
    case 0x7F305B48u: goto label_7F305B48;
    case 0x7F305B4Cu: goto label_7F305B4C;
    case 0x7F305B50u: goto label_7F305B50;
    case 0x7F305B54u: goto label_7F305B54;
    case 0x7F305B58u: goto label_7F305B58;
    case 0x7F305B5Cu: goto label_7F305B5C;
    case 0x7F305B60u: goto label_7F305B60;
    case 0x7F305B64u: goto label_7F305B64;
    case 0x7F305B68u: goto label_7F305B68;
    case 0x7F305B6Cu: goto label_7F305B6C;
    case 0x7F305B70u: goto label_7F305B70;
    case 0x7F305B74u: goto label_7F305B74;
    case 0x7F305B78u: goto label_7F305B78;
    case 0x7F305B7Cu: goto label_7F305B7C;
    case 0x7F305B80u: goto label_7F305B80;
    case 0x7F305B84u: goto label_7F305B84;
    case 0x7F305B88u: goto label_7F305B88;
    case 0x7F305B8Cu: goto label_7F305B8C;
    case 0x7F305B90u: goto label_7F305B90;
    case 0x7F305B94u: goto label_7F305B94;
    case 0x7F305B98u: goto label_7F305B98;
    case 0x7F305B9Cu: goto label_7F305B9C;
    case 0x7F305BA0u: goto label_7F305BA0;
    case 0x7F305BA4u: goto label_7F305BA4;
    case 0x7F305BA8u: goto label_7F305BA8;
    case 0x7F305BACu: goto label_7F305BAC;
    case 0x7F305BB0u: goto label_7F305BB0;
    case 0x7F305BB4u: goto label_7F305BB4;
    case 0x7F305BB8u: goto label_7F305BB8;
    case 0x7F305BBCu: goto label_7F305BBC;
    case 0x7F305BC0u: goto label_7F305BC0;
    case 0x7F305BC4u: goto label_7F305BC4;
    case 0x7F305BC8u: goto label_7F305BC8;
    case 0x7F305BCCu: goto label_7F305BCC;
    case 0x7F305BD0u: goto label_7F305BD0;
    case 0x7F305BD4u: goto label_7F305BD4;
    case 0x7F305BD8u: goto label_7F305BD8;
    case 0x7F305BDCu: goto label_7F305BDC;
    case 0x7F305BE0u: goto label_7F305BE0;
    case 0x7F305BE4u: goto label_7F305BE4;
    case 0x7F305BE8u: goto label_7F305BE8;
    case 0x7F305BECu: goto label_7F305BEC;
    case 0x7F305BF0u: goto label_7F305BF0;
    case 0x7F305BF4u: goto label_7F305BF4;
    case 0x7F305BF8u: goto label_7F305BF8;
    case 0x7F305BFCu: goto label_7F305BFC;
    case 0x7F305C00u: goto label_7F305C00;
    case 0x7F305C04u: goto label_7F305C04;
    case 0x7F305C08u: goto label_7F305C08;
    case 0x7F305C0Cu: goto label_7F305C0C;
    case 0x7F305C10u: goto label_7F305C10;
    case 0x7F305C14u: goto label_7F305C14;
    case 0x7F305C18u: goto label_7F305C18;
    case 0x7F305C1Cu: goto label_7F305C1C;
    case 0x7F305C20u: goto label_7F305C20;
    case 0x7F305C24u: goto label_7F305C24;
    case 0x7F305C28u: goto label_7F305C28;
    case 0x7F305C2Cu: goto label_7F305C2C;
    case 0x7F305C30u: goto label_7F305C30;
    case 0x7F305C34u: goto label_7F305C34;
    case 0x7F305C38u: goto label_7F305C38;
    case 0x7F305C3Cu: goto label_7F305C3C;
    case 0x7F305C40u: goto label_7F305C40;
    case 0x7F305C44u: goto label_7F305C44;
    case 0x7F305C48u: goto label_7F305C48;
    case 0x7F305C4Cu: goto label_7F305C4C;
    case 0x7F305C50u: goto label_7F305C50;
    case 0x7F305C54u: goto label_7F305C54;
    case 0x7F305C58u: goto label_7F305C58;
    case 0x7F305C5Cu: goto label_7F305C5C;
    case 0x7F305C60u: goto label_7F305C60;
    case 0x7F305C64u: goto label_7F305C64;
    case 0x7F305C68u: goto label_7F305C68;
    case 0x7F305C6Cu: goto label_7F305C6C;
    case 0x7F305C70u: goto label_7F305C70;
    case 0x7F305C74u: goto label_7F305C74;
    case 0x7F305C78u: goto label_7F305C78;
    case 0x7F305C7Cu: goto label_7F305C7C;
    case 0x7F305C80u: goto label_7F305C80;
    case 0x7F305C84u: goto label_7F305C84;
    case 0x7F305C88u: goto label_7F305C88;
    case 0x7F305C8Cu: goto label_7F305C8C;
    case 0x7F305C90u: goto label_7F305C90;
    case 0x7F305C94u: goto label_7F305C94;
    case 0x7F305C98u: goto label_7F305C98;
    case 0x7F305C9Cu: goto label_7F305C9C;
    case 0x7F305CA0u: goto label_7F305CA0;
    case 0x7F305CA4u: goto label_7F305CA4;
    case 0x7F305CA8u: goto label_7F305CA8;
    case 0x7F305CACu: goto label_7F305CAC;
    case 0x7F305CB0u: goto label_7F305CB0;
    case 0x7F305CB4u: goto label_7F305CB4;
    case 0x7F305CB8u: goto label_7F305CB8;
    case 0x7F305CBCu: goto label_7F305CBC;
    case 0x7F305CC0u: goto label_7F305CC0;
    case 0x7F305CC4u: goto label_7F305CC4;
    case 0x7F305CC8u: goto label_7F305CC8;
    case 0x7F305CCCu: goto label_7F305CCC;
    case 0x7F305CD0u: goto label_7F305CD0;
    case 0x7F305CD4u: goto label_7F305CD4;
    case 0x7F305CD8u: goto label_7F305CD8;
    case 0x7F305CDCu: goto label_7F305CDC;
    case 0x7F305CE0u: goto label_7F305CE0;
    case 0x7F305CE4u: goto label_7F305CE4;
    case 0x7F305CE8u: goto label_7F305CE8;
    case 0x7F305CECu: goto label_7F305CEC;
    case 0x7F305CF0u: goto label_7F305CF0;
    case 0x7F305CF4u: goto label_7F305CF4;
    case 0x7F305CF8u: goto label_7F305CF8;
    case 0x7F305CFCu: goto label_7F305CFC;
    case 0x7F305D00u: goto label_7F305D00;
    case 0x7F305D04u: goto label_7F305D04;
    case 0x7F305D08u: goto label_7F305D08;
    case 0x7F305D0Cu: goto label_7F305D0C;
    case 0x7F305D10u: goto label_7F305D10;
    case 0x7F305D14u: goto label_7F305D14;
    case 0x7F305D18u: goto label_7F305D18;
    case 0x7F305D1Cu: goto label_7F305D1C;
    case 0x7F305D20u: goto label_7F305D20;
    case 0x7F305D24u: goto label_7F305D24;
    case 0x7F305D28u: goto label_7F305D28;
    case 0x7F305D2Cu: goto label_7F305D2C;
    case 0x7F305D30u: goto label_7F305D30;
    case 0x7F305D34u: goto label_7F305D34;
    case 0x7F305D38u: goto label_7F305D38;
    case 0x7F305D3Cu: goto label_7F305D3C;
    case 0x7F305D40u: goto label_7F305D40;
    case 0x7F305D44u: goto label_7F305D44;
    case 0x7F305D48u: goto label_7F305D48;
    case 0x7F305D4Cu: goto label_7F305D4C;
    case 0x7F305D50u: goto label_7F305D50;
    case 0x7F305D54u: goto label_7F305D54;
    case 0x7F305D58u: goto label_7F305D58;
    case 0x7F305D5Cu: goto label_7F305D5C;
    case 0x7F305D60u: goto label_7F305D60;
    case 0x7F305D64u: goto label_7F305D64;
    case 0x7F305D68u: goto label_7F305D68;
    case 0x7F305D6Cu: goto label_7F305D6C;
    case 0x7F305D70u: goto label_7F305D70;
    case 0x7F305D74u: goto label_7F305D74;
    case 0x7F305D78u: goto label_7F305D78;
    case 0x7F305D7Cu: goto label_7F305D7C;
    case 0x7F305D80u: goto label_7F305D80;
    case 0x7F305D84u: goto label_7F305D84;
    case 0x7F305D88u: goto label_7F305D88;
    case 0x7F305D8Cu: goto label_7F305D8C;
    case 0x7F305D90u: goto label_7F305D90;
    case 0x7F305D94u: goto label_7F305D94;
    case 0x7F305D98u: goto label_7F305D98;
    case 0x7F305D9Cu: goto label_7F305D9C;
    case 0x7F305DA0u: goto label_7F305DA0;
    case 0x7F305DA4u: goto label_7F305DA4;
    case 0x7F305DA8u: goto label_7F305DA8;
    case 0x7F305DACu: goto label_7F305DAC;
    case 0x7F305DB0u: goto label_7F305DB0;
    case 0x7F305DB4u: goto label_7F305DB4;
    case 0x7F305DB8u: goto label_7F305DB8;
    case 0x7F305DBCu: goto label_7F305DBC;
    case 0x7F305DC0u: goto label_7F305DC0;
    case 0x7F305DC4u: goto label_7F305DC4;
    case 0x7F305DC8u: goto label_7F305DC8;
    case 0x7F305DCCu: goto label_7F305DCC;
    case 0x7F305DD0u: goto label_7F305DD0;
    case 0x7F305DD4u: goto label_7F305DD4;
    case 0x7F305DD8u: goto label_7F305DD8;
    case 0x7F305DDCu: goto label_7F305DDC;
    case 0x7F305DE0u: goto label_7F305DE0;
    case 0x7F305DE4u: goto label_7F305DE4;
    case 0x7F305DE8u: goto label_7F305DE8;
    case 0x7F305DECu: goto label_7F305DEC;
    case 0x7F305DF0u: goto label_7F305DF0;
    case 0x7F305DF4u: goto label_7F305DF4;
    case 0x7F305DF8u: goto label_7F305DF8;
    case 0x7F305DFCu: goto label_7F305DFC;
    case 0x7F305E00u: goto label_7F305E00;
    case 0x7F305E04u: goto label_7F305E04;
    case 0x7F305E08u: goto label_7F305E08;
    case 0x7F305E0Cu: goto label_7F305E0C;
    case 0x7F305E10u: goto label_7F305E10;
    case 0x7F305E14u: goto label_7F305E14;
    case 0x7F305E18u: goto label_7F305E18;
    case 0x7F305E1Cu: goto label_7F305E1C;
    case 0x7F305E20u: goto label_7F305E20;
    case 0x7F305E24u: goto label_7F305E24;
    case 0x7F305E28u: goto label_7F305E28;
    case 0x7F305E2Cu: goto label_7F305E2C;
    case 0x7F305E30u: goto label_7F305E30;
    case 0x7F305E34u: goto label_7F305E34;
    case 0x7F305E38u: goto label_7F305E38;
    case 0x7F305E3Cu: goto label_7F305E3C;
    case 0x7F305E40u: goto label_7F305E40;
    case 0x7F305E44u: goto label_7F305E44;
    case 0x7F305E48u: goto label_7F305E48;
    case 0x7F305E4Cu: goto label_7F305E4C;
    case 0x7F305E50u: goto label_7F305E50;
    case 0x7F305E54u: goto label_7F305E54;
    case 0x7F305E58u: goto label_7F305E58;
    case 0x7F305E5Cu: goto label_7F305E5C;
    case 0x7F305E60u: goto label_7F305E60;
    case 0x7F305E64u: goto label_7F305E64;
    case 0x7F305E68u: goto label_7F305E68;
    case 0x7F305E6Cu: goto label_7F305E6C;
    case 0x7F305E70u: goto label_7F305E70;
    case 0x7F305E74u: goto label_7F305E74;
    case 0x7F305E78u: goto label_7F305E78;
    case 0x7F305E7Cu: goto label_7F305E7C;
    case 0x7F305E80u: goto label_7F305E80;
    case 0x7F305E84u: goto label_7F305E84;
    case 0x7F305E88u: goto label_7F305E88;
    case 0x7F305E8Cu: goto label_7F305E8C;
    case 0x7F305E90u: goto label_7F305E90;
    case 0x7F305E94u: goto label_7F305E94;
    case 0x7F305E98u: goto label_7F305E98;
    case 0x7F305E9Cu: goto label_7F305E9C;
    case 0x7F305EA0u: goto label_7F305EA0;
    case 0x7F305EA4u: goto label_7F305EA4;
    case 0x7F305EA8u: goto label_7F305EA8;
    case 0x7F305EACu: goto label_7F305EAC;
    case 0x7F305EB0u: goto label_7F305EB0;
    case 0x7F305EB4u: goto label_7F305EB4;
    case 0x7F305EB8u: goto label_7F305EB8;
    case 0x7F305EBCu: goto label_7F305EBC;
    case 0x7F305EC0u: goto label_7F305EC0;
    case 0x7F305EC4u: goto label_7F305EC4;
    case 0x7F305EC8u: goto label_7F305EC8;
    case 0x7F305ECCu: goto label_7F305ECC;
    case 0x7F305ED0u: goto label_7F305ED0;
    case 0x7F305ED4u: goto label_7F305ED4;
    case 0x7F305ED8u: goto label_7F305ED8;
    case 0x7F305EDCu: goto label_7F305EDC;
    case 0x7F305EE0u: goto label_7F305EE0;
    case 0x7F305EE4u: goto label_7F305EE4;
    case 0x7F305EE8u: goto label_7F305EE8;
    case 0x7F305EECu: goto label_7F305EEC;
    case 0x7F305EF0u: goto label_7F305EF0;
    case 0x7F305EF4u: goto label_7F305EF4;
    case 0x7F305EF8u: goto label_7F305EF8;
    case 0x7F305EFCu: goto label_7F305EFC;
    case 0x7F305F00u: goto label_7F305F00;
    case 0x7F305F04u: goto label_7F305F04;
    case 0x7F305F08u: goto label_7F305F08;
    case 0x7F305F0Cu: goto label_7F305F0C;
    case 0x7F305F10u: goto label_7F305F10;
    case 0x7F305F14u: goto label_7F305F14;
    case 0x7F305F18u: goto label_7F305F18;
    case 0x7F305F1Cu: goto label_7F305F1C;
    case 0x7F305F20u: goto label_7F305F20;
    case 0x7F305F24u: goto label_7F305F24;
    case 0x7F305F28u: goto label_7F305F28;
    case 0x7F305F2Cu: goto label_7F305F2C;
    case 0x7F305F30u: goto label_7F305F30;
    case 0x7F305F34u: goto label_7F305F34;
    case 0x7F305F38u: goto label_7F305F38;
    case 0x7F305F3Cu: goto label_7F305F3C;
    case 0x7F305F40u: goto label_7F305F40;
    case 0x7F305F44u: goto label_7F305F44;
    case 0x7F305F48u: goto label_7F305F48;
    case 0x7F305F4Cu: goto label_7F305F4C;
    case 0x7F305F50u: goto label_7F305F50;
    case 0x7F305F54u: goto label_7F305F54;
    case 0x7F305F58u: goto label_7F305F58;
    case 0x7F305F5Cu: goto label_7F305F5C;
    case 0x7F305F60u: goto label_7F305F60;
    case 0x7F305F64u: goto label_7F305F64;
    case 0x7F305F68u: goto label_7F305F68;
    case 0x7F305F6Cu: goto label_7F305F6C;
    case 0x7F305F70u: goto label_7F305F70;
    case 0x7F305F74u: goto label_7F305F74;
    case 0x7F305F78u: goto label_7F305F78;
    case 0x7F305F7Cu: goto label_7F305F7C;
    case 0x7F305F80u: goto label_7F305F80;
    case 0x7F305F84u: goto label_7F305F84;
    case 0x7F305F88u: goto label_7F305F88;
    case 0x7F305F8Cu: goto label_7F305F8C;
    case 0x7F305F90u: goto label_7F305F90;
    case 0x7F305F94u: goto label_7F305F94;
    case 0x7F305F98u: goto label_7F305F98;
    case 0x7F305F9Cu: goto label_7F305F9C;
    case 0x7F305FA0u: goto label_7F305FA0;
    case 0x7F305FA4u: goto label_7F305FA4;
    case 0x7F305FA8u: goto label_7F305FA8;
    case 0x7F305FACu: goto label_7F305FAC;
    case 0x7F305FB0u: goto label_7F305FB0;
    case 0x7F305FB4u: goto label_7F305FB4;
    case 0x7F305FB8u: goto label_7F305FB8;
    case 0x7F305FBCu: goto label_7F305FBC;
    case 0x7F305FC0u: goto label_7F305FC0;
    case 0x7F305FC4u: goto label_7F305FC4;
    case 0x7F305FC8u: goto label_7F305FC8;
    case 0x7F305FCCu: goto label_7F305FCC;
    case 0x7F305FD0u: goto label_7F305FD0;
    case 0x7F305FD4u: goto label_7F305FD4;
    case 0x7F305FD8u: goto label_7F305FD8;
    case 0x7F305FDCu: goto label_7F305FDC;
    case 0x7F305FE0u: goto label_7F305FE0;
    case 0x7F305FE4u: goto label_7F305FE4;
    case 0x7F305FE8u: goto label_7F305FE8;
    case 0x7F305FECu: goto label_7F305FEC;
    case 0x7F305FF0u: goto label_7F305FF0;
    case 0x7F305FF4u: goto label_7F305FF4;
    case 0x7F305FF8u: goto label_7F305FF8;
    case 0x7F305FFCu: goto label_7F305FFC;
    case 0x7F306000u: goto label_7F306000;
    case 0x7F306004u: goto label_7F306004;
    case 0x7F306008u: goto label_7F306008;
    case 0x7F30600Cu: goto label_7F30600C;
    case 0x7F306010u: goto label_7F306010;
    case 0x7F306014u: goto label_7F306014;
    case 0x7F306018u: goto label_7F306018;
    case 0x7F30601Cu: goto label_7F30601C;
    case 0x7F306020u: goto label_7F306020;
    case 0x7F306024u: goto label_7F306024;
    case 0x7F306028u: goto label_7F306028;
    case 0x7F30602Cu: goto label_7F30602C;
    case 0x7F306030u: goto label_7F306030;
    case 0x7F306034u: goto label_7F306034;
    case 0x7F306038u: goto label_7F306038;
    case 0x7F30603Cu: goto label_7F30603C;
    case 0x7F306040u: goto label_7F306040;
    case 0x7F306044u: goto label_7F306044;
    case 0x7F306048u: goto label_7F306048;
    case 0x7F30604Cu: goto label_7F30604C;
    case 0x7F306050u: goto label_7F306050;
    case 0x7F306054u: goto label_7F306054;
    case 0x7F306058u: goto label_7F306058;
    case 0x7F30605Cu: goto label_7F30605C;
    case 0x7F306060u: goto label_7F306060;
    case 0x7F306064u: goto label_7F306064;
    case 0x7F306068u: goto label_7F306068;
    case 0x7F30606Cu: goto label_7F30606C;
    case 0x7F306070u: goto label_7F306070;
    case 0x7F306074u: goto label_7F306074;
    case 0x7F306078u: goto label_7F306078;
    case 0x7F30607Cu: goto label_7F30607C;
    case 0x7F306080u: goto label_7F306080;
    case 0x7F306084u: goto label_7F306084;
    case 0x7F306088u: goto label_7F306088;
    case 0x7F30608Cu: goto label_7F30608C;
    case 0x7F306090u: goto label_7F306090;
    case 0x7F306094u: goto label_7F306094;
    case 0x7F306098u: goto label_7F306098;
    case 0x7F30609Cu: goto label_7F30609C;
    case 0x7F3060A0u: goto label_7F3060A0;
    case 0x7F3060A4u: goto label_7F3060A4;
    case 0x7F3060A8u: goto label_7F3060A8;
    case 0x7F3060ACu: goto label_7F3060AC;
    case 0x7F3060B0u: goto label_7F3060B0;
    case 0x7F3060B4u: goto label_7F3060B4;
    case 0x7F3060B8u: goto label_7F3060B8;
    case 0x7F3060BCu: goto label_7F3060BC;
    case 0x7F3060C0u: goto label_7F3060C0;
    case 0x7F3060C4u: goto label_7F3060C4;
    case 0x7F3060C8u: goto label_7F3060C8;
    case 0x7F3060CCu: goto label_7F3060CC;
    case 0x7F3060D0u: goto label_7F3060D0;
    case 0x7F3060D4u: goto label_7F3060D4;
    case 0x7F3060D8u: goto label_7F3060D8;
    case 0x7F3060DCu: goto label_7F3060DC;
    case 0x7F3060E0u: goto label_7F3060E0;
    case 0x7F3060E4u: goto label_7F3060E4;
    case 0x7F3060E8u: goto label_7F3060E8;
    case 0x7F3060ECu: goto label_7F3060EC;
    case 0x7F3060F0u: goto label_7F3060F0;
    case 0x7F3060F4u: goto label_7F3060F4;
    case 0x7F3060F8u: goto label_7F3060F8;
    case 0x7F3060FCu: goto label_7F3060FC;
    case 0x7F306100u: goto label_7F306100;
    case 0x7F306104u: goto label_7F306104;
    case 0x7F306108u: goto label_7F306108;
    case 0x7F30610Cu: goto label_7F30610C;
    case 0x7F306110u: goto label_7F306110;
    case 0x7F306114u: goto label_7F306114;
    case 0x7F306118u: goto label_7F306118;
    case 0x7F30611Cu: goto label_7F30611C;
    case 0x7F306120u: goto label_7F306120;
    case 0x7F306124u: goto label_7F306124;
    case 0x7F306128u: goto label_7F306128;
    case 0x7F30612Cu: goto label_7F30612C;
    case 0x7F306130u: goto label_7F306130;
    case 0x7F306134u: goto label_7F306134;
    case 0x7F306138u: goto label_7F306138;
    case 0x7F30613Cu: goto label_7F30613C;
    case 0x7F306140u: goto label_7F306140;
    case 0x7F306144u: goto label_7F306144;
    case 0x7F306148u: goto label_7F306148;
    case 0x7F30614Cu: goto label_7F30614C;
    case 0x7F306150u: goto label_7F306150;
    case 0x7F306154u: goto label_7F306154;
    case 0x7F306158u: goto label_7F306158;
    case 0x7F30615Cu: goto label_7F30615C;
    case 0x7F306160u: goto label_7F306160;
    case 0x7F306164u: goto label_7F306164;
    case 0x7F306168u: goto label_7F306168;
    case 0x7F30616Cu: goto label_7F30616C;
    case 0x7F306170u: goto label_7F306170;
    case 0x7F306174u: goto label_7F306174;
    case 0x7F306178u: goto label_7F306178;
    case 0x7F30617Cu: goto label_7F30617C;
    case 0x7F306180u: goto label_7F306180;
    case 0x7F306184u: goto label_7F306184;
    case 0x7F306188u: goto label_7F306188;
    case 0x7F30618Cu: goto label_7F30618C;
    case 0x7F306190u: goto label_7F306190;
    case 0x7F306194u: goto label_7F306194;
    case 0x7F306198u: goto label_7F306198;
    case 0x7F30619Cu: goto label_7F30619C;
    case 0x7F3061A0u: goto label_7F3061A0;
    case 0x7F3061A4u: goto label_7F3061A4;
    case 0x7F3061A8u: goto label_7F3061A8;
    case 0x7F3061ACu: goto label_7F3061AC;
    case 0x7F3061B0u: goto label_7F3061B0;
    case 0x7F3061B4u: goto label_7F3061B4;
    case 0x7F3061B8u: goto label_7F3061B8;
    case 0x7F3061BCu: goto label_7F3061BC;
    case 0x7F3061C0u: goto label_7F3061C0;
    case 0x7F3061C4u: goto label_7F3061C4;
    case 0x7F3061C8u: goto label_7F3061C8;
    case 0x7F3061CCu: goto label_7F3061CC;
    case 0x7F3061D0u: goto label_7F3061D0;
    case 0x7F3061D4u: goto label_7F3061D4;
    case 0x7F3061D8u: goto label_7F3061D8;
    case 0x7F3061DCu: goto label_7F3061DC;
    case 0x7F3061E0u: goto label_7F3061E0;
    case 0x7F3061E4u: goto label_7F3061E4;
    case 0x7F3061E8u: goto label_7F3061E8;
    case 0x7F3061ECu: goto label_7F3061EC;
    case 0x7F3061F0u: goto label_7F3061F0;
    case 0x7F3061F4u: goto label_7F3061F4;
    case 0x7F3061F8u: goto label_7F3061F8;
    case 0x7F3061FCu: goto label_7F3061FC;
    case 0x7F306200u: goto label_7F306200;
    case 0x7F306204u: goto label_7F306204;
    case 0x7F306208u: goto label_7F306208;
    case 0x7F30620Cu: goto label_7F30620C;
    case 0x7F306210u: goto label_7F306210;
    case 0x7F306214u: goto label_7F306214;
    case 0x7F306218u: goto label_7F306218;
    case 0x7F30621Cu: goto label_7F30621C;
    case 0x7F306220u: goto label_7F306220;
    case 0x7F306224u: goto label_7F306224;
    case 0x7F306228u: goto label_7F306228;
    case 0x7F30622Cu: goto label_7F30622C;
    case 0x7F306230u: goto label_7F306230;
    case 0x7F306234u: goto label_7F306234;
    case 0x7F306238u: goto label_7F306238;
    case 0x7F30623Cu: goto label_7F30623C;
    case 0x7F306240u: goto label_7F306240;
    case 0x7F306244u: goto label_7F306244;
    case 0x7F306248u: goto label_7F306248;
    case 0x7F30624Cu: goto label_7F30624C;
    case 0x7F306250u: goto label_7F306250;
    case 0x7F306254u: goto label_7F306254;
    case 0x7F306258u: goto label_7F306258;
    case 0x7F30625Cu: goto label_7F30625C;
    case 0x7F306260u: goto label_7F306260;
    case 0x7F306264u: goto label_7F306264;
    case 0x7F306268u: goto label_7F306268;
    case 0x7F30626Cu: goto label_7F30626C;
    case 0x7F306270u: goto label_7F306270;
    case 0x7F306274u: goto label_7F306274;
    case 0x7F306278u: goto label_7F306278;
    case 0x7F30627Cu: goto label_7F30627C;
    case 0x7F306280u: goto label_7F306280;
    case 0x7F306284u: goto label_7F306284;
    case 0x7F306288u: goto label_7F306288;
    case 0x7F30628Cu: goto label_7F30628C;
    case 0x7F306290u: goto label_7F306290;
    case 0x7F306294u: goto label_7F306294;
    case 0x7F306298u: goto label_7F306298;
    case 0x7F30629Cu: goto label_7F30629C;
    case 0x7F3062A0u: goto label_7F3062A0;
    case 0x7F3062A4u: goto label_7F3062A4;
    case 0x7F3062A8u: goto label_7F3062A8;
    case 0x7F3062ACu: goto label_7F3062AC;
    case 0x7F3062B0u: goto label_7F3062B0;
    case 0x7F3062B4u: goto label_7F3062B4;
    case 0x7F3062B8u: goto label_7F3062B8;
    case 0x7F3062BCu: goto label_7F3062BC;
    case 0x7F3062C0u: goto label_7F3062C0;
    case 0x7F3062C4u: goto label_7F3062C4;
    case 0x7F3062C8u: goto label_7F3062C8;
    case 0x7F3062CCu: goto label_7F3062CC;
    case 0x7F3062D0u: goto label_7F3062D0;
    case 0x7F3062D4u: goto label_7F3062D4;
    case 0x7F3062D8u: goto label_7F3062D8;
    case 0x7F3062DCu: goto label_7F3062DC;
    case 0x7F3062E0u: goto label_7F3062E0;
    case 0x7F3062E4u: goto label_7F3062E4;
    case 0x7F3062E8u: goto label_7F3062E8;
    case 0x7F3062ECu: goto label_7F3062EC;
    case 0x7F3062F0u: goto label_7F3062F0;
    case 0x7F3062F4u: goto label_7F3062F4;
    case 0x7F3062F8u: goto label_7F3062F8;
    case 0x7F3062FCu: goto label_7F3062FC;
    case 0x7F306300u: goto label_7F306300;
    case 0x7F306304u: goto label_7F306304;
    case 0x7F306308u: goto label_7F306308;
    case 0x7F30630Cu: goto label_7F30630C;
    case 0x7F306310u: goto label_7F306310;
    case 0x7F306314u: goto label_7F306314;
    case 0x7F306318u: goto label_7F306318;
    case 0x7F30631Cu: goto label_7F30631C;
    case 0x7F306320u: goto label_7F306320;
    case 0x7F306324u: goto label_7F306324;
    case 0x7F306328u: goto label_7F306328;
    case 0x7F30632Cu: goto label_7F30632C;
    case 0x7F306330u: goto label_7F306330;
    case 0x7F306334u: goto label_7F306334;
    case 0x7F306338u: goto label_7F306338;
    case 0x7F30633Cu: goto label_7F30633C;
    case 0x7F306340u: goto label_7F306340;
    case 0x7F306344u: goto label_7F306344;
    case 0x7F306348u: goto label_7F306348;
    case 0x7F30634Cu: goto label_7F30634C;
    case 0x7F306350u: goto label_7F306350;
    case 0x7F306354u: goto label_7F306354;
    case 0x7F306358u: goto label_7F306358;
    case 0x7F30635Cu: goto label_7F30635C;
    case 0x7F306360u: goto label_7F306360;
    case 0x7F306364u: goto label_7F306364;
    case 0x7F306368u: goto label_7F306368;
    case 0x7F30636Cu: goto label_7F30636C;
    case 0x7F306370u: goto label_7F306370;
    case 0x7F306374u: goto label_7F306374;
    case 0x7F306378u: goto label_7F306378;
    case 0x7F30637Cu: goto label_7F30637C;
    case 0x7F306380u: goto label_7F306380;
    case 0x7F306384u: goto label_7F306384;
    case 0x7F306388u: goto label_7F306388;
    case 0x7F30638Cu: goto label_7F30638C;
    case 0x7F306390u: goto label_7F306390;
    case 0x7F306394u: goto label_7F306394;
    case 0x7F306398u: goto label_7F306398;
    case 0x7F30639Cu: goto label_7F30639C;
    case 0x7F3063A0u: goto label_7F3063A0;
    case 0x7F3063A4u: goto label_7F3063A4;
    case 0x7F3063A8u: goto label_7F3063A8;
    case 0x7F3063ACu: goto label_7F3063AC;
    case 0x7F3063B0u: goto label_7F3063B0;
    case 0x7F3063B4u: goto label_7F3063B4;
    case 0x7F3063B8u: goto label_7F3063B8;
    case 0x7F3063BCu: goto label_7F3063BC;
    case 0x7F3063C0u: goto label_7F3063C0;
    case 0x7F3063C4u: goto label_7F3063C4;
    case 0x7F3063C8u: goto label_7F3063C8;
    case 0x7F3063CCu: goto label_7F3063CC;
    case 0x7F3063D0u: goto label_7F3063D0;
    case 0x7F3063D4u: goto label_7F3063D4;
    case 0x7F3063D8u: goto label_7F3063D8;
    case 0x7F3063DCu: goto label_7F3063DC;
    case 0x7F3063E0u: goto label_7F3063E0;
    case 0x7F3063E4u: goto label_7F3063E4;
    case 0x7F3063E8u: goto label_7F3063E8;
    case 0x7F3063ECu: goto label_7F3063EC;
    case 0x7F3063F0u: goto label_7F3063F0;
    case 0x7F3063F4u: goto label_7F3063F4;
    case 0x7F3063F8u: goto label_7F3063F8;
    case 0x7F3063FCu: goto label_7F3063FC;
    case 0x7F306400u: goto label_7F306400;
    case 0x7F306404u: goto label_7F306404;
    case 0x7F306408u: goto label_7F306408;
    case 0x7F30640Cu: goto label_7F30640C;
    case 0x7F306410u: goto label_7F306410;
    case 0x7F306414u: goto label_7F306414;
    case 0x7F306418u: goto label_7F306418;
    case 0x7F30641Cu: goto label_7F30641C;
    case 0x7F306420u: goto label_7F306420;
    case 0x7F306424u: goto label_7F306424;
    case 0x7F306428u: goto label_7F306428;
    case 0x7F30642Cu: goto label_7F30642C;
    case 0x7F306430u: goto label_7F306430;
    case 0x7F306434u: goto label_7F306434;
    case 0x7F306438u: goto label_7F306438;
    case 0x7F30643Cu: goto label_7F30643C;
    case 0x7F306440u: goto label_7F306440;
    case 0x7F306444u: goto label_7F306444;
    case 0x7F306448u: goto label_7F306448;
    case 0x7F30644Cu: goto label_7F30644C;
    case 0x7F306450u: goto label_7F306450;
    case 0x7F306454u: goto label_7F306454;
    case 0x7F306458u: goto label_7F306458;
    case 0x7F30645Cu: goto label_7F30645C;
    case 0x7F306460u: goto label_7F306460;
    case 0x7F306464u: goto label_7F306464;
    case 0x7F306468u: goto label_7F306468;
    case 0x7F30646Cu: goto label_7F30646C;
    case 0x7F306470u: goto label_7F306470;
    case 0x7F306474u: goto label_7F306474;
    case 0x7F306478u: goto label_7F306478;
    case 0x7F30647Cu: goto label_7F30647C;
    case 0x7F306480u: goto label_7F306480;
    case 0x7F306484u: goto label_7F306484;
    case 0x7F306488u: goto label_7F306488;
    case 0x7F30648Cu: goto label_7F30648C;
    case 0x7F306490u: goto label_7F306490;
    case 0x7F306494u: goto label_7F306494;
    case 0x7F306498u: goto label_7F306498;
    case 0x7F30649Cu: goto label_7F30649C;
    case 0x7F3064A0u: goto label_7F3064A0;
    case 0x7F3064A4u: goto label_7F3064A4;
    case 0x7F3064A8u: goto label_7F3064A8;
    case 0x7F3064ACu: goto label_7F3064AC;
    case 0x7F3064B0u: goto label_7F3064B0;
    case 0x7F3064B4u: goto label_7F3064B4;
    case 0x7F3064B8u: goto label_7F3064B8;
    case 0x7F3064BCu: goto label_7F3064BC;
    case 0x7F3064C0u: goto label_7F3064C0;
    case 0x7F3064C4u: goto label_7F3064C4;
    case 0x7F3064C8u: goto label_7F3064C8;
    case 0x7F3064CCu: goto label_7F3064CC;
    case 0x7F3064D0u: goto label_7F3064D0;
    case 0x7F3064D4u: goto label_7F3064D4;
    case 0x7F3064D8u: goto label_7F3064D8;
    case 0x7F3064DCu: goto label_7F3064DC;
    case 0x7F3064E0u: goto label_7F3064E0;
    case 0x7F3064E4u: goto label_7F3064E4;
    case 0x7F3064E8u: goto label_7F3064E8;
    case 0x7F3064ECu: goto label_7F3064EC;
    case 0x7F3064F0u: goto label_7F3064F0;
    case 0x7F3064F4u: goto label_7F3064F4;
    case 0x7F3064F8u: goto label_7F3064F8;
    case 0x7F3064FCu: goto label_7F3064FC;
    case 0x7F306500u: goto label_7F306500;
    case 0x7F306504u: goto label_7F306504;
    case 0x7F306508u: goto label_7F306508;
    case 0x7F30650Cu: goto label_7F30650C;
    case 0x7F306510u: goto label_7F306510;
    case 0x7F306514u: goto label_7F306514;
    case 0x7F306518u: goto label_7F306518;
    case 0x7F30651Cu: goto label_7F30651C;
    case 0x7F306520u: goto label_7F306520;
    case 0x7F306524u: goto label_7F306524;
    case 0x7F306528u: goto label_7F306528;
    case 0x7F30652Cu: goto label_7F30652C;
    case 0x7F306530u: goto label_7F306530;
    case 0x7F306534u: goto label_7F306534;
    case 0x7F306538u: goto label_7F306538;
    case 0x7F30653Cu: goto label_7F30653C;
    case 0x7F306540u: goto label_7F306540;
    case 0x7F306544u: goto label_7F306544;
    case 0x7F306548u: goto label_7F306548;
    case 0x7F30654Cu: goto label_7F30654C;
    case 0x7F306550u: goto label_7F306550;
    case 0x7F306554u: goto label_7F306554;
    case 0x7F306558u: goto label_7F306558;
    case 0x7F30655Cu: goto label_7F30655C;
    case 0x7F306560u: goto label_7F306560;
    case 0x7F306564u: goto label_7F306564;
    case 0x7F306568u: goto label_7F306568;
    case 0x7F30656Cu: goto label_7F30656C;
    case 0x7F306570u: goto label_7F306570;
    case 0x7F306574u: goto label_7F306574;
    case 0x7F306578u: goto label_7F306578;
    case 0x7F30657Cu: goto label_7F30657C;
    case 0x7F306580u: goto label_7F306580;
    case 0x7F306584u: goto label_7F306584;
    case 0x7F306588u: goto label_7F306588;
    case 0x7F30658Cu: goto label_7F30658C;
    case 0x7F306590u: goto label_7F306590;
    case 0x7F306594u: goto label_7F306594;
    case 0x7F306598u: goto label_7F306598;
    case 0x7F30659Cu: goto label_7F30659C;
    case 0x7F3065A0u: goto label_7F3065A0;
    case 0x7F3065A4u: goto label_7F3065A4;
    case 0x7F3065A8u: goto label_7F3065A8;
    case 0x7F3065ACu: goto label_7F3065AC;
    case 0x7F3065B0u: goto label_7F3065B0;
    case 0x7F3065B4u: goto label_7F3065B4;
    case 0x7F3065B8u: goto label_7F3065B8;
    case 0x7F3065BCu: goto label_7F3065BC;
    case 0x7F3065C0u: goto label_7F3065C0;
    case 0x7F3065C4u: goto label_7F3065C4;
    case 0x7F3065C8u: goto label_7F3065C8;
    case 0x7F3065CCu: goto label_7F3065CC;
    case 0x7F3065D0u: goto label_7F3065D0;
    case 0x7F3065D4u: goto label_7F3065D4;
    case 0x7F3065D8u: goto label_7F3065D8;
    case 0x7F3065DCu: goto label_7F3065DC;
    case 0x7F3065E0u: goto label_7F3065E0;
    case 0x7F3065E4u: goto label_7F3065E4;
    case 0x7F3065E8u: goto label_7F3065E8;
    case 0x7F3065ECu: goto label_7F3065EC;
    case 0x7F3065F0u: goto label_7F3065F0;
    case 0x7F3065F4u: goto label_7F3065F4;
    case 0x7F3065F8u: goto label_7F3065F8;
    case 0x7F3065FCu: goto label_7F3065FC;
    case 0x7F306600u: goto label_7F306600;
    case 0x7F306604u: goto label_7F306604;
    case 0x7F306608u: goto label_7F306608;
    case 0x7F30660Cu: goto label_7F30660C;
    case 0x7F306610u: goto label_7F306610;
    case 0x7F306614u: goto label_7F306614;
    case 0x7F306618u: goto label_7F306618;
    case 0x7F30661Cu: goto label_7F30661C;
    case 0x7F306620u: goto label_7F306620;
    case 0x7F306624u: goto label_7F306624;
    case 0x7F306628u: goto label_7F306628;
    case 0x7F30662Cu: goto label_7F30662C;
    case 0x7F306630u: goto label_7F306630;
    case 0x7F306634u: goto label_7F306634;
    case 0x7F306638u: goto label_7F306638;
    case 0x7F30663Cu: goto label_7F30663C;
    case 0x7F306640u: goto label_7F306640;
    case 0x7F306644u: goto label_7F306644;
    case 0x7F306648u: goto label_7F306648;
    case 0x7F30664Cu: goto label_7F30664C;
    case 0x7F306650u: goto label_7F306650;
    case 0x7F306654u: goto label_7F306654;
    case 0x7F306658u: goto label_7F306658;
    case 0x7F30665Cu: goto label_7F30665C;
    case 0x7F306660u: goto label_7F306660;
    case 0x7F306664u: goto label_7F306664;
    case 0x7F306668u: goto label_7F306668;
    case 0x7F30666Cu: goto label_7F30666C;
    case 0x7F306670u: goto label_7F306670;
    case 0x7F306674u: goto label_7F306674;
    case 0x7F306678u: goto label_7F306678;
    case 0x7F30667Cu: goto label_7F30667C;
    case 0x7F306680u: goto label_7F306680;
    case 0x7F306684u: goto label_7F306684;
    case 0x7F306688u: goto label_7F306688;
    case 0x7F30668Cu: goto label_7F30668C;
    case 0x7F306690u: goto label_7F306690;
    case 0x7F306694u: goto label_7F306694;
    case 0x7F306698u: goto label_7F306698;
    case 0x7F30669Cu: goto label_7F30669C;
    case 0x7F3066A0u: goto label_7F3066A0;
    case 0x7F3066A4u: goto label_7F3066A4;
    case 0x7F3066A8u: goto label_7F3066A8;
    case 0x7F3066ACu: goto label_7F3066AC;
    case 0x7F3066B0u: goto label_7F3066B0;
    case 0x7F3066B4u: goto label_7F3066B4;
    case 0x7F3066B8u: goto label_7F3066B8;
    case 0x7F3066BCu: goto label_7F3066BC;
    case 0x7F3066C0u: goto label_7F3066C0;
    case 0x7F3066C4u: goto label_7F3066C4;
    case 0x7F3066C8u: goto label_7F3066C8;
    case 0x7F3066CCu: goto label_7F3066CC;
    case 0x7F3066D0u: goto label_7F3066D0;
    case 0x7F3066D4u: goto label_7F3066D4;
    case 0x7F3066D8u: goto label_7F3066D8;
    case 0x7F3066DCu: goto label_7F3066DC;
    case 0x7F3066E0u: goto label_7F3066E0;
    case 0x7F3066E4u: goto label_7F3066E4;
    case 0x7F3066E8u: goto label_7F3066E8;
    case 0x7F3066ECu: goto label_7F3066EC;
    case 0x7F3066F0u: goto label_7F3066F0;
    case 0x7F3066F4u: goto label_7F3066F4;
    case 0x7F3066F8u: goto label_7F3066F8;
    case 0x7F3066FCu: goto label_7F3066FC;
    case 0x7F306700u: goto label_7F306700;
    case 0x7F306704u: goto label_7F306704;
    case 0x7F306708u: goto label_7F306708;
    case 0x7F30670Cu: goto label_7F30670C;
    case 0x7F306710u: goto label_7F306710;
    case 0x7F306714u: goto label_7F306714;
    case 0x7F306718u: goto label_7F306718;
    case 0x7F30671Cu: goto label_7F30671C;
    case 0x7F306720u: goto label_7F306720;
    case 0x7F306724u: goto label_7F306724;
    case 0x7F306728u: goto label_7F306728;
    case 0x7F30672Cu: goto label_7F30672C;
    case 0x7F306730u: goto label_7F306730;
    case 0x7F306734u: goto label_7F306734;
    case 0x7F306738u: goto label_7F306738;
    case 0x7F30673Cu: goto label_7F30673C;
    case 0x7F306740u: goto label_7F306740;
    case 0x7F306744u: goto label_7F306744;
    case 0x7F306748u: goto label_7F306748;
    case 0x7F30674Cu: goto label_7F30674C;
    case 0x7F306750u: goto label_7F306750;
    case 0x7F306754u: goto label_7F306754;
    case 0x7F306758u: goto label_7F306758;
    case 0x7F30675Cu: goto label_7F30675C;
    case 0x7F306760u: goto label_7F306760;
    case 0x7F306764u: goto label_7F306764;
    case 0x7F306768u: goto label_7F306768;
    case 0x7F30676Cu: goto label_7F30676C;
    case 0x7F306770u: goto label_7F306770;
    case 0x7F306774u: goto label_7F306774;
    case 0x7F306778u: goto label_7F306778;
    case 0x7F30677Cu: goto label_7F30677C;
    case 0x7F306780u: goto label_7F306780;
    case 0x7F306784u: goto label_7F306784;
    case 0x7F306788u: goto label_7F306788;
    case 0x7F30678Cu: goto label_7F30678C;
    case 0x7F306790u: goto label_7F306790;
    case 0x7F306794u: goto label_7F306794;
    case 0x7F306798u: goto label_7F306798;
    case 0x7F30679Cu: goto label_7F30679C;
    case 0x7F3067A0u: goto label_7F3067A0;
    case 0x7F3067A4u: goto label_7F3067A4;
    case 0x7F3067A8u: goto label_7F3067A8;
    case 0x7F3067ACu: goto label_7F3067AC;
    case 0x7F3067B0u: goto label_7F3067B0;
    case 0x7F3067B4u: goto label_7F3067B4;
    case 0x7F3067B8u: goto label_7F3067B8;
    case 0x7F3067BCu: goto label_7F3067BC;
    case 0x7F3067C0u: goto label_7F3067C0;
    case 0x7F3067C4u: goto label_7F3067C4;
    case 0x7F3067C8u: goto label_7F3067C8;
    case 0x7F3067CCu: goto label_7F3067CC;
    case 0x7F3067D0u: goto label_7F3067D0;
    case 0x7F3067D4u: goto label_7F3067D4;
    case 0x7F3067D8u: goto label_7F3067D8;
    case 0x7F3067DCu: goto label_7F3067DC;
    case 0x7F3067E0u: goto label_7F3067E0;
    case 0x7F3067E4u: goto label_7F3067E4;
    case 0x7F3067E8u: goto label_7F3067E8;
    case 0x7F3067ECu: goto label_7F3067EC;
    case 0x7F3067F0u: goto label_7F3067F0;
    case 0x7F3067F4u: goto label_7F3067F4;
    case 0x7F3067F8u: goto label_7F3067F8;
    case 0x7F3067FCu: goto label_7F3067FC;
    case 0x7F306800u: goto label_7F306800;
    case 0x7F306804u: goto label_7F306804;
    case 0x7F306808u: goto label_7F306808;
    case 0x7F30680Cu: goto label_7F30680C;
    case 0x7F306810u: goto label_7F306810;
    case 0x7F306814u: goto label_7F306814;
    case 0x7F306818u: goto label_7F306818;
    case 0x7F30681Cu: goto label_7F30681C;
    case 0x7F306820u: goto label_7F306820;
    case 0x7F306824u: goto label_7F306824;
    case 0x7F306828u: goto label_7F306828;
    case 0x7F30682Cu: goto label_7F30682C;
    case 0x7F306830u: goto label_7F306830;
    case 0x7F306834u: goto label_7F306834;
    case 0x7F306838u: goto label_7F306838;
    case 0x7F30683Cu: goto label_7F30683C;
    case 0x7F306840u: goto label_7F306840;
    case 0x7F306844u: goto label_7F306844;
    case 0x7F306848u: goto label_7F306848;
    case 0x7F30684Cu: goto label_7F30684C;
    case 0x7F306850u: goto label_7F306850;
    case 0x7F306854u: goto label_7F306854;
    case 0x7F306858u: goto label_7F306858;
    case 0x7F30685Cu: goto label_7F30685C;
    case 0x7F306860u: goto label_7F306860;
    case 0x7F306864u: goto label_7F306864;
    case 0x7F306868u: goto label_7F306868;
    case 0x7F30686Cu: goto label_7F30686C;
    case 0x7F306870u: goto label_7F306870;
    case 0x7F306874u: goto label_7F306874;
    case 0x7F306878u: goto label_7F306878;
    case 0x7F30687Cu: goto label_7F30687C;
    case 0x7F306880u: goto label_7F306880;
    case 0x7F306884u: goto label_7F306884;
    case 0x7F306888u: goto label_7F306888;
    case 0x7F30688Cu: goto label_7F30688C;
    case 0x7F306890u: goto label_7F306890;
    case 0x7F306894u: goto label_7F306894;
    case 0x7F306898u: goto label_7F306898;
    case 0x7F30689Cu: goto label_7F30689C;
    case 0x7F3068A0u: goto label_7F3068A0;
    case 0x7F3068A4u: goto label_7F3068A4;
    case 0x7F3068A8u: goto label_7F3068A8;
    case 0x7F3068ACu: goto label_7F3068AC;
    case 0x7F3068B0u: goto label_7F3068B0;
    case 0x7F3068B4u: goto label_7F3068B4;
    case 0x7F3068B8u: goto label_7F3068B8;
    case 0x7F3068BCu: goto label_7F3068BC;
    case 0x7F3068C0u: goto label_7F3068C0;
    case 0x7F3068C4u: goto label_7F3068C4;
    case 0x7F3068C8u: goto label_7F3068C8;
    case 0x7F3068CCu: goto label_7F3068CC;
    case 0x7F3068D0u: goto label_7F3068D0;
    case 0x7F3068D4u: goto label_7F3068D4;
    case 0x7F3068D8u: goto label_7F3068D8;
    case 0x7F3068DCu: goto label_7F3068DC;
    case 0x7F3068E0u: goto label_7F3068E0;
    case 0x7F3068E4u: goto label_7F3068E4;
    case 0x7F3068E8u: goto label_7F3068E8;
    case 0x7F3068ECu: goto label_7F3068EC;
    case 0x7F3068F0u: goto label_7F3068F0;
    case 0x7F3068F4u: goto label_7F3068F4;
    case 0x7F3068F8u: goto label_7F3068F8;
    case 0x7F3068FCu: goto label_7F3068FC;
    case 0x7F306900u: goto label_7F306900;
    case 0x7F306904u: goto label_7F306904;
    case 0x7F306908u: goto label_7F306908;
    case 0x7F30690Cu: goto label_7F30690C;
    case 0x7F306910u: goto label_7F306910;
    case 0x7F306914u: goto label_7F306914;
    case 0x7F306918u: goto label_7F306918;
    case 0x7F30691Cu: goto label_7F30691C;
    case 0x7F306920u: goto label_7F306920;
    case 0x7F306924u: goto label_7F306924;
    case 0x7F306928u: goto label_7F306928;
    case 0x7F30692Cu: goto label_7F30692C;
    case 0x7F306930u: goto label_7F306930;
    case 0x7F306934u: goto label_7F306934;
    case 0x7F306938u: goto label_7F306938;
    case 0x7F30693Cu: goto label_7F30693C;
    case 0x7F306940u: goto label_7F306940;
    case 0x7F306944u: goto label_7F306944;
    case 0x7F306948u: goto label_7F306948;
    case 0x7F30694Cu: goto label_7F30694C;
    case 0x7F306950u: goto label_7F306950;
    case 0x7F306954u: goto label_7F306954;
    case 0x7F306958u: goto label_7F306958;
    case 0x7F30695Cu: goto label_7F30695C;
    case 0x7F306960u: goto label_7F306960;
    case 0x7F306964u: goto label_7F306964;
    case 0x7F306968u: goto label_7F306968;
    case 0x7F30696Cu: goto label_7F30696C;
    case 0x7F306970u: goto label_7F306970;
    case 0x7F306974u: goto label_7F306974;
    case 0x7F306978u: goto label_7F306978;
    case 0x7F30697Cu: goto label_7F30697C;
    case 0x7F306980u: goto label_7F306980;
    case 0x7F306984u: goto label_7F306984;
    case 0x7F306988u: goto label_7F306988;
    case 0x7F30698Cu: goto label_7F30698C;
    case 0x7F306990u: goto label_7F306990;
    case 0x7F306994u: goto label_7F306994;
    case 0x7F306998u: goto label_7F306998;
    case 0x7F30699Cu: goto label_7F30699C;
    case 0x7F3069A0u: goto label_7F3069A0;
    case 0x7F3069A4u: goto label_7F3069A4;
    case 0x7F3069A8u: goto label_7F3069A8;
    case 0x7F3069ACu: goto label_7F3069AC;
    case 0x7F3069B0u: goto label_7F3069B0;
    case 0x7F3069B4u: goto label_7F3069B4;
    case 0x7F3069B8u: goto label_7F3069B8;
    case 0x7F3069BCu: goto label_7F3069BC;
    case 0x7F3069C0u: goto label_7F3069C0;
    case 0x7F3069C4u: goto label_7F3069C4;
    case 0x7F3069C8u: goto label_7F3069C8;
    case 0x7F3069CCu: goto label_7F3069CC;
    case 0x7F3069D0u: goto label_7F3069D0;
    case 0x7F3069D4u: goto label_7F3069D4;
    case 0x7F3069D8u: goto label_7F3069D8;
    case 0x7F3069DCu: goto label_7F3069DC;
    case 0x7F3069E0u: goto label_7F3069E0;
    case 0x7F3069E4u: goto label_7F3069E4;
    case 0x7F3069E8u: goto label_7F3069E8;
    case 0x7F3069ECu: goto label_7F3069EC;
    case 0x7F3069F0u: goto label_7F3069F0;
    case 0x7F3069F4u: goto label_7F3069F4;
    case 0x7F3069F8u: goto label_7F3069F8;
    case 0x7F3069FCu: goto label_7F3069FC;
    case 0x7F306A00u: goto label_7F306A00;
    case 0x7F306A04u: goto label_7F306A04;
    case 0x7F306A08u: goto label_7F306A08;
    case 0x7F306A0Cu: goto label_7F306A0C;
    case 0x7F306A10u: goto label_7F306A10;
    case 0x7F306A14u: goto label_7F306A14;
    case 0x7F306A18u: goto label_7F306A18;
    case 0x7F306A1Cu: goto label_7F306A1C;
    case 0x7F306A20u: goto label_7F306A20;
    case 0x7F306A24u: goto label_7F306A24;
    case 0x7F306A28u: goto label_7F306A28;
    case 0x7F306A2Cu: goto label_7F306A2C;
    case 0x7F306A30u: goto label_7F306A30;
    case 0x7F306A34u: goto label_7F306A34;
    case 0x7F306A38u: goto label_7F306A38;
    case 0x7F306A3Cu: goto label_7F306A3C;
    case 0x7F306A40u: goto label_7F306A40;
    case 0x7F306A44u: goto label_7F306A44;
    case 0x7F306A48u: goto label_7F306A48;
    case 0x7F306A4Cu: goto label_7F306A4C;
    case 0x7F306A50u: goto label_7F306A50;
    case 0x7F306A54u: goto label_7F306A54;
    case 0x7F306A58u: goto label_7F306A58;
    case 0x7F306A5Cu: goto label_7F306A5C;
    case 0x7F306A60u: goto label_7F306A60;
    case 0x7F306A64u: goto label_7F306A64;
    case 0x7F306A68u: goto label_7F306A68;
    case 0x7F306A6Cu: goto label_7F306A6C;
    case 0x7F306A70u: goto label_7F306A70;
    case 0x7F306A74u: goto label_7F306A74;
    case 0x7F306A78u: goto label_7F306A78;
    case 0x7F306A7Cu: goto label_7F306A7C;
    case 0x7F306A80u: goto label_7F306A80;
    case 0x7F306A84u: goto label_7F306A84;
    case 0x7F306A88u: goto label_7F306A88;
    case 0x7F306A8Cu: goto label_7F306A8C;
    case 0x7F306A90u: goto label_7F306A90;
    case 0x7F306A94u: goto label_7F306A94;
    case 0x7F306A98u: goto label_7F306A98;
    case 0x7F306A9Cu: goto label_7F306A9C;
    case 0x7F306AA0u: goto label_7F306AA0;
    case 0x7F306AA4u: goto label_7F306AA4;
    case 0x7F306AA8u: goto label_7F306AA8;
    case 0x7F306AACu: goto label_7F306AAC;
    case 0x7F306AB0u: goto label_7F306AB0;
    case 0x7F306AB4u: goto label_7F306AB4;
    case 0x7F306AB8u: goto label_7F306AB8;
    case 0x7F306ABCu: goto label_7F306ABC;
    case 0x7F306AC0u: goto label_7F306AC0;
    case 0x7F306AC4u: goto label_7F306AC4;
    case 0x7F306AC8u: goto label_7F306AC8;
    case 0x7F306ACCu: goto label_7F306ACC;
    case 0x7F306AD0u: goto label_7F306AD0;
    case 0x7F306AD4u: goto label_7F306AD4;
    case 0x7F306AD8u: goto label_7F306AD8;
    case 0x7F306ADCu: goto label_7F306ADC;
    case 0x7F306AE0u: goto label_7F306AE0;
    case 0x7F306AE4u: goto label_7F306AE4;
    case 0x7F306AE8u: goto label_7F306AE8;
    case 0x7F306AECu: goto label_7F306AEC;
    case 0x7F306AF0u: goto label_7F306AF0;
    case 0x7F306AF4u: goto label_7F306AF4;
    case 0x7F306AF8u: goto label_7F306AF8;
    case 0x7F306AFCu: goto label_7F306AFC;
    case 0x7F306B00u: goto label_7F306B00;
    case 0x7F306B04u: goto label_7F306B04;
    case 0x7F306B08u: goto label_7F306B08;
    case 0x7F306B0Cu: goto label_7F306B0C;
    case 0x7F306B10u: goto label_7F306B10;
    case 0x7F306B14u: goto label_7F306B14;
    case 0x7F306B18u: goto label_7F306B18;
    case 0x7F306B1Cu: goto label_7F306B1C;
    case 0x7F306B20u: goto label_7F306B20;
    case 0x7F306B24u: goto label_7F306B24;
    case 0x7F306B28u: goto label_7F306B28;
    case 0x7F306B2Cu: goto label_7F306B2C;
    case 0x7F306B30u: goto label_7F306B30;
    case 0x7F306B34u: goto label_7F306B34;
    case 0x7F306B38u: goto label_7F306B38;
    case 0x7F306B3Cu: goto label_7F306B3C;
    case 0x7F306B40u: goto label_7F306B40;
    case 0x7F306B44u: goto label_7F306B44;
    case 0x7F306B48u: goto label_7F306B48;
    case 0x7F306B4Cu: goto label_7F306B4C;
    case 0x7F306B50u: goto label_7F306B50;
    case 0x7F306B54u: goto label_7F306B54;
    case 0x7F306B58u: goto label_7F306B58;
    case 0x7F306B5Cu: goto label_7F306B5C;
    case 0x7F306B60u: goto label_7F306B60;
    case 0x7F306B64u: goto label_7F306B64;
    case 0x7F306B68u: goto label_7F306B68;
    case 0x7F306B6Cu: goto label_7F306B6C;
    case 0x7F306B70u: goto label_7F306B70;
    case 0x7F306B74u: goto label_7F306B74;
    case 0x7F306B78u: goto label_7F306B78;
    case 0x7F306B7Cu: goto label_7F306B7C;
    case 0x7F306B80u: goto label_7F306B80;
    case 0x7F306B84u: goto label_7F306B84;
    case 0x7F306B88u: goto label_7F306B88;
    case 0x7F306B8Cu: goto label_7F306B8C;
    case 0x7F306B90u: goto label_7F306B90;
    case 0x7F306B94u: goto label_7F306B94;
    case 0x7F306B98u: goto label_7F306B98;
    case 0x7F306B9Cu: goto label_7F306B9C;
    case 0x7F306BA0u: goto label_7F306BA0;
    case 0x7F306BA4u: goto label_7F306BA4;
    case 0x7F306BA8u: goto label_7F306BA8;
    case 0x7F306BACu: goto label_7F306BAC;
    case 0x7F306BB0u: goto label_7F306BB0;
    case 0x7F306BB4u: goto label_7F306BB4;
    case 0x7F306BB8u: goto label_7F306BB8;
    case 0x7F306BBCu: goto label_7F306BBC;
    case 0x7F306BC0u: goto label_7F306BC0;
    case 0x7F306BC4u: goto label_7F306BC4;
    case 0x7F306BC8u: goto label_7F306BC8;
    case 0x7F306BCCu: goto label_7F306BCC;
    case 0x7F306BD0u: goto label_7F306BD0;
    case 0x7F306BD4u: goto label_7F306BD4;
    case 0x7F306BD8u: goto label_7F306BD8;
    case 0x7F306BDCu: goto label_7F306BDC;
    case 0x7F306BE0u: goto label_7F306BE0;
    case 0x7F306BE4u: goto label_7F306BE4;
    case 0x7F306BE8u: goto label_7F306BE8;
    case 0x7F306BECu: goto label_7F306BEC;
    case 0x7F306BF0u: goto label_7F306BF0;
    case 0x7F306BF4u: goto label_7F306BF4;
    case 0x7F306BF8u: goto label_7F306BF8;
    case 0x7F306BFCu: goto label_7F306BFC;
    case 0x7F306C00u: goto label_7F306C00;
    case 0x7F306C04u: goto label_7F306C04;
    case 0x7F306C08u: goto label_7F306C08;
    case 0x7F306C0Cu: goto label_7F306C0C;
    case 0x7F306C10u: goto label_7F306C10;
    case 0x7F306C14u: goto label_7F306C14;
    case 0x7F306C18u: goto label_7F306C18;
    case 0x7F306C1Cu: goto label_7F306C1C;
    case 0x7F306C20u: goto label_7F306C20;
    case 0x7F306C24u: goto label_7F306C24;
    case 0x7F306C28u: goto label_7F306C28;
    case 0x7F306C2Cu: goto label_7F306C2C;
    case 0x7F306C30u: goto label_7F306C30;
    case 0x7F306C34u: goto label_7F306C34;
    case 0x7F306C38u: goto label_7F306C38;
    case 0x7F306C3Cu: goto label_7F306C3C;
    case 0x7F306C40u: goto label_7F306C40;
    case 0x7F306C44u: goto label_7F306C44;
    case 0x7F306C48u: goto label_7F306C48;
    case 0x7F306C4Cu: goto label_7F306C4C;
    case 0x7F306C50u: goto label_7F306C50;
    case 0x7F306C54u: goto label_7F306C54;
    case 0x7F306C58u: goto label_7F306C58;
    case 0x7F306C5Cu: goto label_7F306C5C;
    case 0x7F306C60u: goto label_7F306C60;
    case 0x7F306C64u: goto label_7F306C64;
    case 0x7F306C68u: goto label_7F306C68;
    case 0x7F306C6Cu: goto label_7F306C6C;
    case 0x7F306C70u: goto label_7F306C70;
    case 0x7F306C74u: goto label_7F306C74;
    case 0x7F306C78u: goto label_7F306C78;
    case 0x7F306C7Cu: goto label_7F306C7C;
    case 0x7F306C80u: goto label_7F306C80;
    case 0x7F306C84u: goto label_7F306C84;
    case 0x7F306C88u: goto label_7F306C88;
    case 0x7F306C8Cu: goto label_7F306C8C;
    case 0x7F306C90u: goto label_7F306C90;
    case 0x7F306C94u: goto label_7F306C94;
    case 0x7F306C98u: goto label_7F306C98;
    case 0x7F306C9Cu: goto label_7F306C9C;
    case 0x7F306CA0u: goto label_7F306CA0;
    case 0x7F306CA4u: goto label_7F306CA4;
    case 0x7F306CA8u: goto label_7F306CA8;
    case 0x7F306CACu: goto label_7F306CAC;
    case 0x7F306CB0u: goto label_7F306CB0;
    case 0x7F306CB4u: goto label_7F306CB4;
    case 0x7F306CB8u: goto label_7F306CB8;
    case 0x7F306CBCu: goto label_7F306CBC;
    case 0x7F306CC0u: goto label_7F306CC0;
    case 0x7F306CC4u: goto label_7F306CC4;
    case 0x7F306CC8u: goto label_7F306CC8;
    case 0x7F306CCCu: goto label_7F306CCC;
    case 0x7F306CD0u: goto label_7F306CD0;
    case 0x7F306CD4u: goto label_7F306CD4;
    case 0x7F306CD8u: goto label_7F306CD8;
    case 0x7F306CDCu: goto label_7F306CDC;
    case 0x7F306CE0u: goto label_7F306CE0;
    case 0x7F306CE4u: goto label_7F306CE4;
    case 0x7F306CE8u: goto label_7F306CE8;
    case 0x7F306CECu: goto label_7F306CEC;
    case 0x7F306CF0u: goto label_7F306CF0;
    case 0x7F306CF4u: goto label_7F306CF4;
    case 0x7F306CF8u: goto label_7F306CF8;
    case 0x7F306CFCu: goto label_7F306CFC;
    case 0x7F306D00u: goto label_7F306D00;
    case 0x7F306D04u: goto label_7F306D04;
    case 0x7F306D08u: goto label_7F306D08;
    case 0x7F306D0Cu: goto label_7F306D0C;
    case 0x7F306D10u: goto label_7F306D10;
    case 0x7F306D14u: goto label_7F306D14;
    case 0x7F306D18u: goto label_7F306D18;
    case 0x7F306D1Cu: goto label_7F306D1C;
    case 0x7F306D20u: goto label_7F306D20;
    case 0x7F306D24u: goto label_7F306D24;
    case 0x7F306D28u: goto label_7F306D28;
    case 0x7F306D2Cu: goto label_7F306D2C;
    case 0x7F306D30u: goto label_7F306D30;
    case 0x7F306D34u: goto label_7F306D34;
    case 0x7F306D38u: goto label_7F306D38;
    case 0x7F306D3Cu: goto label_7F306D3C;
    case 0x7F306D40u: goto label_7F306D40;
    case 0x7F306D44u: goto label_7F306D44;
    case 0x7F306D48u: goto label_7F306D48;
    case 0x7F306D4Cu: goto label_7F306D4C;
    case 0x7F306D50u: goto label_7F306D50;
    case 0x7F306D54u: goto label_7F306D54;
    case 0x7F306D58u: goto label_7F306D58;
    case 0x7F306D5Cu: goto label_7F306D5C;
    case 0x7F306D60u: goto label_7F306D60;
    case 0x7F306D64u: goto label_7F306D64;
    case 0x7F306D68u: goto label_7F306D68;
    case 0x7F306D6Cu: goto label_7F306D6C;
    case 0x7F306D70u: goto label_7F306D70;
    case 0x7F306D74u: goto label_7F306D74;
    case 0x7F306D78u: goto label_7F306D78;
    case 0x7F306D7Cu: goto label_7F306D7C;
    case 0x7F306D80u: goto label_7F306D80;
    case 0x7F306D84u: goto label_7F306D84;
    case 0x7F306D88u: goto label_7F306D88;
    case 0x7F306D8Cu: goto label_7F306D8C;
    case 0x7F306D90u: goto label_7F306D90;
    case 0x7F306D94u: goto label_7F306D94;
    case 0x7F306D98u: goto label_7F306D98;
    case 0x7F306D9Cu: goto label_7F306D9C;
    case 0x7F306DA0u: goto label_7F306DA0;
    case 0x7F306DA4u: goto label_7F306DA4;
    case 0x7F306DA8u: goto label_7F306DA8;
    case 0x7F306DACu: goto label_7F306DAC;
    case 0x7F306DB0u: goto label_7F306DB0;
    case 0x7F306DB4u: goto label_7F306DB4;
    case 0x7F306DB8u: goto label_7F306DB8;
    case 0x7F306DBCu: goto label_7F306DBC;
    case 0x7F306DC0u: goto label_7F306DC0;
    case 0x7F306DC4u: goto label_7F306DC4;
    case 0x7F306DC8u: goto label_7F306DC8;
    case 0x7F306DCCu: goto label_7F306DCC;
    case 0x7F306DD0u: goto label_7F306DD0;
    case 0x7F306DD4u: goto label_7F306DD4;
    case 0x7F306DD8u: goto label_7F306DD8;
    case 0x7F306DDCu: goto label_7F306DDC;
    case 0x7F306DE0u: goto label_7F306DE0;
    case 0x7F306DE4u: goto label_7F306DE4;
    case 0x7F306DE8u: goto label_7F306DE8;
    case 0x7F306DECu: goto label_7F306DEC;
    case 0x7F306DF0u: goto label_7F306DF0;
    case 0x7F306DF4u: goto label_7F306DF4;
    case 0x7F306DF8u: goto label_7F306DF8;
    case 0x7F306DFCu: goto label_7F306DFC;
    case 0x7F306E00u: goto label_7F306E00;
    case 0x7F306E04u: goto label_7F306E04;
    case 0x7F306E08u: goto label_7F306E08;
    case 0x7F306E0Cu: goto label_7F306E0C;
    case 0x7F306E10u: goto label_7F306E10;
    case 0x7F306E14u: goto label_7F306E14;
    case 0x7F306E18u: goto label_7F306E18;
    case 0x7F306E1Cu: goto label_7F306E1C;
    case 0x7F306E20u: goto label_7F306E20;
    case 0x7F306E24u: goto label_7F306E24;
    case 0x7F306E28u: goto label_7F306E28;
    case 0x7F306E2Cu: goto label_7F306E2C;
    case 0x7F306E30u: goto label_7F306E30;
    case 0x7F306E34u: goto label_7F306E34;
    case 0x7F306E38u: goto label_7F306E38;
    case 0x7F306E3Cu: goto label_7F306E3C;
    case 0x7F306E40u: goto label_7F306E40;
    case 0x7F306E44u: goto label_7F306E44;
    case 0x7F306E48u: goto label_7F306E48;
    case 0x7F306E4Cu: goto label_7F306E4C;
    case 0x7F306E50u: goto label_7F306E50;
    case 0x7F306E54u: goto label_7F306E54;
    case 0x7F306E58u: goto label_7F306E58;
    case 0x7F306E5Cu: goto label_7F306E5C;
    case 0x7F306E60u: goto label_7F306E60;
    case 0x7F306E64u: goto label_7F306E64;
    case 0x7F306E68u: goto label_7F306E68;
    case 0x7F306E6Cu: goto label_7F306E6C;
    case 0x7F306E70u: goto label_7F306E70;
    case 0x7F306E74u: goto label_7F306E74;
    case 0x7F306E78u: goto label_7F306E78;
    case 0x7F306E7Cu: goto label_7F306E7C;
    case 0x7F306E80u: goto label_7F306E80;
    case 0x7F306E84u: goto label_7F306E84;
    case 0x7F306E88u: goto label_7F306E88;
    case 0x7F306E8Cu: goto label_7F306E8C;
    case 0x7F306E90u: goto label_7F306E90;
    case 0x7F306E94u: goto label_7F306E94;
    case 0x7F306E98u: goto label_7F306E98;
    case 0x7F306E9Cu: goto label_7F306E9C;
    case 0x7F306EA0u: goto label_7F306EA0;
    case 0x7F306EA4u: goto label_7F306EA4;
    case 0x7F306EA8u: goto label_7F306EA8;
    case 0x7F306EACu: goto label_7F306EAC;
    case 0x7F306EB0u: goto label_7F306EB0;
    case 0x7F306EB4u: goto label_7F306EB4;
    case 0x7F306EB8u: goto label_7F306EB8;
    case 0x7F306EBCu: goto label_7F306EBC;
    case 0x7F306EC0u: goto label_7F306EC0;
    case 0x7F306EC4u: goto label_7F306EC4;
    case 0x7F306EC8u: goto label_7F306EC8;
    case 0x7F306ECCu: goto label_7F306ECC;
    case 0x7F306ED0u: goto label_7F306ED0;
    case 0x7F306ED4u: goto label_7F306ED4;
    case 0x7F306ED8u: goto label_7F306ED8;
    case 0x7F306EDCu: goto label_7F306EDC;
    case 0x7F306EE0u: goto label_7F306EE0;
    case 0x7F306EE4u: goto label_7F306EE4;
    case 0x7F306EE8u: goto label_7F306EE8;
    case 0x7F306EECu: goto label_7F306EEC;
    case 0x7F306EF0u: goto label_7F306EF0;
    case 0x7F306EF4u: goto label_7F306EF4;
    case 0x7F306EF8u: goto label_7F306EF8;
    case 0x7F306EFCu: goto label_7F306EFC;
    case 0x7F306F00u: goto label_7F306F00;
    case 0x7F306F04u: goto label_7F306F04;
    case 0x7F306F08u: goto label_7F306F08;
    case 0x7F306F0Cu: goto label_7F306F0C;
    case 0x7F306F10u: goto label_7F306F10;
    case 0x7F306F14u: goto label_7F306F14;
    case 0x7F306F18u: goto label_7F306F18;
    case 0x7F306F1Cu: goto label_7F306F1C;
    case 0x7F306F20u: goto label_7F306F20;
    case 0x7F306F24u: goto label_7F306F24;
    case 0x7F306F28u: goto label_7F306F28;
    case 0x7F306F2Cu: goto label_7F306F2C;
    case 0x7F306F30u: goto label_7F306F30;
    case 0x7F306F34u: goto label_7F306F34;
    case 0x7F306F38u: goto label_7F306F38;
    case 0x7F306F3Cu: goto label_7F306F3C;
    case 0x7F306F40u: goto label_7F306F40;
    case 0x7F306F44u: goto label_7F306F44;
    case 0x7F306F48u: goto label_7F306F48;
    case 0x7F306F4Cu: goto label_7F306F4C;
    case 0x7F306F50u: goto label_7F306F50;
    case 0x7F306F54u: goto label_7F306F54;
    case 0x7F306F58u: goto label_7F306F58;
    case 0x7F306F5Cu: goto label_7F306F5C;
    case 0x7F306F60u: goto label_7F306F60;
    case 0x7F306F64u: goto label_7F306F64;
    case 0x7F306F68u: goto label_7F306F68;
    case 0x7F306F6Cu: goto label_7F306F6C;
    case 0x7F306F70u: goto label_7F306F70;
    case 0x7F306F74u: goto label_7F306F74;
    case 0x7F306F78u: goto label_7F306F78;
    case 0x7F306F7Cu: goto label_7F306F7C;
    case 0x7F306F80u: goto label_7F306F80;
    case 0x7F306F84u: goto label_7F306F84;
    case 0x7F306F88u: goto label_7F306F88;
    case 0x7F306F8Cu: goto label_7F306F8C;
    case 0x7F306F90u: goto label_7F306F90;
    case 0x7F306F94u: goto label_7F306F94;
    case 0x7F306F98u: goto label_7F306F98;
    case 0x7F306F9Cu: goto label_7F306F9C;
    case 0x7F306FA0u: goto label_7F306FA0;
    case 0x7F306FA4u: goto label_7F306FA4;
    case 0x7F306FA8u: goto label_7F306FA8;
    case 0x7F306FACu: goto label_7F306FAC;
    case 0x7F306FB0u: goto label_7F306FB0;
    case 0x7F306FB4u: goto label_7F306FB4;
    case 0x7F306FB8u: goto label_7F306FB8;
    case 0x7F306FBCu: goto label_7F306FBC;
    case 0x7F306FC0u: goto label_7F306FC0;
    case 0x7F306FC4u: goto label_7F306FC4;
    case 0x7F306FC8u: goto label_7F306FC8;
    case 0x7F306FCCu: goto label_7F306FCC;
    case 0x7F306FD0u: goto label_7F306FD0;
    case 0x7F306FD4u: goto label_7F306FD4;
    case 0x7F306FD8u: goto label_7F306FD8;
    case 0x7F306FDCu: goto label_7F306FDC;
    case 0x7F306FE0u: goto label_7F306FE0;
    case 0x7F306FE4u: goto label_7F306FE4;
    case 0x7F306FE8u: goto label_7F306FE8;
    case 0x7F306FECu: goto label_7F306FEC;
    case 0x7F306FF0u: goto label_7F306FF0;
    case 0x7F306FF4u: goto label_7F306FF4;
    case 0x7F306FF8u: goto label_7F306FF8;
    case 0x7F306FFCu: goto label_7F306FFC;
    case 0x7F307000u: goto label_7F307000;
    case 0x7F307004u: goto label_7F307004;
    case 0x7F307008u: goto label_7F307008;
    case 0x7F30700Cu: goto label_7F30700C;
    case 0x7F307010u: goto label_7F307010;
    case 0x7F307014u: goto label_7F307014;
    case 0x7F307018u: goto label_7F307018;
    case 0x7F30701Cu: goto label_7F30701C;
    case 0x7F307020u: goto label_7F307020;
    case 0x7F307024u: goto label_7F307024;
    case 0x7F307028u: goto label_7F307028;
    case 0x7F30702Cu: goto label_7F30702C;
    case 0x7F307030u: goto label_7F307030;
    case 0x7F307034u: goto label_7F307034;
    case 0x7F307038u: goto label_7F307038;
    case 0x7F30703Cu: goto label_7F30703C;
    case 0x7F307040u: goto label_7F307040;
    case 0x7F307044u: goto label_7F307044;
    case 0x7F307048u: goto label_7F307048;
    case 0x7F30704Cu: goto label_7F30704C;
    case 0x7F307050u: goto label_7F307050;
    case 0x7F307054u: goto label_7F307054;
    case 0x7F307058u: goto label_7F307058;
    case 0x7F30705Cu: goto label_7F30705C;
    case 0x7F307060u: goto label_7F307060;
    case 0x7F307064u: goto label_7F307064;
    case 0x7F307068u: goto label_7F307068;
    case 0x7F30706Cu: goto label_7F30706C;
    case 0x7F307070u: goto label_7F307070;
    case 0x7F307074u: goto label_7F307074;
    case 0x7F307078u: goto label_7F307078;
    case 0x7F30707Cu: goto label_7F30707C;
    case 0x7F307080u: goto label_7F307080;
    case 0x7F307084u: goto label_7F307084;
    case 0x7F307088u: goto label_7F307088;
    case 0x7F30708Cu: goto label_7F30708C;
    case 0x7F307090u: goto label_7F307090;
    case 0x7F307094u: goto label_7F307094;
    case 0x7F307098u: goto label_7F307098;
    case 0x7F30709Cu: goto label_7F30709C;
    case 0x7F3070A0u: goto label_7F3070A0;
    case 0x7F3070A4u: goto label_7F3070A4;
    case 0x7F3070A8u: goto label_7F3070A8;
    case 0x7F3070ACu: goto label_7F3070AC;
    case 0x7F3070B0u: goto label_7F3070B0;
    case 0x7F3070B4u: goto label_7F3070B4;
    case 0x7F3070B8u: goto label_7F3070B8;
    case 0x7F3070BCu: goto label_7F3070BC;
    case 0x7F3070C0u: goto label_7F3070C0;
    case 0x7F3070C4u: goto label_7F3070C4;
    case 0x7F3070C8u: goto label_7F3070C8;
    case 0x7F3070CCu: goto label_7F3070CC;
    case 0x7F3070D0u: goto label_7F3070D0;
    case 0x7F3070D4u: goto label_7F3070D4;
    case 0x7F3070D8u: goto label_7F3070D8;
    case 0x7F3070DCu: goto label_7F3070DC;
    case 0x7F3070E0u: goto label_7F3070E0;
    case 0x7F3070E4u: goto label_7F3070E4;
    case 0x7F3070E8u: goto label_7F3070E8;
    case 0x7F3070ECu: goto label_7F3070EC;
    case 0x7F3070F0u: goto label_7F3070F0;
    case 0x7F3070F4u: goto label_7F3070F4;
    case 0x7F3070F8u: goto label_7F3070F8;
    case 0x7F3070FCu: goto label_7F3070FC;
    case 0x7F307100u: goto label_7F307100;
    case 0x7F307104u: goto label_7F307104;
    case 0x7F307108u: goto label_7F307108;
    case 0x7F30710Cu: goto label_7F30710C;
    case 0x7F307110u: goto label_7F307110;
    case 0x7F307114u: goto label_7F307114;
    case 0x7F307118u: goto label_7F307118;
    case 0x7F30711Cu: goto label_7F30711C;
    case 0x7F307120u: goto label_7F307120;
    case 0x7F307124u: goto label_7F307124;
    case 0x7F307128u: goto label_7F307128;
    case 0x7F30712Cu: goto label_7F30712C;
    case 0x7F307130u: goto label_7F307130;
    case 0x7F307134u: goto label_7F307134;
    case 0x7F307138u: goto label_7F307138;
    case 0x7F30713Cu: goto label_7F30713C;
    case 0x7F307140u: goto label_7F307140;
    case 0x7F307144u: goto label_7F307144;
    case 0x7F307148u: goto label_7F307148;
    case 0x7F30714Cu: goto label_7F30714C;
    case 0x7F307150u: goto label_7F307150;
    case 0x7F307154u: goto label_7F307154;
    case 0x7F307158u: goto label_7F307158;
    case 0x7F30715Cu: goto label_7F30715C;
    case 0x7F307160u: goto label_7F307160;
    case 0x7F307164u: goto label_7F307164;
    case 0x7F307168u: goto label_7F307168;
    case 0x7F30716Cu: goto label_7F30716C;
    case 0x7F307170u: goto label_7F307170;
    case 0x7F307174u: goto label_7F307174;
    case 0x7F307178u: goto label_7F307178;
    case 0x7F30717Cu: goto label_7F30717C;
    case 0x7F307180u: goto label_7F307180;
    case 0x7F307184u: goto label_7F307184;
    case 0x7F307188u: goto label_7F307188;
    case 0x7F30718Cu: goto label_7F30718C;
    case 0x7F307190u: goto label_7F307190;
    case 0x7F307194u: goto label_7F307194;
    case 0x7F307198u: goto label_7F307198;
    case 0x7F30719Cu: goto label_7F30719C;
    case 0x7F3071A0u: goto label_7F3071A0;
    case 0x7F3071A4u: goto label_7F3071A4;
    case 0x7F3071A8u: goto label_7F3071A8;
    case 0x7F3071ACu: goto label_7F3071AC;
    case 0x7F3071B0u: goto label_7F3071B0;
    case 0x7F3071B4u: goto label_7F3071B4;
    case 0x7F3071B8u: goto label_7F3071B8;
    case 0x7F3071BCu: goto label_7F3071BC;
    case 0x7F3071C0u: goto label_7F3071C0;
    case 0x7F3071C4u: goto label_7F3071C4;
    case 0x7F3071C8u: goto label_7F3071C8;
    case 0x7F3071CCu: goto label_7F3071CC;
    case 0x7F3071D0u: goto label_7F3071D0;
    case 0x7F3071D4u: goto label_7F3071D4;
    case 0x7F3071D8u: goto label_7F3071D8;
    case 0x7F3071DCu: goto label_7F3071DC;
    case 0x7F3071E0u: goto label_7F3071E0;
    case 0x7F3071E4u: goto label_7F3071E4;
    case 0x7F3071E8u: goto label_7F3071E8;
    case 0x7F3071ECu: goto label_7F3071EC;
    case 0x7F3071F0u: goto label_7F3071F0;
    case 0x7F3071F4u: goto label_7F3071F4;
    case 0x7F3071F8u: goto label_7F3071F8;
    case 0x7F3071FCu: goto label_7F3071FC;
    case 0x7F307200u: goto label_7F307200;
    case 0x7F307204u: goto label_7F307204;
    case 0x7F307208u: goto label_7F307208;
    case 0x7F30720Cu: goto label_7F30720C;
    case 0x7F307210u: goto label_7F307210;
    case 0x7F307214u: goto label_7F307214;
    case 0x7F307218u: goto label_7F307218;
    case 0x7F30721Cu: goto label_7F30721C;
    case 0x7F307220u: goto label_7F307220;
    case 0x7F307224u: goto label_7F307224;
    case 0x7F307228u: goto label_7F307228;
    case 0x7F30722Cu: goto label_7F30722C;
    case 0x7F307230u: goto label_7F307230;
    case 0x7F307234u: goto label_7F307234;
    case 0x7F307238u: goto label_7F307238;
    case 0x7F30723Cu: goto label_7F30723C;
    case 0x7F307240u: goto label_7F307240;
    case 0x7F307244u: goto label_7F307244;
    case 0x7F307248u: goto label_7F307248;
    case 0x7F30724Cu: goto label_7F30724C;
    case 0x7F307250u: goto label_7F307250;
    case 0x7F307254u: goto label_7F307254;
    case 0x7F307258u: goto label_7F307258;
    case 0x7F30725Cu: goto label_7F30725C;
    case 0x7F307260u: goto label_7F307260;
    case 0x7F307264u: goto label_7F307264;
    case 0x7F307268u: goto label_7F307268;
    case 0x7F30726Cu: goto label_7F30726C;
    case 0x7F307270u: goto label_7F307270;
    case 0x7F307274u: goto label_7F307274;
    case 0x7F307278u: goto label_7F307278;
    case 0x7F30727Cu: goto label_7F30727C;
    case 0x7F307280u: goto label_7F307280;
    case 0x7F307284u: goto label_7F307284;
    case 0x7F307288u: goto label_7F307288;
    case 0x7F30728Cu: goto label_7F30728C;
    case 0x7F307290u: goto label_7F307290;
    case 0x7F307294u: goto label_7F307294;
    case 0x7F307298u: goto label_7F307298;
    case 0x7F30729Cu: goto label_7F30729C;
    case 0x7F3072A0u: goto label_7F3072A0;
    case 0x7F3072A4u: goto label_7F3072A4;
    case 0x7F3072A8u: goto label_7F3072A8;
    case 0x7F3072ACu: goto label_7F3072AC;
    case 0x7F3072B0u: goto label_7F3072B0;
    case 0x7F3072B4u: goto label_7F3072B4;
    case 0x7F3072B8u: goto label_7F3072B8;
    case 0x7F3072BCu: goto label_7F3072BC;
    case 0x7F3072C0u: goto label_7F3072C0;
    case 0x7F3072C4u: goto label_7F3072C4;
    case 0x7F3072C8u: goto label_7F3072C8;
    case 0x7F3072CCu: goto label_7F3072CC;
    case 0x7F3072D0u: goto label_7F3072D0;
    case 0x7F3072D4u: goto label_7F3072D4;
    case 0x7F3072D8u: goto label_7F3072D8;
    case 0x7F3072DCu: goto label_7F3072DC;
    case 0x7F3072E0u: goto label_7F3072E0;
    case 0x7F3072E4u: goto label_7F3072E4;
    case 0x7F3072E8u: goto label_7F3072E8;
    case 0x7F3072ECu: goto label_7F3072EC;
    case 0x7F3072F0u: goto label_7F3072F0;
    case 0x7F3072F4u: goto label_7F3072F4;
    case 0x7F3072F8u: goto label_7F3072F8;
    case 0x7F3072FCu: goto label_7F3072FC;
    case 0x7F307300u: goto label_7F307300;
    case 0x7F307304u: goto label_7F307304;
    case 0x7F307308u: goto label_7F307308;
    case 0x7F30730Cu: goto label_7F30730C;
    case 0x7F307310u: goto label_7F307310;
    case 0x7F307314u: goto label_7F307314;
    case 0x7F307318u: goto label_7F307318;
    case 0x7F30731Cu: goto label_7F30731C;
    case 0x7F307320u: goto label_7F307320;
    case 0x7F307324u: goto label_7F307324;
    case 0x7F307328u: goto label_7F307328;
    case 0x7F30732Cu: goto label_7F30732C;
    case 0x7F307330u: goto label_7F307330;
    case 0x7F307334u: goto label_7F307334;
    case 0x7F307338u: goto label_7F307338;
    case 0x7F30733Cu: goto label_7F30733C;
    case 0x7F307340u: goto label_7F307340;
    case 0x7F307344u: goto label_7F307344;
    case 0x7F307348u: goto label_7F307348;
    case 0x7F30734Cu: goto label_7F30734C;
    case 0x7F307350u: goto label_7F307350;
    case 0x7F307354u: goto label_7F307354;
    case 0x7F307358u: goto label_7F307358;
    case 0x7F30735Cu: goto label_7F30735C;
    case 0x7F307360u: goto label_7F307360;
    case 0x7F307364u: goto label_7F307364;
    case 0x7F307368u: goto label_7F307368;
    case 0x7F30736Cu: goto label_7F30736C;
    case 0x7F307370u: goto label_7F307370;
    case 0x7F307374u: goto label_7F307374;
    case 0x7F307378u: goto label_7F307378;
    case 0x7F30737Cu: goto label_7F30737C;
    case 0x7F307380u: goto label_7F307380;
    case 0x7F307384u: goto label_7F307384;
    case 0x7F307388u: goto label_7F307388;
    case 0x7F30738Cu: goto label_7F30738C;
    case 0x7F307390u: goto label_7F307390;
    case 0x7F307394u: goto label_7F307394;
    case 0x7F307398u: goto label_7F307398;
    case 0x7F30739Cu: goto label_7F30739C;
    case 0x7F3073A0u: goto label_7F3073A0;
    case 0x7F3073A4u: goto label_7F3073A4;
    case 0x7F3073A8u: goto label_7F3073A8;
    case 0x7F3073ACu: goto label_7F3073AC;
    case 0x7F3073B0u: goto label_7F3073B0;
    case 0x7F3073B4u: goto label_7F3073B4;
    case 0x7F3073B8u: goto label_7F3073B8;
    case 0x7F3073BCu: goto label_7F3073BC;
    case 0x7F3073C0u: goto label_7F3073C0;
    case 0x7F3073C4u: goto label_7F3073C4;
    case 0x7F3073C8u: goto label_7F3073C8;
    case 0x7F3073CCu: goto label_7F3073CC;
    case 0x7F3073D0u: goto label_7F3073D0;
    case 0x7F3073D4u: goto label_7F3073D4;
    case 0x7F3073D8u: goto label_7F3073D8;
    case 0x7F3073DCu: goto label_7F3073DC;
    case 0x7F3073E0u: goto label_7F3073E0;
    case 0x7F3073E4u: goto label_7F3073E4;
    case 0x7F3073E8u: goto label_7F3073E8;
    case 0x7F3073ECu: goto label_7F3073EC;
    case 0x7F3073F0u: goto label_7F3073F0;
    case 0x7F3073F4u: goto label_7F3073F4;
    case 0x7F3073F8u: goto label_7F3073F8;
    case 0x7F3073FCu: goto label_7F3073FC;
    case 0x7F307400u: goto label_7F307400;
    case 0x7F307404u: goto label_7F307404;
    case 0x7F307408u: goto label_7F307408;
    case 0x7F30740Cu: goto label_7F30740C;
    case 0x7F307410u: goto label_7F307410;
    case 0x7F307414u: goto label_7F307414;
    case 0x7F307418u: goto label_7F307418;
    case 0x7F30741Cu: goto label_7F30741C;
    case 0x7F307420u: goto label_7F307420;
    case 0x7F307424u: goto label_7F307424;
    case 0x7F307428u: goto label_7F307428;
    case 0x7F30742Cu: goto label_7F30742C;
    case 0x7F307430u: goto label_7F307430;
    case 0x7F307434u: goto label_7F307434;
    case 0x7F307438u: goto label_7F307438;
    case 0x7F30743Cu: goto label_7F30743C;
    case 0x7F307440u: goto label_7F307440;
    case 0x7F307444u: goto label_7F307444;
    case 0x7F307448u: goto label_7F307448;
    case 0x7F30744Cu: goto label_7F30744C;
    case 0x7F307450u: goto label_7F307450;
    case 0x7F307454u: goto label_7F307454;
    case 0x7F307458u: goto label_7F307458;
    case 0x7F30745Cu: goto label_7F30745C;
    case 0x7F307460u: goto label_7F307460;
    case 0x7F307464u: goto label_7F307464;
    case 0x7F307468u: goto label_7F307468;
    case 0x7F30746Cu: goto label_7F30746C;
    case 0x7F307470u: goto label_7F307470;
    case 0x7F307474u: goto label_7F307474;
    case 0x7F307478u: goto label_7F307478;
    case 0x7F30747Cu: goto label_7F30747C;
    case 0x7F307480u: goto label_7F307480;
    case 0x7F307484u: goto label_7F307484;
    case 0x7F307488u: goto label_7F307488;
    case 0x7F30748Cu: goto label_7F30748C;
    case 0x7F307490u: goto label_7F307490;
    case 0x7F307494u: goto label_7F307494;
    case 0x7F307498u: goto label_7F307498;
    case 0x7F30749Cu: goto label_7F30749C;
    case 0x7F3074A0u: goto label_7F3074A0;
    case 0x7F3074A4u: goto label_7F3074A4;
    case 0x7F3074A8u: goto label_7F3074A8;
    case 0x7F3074ACu: goto label_7F3074AC;
    case 0x7F3074B0u: goto label_7F3074B0;
    case 0x7F3074B4u: goto label_7F3074B4;
    case 0x7F3074B8u: goto label_7F3074B8;
    case 0x7F3074BCu: goto label_7F3074BC;
    case 0x7F3074C0u: goto label_7F3074C0;
    case 0x7F3074C4u: goto label_7F3074C4;
    case 0x7F3074C8u: goto label_7F3074C8;
    case 0x7F3074CCu: goto label_7F3074CC;
    case 0x7F3074D0u: goto label_7F3074D0;
    case 0x7F3074D4u: goto label_7F3074D4;
    case 0x7F3074D8u: goto label_7F3074D8;
    case 0x7F3074DCu: goto label_7F3074DC;
    case 0x7F3074E0u: goto label_7F3074E0;
    case 0x7F3074E4u: goto label_7F3074E4;
    case 0x7F3074E8u: goto label_7F3074E8;
    case 0x7F3074ECu: goto label_7F3074EC;
    case 0x7F3074F0u: goto label_7F3074F0;
    case 0x7F3074F4u: goto label_7F3074F4;
    case 0x7F3074F8u: goto label_7F3074F8;
    case 0x7F3074FCu: goto label_7F3074FC;
    case 0x7F307500u: goto label_7F307500;
    case 0x7F307504u: goto label_7F307504;
    case 0x7F307508u: goto label_7F307508;
    case 0x7F30750Cu: goto label_7F30750C;
    case 0x7F307510u: goto label_7F307510;
    case 0x7F307514u: goto label_7F307514;
    case 0x7F307518u: goto label_7F307518;
    case 0x7F30751Cu: goto label_7F30751C;
    case 0x7F307520u: goto label_7F307520;
    case 0x7F307524u: goto label_7F307524;
    case 0x7F307528u: goto label_7F307528;
    case 0x7F30752Cu: goto label_7F30752C;
    case 0x7F307530u: goto label_7F307530;
    case 0x7F307534u: goto label_7F307534;
    case 0x7F307538u: goto label_7F307538;
    case 0x7F30753Cu: goto label_7F30753C;
    case 0x7F307540u: goto label_7F307540;
    case 0x7F307544u: goto label_7F307544;
    case 0x7F307548u: goto label_7F307548;
    case 0x7F30754Cu: goto label_7F30754C;
    case 0x7F307550u: goto label_7F307550;
    case 0x7F307554u: goto label_7F307554;
    case 0x7F307558u: goto label_7F307558;
    case 0x7F30755Cu: goto label_7F30755C;
    case 0x7F307560u: goto label_7F307560;
    case 0x7F307564u: goto label_7F307564;
    case 0x7F307568u: goto label_7F307568;
    case 0x7F30756Cu: goto label_7F30756C;
    case 0x7F307570u: goto label_7F307570;
    case 0x7F307574u: goto label_7F307574;
    case 0x7F307578u: goto label_7F307578;
    case 0x7F30757Cu: goto label_7F30757C;
    case 0x7F307580u: goto label_7F307580;
    case 0x7F307584u: goto label_7F307584;
    case 0x7F307588u: goto label_7F307588;
    case 0x7F30758Cu: goto label_7F30758C;
    case 0x7F307590u: goto label_7F307590;
    case 0x7F307594u: goto label_7F307594;
    case 0x7F307598u: goto label_7F307598;
    case 0x7F30759Cu: goto label_7F30759C;
    case 0x7F3075A0u: goto label_7F3075A0;
    case 0x7F3075A4u: goto label_7F3075A4;
    case 0x7F3075A8u: goto label_7F3075A8;
    case 0x7F3075ACu: goto label_7F3075AC;
    case 0x7F3075B0u: goto label_7F3075B0;
    case 0x7F3075B4u: goto label_7F3075B4;
    case 0x7F3075B8u: goto label_7F3075B8;
    case 0x7F3075BCu: goto label_7F3075BC;
    case 0x7F3075C0u: goto label_7F3075C0;
    case 0x7F3075C4u: goto label_7F3075C4;
    case 0x7F3075C8u: goto label_7F3075C8;
    case 0x7F3075CCu: goto label_7F3075CC;
    case 0x7F3075D0u: goto label_7F3075D0;
    case 0x7F3075D4u: goto label_7F3075D4;
    case 0x7F3075D8u: goto label_7F3075D8;
    case 0x7F3075DCu: goto label_7F3075DC;
    case 0x7F3075E0u: goto label_7F3075E0;
    case 0x7F3075E4u: goto label_7F3075E4;
    case 0x7F3075E8u: goto label_7F3075E8;
    case 0x7F3075ECu: goto label_7F3075EC;
    case 0x7F3075F0u: goto label_7F3075F0;
    case 0x7F3075F4u: goto label_7F3075F4;
    case 0x7F3075F8u: goto label_7F3075F8;
    case 0x7F3075FCu: goto label_7F3075FC;
    case 0x7F307600u: goto label_7F307600;
    case 0x7F307604u: goto label_7F307604;
    case 0x7F307608u: goto label_7F307608;
    case 0x7F30760Cu: goto label_7F30760C;
    case 0x7F307610u: goto label_7F307610;
    case 0x7F307614u: goto label_7F307614;
    case 0x7F307618u: goto label_7F307618;
    case 0x7F30761Cu: goto label_7F30761C;
    case 0x7F307620u: goto label_7F307620;
    case 0x7F307624u: goto label_7F307624;
    case 0x7F307628u: goto label_7F307628;
    case 0x7F30762Cu: goto label_7F30762C;
    case 0x7F307630u: goto label_7F307630;
    case 0x7F307634u: goto label_7F307634;
    case 0x7F307638u: goto label_7F307638;
    case 0x7F30763Cu: goto label_7F30763C;
    case 0x7F307640u: goto label_7F307640;
    case 0x7F307644u: goto label_7F307644;
    case 0x7F307648u: goto label_7F307648;
    case 0x7F30764Cu: goto label_7F30764C;
    case 0x7F307650u: goto label_7F307650;
    case 0x7F307654u: goto label_7F307654;
    case 0x7F307658u: goto label_7F307658;
    case 0x7F30765Cu: goto label_7F30765C;
    case 0x7F307660u: goto label_7F307660;
    case 0x7F307664u: goto label_7F307664;
    case 0x7F307668u: goto label_7F307668;
    case 0x7F30766Cu: goto label_7F30766C;
    case 0x7F307670u: goto label_7F307670;
    case 0x7F307674u: goto label_7F307674;
    case 0x7F307678u: goto label_7F307678;
    case 0x7F30767Cu: goto label_7F30767C;
    case 0x7F307680u: goto label_7F307680;
    case 0x7F307684u: goto label_7F307684;
    case 0x7F307688u: goto label_7F307688;
    case 0x7F30768Cu: goto label_7F30768C;
    case 0x7F307690u: goto label_7F307690;
    case 0x7F307694u: goto label_7F307694;
    case 0x7F307698u: goto label_7F307698;
    case 0x7F30769Cu: goto label_7F30769C;
    case 0x7F3076A0u: goto label_7F3076A0;
    case 0x7F3076A4u: goto label_7F3076A4;
    case 0x7F3076A8u: goto label_7F3076A8;
    case 0x7F3076ACu: goto label_7F3076AC;
    case 0x7F3076B0u: goto label_7F3076B0;
    case 0x7F3076B4u: goto label_7F3076B4;
    case 0x7F3076B8u: goto label_7F3076B8;
    case 0x7F3076BCu: goto label_7F3076BC;
    case 0x7F3076C0u: goto label_7F3076C0;
    case 0x7F3076C4u: goto label_7F3076C4;
    case 0x7F3076C8u: goto label_7F3076C8;
    case 0x7F3076CCu: goto label_7F3076CC;
    case 0x7F3076D0u: goto label_7F3076D0;
    case 0x7F3076D4u: goto label_7F3076D4;
    case 0x7F3076D8u: goto label_7F3076D8;
    case 0x7F3076DCu: goto label_7F3076DC;
    case 0x7F3076E0u: goto label_7F3076E0;
    case 0x7F3076E4u: goto label_7F3076E4;
    case 0x7F3076E8u: goto label_7F3076E8;
    case 0x7F3076ECu: goto label_7F3076EC;
    case 0x7F3076F0u: goto label_7F3076F0;
    case 0x7F3076F4u: goto label_7F3076F4;
    case 0x7F3076F8u: goto label_7F3076F8;
    case 0x7F3076FCu: goto label_7F3076FC;
    case 0x7F307700u: goto label_7F307700;
    case 0x7F307704u: goto label_7F307704;
    case 0x7F307708u: goto label_7F307708;
    case 0x7F30770Cu: goto label_7F30770C;
    case 0x7F307710u: goto label_7F307710;
    case 0x7F307714u: goto label_7F307714;
    case 0x7F307718u: goto label_7F307718;
    case 0x7F30771Cu: goto label_7F30771C;
    case 0x7F307720u: goto label_7F307720;
    case 0x7F307724u: goto label_7F307724;
    case 0x7F307728u: goto label_7F307728;
    case 0x7F30772Cu: goto label_7F30772C;
    case 0x7F307730u: goto label_7F307730;
    case 0x7F307734u: goto label_7F307734;
    case 0x7F307738u: goto label_7F307738;
    case 0x7F30773Cu: goto label_7F30773C;
    case 0x7F307740u: goto label_7F307740;
    case 0x7F307744u: goto label_7F307744;
    case 0x7F307748u: goto label_7F307748;
    case 0x7F30774Cu: goto label_7F30774C;
    case 0x7F307750u: goto label_7F307750;
    case 0x7F307754u: goto label_7F307754;
    case 0x7F307758u: goto label_7F307758;
    case 0x7F30775Cu: goto label_7F30775C;
    case 0x7F307760u: goto label_7F307760;
    case 0x7F307764u: goto label_7F307764;
    case 0x7F307768u: goto label_7F307768;
    case 0x7F30776Cu: goto label_7F30776C;
    case 0x7F307770u: goto label_7F307770;
    case 0x7F307774u: goto label_7F307774;
    case 0x7F307778u: goto label_7F307778;
    case 0x7F30777Cu: goto label_7F30777C;
    case 0x7F307780u: goto label_7F307780;
    case 0x7F307784u: goto label_7F307784;
    case 0x7F307788u: goto label_7F307788;
    case 0x7F30778Cu: goto label_7F30778C;
    case 0x7F307790u: goto label_7F307790;
    case 0x7F307794u: goto label_7F307794;
    case 0x7F307798u: goto label_7F307798;
    case 0x7F30779Cu: goto label_7F30779C;
    case 0x7F3077A0u: goto label_7F3077A0;
    case 0x7F3077A4u: goto label_7F3077A4;
    case 0x7F3077A8u: goto label_7F3077A8;
    case 0x7F3077ACu: goto label_7F3077AC;
    case 0x7F3077B0u: goto label_7F3077B0;
    case 0x7F3077B4u: goto label_7F3077B4;
    case 0x7F3077B8u: goto label_7F3077B8;
    case 0x7F3077BCu: goto label_7F3077BC;
    case 0x7F3077C0u: goto label_7F3077C0;
    case 0x7F3077C4u: goto label_7F3077C4;
    case 0x7F3077C8u: goto label_7F3077C8;
    case 0x7F3077CCu: goto label_7F3077CC;
    case 0x7F3077D0u: goto label_7F3077D0;
    case 0x7F3077D4u: goto label_7F3077D4;
    case 0x7F3077D8u: goto label_7F3077D8;
    case 0x7F3077DCu: goto label_7F3077DC;
    case 0x7F3077E0u: goto label_7F3077E0;
    case 0x7F3077E4u: goto label_7F3077E4;
    case 0x7F3077E8u: goto label_7F3077E8;
    case 0x7F3077ECu: goto label_7F3077EC;
    case 0x7F3077F0u: goto label_7F3077F0;
    case 0x7F3077F4u: goto label_7F3077F4;
    case 0x7F3077F8u: goto label_7F3077F8;
    case 0x7F3077FCu: goto label_7F3077FC;
    case 0x7F307800u: goto label_7F307800;
    case 0x7F307804u: goto label_7F307804;
    case 0x7F307808u: goto label_7F307808;
    case 0x7F30780Cu: goto label_7F30780C;
    case 0x7F307810u: goto label_7F307810;
    case 0x7F307814u: goto label_7F307814;
    case 0x7F307818u: goto label_7F307818;
    case 0x7F30781Cu: goto label_7F30781C;
    case 0x7F307820u: goto label_7F307820;
    case 0x7F307824u: goto label_7F307824;
    case 0x7F307828u: goto label_7F307828;
    case 0x7F30782Cu: goto label_7F30782C;
    case 0x7F307830u: goto label_7F307830;
    case 0x7F307834u: goto label_7F307834;
    case 0x7F307838u: goto label_7F307838;
    case 0x7F30783Cu: goto label_7F30783C;
    case 0x7F307840u: goto label_7F307840;
    case 0x7F307844u: goto label_7F307844;
    case 0x7F307848u: goto label_7F307848;
    case 0x7F30784Cu: goto label_7F30784C;
    case 0x7F307850u: goto label_7F307850;
    case 0x7F307854u: goto label_7F307854;
    case 0x7F307858u: goto label_7F307858;
    case 0x7F30785Cu: goto label_7F30785C;
    case 0x7F307860u: goto label_7F307860;
    case 0x7F307864u: goto label_7F307864;
    case 0x7F307868u: goto label_7F307868;
    case 0x7F30786Cu: goto label_7F30786C;
    case 0x7F307870u: goto label_7F307870;
    case 0x7F307874u: goto label_7F307874;
    case 0x7F307878u: goto label_7F307878;
    case 0x7F30787Cu: goto label_7F30787C;
    case 0x7F307880u: goto label_7F307880;
    case 0x7F307884u: goto label_7F307884;
    case 0x7F307888u: goto label_7F307888;
    case 0x7F30788Cu: goto label_7F30788C;
    case 0x7F307890u: goto label_7F307890;
    case 0x7F307894u: goto label_7F307894;
    case 0x7F307898u: goto label_7F307898;
    case 0x7F30789Cu: goto label_7F30789C;
    case 0x7F3078A0u: goto label_7F3078A0;
    case 0x7F3078A4u: goto label_7F3078A4;
    case 0x7F3078A8u: goto label_7F3078A8;
    case 0x7F3078ACu: goto label_7F3078AC;
    case 0x7F3078B0u: goto label_7F3078B0;
    case 0x7F3078B4u: goto label_7F3078B4;
    case 0x7F3078B8u: goto label_7F3078B8;
    case 0x7F3078BCu: goto label_7F3078BC;
    case 0x7F3078C0u: goto label_7F3078C0;
    case 0x7F3078C4u: goto label_7F3078C4;
    case 0x7F3078C8u: goto label_7F3078C8;
    case 0x7F3078CCu: goto label_7F3078CC;
    case 0x7F3078D0u: goto label_7F3078D0;
    case 0x7F3078D4u: goto label_7F3078D4;
    case 0x7F3078D8u: goto label_7F3078D8;
    case 0x7F3078DCu: goto label_7F3078DC;
    case 0x7F3078E0u: goto label_7F3078E0;
    case 0x7F3078E4u: goto label_7F3078E4;
    case 0x7F3078E8u: goto label_7F3078E8;
    case 0x7F3078ECu: goto label_7F3078EC;
    case 0x7F3078F0u: goto label_7F3078F0;
    case 0x7F3078F4u: goto label_7F3078F4;
    case 0x7F3078F8u: goto label_7F3078F8;
    case 0x7F3078FCu: goto label_7F3078FC;
    case 0x7F307900u: goto label_7F307900;
    case 0x7F307904u: goto label_7F307904;
    case 0x7F307908u: goto label_7F307908;
    case 0x7F30790Cu: goto label_7F30790C;
    case 0x7F307910u: goto label_7F307910;
    case 0x7F307914u: goto label_7F307914;
    case 0x7F307918u: goto label_7F307918;
    case 0x7F30791Cu: goto label_7F30791C;
    case 0x7F307920u: goto label_7F307920;
    case 0x7F307924u: goto label_7F307924;
    case 0x7F307928u: goto label_7F307928;
    case 0x7F30792Cu: goto label_7F30792C;
    case 0x7F307930u: goto label_7F307930;
    case 0x7F307934u: goto label_7F307934;
    case 0x7F307938u: goto label_7F307938;
    case 0x7F30793Cu: goto label_7F30793C;
    case 0x7F307940u: goto label_7F307940;
    case 0x7F307944u: goto label_7F307944;
    case 0x7F307948u: goto label_7F307948;
    case 0x7F30794Cu: goto label_7F30794C;
    case 0x7F307950u: goto label_7F307950;
    case 0x7F307954u: goto label_7F307954;
    case 0x7F307958u: goto label_7F307958;
    case 0x7F30795Cu: goto label_7F30795C;
    case 0x7F307960u: goto label_7F307960;
    case 0x7F307964u: goto label_7F307964;
    case 0x7F307968u: goto label_7F307968;
    case 0x7F30796Cu: goto label_7F30796C;
    case 0x7F307970u: goto label_7F307970;
    case 0x7F307974u: goto label_7F307974;
    case 0x7F307978u: goto label_7F307978;
    case 0x7F30797Cu: goto label_7F30797C;
    case 0x7F307980u: goto label_7F307980;
    case 0x7F307984u: goto label_7F307984;
    case 0x7F307988u: goto label_7F307988;
    case 0x7F30798Cu: goto label_7F30798C;
    case 0x7F307990u: goto label_7F307990;
    case 0x7F307994u: goto label_7F307994;
    case 0x7F307998u: goto label_7F307998;
    case 0x7F30799Cu: goto label_7F30799C;
    case 0x7F3079A0u: goto label_7F3079A0;
    case 0x7F3079A4u: goto label_7F3079A4;
    case 0x7F3079A8u: goto label_7F3079A8;
    case 0x7F3079ACu: goto label_7F3079AC;
    case 0x7F3079B0u: goto label_7F3079B0;
    case 0x7F3079B4u: goto label_7F3079B4;
    case 0x7F3079B8u: goto label_7F3079B8;
    case 0x7F3079BCu: goto label_7F3079BC;
    case 0x7F3079C0u: goto label_7F3079C0;
    case 0x7F3079C4u: goto label_7F3079C4;
    case 0x7F3079C8u: goto label_7F3079C8;
    case 0x7F3079CCu: goto label_7F3079CC;
    case 0x7F3079D0u: goto label_7F3079D0;
    case 0x7F3079D4u: goto label_7F3079D4;
    case 0x7F3079D8u: goto label_7F3079D8;
    case 0x7F3079DCu: goto label_7F3079DC;
    case 0x7F3079E0u: goto label_7F3079E0;
    case 0x7F3079E4u: goto label_7F3079E4;
    case 0x7F3079E8u: goto label_7F3079E8;
    case 0x7F3079ECu: goto label_7F3079EC;
    case 0x7F3079F0u: goto label_7F3079F0;
    case 0x7F3079F4u: goto label_7F3079F4;
    case 0x7F3079F8u: goto label_7F3079F8;
    case 0x7F3079FCu: goto label_7F3079FC;
    case 0x7F307A00u: goto label_7F307A00;
    case 0x7F307A04u: goto label_7F307A04;
    case 0x7F307A08u: goto label_7F307A08;
    case 0x7F307A0Cu: goto label_7F307A0C;
    case 0x7F307A10u: goto label_7F307A10;
    case 0x7F307A14u: goto label_7F307A14;
    case 0x7F307A18u: goto label_7F307A18;
    case 0x7F307A1Cu: goto label_7F307A1C;
    case 0x7F307A20u: goto label_7F307A20;
    case 0x7F307A24u: goto label_7F307A24;
    case 0x7F307A28u: goto label_7F307A28;
    case 0x7F307A2Cu: goto label_7F307A2C;
    case 0x7F307A30u: goto label_7F307A30;
    case 0x7F307A34u: goto label_7F307A34;
    case 0x7F307A38u: goto label_7F307A38;
    case 0x7F307A3Cu: goto label_7F307A3C;
    case 0x7F307A40u: goto label_7F307A40;
    case 0x7F307A44u: goto label_7F307A44;
    case 0x7F307A48u: goto label_7F307A48;
    case 0x7F307A4Cu: goto label_7F307A4C;
    case 0x7F307A50u: goto label_7F307A50;
    case 0x7F307A54u: goto label_7F307A54;
    case 0x7F307A58u: goto label_7F307A58;
    case 0x7F307A5Cu: goto label_7F307A5C;
    case 0x7F307A60u: goto label_7F307A60;
    case 0x7F307A64u: goto label_7F307A64;
    case 0x7F307A68u: goto label_7F307A68;
    case 0x7F307A6Cu: goto label_7F307A6C;
    case 0x7F307A70u: goto label_7F307A70;
    case 0x7F307A74u: goto label_7F307A74;
    case 0x7F307A78u: goto label_7F307A78;
    case 0x7F307A7Cu: goto label_7F307A7C;
    case 0x7F307A80u: goto label_7F307A80;
    case 0x7F307A84u: goto label_7F307A84;
    case 0x7F307A88u: goto label_7F307A88;
    case 0x7F307A8Cu: goto label_7F307A8C;
    case 0x7F307A90u: goto label_7F307A90;
    case 0x7F307A94u: goto label_7F307A94;
    case 0x7F307A98u: goto label_7F307A98;
    case 0x7F307A9Cu: goto label_7F307A9C;
    case 0x7F307AA0u: goto label_7F307AA0;
    case 0x7F307AA4u: goto label_7F307AA4;
    case 0x7F307AA8u: goto label_7F307AA8;
    case 0x7F307AACu: goto label_7F307AAC;
    case 0x7F307AB0u: goto label_7F307AB0;
    case 0x7F307AB4u: goto label_7F307AB4;
    case 0x7F307AB8u: goto label_7F307AB8;
    case 0x7F307ABCu: goto label_7F307ABC;
    case 0x7F307AC0u: goto label_7F307AC0;
    case 0x7F307AC4u: goto label_7F307AC4;
    case 0x7F307AC8u: goto label_7F307AC8;
    case 0x7F307ACCu: goto label_7F307ACC;
    case 0x7F307AD0u: goto label_7F307AD0;
    case 0x7F307AD4u: goto label_7F307AD4;
    case 0x7F307AD8u: goto label_7F307AD8;
    case 0x7F307ADCu: goto label_7F307ADC;
    case 0x7F307AE0u: goto label_7F307AE0;
    case 0x7F307AE4u: goto label_7F307AE4;
    case 0x7F307AE8u: goto label_7F307AE8;
    case 0x7F307AECu: goto label_7F307AEC;
    case 0x7F307AF0u: goto label_7F307AF0;
    case 0x7F307AF4u: goto label_7F307AF4;
    case 0x7F307AF8u: goto label_7F307AF8;
    case 0x7F307AFCu: goto label_7F307AFC;
    case 0x7F307B00u: goto label_7F307B00;
    case 0x7F307B04u: goto label_7F307B04;
    case 0x7F307B08u: goto label_7F307B08;
    case 0x7F307B0Cu: goto label_7F307B0C;
    case 0x7F307B10u: goto label_7F307B10;
    case 0x7F307B14u: goto label_7F307B14;
    case 0x7F307B18u: goto label_7F307B18;
    case 0x7F307B1Cu: goto label_7F307B1C;
    case 0x7F307B20u: goto label_7F307B20;
    case 0x7F307B24u: goto label_7F307B24;
    case 0x7F307B28u: goto label_7F307B28;
    case 0x7F307B2Cu: goto label_7F307B2C;
    case 0x7F307B30u: goto label_7F307B30;
    case 0x7F307B34u: goto label_7F307B34;
    case 0x7F307B38u: goto label_7F307B38;
    case 0x7F307B3Cu: goto label_7F307B3C;
    case 0x7F307B40u: goto label_7F307B40;
    case 0x7F307B44u: goto label_7F307B44;
    case 0x7F307B48u: goto label_7F307B48;
    case 0x7F307B4Cu: goto label_7F307B4C;
    case 0x7F307B50u: goto label_7F307B50;
    case 0x7F307B54u: goto label_7F307B54;
    case 0x7F307B58u: goto label_7F307B58;
    case 0x7F307B5Cu: goto label_7F307B5C;
    case 0x7F307B60u: goto label_7F307B60;
    case 0x7F307B64u: goto label_7F307B64;
    case 0x7F307B68u: goto label_7F307B68;
    case 0x7F307B6Cu: goto label_7F307B6C;
    case 0x7F307B70u: goto label_7F307B70;
    case 0x7F307B74u: goto label_7F307B74;
    case 0x7F307B78u: goto label_7F307B78;
    case 0x7F307B7Cu: goto label_7F307B7C;
    case 0x7F307B80u: goto label_7F307B80;
    case 0x7F307B84u: goto label_7F307B84;
    case 0x7F307B88u: goto label_7F307B88;
    case 0x7F307B8Cu: goto label_7F307B8C;
    case 0x7F307B90u: goto label_7F307B90;
    case 0x7F307B94u: goto label_7F307B94;
    case 0x7F307B98u: goto label_7F307B98;
    case 0x7F307B9Cu: goto label_7F307B9C;
    case 0x7F307BA0u: goto label_7F307BA0;
    case 0x7F307BA4u: goto label_7F307BA4;
    case 0x7F307BA8u: goto label_7F307BA8;
    case 0x7F307BACu: goto label_7F307BAC;
    case 0x7F307BB0u: goto label_7F307BB0;
    case 0x7F307BB4u: goto label_7F307BB4;
    case 0x7F307BB8u: goto label_7F307BB8;
    case 0x7F307BBCu: goto label_7F307BBC;
    case 0x7F307BC0u: goto label_7F307BC0;
    case 0x7F307BC4u: goto label_7F307BC4;
    case 0x7F307BC8u: goto label_7F307BC8;
    case 0x7F307BCCu: goto label_7F307BCC;
    case 0x7F307BD0u: goto label_7F307BD0;
    case 0x7F307BD4u: goto label_7F307BD4;
    case 0x7F307BD8u: goto label_7F307BD8;
    case 0x7F307BDCu: goto label_7F307BDC;
    case 0x7F307BE0u: goto label_7F307BE0;
    case 0x7F307BE4u: goto label_7F307BE4;
    case 0x7F307BE8u: goto label_7F307BE8;
    case 0x7F307BECu: goto label_7F307BEC;
    case 0x7F307BF0u: goto label_7F307BF0;
    case 0x7F307BF4u: goto label_7F307BF4;
    case 0x7F307BF8u: goto label_7F307BF8;
    case 0x7F307BFCu: goto label_7F307BFC;
    case 0x7F307C00u: goto label_7F307C00;
    case 0x7F307C04u: goto label_7F307C04;
    case 0x7F307C08u: goto label_7F307C08;
    case 0x7F307C0Cu: goto label_7F307C0C;
    case 0x7F307C10u: goto label_7F307C10;
    case 0x7F307C14u: goto label_7F307C14;
    case 0x7F307C18u: goto label_7F307C18;
    case 0x7F307C1Cu: goto label_7F307C1C;
    case 0x7F307C20u: goto label_7F307C20;
    case 0x7F307C24u: goto label_7F307C24;
    case 0x7F307C28u: goto label_7F307C28;
    case 0x7F307C2Cu: goto label_7F307C2C;
    case 0x7F307C30u: goto label_7F307C30;
    case 0x7F307C34u: goto label_7F307C34;
    case 0x7F307C38u: goto label_7F307C38;
    case 0x7F307C3Cu: goto label_7F307C3C;
    case 0x7F307C40u: goto label_7F307C40;
    case 0x7F307C44u: goto label_7F307C44;
    case 0x7F307C48u: goto label_7F307C48;
    case 0x7F307C4Cu: goto label_7F307C4C;
    case 0x7F307C50u: goto label_7F307C50;
    case 0x7F307C54u: goto label_7F307C54;
    case 0x7F307C58u: goto label_7F307C58;
    case 0x7F307C5Cu: goto label_7F307C5C;
    case 0x7F307C60u: goto label_7F307C60;
    case 0x7F307C64u: goto label_7F307C64;
    case 0x7F307C68u: goto label_7F307C68;
    case 0x7F307C6Cu: goto label_7F307C6C;
    case 0x7F307C70u: goto label_7F307C70;
    case 0x7F307C74u: goto label_7F307C74;
    case 0x7F307C78u: goto label_7F307C78;
    case 0x7F307C7Cu: goto label_7F307C7C;
    case 0x7F307C80u: goto label_7F307C80;
    case 0x7F307C84u: goto label_7F307C84;
    case 0x7F307C88u: goto label_7F307C88;
    case 0x7F307C8Cu: goto label_7F307C8C;
    case 0x7F307C90u: goto label_7F307C90;
    case 0x7F307C94u: goto label_7F307C94;
    case 0x7F307C98u: goto label_7F307C98;
    case 0x7F307C9Cu: goto label_7F307C9C;
    case 0x7F307CA0u: goto label_7F307CA0;
    case 0x7F307CA4u: goto label_7F307CA4;
    case 0x7F307CA8u: goto label_7F307CA8;
    case 0x7F307CACu: goto label_7F307CAC;
    case 0x7F307CB0u: goto label_7F307CB0;
    case 0x7F307CB4u: goto label_7F307CB4;
    case 0x7F307CB8u: goto label_7F307CB8;
    case 0x7F307CBCu: goto label_7F307CBC;
    case 0x7F307CC0u: goto label_7F307CC0;
    case 0x7F307CC4u: goto label_7F307CC4;
    case 0x7F307CC8u: goto label_7F307CC8;
    case 0x7F307CCCu: goto label_7F307CCC;
    case 0x7F307CD0u: goto label_7F307CD0;
    case 0x7F307CD4u: goto label_7F307CD4;
    case 0x7F307CD8u: goto label_7F307CD8;
    case 0x7F307CDCu: goto label_7F307CDC;
    case 0x7F307CE0u: goto label_7F307CE0;
    case 0x7F307CE4u: goto label_7F307CE4;
    case 0x7F307CE8u: goto label_7F307CE8;
    case 0x7F307CECu: goto label_7F307CEC;
    case 0x7F307CF0u: goto label_7F307CF0;
    case 0x7F307CF4u: goto label_7F307CF4;
    case 0x7F307CF8u: goto label_7F307CF8;
    case 0x7F307CFCu: goto label_7F307CFC;
    case 0x7F307D00u: goto label_7F307D00;
    case 0x7F307D04u: goto label_7F307D04;
    case 0x7F307D08u: goto label_7F307D08;
    case 0x7F307D0Cu: goto label_7F307D0C;
    case 0x7F307D10u: goto label_7F307D10;
    case 0x7F307D14u: goto label_7F307D14;
    case 0x7F307D18u: goto label_7F307D18;
    case 0x7F307D1Cu: goto label_7F307D1C;
    case 0x7F307D20u: goto label_7F307D20;
    case 0x7F307D24u: goto label_7F307D24;
    case 0x7F307D28u: goto label_7F307D28;
    case 0x7F307D2Cu: goto label_7F307D2C;
    case 0x7F307D30u: goto label_7F307D30;
    case 0x7F307D34u: goto label_7F307D34;
    case 0x7F307D38u: goto label_7F307D38;
    case 0x7F307D3Cu: goto label_7F307D3C;
    case 0x7F307D40u: goto label_7F307D40;
    case 0x7F307D44u: goto label_7F307D44;
    case 0x7F307D48u: goto label_7F307D48;
    case 0x7F307D4Cu: goto label_7F307D4C;
    case 0x7F307D50u: goto label_7F307D50;
    case 0x7F307D54u: goto label_7F307D54;
    case 0x7F307D58u: goto label_7F307D58;
    case 0x7F307D5Cu: goto label_7F307D5C;
    case 0x7F307D60u: goto label_7F307D60;
    case 0x7F307D64u: goto label_7F307D64;
    case 0x7F307D68u: goto label_7F307D68;
    case 0x7F307D6Cu: goto label_7F307D6C;
    case 0x7F307D70u: goto label_7F307D70;
    case 0x7F307D74u: goto label_7F307D74;
    case 0x7F307D78u: goto label_7F307D78;
    case 0x7F307D7Cu: goto label_7F307D7C;
    case 0x7F307D80u: goto label_7F307D80;
    case 0x7F307D84u: goto label_7F307D84;
    case 0x7F307D88u: goto label_7F307D88;
    case 0x7F307D8Cu: goto label_7F307D8C;
    case 0x7F307D90u: goto label_7F307D90;
    case 0x7F307D94u: goto label_7F307D94;
    case 0x7F307D98u: goto label_7F307D98;
    case 0x7F307D9Cu: goto label_7F307D9C;
    case 0x7F307DA0u: goto label_7F307DA0;
    case 0x7F307DA4u: goto label_7F307DA4;
    case 0x7F307DA8u: goto label_7F307DA8;
    case 0x7F307DACu: goto label_7F307DAC;
    case 0x7F307DB0u: goto label_7F307DB0;
    case 0x7F307DB4u: goto label_7F307DB4;
    case 0x7F307DB8u: goto label_7F307DB8;
    case 0x7F307DBCu: goto label_7F307DBC;
    case 0x7F307DC0u: goto label_7F307DC0;
    case 0x7F307DC4u: goto label_7F307DC4;
    case 0x7F307DC8u: goto label_7F307DC8;
    case 0x7F307DCCu: goto label_7F307DCC;
    case 0x7F307DD0u: goto label_7F307DD0;
    case 0x7F307DD4u: goto label_7F307DD4;
    case 0x7F307DD8u: goto label_7F307DD8;
    case 0x7F307DDCu: goto label_7F307DDC;
    case 0x7F307DE0u: goto label_7F307DE0;
    case 0x7F307DE4u: goto label_7F307DE4;
    case 0x7F307DE8u: goto label_7F307DE8;
    case 0x7F307DECu: goto label_7F307DEC;
    case 0x7F307DF0u: goto label_7F307DF0;
    case 0x7F307DF4u: goto label_7F307DF4;
    case 0x7F307DF8u: goto label_7F307DF8;
    case 0x7F307DFCu: goto label_7F307DFC;
    case 0x7F307E00u: goto label_7F307E00;
    case 0x7F307E04u: goto label_7F307E04;
    case 0x7F307E08u: goto label_7F307E08;
    case 0x7F307E0Cu: goto label_7F307E0C;
    case 0x7F307E10u: goto label_7F307E10;
    case 0x7F307E14u: goto label_7F307E14;
    case 0x7F307E18u: goto label_7F307E18;
    case 0x7F307E1Cu: goto label_7F307E1C;
    case 0x7F307E20u: goto label_7F307E20;
    case 0x7F307E24u: goto label_7F307E24;
    case 0x7F307E28u: goto label_7F307E28;
    case 0x7F307E2Cu: goto label_7F307E2C;
    case 0x7F307E30u: goto label_7F307E30;
    case 0x7F307E34u: goto label_7F307E34;
    case 0x7F307E38u: goto label_7F307E38;
    case 0x7F307E3Cu: goto label_7F307E3C;
    case 0x7F307E40u: goto label_7F307E40;
    case 0x7F307E44u: goto label_7F307E44;
    case 0x7F307E48u: goto label_7F307E48;
    case 0x7F307E4Cu: goto label_7F307E4C;
    case 0x7F307E50u: goto label_7F307E50;
    case 0x7F307E54u: goto label_7F307E54;
    case 0x7F307E58u: goto label_7F307E58;
    case 0x7F307E5Cu: goto label_7F307E5C;
    case 0x7F307E60u: goto label_7F307E60;
    case 0x7F307E64u: goto label_7F307E64;
    case 0x7F307E68u: goto label_7F307E68;
    case 0x7F307E6Cu: goto label_7F307E6C;
    case 0x7F307E70u: goto label_7F307E70;
    case 0x7F307E74u: goto label_7F307E74;
    case 0x7F307E78u: goto label_7F307E78;
    case 0x7F307E7Cu: goto label_7F307E7C;
    case 0x7F307E80u: goto label_7F307E80;
    case 0x7F307E84u: goto label_7F307E84;
    case 0x7F307E88u: goto label_7F307E88;
    case 0x7F307E8Cu: goto label_7F307E8C;
    case 0x7F307E90u: goto label_7F307E90;
    case 0x7F307E94u: goto label_7F307E94;
    case 0x7F307E98u: goto label_7F307E98;
    case 0x7F307E9Cu: goto label_7F307E9C;
    case 0x7F307EA0u: goto label_7F307EA0;
    case 0x7F307EA4u: goto label_7F307EA4;
    case 0x7F307EA8u: goto label_7F307EA8;
    case 0x7F307EACu: goto label_7F307EAC;
    case 0x7F307EB0u: goto label_7F307EB0;
    case 0x7F307EB4u: goto label_7F307EB4;
    case 0x7F307EB8u: goto label_7F307EB8;
    case 0x7F307EBCu: goto label_7F307EBC;
    case 0x7F307EC0u: goto label_7F307EC0;
    case 0x7F307EC4u: goto label_7F307EC4;
    case 0x7F307EC8u: goto label_7F307EC8;
    case 0x7F307ECCu: goto label_7F307ECC;
    case 0x7F307ED0u: goto label_7F307ED0;
    case 0x7F307ED4u: goto label_7F307ED4;
    case 0x7F307ED8u: goto label_7F307ED8;
    case 0x7F307EDCu: goto label_7F307EDC;
    case 0x7F307EE0u: goto label_7F307EE0;
    case 0x7F307EE4u: goto label_7F307EE4;
    case 0x7F307EE8u: goto label_7F307EE8;
    case 0x7F307EECu: goto label_7F307EEC;
    case 0x7F307EF0u: goto label_7F307EF0;
    case 0x7F307EF4u: goto label_7F307EF4;
    case 0x7F307EF8u: goto label_7F307EF8;
    case 0x7F307EFCu: goto label_7F307EFC;
    case 0x7F307F00u: goto label_7F307F00;
    case 0x7F307F04u: goto label_7F307F04;
    case 0x7F307F08u: goto label_7F307F08;
    case 0x7F307F0Cu: goto label_7F307F0C;
    case 0x7F307F10u: goto label_7F307F10;
    case 0x7F307F14u: goto label_7F307F14;
    case 0x7F307F18u: goto label_7F307F18;
    case 0x7F307F1Cu: goto label_7F307F1C;
    case 0x7F307F20u: goto label_7F307F20;
    case 0x7F307F24u: goto label_7F307F24;
    case 0x7F307F28u: goto label_7F307F28;
    case 0x7F307F2Cu: goto label_7F307F2C;
    case 0x7F307F30u: goto label_7F307F30;
    case 0x7F307F34u: goto label_7F307F34;
    case 0x7F307F38u: goto label_7F307F38;
    case 0x7F307F3Cu: goto label_7F307F3C;
    case 0x7F307F40u: goto label_7F307F40;
    case 0x7F307F44u: goto label_7F307F44;
    case 0x7F307F48u: goto label_7F307F48;
    case 0x7F307F4Cu: goto label_7F307F4C;
    case 0x7F307F50u: goto label_7F307F50;
    case 0x7F307F54u: goto label_7F307F54;
    case 0x7F307F58u: goto label_7F307F58;
    case 0x7F307F5Cu: goto label_7F307F5C;
    case 0x7F307F60u: goto label_7F307F60;
    case 0x7F307F64u: goto label_7F307F64;
    case 0x7F307F68u: goto label_7F307F68;
    case 0x7F307F6Cu: goto label_7F307F6C;
    case 0x7F307F70u: goto label_7F307F70;
    case 0x7F307F74u: goto label_7F307F74;
    case 0x7F307F78u: goto label_7F307F78;
    case 0x7F307F7Cu: goto label_7F307F7C;
    case 0x7F307F80u: goto label_7F307F80;
    case 0x7F307F84u: goto label_7F307F84;
    case 0x7F307F88u: goto label_7F307F88;
    case 0x7F307F8Cu: goto label_7F307F8C;
    case 0x7F307F90u: goto label_7F307F90;
    case 0x7F307F94u: goto label_7F307F94;
    case 0x7F307F98u: goto label_7F307F98;
    case 0x7F307F9Cu: goto label_7F307F9C;
    case 0x7F307FA0u: goto label_7F307FA0;
    case 0x7F307FA4u: goto label_7F307FA4;
    case 0x7F307FA8u: goto label_7F307FA8;
    case 0x7F307FACu: goto label_7F307FAC;
    case 0x7F307FB0u: goto label_7F307FB0;
    case 0x7F307FB4u: goto label_7F307FB4;
    case 0x7F307FB8u: goto label_7F307FB8;
    case 0x7F307FBCu: goto label_7F307FBC;
    case 0x7F307FC0u: goto label_7F307FC0;
    case 0x7F307FC4u: goto label_7F307FC4;
    case 0x7F307FC8u: goto label_7F307FC8;
    case 0x7F307FCCu: goto label_7F307FCC;
    case 0x7F307FD0u: goto label_7F307FD0;
    case 0x7F307FD4u: goto label_7F307FD4;
    case 0x7F307FD8u: goto label_7F307FD8;
    case 0x7F307FDCu: goto label_7F307FDC;
    case 0x7F307FE0u: goto label_7F307FE0;
    case 0x7F307FE4u: goto label_7F307FE4;
    case 0x7F307FE8u: goto label_7F307FE8;
    case 0x7F307FECu: goto label_7F307FEC;
    case 0x7F307FF0u: goto label_7F307FF0;
    case 0x7F307FF4u: goto label_7F307FF4;
    case 0x7F307FF8u: goto label_7F307FF8;
    case 0x7F307FFCu: goto label_7F307FFC;
    case 0x7F308000u: goto label_7F308000;
    case 0x7F308004u: goto label_7F308004;
    case 0x7F308008u: goto label_7F308008;
    case 0x7F30800Cu: goto label_7F30800C;
    case 0x7F308010u: goto label_7F308010;
    case 0x7F308014u: goto label_7F308014;
    case 0x7F308018u: goto label_7F308018;
    case 0x7F30801Cu: goto label_7F30801C;
    case 0x7F308020u: goto label_7F308020;
    case 0x7F308024u: goto label_7F308024;
    case 0x7F308028u: goto label_7F308028;
    case 0x7F30802Cu: goto label_7F30802C;
    case 0x7F308030u: goto label_7F308030;
    case 0x7F308034u: goto label_7F308034;
    case 0x7F308038u: goto label_7F308038;
    case 0x7F30803Cu: goto label_7F30803C;
    case 0x7F308040u: goto label_7F308040;
    case 0x7F308044u: goto label_7F308044;
    case 0x7F308048u: goto label_7F308048;
    case 0x7F30804Cu: goto label_7F30804C;
    case 0x7F308050u: goto label_7F308050;
    case 0x7F308054u: goto label_7F308054;
    case 0x7F308058u: goto label_7F308058;
    case 0x7F30805Cu: goto label_7F30805C;
    case 0x7F308060u: goto label_7F308060;
    case 0x7F308064u: goto label_7F308064;
    case 0x7F308068u: goto label_7F308068;
    case 0x7F30806Cu: goto label_7F30806C;
    case 0x7F308070u: goto label_7F308070;
    case 0x7F308074u: goto label_7F308074;
    case 0x7F308078u: goto label_7F308078;
    case 0x7F30807Cu: goto label_7F30807C;
    case 0x7F308080u: goto label_7F308080;
    case 0x7F308084u: goto label_7F308084;
    case 0x7F308088u: goto label_7F308088;
    case 0x7F30808Cu: goto label_7F30808C;
    case 0x7F308090u: goto label_7F308090;
    case 0x7F308094u: goto label_7F308094;
    case 0x7F308098u: goto label_7F308098;
    case 0x7F30809Cu: goto label_7F30809C;
    case 0x7F3080A0u: goto label_7F3080A0;
    case 0x7F3080A4u: goto label_7F3080A4;
    case 0x7F3080A8u: goto label_7F3080A8;
    case 0x7F3080ACu: goto label_7F3080AC;
    case 0x7F3080B0u: goto label_7F3080B0;
    case 0x7F3080B4u: goto label_7F3080B4;
    case 0x7F3080B8u: goto label_7F3080B8;
    case 0x7F3080BCu: goto label_7F3080BC;
    case 0x7F3080C0u: goto label_7F3080C0;
    case 0x7F3080C4u: goto label_7F3080C4;
    case 0x7F3080C8u: goto label_7F3080C8;
    case 0x7F3080CCu: goto label_7F3080CC;
    case 0x7F3080D0u: goto label_7F3080D0;
    case 0x7F3080D4u: goto label_7F3080D4;
    case 0x7F3080D8u: goto label_7F3080D8;
    case 0x7F3080DCu: goto label_7F3080DC;
    case 0x7F3080E0u: goto label_7F3080E0;
    case 0x7F3080E4u: goto label_7F3080E4;
    case 0x7F3080E8u: goto label_7F3080E8;
    default: return;
    }
label_7F3040EC:
    ctx->pc = 0x7F3040ECu;
    ctx->downcount -= 6;
    // 7F3040EC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3040F0:
    ctx->pc = 0x7F3040F0u;
    // 7F3040F0: or   r5, r8, r8
    {
        ctx->gpr[5] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3040F4:
    ctx->pc = 0x7F3040F4u;
    // 7F3040F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3040F8:
    ctx->pc = 0x7F3040F8u;
    // 7F3040F8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3040FC:
    ctx->pc = 0x7F3040FCu;
    // 7F3040FC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3040FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F304100:
    ctx->pc = 0x7F304100u;
    // 7F304100: bl      0x7F114508
    {
            ctx->lr = 0x7F304104u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F304104:
    ctx->pc = 0x7F304104u;
    ctx->downcount -= 5;
    // 7F304104: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304108:
    ctx->pc = 0x7F304108u;
    // 7F304108: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30410C:
    ctx->pc = 0x7F30410Cu;
    // 7F30410C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F304110:
    ctx->pc = 0x7F304110u;
    // 7F304110: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304114:
    ctx->pc = 0x7F304114u;
    ctx->downcount -= 4;
    // 7F304114: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304118:
    ctx->pc = 0x7F304118u;
    // 7F304118: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30411C:
    ctx->pc = 0x7F30411Cu;
    // 7F30411C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304120:
    ctx->pc = 0x7F304120u;
    // 7F304120: bl      0x7F3B7208
    {
            ctx->lr = 0x7F304124u;
            ctx->pc = 0x7F3B7208u;
            return;
    }

label_7F304124:
    ctx->pc = 0x7F304124u;
    ctx->downcount -= 5;
    // 7F304124: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304128:
    ctx->pc = 0x7F304128u;
    // 7F304128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30412C:
    ctx->pc = 0x7F30412Cu;
    // 7F30412C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304130:
    ctx->pc = 0x7F304130u;
    // 7F304130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304134:
    ctx->pc = 0x7F304134u;
    ctx->downcount -= 32;
    // 7F304134: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304138:
    ctx->pc = 0x7F304138u;
    // 7F304138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30413C:
    ctx->pc = 0x7F30413Cu;
    // 7F30413C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304140:
    ctx->pc = 0x7F304140u;
    // 7F304140: stfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F304144:
    ctx->pc = 0x7F304144u;
    // 7F304144: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F304144u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F304148:
    ctx->pc = 0x7F304148u;
    // 7F304148: stmw     r24, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30414C:
    ctx->pc = 0x7F30414Cu;
    // 7F30414C: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304150:
    ctx->pc = 0x7F304150u;
    // 7F304150: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F304154:
    ctx->pc = 0x7F304154u;
    // 7F304154: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F304158:
    ctx->pc = 0x7F304158u;
    // 7F304158: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F30415C:
    ctx->pc = 0x7F30415Cu;
    // 7F30415C: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F304160:
    ctx->pc = 0x7F304160u;
    // 7F304160: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F304164:
    ctx->pc = 0x7F304164u;
    // 7F304164: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F304168:
    ctx->pc = 0x7F304168u;
    // 7F304168: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F30416C:
    ctx->pc = 0x7F30416Cu;
    // 7F30416C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304170:
    ctx->pc = 0x7F304170u;
    // 7F304170: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304174:
    ctx->pc = 0x7F304174u;
    // 7F304174: stw     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304178:
    ctx->pc = 0x7F304178u;
    // 7F304178: stw     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30417C:
    ctx->pc = 0x7F30417Cu;
    // 7F30417C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304180:
    ctx->pc = 0x7F304180u;
    // 7F304180: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304184:
    ctx->pc = 0x7F304184u;
    // 7F304184: stw     r3, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304188:
    ctx->pc = 0x7F304188u;
    // 7F304188: stw     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30418C:
    ctx->pc = 0x7F30418Cu;
    ctx->downcount -= 8;
    // 7F30418C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F30418Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F304190:
    // 7F304190: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F304194:
    // 7F304194: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F304198:
    // 7F304198: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30419C:
    // 7F30419C: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3041A0:
    // 7F3041A0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3041A4:
    // 7F3041A4: add   r8, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F3041A8:
    // 7F3041A8: bl      0x7F0FB7D8
    {
            ctx->lr = 0x7F3041ACu;
            ctx->pc = 0x7F0FB7D8u;
            return;
    }

label_7F3041AC:
    ctx->downcount -= 5;
    // 7F3041AC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3041B0:
    // 7F3041B0: or   r29, r29, r3
    {
        ctx->gpr[29] = ctx->gpr[29] | ctx->gpr[3];
    }

label_7F3041B4:
    // 7F3041B4: cmpwi   r30, 13
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3041B8:
    // 7F3041B8: addi    r31, r31, 64
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3041BC:
    // 7F3041BC: bc    12, 0, 0x7F30418C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30418Cu;
                return;
            }
            goto label_7F30418C;
        }
    }

label_7F3041C0:
    ctx->pc = 0x7F3041C0u;
    ctx->downcount -= 18;
    // 7F3041C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3041C4:
    ctx->pc = 0x7F3041C4u;
    // 7F3041C4: lfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3041C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3041C8:
    ctx->pc = 0x7F3041C8u;
    // 7F3041C8: lmw     r24, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3041CC:
    ctx->pc = 0x7F3041CCu;
    // 7F3041CC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3041D0:
    ctx->pc = 0x7F3041D0u;
    // 7F3041D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3041D4:
    ctx->pc = 0x7F3041D4u;
    // 7F3041D4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3041D8:
    ctx->pc = 0x7F3041D8u;
    // 7F3041D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3041DC:
    ctx->pc = 0x7F3041DCu;
    ctx->downcount -= 33;
    // 7F3041DC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3041E0:
    ctx->pc = 0x7F3041E0u;
    // 7F3041E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3041E4:
    ctx->pc = 0x7F3041E4u;
    // 7F3041E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3041E8:
    ctx->pc = 0x7F3041E8u;
    // 7F3041E8: stfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3041E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3041EC:
    ctx->pc = 0x7F3041ECu;
    // 7F3041EC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3041ECu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F3041F0:
    ctx->pc = 0x7F3041F0u;
    // 7F3041F0: stmw     r23, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3041F4:
    ctx->pc = 0x7F3041F4u;
    // 7F3041F4: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3041F8:
    ctx->pc = 0x7F3041F8u;
    // 7F3041F8: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3041FC:
    ctx->pc = 0x7F3041FCu;
    // 7F3041FC: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F304200:
    ctx->pc = 0x7F304200u;
    // 7F304200: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F304204:
    ctx->pc = 0x7F304204u;
    // 7F304204: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F304208:
    ctx->pc = 0x7F304208u;
    // 7F304208: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F30420C:
    ctx->pc = 0x7F30420Cu;
    // 7F30420C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F304210:
    ctx->pc = 0x7F304210u;
    // 7F304210: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F304214:
    ctx->pc = 0x7F304214u;
    // 7F304214: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F304218:
    ctx->pc = 0x7F304218u;
    // 7F304218: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30421C:
    ctx->pc = 0x7F30421Cu;
    // 7F30421C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304220:
    ctx->pc = 0x7F304220u;
    // 7F304220: stw     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304224:
    ctx->pc = 0x7F304224u;
    // 7F304224: stw     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304228:
    ctx->pc = 0x7F304228u;
    // 7F304228: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30422C:
    ctx->pc = 0x7F30422Cu;
    // 7F30422C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304230:
    ctx->pc = 0x7F304230u;
    // 7F304230: stw     r3, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304234:
    ctx->pc = 0x7F304234u;
    // 7F304234: stw     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304238:
    ctx->pc = 0x7F304238u;
    ctx->downcount -= 9;
    // 7F304238: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F304238u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F30423C:
    // 7F30423C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F304240:
    // 7F304240: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F304244:
    // 7F304244: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F304248:
    // 7F304248: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30424C:
    // 7F30424C: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F304250:
    // 7F304250: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F304254:
    // 7F304254: add   r9, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F304258:
    // 7F304258: bl      0x7F0FB850
    {
            ctx->lr = 0x7F30425Cu;
            ctx->pc = 0x7F0FB850u;
            return;
    }

label_7F30425C:
    ctx->downcount -= 5;
    // 7F30425C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F304260:
    // 7F304260: or   r29, r29, r3
    {
        ctx->gpr[29] = ctx->gpr[29] | ctx->gpr[3];
    }

label_7F304264:
    // 7F304264: cmpwi   r30, 13
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F304268:
    // 7F304268: addi    r31, r31, 64
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(64);

label_7F30426C:
    // 7F30426C: bc    12, 0, 0x7F304238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304238u;
                return;
            }
            goto label_7F304238;
        }
    }

label_7F304270:
    ctx->pc = 0x7F304270u;
    ctx->downcount -= 18;
    // 7F304270: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F304274:
    ctx->pc = 0x7F304274u;
    // 7F304274: lfd     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304278:
    ctx->pc = 0x7F304278u;
    // 7F304278: lmw     r23, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30427C:
    ctx->pc = 0x7F30427Cu;
    // 7F30427C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304280:
    ctx->pc = 0x7F304280u;
    // 7F304280: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304284:
    ctx->pc = 0x7F304284u;
    // 7F304284: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F304288:
    ctx->pc = 0x7F304288u;
    // 7F304288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30428C:
    ctx->pc = 0x7F30428Cu;
    ctx->downcount -= 50;
    // 7F30428C: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304290:
    ctx->pc = 0x7F304290u;
    // 7F304290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304294:
    ctx->pc = 0x7F304294u;
    // 7F304294: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304298:
    ctx->pc = 0x7F304298u;
    // 7F304298: stfd     f31, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F30429C:
    ctx->pc = 0x7F30429Cu;
    // 7F30429C: psq_st   f31, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30429Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F30429Cu);
        if (ctx->exception) return;
    }

label_7F3042A0:
    ctx->pc = 0x7F3042A0u;
    // 7F3042A0: stfd     f30, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3042A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F3042A4:
    ctx->pc = 0x7F3042A4u;
    // 7F3042A4: psq_st   f30, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3042A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F3042A4u);
        if (ctx->exception) return;
    }

label_7F3042A8:
    ctx->pc = 0x7F3042A8u;
    // 7F3042A8: stfd     f29, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3042A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F3042AC:
    ctx->pc = 0x7F3042ACu;
    // 7F3042AC: psq_st   f29, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3042ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F3042ACu);
        if (ctx->exception) return;
    }

label_7F3042B0:
    ctx->pc = 0x7F3042B0u;
    // 7F3042B0: stfd     f28, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3042B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F3042B4:
    ctx->pc = 0x7F3042B4u;
    // 7F3042B4: psq_st   f28, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3042B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F3042B4u);
        if (ctx->exception) return;
    }

label_7F3042B8:
    ctx->pc = 0x7F3042B8u;
    // 7F3042B8: stfd     f27, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3042B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F3042BC:
    ctx->pc = 0x7F3042BCu;
    // 7F3042BC: psq_st   f27, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3042BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F3042BCu);
        if (ctx->exception) return;
    }

label_7F3042C0:
    ctx->pc = 0x7F3042C0u;
    // 7F3042C0: stmw     r14, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3042C4:
    ctx->pc = 0x7F3042C4u;
    // 7F3042C4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3042C8:
    ctx->pc = 0x7F3042C8u;
    // 7F3042C8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F3042CC:
    ctx->pc = 0x7F3042CCu;
    // 7F3042CC: lwz     r0, 328(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3042D0:
    ctx->pc = 0x7F3042D0u;
    // 7F3042D0: addi    r6, r3, -21852
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F3042D4:
    ctx->pc = 0x7F3042D4u;
    // 7F3042D4: lwz     r3, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3042D8:
    ctx->pc = 0x7F3042D8u;
    // 7F3042D8: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3042DC:
    ctx->pc = 0x7F3042DCu;
    // 7F3042DC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3042E0:
    ctx->pc = 0x7F3042E0u;
    // 7F3042E0: lwz     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3042E4:
    ctx->pc = 0x7F3042E4u;
    // 7F3042E4: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3042E8:
    ctx->pc = 0x7F3042E8u;
    // 7F3042E8: addi    r27, r6, 7168
    ctx->gpr[27] = ctx->gpr[6] + (u32)(s32)(7168);

label_7F3042EC:
    ctx->pc = 0x7F3042ECu;
    // 7F3042EC: lwz     r14, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_7F3042F0:
    ctx->pc = 0x7F3042F0u;
    // 7F3042F0: addi    r18, r6, 14336
    ctx->gpr[18] = ctx->gpr[6] + (u32)(s32)(14336);

label_7F3042F4:
    ctx->pc = 0x7F3042F4u;
    // 7F3042F4: lwz     r28, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3042F8:
    ctx->pc = 0x7F3042F8u;
    // 7F3042F8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F3042FC:
    ctx->pc = 0x7F3042FCu;
    // 7F3042FC: lwz     r31, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F304300:
    ctx->pc = 0x7F304300u;
    // 7F304300: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F304304:
    ctx->pc = 0x7F304304u;
    // 7F304304: lwz     r30, 364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(364);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F304308:
    ctx->pc = 0x7F304308u;
    // 7F304308: lwz     r19, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F30430C:
    ctx->pc = 0x7F30430Cu;
    // 7F30430C: lwz     r25, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F304310:
    ctx->pc = 0x7F304310u;
    // 7F304310: lwz     r20, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F304314:
    ctx->pc = 0x7F304314u;
    // 7F304314: lwz     r21, 376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(376);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F304318:
    ctx->pc = 0x7F304318u;
    // 7F304318: lfs     f30, 340(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F304318u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F30431C:
    ctx->pc = 0x7F30431Cu;
    // 7F30431C: lfs     f29, 348(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30431Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F304320:
    ctx->pc = 0x7F304320u;
    // 7F304320: lfs     f28, 344(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F304320u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F304324:
    ctx->pc = 0x7F304324u;
    // 7F304324: lwz     r22, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F304328:
    ctx->pc = 0x7F304328u;
    // 7F304328: bl      0x7F304C70
    {
            ctx->lr = 0x7F30432Cu;
            goto label_7F304C70;
    }

label_7F30432C:
    ctx->pc = 0x7F30432Cu;
    ctx->downcount -= 3;
    // 7F30432C: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304330:
    ctx->pc = 0x7F304330u;
    // 7F304330: cmplwi  r3, 0x0000
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

label_7F304334:
    ctx->pc = 0x7F304334u;
    // 7F304334: bc    12, 2, 0x7F304378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304378;
        }
    }

label_7F304338:
    ctx->pc = 0x7F304338u;
    ctx->downcount -= 7;
    // 7F304338: lwz     r24, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F30433C:
    ctx->pc = 0x7F30433Cu;
    // 7F30433C: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F304340:
    ctx->pc = 0x7F304340u;
    // 7F304340: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F304344:
    ctx->pc = 0x7F304344u;
    // 7F304344: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F304348:
    ctx->pc = 0x7F304348u;
    // 7F304348: lwz     r3, 72(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30434C:
    ctx->pc = 0x7F30434Cu;
    // 7F30434C: lwz     r15, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_7F304350:
    ctx->pc = 0x7F304350u;
    // 7F304350: b       0x7F304370
    {
            goto label_7F304370;
    }

label_7F304354:
    ctx->downcount -= 4;
    // 7F304354: addi    r4, r17, 444
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(444);

label_7F304358:
    // 7F304358: add   r3, r18, r23
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30435C:
    // 7F30435C: add   r4, r24, r4
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F304360:
    // 7F304360: bl      0x7F304C70
    {
            ctx->lr = 0x7F304364u;
            goto label_7F304C70;
    }

label_7F304364:
    ctx->downcount -= 3;
    // 7F304364: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F304368:
    // 7F304368: addi    r17, r17, 324
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(324);

label_7F30436C:
    // 7F30436C: addi    r23, r23, 64
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(64);

label_7F304370:
    ctx->downcount -= 2;
    // 7F304370: cmpw    r16, r15
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[15]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F304374:
    // 7F304374: bc    12, 0, 0x7F304354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304354u;
                return;
            }
            goto label_7F304354;
        }
    }

label_7F304378:
    ctx->pc = 0x7F304378u;
    ctx->downcount -= 8;
    // 7F304378: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30437C:
    ctx->pc = 0x7F30437Cu;
    // 7F30437C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F304380:
    ctx->pc = 0x7F304380u;
    // 7F304380: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304384:
    ctx->pc = 0x7F304384u;
    // 7F304384: lwz     r17, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F304388:
    ctx->pc = 0x7F304388u;
    // 7F304388: lfs     f31, 32308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F304388u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F30438C:
    ctx->pc = 0x7F30438Cu;
    // 7F30438C: addi    r24, r5, -1052
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F304390:
    ctx->pc = 0x7F304390u;
    // 7F304390: addi    r23, r4, -1068
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F304394:
    ctx->pc = 0x7F304394u;
    // 7F304394: b       0x7F304A7C
    {
            goto label_7F304A7C;
    }

label_7F304398:
    ctx->pc = 0x7F304398u;
    ctx->downcount -= 3;
    // 7F304398: lfs     f0, 4(r14)
    if (!ppc_fp_available_inline(ctx, 0x7F304398u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30439C:
    ctx->pc = 0x7F30439Cu;
    // 7F30439C: fcmpu   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30439Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], false);

label_7F3043A0:
    // 7F3043A0: bc    4, 2, 0x7F30449C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30449C;
        }
    }

label_7F3043A4:
    ctx->pc = 0x7F3043A4u;
    ctx->downcount -= 42;
    // 7F3043A4: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3043A8:
    // 7F3043A8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3043AC:
    ctx->pc = 0x7F3043ACu;
    // 7F3043AC: lwz     r7, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3043B0:
    // 7F3043B0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3043B4:
    // 7F3043B4: addi    r6, r4, -1052
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F3043B8:
    // 7F3043B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3043BC:
    ctx->pc = 0x7F3043BCu;
    // 7F3043BC: stw     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3043C0:
    // 7F3043C0: addi    r5, r3, -1068
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3043C4:
    ctx->pc = 0x7F3043C4u;
    // 7F3043C4: stw     r7, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3043C8:
    ctx->pc = 0x7F3043C8u;
    // 7F3043C8: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3043CC:
    ctx->pc = 0x7F3043CCu;
    // 7F3043CC: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3043D0:
    ctx->pc = 0x7F3043D0u;
    // 7F3043D0: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3043D4:
    ctx->pc = 0x7F3043D4u;
    // 7F3043D4: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3043D8:
    ctx->pc = 0x7F3043D8u;
    // 7F3043D8: lwz     r4, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3043DC:
    ctx->pc = 0x7F3043DCu;
    // 7F3043DC: lwz     r3, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3043E0:
    ctx->pc = 0x7F3043E0u;
    // 7F3043E0: stw     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3043E4:
    ctx->pc = 0x7F3043E4u;
    // 7F3043E4: stw     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3043E8:
    ctx->pc = 0x7F3043E8u;
    // 7F3043E8: lwz     r4, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3043EC:
    ctx->pc = 0x7F3043ECu;
    // 7F3043EC: lwz     r3, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3043F0:
    ctx->pc = 0x7F3043F0u;
    // 7F3043F0: stw     r4, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3043F4:
    ctx->pc = 0x7F3043F4u;
    // 7F3043F4: stw     r3, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3043F8:
    ctx->pc = 0x7F3043F8u;
    // 7F3043F8: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3043FC:
    ctx->pc = 0x7F3043FCu;
    // 7F3043FC: lwz     r3, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304400:
    ctx->pc = 0x7F304400u;
    // 7F304400: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F304404:
    ctx->pc = 0x7F304404u;
    // 7F304404: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304408:
    ctx->pc = 0x7F304408u;
    // 7F304408: lwz     r4, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30440C:
    ctx->pc = 0x7F30440Cu;
    // 7F30440C: lwz     r3, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304410:
    ctx->pc = 0x7F304410u;
    // 7F304410: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F304414:
    ctx->pc = 0x7F304414u;
    // 7F304414: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304418:
    ctx->pc = 0x7F304418u;
    // 7F304418: lwz     r4, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30441C:
    ctx->pc = 0x7F30441Cu;
    // 7F30441C: lwz     r3, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304420:
    ctx->pc = 0x7F304420u;
    // 7F304420: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F304424:
    ctx->pc = 0x7F304424u;
    // 7F304424: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304428:
    ctx->pc = 0x7F304428u;
    // 7F304428: lwz     r4, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30442C:
    ctx->pc = 0x7F30442Cu;
    // 7F30442C: lwz     r3, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304430:
    ctx->pc = 0x7F304430u;
    // 7F304430: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F304434:
    ctx->pc = 0x7F304434u;
    // 7F304434: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304438:
    ctx->pc = 0x7F304438u;
    // 7F304438: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30443C:
    ctx->pc = 0x7F30443Cu;
    // 7F30443C: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304440:
    ctx->pc = 0x7F304440u;
    // 7F304440: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304444:
    ctx->pc = 0x7F304444u;
    // 7F304444: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304448:
    // 7F304448: bl      0x7F304C08
    {
            ctx->lr = 0x7F30444Cu;
            goto label_7F304C08;
    }

label_7F30444C:
    ctx->downcount -= 1;
    // 7F30444C: bl      0x7F304B4C
    {
            ctx->lr = 0x7F304450u;
            goto label_7F304B4C;
    }

label_7F304450:
    ctx->downcount -= 19;
    // 7F304450: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304454:
    ctx->pc = 0x7F304454u;
    // 7F304454: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304458:
    ctx->pc = 0x7F304458u;
    // 7F304458: lwz     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30445C:
    // 7F30445C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304460:
    ctx->pc = 0x7F304460u;
    // 7F304460: lwz     r6, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304464:
    ctx->pc = 0x7F304464u;
    // 7F304464: sth     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F304468:
    ctx->pc = 0x7F304468u;
    // 7F304468: lwz     r5, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30446C:
    ctx->pc = 0x7F30446Cu;
    // 7F30446C: sth     r4, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F304470:
    ctx->pc = 0x7F304470u;
    // 7F304470: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304474:
    ctx->pc = 0x7F304474u;
    // 7F304474: sth     r6, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F304478:
    ctx->pc = 0x7F304478u;
    // 7F304478: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30447C:
    ctx->pc = 0x7F30447Cu;
    // 7F30447C: sth     r0, 6(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F304480:
    ctx->pc = 0x7F304480u;
    // 7F304480: lwz     r3, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304484:
    ctx->pc = 0x7F304484u;
    // 7F304484: sth     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F304488:
    ctx->pc = 0x7F304488u;
    // 7F304488: lwz     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30448C:
    ctx->pc = 0x7F30448Cu;
    // 7F30448C: sth     r4, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F304490:
    ctx->pc = 0x7F304490u;
    // 7F304490: sth     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F304494:
    ctx->pc = 0x7F304494u;
    // 7F304494: sth     r0, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F304498:
    // 7F304498: b       0x7F304A4C
    {
            goto label_7F304A4C;
    }

label_7F30449C:
    ctx->pc = 0x7F30449Cu;
    ctx->downcount -= 23;
    // 7F30449C: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3044A0:
    // 7F3044A0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3044A4:
    ctx->pc = 0x7F3044A4u;
    // 7F3044A4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3044A8:
    // 7F3044A8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3044AC:
    // 7F3044AC: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F3044B0:
    ctx->pc = 0x7F3044B0u;
    // 7F3044B0: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F3044B0u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F3044B4:
    ctx->pc = 0x7F3044B4u;
    // 7F3044B4: stwu     r5, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F3044B8:
    ctx->pc = 0x7F3044B8u;
    // 7F3044B8: fmuls   f27, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3044B8u)) return;
    ppc_fmuls(ctx, 27, 30, 0);

label_7F3044BC:
    ctx->pc = 0x7F3044BCu;
    // 7F3044BC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3044C0:
    // 7F3044C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3044C4:
    ctx->pc = 0x7F3044C4u;
    // 7F3044C4: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3044C8:
    ctx->pc = 0x7F3044C8u;
    // 7F3044C8: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3044CC:
    ctx->pc = 0x7F3044CCu;
    // 7F3044CC: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3044D0:
    ctx->pc = 0x7F3044D0u;
    // 7F3044D0: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3044D4:
    ctx->pc = 0x7F3044D4u;
    // 7F3044D4: lwz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3044D8:
    ctx->pc = 0x7F3044D8u;
    // 7F3044D8: lwz     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3044DC:
    ctx->pc = 0x7F3044DCu;
    // 7F3044DC: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3044E0:
    ctx->pc = 0x7F3044E0u;
    // 7F3044E0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3044E4:
    ctx->pc = 0x7F3044E4u;
    // 7F3044E4: lwz     r5, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3044E8:
    ctx->pc = 0x7F3044E8u;
    // 7F3044E8: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3044EC:
    ctx->pc = 0x7F3044ECu;
    // 7F3044EC: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3044F0:
    ctx->pc = 0x7F3044F0u;
    // 7F3044F0: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3044F4:
    // 7F3044F4: bl      0x80026020
    {
            ctx->lr = 0x7F3044F8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3044F8:
    ctx->downcount -= 16;
    // 7F3044F8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3044FC:
    ctx->pc = 0x7F3044FCu;
    // 7F3044FC: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304500:
    // 7F304500: addi    r6, r3, -1052
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304504:
    ctx->pc = 0x7F304504u;
    // 7F304504: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304508:
    // 7F304508: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30450C:
    // 7F30450C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304510:
    ctx->pc = 0x7F304510u;
    // 7F304510: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F304514:
    // 7F304514: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F304518:
    // 7F304518: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F30451C:
    ctx->pc = 0x7F30451Cu;
    // 7F30451C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304520:
    // 7F304520: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304524:
    ctx->pc = 0x7F304524u;
    // 7F304524: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F304528:
    ctx->pc = 0x7F304528u;
    // 7F304528: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30452C:
    ctx->pc = 0x7F30452Cu;
    // 7F30452C: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F304530:
    ctx->pc = 0x7F304530u;
    // 7F304530: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304534:
    // 7F304534: bl      0x80025FD8
    {
            ctx->lr = 0x7F304538u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F304538:
    ctx->pc = 0x7F304538u;
    ctx->downcount -= 13;
    // 7F304538: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30453C:
    // 7F30453C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304540:
    ctx->pc = 0x7F304540u;
    // 7F304540: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304544:
    // 7F304544: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304548:
    // 7F304548: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F30454C:
    ctx->pc = 0x7F30454Cu;
    // 7F30454C: stwu     r5, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F304550:
    ctx->pc = 0x7F304550u;
    // 7F304550: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304554:
    // 7F304554: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304558:
    ctx->pc = 0x7F304558u;
    // 7F304558: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30455C:
    ctx->pc = 0x7F30455Cu;
    // 7F30455C: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304560:
    ctx->pc = 0x7F304560u;
    // 7F304560: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304564:
    ctx->pc = 0x7F304564u;
    // 7F304564: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304568:
    // 7F304568: bl      0x80025FFC
    {
            ctx->lr = 0x7F30456Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F30456C:
    ctx->downcount -= 5;
    // 7F30456C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304570:
    ctx->pc = 0x7F304570u;
    // 7F304570: fmr    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F304570u)) return;
    ctx->fpr[1] = ctx->fpr[28];

label_7F304574:
    // 7F304574: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304578:
    // 7F304578: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30457C:
    // 7F30457C: bl      0x80026020
    {
            ctx->lr = 0x7F304580u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F304580:
    ctx->downcount -= 10;
    // 7F304580: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F304584:
    // 7F304584: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304588:
    // 7F304588: addi    r5, r4, 32312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32312);

label_7F30458C:
    ctx->pc = 0x7F30458Cu;
    // 7F30458C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F30458Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F304590:
    // 7F304590: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304594:
    // 7F304594: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F304598:
    ctx->pc = 0x7F304598u;
    // 7F304598: stfs     f0, 12(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F304598u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30459C:
    // 7F30459C: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F3045A0:
    // 7F3045A0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3045A4:
    // 7F3045A4: bl      0x80025FD8
    {
            ctx->lr = 0x7F3045A8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3045A8:
    ctx->pc = 0x7F3045A8u;
    ctx->downcount -= 13;
    // 7F3045A8: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3045AC:
    // 7F3045AC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3045B0:
    ctx->pc = 0x7F3045B0u;
    // 7F3045B0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3045B4:
    // 7F3045B4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3045B8:
    // 7F3045B8: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F3045BC:
    ctx->pc = 0x7F3045BCu;
    // 7F3045BC: stwu     r5, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F3045C0:
    ctx->pc = 0x7F3045C0u;
    // 7F3045C0: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3045C4:
    // 7F3045C4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3045C8:
    ctx->pc = 0x7F3045C8u;
    // 7F3045C8: lwz     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3045CC:
    ctx->pc = 0x7F3045CCu;
    // 7F3045CC: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3045D0:
    ctx->pc = 0x7F3045D0u;
    // 7F3045D0: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3045D4:
    ctx->pc = 0x7F3045D4u;
    // 7F3045D4: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3045D8:
    // 7F3045D8: bl      0x80025FD8
    {
            ctx->lr = 0x7F3045DCu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3045DC:
    ctx->downcount -= 3;
    // 7F3045DC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3045E0:
    // 7F3045E0: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3045E4:
    // 7F3045E4: bl      0x80026080
    {
            ctx->lr = 0x7F3045E8u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3045E8:
    ctx->downcount -= 4;
    // 7F3045E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3045EC:
    ctx->pc = 0x7F3045ECu;
    // 7F3045EC: lfs     f0, 32316(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3045ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3045F0:
    ctx->pc = 0x7F3045F0u;
    // 7F3045F0: fmuls   f2, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F3045F0u)) return;
    ppc_fmuls(ctx, 2, 0, 27);

label_7F3045F4:
    // 7F3045F4: bl      0x7F304AF8
    {
            ctx->lr = 0x7F3045F8u;
            goto label_7F304AF8;
    }

label_7F3045F8:
    ctx->downcount -= 4;
    // 7F3045F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3045FC:
    ctx->pc = 0x7F3045FCu;
    // 7F3045FC: lfs     f0, 32320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3045FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F304600:
    ctx->pc = 0x7F304600u;
    // 7F304600: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F304600u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F304604:
    // 7F304604: bc    4, 0, 0x7F304618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F304618;
        }
    }

label_7F304608:
    ctx->downcount -= 4;
    // 7F304608: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30460C:
    // 7F30460C: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304610:
    // 7F304610: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304614:
    // 7F304614: bl      0x80026020
    {
            ctx->lr = 0x7F304618u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F304618:
    ctx->downcount -= 16;
    // 7F304618: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30461C:
    ctx->pc = 0x7F30461Cu;
    // 7F30461C: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304620:
    // 7F304620: addi    r6, r3, -1084
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F304624:
    ctx->pc = 0x7F304624u;
    // 7F304624: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304628:
    // 7F304628: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30462C:
    // 7F30462C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304630:
    ctx->pc = 0x7F304630u;
    // 7F304630: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F304634:
    // 7F304634: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304638:
    // 7F304638: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F30463C:
    ctx->pc = 0x7F30463Cu;
    // 7F30463C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304640:
    // 7F304640: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304644:
    ctx->pc = 0x7F304644u;
    // 7F304644: lwz     r7, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F304648:
    ctx->pc = 0x7F304648u;
    // 7F304648: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30464C:
    ctx->pc = 0x7F30464Cu;
    // 7F30464C: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F304650:
    ctx->pc = 0x7F304650u;
    // 7F304650: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304654:
    // 7F304654: bl      0x80025FD8
    {
            ctx->lr = 0x7F304658u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F304658:
    ctx->downcount -= 15;
    // 7F304658: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F30465C:
    // 7F30465C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304660:
    // 7F304660: addi    r5, r4, -1068
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F304664:
    ctx->pc = 0x7F304664u;
    // 7F304664: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304668:
    // 7F304668: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F30466C:
    ctx->pc = 0x7F30466Cu;
    // 7F30466C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304670:
    // 7F304670: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304674:
    // 7F304674: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F304678:
    ctx->pc = 0x7F304678u;
    // 7F304678: stw     r6, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30467C:
    ctx->pc = 0x7F30467Cu;
    // 7F30467C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304680:
    ctx->pc = 0x7F304680u;
    // 7F304680: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304684:
    ctx->pc = 0x7F304684u;
    // 7F304684: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304688:
    ctx->pc = 0x7F304688u;
    // 7F304688: stw     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30468C:
    ctx->pc = 0x7F30468Cu;
    // 7F30468C: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304690:
    // 7F304690: bl      0x80025FFC
    {
            ctx->lr = 0x7F304694u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F304694:
    ctx->downcount -= 3;
    // 7F304694: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304698:
    // 7F304698: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F30469C:
    // 7F30469C: bl      0x80026080
    {
            ctx->lr = 0x7F3046A0u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F3046A0:
    ctx->pc = 0x7F3046A0u;
    ctx->downcount -= 2;
    // 7F3046A0: fmr    f2, f27
    if (!ppc_fp_available_inline(ctx, 0x7F3046A0u)) return;
    ctx->fpr[2] = ctx->fpr[27];

label_7F3046A4:
    // 7F3046A4: bl      0x7F304AF8
    {
            ctx->lr = 0x7F3046A8u;
            goto label_7F304AF8;
    }

label_7F3046A8:
    ctx->downcount -= 4;
    // 7F3046A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3046AC:
    ctx->pc = 0x7F3046ACu;
    // 7F3046AC: lfs     f0, 32320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3046ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3046B0:
    ctx->pc = 0x7F3046B0u;
    // 7F3046B0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3046B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F3046B4:
    // 7F3046B4: bc    4, 0, 0x7F304744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F304744;
        }
    }

label_7F3046B8:
    ctx->downcount -= 4;
    // 7F3046B8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3046BC:
    // 7F3046BC: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3046C0:
    // 7F3046C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3046C4:
    // 7F3046C4: bl      0x80026020
    {
            ctx->lr = 0x7F3046C8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3046C8:
    ctx->downcount -= 7;
    // 7F3046C8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3046CC:
    // 7F3046CC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3046D0:
    // 7F3046D0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3046D4:
    // 7F3046D4: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3046D8:
    // 7F3046D8: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F3046DC:
    // 7F3046DC: addi    r5, r5, -1052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F3046E0:
    // 7F3046E0: bl      0x80025FD8
    {
            ctx->lr = 0x7F3046E4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3046E4:
    ctx->downcount -= 14;
    // 7F3046E4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3046E8:
    ctx->pc = 0x7F3046E8u;
    // 7F3046E8: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3046EC:
    // 7F3046EC: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3046F0:
    ctx->pc = 0x7F3046F0u;
    // 7F3046F0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3046F4:
    // 7F3046F4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3046F8:
    ctx->pc = 0x7F3046F8u;
    // 7F3046F8: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3046FC:
    // 7F3046FC: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304700:
    // 7F304700: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F304704:
    ctx->pc = 0x7F304704u;
    // 7F304704: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304708:
    ctx->pc = 0x7F304708u;
    // 7F304708: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30470C:
    ctx->pc = 0x7F30470Cu;
    // 7F30470C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304710:
    ctx->pc = 0x7F304710u;
    // 7F304710: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304714:
    ctx->pc = 0x7F304714u;
    // 7F304714: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304718:
    // 7F304718: bl      0x80025FFC
    {
            ctx->lr = 0x7F30471Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F30471C:
    ctx->downcount -= 10;
    // 7F30471C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304720:
    // 7F304720: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304724:
    ctx->pc = 0x7F304724u;
    // 7F304724: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304728:
    ctx->pc = 0x7F304728u;
    // 7F304728: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30472C:
    ctx->pc = 0x7F30472Cu;
    // 7F30472C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304730:
    ctx->pc = 0x7F304730u;
    // 7F304730: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304734:
    ctx->pc = 0x7F304734u;
    // 7F304734: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304738:
    ctx->pc = 0x7F304738u;
    // 7F304738: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30473C:
    ctx->pc = 0x7F30473Cu;
    // 7F30473C: stw     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304740:
    ctx->pc = 0x7F304740u;
    // 7F304740: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304744:
    ctx->downcount -= 13;
    // 7F304744: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304748:
    // 7F304748: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F30474C:
    ctx->pc = 0x7F30474Cu;
    // 7F30474C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304750:
    ctx->pc = 0x7F304750u;
    // 7F304750: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304754:
    ctx->pc = 0x7F304754u;
    // 7F304754: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304758:
    ctx->pc = 0x7F304758u;
    // 7F304758: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30475C:
    ctx->pc = 0x7F30475Cu;
    // 7F30475C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304760:
    ctx->pc = 0x7F304760u;
    // 7F304760: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304764:
    ctx->pc = 0x7F304764u;
    // 7F304764: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304768:
    ctx->pc = 0x7F304768u;
    // 7F304768: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30476C:
    ctx->pc = 0x7F30476Cu;
    // 7F30476C: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304770:
    // 7F304770: cmplwi  r3, 0x0000
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

label_7F304774:
    // 7F304774: bc    12, 2, 0x7F304914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304914;
        }
    }

label_7F304778:
    ctx->pc = 0x7F304778u;
    ctx->downcount -= 3;
    // 7F304778: lwz     r6, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30477C:
    // 7F30477C: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F304780:
    // 7F304780: bc    4, 2, 0x7F3047E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3047E0;
        }
    }

label_7F304784:
    ctx->pc = 0x7F304784u;
    ctx->downcount -= 3;
    // 7F304784: lwz     r0, 404(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304788:
    // 7F304788: cmpwi   r0, 0
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

label_7F30478C:
    // 7F30478C: bc    12, 2, 0x7F3047B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3047B8;
        }
    }

label_7F304790:
    ctx->pc = 0x7F304790u;
    ctx->downcount -= 7;
    // 7F304790: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304794:
    // 7F304794: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F304798:
    ctx->pc = 0x7F304798u;
    // 7F304798: lfs     f1, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F304798u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30479C:
    // 7F30479C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3047A0:
    // 7F3047A0: or   r7, r18, r18
    {
        ctx->gpr[7] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3047A4:
    // 7F3047A4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3047A8:
    // 7F3047A8: bl      0x7F304134
    {
            ctx->lr = 0x7F3047ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304134u;
                return;
            }
            goto label_7F304134;
    }

label_7F3047AC:
    ctx->downcount -= 2;
    // 7F3047AC: cmpwi   r3, 0
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

label_7F3047B0:
    // 7F3047B0: bc    12, 2, 0x7F304914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304914;
        }
    }

label_7F3047B4:
    ctx->downcount -= 1;
    // 7F3047B4: b       0x7F304838
    {
            goto label_7F304838;
    }

label_7F3047B8:
    ctx->pc = 0x7F3047B8u;
    ctx->downcount -= 7;
    // 7F3047B8: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3047BC:
    // 7F3047BC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3047C0:
    ctx->pc = 0x7F3047C0u;
    // 7F3047C0: lfs     f1, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3047C0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3047C4:
    // 7F3047C4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3047C8:
    // 7F3047C8: or   r7, r18, r18
    {
        ctx->gpr[7] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3047CC:
    // 7F3047CC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3047D0:
    // 7F3047D0: bl      0x7F0FB64C
    {
            ctx->lr = 0x7F3047D4u;
            ctx->pc = 0x7F0FB64Cu;
            return;
    }

label_7F3047D4:
    ctx->downcount -= 2;
    // 7F3047D4: cmpwi   r3, 0
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

label_7F3047D8:
    // 7F3047D8: bc    12, 2, 0x7F304914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304914;
        }
    }

label_7F3047DC:
    ctx->downcount -= 1;
    // 7F3047DC: b       0x7F304838
    {
            goto label_7F304838;
    }

label_7F3047E0:
    ctx->pc = 0x7F3047E0u;
    ctx->downcount -= 3;
    // 7F3047E0: lwz     r0, 404(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3047E4:
    // 7F3047E4: cmpwi   r0, 0
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

label_7F3047E8:
    // 7F3047E8: bc    12, 2, 0x7F304814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304814;
        }
    }

label_7F3047EC:
    ctx->pc = 0x7F3047ECu;
    ctx->downcount -= 7;
    // 7F3047EC: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3047F0:
    // 7F3047F0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3047F4:
    ctx->pc = 0x7F3047F4u;
    // 7F3047F4: lfs     f1, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3047F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3047F8:
    // 7F3047F8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3047FC:
    // 7F3047FC: or   r8, r18, r18
    {
        ctx->gpr[8] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F304800:
    // 7F304800: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F304804:
    // 7F304804: bl      0x7F3041DC
    {
            ctx->lr = 0x7F304808u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3041DCu;
                return;
            }
            goto label_7F3041DC;
    }

label_7F304808:
    ctx->downcount -= 2;
    // 7F304808: cmpwi   r3, 0
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

label_7F30480C:
    // 7F30480C: bc    12, 2, 0x7F304914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304914;
        }
    }

label_7F304810:
    ctx->downcount -= 1;
    // 7F304810: b       0x7F304838
    {
            goto label_7F304838;
    }

label_7F304814:
    ctx->pc = 0x7F304814u;
    ctx->downcount -= 7;
    // 7F304814: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F304818:
    // 7F304818: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30481C:
    ctx->pc = 0x7F30481Cu;
    // 7F30481C: lfs     f1, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30481Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F304820:
    // 7F304820: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F304824:
    // 7F304824: or   r8, r18, r18
    {
        ctx->gpr[8] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F304828:
    // 7F304828: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F30482C:
    // 7F30482C: bl      0x7F0FB714
    {
            ctx->lr = 0x7F304830u;
            ctx->pc = 0x7F0FB714u;
            return;
    }

label_7F304830:
    ctx->downcount -= 2;
    // 7F304830: cmpwi   r3, 0
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

label_7F304834:
    // 7F304834: bc    12, 2, 0x7F304914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304914;
        }
    }

label_7F304838:
    ctx->pc = 0x7F304838u;
    ctx->downcount -= 39;
    // 7F304838: lwz     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F30483C:
    // 7F30483C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304840:
    ctx->pc = 0x7F304840u;
    // 7F304840: lwz     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F304844:
    // 7F304844: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304848:
    ctx->pc = 0x7F304848u;
    // 7F304848: lwz     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30484C:
    // 7F30484C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F304850:
    ctx->pc = 0x7F304850u;
    // 7F304850: stwu     r9, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
        ctx->gpr[3] = ea;
    }

label_7F304854:
    // 7F304854: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F304858:
    ctx->pc = 0x7F304858u;
    // 7F304858: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30485C:
    // 7F30485C: addi    r6, r5, -1084
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F304860:
    ctx->pc = 0x7F304860u;
    // 7F304860: stw     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F304864:
    // 7F304864: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F304868:
    ctx->pc = 0x7F304868u;
    // 7F304868: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F30486C:
    ctx->pc = 0x7F30486Cu;
    // 7F30486C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304870:
    ctx->pc = 0x7F304870u;
    // 7F304870: lwz     r11, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F304874:
    ctx->pc = 0x7F304874u;
    // 7F304874: lwz     r10, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F304878:
    ctx->pc = 0x7F304878u;
    // 7F304878: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F30487C:
    ctx->pc = 0x7F30487Cu;
    // 7F30487C: stw     r11, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F304880:
    ctx->pc = 0x7F304880u;
    // 7F304880: stw     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F304884:
    ctx->pc = 0x7F304884u;
    // 7F304884: lwz     r11, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F304888:
    ctx->pc = 0x7F304888u;
    // 7F304888: lwz     r10, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F30488C:
    ctx->pc = 0x7F30488Cu;
    // 7F30488C: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F304890:
    ctx->pc = 0x7F304890u;
    // 7F304890: stw     r11, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F304894:
    ctx->pc = 0x7F304894u;
    // 7F304894: stw     r10, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F304898:
    ctx->pc = 0x7F304898u;
    // 7F304898: lwz     r11, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F30489C:
    ctx->pc = 0x7F30489Cu;
    // 7F30489C: lwz     r10, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3048A0:
    ctx->pc = 0x7F3048A0u;
    // 7F3048A0: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3048A4:
    ctx->pc = 0x7F3048A4u;
    // 7F3048A4: stw     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3048A8:
    ctx->pc = 0x7F3048A8u;
    // 7F3048A8: stw     r10, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3048AC:
    ctx->pc = 0x7F3048ACu;
    // 7F3048AC: lwz     r11, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3048B0:
    ctx->pc = 0x7F3048B0u;
    // 7F3048B0: lwz     r10, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3048B4:
    ctx->pc = 0x7F3048B4u;
    // 7F3048B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3048B8:
    ctx->pc = 0x7F3048B8u;
    // 7F3048B8: stw     r11, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3048BC:
    ctx->pc = 0x7F3048BCu;
    // 7F3048BC: stw     r10, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3048C0:
    ctx->pc = 0x7F3048C0u;
    // 7F3048C0: stw     r9, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3048C4:
    ctx->pc = 0x7F3048C4u;
    // 7F3048C4: stw     r8, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3048C8:
    ctx->pc = 0x7F3048C8u;
    // 7F3048C8: stw     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3048CC:
    ctx->pc = 0x7F3048CCu;
    // 7F3048CC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3048D0:
    // 7F3048D0: bl      0x80025FFC
    {
            ctx->lr = 0x7F3048D4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F3048D4:
    ctx->downcount -= 6;
    // 7F3048D4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3048D8:
    // 7F3048D8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3048DC:
    // 7F3048DC: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F3048E0:
    // 7F3048E0: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F3048E4:
    // 7F3048E4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3048E8:
    // 7F3048E8: bl      0x80025FD8
    {
            ctx->lr = 0x7F3048ECu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3048EC:
    ctx->downcount -= 10;
    // 7F3048EC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3048F0:
    // 7F3048F0: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F3048F4:
    ctx->pc = 0x7F3048F4u;
    // 7F3048F4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3048F8:
    ctx->pc = 0x7F3048F8u;
    // 7F3048F8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3048FC:
    ctx->pc = 0x7F3048FCu;
    // 7F3048FC: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304900:
    ctx->pc = 0x7F304900u;
    // 7F304900: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304904:
    ctx->pc = 0x7F304904u;
    // 7F304904: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304908:
    ctx->pc = 0x7F304908u;
    // 7F304908: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30490C:
    ctx->pc = 0x7F30490Cu;
    // 7F30490C: stw     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304910:
    ctx->pc = 0x7F304910u;
    // 7F304910: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304914:
    ctx->pc = 0x7F304914u;
    ctx->downcount -= 26;
    // 7F304914: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304918:
    // 7F304918: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F30491C:
    ctx->pc = 0x7F30491Cu;
    // 7F30491C: lwz     r6, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304920:
    // 7F304920: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304924:
    // 7F304924: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304928:
    // 7F304928: addi    r7, r5, -1052
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F30492C:
    ctx->pc = 0x7F30492Cu;
    // 7F30492C: stwu     r0, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_7F304930:
    // 7F304930: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F304934:
    // 7F304934: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F304938:
    // 7F304938: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30493C:
    ctx->pc = 0x7F30493Cu;
    // 7F30493C: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304940:
    // 7F304940: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F304944:
    ctx->pc = 0x7F304944u;
    // 7F304944: lwz     r8, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F304948:
    ctx->pc = 0x7F304948u;
    // 7F304948: lwz     r6, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30494C:
    ctx->pc = 0x7F30494Cu;
    // 7F30494C: stw     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F304950:
    ctx->pc = 0x7F304950u;
    // 7F304950: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304954:
    ctx->pc = 0x7F304954u;
    // 7F304954: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304958:
    ctx->pc = 0x7F304958u;
    // 7F304958: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30495C:
    ctx->pc = 0x7F30495Cu;
    // 7F30495C: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304960:
    ctx->pc = 0x7F304960u;
    // 7F304960: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304964:
    ctx->pc = 0x7F304964u;
    // 7F304964: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304968:
    ctx->pc = 0x7F304968u;
    // 7F304968: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30496C:
    ctx->pc = 0x7F30496Cu;
    // 7F30496C: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304970:
    ctx->pc = 0x7F304970u;
    // 7F304970: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304974:
    ctx->pc = 0x7F304974u;
    // 7F304974: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F304978:
    loop_7F304978(ctx);
    if (ctx->pc == 0x7F30498Cu) goto label_7F30498C;
    return;
label_7F30497C:
    ctx->pc = 0x7F30497Cu;
    // 7F30497C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F304980:
    ctx->pc = 0x7F304980u;
    // 7F304980: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304984:
    ctx->pc = 0x7F304984u;
    // 7F304984: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F304988:
    // 7F304988: bc    16, 0, 0x7F304978
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304978u;
                return;
            }
            goto label_7F304978;
        }
    }

label_7F30498C:
    ctx->downcount -= 3;
    // 7F30498C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304990:
    // 7F304990: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304994:
    // 7F304994: bl      0x80026080
    {
            ctx->lr = 0x7F304998u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F304998:
    ctx->downcount -= 6;
    // 7F304998: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F30499C:
    // 7F30499C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3049A0:
    ctx->pc = 0x7F3049A0u;
    // 7F3049A0: lfs     f0, 32308(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3049A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3049A4:
    ctx->pc = 0x7F3049A4u;
    // 7F3049A4: lfs     f2, 32312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3049A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3049A8:
    ctx->pc = 0x7F3049A8u;
    // 7F3049A8: stfs     f0, 12(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F3049A8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3049AC:
    // 7F3049AC: bl      0x7F303E68
    {
            ctx->lr = 0x7F3049B0u;
            ctx->pc = 0x7F303E68u;
            return;
    }

label_7F3049B0:
    ctx->downcount -= 6;
    // 7F3049B0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3049B4:
    // 7F3049B4: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3049B8:
    // 7F3049B8: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3049BC:
    // 7F3049BC: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3049C0:
    // 7F3049C0: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3049C4:
    // 7F3049C4: bl      0x7F114508
    {
            ctx->lr = 0x7F3049C8u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3049C8:
    ctx->downcount -= 6;
    // 7F3049C8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3049CC:
    // 7F3049CC: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3049D0:
    // 7F3049D0: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F3049D4:
    // 7F3049D4: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3049D8:
    // 7F3049D8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3049DC:
    // 7F3049DC: bl      0x7F114508
    {
            ctx->lr = 0x7F3049E0u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3049E0:
    ctx->downcount -= 7;
    // 7F3049E0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3049E4:
    // 7F3049E4: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3049E8:
    // 7F3049E8: addi    r4, r3, -1280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1280);

label_7F3049EC:
    // 7F3049EC: addi    r3, r5, -1068
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F3049F0:
    ctx->pc = 0x7F3049F0u;
    // 7F3049F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3049F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3049F4:
    // 7F3049F4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3049F8:
    // 7F3049F8: bl      0x80026020
    {
            ctx->lr = 0x7F3049FCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3049FC:
    ctx->downcount -= 1;
    // 7F3049FC: bl      0x7F304C08
    {
            ctx->lr = 0x7F304A00u;
            goto label_7F304C08;
    }

label_7F304A00:
    ctx->downcount -= 1;
    // 7F304A00: bl      0x7F304B4C
    {
            ctx->lr = 0x7F304A04u;
            goto label_7F304B4C;
    }

label_7F304A04:
    ctx->downcount -= 18;
    // 7F304A04: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304A08:
    ctx->pc = 0x7F304A08u;
    // 7F304A08: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304A0C:
    ctx->pc = 0x7F304A0Cu;
    // 7F304A0C: lwz     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304A10:
    // 7F304A10: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304A14:
    ctx->pc = 0x7F304A14u;
    // 7F304A14: lwz     r6, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304A18:
    ctx->pc = 0x7F304A18u;
    // 7F304A18: sth     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F304A1C:
    ctx->pc = 0x7F304A1Cu;
    // 7F304A1C: lwz     r5, -1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1068);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304A20:
    ctx->pc = 0x7F304A20u;
    // 7F304A20: sth     r4, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F304A24:
    ctx->pc = 0x7F304A24u;
    // 7F304A24: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304A28:
    ctx->pc = 0x7F304A28u;
    // 7F304A28: sth     r6, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F304A2C:
    ctx->pc = 0x7F304A2Cu;
    // 7F304A2C: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304A30:
    ctx->pc = 0x7F304A30u;
    // 7F304A30: sth     r0, 6(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F304A34:
    ctx->pc = 0x7F304A34u;
    // 7F304A34: lwz     r3, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304A38:
    ctx->pc = 0x7F304A38u;
    // 7F304A38: sth     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F304A3C:
    ctx->pc = 0x7F304A3Cu;
    // 7F304A3C: lwz     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304A40:
    ctx->pc = 0x7F304A40u;
    // 7F304A40: sth     r4, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F304A44:
    ctx->pc = 0x7F304A44u;
    // 7F304A44: sth     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F304A48:
    ctx->pc = 0x7F304A48u;
    // 7F304A48: sth     r0, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F304A4C:
    ctx->downcount -= 12;
    // 7F304A4C: addi    r17, r17, -1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(-1);

label_7F304A50:
    // 7F304A50: addi    r14, r14, 8
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(8);

label_7F304A54:
    // 7F304A54: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F304A58:
    // 7F304A58: addi    r22, r22, 16
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(16);

label_7F304A5C:
    // 7F304A5C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F304A60:
    // 7F304A60: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F304A64:
    // 7F304A64: addi    r20, r20, 16
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(16);

label_7F304A68:
    // 7F304A68: addi    r21, r21, 16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(16);

label_7F304A6C:
    // 7F304A6C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F304A70:
    // 7F304A70: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F304A74:
    // 7F304A74: addi    r26, r26, 8
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(8);

label_7F304A78:
    // 7F304A78: addi    r27, r27, 8
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(8);

label_7F304A7C:
    ctx->downcount -= 2;
    // 7F304A7C: cmpwi   r17, 0
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F304A80:
    // 7F304A80: bc    12, 1, 0x7F304398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304398u;
                return;
            }
            goto label_7F304398;
        }
    }

label_7F304A84:
    ctx->pc = 0x7F304A84u;
    ctx->downcount -= 2;
    // 7F304A84: addi    r3, r29, 272
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(272);

label_7F304A88:
    ctx->pc = 0x7F304A88u;
    // 7F304A88: bl      0x7F3B7378
    {
            ctx->lr = 0x7F304A8Cu;
            ctx->pc = 0x7F3B7378u;
            return;
    }

label_7F304A8C:
    ctx->pc = 0x7F304A8Cu;
    ctx->downcount -= 6;
    // 7F304A8C: lwz     r4, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304A90:
    ctx->pc = 0x7F304A90u;
    // 7F304A90: addi    r3, r29, 272
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(272);

label_7F304A94:
    ctx->pc = 0x7F304A94u;
    // 7F304A94: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304A98:
    ctx->pc = 0x7F304A98u;
    // 7F304A98: lwz     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304A9C:
    ctx->pc = 0x7F304A9Cu;
    // 7F304A9C: lwz     r5, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304AA0:
    ctx->pc = 0x7F304AA0u;
    // 7F304AA0: bl      0x7F3B705C
    {
            ctx->lr = 0x7F304AA4u;
            ctx->pc = 0x7F3B705Cu;
            return;
    }

label_7F304AA4:
    ctx->pc = 0x7F304AA4u;
    ctx->downcount -= 6;
    // 7F304AA4: lwz     r4, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304AA8:
    ctx->pc = 0x7F304AA8u;
    // 7F304AA8: addi    r3, r29, 272
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(272);

label_7F304AAC:
    ctx->pc = 0x7F304AACu;
    // 7F304AAC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304AB0:
    ctx->pc = 0x7F304AB0u;
    // 7F304AB0: lwz     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304AB4:
    ctx->pc = 0x7F304AB4u;
    // 7F304AB4: lwz     r5, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304AB8:
    ctx->pc = 0x7F304AB8u;
    // 7F304AB8: bl      0x7F304114
    {
            ctx->lr = 0x7F304ABCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304114u;
                return;
            }
            goto label_7F304114;
    }

label_7F304ABC:
    ctx->pc = 0x7F304ABCu;
    ctx->downcount -= 26;
    // 7F304ABC: psq_l   f31, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F304ABCu);
        if (ctx->exception) return;
    }

label_7F304AC0:
    ctx->pc = 0x7F304AC0u;
    // 7F304AC0: lfd     f31, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304AC4:
    ctx->pc = 0x7F304AC4u;
    // 7F304AC4: psq_l   f30, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304AC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F304AC4u);
        if (ctx->exception) return;
    }

label_7F304AC8:
    ctx->pc = 0x7F304AC8u;
    // 7F304AC8: lfd     f30, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304ACC:
    ctx->pc = 0x7F304ACCu;
    // 7F304ACC: psq_l   f29, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304ACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F304ACCu);
        if (ctx->exception) return;
    }

label_7F304AD0:
    ctx->pc = 0x7F304AD0u;
    // 7F304AD0: lfd     f29, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304AD4:
    ctx->pc = 0x7F304AD4u;
    // 7F304AD4: psq_l   f28, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F304AD4u);
        if (ctx->exception) return;
    }

label_7F304AD8:
    ctx->pc = 0x7F304AD8u;
    // 7F304AD8: lfd     f28, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304ADC:
    ctx->pc = 0x7F304ADCu;
    // 7F304ADC: psq_l   f27, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F304ADCu);
        if (ctx->exception) return;
    }

label_7F304AE0:
    ctx->pc = 0x7F304AE0u;
    // 7F304AE0: lfd     f27, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304AE4:
    ctx->pc = 0x7F304AE4u;
    // 7F304AE4: lmw     r14, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F304AE8:
    ctx->pc = 0x7F304AE8u;
    // 7F304AE8: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304AEC:
    ctx->pc = 0x7F304AECu;
    // 7F304AEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304AF0:
    ctx->pc = 0x7F304AF0u;
    // 7F304AF0: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_7F304AF4:
    ctx->pc = 0x7F304AF4u;
    // 7F304AF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304AF8:
    ctx->pc = 0x7F304AF8u;
    ctx->downcount -= 7;
    // 7F304AF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304AFC:
    ctx->pc = 0x7F304AFCu;
    // 7F304AFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304B00:
    ctx->pc = 0x7F304B00u;
    // 7F304B00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304B04:
    ctx->pc = 0x7F304B04u;
    // 7F304B04: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F304B08:
    ctx->pc = 0x7F304B08u;
    // 7F304B08: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F304B08u);
        if (ctx->exception) return;
    }

label_7F304B0C:
    ctx->pc = 0x7F304B0Cu;
    // 7F304B0C: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F304B0Cu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F304B10:
    ctx->pc = 0x7F304B10u;
    // 7F304B10: bl      0x80006668
    {
            ctx->lr = 0x7F304B14u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F304B14:
    ctx->pc = 0x7F304B14u;
    ctx->downcount -= 4;
    // 7F304B14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F304B18:
    ctx->pc = 0x7F304B18u;
    // 7F304B18: lfs     f0, 32308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F304B18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F304B1C:
    ctx->pc = 0x7F304B1Cu;
    // 7F304B1C: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F304B1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F304B20:
    ctx->pc = 0x7F304B20u;
    // 7F304B20: bc    12, 2, 0x7F304B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F304B2C;
        }
    }

label_7F304B24:
    ctx->pc = 0x7F304B24u;
    ctx->downcount -= 18;
    // 7F304B24: fdivs   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F304B24u)) return;
    ppc_fdivs(ctx, 1, 31, 1);

label_7F304B28:
    ctx->pc = 0x7F304B28u;
    // 7F304B28: b       0x7F304B34
    {
            goto label_7F304B34;
    }

label_7F304B2C:
    ctx->pc = 0x7F304B2Cu;
    ctx->downcount -= 2;
    // 7F304B2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F304B30:
    ctx->pc = 0x7F304B30u;
    // 7F304B30: lfs     f1, 32324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F304B30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F304B34:
    ctx->pc = 0x7F304B34u;
    ctx->downcount -= 7;
    // 7F304B34: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304B34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F304B34u);
        if (ctx->exception) return;
    }

label_7F304B38:
    ctx->pc = 0x7F304B38u;
    // 7F304B38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304B3C:
    ctx->pc = 0x7F304B3Cu;
    // 7F304B3C: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304B40:
    ctx->pc = 0x7F304B40u;
    // 7F304B40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304B44:
    ctx->pc = 0x7F304B44u;
    // 7F304B44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F304B48:
    ctx->pc = 0x7F304B48u;
    // 7F304B48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304B4C:
    ctx->pc = 0x7F304B4Cu;
    ctx->downcount -= 10;
    // 7F304B4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304B50:
    ctx->pc = 0x7F304B50u;
    // 7F304B50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304B54:
    ctx->pc = 0x7F304B54u;
    // 7F304B54: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F304B58:
    ctx->pc = 0x7F304B58u;
    // 7F304B58: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F304B5C:
    ctx->pc = 0x7F304B5Cu;
    // 7F304B5C: addi    r4, r3, 32328
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32328);

label_7F304B60:
    ctx->pc = 0x7F304B60u;
    // 7F304B60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304B64:
    ctx->pc = 0x7F304B64u;
    // 7F304B64: addi    r3, r5, -1068
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F304B68:
    ctx->pc = 0x7F304B68u;
    // 7F304B68: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F304B68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F304B6C:
    ctx->pc = 0x7F304B6Cu;
    // 7F304B6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304B70:
    ctx->pc = 0x7F304B70u;
    // 7F304B70: bl      0x800261FC
    {
            ctx->lr = 0x7F304B74u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F304B74:
    ctx->pc = 0x7F304B74u;
    ctx->downcount -= 4;
    // 7F304B74: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304B78:
    ctx->pc = 0x7F304B78u;
    // 7F304B78: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304B7C:
    ctx->pc = 0x7F304B7Cu;
    // 7F304B7C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304B80:
    ctx->pc = 0x7F304B80u;
    // 7F304B80: bl      0x7F304B94
    {
            ctx->lr = 0x7F304B84u;
            goto label_7F304B94;
    }

label_7F304B84:
    ctx->pc = 0x7F304B84u;
    ctx->downcount -= 5;
    // 7F304B84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304B88:
    ctx->pc = 0x7F304B88u;
    // 7F304B88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304B8C:
    ctx->pc = 0x7F304B8Cu;
    // 7F304B8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304B90:
    ctx->pc = 0x7F304B90u;
    // 7F304B90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304B94:
    ctx->pc = 0x7F304B94u;
    ctx->downcount -= 17;
    // 7F304B94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304B98:
    ctx->pc = 0x7F304B98u;
    // 7F304B98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304B9C:
    ctx->pc = 0x7F304B9Cu;
    // 7F304B9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304BA0:
    ctx->pc = 0x7F304BA0u;
    // 7F304BA0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F304BA4:
    ctx->pc = 0x7F304BA4u;
    // 7F304BA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304BA8:
    ctx->pc = 0x7F304BA8u;
    // 7F304BA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F304BAC:
    ctx->pc = 0x7F304BACu;
    // 7F304BAC: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304BB0u;
            goto label_7F304BE8;
    }

label_7F304BB0:
    ctx->pc = 0x7F304BB0u;
    ctx->downcount -= 3;
    // 7F304BB0: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F304BB4:
    ctx->pc = 0x7F304BB4u;
    // 7F304BB4: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F304BB8:
    ctx->pc = 0x7F304BB8u;
    // 7F304BB8: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304BBCu;
            goto label_7F304BE8;
    }

label_7F304BBC:
    ctx->pc = 0x7F304BBCu;
    ctx->downcount -= 3;
    // 7F304BBC: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F304BC0:
    ctx->pc = 0x7F304BC0u;
    // 7F304BC0: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F304BC4:
    ctx->pc = 0x7F304BC4u;
    // 7F304BC4: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304BC8u;
            goto label_7F304BE8;
    }

label_7F304BC8:
    ctx->pc = 0x7F304BC8u;
    ctx->downcount -= 3;
    // 7F304BC8: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F304BCC:
    ctx->pc = 0x7F304BCCu;
    // 7F304BCC: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F304BD0:
    ctx->pc = 0x7F304BD0u;
    // 7F304BD0: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304BD4u;
            goto label_7F304BE8;
    }

label_7F304BD4:
    ctx->pc = 0x7F304BD4u;
    ctx->downcount -= 16;
    // 7F304BD4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F304BD8:
    ctx->pc = 0x7F304BD8u;
    // 7F304BD8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304BDC:
    ctx->pc = 0x7F304BDCu;
    // 7F304BDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304BE0:
    ctx->pc = 0x7F304BE0u;
    // 7F304BE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304BE4:
    ctx->pc = 0x7F304BE4u;
    // 7F304BE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304BE8:
    ctx->pc = 0x7F304BE8u;
    ctx->downcount -= 8;
    // 7F304BE8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F304BE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F304BEC:
    ctx->pc = 0x7F304BECu;
    // 7F304BEC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304BF0:
    ctx->pc = 0x7F304BF0u;
    // 7F304BF0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F304BF0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F304BF4:
    ctx->pc = 0x7F304BF4u;
    // 7F304BF4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F304BF8:
    ctx->pc = 0x7F304BF8u;
    // 7F304BF8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304BFC:
    ctx->pc = 0x7F304BFCu;
    // 7F304BFC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304C00:
    ctx->pc = 0x7F304C00u;
    // 7F304C00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304C04:
    ctx->pc = 0x7F304C04u;
    // 7F304C04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304C08:
    ctx->pc = 0x7F304C08u;
    ctx->downcount -= 7;
    // 7F304C08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304C0C:
    ctx->pc = 0x7F304C0Cu;
    // 7F304C0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304C10:
    ctx->pc = 0x7F304C10u;
    // 7F304C10: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304C14:
    ctx->pc = 0x7F304C14u;
    // 7F304C14: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304C18:
    ctx->pc = 0x7F304C18u;
    // 7F304C18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304C1C:
    ctx->pc = 0x7F304C1Cu;
    // 7F304C1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304C20:
    ctx->pc = 0x7F304C20u;
    // 7F304C20: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304C24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304BE8u;
                return;
            }
            goto label_7F304BE8;
    }

label_7F304C24:
    ctx->pc = 0x7F304C24u;
    ctx->downcount -= 5;
    // 7F304C24: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304C28:
    ctx->pc = 0x7F304C28u;
    // 7F304C28: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304C2C:
    ctx->pc = 0x7F304C2Cu;
    // 7F304C2C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F304C30:
    ctx->pc = 0x7F304C30u;
    // 7F304C30: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304C34:
    ctx->pc = 0x7F304C34u;
    // 7F304C34: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304C38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304BE8u;
                return;
            }
            goto label_7F304BE8;
    }

label_7F304C38:
    ctx->pc = 0x7F304C38u;
    ctx->downcount -= 5;
    // 7F304C38: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304C3C:
    ctx->pc = 0x7F304C3Cu;
    // 7F304C3C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304C40:
    ctx->pc = 0x7F304C40u;
    // 7F304C40: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F304C44:
    ctx->pc = 0x7F304C44u;
    // 7F304C44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304C48:
    ctx->pc = 0x7F304C48u;
    // 7F304C48: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304C4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304BE8u;
                return;
            }
            goto label_7F304BE8;
    }

label_7F304C4C:
    ctx->pc = 0x7F304C4Cu;
    ctx->downcount -= 5;
    // 7F304C4C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304C50:
    ctx->pc = 0x7F304C50u;
    // 7F304C50: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F304C54:
    ctx->pc = 0x7F304C54u;
    // 7F304C54: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_7F304C58:
    ctx->pc = 0x7F304C58u;
    // 7F304C58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304C5C:
    ctx->pc = 0x7F304C5Cu;
    // 7F304C5C: bl      0x7F304BE8
    {
            ctx->lr = 0x7F304C60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304BE8u;
                return;
            }
            goto label_7F304BE8;
    }

label_7F304C60:
    ctx->pc = 0x7F304C60u;
    ctx->downcount -= 5;
    // 7F304C60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304C64:
    ctx->pc = 0x7F304C64u;
    // 7F304C64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304C68:
    ctx->pc = 0x7F304C68u;
    // 7F304C68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304C6C:
    ctx->pc = 0x7F304C6Cu;
    // 7F304C6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304C70:
    ctx->pc = 0x7F304C70u;
    ctx->downcount -= 7;
    // 7F304C70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304C74:
    ctx->pc = 0x7F304C74u;
    // 7F304C74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304C78:
    ctx->pc = 0x7F304C78u;
    // 7F304C78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304C7C:
    ctx->pc = 0x7F304C7Cu;
    // 7F304C7C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304C80:
    ctx->pc = 0x7F304C80u;
    // 7F304C80: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F304C84:
    ctx->pc = 0x7F304C84u;
    // 7F304C84: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F304C88:
    ctx->pc = 0x7F304C88u;
    // 7F304C88: bl      0x7F1146A0
    {
            ctx->lr = 0x7F304C8Cu;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F304C8C:
    ctx->pc = 0x7F304C8Cu;
    ctx->downcount -= 5;
    // 7F304C8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304C90:
    ctx->pc = 0x7F304C90u;
    // 7F304C90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304C94:
    ctx->pc = 0x7F304C94u;
    // 7F304C94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F304C98:
    ctx->pc = 0x7F304C98u;
    // 7F304C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304C9C:
    ctx->pc = 0x7F304C9Cu;
    ctx->downcount -= 38;
    // 7F304C9C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304CA0:
    ctx->pc = 0x7F304CA0u;
    // 7F304CA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304CA4:
    ctx->pc = 0x7F304CA4u;
    // 7F304CA4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304CA8:
    ctx->pc = 0x7F304CA8u;
    // 7F304CA8: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F304CAC:
    ctx->pc = 0x7F304CACu;
    // 7F304CAC: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F304CACu);
        if (ctx->exception) return;
    }

label_7F304CB0:
    ctx->pc = 0x7F304CB0u;
    // 7F304CB0: stmw     r17, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F304CB4:
    ctx->pc = 0x7F304CB4u;
    // 7F304CB4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304CB8:
    ctx->pc = 0x7F304CB8u;
    // 7F304CB8: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F304CBC:
    ctx->pc = 0x7F304CBCu;
    // 7F304CBC: addi    r20, r4, -1068
    ctx->gpr[20] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F304CC0:
    ctx->pc = 0x7F304CC0u;
    // 7F304CC0: lwz     r31, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F304CC4:
    ctx->pc = 0x7F304CC4u;
    // 7F304CC4: addi    r21, r5, -1084
    ctx->gpr[21] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F304CC8:
    ctx->pc = 0x7F304CC8u;
    // 7F304CC8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304CCC:
    ctx->pc = 0x7F304CCCu;
    // 7F304CCC: addi    r26, r4, -1052
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F304CD0:
    ctx->pc = 0x7F304CD0u;
    // 7F304CD0: lwz     r30, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F304CD4:
    ctx->pc = 0x7F304CD4u;
    // 7F304CD4: lwz     r29, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F304CD8:
    ctx->pc = 0x7F304CD8u;
    // 7F304CD8: or   r22, r20, r20
    {
        ctx->gpr[22] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304CDC:
    ctx->pc = 0x7F304CDCu;
    // 7F304CDC: lfs     f31, 336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F304CDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F304CE0:
    ctx->pc = 0x7F304CE0u;
    // 7F304CE0: or   r23, r20, r20
    {
        ctx->gpr[23] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304CE4:
    ctx->pc = 0x7F304CE4u;
    // 7F304CE4: lwz     r28, 396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(396);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F304CE8:
    ctx->pc = 0x7F304CE8u;
    // 7F304CE8: or   r24, r20, r20
    {
        ctx->gpr[24] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304CEC:
    ctx->pc = 0x7F304CECu;
    // 7F304CEC: stw     r20, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F304CF0:
    ctx->pc = 0x7F304CF0u;
    // 7F304CF0: or   r25, r21, r21
    {
        ctx->gpr[25] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F304CF4:
    ctx->pc = 0x7F304CF4u;
    // 7F304CF4: or   r27, r20, r20
    {
        ctx->gpr[27] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304CF8:
    ctx->pc = 0x7F304CF8u;
    // 7F304CF8: or   r17, r26, r26
    {
        ctx->gpr[17] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F304CFC:
    ctx->pc = 0x7F304CFCu;
    // 7F304CFC: stw     r21, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F304D00:
    ctx->pc = 0x7F304D00u;
    // 7F304D00: stw     r26, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F304D04:
    ctx->pc = 0x7F304D04u;
    // 7F304D04: stw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F304D08:
    ctx->pc = 0x7F304D08u;
    // 7F304D08: b       0x7F304E60
    {
            goto label_7F304E60;
    }

label_7F304D0C:
    ctx->pc = 0x7F304D0Cu;
    ctx->downcount -= 26;
    // 7F304D0C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304D10:
    // 7F304D10: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304D14:
    ctx->pc = 0x7F304D14u;
    // 7F304D14: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304D18:
    // 7F304D18: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F304D1C:
    // 7F304D1C: rlwinm r18, r0, 4, 0, 27
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F304D20:
    // 7F304D20: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F304D24:
    // 7F304D24: add   r8, r30, r18
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F304D28:
    // 7F304D28: rlwinm r19, r6, 4, 0, 27
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F304D2C:
    ctx->pc = 0x7F304D2Cu;
    // 7F304D2C: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304D30:
    // 7F304D30: add   r7, r30, r19
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F304D34:
    ctx->pc = 0x7F304D34u;
    // 7F304D34: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304D38:
    ctx->pc = 0x7F304D38u;
    // 7F304D38: stw     r6, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304D3C:
    ctx->pc = 0x7F304D3Cu;
    // 7F304D3C: stw     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304D40:
    ctx->pc = 0x7F304D40u;
    // 7F304D40: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304D44:
    ctx->pc = 0x7F304D44u;
    // 7F304D44: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304D48:
    ctx->pc = 0x7F304D48u;
    // 7F304D48: stw     r6, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304D4C:
    ctx->pc = 0x7F304D4Cu;
    // 7F304D4C: stw     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304D50:
    ctx->pc = 0x7F304D50u;
    // 7F304D50: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304D54:
    ctx->pc = 0x7F304D54u;
    // 7F304D54: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304D58:
    ctx->pc = 0x7F304D58u;
    // 7F304D58: stw     r6, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304D5C:
    ctx->pc = 0x7F304D5Cu;
    // 7F304D5C: stw     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304D60:
    ctx->pc = 0x7F304D60u;
    // 7F304D60: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304D64:
    ctx->pc = 0x7F304D64u;
    // 7F304D64: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304D68:
    ctx->pc = 0x7F304D68u;
    // 7F304D68: stw     r6, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304D6C:
    ctx->pc = 0x7F304D6Cu;
    // 7F304D6C: stw     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304D70:
    // 7F304D70: bl      0x80025FFC
    {
            ctx->lr = 0x7F304D74u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F304D74:
    ctx->downcount -= 2;
    // 7F304D74: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F304D78:
    // 7F304D78: bl      0x80026080
    {
            ctx->lr = 0x7F304D7Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F304D7C:
    ctx->pc = 0x7F304D7Cu;
    ctx->downcount -= 2;
    // 7F304D7C: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F304D7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F304D80:
    // 7F304D80: bl      0x7F304AF8
    {
            ctx->lr = 0x7F304D84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304AF8u;
                return;
            }
            goto label_7F304AF8;
    }

label_7F304D84:
    ctx->downcount -= 3;
    // 7F304D84: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F304D88:
    // 7F304D88: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F304D8C:
    // 7F304D8C: bl      0x80026020
    {
            ctx->lr = 0x7F304D90u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F304D90:
    ctx->downcount -= 4;
    // 7F304D90: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F304D94:
    // 7F304D94: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F304D98:
    // 7F304D98: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F304D9C:
    // 7F304D9C: bl      0x80025FFC
    {
            ctx->lr = 0x7F304DA0u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F304DA0:
    ctx->downcount -= 13;
    // 7F304DA0: add   r19, r29, r19
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F304DA4:
    ctx->pc = 0x7F304DA4u;
    // 7F304DA4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F304DA4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F304DA8:
    ctx->pc = 0x7F304DA8u;
    // 7F304DA8: lwz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304DAC:
    // 7F304DAC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F304DB0:
    ctx->pc = 0x7F304DB0u;
    // 7F304DB0: lwz     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304DB4:
    // 7F304DB4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F304DB8:
    ctx->pc = 0x7F304DB8u;
    // 7F304DB8: stw     r5, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F304DBC:
    ctx->pc = 0x7F304DBCu;
    // 7F304DBC: stw     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304DC0:
    ctx->pc = 0x7F304DC0u;
    // 7F304DC0: lwz     r5, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304DC4:
    ctx->pc = 0x7F304DC4u;
    // 7F304DC4: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304DC8:
    ctx->pc = 0x7F304DC8u;
    // 7F304DC8: stw     r5, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F304DCC:
    ctx->pc = 0x7F304DCCu;
    // 7F304DCC: stw     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304DD0:
    // 7F304DD0: bl      0x80026020
    {
            ctx->lr = 0x7F304DD4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F304DD4:
    ctx->downcount -= 13;
    // 7F304DD4: add   r18, r29, r18
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_7F304DD8:
    ctx->pc = 0x7F304DD8u;
    // 7F304DD8: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304DDC:
    ctx->pc = 0x7F304DDCu;
    // 7F304DDC: lwz     r6, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304DE0:
    // 7F304DE0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F304DE4:
    ctx->pc = 0x7F304DE4u;
    // 7F304DE4: lwz     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304DE8:
    // 7F304DE8: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F304DEC:
    ctx->pc = 0x7F304DECu;
    // 7F304DEC: stw     r6, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304DF0:
    ctx->pc = 0x7F304DF0u;
    // 7F304DF0: stw     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304DF4:
    ctx->pc = 0x7F304DF4u;
    // 7F304DF4: lwz     r6, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304DF8:
    ctx->pc = 0x7F304DF8u;
    // 7F304DF8: lwz     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304DFC:
    ctx->pc = 0x7F304DFCu;
    // 7F304DFC: stw     r6, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304E00:
    ctx->pc = 0x7F304E00u;
    // 7F304E00: stw     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E04:
    // 7F304E04: bl      0x80025FD8
    {
            ctx->lr = 0x7F304E08u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F304E08:
    ctx->pc = 0x7F304E08u;
    ctx->downcount -= 4;
    // 7F304E08: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304E0C:
    ctx->pc = 0x7F304E0Cu;
    // 7F304E0C: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F304E10:
    ctx->pc = 0x7F304E10u;
    // 7F304E10: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304E14:
    // 7F304E14: bl      0x80025FFC
    {
            ctx->lr = 0x7F304E18u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F304E18:
    ctx->pc = 0x7F304E18u;
    ctx->downcount -= 18;
    // 7F304E18: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304E1C:
    // 7F304E1C: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_7F304E20:
    ctx->pc = 0x7F304E20u;
    // 7F304E20: lwz     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304E24:
    // 7F304E24: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F304E28:
    ctx->pc = 0x7F304E28u;
    // 7F304E28: stw     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304E2C:
    ctx->pc = 0x7F304E2Cu;
    // 7F304E2C: stw     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E30:
    ctx->pc = 0x7F304E30u;
    // 7F304E30: lwz     r3, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304E34:
    ctx->pc = 0x7F304E34u;
    // 7F304E34: lwz     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304E38:
    ctx->pc = 0x7F304E38u;
    // 7F304E38: stw     r3, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304E3C:
    ctx->pc = 0x7F304E3Cu;
    // 7F304E3C: stw     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E40:
    ctx->pc = 0x7F304E40u;
    // 7F304E40: lwz     r3, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304E44:
    ctx->pc = 0x7F304E44u;
    // 7F304E44: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304E48:
    ctx->pc = 0x7F304E48u;
    // 7F304E48: stw     r3, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304E4C:
    ctx->pc = 0x7F304E4Cu;
    // 7F304E4C: stw     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E50:
    ctx->pc = 0x7F304E50u;
    // 7F304E50: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304E54:
    ctx->pc = 0x7F304E54u;
    // 7F304E54: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304E58:
    ctx->pc = 0x7F304E58u;
    // 7F304E58: stw     r3, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F304E5C:
    ctx->pc = 0x7F304E5Cu;
    // 7F304E5C: stw     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E60:
    ctx->downcount -= 2;
    // 7F304E60: cmpwi   r28, 0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F304E64:
    // 7F304E64: bc    12, 1, 0x7F304D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304D0Cu;
                return;
            }
            goto label_7F304D0C;
        }
    }

label_7F304E68:
    ctx->pc = 0x7F304E68u;
    ctx->downcount -= 18;
    // 7F304E68: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304E68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F304E68u);
        if (ctx->exception) return;
    }

label_7F304E6C:
    ctx->pc = 0x7F304E6Cu;
    // 7F304E6C: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F304E70:
    ctx->pc = 0x7F304E70u;
    // 7F304E70: lmw     r17, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F304E74:
    ctx->pc = 0x7F304E74u;
    // 7F304E74: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304E78:
    ctx->pc = 0x7F304E78u;
    // 7F304E78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F304E7C:
    ctx->pc = 0x7F304E7Cu;
    // 7F304E7C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F304E80:
    ctx->pc = 0x7F304E80u;
    // 7F304E80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F304E84:
    ctx->pc = 0x7F304E84u;
    ctx->downcount -= 33;
    // 7F304E84: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F304E88:
    ctx->pc = 0x7F304E88u;
    // 7F304E88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F304E8C:
    ctx->pc = 0x7F304E8Cu;
    // 7F304E8C: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304E90:
    ctx->pc = 0x7F304E90u;
    // 7F304E90: stfd     f31, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304E90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F304E94:
    ctx->pc = 0x7F304E94u;
    // 7F304E94: psq_st   f31, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304E94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F304E94u);
        if (ctx->exception) return;
    }

label_7F304E98:
    ctx->pc = 0x7F304E98u;
    // 7F304E98: stfd     f30, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F304E9C:
    ctx->pc = 0x7F304E9Cu;
    // 7F304E9C: psq_st   f30, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F304E9Cu);
        if (ctx->exception) return;
    }

label_7F304EA0:
    ctx->pc = 0x7F304EA0u;
    // 7F304EA0: stfd     f29, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F304EA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F304EA4:
    ctx->pc = 0x7F304EA4u;
    // 7F304EA4: psq_st   f29, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F304EA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F304EA4u);
        if (ctx->exception) return;
    }

label_7F304EA8:
    ctx->pc = 0x7F304EA8u;
    // 7F304EA8: stmw     r14, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F304EAC:
    ctx->pc = 0x7F304EACu;
    // 7F304EAC: or   r14, r3, r3
    {
        ctx->gpr[14] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F304EB0:
    ctx->pc = 0x7F304EB0u;
    // 7F304EB0: addi    r15, r1, 72
    ctx->gpr[15] = ctx->gpr[1] + (u32)(s32)(72);

label_7F304EB4:
    ctx->pc = 0x7F304EB4u;
    // 7F304EB4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F304EB8:
    ctx->pc = 0x7F304EB8u;
    // 7F304EB8: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F304EBC:
    ctx->pc = 0x7F304EBCu;
    // 7F304EBC: lwz     r22, 392(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(392);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F304EC0:
    ctx->pc = 0x7F304EC0u;
    // 7F304EC0: lwz     r21, 360(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(360);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F304EC4:
    ctx->pc = 0x7F304EC4u;
    // 7F304EC4: addi    r3, r3, 52
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(52);

label_7F304EC8:
    ctx->pc = 0x7F304EC8u;
    // 7F304EC8: lwz     r20, 372(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(372);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F304ECC:
    ctx->pc = 0x7F304ECCu;
    // 7F304ECC: lwz     r19, 368(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(368);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F304ED0:
    ctx->pc = 0x7F304ED0u;
    // 7F304ED0: lwz     r18, 380(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(380);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F304ED4:
    ctx->pc = 0x7F304ED4u;
    // 7F304ED4: lwz     r17, 384(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(384);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F304ED8:
    ctx->pc = 0x7F304ED8u;
    // 7F304ED8: lfs     f29, 332(r14)
    if (!ppc_fp_available_inline(ctx, 0x7F304ED8u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F304EDC:
    ctx->pc = 0x7F304EDCu;
    // 7F304EDC: bl      0x7F1FF888
    {
            ctx->lr = 0x7F304EE0u;
            ctx->pc = 0x7F1FF888u;
            return;
    }

label_7F304EE0:
    ctx->pc = 0x7F304EE0u;
    ctx->downcount -= 2;
    // 7F304EE0: cmpwi   r3, 0
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

label_7F304EE4:
    ctx->pc = 0x7F304EE4u;
    // 7F304EE4: bc    4, 2, 0x7F304EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F304EF4;
        }
    }

label_7F304EE8:
    ctx->pc = 0x7F304EE8u;
    ctx->downcount -= 3;
    // 7F304EE8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F304EEC:
    ctx->pc = 0x7F304EECu;
    // 7F304EEC: addi    r0, r3, -4824
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F304EF0:
    ctx->pc = 0x7F304EF0u;
    // 7F304EF0: or   r15, r0, r0
    {
        ctx->gpr[15] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F304EF4:
    ctx->pc = 0x7F304EF4u;
    ctx->downcount -= 30;
    // 7F304EF4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304EF8:
    ctx->pc = 0x7F304EF8u;
    // 7F304EF8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F304EFC:
    ctx->pc = 0x7F304EFCu;
    // 7F304EFC: addi    r29, r3, -1068
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F304F00:
    ctx->pc = 0x7F304F00u;
    // 7F304F00: lwz     r16, 388(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(388);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F304F04:
    ctx->pc = 0x7F304F04u;
    // 7F304F04: addi    r30, r4, -1052
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F304F08:
    ctx->pc = 0x7F304F08u;
    // 7F304F08: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F304F0C:
    ctx->pc = 0x7F304F0Cu;
    // 7F304F0C: addi    r31, r3, -1084
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F304F10:
    ctx->pc = 0x7F304F10u;
    // 7F304F10: stw     r30, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F14:
    ctx->pc = 0x7F304F14u;
    // 7F304F14: stw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F18:
    ctx->pc = 0x7F304F18u;
    // 7F304F18: stw     r31, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F304F1C:
    ctx->pc = 0x7F304F1Cu;
    // 7F304F1C: stw     r30, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F20:
    ctx->pc = 0x7F304F20u;
    // 7F304F20: stw     r31, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F304F24:
    ctx->pc = 0x7F304F24u;
    // 7F304F24: stw     r30, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F28:
    ctx->pc = 0x7F304F28u;
    // 7F304F28: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F2C:
    ctx->pc = 0x7F304F2Cu;
    // 7F304F2C: stw     r30, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F30:
    ctx->pc = 0x7F304F30u;
    // 7F304F30: stw     r29, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F34:
    ctx->pc = 0x7F304F34u;
    // 7F304F34: stw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F38:
    ctx->pc = 0x7F304F38u;
    // 7F304F38: stw     r29, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F3C:
    ctx->pc = 0x7F304F3Cu;
    // 7F304F3C: stw     r29, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F40:
    ctx->pc = 0x7F304F40u;
    // 7F304F40: stw     r31, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F304F44:
    ctx->pc = 0x7F304F44u;
    // 7F304F44: stw     r31, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F304F48:
    ctx->pc = 0x7F304F48u;
    // 7F304F48: stw     r30, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F304F4C:
    ctx->pc = 0x7F304F4Cu;
    // 7F304F4C: stw     r29, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F50:
    ctx->pc = 0x7F304F50u;
    // 7F304F50: stw     r29, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F54:
    ctx->pc = 0x7F304F54u;
    // 7F304F54: stw     r29, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F58:
    ctx->pc = 0x7F304F58u;
    // 7F304F58: stw     r29, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F5C:
    ctx->pc = 0x7F304F5Cu;
    // 7F304F5C: stw     r29, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F60:
    ctx->pc = 0x7F304F60u;
    // 7F304F60: stw     r29, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F64:
    ctx->pc = 0x7F304F64u;
    // 7F304F64: stw     r29, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F304F68:
    ctx->pc = 0x7F304F68u;
    // 7F304F68: b       0x7F305274
    {
            goto label_7F305274;
    }

label_7F304F6C:
    ctx->pc = 0x7F304F6Cu;
    ctx->downcount -= 41;
    // 7F304F6C: lwz     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304F70:
    // 7F304F70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F304F74:
    ctx->pc = 0x7F304F74u;
    // 7F304F74: lwz     r14, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_7F304F78:
    // 7F304F78: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F304F7C:
    ctx->pc = 0x7F304F7Cu;
    // 7F304F7C: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304F80:
    ctx->pc = 0x7F304F80u;
    // 7F304F80: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304F84:
    // 7F304F84: rlwinm r25, r14, 4, 0, 27
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[14], 4u) & 0xFFFFFFF0u;
    }

label_7F304F88:
    // 7F304F88: add   r7, r21, r25
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F304F8C:
    ctx->pc = 0x7F304F8Cu;
    // 7F304F8C: lwz     r5, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F304F90:
    ctx->pc = 0x7F304F90u;
    // 7F304F90: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304F94:
    ctx->pc = 0x7F304F94u;
    // 7F304F94: lwz     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304F98:
    // 7F304F98: rlwinm r27, r0, 4, 0, 27
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F304F9C:
    ctx->pc = 0x7F304F9Cu;
    // 7F304F9C: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FA0:
    // 7F304FA0: add   r9, r21, r27
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F304FA4:
    // 7F304FA4: rlwinm r28, r0, 4, 0, 27
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F304FA8:
    ctx->pc = 0x7F304FA8u;
    // 7F304FA8: lwz     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304FAC:
    ctx->pc = 0x7F304FACu;
    // 7F304FAC: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FB0:
    // 7F304FB0: add   r8, r21, r28
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F304FB4:
    ctx->pc = 0x7F304FB4u;
    // 7F304FB4: stw     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304FB8:
    ctx->pc = 0x7F304FB8u;
    // 7F304FB8: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304FBC:
    ctx->pc = 0x7F304FBCu;
    // 7F304FBC: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304FC0:
    ctx->pc = 0x7F304FC0u;
    // 7F304FC0: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FC4:
    ctx->pc = 0x7F304FC4u;
    // 7F304FC4: stw     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304FC8:
    ctx->pc = 0x7F304FC8u;
    // 7F304FC8: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304FCC:
    ctx->pc = 0x7F304FCCu;
    // 7F304FCC: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304FD0:
    ctx->pc = 0x7F304FD0u;
    // 7F304FD0: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FD4:
    ctx->pc = 0x7F304FD4u;
    // 7F304FD4: stw     r6, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304FD8:
    ctx->pc = 0x7F304FD8u;
    // 7F304FD8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304FDC:
    ctx->pc = 0x7F304FDCu;
    // 7F304FDC: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304FE0:
    ctx->pc = 0x7F304FE0u;
    // 7F304FE0: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FE4:
    ctx->pc = 0x7F304FE4u;
    // 7F304FE4: stw     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304FE8:
    ctx->pc = 0x7F304FE8u;
    // 7F304FE8: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304FEC:
    ctx->pc = 0x7F304FECu;
    // 7F304FEC: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F304FF0:
    ctx->pc = 0x7F304FF0u;
    // 7F304FF0: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F304FF4:
    ctx->pc = 0x7F304FF4u;
    // 7F304FF4: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F304FF8:
    ctx->pc = 0x7F304FF8u;
    // 7F304FF8: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F304FFC:
    ctx->pc = 0x7F304FFCu;
    // 7F304FFC: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305000:
    ctx->pc = 0x7F305000u;
    // 7F305000: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305004:
    ctx->pc = 0x7F305004u;
    // 7F305004: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305008:
    ctx->pc = 0x7F305008u;
    // 7F305008: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30500C:
    // 7F30500C: bl      0x80025FFC
    {
            ctx->lr = 0x7F305010u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F305010:
    ctx->pc = 0x7F305010u;
    ctx->downcount -= 4;
    // 7F305010: lwz     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305014:
    // 7F305014: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305018:
    ctx->pc = 0x7F305018u;
    // 7F305018: lwz     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30501C:
    // 7F30501C: bl      0x80025FFC
    {
            ctx->lr = 0x7F305020u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F305020:
    ctx->downcount -= 13;
    // 7F305020: add   r26, r20, r28
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F305024:
    ctx->pc = 0x7F305024u;
    // 7F305024: lwz     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305028:
    ctx->pc = 0x7F305028u;
    // 7F305028: lwz     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30502C:
    ctx->pc = 0x7F30502Cu;
    // 7F30502C: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305030:
    ctx->pc = 0x7F305030u;
    // 7F305030: lwz     r4, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305034:
    ctx->pc = 0x7F305034u;
    // 7F305034: stw     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305038:
    ctx->pc = 0x7F305038u;
    // 7F305038: lwz     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30503C:
    ctx->pc = 0x7F30503Cu;
    // 7F30503C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305040:
    ctx->pc = 0x7F305040u;
    // 7F305040: lwz     r6, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305044:
    ctx->pc = 0x7F305044u;
    // 7F305044: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305048:
    ctx->pc = 0x7F305048u;
    // 7F305048: stw     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30504C:
    ctx->pc = 0x7F30504Cu;
    // 7F30504C: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305050:
    // 7F305050: bl      0x800260FC
    {
            ctx->lr = 0x7F305054u;
            ctx->pc = 0x800260FCu;
            return;
    }

label_7F305054:
    ctx->downcount -= 11;
    // 7F305054: add   r24, r20, r27
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F305058:
    ctx->pc = 0x7F305058u;
    // 7F305058: lwz     r3, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30505C:
    ctx->pc = 0x7F30505Cu;
    // 7F30505C: lwz     r4, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305060:
    ctx->pc = 0x7F305060u;
    // 7F305060: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305064:
    ctx->pc = 0x7F305064u;
    // 7F305064: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305068:
    ctx->pc = 0x7F305068u;
    // 7F305068: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30506C:
    ctx->pc = 0x7F30506Cu;
    // 7F30506C: lwz     r4, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305070:
    ctx->pc = 0x7F305070u;
    // 7F305070: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305074:
    ctx->pc = 0x7F305074u;
    // 7F305074: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305078:
    ctx->pc = 0x7F305078u;
    // 7F305078: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30507C:
    // 7F30507C: bl      0x80026080
    {
            ctx->lr = 0x7F305080u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F305080:
    ctx->pc = 0x7F305080u;
    ctx->downcount -= 2;
    // 7F305080: lfs     f2, 12(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F305080u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F305084:
    // 7F305084: bl      0x7F304AF8
    {
            ctx->lr = 0x7F305088u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304AF8u;
                return;
            }
            goto label_7F304AF8;
    }

label_7F305088:
    ctx->pc = 0x7F305088u;
    ctx->downcount -= 3;
    // 7F305088: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30508C:
    // 7F30508C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F305090:
    // 7F305090: bl      0x80026020
    {
            ctx->lr = 0x7F305094u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F305094:
    ctx->pc = 0x7F305094u;
    ctx->downcount -= 4;
    // 7F305094: lwz     r3, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305098:
    // 7F305098: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F30509C:
    ctx->pc = 0x7F30509Cu;
    // 7F30509C: lwz     r5, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3050A0:
    // 7F3050A0: bl      0x80025FD8
    {
            ctx->lr = 0x7F3050A4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3050A4:
    ctx->pc = 0x7F3050A4u;
    ctx->downcount -= 21;
    // 7F3050A4: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3050A8:
    // 7F3050A8: add   r23, r20, r25
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F3050AC:
    ctx->pc = 0x7F3050ACu;
    // 7F3050AC: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3050B0:
    // 7F3050B0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3050B4:
    ctx->pc = 0x7F3050B4u;
    // 7F3050B4: lwz     r3, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3050B8:
    ctx->pc = 0x7F3050B8u;
    // 7F3050B8: stw     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3050BC:
    ctx->pc = 0x7F3050BCu;
    // 7F3050BC: lwz     r5, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3050C0:
    ctx->pc = 0x7F3050C0u;
    // 7F3050C0: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3050C4:
    ctx->pc = 0x7F3050C4u;
    // 7F3050C4: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3050C8:
    ctx->pc = 0x7F3050C8u;
    // 7F3050C8: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3050CC:
    ctx->pc = 0x7F3050CCu;
    // 7F3050CC: stw     r6, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3050D0:
    ctx->pc = 0x7F3050D0u;
    // 7F3050D0: stw     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3050D4:
    ctx->pc = 0x7F3050D4u;
    // 7F3050D4: lwz     r6, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3050D8:
    ctx->pc = 0x7F3050D8u;
    // 7F3050D8: lwz     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3050DC:
    ctx->pc = 0x7F3050DCu;
    // 7F3050DC: stw     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3050E0:
    ctx->pc = 0x7F3050E0u;
    // 7F3050E0: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3050E4:
    ctx->pc = 0x7F3050E4u;
    // 7F3050E4: lwz     r6, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3050E8:
    ctx->pc = 0x7F3050E8u;
    // 7F3050E8: lwz     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3050EC:
    ctx->pc = 0x7F3050ECu;
    // 7F3050EC: stw     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3050F0:
    ctx->pc = 0x7F3050F0u;
    // 7F3050F0: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3050F4:
    // 7F3050F4: bl      0x80025FD8
    {
            ctx->lr = 0x7F3050F8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F3050F8:
    ctx->pc = 0x7F3050F8u;
    ctx->downcount -= 4;
    // 7F3050F8: lwz     r3, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3050FC:
    // 7F3050FC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F305100:
    ctx->pc = 0x7F305100u;
    // 7F305100: lwz     r5, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305104:
    // 7F305104: bl      0x80025FD8
    {
            ctx->lr = 0x7F305108u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F305108:
    ctx->pc = 0x7F305108u;
    ctx->downcount -= 27;
    // 7F305108: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30510C:
    ctx->pc = 0x7F30510Cu;
    // 7F30510C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305110:
    ctx->pc = 0x7F305110u;
    // 7F305110: lwz     r3, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305114:
    ctx->pc = 0x7F305114u;
    // 7F305114: stw     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305118:
    ctx->pc = 0x7F305118u;
    // 7F305118: lwz     r4, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30511C:
    ctx->pc = 0x7F30511Cu;
    // 7F30511C: stw     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305120:
    ctx->pc = 0x7F305120u;
    // 7F305120: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305124:
    ctx->pc = 0x7F305124u;
    // 7F305124: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305128:
    ctx->pc = 0x7F305128u;
    // 7F305128: stw     r5, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30512C:
    ctx->pc = 0x7F30512Cu;
    // 7F30512C: stw     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305130:
    ctx->pc = 0x7F305130u;
    // 7F305130: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305134:
    ctx->pc = 0x7F305134u;
    // 7F305134: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305138:
    ctx->pc = 0x7F305138u;
    // 7F305138: stw     r5, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30513C:
    ctx->pc = 0x7F30513Cu;
    // 7F30513C: stw     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305140:
    ctx->pc = 0x7F305140u;
    // 7F305140: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305144:
    ctx->pc = 0x7F305144u;
    // 7F305144: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305148:
    ctx->pc = 0x7F305148u;
    // 7F305148: stw     r5, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30514C:
    ctx->pc = 0x7F30514Cu;
    // 7F30514C: stw     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305150:
    ctx->pc = 0x7F305150u;
    // 7F305150: lwz     r5, 0(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305154:
    ctx->pc = 0x7F305154u;
    // 7F305154: lwz     r0, 4(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305158:
    ctx->pc = 0x7F305158u;
    // 7F305158: stw     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30515C:
    ctx->pc = 0x7F30515Cu;
    // 7F30515C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305160:
    ctx->pc = 0x7F305160u;
    // 7F305160: lwz     r5, 8(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305164:
    ctx->pc = 0x7F305164u;
    // 7F305164: lwz     r0, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305168:
    ctx->pc = 0x7F305168u;
    // 7F305168: stw     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30516C:
    ctx->pc = 0x7F30516Cu;
    // 7F30516C: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305170:
    // 7F305170: bl      0x800260DC
    {
            ctx->lr = 0x7F305174u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F305174:
    ctx->pc = 0x7F305174u;
    ctx->downcount -= 3;
    // 7F305174: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F305174u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F305178:
    ctx->pc = 0x7F305178u;
    // 7F305178: lwz     r3, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30517C:
    // 7F30517C: bl      0x80026080
    {
            ctx->lr = 0x7F305180u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F305180:
    ctx->pc = 0x7F305180u;
    ctx->downcount -= 3;
    // 7F305180: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F305180u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F305184:
    ctx->pc = 0x7F305184u;
    // 7F305184: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F305184u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F305188:
    // 7F305188: bl      0x7F3052A8
    {
            ctx->lr = 0x7F30518Cu;
            goto label_7F3052A8;
    }

label_7F30518C:
    ctx->pc = 0x7F30518Cu;
    ctx->downcount -= 3;
    // 7F30518C: fmuls   f2, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30518Cu)) return;
    ppc_fmuls(ctx, 2, 29, 1);

label_7F305190:
    ctx->pc = 0x7F305190u;
    // 7F305190: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F305190u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F305194:
    // 7F305194: bl      0x7F304AF8
    {
            ctx->lr = 0x7F305198u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304AF8u;
                return;
            }
            goto label_7F304AF8;
    }

label_7F305198:
    ctx->pc = 0x7F305198u;
    ctx->downcount -= 3;
    // 7F305198: lwz     r3, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30519C:
    ctx->pc = 0x7F30519Cu;
    // 7F30519C: lwz     r4, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3051A0:
    // 7F3051A0: bl      0x80026020
    {
            ctx->lr = 0x7F3051A4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3051A4:
    ctx->downcount -= 4;
    // 7F3051A4: add   r23, r18, r28
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F3051A8:
    ctx->pc = 0x7F3051A8u;
    // 7F3051A8: lwz     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3051AC:
    // 7F3051AC: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051B0:
    // 7F3051B0: bl      0x800260DC
    {
            ctx->lr = 0x7F3051B4u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3051B4:
    ctx->downcount -= 3;
    // 7F3051B4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051B8:
    // 7F3051B8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F3051BC:
    // 7F3051BC: bl      0x80026020
    {
            ctx->lr = 0x7F3051C0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3051C0:
    ctx->downcount -= 4;
    // 7F3051C0: add   r23, r18, r27
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F3051C4:
    ctx->pc = 0x7F3051C4u;
    // 7F3051C4: lwz     r3, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3051C8:
    // 7F3051C8: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051CC:
    // 7F3051CC: bl      0x800260DC
    {
            ctx->lr = 0x7F3051D0u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3051D0:
    ctx->downcount -= 3;
    // 7F3051D0: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051D4:
    // 7F3051D4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3051D8:
    // 7F3051D8: bl      0x80026020
    {
            ctx->lr = 0x7F3051DCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3051DC:
    ctx->downcount -= 4;
    // 7F3051DC: add   r23, r18, r25
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F3051E0:
    ctx->pc = 0x7F3051E0u;
    // 7F3051E0: lwz     r3, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3051E4:
    // 7F3051E4: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051E8:
    // 7F3051E8: bl      0x800260DC
    {
            ctx->lr = 0x7F3051ECu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3051EC:
    ctx->downcount -= 3;
    // 7F3051EC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3051F0:
    // 7F3051F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3051F4:
    // 7F3051F4: bl      0x80026020
    {
            ctx->lr = 0x7F3051F8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F3051F8:
    ctx->pc = 0x7F3051F8u;
    ctx->downcount -= 6;
    // 7F3051F8: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3051FC:
    // 7F3051FC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F305200:
    // 7F305200: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305204:
    // 7F305204: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F305208:
    ctx->pc = 0x7F305208u;
    // 7F305208: lfsx    f1, r17, r0
    if (!ppc_fp_available_inline(ctx, 0x7F305208u)) return;
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30520C:
    // 7F30520C: bl      0x80026020
    {
            ctx->lr = 0x7F305210u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F305210:
    ctx->pc = 0x7F305210u;
    ctx->downcount -= 6;
    // 7F305210: lwz     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305214:
    // 7F305214: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F305218:
    // 7F305218: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30521C:
    // 7F30521C: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F305220:
    ctx->pc = 0x7F305220u;
    // 7F305220: lfsx    f1, r17, r0
    if (!ppc_fp_available_inline(ctx, 0x7F305220u)) return;
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F305224:
    // 7F305224: bl      0x80026020
    {
            ctx->lr = 0x7F305228u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F305228:
    ctx->downcount -= 5;
    // 7F305228: rlwinm r0, r14, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[14], 3u) & 0xFFFFFFF8u;
    }

label_7F30522C:
    // 7F30522C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F305230:
    ctx->pc = 0x7F305230u;
    // 7F305230: lfsx    f1, r17, r0
    if (!ppc_fp_available_inline(ctx, 0x7F305230u)) return;
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F305234:
    // 7F305234: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305238:
    // 7F305238: bl      0x80026020
    {
            ctx->lr = 0x7F30523Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F30523C:
    ctx->downcount -= 4;
    // 7F30523C: add   r3, r19, r28
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F305240:
    // 7F305240: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F305244:
    // 7F305244: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305248:
    // 7F305248: bl      0x80025FD8
    {
            ctx->lr = 0x7F30524Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30524C:
    ctx->downcount -= 4;
    // 7F30524C: add   r3, r19, r27
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F305250:
    // 7F305250: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F305254:
    // 7F305254: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305258:
    // 7F305258: bl      0x80025FD8
    {
            ctx->lr = 0x7F30525Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30525C:
    ctx->downcount -= 4;
    // 7F30525C: add   r3, r19, r25
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F305260:
    // 7F305260: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F305264:
    // 7F305264: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305268:
    // 7F305268: bl      0x80025FD8
    {
            ctx->lr = 0x7F30526Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F30526C:
    ctx->downcount -= 2;
    // 7F30526C: addi    r16, r16, -1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(-1);

label_7F305270:
    // 7F305270: addi    r22, r22, 16
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(16);

label_7F305274:
    ctx->downcount -= 2;
    // 7F305274: cmpwi   r16, 0
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F305278:
    // 7F305278: bc    12, 1, 0x7F304F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304F6Cu;
                return;
            }
            goto label_7F304F6C;
        }
    }

label_7F30527C:
    ctx->pc = 0x7F30527Cu;
    ctx->downcount -= 22;
    // 7F30527C: psq_l   f31, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30527Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F30527Cu);
        if (ctx->exception) return;
    }

label_7F305280:
    ctx->pc = 0x7F305280u;
    // 7F305280: lfd     f31, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F305280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F305284:
    ctx->pc = 0x7F305284u;
    // 7F305284: psq_l   f30, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F305284u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F305284u);
        if (ctx->exception) return;
    }

label_7F305288:
    ctx->pc = 0x7F305288u;
    // 7F305288: lfd     f30, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F305288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30528C:
    ctx->pc = 0x7F30528Cu;
    // 7F30528C: psq_l   f29, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F30528Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F30528Cu);
        if (ctx->exception) return;
    }

label_7F305290:
    ctx->pc = 0x7F305290u;
    // 7F305290: lfd     f29, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F305290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F305294:
    ctx->pc = 0x7F305294u;
    // 7F305294: lmw     r14, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F305298:
    ctx->pc = 0x7F305298u;
    // 7F305298: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30529C:
    ctx->pc = 0x7F30529Cu;
    // 7F30529C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3052A0:
    ctx->pc = 0x7F3052A0u;
    // 7F3052A0: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_7F3052A4:
    ctx->pc = 0x7F3052A4u;
    // 7F3052A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3052A8:
    ctx->pc = 0x7F3052A8u;
    ctx->downcount -= 8;
    // 7F3052A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3052AC:
    ctx->pc = 0x7F3052ACu;
    // 7F3052AC: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3052ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3052B0:
    ctx->pc = 0x7F3052B0u;
    // 7F3052B0: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3052B4:
    ctx->pc = 0x7F3052B4u;
    // 7F3052B4: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F3052B8:
    ctx->pc = 0x7F3052B8u;
    // 7F3052B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3052BC:
    ctx->pc = 0x7F3052BCu;
    // 7F3052BC: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3052BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3052C0:
    ctx->pc = 0x7F3052C0u;
    // 7F3052C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3052C4:
    ctx->pc = 0x7F3052C4u;
    // 7F3052C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3052C8:
    ctx->pc = 0x7F3052C8u;
    ctx->downcount -= 33;
    // 7F3052C8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3052CC:
    ctx->pc = 0x7F3052CCu;
    // 7F3052CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3052D0:
    ctx->pc = 0x7F3052D0u;
    // 7F3052D0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3052D4:
    ctx->pc = 0x7F3052D4u;
    // 7F3052D4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3052D8:
    ctx->pc = 0x7F3052D8u;
    // 7F3052D8: stmw     r20, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3052DC:
    ctx->pc = 0x7F3052DCu;
    // 7F3052DC: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3052E0:
    ctx->pc = 0x7F3052E0u;
    // 7F3052E0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3052E4:
    ctx->pc = 0x7F3052E4u;
    // 7F3052E4: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F3052E8:
    ctx->pc = 0x7F3052E8u;
    // 7F3052E8: lwz     r4, 328(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3052EC:
    ctx->pc = 0x7F3052ECu;
    // 7F3052EC: lwz     r6, 320(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(320);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3052F0:
    ctx->pc = 0x7F3052F0u;
    // 7F3052F0: rlwinm r5, r4, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F3052F4:
    ctx->pc = 0x7F3052F4u;
    // 7F3052F4: lwz     r4, 204(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3052F8:
    ctx->pc = 0x7F3052F8u;
    // 7F3052F8: lwzx    r6, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3052FC:
    ctx->pc = 0x7F3052FCu;
    // 7F3052FC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305300:
    ctx->pc = 0x7F305300u;
    // 7F305300: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F305304:
    ctx->pc = 0x7F305304u;
    // 7F305304: lwz     r26, 356(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(356);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F305308:
    ctx->pc = 0x7F305308u;
    // 7F305308: lwz     r25, 376(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(376);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F30530C:
    ctx->pc = 0x7F30530Cu;
    // 7F30530C: lwz     r24, 380(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(380);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F305310:
    ctx->pc = 0x7F305310u;
    // 7F305310: lwz     r23, 368(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(368);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F305314:
    ctx->pc = 0x7F305314u;
    // 7F305314: lwz     r22, 372(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(372);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F305318:
    ctx->pc = 0x7F305318u;
    // 7F305318: lwz     r21, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F30531C:
    ctx->pc = 0x7F30531Cu;
    // 7F30531C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305320:
    loop_7F305320(ctx);
    if (ctx->pc == 0x7F305334u) goto label_7F305334;
    return;
label_7F305324:
    ctx->pc = 0x7F305324u;
    // 7F305324: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305328:
    ctx->pc = 0x7F305328u;
    // 7F305328: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30532C:
    ctx->pc = 0x7F30532Cu;
    // 7F30532C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305330:
    // 7F305330: bc    16, 0, 0x7F305320
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305320u;
                return;
            }
            goto label_7F305320;
        }
    }

label_7F305334:
    ctx->pc = 0x7F305334u;
    ctx->downcount -= 7;
    // 7F305334: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305338:
    ctx->pc = 0x7F305338u;
    // 7F305338: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30533C:
    ctx->pc = 0x7F30533Cu;
    // 7F30533C: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F305340:
    ctx->pc = 0x7F305340u;
    // 7F305340: addi    r4, r20, 204
    ctx->gpr[4] = ctx->gpr[20] + (u32)(s32)(204);

label_7F305344:
    ctx->pc = 0x7F305344u;
    // 7F305344: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305348:
    ctx->pc = 0x7F305348u;
    // 7F305348: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30534C:
    loop_7F30534C(ctx);
    if (ctx->pc == 0x7F305360u) goto label_7F305360;
    return;
label_7F305350:
    ctx->pc = 0x7F305350u;
    // 7F305350: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305354:
    ctx->pc = 0x7F305354u;
    // 7F305354: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305358:
    ctx->pc = 0x7F305358u;
    // 7F305358: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F30535C:
    // 7F30535C: bc    16, 0, 0x7F30534C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30534Cu;
                return;
            }
            goto label_7F30534C;
        }
    }

label_7F305360:
    ctx->pc = 0x7F305360u;
    ctx->downcount -= 7;
    // 7F305360: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305364:
    ctx->pc = 0x7F305364u;
    // 7F305364: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F305368:
    ctx->pc = 0x7F305368u;
    // 7F305368: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F30536C:
    ctx->pc = 0x7F30536Cu;
    // 7F30536C: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F305370:
    ctx->pc = 0x7F305370u;
    // 7F305370: addi    r4, r4, -1212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1212);

label_7F305374:
    ctx->pc = 0x7F305374u;
    // 7F305374: addi    r5, r5, -1148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F305378:
    ctx->pc = 0x7F305378u;
    // 7F305378: bl      0x80025A80
    {
            ctx->lr = 0x7F30537Cu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F30537C:
    ctx->pc = 0x7F30537Cu;
    ctx->downcount -= 7;
    // 7F30537C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305380:
    ctx->pc = 0x7F305380u;
    // 7F305380: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305384:
    ctx->pc = 0x7F305384u;
    // 7F305384: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F305388:
    ctx->pc = 0x7F305388u;
    // 7F305388: lwz     r5, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30538C:
    ctx->pc = 0x7F30538Cu;
    // 7F30538C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305390:
    ctx->pc = 0x7F305390u;
    // 7F305390: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305394:
    loop_7F305394(ctx);
    if (ctx->pc == 0x7F3053A8u) goto label_7F3053A8;
    return;
label_7F305398:
    ctx->pc = 0x7F305398u;
    // 7F305398: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30539C:
    ctx->pc = 0x7F30539Cu;
    // 7F30539C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3053A0:
    ctx->pc = 0x7F3053A0u;
    // 7F3053A0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3053A4:
    // 7F3053A4: bc    16, 0, 0x7F305394
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305394u;
                return;
            }
            goto label_7F305394;
        }
    }

label_7F3053A8:
    ctx->pc = 0x7F3053A8u;
    ctx->downcount -= 8;
    // 7F3053A8: lwz     r4, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3053AC:
    ctx->pc = 0x7F3053ACu;
    // 7F3053AC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3053B0:
    ctx->pc = 0x7F3053B0u;
    // 7F3053B0: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F3053B4:
    ctx->pc = 0x7F3053B4u;
    // 7F3053B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3053B8:
    ctx->pc = 0x7F3053B8u;
    // 7F3053B8: addi    r5, r4, 440
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(440);

label_7F3053BC:
    ctx->pc = 0x7F3053BCu;
    // 7F3053BC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3053C0:
    ctx->pc = 0x7F3053C0u;
    // 7F3053C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3053C4:
    loop_7F3053C4(ctx);
    if (ctx->pc == 0x7F3053D8u) goto label_7F3053D8;
    return;
label_7F3053C8:
    ctx->pc = 0x7F3053C8u;
    // 7F3053C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3053CC:
    ctx->pc = 0x7F3053CCu;
    // 7F3053CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3053D0:
    ctx->pc = 0x7F3053D0u;
    // 7F3053D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3053D4:
    // 7F3053D4: bc    16, 0, 0x7F3053C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3053C4u;
                return;
            }
            goto label_7F3053C4;
        }
    }

label_7F3053D8:
    ctx->pc = 0x7F3053D8u;
    ctx->downcount -= 10;
    // 7F3053D8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3053DC:
    ctx->pc = 0x7F3053DCu;
    // 7F3053DC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3053E0:
    ctx->pc = 0x7F3053E0u;
    // 7F3053E0: addi    r27, r3, -1148
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F3053E4:
    ctx->pc = 0x7F3053E4u;
    // 7F3053E4: lwz     r20, 352(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(352);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F3053E8:
    ctx->pc = 0x7F3053E8u;
    // 7F3053E8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3053EC:
    ctx->pc = 0x7F3053ECu;
    // 7F3053EC: addi    r30, r4, 12832
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F3053F0:
    ctx->pc = 0x7F3053F0u;
    // 7F3053F0: or   r28, r27, r27
    {
        ctx->gpr[28] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3053F4:
    ctx->pc = 0x7F3053F4u;
    // 7F3053F4: or   r29, r27, r27
    {
        ctx->gpr[29] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3053F8:
    ctx->pc = 0x7F3053F8u;
    // 7F3053F8: addi    r31, r3, -28480
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-28480);

label_7F3053FC:
    ctx->pc = 0x7F3053FCu;
    // 7F3053FC: b       0x7F3054DC
    {
            goto label_7F3054DC;
    }

label_7F305400:
    ctx->downcount -= 4;
    // 7F305400: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F305404:
    // 7F305404: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F305408:
    // 7F305408: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F30540C:
    // 7F30540C: bl      0x7F3040B8
    {
            ctx->lr = 0x7F305410u;
            ctx->pc = 0x7F3040B8u;
            return;
    }

label_7F305410:
    ctx->downcount -= 4;
    // 7F305410: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F305414:
    // 7F305414: addi    r3, r26, 16
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(16);

label_7F305418:
    // 7F305418: addi    r5, r21, 16
    ctx->gpr[5] = ctx->gpr[21] + (u32)(s32)(16);

label_7F30541C:
    // 7F30541C: bl      0x7F3040B8
    {
            ctx->lr = 0x7F305420u;
            ctx->pc = 0x7F3040B8u;
            return;
    }

label_7F305420:
    ctx->downcount -= 4;
    // 7F305420: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F305424:
    // 7F305424: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F305428:
    // 7F305428: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30542C:
    // 7F30542C: bl      0x7F3054F8
    {
            ctx->lr = 0x7F305430u;
            goto label_7F3054F8;
    }

label_7F305430:
    ctx->downcount -= 4;
    // 7F305430: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F305434:
    // 7F305434: addi    r3, r24, 16
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(16);

label_7F305438:
    // 7F305438: addi    r5, r25, 16
    ctx->gpr[5] = ctx->gpr[25] + (u32)(s32)(16);

label_7F30543C:
    // 7F30543C: bl      0x7F3054F8
    {
            ctx->lr = 0x7F305440u;
            goto label_7F3054F8;
    }

label_7F305440:
    ctx->pc = 0x7F305440u;
    ctx->downcount -= 39;
    // 7F305440: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305444:
    // 7F305444: addi    r20, r20, -2
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(-2);

label_7F305448:
    ctx->pc = 0x7F305448u;
    // 7F305448: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30544C:
    // 7F30544C: addi    r21, r21, 32
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(32);

label_7F305450:
    // 7F305450: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_7F305454:
    // 7F305454: addi    r25, r25, 32
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(32);

label_7F305458:
    ctx->pc = 0x7F305458u;
    // 7F305458: stw     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30545C:
    // 7F30545C: addi    r24, r24, 32
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(32);

label_7F305460:
    ctx->pc = 0x7F305460u;
    // 7F305460: stw     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305464:
    ctx->pc = 0x7F305464u;
    // 7F305464: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305468:
    ctx->pc = 0x7F305468u;
    // 7F305468: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30546C:
    ctx->pc = 0x7F30546Cu;
    // 7F30546C: stw     r3, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305470:
    ctx->pc = 0x7F305470u;
    // 7F305470: stw     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305474:
    ctx->pc = 0x7F305474u;
    // 7F305474: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305478:
    ctx->pc = 0x7F305478u;
    // 7F305478: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30547C:
    ctx->pc = 0x7F30547Cu;
    // 7F30547C: stw     r3, 16(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305480:
    ctx->pc = 0x7F305480u;
    // 7F305480: stw     r0, 20(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305484:
    ctx->pc = 0x7F305484u;
    // 7F305484: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305488:
    ctx->pc = 0x7F305488u;
    // 7F305488: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30548C:
    ctx->pc = 0x7F30548Cu;
    // 7F30548C: stw     r3, 24(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305490:
    ctx->pc = 0x7F305490u;
    // 7F305490: stw     r0, 28(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305494:
    // 7F305494: addi    r23, r23, 32
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(32);

label_7F305498:
    ctx->pc = 0x7F305498u;
    // 7F305498: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30549C:
    ctx->pc = 0x7F30549Cu;
    // 7F30549C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3054A0:
    ctx->pc = 0x7F3054A0u;
    // 7F3054A0: stw     r3, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3054A4:
    ctx->pc = 0x7F3054A4u;
    // 7F3054A4: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3054A8:
    ctx->pc = 0x7F3054A8u;
    // 7F3054A8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3054AC:
    ctx->pc = 0x7F3054ACu;
    // 7F3054AC: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3054B0:
    ctx->pc = 0x7F3054B0u;
    // 7F3054B0: stw     r3, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3054B4:
    ctx->pc = 0x7F3054B4u;
    // 7F3054B4: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3054B8:
    ctx->pc = 0x7F3054B8u;
    // 7F3054B8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3054BC:
    ctx->pc = 0x7F3054BCu;
    // 7F3054BC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3054C0:
    ctx->pc = 0x7F3054C0u;
    // 7F3054C0: stw     r3, 16(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3054C4:
    ctx->pc = 0x7F3054C4u;
    // 7F3054C4: stw     r0, 20(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3054C8:
    ctx->pc = 0x7F3054C8u;
    // 7F3054C8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3054CC:
    ctx->pc = 0x7F3054CCu;
    // 7F3054CC: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3054D0:
    ctx->pc = 0x7F3054D0u;
    // 7F3054D0: stw     r3, 24(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3054D4:
    ctx->pc = 0x7F3054D4u;
    // 7F3054D4: stw     r0, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3054D8:
    // 7F3054D8: addi    r22, r22, 32
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(32);

label_7F3054DC:
    ctx->downcount -= 2;
    // 7F3054DC: cmpwi   r20, 0
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

label_7F3054E0:
    // 7F3054E0: bc    12, 1, 0x7F305400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305400u;
                return;
            }
            goto label_7F305400;
        }
    }

label_7F3054E4:
    ctx->pc = 0x7F3054E4u;
    ctx->downcount -= 16;
    // 7F3054E4: lmw     r20, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3054E8:
    ctx->pc = 0x7F3054E8u;
    // 7F3054E8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3054EC:
    ctx->pc = 0x7F3054ECu;
    // 7F3054EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3054F0:
    ctx->pc = 0x7F3054F0u;
    // 7F3054F0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3054F4:
    ctx->pc = 0x7F3054F4u;
    // 7F3054F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3054F8:
    ctx->pc = 0x7F3054F8u;
    ctx->downcount -= 19;
    // 7F3054F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3054FC:
    ctx->pc = 0x7F3054FCu;
    // 7F3054FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305500:
    ctx->pc = 0x7F305500u;
    // 7F305500: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F305504:
    ctx->pc = 0x7F305504u;
    // 7F305504: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305508:
    ctx->pc = 0x7F305508u;
    // 7F305508: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30550C:
    ctx->pc = 0x7F30550Cu;
    // 7F30550C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F305510:
    ctx->pc = 0x7F305510u;
    // 7F305510: lfs     f0, 32308(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F305510u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305514:
    ctx->pc = 0x7F305514u;
    // 7F305514: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F305518:
    ctx->pc = 0x7F305518u;
    // 7F305518: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30551C:
    ctx->pc = 0x7F30551Cu;
    // 7F30551C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305520:
    ctx->pc = 0x7F305520u;
    // 7F305520: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305524:
    ctx->pc = 0x7F305524u;
    // 7F305524: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305528:
    ctx->pc = 0x7F305528u;
    // 7F305528: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30552C:
    ctx->pc = 0x7F30552Cu;
    // 7F30552C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305530:
    ctx->pc = 0x7F305530u;
    // 7F305530: or   r5, r8, r8
    {
        ctx->gpr[5] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F305534:
    ctx->pc = 0x7F305534u;
    // 7F305534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305538:
    ctx->pc = 0x7F305538u;
    // 7F305538: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30553C:
    ctx->pc = 0x7F30553Cu;
    // 7F30553C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30553Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305540:
    ctx->pc = 0x7F305540u;
    // 7F305540: bl      0x7F114508
    {
            ctx->lr = 0x7F305544u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F305544:
    ctx->pc = 0x7F305544u;
    ctx->downcount -= 5;
    // 7F305544: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305548:
    ctx->pc = 0x7F305548u;
    // 7F305548: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30554C:
    ctx->pc = 0x7F30554Cu;
    // 7F30554C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F305550:
    ctx->pc = 0x7F305550u;
    // 7F305550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305554:
    ctx->pc = 0x7F305554u;
    ctx->downcount -= 6;
    // 7F305554: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305558:
    ctx->pc = 0x7F305558u;
    // 7F305558: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30555C:
    ctx->pc = 0x7F30555Cu;
    // 7F30555C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305560:
    ctx->pc = 0x7F305560u;
    // 7F305560: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F305564:
    ctx->pc = 0x7F305564u;
    // 7F305564: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305568:
    ctx->pc = 0x7F305568u;
    // 7F305568: bl      0x7F3052C8
    {
            ctx->lr = 0x7F30556Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3052C8u;
                return;
            }
            goto label_7F3052C8;
    }

label_7F30556C:
    ctx->pc = 0x7F30556Cu;
    ctx->downcount -= 2;
    // 7F30556C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305570:
    ctx->pc = 0x7F305570u;
    // 7F305570: bl      0x7F304E84
    {
            ctx->lr = 0x7F305574u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304E84u;
                return;
            }
            goto label_7F304E84;
    }

label_7F305574:
    ctx->pc = 0x7F305574u;
    ctx->downcount -= 2;
    // 7F305574: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305578:
    ctx->pc = 0x7F305578u;
    // 7F305578: bl      0x7F304C9C
    {
            ctx->lr = 0x7F30557Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F304C9Cu;
                return;
            }
            goto label_7F304C9C;
    }

label_7F30557C:
    ctx->pc = 0x7F30557Cu;
    ctx->downcount -= 2;
    // 7F30557C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305580:
    ctx->pc = 0x7F305580u;
    // 7F305580: bl      0x7F30428C
    {
            ctx->lr = 0x7F305584u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30428Cu;
                return;
            }
            goto label_7F30428C;
    }

label_7F305584:
    ctx->pc = 0x7F305584u;
    ctx->downcount -= 6;
    // 7F305584: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305588:
    ctx->pc = 0x7F305588u;
    // 7F305588: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30558C:
    ctx->pc = 0x7F30558Cu;
    // 7F30558C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305590:
    ctx->pc = 0x7F305590u;
    // 7F305590: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F305594:
    ctx->pc = 0x7F305594u;
    // 7F305594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305598:
    ctx->pc = 0x7F305598u;
    ctx->downcount -= 1;
    // 7F305598: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30559C:
    ctx->pc = 0x7F30559Cu;
    ctx->downcount -= 4;
    // 7F30559C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3055A0:
    ctx->pc = 0x7F3055A0u;
    // 7F3055A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3055A4:
    ctx->pc = 0x7F3055A4u;
    // 7F3055A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3055A8:
    ctx->pc = 0x7F3055A8u;
    // 7F3055A8: bl      0x7F305598
    {
            ctx->lr = 0x7F3055ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305598u;
                return;
            }
            goto label_7F305598;
    }

label_7F3055AC:
    ctx->pc = 0x7F3055ACu;
    ctx->downcount -= 5;
    // 7F3055AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3055B0:
    ctx->pc = 0x7F3055B0u;
    // 7F3055B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3055B4:
    ctx->pc = 0x7F3055B4u;
    // 7F3055B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3055B8:
    ctx->pc = 0x7F3055B8u;
    // 7F3055B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3055BC:
    ctx->pc = 0x7F3055BCu;
    ctx->downcount -= 8;
    // 7F3055BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3055C0:
    ctx->pc = 0x7F3055C0u;
    // 7F3055C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3055C4:
    ctx->pc = 0x7F3055C4u;
    // 7F3055C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3055C8:
    ctx->pc = 0x7F3055C8u;
    // 7F3055C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3055CC:
    ctx->pc = 0x7F3055CCu;
    // 7F3055CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3055D0:
    ctx->pc = 0x7F3055D0u;
    // 7F3055D0: lwz     r3, 10820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10820);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3055D4:
    ctx->pc = 0x7F3055D4u;
    // 7F3055D4: cmplwi  r3, 0x0000
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

label_7F3055D8:
    ctx->pc = 0x7F3055D8u;
    // 7F3055D8: bc    12, 2, 0x7F3055E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3055E0;
        }
    }

label_7F3055DC:
    ctx->pc = 0x7F3055DCu;
    ctx->downcount -= 1;
    // 7F3055DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3055E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3055E0:
    ctx->pc = 0x7F3055E0u;
    ctx->downcount -= 3;
    // 7F3055E0: lwz     r3, 10824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10824);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3055E4:
    ctx->pc = 0x7F3055E4u;
    // 7F3055E4: cmplwi  r3, 0x0000
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

label_7F3055E8:
    ctx->pc = 0x7F3055E8u;
    // 7F3055E8: bc    12, 2, 0x7F3055F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3055F0;
        }
    }

label_7F3055EC:
    ctx->pc = 0x7F3055ECu;
    ctx->downcount -= 1;
    // 7F3055EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3055F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3055F0:
    ctx->pc = 0x7F3055F0u;
    ctx->downcount -= 3;
    // 7F3055F0: lwz     r0, 10828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3055F4:
    ctx->pc = 0x7F3055F4u;
    // 7F3055F4: cmplwi  r0, 0x0000
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

label_7F3055F8:
    ctx->pc = 0x7F3055F8u;
    // 7F3055F8: bc    12, 2, 0x7F305604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305604;
        }
    }

label_7F3055FC:
    ctx->pc = 0x7F3055FCu;
    ctx->downcount -= 2;
    // 7F3055FC: lwz     r3, 10824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10824);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305600:
    ctx->pc = 0x7F305600u;
    // 7F305600: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305604u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305604:
    ctx->pc = 0x7F305604u;
    ctx->downcount -= 3;
    // 7F305604: lwz     r3, 10808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10808);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305608:
    ctx->pc = 0x7F305608u;
    // 7F305608: cmplwi  r3, 0x0000
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

label_7F30560C:
    ctx->pc = 0x7F30560Cu;
    // 7F30560C: bc    12, 2, 0x7F305614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305614;
        }
    }

label_7F305610:
    ctx->pc = 0x7F305610u;
    ctx->downcount -= 1;
    // 7F305610: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305614u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305614:
    ctx->pc = 0x7F305614u;
    ctx->downcount -= 3;
    // 7F305614: lwz     r3, 10812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10812);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305618:
    ctx->pc = 0x7F305618u;
    // 7F305618: cmplwi  r3, 0x0000
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

label_7F30561C:
    ctx->pc = 0x7F30561Cu;
    // 7F30561C: bc    12, 2, 0x7F305624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305624;
        }
    }

label_7F305620:
    ctx->pc = 0x7F305620u;
    ctx->downcount -= 1;
    // 7F305620: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305624u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305624:
    ctx->pc = 0x7F305624u;
    ctx->downcount -= 3;
    // 7F305624: lwz     r3, 10816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10816);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305628:
    ctx->pc = 0x7F305628u;
    // 7F305628: cmplwi  r3, 0x0000
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

label_7F30562C:
    ctx->pc = 0x7F30562Cu;
    // 7F30562C: bc    12, 2, 0x7F305634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305634;
        }
    }

label_7F305630:
    ctx->pc = 0x7F305630u;
    ctx->downcount -= 1;
    // 7F305630: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305634u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305634:
    ctx->pc = 0x7F305634u;
    ctx->downcount -= 3;
    // 7F305634: lwz     r3, 10832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305638:
    ctx->pc = 0x7F305638u;
    // 7F305638: cmplwi  r3, 0x0000
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

label_7F30563C:
    ctx->pc = 0x7F30563Cu;
    // 7F30563C: bc    12, 2, 0x7F305644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305644;
        }
    }

label_7F305640:
    ctx->pc = 0x7F305640u;
    ctx->downcount -= 1;
    // 7F305640: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305644u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305644:
    ctx->pc = 0x7F305644u;
    ctx->downcount -= 3;
    // 7F305644: lwz     r3, 10836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10836);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305648:
    ctx->pc = 0x7F305648u;
    // 7F305648: cmplwi  r3, 0x0000
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

label_7F30564C:
    ctx->pc = 0x7F30564Cu;
    // 7F30564C: bc    12, 2, 0x7F305654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305654;
        }
    }

label_7F305650:
    ctx->pc = 0x7F305650u;
    ctx->downcount -= 1;
    // 7F305650: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305654u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305654:
    ctx->pc = 0x7F305654u;
    ctx->downcount -= 3;
    // 7F305654: lwz     r3, 10840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305658:
    ctx->pc = 0x7F305658u;
    // 7F305658: cmplwi  r3, 0x0000
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

label_7F30565C:
    ctx->pc = 0x7F30565Cu;
    // 7F30565C: bc    12, 2, 0x7F305664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305664;
        }
    }

label_7F305660:
    ctx->pc = 0x7F305660u;
    ctx->downcount -= 1;
    // 7F305660: bl      0x7F3C8210
    {
            ctx->lr = 0x7F305664u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F305664:
    ctx->pc = 0x7F305664u;
    ctx->downcount -= 1;
    // 7F305664: bl      0x7F2FFA10
    {
            ctx->lr = 0x7F305668u;
            ctx->pc = 0x7F2FFA10u;
            return;
    }

label_7F305668:
    ctx->pc = 0x7F305668u;
    ctx->downcount -= 1;
    // 7F305668: bl      0x7F2FF88C
    {
            ctx->lr = 0x7F30566Cu;
            ctx->pc = 0x7F2FF88Cu;
            return;
    }

label_7F30566C:
    ctx->pc = 0x7F30566Cu;
    ctx->downcount -= 6;
    // 7F30566C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305670:
    ctx->pc = 0x7F305670u;
    // 7F305670: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F305674:
    ctx->pc = 0x7F305674u;
    // 7F305674: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305678:
    ctx->pc = 0x7F305678u;
    // 7F305678: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30567C:
    ctx->pc = 0x7F30567Cu;
    // 7F30567C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305680:
    ctx->pc = 0x7F305680u;
    ctx->downcount -= 10;
    // 7F305680: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305684:
    ctx->pc = 0x7F305684u;
    // 7F305684: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305688:
    ctx->pc = 0x7F305688u;
    // 7F305688: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F30568C:
    ctx->pc = 0x7F30568Cu;
    // 7F30568C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F305690:
    ctx->pc = 0x7F305690u;
    // 7F305690: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305694:
    ctx->pc = 0x7F305694u;
    // 7F305694: addi    r5, r4, -17720
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-17720);

label_7F305698:
    ctx->pc = 0x7F305698u;
    // 7F305698: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F30569C:
    ctx->pc = 0x7F30569Cu;
    // 7F30569C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3056A0:
    ctx->pc = 0x7F3056A0u;
    // 7F3056A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3056A4:
    ctx->pc = 0x7F3056A4u;
    // 7F3056A4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3056A8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3056A8:
    ctx->pc = 0x7F3056A8u;
    ctx->downcount -= 2;
    // 7F3056A8: or.   r31, r3, r3
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

label_7F3056AC:
    ctx->pc = 0x7F3056ACu;
    // 7F3056AC: bc    12, 2, 0x7F3056C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3056C4;
        }
    }

label_7F3056B0:
    ctx->pc = 0x7F3056B0u;
    ctx->downcount -= 5;
    // 7F3056B0: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F3056B4:
    ctx->pc = 0x7F3056B4u;
    // 7F3056B4: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F3056B8:
    ctx->pc = 0x7F3056B8u;
    // 7F3056B8: addi    r4, r4, 21916
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21916);

label_7F3056BC:
    ctx->pc = 0x7F3056BCu;
    // 7F3056BC: addi    r5, r5, 21948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21948);

label_7F3056C0:
    ctx->pc = 0x7F3056C0u;
    // 7F3056C0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F3056C4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F3056C4:
    ctx->pc = 0x7F3056C4u;
    ctx->downcount -= 7;
    // 7F3056C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3056C8:
    ctx->pc = 0x7F3056C8u;
    // 7F3056C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3056CC:
    ctx->pc = 0x7F3056CCu;
    // 7F3056CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3056D0:
    ctx->pc = 0x7F3056D0u;
    // 7F3056D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3056D4:
    ctx->pc = 0x7F3056D4u;
    // 7F3056D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3056D8:
    ctx->pc = 0x7F3056D8u;
    // 7F3056D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3056DC:
    ctx->pc = 0x7F3056DCu;
    ctx->downcount -= 64;
    // 7F3056DC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3056E0:
    ctx->pc = 0x7F3056E0u;
    // 7F3056E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3056E4:
    ctx->pc = 0x7F3056E4u;
    // 7F3056E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3056E8:
    ctx->pc = 0x7F3056E8u;
    // 7F3056E8: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3056E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3056EC:
    ctx->pc = 0x7F3056ECu;
    // 7F3056EC: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3056ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3056ECu);
        if (ctx->exception) return;
    }

label_7F3056F0:
    ctx->pc = 0x7F3056F0u;
    // 7F3056F0: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3056F4:
    ctx->pc = 0x7F3056F4u;
    // 7F3056F4: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F3056F8:
    ctx->pc = 0x7F3056F8u;
    // 7F3056F8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3056FC:
    ctx->pc = 0x7F3056FCu;
    // 7F3056FC: lfs     f0, 32360(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F3056FCu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305700:
    ctx->pc = 0x7F305700u;
    // 7F305700: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305704:
    ctx->pc = 0x7F305704u;
    // 7F305704: addi    r27, r3, 32364
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(32364);

label_7F305708:
    ctx->pc = 0x7F305708u;
    // 7F305708: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30570C:
    ctx->pc = 0x7F30570Cu;
    // 7F30570C: stfs     f0, 320(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F30570Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305710:
    ctx->pc = 0x7F305710u;
    // 7F305710: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305714:
    ctx->pc = 0x7F305714u;
    // 7F305714: lfs     f2, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F305714u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F305718:
    ctx->pc = 0x7F305718u;
    // 7F305718: addi    r12, r3, 32368
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(32368);

label_7F30571C:
    ctx->pc = 0x7F30571Cu;
    // 7F30571C: lfs     f0, 320(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F30571Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305720:
    ctx->pc = 0x7F305720u;
    // 7F305720: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F305724:
    ctx->pc = 0x7F305724u;
    // 7F305724: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F305728:
    ctx->pc = 0x7F305728u;
    // 7F305728: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F305728u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F30572C:
    ctx->pc = 0x7F30572Cu;
    // 7F30572C: fdivs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30572Cu)) return;
    ppc_fdivs(ctx, 2, 2, 0);

label_7F305730:
    ctx->pc = 0x7F305730u;
    // 7F305730: lfs     f1, 32388(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F305730u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F305734:
    ctx->pc = 0x7F305734u;
    // 7F305734: lfs     f0, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F305734u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305738:
    ctx->pc = 0x7F305738u;
    // 7F305738: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F30573C:
    ctx->pc = 0x7F30573Cu;
    // 7F30573C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F305740:
    ctx->pc = 0x7F305740u;
    // 7F305740: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F305744:
    ctx->pc = 0x7F305744u;
    // 7F305744: stfs     f2, 324(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305744u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F305748:
    ctx->pc = 0x7F305748u;
    // 7F305748: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30574C:
    ctx->pc = 0x7F30574Cu;
    // 7F30574C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F305750:
    ctx->pc = 0x7F305750u;
    // 7F305750: or   r30, r10, r10
    {
        ctx->gpr[30] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F305754:
    ctx->pc = 0x7F305754u;
    // 7F305754: stfs     f1, 328(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305754u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(328);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F305758:
    ctx->pc = 0x7F305758u;
    // 7F305758: addi    r5, r26, 124
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(124);

label_7F30575C:
    ctx->pc = 0x7F30575Cu;
    // 7F30575C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305760:
    ctx->pc = 0x7F305760u;
    // 7F305760: lwz     r31, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F305764:
    ctx->pc = 0x7F305764u;
    // 7F305764: stfs     f0, 340(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305764u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305768:
    ctx->pc = 0x7F305768u;
    // 7F305768: stw     r11, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F30576C:
    ctx->pc = 0x7F30576Cu;
    // 7F30576C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305770:
    loop_7F305770(ctx);
    if (ctx->pc == 0x7F305784u) goto label_7F305784;
    return;
label_7F305774:
    ctx->pc = 0x7F305774u;
    // 7F305774: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305778:
    ctx->pc = 0x7F305778u;
    // 7F305778: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30577C:
    ctx->pc = 0x7F30577Cu;
    // 7F30577C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305780:
    // 7F305780: bc    16, 0, 0x7F305770
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305770u;
                return;
            }
            goto label_7F305770;
        }
    }

label_7F305784:
    ctx->pc = 0x7F305784u;
    ctx->downcount -= 7;
    // 7F305784: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F305788:
    ctx->pc = 0x7F305788u;
    // 7F305788: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30578C:
    ctx->pc = 0x7F30578Cu;
    // 7F30578C: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F305790:
    ctx->pc = 0x7F305790u;
    // 7F305790: addi    r5, r26, 188
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(188);

label_7F305794:
    ctx->pc = 0x7F305794u;
    // 7F305794: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305798:
    ctx->pc = 0x7F305798u;
    // 7F305798: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30579C:
    loop_7F30579C(ctx);
    if (ctx->pc == 0x7F3057B0u) goto label_7F3057B0;
    return;
label_7F3057A0:
    ctx->pc = 0x7F3057A0u;
    // 7F3057A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3057A4:
    ctx->pc = 0x7F3057A4u;
    // 7F3057A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3057A8:
    ctx->pc = 0x7F3057A8u;
    // 7F3057A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3057AC:
    // 7F3057AC: bc    16, 0, 0x7F30579C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30579Cu;
                return;
            }
            goto label_7F30579C;
        }
    }

label_7F3057B0:
    ctx->pc = 0x7F3057B0u;
    ctx->downcount -= 16;
    // 7F3057B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3057B4:
    ctx->pc = 0x7F3057B4u;
    // 7F3057B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3057B8:
    ctx->pc = 0x7F3057B8u;
    // 7F3057B8: stw     r0, 268(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057BC:
    ctx->pc = 0x7F3057BCu;
    // 7F3057BC: addi    r4, r3, 32372
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32372);

label_7F3057C0:
    ctx->pc = 0x7F3057C0u;
    // 7F3057C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3057C4:
    ctx->pc = 0x7F3057C4u;
    // 7F3057C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3057C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3057C8:
    ctx->pc = 0x7F3057C8u;
    // 7F3057C8: stw     r0, 264(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057CC:
    ctx->pc = 0x7F3057CCu;
    // 7F3057CC: cmplwi  r9, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[9]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3057D0:
    ctx->pc = 0x7F3057D0u;
    // 7F3057D0: lfs     f0, 32376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3057D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3057D4:
    ctx->pc = 0x7F3057D4u;
    // 7F3057D4: stw     r0, 260(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057D8:
    ctx->pc = 0x7F3057D8u;
    // 7F3057D8: stw     r0, 256(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057DC:
    ctx->pc = 0x7F3057DCu;
    // 7F3057DC: stw     r0, 312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057E0:
    ctx->pc = 0x7F3057E0u;
    // 7F3057E0: stw     r0, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3057E4:
    ctx->pc = 0x7F3057E4u;
    // 7F3057E4: stfs     f1, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3057E4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3057E8:
    ctx->pc = 0x7F3057E8u;
    // 7F3057E8: stfs     f0, 336(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3057E8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3057EC:
    ctx->pc = 0x7F3057ECu;
    // 7F3057EC: bc    12, 2, 0x7F30581C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30581C;
        }
    }

label_7F3057F0:
    ctx->pc = 0x7F3057F0u;
    ctx->downcount -= 11;
    // 7F3057F0: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3057F4:
    ctx->pc = 0x7F3057F4u;
    // 7F3057F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3057F8:
    ctx->pc = 0x7F3057F8u;
    // 7F3057F8: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3057FC:
    ctx->pc = 0x7F3057FCu;
    // 7F3057FC: lfs     f0, 32336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3057FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305800:
    ctx->pc = 0x7F305800u;
    // 7F305800: stw     r4, 256(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305804:
    ctx->pc = 0x7F305804u;
    // 7F305804: stw     r0, 260(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305808:
    ctx->pc = 0x7F305808u;
    // 7F305808: lwz     r3, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30580C:
    ctx->pc = 0x7F30580Cu;
    // 7F30580C: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305810:
    ctx->pc = 0x7F305810u;
    // 7F305810: stw     r3, 264(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305814:
    ctx->pc = 0x7F305814u;
    // 7F305814: stw     r0, 268(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305818:
    ctx->pc = 0x7F305818u;
    // 7F305818: stfs     f0, 268(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305818u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30581C:
    ctx->pc = 0x7F30581Cu;
    ctx->downcount -= 5;
    // 7F30581C: stw     r7, 312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305820:
    ctx->pc = 0x7F305820u;
    // 7F305820: stw     r8, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F305824:
    ctx->pc = 0x7F305824u;
    // 7F305824: lwz     r3, 312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305828:
    ctx->pc = 0x7F305828u;
    // 7F305828: cmplwi  r3, 0x0000
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

label_7F30582C:
    ctx->pc = 0x7F30582Cu;
    // 7F30582C: bc    12, 2, 0x7F305868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305868;
        }
    }

label_7F305830:
    ctx->pc = 0x7F305830u;
    ctx->downcount -= 15;
    // 7F305830: lwz     r4, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305834:
    ctx->pc = 0x7F305834u;
    // 7F305834: addi    r0, r26, 128
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(128);

label_7F305838:
    ctx->pc = 0x7F305838u;
    // 7F305838: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30583C:
    ctx->pc = 0x7F30583Cu;
    // 7F30583C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F305840:
    ctx->pc = 0x7F305840u;
    // 7F305840: mulli   r4, r4, 324
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)324);

label_7F305844:
    ctx->pc = 0x7F305844u;
    // 7F305844: addi    r4, r4, 444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(444);

label_7F305848:
    ctx->pc = 0x7F305848u;
    // 7F305848: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30584C:
    ctx->pc = 0x7F30584Cu;
    // 7F30584C: stw     r4, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305850:
    ctx->pc = 0x7F305850u;
    // 7F305850: stw     r0, 68(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305854:
    ctx->pc = 0x7F305854u;
    // 7F305854: lwz     r4, 312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305858:
    ctx->pc = 0x7F305858u;
    // 7F305858: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30585C:
    ctx->pc = 0x7F30585Cu;
    // 7F30585C: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305860:
    ctx->pc = 0x7F305860u;
    // 7F305860: bl      0x7F3BC518
    {
            ctx->lr = 0x7F305864u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F305864:
    ctx->pc = 0x7F305864u;
    ctx->downcount -= 1;
    // 7F305864: b       0x7F305884
    {
            goto label_7F305884;
    }

label_7F305868:
    ctx->pc = 0x7F305868u;
    ctx->downcount -= 4;
    // 7F305868: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30586C:
    ctx->pc = 0x7F30586Cu;
    // 7F30586C: addi    r3, r26, 256
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(256);

label_7F305870:
    ctx->pc = 0x7F305870u;
    // 7F305870: addi    r5, r27, 156
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(156);

label_7F305874:
    ctx->pc = 0x7F305874u;
    // 7F305874: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F305878u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F305878:
    ctx->pc = 0x7F305878u;
    ctx->downcount -= 3;
    // 7F305878: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30587C:
    ctx->pc = 0x7F30587Cu;
    // 7F30587C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F305880:
    ctx->pc = 0x7F305880u;
    // 7F305880: bl      0x7F3BC518
    {
            ctx->lr = 0x7F305884u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F305884:
    ctx->pc = 0x7F305884u;
    ctx->downcount -= 2;
    // 7F305884: cmplwi  r28, 0x0000
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

label_7F305888:
    ctx->pc = 0x7F305888u;
    // 7F305888: bc    12, 2, 0x7F3058B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3058B8;
        }
    }

label_7F30588C:
    ctx->pc = 0x7F30588Cu;
    ctx->downcount -= 11;
    // 7F30588C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305890:
    ctx->pc = 0x7F305890u;
    // 7F305890: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305894:
    ctx->pc = 0x7F305894u;
    // 7F305894: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305898:
    ctx->pc = 0x7F305898u;
    // 7F305898: lfs     f0, 32336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F305898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30589C:
    ctx->pc = 0x7F30589Cu;
    // 7F30589C: stw     r4, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3058A0:
    ctx->pc = 0x7F3058A0u;
    // 7F3058A0: stw     r0, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3058A4:
    ctx->pc = 0x7F3058A4u;
    // 7F3058A4: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3058A8:
    ctx->pc = 0x7F3058A8u;
    // 7F3058A8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3058AC:
    ctx->pc = 0x7F3058ACu;
    // 7F3058AC: stw     r3, 280(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3058B0:
    ctx->pc = 0x7F3058B0u;
    // 7F3058B0: stw     r0, 284(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3058B4:
    ctx->pc = 0x7F3058B4u;
    // 7F3058B4: stfs     f0, 284(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3058B4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3058B8:
    ctx->pc = 0x7F3058B8u;
    ctx->downcount -= 2;
    // 7F3058B8: cmplwi  r30, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3058BC:
    ctx->pc = 0x7F3058BCu;
    // 7F3058BC: bc    12, 2, 0x7F30599C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30599C;
        }
    }

label_7F3058C0:
    ctx->pc = 0x7F3058C0u;
    ctx->downcount -= 5;
    // 7F3058C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3058C4:
    ctx->pc = 0x7F3058C4u;
    // 7F3058C4: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3058C8:
    ctx->pc = 0x7F3058C8u;
    // 7F3058C8: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3058CC:
    ctx->pc = 0x7F3058CCu;
    // 7F3058CC: cmpwi   r0, 0
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

label_7F3058D0:
    ctx->pc = 0x7F3058D0u;
    // 7F3058D0: bc    12, 2, 0x7F3058F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3058F0;
        }
    }

label_7F3058D4:
    ctx->pc = 0x7F3058D4u;
    ctx->downcount -= 7;
    // 7F3058D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3058D8:
    ctx->pc = 0x7F3058D8u;
    // 7F3058D8: lfs     f0, 32380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3058D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3058DC:
    ctx->pc = 0x7F3058DCu;
    // 7F3058DC: stfs     f0, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3058DCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3058E0:
    ctx->pc = 0x7F3058E0u;
    // 7F3058E0: lwz     r3, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3058E4:
    ctx->pc = 0x7F3058E4u;
    // 7F3058E4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3058E8:
    ctx->pc = 0x7F3058E8u;
    // 7F3058E8: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3058EC:
    ctx->pc = 0x7F3058ECu;
    // 7F3058EC: b       0x7F3058FC
    {
            goto label_7F3058FC;
    }

label_7F3058F0:
    ctx->pc = 0x7F3058F0u;
    ctx->downcount -= 3;
    // 7F3058F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3058F4:
    ctx->pc = 0x7F3058F4u;
    // 7F3058F4: lfs     f0, 32336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3058F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3058F8:
    ctx->pc = 0x7F3058F8u;
    // 7F3058F8: stfs     f0, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3058F8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3058FC:
    ctx->pc = 0x7F3058FCu;
    ctx->downcount -= 3;
    // 7F3058FC: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305900:
    ctx->pc = 0x7F305900u;
    // 7F305900: cmpwi   r0, 0
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

label_7F305904:
    ctx->pc = 0x7F305904u;
    // 7F305904: bc    12, 2, 0x7F305924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305924;
        }
    }

label_7F305908:
    ctx->pc = 0x7F305908u;
    ctx->downcount -= 7;
    // 7F305908: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30590C:
    ctx->pc = 0x7F30590Cu;
    // 7F30590C: lfs     f0, 32380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30590Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305910:
    ctx->pc = 0x7F305910u;
    // 7F305910: stfs     f0, 292(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305910u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305914:
    ctx->pc = 0x7F305914u;
    // 7F305914: lwz     r3, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305918:
    ctx->pc = 0x7F305918u;
    // 7F305918: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30591C:
    ctx->pc = 0x7F30591Cu;
    // 7F30591C: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305920:
    ctx->pc = 0x7F305920u;
    // 7F305920: b       0x7F305930
    {
            goto label_7F305930;
    }

label_7F305924:
    ctx->pc = 0x7F305924u;
    ctx->downcount -= 3;
    // 7F305924: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305928:
    ctx->pc = 0x7F305928u;
    // 7F305928: lfs     f0, 32336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F305928u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30592C:
    ctx->pc = 0x7F30592Cu;
    // 7F30592C: stfs     f0, 292(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F30592Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305930:
    ctx->pc = 0x7F305930u;
    ctx->downcount -= 3;
    // 7F305930: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305934:
    ctx->pc = 0x7F305934u;
    // 7F305934: cmpwi   r0, 0
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

label_7F305938:
    ctx->pc = 0x7F305938u;
    // 7F305938: bc    12, 2, 0x7F305958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305958;
        }
    }

label_7F30593C:
    ctx->pc = 0x7F30593Cu;
    ctx->downcount -= 7;
    // 7F30593C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305940:
    ctx->pc = 0x7F305940u;
    // 7F305940: lfs     f0, 32380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F305940u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305944:
    ctx->pc = 0x7F305944u;
    // 7F305944: stfs     f0, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305944u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305948:
    ctx->pc = 0x7F305948u;
    // 7F305948: lwz     r3, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30594C:
    ctx->pc = 0x7F30594Cu;
    // 7F30594C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F305950:
    ctx->pc = 0x7F305950u;
    // 7F305950: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305954:
    ctx->pc = 0x7F305954u;
    // 7F305954: b       0x7F305964
    {
            goto label_7F305964;
    }

label_7F305958:
    ctx->pc = 0x7F305958u;
    ctx->downcount -= 3;
    // 7F305958: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F30595C:
    ctx->pc = 0x7F30595Cu;
    // 7F30595C: lfs     f0, 32336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30595Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305960:
    ctx->pc = 0x7F305960u;
    // 7F305960: stfs     f0, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305960u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305964:
    ctx->pc = 0x7F305964u;
    ctx->downcount -= 3;
    // 7F305964: lwz     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305968:
    ctx->pc = 0x7F305968u;
    // 7F305968: cmpwi   r0, 2
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

label_7F30596C:
    ctx->pc = 0x7F30596Cu;
    // 7F30596C: bc    4, 2, 0x7F30599C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30599C;
        }
    }

label_7F305970:
    ctx->pc = 0x7F305970u;
    ctx->downcount -= 11;
    // 7F305970: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F305974:
    ctx->pc = 0x7F305974u;
    // 7F305974: lfs     f0, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305974u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305978:
    ctx->pc = 0x7F305978u;
    // 7F305978: lfs     f1, 32380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F305978u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30597C:
    ctx->pc = 0x7F30597Cu;
    // 7F30597C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30597Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F305980:
    ctx->pc = 0x7F305980u;
    // 7F305980: stfs     f0, 288(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305980u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305984:
    ctx->pc = 0x7F305984u;
    // 7F305984: lfs     f0, 292(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305984u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305988:
    ctx->pc = 0x7F305988u;
    // 7F305988: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F305988u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F30598C:
    ctx->pc = 0x7F30598Cu;
    // 7F30598C: stfs     f0, 292(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F30598Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F305990:
    ctx->pc = 0x7F305990u;
    // 7F305990: lfs     f0, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305990u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F305994:
    ctx->pc = 0x7F305994u;
    // 7F305994: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F305994u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F305998:
    ctx->pc = 0x7F305998u;
    // 7F305998: stfs     f0, 296(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305998u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30599C:
    ctx->pc = 0x7F30599Cu;
    ctx->downcount -= 37;
    // 7F30599C: xoris   r3, r31, 0x8000
    ctx->gpr[3] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F3059A0:
    ctx->pc = 0x7F3059A0u;
    // 7F3059A0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3059A4:
    ctx->pc = 0x7F3059A4u;
    // 7F3059A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3059A8:
    ctx->pc = 0x7F3059A8u;
    // 7F3059A8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3059AC:
    ctx->pc = 0x7F3059ACu;
    // 7F3059AC: addi    r3, r4, 32352
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32352);

label_7F3059B0:
    ctx->pc = 0x7F3059B0u;
    // 7F3059B0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3059B4:
    ctx->pc = 0x7F3059B4u;
    // 7F3059B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3059B8:
    ctx->pc = 0x7F3059B8u;
    // 7F3059B8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3059B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3059BC:
    ctx->pc = 0x7F3059BCu;
    // 7F3059BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F3059C0:
    ctx->pc = 0x7F3059C0u;
    // 7F3059C0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3059C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3059C4:
    ctx->pc = 0x7F3059C4u;
    // 7F3059C4: lfs     f2, 32340(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3059C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3059C8:
    ctx->pc = 0x7F3059C8u;
    // 7F3059C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F3059CC:
    ctx->pc = 0x7F3059CCu;
    // 7F3059CC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3059CCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F3059D0:
    ctx->pc = 0x7F3059D0u;
    // 7F3059D0: lfs     f0, 32344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3059D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3059D4:
    ctx->pc = 0x7F3059D4u;
    // 7F3059D4: lfs     f3, 32384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3059D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3059D8:
    ctx->pc = 0x7F3059D8u;
    // 7F3059D8: stfs     f31, 340(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3059D8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F3059DC:
    ctx->pc = 0x7F3059DCu;
    // 7F3059DC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3059DCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F3059E0:
    ctx->pc = 0x7F3059E0u;
    // 7F3059E0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3059E0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F3059E4:
    ctx->pc = 0x7F3059E4u;
    // 7F3059E4: fmuls   f31, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3059E4u)) return;
    ppc_fmuls(ctx, 31, 3, 0);

label_7F3059E8:
    ctx->pc = 0x7F3059E8u;
    // 7F3059E8: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3059E8u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F3059EC:
    ctx->pc = 0x7F3059ECu;
    // 7F3059EC: bl      0x7F008330
    {
            ctx->lr = 0x7F3059F0u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F3059F0:
    ctx->pc = 0x7F3059F0u;
    ctx->downcount -= 3;
    // 7F3059F0: stfs     f1, 332(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3059F0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3059F4:
    ctx->pc = 0x7F3059F4u;
    // 7F3059F4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3059F4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F3059F8:
    ctx->pc = 0x7F3059F8u;
    // 7F3059F8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F3059FCu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F3059FC:
    ctx->pc = 0x7F3059FCu;
    ctx->downcount -= 3;
    // 7F3059FC: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F305A00:
    ctx->pc = 0x7F305A00u;
    // 7F305A00: stfs     f1, 336(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F305A00u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F305A04:
    ctx->pc = 0x7F305A04u;
    // 7F305A04: bc    12, 2, 0x7F305A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305A24;
        }
    }

label_7F305A08:
    ctx->pc = 0x7F305A08u;
    ctx->downcount -= 3;
    // 7F305A08: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F305A0C:
    ctx->pc = 0x7F305A0Cu;
    // 7F305A0C: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F305A10:
    ctx->pc = 0x7F305A10u;
    // 7F305A10: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F305A14u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F305A14:
    ctx->pc = 0x7F305A14u;
    ctx->downcount -= 2;
    // 7F305A14: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F305A18:
    ctx->pc = 0x7F305A18u;
    // 7F305A18: bl      0x7F3B3370
    {
            ctx->lr = 0x7F305A1Cu;
            ctx->pc = 0x7F3B3370u;
            return;
    }

label_7F305A1C:
    ctx->pc = 0x7F305A1Cu;
    ctx->downcount -= 2;
    // 7F305A1C: addi    r3, r26, 192
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(192);

label_7F305A20:
    ctx->pc = 0x7F305A20u;
    // 7F305A20: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F305A24u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F305A24:
    ctx->pc = 0x7F305A24u;
    ctx->downcount -= 18;
    // 7F305A24: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F305A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F305A24u);
        if (ctx->exception) return;
    }

label_7F305A28:
    ctx->pc = 0x7F305A28u;
    // 7F305A28: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F305A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F305A2C:
    ctx->pc = 0x7F305A2Cu;
    // 7F305A2C: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F305A30:
    ctx->pc = 0x7F305A30u;
    // 7F305A30: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305A34:
    ctx->pc = 0x7F305A34u;
    // 7F305A34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305A38:
    ctx->pc = 0x7F305A38u;
    // 7F305A38: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F305A3C:
    ctx->pc = 0x7F305A3Cu;
    // 7F305A3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305A40:
    ctx->pc = 0x7F305A40u;
    ctx->downcount -= 19;
    // 7F305A40: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305A44:
    ctx->pc = 0x7F305A44u;
    // 7F305A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305A48:
    ctx->pc = 0x7F305A48u;
    // 7F305A48: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305A4C:
    ctx->pc = 0x7F305A4Cu;
    // 7F305A4C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F305A50:
    ctx->pc = 0x7F305A50u;
    // 7F305A50: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305A54:
    ctx->pc = 0x7F305A54u;
    // 7F305A54: lwz     r0, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305A58:
    ctx->pc = 0x7F305A58u;
    // 7F305A58: lwz     r28, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F305A5C:
    ctx->pc = 0x7F305A5Cu;
    // 7F305A5C: cmplwi  r0, 0x0000
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

label_7F305A60:
    ctx->pc = 0x7F305A60u;
    // 7F305A60: bc    12, 2, 0x7F305CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305CCC;
        }
    }

label_7F305A64:
    ctx->pc = 0x7F305A64u;
    ctx->downcount -= 5;
    // 7F305A64: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F305A68:
    ctx->pc = 0x7F305A68u;
    // 7F305A68: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F305A6C:
    ctx->pc = 0x7F305A6Cu;
    // 7F305A6C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F305A70:
    ctx->pc = 0x7F305A70u;
    // 7F305A70: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F305A74:
    ctx->pc = 0x7F305A74u;
    // 7F305A74: b       0x7F305CC0
    {
            goto label_7F305CC0;
    }

label_7F305A78:
    ctx->downcount -= 4;
    // 7F305A78: addi    r0, r25, 212
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(212);

label_7F305A7C:
    ctx->pc = 0x7F305A7Cu;
    // 7F305A7C: lwzx    r4, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305A80:
    // 7F305A80: cmplwi  r4, 0x0000
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

label_7F305A84:
    // 7F305A84: bc    4, 2, 0x7F305BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F305BA4;
        }
    }

label_7F305A88:
    ctx->pc = 0x7F305A88u;
    ctx->downcount -= 24;
    // 7F305A88: lwz     r0, 376(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305A8C:
    // 7F305A8C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F305A90:
    ctx->pc = 0x7F305A90u;
    // 7F305A90: lwz     r5, 380(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(380);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305A94:
    // 7F305A94: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305A98:
    // 7F305A98: add   r8, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F305A9C:
    // 7F305A9C: addi    r9, r4, -1052
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F305AA0:
    ctx->pc = 0x7F305AA0u;
    // 7F305AA0: lwzx    r4, r5, r25
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[25];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305AA4:
    // 7F305AA4: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F305AA8:
    ctx->pc = 0x7F305AA8u;
    // 7F305AA8: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F305AAC:
    // 7F305AAC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305AB0:
    ctx->pc = 0x7F305AB0u;
    // 7F305AB0: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305AB4:
    // 7F305AB4: rlwinm r4, r4, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_7F305AB8:
    // 7F305AB8: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305ABC:
    ctx->pc = 0x7F305ABCu;
    // 7F305ABC: stw     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305AC0:
    ctx->pc = 0x7F305AC0u;
    // 7F305AC0: stw     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305AC4:
    ctx->pc = 0x7F305AC4u;
    // 7F305AC4: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305AC8:
    ctx->pc = 0x7F305AC8u;
    // 7F305AC8: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305ACC:
    ctx->pc = 0x7F305ACCu;
    // 7F305ACC: stw     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305AD0:
    ctx->pc = 0x7F305AD0u;
    // 7F305AD0: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305AD4:
    ctx->pc = 0x7F305AD4u;
    // 7F305AD4: lwz     r3, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305AD8:
    // 7F305AD8: add   r4, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F305ADC:
    ctx->pc = 0x7F305ADCu;
    // 7F305ADC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305AE0:
    // 7F305AE0: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F305AE4:
    loop_7F305AE4(ctx);
    if (ctx->pc == 0x7F305AF8u) goto label_7F305AF8;
    return;
label_7F305AE8:
    ctx->pc = 0x7F305AE8u;
    // 7F305AE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305AEC:
    ctx->pc = 0x7F305AECu;
    // 7F305AEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305AF0:
    ctx->pc = 0x7F305AF0u;
    // 7F305AF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305AF4:
    // 7F305AF4: bc    16, 0, 0x7F305AE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305AE4u;
                return;
            }
            goto label_7F305AE4;
        }
    }

label_7F305AF8:
    ctx->downcount -= 6;
    // 7F305AF8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305AFC:
    // 7F305AFC: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F305B00:
    // 7F305B00: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F305B04:
    // 7F305B04: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F305B08:
    // 7F305B08: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F305B0C:
    // 7F305B0C: bl      0x7F114508
    {
            ctx->lr = 0x7F305B10u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F305B10:
    ctx->pc = 0x7F305B10u;
    ctx->downcount -= 9;
    // 7F305B10: lwz     r4, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305B14:
    // 7F305B14: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305B18:
    // 7F305B18: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F305B1C:
    // 7F305B1C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305B20:
    // 7F305B20: add   r5, r4, r23
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F305B24:
    // 7F305B24: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305B28:
    ctx->pc = 0x7F305B28u;
    // 7F305B28: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305B2C:
    // 7F305B2C: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F305B30:
    loop_7F305B30(ctx);
    if (ctx->pc == 0x7F305B44u) goto label_7F305B44;
    return;
label_7F305B34:
    ctx->pc = 0x7F305B34u;
    // 7F305B34: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305B38:
    ctx->pc = 0x7F305B38u;
    // 7F305B38: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305B3C:
    ctx->pc = 0x7F305B3Cu;
    // 7F305B3C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305B40:
    // 7F305B40: bc    16, 0, 0x7F305B30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305B30u;
                return;
            }
            goto label_7F305B30;
        }
    }

label_7F305B44:
    ctx->downcount -= 24;
    // 7F305B44: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305B48:
    ctx->pc = 0x7F305B48u;
    // 7F305B48: lwz     r0, 356(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305B4C:
    // 7F305B4C: addi    r6, r3, -1052
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F305B50:
    // 7F305B50: addi    r4, r23, 48
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(48);

label_7F305B54:
    ctx->pc = 0x7F305B54u;
    // 7F305B54: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305B58:
    // 7F305B58: add   r5, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F305B5C:
    ctx->pc = 0x7F305B5Cu;
    // 7F305B5C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305B60:
    ctx->pc = 0x7F305B60u;
    // 7F305B60: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305B64:
    ctx->pc = 0x7F305B64u;
    // 7F305B64: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305B68:
    ctx->pc = 0x7F305B68u;
    // 7F305B68: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305B6C:
    ctx->pc = 0x7F305B6Cu;
    // 7F305B6C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305B70:
    ctx->pc = 0x7F305B70u;
    // 7F305B70: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305B74:
    ctx->pc = 0x7F305B74u;
    // 7F305B74: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305B78:
    ctx->pc = 0x7F305B78u;
    // 7F305B78: lwz     r5, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305B7C:
    ctx->pc = 0x7F305B7Cu;
    // 7F305B7C: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305B80:
    ctx->pc = 0x7F305B80u;
    // 7F305B80: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305B84:
    // 7F305B84: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F305B88:
    ctx->pc = 0x7F305B88u;
    // 7F305B88: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305B8C:
    ctx->pc = 0x7F305B8Cu;
    // 7F305B8C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305B90:
    ctx->pc = 0x7F305B90u;
    // 7F305B90: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305B94:
    ctx->pc = 0x7F305B94u;
    // 7F305B94: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305B98:
    ctx->pc = 0x7F305B98u;
    // 7F305B98: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305B9C:
    ctx->pc = 0x7F305B9Cu;
    // 7F305B9C: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305BA0:
    // 7F305BA0: b       0x7F305C80
    {
            goto label_7F305C80;
    }

label_7F305BA4:
    ctx->downcount -= 7;
    // 7F305BA4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305BA8:
    // 7F305BA8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305BAC:
    // 7F305BAC: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F305BB0:
    // 7F305BB0: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F305BB4:
    // 7F305BB4: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305BB8:
    ctx->pc = 0x7F305BB8u;
    // 7F305BB8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305BBC:
    loop_7F305BBC(ctx);
    if (ctx->pc == 0x7F305BD0u) goto label_7F305BD0;
    return;
label_7F305BC0:
    ctx->pc = 0x7F305BC0u;
    // 7F305BC0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305BC4:
    ctx->pc = 0x7F305BC4u;
    // 7F305BC4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305BC8:
    ctx->pc = 0x7F305BC8u;
    // 7F305BC8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305BCC:
    // 7F305BCC: bc    16, 0, 0x7F305BBC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305BBCu;
                return;
            }
            goto label_7F305BBC;
        }
    }

label_7F305BD0:
    ctx->downcount -= 7;
    // 7F305BD0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305BD4:
    // 7F305BD4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305BD8:
    // 7F305BD8: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F305BDC:
    // 7F305BDC: addi    r4, r26, 144
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(144);

label_7F305BE0:
    // 7F305BE0: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305BE4:
    ctx->pc = 0x7F305BE4u;
    // 7F305BE4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305BE8:
    loop_7F305BE8(ctx);
    if (ctx->pc == 0x7F305BFCu) goto label_7F305BFC;
    return;
label_7F305BEC:
    ctx->pc = 0x7F305BECu;
    // 7F305BEC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305BF0:
    ctx->pc = 0x7F305BF0u;
    // 7F305BF0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305BF4:
    ctx->pc = 0x7F305BF4u;
    // 7F305BF4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305BF8:
    // 7F305BF8: bc    16, 0, 0x7F305BE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305BE8u;
                return;
            }
            goto label_7F305BE8;
        }
    }

label_7F305BFC:
    ctx->downcount -= 7;
    // 7F305BFC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305C00:
    // 7F305C00: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F305C04:
    // 7F305C04: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F305C08:
    // 7F305C08: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F305C0C:
    // 7F305C0C: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F305C10:
    // 7F305C10: addi    r5, r5, -1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F305C14:
    // 7F305C14: bl      0x80025A80
    {
            ctx->lr = 0x7F305C18u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F305C18:
    ctx->pc = 0x7F305C18u;
    ctx->downcount -= 9;
    // 7F305C18: lwz     r4, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305C1C:
    // 7F305C1C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305C20:
    // 7F305C20: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F305C24:
    // 7F305C24: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305C28:
    // 7F305C28: add   r5, r4, r23
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F305C2C:
    // 7F305C2C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305C30:
    ctx->pc = 0x7F305C30u;
    // 7F305C30: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305C34:
    // 7F305C34: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F305C38:
    loop_7F305C38(ctx);
    if (ctx->pc == 0x7F305C4Cu) goto label_7F305C4C;
    return;
label_7F305C3C:
    ctx->pc = 0x7F305C3Cu;
    // 7F305C3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305C40:
    ctx->pc = 0x7F305C40u;
    // 7F305C40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305C44:
    ctx->pc = 0x7F305C44u;
    // 7F305C44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305C48:
    // 7F305C48: bc    16, 0, 0x7F305C38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305C38u;
                return;
            }
            goto label_7F305C38;
        }
    }

label_7F305C4C:
    ctx->pc = 0x7F305C4Cu;
    ctx->downcount -= 13;
    // 7F305C4C: lwz     r4, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305C50:
    // 7F305C50: addi    r3, r23, 48
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(48);

label_7F305C54:
    ctx->pc = 0x7F305C54u;
    // 7F305C54: lwz     r0, 356(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305C58:
    // 7F305C58: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F305C5C:
    ctx->pc = 0x7F305C5Cu;
    // 7F305C5C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305C60:
    // 7F305C60: add   r5, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F305C64:
    ctx->pc = 0x7F305C64u;
    // 7F305C64: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305C68:
    ctx->pc = 0x7F305C68u;
    // 7F305C68: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305C6C:
    ctx->pc = 0x7F305C6Cu;
    // 7F305C6C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305C70:
    ctx->pc = 0x7F305C70u;
    // 7F305C70: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305C74:
    ctx->pc = 0x7F305C74u;
    // 7F305C74: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305C78:
    ctx->pc = 0x7F305C78u;
    // 7F305C78: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305C7C:
    ctx->pc = 0x7F305C7Cu;
    // 7F305C7C: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305C80:
    ctx->pc = 0x7F305C80u;
    ctx->downcount -= 16;
    // 7F305C80: lwz     r4, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305C84:
    // 7F305C84: addi    r0, r24, 12
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(12);

label_7F305C88:
    // 7F305C88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F305C8C:
    // 7F305C8C: addi    r3, r24, 8
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(8);

label_7F305C90:
    ctx->pc = 0x7F305C90u;
    // 7F305C90: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305C94:
    // 7F305C94: addi    r0, r24, 4
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(4);

label_7F305C98:
    // 7F305C98: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F305C9C:
    // 7F305C9C: addi    r23, r23, 64
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(64);

label_7F305CA0:
    ctx->pc = 0x7F305CA0u;
    // 7F305CA0: lwz     r4, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305CA4:
    // 7F305CA4: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F305CA8:
    ctx->pc = 0x7F305CA8u;
    // 7F305CA8: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305CAC:
    ctx->pc = 0x7F305CACu;
    // 7F305CAC: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305CB0:
    ctx->pc = 0x7F305CB0u;
    // 7F305CB0: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305CB4:
    ctx->pc = 0x7F305CB4u;
    // 7F305CB4: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305CB8:
    ctx->pc = 0x7F305CB8u;
    // 7F305CB8: stwx    r5, r3, r24
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[24];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305CBC:
    // 7F305CBC: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F305CC0:
    ctx->downcount -= 2;
    // 7F305CC0: cmpw    r27, r28
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

label_7F305CC4:
    // 7F305CC4: bc    12, 0, 0x7F305A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305A78u;
                return;
            }
            goto label_7F305A78;
        }
    }

label_7F305CC8:
    ctx->pc = 0x7F305CC8u;
    ctx->downcount -= 1;
    // 7F305CC8: b       0x7F305D40
    {
            goto label_7F305D40;
    }

label_7F305CCC:
    ctx->pc = 0x7F305CCCu;
    ctx->downcount -= 6;
    // 7F305CCC: lwz     r3, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305CD0:
    ctx->pc = 0x7F305CD0u;
    // 7F305CD0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305CD4:
    ctx->pc = 0x7F305CD4u;
    // 7F305CD4: addi    r4, r26, 144
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(144);

label_7F305CD8:
    ctx->pc = 0x7F305CD8u;
    // 7F305CD8: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F305CDC:
    ctx->pc = 0x7F305CDCu;
    // 7F305CDC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305CE0:
    loop_7F305CE0(ctx);
    if (ctx->pc == 0x7F305CF4u) goto label_7F305CF4;
    return;
label_7F305CE4:
    ctx->pc = 0x7F305CE4u;
    // 7F305CE4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305CE8:
    ctx->pc = 0x7F305CE8u;
    // 7F305CE8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305CEC:
    ctx->pc = 0x7F305CECu;
    // 7F305CEC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305CF0:
    // 7F305CF0: bc    16, 0, 0x7F305CE0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305CE0u;
                return;
            }
            goto label_7F305CE0;
        }
    }

label_7F305CF4:
    ctx->pc = 0x7F305CF4u;
    ctx->downcount -= 19;
    // 7F305CF4: lwz     r6, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305CF8:
    ctx->pc = 0x7F305CF8u;
    // 7F305CF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F305CFC:
    ctx->pc = 0x7F305CFCu;
    // 7F305CFC: lwz     r5, 356(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305D00:
    ctx->pc = 0x7F305D00u;
    // 7F305D00: lwz     r4, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305D04:
    ctx->pc = 0x7F305D04u;
    // 7F305D04: lwz     r3, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D08:
    ctx->pc = 0x7F305D08u;
    // 7F305D08: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305D0C:
    ctx->pc = 0x7F305D0Cu;
    // 7F305D0C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305D10:
    ctx->pc = 0x7F305D10u;
    // 7F305D10: lwz     r4, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305D14:
    ctx->pc = 0x7F305D14u;
    // 7F305D14: lwz     r3, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D18:
    ctx->pc = 0x7F305D18u;
    // 7F305D18: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305D1C:
    ctx->pc = 0x7F305D1Cu;
    // 7F305D1C: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305D20:
    ctx->pc = 0x7F305D20u;
    // 7F305D20: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D24:
    ctx->pc = 0x7F305D24u;
    // 7F305D24: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305D28:
    ctx->pc = 0x7F305D28u;
    // 7F305D28: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D2C:
    ctx->pc = 0x7F305D2Cu;
    // 7F305D2C: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305D30:
    ctx->pc = 0x7F305D30u;
    // 7F305D30: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D34:
    ctx->pc = 0x7F305D34u;
    // 7F305D34: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305D38:
    ctx->pc = 0x7F305D38u;
    // 7F305D38: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D3C:
    ctx->pc = 0x7F305D3Cu;
    // 7F305D3C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305D40:
    ctx->pc = 0x7F305D40u;
    ctx->downcount -= 10;
    // 7F305D40: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F305D44:
    ctx->pc = 0x7F305D44u;
    // 7F305D44: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F305D48:
    ctx->pc = 0x7F305D48u;
    // 7F305D48: addi    r29, r4, -1052
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F305D4C:
    ctx->pc = 0x7F305D4Cu;
    // 7F305D4C: lwz     r27, 352(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(352);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F305D50:
    ctx->pc = 0x7F305D50u;
    // 7F305D50: addi    r30, r3, -1148
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F305D54:
    ctx->pc = 0x7F305D54u;
    // 7F305D54: rlwinm r23, r28, 2, 0, 29
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_7F305D58:
    ctx->pc = 0x7F305D58u;
    // 7F305D58: or   r31, r29, r29
    {
        ctx->gpr[31] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F305D5C:
    ctx->pc = 0x7F305D5Cu;
    // 7F305D5C: rlwinm r24, r28, 4, 0, 27
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[28], 4u) & 0xFFFFFFF0u;
    }

label_7F305D60:
    ctx->pc = 0x7F305D60u;
    // 7F305D60: rlwinm r25, r28, 6, 0, 25
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[28], 6u) & 0xFFFFFFC0u;
    }

label_7F305D64:
    ctx->pc = 0x7F305D64u;
    // 7F305D64: b       0x7F305E98
    {
            goto label_7F305E98;
    }

label_7F305D68:
    ctx->pc = 0x7F305D68u;
    ctx->downcount -= 20;
    // 7F305D68: lwz     r3, 376(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D6C:
    // 7F305D6C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305D70:
    ctx->pc = 0x7F305D70u;
    // 7F305D70: lwz     r4, 380(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305D74:
    // 7F305D74: addi    r5, r30, -4
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F305D78:
    // 7F305D78: add   r7, r3, r24
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F305D7C:
    ctx->pc = 0x7F305D7Cu;
    // 7F305D7C: lwzx    r3, r4, r23
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[23];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305D80:
    ctx->pc = 0x7F305D80u;
    // 7F305D80: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305D84:
    ctx->pc = 0x7F305D84u;
    // 7F305D84: lwz     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305D88:
    // 7F305D88: rlwinm r3, r3, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_7F305D8C:
    ctx->pc = 0x7F305D8Cu;
    // 7F305D8C: stw     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305D90:
    ctx->pc = 0x7F305D90u;
    // 7F305D90: stw     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305D94:
    ctx->pc = 0x7F305D94u;
    // 7F305D94: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F305D98:
    ctx->pc = 0x7F305D98u;
    // 7F305D98: lwz     r4, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305D9C:
    ctx->pc = 0x7F305D9Cu;
    // 7F305D9C: stw     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305DA0:
    ctx->pc = 0x7F305DA0u;
    // 7F305DA0: stw     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F305DA4:
    ctx->pc = 0x7F305DA4u;
    // 7F305DA4: lwz     r4, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305DA8:
    // 7F305DA8: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F305DAC:
    ctx->pc = 0x7F305DACu;
    // 7F305DAC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305DB0:
    // 7F305DB0: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F305DB4:
    loop_7F305DB4(ctx);
    if (ctx->pc == 0x7F305DC8u) goto label_7F305DC8;
    return;
label_7F305DB8:
    ctx->pc = 0x7F305DB8u;
    // 7F305DB8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305DBC:
    ctx->pc = 0x7F305DBCu;
    // 7F305DBC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305DC0:
    ctx->pc = 0x7F305DC0u;
    // 7F305DC0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305DC4:
    // 7F305DC4: bc    16, 0, 0x7F305DB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305DB4u;
                return;
            }
            goto label_7F305DB4;
        }
    }

label_7F305DC8:
    ctx->downcount -= 4;
    // 7F305DC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F305DCC:
    // 7F305DCC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F305DD0:
    // 7F305DD0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305DD4:
    // 7F305DD4: bl      0x7F114508
    {
            ctx->lr = 0x7F305DD8u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F305DD8:
    ctx->pc = 0x7F305DD8u;
    ctx->downcount -= 7;
    // 7F305DD8: lwz     r3, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305DDC:
    // 7F305DDC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F305DE0:
    // 7F305DE0: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F305DE4:
    // 7F305DE4: add   r5, r3, r25
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F305DE8:
    ctx->pc = 0x7F305DE8u;
    // 7F305DE8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F305DEC:
    // 7F305DEC: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F305DF0:
    loop_7F305DF0(ctx);
    if (ctx->pc == 0x7F305E04u) goto label_7F305E04;
    return;
label_7F305DF4:
    ctx->pc = 0x7F305DF4u;
    // 7F305DF4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F305DF8:
    ctx->pc = 0x7F305DF8u;
    // 7F305DF8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305DFC:
    ctx->pc = 0x7F305DFCu;
    // 7F305DFC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F305E00:
    // 7F305E00: bc    16, 0, 0x7F305DF0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305DF0u;
                return;
            }
            goto label_7F305DF0;
        }
    }

label_7F305E04:
    ctx->pc = 0x7F305E04u;
    ctx->downcount -= 37;
    // 7F305E04: lwz     r3, 356(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305E08:
    // 7F305E08: addi    r8, r25, 48
    ctx->gpr[8] = ctx->gpr[25] + (u32)(s32)(48);

label_7F305E0C:
    ctx->pc = 0x7F305E0Cu;
    // 7F305E0C: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305E10:
    // 7F305E10: addi    r4, r24, 12
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(12);

label_7F305E14:
    // 7F305E14: add   r9, r3, r24
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F305E18:
    ctx->pc = 0x7F305E18u;
    // 7F305E18: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305E1C:
    // 7F305E1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F305E20:
    // 7F305E20: addi    r3, r24, 8
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(8);

label_7F305E24:
    ctx->pc = 0x7F305E24u;
    // 7F305E24: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305E28:
    // 7F305E28: addi    r0, r24, 4
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(4);

label_7F305E2C:
    // 7F305E2C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F305E30:
    // 7F305E30: addi    r25, r25, 64
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(64);

label_7F305E34:
    ctx->pc = 0x7F305E34u;
    // 7F305E34: stw     r5, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305E38:
    // 7F305E38: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F305E3C:
    ctx->pc = 0x7F305E3Cu;
    // 7F305E3C: lwz     r7, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F305E40:
    ctx->pc = 0x7F305E40u;
    // 7F305E40: lwz     r5, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305E44:
    ctx->pc = 0x7F305E44u;
    // 7F305E44: stw     r7, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305E48:
    ctx->pc = 0x7F305E48u;
    // 7F305E48: stw     r5, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305E4C:
    ctx->pc = 0x7F305E4Cu;
    // 7F305E4C: lwz     r9, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F305E50:
    ctx->pc = 0x7F305E50u;
    // 7F305E50: lwz     r7, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F305E54:
    ctx->pc = 0x7F305E54u;
    // 7F305E54: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305E58:
    // 7F305E58: add   r8, r9, r8
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F305E5C:
    ctx->pc = 0x7F305E5Cu;
    // 7F305E5C: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305E60:
    ctx->pc = 0x7F305E60u;
    // 7F305E60: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305E64:
    ctx->pc = 0x7F305E64u;
    // 7F305E64: lwz     r7, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F305E68:
    ctx->pc = 0x7F305E68u;
    // 7F305E68: lwz     r5, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305E6C:
    ctx->pc = 0x7F305E6Cu;
    // 7F305E6C: stw     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F305E70:
    ctx->pc = 0x7F305E70u;
    // 7F305E70: stw     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F305E74:
    ctx->pc = 0x7F305E74u;
    // 7F305E74: lwz     r5, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F305E78:
    ctx->pc = 0x7F305E78u;
    // 7F305E78: stwx    r6, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305E7C:
    ctx->pc = 0x7F305E7Cu;
    // 7F305E7C: lwz     r4, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305E80:
    ctx->pc = 0x7F305E80u;
    // 7F305E80: stwx    r6, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305E84:
    ctx->pc = 0x7F305E84u;
    // 7F305E84: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305E88:
    ctx->pc = 0x7F305E88u;
    // 7F305E88: stwx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305E8C:
    ctx->pc = 0x7F305E8Cu;
    // 7F305E8C: lwz     r3, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305E90:
    ctx->pc = 0x7F305E90u;
    // 7F305E90: stwx    r6, r3, r24
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[24];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F305E94:
    // 7F305E94: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F305E98:
    ctx->downcount -= 2;
    // 7F305E98: cmpw    r28, r27
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F305E9C:
    // 7F305E9C: bc    12, 0, 0x7F305D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305D68u;
                return;
            }
            goto label_7F305D68;
        }
    }

label_7F305EA0:
    ctx->pc = 0x7F305EA0u;
    ctx->downcount -= 3;
    // 7F305EA0: lwz     r3, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305EA4:
    ctx->pc = 0x7F305EA4u;
    // 7F305EA4: cmplwi  r3, 0x0000
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

label_7F305EA8:
    ctx->pc = 0x7F305EA8u;
    // 7F305EA8: bc    12, 2, 0x7F305ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305ED0;
        }
    }

label_7F305EAC:
    ctx->pc = 0x7F305EACu;
    ctx->downcount -= 9;
    // 7F305EAC: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F305EB0:
    ctx->pc = 0x7F305EB0u;
    // 7F305EB0: lwz     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305EB4:
    ctx->pc = 0x7F305EB4u;
    // 7F305EB4: lwz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305EB8:
    ctx->pc = 0x7F305EB8u;
    // 7F305EB8: stw     r3, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305EBC:
    ctx->pc = 0x7F305EBCu;
    // 7F305EBC: stw     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305EC0:
    ctx->pc = 0x7F305EC0u;
    // 7F305EC0: lwz     r3, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F305EC4:
    ctx->pc = 0x7F305EC4u;
    // 7F305EC4: lwz     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305EC8:
    ctx->pc = 0x7F305EC8u;
    // 7F305EC8: stw     r3, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305ECC:
    ctx->pc = 0x7F305ECCu;
    // 7F305ECC: stw     r0, 144(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305ED0:
    ctx->pc = 0x7F305ED0u;
    ctx->downcount -= 16;
    // 7F305ED0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F305ED4:
    ctx->pc = 0x7F305ED4u;
    // 7F305ED4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305ED8:
    ctx->pc = 0x7F305ED8u;
    // 7F305ED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305EDC:
    ctx->pc = 0x7F305EDCu;
    // 7F305EDC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F305EE0:
    ctx->pc = 0x7F305EE0u;
    // 7F305EE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305EE4:
    ctx->pc = 0x7F305EE4u;
    ctx->downcount -= 9;
    // 7F305EE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305EE8:
    ctx->pc = 0x7F305EE8u;
    // 7F305EE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305EEC:
    ctx->pc = 0x7F305EECu;
    // 7F305EEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305EF0:
    ctx->pc = 0x7F305EF0u;
    // 7F305EF0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F305EF4:
    ctx->pc = 0x7F305EF4u;
    // 7F305EF4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F305EF8:
    ctx->pc = 0x7F305EF8u;
    // 7F305EF8: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305EFC:
    ctx->pc = 0x7F305EFCu;
    // 7F305EFC: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F305F00:
    ctx->pc = 0x7F305F00u;
    // 7F305F00: cmplwi  r0, 0x0000
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

label_7F305F04:
    ctx->pc = 0x7F305F04u;
    // 7F305F04: bc    12, 2, 0x7F305F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305F20;
        }
    }

label_7F305F08:
    ctx->pc = 0x7F305F08u;
    ctx->downcount -= 2;
    // 7F305F08: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F305F0C:
    ctx->pc = 0x7F305F0Cu;
    // 7F305F0C: bl      0x80025FD8
    {
            ctx->lr = 0x7F305F10u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F305F10:
    ctx->pc = 0x7F305F10u;
    ctx->downcount -= 4;
    // 7F305F10: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F305F14:
    ctx->pc = 0x7F305F14u;
    // 7F305F14: li      r3, 1312
    ctx->gpr[3] = (u32)(s32)(1312);

label_7F305F18:
    ctx->pc = 0x7F305F18u;
    // 7F305F18: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F305F1C:
    ctx->pc = 0x7F305F1Cu;
    // 7F305F1C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F305F20u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F305F20:
    ctx->pc = 0x7F305F20u;
    ctx->downcount -= 9;
    // 7F305F20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F305F24:
    ctx->pc = 0x7F305F24u;
    // 7F305F24: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305F28:
    ctx->pc = 0x7F305F28u;
    // 7F305F28: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305F2C:
    ctx->pc = 0x7F305F2Cu;
    // 7F305F2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F305F30:
    ctx->pc = 0x7F305F30u;
    // 7F305F30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305F34:
    ctx->pc = 0x7F305F34u;
    // 7F305F34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305F38:
    ctx->pc = 0x7F305F38u;
    // 7F305F38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F305F3C:
    ctx->pc = 0x7F305F3Cu;
    // 7F305F3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305F40:
    ctx->pc = 0x7F305F40u;
    ctx->downcount -= 19;
    // 7F305F40: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305F44:
    ctx->pc = 0x7F305F44u;
    // 7F305F44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305F48:
    ctx->pc = 0x7F305F48u;
    // 7F305F48: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305F4C:
    ctx->pc = 0x7F305F4Cu;
    // 7F305F4C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F305F50:
    ctx->pc = 0x7F305F50u;
    // 7F305F50: or.   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F305F54:
    ctx->pc = 0x7F305F54u;
    // 7F305F54: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305F58:
    ctx->pc = 0x7F305F58u;
    // 7F305F58: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F305F5C:
    ctx->pc = 0x7F305F5Cu;
    // 7F305F5C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F305F60:
    ctx->pc = 0x7F305F60u;
    // 7F305F60: bc    12, 0, 0x7F305F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F305F6C;
        }
    }

label_7F305F64:
    ctx->pc = 0x7F305F64u;
    ctx->downcount -= 2;
    // 7F305F64: cmpwi   r30, 11
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F305F68:
    ctx->pc = 0x7F305F68u;
    // 7F305F68: bc    4, 1, 0x7F305F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F305F74;
        }
    }

label_7F305F6C:
    ctx->pc = 0x7F305F6Cu;
    ctx->downcount -= 2;
    // 7F305F6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F305F70:
    ctx->pc = 0x7F305F70u;
    // 7F305F70: b       0x7F305FD0
    {
            goto label_7F305FD0;
    }

label_7F305F74:
    ctx->pc = 0x7F305F74u;
    ctx->downcount -= 3;
    // 7F305F74: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F305F78:
    ctx->pc = 0x7F305F78u;
    // 7F305F78: addi    r3, r3, -27364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27364);

label_7F305F7C:
    ctx->pc = 0x7F305F7Cu;
    // 7F305F7C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F305F80u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F305F80:
    ctx->pc = 0x7F305F80u;
    ctx->downcount -= 4;
    // 7F305F80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F305F84:
    ctx->pc = 0x7F305F84u;
    // 7F305F84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305F88:
    ctx->pc = 0x7F305F88u;
    // 7F305F88: addi    r3, r4, -27380
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-27380);

label_7F305F8C:
    ctx->pc = 0x7F305F8Cu;
    // 7F305F8C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F305F90u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F305F90:
    ctx->pc = 0x7F305F90u;
    ctx->downcount -= 11;
    // 7F305F90: mulli   r6, r30, 84
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)84);

label_7F305F94:
    ctx->pc = 0x7F305F94u;
    // 7F305F94: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F305F98:
    ctx->pc = 0x7F305F98u;
    // 7F305F98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305F9C:
    ctx->pc = 0x7F305F9Cu;
    // 7F305F9C: addi    r0, r5, -28304
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-28304);

label_7F305FA0:
    ctx->pc = 0x7F305FA0u;
    // 7F305FA0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F305FA4:
    ctx->pc = 0x7F305FA4u;
    // 7F305FA4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F305FA8:
    ctx->pc = 0x7F305FA8u;
    // 7F305FA8: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F305FAC:
    ctx->pc = 0x7F305FACu;
    // 7F305FAC: add   r6, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F305FB0:
    ctx->pc = 0x7F305FB0u;
    // 7F305FB0: bl      0x7F0FAF74
    {
            ctx->lr = 0x7F305FB4u;
            ctx->pc = 0x7F0FAF74u;
            return;
    }

label_7F305FB4:
    ctx->pc = 0x7F305FB4u;
    ctx->downcount -= 3;
    // 7F305FB4: cmplwi  r3, 0x0000
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

label_7F305FB8:
    ctx->pc = 0x7F305FB8u;
    // 7F305FB8: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F305FBC:
    ctx->pc = 0x7F305FBCu;
    // 7F305FBC: bc    4, 2, 0x7F305FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F305FC8;
        }
    }

label_7F305FC0:
    ctx->pc = 0x7F305FC0u;
    ctx->downcount -= 2;
    // 7F305FC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F305FC4:
    ctx->pc = 0x7F305FC4u;
    // 7F305FC4: b       0x7F305FD0
    {
            goto label_7F305FD0;
    }

label_7F305FC8:
    ctx->pc = 0x7F305FC8u;
    ctx->downcount -= 2;
    // 7F305FC8: stw     r30, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F305FCC:
    ctx->pc = 0x7F305FCCu;
    // 7F305FCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F305FD0:
    ctx->pc = 0x7F305FD0u;
    ctx->downcount -= 16;
    // 7F305FD0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F305FD4:
    ctx->pc = 0x7F305FD4u;
    // 7F305FD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F305FD8:
    ctx->pc = 0x7F305FD8u;
    // 7F305FD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F305FDC:
    ctx->pc = 0x7F305FDCu;
    // 7F305FDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F305FE0:
    ctx->pc = 0x7F305FE0u;
    // 7F305FE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F305FE4:
    ctx->pc = 0x7F305FE4u;
    ctx->downcount -= 8;
    // 7F305FE4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F305FE8:
    ctx->pc = 0x7F305FE8u;
    // 7F305FE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F305FEC:
    ctx->pc = 0x7F305FECu;
    // 7F305FEC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F305FF0:
    ctx->pc = 0x7F305FF0u;
    // 7F305FF0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F305FF4:
    ctx->pc = 0x7F305FF4u;
    // 7F305FF4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F305FF8:
    ctx->pc = 0x7F305FF8u;
    // 7F305FF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F305FFC:
    ctx->pc = 0x7F305FFCu;
    // 7F305FFC: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306000:
    ctx->pc = 0x7F306000u;
    // 7F306000: bl      0x7F3C9624
    {
            ctx->lr = 0x7F306004u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F306004:
    ctx->pc = 0x7F306004u;
    ctx->downcount -= 5;
    // 7F306004: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F306008:
    ctx->pc = 0x7F306008u;
    // 7F306008: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F30600C:
    ctx->pc = 0x7F30600Cu;
    // 7F30600C: cmpwi   r3, 0
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

label_7F306010:
    ctx->pc = 0x7F306010u;
    // 7F306010: bc    4, 1, 0x7F30606C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30606C;
        }
    }

label_7F306014:
    ctx->pc = 0x7F306014u;
    ctx->downcount -= 6;
    // 7F306014: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306018:
    ctx->pc = 0x7F306018u;
    // 7F306018: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30601C:
    ctx->pc = 0x7F30601Cu;
    // 7F30601C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306020:
    ctx->pc = 0x7F306020u;
    // 7F306020: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306024:
    // 7F306024: cmpwi   r0, 1
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

label_7F306028:
    // 7F306028: bc    12, 2, 0x7F306058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F306058;
        }
    }

label_7F30602C:
    ctx->downcount -= 1;
    // 7F30602C: bc    4, 0, 0x7F30605C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30605C;
        }
    }

label_7F306030:
    ctx->downcount -= 2;
    // 7F306030: cmpwi   r0, 0
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

label_7F306034:
    // 7F306034: bc    4, 0, 0x7F30603C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30603C;
        }
    }

label_7F306038:
    ctx->downcount -= 1;
    // 7F306038: b       0x7F30605C
    {
            goto label_7F30605C;
    }

label_7F30603C:
    ctx->pc = 0x7F30603Cu;
    ctx->downcount -= 5;
    // 7F30603C: stw     r3, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306040:
    ctx->pc = 0x7F306040u;
    // 7F306040: lwz     r3, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306044:
    ctx->pc = 0x7F306044u;
    // 7F306044: lwz     r0, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306048:
    // 7F306048: cmpw    r3, r0
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

label_7F30604C:
    // 7F30604C: bc    12, 0, 0x7F30605C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30605C;
        }
    }

label_7F306050:
    ctx->pc = 0x7F306050u;
    ctx->downcount -= 2;
    // 7F306050: stw     r4, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F306054:
    // 7F306054: b       0x7F30605C
    {
            goto label_7F30605C;
    }

label_7F306058:
    ctx->pc = 0x7F306058u;
    ctx->downcount -= 1;
    // 7F306058: stw     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30605C:
    ctx->pc = 0x7F30605Cu;
    ctx->downcount -= 4;
    // 7F30605C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306060:
    // 7F306060: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F306064:
    ctx->pc = 0x7F306064u;
    // 7F306064: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306068:
    // 7F306068: bc    16, 0, 0x7F306014
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306014u;
                return;
            }
            goto label_7F306014;
        }
    }

label_7F30606C:
    ctx->pc = 0x7F30606Cu;
    ctx->downcount -= 7;
    // 7F30606C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306070:
    ctx->pc = 0x7F306070u;
    // 7F306070: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306074:
    ctx->pc = 0x7F306074u;
    // 7F306074: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F306078:
    ctx->pc = 0x7F306078u;
    // 7F306078: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30607C:
    ctx->pc = 0x7F30607Cu;
    // 7F30607C: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306080:
    ctx->pc = 0x7F306080u;
    // 7F306080: cmplwi  r3, 0x0000
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

label_7F306084:
    ctx->pc = 0x7F306084u;
    // 7F306084: bc    12, 2, 0x7F30611C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30611C;
        }
    }

label_7F306088:
    ctx->pc = 0x7F306088u;
    ctx->downcount -= 3;
    // 7F306088: lwz     r0, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30608C:
    ctx->pc = 0x7F30608Cu;
    // 7F30608C: cmpwi   r0, 0
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

label_7F306090:
    ctx->pc = 0x7F306090u;
    // 7F306090: bc    12, 2, 0x7F3060A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3060A8;
        }
    }

label_7F306094:
    ctx->pc = 0x7F306094u;
    ctx->downcount -= 5;
    // 7F306094: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306098:
    ctx->pc = 0x7F306098u;
    // 7F306098: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30609C:
    ctx->pc = 0x7F30609Cu;
    // 7F30609C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F3060A0:
    ctx->pc = 0x7F3060A0u;
    // 7F3060A0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3060A4:
    ctx->pc = 0x7F3060A4u;
    // 7F3060A4: b       0x7F30611C
    {
            goto label_7F30611C;
    }

label_7F3060A8:
    ctx->pc = 0x7F3060A8u;
    ctx->downcount -= 3;
    // 7F3060A8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3060AC:
    ctx->pc = 0x7F3060ACu;
    // 7F3060AC: cmplwi  r4, 0x0000
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

label_7F3060B0:
    ctx->pc = 0x7F3060B0u;
    // 7F3060B0: bc    12, 2, 0x7F3060E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3060E8;
        }
    }

label_7F3060B4:
    ctx->pc = 0x7F3060B4u;
    ctx->downcount -= 3;
    // 7F3060B4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3060B8:
    ctx->pc = 0x7F3060B8u;
    // 7F3060B8: rlwinm. r0, r0, 0, 22, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000300u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3060BC:
    ctx->pc = 0x7F3060BCu;
    // 7F3060BC: bc    12, 2, 0x7F3060D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3060D4;
        }
    }

label_7F3060C0:
    ctx->pc = 0x7F3060C0u;
    ctx->downcount -= 5;
    // 7F3060C0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3060C4:
    ctx->pc = 0x7F3060C4u;
    // 7F3060C4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3060C8:
    ctx->pc = 0x7F3060C8u;
    // 7F3060C8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F3060CC:
    ctx->pc = 0x7F3060CCu;
    // 7F3060CC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3060D0:
    ctx->pc = 0x7F3060D0u;
    // 7F3060D0: b       0x7F30611C
    {
            goto label_7F30611C;
    }

label_7F3060D4:
    ctx->pc = 0x7F3060D4u;
    ctx->downcount -= 5;
    // 7F3060D4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3060D8:
    ctx->pc = 0x7F3060D8u;
    // 7F3060D8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3060DC:
    ctx->pc = 0x7F3060DCu;
    // 7F3060DC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F3060E0:
    ctx->pc = 0x7F3060E0u;
    // 7F3060E0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3060E4:
    ctx->pc = 0x7F3060E4u;
    // 7F3060E4: b       0x7F30611C
    {
            goto label_7F30611C;
    }

label_7F3060E8:
    ctx->pc = 0x7F3060E8u;
    ctx->downcount -= 4;
    // 7F3060E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3060EC:
    ctx->pc = 0x7F3060ECu;
    // 7F3060EC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3060F0:
    ctx->pc = 0x7F3060F0u;
    // 7F3060F0: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3060F4:
    ctx->pc = 0x7F3060F4u;
    // 7F3060F4: bc    12, 2, 0x7F30610C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30610C;
        }
    }

label_7F3060F8:
    ctx->pc = 0x7F3060F8u;
    ctx->downcount -= 5;
    // 7F3060F8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3060FC:
    ctx->pc = 0x7F3060FCu;
    // 7F3060FC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306100:
    ctx->pc = 0x7F306100u;
    // 7F306100: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F306104:
    ctx->pc = 0x7F306104u;
    // 7F306104: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306108:
    ctx->pc = 0x7F306108u;
    // 7F306108: b       0x7F30611C
    {
            goto label_7F30611C;
    }

label_7F30610C:
    ctx->pc = 0x7F30610Cu;
    ctx->downcount -= 4;
    // 7F30610C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306110:
    ctx->pc = 0x7F306110u;
    // 7F306110: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306114:
    ctx->pc = 0x7F306114u;
    // 7F306114: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F306118:
    ctx->pc = 0x7F306118u;
    // 7F306118: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30611C:
    ctx->pc = 0x7F30611Cu;
    ctx->downcount -= 2;
    // 7F30611C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F306120:
    ctx->pc = 0x7F306120u;
    // 7F306120: bl      0x7F305554
    {
            ctx->lr = 0x7F306124u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F305554u;
                return;
            }
            goto label_7F305554;
    }

label_7F306124:
    ctx->pc = 0x7F306124u;
    ctx->downcount -= 6;
    // 7F306124: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306128:
    ctx->pc = 0x7F306128u;
    // 7F306128: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30612C:
    ctx->pc = 0x7F30612Cu;
    // 7F30612C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306130:
    ctx->pc = 0x7F306130u;
    // 7F306130: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F306134:
    ctx->pc = 0x7F306134u;
    // 7F306134: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306138:
    ctx->pc = 0x7F306138u;
    ctx->downcount -= 6;
    // 7F306138: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30613C:
    ctx->pc = 0x7F30613Cu;
    // 7F30613C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306140:
    ctx->pc = 0x7F306140u;
    // 7F306140: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306144:
    ctx->pc = 0x7F306144u;
    // 7F306144: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F306148:
    ctx->pc = 0x7F306148u;
    // 7F306148: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30614C:
    ctx->pc = 0x7F30614Cu;
    // 7F30614C: bl      0x7F303F8C
    {
            ctx->lr = 0x7F306150u;
            ctx->pc = 0x7F303F8Cu;
            return;
    }

label_7F306150:
    ctx->pc = 0x7F306150u;
    ctx->downcount -= 2;
    // 7F306150: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306154:
    ctx->pc = 0x7F306154u;
    // 7F306154: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F306158u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F306158:
    ctx->pc = 0x7F306158u;
    ctx->downcount -= 2;
    // 7F306158: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30615C:
    ctx->pc = 0x7F30615Cu;
    // 7F30615C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F306160u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F306160:
    ctx->pc = 0x7F306160u;
    ctx->downcount -= 2;
    // 7F306160: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F306164:
    ctx->pc = 0x7F306164u;
    // 7F306164: bl      0x7F3B6F44
    {
            ctx->lr = 0x7F306168u;
            ctx->pc = 0x7F3B6F44u;
            return;
    }

label_7F306168:
    ctx->pc = 0x7F306168u;
    ctx->downcount -= 6;
    // 7F306168: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30616C:
    ctx->pc = 0x7F30616Cu;
    // 7F30616C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F306170:
    ctx->pc = 0x7F306170u;
    // 7F306170: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306174:
    ctx->pc = 0x7F306174u;
    // 7F306174: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F306178:
    ctx->pc = 0x7F306178u;
    // 7F306178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30617C:
    ctx->pc = 0x7F30617Cu;
    ctx->downcount -= 8;
    // 7F30617C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F306180:
    ctx->pc = 0x7F306180u;
    // 7F306180: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306184:
    ctx->pc = 0x7F306184u;
    // 7F306184: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306188:
    ctx->pc = 0x7F306188u;
    // 7F306188: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30618C:
    ctx->pc = 0x7F30618Cu;
    // 7F30618C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306190:
    ctx->pc = 0x7F306190u;
    // 7F306190: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306194:
    ctx->pc = 0x7F306194u;
    // 7F306194: addi    r4, r4, 444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(444);

label_7F306198:
    ctx->pc = 0x7F306198u;
    // 7F306198: bl      0x7F303FD4
    {
            ctx->lr = 0x7F30619Cu;
            ctx->pc = 0x7F303FD4u;
            return;
    }

label_7F30619C:
    ctx->pc = 0x7F30619Cu;
    ctx->downcount -= 4;
    // 7F30619C: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F3061A0:
    ctx->pc = 0x7F3061A0u;
    // 7F3061A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3061A4:
    ctx->pc = 0x7F3061A4u;
    // 7F3061A4: addi    r4, r4, 24548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24548);

label_7F3061A8:
    ctx->pc = 0x7F3061A8u;
    // 7F3061A8: bl      0x7F3C8A30
    {
            ctx->lr = 0x7F3061ACu;
            ctx->pc = 0x7F3C8A30u;
            return;
    }

label_7F3061AC:
    ctx->pc = 0x7F3061ACu;
    ctx->downcount -= 6;
    // 7F3061AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3061B0:
    ctx->pc = 0x7F3061B0u;
    // 7F3061B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3061B4:
    ctx->pc = 0x7F3061B4u;
    // 7F3061B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3061B8:
    ctx->pc = 0x7F3061B8u;
    // 7F3061B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3061BC:
    ctx->pc = 0x7F3061BCu;
    // 7F3061BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3061C0:
    ctx->pc = 0x7F3061C0u;
    ctx->downcount -= 25;
    // 7F3061C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3061C4:
    ctx->pc = 0x7F3061C4u;
    // 7F3061C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3061C8:
    ctx->pc = 0x7F3061C8u;
    // 7F3061C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3061CC:
    ctx->pc = 0x7F3061CCu;
    // 7F3061CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3061D0:
    ctx->pc = 0x7F3061D0u;
    // 7F3061D0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3061D4:
    ctx->pc = 0x7F3061D4u;
    // 7F3061D4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3061D8:
    ctx->pc = 0x7F3061D8u;
    // 7F3061D8: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3061DC:
    ctx->pc = 0x7F3061DCu;
    // 7F3061DC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3061E0:
    ctx->pc = 0x7F3061E0u;
    // 7F3061E0: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3061E4:
    ctx->pc = 0x7F3061E4u;
    // 7F3061E4: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F3061E8:
    ctx->pc = 0x7F3061E8u;
    // 7F3061E8: stw     r0, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3061EC:
    ctx->pc = 0x7F3061ECu;
    // 7F3061EC: stw     r30, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3061F0:
    ctx->pc = 0x7F3061F0u;
    // 7F3061F0: lwz     r31, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3061F4:
    ctx->pc = 0x7F3061F4u;
    // 7F3061F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3061F8:
    ctx->pc = 0x7F3061F8u;
    // 7F3061F8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3061FCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3061FC:
    ctx->pc = 0x7F3061FCu;
    ctx->downcount -= 1;
    // 7F3061FC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F306200u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F306200:
    ctx->pc = 0x7F306200u;
    ctx->downcount -= 2;
    // 7F306200: cmplwi  r3, 0x0000
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

label_7F306204:
    ctx->pc = 0x7F306204u;
    // 7F306204: bc    4, 2, 0x7F306210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F306210;
        }
    }

label_7F306208:
    ctx->pc = 0x7F306208u;
    ctx->downcount -= 2;
    // 7F306208: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30620C:
    ctx->pc = 0x7F30620Cu;
    // 7F30620C: b       0x7F306330
    {
            goto label_7F306330;
    }

label_7F306210:
    ctx->pc = 0x7F306210u;
    ctx->downcount -= 4;
    // 7F306210: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F306214:
    ctx->pc = 0x7F306214u;
    // 7F306214: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F306218:
    ctx->pc = 0x7F306218u;
    // 7F306218: addi    r4, r4, 34
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(34);

label_7F30621C:
    ctx->pc = 0x7F30621Cu;
    // 7F30621C: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F306220u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F306220:
    ctx->pc = 0x7F306220u;
    ctx->downcount -= 3;
    // 7F306220: cmplwi  r3, 0x0000
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

label_7F306224:
    ctx->pc = 0x7F306224u;
    // 7F306224: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306228:
    ctx->pc = 0x7F306228u;
    // 7F306228: bc    4, 2, 0x7F306234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F306234;
        }
    }

label_7F30622C:
    ctx->pc = 0x7F30622Cu;
    ctx->downcount -= 2;
    // 7F30622C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F306230:
    ctx->pc = 0x7F306230u;
    // 7F306230: b       0x7F306330
    {
            goto label_7F306330;
    }

label_7F306234:
    ctx->pc = 0x7F306234u;
    ctx->downcount -= 2;
    // 7F306234: lwz     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306238:
    ctx->pc = 0x7F306238u;
    // 7F306238: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F30623Cu;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F30623C:
    ctx->pc = 0x7F30623Cu;
    ctx->downcount -= 7;
    // 7F30623C: lwz     r5, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306240:
    ctx->pc = 0x7F306240u;
    // 7F306240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F306244:
    ctx->pc = 0x7F306244u;
    // 7F306244: li      r4, 114
    ctx->gpr[4] = (u32)(s32)(114);

label_7F306248:
    ctx->pc = 0x7F306248u;
    // 7F306248: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30624C:
    ctx->pc = 0x7F30624Cu;
    // 7F30624C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F306250:
    ctx->pc = 0x7F306250u;
    // 7F306250: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306254:
    ctx->pc = 0x7F306254u;
    // 7F306254: bl      0x7F3C8470
    {
            ctx->lr = 0x7F306258u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F306258:
    ctx->pc = 0x7F306258u;
    ctx->downcount -= 1;
    // 7F306258: bl      0x7F3C8480
    {
            ctx->lr = 0x7F30625Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F30625C:
    ctx->pc = 0x7F30625Cu;
    ctx->downcount -= 21;
    // 7F30625C: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306260:
    ctx->pc = 0x7F306260u;
    // 7F306260: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F306264:
    ctx->pc = 0x7F306264u;
    // 7F306264: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F306268:
    ctx->pc = 0x7F306268u;
    // 7F306268: stw     r5, 352(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30626C:
    ctx->pc = 0x7F30626Cu;
    // 7F30626C: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306270:
    ctx->pc = 0x7F306270u;
    // 7F306270: stw     r5, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F306274:
    ctx->pc = 0x7F306274u;
    // 7F306274: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306278:
    ctx->pc = 0x7F306278u;
    // 7F306278: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30627C:
    ctx->pc = 0x7F30627Cu;
    // 7F30627C: stw     r5, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F306280:
    ctx->pc = 0x7F306280u;
    // 7F306280: stw     r0, 392(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306284:
    ctx->pc = 0x7F306284u;
    // 7F306284: lwz     r0, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306288:
    ctx->pc = 0x7F306288u;
    // 7F306288: lwz     r5, 392(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(392);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30628C:
    ctx->pc = 0x7F30628Cu;
    // 7F30628C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F306290:
    ctx->pc = 0x7F306290u;
    // 7F306290: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F306294:
    ctx->pc = 0x7F306294u;
    // 7F306294: stw     r0, 400(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306298:
    ctx->pc = 0x7F306298u;
    // 7F306298: lwz     r0, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30629C:
    ctx->pc = 0x7F30629Cu;
    // 7F30629C: lwz     r5, 400(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3062A0:
    ctx->pc = 0x7F3062A0u;
    // 7F3062A0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F3062A4:
    ctx->pc = 0x7F3062A4u;
    // 7F3062A4: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3062A8:
    ctx->pc = 0x7F3062A8u;
    // 7F3062A8: stw     r0, 384(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3062AC:
    ctx->pc = 0x7F3062ACu;
    // 7F3062AC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3062B0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3062B0:
    ctx->pc = 0x7F3062B0u;
    ctx->downcount -= 1;
    // 7F3062B0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F3062B4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F3062B4:
    ctx->pc = 0x7F3062B4u;
    ctx->downcount -= 4;
    // 7F3062B4: stw     r3, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3062B8:
    ctx->pc = 0x7F3062B8u;
    // 7F3062B8: lwz     r0, 324(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3062BC:
    ctx->pc = 0x7F3062BCu;
    // 7F3062BC: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3062C0:
    ctx->pc = 0x7F3062C0u;
    // 7F3062C0: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3062C4u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3062C4:
    ctx->pc = 0x7F3062C4u;
    ctx->downcount -= 3;
    // 7F3062C4: cmplwi  r3, 0x0000
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

label_7F3062C8:
    ctx->pc = 0x7F3062C8u;
    // 7F3062C8: stw     r3, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3062CC:
    ctx->pc = 0x7F3062CCu;
    // 7F3062CC: bc    4, 2, 0x7F3062D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3062D8;
        }
    }

label_7F3062D0:
    ctx->pc = 0x7F3062D0u;
    ctx->downcount -= 2;
    // 7F3062D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3062D4:
    ctx->pc = 0x7F3062D4u;
    // 7F3062D4: b       0x7F306330
    {
            goto label_7F306330;
    }

label_7F3062D8:
    ctx->pc = 0x7F3062D8u;
    ctx->downcount -= 3;
    // 7F3062D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3062DC:
    ctx->pc = 0x7F3062DCu;
    // 7F3062DC: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F3062E0:
    ctx->pc = 0x7F3062E0u;
    // 7F3062E0: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3062E4u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3062E4:
    ctx->pc = 0x7F3062E4u;
    ctx->downcount -= 1;
    // 7F3062E4: bl      0x7F3C8480
    {
            ctx->lr = 0x7F3062E8u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F3062E8:
    ctx->pc = 0x7F3062E8u;
    ctx->downcount -= 5;
    // 7F3062E8: lwz     r4, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3062EC:
    ctx->pc = 0x7F3062ECu;
    // 7F3062EC: addi    r31, r30, -1
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F3062F0:
    ctx->pc = 0x7F3062F0u;
    // 7F3062F0: rlwinm r30, r31, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F3062F4:
    ctx->pc = 0x7F3062F4u;
    // 7F3062F4: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3062F8:
    ctx->pc = 0x7F3062F8u;
    // 7F3062F8: b       0x7F30631C
    {
            goto label_7F30631C;
    }

label_7F3062FC:
    ctx->pc = 0x7F3062FCu;
    ctx->downcount -= 3;
    // 7F3062FC: lwzx    r3, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306300:
    // 7F306300: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F306304:
    // 7F306304: bl      0x7F3C8470
    {
            ctx->lr = 0x7F306308u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F306308:
    ctx->downcount -= 1;
    // 7F306308: bl      0x7F3C8480
    {
            ctx->lr = 0x7F30630Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F30630C:
    ctx->pc = 0x7F30630Cu;
    ctx->downcount -= 4;
    // 7F30630C: lwz     r4, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306310:
    // 7F306310: addi    r31, r31, -1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F306314:
    ctx->pc = 0x7F306314u;
    // 7F306314: stwx    r3, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306318:
    // 7F306318: addi    r30, r30, -4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F30631C:
    ctx->downcount -= 2;
    // 7F30631C: cmpwi   r31, 0
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

label_7F306320:
    // 7F306320: bc    12, 1, 0x7F3062FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3062FCu;
                return;
            }
            goto label_7F3062FC;
        }
    }

label_7F306324:
    ctx->pc = 0x7F306324u;
    ctx->downcount -= 3;
    // 7F306324: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F306328:
    ctx->pc = 0x7F306328u;
    // 7F306328: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30632C:
    ctx->pc = 0x7F30632Cu;
    // 7F30632C: stw     r0, 328(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306330:
    ctx->pc = 0x7F306330u;
    ctx->downcount -= 16;
    // 7F306330: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306334:
    ctx->pc = 0x7F306334u;
    // 7F306334: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306338:
    ctx->pc = 0x7F306338u;
    // 7F306338: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30633C:
    ctx->pc = 0x7F30633Cu;
    // 7F30633C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F306340:
    ctx->pc = 0x7F306340u;
    // 7F306340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306344:
    ctx->pc = 0x7F306344u;
    ctx->downcount -= 74;
    // 7F306344: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F306348:
    ctx->pc = 0x7F306348u;
    // 7F306348: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30634C:
    ctx->pc = 0x7F30634Cu;
    // 7F30634C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306350:
    ctx->pc = 0x7F306350u;
    // 7F306350: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F306354:
    ctx->pc = 0x7F306354u;
    // 7F306354: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F306354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F306354u);
        if (ctx->exception) return;
    }

label_7F306358:
    ctx->pc = 0x7F306358u;
    // 7F306358: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30635C:
    ctx->pc = 0x7F30635Cu;
    // 7F30635C: lis     r12, 32583
    ctx->gpr[12] = ((u32)(s32)(32583) << 16);

label_7F306360:
    ctx->pc = 0x7F306360u;
    // 7F306360: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306364:
    ctx->pc = 0x7F306364u;
    // 7F306364: lfs     f0, -32264(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F306364u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-32264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306368:
    ctx->pc = 0x7F306368u;
    // 7F306368: lis     r11, 32583
    ctx->gpr[11] = ((u32)(s32)(32583) << 16);

label_7F30636C:
    ctx->pc = 0x7F30636Cu;
    // 7F30636C: addi    r12, r11, -32260
    ctx->gpr[12] = ctx->gpr[11] + (u32)(s32)(-32260);

label_7F306370:
    ctx->pc = 0x7F306370u;
    // 7F306370: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306374:
    ctx->pc = 0x7F306374u;
    // 7F306374: lfs     f2, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F306374u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F306378:
    ctx->pc = 0x7F306378u;
    // 7F306378: addi    r12, r3, -32252
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(-32252);

label_7F30637C:
    ctx->pc = 0x7F30637Cu;
    // 7F30637C: stfs     f0, 332(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30637Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(332);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F306380:
    ctx->pc = 0x7F306380u;
    // 7F306380: lis     r11, 32583
    ctx->gpr[11] = ((u32)(s32)(32583) << 16);

label_7F306384:
    ctx->pc = 0x7F306384u;
    // 7F306384: lfs     f0, -32256(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F306384u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-32256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306388:
    ctx->pc = 0x7F306388u;
    // 7F306388: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30638C:
    ctx->pc = 0x7F30638Cu;
    // 7F30638C: stfs     f2, 336(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30638Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F306390:
    ctx->pc = 0x7F306390u;
    // 7F306390: addi    r11, r3, -32248
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(-32248);

label_7F306394:
    ctx->pc = 0x7F306394u;
    // 7F306394: lfs     f2, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F306394u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F306398:
    ctx->pc = 0x7F306398u;
    // 7F306398: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30639C:
    ctx->pc = 0x7F30639Cu;
    // 7F30639C: stfs     f0, 344(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F30639Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3063A0:
    ctx->pc = 0x7F3063A0u;
    // 7F3063A0: addi    r26, r3, -32240
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(-32240);

label_7F3063A4:
    ctx->pc = 0x7F3063A4u;
    // 7F3063A4: lfs     f0, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F3063A4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3063A8:
    ctx->pc = 0x7F3063A8u;
    // 7F3063A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3063AC:
    ctx->pc = 0x7F3063ACu;
    // 7F3063AC: stfs     f2, 348(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3063ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3063B0:
    ctx->pc = 0x7F3063B0u;
    // 7F3063B0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3063B4:
    ctx->pc = 0x7F3063B4u;
    // 7F3063B4: mulli   r5, r5, 20
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)20);

label_7F3063B8:
    ctx->pc = 0x7F3063B8u;
    // 7F3063B8: addi    r0, r3, -32344
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32344);

label_7F3063BC:
    ctx->pc = 0x7F3063BCu;
    // 7F3063BC: stfs     f0, 340(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3063BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3063C0:
    ctx->pc = 0x7F3063C0u;
    // 7F3063C0: lis     r12, 32585
    ctx->gpr[12] = ((u32)(s32)(32585) << 16);

label_7F3063C4:
    ctx->pc = 0x7F3063C4u;
    // 7F3063C4: lfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3063C4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3063C8:
    ctx->pc = 0x7F3063C8u;
    // 7F3063C8: lis     r11, 32585
    ctx->gpr[11] = ((u32)(s32)(32585) << 16);

label_7F3063CC:
    ctx->pc = 0x7F3063CCu;
    // 7F3063CC: stw     r27, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3063D0:
    ctx->pc = 0x7F3063D0u;
    // 7F3063D0: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3063D4:
    ctx->pc = 0x7F3063D4u;
    // 7F3063D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3063D8:
    ctx->pc = 0x7F3063D8u;
    // 7F3063D8: or   r31, r9, r9
    {
        ctx->gpr[31] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3063DC:
    ctx->pc = 0x7F3063DCu;
    // 7F3063DC: stfs     f0, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3063DCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3063E0:
    ctx->pc = 0x7F3063E0u;
    // 7F3063E0: addi    r26, r12, 12832
    ctx->gpr[26] = ctx->gpr[12] + (u32)(s32)(12832);

label_7F3063E4:
    ctx->pc = 0x7F3063E4u;
    // 7F3063E4: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3063E8:
    ctx->pc = 0x7F3063E8u;
    // 7F3063E8: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3063E8u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F3063EC:
    ctx->pc = 0x7F3063ECu;
    // 7F3063EC: stw     r27, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3063F0:
    ctx->pc = 0x7F3063F0u;
    // 7F3063F0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3063F4:
    ctx->pc = 0x7F3063F4u;
    // 7F3063F4: addi    r5, r29, 328
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(328);

label_7F3063F8:
    ctx->pc = 0x7F3063F8u;
    // 7F3063F8: stw     r27, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3063FC:
    ctx->pc = 0x7F3063FCu;
    // 7F3063FC: stw     r27, 404(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F306400:
    ctx->pc = 0x7F306400u;
    // 7F306400: stw     r10, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F306404:
    ctx->pc = 0x7F306404u;
    // 7F306404: lwzu     r9, 12808(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12808);
        ctx->gpr[9] = mem_read32(ctx, ea);
        ctx->gpr[11] = ea;
    }

label_7F306408:
    ctx->pc = 0x7F306408u;
    // 7F306408: lwz     r27, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F30640C:
    ctx->pc = 0x7F30640Cu;
    // 7F30640C: lwz     r28, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F306410:
    ctx->pc = 0x7F306410u;
    // 7F306410: lwz     r12, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F306414:
    ctx->pc = 0x7F306414u;
    // 7F306414: lwz     r10, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F306418:
    ctx->pc = 0x7F306418u;
    // 7F306418: lwz     r3, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30641C:
    ctx->pc = 0x7F30641Cu;
    // 7F30641C: stw     r27, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F306420:
    ctx->pc = 0x7F306420u;
    // 7F306420: stw     r28, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F306424:
    ctx->pc = 0x7F306424u;
    // 7F306424: stw     r12, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F306428:
    ctx->pc = 0x7F306428u;
    // 7F306428: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F30642C:
    ctx->pc = 0x7F30642Cu;
    // 7F30642C: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306430:
    ctx->pc = 0x7F306430u;
    // 7F306430: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306434:
    ctx->pc = 0x7F306434u;
    // 7F306434: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306438:
    loop_7F306438(ctx);
    if (ctx->pc == 0x7F30644Cu) goto label_7F30644C;
    return;
label_7F30643C:
    ctx->pc = 0x7F30643Cu;
    // 7F30643C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306440:
    ctx->pc = 0x7F306440u;
    // 7F306440: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306444:
    ctx->pc = 0x7F306444u;
    // 7F306444: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306448:
    // 7F306448: bc    16, 0, 0x7F306438
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306438u;
                return;
            }
            goto label_7F306438;
        }
    }

label_7F30644C:
    ctx->pc = 0x7F30644Cu;
    ctx->downcount -= 4;
    // 7F30644C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306450:
    ctx->pc = 0x7F306450u;
    // 7F306450: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F306454:
    ctx->pc = 0x7F306454u;
    // 7F306454: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306458:
    ctx->pc = 0x7F306458u;
    // 7F306458: bc    12, 2, 0x7F30647C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30647C;
        }
    }

label_7F30645C:
    ctx->pc = 0x7F30645Cu;
    ctx->downcount -= 8;
    // 7F30645C: lwz     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306460:
    ctx->pc = 0x7F306460u;
    // 7F306460: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306464:
    ctx->pc = 0x7F306464u;
    // 7F306464: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306468:
    ctx->pc = 0x7F306468u;
    // 7F306468: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30646C:
    ctx->pc = 0x7F30646Cu;
    // 7F30646C: lwz     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306470:
    ctx->pc = 0x7F306470u;
    // 7F306470: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306474:
    ctx->pc = 0x7F306474u;
    // 7F306474: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306478:
    ctx->pc = 0x7F306478u;
    // 7F306478: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30647C:
    ctx->pc = 0x7F30647Cu;
    ctx->downcount -= 7;
    // 7F30647C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306480:
    ctx->pc = 0x7F306480u;
    // 7F306480: lfs     f0, -32244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306480u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306484:
    ctx->pc = 0x7F306484u;
    // 7F306484: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306484u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F306488:
    ctx->pc = 0x7F306488u;
    // 7F306488: stw     r6, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30648C:
    ctx->pc = 0x7F30648Cu;
    // 7F30648C: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306490:
    ctx->pc = 0x7F306490u;
    // 7F306490: cmplwi  r3, 0x0000
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

label_7F306494:
    ctx->pc = 0x7F306494u;
    // 7F306494: bc    12, 2, 0x7F3064D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3064D4;
        }
    }

label_7F306498:
    ctx->pc = 0x7F306498u;
    ctx->downcount -= 16;
    // 7F306498: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30649C:
    ctx->pc = 0x7F30649Cu;
    // 7F30649C: mulli   r3, r7, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[7] * (s64)(s32)324);

label_7F3064A0:
    ctx->pc = 0x7F3064A0u;
    // 7F3064A0: addi    r0, r4, 444
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(444);

label_7F3064A4:
    ctx->pc = 0x7F3064A4u;
    // 7F3064A4: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3064A8:
    ctx->pc = 0x7F3064A8u;
    // 7F3064A8: addi    r0, r3, 444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(444);

label_7F3064AC:
    ctx->pc = 0x7F3064ACu;
    // 7F3064AC: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3064B0:
    ctx->pc = 0x7F3064B0u;
    // 7F3064B0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3064B4:
    ctx->pc = 0x7F3064B4u;
    // 7F3064B4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3064B8:
    ctx->pc = 0x7F3064B8u;
    // 7F3064B8: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3064BC:
    ctx->pc = 0x7F3064BCu;
    // 7F3064BC: lwz     r4, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3064C0:
    ctx->pc = 0x7F3064C0u;
    // 7F3064C0: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3064C4:
    ctx->pc = 0x7F3064C4u;
    // 7F3064C4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3064C8:
    ctx->pc = 0x7F3064C8u;
    // 7F3064C8: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3064CC:
    ctx->pc = 0x7F3064CCu;
    // 7F3064CC: bl      0x7F3BC518
    {
            ctx->lr = 0x7F3064D0u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F3064D0:
    ctx->pc = 0x7F3064D0u;
    ctx->downcount -= 1;
    // 7F3064D0: b       0x7F3064F0
    {
            goto label_7F3064F0;
    }

label_7F3064D4:
    ctx->pc = 0x7F3064D4u;
    ctx->downcount -= 4;
    // 7F3064D4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3064D8:
    ctx->pc = 0x7F3064D8u;
    // 7F3064D8: addi    r4, r29, 52
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(52);

label_7F3064DC:
    ctx->pc = 0x7F3064DCu;
    // 7F3064DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3064E0:
    ctx->pc = 0x7F3064E0u;
    // 7F3064E0: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F3064E4u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F3064E4:
    ctx->pc = 0x7F3064E4u;
    ctx->downcount -= 3;
    // 7F3064E4: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3064E8:
    ctx->pc = 0x7F3064E8u;
    // 7F3064E8: addi    r4, r29, 52
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(52);

label_7F3064EC:
    ctx->pc = 0x7F3064ECu;
    // 7F3064EC: bl      0x7F3BC518
    {
            ctx->lr = 0x7F3064F0u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F3064F0:
    ctx->pc = 0x7F3064F0u;
    ctx->downcount -= 3;
    // 7F3064F0: cmplwi  r31, 0x0000
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

label_7F3064F4:
    ctx->pc = 0x7F3064F4u;
    // 7F3064F4: stfs     f31, 192(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3064F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F3064F8:
    ctx->pc = 0x7F3064F8u;
    // 7F3064F8: bc    12, 2, 0x7F306514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F306514;
        }
    }

label_7F3064FC:
    ctx->pc = 0x7F3064FCu;
    ctx->downcount -= 6;
    // 7F3064FC: lha     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F306500:
    ctx->pc = 0x7F306500u;
    // 7F306500: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F306504:
    ctx->pc = 0x7F306504u;
    // 7F306504: lha     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F306508:
    ctx->pc = 0x7F306508u;
    // 7F306508: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F30650C:
    ctx->pc = 0x7F30650Cu;
    // 7F30650C: lha     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F306510:
    ctx->pc = 0x7F306510u;
    // 7F306510: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F306514:
    ctx->pc = 0x7F306514u;
    ctx->downcount -= 3;
    // 7F306514: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F306518:
    ctx->pc = 0x7F306518u;
    // 7F306518: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F30651C:
    ctx->pc = 0x7F30651Cu;
    // 7F30651C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F306520u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F306520:
    ctx->pc = 0x7F306520u;
    ctx->downcount -= 2;
    // 7F306520: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F306524:
    ctx->pc = 0x7F306524u;
    // 7F306524: bl      0x7F3B3370
    {
            ctx->lr = 0x7F306528u;
            ctx->pc = 0x7F3B3370u;
            return;
    }

label_7F306528:
    ctx->pc = 0x7F306528u;
    ctx->downcount -= 2;
    // 7F306528: addi    r3, r29, 208
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(208);

label_7F30652C:
    ctx->pc = 0x7F30652Cu;
    // 7F30652C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F306530u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F306530:
    ctx->pc = 0x7F306530u;
    ctx->downcount -= 13;
    // 7F306530: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306534:
    ctx->pc = 0x7F306534u;
    // 7F306534: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306538:
    ctx->pc = 0x7F306538u;
    // 7F306538: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30653C:
    ctx->pc = 0x7F30653Cu;
    // 7F30653C: addi    r5, r30, -4
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F306540:
    ctx->pc = 0x7F306540u;
    // 7F306540: addi    r4, r29, 204
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(204);

label_7F306544:
    ctx->pc = 0x7F306544u;
    // 7F306544: stw     r6, 256(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306548:
    ctx->pc = 0x7F306548u;
    // 7F306548: stw     r3, 260(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30654C:
    ctx->pc = 0x7F30654Cu;
    // 7F30654C: lwz     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306550:
    ctx->pc = 0x7F306550u;
    // 7F306550: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306554:
    ctx->pc = 0x7F306554u;
    // 7F306554: stw     r6, 264(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306558:
    ctx->pc = 0x7F306558u;
    // 7F306558: stw     r3, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30655C:
    ctx->pc = 0x7F30655Cu;
    // 7F30655C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306560:
    loop_7F306560(ctx);
    if (ctx->pc == 0x7F306574u) goto label_7F306574;
    return;
label_7F306564:
    ctx->pc = 0x7F306564u;
    // 7F306564: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306568:
    ctx->pc = 0x7F306568u;
    // 7F306568: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30656C:
    ctx->pc = 0x7F30656Cu;
    // 7F30656C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306570:
    // 7F306570: bc    16, 0, 0x7F306560
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306560u;
                return;
            }
            goto label_7F306560;
        }
    }

label_7F306574:
    ctx->pc = 0x7F306574u;
    ctx->downcount -= 18;
    // 7F306574: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F306574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F306574u);
        if (ctx->exception) return;
    }

label_7F306578:
    ctx->pc = 0x7F306578u;
    // 7F306578: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30657C:
    ctx->pc = 0x7F30657Cu;
    // 7F30657C: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306580:
    ctx->pc = 0x7F306580u;
    // 7F306580: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306584:
    ctx->pc = 0x7F306584u;
    // 7F306584: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306588:
    ctx->pc = 0x7F306588u;
    // 7F306588: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F30658C:
    ctx->pc = 0x7F30658Cu;
    // 7F30658C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306590:
    ctx->pc = 0x7F306590u;
    ctx->downcount -= 26;
    // 7F306590: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F306594:
    ctx->pc = 0x7F306594u;
    // 7F306594: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306598:
    ctx->pc = 0x7F306598u;
    // 7F306598: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30659C:
    ctx->pc = 0x7F30659Cu;
    // 7F30659C: lwz     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3065A0:
    ctx->pc = 0x7F3065A0u;
    // 7F3065A0: stfd     f31, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3065A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3065A4:
    ctx->pc = 0x7F3065A4u;
    // 7F3065A4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3065A4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F3065A8:
    ctx->pc = 0x7F3065A8u;
    // 7F3065A8: stmw     r25, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3065AC:
    ctx->pc = 0x7F3065ACu;
    // 7F3065AC: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3065B0:
    ctx->pc = 0x7F3065B0u;
    // 7F3065B0: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3065B4:
    ctx->pc = 0x7F3065B4u;
    // 7F3065B4: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3065B8:
    ctx->pc = 0x7F3065B8u;
    // 7F3065B8: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3065BC:
    ctx->pc = 0x7F3065BCu;
    // 7F3065BC: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3065C0:
    ctx->pc = 0x7F3065C0u;
    // 7F3065C0: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3065C4:
    ctx->pc = 0x7F3065C4u;
    // 7F3065C4: or   r30, r10, r10
    {
        ctx->gpr[30] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3065C8:
    ctx->pc = 0x7F3065C8u;
    // 7F3065C8: or   r6, r0, r0
    {
        ctx->gpr[6] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3065CC:
    ctx->pc = 0x7F3065CCu;
    // 7F3065CC: bl      0x7F3061C0
    {
            ctx->lr = 0x7F3065D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3061C0u;
                return;
            }
            goto label_7F3061C0;
    }

label_7F3065D0:
    ctx->pc = 0x7F3065D0u;
    ctx->downcount -= 2;
    // 7F3065D0: cmpwi   r3, 0
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

label_7F3065D4:
    ctx->pc = 0x7F3065D4u;
    // 7F3065D4: bc    4, 2, 0x7F3065E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3065E0;
        }
    }

label_7F3065D8:
    ctx->pc = 0x7F3065D8u;
    ctx->downcount -= 2;
    // 7F3065D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3065DC:
    ctx->pc = 0x7F3065DCu;
    // 7F3065DC: b       0x7F306650
    {
            goto label_7F306650;
    }

label_7F3065E0:
    ctx->pc = 0x7F3065E0u;
    ctx->downcount -= 3;
    // 7F3065E0: lwz     r0, 320(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3065E4:
    ctx->pc = 0x7F3065E4u;
    // 7F3065E4: cmplwi  r0, 0x0000
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

label_7F3065E8:
    ctx->pc = 0x7F3065E8u;
    // 7F3065E8: bc    4, 2, 0x7F3065F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3065F4;
        }
    }

label_7F3065EC:
    ctx->pc = 0x7F3065ECu;
    ctx->downcount -= 2;
    // 7F3065EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3065F0:
    ctx->pc = 0x7F3065F0u;
    // 7F3065F0: b       0x7F306650
    {
            goto label_7F306650;
    }

label_7F3065F4:
    ctx->pc = 0x7F3065F4u;
    ctx->downcount -= 6;
    // 7F3065F4: lwz     r7, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3065F8:
    ctx->pc = 0x7F3065F8u;
    // 7F3065F8: addi    r3, r25, 272
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(272);

label_7F3065FC:
    ctx->pc = 0x7F3065FCu;
    // 7F3065FC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F306600:
    ctx->pc = 0x7F306600u;
    // 7F306600: lwz     r6, 72(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306604:
    ctx->pc = 0x7F306604u;
    // 7F306604: addi    r4, r7, 444
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(444);

label_7F306608:
    ctx->pc = 0x7F306608u;
    // 7F306608: bl      0x7F3B6C80
    {
            ctx->lr = 0x7F30660Cu;
            ctx->pc = 0x7F3B6C80u;
            return;
    }

label_7F30660C:
    ctx->pc = 0x7F30660Cu;
    ctx->downcount -= 2;
    // 7F30660C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F306610:
    ctx->pc = 0x7F306610u;
    // 7F306610: bl      0x7F303EC0
    {
            ctx->lr = 0x7F306614u;
            ctx->pc = 0x7F303EC0u;
            return;
    }

label_7F306614:
    ctx->pc = 0x7F306614u;
    ctx->downcount -= 2;
    // 7F306614: cmpwi   r3, 0
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

label_7F306618:
    ctx->pc = 0x7F306618u;
    // 7F306618: bc    4, 2, 0x7F306624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F306624;
        }
    }

label_7F30661C:
    ctx->pc = 0x7F30661Cu;
    ctx->downcount -= 2;
    // 7F30661C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F306620:
    ctx->pc = 0x7F306620u;
    // 7F306620: b       0x7F306650
    {
            goto label_7F306650;
    }

label_7F306624:
    ctx->pc = 0x7F306624u;
    ctx->downcount -= 10;
    // 7F306624: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F306624u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F306628:
    ctx->pc = 0x7F306628u;
    // 7F306628: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30662C:
    ctx->pc = 0x7F30662Cu;
    // 7F30662C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F306630:
    ctx->pc = 0x7F306630u;
    // 7F306630: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F306634:
    ctx->pc = 0x7F306634u;
    // 7F306634: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F306638:
    ctx->pc = 0x7F306638u;
    // 7F306638: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30663C:
    ctx->pc = 0x7F30663Cu;
    // 7F30663C: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F306640:
    ctx->pc = 0x7F306640u;
    // 7F306640: or   r10, r31, r31
    {
        ctx->gpr[10] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F306644:
    ctx->pc = 0x7F306644u;
    // 7F306644: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F306648:
    ctx->pc = 0x7F306648u;
    // 7F306648: bl      0x7F306344
    {
            ctx->lr = 0x7F30664Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306344u;
                return;
            }
            goto label_7F306344;
    }

label_7F30664C:
    ctx->pc = 0x7F30664Cu;
    ctx->downcount -= 1;
    // 7F30664C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F306650:
    ctx->pc = 0x7F306650u;
    ctx->downcount -= 17;
    // 7F306650: lfd     f31, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F306654:
    ctx->pc = 0x7F306654u;
    // 7F306654: lmw     r25, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306658:
    ctx->pc = 0x7F306658u;
    // 7F306658: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30665C:
    ctx->pc = 0x7F30665Cu;
    // 7F30665C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306660:
    ctx->pc = 0x7F306660u;
    // 7F306660: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F306664:
    ctx->pc = 0x7F306664u;
    // 7F306664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306668:
    ctx->pc = 0x7F306668u;
    ctx->downcount -= 31;
    // 7F306668: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30666C:
    ctx->pc = 0x7F30666Cu;
    // 7F30666C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306670:
    ctx->pc = 0x7F306670u;
    // 7F306670: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306674:
    ctx->pc = 0x7F306674u;
    // 7F306674: stfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F306678:
    ctx->pc = 0x7F306678u;
    // 7F306678: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F306678u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F30667C:
    ctx->pc = 0x7F30667Cu;
    // 7F30667C: stmw     r21, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F306680:
    ctx->pc = 0x7F306680u;
    // 7F306680: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306684:
    ctx->pc = 0x7F306684u;
    // 7F306684: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306688:
    ctx->pc = 0x7F306688u;
    // 7F306688: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30668C:
    ctx->pc = 0x7F30668Cu;
    // 7F30668C: or   r24, r6, r6
    {
        ctx->gpr[24] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F306690:
    ctx->pc = 0x7F306690u;
    // 7F306690: lwz     r29, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F306694:
    ctx->pc = 0x7F306694u;
    // 7F306694: lwz     r30, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F306698:
    ctx->pc = 0x7F306698u;
    // 7F306698: or   r25, r7, r7
    {
        ctx->gpr[25] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F30669C:
    ctx->pc = 0x7F30669Cu;
    // 7F30669C: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3066A0:
    ctx->pc = 0x7F3066A0u;
    // 7F3066A0: or   r27, r9, r9
    {
        ctx->gpr[27] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3066A4:
    ctx->pc = 0x7F3066A4u;
    // 7F3066A4: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3066A8:
    ctx->pc = 0x7F3066A8u;
    // 7F3066A8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F3066AC:
    ctx->pc = 0x7F3066ACu;
    // 7F3066AC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F3066B0:
    ctx->pc = 0x7F3066B0u;
    // 7F3066B0: li      r5, 408
    ctx->gpr[5] = (u32)(s32)(408);

label_7F3066B4:
    ctx->pc = 0x7F3066B4u;
    // 7F3066B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3066B8:
    ctx->pc = 0x7F3066B8u;
    // 7F3066B8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3066BCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3066BC:
    ctx->pc = 0x7F3066BCu;
    ctx->downcount -= 2;
    // 7F3066BC: or.   r31, r3, r3
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

label_7F3066C0:
    ctx->pc = 0x7F3066C0u;
    // 7F3066C0: bc    12, 2, 0x7F30674C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30674C;
        }
    }

label_7F3066C4:
    ctx->pc = 0x7F3066C4u;
    ctx->downcount -= 5;
    // 7F3066C4: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F3066C8:
    ctx->pc = 0x7F3066C8u;
    // 7F3066C8: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F3066CC:
    ctx->pc = 0x7F3066CCu;
    // 7F3066CC: addi    r4, r4, 24956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24956);

label_7F3066D0:
    ctx->pc = 0x7F3066D0u;
    // 7F3066D0: addi    r5, r5, 24888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24888);

label_7F3066D4:
    ctx->pc = 0x7F3066D4u;
    // 7F3066D4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F3066D8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F3066D8:
    ctx->pc = 0x7F3066D8u;
    ctx->downcount -= 23;
    // 7F3066D8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3066DC:
    ctx->pc = 0x7F3066DCu;
    // 7F3066DC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F3066E0:
    ctx->pc = 0x7F3066E0u;
    // 7F3066E0: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F3066E4:
    ctx->pc = 0x7F3066E4u;
    // 7F3066E4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3066E4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F3066E8:
    ctx->pc = 0x7F3066E8u;
    // 7F3066E8: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F3066EC:
    ctx->pc = 0x7F3066ECu;
    // 7F3066EC: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F3066F0:
    ctx->pc = 0x7F3066F0u;
    // 7F3066F0: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3066F4:
    ctx->pc = 0x7F3066F4u;
    // 7F3066F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3066F8:
    ctx->pc = 0x7F3066F8u;
    // 7F3066F8: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3066FC:
    ctx->pc = 0x7F3066FCu;
    // 7F3066FC: stw     r11, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F306700:
    ctx->pc = 0x7F306700u;
    // 7F306700: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F306704:
    ctx->pc = 0x7F306704u;
    // 7F306704: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F306708:
    ctx->pc = 0x7F306708u;
    // 7F306708: or   r7, r25, r25
    {
        ctx->gpr[7] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30670C:
    ctx->pc = 0x7F30670Cu;
    // 7F30670C: stw     r11, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F306710:
    ctx->pc = 0x7F306710u;
    // 7F306710: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F306714:
    ctx->pc = 0x7F306714u;
    // 7F306714: or   r9, r27, r27
    {
        ctx->gpr[9] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F306718:
    ctx->pc = 0x7F306718u;
    // 7F306718: or   r10, r28, r28
    {
        ctx->gpr[10] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30671C:
    ctx->pc = 0x7F30671Cu;
    // 7F30671C: stw     r11, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F306720:
    ctx->pc = 0x7F306720u;
    // 7F306720: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306724:
    ctx->pc = 0x7F306724u;
    // 7F306724: stw     r21, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F306728:
    ctx->pc = 0x7F306728u;
    // 7F306728: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F30672C:
    ctx->pc = 0x7F30672Cu;
    // 7F30672C: stw     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F306730:
    ctx->pc = 0x7F306730u;
    // 7F306730: bl      0x7F306590
    {
            ctx->lr = 0x7F306734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306590u;
                return;
            }
            goto label_7F306590;
    }

label_7F306734:
    ctx->pc = 0x7F306734u;
    ctx->downcount -= 2;
    // 7F306734: cmpwi   r3, 0
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

label_7F306738:
    ctx->pc = 0x7F306738u;
    // 7F306738: bc    4, 2, 0x7F30674C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30674C;
        }
    }

label_7F30673C:
    ctx->pc = 0x7F30673Cu;
    ctx->downcount -= 2;
    // 7F30673C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F306740:
    ctx->pc = 0x7F306740u;
    // 7F306740: bl      0x7F3C8210
    {
            ctx->lr = 0x7F306744u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F306744:
    ctx->pc = 0x7F306744u;
    ctx->downcount -= 2;
    // 7F306744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F306748:
    ctx->pc = 0x7F306748u;
    // 7F306748: b       0x7F306750
    {
            goto label_7F306750;
    }

label_7F30674C:
    ctx->pc = 0x7F30674Cu;
    ctx->downcount -= 1;
    // 7F30674C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F306750:
    ctx->pc = 0x7F306750u;
    ctx->downcount -= 17;
    // 7F306750: lfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F306754:
    ctx->pc = 0x7F306754u;
    // 7F306754: lmw     r21, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306758:
    ctx->pc = 0x7F306758u;
    // 7F306758: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30675C:
    ctx->pc = 0x7F30675Cu;
    // 7F30675C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306760:
    ctx->pc = 0x7F306760u;
    // 7F306760: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F306764:
    ctx->pc = 0x7F306764u;
    // 7F306764: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306768:
    ctx->pc = 0x7F306768u;
    ctx->downcount -= 4;
    // 7F306768: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30676C:
    ctx->pc = 0x7F30676Cu;
    // 7F30676C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306770:
    ctx->pc = 0x7F306770u;
    // 7F306770: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306774:
    ctx->pc = 0x7F306774u;
    // 7F306774: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F306778u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F306778:
    ctx->pc = 0x7F306778u;
    ctx->downcount -= 5;
    // 7F306778: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30677C:
    ctx->pc = 0x7F30677Cu;
    // 7F30677C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306780:
    ctx->pc = 0x7F306780u;
    // 7F306780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F306784:
    ctx->pc = 0x7F306784u;
    // 7F306784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306788:
    ctx->pc = 0x7F306788u;
    ctx->downcount -= 19;
    // 7F306788: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30678C:
    ctx->pc = 0x7F30678Cu;
    // 7F30678C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306790:
    ctx->pc = 0x7F306790u;
    // 7F306790: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306794:
    ctx->pc = 0x7F306794u;
    // 7F306794: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F306798:
    ctx->pc = 0x7F306798u;
    // 7F306798: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30679C:
    ctx->pc = 0x7F30679Cu;
    // 7F30679C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3067A0:
    ctx->pc = 0x7F3067A0u;
    // 7F3067A0: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3067A4:
    ctx->pc = 0x7F3067A4u;
    // 7F3067A4: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F3067A8:
    ctx->pc = 0x7F3067A8u;
    // 7F3067A8: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3067ACu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3067AC:
    ctx->pc = 0x7F3067ACu;
    ctx->downcount -= 2;
    // 7F3067AC: or.   r31, r3, r3
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

label_7F3067B0:
    ctx->pc = 0x7F3067B0u;
    // 7F3067B0: bc    4, 2, 0x7F3067BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3067BC;
        }
    }

label_7F3067B4:
    ctx->pc = 0x7F3067B4u;
    ctx->downcount -= 2;
    // 7F3067B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3067B8:
    ctx->pc = 0x7F3067B8u;
    // 7F3067B8: b       0x7F30690C
    {
            goto label_7F30690C;
    }

label_7F3067BC:
    ctx->pc = 0x7F3067BCu;
    ctx->downcount -= 2;
    // 7F3067BC: li      r4, 112
    ctx->gpr[4] = (u32)(s32)(112);

label_7F3067C0:
    ctx->pc = 0x7F3067C0u;
    // 7F3067C0: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3067C4u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3067C4:
    ctx->pc = 0x7F3067C4u;
    ctx->downcount -= 82;
    // 7F3067C4: stw     r28, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3067C8:
    ctx->pc = 0x7F3067C8u;
    // 7F3067C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3067CC:
    ctx->pc = 0x7F3067CCu;
    // 7F3067CC: addi    r9, r3, -32228
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-32228);

label_7F3067D0:
    ctx->pc = 0x7F3067D0u;
    // 7F3067D0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3067D4:
    ctx->pc = 0x7F3067D4u;
    // 7F3067D4: stw     r30, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3067D8:
    ctx->pc = 0x7F3067D8u;
    // 7F3067D8: addi    r8, r3, -32224
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-32224);

label_7F3067DC:
    ctx->pc = 0x7F3067DCu;
    // 7F3067DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3067E0:
    ctx->pc = 0x7F3067E0u;
    // 7F3067E0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3067E4:
    ctx->pc = 0x7F3067E4u;
    // 7F3067E4: stw     r29, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3067E8:
    ctx->pc = 0x7F3067E8u;
    // 7F3067E8: addi    r7, r4, -32220
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-32220);

label_7F3067EC:
    ctx->pc = 0x7F3067ECu;
    // 7F3067EC: addi    r6, r3, -32216
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32216);

label_7F3067F0:
    ctx->pc = 0x7F3067F0u;
    // 7F3067F0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3067F4:
    ctx->pc = 0x7F3067F4u;
    // 7F3067F4: lwz     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3067F8:
    ctx->pc = 0x7F3067F8u;
    // 7F3067F8: rlwinm r10, r29, 6, 0, 25
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[29], 6u) & 0xFFFFFFC0u;
    }

label_7F3067FC:
    ctx->pc = 0x7F3067FCu;
    // 7F3067FC: addi    r5, r3, -32212
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-32212);

label_7F306800:
    ctx->pc = 0x7F306800u;
    // 7F306800: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306804:
    ctx->pc = 0x7F306804u;
    // 7F306804: add   r4, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F306808:
    ctx->pc = 0x7F306808u;
    // 7F306808: lfs     f6, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F306808u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F30680C:
    ctx->pc = 0x7F30680Cu;
    // 7F30680C: lfs     f0, 116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30680Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306810:
    ctx->pc = 0x7F306810u;
    // 7F306810: addi    r4, r3, -32208
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32208);

label_7F306814:
    ctx->pc = 0x7F306814u;
    // 7F306814: lfs     f4, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F306814u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F306818:
    ctx->pc = 0x7F306818u;
    // 7F306818: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30681C:
    ctx->pc = 0x7F30681Cu;
    // 7F30681C: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30681Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F306820:
    ctx->pc = 0x7F306820u;
    // 7F306820: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F306820u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F306824:
    ctx->pc = 0x7F306824u;
    // 7F306824: lwz     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306828:
    ctx->pc = 0x7F306828u;
    // 7F306828: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F306828u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F30682C:
    ctx->pc = 0x7F30682Cu;
    // 7F30682C: add   r6, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F306830:
    ctx->pc = 0x7F306830u;
    // 7F306830: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F306830u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F306834:
    ctx->pc = 0x7F306834u;
    // 7F306834: lfs     f5, 120(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F306834u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F306838:
    ctx->pc = 0x7F306838u;
    // 7F306838: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F306838u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30683C:
    ctx->pc = 0x7F30683Cu;
    // 7F30683C: stfs     f5, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30683Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F306840:
    ctx->pc = 0x7F306840u;
    // 7F306840: lwz     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306844:
    ctx->pc = 0x7F306844u;
    // 7F306844: add   r4, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F306848:
    ctx->pc = 0x7F306848u;
    // 7F306848: lfs     f5, 124(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F306848u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F30684C:
    ctx->pc = 0x7F30684Cu;
    // 7F30684C: stfs     f5, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30684Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F306850:
    ctx->pc = 0x7F306850u;
    // 7F306850: stfs     f6, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306850u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F306854:
    ctx->pc = 0x7F306854u;
    // 7F306854: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306858:
    ctx->pc = 0x7F306858u;
    // 7F306858: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30685C:
    ctx->pc = 0x7F30685Cu;
    // 7F30685C: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F306860:
    ctx->pc = 0x7F306860u;
    // 7F306860: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F306864:
    ctx->pc = 0x7F306864u;
    // 7F306864: lfs     f5, 104(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F306864u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F306868:
    ctx->pc = 0x7F306868u;
    // 7F306868: stfs     f5, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306868u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F30686C:
    ctx->pc = 0x7F30686Cu;
    // 7F30686C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306870:
    ctx->pc = 0x7F306870u;
    // 7F306870: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306874:
    ctx->pc = 0x7F306874u;
    // 7F306874: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F306878:
    ctx->pc = 0x7F306878u;
    // 7F306878: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30687C:
    ctx->pc = 0x7F30687Cu;
    // 7F30687C: lfs     f5, 108(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30687Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F306880:
    ctx->pc = 0x7F306880u;
    // 7F306880: stfs     f5, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306880u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F306884:
    ctx->pc = 0x7F306884u;
    // 7F306884: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306888:
    ctx->pc = 0x7F306888u;
    // 7F306888: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30688C:
    ctx->pc = 0x7F30688Cu;
    // 7F30688C: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F306890:
    ctx->pc = 0x7F306890u;
    // 7F306890: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F306894:
    ctx->pc = 0x7F306894u;
    // 7F306894: lfs     f5, 112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F306894u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F306898:
    ctx->pc = 0x7F306898u;
    // 7F306898: stfs     f5, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306898u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F30689C:
    ctx->pc = 0x7F30689Cu;
    // 7F30689C: stfs     f6, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F30689Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F3068A0:
    ctx->pc = 0x7F3068A0u;
    // 7F3068A0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3068A4:
    ctx->pc = 0x7F3068A4u;
    // 7F3068A4: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3068A8:
    ctx->pc = 0x7F3068A8u;
    // 7F3068A8: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F3068AC:
    ctx->pc = 0x7F3068ACu;
    // 7F3068AC: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3068B0:
    ctx->pc = 0x7F3068B0u;
    // 7F3068B0: lfs     f5, 116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3068B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3068B4:
    ctx->pc = 0x7F3068B4u;
    // 7F3068B4: fneg    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F3068B4u)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F3068B8:
    ctx->pc = 0x7F3068B8u;
    // 7F3068B8: stfs     f5, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F3068BC:
    ctx->pc = 0x7F3068BCu;
    // 7F3068BC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3068C0:
    ctx->pc = 0x7F3068C0u;
    // 7F3068C0: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3068C4:
    ctx->pc = 0x7F3068C4u;
    // 7F3068C4: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F3068C8:
    ctx->pc = 0x7F3068C8u;
    // 7F3068C8: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3068CC:
    ctx->pc = 0x7F3068CCu;
    // 7F3068CC: lfs     f5, 120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3068CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3068D0:
    ctx->pc = 0x7F3068D0u;
    // 7F3068D0: fneg    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F3068D0u)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F3068D4:
    ctx->pc = 0x7F3068D4u;
    // 7F3068D4: stfs     f5, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F3068D8:
    ctx->pc = 0x7F3068D8u;
    // 7F3068D8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3068DC:
    ctx->pc = 0x7F3068DCu;
    // 7F3068DC: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3068E0:
    ctx->pc = 0x7F3068E0u;
    // 7F3068E0: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F3068E4:
    ctx->pc = 0x7F3068E4u;
    // 7F3068E4: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3068E8:
    ctx->pc = 0x7F3068E8u;
    // 7F3068E8: lfs     f5, 124(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3068E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3068EC:
    ctx->pc = 0x7F3068ECu;
    // 7F3068EC: fneg    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F3068ECu)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F3068F0:
    ctx->pc = 0x7F3068F0u;
    // 7F3068F0: stfs     f5, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F3068F4:
    ctx->pc = 0x7F3068F4u;
    // 7F3068F4: stfs     f6, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F3068F8:
    ctx->pc = 0x7F3068F8u;
    // 7F3068F8: stfs     f4, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3068FC:
    ctx->pc = 0x7F3068FCu;
    // 7F3068FC: stfs     f3, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3068FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F306900:
    ctx->pc = 0x7F306900u;
    // 7F306900: stfs     f2, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306900u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F306904:
    ctx->pc = 0x7F306904u;
    // 7F306904: stfs     f1, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306904u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F306908:
    ctx->pc = 0x7F306908u;
    // 7F306908: stfs     f0, 108(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306908u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F30690C:
    ctx->pc = 0x7F30690Cu;
    ctx->downcount -= 16;
    // 7F30690C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306910:
    ctx->pc = 0x7F306910u;
    // 7F306910: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306914:
    ctx->pc = 0x7F306914u;
    // 7F306914: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306918:
    ctx->pc = 0x7F306918u;
    // 7F306918: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30691C:
    ctx->pc = 0x7F30691Cu;
    // 7F30691C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306920:
    ctx->pc = 0x7F306920u;
    ctx->downcount -= 6;
    // 7F306920: stfs     f1, 92(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306920u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F306924:
    ctx->pc = 0x7F306924u;
    // 7F306924: stfs     f2, 96(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306924u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F306928:
    ctx->pc = 0x7F306928u;
    // 7F306928: stfs     f3, 100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306928u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F30692C:
    ctx->pc = 0x7F30692Cu;
    // 7F30692C: stfs     f4, 104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30692Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F306930:
    ctx->pc = 0x7F306930u;
    // 7F306930: stfs     f5, 108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306930u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F306934:
    ctx->pc = 0x7F306934u;
    // 7F306934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306938:
    ctx->pc = 0x7F306938u;
    ctx->downcount -= 37;
    // 7F306938: stwu     r1, -336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-336);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30693C:
    ctx->pc = 0x7F30693Cu;
    // 7F30693C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306940:
    ctx->pc = 0x7F306940u;
    // 7F306940: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F306944:
    ctx->pc = 0x7F306944u;
    // 7F306944: stw     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306948:
    ctx->pc = 0x7F306948u;
    // 7F306948: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30694C:
    ctx->pc = 0x7F30694Cu;
    // 7F30694C: stmw     r27, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F306950:
    ctx->pc = 0x7F306950u;
    // 7F306950: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306954:
    ctx->pc = 0x7F306954u;
    // 7F306954: lwz     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306958:
    ctx->pc = 0x7F306958u;
    // 7F306958: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F30695C:
    ctx->pc = 0x7F30695Cu;
    // 7F30695C: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306960:
    ctx->pc = 0x7F306960u;
    // 7F306960: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F306964:
    ctx->pc = 0x7F306964u;
    // 7F306964: stwu     r5, -1068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[6] = ea;
    }

label_7F306968:
    ctx->pc = 0x7F306968u;
    // 7F306968: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F30696C:
    ctx->pc = 0x7F30696Cu;
    // 7F30696C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F306970:
    ctx->pc = 0x7F306970u;
    // 7F306970: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306974:
    ctx->pc = 0x7F306974u;
    // 7F306974: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306978:
    ctx->pc = 0x7F306978u;
    // 7F306978: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30697C:
    ctx->pc = 0x7F30697Cu;
    // 7F30697C: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306980:
    ctx->pc = 0x7F306980u;
    // 7F306980: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306984:
    ctx->pc = 0x7F306984u;
    // 7F306984: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F306988:
    ctx->pc = 0x7F306988u;
    // 7F306988: mulli   r3, r3, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)324);

label_7F30698C:
    ctx->pc = 0x7F30698Cu;
    // 7F30698C: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F306990:
    ctx->pc = 0x7F306990u;
    // 7F306990: addi    r4, r3, 440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(440);

label_7F306994:
    ctx->pc = 0x7F306994u;
    // 7F306994: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306998:
    loop_7F306998(ctx);
    if (ctx->pc == 0x7F3069ACu) goto label_7F3069AC;
    return;
label_7F30699C:
    ctx->pc = 0x7F30699Cu;
    // 7F30699C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3069A0:
    ctx->pc = 0x7F3069A0u;
    // 7F3069A0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3069A4:
    ctx->pc = 0x7F3069A4u;
    // 7F3069A4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3069A8:
    // 7F3069A8: bc    16, 0, 0x7F306998
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306998u;
                return;
            }
            goto label_7F306998;
        }
    }

label_7F3069AC:
    ctx->pc = 0x7F3069ACu;
    ctx->downcount -= 6;
    // 7F3069AC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3069B0:
    ctx->pc = 0x7F3069B0u;
    // 7F3069B0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3069B4:
    ctx->pc = 0x7F3069B4u;
    // 7F3069B4: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F3069B8:
    ctx->pc = 0x7F3069B8u;
    // 7F3069B8: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F3069BC:
    ctx->pc = 0x7F3069BCu;
    // 7F3069BC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3069C0:
    ctx->pc = 0x7F3069C0u;
    // 7F3069C0: bl      0x7F114508
    {
            ctx->lr = 0x7F3069C4u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3069C4:
    ctx->pc = 0x7F3069C4u;
    ctx->downcount -= 7;
    // 7F3069C4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3069C8:
    ctx->pc = 0x7F3069C8u;
    // 7F3069C8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3069CC:
    ctx->pc = 0x7F3069CCu;
    // 7F3069CC: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F3069D0:
    ctx->pc = 0x7F3069D0u;
    // 7F3069D0: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F3069D4:
    ctx->pc = 0x7F3069D4u;
    // 7F3069D4: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3069D8:
    ctx->pc = 0x7F3069D8u;
    // 7F3069D8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3069DC:
    loop_7F3069DC(ctx);
    if (ctx->pc == 0x7F3069F0u) goto label_7F3069F0;
    return;
label_7F3069E0:
    ctx->pc = 0x7F3069E0u;
    // 7F3069E0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3069E4:
    ctx->pc = 0x7F3069E4u;
    // 7F3069E4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3069E8:
    ctx->pc = 0x7F3069E8u;
    // 7F3069E8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3069EC:
    // 7F3069EC: bc    16, 0, 0x7F3069DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3069DCu;
                return;
            }
            goto label_7F3069DC;
        }
    }

label_7F3069F0:
    ctx->pc = 0x7F3069F0u;
    ctx->downcount -= 40;
    // 7F3069F0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3069F4:
    ctx->pc = 0x7F3069F4u;
    // 7F3069F4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3069F8:
    ctx->pc = 0x7F3069F8u;
    // 7F3069F8: addi    r6, r4, -1068
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F3069FC:
    ctx->pc = 0x7F3069FCu;
    // 7F3069FC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306A00:
    ctx->pc = 0x7F306A00u;
    // 7F306A00: addi    r5, r3, -32204
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-32204);

label_7F306A04:
    ctx->pc = 0x7F306A04u;
    // 7F306A04: lwz     r27, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F306A08:
    ctx->pc = 0x7F306A08u;
    // 7F306A08: lwz     r28, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F306A0C:
    ctx->pc = 0x7F306A0Cu;
    // 7F306A0C: addi    r11, r4, -1052
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F306A10:
    ctx->pc = 0x7F306A10u;
    // 7F306A10: lwz     r29, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F306A14:
    ctx->pc = 0x7F306A14u;
    // 7F306A14: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306A18:
    ctx->pc = 0x7F306A18u;
    // 7F306A18: lwz     r12, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F306A1C:
    ctx->pc = 0x7F306A1Cu;
    // 7F306A1C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306A20:
    ctx->pc = 0x7F306A20u;
    // 7F306A20: lwz     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F306A24:
    ctx->pc = 0x7F306A24u;
    // 7F306A24: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F306A28:
    ctx->pc = 0x7F306A28u;
    // 7F306A28: lwz     r9, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F306A2C:
    ctx->pc = 0x7F306A2Cu;
    // 7F306A2C: addi    r7, r4, -1084
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F306A30:
    ctx->pc = 0x7F306A30u;
    // 7F306A30: lwz     r8, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306A34:
    ctx->pc = 0x7F306A34u;
    // 7F306A34: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306A38:
    ctx->pc = 0x7F306A38u;
    // 7F306A38: lwz     r6, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306A3C:
    ctx->pc = 0x7F306A3Cu;
    // 7F306A3C: addi    r30, r1, 56
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(56);

label_7F306A40:
    ctx->pc = 0x7F306A40u;
    // 7F306A40: stw     r27, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F306A44:
    ctx->pc = 0x7F306A44u;
    // 7F306A44: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F306A48:
    ctx->pc = 0x7F306A48u;
    // 7F306A48: addi    r4, r1, 4
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(4);

label_7F306A4C:
    ctx->pc = 0x7F306A4Cu;
    // 7F306A4C: stw     r28, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F306A50:
    ctx->pc = 0x7F306A50u;
    // 7F306A50: stw     r29, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F306A54:
    ctx->pc = 0x7F306A54u;
    // 7F306A54: stw     r12, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F306A58:
    ctx->pc = 0x7F306A58u;
    // 7F306A58: stw     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F306A5C:
    ctx->pc = 0x7F306A5Cu;
    // 7F306A5C: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306A60:
    ctx->pc = 0x7F306A60u;
    // 7F306A60: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306A64:
    ctx->pc = 0x7F306A64u;
    // 7F306A64: stw     r6, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306A68:
    ctx->pc = 0x7F306A68u;
    // 7F306A68: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306A6C:
    ctx->pc = 0x7F306A6Cu;
    // 7F306A6C: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306A70:
    ctx->pc = 0x7F306A70u;
    // 7F306A70: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306A74:
    ctx->pc = 0x7F306A74u;
    // 7F306A74: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306A78:
    ctx->pc = 0x7F306A78u;
    // 7F306A78: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306A7C:
    ctx->pc = 0x7F306A7Cu;
    // 7F306A7C: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306A80:
    ctx->pc = 0x7F306A80u;
    // 7F306A80: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306A84:
    ctx->pc = 0x7F306A84u;
    // 7F306A84: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306A88:
    ctx->pc = 0x7F306A88u;
    // 7F306A88: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306A8C:
    loop_7F306A8C(ctx);
    if (ctx->pc == 0x7F306AA0u) goto label_7F306AA0;
    return;
label_7F306A90:
    ctx->pc = 0x7F306A90u;
    // 7F306A90: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306A94:
    ctx->pc = 0x7F306A94u;
    // 7F306A94: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306A98:
    ctx->pc = 0x7F306A98u;
    // 7F306A98: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306A9C:
    // 7F306A9C: bc    16, 0, 0x7F306A8C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306A8Cu;
                return;
            }
            goto label_7F306A8C;
        }
    }

label_7F306AA0:
    ctx->pc = 0x7F306AA0u;
    ctx->downcount -= 6;
    // 7F306AA0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306AA4:
    ctx->pc = 0x7F306AA4u;
    // 7F306AA4: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306AA8:
    ctx->pc = 0x7F306AA8u;
    // 7F306AA8: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306AAC:
    ctx->pc = 0x7F306AACu;
    // 7F306AAC: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F306AB0:
    ctx->pc = 0x7F306AB0u;
    // 7F306AB0: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306AB4:
    ctx->pc = 0x7F306AB4u;
    // 7F306AB4: bl      0x7F114508
    {
            ctx->lr = 0x7F306AB8u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F306AB8:
    ctx->pc = 0x7F306AB8u;
    ctx->downcount -= 23;
    // 7F306AB8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306ABC:
    ctx->pc = 0x7F306ABCu;
    // 7F306ABC: lwzu     r9, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        ctx->gpr[9] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F306AC0:
    ctx->pc = 0x7F306AC0u;
    // 7F306AC0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306AC4:
    ctx->pc = 0x7F306AC4u;
    // 7F306AC4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306AC8:
    ctx->pc = 0x7F306AC8u;
    // 7F306AC8: lwz     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306ACC:
    ctx->pc = 0x7F306ACCu;
    // 7F306ACC: addi    r7, r5, -1068
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F306AD0:
    ctx->pc = 0x7F306AD0u;
    // 7F306AD0: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306AD4:
    ctx->pc = 0x7F306AD4u;
    // 7F306AD4: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F306AD8:
    ctx->pc = 0x7F306AD8u;
    // 7F306AD8: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306ADC:
    ctx->pc = 0x7F306ADCu;
    // 7F306ADC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306AE0:
    ctx->pc = 0x7F306AE0u;
    // 7F306AE0: stw     r9, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306AE4:
    ctx->pc = 0x7F306AE4u;
    // 7F306AE4: stw     r8, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306AE8:
    ctx->pc = 0x7F306AE8u;
    // 7F306AE8: stw     r6, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306AEC:
    ctx->pc = 0x7F306AECu;
    // 7F306AEC: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306AF0:
    ctx->pc = 0x7F306AF0u;
    // 7F306AF0: lwz     r6, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306AF4:
    ctx->pc = 0x7F306AF4u;
    // 7F306AF4: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306AF8:
    ctx->pc = 0x7F306AF8u;
    // 7F306AF8: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306AFC:
    ctx->pc = 0x7F306AFCu;
    // 7F306AFC: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306B00:
    ctx->pc = 0x7F306B00u;
    // 7F306B00: lwz     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306B04:
    ctx->pc = 0x7F306B04u;
    // 7F306B04: lwz     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306B08:
    ctx->pc = 0x7F306B08u;
    // 7F306B08: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306B0C:
    ctx->pc = 0x7F306B0Cu;
    // 7F306B0C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306B10:
    ctx->pc = 0x7F306B10u;
    // 7F306B10: bl      0x80025FFC
    {
            ctx->lr = 0x7F306B14u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F306B14:
    ctx->pc = 0x7F306B14u;
    ctx->downcount -= 5;
    // 7F306B14: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B18:
    ctx->pc = 0x7F306B18u;
    // 7F306B18: lfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306B18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F306B1C:
    ctx->pc = 0x7F306B1Cu;
    // 7F306B1C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306B20:
    ctx->pc = 0x7F306B20u;
    // 7F306B20: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306B24:
    ctx->pc = 0x7F306B24u;
    // 7F306B24: bl      0x80026020
    {
            ctx->lr = 0x7F306B28u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F306B28:
    ctx->pc = 0x7F306B28u;
    ctx->downcount -= 5;
    // 7F306B28: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B2C:
    ctx->pc = 0x7F306B2Cu;
    // 7F306B2C: lfs     f1, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306B2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F306B30:
    ctx->pc = 0x7F306B30u;
    // 7F306B30: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F306B34:
    ctx->pc = 0x7F306B34u;
    // 7F306B34: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306B38:
    ctx->pc = 0x7F306B38u;
    // 7F306B38: bl      0x80026020
    {
            ctx->lr = 0x7F306B3Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F306B3C:
    ctx->pc = 0x7F306B3Cu;
    ctx->downcount -= 6;
    // 7F306B3C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B40:
    ctx->pc = 0x7F306B40u;
    // 7F306B40: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306B44:
    ctx->pc = 0x7F306B44u;
    // 7F306B44: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306B48:
    ctx->pc = 0x7F306B48u;
    // 7F306B48: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F306B4C:
    ctx->pc = 0x7F306B4Cu;
    // 7F306B4C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306B50:
    ctx->pc = 0x7F306B50u;
    // 7F306B50: bl      0x80025FD8
    {
            ctx->lr = 0x7F306B54u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F306B54:
    ctx->pc = 0x7F306B54u;
    ctx->downcount -= 3;
    // 7F306B54: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B58:
    ctx->pc = 0x7F306B58u;
    // 7F306B58: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306B5C:
    ctx->pc = 0x7F306B5Cu;
    // 7F306B5C: bl      0x80026080
    {
            ctx->lr = 0x7F306B60u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F306B60:
    ctx->pc = 0x7F306B60u;
    ctx->downcount -= 2;
    // 7F306B60: lfs     f2, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306B60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F306B64:
    ctx->pc = 0x7F306B64u;
    // 7F306B64: bl      0x7F306F50
    {
            ctx->lr = 0x7F306B68u;
            goto label_7F306F50;
    }

label_7F306B68:
    ctx->pc = 0x7F306B68u;
    ctx->downcount -= 24;
    // 7F306B68: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F306B6C:
    ctx->pc = 0x7F306B6Cu;
    // 7F306B6C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B70:
    ctx->pc = 0x7F306B70u;
    // 7F306B70: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306B74:
    ctx->pc = 0x7F306B74u;
    // 7F306B74: lwz     r5, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F306B78:
    ctx->pc = 0x7F306B78u;
    // 7F306B78: addi    r9, r6, -1068
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(-1068);

label_7F306B7C:
    ctx->pc = 0x7F306B7Cu;
    // 7F306B7C: lwz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306B80:
    ctx->pc = 0x7F306B80u;
    // 7F306B80: lwz     r8, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306B84:
    ctx->pc = 0x7F306B84u;
    // 7F306B84: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306B88:
    ctx->pc = 0x7F306B88u;
    // 7F306B88: lwz     r7, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F306B8C:
    ctx->pc = 0x7F306B8Cu;
    // 7F306B8C: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F306B90:
    ctx->pc = 0x7F306B90u;
    // 7F306B90: stw     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F306B94:
    ctx->pc = 0x7F306B94u;
    // 7F306B94: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306B98:
    ctx->pc = 0x7F306B98u;
    // 7F306B98: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306B9C:
    ctx->pc = 0x7F306B9Cu;
    // 7F306B9C: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306BA0:
    ctx->pc = 0x7F306BA0u;
    // 7F306BA0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306BA4:
    ctx->pc = 0x7F306BA4u;
    // 7F306BA4: stw     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306BA8:
    ctx->pc = 0x7F306BA8u;
    // 7F306BA8: stw     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F306BAC:
    ctx->pc = 0x7F306BACu;
    // 7F306BAC: stw     r6, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306BB0:
    ctx->pc = 0x7F306BB0u;
    // 7F306BB0: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306BB4:
    ctx->pc = 0x7F306BB4u;
    // 7F306BB4: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306BB8:
    ctx->pc = 0x7F306BB8u;
    // 7F306BB8: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306BBC:
    ctx->pc = 0x7F306BBCu;
    // 7F306BBC: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306BC0:
    ctx->pc = 0x7F306BC0u;
    // 7F306BC0: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306BC4:
    ctx->pc = 0x7F306BC4u;
    // 7F306BC4: bl      0x80025FD8
    {
            ctx->lr = 0x7F306BC8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F306BC8:
    ctx->pc = 0x7F306BC8u;
    ctx->downcount -= 7;
    // 7F306BC8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306BCC:
    ctx->pc = 0x7F306BCCu;
    // 7F306BCC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306BD0:
    ctx->pc = 0x7F306BD0u;
    // 7F306BD0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306BD4:
    ctx->pc = 0x7F306BD4u;
    // 7F306BD4: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F306BD8:
    ctx->pc = 0x7F306BD8u;
    // 7F306BD8: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F306BDC:
    ctx->pc = 0x7F306BDCu;
    // 7F306BDC: addi    r5, r5, -1052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F306BE0:
    ctx->pc = 0x7F306BE0u;
    // 7F306BE0: bl      0x80025FFC
    {
            ctx->lr = 0x7F306BE4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F306BE4:
    ctx->pc = 0x7F306BE4u;
    ctx->downcount -= 3;
    // 7F306BE4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306BE8:
    ctx->pc = 0x7F306BE8u;
    // 7F306BE8: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306BEC:
    ctx->pc = 0x7F306BECu;
    // 7F306BEC: bl      0x80026080
    {
            ctx->lr = 0x7F306BF0u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F306BF0:
    ctx->pc = 0x7F306BF0u;
    ctx->downcount -= 2;
    // 7F306BF0: lfs     f2, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306BF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F306BF4:
    ctx->pc = 0x7F306BF4u;
    // 7F306BF4: bl      0x7F306F50
    {
            ctx->lr = 0x7F306BF8u;
            goto label_7F306F50;
    }

label_7F306BF8:
    ctx->pc = 0x7F306BF8u;
    ctx->downcount -= 17;
    // 7F306BF8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306BFC:
    ctx->pc = 0x7F306BFCu;
    // 7F306BFC: lwzu     r6, -1084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1084);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306C00:
    ctx->pc = 0x7F306C00u;
    // 7F306C00: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306C04:
    ctx->pc = 0x7F306C04u;
    // 7F306C04: addi    r27, r1, 264
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(264);

label_7F306C08:
    ctx->pc = 0x7F306C08u;
    // 7F306C08: lwz     r9, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F306C0C:
    ctx->pc = 0x7F306C0Cu;
    // 7F306C0C: addi    r7, r3, -32204
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-32204);

label_7F306C10:
    ctx->pc = 0x7F306C10u;
    // 7F306C10: lwz     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306C14:
    ctx->pc = 0x7F306C14u;
    // 7F306C14: addi    r5, r1, 296
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(296);

label_7F306C18:
    ctx->pc = 0x7F306C18u;
    // 7F306C18: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306C1C:
    ctx->pc = 0x7F306C1Cu;
    // 7F306C1C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F306C20:
    ctx->pc = 0x7F306C20u;
    // 7F306C20: stw     r6, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306C24:
    ctx->pc = 0x7F306C24u;
    // 7F306C24: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F306C28:
    ctx->pc = 0x7F306C28u;
    // 7F306C28: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F306C2C:
    ctx->pc = 0x7F306C2Cu;
    // 7F306C2C: stw     r9, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306C30:
    ctx->pc = 0x7F306C30u;
    // 7F306C30: stw     r8, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306C34:
    ctx->pc = 0x7F306C34u;
    // 7F306C34: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306C38:
    ctx->pc = 0x7F306C38u;
    // 7F306C38: bl      0x7F0FC620
    {
            ctx->lr = 0x7F306C3Cu;
            ctx->pc = 0x7F0FC620u;
            return;
    }

label_7F306C3C:
    ctx->pc = 0x7F306C3Cu;
    ctx->downcount -= 4;
    // 7F306C3C: addi    r30, r1, 72
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(72);

label_7F306C40:
    ctx->pc = 0x7F306C40u;
    // 7F306C40: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F306C44:
    ctx->pc = 0x7F306C44u;
    // 7F306C44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F306C48:
    ctx->pc = 0x7F306C48u;
    // 7F306C48: bl      0x7F113430
    {
            ctx->lr = 0x7F306C4Cu;
            ctx->pc = 0x7F113430u;
            return;
    }

label_7F306C4C:
    ctx->pc = 0x7F306C4Cu;
    ctx->downcount -= 3;
    // 7F306C4C: addi    r3, r1, 136
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(136);

label_7F306C50:
    ctx->pc = 0x7F306C50u;
    // 7F306C50: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F306C54:
    ctx->pc = 0x7F306C54u;
    // 7F306C54: bl      0x7F306F24
    {
            ctx->lr = 0x7F306C58u;
            goto label_7F306F24;
    }

label_7F306C58:
    ctx->pc = 0x7F306C58u;
    ctx->downcount -= 29;
    // 7F306C58: lwz     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F306C5C:
    ctx->pc = 0x7F306C5Cu;
    // 7F306C5C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306C60:
    ctx->pc = 0x7F306C60u;
    // 7F306C60: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306C64:
    ctx->pc = 0x7F306C64u;
    // 7F306C64: addi    r5, r3, -32188
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-32188);

label_7F306C68:
    ctx->pc = 0x7F306C68u;
    // 7F306C68: lwz     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306C6C:
    ctx->pc = 0x7F306C6Cu;
    // 7F306C6C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306C70:
    ctx->pc = 0x7F306C70u;
    // 7F306C70: lwz     r7, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F306C74:
    ctx->pc = 0x7F306C74u;
    // 7F306C74: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306C78:
    ctx->pc = 0x7F306C78u;
    // 7F306C78: stw     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306C7C:
    ctx->pc = 0x7F306C7Cu;
    // 7F306C7C: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F306C80:
    ctx->pc = 0x7F306C80u;
    // 7F306C80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F306C80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F306C84:
    ctx->pc = 0x7F306C84u;
    // 7F306C84: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F306C88:
    ctx->pc = 0x7F306C88u;
    // 7F306C88: stw     r9, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306C8C:
    ctx->pc = 0x7F306C8Cu;
    // 7F306C8C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306C90:
    ctx->pc = 0x7F306C90u;
    // 7F306C90: lfs     f0, 268(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306C94:
    ctx->pc = 0x7F306C94u;
    // 7F306C94: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F306C98:
    ctx->pc = 0x7F306C98u;
    // 7F306C98: stw     r8, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306C9C:
    ctx->pc = 0x7F306C9Cu;
    // 7F306C9C: addi    r4, r1, 4
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(4);

label_7F306CA0:
    ctx->pc = 0x7F306CA0u;
    // 7F306CA0: stw     r7, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F306CA4:
    ctx->pc = 0x7F306CA4u;
    // 7F306CA4: lfs     f1, 108(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F306CA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F306CA8:
    ctx->pc = 0x7F306CA8u;
    // 7F306CA8: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F306CA8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F306CAC:
    ctx->pc = 0x7F306CACu;
    // 7F306CAC: stw     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306CB0:
    ctx->pc = 0x7F306CB0u;
    // 7F306CB0: stw     r8, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306CB4:
    ctx->pc = 0x7F306CB4u;
    // 7F306CB4: stfs     f0, 268(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F306CB8:
    ctx->pc = 0x7F306CB8u;
    // 7F306CB8: lwz     r3, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306CBC:
    ctx->pc = 0x7F306CBCu;
    // 7F306CBC: stw     r7, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F306CC0:
    ctx->pc = 0x7F306CC0u;
    // 7F306CC0: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306CC4:
    ctx->pc = 0x7F306CC4u;
    // 7F306CC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306CC8:
    loop_7F306CC8(ctx);
    if (ctx->pc == 0x7F306CDCu) goto label_7F306CDC;
    return;
label_7F306CCC:
    ctx->pc = 0x7F306CCCu;
    // 7F306CCC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306CD0:
    ctx->pc = 0x7F306CD0u;
    // 7F306CD0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306CD4:
    ctx->pc = 0x7F306CD4u;
    // 7F306CD4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306CD8:
    // 7F306CD8: bc    16, 0, 0x7F306CC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306CC8u;
                return;
            }
            goto label_7F306CC8;
        }
    }

label_7F306CDC:
    ctx->pc = 0x7F306CDCu;
    ctx->downcount -= 7;
    // 7F306CDC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306CE0:
    ctx->pc = 0x7F306CE0u;
    // 7F306CE0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306CE4:
    ctx->pc = 0x7F306CE4u;
    // 7F306CE4: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F306CE8:
    ctx->pc = 0x7F306CE8u;
    // 7F306CE8: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F306CEC:
    ctx->pc = 0x7F306CECu;
    // 7F306CEC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F306CF0:
    ctx->pc = 0x7F306CF0u;
    // 7F306CF0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306CF4:
    loop_7F306CF4(ctx);
    if (ctx->pc == 0x7F306D08u) goto label_7F306D08;
    return;
label_7F306CF8:
    ctx->pc = 0x7F306CF8u;
    // 7F306CF8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306CFC:
    ctx->pc = 0x7F306CFCu;
    // 7F306CFC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306D00:
    ctx->pc = 0x7F306D00u;
    // 7F306D00: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306D04:
    // 7F306D04: bc    16, 0, 0x7F306CF4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306CF4u;
                return;
            }
            goto label_7F306CF4;
        }
    }

label_7F306D08:
    ctx->pc = 0x7F306D08u;
    ctx->downcount -= 7;
    // 7F306D08: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306D0C:
    ctx->pc = 0x7F306D0Cu;
    // 7F306D0C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306D10:
    ctx->pc = 0x7F306D10u;
    // 7F306D10: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F306D14:
    ctx->pc = 0x7F306D14u;
    // 7F306D14: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F306D18:
    ctx->pc = 0x7F306D18u;
    // 7F306D18: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F306D1C:
    ctx->pc = 0x7F306D1Cu;
    // 7F306D1C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306D20:
    ctx->pc = 0x7F306D20u;
    // 7F306D20: bl      0x80025FFC
    {
            ctx->lr = 0x7F306D24u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F306D24:
    ctx->pc = 0x7F306D24u;
    ctx->downcount -= 19;
    // 7F306D24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306D28:
    ctx->pc = 0x7F306D28u;
    // 7F306D28: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306D2C:
    ctx->pc = 0x7F306D2Cu;
    // 7F306D2C: addi    r9, r3, -32204
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-32204);

label_7F306D30:
    ctx->pc = 0x7F306D30u;
    // 7F306D30: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306D34:
    ctx->pc = 0x7F306D34u;
    // 7F306D34: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306D38:
    ctx->pc = 0x7F306D38u;
    // 7F306D38: addi    r10, r4, -1052
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F306D3C:
    ctx->pc = 0x7F306D3Cu;
    // 7F306D3C: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F306D40:
    ctx->pc = 0x7F306D40u;
    // 7F306D40: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306D44:
    ctx->pc = 0x7F306D44u;
    // 7F306D44: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306D48:
    ctx->pc = 0x7F306D48u;
    // 7F306D48: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306D4C:
    ctx->pc = 0x7F306D4Cu;
    // 7F306D4C: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306D50:
    ctx->pc = 0x7F306D50u;
    // 7F306D50: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F306D54:
    ctx->pc = 0x7F306D54u;
    // 7F306D54: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306D58:
    ctx->pc = 0x7F306D58u;
    // 7F306D58: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F306D5C:
    ctx->pc = 0x7F306D5Cu;
    // 7F306D5C: addi    r5, r5, -1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F306D60:
    ctx->pc = 0x7F306D60u;
    // 7F306D60: stw     r7, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F306D64:
    ctx->pc = 0x7F306D64u;
    // 7F306D64: stw     r6, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306D68:
    ctx->pc = 0x7F306D68u;
    // 7F306D68: stw     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306D6C:
    ctx->pc = 0x7F306D6Cu;
    // 7F306D6C: bl      0x80025A80
    {
            ctx->lr = 0x7F306D70u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F306D70:
    ctx->pc = 0x7F306D70u;
    ctx->downcount -= 7;
    // 7F306D70: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306D74:
    ctx->pc = 0x7F306D74u;
    // 7F306D74: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306D78:
    ctx->pc = 0x7F306D78u;
    // 7F306D78: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F306D7C:
    ctx->pc = 0x7F306D7Cu;
    // 7F306D7C: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F306D80:
    ctx->pc = 0x7F306D80u;
    // 7F306D80: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F306D84:
    ctx->pc = 0x7F306D84u;
    // 7F306D84: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306D88:
    ctx->pc = 0x7F306D88u;
    // 7F306D88: bl      0x80025FD8
    {
            ctx->lr = 0x7F306D8Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F306D8C:
    ctx->pc = 0x7F306D8Cu;
    ctx->downcount -= 6;
    // 7F306D8C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306D90:
    ctx->pc = 0x7F306D90u;
    // 7F306D90: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306D94:
    ctx->pc = 0x7F306D94u;
    // 7F306D94: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F306D98:
    ctx->pc = 0x7F306D98u;
    // 7F306D98: addi    r3, r5, -1276
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F306D9C:
    ctx->pc = 0x7F306D9Cu;
    // 7F306D9C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306DA0:
    ctx->pc = 0x7F306DA0u;
    // 7F306DA0: bl      0x7F114508
    {
            ctx->lr = 0x7F306DA4u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F306DA4:
    ctx->pc = 0x7F306DA4u;
    ctx->downcount -= 9;
    // 7F306DA4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F306DA8:
    ctx->pc = 0x7F306DA8u;
    // 7F306DA8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306DAC:
    ctx->pc = 0x7F306DACu;
    // 7F306DAC: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F306DB0:
    ctx->pc = 0x7F306DB0u;
    // 7F306DB0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306DB4:
    ctx->pc = 0x7F306DB4u;
    // 7F306DB4: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F306DB8:
    ctx->pc = 0x7F306DB8u;
    // 7F306DB8: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F306DBC:
    ctx->pc = 0x7F306DBCu;
    // 7F306DBC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F306DC0:
    ctx->pc = 0x7F306DC0u;
    // 7F306DC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306DC4:
    loop_7F306DC4(ctx);
    if (ctx->pc == 0x7F306DD8u) goto label_7F306DD8;
    return;
label_7F306DC8:
    ctx->pc = 0x7F306DC8u;
    // 7F306DC8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306DCC:
    ctx->pc = 0x7F306DCCu;
    // 7F306DCC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306DD0:
    ctx->pc = 0x7F306DD0u;
    // 7F306DD0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306DD4:
    // 7F306DD4: bc    16, 0, 0x7F306DC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306DC4u;
                return;
            }
            goto label_7F306DC4;
        }
    }

label_7F306DD8:
    ctx->pc = 0x7F306DD8u;
    ctx->downcount -= 24;
    // 7F306DD8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306DDC:
    ctx->pc = 0x7F306DDCu;
    // 7F306DDC: lwz     r6, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306DE0:
    ctx->pc = 0x7F306DE0u;
    // 7F306DE0: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F306DE4:
    ctx->pc = 0x7F306DE4u;
    // 7F306DE4: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306DE8:
    ctx->pc = 0x7F306DE8u;
    // 7F306DE8: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306DEC:
    ctx->pc = 0x7F306DECu;
    // 7F306DEC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306DF0:
    ctx->pc = 0x7F306DF0u;
    // 7F306DF0: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306DF4:
    ctx->pc = 0x7F306DF4u;
    // 7F306DF4: addi    r7, r5, -1052
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F306DF8:
    ctx->pc = 0x7F306DF8u;
    // 7F306DF8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306DFC:
    ctx->pc = 0x7F306DFCu;
    // 7F306DFC: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F306E00:
    ctx->pc = 0x7F306E00u;
    // 7F306E00: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306E04:
    ctx->pc = 0x7F306E04u;
    // 7F306E04: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306E08:
    ctx->pc = 0x7F306E08u;
    // 7F306E08: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306E0C:
    ctx->pc = 0x7F306E0Cu;
    // 7F306E0C: lwz     r9, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F306E10:
    ctx->pc = 0x7F306E10u;
    // 7F306E10: lwz     r8, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306E14:
    ctx->pc = 0x7F306E14u;
    // 7F306E14: stw     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306E18:
    ctx->pc = 0x7F306E18u;
    // 7F306E18: stw     r8, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306E1C:
    ctx->pc = 0x7F306E1Cu;
    // 7F306E1C: stw     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306E20:
    ctx->pc = 0x7F306E20u;
    // 7F306E20: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306E24:
    ctx->pc = 0x7F306E24u;
    // 7F306E24: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306E28:
    ctx->pc = 0x7F306E28u;
    // 7F306E28: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306E2C:
    ctx->pc = 0x7F306E2Cu;
    // 7F306E2C: stw     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306E30:
    ctx->pc = 0x7F306E30u;
    // 7F306E30: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306E34:
    ctx->pc = 0x7F306E34u;
    // 7F306E34: bl      0x7F114508
    {
            ctx->lr = 0x7F306E38u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F306E38:
    ctx->pc = 0x7F306E38u;
    ctx->downcount -= 24;
    // 7F306E38: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306E3C:
    ctx->pc = 0x7F306E3Cu;
    // 7F306E3C: lwz     r6, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306E40:
    ctx->pc = 0x7F306E40u;
    // 7F306E40: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F306E44:
    ctx->pc = 0x7F306E44u;
    // 7F306E44: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306E48:
    ctx->pc = 0x7F306E48u;
    // 7F306E48: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306E4C:
    ctx->pc = 0x7F306E4Cu;
    // 7F306E4C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F306E50:
    ctx->pc = 0x7F306E50u;
    // 7F306E50: addi    r9, r3, -1068
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F306E54:
    ctx->pc = 0x7F306E54u;
    // 7F306E54: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306E58:
    ctx->pc = 0x7F306E58u;
    // 7F306E58: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F306E5C:
    ctx->pc = 0x7F306E5Cu;
    // 7F306E5C: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F306E60:
    ctx->pc = 0x7F306E60u;
    // 7F306E60: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306E64:
    ctx->pc = 0x7F306E64u;
    // 7F306E64: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306E68:
    ctx->pc = 0x7F306E68u;
    // 7F306E68: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F306E6C:
    ctx->pc = 0x7F306E6Cu;
    // 7F306E6C: lwz     r11, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F306E70:
    ctx->pc = 0x7F306E70u;
    // 7F306E70: lwz     r10, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F306E74:
    ctx->pc = 0x7F306E74u;
    // 7F306E74: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306E78:
    ctx->pc = 0x7F306E78u;
    // 7F306E78: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306E7C:
    ctx->pc = 0x7F306E7Cu;
    // 7F306E7C: stw     r11, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F306E80:
    ctx->pc = 0x7F306E80u;
    // 7F306E80: stw     r10, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F306E84:
    ctx->pc = 0x7F306E84u;
    // 7F306E84: stw     r8, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F306E88:
    ctx->pc = 0x7F306E88u;
    // 7F306E88: stw     r7, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F306E8C:
    ctx->pc = 0x7F306E8Cu;
    // 7F306E8C: stw     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F306E90:
    ctx->pc = 0x7F306E90u;
    // 7F306E90: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306E94:
    ctx->pc = 0x7F306E94u;
    // 7F306E94: bl      0x7F114508
    {
            ctx->lr = 0x7F306E98u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F306E98:
    ctx->pc = 0x7F306E98u;
    ctx->downcount -= 13;
    // 7F306E98: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306E9C:
    ctx->pc = 0x7F306E9Cu;
    // 7F306E9C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306EA0:
    ctx->pc = 0x7F306EA0u;
    // 7F306EA0: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F306EA4:
    ctx->pc = 0x7F306EA4u;
    // 7F306EA4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306EA8:
    ctx->pc = 0x7F306EA8u;
    // 7F306EA8: mulli   r5, r0, 324
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F306EAC:
    ctx->pc = 0x7F306EACu;
    // 7F306EAC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F306EB0:
    ctx->pc = 0x7F306EB0u;
    // 7F306EB0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F306EB4:
    ctx->pc = 0x7F306EB4u;
    // 7F306EB4: add   r3, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F306EB8:
    ctx->pc = 0x7F306EB8u;
    // 7F306EB8: addi    r5, r3, 440
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(440);

label_7F306EBC:
    ctx->pc = 0x7F306EBCu;
    // 7F306EBC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306EC0:
    loop_7F306EC0(ctx);
    if (ctx->pc == 0x7F306ED4u) goto label_7F306ED4;
    return;
label_7F306EC4:
    ctx->pc = 0x7F306EC4u;
    // 7F306EC4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F306EC8:
    ctx->pc = 0x7F306EC8u;
    // 7F306EC8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306ECC:
    ctx->pc = 0x7F306ECCu;
    // 7F306ECC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F306ED0:
    // 7F306ED0: bc    16, 0, 0x7F306EC0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306EC0u;
                return;
            }
            goto label_7F306EC0;
        }
    }

label_7F306ED4:
    ctx->pc = 0x7F306ED4u;
    ctx->downcount -= 33;
    // 7F306ED4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306ED8:
    ctx->pc = 0x7F306ED8u;
    // 7F306ED8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F306EDC:
    ctx->pc = 0x7F306EDCu;
    // 7F306EDC: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F306EE0:
    ctx->pc = 0x7F306EE0u;
    // 7F306EE0: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F306EE4:
    ctx->pc = 0x7F306EE4u;
    // 7F306EE4: mulli   r5, r0, 324
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F306EE8:
    ctx->pc = 0x7F306EE8u;
    // 7F306EE8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306EEC:
    ctx->pc = 0x7F306EECu;
    // 7F306EEC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306EF0:
    ctx->pc = 0x7F306EF0u;
    // 7F306EF0: addi    r5, r5, 492
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(492);

label_7F306EF4:
    ctx->pc = 0x7F306EF4u;
    // 7F306EF4: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F306EF8:
    ctx->pc = 0x7F306EF8u;
    // 7F306EF8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306EFC:
    ctx->pc = 0x7F306EFCu;
    // 7F306EFC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306F00:
    ctx->pc = 0x7F306F00u;
    // 7F306F00: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F306F04:
    ctx->pc = 0x7F306F04u;
    // 7F306F04: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306F08:
    ctx->pc = 0x7F306F08u;
    // 7F306F08: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F306F0C:
    ctx->pc = 0x7F306F0Cu;
    // 7F306F0C: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306F10:
    ctx->pc = 0x7F306F10u;
    // 7F306F10: lmw     r27, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F306F14:
    ctx->pc = 0x7F306F14u;
    // 7F306F14: lwz     r0, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306F18:
    ctx->pc = 0x7F306F18u;
    // 7F306F18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306F1C:
    ctx->pc = 0x7F306F1Cu;
    // 7F306F1C: addi    r1, r1, 336
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(336);

label_7F306F20:
    ctx->pc = 0x7F306F20u;
    // 7F306F20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306F24:
    ctx->pc = 0x7F306F24u;
    ctx->downcount -= 7;
    // 7F306F24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F306F28:
    ctx->pc = 0x7F306F28u;
    // 7F306F28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306F2C:
    ctx->pc = 0x7F306F2Cu;
    // 7F306F2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306F30:
    ctx->pc = 0x7F306F30u;
    // 7F306F30: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F306F34:
    ctx->pc = 0x7F306F34u;
    // 7F306F34: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F306F38:
    ctx->pc = 0x7F306F38u;
    // 7F306F38: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F306F3C:
    ctx->pc = 0x7F306F3Cu;
    // 7F306F3C: bl      0x7F1146A0
    {
            ctx->lr = 0x7F306F40u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F306F40:
    ctx->pc = 0x7F306F40u;
    ctx->downcount -= 5;
    // 7F306F40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306F44:
    ctx->pc = 0x7F306F44u;
    // 7F306F44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306F48:
    ctx->pc = 0x7F306F48u;
    // 7F306F48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F306F4C:
    ctx->pc = 0x7F306F4Cu;
    // 7F306F4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306F50:
    ctx->pc = 0x7F306F50u;
    ctx->downcount -= 7;
    // 7F306F50: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F306F54:
    ctx->pc = 0x7F306F54u;
    // 7F306F54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F306F58:
    ctx->pc = 0x7F306F58u;
    // 7F306F58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306F5C:
    ctx->pc = 0x7F306F5Cu;
    // 7F306F5C: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306F5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F306F60:
    ctx->pc = 0x7F306F60u;
    // 7F306F60: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F306F60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F306F60u);
        if (ctx->exception) return;
    }

label_7F306F64:
    ctx->pc = 0x7F306F64u;
    // 7F306F64: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F306F64u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F306F68:
    ctx->pc = 0x7F306F68u;
    // 7F306F68: bl      0x80006668
    {
            ctx->lr = 0x7F306F6Cu;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F306F6C:
    ctx->pc = 0x7F306F6Cu;
    ctx->downcount -= 4;
    // 7F306F6C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306F70:
    ctx->pc = 0x7F306F70u;
    // 7F306F70: lfs     f0, -32232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306F70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F306F74:
    ctx->pc = 0x7F306F74u;
    // 7F306F74: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F306F74u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F306F78:
    ctx->pc = 0x7F306F78u;
    // 7F306F78: bc    12, 2, 0x7F306F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F306F84;
        }
    }

label_7F306F7C:
    ctx->pc = 0x7F306F7Cu;
    ctx->downcount -= 18;
    // 7F306F7C: fdivs   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F306F7Cu)) return;
    ppc_fdivs(ctx, 1, 31, 1);

label_7F306F80:
    ctx->pc = 0x7F306F80u;
    // 7F306F80: b       0x7F306F8C
    {
            goto label_7F306F8C;
    }

label_7F306F84:
    ctx->pc = 0x7F306F84u;
    ctx->downcount -= 2;
    // 7F306F84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F306F88:
    ctx->pc = 0x7F306F88u;
    // 7F306F88: lfs     f1, -32184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F306F88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F306F8C:
    ctx->pc = 0x7F306F8Cu;
    ctx->downcount -= 7;
    // 7F306F8C: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F306F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F306F8Cu);
        if (ctx->exception) return;
    }

label_7F306F90:
    ctx->pc = 0x7F306F90u;
    // 7F306F90: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F306F94:
    ctx->pc = 0x7F306F94u;
    // 7F306F94: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F306F94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F306F98:
    ctx->pc = 0x7F306F98u;
    // 7F306F98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F306F9C:
    ctx->pc = 0x7F306F9Cu;
    // 7F306F9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F306FA0:
    ctx->pc = 0x7F306FA0u;
    // 7F306FA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306FA4:
    ctx->pc = 0x7F306FA4u;
    ctx->downcount -= 18;
    // 7F306FA4: lis     r8, 32585
    ctx->gpr[8] = ((u32)(s32)(32585) << 16);

label_7F306FA8:
    ctx->pc = 0x7F306FA8u;
    // 7F306FA8: addi    r7, r3, 144
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(144);

label_7F306FAC:
    ctx->pc = 0x7F306FACu;
    // 7F306FAC: addi    r8, r8, 14256
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(14256);

label_7F306FB0:
    ctx->pc = 0x7F306FB0u;
    // 7F306FB0: addi    r12, r3, 16
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(16);

label_7F306FB4:
    ctx->pc = 0x7F306FB4u;
    // 7F306FB4: lwz     r9, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F306FB8:
    ctx->pc = 0x7F306FB8u;
    // 7F306FB8: addi    r0, r7, 3
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(3);

label_7F306FBC:
    ctx->pc = 0x7F306FBCu;
    // 7F306FBC: lwz     r10, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F306FC0:
    ctx->pc = 0x7F306FC0u;
    // 7F306FC0: subf   r0, r12, r0
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F306FC4:
    ctx->pc = 0x7F306FC4u;
    // 7F306FC4: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_7F306FC8:
    ctx->pc = 0x7F306FC8u;
    // 7F306FC8: li      r11, 1
    ctx->gpr[11] = (u32)(s32)(1);

label_7F306FCC:
    ctx->pc = 0x7F306FCCu;
    // 7F306FCC: stw     r9, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F306FD0:
    ctx->pc = 0x7F306FD0u;
    // 7F306FD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F306FD4:
    ctx->pc = 0x7F306FD4u;
    // 7F306FD4: stw     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F306FD8:
    ctx->pc = 0x7F306FD8u;
    // 7F306FD8: stw     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F306FDC:
    ctx->pc = 0x7F306FDCu;
    // 7F306FDC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F306FE0:
    ctx->pc = 0x7F306FE0u;
    // 7F306FE0: cmplw   r12, r7
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F306FE4:
    ctx->pc = 0x7F306FE4u;
    // 7F306FE4: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F306FE8:
    ctx->downcount -= 2;
    // 7F306FE8: and.   r0, r9, r11
    {
        ctx->gpr[0] = ctx->gpr[9] & ctx->gpr[11];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F306FEC:
    // 7F306FEC: bc    12, 2, 0x7F307034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307034;
        }
    }

label_7F306FF0:
    ctx->pc = 0x7F306FF0u;
    ctx->downcount -= 6;
    // 7F306FF0: lwz     r7, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F306FF4:
    // 7F306FF4: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F306FF8:
    ctx->pc = 0x7F306FF8u;
    // 7F306FF8: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F306FFC:
    ctx->pc = 0x7F306FFCu;
    // 7F306FFC: lwz     r7, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F307000:
    // 7F307000: cmpw    r7, r4
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307004:
    // 7F307004: bc    4, 1, 0x7F307038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307038;
        }
    }

label_7F307008:
    ctx->downcount -= 2;
    // 7F307008: cmpwi   r6, 0
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

label_7F30700C:
    // 7F30700C: bc    4, 2, 0x7F307028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307028;
        }
    }

label_7F307010:
    ctx->downcount -= 6;
    // 7F307010: subf   r0, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F307014:
    ctx->pc = 0x7F307014u;
    // 7F307014: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307018:
    ctx->pc = 0x7F307018u;
    // 7F307018: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30701C:
    // 7F30701C: or   r0, r0, r11
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[11];
    }

label_7F307020:
    ctx->pc = 0x7F307020u;
    // 7F307020: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307024:
    // 7F307024: b       0x7F307038
    {
            goto label_7F307038;
    }

label_7F307028:
    ctx->downcount -= 3;
    // 7F307028: addi    r0, r7, -1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-1);

label_7F30702C:
    ctx->pc = 0x7F30702Cu;
    // 7F30702C: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307030:
    // 7F307030: b       0x7F307038
    {
            goto label_7F307038;
    }

label_7F307034:
    ctx->pc = 0x7F307034u;
    ctx->downcount -= 1;
    // 7F307034: stw     r8, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F307038:
    ctx->downcount -= 3;
    // 7F307038: rlwinm r11, r11, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 1u) & 0xFFFFFFFEu;
    }

label_7F30703C:
    // 7F30703C: addi    r12, r12, 4
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(4);

label_7F307040:
    // 7F307040: bc    16, 0, 0x7F306FE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306FE8u;
                return;
            }
            goto label_7F306FE8;
        }
    }

label_7F307044:
    ctx->pc = 0x7F307044u;
    ctx->downcount -= 1;
    // 7F307044: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307048:
    ctx->pc = 0x7F307048u;
    ctx->downcount -= 8;
    // 7F307048: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30704C:
    ctx->pc = 0x7F30704Cu;
    // 7F30704C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307050:
    ctx->pc = 0x7F307050u;
    // 7F307050: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307054:
    ctx->pc = 0x7F307054u;
    // 7F307054: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F307058:
    ctx->pc = 0x7F307058u;
    // 7F307058: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30705C:
    ctx->pc = 0x7F30705Cu;
    // 7F30705C: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307060:
    ctx->pc = 0x7F307060u;
    // 7F307060: cmpwi   r0, 0
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

label_7F307064:
    ctx->pc = 0x7F307064u;
    // 7F307064: bc    4, 2, 0x7F307344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307344;
        }
    }

label_7F307068:
    ctx->pc = 0x7F307068u;
    ctx->downcount -= 4;
    // 7F307068: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30706C:
    ctx->pc = 0x7F30706Cu;
    // 7F30706C: andi.   r0, r0, 0x50A0
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x50A0u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307070:
    ctx->pc = 0x7F307070u;
    // 7F307070: cmpwi   r0, 64
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307074:
    ctx->pc = 0x7F307074u;
    // 7F307074: bc    12, 2, 0x7F307174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307174;
        }
    }

label_7F307078:
    ctx->pc = 0x7F307078u;
    ctx->downcount -= 1;
    // 7F307078: bc    4, 0, 0x7F3070A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3070A0;
        }
    }

label_7F30707C:
    ctx->pc = 0x7F30707Cu;
    ctx->downcount -= 2;
    // 7F30707C: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307080:
    ctx->pc = 0x7F307080u;
    // 7F307080: bc    12, 2, 0x7F307210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307210;
        }
    }

label_7F307084:
    ctx->pc = 0x7F307084u;
    ctx->downcount -= 1;
    // 7F307084: bc    4, 0, 0x7F307094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307094;
        }
    }

label_7F307088:
    ctx->pc = 0x7F307088u;
    ctx->downcount -= 2;
    // 7F307088: cmpwi   r0, 8
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30708C:
    ctx->pc = 0x7F30708Cu;
    // 7F30708C: bc    12, 2, 0x7F307158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307158;
        }
    }

label_7F307090:
    ctx->pc = 0x7F307090u;
    ctx->downcount -= 1;
    // 7F307090: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F307094:
    ctx->pc = 0x7F307094u;
    ctx->downcount -= 2;
    // 7F307094: cmpwi   r0, 32
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307098:
    ctx->pc = 0x7F307098u;
    // 7F307098: bc    12, 2, 0x7F3070C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3070C4;
        }
    }

label_7F30709C:
    ctx->pc = 0x7F30709Cu;
    ctx->downcount -= 1;
    // 7F30709C: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3070A0:
    ctx->pc = 0x7F3070A0u;
    ctx->downcount -= 2;
    // 7F3070A0: cmpwi   r0, 4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3070A4:
    ctx->pc = 0x7F3070A4u;
    // 7F3070A4: bc    12, 2, 0x7F3072B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3072B0;
        }
    }

label_7F3070A8:
    ctx->pc = 0x7F3070A8u;
    ctx->downcount -= 1;
    // 7F3070A8: bc    4, 0, 0x7F3070B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3070B8;
        }
    }

label_7F3070AC:
    ctx->pc = 0x7F3070ACu;
    ctx->downcount -= 2;
    // 7F3070AC: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3070B0:
    ctx->pc = 0x7F3070B0u;
    // 7F3070B0: bc    12, 2, 0x7F3070E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3070E8;
        }
    }

label_7F3070B4:
    ctx->pc = 0x7F3070B4u;
    ctx->downcount -= 1;
    // 7F3070B4: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3070B8:
    ctx->pc = 0x7F3070B8u;
    ctx->downcount -= 2;
    // 7F3070B8: cmpwi   r0, 16384
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3070BC:
    ctx->pc = 0x7F3070BCu;
    // 7F3070BC: bc    12, 2, 0x7F3072FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3072FC;
        }
    }

label_7F3070C0:
    ctx->pc = 0x7F3070C0u;
    ctx->downcount -= 1;
    // 7F3070C0: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3070C4:
    ctx->pc = 0x7F3070C4u;
    ctx->downcount -= 7;
    // 7F3070C4: lis     r4, 23
    ctx->gpr[4] = ((u32)(s32)(23) << 16);

label_7F3070C8:
    ctx->pc = 0x7F3070C8u;
    // 7F3070C8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3070CC:
    ctx->pc = 0x7F3070CCu;
    // 7F3070CC: addi    r0, r4, 28817
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28817);

label_7F3070D0:
    ctx->pc = 0x7F3070D0u;
    // 7F3070D0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3070D4:
    ctx->pc = 0x7F3070D4u;
    // 7F3070D4: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3070D8:
    ctx->pc = 0x7F3070D8u;
    // 7F3070D8: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F3070DC:
    ctx->pc = 0x7F3070DCu;
    // 7F3070DC: bl      0x7F011698
    {
            ctx->lr = 0x7F3070E0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3070E0:
    ctx->pc = 0x7F3070E0u;
    ctx->downcount -= 2;
    // 7F3070E0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3070E4:
    ctx->pc = 0x7F3070E4u;
    // 7F3070E4: b       0x7F307348
    {
            goto label_7F307348;
    }

label_7F3070E8:
    ctx->pc = 0x7F3070E8u;
    ctx->downcount -= 9;
    // 7F3070E8: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3070EC:
    ctx->pc = 0x7F3070ECu;
    // 7F3070EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3070F0:
    ctx->pc = 0x7F3070F0u;
    // 7F3070F0: addi    r3, r3, -32176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32176);

label_7F3070F4:
    ctx->pc = 0x7F3070F4u;
    // 7F3070F4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3070F8:
    ctx->pc = 0x7F3070F8u;
    // 7F3070F8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3070FC:
    ctx->pc = 0x7F3070FCu;
    // 7F3070FC: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307100:
    ctx->pc = 0x7F307100u;
    // 7F307100: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307104:
    ctx->pc = 0x7F307104u;
    // 7F307104: cmpwi   r0, 1
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

label_7F307108:
    ctx->pc = 0x7F307108u;
    // 7F307108: bc    12, 2, 0x7F307130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307130;
        }
    }

label_7F30710C:
    ctx->pc = 0x7F30710Cu;
    ctx->downcount -= 1;
    // 7F30710C: bc    4, 0, 0x7F30711C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30711C;
        }
    }

label_7F307110:
    ctx->pc = 0x7F307110u;
    ctx->downcount -= 2;
    // 7F307110: cmpwi   r0, 0
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

label_7F307114:
    ctx->pc = 0x7F307114u;
    // 7F307114: bc    4, 0, 0x7F307124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307124;
        }
    }

label_7F307118:
    ctx->pc = 0x7F307118u;
    ctx->downcount -= 1;
    // 7F307118: b       0x7F307130
    {
            goto label_7F307130;
    }

label_7F30711C:
    ctx->pc = 0x7F30711Cu;
    ctx->downcount -= 2;
    // 7F30711C: cmpwi   r0, 3
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

label_7F307120:
    ctx->pc = 0x7F307120u;
    // 7F307120: bc    4, 0, 0x7F307130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307130;
        }
    }

label_7F307124:
    ctx->pc = 0x7F307124u;
    ctx->downcount -= 3;
    // 7F307124: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307128:
    ctx->pc = 0x7F307128u;
    // 7F307128: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30712C:
    ctx->pc = 0x7F30712Cu;
    // 7F30712C: b       0x7F307140
    {
            goto label_7F307140;
    }

label_7F307130:
    ctx->pc = 0x7F307130u;
    ctx->downcount -= 2;
    // 7F307130: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F307134:
    ctx->pc = 0x7F307134u;
    // 7F307134: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F307138u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F307138:
    ctx->pc = 0x7F307138u;
    ctx->downcount -= 2;
    // 7F307138: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F30713C:
    ctx->pc = 0x7F30713Cu;
    // 7F30713C: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307140:
    ctx->pc = 0x7F307140u;
    ctx->downcount -= 4;
    // 7F307140: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F307144:
    ctx->pc = 0x7F307144u;
    // 7F307144: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F307148:
    ctx->pc = 0x7F307148u;
    // 7F307148: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30714C:
    ctx->pc = 0x7F30714Cu;
    // 7F30714C: bl      0x7F011698
    {
            ctx->lr = 0x7F307150u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F307150:
    ctx->pc = 0x7F307150u;
    ctx->downcount -= 2;
    // 7F307150: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F307154:
    ctx->pc = 0x7F307154u;
    // 7F307154: b       0x7F307348
    {
            goto label_7F307348;
    }

label_7F307158:
    ctx->pc = 0x7F307158u;
    ctx->downcount -= 7;
    // 7F307158: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30715C:
    ctx->pc = 0x7F30715Cu;
    // 7F30715C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F307160:
    ctx->pc = 0x7F307160u;
    // 7F307160: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307164:
    ctx->pc = 0x7F307164u;
    // 7F307164: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307168:
    ctx->pc = 0x7F307168u;
    // 7F307168: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F30716C:
    ctx->pc = 0x7F30716Cu;
    // 7F30716C: sth     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F307170:
    ctx->pc = 0x7F307170u;
    // 7F307170: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F307174:
    ctx->pc = 0x7F307174u;
    ctx->downcount -= 1;
    // 7F307174: bl      0x7F31225C
    {
            ctx->lr = 0x7F307178u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F307178:
    ctx->pc = 0x7F307178u;
    ctx->downcount -= 6;
    // 7F307178: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30717C:
    ctx->pc = 0x7F30717Cu;
    // 7F30717C: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F307180:
    ctx->pc = 0x7F307180u;
    // 7F307180: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307184:
    ctx->pc = 0x7F307184u;
    // 7F307184: lha     r0, 5554(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307188:
    ctx->pc = 0x7F307188u;
    // 7F307188: rlwinm. r0, r0, 0, 31, 31
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

label_7F30718C:
    ctx->pc = 0x7F30718Cu;
    // 7F30718C: bc    12, 2, 0x7F307344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307344;
        }
    }

label_7F307190:
    ctx->pc = 0x7F307190u;
    ctx->downcount -= 3;
    // 7F307190: rlwinm. r0, r3, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307194:
    ctx->pc = 0x7F307194u;
    // 7F307194: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F307198:
    ctx->pc = 0x7F307198u;
    // 7F307198: bc    12, 2, 0x7F3071EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3071EC;
        }
    }

label_7F30719C:
    ctx->pc = 0x7F30719Cu;
    ctx->downcount -= 2;
    // 7F30719C: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3071A0:
    ctx->pc = 0x7F3071A0u;
    // 7F3071A0: bc    12, 2, 0x7F3071C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3071C8;
        }
    }

label_7F3071A4:
    ctx->pc = 0x7F3071A4u;
    ctx->downcount -= 3;
    // 7F3071A4: rlwinm r0, r3, 0, 28, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFCFu;
    }

label_7F3071A8:
    ctx->pc = 0x7F3071A8u;
    // 7F3071A8: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3071AC:
    ctx->pc = 0x7F3071ACu;
    // 7F3071AC: bl      0x7F31226C
    {
            ctx->lr = 0x7F3071B0u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F3071B0:
    ctx->pc = 0x7F3071B0u;
    ctx->downcount -= 6;
    // 7F3071B0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3071B4:
    ctx->pc = 0x7F3071B4u;
    // 7F3071B4: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3071B8:
    ctx->pc = 0x7F3071B8u;
    // 7F3071B8: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3071BC:
    ctx->pc = 0x7F3071BCu;
    // 7F3071BC: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F3071C0:
    ctx->pc = 0x7F3071C0u;
    // 7F3071C0: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3071C4:
    ctx->pc = 0x7F3071C4u;
    // 7F3071C4: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3071C8:
    ctx->pc = 0x7F3071C8u;
    ctx->downcount -= 3;
    // 7F3071C8: ori     r0, r3, 0x0020
    ctx->gpr[0] = ctx->gpr[3] | 0x0020u;

label_7F3071CC:
    ctx->pc = 0x7F3071CCu;
    // 7F3071CC: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3071D0:
    ctx->pc = 0x7F3071D0u;
    // 7F3071D0: bl      0x7F31226C
    {
            ctx->lr = 0x7F3071D4u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F3071D4:
    ctx->pc = 0x7F3071D4u;
    ctx->downcount -= 6;
    // 7F3071D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3071D8:
    ctx->pc = 0x7F3071D8u;
    // 7F3071D8: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3071DC:
    ctx->pc = 0x7F3071DCu;
    // 7F3071DC: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3071E0:
    ctx->pc = 0x7F3071E0u;
    // 7F3071E0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3071E4:
    ctx->pc = 0x7F3071E4u;
    // 7F3071E4: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3071E8:
    ctx->pc = 0x7F3071E8u;
    // 7F3071E8: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3071EC:
    ctx->pc = 0x7F3071ECu;
    ctx->downcount -= 3;
    // 7F3071EC: ori     r0, r3, 0x0010
    ctx->gpr[0] = ctx->gpr[3] | 0x0010u;

label_7F3071F0:
    ctx->pc = 0x7F3071F0u;
    // 7F3071F0: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3071F4:
    ctx->pc = 0x7F3071F4u;
    // 7F3071F4: bl      0x7F31226C
    {
            ctx->lr = 0x7F3071F8u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F3071F8:
    ctx->pc = 0x7F3071F8u;
    ctx->downcount -= 6;
    // 7F3071F8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3071FC:
    ctx->pc = 0x7F3071FCu;
    // 7F3071FC: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307200:
    ctx->pc = 0x7F307200u;
    // 7F307200: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307204:
    ctx->pc = 0x7F307204u;
    // 7F307204: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F307208:
    ctx->pc = 0x7F307208u;
    // 7F307208: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F30720C:
    ctx->pc = 0x7F30720Cu;
    // 7F30720C: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F307210:
    ctx->pc = 0x7F307210u;
    ctx->downcount -= 1;
    // 7F307210: bl      0x7F31225C
    {
            ctx->lr = 0x7F307214u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F307214:
    ctx->pc = 0x7F307214u;
    ctx->downcount -= 7;
    // 7F307214: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F307218:
    ctx->pc = 0x7F307218u;
    // 7F307218: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30721C:
    ctx->pc = 0x7F30721Cu;
    // 7F30721C: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F307220:
    ctx->pc = 0x7F307220u;
    // 7F307220: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307224:
    ctx->pc = 0x7F307224u;
    // 7F307224: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307228:
    ctx->pc = 0x7F307228u;
    // 7F307228: rlwinm. r0, r0, 0, 31, 31
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

label_7F30722C:
    ctx->pc = 0x7F30722Cu;
    // 7F30722C: bc    12, 2, 0x7F307344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307344;
        }
    }

label_7F307230:
    ctx->pc = 0x7F307230u;
    ctx->downcount -= 1;
    // 7F307230: bl      0x7F31225C
    {
            ctx->lr = 0x7F307234u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F307234:
    ctx->pc = 0x7F307234u;
    ctx->downcount -= 2;
    // 7F307234: rlwinm. r0, r3, 0, 25, 25
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

label_7F307238:
    ctx->pc = 0x7F307238u;
    // 7F307238: bc    12, 2, 0x7F30728C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30728C;
        }
    }

label_7F30723C:
    ctx->pc = 0x7F30723Cu;
    ctx->downcount -= 1;
    // 7F30723C: bl      0x7F31225C
    {
            ctx->lr = 0x7F307240u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F307240:
    ctx->pc = 0x7F307240u;
    ctx->downcount -= 2;
    // 7F307240: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307244:
    ctx->pc = 0x7F307244u;
    // 7F307244: bc    12, 2, 0x7F307268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307268;
        }
    }

label_7F307248:
    ctx->pc = 0x7F307248u;
    ctx->downcount -= 2;
    // 7F307248: rlwinm r3, r31, 0, 26, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000003Fu;
    }

label_7F30724C:
    ctx->pc = 0x7F30724Cu;
    // 7F30724C: bl      0x7F31226C
    {
            ctx->lr = 0x7F307250u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F307250:
    ctx->pc = 0x7F307250u;
    ctx->downcount -= 6;
    // 7F307250: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F307254:
    ctx->pc = 0x7F307254u;
    // 7F307254: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307258:
    ctx->pc = 0x7F307258u;
    // 7F307258: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30725C:
    ctx->pc = 0x7F30725Cu;
    // 7F30725C: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F307260:
    ctx->pc = 0x7F307260u;
    // 7F307260: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F307264:
    ctx->pc = 0x7F307264u;
    // 7F307264: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F307268:
    ctx->pc = 0x7F307268u;
    ctx->downcount -= 3;
    // 7F307268: ori     r0, r31, 0x0080
    ctx->gpr[0] = ctx->gpr[31] | 0x0080u;

label_7F30726C:
    ctx->pc = 0x7F30726Cu;
    // 7F30726C: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F307270:
    ctx->pc = 0x7F307270u;
    // 7F307270: bl      0x7F31226C
    {
            ctx->lr = 0x7F307274u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F307274:
    ctx->pc = 0x7F307274u;
    ctx->downcount -= 6;
    // 7F307274: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F307278:
    ctx->pc = 0x7F307278u;
    // 7F307278: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30727C:
    ctx->pc = 0x7F30727Cu;
    // 7F30727C: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307280:
    ctx->pc = 0x7F307280u;
    // 7F307280: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F307284:
    ctx->pc = 0x7F307284u;
    // 7F307284: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F307288:
    ctx->pc = 0x7F307288u;
    // 7F307288: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F30728C:
    ctx->pc = 0x7F30728Cu;
    ctx->downcount -= 3;
    // 7F30728C: ori     r0, r31, 0x0040
    ctx->gpr[0] = ctx->gpr[31] | 0x0040u;

label_7F307290:
    ctx->pc = 0x7F307290u;
    // 7F307290: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F307294:
    ctx->pc = 0x7F307294u;
    // 7F307294: bl      0x7F31226C
    {
            ctx->lr = 0x7F307298u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F307298:
    ctx->pc = 0x7F307298u;
    ctx->downcount -= 6;
    // 7F307298: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30729C:
    ctx->pc = 0x7F30729Cu;
    // 7F30729C: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3072A0:
    ctx->pc = 0x7F3072A0u;
    // 7F3072A0: lha     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3072A4:
    ctx->pc = 0x7F3072A4u;
    // 7F3072A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3072A8:
    ctx->pc = 0x7F3072A8u;
    // 7F3072A8: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3072AC:
    ctx->pc = 0x7F3072ACu;
    // 7F3072AC: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3072B0:
    ctx->pc = 0x7F3072B0u;
    ctx->downcount -= 12;
    // 7F3072B0: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3072B4:
    ctx->pc = 0x7F3072B4u;
    // 7F3072B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3072B8:
    ctx->pc = 0x7F3072B8u;
    // 7F3072B8: addi    r3, r3, -32156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32156);

label_7F3072BC:
    ctx->pc = 0x7F3072BCu;
    // 7F3072BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3072C0:
    ctx->pc = 0x7F3072C0u;
    // 7F3072C0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3072C4:
    ctx->pc = 0x7F3072C4u;
    // 7F3072C4: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3072C8:
    ctx->pc = 0x7F3072C8u;
    // 7F3072C8: lwz     r3, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3072CC:
    ctx->pc = 0x7F3072CCu;
    // 7F3072CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3072D0:
    ctx->pc = 0x7F3072D0u;
    // 7F3072D0: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3072D4:
    ctx->pc = 0x7F3072D4u;
    // 7F3072D4: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3072D8:
    ctx->pc = 0x7F3072D8u;
    // 7F3072D8: cmpwi   r0, 0
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

label_7F3072DC:
    ctx->pc = 0x7F3072DCu;
    // 7F3072DC: bc    4, 0, 0x7F3072E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3072E8;
        }
    }

label_7F3072E0:
    ctx->pc = 0x7F3072E0u;
    ctx->downcount -= 2;
    // 7F3072E0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3072E4:
    ctx->pc = 0x7F3072E4u;
    // 7F3072E4: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3072E8:
    ctx->pc = 0x7F3072E8u;
    ctx->downcount -= 4;
    // 7F3072E8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3072EC:
    ctx->pc = 0x7F3072ECu;
    // 7F3072EC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3072F0:
    ctx->pc = 0x7F3072F0u;
    // 7F3072F0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F3072F4:
    ctx->pc = 0x7F3072F4u;
    // 7F3072F4: bl      0x7F011698
    {
            ctx->lr = 0x7F3072F8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3072F8:
    ctx->pc = 0x7F3072F8u;
    ctx->downcount -= 1;
    // 7F3072F8: b       0x7F307344
    {
            goto label_7F307344;
    }

label_7F3072FC:
    ctx->pc = 0x7F3072FCu;
    ctx->downcount -= 12;
    // 7F3072FC: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307300:
    ctx->pc = 0x7F307300u;
    // 7F307300: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F307304:
    ctx->pc = 0x7F307304u;
    // 7F307304: addi    r3, r3, -32136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32136);

label_7F307308:
    ctx->pc = 0x7F307308u;
    // 7F307308: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30730C:
    ctx->pc = 0x7F30730Cu;
    // 7F30730C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307310:
    ctx->pc = 0x7F307310u;
    // 7F307310: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307314:
    ctx->pc = 0x7F307314u;
    // 7F307314: lwz     r3, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307318:
    ctx->pc = 0x7F307318u;
    // 7F307318: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30731C:
    ctx->pc = 0x7F30731Cu;
    // 7F30731C: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307320:
    ctx->pc = 0x7F307320u;
    // 7F307320: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307324:
    ctx->pc = 0x7F307324u;
    // 7F307324: cmpwi   r0, 4
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

label_7F307328:
    ctx->pc = 0x7F307328u;
    // 7F307328: bc    4, 1, 0x7F307334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307334;
        }
    }

label_7F30732C:
    ctx->pc = 0x7F30732Cu;
    ctx->downcount -= 2;
    // 7F30732C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307330:
    ctx->pc = 0x7F307330u;
    // 7F307330: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307334:
    ctx->pc = 0x7F307334u;
    ctx->downcount -= 4;
    // 7F307334: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F307338:
    ctx->pc = 0x7F307338u;
    // 7F307338: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30733C:
    ctx->pc = 0x7F30733Cu;
    // 7F30733C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F307340:
    ctx->pc = 0x7F307340u;
    // 7F307340: bl      0x7F011698
    {
            ctx->lr = 0x7F307344u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F307344:
    ctx->pc = 0x7F307344u;
    ctx->downcount -= 1;
    // 7F307344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307348:
    ctx->pc = 0x7F307348u;
    ctx->downcount -= 6;
    // 7F307348: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30734C:
    ctx->pc = 0x7F30734Cu;
    // 7F30734C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307350:
    ctx->pc = 0x7F307350u;
    // 7F307350: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307354:
    ctx->pc = 0x7F307354u;
    // 7F307354: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307358:
    ctx->pc = 0x7F307358u;
    // 7F307358: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30735C:
    ctx->pc = 0x7F30735Cu;
    ctx->downcount -= 8;
    // 7F30735C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307360:
    ctx->pc = 0x7F307360u;
    // 7F307360: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307364:
    ctx->pc = 0x7F307364u;
    // 7F307364: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307368:
    ctx->pc = 0x7F307368u;
    // 7F307368: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30736C:
    ctx->pc = 0x7F30736Cu;
    // 7F30736C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307370:
    ctx->pc = 0x7F307370u;
    // 7F307370: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307374:
    ctx->pc = 0x7F307374u;
    // 7F307374: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307378:
    ctx->pc = 0x7F307378u;
    // 7F307378: bc    12, 2, 0x7F3073E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3073E0;
        }
    }

label_7F30737C:
    ctx->pc = 0x7F30737Cu;
    ctx->downcount -= 1;
    // 7F30737C: bc    4, 0, 0x7F307408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307408;
        }
    }

label_7F307380:
    ctx->pc = 0x7F307380u;
    ctx->downcount -= 2;
    // 7F307380: cmpwi   r0, 0
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

label_7F307384:
    ctx->pc = 0x7F307384u;
    // 7F307384: bc    12, 2, 0x7F30738C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30738C;
        }
    }

label_7F307388:
    ctx->pc = 0x7F307388u;
    ctx->downcount -= 1;
    // 7F307388: b       0x7F307408
    {
            goto label_7F307408;
    }

label_7F30738C:
    ctx->pc = 0x7F30738Cu;
    ctx->downcount -= 1;
    // 7F30738C: bl      0x7F307048
    {
            ctx->lr = 0x7F307390u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307048u;
                return;
            }
            goto label_7F307048;
    }

label_7F307390:
    ctx->pc = 0x7F307390u;
    ctx->downcount -= 2;
    // 7F307390: cmpwi   r3, 0
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

label_7F307394:
    ctx->pc = 0x7F307394u;
    // 7F307394: bc    12, 2, 0x7F307408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307408;
        }
    }

label_7F307398:
    ctx->pc = 0x7F307398u;
    ctx->downcount -= 1;
    // 7F307398: bc    4, 0, 0x7F3073A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3073A8;
        }
    }

label_7F30739C:
    ctx->pc = 0x7F30739Cu;
    ctx->downcount -= 2;
    // 7F30739C: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3073A0:
    ctx->pc = 0x7F3073A0u;
    // 7F3073A0: bc    4, 0, 0x7F3073C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3073C4;
        }
    }

label_7F3073A4:
    ctx->pc = 0x7F3073A4u;
    ctx->downcount -= 1;
    // 7F3073A4: b       0x7F307408
    {
            goto label_7F307408;
    }

label_7F3073A8:
    ctx->pc = 0x7F3073A8u;
    ctx->downcount -= 2;
    // 7F3073A8: cmpwi   r3, 2
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

label_7F3073AC:
    ctx->pc = 0x7F3073ACu;
    // 7F3073AC: bc    4, 0, 0x7F307408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307408;
        }
    }

label_7F3073B0:
    ctx->pc = 0x7F3073B0u;
    ctx->downcount -= 5;
    // 7F3073B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3073B4:
    ctx->pc = 0x7F3073B4u;
    // 7F3073B4: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F3073B8:
    ctx->pc = 0x7F3073B8u;
    // 7F3073B8: stw     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3073BC:
    ctx->pc = 0x7F3073BCu;
    // 7F3073BC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3073C0:
    ctx->pc = 0x7F3073C0u;
    // 7F3073C0: b       0x7F307408
    {
            goto label_7F307408;
    }

label_7F3073C4:
    ctx->pc = 0x7F3073C4u;
    ctx->downcount -= 6;
    // 7F3073C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3073C8:
    ctx->pc = 0x7F3073C8u;
    // 7F3073C8: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F3073CC:
    ctx->pc = 0x7F3073CCu;
    // 7F3073CC: stw     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3073D0:
    ctx->pc = 0x7F3073D0u;
    // 7F3073D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3073D4:
    ctx->pc = 0x7F3073D4u;
    // 7F3073D4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3073D8:
    ctx->pc = 0x7F3073D8u;
    // 7F3073D8: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F3073DCu;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F3073DC:
    ctx->pc = 0x7F3073DCu;
    ctx->downcount -= 1;
    // 7F3073DC: b       0x7F307408
    {
            goto label_7F307408;
    }

label_7F3073E0:
    ctx->pc = 0x7F3073E0u;
    ctx->downcount -= 3;
    // 7F3073E0: lwz     r4, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3073E4:
    ctx->pc = 0x7F3073E4u;
    // 7F3073E4: cmplwi  r4, 0x0000
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

label_7F3073E8:
    ctx->pc = 0x7F3073E8u;
    // 7F3073E8: bc    12, 2, 0x7F3073F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3073F8;
        }
    }

label_7F3073EC:
    ctx->pc = 0x7F3073ECu;
    ctx->downcount -= 3;
    // 7F3073EC: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F3073F0:
    ctx->pc = 0x7F3073F0u;
    // 7F3073F0: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3073F4:
    ctx->pc = 0x7F3073F4u;
    // 7F3073F4: b       0x7F307408
    {
            goto label_7F307408;
    }

label_7F3073F8:
    ctx->pc = 0x7F3073F8u;
    ctx->downcount -= 3;
    // 7F3073F8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3073FC:
    ctx->pc = 0x7F3073FCu;
    // 7F3073FC: cmpwi   r0, 0
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

label_7F307400:
    ctx->pc = 0x7F307400u;
    // 7F307400: bc    4, 2, 0x7F307408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307408;
        }
    }

label_7F307404:
    ctx->pc = 0x7F307404u;
    ctx->downcount -= 1;
    // 7F307404: bl      0x7F3C8210
    {
            ctx->lr = 0x7F307408u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F307408:
    ctx->pc = 0x7F307408u;
    ctx->downcount -= 6;
    // 7F307408: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30740C:
    ctx->pc = 0x7F30740Cu;
    // 7F30740C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307410:
    ctx->pc = 0x7F307410u;
    // 7F307410: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307414:
    ctx->pc = 0x7F307414u;
    // 7F307414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307418:
    ctx->pc = 0x7F307418u;
    // 7F307418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30741C:
    ctx->pc = 0x7F30741Cu;
    ctx->downcount -= 7;
    // 7F30741C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307420:
    ctx->pc = 0x7F307420u;
    // 7F307420: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307424:
    ctx->pc = 0x7F307424u;
    // 7F307424: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307428:
    ctx->pc = 0x7F307428u;
    // 7F307428: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30742C:
    ctx->pc = 0x7F30742Cu;
    // 7F30742C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307430:
    ctx->pc = 0x7F307430u;
    // 7F307430: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307434:
    ctx->pc = 0x7F307434u;
    // 7F307434: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F307438u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F307438:
    ctx->pc = 0x7F307438u;
    ctx->downcount -= 2;
    // 7F307438: cmpwi   r3, 0
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

label_7F30743C:
    ctx->pc = 0x7F30743Cu;
    // 7F30743C: bc    4, 2, 0x7F307470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307470;
        }
    }

label_7F307440:
    ctx->pc = 0x7F307440u;
    ctx->downcount -= 5;
    // 7F307440: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307444:
    ctx->pc = 0x7F307444u;
    // 7F307444: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307448:
    ctx->pc = 0x7F307448u;
    // 7F307448: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30744C:
    ctx->pc = 0x7F30744Cu;
    // 7F30744C: cmpwi   r4, 0
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

label_7F307450:
    ctx->pc = 0x7F307450u;
    // 7F307450: bc    12, 2, 0x7F307478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307478;
        }
    }

label_7F307454:
    ctx->pc = 0x7F307454u;
    ctx->downcount -= 2;
    // 7F307454: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307458:
    ctx->pc = 0x7F307458u;
    // 7F307458: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F30745Cu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F30745C:
    ctx->pc = 0x7F30745Cu;
    ctx->downcount -= 5;
    // 7F30745C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307460:
    ctx->pc = 0x7F307460u;
    // 7F307460: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307464:
    ctx->pc = 0x7F307464u;
    // 7F307464: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307468:
    ctx->pc = 0x7F307468u;
    // 7F307468: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30746C:
    ctx->pc = 0x7F30746Cu;
    // 7F30746C: b       0x7F307478
    {
            goto label_7F307478;
    }

label_7F307470:
    ctx->pc = 0x7F307470u;
    ctx->downcount -= 2;
    // 7F307470: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307474:
    ctx->pc = 0x7F307474u;
    // 7F307474: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307478:
    ctx->pc = 0x7F307478u;
    ctx->downcount -= 5;
    // 7F307478: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30747C:
    ctx->pc = 0x7F30747Cu;
    // 7F30747C: addi    r3, r31, 72
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(72);

label_7F307480:
    ctx->pc = 0x7F307480u;
    // 7F307480: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F307484:
    ctx->pc = 0x7F307484u;
    // 7F307484: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F307488:
    ctx->pc = 0x7F307488u;
    // 7F307488: bl      0x7F306FA4
    {
            ctx->lr = 0x7F30748Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F306FA4u;
                return;
            }
            goto label_7F306FA4;
    }

label_7F30748C:
    ctx->pc = 0x7F30748Cu;
    ctx->downcount -= 2;
    // 7F30748C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307490:
    ctx->pc = 0x7F307490u;
    // 7F307490: bl      0x7F30735C
    {
            ctx->lr = 0x7F307494u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30735Cu;
                return;
            }
            goto label_7F30735C;
    }

label_7F307494:
    ctx->pc = 0x7F307494u;
    ctx->downcount -= 6;
    // 7F307494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307498:
    ctx->pc = 0x7F307498u;
    // 7F307498: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30749C:
    ctx->pc = 0x7F30749Cu;
    // 7F30749C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3074A0:
    ctx->pc = 0x7F3074A0u;
    // 7F3074A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3074A4:
    ctx->pc = 0x7F3074A4u;
    // 7F3074A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3074A8:
    ctx->pc = 0x7F3074A8u;
    ctx->downcount -= 6;
    // 7F3074A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3074AC:
    ctx->pc = 0x7F3074ACu;
    // 7F3074AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3074B0:
    ctx->pc = 0x7F3074B0u;
    // 7F3074B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3074B4:
    ctx->pc = 0x7F3074B4u;
    // 7F3074B4: lwz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3074B8:
    ctx->pc = 0x7F3074B8u;
    // 7F3074B8: cmpwi   r5, 0
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

label_7F3074BC:
    ctx->pc = 0x7F3074BCu;
    // 7F3074BC: bc    12, 2, 0x7F3074F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3074F4;
        }
    }

label_7F3074C0:
    ctx->pc = 0x7F3074C0u;
    ctx->downcount -= 2;
    // 7F3074C0: cmpwi   r5, 1
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

label_7F3074C4:
    ctx->pc = 0x7F3074C4u;
    // 7F3074C4: bc    12, 2, 0x7F3074F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3074F4;
        }
    }

label_7F3074C8:
    ctx->pc = 0x7F3074C8u;
    ctx->downcount -= 11;
    // 7F3074C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3074CC:
    ctx->pc = 0x7F3074CCu;
    // 7F3074CC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3074D0:
    ctx->pc = 0x7F3074D0u;
    // 7F3074D0: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3074D4:
    ctx->pc = 0x7F3074D4u;
    // 7F3074D4: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3074D8:
    ctx->pc = 0x7F3074D8u;
    // 7F3074D8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3074DC:
    ctx->pc = 0x7F3074DCu;
    // 7F3074DC: lwz     r0, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3074E0:
    ctx->pc = 0x7F3074E0u;
    // 7F3074E0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3074E4:
    ctx->pc = 0x7F3074E4u;
    // 7F3074E4: lwz     r0, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3074E8:
    ctx->pc = 0x7F3074E8u;
    // 7F3074E8: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3074EC:
    ctx->pc = 0x7F3074ECu;
    // 7F3074EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3074F0:
    ctx->pc = 0x7F3074F0u;
    // 7F3074F0: bl      0x7F3C9494
    {
            ctx->lr = 0x7F3074F4u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F3074F4:
    ctx->pc = 0x7F3074F4u;
    ctx->downcount -= 5;
    // 7F3074F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3074F8:
    ctx->pc = 0x7F3074F8u;
    // 7F3074F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3074FC:
    ctx->pc = 0x7F3074FCu;
    // 7F3074FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F307500:
    ctx->pc = 0x7F307500u;
    // 7F307500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307504:
    ctx->pc = 0x7F307504u;
    ctx->downcount -= 24;
    // 7F307504: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307508:
    ctx->pc = 0x7F307508u;
    // 7F307508: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30750C:
    ctx->pc = 0x7F30750Cu;
    // 7F30750C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307510:
    ctx->pc = 0x7F307510u;
    // 7F307510: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F307514:
    ctx->pc = 0x7F307514u;
    // 7F307514: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307518:
    ctx->pc = 0x7F307518u;
    // 7F307518: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30751C:
    ctx->pc = 0x7F30751Cu;
    // 7F30751C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F307520:
    ctx->pc = 0x7F307520u;
    // 7F307520: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F307524:
    ctx->pc = 0x7F307524u;
    // 7F307524: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F307528:
    ctx->pc = 0x7F307528u;
    // 7F307528: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F30752C:
    ctx->pc = 0x7F30752Cu;
    // 7F30752C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F307530:
    ctx->pc = 0x7F307530u;
    // 7F307530: li      r5, 228
    ctx->gpr[5] = (u32)(s32)(228);

label_7F307534:
    ctx->pc = 0x7F307534u;
    // 7F307534: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F307538:
    ctx->pc = 0x7F307538u;
    // 7F307538: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F30753Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F30753C:
    ctx->pc = 0x7F30753Cu;
    ctx->downcount -= 2;
    // 7F30753C: or.   r31, r3, r3
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

label_7F307540:
    ctx->pc = 0x7F307540u;
    // 7F307540: bc    12, 2, 0x7F307644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307644;
        }
    }

label_7F307544:
    ctx->pc = 0x7F307544u;
    ctx->downcount -= 5;
    // 7F307544: stw     r26, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F307548:
    ctx->pc = 0x7F307548u;
    // 7F307548: cmpwi   r29, 0
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

label_7F30754C:
    ctx->pc = 0x7F30754Cu;
    // 7F30754C: stw     r28, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F307550:
    ctx->pc = 0x7F307550u;
    // 7F307550: stw     r27, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F307554:
    ctx->pc = 0x7F307554u;
    // 7F307554: bc    4, 2, 0x7F307564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307564;
        }
    }

label_7F307558:
    ctx->pc = 0x7F307558u;
    ctx->downcount -= 3;
    // 7F307558: lis     r3, 93
    ctx->gpr[3] = ((u32)(s32)(93) << 16);

label_7F30755C:
    ctx->pc = 0x7F30755Cu;
    // 7F30755C: addi    r0, r3, 31132
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31132);

label_7F307560:
    ctx->pc = 0x7F307560u;
    // 7F307560: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307564:
    ctx->pc = 0x7F307564u;
    ctx->downcount -= 2;
    // 7F307564: cmpwi   r30, 2
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307568:
    ctx->pc = 0x7F307568u;
    // 7F307568: bc    12, 2, 0x7F3075A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3075A0;
        }
    }

label_7F30756C:
    ctx->pc = 0x7F30756Cu;
    ctx->downcount -= 1;
    // 7F30756C: bc    4, 0, 0x7F307580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307580;
        }
    }

label_7F307570:
    ctx->pc = 0x7F307570u;
    ctx->downcount -= 2;
    // 7F307570: cmpwi   r30, 0
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

label_7F307574:
    ctx->pc = 0x7F307574u;
    // 7F307574: bc    12, 2, 0x7F3075CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3075CC;
        }
    }

label_7F307578:
    ctx->pc = 0x7F307578u;
    ctx->downcount -= 1;
    // 7F307578: bc    4, 0, 0x7F307590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307590;
        }
    }

label_7F30757C:
    ctx->pc = 0x7F30757Cu;
    ctx->downcount -= 1;
    // 7F30757C: b       0x7F3075CC
    {
            goto label_7F3075CC;
    }

label_7F307580:
    ctx->pc = 0x7F307580u;
    ctx->downcount -= 2;
    // 7F307580: cmpwi   r30, 4
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307584:
    ctx->pc = 0x7F307584u;
    // 7F307584: bc    12, 2, 0x7F3075C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3075C0;
        }
    }

label_7F307588:
    ctx->pc = 0x7F307588u;
    ctx->downcount -= 1;
    // 7F307588: bc    4, 0, 0x7F3075CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3075CC;
        }
    }

label_7F30758C:
    ctx->pc = 0x7F30758Cu;
    ctx->downcount -= 1;
    // 7F30758C: b       0x7F3075B0
    {
            goto label_7F3075B0;
    }

label_7F307590:
    ctx->pc = 0x7F307590u;
    ctx->downcount -= 4;
    // 7F307590: lis     r3, 135
    ctx->gpr[3] = ((u32)(s32)(135) << 16);

label_7F307594:
    ctx->pc = 0x7F307594u;
    // 7F307594: addi    r0, r3, -8016
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8016);

label_7F307598:
    ctx->pc = 0x7F307598u;
    // 7F307598: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30759C:
    ctx->pc = 0x7F30759Cu;
    // 7F30759C: b       0x7F3075CC
    {
            goto label_7F3075CC;
    }

label_7F3075A0:
    ctx->pc = 0x7F3075A0u;
    ctx->downcount -= 4;
    // 7F3075A0: lis     r3, 51
    ctx->gpr[3] = ((u32)(s32)(51) << 16);

label_7F3075A4:
    ctx->pc = 0x7F3075A4u;
    // 7F3075A4: addi    r0, r3, 24045
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(24045);

label_7F3075A8:
    ctx->pc = 0x7F3075A8u;
    // 7F3075A8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075AC:
    ctx->pc = 0x7F3075ACu;
    // 7F3075AC: b       0x7F3075CC
    {
            goto label_7F3075CC;
    }

label_7F3075B0:
    ctx->pc = 0x7F3075B0u;
    ctx->downcount -= 4;
    // 7F3075B0: lis     r3, 126
    ctx->gpr[3] = ((u32)(s32)(126) << 16);

label_7F3075B4:
    ctx->pc = 0x7F3075B4u;
    // 7F3075B4: addi    r0, r3, -32546
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32546);

label_7F3075B8:
    ctx->pc = 0x7F3075B8u;
    // 7F3075B8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075BC:
    ctx->pc = 0x7F3075BCu;
    // 7F3075BC: b       0x7F3075CC
    {
            goto label_7F3075CC;
    }

label_7F3075C0:
    ctx->pc = 0x7F3075C0u;
    ctx->downcount -= 3;
    // 7F3075C0: lis     r3, 227
    ctx->gpr[3] = ((u32)(s32)(227) << 16);

label_7F3075C4:
    ctx->pc = 0x7F3075C4u;
    // 7F3075C4: addi    r0, r3, 30651
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30651);

label_7F3075C8:
    ctx->pc = 0x7F3075C8u;
    // 7F3075C8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075CC:
    ctx->pc = 0x7F3075CCu;
    ctx->downcount -= 6;
    // 7F3075CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3075D0:
    ctx->pc = 0x7F3075D0u;
    // 7F3075D0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075D4:
    ctx->pc = 0x7F3075D4u;
    // 7F3075D4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075D8:
    ctx->pc = 0x7F3075D8u;
    // 7F3075D8: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3075DC:
    ctx->pc = 0x7F3075DCu;
    // 7F3075DC: stw     r30, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3075E0:
    ctx->pc = 0x7F3075E0u;
    // 7F3075E0: bl      0x7F31225C
    {
            ctx->lr = 0x7F3075E4u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F3075E4:
    ctx->pc = 0x7F3075E4u;
    ctx->downcount -= 2;
    // 7F3075E4: rlwinm. r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3075E8:
    ctx->pc = 0x7F3075E8u;
    // 7F3075E8: bc    12, 2, 0x7F307604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307604;
        }
    }

label_7F3075EC:
    ctx->pc = 0x7F3075ECu;
    ctx->downcount -= 6;
    // 7F3075EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3075F0:
    ctx->pc = 0x7F3075F0u;
    // 7F3075F0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3075F4:
    ctx->pc = 0x7F3075F4u;
    // 7F3075F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3075F8:
    ctx->pc = 0x7F3075F8u;
    // 7F3075F8: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3075FC:
    ctx->pc = 0x7F3075FCu;
    // 7F3075FC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F307600:
    ctx->pc = 0x7F307600u;
    // 7F307600: sth     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F307604:
    ctx->pc = 0x7F307604u;
    ctx->downcount -= 6;
    // 7F307604: lis     r3, 32560
    ctx->gpr[3] = ((u32)(s32)(32560) << 16);

label_7F307608:
    ctx->pc = 0x7F307608u;
    // 7F307608: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F30760C:
    ctx->pc = 0x7F30760Cu;
    // 7F30760C: addi    r4, r3, 29724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29724);

label_7F307610:
    ctx->pc = 0x7F307610u;
    // 7F307610: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307614:
    ctx->pc = 0x7F307614u;
    // 7F307614: addi    r5, r5, 29864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29864);

label_7F307618:
    ctx->pc = 0x7F307618u;
    // 7F307618: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F30761Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F30761C:
    ctx->pc = 0x7F30761Cu;
    ctx->downcount -= 10;
    // 7F30761C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307620:
    ctx->pc = 0x7F307620u;
    // 7F307620: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F307624:
    ctx->pc = 0x7F307624u;
    // 7F307624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F307628:
    ctx->pc = 0x7F307628u;
    // 7F307628: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F30762C:
    ctx->pc = 0x7F30762Cu;
    // 7F30762C: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F307630:
    ctx->pc = 0x7F307630u;
    // 7F307630: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307634:
    ctx->pc = 0x7F307634u;
    // 7F307634: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F307638:
    ctx->pc = 0x7F307638u;
    // 7F307638: stw     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30763C:
    ctx->pc = 0x7F30763Cu;
    // 7F30763C: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F307640:
    ctx->pc = 0x7F307640u;
    // 7F307640: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307644:
    ctx->pc = 0x7F307644u;
    ctx->downcount -= 17;
    // 7F307644: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307648:
    ctx->pc = 0x7F307648u;
    // 7F307648: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30764C:
    ctx->pc = 0x7F30764Cu;
    // 7F30764C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307650:
    ctx->pc = 0x7F307650u;
    // 7F307650: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307654:
    ctx->pc = 0x7F307654u;
    // 7F307654: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F307658:
    ctx->pc = 0x7F307658u;
    // 7F307658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F30765C:
    ctx->pc = 0x7F30765Cu;
    ctx->downcount -= 6;
    // 7F30765C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307660:
    ctx->pc = 0x7F307660u;
    // 7F307660: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307664:
    ctx->pc = 0x7F307664u;
    // 7F307664: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307668:
    ctx->pc = 0x7F307668u;
    // 7F307668: lwz     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30766C:
    ctx->pc = 0x7F30766Cu;
    // 7F30766C: cmpwi   r6, 0
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

label_7F307670:
    ctx->pc = 0x7F307670u;
    // 7F307670: bc    12, 2, 0x7F3076A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3076A8;
        }
    }

label_7F307674:
    ctx->pc = 0x7F307674u;
    ctx->downcount -= 2;
    // 7F307674: cmpwi   r6, 1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307678:
    ctx->pc = 0x7F307678u;
    // 7F307678: bc    12, 2, 0x7F3076A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3076A8;
        }
    }

label_7F30767C:
    ctx->pc = 0x7F30767Cu;
    ctx->downcount -= 11;
    // 7F30767C: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307680:
    ctx->pc = 0x7F307680u;
    // 7F307680: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F307684:
    ctx->pc = 0x7F307684u;
    // 7F307684: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F307688:
    ctx->pc = 0x7F307688u;
    // 7F307688: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30768C:
    ctx->pc = 0x7F30768Cu;
    // 7F30768C: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F307690:
    ctx->pc = 0x7F307690u;
    // 7F307690: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307694:
    ctx->pc = 0x7F307694u;
    // 7F307694: lwz     r5, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307698:
    ctx->pc = 0x7F307698u;
    // 7F307698: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F30769C:
    ctx->pc = 0x7F30769Cu;
    // 7F30769C: addi    r0, r5, -2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-2);

label_7F3076A0:
    ctx->pc = 0x7F3076A0u;
    // 7F3076A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3076A4:
    ctx->pc = 0x7F3076A4u;
    // 7F3076A4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F3076A8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F3076A8:
    ctx->pc = 0x7F3076A8u;
    ctx->downcount -= 5;
    // 7F3076A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3076AC:
    ctx->pc = 0x7F3076ACu;
    // 7F3076AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3076B0:
    ctx->pc = 0x7F3076B0u;
    // 7F3076B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3076B4:
    ctx->pc = 0x7F3076B4u;
    // 7F3076B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3076B8:
    ctx->pc = 0x7F3076B8u;
    ctx->downcount -= 11;
    // 7F3076B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3076BC:
    ctx->pc = 0x7F3076BCu;
    // 7F3076BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3076C0:
    ctx->pc = 0x7F3076C0u;
    // 7F3076C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3076C4:
    ctx->pc = 0x7F3076C4u;
    // 7F3076C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3076C8:
    ctx->pc = 0x7F3076C8u;
    // 7F3076C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3076CC:
    ctx->pc = 0x7F3076CCu;
    // 7F3076CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3076D0:
    ctx->pc = 0x7F3076D0u;
    // 7F3076D0: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3076D4:
    ctx->pc = 0x7F3076D4u;
    // 7F3076D4: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3076D8:
    ctx->pc = 0x7F3076D8u;
    // 7F3076D8: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3076DC:
    ctx->pc = 0x7F3076DCu;
    // 7F3076DC: cmpwi   r0, 0
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

label_7F3076E0:
    ctx->pc = 0x7F3076E0u;
    // 7F3076E0: bc    4, 0, 0x7F307704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307704;
        }
    }

label_7F3076E4:
    ctx->pc = 0x7F3076E4u;
    ctx->downcount -= 5;
    // 7F3076E4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3076E8:
    ctx->pc = 0x7F3076E8u;
    // 7F3076E8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3076EC:
    ctx->pc = 0x7F3076ECu;
    // 7F3076EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3076F0:
    ctx->pc = 0x7F3076F0u;
    // 7F3076F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3076F4:
    ctx->pc = 0x7F3076F4u;
    // 7F3076F4: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F3076F8u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F3076F8:
    ctx->pc = 0x7F3076F8u;
    ctx->downcount -= 3;
    // 7F3076F8: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3076FC:
    ctx->pc = 0x7F3076FCu;
    // 7F3076FC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307700:
    ctx->pc = 0x7F307700u;
    // 7F307700: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F307704u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F307704:
    ctx->pc = 0x7F307704u;
    ctx->downcount -= 6;
    // 7F307704: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307708:
    ctx->pc = 0x7F307708u;
    // 7F307708: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30770C:
    ctx->pc = 0x7F30770Cu;
    // 7F30770C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307710:
    ctx->pc = 0x7F307710u;
    // 7F307710: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307714:
    ctx->pc = 0x7F307714u;
    // 7F307714: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307718:
    ctx->pc = 0x7F307718u;
    ctx->downcount -= 18;
    // 7F307718: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30771C:
    ctx->pc = 0x7F30771Cu;
    // 7F30771C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307720:
    ctx->pc = 0x7F307720u;
    // 7F307720: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307724:
    ctx->pc = 0x7F307724u;
    // 7F307724: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F307728:
    ctx->pc = 0x7F307728u;
    // 7F307728: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30772C:
    ctx->pc = 0x7F30772Cu;
    // 7F30772C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307730:
    ctx->pc = 0x7F307730u;
    // 7F307730: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307734:
    ctx->pc = 0x7F307734u;
    // 7F307734: bl      0x7F3C9624
    {
            ctx->lr = 0x7F307738u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F307738:
    ctx->pc = 0x7F307738u;
    ctx->downcount -= 2;
    // 7F307738: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30773C:
    ctx->pc = 0x7F30773Cu;
    // 7F30773C: b       0x7F30788C
    {
            goto label_7F30788C;
    }

label_7F307740:
    ctx->pc = 0x7F307740u;
    ctx->downcount -= 6;
    // 7F307740: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307744:
    ctx->pc = 0x7F307744u;
    // 7F307744: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307748:
    ctx->pc = 0x7F307748u;
    // 7F307748: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30774C:
    ctx->pc = 0x7F30774Cu;
    // 7F30774C: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307750:
    // 7F307750: cmpwi   r0, 2
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

label_7F307754:
    // 7F307754: bc    12, 2, 0x7F3077F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3077F4;
        }
    }

label_7F307758:
    ctx->downcount -= 1;
    // 7F307758: bc    4, 0, 0x7F307768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307768;
        }
    }

label_7F30775C:
    ctx->downcount -= 2;
    // 7F30775C: cmpwi   r0, 1
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

label_7F307760:
    // 7F307760: bc    4, 0, 0x7F307774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307774;
        }
    }

label_7F307764:
    ctx->downcount -= 1;
    // 7F307764: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F307768:
    ctx->downcount -= 2;
    // 7F307768: cmpwi   r0, 4
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

label_7F30776C:
    // 7F30776C: bc    4, 0, 0x7F30787C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30787C;
        }
    }

label_7F307770:
    ctx->downcount -= 1;
    // 7F307770: b       0x7F30785C
    {
            goto label_7F30785C;
    }

label_7F307774:
    ctx->pc = 0x7F307774u;
    ctx->downcount -= 3;
    // 7F307774: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307778:
    // 7F307778: cmpwi   r0, 4
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

label_7F30777C:
    // 7F30777C: bc    12, 2, 0x7F3077C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3077C8;
        }
    }

label_7F307780:
    ctx->downcount -= 1;
    // 7F307780: bc    4, 0, 0x7F307794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307794;
        }
    }

label_7F307784:
    ctx->downcount -= 2;
    // 7F307784: cmpwi   r0, 1
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

label_7F307788:
    // 7F307788: bc    12, 2, 0x7F3077A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3077A4;
        }
    }

label_7F30778C:
    ctx->downcount -= 1;
    // 7F30778C: bc    4, 0, 0x7F3077BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3077BC;
        }
    }

label_7F307790:
    ctx->downcount -= 1;
    // 7F307790: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F307794:
    ctx->downcount -= 2;
    // 7F307794: cmpwi   r0, 6
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

label_7F307798:
    // 7F307798: bc    12, 2, 0x7F3077E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3077E8;
        }
    }

label_7F30779C:
    ctx->downcount -= 1;
    // 7F30779C: bc    4, 0, 0x7F30787C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30787C;
        }
    }

label_7F3077A0:
    ctx->downcount -= 1;
    // 7F3077A0: b       0x7F3077D4
    {
            goto label_7F3077D4;
    }

label_7F3077A4:
    ctx->downcount -= 6;
    // 7F3077A4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3077A8:
    ctx->pc = 0x7F3077A8u;
    // 7F3077A8: stw     r4, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3077AC:
    // 7F3077AC: addi    r3, r3, -32112
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32112);

label_7F3077B0:
    ctx->pc = 0x7F3077B0u;
    // 7F3077B0: lbzx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3077B4:
    ctx->pc = 0x7F3077B4u;
    // 7F3077B4: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3077B8:
    // 7F3077B8: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F3077BC:
    ctx->downcount -= 2;
    // 7F3077BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3077C0:
    // 7F3077C0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3077C4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3077C4:
    ctx->downcount -= 1;
    // 7F3077C4: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F3077C8:
    ctx->downcount -= 2;
    // 7F3077C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3077CC:
    // 7F3077CC: bl      0x7F3076B8
    {
            ctx->lr = 0x7F3077D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3076B8u;
                return;
            }
            goto label_7F3076B8;
    }

label_7F3077D0:
    ctx->downcount -= 1;
    // 7F3077D0: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F3077D4:
    ctx->downcount -= 2;
    // 7F3077D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3077D8:
    // 7F3077D8: bl      0x7F3076B8
    {
            ctx->lr = 0x7F3077DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3076B8u;
                return;
            }
            goto label_7F3076B8;
    }

label_7F3077DC:
    ctx->downcount -= 3;
    // 7F3077DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3077E0:
    ctx->pc = 0x7F3077E0u;
    // 7F3077E0: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3077E4:
    // 7F3077E4: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F3077E8:
    ctx->downcount -= 2;
    // 7F3077E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3077EC:
    // 7F3077EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3077F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3077F0:
    ctx->downcount -= 1;
    // 7F3077F0: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F3077F4:
    ctx->pc = 0x7F3077F4u;
    ctx->downcount -= 3;
    // 7F3077F4: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3077F8:
    // 7F3077F8: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3077FC:
    // 7F3077FC: bc    12, 1, 0x7F307850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307850;
        }
    }

label_7F307800:
    ctx->downcount -= 7;
    // 7F307800: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F307804:
    // 7F307804: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F307808:
    // 7F307808: addi    r3, r3, -27352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27352);

label_7F30780C:
    ctx->pc = 0x7F30780Cu;
    // 7F30780C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307810:
    ctx->pc = 0x7F307810u;
    // 7F307810: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F307814:
    ctx->pc = 0x7F307814u;
    // 7F307814: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F307818:
    ctx->downcount -= 3;
    // 7F307818: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30781C:
    // 7F30781C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F307820:
    // 7F307820: bl      0x7F30765C
    {
            ctx->lr = 0x7F307824u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30765Cu;
                return;
            }
            goto label_7F30765C;
    }

label_7F307824:
    ctx->downcount -= 2;
    // 7F307824: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307828:
    // 7F307828: bl      0x7F3C8210
    {
            ctx->lr = 0x7F30782Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F30782C:
    ctx->downcount -= 1;
    // 7F30782C: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F307830:
    ctx->downcount -= 2;
    // 7F307830: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307834:
    // 7F307834: bl      0x7F3076B8
    {
            ctx->lr = 0x7F307838u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3076B8u;
                return;
            }
            goto label_7F3076B8;
    }

label_7F307838:
    ctx->downcount -= 3;
    // 7F307838: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30783C:
    ctx->pc = 0x7F30783Cu;
    // 7F30783C: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307840:
    // 7F307840: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F307844:
    ctx->downcount -= 3;
    // 7F307844: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F307848:
    ctx->pc = 0x7F307848u;
    // 7F307848: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30784C:
    // 7F30784C: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F307850:
    ctx->downcount -= 2;
    // 7F307850: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307854:
    // 7F307854: bl      0x7F3076B8
    {
            ctx->lr = 0x7F307858u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3076B8u;
                return;
            }
            goto label_7F3076B8;
    }

label_7F307858:
    ctx->downcount -= 1;
    // 7F307858: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F30785C:
    ctx->pc = 0x7F30785Cu;
    ctx->downcount -= 3;
    // 7F30785C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307860:
    // 7F307860: cmpwi   r0, 3
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

label_7F307864:
    // 7F307864: bc    12, 2, 0x7F30786C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30786C;
        }
    }

label_7F307868:
    ctx->downcount -= 1;
    // 7F307868: b       0x7F30787C
    {
            goto label_7F30787C;
    }

label_7F30786C:
    ctx->downcount -= 2;
    // 7F30786C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307870:
    // 7F307870: bl      0x7F3076B8
    {
            ctx->lr = 0x7F307874u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3076B8u;
                return;
            }
            goto label_7F3076B8;
    }

label_7F307874:
    ctx->downcount -= 2;
    // 7F307874: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F307878:
    ctx->pc = 0x7F307878u;
    // 7F307878: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30787C:
    ctx->pc = 0x7F30787Cu;
    ctx->downcount -= 4;
    // 7F30787C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307880:
    // 7F307880: addi    r31, r31, -1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F307884:
    // 7F307884: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F307888:
    ctx->pc = 0x7F307888u;
    // 7F307888: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30788C:
    ctx->downcount -= 2;
    // 7F30788C: cmpwi   r31, 0
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

label_7F307890:
    // 7F307890: bc    12, 1, 0x7F307740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307740u;
                return;
            }
            goto label_7F307740;
        }
    }

label_7F307894:
    ctx->pc = 0x7F307894u;
    ctx->downcount -= 16;
    // 7F307894: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F307898:
    ctx->pc = 0x7F307898u;
    // 7F307898: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30789C:
    ctx->pc = 0x7F30789Cu;
    // 7F30789C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3078A0:
    ctx->pc = 0x7F3078A0u;
    // 7F3078A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3078A4:
    ctx->pc = 0x7F3078A4u;
    // 7F3078A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3078A8:
    ctx->pc = 0x7F3078A8u;
    ctx->downcount -= 16;
    // 7F3078A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3078AC:
    ctx->pc = 0x7F3078ACu;
    // 7F3078AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3078B0:
    ctx->pc = 0x7F3078B0u;
    // 7F3078B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3078B4:
    ctx->pc = 0x7F3078B4u;
    // 7F3078B4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3078B8:
    ctx->pc = 0x7F3078B8u;
    // 7F3078B8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3078BC:
    ctx->pc = 0x7F3078BCu;
    // 7F3078BC: bl      0x8004DB8C
    {
            ctx->lr = 0x7F3078C0u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F3078C0:
    ctx->pc = 0x7F3078C0u;
    ctx->downcount -= 3;
    // 7F3078C0: li      r30, 1000
    ctx->gpr[30] = (u32)(s32)(1000);

label_7F3078C4:
    ctx->pc = 0x7F3078C4u;
    // 7F3078C4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3078C8:
    ctx->pc = 0x7F3078C8u;
    // 7F3078C8: b       0x7F3078D4
    {
            goto label_7F3078D4;
    }

label_7F3078CC:
    ctx->downcount -= 2;
    // 7F3078CC: addic.  r30, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[30] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3078D0:
    // 7F3078D0: bc    12, 0, 0x7F3078F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3078F4;
        }
    }

label_7F3078D4:
    ctx->downcount -= 2;
    // 7F3078D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3078D8:
    // 7F3078D8: bl      0x7F312524
    {
            ctx->lr = 0x7F3078DCu;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F3078DC:
    ctx->downcount -= 2;
    // 7F3078DC: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3078E0:
    // 7F3078E0: bc    12, 2, 0x7F3078F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3078F4;
        }
    }

label_7F3078E4:
    ctx->downcount -= 2;
    // 7F3078E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3078E8:
    // 7F3078E8: bl      0x7F312524
    {
            ctx->lr = 0x7F3078ECu;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F3078EC:
    ctx->downcount -= 2;
    // 7F3078EC: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3078F0:
    // 7F3078F0: bc    4, 2, 0x7F3078CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3078CCu;
                return;
            }
            goto label_7F3078CC;
        }
    }

label_7F3078F4:
    ctx->pc = 0x7F3078F4u;
    ctx->downcount -= 2;
    // 7F3078F4: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_7F3078F8:
    ctx->pc = 0x7F3078F8u;
    // 7F3078F8: bl      0x7F3121BC
    {
            ctx->lr = 0x7F3078FCu;
            ctx->pc = 0x7F3121BCu;
            return;
    }

label_7F3078FC:
    ctx->pc = 0x7F3078FCu;
    ctx->downcount -= 2;
    // 7F3078FC: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_7F307900:
    ctx->pc = 0x7F307900u;
    // 7F307900: bl      0x7F312888
    {
            ctx->lr = 0x7F307904u;
            ctx->pc = 0x7F312888u;
            return;
    }

label_7F307904:
    ctx->pc = 0x7F307904u;
    ctx->downcount -= 3;
    // 7F307904: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F307908:
    ctx->pc = 0x7F307908u;
    // 7F307908: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F30790C:
    ctx->pc = 0x7F30790Cu;
    // 7F30790C: addi    r31, r3, -27320
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-27320);

label_7F307910:
    ctx->pc = 0x7F307910u;
    ctx->downcount -= 8;
    // 7F307910: stb     r30, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F307914:
    // 7F307914: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307918:
    // 7F307918: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30791C:
    // 7F30791C: addi    r3, r28, 96
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(96);

label_7F307920:
    ctx->pc = 0x7F307920u;
    // 7F307920: lbz     r7, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F307924:
    // 7F307924: addi    r6, r29, 4
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(4);

label_7F307928:
    // 7F307928: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F30792C:
    // 7F30792C: bl      0x7F3128EC
    {
            ctx->lr = 0x7F307930u;
            ctx->pc = 0x7F3128ECu;
            return;
    }

label_7F307930:
    ctx->downcount -= 3;
    // 7F307930: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F307934:
    // 7F307934: cmpwi   r30, 2
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307938:
    // 7F307938: bc    12, 0, 0x7F307910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307910u;
                return;
            }
            goto label_7F307910;
        }
    }

label_7F30793C:
    ctx->pc = 0x7F30793Cu;
    ctx->downcount -= 3;
    // 7F30793C: lbz     r0, 16488(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16488);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F307940:
    ctx->pc = 0x7F307940u;
    // 7F307940: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307944:
    ctx->pc = 0x7F307944u;
    // 7F307944: bc    4, 1, 0x7F307994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307994;
        }
    }

label_7F307948:
    ctx->pc = 0x7F307948u;
    ctx->downcount -= 1;
    // 7F307948: bl      0x7F31225C
    {
            ctx->lr = 0x7F30794Cu;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F30794C:
    ctx->pc = 0x7F30794Cu;
    ctx->downcount -= 4;
    // 7F30794C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307950:
    ctx->pc = 0x7F307950u;
    // 7F307950: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F307954:
    ctx->pc = 0x7F307954u;
    // 7F307954: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F307958:
    ctx->pc = 0x7F307958u;
    // 7F307958: bl      0x7F31224C
    {
            ctx->lr = 0x7F30795Cu;
            ctx->pc = 0x7F31224Cu;
            return;
    }

label_7F30795C:
    ctx->pc = 0x7F30795Cu;
    ctx->downcount -= 6;
    // 7F30795C: lbz     r0, 16488(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16488);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F307960:
    ctx->pc = 0x7F307960u;
    // 7F307960: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307964:
    ctx->pc = 0x7F307964u;
    // 7F307964: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307968:
    ctx->pc = 0x7F307968u;
    // 7F307968: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30796C:
    ctx->pc = 0x7F30796Cu;
    // 7F30796C: bc    4, 1, 0x7F307988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307988;
        }
    }

label_7F307970:
    loop_7F307970(ctx);
    if (ctx->pc == 0x7F307988u) goto label_7F307988;
    return;
label_7F307974:
    // 7F307974: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

label_7F307978:
    ctx->pc = 0x7F307978u;
    // 7F307978: lbzx    r0, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30797C:
    // 7F30797C: or   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] | ctx->gpr[0];
    }

label_7F307980:
    // 7F307980: rlwinm r29, r0, 0, 24, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F307984:
    // 7F307984: bc    16, 0, 0x7F307970
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307970u;
                return;
            }
            goto label_7F307970;
        }
    }

label_7F307988:
    ctx->pc = 0x7F307988u;
    ctx->downcount -= 2;
    // 7F307988: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30798C:
    ctx->pc = 0x7F30798Cu;
    // 7F30798C: bl      0x7F31226C
    {
            ctx->lr = 0x7F307990u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F307990:
    ctx->pc = 0x7F307990u;
    ctx->downcount -= 1;
    // 7F307990: b       0x7F30799C
    {
            goto label_7F30799C;
    }

label_7F307994:
    ctx->pc = 0x7F307994u;
    ctx->downcount -= 2;
    // 7F307994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307998:
    ctx->pc = 0x7F307998u;
    // 7F307998: bl      0x7F31224C
    {
            ctx->lr = 0x7F30799Cu;
            ctx->pc = 0x7F31224Cu;
            return;
    }

label_7F30799C:
    ctx->pc = 0x7F30799Cu;
    ctx->downcount -= 1;
    // 7F30799C: bl      0x7F312224
    {
            ctx->lr = 0x7F3079A0u;
            ctx->pc = 0x7F312224u;
            return;
    }

label_7F3079A0:
    ctx->pc = 0x7F3079A0u;
    ctx->downcount -= 1;
    // 7F3079A0: bl      0x7F31225C
    {
            ctx->lr = 0x7F3079A4u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F3079A4:
    ctx->pc = 0x7F3079A4u;
    ctx->downcount -= 2;
    // 7F3079A4: rlwinm. r0, r3, 0, 31, 31
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

label_7F3079A8:
    ctx->pc = 0x7F3079A8u;
    // 7F3079A8: bc    12, 2, 0x7F3079C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3079C4;
        }
    }

label_7F3079AC:
    ctx->pc = 0x7F3079ACu;
    ctx->downcount -= 6;
    // 7F3079AC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3079B0:
    ctx->pc = 0x7F3079B0u;
    // 7F3079B0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3079B4:
    ctx->pc = 0x7F3079B4u;
    // 7F3079B4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3079B8:
    ctx->pc = 0x7F3079B8u;
    // 7F3079B8: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3079BC:
    ctx->pc = 0x7F3079BCu;
    // 7F3079BC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3079C0:
    ctx->pc = 0x7F3079C0u;
    // 7F3079C0: sth     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3079C4:
    ctx->pc = 0x7F3079C4u;
    ctx->downcount -= 16;
    // 7F3079C4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3079C8:
    ctx->pc = 0x7F3079C8u;
    // 7F3079C8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3079CC:
    ctx->pc = 0x7F3079CCu;
    // 7F3079CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3079D0:
    ctx->pc = 0x7F3079D0u;
    // 7F3079D0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3079D4:
    ctx->pc = 0x7F3079D4u;
    // 7F3079D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F3079D8:
    ctx->pc = 0x7F3079D8u;
    ctx->downcount -= 6;
    // 7F3079D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3079DC:
    ctx->pc = 0x7F3079DCu;
    // 7F3079DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3079E0:
    ctx->pc = 0x7F3079E0u;
    // 7F3079E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3079E4:
    ctx->pc = 0x7F3079E4u;
    // 7F3079E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3079E8:
    ctx->pc = 0x7F3079E8u;
    // 7F3079E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3079EC:
    ctx->pc = 0x7F3079ECu;
    // 7F3079EC: bl      0x7F307718
    {
            ctx->lr = 0x7F3079F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307718u;
                return;
            }
            goto label_7F307718;
    }

label_7F3079F0:
    ctx->pc = 0x7F3079F0u;
    ctx->downcount -= 3;
    // 7F3079F0: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3079F4:
    ctx->pc = 0x7F3079F4u;
    // 7F3079F4: cmpwi   r0, 2
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

label_7F3079F8:
    ctx->pc = 0x7F3079F8u;
    // 7F3079F8: bc    12, 2, 0x7F307A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307A54;
        }
    }

label_7F3079FC:
    ctx->pc = 0x7F3079FCu;
    ctx->downcount -= 1;
    // 7F3079FC: bc    4, 0, 0x7F307A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307A0C;
        }
    }

label_7F307A00:
    ctx->pc = 0x7F307A00u;
    ctx->downcount -= 2;
    // 7F307A00: cmpwi   r0, 1
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

label_7F307A04:
    ctx->pc = 0x7F307A04u;
    // 7F307A04: bc    4, 0, 0x7F307A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307A1C;
        }
    }

label_7F307A08:
    ctx->pc = 0x7F307A08u;
    ctx->downcount -= 1;
    // 7F307A08: b       0x7F307B14
    {
            goto label_7F307B14;
    }

label_7F307A0C:
    ctx->pc = 0x7F307A0Cu;
    ctx->downcount -= 2;
    // 7F307A0C: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307A10:
    ctx->pc = 0x7F307A10u;
    // 7F307A10: bc    12, 2, 0x7F307AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307AE0;
        }
    }

label_7F307A14:
    ctx->pc = 0x7F307A14u;
    ctx->downcount -= 1;
    // 7F307A14: bc    4, 0, 0x7F307B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307B14;
        }
    }

label_7F307A18:
    ctx->pc = 0x7F307A18u;
    ctx->downcount -= 1;
    // 7F307A18: b       0x7F307A98
    {
            goto label_7F307A98;
    }

label_7F307A1C:
    ctx->pc = 0x7F307A1Cu;
    ctx->downcount -= 6;
    // 7F307A1C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307A20:
    ctx->pc = 0x7F307A20u;
    // 7F307A20: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307A24:
    ctx->pc = 0x7F307A24u;
    // 7F307A24: lwz     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307A28:
    ctx->pc = 0x7F307A28u;
    // 7F307A28: lwz     r6, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F307A2C:
    ctx->pc = 0x7F307A2Cu;
    // 7F307A2C: lwz     r7, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F307A30:
    ctx->pc = 0x7F307A30u;
    // 7F307A30: bl      0x7F307504
    {
            ctx->lr = 0x7F307A34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307504u;
                return;
            }
            goto label_7F307504;
    }

label_7F307A34:
    ctx->pc = 0x7F307A34u;
    ctx->downcount -= 3;
    // 7F307A34: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307A38:
    ctx->pc = 0x7F307A38u;
    // 7F307A38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307A3C:
    ctx->pc = 0x7F307A3Cu;
    // 7F307A3C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F307A40u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F307A40:
    ctx->pc = 0x7F307A40u;
    ctx->downcount -= 5;
    // 7F307A40: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307A44:
    ctx->pc = 0x7F307A44u;
    // 7F307A44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307A48:
    ctx->pc = 0x7F307A48u;
    // 7F307A48: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307A4C:
    ctx->pc = 0x7F307A4Cu;
    // 7F307A4C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307A50:
    ctx->pc = 0x7F307A50u;
    // 7F307A50: b       0x7F307B14
    {
            goto label_7F307B14;
    }

label_7F307A54:
    ctx->pc = 0x7F307A54u;
    ctx->downcount -= 6;
    // 7F307A54: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307A58:
    ctx->pc = 0x7F307A58u;
    // 7F307A58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F307A5C:
    ctx->pc = 0x7F307A5Cu;
    // 7F307A5C: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307A60:
    ctx->pc = 0x7F307A60u;
    // 7F307A60: lwz     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307A64:
    ctx->pc = 0x7F307A64u;
    // 7F307A64: lwz     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F307A68:
    ctx->pc = 0x7F307A68u;
    // 7F307A68: bl      0x7F309330
    {
            ctx->lr = 0x7F307A6Cu;
            ctx->pc = 0x7F309330u;
            return;
    }

label_7F307A6C:
    ctx->pc = 0x7F307A6Cu;
    ctx->downcount -= 3;
    // 7F307A6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307A70:
    ctx->pc = 0x7F307A70u;
    // 7F307A70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307A74:
    ctx->pc = 0x7F307A74u;
    // 7F307A74: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F307A78u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F307A78:
    ctx->pc = 0x7F307A78u;
    ctx->downcount -= 7;
    // 7F307A78: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307A7C:
    ctx->pc = 0x7F307A7Cu;
    // 7F307A7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307A80:
    ctx->pc = 0x7F307A80u;
    // 7F307A80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307A84:
    ctx->pc = 0x7F307A84u;
    // 7F307A84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F307A88:
    ctx->pc = 0x7F307A88u;
    // 7F307A88: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307A8C:
    ctx->pc = 0x7F307A8Cu;
    // 7F307A8C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307A90:
    ctx->pc = 0x7F307A90u;
    // 7F307A90: bl      0x7F30765C
    {
            ctx->lr = 0x7F307A94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30765Cu;
                return;
            }
            goto label_7F30765C;
    }

label_7F307A94:
    ctx->pc = 0x7F307A94u;
    ctx->downcount -= 1;
    // 7F307A94: b       0x7F307B14
    {
            goto label_7F307B14;
    }

label_7F307A98:
    ctx->pc = 0x7F307A98u;
    ctx->downcount -= 2;
    // 7F307A98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307A9C:
    ctx->pc = 0x7F307A9Cu;
    // 7F307A9C: bl      0x7F3078A8
    {
            ctx->lr = 0x7F307AA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3078A8u;
                return;
            }
            goto label_7F3078A8;
    }

label_7F307AA0:
    ctx->pc = 0x7F307AA0u;
    ctx->downcount -= 2;
    // 7F307AA0: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307AA4:
    ctx->pc = 0x7F307AA4u;
    // 7F307AA4: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F307AA8u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F307AA8:
    ctx->pc = 0x7F307AA8u;
    ctx->downcount -= 2;
    // 7F307AA8: cmpwi   r3, 0
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

label_7F307AAC:
    ctx->pc = 0x7F307AACu;
    // 7F307AAC: bc    4, 2, 0x7F307B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307B14;
        }
    }

label_7F307AB0:
    ctx->pc = 0x7F307AB0u;
    ctx->downcount -= 2;
    // 7F307AB0: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307AB4:
    ctx->pc = 0x7F307AB4u;
    // 7F307AB4: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F307AB8u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F307AB8:
    ctx->pc = 0x7F307AB8u;
    ctx->downcount -= 9;
    // 7F307AB8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F307ABC:
    ctx->pc = 0x7F307ABCu;
    // 7F307ABC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307AC0:
    ctx->pc = 0x7F307AC0u;
    // 7F307AC0: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307AC4:
    ctx->pc = 0x7F307AC4u;
    // 7F307AC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307AC8:
    ctx->pc = 0x7F307AC8u;
    // 7F307AC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F307ACC:
    ctx->pc = 0x7F307ACCu;
    // 7F307ACC: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307AD0:
    ctx->pc = 0x7F307AD0u;
    // 7F307AD0: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307AD4:
    ctx->pc = 0x7F307AD4u;
    // 7F307AD4: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307AD8:
    ctx->pc = 0x7F307AD8u;
    // 7F307AD8: bl      0x7F30765C
    {
            ctx->lr = 0x7F307ADCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30765Cu;
                return;
            }
            goto label_7F30765C;
    }

label_7F307ADC:
    ctx->pc = 0x7F307ADCu;
    ctx->downcount -= 1;
    // 7F307ADC: b       0x7F307B14
    {
            goto label_7F307B14;
    }

label_7F307AE0:
    ctx->pc = 0x7F307AE0u;
    ctx->downcount -= 6;
    // 7F307AE0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307AE4:
    ctx->pc = 0x7F307AE4u;
    // 7F307AE4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F307AE8:
    ctx->pc = 0x7F307AE8u;
    // 7F307AE8: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307AEC:
    ctx->pc = 0x7F307AECu;
    // 7F307AEC: lwz     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F307AF0:
    ctx->pc = 0x7F307AF0u;
    // 7F307AF0: lwz     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F307AF4:
    ctx->pc = 0x7F307AF4u;
    // 7F307AF4: bl      0x7F309330
    {
            ctx->lr = 0x7F307AF8u;
            ctx->pc = 0x7F309330u;
            return;
    }

label_7F307AF8:
    ctx->pc = 0x7F307AF8u;
    ctx->downcount -= 3;
    // 7F307AF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307AFC:
    ctx->pc = 0x7F307AFCu;
    // 7F307AFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307B00:
    ctx->pc = 0x7F307B00u;
    // 7F307B00: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F307B04u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F307B04:
    ctx->pc = 0x7F307B04u;
    ctx->downcount -= 4;
    // 7F307B04: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307B08:
    ctx->pc = 0x7F307B08u;
    // 7F307B08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307B0C:
    ctx->pc = 0x7F307B0Cu;
    // 7F307B0C: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307B10:
    ctx->pc = 0x7F307B10u;
    // 7F307B10: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307B14:
    ctx->pc = 0x7F307B14u;
    ctx->downcount -= 6;
    // 7F307B14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307B18:
    ctx->pc = 0x7F307B18u;
    // 7F307B18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307B1C:
    ctx->pc = 0x7F307B1Cu;
    // 7F307B1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307B20:
    ctx->pc = 0x7F307B20u;
    // 7F307B20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307B24:
    ctx->pc = 0x7F307B24u;
    // 7F307B24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307B28:
    ctx->pc = 0x7F307B28u;
    ctx->downcount -= 8;
    // 7F307B28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307B2C:
    ctx->pc = 0x7F307B2Cu;
    // 7F307B2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307B30:
    ctx->pc = 0x7F307B30u;
    // 7F307B30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307B34:
    ctx->pc = 0x7F307B34u;
    // 7F307B34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F307B38:
    ctx->pc = 0x7F307B38u;
    // 7F307B38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307B3C:
    ctx->pc = 0x7F307B3Cu;
    // 7F307B3C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307B40:
    ctx->pc = 0x7F307B40u;
    // 7F307B40: cmpwi   r3, 0
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

label_7F307B44:
    ctx->pc = 0x7F307B44u;
    // 7F307B44: bc    12, 0, 0x7F307B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307B54;
        }
    }

label_7F307B48:
    ctx->pc = 0x7F307B48u;
    ctx->downcount -= 1;
    // 7F307B48: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F307B4Cu;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F307B4C:
    ctx->pc = 0x7F307B4Cu;
    ctx->downcount -= 2;
    // 7F307B4C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F307B50:
    ctx->pc = 0x7F307B50u;
    // 7F307B50: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307B54:
    ctx->pc = 0x7F307B54u;
    ctx->downcount -= 6;
    // 7F307B54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307B58:
    ctx->pc = 0x7F307B58u;
    // 7F307B58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307B5C:
    ctx->pc = 0x7F307B5Cu;
    // 7F307B5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307B60:
    ctx->pc = 0x7F307B60u;
    // 7F307B60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307B64:
    ctx->pc = 0x7F307B64u;
    // 7F307B64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307B68:
    ctx->pc = 0x7F307B68u;
    ctx->downcount -= 12;
    // 7F307B68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307B6C:
    ctx->pc = 0x7F307B6Cu;
    // 7F307B6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307B70:
    ctx->pc = 0x7F307B70u;
    // 7F307B70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307B74:
    ctx->pc = 0x7F307B74u;
    // 7F307B74: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F307B78:
    ctx->pc = 0x7F307B78u;
    // 7F307B78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F307B7C:
    ctx->pc = 0x7F307B7Cu;
    // 7F307B7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307B80:
    ctx->pc = 0x7F307B80u;
    // 7F307B80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307B84:
    ctx->pc = 0x7F307B84u;
    // 7F307B84: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307B88:
    ctx->pc = 0x7F307B88u;
    // 7F307B88: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307B8C:
    ctx->pc = 0x7F307B8Cu;
    // 7F307B8C: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307B90:
    ctx->pc = 0x7F307B90u;
    // 7F307B90: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307B94:
    ctx->pc = 0x7F307B94u;
    // 7F307B94: bl      0x7F31223C
    {
            ctx->lr = 0x7F307B98u;
            ctx->pc = 0x7F31223Cu;
            return;
    }

label_7F307B98:
    ctx->pc = 0x7F307B98u;
    ctx->downcount -= 2;
    // 7F307B98: cmpwi   r3, 0
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

label_7F307B9C:
    ctx->pc = 0x7F307B9Cu;
    // 7F307B9C: bc    4, 2, 0x7F307BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307BAC;
        }
    }

label_7F307BA0:
    ctx->pc = 0x7F307BA0u;
    ctx->downcount -= 3;
    // 7F307BA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307BA4:
    ctx->pc = 0x7F307BA4u;
    // 7F307BA4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307BA8:
    ctx->pc = 0x7F307BA8u;
    // 7F307BA8: b       0x7F307BB4
    {
            goto label_7F307BB4;
    }

label_7F307BAC:
    ctx->pc = 0x7F307BACu;
    ctx->downcount -= 2;
    // 7F307BAC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307BB0:
    ctx->pc = 0x7F307BB0u;
    // 7F307BB0: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307BB4:
    ctx->pc = 0x7F307BB4u;
    ctx->downcount -= 7;
    // 7F307BB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F307BB8:
    ctx->pc = 0x7F307BB8u;
    // 7F307BB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307BBC:
    ctx->pc = 0x7F307BBCu;
    // 7F307BBC: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F307BC0:
    ctx->pc = 0x7F307BC0u;
    // 7F307BC0: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F307BC4:
    ctx->pc = 0x7F307BC4u;
    // 7F307BC4: stw     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F307BC8:
    ctx->pc = 0x7F307BC8u;
    // 7F307BC8: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307BCC:
    ctx->pc = 0x7F307BCCu;
    // 7F307BCC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F307BD0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F307BD0:
    ctx->pc = 0x7F307BD0u;
    ctx->downcount -= 2;
    // 7F307BD0: cmplwi  r3, 0x0000
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

label_7F307BD4:
    ctx->pc = 0x7F307BD4u;
    // 7F307BD4: bc    12, 2, 0x7F307BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307BE0;
        }
    }

label_7F307BD8:
    ctx->pc = 0x7F307BD8u;
    ctx->downcount -= 1;
    // 7F307BD8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F307BDCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F307BDC:
    ctx->pc = 0x7F307BDCu;
    ctx->downcount -= 1;
    // 7F307BDC: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307BE0:
    ctx->pc = 0x7F307BE0u;
    ctx->downcount -= 2;
    // 7F307BE0: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F307BE4:
    ctx->pc = 0x7F307BE4u;
    // 7F307BE4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F307BE8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F307BE8:
    ctx->pc = 0x7F307BE8u;
    ctx->downcount -= 2;
    // 7F307BE8: cmplwi  r3, 0x0000
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

label_7F307BEC:
    ctx->pc = 0x7F307BECu;
    // 7F307BEC: bc    12, 2, 0x7F307BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307BF8;
        }
    }

label_7F307BF0:
    ctx->pc = 0x7F307BF0u;
    ctx->downcount -= 1;
    // 7F307BF0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F307BF4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F307BF4:
    ctx->pc = 0x7F307BF4u;
    ctx->downcount -= 1;
    // 7F307BF4: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307BF8:
    ctx->pc = 0x7F307BF8u;
    ctx->downcount -= 2;
    // 7F307BF8: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F307BFC:
    ctx->pc = 0x7F307BFCu;
    // 7F307BFC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F307C00u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F307C00:
    ctx->pc = 0x7F307C00u;
    ctx->downcount -= 2;
    // 7F307C00: cmplwi  r3, 0x0000
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

label_7F307C04:
    ctx->pc = 0x7F307C04u;
    // 7F307C04: bc    12, 2, 0x7F307C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307C10;
        }
    }

label_7F307C08:
    ctx->pc = 0x7F307C08u;
    ctx->downcount -= 1;
    // 7F307C08: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F307C0Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F307C0C:
    ctx->pc = 0x7F307C0Cu;
    ctx->downcount -= 1;
    // 7F307C0C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307C10:
    ctx->pc = 0x7F307C10u;
    ctx->downcount -= 2;
    // 7F307C10: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F307C14:
    ctx->pc = 0x7F307C14u;
    // 7F307C14: bl      0x7F3C664C
    {
            ctx->lr = 0x7F307C18u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F307C18:
    ctx->pc = 0x7F307C18u;
    ctx->downcount -= 2;
    // 7F307C18: cmplwi  r3, 0x0000
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

label_7F307C1C:
    ctx->pc = 0x7F307C1Cu;
    // 7F307C1C: bc    12, 2, 0x7F307C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307C94;
        }
    }

label_7F307C20:
    ctx->pc = 0x7F307C20u;
    ctx->downcount -= 1;
    // 7F307C20: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F307C24u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F307C24:
    ctx->pc = 0x7F307C24u;
    ctx->downcount -= 2;
    // 7F307C24: cmpwi   r3, 2
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

label_7F307C28:
    ctx->pc = 0x7F307C28u;
    // 7F307C28: bc    12, 2, 0x7F307C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307C64;
        }
    }

label_7F307C2C:
    ctx->pc = 0x7F307C2Cu;
    ctx->downcount -= 1;
    // 7F307C2C: bc    4, 0, 0x7F307C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307C3C;
        }
    }

label_7F307C30:
    ctx->pc = 0x7F307C30u;
    ctx->downcount -= 2;
    // 7F307C30: cmpwi   r3, 1
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

label_7F307C34:
    ctx->pc = 0x7F307C34u;
    // 7F307C34: bc    4, 0, 0x7F307C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307C48;
        }
    }

label_7F307C38:
    ctx->pc = 0x7F307C38u;
    ctx->downcount -= 1;
    // 7F307C38: b       0x7F307C94
    {
            goto label_7F307C94;
    }

label_7F307C3C:
    ctx->pc = 0x7F307C3Cu;
    ctx->downcount -= 2;
    // 7F307C3C: cmpwi   r3, 4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307C40:
    ctx->pc = 0x7F307C40u;
    // 7F307C40: bc    4, 0, 0x7F307C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307C94;
        }
    }

label_7F307C44:
    ctx->pc = 0x7F307C44u;
    ctx->downcount -= 1;
    // 7F307C44: b       0x7F307C80
    {
            goto label_7F307C80;
    }

label_7F307C48:
    ctx->pc = 0x7F307C48u;
    ctx->downcount -= 7;
    // 7F307C48: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F307C4C:
    ctx->pc = 0x7F307C4Cu;
    // 7F307C4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307C50:
    ctx->pc = 0x7F307C50u;
    // 7F307C50: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307C54:
    ctx->pc = 0x7F307C54u;
    // 7F307C54: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F307C58:
    ctx->pc = 0x7F307C58u;
    // 7F307C58: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307C5C:
    ctx->pc = 0x7F307C5Cu;
    // 7F307C5C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307C60:
    ctx->pc = 0x7F307C60u;
    // 7F307C60: b       0x7F307C94
    {
            goto label_7F307C94;
    }

label_7F307C64:
    ctx->pc = 0x7F307C64u;
    ctx->downcount -= 7;
    // 7F307C64: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F307C68:
    ctx->pc = 0x7F307C68u;
    // 7F307C68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307C6C:
    ctx->pc = 0x7F307C6Cu;
    // 7F307C6C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307C70:
    ctx->pc = 0x7F307C70u;
    // 7F307C70: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F307C74:
    ctx->pc = 0x7F307C74u;
    // 7F307C74: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307C78:
    ctx->pc = 0x7F307C78u;
    // 7F307C78: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307C7C:
    ctx->pc = 0x7F307C7Cu;
    // 7F307C7C: b       0x7F307C94
    {
            goto label_7F307C94;
    }

label_7F307C80:
    ctx->pc = 0x7F307C80u;
    ctx->downcount -= 5;
    // 7F307C80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F307C84:
    ctx->pc = 0x7F307C84u;
    // 7F307C84: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F307C88:
    ctx->pc = 0x7F307C88u;
    // 7F307C88: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307C8C:
    ctx->pc = 0x7F307C8Cu;
    // 7F307C8C: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307C90:
    ctx->pc = 0x7F307C90u;
    // 7F307C90: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307C94:
    ctx->pc = 0x7F307C94u;
    ctx->downcount -= 6;
    // 7F307C94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307C98:
    ctx->pc = 0x7F307C98u;
    // 7F307C98: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307C9C:
    ctx->pc = 0x7F307C9Cu;
    // 7F307C9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307CA0:
    ctx->pc = 0x7F307CA0u;
    // 7F307CA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307CA4:
    ctx->pc = 0x7F307CA4u;
    // 7F307CA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307CA8:
    ctx->pc = 0x7F307CA8u;
    ctx->downcount -= 6;
    // 7F307CA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307CAC:
    ctx->pc = 0x7F307CACu;
    // 7F307CAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307CB0:
    ctx->pc = 0x7F307CB0u;
    // 7F307CB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307CB4:
    ctx->pc = 0x7F307CB4u;
    // 7F307CB4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F307CB8:
    ctx->pc = 0x7F307CB8u;
    // 7F307CB8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307CBC:
    ctx->pc = 0x7F307CBCu;
    // 7F307CBC: bl      0x7F307B68
    {
            ctx->lr = 0x7F307CC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307B68u;
                return;
            }
            goto label_7F307B68;
    }

label_7F307CC0:
    ctx->pc = 0x7F307CC0u;
    ctx->downcount -= 5;
    // 7F307CC0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307CC4:
    ctx->pc = 0x7F307CC4u;
    // 7F307CC4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F307CC8:
    ctx->pc = 0x7F307CC8u;
    // 7F307CC8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F307CCC:
    ctx->pc = 0x7F307CCCu;
    // 7F307CCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F307CD0:
    ctx->pc = 0x7F307CD0u;
    // 7F307CD0: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F307CD4u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F307CD4:
    ctx->pc = 0x7F307CD4u;
    ctx->downcount -= 3;
    // 7F307CD4: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F307CD8:
    ctx->pc = 0x7F307CD8u;
    // 7F307CD8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307CDC:
    ctx->pc = 0x7F307CDCu;
    // 7F307CDC: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F307CE0u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F307CE0:
    ctx->pc = 0x7F307CE0u;
    ctx->downcount -= 7;
    // 7F307CE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307CE4:
    ctx->pc = 0x7F307CE4u;
    // 7F307CE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F307CE8:
    ctx->pc = 0x7F307CE8u;
    // 7F307CE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F307CEC:
    ctx->pc = 0x7F307CECu;
    // 7F307CEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307CF0:
    ctx->pc = 0x7F307CF0u;
    // 7F307CF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307CF4:
    ctx->pc = 0x7F307CF4u;
    // 7F307CF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307CF8:
    ctx->pc = 0x7F307CF8u;
    ctx->downcount -= 21;
    // 7F307CF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307CFC:
    ctx->pc = 0x7F307CFCu;
    // 7F307CFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307D00:
    ctx->pc = 0x7F307D00u;
    // 7F307D00: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F307D04:
    ctx->pc = 0x7F307D04u;
    // 7F307D04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F307D08:
    ctx->pc = 0x7F307D08u;
    // 7F307D08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307D0C:
    ctx->pc = 0x7F307D0Cu;
    // 7F307D0C: addi    r5, r4, 14144
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14144);

label_7F307D10:
    ctx->pc = 0x7F307D10u;
    // 7F307D10: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F307D14:
    ctx->pc = 0x7F307D14u;
    // 7F307D14: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F307D18:
    ctx->pc = 0x7F307D18u;
    // 7F307D18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307D1C:
    ctx->pc = 0x7F307D1Cu;
    // 7F307D1C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F307D20:
    ctx->pc = 0x7F307D20u;
    // 7F307D20: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F307D24u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F307D24:
    ctx->pc = 0x7F307D24u;
    ctx->downcount -= 5;
    // 7F307D24: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F307D28:
    ctx->pc = 0x7F307D28u;
    // 7F307D28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307D2C:
    ctx->pc = 0x7F307D2Cu;
    // 7F307D2C: or.   r31, r3, r3
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

label_7F307D30:
    ctx->pc = 0x7F307D30u;
    // 7F307D30: stw     r0, -10344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307D34:
    ctx->pc = 0x7F307D34u;
    // 7F307D34: bc    12, 2, 0x7F307DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307DAC;
        }
    }

label_7F307D38:
    ctx->pc = 0x7F307D38u;
    ctx->downcount -= 6;
    // 7F307D38: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F307D3C:
    ctx->pc = 0x7F307D3Cu;
    // 7F307D3C: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F307D40:
    ctx->pc = 0x7F307D40u;
    // 7F307D40: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F307D44:
    ctx->pc = 0x7F307D44u;
    // 7F307D44: addi    r4, r4, 31192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31192);

label_7F307D48:
    ctx->pc = 0x7F307D48u;
    // 7F307D48: addi    r5, r5, 31528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31528);

label_7F307D4C:
    ctx->pc = 0x7F307D4Cu;
    // 7F307D4C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F307D50u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F307D50:
    ctx->pc = 0x7F307D50u;
    ctx->downcount -= 13;
    // 7F307D50: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307D54:
    ctx->pc = 0x7F307D54u;
    // 7F307D54: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F307D58:
    ctx->pc = 0x7F307D58u;
    // 7F307D58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F307D5C:
    ctx->pc = 0x7F307D5Cu;
    // 7F307D5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307D60:
    ctx->pc = 0x7F307D60u;
    // 7F307D60: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F307D64:
    ctx->pc = 0x7F307D64u;
    // 7F307D64: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F307D68:
    ctx->pc = 0x7F307D68u;
    // 7F307D68: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F307D6C:
    ctx->pc = 0x7F307D6Cu;
    // 7F307D6C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307D70:
    ctx->pc = 0x7F307D70u;
    // 7F307D70: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307D74:
    ctx->pc = 0x7F307D74u;
    // 7F307D74: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307D78:
    ctx->pc = 0x7F307D78u;
    // 7F307D78: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307D7C:
    ctx->pc = 0x7F307D7Cu;
    // 7F307D7C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307D80:
    ctx->pc = 0x7F307D80u;
    // 7F307D80: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F307D84u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F307D84:
    ctx->pc = 0x7F307D84u;
    ctx->downcount -= 2;
    // 7F307D84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307D88:
    ctx->pc = 0x7F307D88u;
    // 7F307D88: bl      0x7F307CA8
    {
            ctx->lr = 0x7F307D8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307CA8u;
                return;
            }
            goto label_7F307CA8;
    }

label_7F307D8C:
    ctx->pc = 0x7F307D8Cu;
    ctx->downcount -= 2;
    // 7F307D8C: cmpwi   r3, 0
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

label_7F307D90:
    ctx->pc = 0x7F307D90u;
    // 7F307D90: bc    4, 2, 0x7F307DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307DA4;
        }
    }

label_7F307D94:
    ctx->pc = 0x7F307D94u;
    ctx->downcount -= 2;
    // 7F307D94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307D98:
    ctx->pc = 0x7F307D98u;
    // 7F307D98: bl      0x7F3C8210
    {
            ctx->lr = 0x7F307D9Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F307D9C:
    ctx->pc = 0x7F307D9Cu;
    ctx->downcount -= 2;
    // 7F307D9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F307DA0:
    ctx->pc = 0x7F307DA0u;
    // 7F307DA0: b       0x7F307DB0
    {
            goto label_7F307DB0;
    }

label_7F307DA4:
    ctx->pc = 0x7F307DA4u;
    ctx->downcount -= 2;
    // 7F307DA4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F307DA8:
    ctx->pc = 0x7F307DA8u;
    // 7F307DA8: bl      0x7F0208E4
    {
            ctx->lr = 0x7F307DACu;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F307DAC:
    ctx->pc = 0x7F307DACu;
    ctx->downcount -= 1;
    // 7F307DAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307DB0:
    ctx->pc = 0x7F307DB0u;
    ctx->downcount -= 16;
    // 7F307DB0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F307DB4:
    ctx->pc = 0x7F307DB4u;
    // 7F307DB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307DB8:
    ctx->pc = 0x7F307DB8u;
    // 7F307DB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307DBC:
    ctx->pc = 0x7F307DBCu;
    // 7F307DBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307DC0:
    ctx->pc = 0x7F307DC0u;
    // 7F307DC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307DC4:
    ctx->pc = 0x7F307DC4u;
    ctx->downcount -= 25;
    // 7F307DC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307DC8:
    ctx->pc = 0x7F307DC8u;
    // 7F307DC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307DCC:
    ctx->pc = 0x7F307DCCu;
    // 7F307DCC: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_7F307DD0:
    ctx->pc = 0x7F307DD0u;
    // 7F307DD0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F307DD4:
    ctx->pc = 0x7F307DD4u;
    // 7F307DD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307DD8:
    ctx->pc = 0x7F307DD8u;
    // 7F307DD8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F307DDC:
    ctx->pc = 0x7F307DDCu;
    // 7F307DDC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307DE0:
    ctx->pc = 0x7F307DE0u;
    // 7F307DE0: lbz     r0, -32744(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F307DE4:
    ctx->pc = 0x7F307DE4u;
    // 7F307DE4: addi    r4, r5, -32088
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-32088);

label_7F307DE8:
    ctx->pc = 0x7F307DE8u;
    // 7F307DE8: lha     r3, 230(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(230);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307DEC:
    ctx->pc = 0x7F307DECu;
    // 7F307DEC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F307DF0:
    ctx->pc = 0x7F307DF0u;
    // 7F307DF0: add   r5, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F307DF4:
    ctx->pc = 0x7F307DF4u;
    // 7F307DF4: addi    r4, r3, 2
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2);

label_7F307DF8:
    ctx->pc = 0x7F307DF8u;
    // 7F307DF8: lwz     r3, -4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307DFC:
    ctx->pc = 0x7F307DFCu;
    // 7F307DFC: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F307E00u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F307E00:
    ctx->pc = 0x7F307E00u;
    ctx->downcount -= 5;
    // 7F307E00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307E04:
    ctx->pc = 0x7F307E04u;
    // 7F307E04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307E08:
    ctx->pc = 0x7F307E08u;
    // 7F307E08: stw     r0, 432(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307E0C:
    ctx->pc = 0x7F307E0Cu;
    // 7F307E0C: lwz     r3, 316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307E10:
    ctx->pc = 0x7F307E10u;
    // 7F307E10: bl      0x7F19C738
    {
            ctx->lr = 0x7F307E14u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F307E14:
    ctx->pc = 0x7F307E14u;
    ctx->downcount -= 11;
    // 7F307E14: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F307E18:
    ctx->pc = 0x7F307E18u;
    // 7F307E18: lwz     r3, 316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307E1C:
    ctx->pc = 0x7F307E1Cu;
    // 7F307E1C: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F307E20:
    ctx->pc = 0x7F307E20u;
    // 7F307E20: or   r10, r31, r31
    {
        ctx->gpr[10] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F307E24:
    ctx->pc = 0x7F307E24u;
    // 7F307E24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F307E28:
    ctx->pc = 0x7F307E28u;
    // 7F307E28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F307E2C:
    ctx->pc = 0x7F307E2Cu;
    // 7F307E2C: li      r6, 720
    ctx->gpr[6] = (u32)(s32)(720);

label_7F307E30:
    ctx->pc = 0x7F307E30u;
    // 7F307E30: addi    r7, r7, 109
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(109);

label_7F307E34:
    ctx->pc = 0x7F307E34u;
    // 7F307E34: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F307E38:
    ctx->pc = 0x7F307E38u;
    // 7F307E38: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F307E3C:
    ctx->pc = 0x7F307E3Cu;
    // 7F307E3C: bl      0x7F19C814
    {
            ctx->lr = 0x7F307E40u;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F307E40:
    ctx->pc = 0x7F307E40u;
    ctx->downcount -= 18;
    // 7F307E40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307E44:
    ctx->pc = 0x7F307E44u;
    // 7F307E44: stw     r0, 428(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307E48:
    ctx->pc = 0x7F307E48u;
    // 7F307E48: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F307E4C:
    ctx->pc = 0x7F307E4Cu;
    // 7F307E4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307E50:
    ctx->pc = 0x7F307E50u;
    // 7F307E50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307E54:
    ctx->pc = 0x7F307E54u;
    // 7F307E54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307E58:
    ctx->pc = 0x7F307E58u;
    // 7F307E58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307E5C:
    ctx->pc = 0x7F307E5Cu;
    ctx->downcount -= 6;
    // 7F307E5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307E60:
    ctx->pc = 0x7F307E60u;
    // 7F307E60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307E64:
    ctx->pc = 0x7F307E64u;
    // 7F307E64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307E68:
    ctx->pc = 0x7F307E68u;
    // 7F307E68: lwz     r0, 428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(428);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307E6C:
    ctx->pc = 0x7F307E6Cu;
    // 7F307E6C: cmpwi   r0, 0
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

label_7F307E70:
    ctx->pc = 0x7F307E70u;
    // 7F307E70: bc    12, 2, 0x7F307ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307ED4;
        }
    }

label_7F307E74:
    ctx->pc = 0x7F307E74u;
    ctx->downcount -= 4;
    // 7F307E74: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307E78:
    ctx->pc = 0x7F307E78u;
    // 7F307E78: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F307E7C:
    ctx->pc = 0x7F307E7Cu;
    // 7F307E7C: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307E80:
    ctx->pc = 0x7F307E80u;
    // 7F307E80: bc    12, 2, 0x7F307E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F307E88;
        }
    }

label_7F307E84:
    ctx->pc = 0x7F307E84u;
    ctx->downcount -= 1;
    // 7F307E84: b       0x7F307E8C
    {
            goto label_7F307E8C;
    }

label_7F307E88:
    ctx->pc = 0x7F307E88u;
    ctx->downcount -= 1;
    // 7F307E88: li      r4, 47
    ctx->gpr[4] = (u32)(s32)(47);

label_7F307E8C:
    ctx->pc = 0x7F307E8Cu;
    ctx->downcount -= 57;
    // 7F307E8C: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F307E90:
    ctx->pc = 0x7F307E90u;
    // 7F307E90: lis     r5, -32623
    ctx->gpr[5] = ((u32)(s32)(-32623) << 16);

label_7F307E94:
    ctx->pc = 0x7F307E94u;
    // 7F307E94: lwz     r7, 19356(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F307E98:
    ctx->pc = 0x7F307E98u;
    // 7F307E98: addi    r9, r5, -28528
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-28528);

label_7F307E9C:
    ctx->pc = 0x7F307E9Cu;
    // 7F307E9C: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F307EA0:
    ctx->pc = 0x7F307EA0u;
    // 7F307EA0: addi    r6, r4, 480
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(480);

label_7F307EA4:
    ctx->pc = 0x7F307EA4u;
    // 7F307EA4: addi    r8, r7, 109
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(109);

label_7F307EA8:
    ctx->pc = 0x7F307EA8u;
    // 7F307EA8: li      r5, 378
    ctx->gpr[5] = (u32)(s32)(378);

label_7F307EAC:
    ctx->pc = 0x7F307EACu;
    // 7F307EAC: rlwinm r7, r8, 4, 0, 27
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F307EB0:
    ctx->pc = 0x7F307EB0u;
    // 7F307EB0: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F307EB4:
    ctx->pc = 0x7F307EB4u;
    // 7F307EB4: divw   r7, r7, r0
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F307EB8:
    ctx->pc = 0x7F307EB8u;
    // 7F307EB8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F307EBC:
    ctx->pc = 0x7F307EBCu;
    // 7F307EBC: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F307EC0:
    ctx->pc = 0x7F307EC0u;
    // 7F307EC0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F307EC4:
    ctx->pc = 0x7F307EC4u;
    // 7F307EC4: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F307EC8:
    ctx->pc = 0x7F307EC8u;
    // 7F307EC8: lwz     r3, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307ECC:
    ctx->pc = 0x7F307ECCu;
    // 7F307ECC: addi    r7, r7, 378
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(378);

label_7F307ED0:
    ctx->pc = 0x7F307ED0u;
    // 7F307ED0: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F307ED4u;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F307ED4:
    ctx->pc = 0x7F307ED4u;
    ctx->downcount -= 5;
    // 7F307ED4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307ED8:
    ctx->pc = 0x7F307ED8u;
    // 7F307ED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307EDC:
    ctx->pc = 0x7F307EDCu;
    // 7F307EDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307EE0:
    ctx->pc = 0x7F307EE0u;
    // 7F307EE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307EE4:
    ctx->pc = 0x7F307EE4u;
    ctx->downcount -= 25;
    // 7F307EE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307EE8:
    ctx->pc = 0x7F307EE8u;
    // 7F307EE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307EEC:
    ctx->pc = 0x7F307EECu;
    // 7F307EEC: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_7F307EF0:
    ctx->pc = 0x7F307EF0u;
    // 7F307EF0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F307EF4:
    ctx->pc = 0x7F307EF4u;
    // 7F307EF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307EF8:
    ctx->pc = 0x7F307EF8u;
    // 7F307EF8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F307EFC:
    ctx->pc = 0x7F307EFCu;
    // 7F307EFC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307F00:
    ctx->pc = 0x7F307F00u;
    // 7F307F00: lbz     r0, -32744(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F307F04:
    ctx->pc = 0x7F307F04u;
    // 7F307F04: addi    r4, r5, -32088
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-32088);

label_7F307F08:
    ctx->pc = 0x7F307F08u;
    // 7F307F08: lha     r3, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307F0C:
    ctx->pc = 0x7F307F0Cu;
    // 7F307F0C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F307F10:
    ctx->pc = 0x7F307F10u;
    // 7F307F10: add   r5, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F307F14:
    ctx->pc = 0x7F307F14u;
    // 7F307F14: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_7F307F18:
    ctx->pc = 0x7F307F18u;
    // 7F307F18: lwz     r3, -4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307F1C:
    ctx->pc = 0x7F307F1Cu;
    // 7F307F1C: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F307F20u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F307F20:
    ctx->pc = 0x7F307F20u;
    ctx->downcount -= 4;
    // 7F307F20: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307F24:
    ctx->pc = 0x7F307F24u;
    // 7F307F24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F307F28:
    ctx->pc = 0x7F307F28u;
    // 7F307F28: stw     r0, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307F2C:
    ctx->pc = 0x7F307F2Cu;
    // 7F307F2C: b       0x7F307F4C
    {
            goto label_7F307F4C;
    }

label_7F307F30:
    ctx->downcount -= 3;
    // 7F307F30: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F307F34:
    // 7F307F34: cmpwi   r0, 124
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(124);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F307F38:
    // 7F307F38: bc    4, 2, 0x7F307F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F307F48;
        }
    }

label_7F307F3C:
    ctx->pc = 0x7F307F3Cu;
    ctx->downcount -= 3;
    // 7F307F3C: lwz     r4, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F307F40:
    // 7F307F40: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F307F44:
    ctx->pc = 0x7F307F44u;
    // 7F307F44: stw     r0, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307F48:
    ctx->downcount -= 1;
    // 7F307F48: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F307F4C:
    ctx->pc = 0x7F307F4Cu;
    ctx->downcount -= 3;
    // 7F307F4C: lbz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F307F50:
    // 7F307F50: extsb. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F307F54:
    // 7F307F54: bc    4, 2, 0x7F307F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F307F30u;
                return;
            }
            goto label_7F307F30;
        }
    }

label_7F307F58:
    ctx->pc = 0x7F307F58u;
    ctx->downcount -= 2;
    // 7F307F58: lwz     r3, 316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307F5C:
    ctx->pc = 0x7F307F5Cu;
    // 7F307F5C: bl      0x7F19C738
    {
            ctx->lr = 0x7F307F60u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F307F60:
    ctx->pc = 0x7F307F60u;
    ctx->downcount -= 11;
    // 7F307F60: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F307F64:
    ctx->pc = 0x7F307F64u;
    // 7F307F64: lwz     r3, 316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307F68:
    ctx->pc = 0x7F307F68u;
    // 7F307F68: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F307F6C:
    ctx->pc = 0x7F307F6Cu;
    // 7F307F6C: or   r10, r30, r30
    {
        ctx->gpr[10] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F307F70:
    ctx->pc = 0x7F307F70u;
    // 7F307F70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F307F74:
    ctx->pc = 0x7F307F74u;
    // 7F307F74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F307F78:
    ctx->pc = 0x7F307F78u;
    // 7F307F78: li      r6, 720
    ctx->gpr[6] = (u32)(s32)(720);

label_7F307F7C:
    ctx->pc = 0x7F307F7Cu;
    // 7F307F7C: addi    r7, r7, 109
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(109);

label_7F307F80:
    ctx->pc = 0x7F307F80u;
    // 7F307F80: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F307F84:
    ctx->pc = 0x7F307F84u;
    // 7F307F84: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F307F88:
    ctx->pc = 0x7F307F88u;
    // 7F307F88: bl      0x7F19C814
    {
            ctx->lr = 0x7F307F8Cu;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F307F8C:
    ctx->pc = 0x7F307F8Cu;
    ctx->downcount -= 18;
    // 7F307F8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F307F90:
    ctx->pc = 0x7F307F90u;
    // 7F307F90: stw     r0, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307F94:
    ctx->pc = 0x7F307F94u;
    // 7F307F94: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F307F98:
    ctx->pc = 0x7F307F98u;
    // 7F307F98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307F9C:
    ctx->pc = 0x7F307F9Cu;
    // 7F307F9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F307FA0:
    ctx->pc = 0x7F307FA0u;
    // 7F307FA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307FA4:
    ctx->pc = 0x7F307FA4u;
    // 7F307FA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F307FA8:
    ctx->pc = 0x7F307FA8u;
    ctx->downcount -= 20;
    // 7F307FA8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F307FAC:
    ctx->pc = 0x7F307FACu;
    // 7F307FAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F307FB0:
    ctx->pc = 0x7F307FB0u;
    // 7F307FB0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F307FB4:
    ctx->pc = 0x7F307FB4u;
    // 7F307FB4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F307FB8:
    ctx->pc = 0x7F307FB8u;
    // 7F307FB8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307FBC:
    ctx->pc = 0x7F307FBCu;
    // 7F307FBC: addi    r6, r1, 16
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(16);

label_7F307FC0:
    ctx->pc = 0x7F307FC0u;
    // 7F307FC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F307FC4:
    ctx->pc = 0x7F307FC4u;
    // 7F307FC4: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F307FC8:
    ctx->pc = 0x7F307FC8u;
    // 7F307FC8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F307FCC:
    ctx->pc = 0x7F307FCCu;
    // 7F307FCC: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F307FD0:
    ctx->pc = 0x7F307FD0u;
    // 7F307FD0: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F307FD4:
    ctx->pc = 0x7F307FD4u;
    // 7F307FD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307FD8:
    ctx->pc = 0x7F307FD8u;
    // 7F307FD8: lha     r0, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307FDC:
    ctx->pc = 0x7F307FDCu;
    // 7F307FDC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307FE0:
    ctx->pc = 0x7F307FE0u;
    // 7F307FE0: lha     r0, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307FE4:
    ctx->pc = 0x7F307FE4u;
    // 7F307FE4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307FE8:
    ctx->pc = 0x7F307FE8u;
    // 7F307FE8: lha     r0, 234(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(234);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F307FEC:
    ctx->pc = 0x7F307FECu;
    // 7F307FEC: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F307FF0:
    ctx->pc = 0x7F307FF0u;
    // 7F307FF0: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F307FF4:
    ctx->pc = 0x7F307FF4u;
    // 7F307FF4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F307FF8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F307FF8:
    ctx->pc = 0x7F307FF8u;
    ctx->downcount -= 5;
    // 7F307FF8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F307FFC:
    ctx->pc = 0x7F307FFCu;
    // 7F307FFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F308000:
    ctx->pc = 0x7F308000u;
    // 7F308000: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F308004:
    ctx->pc = 0x7F308004u;
    // 7F308004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F308008:
    ctx->pc = 0x7F308008u;
    ctx->downcount -= 8;
    // 7F308008: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30800C:
    ctx->pc = 0x7F30800Cu;
    // 7F30800C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F308010:
    ctx->pc = 0x7F308010u;
    // 7F308010: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F308014:
    ctx->pc = 0x7F308014u;
    // 7F308014: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F308018:
    ctx->pc = 0x7F308018u;
    // 7F308018: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30801C:
    ctx->pc = 0x7F30801Cu;
    // 7F30801C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F308020:
    ctx->pc = 0x7F308020u;
    // 7F308020: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F308024:
    ctx->pc = 0x7F308024u;
    // 7F308024: bl      0x7F3C9624
    {
            ctx->lr = 0x7F308028u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F308028:
    ctx->pc = 0x7F308028u;
    ctx->downcount -= 5;
    // 7F308028: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F30802C:
    ctx->pc = 0x7F30802Cu;
    // 7F30802C: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F308030:
    ctx->pc = 0x7F308030u;
    // 7F308030: cmpwi   r3, 0
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

label_7F308034:
    ctx->pc = 0x7F308034u;
    // 7F308034: bc    4, 1, 0x7F30806C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30806C;
        }
    }

label_7F308038:
    ctx->pc = 0x7F308038u;
    ctx->downcount -= 7;
    // 7F308038: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30803C:
    ctx->pc = 0x7F30803Cu;
    // 7F30803C: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F308040:
    ctx->pc = 0x7F308040u;
    // 7F308040: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F308044:
    ctx->pc = 0x7F308044u;
    // 7F308044: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F308048:
    // 7F308048: addis   r0, r3, -95
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-95) << 16);

label_7F30804C:
    // 7F30804C: cmplwi  r0, 0x6796
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x6796u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F308050:
    // 7F308050: bc    4, 2, 0x7F30805C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30805C;
        }
    }

label_7F308054:
    ctx->pc = 0x7F308054u;
    ctx->downcount -= 2;
    // 7F308054: sth     r5, 234(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(234);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F308058:
    ctx->pc = 0x7F308058u;
    // 7F308058: stw     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30805C:
    ctx->pc = 0x7F30805Cu;
    ctx->downcount -= 4;
    // 7F30805C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F308060:
    // 7F308060: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F308064:
    ctx->pc = 0x7F308064u;
    // 7F308064: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F308068:
    // 7F308068: bc    16, 0, 0x7F308038
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F308038u;
                return;
            }
            goto label_7F308038;
        }
    }

label_7F30806C:
    ctx->pc = 0x7F30806Cu;
    ctx->downcount -= 6;
    // 7F30806C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F308070:
    ctx->pc = 0x7F308070u;
    // 7F308070: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F308074:
    ctx->pc = 0x7F308074u;
    // 7F308074: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F308078:
    ctx->pc = 0x7F308078u;
    // 7F308078: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30807C:
    ctx->pc = 0x7F30807Cu;
    // 7F30807C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3040EC;
        }
    }

label_7F308080:
    ctx->pc = 0x7F308080u;
    ctx->downcount -= 8;
    // 7F308080: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F308084:
    ctx->pc = 0x7F308084u;
    // 7F308084: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F308088:
    ctx->pc = 0x7F308088u;
    // 7F308088: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30808C:
    ctx->pc = 0x7F30808Cu;
    // 7F30808C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F308090:
    ctx->pc = 0x7F308090u;
    // 7F308090: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F308094:
    ctx->pc = 0x7F308094u;
    // 7F308094: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F308098:
    ctx->pc = 0x7F308098u;
    // 7F308098: cmpwi   r0, 0
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

label_7F30809C:
    ctx->pc = 0x7F30809Cu;
    // 7F30809C: bc    4, 2, 0x7F3087E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3087E0u;
            return;
        }
    }

label_7F3080A0:
    ctx->pc = 0x7F3080A0u;
    ctx->downcount -= 3;
    // 7F3080A0: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3080A4:
    ctx->pc = 0x7F3080A4u;
    // 7F3080A4: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3080A8:
    ctx->pc = 0x7F3080A8u;
    // 7F3080A8: bc    12, 1, 0x7F3087E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3087E0u;
            return;
        }
    }

label_7F3080AC:
    ctx->pc = 0x7F3080ACu;
    ctx->downcount -= 7;
    // 7F3080AC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3080B0:
    ctx->pc = 0x7F3080B0u;
    // 7F3080B0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3080B4:
    ctx->pc = 0x7F3080B4u;
    // 7F3080B4: addi    r4, r4, -27312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27312);

label_7F3080B8:
    ctx->pc = 0x7F3080B8u;
    // 7F3080B8: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3080BC:
    ctx->pc = 0x7F3080BCu;
    // 7F3080BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3080C0:
    ctx->pc = 0x7F3080C0u;
    // 7F3080C0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F3080C4:
    ctx->pc = 0x7F3080C4u;
    ctx->downcount -= 8;
    // 7F3080C4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3080C8:
    ctx->pc = 0x7F3080C8u;
    // 7F3080C8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3080CC:
    ctx->pc = 0x7F3080CCu;
    // 7F3080CC: sth     r0, 234(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(234);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3080D0:
    ctx->pc = 0x7F3080D0u;
    // 7F3080D0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3080D4:
    ctx->pc = 0x7F3080D4u;
    // 7F3080D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3080D8:
    ctx->pc = 0x7F3080D8u;
    // 7F3080D8: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3080DC:
    ctx->pc = 0x7F3080DCu;
    // 7F3080DC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3080E0:
    ctx->pc = 0x7F3080E0u;
    // 7F3080E0: bc    12, 2, 0x7F308100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F308100u;
            return;
        }
    }

label_7F3080E4:
    ctx->pc = 0x7F3080E4u;
    ctx->downcount -= 2;
    // 7F3080E4: lha     r0, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3080E8:
    ctx->pc = 0x7F3080E8u;
    // 7F3080E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

    ctx->pc = 0x7F3080ECu;
    return;
return_dispatch_7F3040EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F304104u: goto label_7F304104;
    case 0x7F304124u: goto label_7F304124;
    case 0x7F3041ACu: goto label_7F3041AC;
    case 0x7F30425Cu: goto label_7F30425C;
    case 0x7F30432Cu: goto label_7F30432C;
    case 0x7F304364u: goto label_7F304364;
    case 0x7F30444Cu: goto label_7F30444C;
    case 0x7F304450u: goto label_7F304450;
    case 0x7F3044F8u: goto label_7F3044F8;
    case 0x7F304538u: goto label_7F304538;
    case 0x7F30456Cu: goto label_7F30456C;
    case 0x7F304580u: goto label_7F304580;
    case 0x7F3045A8u: goto label_7F3045A8;
    case 0x7F3045DCu: goto label_7F3045DC;
    case 0x7F3045E8u: goto label_7F3045E8;
    case 0x7F3045F8u: goto label_7F3045F8;
    case 0x7F304618u: goto label_7F304618;
    case 0x7F304658u: goto label_7F304658;
    case 0x7F304694u: goto label_7F304694;
    case 0x7F3046A0u: goto label_7F3046A0;
    case 0x7F3046A8u: goto label_7F3046A8;
    case 0x7F3046C8u: goto label_7F3046C8;
    case 0x7F3046E4u: goto label_7F3046E4;
    case 0x7F30471Cu: goto label_7F30471C;
    case 0x7F3047ACu: goto label_7F3047AC;
    case 0x7F3047D4u: goto label_7F3047D4;
    case 0x7F304808u: goto label_7F304808;
    case 0x7F304830u: goto label_7F304830;
    case 0x7F3048D4u: goto label_7F3048D4;
    case 0x7F3048ECu: goto label_7F3048EC;
    case 0x7F304998u: goto label_7F304998;
    case 0x7F3049B0u: goto label_7F3049B0;
    case 0x7F3049C8u: goto label_7F3049C8;
    case 0x7F3049E0u: goto label_7F3049E0;
    case 0x7F3049FCu: goto label_7F3049FC;
    case 0x7F304A00u: goto label_7F304A00;
    case 0x7F304A04u: goto label_7F304A04;
    case 0x7F304A8Cu: goto label_7F304A8C;
    case 0x7F304AA4u: goto label_7F304AA4;
    case 0x7F304ABCu: goto label_7F304ABC;
    case 0x7F304B14u: goto label_7F304B14;
    case 0x7F304B74u: goto label_7F304B74;
    case 0x7F304B84u: goto label_7F304B84;
    case 0x7F304BB0u: goto label_7F304BB0;
    case 0x7F304BBCu: goto label_7F304BBC;
    case 0x7F304BC8u: goto label_7F304BC8;
    case 0x7F304BD4u: goto label_7F304BD4;
    case 0x7F304C24u: goto label_7F304C24;
    case 0x7F304C38u: goto label_7F304C38;
    case 0x7F304C4Cu: goto label_7F304C4C;
    case 0x7F304C60u: goto label_7F304C60;
    case 0x7F304C8Cu: goto label_7F304C8C;
    case 0x7F304D74u: goto label_7F304D74;
    case 0x7F304D7Cu: goto label_7F304D7C;
    case 0x7F304D84u: goto label_7F304D84;
    case 0x7F304D90u: goto label_7F304D90;
    case 0x7F304DA0u: goto label_7F304DA0;
    case 0x7F304DD4u: goto label_7F304DD4;
    case 0x7F304E08u: goto label_7F304E08;
    case 0x7F304E18u: goto label_7F304E18;
    case 0x7F304EE0u: goto label_7F304EE0;
    case 0x7F305010u: goto label_7F305010;
    case 0x7F305020u: goto label_7F305020;
    case 0x7F305054u: goto label_7F305054;
    case 0x7F305080u: goto label_7F305080;
    case 0x7F305088u: goto label_7F305088;
    case 0x7F305094u: goto label_7F305094;
    case 0x7F3050A4u: goto label_7F3050A4;
    case 0x7F3050F8u: goto label_7F3050F8;
    case 0x7F305108u: goto label_7F305108;
    case 0x7F305174u: goto label_7F305174;
    case 0x7F305180u: goto label_7F305180;
    case 0x7F30518Cu: goto label_7F30518C;
    case 0x7F305198u: goto label_7F305198;
    case 0x7F3051A4u: goto label_7F3051A4;
    case 0x7F3051B4u: goto label_7F3051B4;
    case 0x7F3051C0u: goto label_7F3051C0;
    case 0x7F3051D0u: goto label_7F3051D0;
    case 0x7F3051DCu: goto label_7F3051DC;
    case 0x7F3051ECu: goto label_7F3051EC;
    case 0x7F3051F8u: goto label_7F3051F8;
    case 0x7F305210u: goto label_7F305210;
    case 0x7F305228u: goto label_7F305228;
    case 0x7F30523Cu: goto label_7F30523C;
    case 0x7F30524Cu: goto label_7F30524C;
    case 0x7F30525Cu: goto label_7F30525C;
    case 0x7F30526Cu: goto label_7F30526C;
    case 0x7F30537Cu: goto label_7F30537C;
    case 0x7F305410u: goto label_7F305410;
    case 0x7F305420u: goto label_7F305420;
    case 0x7F305430u: goto label_7F305430;
    case 0x7F305440u: goto label_7F305440;
    case 0x7F305544u: goto label_7F305544;
    case 0x7F30556Cu: goto label_7F30556C;
    case 0x7F305574u: goto label_7F305574;
    case 0x7F30557Cu: goto label_7F30557C;
    case 0x7F305584u: goto label_7F305584;
    case 0x7F3055ACu: goto label_7F3055AC;
    case 0x7F3055E0u: goto label_7F3055E0;
    case 0x7F3055F0u: goto label_7F3055F0;
    case 0x7F305604u: goto label_7F305604;
    case 0x7F305614u: goto label_7F305614;
    case 0x7F305624u: goto label_7F305624;
    case 0x7F305634u: goto label_7F305634;
    case 0x7F305644u: goto label_7F305644;
    case 0x7F305654u: goto label_7F305654;
    case 0x7F305664u: goto label_7F305664;
    case 0x7F305668u: goto label_7F305668;
    case 0x7F30566Cu: goto label_7F30566C;
    case 0x7F3056A8u: goto label_7F3056A8;
    case 0x7F3056C4u: goto label_7F3056C4;
    case 0x7F305864u: goto label_7F305864;
    case 0x7F305878u: goto label_7F305878;
    case 0x7F305884u: goto label_7F305884;
    case 0x7F3059F0u: goto label_7F3059F0;
    case 0x7F3059FCu: goto label_7F3059FC;
    case 0x7F305A14u: goto label_7F305A14;
    case 0x7F305A1Cu: goto label_7F305A1C;
    case 0x7F305A24u: goto label_7F305A24;
    case 0x7F305B10u: goto label_7F305B10;
    case 0x7F305C18u: goto label_7F305C18;
    case 0x7F305DD8u: goto label_7F305DD8;
    case 0x7F305F10u: goto label_7F305F10;
    case 0x7F305F20u: goto label_7F305F20;
    case 0x7F305F80u: goto label_7F305F80;
    case 0x7F305F90u: goto label_7F305F90;
    case 0x7F305FB4u: goto label_7F305FB4;
    case 0x7F306004u: goto label_7F306004;
    case 0x7F306124u: goto label_7F306124;
    case 0x7F306150u: goto label_7F306150;
    case 0x7F306158u: goto label_7F306158;
    case 0x7F306160u: goto label_7F306160;
    case 0x7F306168u: goto label_7F306168;
    case 0x7F30619Cu: goto label_7F30619C;
    case 0x7F3061ACu: goto label_7F3061AC;
    case 0x7F3061FCu: goto label_7F3061FC;
    case 0x7F306200u: goto label_7F306200;
    case 0x7F306220u: goto label_7F306220;
    case 0x7F30623Cu: goto label_7F30623C;
    case 0x7F306258u: goto label_7F306258;
    case 0x7F30625Cu: goto label_7F30625C;
    case 0x7F3062B0u: goto label_7F3062B0;
    case 0x7F3062B4u: goto label_7F3062B4;
    case 0x7F3062C4u: goto label_7F3062C4;
    case 0x7F3062E4u: goto label_7F3062E4;
    case 0x7F3062E8u: goto label_7F3062E8;
    case 0x7F306308u: goto label_7F306308;
    case 0x7F30630Cu: goto label_7F30630C;
    case 0x7F3064D0u: goto label_7F3064D0;
    case 0x7F3064E4u: goto label_7F3064E4;
    case 0x7F3064F0u: goto label_7F3064F0;
    case 0x7F306520u: goto label_7F306520;
    case 0x7F306528u: goto label_7F306528;
    case 0x7F306530u: goto label_7F306530;
    case 0x7F3065D0u: goto label_7F3065D0;
    case 0x7F30660Cu: goto label_7F30660C;
    case 0x7F306614u: goto label_7F306614;
    case 0x7F30664Cu: goto label_7F30664C;
    case 0x7F3066BCu: goto label_7F3066BC;
    case 0x7F3066D8u: goto label_7F3066D8;
    case 0x7F306734u: goto label_7F306734;
    case 0x7F306744u: goto label_7F306744;
    case 0x7F306778u: goto label_7F306778;
    case 0x7F3067ACu: goto label_7F3067AC;
    case 0x7F3067C4u: goto label_7F3067C4;
    case 0x7F3069C4u: goto label_7F3069C4;
    case 0x7F306AB8u: goto label_7F306AB8;
    case 0x7F306B14u: goto label_7F306B14;
    case 0x7F306B28u: goto label_7F306B28;
    case 0x7F306B3Cu: goto label_7F306B3C;
    case 0x7F306B54u: goto label_7F306B54;
    case 0x7F306B60u: goto label_7F306B60;
    case 0x7F306B68u: goto label_7F306B68;
    case 0x7F306BC8u: goto label_7F306BC8;
    case 0x7F306BE4u: goto label_7F306BE4;
    case 0x7F306BF0u: goto label_7F306BF0;
    case 0x7F306BF8u: goto label_7F306BF8;
    case 0x7F306C3Cu: goto label_7F306C3C;
    case 0x7F306C4Cu: goto label_7F306C4C;
    case 0x7F306C58u: goto label_7F306C58;
    case 0x7F306D24u: goto label_7F306D24;
    case 0x7F306D70u: goto label_7F306D70;
    case 0x7F306D8Cu: goto label_7F306D8C;
    case 0x7F306DA4u: goto label_7F306DA4;
    case 0x7F306E38u: goto label_7F306E38;
    case 0x7F306E98u: goto label_7F306E98;
    case 0x7F306F40u: goto label_7F306F40;
    case 0x7F306F6Cu: goto label_7F306F6C;
    case 0x7F3070E0u: goto label_7F3070E0;
    case 0x7F307138u: goto label_7F307138;
    case 0x7F307150u: goto label_7F307150;
    case 0x7F307178u: goto label_7F307178;
    case 0x7F3071B0u: goto label_7F3071B0;
    case 0x7F3071D4u: goto label_7F3071D4;
    case 0x7F3071F8u: goto label_7F3071F8;
    case 0x7F307214u: goto label_7F307214;
    case 0x7F307234u: goto label_7F307234;
    case 0x7F307240u: goto label_7F307240;
    case 0x7F307250u: goto label_7F307250;
    case 0x7F307274u: goto label_7F307274;
    case 0x7F307298u: goto label_7F307298;
    case 0x7F3072F8u: goto label_7F3072F8;
    case 0x7F307344u: goto label_7F307344;
    case 0x7F307390u: goto label_7F307390;
    case 0x7F3073DCu: goto label_7F3073DC;
    case 0x7F307408u: goto label_7F307408;
    case 0x7F307438u: goto label_7F307438;
    case 0x7F30745Cu: goto label_7F30745C;
    case 0x7F30748Cu: goto label_7F30748C;
    case 0x7F307494u: goto label_7F307494;
    case 0x7F3074F4u: goto label_7F3074F4;
    case 0x7F30753Cu: goto label_7F30753C;
    case 0x7F3075E4u: goto label_7F3075E4;
    case 0x7F30761Cu: goto label_7F30761C;
    case 0x7F3076A8u: goto label_7F3076A8;
    case 0x7F3076F8u: goto label_7F3076F8;
    case 0x7F307704u: goto label_7F307704;
    case 0x7F307738u: goto label_7F307738;
    case 0x7F3077C4u: goto label_7F3077C4;
    case 0x7F3077D0u: goto label_7F3077D0;
    case 0x7F3077DCu: goto label_7F3077DC;
    case 0x7F3077F0u: goto label_7F3077F0;
    case 0x7F307824u: goto label_7F307824;
    case 0x7F30782Cu: goto label_7F30782C;
    case 0x7F307838u: goto label_7F307838;
    case 0x7F307858u: goto label_7F307858;
    case 0x7F307874u: goto label_7F307874;
    case 0x7F3078C0u: goto label_7F3078C0;
    case 0x7F3078DCu: goto label_7F3078DC;
    case 0x7F3078ECu: goto label_7F3078EC;
    case 0x7F3078FCu: goto label_7F3078FC;
    case 0x7F307904u: goto label_7F307904;
    case 0x7F307930u: goto label_7F307930;
    case 0x7F30794Cu: goto label_7F30794C;
    case 0x7F30795Cu: goto label_7F30795C;
    case 0x7F307990u: goto label_7F307990;
    case 0x7F30799Cu: goto label_7F30799C;
    case 0x7F3079A0u: goto label_7F3079A0;
    case 0x7F3079A4u: goto label_7F3079A4;
    case 0x7F3079F0u: goto label_7F3079F0;
    case 0x7F307A34u: goto label_7F307A34;
    case 0x7F307A40u: goto label_7F307A40;
    case 0x7F307A6Cu: goto label_7F307A6C;
    case 0x7F307A78u: goto label_7F307A78;
    case 0x7F307A94u: goto label_7F307A94;
    case 0x7F307AA0u: goto label_7F307AA0;
    case 0x7F307AA8u: goto label_7F307AA8;
    case 0x7F307AB8u: goto label_7F307AB8;
    case 0x7F307ADCu: goto label_7F307ADC;
    case 0x7F307AF8u: goto label_7F307AF8;
    case 0x7F307B04u: goto label_7F307B04;
    case 0x7F307B4Cu: goto label_7F307B4C;
    case 0x7F307B98u: goto label_7F307B98;
    case 0x7F307BD0u: goto label_7F307BD0;
    case 0x7F307BDCu: goto label_7F307BDC;
    case 0x7F307BE8u: goto label_7F307BE8;
    case 0x7F307BF4u: goto label_7F307BF4;
    case 0x7F307C00u: goto label_7F307C00;
    case 0x7F307C0Cu: goto label_7F307C0C;
    case 0x7F307C18u: goto label_7F307C18;
    case 0x7F307C24u: goto label_7F307C24;
    case 0x7F307CC0u: goto label_7F307CC0;
    case 0x7F307CD4u: goto label_7F307CD4;
    case 0x7F307CE0u: goto label_7F307CE0;
    case 0x7F307D24u: goto label_7F307D24;
    case 0x7F307D50u: goto label_7F307D50;
    case 0x7F307D84u: goto label_7F307D84;
    case 0x7F307D8Cu: goto label_7F307D8C;
    case 0x7F307D9Cu: goto label_7F307D9C;
    case 0x7F307DACu: goto label_7F307DAC;
    case 0x7F307E00u: goto label_7F307E00;
    case 0x7F307E14u: goto label_7F307E14;
    case 0x7F307E40u: goto label_7F307E40;
    case 0x7F307ED4u: goto label_7F307ED4;
    case 0x7F307F20u: goto label_7F307F20;
    case 0x7F307F60u: goto label_7F307F60;
    case 0x7F307F8Cu: goto label_7F307F8C;
    case 0x7F307FF8u: goto label_7F307FF8;
    case 0x7F308028u: goto label_7F308028;
    default: return;
    }
}

