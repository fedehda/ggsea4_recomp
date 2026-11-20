// DolRecomp output
#include "../generated.h"

static void loop_7F3A8474(CPUState* ctx) {
label_7F3A8474:
    ctx->downcount -= 3;
    ctx->pc = 0x7F3A8474u;
    // 7F3A8474: lwz     r3, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A8478u;
    // 7F3A8478: stw     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F3A847Cu;
    // 7F3A847C: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    // 7F3A8480: cmplwi  r9, 0x0000
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

    // 7F3A8484: bc    4, 2, 0x7F3A8474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8474u;
                return;
            }
            goto label_7F3A8474;
        }
    }

    ctx->pc = 0x7F3A8488u;
}

static void loop_7F3A84D4(CPUState* ctx) {
label_7F3A84D4:
    ctx->downcount -= 3;
    ctx->pc = 0x7F3A84D4u;
    // 7F3A84D4: lwz     r3, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A84D8u;
    // 7F3A84D8: stw     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F3A84DCu;
    // 7F3A84DC: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    // 7F3A84E0: cmplwi  r9, 0x0000
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

    // 7F3A84E4: bc    4, 2, 0x7F3A84D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A84D4u;
                return;
            }
            goto label_7F3A84D4;
        }
    }

    ctx->pc = 0x7F3A84E8u;
}

static void loop_7F3A8D78(CPUState* ctx) {
label_7F3A8D78:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A8D78u;
    // 7F3A8D78: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A8D7Cu;
    // 7F3A8D7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A8D80u;
    // 7F3A8D80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A8D84u;
    // 7F3A8D84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A8D88: bc    16, 0, 0x7F3A8D78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8D78u;
                return;
            }
            goto label_7F3A8D78;
        }
    }

    ctx->pc = 0x7F3A8D8Cu;
}

static void loop_7F3A8D9C(CPUState* ctx) {
label_7F3A8D9C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A8D9Cu;
    // 7F3A8D9C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A8DA0u;
    // 7F3A8DA0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A8DA4u;
    // 7F3A8DA4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A8DA8u;
    // 7F3A8DA8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A8DAC: bc    16, 0, 0x7F3A8D9C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8D9Cu;
                return;
            }
            goto label_7F3A8D9C;
        }
    }

    ctx->pc = 0x7F3A8DB0u;
}

static void loop_7F3A8EC8(CPUState* ctx) {
label_7F3A8EC8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A8EC8u;
    // 7F3A8EC8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A8ECCu;
    // 7F3A8ECC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A8ED0u;
    // 7F3A8ED0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A8ED4u;
    // 7F3A8ED4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A8ED8: bc    16, 0, 0x7F3A8EC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8EC8u;
                return;
            }
            goto label_7F3A8EC8;
        }
    }

    ctx->pc = 0x7F3A8EDCu;
}

static void loop_7F3A90F0(CPUState* ctx) {
label_7F3A90F0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A90F0u;
    // 7F3A90F0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A90F4u;
    // 7F3A90F4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A90F8u;
    // 7F3A90F8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A90FCu;
    // 7F3A90FC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9100: bc    16, 0, 0x7F3A90F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A90F0u;
                return;
            }
            goto label_7F3A90F0;
        }
    }

    ctx->pc = 0x7F3A9104u;
}

static void loop_7F3A9A58(CPUState* ctx) {
label_7F3A9A58:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9A58u;
    // 7F3A9A58: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9A5Cu;
    // 7F3A9A5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9A60u;
    // 7F3A9A60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9A64u;
    // 7F3A9A64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9A68: bc    16, 0, 0x7F3A9A58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9A58u;
                return;
            }
            goto label_7F3A9A58;
        }
    }

    ctx->pc = 0x7F3A9A6Cu;
}

static void loop_7F3A9A80(CPUState* ctx) {
label_7F3A9A80:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9A80u;
    // 7F3A9A80: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9A84u;
    // 7F3A9A84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9A88u;
    // 7F3A9A88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9A8Cu;
    // 7F3A9A8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9A90: bc    16, 0, 0x7F3A9A80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9A80u;
                return;
            }
            goto label_7F3A9A80;
        }
    }

    ctx->pc = 0x7F3A9A94u;
}

static void loop_7F3A9AC4(CPUState* ctx) {
label_7F3A9AC4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9AC4u;
    // 7F3A9AC4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9AC8u;
    // 7F3A9AC8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9ACCu;
    // 7F3A9ACC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9AD0u;
    // 7F3A9AD0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9AD4: bc    16, 0, 0x7F3A9AC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9AC4u;
                return;
            }
            goto label_7F3A9AC4;
        }
    }

    ctx->pc = 0x7F3A9AD8u;
}

static void loop_7F3A9B00(CPUState* ctx) {
label_7F3A9B00:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9B00u;
    // 7F3A9B00: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9B04u;
    // 7F3A9B04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9B08u;
    // 7F3A9B08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9B0Cu;
    // 7F3A9B0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9B10: bc    16, 0, 0x7F3A9B00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B00u;
                return;
            }
            goto label_7F3A9B00;
        }
    }

    ctx->pc = 0x7F3A9B14u;
}

static void loop_7F3A9B28(CPUState* ctx) {
label_7F3A9B28:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9B28u;
    // 7F3A9B28: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9B2Cu;
    // 7F3A9B2C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9B30u;
    // 7F3A9B30: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9B34u;
    // 7F3A9B34: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9B38: bc    16, 0, 0x7F3A9B28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B28u;
                return;
            }
            goto label_7F3A9B28;
        }
    }

    ctx->pc = 0x7F3A9B3Cu;
}

static void loop_7F3A9B6C(CPUState* ctx) {
label_7F3A9B6C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3A9B6Cu;
    // 7F3A9B6C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A9B70u;
    // 7F3A9B70: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3A9B74u;
    // 7F3A9B74: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3A9B78u;
    // 7F3A9B78: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3A9B7C: bc    16, 0, 0x7F3A9B6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B6Cu;
                return;
            }
            goto label_7F3A9B6C;
        }
    }

    ctx->pc = 0x7F3A9B80u;
}

static void loop_7F3AA420(CPUState* ctx) {
label_7F3AA420:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AA420u;
    // 7F3AA420: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AA424u;
    // 7F3AA424: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AA428u;
    // 7F3AA428: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AA42Cu;
    // 7F3AA42C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AA430: bc    16, 0, 0x7F3AA420
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA420u;
                return;
            }
            goto label_7F3AA420;
        }
    }

    ctx->pc = 0x7F3AA434u;
}

static void loop_7F3AA444(CPUState* ctx) {
label_7F3AA444:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AA444u;
    // 7F3AA444: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AA448u;
    // 7F3AA448: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AA44Cu;
    // 7F3AA44C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AA450u;
    // 7F3AA450: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AA454: bc    16, 0, 0x7F3AA444
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA444u;
                return;
            }
            goto label_7F3AA444;
        }
    }

    ctx->pc = 0x7F3AA458u;
}

static void loop_7F3AA468(CPUState* ctx) {
label_7F3AA468:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AA468u;
    // 7F3AA468: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AA46Cu;
    // 7F3AA46C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AA470u;
    // 7F3AA470: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AA474u;
    // 7F3AA474: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AA478: bc    16, 0, 0x7F3AA468
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA468u;
                return;
            }
            goto label_7F3AA468;
        }
    }

    ctx->pc = 0x7F3AA47Cu;
}

static void loop_7F3AA48C(CPUState* ctx) {
label_7F3AA48C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AA48Cu;
    // 7F3AA48C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AA490u;
    // 7F3AA490: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AA494u;
    // 7F3AA494: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AA498u;
    // 7F3AA498: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AA49C: bc    16, 0, 0x7F3AA48C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA48Cu;
                return;
            }
            goto label_7F3AA48C;
        }
    }

    ctx->pc = 0x7F3AA4A0u;
}

static void loop_7F3AB024(CPUState* ctx) {
label_7F3AB024:
    ctx->downcount -= 3;
    ctx->pc = 0x7F3AB024u;
    // 7F3AB024: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F3AB028: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

    // 7F3AB02C: bc    16, 0, 0x7F3AB024
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB024u;
                return;
            }
            goto label_7F3AB024;
        }
    }

    ctx->pc = 0x7F3AB030u;
}

static void loop_7F3ABA00(CPUState* ctx) {
label_7F3ABA00:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ABA00u;
    // 7F3ABA00: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ABA04u;
    // 7F3ABA04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ABA08u;
    // 7F3ABA08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ABA0Cu;
    // 7F3ABA0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ABA10: bc    16, 0, 0x7F3ABA00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABA00u;
                return;
            }
            goto label_7F3ABA00;
        }
    }

    ctx->pc = 0x7F3ABA14u;
}

static void loop_7F3ABFD8(CPUState* ctx) {
label_7F3ABFD8:
    ctx->downcount -= 9;
    // 7F3ABFD8: add   r5, r27, r4
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F3ABFDC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x7F3ABFE0u;
    // 7F3ABFE0: stw     r3, 256(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    // 7F3ABFE4: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x7F3ABFE8u;
    // 7F3ABFE8: stw     r3, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    // 7F3ABFEC: add   r3, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x7F3ABFF0u;
    // 7F3ABFF0: stw     r3, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    // 7F3ABFF4: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    // 7F3ABFF8: bc    16, 0, 0x7F3ABFD8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABFD8u;
                return;
            }
            goto label_7F3ABFD8;
        }
    }

    ctx->pc = 0x7F3ABFFCu;
}

static void loop_7F3AC074(CPUState* ctx) {
label_7F3AC074:
    ctx->downcount -= 7;
    // 7F3AC074: add   r5, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F3AC078: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    ctx->pc = 0x7F3AC07Cu;
    // 7F3AC07C: stw     r4, 256(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F3AC080: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F3AC084u;
    // 7F3AC084: stw     r4, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F3AC088u;
    // 7F3AC088: stw     r4, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F3AC08C: bc    16, 0, 0x7F3AC074
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC074u;
                return;
            }
            goto label_7F3AC074;
        }
    }

    ctx->pc = 0x7F3AC090u;
}

void func_7F3A80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3A80ECu: goto label_7F3A80EC;
    case 0x7F3A80F0u: goto label_7F3A80F0;
    case 0x7F3A80F4u: goto label_7F3A80F4;
    case 0x7F3A80F8u: goto label_7F3A80F8;
    case 0x7F3A80FCu: goto label_7F3A80FC;
    case 0x7F3A8100u: goto label_7F3A8100;
    case 0x7F3A8104u: goto label_7F3A8104;
    case 0x7F3A8108u: goto label_7F3A8108;
    case 0x7F3A810Cu: goto label_7F3A810C;
    case 0x7F3A8110u: goto label_7F3A8110;
    case 0x7F3A8114u: goto label_7F3A8114;
    case 0x7F3A8118u: goto label_7F3A8118;
    case 0x7F3A811Cu: goto label_7F3A811C;
    case 0x7F3A8120u: goto label_7F3A8120;
    case 0x7F3A8124u: goto label_7F3A8124;
    case 0x7F3A8128u: goto label_7F3A8128;
    case 0x7F3A812Cu: goto label_7F3A812C;
    case 0x7F3A8130u: goto label_7F3A8130;
    case 0x7F3A8134u: goto label_7F3A8134;
    case 0x7F3A8138u: goto label_7F3A8138;
    case 0x7F3A813Cu: goto label_7F3A813C;
    case 0x7F3A8140u: goto label_7F3A8140;
    case 0x7F3A8144u: goto label_7F3A8144;
    case 0x7F3A8148u: goto label_7F3A8148;
    case 0x7F3A814Cu: goto label_7F3A814C;
    case 0x7F3A8150u: goto label_7F3A8150;
    case 0x7F3A8154u: goto label_7F3A8154;
    case 0x7F3A8158u: goto label_7F3A8158;
    case 0x7F3A815Cu: goto label_7F3A815C;
    case 0x7F3A8160u: goto label_7F3A8160;
    case 0x7F3A8164u: goto label_7F3A8164;
    case 0x7F3A8168u: goto label_7F3A8168;
    case 0x7F3A816Cu: goto label_7F3A816C;
    case 0x7F3A8170u: goto label_7F3A8170;
    case 0x7F3A8174u: goto label_7F3A8174;
    case 0x7F3A8178u: goto label_7F3A8178;
    case 0x7F3A817Cu: goto label_7F3A817C;
    case 0x7F3A8180u: goto label_7F3A8180;
    case 0x7F3A8184u: goto label_7F3A8184;
    case 0x7F3A8188u: goto label_7F3A8188;
    case 0x7F3A818Cu: goto label_7F3A818C;
    case 0x7F3A8190u: goto label_7F3A8190;
    case 0x7F3A8194u: goto label_7F3A8194;
    case 0x7F3A8198u: goto label_7F3A8198;
    case 0x7F3A819Cu: goto label_7F3A819C;
    case 0x7F3A81A0u: goto label_7F3A81A0;
    case 0x7F3A81A4u: goto label_7F3A81A4;
    case 0x7F3A81A8u: goto label_7F3A81A8;
    case 0x7F3A81ACu: goto label_7F3A81AC;
    case 0x7F3A81B0u: goto label_7F3A81B0;
    case 0x7F3A81B4u: goto label_7F3A81B4;
    case 0x7F3A81B8u: goto label_7F3A81B8;
    case 0x7F3A81BCu: goto label_7F3A81BC;
    case 0x7F3A81C0u: goto label_7F3A81C0;
    case 0x7F3A81C4u: goto label_7F3A81C4;
    case 0x7F3A81C8u: goto label_7F3A81C8;
    case 0x7F3A81CCu: goto label_7F3A81CC;
    case 0x7F3A81D0u: goto label_7F3A81D0;
    case 0x7F3A81D4u: goto label_7F3A81D4;
    case 0x7F3A81D8u: goto label_7F3A81D8;
    case 0x7F3A81DCu: goto label_7F3A81DC;
    case 0x7F3A81E0u: goto label_7F3A81E0;
    case 0x7F3A81E4u: goto label_7F3A81E4;
    case 0x7F3A81E8u: goto label_7F3A81E8;
    case 0x7F3A81ECu: goto label_7F3A81EC;
    case 0x7F3A81F0u: goto label_7F3A81F0;
    case 0x7F3A81F4u: goto label_7F3A81F4;
    case 0x7F3A81F8u: goto label_7F3A81F8;
    case 0x7F3A81FCu: goto label_7F3A81FC;
    case 0x7F3A8200u: goto label_7F3A8200;
    case 0x7F3A8204u: goto label_7F3A8204;
    case 0x7F3A8208u: goto label_7F3A8208;
    case 0x7F3A820Cu: goto label_7F3A820C;
    case 0x7F3A8210u: goto label_7F3A8210;
    case 0x7F3A8214u: goto label_7F3A8214;
    case 0x7F3A8218u: goto label_7F3A8218;
    case 0x7F3A821Cu: goto label_7F3A821C;
    case 0x7F3A8220u: goto label_7F3A8220;
    case 0x7F3A8224u: goto label_7F3A8224;
    case 0x7F3A8228u: goto label_7F3A8228;
    case 0x7F3A822Cu: goto label_7F3A822C;
    case 0x7F3A8230u: goto label_7F3A8230;
    case 0x7F3A8234u: goto label_7F3A8234;
    case 0x7F3A8238u: goto label_7F3A8238;
    case 0x7F3A823Cu: goto label_7F3A823C;
    case 0x7F3A8240u: goto label_7F3A8240;
    case 0x7F3A8244u: goto label_7F3A8244;
    case 0x7F3A8248u: goto label_7F3A8248;
    case 0x7F3A824Cu: goto label_7F3A824C;
    case 0x7F3A8250u: goto label_7F3A8250;
    case 0x7F3A8254u: goto label_7F3A8254;
    case 0x7F3A8258u: goto label_7F3A8258;
    case 0x7F3A825Cu: goto label_7F3A825C;
    case 0x7F3A8260u: goto label_7F3A8260;
    case 0x7F3A8264u: goto label_7F3A8264;
    case 0x7F3A8268u: goto label_7F3A8268;
    case 0x7F3A826Cu: goto label_7F3A826C;
    case 0x7F3A8270u: goto label_7F3A8270;
    case 0x7F3A8274u: goto label_7F3A8274;
    case 0x7F3A8278u: goto label_7F3A8278;
    case 0x7F3A827Cu: goto label_7F3A827C;
    case 0x7F3A8280u: goto label_7F3A8280;
    case 0x7F3A8284u: goto label_7F3A8284;
    case 0x7F3A8288u: goto label_7F3A8288;
    case 0x7F3A828Cu: goto label_7F3A828C;
    case 0x7F3A8290u: goto label_7F3A8290;
    case 0x7F3A8294u: goto label_7F3A8294;
    case 0x7F3A8298u: goto label_7F3A8298;
    case 0x7F3A829Cu: goto label_7F3A829C;
    case 0x7F3A82A0u: goto label_7F3A82A0;
    case 0x7F3A82A4u: goto label_7F3A82A4;
    case 0x7F3A82A8u: goto label_7F3A82A8;
    case 0x7F3A82ACu: goto label_7F3A82AC;
    case 0x7F3A82B0u: goto label_7F3A82B0;
    case 0x7F3A82B4u: goto label_7F3A82B4;
    case 0x7F3A82B8u: goto label_7F3A82B8;
    case 0x7F3A82BCu: goto label_7F3A82BC;
    case 0x7F3A82C0u: goto label_7F3A82C0;
    case 0x7F3A82C4u: goto label_7F3A82C4;
    case 0x7F3A82C8u: goto label_7F3A82C8;
    case 0x7F3A82CCu: goto label_7F3A82CC;
    case 0x7F3A82D0u: goto label_7F3A82D0;
    case 0x7F3A82D4u: goto label_7F3A82D4;
    case 0x7F3A82D8u: goto label_7F3A82D8;
    case 0x7F3A82DCu: goto label_7F3A82DC;
    case 0x7F3A82E0u: goto label_7F3A82E0;
    case 0x7F3A82E4u: goto label_7F3A82E4;
    case 0x7F3A82E8u: goto label_7F3A82E8;
    case 0x7F3A82ECu: goto label_7F3A82EC;
    case 0x7F3A82F0u: goto label_7F3A82F0;
    case 0x7F3A82F4u: goto label_7F3A82F4;
    case 0x7F3A82F8u: goto label_7F3A82F8;
    case 0x7F3A82FCu: goto label_7F3A82FC;
    case 0x7F3A8300u: goto label_7F3A8300;
    case 0x7F3A8304u: goto label_7F3A8304;
    case 0x7F3A8308u: goto label_7F3A8308;
    case 0x7F3A830Cu: goto label_7F3A830C;
    case 0x7F3A8310u: goto label_7F3A8310;
    case 0x7F3A8314u: goto label_7F3A8314;
    case 0x7F3A8318u: goto label_7F3A8318;
    case 0x7F3A831Cu: goto label_7F3A831C;
    case 0x7F3A8320u: goto label_7F3A8320;
    case 0x7F3A8324u: goto label_7F3A8324;
    case 0x7F3A8328u: goto label_7F3A8328;
    case 0x7F3A832Cu: goto label_7F3A832C;
    case 0x7F3A8330u: goto label_7F3A8330;
    case 0x7F3A8334u: goto label_7F3A8334;
    case 0x7F3A8338u: goto label_7F3A8338;
    case 0x7F3A833Cu: goto label_7F3A833C;
    case 0x7F3A8340u: goto label_7F3A8340;
    case 0x7F3A8344u: goto label_7F3A8344;
    case 0x7F3A8348u: goto label_7F3A8348;
    case 0x7F3A834Cu: goto label_7F3A834C;
    case 0x7F3A8350u: goto label_7F3A8350;
    case 0x7F3A8354u: goto label_7F3A8354;
    case 0x7F3A8358u: goto label_7F3A8358;
    case 0x7F3A835Cu: goto label_7F3A835C;
    case 0x7F3A8360u: goto label_7F3A8360;
    case 0x7F3A8364u: goto label_7F3A8364;
    case 0x7F3A8368u: goto label_7F3A8368;
    case 0x7F3A836Cu: goto label_7F3A836C;
    case 0x7F3A8370u: goto label_7F3A8370;
    case 0x7F3A8374u: goto label_7F3A8374;
    case 0x7F3A8378u: goto label_7F3A8378;
    case 0x7F3A837Cu: goto label_7F3A837C;
    case 0x7F3A8380u: goto label_7F3A8380;
    case 0x7F3A8384u: goto label_7F3A8384;
    case 0x7F3A8388u: goto label_7F3A8388;
    case 0x7F3A838Cu: goto label_7F3A838C;
    case 0x7F3A8390u: goto label_7F3A8390;
    case 0x7F3A8394u: goto label_7F3A8394;
    case 0x7F3A8398u: goto label_7F3A8398;
    case 0x7F3A839Cu: goto label_7F3A839C;
    case 0x7F3A83A0u: goto label_7F3A83A0;
    case 0x7F3A83A4u: goto label_7F3A83A4;
    case 0x7F3A83A8u: goto label_7F3A83A8;
    case 0x7F3A83ACu: goto label_7F3A83AC;
    case 0x7F3A83B0u: goto label_7F3A83B0;
    case 0x7F3A83B4u: goto label_7F3A83B4;
    case 0x7F3A83B8u: goto label_7F3A83B8;
    case 0x7F3A83BCu: goto label_7F3A83BC;
    case 0x7F3A83C0u: goto label_7F3A83C0;
    case 0x7F3A83C4u: goto label_7F3A83C4;
    case 0x7F3A83C8u: goto label_7F3A83C8;
    case 0x7F3A83CCu: goto label_7F3A83CC;
    case 0x7F3A83D0u: goto label_7F3A83D0;
    case 0x7F3A83D4u: goto label_7F3A83D4;
    case 0x7F3A83D8u: goto label_7F3A83D8;
    case 0x7F3A83DCu: goto label_7F3A83DC;
    case 0x7F3A83E0u: goto label_7F3A83E0;
    case 0x7F3A83E4u: goto label_7F3A83E4;
    case 0x7F3A83E8u: goto label_7F3A83E8;
    case 0x7F3A83ECu: goto label_7F3A83EC;
    case 0x7F3A83F0u: goto label_7F3A83F0;
    case 0x7F3A83F4u: goto label_7F3A83F4;
    case 0x7F3A83F8u: goto label_7F3A83F8;
    case 0x7F3A83FCu: goto label_7F3A83FC;
    case 0x7F3A8400u: goto label_7F3A8400;
    case 0x7F3A8404u: goto label_7F3A8404;
    case 0x7F3A8408u: goto label_7F3A8408;
    case 0x7F3A840Cu: goto label_7F3A840C;
    case 0x7F3A8410u: goto label_7F3A8410;
    case 0x7F3A8414u: goto label_7F3A8414;
    case 0x7F3A8418u: goto label_7F3A8418;
    case 0x7F3A841Cu: goto label_7F3A841C;
    case 0x7F3A8420u: goto label_7F3A8420;
    case 0x7F3A8424u: goto label_7F3A8424;
    case 0x7F3A8428u: goto label_7F3A8428;
    case 0x7F3A842Cu: goto label_7F3A842C;
    case 0x7F3A8430u: goto label_7F3A8430;
    case 0x7F3A8434u: goto label_7F3A8434;
    case 0x7F3A8438u: goto label_7F3A8438;
    case 0x7F3A843Cu: goto label_7F3A843C;
    case 0x7F3A8440u: goto label_7F3A8440;
    case 0x7F3A8444u: goto label_7F3A8444;
    case 0x7F3A8448u: goto label_7F3A8448;
    case 0x7F3A844Cu: goto label_7F3A844C;
    case 0x7F3A8450u: goto label_7F3A8450;
    case 0x7F3A8454u: goto label_7F3A8454;
    case 0x7F3A8458u: goto label_7F3A8458;
    case 0x7F3A845Cu: goto label_7F3A845C;
    case 0x7F3A8460u: goto label_7F3A8460;
    case 0x7F3A8464u: goto label_7F3A8464;
    case 0x7F3A8468u: goto label_7F3A8468;
    case 0x7F3A846Cu: goto label_7F3A846C;
    case 0x7F3A8470u: goto label_7F3A8470;
    case 0x7F3A8474u: goto label_7F3A8474;
    case 0x7F3A8478u: goto label_7F3A8478;
    case 0x7F3A847Cu: goto label_7F3A847C;
    case 0x7F3A8480u: goto label_7F3A8480;
    case 0x7F3A8484u: goto label_7F3A8484;
    case 0x7F3A8488u: goto label_7F3A8488;
    case 0x7F3A848Cu: goto label_7F3A848C;
    case 0x7F3A8490u: goto label_7F3A8490;
    case 0x7F3A8494u: goto label_7F3A8494;
    case 0x7F3A8498u: goto label_7F3A8498;
    case 0x7F3A849Cu: goto label_7F3A849C;
    case 0x7F3A84A0u: goto label_7F3A84A0;
    case 0x7F3A84A4u: goto label_7F3A84A4;
    case 0x7F3A84A8u: goto label_7F3A84A8;
    case 0x7F3A84ACu: goto label_7F3A84AC;
    case 0x7F3A84B0u: goto label_7F3A84B0;
    case 0x7F3A84B4u: goto label_7F3A84B4;
    case 0x7F3A84B8u: goto label_7F3A84B8;
    case 0x7F3A84BCu: goto label_7F3A84BC;
    case 0x7F3A84C0u: goto label_7F3A84C0;
    case 0x7F3A84C4u: goto label_7F3A84C4;
    case 0x7F3A84C8u: goto label_7F3A84C8;
    case 0x7F3A84CCu: goto label_7F3A84CC;
    case 0x7F3A84D0u: goto label_7F3A84D0;
    case 0x7F3A84D4u: goto label_7F3A84D4;
    case 0x7F3A84D8u: goto label_7F3A84D8;
    case 0x7F3A84DCu: goto label_7F3A84DC;
    case 0x7F3A84E0u: goto label_7F3A84E0;
    case 0x7F3A84E4u: goto label_7F3A84E4;
    case 0x7F3A84E8u: goto label_7F3A84E8;
    case 0x7F3A84ECu: goto label_7F3A84EC;
    case 0x7F3A84F0u: goto label_7F3A84F0;
    case 0x7F3A84F4u: goto label_7F3A84F4;
    case 0x7F3A84F8u: goto label_7F3A84F8;
    case 0x7F3A84FCu: goto label_7F3A84FC;
    case 0x7F3A8500u: goto label_7F3A8500;
    case 0x7F3A8504u: goto label_7F3A8504;
    case 0x7F3A8508u: goto label_7F3A8508;
    case 0x7F3A850Cu: goto label_7F3A850C;
    case 0x7F3A8510u: goto label_7F3A8510;
    case 0x7F3A8514u: goto label_7F3A8514;
    case 0x7F3A8518u: goto label_7F3A8518;
    case 0x7F3A851Cu: goto label_7F3A851C;
    case 0x7F3A8520u: goto label_7F3A8520;
    case 0x7F3A8524u: goto label_7F3A8524;
    case 0x7F3A8528u: goto label_7F3A8528;
    case 0x7F3A852Cu: goto label_7F3A852C;
    case 0x7F3A8530u: goto label_7F3A8530;
    case 0x7F3A8534u: goto label_7F3A8534;
    case 0x7F3A8538u: goto label_7F3A8538;
    case 0x7F3A853Cu: goto label_7F3A853C;
    case 0x7F3A8540u: goto label_7F3A8540;
    case 0x7F3A8544u: goto label_7F3A8544;
    case 0x7F3A8548u: goto label_7F3A8548;
    case 0x7F3A854Cu: goto label_7F3A854C;
    case 0x7F3A8550u: goto label_7F3A8550;
    case 0x7F3A8554u: goto label_7F3A8554;
    case 0x7F3A8558u: goto label_7F3A8558;
    case 0x7F3A855Cu: goto label_7F3A855C;
    case 0x7F3A8560u: goto label_7F3A8560;
    case 0x7F3A8564u: goto label_7F3A8564;
    case 0x7F3A8568u: goto label_7F3A8568;
    case 0x7F3A856Cu: goto label_7F3A856C;
    case 0x7F3A8570u: goto label_7F3A8570;
    case 0x7F3A8574u: goto label_7F3A8574;
    case 0x7F3A8578u: goto label_7F3A8578;
    case 0x7F3A857Cu: goto label_7F3A857C;
    case 0x7F3A8580u: goto label_7F3A8580;
    case 0x7F3A8584u: goto label_7F3A8584;
    case 0x7F3A8588u: goto label_7F3A8588;
    case 0x7F3A858Cu: goto label_7F3A858C;
    case 0x7F3A8590u: goto label_7F3A8590;
    case 0x7F3A8594u: goto label_7F3A8594;
    case 0x7F3A8598u: goto label_7F3A8598;
    case 0x7F3A859Cu: goto label_7F3A859C;
    case 0x7F3A85A0u: goto label_7F3A85A0;
    case 0x7F3A85A4u: goto label_7F3A85A4;
    case 0x7F3A85A8u: goto label_7F3A85A8;
    case 0x7F3A85ACu: goto label_7F3A85AC;
    case 0x7F3A85B0u: goto label_7F3A85B0;
    case 0x7F3A85B4u: goto label_7F3A85B4;
    case 0x7F3A85B8u: goto label_7F3A85B8;
    case 0x7F3A85BCu: goto label_7F3A85BC;
    case 0x7F3A85C0u: goto label_7F3A85C0;
    case 0x7F3A85C4u: goto label_7F3A85C4;
    case 0x7F3A85C8u: goto label_7F3A85C8;
    case 0x7F3A85CCu: goto label_7F3A85CC;
    case 0x7F3A85D0u: goto label_7F3A85D0;
    case 0x7F3A85D4u: goto label_7F3A85D4;
    case 0x7F3A85D8u: goto label_7F3A85D8;
    case 0x7F3A85DCu: goto label_7F3A85DC;
    case 0x7F3A85E0u: goto label_7F3A85E0;
    case 0x7F3A85E4u: goto label_7F3A85E4;
    case 0x7F3A85E8u: goto label_7F3A85E8;
    case 0x7F3A85ECu: goto label_7F3A85EC;
    case 0x7F3A85F0u: goto label_7F3A85F0;
    case 0x7F3A85F4u: goto label_7F3A85F4;
    case 0x7F3A85F8u: goto label_7F3A85F8;
    case 0x7F3A85FCu: goto label_7F3A85FC;
    case 0x7F3A8600u: goto label_7F3A8600;
    case 0x7F3A8604u: goto label_7F3A8604;
    case 0x7F3A8608u: goto label_7F3A8608;
    case 0x7F3A860Cu: goto label_7F3A860C;
    case 0x7F3A8610u: goto label_7F3A8610;
    case 0x7F3A8614u: goto label_7F3A8614;
    case 0x7F3A8618u: goto label_7F3A8618;
    case 0x7F3A861Cu: goto label_7F3A861C;
    case 0x7F3A8620u: goto label_7F3A8620;
    case 0x7F3A8624u: goto label_7F3A8624;
    case 0x7F3A8628u: goto label_7F3A8628;
    case 0x7F3A862Cu: goto label_7F3A862C;
    case 0x7F3A8630u: goto label_7F3A8630;
    case 0x7F3A8634u: goto label_7F3A8634;
    case 0x7F3A8638u: goto label_7F3A8638;
    case 0x7F3A863Cu: goto label_7F3A863C;
    case 0x7F3A8640u: goto label_7F3A8640;
    case 0x7F3A8644u: goto label_7F3A8644;
    case 0x7F3A8648u: goto label_7F3A8648;
    case 0x7F3A864Cu: goto label_7F3A864C;
    case 0x7F3A8650u: goto label_7F3A8650;
    case 0x7F3A8654u: goto label_7F3A8654;
    case 0x7F3A8658u: goto label_7F3A8658;
    case 0x7F3A865Cu: goto label_7F3A865C;
    case 0x7F3A8660u: goto label_7F3A8660;
    case 0x7F3A8664u: goto label_7F3A8664;
    case 0x7F3A8668u: goto label_7F3A8668;
    case 0x7F3A866Cu: goto label_7F3A866C;
    case 0x7F3A8670u: goto label_7F3A8670;
    case 0x7F3A8674u: goto label_7F3A8674;
    case 0x7F3A8678u: goto label_7F3A8678;
    case 0x7F3A867Cu: goto label_7F3A867C;
    case 0x7F3A8680u: goto label_7F3A8680;
    case 0x7F3A8684u: goto label_7F3A8684;
    case 0x7F3A8688u: goto label_7F3A8688;
    case 0x7F3A868Cu: goto label_7F3A868C;
    case 0x7F3A8690u: goto label_7F3A8690;
    case 0x7F3A8694u: goto label_7F3A8694;
    case 0x7F3A8698u: goto label_7F3A8698;
    case 0x7F3A869Cu: goto label_7F3A869C;
    case 0x7F3A86A0u: goto label_7F3A86A0;
    case 0x7F3A86A4u: goto label_7F3A86A4;
    case 0x7F3A86A8u: goto label_7F3A86A8;
    case 0x7F3A86ACu: goto label_7F3A86AC;
    case 0x7F3A86B0u: goto label_7F3A86B0;
    case 0x7F3A86B4u: goto label_7F3A86B4;
    case 0x7F3A86B8u: goto label_7F3A86B8;
    case 0x7F3A86BCu: goto label_7F3A86BC;
    case 0x7F3A86C0u: goto label_7F3A86C0;
    case 0x7F3A86C4u: goto label_7F3A86C4;
    case 0x7F3A86C8u: goto label_7F3A86C8;
    case 0x7F3A86CCu: goto label_7F3A86CC;
    case 0x7F3A86D0u: goto label_7F3A86D0;
    case 0x7F3A86D4u: goto label_7F3A86D4;
    case 0x7F3A86D8u: goto label_7F3A86D8;
    case 0x7F3A86DCu: goto label_7F3A86DC;
    case 0x7F3A86E0u: goto label_7F3A86E0;
    case 0x7F3A86E4u: goto label_7F3A86E4;
    case 0x7F3A86E8u: goto label_7F3A86E8;
    case 0x7F3A86ECu: goto label_7F3A86EC;
    case 0x7F3A86F0u: goto label_7F3A86F0;
    case 0x7F3A86F4u: goto label_7F3A86F4;
    case 0x7F3A86F8u: goto label_7F3A86F8;
    case 0x7F3A86FCu: goto label_7F3A86FC;
    case 0x7F3A8700u: goto label_7F3A8700;
    case 0x7F3A8704u: goto label_7F3A8704;
    case 0x7F3A8708u: goto label_7F3A8708;
    case 0x7F3A870Cu: goto label_7F3A870C;
    case 0x7F3A8710u: goto label_7F3A8710;
    case 0x7F3A8714u: goto label_7F3A8714;
    case 0x7F3A8718u: goto label_7F3A8718;
    case 0x7F3A871Cu: goto label_7F3A871C;
    case 0x7F3A8720u: goto label_7F3A8720;
    case 0x7F3A8724u: goto label_7F3A8724;
    case 0x7F3A8728u: goto label_7F3A8728;
    case 0x7F3A872Cu: goto label_7F3A872C;
    case 0x7F3A8730u: goto label_7F3A8730;
    case 0x7F3A8734u: goto label_7F3A8734;
    case 0x7F3A8738u: goto label_7F3A8738;
    case 0x7F3A873Cu: goto label_7F3A873C;
    case 0x7F3A8740u: goto label_7F3A8740;
    case 0x7F3A8744u: goto label_7F3A8744;
    case 0x7F3A8748u: goto label_7F3A8748;
    case 0x7F3A874Cu: goto label_7F3A874C;
    case 0x7F3A8750u: goto label_7F3A8750;
    case 0x7F3A8754u: goto label_7F3A8754;
    case 0x7F3A8758u: goto label_7F3A8758;
    case 0x7F3A875Cu: goto label_7F3A875C;
    case 0x7F3A8760u: goto label_7F3A8760;
    case 0x7F3A8764u: goto label_7F3A8764;
    case 0x7F3A8768u: goto label_7F3A8768;
    case 0x7F3A876Cu: goto label_7F3A876C;
    case 0x7F3A8770u: goto label_7F3A8770;
    case 0x7F3A8774u: goto label_7F3A8774;
    case 0x7F3A8778u: goto label_7F3A8778;
    case 0x7F3A877Cu: goto label_7F3A877C;
    case 0x7F3A8780u: goto label_7F3A8780;
    case 0x7F3A8784u: goto label_7F3A8784;
    case 0x7F3A8788u: goto label_7F3A8788;
    case 0x7F3A878Cu: goto label_7F3A878C;
    case 0x7F3A8790u: goto label_7F3A8790;
    case 0x7F3A8794u: goto label_7F3A8794;
    case 0x7F3A8798u: goto label_7F3A8798;
    case 0x7F3A879Cu: goto label_7F3A879C;
    case 0x7F3A87A0u: goto label_7F3A87A0;
    case 0x7F3A87A4u: goto label_7F3A87A4;
    case 0x7F3A87A8u: goto label_7F3A87A8;
    case 0x7F3A87ACu: goto label_7F3A87AC;
    case 0x7F3A87B0u: goto label_7F3A87B0;
    case 0x7F3A87B4u: goto label_7F3A87B4;
    case 0x7F3A87B8u: goto label_7F3A87B8;
    case 0x7F3A87BCu: goto label_7F3A87BC;
    case 0x7F3A87C0u: goto label_7F3A87C0;
    case 0x7F3A87C4u: goto label_7F3A87C4;
    case 0x7F3A87C8u: goto label_7F3A87C8;
    case 0x7F3A87CCu: goto label_7F3A87CC;
    case 0x7F3A87D0u: goto label_7F3A87D0;
    case 0x7F3A87D4u: goto label_7F3A87D4;
    case 0x7F3A87D8u: goto label_7F3A87D8;
    case 0x7F3A87DCu: goto label_7F3A87DC;
    case 0x7F3A87E0u: goto label_7F3A87E0;
    case 0x7F3A87E4u: goto label_7F3A87E4;
    case 0x7F3A87E8u: goto label_7F3A87E8;
    case 0x7F3A87ECu: goto label_7F3A87EC;
    case 0x7F3A87F0u: goto label_7F3A87F0;
    case 0x7F3A87F4u: goto label_7F3A87F4;
    case 0x7F3A87F8u: goto label_7F3A87F8;
    case 0x7F3A87FCu: goto label_7F3A87FC;
    case 0x7F3A8800u: goto label_7F3A8800;
    case 0x7F3A8804u: goto label_7F3A8804;
    case 0x7F3A8808u: goto label_7F3A8808;
    case 0x7F3A880Cu: goto label_7F3A880C;
    case 0x7F3A8810u: goto label_7F3A8810;
    case 0x7F3A8814u: goto label_7F3A8814;
    case 0x7F3A8818u: goto label_7F3A8818;
    case 0x7F3A881Cu: goto label_7F3A881C;
    case 0x7F3A8820u: goto label_7F3A8820;
    case 0x7F3A8824u: goto label_7F3A8824;
    case 0x7F3A8828u: goto label_7F3A8828;
    case 0x7F3A882Cu: goto label_7F3A882C;
    case 0x7F3A8830u: goto label_7F3A8830;
    case 0x7F3A8834u: goto label_7F3A8834;
    case 0x7F3A8838u: goto label_7F3A8838;
    case 0x7F3A883Cu: goto label_7F3A883C;
    case 0x7F3A8840u: goto label_7F3A8840;
    case 0x7F3A8844u: goto label_7F3A8844;
    case 0x7F3A8848u: goto label_7F3A8848;
    case 0x7F3A884Cu: goto label_7F3A884C;
    case 0x7F3A8850u: goto label_7F3A8850;
    case 0x7F3A8854u: goto label_7F3A8854;
    case 0x7F3A8858u: goto label_7F3A8858;
    case 0x7F3A885Cu: goto label_7F3A885C;
    case 0x7F3A8860u: goto label_7F3A8860;
    case 0x7F3A8864u: goto label_7F3A8864;
    case 0x7F3A8868u: goto label_7F3A8868;
    case 0x7F3A886Cu: goto label_7F3A886C;
    case 0x7F3A8870u: goto label_7F3A8870;
    case 0x7F3A8874u: goto label_7F3A8874;
    case 0x7F3A8878u: goto label_7F3A8878;
    case 0x7F3A887Cu: goto label_7F3A887C;
    case 0x7F3A8880u: goto label_7F3A8880;
    case 0x7F3A8884u: goto label_7F3A8884;
    case 0x7F3A8888u: goto label_7F3A8888;
    case 0x7F3A888Cu: goto label_7F3A888C;
    case 0x7F3A8890u: goto label_7F3A8890;
    case 0x7F3A8894u: goto label_7F3A8894;
    case 0x7F3A8898u: goto label_7F3A8898;
    case 0x7F3A889Cu: goto label_7F3A889C;
    case 0x7F3A88A0u: goto label_7F3A88A0;
    case 0x7F3A88A4u: goto label_7F3A88A4;
    case 0x7F3A88A8u: goto label_7F3A88A8;
    case 0x7F3A88ACu: goto label_7F3A88AC;
    case 0x7F3A88B0u: goto label_7F3A88B0;
    case 0x7F3A88B4u: goto label_7F3A88B4;
    case 0x7F3A88B8u: goto label_7F3A88B8;
    case 0x7F3A88BCu: goto label_7F3A88BC;
    case 0x7F3A88C0u: goto label_7F3A88C0;
    case 0x7F3A88C4u: goto label_7F3A88C4;
    case 0x7F3A88C8u: goto label_7F3A88C8;
    case 0x7F3A88CCu: goto label_7F3A88CC;
    case 0x7F3A88D0u: goto label_7F3A88D0;
    case 0x7F3A88D4u: goto label_7F3A88D4;
    case 0x7F3A88D8u: goto label_7F3A88D8;
    case 0x7F3A88DCu: goto label_7F3A88DC;
    case 0x7F3A88E0u: goto label_7F3A88E0;
    case 0x7F3A88E4u: goto label_7F3A88E4;
    case 0x7F3A88E8u: goto label_7F3A88E8;
    case 0x7F3A88ECu: goto label_7F3A88EC;
    case 0x7F3A88F0u: goto label_7F3A88F0;
    case 0x7F3A88F4u: goto label_7F3A88F4;
    case 0x7F3A88F8u: goto label_7F3A88F8;
    case 0x7F3A88FCu: goto label_7F3A88FC;
    case 0x7F3A8900u: goto label_7F3A8900;
    case 0x7F3A8904u: goto label_7F3A8904;
    case 0x7F3A8908u: goto label_7F3A8908;
    case 0x7F3A890Cu: goto label_7F3A890C;
    case 0x7F3A8910u: goto label_7F3A8910;
    case 0x7F3A8914u: goto label_7F3A8914;
    case 0x7F3A8918u: goto label_7F3A8918;
    case 0x7F3A891Cu: goto label_7F3A891C;
    case 0x7F3A8920u: goto label_7F3A8920;
    case 0x7F3A8924u: goto label_7F3A8924;
    case 0x7F3A8928u: goto label_7F3A8928;
    case 0x7F3A892Cu: goto label_7F3A892C;
    case 0x7F3A8930u: goto label_7F3A8930;
    case 0x7F3A8934u: goto label_7F3A8934;
    case 0x7F3A8938u: goto label_7F3A8938;
    case 0x7F3A893Cu: goto label_7F3A893C;
    case 0x7F3A8940u: goto label_7F3A8940;
    case 0x7F3A8944u: goto label_7F3A8944;
    case 0x7F3A8948u: goto label_7F3A8948;
    case 0x7F3A894Cu: goto label_7F3A894C;
    case 0x7F3A8950u: goto label_7F3A8950;
    case 0x7F3A8954u: goto label_7F3A8954;
    case 0x7F3A8958u: goto label_7F3A8958;
    case 0x7F3A895Cu: goto label_7F3A895C;
    case 0x7F3A8960u: goto label_7F3A8960;
    case 0x7F3A8964u: goto label_7F3A8964;
    case 0x7F3A8968u: goto label_7F3A8968;
    case 0x7F3A896Cu: goto label_7F3A896C;
    case 0x7F3A8970u: goto label_7F3A8970;
    case 0x7F3A8974u: goto label_7F3A8974;
    case 0x7F3A8978u: goto label_7F3A8978;
    case 0x7F3A897Cu: goto label_7F3A897C;
    case 0x7F3A8980u: goto label_7F3A8980;
    case 0x7F3A8984u: goto label_7F3A8984;
    case 0x7F3A8988u: goto label_7F3A8988;
    case 0x7F3A898Cu: goto label_7F3A898C;
    case 0x7F3A8990u: goto label_7F3A8990;
    case 0x7F3A8994u: goto label_7F3A8994;
    case 0x7F3A8998u: goto label_7F3A8998;
    case 0x7F3A899Cu: goto label_7F3A899C;
    case 0x7F3A89A0u: goto label_7F3A89A0;
    case 0x7F3A89A4u: goto label_7F3A89A4;
    case 0x7F3A89A8u: goto label_7F3A89A8;
    case 0x7F3A89ACu: goto label_7F3A89AC;
    case 0x7F3A89B0u: goto label_7F3A89B0;
    case 0x7F3A89B4u: goto label_7F3A89B4;
    case 0x7F3A89B8u: goto label_7F3A89B8;
    case 0x7F3A89BCu: goto label_7F3A89BC;
    case 0x7F3A89C0u: goto label_7F3A89C0;
    case 0x7F3A89C4u: goto label_7F3A89C4;
    case 0x7F3A89C8u: goto label_7F3A89C8;
    case 0x7F3A89CCu: goto label_7F3A89CC;
    case 0x7F3A89D0u: goto label_7F3A89D0;
    case 0x7F3A89D4u: goto label_7F3A89D4;
    case 0x7F3A89D8u: goto label_7F3A89D8;
    case 0x7F3A89DCu: goto label_7F3A89DC;
    case 0x7F3A89E0u: goto label_7F3A89E0;
    case 0x7F3A89E4u: goto label_7F3A89E4;
    case 0x7F3A89E8u: goto label_7F3A89E8;
    case 0x7F3A89ECu: goto label_7F3A89EC;
    case 0x7F3A89F0u: goto label_7F3A89F0;
    case 0x7F3A89F4u: goto label_7F3A89F4;
    case 0x7F3A89F8u: goto label_7F3A89F8;
    case 0x7F3A89FCu: goto label_7F3A89FC;
    case 0x7F3A8A00u: goto label_7F3A8A00;
    case 0x7F3A8A04u: goto label_7F3A8A04;
    case 0x7F3A8A08u: goto label_7F3A8A08;
    case 0x7F3A8A0Cu: goto label_7F3A8A0C;
    case 0x7F3A8A10u: goto label_7F3A8A10;
    case 0x7F3A8A14u: goto label_7F3A8A14;
    case 0x7F3A8A18u: goto label_7F3A8A18;
    case 0x7F3A8A1Cu: goto label_7F3A8A1C;
    case 0x7F3A8A20u: goto label_7F3A8A20;
    case 0x7F3A8A24u: goto label_7F3A8A24;
    case 0x7F3A8A28u: goto label_7F3A8A28;
    case 0x7F3A8A2Cu: goto label_7F3A8A2C;
    case 0x7F3A8A30u: goto label_7F3A8A30;
    case 0x7F3A8A34u: goto label_7F3A8A34;
    case 0x7F3A8A38u: goto label_7F3A8A38;
    case 0x7F3A8A3Cu: goto label_7F3A8A3C;
    case 0x7F3A8A40u: goto label_7F3A8A40;
    case 0x7F3A8A44u: goto label_7F3A8A44;
    case 0x7F3A8A48u: goto label_7F3A8A48;
    case 0x7F3A8A4Cu: goto label_7F3A8A4C;
    case 0x7F3A8A50u: goto label_7F3A8A50;
    case 0x7F3A8A54u: goto label_7F3A8A54;
    case 0x7F3A8A58u: goto label_7F3A8A58;
    case 0x7F3A8A5Cu: goto label_7F3A8A5C;
    case 0x7F3A8A60u: goto label_7F3A8A60;
    case 0x7F3A8A64u: goto label_7F3A8A64;
    case 0x7F3A8A68u: goto label_7F3A8A68;
    case 0x7F3A8A6Cu: goto label_7F3A8A6C;
    case 0x7F3A8A70u: goto label_7F3A8A70;
    case 0x7F3A8A74u: goto label_7F3A8A74;
    case 0x7F3A8A78u: goto label_7F3A8A78;
    case 0x7F3A8A7Cu: goto label_7F3A8A7C;
    case 0x7F3A8A80u: goto label_7F3A8A80;
    case 0x7F3A8A84u: goto label_7F3A8A84;
    case 0x7F3A8A88u: goto label_7F3A8A88;
    case 0x7F3A8A8Cu: goto label_7F3A8A8C;
    case 0x7F3A8A90u: goto label_7F3A8A90;
    case 0x7F3A8A94u: goto label_7F3A8A94;
    case 0x7F3A8A98u: goto label_7F3A8A98;
    case 0x7F3A8A9Cu: goto label_7F3A8A9C;
    case 0x7F3A8AA0u: goto label_7F3A8AA0;
    case 0x7F3A8AA4u: goto label_7F3A8AA4;
    case 0x7F3A8AA8u: goto label_7F3A8AA8;
    case 0x7F3A8AACu: goto label_7F3A8AAC;
    case 0x7F3A8AB0u: goto label_7F3A8AB0;
    case 0x7F3A8AB4u: goto label_7F3A8AB4;
    case 0x7F3A8AB8u: goto label_7F3A8AB8;
    case 0x7F3A8ABCu: goto label_7F3A8ABC;
    case 0x7F3A8AC0u: goto label_7F3A8AC0;
    case 0x7F3A8AC4u: goto label_7F3A8AC4;
    case 0x7F3A8AC8u: goto label_7F3A8AC8;
    case 0x7F3A8ACCu: goto label_7F3A8ACC;
    case 0x7F3A8AD0u: goto label_7F3A8AD0;
    case 0x7F3A8AD4u: goto label_7F3A8AD4;
    case 0x7F3A8AD8u: goto label_7F3A8AD8;
    case 0x7F3A8ADCu: goto label_7F3A8ADC;
    case 0x7F3A8AE0u: goto label_7F3A8AE0;
    case 0x7F3A8AE4u: goto label_7F3A8AE4;
    case 0x7F3A8AE8u: goto label_7F3A8AE8;
    case 0x7F3A8AECu: goto label_7F3A8AEC;
    case 0x7F3A8AF0u: goto label_7F3A8AF0;
    case 0x7F3A8AF4u: goto label_7F3A8AF4;
    case 0x7F3A8AF8u: goto label_7F3A8AF8;
    case 0x7F3A8AFCu: goto label_7F3A8AFC;
    case 0x7F3A8B00u: goto label_7F3A8B00;
    case 0x7F3A8B04u: goto label_7F3A8B04;
    case 0x7F3A8B08u: goto label_7F3A8B08;
    case 0x7F3A8B0Cu: goto label_7F3A8B0C;
    case 0x7F3A8B10u: goto label_7F3A8B10;
    case 0x7F3A8B14u: goto label_7F3A8B14;
    case 0x7F3A8B18u: goto label_7F3A8B18;
    case 0x7F3A8B1Cu: goto label_7F3A8B1C;
    case 0x7F3A8B20u: goto label_7F3A8B20;
    case 0x7F3A8B24u: goto label_7F3A8B24;
    case 0x7F3A8B28u: goto label_7F3A8B28;
    case 0x7F3A8B2Cu: goto label_7F3A8B2C;
    case 0x7F3A8B30u: goto label_7F3A8B30;
    case 0x7F3A8B34u: goto label_7F3A8B34;
    case 0x7F3A8B38u: goto label_7F3A8B38;
    case 0x7F3A8B3Cu: goto label_7F3A8B3C;
    case 0x7F3A8B40u: goto label_7F3A8B40;
    case 0x7F3A8B44u: goto label_7F3A8B44;
    case 0x7F3A8B48u: goto label_7F3A8B48;
    case 0x7F3A8B4Cu: goto label_7F3A8B4C;
    case 0x7F3A8B50u: goto label_7F3A8B50;
    case 0x7F3A8B54u: goto label_7F3A8B54;
    case 0x7F3A8B58u: goto label_7F3A8B58;
    case 0x7F3A8B5Cu: goto label_7F3A8B5C;
    case 0x7F3A8B60u: goto label_7F3A8B60;
    case 0x7F3A8B64u: goto label_7F3A8B64;
    case 0x7F3A8B68u: goto label_7F3A8B68;
    case 0x7F3A8B6Cu: goto label_7F3A8B6C;
    case 0x7F3A8B70u: goto label_7F3A8B70;
    case 0x7F3A8B74u: goto label_7F3A8B74;
    case 0x7F3A8B78u: goto label_7F3A8B78;
    case 0x7F3A8B7Cu: goto label_7F3A8B7C;
    case 0x7F3A8B80u: goto label_7F3A8B80;
    case 0x7F3A8B84u: goto label_7F3A8B84;
    case 0x7F3A8B88u: goto label_7F3A8B88;
    case 0x7F3A8B8Cu: goto label_7F3A8B8C;
    case 0x7F3A8B90u: goto label_7F3A8B90;
    case 0x7F3A8B94u: goto label_7F3A8B94;
    case 0x7F3A8B98u: goto label_7F3A8B98;
    case 0x7F3A8B9Cu: goto label_7F3A8B9C;
    case 0x7F3A8BA0u: goto label_7F3A8BA0;
    case 0x7F3A8BA4u: goto label_7F3A8BA4;
    case 0x7F3A8BA8u: goto label_7F3A8BA8;
    case 0x7F3A8BACu: goto label_7F3A8BAC;
    case 0x7F3A8BB0u: goto label_7F3A8BB0;
    case 0x7F3A8BB4u: goto label_7F3A8BB4;
    case 0x7F3A8BB8u: goto label_7F3A8BB8;
    case 0x7F3A8BBCu: goto label_7F3A8BBC;
    case 0x7F3A8BC0u: goto label_7F3A8BC0;
    case 0x7F3A8BC4u: goto label_7F3A8BC4;
    case 0x7F3A8BC8u: goto label_7F3A8BC8;
    case 0x7F3A8BCCu: goto label_7F3A8BCC;
    case 0x7F3A8BD0u: goto label_7F3A8BD0;
    case 0x7F3A8BD4u: goto label_7F3A8BD4;
    case 0x7F3A8BD8u: goto label_7F3A8BD8;
    case 0x7F3A8BDCu: goto label_7F3A8BDC;
    case 0x7F3A8BE0u: goto label_7F3A8BE0;
    case 0x7F3A8BE4u: goto label_7F3A8BE4;
    case 0x7F3A8BE8u: goto label_7F3A8BE8;
    case 0x7F3A8BECu: goto label_7F3A8BEC;
    case 0x7F3A8BF0u: goto label_7F3A8BF0;
    case 0x7F3A8BF4u: goto label_7F3A8BF4;
    case 0x7F3A8BF8u: goto label_7F3A8BF8;
    case 0x7F3A8BFCu: goto label_7F3A8BFC;
    case 0x7F3A8C00u: goto label_7F3A8C00;
    case 0x7F3A8C04u: goto label_7F3A8C04;
    case 0x7F3A8C08u: goto label_7F3A8C08;
    case 0x7F3A8C0Cu: goto label_7F3A8C0C;
    case 0x7F3A8C10u: goto label_7F3A8C10;
    case 0x7F3A8C14u: goto label_7F3A8C14;
    case 0x7F3A8C18u: goto label_7F3A8C18;
    case 0x7F3A8C1Cu: goto label_7F3A8C1C;
    case 0x7F3A8C20u: goto label_7F3A8C20;
    case 0x7F3A8C24u: goto label_7F3A8C24;
    case 0x7F3A8C28u: goto label_7F3A8C28;
    case 0x7F3A8C2Cu: goto label_7F3A8C2C;
    case 0x7F3A8C30u: goto label_7F3A8C30;
    case 0x7F3A8C34u: goto label_7F3A8C34;
    case 0x7F3A8C38u: goto label_7F3A8C38;
    case 0x7F3A8C3Cu: goto label_7F3A8C3C;
    case 0x7F3A8C40u: goto label_7F3A8C40;
    case 0x7F3A8C44u: goto label_7F3A8C44;
    case 0x7F3A8C48u: goto label_7F3A8C48;
    case 0x7F3A8C4Cu: goto label_7F3A8C4C;
    case 0x7F3A8C50u: goto label_7F3A8C50;
    case 0x7F3A8C54u: goto label_7F3A8C54;
    case 0x7F3A8C58u: goto label_7F3A8C58;
    case 0x7F3A8C5Cu: goto label_7F3A8C5C;
    case 0x7F3A8C60u: goto label_7F3A8C60;
    case 0x7F3A8C64u: goto label_7F3A8C64;
    case 0x7F3A8C68u: goto label_7F3A8C68;
    case 0x7F3A8C6Cu: goto label_7F3A8C6C;
    case 0x7F3A8C70u: goto label_7F3A8C70;
    case 0x7F3A8C74u: goto label_7F3A8C74;
    case 0x7F3A8C78u: goto label_7F3A8C78;
    case 0x7F3A8C7Cu: goto label_7F3A8C7C;
    case 0x7F3A8C80u: goto label_7F3A8C80;
    case 0x7F3A8C84u: goto label_7F3A8C84;
    case 0x7F3A8C88u: goto label_7F3A8C88;
    case 0x7F3A8C8Cu: goto label_7F3A8C8C;
    case 0x7F3A8C90u: goto label_7F3A8C90;
    case 0x7F3A8C94u: goto label_7F3A8C94;
    case 0x7F3A8C98u: goto label_7F3A8C98;
    case 0x7F3A8C9Cu: goto label_7F3A8C9C;
    case 0x7F3A8CA0u: goto label_7F3A8CA0;
    case 0x7F3A8CA4u: goto label_7F3A8CA4;
    case 0x7F3A8CA8u: goto label_7F3A8CA8;
    case 0x7F3A8CACu: goto label_7F3A8CAC;
    case 0x7F3A8CB0u: goto label_7F3A8CB0;
    case 0x7F3A8CB4u: goto label_7F3A8CB4;
    case 0x7F3A8CB8u: goto label_7F3A8CB8;
    case 0x7F3A8CBCu: goto label_7F3A8CBC;
    case 0x7F3A8CC0u: goto label_7F3A8CC0;
    case 0x7F3A8CC4u: goto label_7F3A8CC4;
    case 0x7F3A8CC8u: goto label_7F3A8CC8;
    case 0x7F3A8CCCu: goto label_7F3A8CCC;
    case 0x7F3A8CD0u: goto label_7F3A8CD0;
    case 0x7F3A8CD4u: goto label_7F3A8CD4;
    case 0x7F3A8CD8u: goto label_7F3A8CD8;
    case 0x7F3A8CDCu: goto label_7F3A8CDC;
    case 0x7F3A8CE0u: goto label_7F3A8CE0;
    case 0x7F3A8CE4u: goto label_7F3A8CE4;
    case 0x7F3A8CE8u: goto label_7F3A8CE8;
    case 0x7F3A8CECu: goto label_7F3A8CEC;
    case 0x7F3A8CF0u: goto label_7F3A8CF0;
    case 0x7F3A8CF4u: goto label_7F3A8CF4;
    case 0x7F3A8CF8u: goto label_7F3A8CF8;
    case 0x7F3A8CFCu: goto label_7F3A8CFC;
    case 0x7F3A8D00u: goto label_7F3A8D00;
    case 0x7F3A8D04u: goto label_7F3A8D04;
    case 0x7F3A8D08u: goto label_7F3A8D08;
    case 0x7F3A8D0Cu: goto label_7F3A8D0C;
    case 0x7F3A8D10u: goto label_7F3A8D10;
    case 0x7F3A8D14u: goto label_7F3A8D14;
    case 0x7F3A8D18u: goto label_7F3A8D18;
    case 0x7F3A8D1Cu: goto label_7F3A8D1C;
    case 0x7F3A8D20u: goto label_7F3A8D20;
    case 0x7F3A8D24u: goto label_7F3A8D24;
    case 0x7F3A8D28u: goto label_7F3A8D28;
    case 0x7F3A8D2Cu: goto label_7F3A8D2C;
    case 0x7F3A8D30u: goto label_7F3A8D30;
    case 0x7F3A8D34u: goto label_7F3A8D34;
    case 0x7F3A8D38u: goto label_7F3A8D38;
    case 0x7F3A8D3Cu: goto label_7F3A8D3C;
    case 0x7F3A8D40u: goto label_7F3A8D40;
    case 0x7F3A8D44u: goto label_7F3A8D44;
    case 0x7F3A8D48u: goto label_7F3A8D48;
    case 0x7F3A8D4Cu: goto label_7F3A8D4C;
    case 0x7F3A8D50u: goto label_7F3A8D50;
    case 0x7F3A8D54u: goto label_7F3A8D54;
    case 0x7F3A8D58u: goto label_7F3A8D58;
    case 0x7F3A8D5Cu: goto label_7F3A8D5C;
    case 0x7F3A8D60u: goto label_7F3A8D60;
    case 0x7F3A8D64u: goto label_7F3A8D64;
    case 0x7F3A8D68u: goto label_7F3A8D68;
    case 0x7F3A8D6Cu: goto label_7F3A8D6C;
    case 0x7F3A8D70u: goto label_7F3A8D70;
    case 0x7F3A8D74u: goto label_7F3A8D74;
    case 0x7F3A8D78u: goto label_7F3A8D78;
    case 0x7F3A8D7Cu: goto label_7F3A8D7C;
    case 0x7F3A8D80u: goto label_7F3A8D80;
    case 0x7F3A8D84u: goto label_7F3A8D84;
    case 0x7F3A8D88u: goto label_7F3A8D88;
    case 0x7F3A8D8Cu: goto label_7F3A8D8C;
    case 0x7F3A8D90u: goto label_7F3A8D90;
    case 0x7F3A8D94u: goto label_7F3A8D94;
    case 0x7F3A8D98u: goto label_7F3A8D98;
    case 0x7F3A8D9Cu: goto label_7F3A8D9C;
    case 0x7F3A8DA0u: goto label_7F3A8DA0;
    case 0x7F3A8DA4u: goto label_7F3A8DA4;
    case 0x7F3A8DA8u: goto label_7F3A8DA8;
    case 0x7F3A8DACu: goto label_7F3A8DAC;
    case 0x7F3A8DB0u: goto label_7F3A8DB0;
    case 0x7F3A8DB4u: goto label_7F3A8DB4;
    case 0x7F3A8DB8u: goto label_7F3A8DB8;
    case 0x7F3A8DBCu: goto label_7F3A8DBC;
    case 0x7F3A8DC0u: goto label_7F3A8DC0;
    case 0x7F3A8DC4u: goto label_7F3A8DC4;
    case 0x7F3A8DC8u: goto label_7F3A8DC8;
    case 0x7F3A8DCCu: goto label_7F3A8DCC;
    case 0x7F3A8DD0u: goto label_7F3A8DD0;
    case 0x7F3A8DD4u: goto label_7F3A8DD4;
    case 0x7F3A8DD8u: goto label_7F3A8DD8;
    case 0x7F3A8DDCu: goto label_7F3A8DDC;
    case 0x7F3A8DE0u: goto label_7F3A8DE0;
    case 0x7F3A8DE4u: goto label_7F3A8DE4;
    case 0x7F3A8DE8u: goto label_7F3A8DE8;
    case 0x7F3A8DECu: goto label_7F3A8DEC;
    case 0x7F3A8DF0u: goto label_7F3A8DF0;
    case 0x7F3A8DF4u: goto label_7F3A8DF4;
    case 0x7F3A8DF8u: goto label_7F3A8DF8;
    case 0x7F3A8DFCu: goto label_7F3A8DFC;
    case 0x7F3A8E00u: goto label_7F3A8E00;
    case 0x7F3A8E04u: goto label_7F3A8E04;
    case 0x7F3A8E08u: goto label_7F3A8E08;
    case 0x7F3A8E0Cu: goto label_7F3A8E0C;
    case 0x7F3A8E10u: goto label_7F3A8E10;
    case 0x7F3A8E14u: goto label_7F3A8E14;
    case 0x7F3A8E18u: goto label_7F3A8E18;
    case 0x7F3A8E1Cu: goto label_7F3A8E1C;
    case 0x7F3A8E20u: goto label_7F3A8E20;
    case 0x7F3A8E24u: goto label_7F3A8E24;
    case 0x7F3A8E28u: goto label_7F3A8E28;
    case 0x7F3A8E2Cu: goto label_7F3A8E2C;
    case 0x7F3A8E30u: goto label_7F3A8E30;
    case 0x7F3A8E34u: goto label_7F3A8E34;
    case 0x7F3A8E38u: goto label_7F3A8E38;
    case 0x7F3A8E3Cu: goto label_7F3A8E3C;
    case 0x7F3A8E40u: goto label_7F3A8E40;
    case 0x7F3A8E44u: goto label_7F3A8E44;
    case 0x7F3A8E48u: goto label_7F3A8E48;
    case 0x7F3A8E4Cu: goto label_7F3A8E4C;
    case 0x7F3A8E50u: goto label_7F3A8E50;
    case 0x7F3A8E54u: goto label_7F3A8E54;
    case 0x7F3A8E58u: goto label_7F3A8E58;
    case 0x7F3A8E5Cu: goto label_7F3A8E5C;
    case 0x7F3A8E60u: goto label_7F3A8E60;
    case 0x7F3A8E64u: goto label_7F3A8E64;
    case 0x7F3A8E68u: goto label_7F3A8E68;
    case 0x7F3A8E6Cu: goto label_7F3A8E6C;
    case 0x7F3A8E70u: goto label_7F3A8E70;
    case 0x7F3A8E74u: goto label_7F3A8E74;
    case 0x7F3A8E78u: goto label_7F3A8E78;
    case 0x7F3A8E7Cu: goto label_7F3A8E7C;
    case 0x7F3A8E80u: goto label_7F3A8E80;
    case 0x7F3A8E84u: goto label_7F3A8E84;
    case 0x7F3A8E88u: goto label_7F3A8E88;
    case 0x7F3A8E8Cu: goto label_7F3A8E8C;
    case 0x7F3A8E90u: goto label_7F3A8E90;
    case 0x7F3A8E94u: goto label_7F3A8E94;
    case 0x7F3A8E98u: goto label_7F3A8E98;
    case 0x7F3A8E9Cu: goto label_7F3A8E9C;
    case 0x7F3A8EA0u: goto label_7F3A8EA0;
    case 0x7F3A8EA4u: goto label_7F3A8EA4;
    case 0x7F3A8EA8u: goto label_7F3A8EA8;
    case 0x7F3A8EACu: goto label_7F3A8EAC;
    case 0x7F3A8EB0u: goto label_7F3A8EB0;
    case 0x7F3A8EB4u: goto label_7F3A8EB4;
    case 0x7F3A8EB8u: goto label_7F3A8EB8;
    case 0x7F3A8EBCu: goto label_7F3A8EBC;
    case 0x7F3A8EC0u: goto label_7F3A8EC0;
    case 0x7F3A8EC4u: goto label_7F3A8EC4;
    case 0x7F3A8EC8u: goto label_7F3A8EC8;
    case 0x7F3A8ECCu: goto label_7F3A8ECC;
    case 0x7F3A8ED0u: goto label_7F3A8ED0;
    case 0x7F3A8ED4u: goto label_7F3A8ED4;
    case 0x7F3A8ED8u: goto label_7F3A8ED8;
    case 0x7F3A8EDCu: goto label_7F3A8EDC;
    case 0x7F3A8EE0u: goto label_7F3A8EE0;
    case 0x7F3A8EE4u: goto label_7F3A8EE4;
    case 0x7F3A8EE8u: goto label_7F3A8EE8;
    case 0x7F3A8EECu: goto label_7F3A8EEC;
    case 0x7F3A8EF0u: goto label_7F3A8EF0;
    case 0x7F3A8EF4u: goto label_7F3A8EF4;
    case 0x7F3A8EF8u: goto label_7F3A8EF8;
    case 0x7F3A8EFCu: goto label_7F3A8EFC;
    case 0x7F3A8F00u: goto label_7F3A8F00;
    case 0x7F3A8F04u: goto label_7F3A8F04;
    case 0x7F3A8F08u: goto label_7F3A8F08;
    case 0x7F3A8F0Cu: goto label_7F3A8F0C;
    case 0x7F3A8F10u: goto label_7F3A8F10;
    case 0x7F3A8F14u: goto label_7F3A8F14;
    case 0x7F3A8F18u: goto label_7F3A8F18;
    case 0x7F3A8F1Cu: goto label_7F3A8F1C;
    case 0x7F3A8F20u: goto label_7F3A8F20;
    case 0x7F3A8F24u: goto label_7F3A8F24;
    case 0x7F3A8F28u: goto label_7F3A8F28;
    case 0x7F3A8F2Cu: goto label_7F3A8F2C;
    case 0x7F3A8F30u: goto label_7F3A8F30;
    case 0x7F3A8F34u: goto label_7F3A8F34;
    case 0x7F3A8F38u: goto label_7F3A8F38;
    case 0x7F3A8F3Cu: goto label_7F3A8F3C;
    case 0x7F3A8F40u: goto label_7F3A8F40;
    case 0x7F3A8F44u: goto label_7F3A8F44;
    case 0x7F3A8F48u: goto label_7F3A8F48;
    case 0x7F3A8F4Cu: goto label_7F3A8F4C;
    case 0x7F3A8F50u: goto label_7F3A8F50;
    case 0x7F3A8F54u: goto label_7F3A8F54;
    case 0x7F3A8F58u: goto label_7F3A8F58;
    case 0x7F3A8F5Cu: goto label_7F3A8F5C;
    case 0x7F3A8F60u: goto label_7F3A8F60;
    case 0x7F3A8F64u: goto label_7F3A8F64;
    case 0x7F3A8F68u: goto label_7F3A8F68;
    case 0x7F3A8F6Cu: goto label_7F3A8F6C;
    case 0x7F3A8F70u: goto label_7F3A8F70;
    case 0x7F3A8F74u: goto label_7F3A8F74;
    case 0x7F3A8F78u: goto label_7F3A8F78;
    case 0x7F3A8F7Cu: goto label_7F3A8F7C;
    case 0x7F3A8F80u: goto label_7F3A8F80;
    case 0x7F3A8F84u: goto label_7F3A8F84;
    case 0x7F3A8F88u: goto label_7F3A8F88;
    case 0x7F3A8F8Cu: goto label_7F3A8F8C;
    case 0x7F3A8F90u: goto label_7F3A8F90;
    case 0x7F3A8F94u: goto label_7F3A8F94;
    case 0x7F3A8F98u: goto label_7F3A8F98;
    case 0x7F3A8F9Cu: goto label_7F3A8F9C;
    case 0x7F3A8FA0u: goto label_7F3A8FA0;
    case 0x7F3A8FA4u: goto label_7F3A8FA4;
    case 0x7F3A8FA8u: goto label_7F3A8FA8;
    case 0x7F3A8FACu: goto label_7F3A8FAC;
    case 0x7F3A8FB0u: goto label_7F3A8FB0;
    case 0x7F3A8FB4u: goto label_7F3A8FB4;
    case 0x7F3A8FB8u: goto label_7F3A8FB8;
    case 0x7F3A8FBCu: goto label_7F3A8FBC;
    case 0x7F3A8FC0u: goto label_7F3A8FC0;
    case 0x7F3A8FC4u: goto label_7F3A8FC4;
    case 0x7F3A8FC8u: goto label_7F3A8FC8;
    case 0x7F3A8FCCu: goto label_7F3A8FCC;
    case 0x7F3A8FD0u: goto label_7F3A8FD0;
    case 0x7F3A8FD4u: goto label_7F3A8FD4;
    case 0x7F3A8FD8u: goto label_7F3A8FD8;
    case 0x7F3A8FDCu: goto label_7F3A8FDC;
    case 0x7F3A8FE0u: goto label_7F3A8FE0;
    case 0x7F3A8FE4u: goto label_7F3A8FE4;
    case 0x7F3A8FE8u: goto label_7F3A8FE8;
    case 0x7F3A8FECu: goto label_7F3A8FEC;
    case 0x7F3A8FF0u: goto label_7F3A8FF0;
    case 0x7F3A8FF4u: goto label_7F3A8FF4;
    case 0x7F3A8FF8u: goto label_7F3A8FF8;
    case 0x7F3A8FFCu: goto label_7F3A8FFC;
    case 0x7F3A9000u: goto label_7F3A9000;
    case 0x7F3A9004u: goto label_7F3A9004;
    case 0x7F3A9008u: goto label_7F3A9008;
    case 0x7F3A900Cu: goto label_7F3A900C;
    case 0x7F3A9010u: goto label_7F3A9010;
    case 0x7F3A9014u: goto label_7F3A9014;
    case 0x7F3A9018u: goto label_7F3A9018;
    case 0x7F3A901Cu: goto label_7F3A901C;
    case 0x7F3A9020u: goto label_7F3A9020;
    case 0x7F3A9024u: goto label_7F3A9024;
    case 0x7F3A9028u: goto label_7F3A9028;
    case 0x7F3A902Cu: goto label_7F3A902C;
    case 0x7F3A9030u: goto label_7F3A9030;
    case 0x7F3A9034u: goto label_7F3A9034;
    case 0x7F3A9038u: goto label_7F3A9038;
    case 0x7F3A903Cu: goto label_7F3A903C;
    case 0x7F3A9040u: goto label_7F3A9040;
    case 0x7F3A9044u: goto label_7F3A9044;
    case 0x7F3A9048u: goto label_7F3A9048;
    case 0x7F3A904Cu: goto label_7F3A904C;
    case 0x7F3A9050u: goto label_7F3A9050;
    case 0x7F3A9054u: goto label_7F3A9054;
    case 0x7F3A9058u: goto label_7F3A9058;
    case 0x7F3A905Cu: goto label_7F3A905C;
    case 0x7F3A9060u: goto label_7F3A9060;
    case 0x7F3A9064u: goto label_7F3A9064;
    case 0x7F3A9068u: goto label_7F3A9068;
    case 0x7F3A906Cu: goto label_7F3A906C;
    case 0x7F3A9070u: goto label_7F3A9070;
    case 0x7F3A9074u: goto label_7F3A9074;
    case 0x7F3A9078u: goto label_7F3A9078;
    case 0x7F3A907Cu: goto label_7F3A907C;
    case 0x7F3A9080u: goto label_7F3A9080;
    case 0x7F3A9084u: goto label_7F3A9084;
    case 0x7F3A9088u: goto label_7F3A9088;
    case 0x7F3A908Cu: goto label_7F3A908C;
    case 0x7F3A9090u: goto label_7F3A9090;
    case 0x7F3A9094u: goto label_7F3A9094;
    case 0x7F3A9098u: goto label_7F3A9098;
    case 0x7F3A909Cu: goto label_7F3A909C;
    case 0x7F3A90A0u: goto label_7F3A90A0;
    case 0x7F3A90A4u: goto label_7F3A90A4;
    case 0x7F3A90A8u: goto label_7F3A90A8;
    case 0x7F3A90ACu: goto label_7F3A90AC;
    case 0x7F3A90B0u: goto label_7F3A90B0;
    case 0x7F3A90B4u: goto label_7F3A90B4;
    case 0x7F3A90B8u: goto label_7F3A90B8;
    case 0x7F3A90BCu: goto label_7F3A90BC;
    case 0x7F3A90C0u: goto label_7F3A90C0;
    case 0x7F3A90C4u: goto label_7F3A90C4;
    case 0x7F3A90C8u: goto label_7F3A90C8;
    case 0x7F3A90CCu: goto label_7F3A90CC;
    case 0x7F3A90D0u: goto label_7F3A90D0;
    case 0x7F3A90D4u: goto label_7F3A90D4;
    case 0x7F3A90D8u: goto label_7F3A90D8;
    case 0x7F3A90DCu: goto label_7F3A90DC;
    case 0x7F3A90E0u: goto label_7F3A90E0;
    case 0x7F3A90E4u: goto label_7F3A90E4;
    case 0x7F3A90E8u: goto label_7F3A90E8;
    case 0x7F3A90ECu: goto label_7F3A90EC;
    case 0x7F3A90F0u: goto label_7F3A90F0;
    case 0x7F3A90F4u: goto label_7F3A90F4;
    case 0x7F3A90F8u: goto label_7F3A90F8;
    case 0x7F3A90FCu: goto label_7F3A90FC;
    case 0x7F3A9100u: goto label_7F3A9100;
    case 0x7F3A9104u: goto label_7F3A9104;
    case 0x7F3A9108u: goto label_7F3A9108;
    case 0x7F3A910Cu: goto label_7F3A910C;
    case 0x7F3A9110u: goto label_7F3A9110;
    case 0x7F3A9114u: goto label_7F3A9114;
    case 0x7F3A9118u: goto label_7F3A9118;
    case 0x7F3A911Cu: goto label_7F3A911C;
    case 0x7F3A9120u: goto label_7F3A9120;
    case 0x7F3A9124u: goto label_7F3A9124;
    case 0x7F3A9128u: goto label_7F3A9128;
    case 0x7F3A912Cu: goto label_7F3A912C;
    case 0x7F3A9130u: goto label_7F3A9130;
    case 0x7F3A9134u: goto label_7F3A9134;
    case 0x7F3A9138u: goto label_7F3A9138;
    case 0x7F3A913Cu: goto label_7F3A913C;
    case 0x7F3A9140u: goto label_7F3A9140;
    case 0x7F3A9144u: goto label_7F3A9144;
    case 0x7F3A9148u: goto label_7F3A9148;
    case 0x7F3A914Cu: goto label_7F3A914C;
    case 0x7F3A9150u: goto label_7F3A9150;
    case 0x7F3A9154u: goto label_7F3A9154;
    case 0x7F3A9158u: goto label_7F3A9158;
    case 0x7F3A915Cu: goto label_7F3A915C;
    case 0x7F3A9160u: goto label_7F3A9160;
    case 0x7F3A9164u: goto label_7F3A9164;
    case 0x7F3A9168u: goto label_7F3A9168;
    case 0x7F3A916Cu: goto label_7F3A916C;
    case 0x7F3A9170u: goto label_7F3A9170;
    case 0x7F3A9174u: goto label_7F3A9174;
    case 0x7F3A9178u: goto label_7F3A9178;
    case 0x7F3A917Cu: goto label_7F3A917C;
    case 0x7F3A9180u: goto label_7F3A9180;
    case 0x7F3A9184u: goto label_7F3A9184;
    case 0x7F3A9188u: goto label_7F3A9188;
    case 0x7F3A918Cu: goto label_7F3A918C;
    case 0x7F3A9190u: goto label_7F3A9190;
    case 0x7F3A9194u: goto label_7F3A9194;
    case 0x7F3A9198u: goto label_7F3A9198;
    case 0x7F3A919Cu: goto label_7F3A919C;
    case 0x7F3A91A0u: goto label_7F3A91A0;
    case 0x7F3A91A4u: goto label_7F3A91A4;
    case 0x7F3A91A8u: goto label_7F3A91A8;
    case 0x7F3A91ACu: goto label_7F3A91AC;
    case 0x7F3A91B0u: goto label_7F3A91B0;
    case 0x7F3A91B4u: goto label_7F3A91B4;
    case 0x7F3A91B8u: goto label_7F3A91B8;
    case 0x7F3A91BCu: goto label_7F3A91BC;
    case 0x7F3A91C0u: goto label_7F3A91C0;
    case 0x7F3A91C4u: goto label_7F3A91C4;
    case 0x7F3A91C8u: goto label_7F3A91C8;
    case 0x7F3A91CCu: goto label_7F3A91CC;
    case 0x7F3A91D0u: goto label_7F3A91D0;
    case 0x7F3A91D4u: goto label_7F3A91D4;
    case 0x7F3A91D8u: goto label_7F3A91D8;
    case 0x7F3A91DCu: goto label_7F3A91DC;
    case 0x7F3A91E0u: goto label_7F3A91E0;
    case 0x7F3A91E4u: goto label_7F3A91E4;
    case 0x7F3A91E8u: goto label_7F3A91E8;
    case 0x7F3A91ECu: goto label_7F3A91EC;
    case 0x7F3A91F0u: goto label_7F3A91F0;
    case 0x7F3A91F4u: goto label_7F3A91F4;
    case 0x7F3A91F8u: goto label_7F3A91F8;
    case 0x7F3A91FCu: goto label_7F3A91FC;
    case 0x7F3A9200u: goto label_7F3A9200;
    case 0x7F3A9204u: goto label_7F3A9204;
    case 0x7F3A9208u: goto label_7F3A9208;
    case 0x7F3A920Cu: goto label_7F3A920C;
    case 0x7F3A9210u: goto label_7F3A9210;
    case 0x7F3A9214u: goto label_7F3A9214;
    case 0x7F3A9218u: goto label_7F3A9218;
    case 0x7F3A921Cu: goto label_7F3A921C;
    case 0x7F3A9220u: goto label_7F3A9220;
    case 0x7F3A9224u: goto label_7F3A9224;
    case 0x7F3A9228u: goto label_7F3A9228;
    case 0x7F3A922Cu: goto label_7F3A922C;
    case 0x7F3A9230u: goto label_7F3A9230;
    case 0x7F3A9234u: goto label_7F3A9234;
    case 0x7F3A9238u: goto label_7F3A9238;
    case 0x7F3A923Cu: goto label_7F3A923C;
    case 0x7F3A9240u: goto label_7F3A9240;
    case 0x7F3A9244u: goto label_7F3A9244;
    case 0x7F3A9248u: goto label_7F3A9248;
    case 0x7F3A924Cu: goto label_7F3A924C;
    case 0x7F3A9250u: goto label_7F3A9250;
    case 0x7F3A9254u: goto label_7F3A9254;
    case 0x7F3A9258u: goto label_7F3A9258;
    case 0x7F3A925Cu: goto label_7F3A925C;
    case 0x7F3A9260u: goto label_7F3A9260;
    case 0x7F3A9264u: goto label_7F3A9264;
    case 0x7F3A9268u: goto label_7F3A9268;
    case 0x7F3A926Cu: goto label_7F3A926C;
    case 0x7F3A9270u: goto label_7F3A9270;
    case 0x7F3A9274u: goto label_7F3A9274;
    case 0x7F3A9278u: goto label_7F3A9278;
    case 0x7F3A927Cu: goto label_7F3A927C;
    case 0x7F3A9280u: goto label_7F3A9280;
    case 0x7F3A9284u: goto label_7F3A9284;
    case 0x7F3A9288u: goto label_7F3A9288;
    case 0x7F3A928Cu: goto label_7F3A928C;
    case 0x7F3A9290u: goto label_7F3A9290;
    case 0x7F3A9294u: goto label_7F3A9294;
    case 0x7F3A9298u: goto label_7F3A9298;
    case 0x7F3A929Cu: goto label_7F3A929C;
    case 0x7F3A92A0u: goto label_7F3A92A0;
    case 0x7F3A92A4u: goto label_7F3A92A4;
    case 0x7F3A92A8u: goto label_7F3A92A8;
    case 0x7F3A92ACu: goto label_7F3A92AC;
    case 0x7F3A92B0u: goto label_7F3A92B0;
    case 0x7F3A92B4u: goto label_7F3A92B4;
    case 0x7F3A92B8u: goto label_7F3A92B8;
    case 0x7F3A92BCu: goto label_7F3A92BC;
    case 0x7F3A92C0u: goto label_7F3A92C0;
    case 0x7F3A92C4u: goto label_7F3A92C4;
    case 0x7F3A92C8u: goto label_7F3A92C8;
    case 0x7F3A92CCu: goto label_7F3A92CC;
    case 0x7F3A92D0u: goto label_7F3A92D0;
    case 0x7F3A92D4u: goto label_7F3A92D4;
    case 0x7F3A92D8u: goto label_7F3A92D8;
    case 0x7F3A92DCu: goto label_7F3A92DC;
    case 0x7F3A92E0u: goto label_7F3A92E0;
    case 0x7F3A92E4u: goto label_7F3A92E4;
    case 0x7F3A92E8u: goto label_7F3A92E8;
    case 0x7F3A92ECu: goto label_7F3A92EC;
    case 0x7F3A92F0u: goto label_7F3A92F0;
    case 0x7F3A92F4u: goto label_7F3A92F4;
    case 0x7F3A92F8u: goto label_7F3A92F8;
    case 0x7F3A92FCu: goto label_7F3A92FC;
    case 0x7F3A9300u: goto label_7F3A9300;
    case 0x7F3A9304u: goto label_7F3A9304;
    case 0x7F3A9308u: goto label_7F3A9308;
    case 0x7F3A930Cu: goto label_7F3A930C;
    case 0x7F3A9310u: goto label_7F3A9310;
    case 0x7F3A9314u: goto label_7F3A9314;
    case 0x7F3A9318u: goto label_7F3A9318;
    case 0x7F3A931Cu: goto label_7F3A931C;
    case 0x7F3A9320u: goto label_7F3A9320;
    case 0x7F3A9324u: goto label_7F3A9324;
    case 0x7F3A9328u: goto label_7F3A9328;
    case 0x7F3A932Cu: goto label_7F3A932C;
    case 0x7F3A9330u: goto label_7F3A9330;
    case 0x7F3A9334u: goto label_7F3A9334;
    case 0x7F3A9338u: goto label_7F3A9338;
    case 0x7F3A933Cu: goto label_7F3A933C;
    case 0x7F3A9340u: goto label_7F3A9340;
    case 0x7F3A9344u: goto label_7F3A9344;
    case 0x7F3A9348u: goto label_7F3A9348;
    case 0x7F3A934Cu: goto label_7F3A934C;
    case 0x7F3A9350u: goto label_7F3A9350;
    case 0x7F3A9354u: goto label_7F3A9354;
    case 0x7F3A9358u: goto label_7F3A9358;
    case 0x7F3A935Cu: goto label_7F3A935C;
    case 0x7F3A9360u: goto label_7F3A9360;
    case 0x7F3A9364u: goto label_7F3A9364;
    case 0x7F3A9368u: goto label_7F3A9368;
    case 0x7F3A936Cu: goto label_7F3A936C;
    case 0x7F3A9370u: goto label_7F3A9370;
    case 0x7F3A9374u: goto label_7F3A9374;
    case 0x7F3A9378u: goto label_7F3A9378;
    case 0x7F3A937Cu: goto label_7F3A937C;
    case 0x7F3A9380u: goto label_7F3A9380;
    case 0x7F3A9384u: goto label_7F3A9384;
    case 0x7F3A9388u: goto label_7F3A9388;
    case 0x7F3A938Cu: goto label_7F3A938C;
    case 0x7F3A9390u: goto label_7F3A9390;
    case 0x7F3A9394u: goto label_7F3A9394;
    case 0x7F3A9398u: goto label_7F3A9398;
    case 0x7F3A939Cu: goto label_7F3A939C;
    case 0x7F3A93A0u: goto label_7F3A93A0;
    case 0x7F3A93A4u: goto label_7F3A93A4;
    case 0x7F3A93A8u: goto label_7F3A93A8;
    case 0x7F3A93ACu: goto label_7F3A93AC;
    case 0x7F3A93B0u: goto label_7F3A93B0;
    case 0x7F3A93B4u: goto label_7F3A93B4;
    case 0x7F3A93B8u: goto label_7F3A93B8;
    case 0x7F3A93BCu: goto label_7F3A93BC;
    case 0x7F3A93C0u: goto label_7F3A93C0;
    case 0x7F3A93C4u: goto label_7F3A93C4;
    case 0x7F3A93C8u: goto label_7F3A93C8;
    case 0x7F3A93CCu: goto label_7F3A93CC;
    case 0x7F3A93D0u: goto label_7F3A93D0;
    case 0x7F3A93D4u: goto label_7F3A93D4;
    case 0x7F3A93D8u: goto label_7F3A93D8;
    case 0x7F3A93DCu: goto label_7F3A93DC;
    case 0x7F3A93E0u: goto label_7F3A93E0;
    case 0x7F3A93E4u: goto label_7F3A93E4;
    case 0x7F3A93E8u: goto label_7F3A93E8;
    case 0x7F3A93ECu: goto label_7F3A93EC;
    case 0x7F3A93F0u: goto label_7F3A93F0;
    case 0x7F3A93F4u: goto label_7F3A93F4;
    case 0x7F3A93F8u: goto label_7F3A93F8;
    case 0x7F3A93FCu: goto label_7F3A93FC;
    case 0x7F3A9400u: goto label_7F3A9400;
    case 0x7F3A9404u: goto label_7F3A9404;
    case 0x7F3A9408u: goto label_7F3A9408;
    case 0x7F3A940Cu: goto label_7F3A940C;
    case 0x7F3A9410u: goto label_7F3A9410;
    case 0x7F3A9414u: goto label_7F3A9414;
    case 0x7F3A9418u: goto label_7F3A9418;
    case 0x7F3A941Cu: goto label_7F3A941C;
    case 0x7F3A9420u: goto label_7F3A9420;
    case 0x7F3A9424u: goto label_7F3A9424;
    case 0x7F3A9428u: goto label_7F3A9428;
    case 0x7F3A942Cu: goto label_7F3A942C;
    case 0x7F3A9430u: goto label_7F3A9430;
    case 0x7F3A9434u: goto label_7F3A9434;
    case 0x7F3A9438u: goto label_7F3A9438;
    case 0x7F3A943Cu: goto label_7F3A943C;
    case 0x7F3A9440u: goto label_7F3A9440;
    case 0x7F3A9444u: goto label_7F3A9444;
    case 0x7F3A9448u: goto label_7F3A9448;
    case 0x7F3A944Cu: goto label_7F3A944C;
    case 0x7F3A9450u: goto label_7F3A9450;
    case 0x7F3A9454u: goto label_7F3A9454;
    case 0x7F3A9458u: goto label_7F3A9458;
    case 0x7F3A945Cu: goto label_7F3A945C;
    case 0x7F3A9460u: goto label_7F3A9460;
    case 0x7F3A9464u: goto label_7F3A9464;
    case 0x7F3A9468u: goto label_7F3A9468;
    case 0x7F3A946Cu: goto label_7F3A946C;
    case 0x7F3A9470u: goto label_7F3A9470;
    case 0x7F3A9474u: goto label_7F3A9474;
    case 0x7F3A9478u: goto label_7F3A9478;
    case 0x7F3A947Cu: goto label_7F3A947C;
    case 0x7F3A9480u: goto label_7F3A9480;
    case 0x7F3A9484u: goto label_7F3A9484;
    case 0x7F3A9488u: goto label_7F3A9488;
    case 0x7F3A948Cu: goto label_7F3A948C;
    case 0x7F3A9490u: goto label_7F3A9490;
    case 0x7F3A9494u: goto label_7F3A9494;
    case 0x7F3A9498u: goto label_7F3A9498;
    case 0x7F3A949Cu: goto label_7F3A949C;
    case 0x7F3A94A0u: goto label_7F3A94A0;
    case 0x7F3A94A4u: goto label_7F3A94A4;
    case 0x7F3A94A8u: goto label_7F3A94A8;
    case 0x7F3A94ACu: goto label_7F3A94AC;
    case 0x7F3A94B0u: goto label_7F3A94B0;
    case 0x7F3A94B4u: goto label_7F3A94B4;
    case 0x7F3A94B8u: goto label_7F3A94B8;
    case 0x7F3A94BCu: goto label_7F3A94BC;
    case 0x7F3A94C0u: goto label_7F3A94C0;
    case 0x7F3A94C4u: goto label_7F3A94C4;
    case 0x7F3A94C8u: goto label_7F3A94C8;
    case 0x7F3A94CCu: goto label_7F3A94CC;
    case 0x7F3A94D0u: goto label_7F3A94D0;
    case 0x7F3A94D4u: goto label_7F3A94D4;
    case 0x7F3A94D8u: goto label_7F3A94D8;
    case 0x7F3A94DCu: goto label_7F3A94DC;
    case 0x7F3A94E0u: goto label_7F3A94E0;
    case 0x7F3A94E4u: goto label_7F3A94E4;
    case 0x7F3A94E8u: goto label_7F3A94E8;
    case 0x7F3A94ECu: goto label_7F3A94EC;
    case 0x7F3A94F0u: goto label_7F3A94F0;
    case 0x7F3A94F4u: goto label_7F3A94F4;
    case 0x7F3A94F8u: goto label_7F3A94F8;
    case 0x7F3A94FCu: goto label_7F3A94FC;
    case 0x7F3A9500u: goto label_7F3A9500;
    case 0x7F3A9504u: goto label_7F3A9504;
    case 0x7F3A9508u: goto label_7F3A9508;
    case 0x7F3A950Cu: goto label_7F3A950C;
    case 0x7F3A9510u: goto label_7F3A9510;
    case 0x7F3A9514u: goto label_7F3A9514;
    case 0x7F3A9518u: goto label_7F3A9518;
    case 0x7F3A951Cu: goto label_7F3A951C;
    case 0x7F3A9520u: goto label_7F3A9520;
    case 0x7F3A9524u: goto label_7F3A9524;
    case 0x7F3A9528u: goto label_7F3A9528;
    case 0x7F3A952Cu: goto label_7F3A952C;
    case 0x7F3A9530u: goto label_7F3A9530;
    case 0x7F3A9534u: goto label_7F3A9534;
    case 0x7F3A9538u: goto label_7F3A9538;
    case 0x7F3A953Cu: goto label_7F3A953C;
    case 0x7F3A9540u: goto label_7F3A9540;
    case 0x7F3A9544u: goto label_7F3A9544;
    case 0x7F3A9548u: goto label_7F3A9548;
    case 0x7F3A954Cu: goto label_7F3A954C;
    case 0x7F3A9550u: goto label_7F3A9550;
    case 0x7F3A9554u: goto label_7F3A9554;
    case 0x7F3A9558u: goto label_7F3A9558;
    case 0x7F3A955Cu: goto label_7F3A955C;
    case 0x7F3A9560u: goto label_7F3A9560;
    case 0x7F3A9564u: goto label_7F3A9564;
    case 0x7F3A9568u: goto label_7F3A9568;
    case 0x7F3A956Cu: goto label_7F3A956C;
    case 0x7F3A9570u: goto label_7F3A9570;
    case 0x7F3A9574u: goto label_7F3A9574;
    case 0x7F3A9578u: goto label_7F3A9578;
    case 0x7F3A957Cu: goto label_7F3A957C;
    case 0x7F3A9580u: goto label_7F3A9580;
    case 0x7F3A9584u: goto label_7F3A9584;
    case 0x7F3A9588u: goto label_7F3A9588;
    case 0x7F3A958Cu: goto label_7F3A958C;
    case 0x7F3A9590u: goto label_7F3A9590;
    case 0x7F3A9594u: goto label_7F3A9594;
    case 0x7F3A9598u: goto label_7F3A9598;
    case 0x7F3A959Cu: goto label_7F3A959C;
    case 0x7F3A95A0u: goto label_7F3A95A0;
    case 0x7F3A95A4u: goto label_7F3A95A4;
    case 0x7F3A95A8u: goto label_7F3A95A8;
    case 0x7F3A95ACu: goto label_7F3A95AC;
    case 0x7F3A95B0u: goto label_7F3A95B0;
    case 0x7F3A95B4u: goto label_7F3A95B4;
    case 0x7F3A95B8u: goto label_7F3A95B8;
    case 0x7F3A95BCu: goto label_7F3A95BC;
    case 0x7F3A95C0u: goto label_7F3A95C0;
    case 0x7F3A95C4u: goto label_7F3A95C4;
    case 0x7F3A95C8u: goto label_7F3A95C8;
    case 0x7F3A95CCu: goto label_7F3A95CC;
    case 0x7F3A95D0u: goto label_7F3A95D0;
    case 0x7F3A95D4u: goto label_7F3A95D4;
    case 0x7F3A95D8u: goto label_7F3A95D8;
    case 0x7F3A95DCu: goto label_7F3A95DC;
    case 0x7F3A95E0u: goto label_7F3A95E0;
    case 0x7F3A95E4u: goto label_7F3A95E4;
    case 0x7F3A95E8u: goto label_7F3A95E8;
    case 0x7F3A95ECu: goto label_7F3A95EC;
    case 0x7F3A95F0u: goto label_7F3A95F0;
    case 0x7F3A95F4u: goto label_7F3A95F4;
    case 0x7F3A95F8u: goto label_7F3A95F8;
    case 0x7F3A95FCu: goto label_7F3A95FC;
    case 0x7F3A9600u: goto label_7F3A9600;
    case 0x7F3A9604u: goto label_7F3A9604;
    case 0x7F3A9608u: goto label_7F3A9608;
    case 0x7F3A960Cu: goto label_7F3A960C;
    case 0x7F3A9610u: goto label_7F3A9610;
    case 0x7F3A9614u: goto label_7F3A9614;
    case 0x7F3A9618u: goto label_7F3A9618;
    case 0x7F3A961Cu: goto label_7F3A961C;
    case 0x7F3A9620u: goto label_7F3A9620;
    case 0x7F3A9624u: goto label_7F3A9624;
    case 0x7F3A9628u: goto label_7F3A9628;
    case 0x7F3A962Cu: goto label_7F3A962C;
    case 0x7F3A9630u: goto label_7F3A9630;
    case 0x7F3A9634u: goto label_7F3A9634;
    case 0x7F3A9638u: goto label_7F3A9638;
    case 0x7F3A963Cu: goto label_7F3A963C;
    case 0x7F3A9640u: goto label_7F3A9640;
    case 0x7F3A9644u: goto label_7F3A9644;
    case 0x7F3A9648u: goto label_7F3A9648;
    case 0x7F3A964Cu: goto label_7F3A964C;
    case 0x7F3A9650u: goto label_7F3A9650;
    case 0x7F3A9654u: goto label_7F3A9654;
    case 0x7F3A9658u: goto label_7F3A9658;
    case 0x7F3A965Cu: goto label_7F3A965C;
    case 0x7F3A9660u: goto label_7F3A9660;
    case 0x7F3A9664u: goto label_7F3A9664;
    case 0x7F3A9668u: goto label_7F3A9668;
    case 0x7F3A966Cu: goto label_7F3A966C;
    case 0x7F3A9670u: goto label_7F3A9670;
    case 0x7F3A9674u: goto label_7F3A9674;
    case 0x7F3A9678u: goto label_7F3A9678;
    case 0x7F3A967Cu: goto label_7F3A967C;
    case 0x7F3A9680u: goto label_7F3A9680;
    case 0x7F3A9684u: goto label_7F3A9684;
    case 0x7F3A9688u: goto label_7F3A9688;
    case 0x7F3A968Cu: goto label_7F3A968C;
    case 0x7F3A9690u: goto label_7F3A9690;
    case 0x7F3A9694u: goto label_7F3A9694;
    case 0x7F3A9698u: goto label_7F3A9698;
    case 0x7F3A969Cu: goto label_7F3A969C;
    case 0x7F3A96A0u: goto label_7F3A96A0;
    case 0x7F3A96A4u: goto label_7F3A96A4;
    case 0x7F3A96A8u: goto label_7F3A96A8;
    case 0x7F3A96ACu: goto label_7F3A96AC;
    case 0x7F3A96B0u: goto label_7F3A96B0;
    case 0x7F3A96B4u: goto label_7F3A96B4;
    case 0x7F3A96B8u: goto label_7F3A96B8;
    case 0x7F3A96BCu: goto label_7F3A96BC;
    case 0x7F3A96C0u: goto label_7F3A96C0;
    case 0x7F3A96C4u: goto label_7F3A96C4;
    case 0x7F3A96C8u: goto label_7F3A96C8;
    case 0x7F3A96CCu: goto label_7F3A96CC;
    case 0x7F3A96D0u: goto label_7F3A96D0;
    case 0x7F3A96D4u: goto label_7F3A96D4;
    case 0x7F3A96D8u: goto label_7F3A96D8;
    case 0x7F3A96DCu: goto label_7F3A96DC;
    case 0x7F3A96E0u: goto label_7F3A96E0;
    case 0x7F3A96E4u: goto label_7F3A96E4;
    case 0x7F3A96E8u: goto label_7F3A96E8;
    case 0x7F3A96ECu: goto label_7F3A96EC;
    case 0x7F3A96F0u: goto label_7F3A96F0;
    case 0x7F3A96F4u: goto label_7F3A96F4;
    case 0x7F3A96F8u: goto label_7F3A96F8;
    case 0x7F3A96FCu: goto label_7F3A96FC;
    case 0x7F3A9700u: goto label_7F3A9700;
    case 0x7F3A9704u: goto label_7F3A9704;
    case 0x7F3A9708u: goto label_7F3A9708;
    case 0x7F3A970Cu: goto label_7F3A970C;
    case 0x7F3A9710u: goto label_7F3A9710;
    case 0x7F3A9714u: goto label_7F3A9714;
    case 0x7F3A9718u: goto label_7F3A9718;
    case 0x7F3A971Cu: goto label_7F3A971C;
    case 0x7F3A9720u: goto label_7F3A9720;
    case 0x7F3A9724u: goto label_7F3A9724;
    case 0x7F3A9728u: goto label_7F3A9728;
    case 0x7F3A972Cu: goto label_7F3A972C;
    case 0x7F3A9730u: goto label_7F3A9730;
    case 0x7F3A9734u: goto label_7F3A9734;
    case 0x7F3A9738u: goto label_7F3A9738;
    case 0x7F3A973Cu: goto label_7F3A973C;
    case 0x7F3A9740u: goto label_7F3A9740;
    case 0x7F3A9744u: goto label_7F3A9744;
    case 0x7F3A9748u: goto label_7F3A9748;
    case 0x7F3A974Cu: goto label_7F3A974C;
    case 0x7F3A9750u: goto label_7F3A9750;
    case 0x7F3A9754u: goto label_7F3A9754;
    case 0x7F3A9758u: goto label_7F3A9758;
    case 0x7F3A975Cu: goto label_7F3A975C;
    case 0x7F3A9760u: goto label_7F3A9760;
    case 0x7F3A9764u: goto label_7F3A9764;
    case 0x7F3A9768u: goto label_7F3A9768;
    case 0x7F3A976Cu: goto label_7F3A976C;
    case 0x7F3A9770u: goto label_7F3A9770;
    case 0x7F3A9774u: goto label_7F3A9774;
    case 0x7F3A9778u: goto label_7F3A9778;
    case 0x7F3A977Cu: goto label_7F3A977C;
    case 0x7F3A9780u: goto label_7F3A9780;
    case 0x7F3A9784u: goto label_7F3A9784;
    case 0x7F3A9788u: goto label_7F3A9788;
    case 0x7F3A978Cu: goto label_7F3A978C;
    case 0x7F3A9790u: goto label_7F3A9790;
    case 0x7F3A9794u: goto label_7F3A9794;
    case 0x7F3A9798u: goto label_7F3A9798;
    case 0x7F3A979Cu: goto label_7F3A979C;
    case 0x7F3A97A0u: goto label_7F3A97A0;
    case 0x7F3A97A4u: goto label_7F3A97A4;
    case 0x7F3A97A8u: goto label_7F3A97A8;
    case 0x7F3A97ACu: goto label_7F3A97AC;
    case 0x7F3A97B0u: goto label_7F3A97B0;
    case 0x7F3A97B4u: goto label_7F3A97B4;
    case 0x7F3A97B8u: goto label_7F3A97B8;
    case 0x7F3A97BCu: goto label_7F3A97BC;
    case 0x7F3A97C0u: goto label_7F3A97C0;
    case 0x7F3A97C4u: goto label_7F3A97C4;
    case 0x7F3A97C8u: goto label_7F3A97C8;
    case 0x7F3A97CCu: goto label_7F3A97CC;
    case 0x7F3A97D0u: goto label_7F3A97D0;
    case 0x7F3A97D4u: goto label_7F3A97D4;
    case 0x7F3A97D8u: goto label_7F3A97D8;
    case 0x7F3A97DCu: goto label_7F3A97DC;
    case 0x7F3A97E0u: goto label_7F3A97E0;
    case 0x7F3A97E4u: goto label_7F3A97E4;
    case 0x7F3A97E8u: goto label_7F3A97E8;
    case 0x7F3A97ECu: goto label_7F3A97EC;
    case 0x7F3A97F0u: goto label_7F3A97F0;
    case 0x7F3A97F4u: goto label_7F3A97F4;
    case 0x7F3A97F8u: goto label_7F3A97F8;
    case 0x7F3A97FCu: goto label_7F3A97FC;
    case 0x7F3A9800u: goto label_7F3A9800;
    case 0x7F3A9804u: goto label_7F3A9804;
    case 0x7F3A9808u: goto label_7F3A9808;
    case 0x7F3A980Cu: goto label_7F3A980C;
    case 0x7F3A9810u: goto label_7F3A9810;
    case 0x7F3A9814u: goto label_7F3A9814;
    case 0x7F3A9818u: goto label_7F3A9818;
    case 0x7F3A981Cu: goto label_7F3A981C;
    case 0x7F3A9820u: goto label_7F3A9820;
    case 0x7F3A9824u: goto label_7F3A9824;
    case 0x7F3A9828u: goto label_7F3A9828;
    case 0x7F3A982Cu: goto label_7F3A982C;
    case 0x7F3A9830u: goto label_7F3A9830;
    case 0x7F3A9834u: goto label_7F3A9834;
    case 0x7F3A9838u: goto label_7F3A9838;
    case 0x7F3A983Cu: goto label_7F3A983C;
    case 0x7F3A9840u: goto label_7F3A9840;
    case 0x7F3A9844u: goto label_7F3A9844;
    case 0x7F3A9848u: goto label_7F3A9848;
    case 0x7F3A984Cu: goto label_7F3A984C;
    case 0x7F3A9850u: goto label_7F3A9850;
    case 0x7F3A9854u: goto label_7F3A9854;
    case 0x7F3A9858u: goto label_7F3A9858;
    case 0x7F3A985Cu: goto label_7F3A985C;
    case 0x7F3A9860u: goto label_7F3A9860;
    case 0x7F3A9864u: goto label_7F3A9864;
    case 0x7F3A9868u: goto label_7F3A9868;
    case 0x7F3A986Cu: goto label_7F3A986C;
    case 0x7F3A9870u: goto label_7F3A9870;
    case 0x7F3A9874u: goto label_7F3A9874;
    case 0x7F3A9878u: goto label_7F3A9878;
    case 0x7F3A987Cu: goto label_7F3A987C;
    case 0x7F3A9880u: goto label_7F3A9880;
    case 0x7F3A9884u: goto label_7F3A9884;
    case 0x7F3A9888u: goto label_7F3A9888;
    case 0x7F3A988Cu: goto label_7F3A988C;
    case 0x7F3A9890u: goto label_7F3A9890;
    case 0x7F3A9894u: goto label_7F3A9894;
    case 0x7F3A9898u: goto label_7F3A9898;
    case 0x7F3A989Cu: goto label_7F3A989C;
    case 0x7F3A98A0u: goto label_7F3A98A0;
    case 0x7F3A98A4u: goto label_7F3A98A4;
    case 0x7F3A98A8u: goto label_7F3A98A8;
    case 0x7F3A98ACu: goto label_7F3A98AC;
    case 0x7F3A98B0u: goto label_7F3A98B0;
    case 0x7F3A98B4u: goto label_7F3A98B4;
    case 0x7F3A98B8u: goto label_7F3A98B8;
    case 0x7F3A98BCu: goto label_7F3A98BC;
    case 0x7F3A98C0u: goto label_7F3A98C0;
    case 0x7F3A98C4u: goto label_7F3A98C4;
    case 0x7F3A98C8u: goto label_7F3A98C8;
    case 0x7F3A98CCu: goto label_7F3A98CC;
    case 0x7F3A98D0u: goto label_7F3A98D0;
    case 0x7F3A98D4u: goto label_7F3A98D4;
    case 0x7F3A98D8u: goto label_7F3A98D8;
    case 0x7F3A98DCu: goto label_7F3A98DC;
    case 0x7F3A98E0u: goto label_7F3A98E0;
    case 0x7F3A98E4u: goto label_7F3A98E4;
    case 0x7F3A98E8u: goto label_7F3A98E8;
    case 0x7F3A98ECu: goto label_7F3A98EC;
    case 0x7F3A98F0u: goto label_7F3A98F0;
    case 0x7F3A98F4u: goto label_7F3A98F4;
    case 0x7F3A98F8u: goto label_7F3A98F8;
    case 0x7F3A98FCu: goto label_7F3A98FC;
    case 0x7F3A9900u: goto label_7F3A9900;
    case 0x7F3A9904u: goto label_7F3A9904;
    case 0x7F3A9908u: goto label_7F3A9908;
    case 0x7F3A990Cu: goto label_7F3A990C;
    case 0x7F3A9910u: goto label_7F3A9910;
    case 0x7F3A9914u: goto label_7F3A9914;
    case 0x7F3A9918u: goto label_7F3A9918;
    case 0x7F3A991Cu: goto label_7F3A991C;
    case 0x7F3A9920u: goto label_7F3A9920;
    case 0x7F3A9924u: goto label_7F3A9924;
    case 0x7F3A9928u: goto label_7F3A9928;
    case 0x7F3A992Cu: goto label_7F3A992C;
    case 0x7F3A9930u: goto label_7F3A9930;
    case 0x7F3A9934u: goto label_7F3A9934;
    case 0x7F3A9938u: goto label_7F3A9938;
    case 0x7F3A993Cu: goto label_7F3A993C;
    case 0x7F3A9940u: goto label_7F3A9940;
    case 0x7F3A9944u: goto label_7F3A9944;
    case 0x7F3A9948u: goto label_7F3A9948;
    case 0x7F3A994Cu: goto label_7F3A994C;
    case 0x7F3A9950u: goto label_7F3A9950;
    case 0x7F3A9954u: goto label_7F3A9954;
    case 0x7F3A9958u: goto label_7F3A9958;
    case 0x7F3A995Cu: goto label_7F3A995C;
    case 0x7F3A9960u: goto label_7F3A9960;
    case 0x7F3A9964u: goto label_7F3A9964;
    case 0x7F3A9968u: goto label_7F3A9968;
    case 0x7F3A996Cu: goto label_7F3A996C;
    case 0x7F3A9970u: goto label_7F3A9970;
    case 0x7F3A9974u: goto label_7F3A9974;
    case 0x7F3A9978u: goto label_7F3A9978;
    case 0x7F3A997Cu: goto label_7F3A997C;
    case 0x7F3A9980u: goto label_7F3A9980;
    case 0x7F3A9984u: goto label_7F3A9984;
    case 0x7F3A9988u: goto label_7F3A9988;
    case 0x7F3A998Cu: goto label_7F3A998C;
    case 0x7F3A9990u: goto label_7F3A9990;
    case 0x7F3A9994u: goto label_7F3A9994;
    case 0x7F3A9998u: goto label_7F3A9998;
    case 0x7F3A999Cu: goto label_7F3A999C;
    case 0x7F3A99A0u: goto label_7F3A99A0;
    case 0x7F3A99A4u: goto label_7F3A99A4;
    case 0x7F3A99A8u: goto label_7F3A99A8;
    case 0x7F3A99ACu: goto label_7F3A99AC;
    case 0x7F3A99B0u: goto label_7F3A99B0;
    case 0x7F3A99B4u: goto label_7F3A99B4;
    case 0x7F3A99B8u: goto label_7F3A99B8;
    case 0x7F3A99BCu: goto label_7F3A99BC;
    case 0x7F3A99C0u: goto label_7F3A99C0;
    case 0x7F3A99C4u: goto label_7F3A99C4;
    case 0x7F3A99C8u: goto label_7F3A99C8;
    case 0x7F3A99CCu: goto label_7F3A99CC;
    case 0x7F3A99D0u: goto label_7F3A99D0;
    case 0x7F3A99D4u: goto label_7F3A99D4;
    case 0x7F3A99D8u: goto label_7F3A99D8;
    case 0x7F3A99DCu: goto label_7F3A99DC;
    case 0x7F3A99E0u: goto label_7F3A99E0;
    case 0x7F3A99E4u: goto label_7F3A99E4;
    case 0x7F3A99E8u: goto label_7F3A99E8;
    case 0x7F3A99ECu: goto label_7F3A99EC;
    case 0x7F3A99F0u: goto label_7F3A99F0;
    case 0x7F3A99F4u: goto label_7F3A99F4;
    case 0x7F3A99F8u: goto label_7F3A99F8;
    case 0x7F3A99FCu: goto label_7F3A99FC;
    case 0x7F3A9A00u: goto label_7F3A9A00;
    case 0x7F3A9A04u: goto label_7F3A9A04;
    case 0x7F3A9A08u: goto label_7F3A9A08;
    case 0x7F3A9A0Cu: goto label_7F3A9A0C;
    case 0x7F3A9A10u: goto label_7F3A9A10;
    case 0x7F3A9A14u: goto label_7F3A9A14;
    case 0x7F3A9A18u: goto label_7F3A9A18;
    case 0x7F3A9A1Cu: goto label_7F3A9A1C;
    case 0x7F3A9A20u: goto label_7F3A9A20;
    case 0x7F3A9A24u: goto label_7F3A9A24;
    case 0x7F3A9A28u: goto label_7F3A9A28;
    case 0x7F3A9A2Cu: goto label_7F3A9A2C;
    case 0x7F3A9A30u: goto label_7F3A9A30;
    case 0x7F3A9A34u: goto label_7F3A9A34;
    case 0x7F3A9A38u: goto label_7F3A9A38;
    case 0x7F3A9A3Cu: goto label_7F3A9A3C;
    case 0x7F3A9A40u: goto label_7F3A9A40;
    case 0x7F3A9A44u: goto label_7F3A9A44;
    case 0x7F3A9A48u: goto label_7F3A9A48;
    case 0x7F3A9A4Cu: goto label_7F3A9A4C;
    case 0x7F3A9A50u: goto label_7F3A9A50;
    case 0x7F3A9A54u: goto label_7F3A9A54;
    case 0x7F3A9A58u: goto label_7F3A9A58;
    case 0x7F3A9A5Cu: goto label_7F3A9A5C;
    case 0x7F3A9A60u: goto label_7F3A9A60;
    case 0x7F3A9A64u: goto label_7F3A9A64;
    case 0x7F3A9A68u: goto label_7F3A9A68;
    case 0x7F3A9A6Cu: goto label_7F3A9A6C;
    case 0x7F3A9A70u: goto label_7F3A9A70;
    case 0x7F3A9A74u: goto label_7F3A9A74;
    case 0x7F3A9A78u: goto label_7F3A9A78;
    case 0x7F3A9A7Cu: goto label_7F3A9A7C;
    case 0x7F3A9A80u: goto label_7F3A9A80;
    case 0x7F3A9A84u: goto label_7F3A9A84;
    case 0x7F3A9A88u: goto label_7F3A9A88;
    case 0x7F3A9A8Cu: goto label_7F3A9A8C;
    case 0x7F3A9A90u: goto label_7F3A9A90;
    case 0x7F3A9A94u: goto label_7F3A9A94;
    case 0x7F3A9A98u: goto label_7F3A9A98;
    case 0x7F3A9A9Cu: goto label_7F3A9A9C;
    case 0x7F3A9AA0u: goto label_7F3A9AA0;
    case 0x7F3A9AA4u: goto label_7F3A9AA4;
    case 0x7F3A9AA8u: goto label_7F3A9AA8;
    case 0x7F3A9AACu: goto label_7F3A9AAC;
    case 0x7F3A9AB0u: goto label_7F3A9AB0;
    case 0x7F3A9AB4u: goto label_7F3A9AB4;
    case 0x7F3A9AB8u: goto label_7F3A9AB8;
    case 0x7F3A9ABCu: goto label_7F3A9ABC;
    case 0x7F3A9AC0u: goto label_7F3A9AC0;
    case 0x7F3A9AC4u: goto label_7F3A9AC4;
    case 0x7F3A9AC8u: goto label_7F3A9AC8;
    case 0x7F3A9ACCu: goto label_7F3A9ACC;
    case 0x7F3A9AD0u: goto label_7F3A9AD0;
    case 0x7F3A9AD4u: goto label_7F3A9AD4;
    case 0x7F3A9AD8u: goto label_7F3A9AD8;
    case 0x7F3A9ADCu: goto label_7F3A9ADC;
    case 0x7F3A9AE0u: goto label_7F3A9AE0;
    case 0x7F3A9AE4u: goto label_7F3A9AE4;
    case 0x7F3A9AE8u: goto label_7F3A9AE8;
    case 0x7F3A9AECu: goto label_7F3A9AEC;
    case 0x7F3A9AF0u: goto label_7F3A9AF0;
    case 0x7F3A9AF4u: goto label_7F3A9AF4;
    case 0x7F3A9AF8u: goto label_7F3A9AF8;
    case 0x7F3A9AFCu: goto label_7F3A9AFC;
    case 0x7F3A9B00u: goto label_7F3A9B00;
    case 0x7F3A9B04u: goto label_7F3A9B04;
    case 0x7F3A9B08u: goto label_7F3A9B08;
    case 0x7F3A9B0Cu: goto label_7F3A9B0C;
    case 0x7F3A9B10u: goto label_7F3A9B10;
    case 0x7F3A9B14u: goto label_7F3A9B14;
    case 0x7F3A9B18u: goto label_7F3A9B18;
    case 0x7F3A9B1Cu: goto label_7F3A9B1C;
    case 0x7F3A9B20u: goto label_7F3A9B20;
    case 0x7F3A9B24u: goto label_7F3A9B24;
    case 0x7F3A9B28u: goto label_7F3A9B28;
    case 0x7F3A9B2Cu: goto label_7F3A9B2C;
    case 0x7F3A9B30u: goto label_7F3A9B30;
    case 0x7F3A9B34u: goto label_7F3A9B34;
    case 0x7F3A9B38u: goto label_7F3A9B38;
    case 0x7F3A9B3Cu: goto label_7F3A9B3C;
    case 0x7F3A9B40u: goto label_7F3A9B40;
    case 0x7F3A9B44u: goto label_7F3A9B44;
    case 0x7F3A9B48u: goto label_7F3A9B48;
    case 0x7F3A9B4Cu: goto label_7F3A9B4C;
    case 0x7F3A9B50u: goto label_7F3A9B50;
    case 0x7F3A9B54u: goto label_7F3A9B54;
    case 0x7F3A9B58u: goto label_7F3A9B58;
    case 0x7F3A9B5Cu: goto label_7F3A9B5C;
    case 0x7F3A9B60u: goto label_7F3A9B60;
    case 0x7F3A9B64u: goto label_7F3A9B64;
    case 0x7F3A9B68u: goto label_7F3A9B68;
    case 0x7F3A9B6Cu: goto label_7F3A9B6C;
    case 0x7F3A9B70u: goto label_7F3A9B70;
    case 0x7F3A9B74u: goto label_7F3A9B74;
    case 0x7F3A9B78u: goto label_7F3A9B78;
    case 0x7F3A9B7Cu: goto label_7F3A9B7C;
    case 0x7F3A9B80u: goto label_7F3A9B80;
    case 0x7F3A9B84u: goto label_7F3A9B84;
    case 0x7F3A9B88u: goto label_7F3A9B88;
    case 0x7F3A9B8Cu: goto label_7F3A9B8C;
    case 0x7F3A9B90u: goto label_7F3A9B90;
    case 0x7F3A9B94u: goto label_7F3A9B94;
    case 0x7F3A9B98u: goto label_7F3A9B98;
    case 0x7F3A9B9Cu: goto label_7F3A9B9C;
    case 0x7F3A9BA0u: goto label_7F3A9BA0;
    case 0x7F3A9BA4u: goto label_7F3A9BA4;
    case 0x7F3A9BA8u: goto label_7F3A9BA8;
    case 0x7F3A9BACu: goto label_7F3A9BAC;
    case 0x7F3A9BB0u: goto label_7F3A9BB0;
    case 0x7F3A9BB4u: goto label_7F3A9BB4;
    case 0x7F3A9BB8u: goto label_7F3A9BB8;
    case 0x7F3A9BBCu: goto label_7F3A9BBC;
    case 0x7F3A9BC0u: goto label_7F3A9BC0;
    case 0x7F3A9BC4u: goto label_7F3A9BC4;
    case 0x7F3A9BC8u: goto label_7F3A9BC8;
    case 0x7F3A9BCCu: goto label_7F3A9BCC;
    case 0x7F3A9BD0u: goto label_7F3A9BD0;
    case 0x7F3A9BD4u: goto label_7F3A9BD4;
    case 0x7F3A9BD8u: goto label_7F3A9BD8;
    case 0x7F3A9BDCu: goto label_7F3A9BDC;
    case 0x7F3A9BE0u: goto label_7F3A9BE0;
    case 0x7F3A9BE4u: goto label_7F3A9BE4;
    case 0x7F3A9BE8u: goto label_7F3A9BE8;
    case 0x7F3A9BECu: goto label_7F3A9BEC;
    case 0x7F3A9BF0u: goto label_7F3A9BF0;
    case 0x7F3A9BF4u: goto label_7F3A9BF4;
    case 0x7F3A9BF8u: goto label_7F3A9BF8;
    case 0x7F3A9BFCu: goto label_7F3A9BFC;
    case 0x7F3A9C00u: goto label_7F3A9C00;
    case 0x7F3A9C04u: goto label_7F3A9C04;
    case 0x7F3A9C08u: goto label_7F3A9C08;
    case 0x7F3A9C0Cu: goto label_7F3A9C0C;
    case 0x7F3A9C10u: goto label_7F3A9C10;
    case 0x7F3A9C14u: goto label_7F3A9C14;
    case 0x7F3A9C18u: goto label_7F3A9C18;
    case 0x7F3A9C1Cu: goto label_7F3A9C1C;
    case 0x7F3A9C20u: goto label_7F3A9C20;
    case 0x7F3A9C24u: goto label_7F3A9C24;
    case 0x7F3A9C28u: goto label_7F3A9C28;
    case 0x7F3A9C2Cu: goto label_7F3A9C2C;
    case 0x7F3A9C30u: goto label_7F3A9C30;
    case 0x7F3A9C34u: goto label_7F3A9C34;
    case 0x7F3A9C38u: goto label_7F3A9C38;
    case 0x7F3A9C3Cu: goto label_7F3A9C3C;
    case 0x7F3A9C40u: goto label_7F3A9C40;
    case 0x7F3A9C44u: goto label_7F3A9C44;
    case 0x7F3A9C48u: goto label_7F3A9C48;
    case 0x7F3A9C4Cu: goto label_7F3A9C4C;
    case 0x7F3A9C50u: goto label_7F3A9C50;
    case 0x7F3A9C54u: goto label_7F3A9C54;
    case 0x7F3A9C58u: goto label_7F3A9C58;
    case 0x7F3A9C5Cu: goto label_7F3A9C5C;
    case 0x7F3A9C60u: goto label_7F3A9C60;
    case 0x7F3A9C64u: goto label_7F3A9C64;
    case 0x7F3A9C68u: goto label_7F3A9C68;
    case 0x7F3A9C6Cu: goto label_7F3A9C6C;
    case 0x7F3A9C70u: goto label_7F3A9C70;
    case 0x7F3A9C74u: goto label_7F3A9C74;
    case 0x7F3A9C78u: goto label_7F3A9C78;
    case 0x7F3A9C7Cu: goto label_7F3A9C7C;
    case 0x7F3A9C80u: goto label_7F3A9C80;
    case 0x7F3A9C84u: goto label_7F3A9C84;
    case 0x7F3A9C88u: goto label_7F3A9C88;
    case 0x7F3A9C8Cu: goto label_7F3A9C8C;
    case 0x7F3A9C90u: goto label_7F3A9C90;
    case 0x7F3A9C94u: goto label_7F3A9C94;
    case 0x7F3A9C98u: goto label_7F3A9C98;
    case 0x7F3A9C9Cu: goto label_7F3A9C9C;
    case 0x7F3A9CA0u: goto label_7F3A9CA0;
    case 0x7F3A9CA4u: goto label_7F3A9CA4;
    case 0x7F3A9CA8u: goto label_7F3A9CA8;
    case 0x7F3A9CACu: goto label_7F3A9CAC;
    case 0x7F3A9CB0u: goto label_7F3A9CB0;
    case 0x7F3A9CB4u: goto label_7F3A9CB4;
    case 0x7F3A9CB8u: goto label_7F3A9CB8;
    case 0x7F3A9CBCu: goto label_7F3A9CBC;
    case 0x7F3A9CC0u: goto label_7F3A9CC0;
    case 0x7F3A9CC4u: goto label_7F3A9CC4;
    case 0x7F3A9CC8u: goto label_7F3A9CC8;
    case 0x7F3A9CCCu: goto label_7F3A9CCC;
    case 0x7F3A9CD0u: goto label_7F3A9CD0;
    case 0x7F3A9CD4u: goto label_7F3A9CD4;
    case 0x7F3A9CD8u: goto label_7F3A9CD8;
    case 0x7F3A9CDCu: goto label_7F3A9CDC;
    case 0x7F3A9CE0u: goto label_7F3A9CE0;
    case 0x7F3A9CE4u: goto label_7F3A9CE4;
    case 0x7F3A9CE8u: goto label_7F3A9CE8;
    case 0x7F3A9CECu: goto label_7F3A9CEC;
    case 0x7F3A9CF0u: goto label_7F3A9CF0;
    case 0x7F3A9CF4u: goto label_7F3A9CF4;
    case 0x7F3A9CF8u: goto label_7F3A9CF8;
    case 0x7F3A9CFCu: goto label_7F3A9CFC;
    case 0x7F3A9D00u: goto label_7F3A9D00;
    case 0x7F3A9D04u: goto label_7F3A9D04;
    case 0x7F3A9D08u: goto label_7F3A9D08;
    case 0x7F3A9D0Cu: goto label_7F3A9D0C;
    case 0x7F3A9D10u: goto label_7F3A9D10;
    case 0x7F3A9D14u: goto label_7F3A9D14;
    case 0x7F3A9D18u: goto label_7F3A9D18;
    case 0x7F3A9D1Cu: goto label_7F3A9D1C;
    case 0x7F3A9D20u: goto label_7F3A9D20;
    case 0x7F3A9D24u: goto label_7F3A9D24;
    case 0x7F3A9D28u: goto label_7F3A9D28;
    case 0x7F3A9D2Cu: goto label_7F3A9D2C;
    case 0x7F3A9D30u: goto label_7F3A9D30;
    case 0x7F3A9D34u: goto label_7F3A9D34;
    case 0x7F3A9D38u: goto label_7F3A9D38;
    case 0x7F3A9D3Cu: goto label_7F3A9D3C;
    case 0x7F3A9D40u: goto label_7F3A9D40;
    case 0x7F3A9D44u: goto label_7F3A9D44;
    case 0x7F3A9D48u: goto label_7F3A9D48;
    case 0x7F3A9D4Cu: goto label_7F3A9D4C;
    case 0x7F3A9D50u: goto label_7F3A9D50;
    case 0x7F3A9D54u: goto label_7F3A9D54;
    case 0x7F3A9D58u: goto label_7F3A9D58;
    case 0x7F3A9D5Cu: goto label_7F3A9D5C;
    case 0x7F3A9D60u: goto label_7F3A9D60;
    case 0x7F3A9D64u: goto label_7F3A9D64;
    case 0x7F3A9D68u: goto label_7F3A9D68;
    case 0x7F3A9D6Cu: goto label_7F3A9D6C;
    case 0x7F3A9D70u: goto label_7F3A9D70;
    case 0x7F3A9D74u: goto label_7F3A9D74;
    case 0x7F3A9D78u: goto label_7F3A9D78;
    case 0x7F3A9D7Cu: goto label_7F3A9D7C;
    case 0x7F3A9D80u: goto label_7F3A9D80;
    case 0x7F3A9D84u: goto label_7F3A9D84;
    case 0x7F3A9D88u: goto label_7F3A9D88;
    case 0x7F3A9D8Cu: goto label_7F3A9D8C;
    case 0x7F3A9D90u: goto label_7F3A9D90;
    case 0x7F3A9D94u: goto label_7F3A9D94;
    case 0x7F3A9D98u: goto label_7F3A9D98;
    case 0x7F3A9D9Cu: goto label_7F3A9D9C;
    case 0x7F3A9DA0u: goto label_7F3A9DA0;
    case 0x7F3A9DA4u: goto label_7F3A9DA4;
    case 0x7F3A9DA8u: goto label_7F3A9DA8;
    case 0x7F3A9DACu: goto label_7F3A9DAC;
    case 0x7F3A9DB0u: goto label_7F3A9DB0;
    case 0x7F3A9DB4u: goto label_7F3A9DB4;
    case 0x7F3A9DB8u: goto label_7F3A9DB8;
    case 0x7F3A9DBCu: goto label_7F3A9DBC;
    case 0x7F3A9DC0u: goto label_7F3A9DC0;
    case 0x7F3A9DC4u: goto label_7F3A9DC4;
    case 0x7F3A9DC8u: goto label_7F3A9DC8;
    case 0x7F3A9DCCu: goto label_7F3A9DCC;
    case 0x7F3A9DD0u: goto label_7F3A9DD0;
    case 0x7F3A9DD4u: goto label_7F3A9DD4;
    case 0x7F3A9DD8u: goto label_7F3A9DD8;
    case 0x7F3A9DDCu: goto label_7F3A9DDC;
    case 0x7F3A9DE0u: goto label_7F3A9DE0;
    case 0x7F3A9DE4u: goto label_7F3A9DE4;
    case 0x7F3A9DE8u: goto label_7F3A9DE8;
    case 0x7F3A9DECu: goto label_7F3A9DEC;
    case 0x7F3A9DF0u: goto label_7F3A9DF0;
    case 0x7F3A9DF4u: goto label_7F3A9DF4;
    case 0x7F3A9DF8u: goto label_7F3A9DF8;
    case 0x7F3A9DFCu: goto label_7F3A9DFC;
    case 0x7F3A9E00u: goto label_7F3A9E00;
    case 0x7F3A9E04u: goto label_7F3A9E04;
    case 0x7F3A9E08u: goto label_7F3A9E08;
    case 0x7F3A9E0Cu: goto label_7F3A9E0C;
    case 0x7F3A9E10u: goto label_7F3A9E10;
    case 0x7F3A9E14u: goto label_7F3A9E14;
    case 0x7F3A9E18u: goto label_7F3A9E18;
    case 0x7F3A9E1Cu: goto label_7F3A9E1C;
    case 0x7F3A9E20u: goto label_7F3A9E20;
    case 0x7F3A9E24u: goto label_7F3A9E24;
    case 0x7F3A9E28u: goto label_7F3A9E28;
    case 0x7F3A9E2Cu: goto label_7F3A9E2C;
    case 0x7F3A9E30u: goto label_7F3A9E30;
    case 0x7F3A9E34u: goto label_7F3A9E34;
    case 0x7F3A9E38u: goto label_7F3A9E38;
    case 0x7F3A9E3Cu: goto label_7F3A9E3C;
    case 0x7F3A9E40u: goto label_7F3A9E40;
    case 0x7F3A9E44u: goto label_7F3A9E44;
    case 0x7F3A9E48u: goto label_7F3A9E48;
    case 0x7F3A9E4Cu: goto label_7F3A9E4C;
    case 0x7F3A9E50u: goto label_7F3A9E50;
    case 0x7F3A9E54u: goto label_7F3A9E54;
    case 0x7F3A9E58u: goto label_7F3A9E58;
    case 0x7F3A9E5Cu: goto label_7F3A9E5C;
    case 0x7F3A9E60u: goto label_7F3A9E60;
    case 0x7F3A9E64u: goto label_7F3A9E64;
    case 0x7F3A9E68u: goto label_7F3A9E68;
    case 0x7F3A9E6Cu: goto label_7F3A9E6C;
    case 0x7F3A9E70u: goto label_7F3A9E70;
    case 0x7F3A9E74u: goto label_7F3A9E74;
    case 0x7F3A9E78u: goto label_7F3A9E78;
    case 0x7F3A9E7Cu: goto label_7F3A9E7C;
    case 0x7F3A9E80u: goto label_7F3A9E80;
    case 0x7F3A9E84u: goto label_7F3A9E84;
    case 0x7F3A9E88u: goto label_7F3A9E88;
    case 0x7F3A9E8Cu: goto label_7F3A9E8C;
    case 0x7F3A9E90u: goto label_7F3A9E90;
    case 0x7F3A9E94u: goto label_7F3A9E94;
    case 0x7F3A9E98u: goto label_7F3A9E98;
    case 0x7F3A9E9Cu: goto label_7F3A9E9C;
    case 0x7F3A9EA0u: goto label_7F3A9EA0;
    case 0x7F3A9EA4u: goto label_7F3A9EA4;
    case 0x7F3A9EA8u: goto label_7F3A9EA8;
    case 0x7F3A9EACu: goto label_7F3A9EAC;
    case 0x7F3A9EB0u: goto label_7F3A9EB0;
    case 0x7F3A9EB4u: goto label_7F3A9EB4;
    case 0x7F3A9EB8u: goto label_7F3A9EB8;
    case 0x7F3A9EBCu: goto label_7F3A9EBC;
    case 0x7F3A9EC0u: goto label_7F3A9EC0;
    case 0x7F3A9EC4u: goto label_7F3A9EC4;
    case 0x7F3A9EC8u: goto label_7F3A9EC8;
    case 0x7F3A9ECCu: goto label_7F3A9ECC;
    case 0x7F3A9ED0u: goto label_7F3A9ED0;
    case 0x7F3A9ED4u: goto label_7F3A9ED4;
    case 0x7F3A9ED8u: goto label_7F3A9ED8;
    case 0x7F3A9EDCu: goto label_7F3A9EDC;
    case 0x7F3A9EE0u: goto label_7F3A9EE0;
    case 0x7F3A9EE4u: goto label_7F3A9EE4;
    case 0x7F3A9EE8u: goto label_7F3A9EE8;
    case 0x7F3A9EECu: goto label_7F3A9EEC;
    case 0x7F3A9EF0u: goto label_7F3A9EF0;
    case 0x7F3A9EF4u: goto label_7F3A9EF4;
    case 0x7F3A9EF8u: goto label_7F3A9EF8;
    case 0x7F3A9EFCu: goto label_7F3A9EFC;
    case 0x7F3A9F00u: goto label_7F3A9F00;
    case 0x7F3A9F04u: goto label_7F3A9F04;
    case 0x7F3A9F08u: goto label_7F3A9F08;
    case 0x7F3A9F0Cu: goto label_7F3A9F0C;
    case 0x7F3A9F10u: goto label_7F3A9F10;
    case 0x7F3A9F14u: goto label_7F3A9F14;
    case 0x7F3A9F18u: goto label_7F3A9F18;
    case 0x7F3A9F1Cu: goto label_7F3A9F1C;
    case 0x7F3A9F20u: goto label_7F3A9F20;
    case 0x7F3A9F24u: goto label_7F3A9F24;
    case 0x7F3A9F28u: goto label_7F3A9F28;
    case 0x7F3A9F2Cu: goto label_7F3A9F2C;
    case 0x7F3A9F30u: goto label_7F3A9F30;
    case 0x7F3A9F34u: goto label_7F3A9F34;
    case 0x7F3A9F38u: goto label_7F3A9F38;
    case 0x7F3A9F3Cu: goto label_7F3A9F3C;
    case 0x7F3A9F40u: goto label_7F3A9F40;
    case 0x7F3A9F44u: goto label_7F3A9F44;
    case 0x7F3A9F48u: goto label_7F3A9F48;
    case 0x7F3A9F4Cu: goto label_7F3A9F4C;
    case 0x7F3A9F50u: goto label_7F3A9F50;
    case 0x7F3A9F54u: goto label_7F3A9F54;
    case 0x7F3A9F58u: goto label_7F3A9F58;
    case 0x7F3A9F5Cu: goto label_7F3A9F5C;
    case 0x7F3A9F60u: goto label_7F3A9F60;
    case 0x7F3A9F64u: goto label_7F3A9F64;
    case 0x7F3A9F68u: goto label_7F3A9F68;
    case 0x7F3A9F6Cu: goto label_7F3A9F6C;
    case 0x7F3A9F70u: goto label_7F3A9F70;
    case 0x7F3A9F74u: goto label_7F3A9F74;
    case 0x7F3A9F78u: goto label_7F3A9F78;
    case 0x7F3A9F7Cu: goto label_7F3A9F7C;
    case 0x7F3A9F80u: goto label_7F3A9F80;
    case 0x7F3A9F84u: goto label_7F3A9F84;
    case 0x7F3A9F88u: goto label_7F3A9F88;
    case 0x7F3A9F8Cu: goto label_7F3A9F8C;
    case 0x7F3A9F90u: goto label_7F3A9F90;
    case 0x7F3A9F94u: goto label_7F3A9F94;
    case 0x7F3A9F98u: goto label_7F3A9F98;
    case 0x7F3A9F9Cu: goto label_7F3A9F9C;
    case 0x7F3A9FA0u: goto label_7F3A9FA0;
    case 0x7F3A9FA4u: goto label_7F3A9FA4;
    case 0x7F3A9FA8u: goto label_7F3A9FA8;
    case 0x7F3A9FACu: goto label_7F3A9FAC;
    case 0x7F3A9FB0u: goto label_7F3A9FB0;
    case 0x7F3A9FB4u: goto label_7F3A9FB4;
    case 0x7F3A9FB8u: goto label_7F3A9FB8;
    case 0x7F3A9FBCu: goto label_7F3A9FBC;
    case 0x7F3A9FC0u: goto label_7F3A9FC0;
    case 0x7F3A9FC4u: goto label_7F3A9FC4;
    case 0x7F3A9FC8u: goto label_7F3A9FC8;
    case 0x7F3A9FCCu: goto label_7F3A9FCC;
    case 0x7F3A9FD0u: goto label_7F3A9FD0;
    case 0x7F3A9FD4u: goto label_7F3A9FD4;
    case 0x7F3A9FD8u: goto label_7F3A9FD8;
    case 0x7F3A9FDCu: goto label_7F3A9FDC;
    case 0x7F3A9FE0u: goto label_7F3A9FE0;
    case 0x7F3A9FE4u: goto label_7F3A9FE4;
    case 0x7F3A9FE8u: goto label_7F3A9FE8;
    case 0x7F3A9FECu: goto label_7F3A9FEC;
    case 0x7F3A9FF0u: goto label_7F3A9FF0;
    case 0x7F3A9FF4u: goto label_7F3A9FF4;
    case 0x7F3A9FF8u: goto label_7F3A9FF8;
    case 0x7F3A9FFCu: goto label_7F3A9FFC;
    case 0x7F3AA000u: goto label_7F3AA000;
    case 0x7F3AA004u: goto label_7F3AA004;
    case 0x7F3AA008u: goto label_7F3AA008;
    case 0x7F3AA00Cu: goto label_7F3AA00C;
    case 0x7F3AA010u: goto label_7F3AA010;
    case 0x7F3AA014u: goto label_7F3AA014;
    case 0x7F3AA018u: goto label_7F3AA018;
    case 0x7F3AA01Cu: goto label_7F3AA01C;
    case 0x7F3AA020u: goto label_7F3AA020;
    case 0x7F3AA024u: goto label_7F3AA024;
    case 0x7F3AA028u: goto label_7F3AA028;
    case 0x7F3AA02Cu: goto label_7F3AA02C;
    case 0x7F3AA030u: goto label_7F3AA030;
    case 0x7F3AA034u: goto label_7F3AA034;
    case 0x7F3AA038u: goto label_7F3AA038;
    case 0x7F3AA03Cu: goto label_7F3AA03C;
    case 0x7F3AA040u: goto label_7F3AA040;
    case 0x7F3AA044u: goto label_7F3AA044;
    case 0x7F3AA048u: goto label_7F3AA048;
    case 0x7F3AA04Cu: goto label_7F3AA04C;
    case 0x7F3AA050u: goto label_7F3AA050;
    case 0x7F3AA054u: goto label_7F3AA054;
    case 0x7F3AA058u: goto label_7F3AA058;
    case 0x7F3AA05Cu: goto label_7F3AA05C;
    case 0x7F3AA060u: goto label_7F3AA060;
    case 0x7F3AA064u: goto label_7F3AA064;
    case 0x7F3AA068u: goto label_7F3AA068;
    case 0x7F3AA06Cu: goto label_7F3AA06C;
    case 0x7F3AA070u: goto label_7F3AA070;
    case 0x7F3AA074u: goto label_7F3AA074;
    case 0x7F3AA078u: goto label_7F3AA078;
    case 0x7F3AA07Cu: goto label_7F3AA07C;
    case 0x7F3AA080u: goto label_7F3AA080;
    case 0x7F3AA084u: goto label_7F3AA084;
    case 0x7F3AA088u: goto label_7F3AA088;
    case 0x7F3AA08Cu: goto label_7F3AA08C;
    case 0x7F3AA090u: goto label_7F3AA090;
    case 0x7F3AA094u: goto label_7F3AA094;
    case 0x7F3AA098u: goto label_7F3AA098;
    case 0x7F3AA09Cu: goto label_7F3AA09C;
    case 0x7F3AA0A0u: goto label_7F3AA0A0;
    case 0x7F3AA0A4u: goto label_7F3AA0A4;
    case 0x7F3AA0A8u: goto label_7F3AA0A8;
    case 0x7F3AA0ACu: goto label_7F3AA0AC;
    case 0x7F3AA0B0u: goto label_7F3AA0B0;
    case 0x7F3AA0B4u: goto label_7F3AA0B4;
    case 0x7F3AA0B8u: goto label_7F3AA0B8;
    case 0x7F3AA0BCu: goto label_7F3AA0BC;
    case 0x7F3AA0C0u: goto label_7F3AA0C0;
    case 0x7F3AA0C4u: goto label_7F3AA0C4;
    case 0x7F3AA0C8u: goto label_7F3AA0C8;
    case 0x7F3AA0CCu: goto label_7F3AA0CC;
    case 0x7F3AA0D0u: goto label_7F3AA0D0;
    case 0x7F3AA0D4u: goto label_7F3AA0D4;
    case 0x7F3AA0D8u: goto label_7F3AA0D8;
    case 0x7F3AA0DCu: goto label_7F3AA0DC;
    case 0x7F3AA0E0u: goto label_7F3AA0E0;
    case 0x7F3AA0E4u: goto label_7F3AA0E4;
    case 0x7F3AA0E8u: goto label_7F3AA0E8;
    case 0x7F3AA0ECu: goto label_7F3AA0EC;
    case 0x7F3AA0F0u: goto label_7F3AA0F0;
    case 0x7F3AA0F4u: goto label_7F3AA0F4;
    case 0x7F3AA0F8u: goto label_7F3AA0F8;
    case 0x7F3AA0FCu: goto label_7F3AA0FC;
    case 0x7F3AA100u: goto label_7F3AA100;
    case 0x7F3AA104u: goto label_7F3AA104;
    case 0x7F3AA108u: goto label_7F3AA108;
    case 0x7F3AA10Cu: goto label_7F3AA10C;
    case 0x7F3AA110u: goto label_7F3AA110;
    case 0x7F3AA114u: goto label_7F3AA114;
    case 0x7F3AA118u: goto label_7F3AA118;
    case 0x7F3AA11Cu: goto label_7F3AA11C;
    case 0x7F3AA120u: goto label_7F3AA120;
    case 0x7F3AA124u: goto label_7F3AA124;
    case 0x7F3AA128u: goto label_7F3AA128;
    case 0x7F3AA12Cu: goto label_7F3AA12C;
    case 0x7F3AA130u: goto label_7F3AA130;
    case 0x7F3AA134u: goto label_7F3AA134;
    case 0x7F3AA138u: goto label_7F3AA138;
    case 0x7F3AA13Cu: goto label_7F3AA13C;
    case 0x7F3AA140u: goto label_7F3AA140;
    case 0x7F3AA144u: goto label_7F3AA144;
    case 0x7F3AA148u: goto label_7F3AA148;
    case 0x7F3AA14Cu: goto label_7F3AA14C;
    case 0x7F3AA150u: goto label_7F3AA150;
    case 0x7F3AA154u: goto label_7F3AA154;
    case 0x7F3AA158u: goto label_7F3AA158;
    case 0x7F3AA15Cu: goto label_7F3AA15C;
    case 0x7F3AA160u: goto label_7F3AA160;
    case 0x7F3AA164u: goto label_7F3AA164;
    case 0x7F3AA168u: goto label_7F3AA168;
    case 0x7F3AA16Cu: goto label_7F3AA16C;
    case 0x7F3AA170u: goto label_7F3AA170;
    case 0x7F3AA174u: goto label_7F3AA174;
    case 0x7F3AA178u: goto label_7F3AA178;
    case 0x7F3AA17Cu: goto label_7F3AA17C;
    case 0x7F3AA180u: goto label_7F3AA180;
    case 0x7F3AA184u: goto label_7F3AA184;
    case 0x7F3AA188u: goto label_7F3AA188;
    case 0x7F3AA18Cu: goto label_7F3AA18C;
    case 0x7F3AA190u: goto label_7F3AA190;
    case 0x7F3AA194u: goto label_7F3AA194;
    case 0x7F3AA198u: goto label_7F3AA198;
    case 0x7F3AA19Cu: goto label_7F3AA19C;
    case 0x7F3AA1A0u: goto label_7F3AA1A0;
    case 0x7F3AA1A4u: goto label_7F3AA1A4;
    case 0x7F3AA1A8u: goto label_7F3AA1A8;
    case 0x7F3AA1ACu: goto label_7F3AA1AC;
    case 0x7F3AA1B0u: goto label_7F3AA1B0;
    case 0x7F3AA1B4u: goto label_7F3AA1B4;
    case 0x7F3AA1B8u: goto label_7F3AA1B8;
    case 0x7F3AA1BCu: goto label_7F3AA1BC;
    case 0x7F3AA1C0u: goto label_7F3AA1C0;
    case 0x7F3AA1C4u: goto label_7F3AA1C4;
    case 0x7F3AA1C8u: goto label_7F3AA1C8;
    case 0x7F3AA1CCu: goto label_7F3AA1CC;
    case 0x7F3AA1D0u: goto label_7F3AA1D0;
    case 0x7F3AA1D4u: goto label_7F3AA1D4;
    case 0x7F3AA1D8u: goto label_7F3AA1D8;
    case 0x7F3AA1DCu: goto label_7F3AA1DC;
    case 0x7F3AA1E0u: goto label_7F3AA1E0;
    case 0x7F3AA1E4u: goto label_7F3AA1E4;
    case 0x7F3AA1E8u: goto label_7F3AA1E8;
    case 0x7F3AA1ECu: goto label_7F3AA1EC;
    case 0x7F3AA1F0u: goto label_7F3AA1F0;
    case 0x7F3AA1F4u: goto label_7F3AA1F4;
    case 0x7F3AA1F8u: goto label_7F3AA1F8;
    case 0x7F3AA1FCu: goto label_7F3AA1FC;
    case 0x7F3AA200u: goto label_7F3AA200;
    case 0x7F3AA204u: goto label_7F3AA204;
    case 0x7F3AA208u: goto label_7F3AA208;
    case 0x7F3AA20Cu: goto label_7F3AA20C;
    case 0x7F3AA210u: goto label_7F3AA210;
    case 0x7F3AA214u: goto label_7F3AA214;
    case 0x7F3AA218u: goto label_7F3AA218;
    case 0x7F3AA21Cu: goto label_7F3AA21C;
    case 0x7F3AA220u: goto label_7F3AA220;
    case 0x7F3AA224u: goto label_7F3AA224;
    case 0x7F3AA228u: goto label_7F3AA228;
    case 0x7F3AA22Cu: goto label_7F3AA22C;
    case 0x7F3AA230u: goto label_7F3AA230;
    case 0x7F3AA234u: goto label_7F3AA234;
    case 0x7F3AA238u: goto label_7F3AA238;
    case 0x7F3AA23Cu: goto label_7F3AA23C;
    case 0x7F3AA240u: goto label_7F3AA240;
    case 0x7F3AA244u: goto label_7F3AA244;
    case 0x7F3AA248u: goto label_7F3AA248;
    case 0x7F3AA24Cu: goto label_7F3AA24C;
    case 0x7F3AA250u: goto label_7F3AA250;
    case 0x7F3AA254u: goto label_7F3AA254;
    case 0x7F3AA258u: goto label_7F3AA258;
    case 0x7F3AA25Cu: goto label_7F3AA25C;
    case 0x7F3AA260u: goto label_7F3AA260;
    case 0x7F3AA264u: goto label_7F3AA264;
    case 0x7F3AA268u: goto label_7F3AA268;
    case 0x7F3AA26Cu: goto label_7F3AA26C;
    case 0x7F3AA270u: goto label_7F3AA270;
    case 0x7F3AA274u: goto label_7F3AA274;
    case 0x7F3AA278u: goto label_7F3AA278;
    case 0x7F3AA27Cu: goto label_7F3AA27C;
    case 0x7F3AA280u: goto label_7F3AA280;
    case 0x7F3AA284u: goto label_7F3AA284;
    case 0x7F3AA288u: goto label_7F3AA288;
    case 0x7F3AA28Cu: goto label_7F3AA28C;
    case 0x7F3AA290u: goto label_7F3AA290;
    case 0x7F3AA294u: goto label_7F3AA294;
    case 0x7F3AA298u: goto label_7F3AA298;
    case 0x7F3AA29Cu: goto label_7F3AA29C;
    case 0x7F3AA2A0u: goto label_7F3AA2A0;
    case 0x7F3AA2A4u: goto label_7F3AA2A4;
    case 0x7F3AA2A8u: goto label_7F3AA2A8;
    case 0x7F3AA2ACu: goto label_7F3AA2AC;
    case 0x7F3AA2B0u: goto label_7F3AA2B0;
    case 0x7F3AA2B4u: goto label_7F3AA2B4;
    case 0x7F3AA2B8u: goto label_7F3AA2B8;
    case 0x7F3AA2BCu: goto label_7F3AA2BC;
    case 0x7F3AA2C0u: goto label_7F3AA2C0;
    case 0x7F3AA2C4u: goto label_7F3AA2C4;
    case 0x7F3AA2C8u: goto label_7F3AA2C8;
    case 0x7F3AA2CCu: goto label_7F3AA2CC;
    case 0x7F3AA2D0u: goto label_7F3AA2D0;
    case 0x7F3AA2D4u: goto label_7F3AA2D4;
    case 0x7F3AA2D8u: goto label_7F3AA2D8;
    case 0x7F3AA2DCu: goto label_7F3AA2DC;
    case 0x7F3AA2E0u: goto label_7F3AA2E0;
    case 0x7F3AA2E4u: goto label_7F3AA2E4;
    case 0x7F3AA2E8u: goto label_7F3AA2E8;
    case 0x7F3AA2ECu: goto label_7F3AA2EC;
    case 0x7F3AA2F0u: goto label_7F3AA2F0;
    case 0x7F3AA2F4u: goto label_7F3AA2F4;
    case 0x7F3AA2F8u: goto label_7F3AA2F8;
    case 0x7F3AA2FCu: goto label_7F3AA2FC;
    case 0x7F3AA300u: goto label_7F3AA300;
    case 0x7F3AA304u: goto label_7F3AA304;
    case 0x7F3AA308u: goto label_7F3AA308;
    case 0x7F3AA30Cu: goto label_7F3AA30C;
    case 0x7F3AA310u: goto label_7F3AA310;
    case 0x7F3AA314u: goto label_7F3AA314;
    case 0x7F3AA318u: goto label_7F3AA318;
    case 0x7F3AA31Cu: goto label_7F3AA31C;
    case 0x7F3AA320u: goto label_7F3AA320;
    case 0x7F3AA324u: goto label_7F3AA324;
    case 0x7F3AA328u: goto label_7F3AA328;
    case 0x7F3AA32Cu: goto label_7F3AA32C;
    case 0x7F3AA330u: goto label_7F3AA330;
    case 0x7F3AA334u: goto label_7F3AA334;
    case 0x7F3AA338u: goto label_7F3AA338;
    case 0x7F3AA33Cu: goto label_7F3AA33C;
    case 0x7F3AA340u: goto label_7F3AA340;
    case 0x7F3AA344u: goto label_7F3AA344;
    case 0x7F3AA348u: goto label_7F3AA348;
    case 0x7F3AA34Cu: goto label_7F3AA34C;
    case 0x7F3AA350u: goto label_7F3AA350;
    case 0x7F3AA354u: goto label_7F3AA354;
    case 0x7F3AA358u: goto label_7F3AA358;
    case 0x7F3AA35Cu: goto label_7F3AA35C;
    case 0x7F3AA360u: goto label_7F3AA360;
    case 0x7F3AA364u: goto label_7F3AA364;
    case 0x7F3AA368u: goto label_7F3AA368;
    case 0x7F3AA36Cu: goto label_7F3AA36C;
    case 0x7F3AA370u: goto label_7F3AA370;
    case 0x7F3AA374u: goto label_7F3AA374;
    case 0x7F3AA378u: goto label_7F3AA378;
    case 0x7F3AA37Cu: goto label_7F3AA37C;
    case 0x7F3AA380u: goto label_7F3AA380;
    case 0x7F3AA384u: goto label_7F3AA384;
    case 0x7F3AA388u: goto label_7F3AA388;
    case 0x7F3AA38Cu: goto label_7F3AA38C;
    case 0x7F3AA390u: goto label_7F3AA390;
    case 0x7F3AA394u: goto label_7F3AA394;
    case 0x7F3AA398u: goto label_7F3AA398;
    case 0x7F3AA39Cu: goto label_7F3AA39C;
    case 0x7F3AA3A0u: goto label_7F3AA3A0;
    case 0x7F3AA3A4u: goto label_7F3AA3A4;
    case 0x7F3AA3A8u: goto label_7F3AA3A8;
    case 0x7F3AA3ACu: goto label_7F3AA3AC;
    case 0x7F3AA3B0u: goto label_7F3AA3B0;
    case 0x7F3AA3B4u: goto label_7F3AA3B4;
    case 0x7F3AA3B8u: goto label_7F3AA3B8;
    case 0x7F3AA3BCu: goto label_7F3AA3BC;
    case 0x7F3AA3C0u: goto label_7F3AA3C0;
    case 0x7F3AA3C4u: goto label_7F3AA3C4;
    case 0x7F3AA3C8u: goto label_7F3AA3C8;
    case 0x7F3AA3CCu: goto label_7F3AA3CC;
    case 0x7F3AA3D0u: goto label_7F3AA3D0;
    case 0x7F3AA3D4u: goto label_7F3AA3D4;
    case 0x7F3AA3D8u: goto label_7F3AA3D8;
    case 0x7F3AA3DCu: goto label_7F3AA3DC;
    case 0x7F3AA3E0u: goto label_7F3AA3E0;
    case 0x7F3AA3E4u: goto label_7F3AA3E4;
    case 0x7F3AA3E8u: goto label_7F3AA3E8;
    case 0x7F3AA3ECu: goto label_7F3AA3EC;
    case 0x7F3AA3F0u: goto label_7F3AA3F0;
    case 0x7F3AA3F4u: goto label_7F3AA3F4;
    case 0x7F3AA3F8u: goto label_7F3AA3F8;
    case 0x7F3AA3FCu: goto label_7F3AA3FC;
    case 0x7F3AA400u: goto label_7F3AA400;
    case 0x7F3AA404u: goto label_7F3AA404;
    case 0x7F3AA408u: goto label_7F3AA408;
    case 0x7F3AA40Cu: goto label_7F3AA40C;
    case 0x7F3AA410u: goto label_7F3AA410;
    case 0x7F3AA414u: goto label_7F3AA414;
    case 0x7F3AA418u: goto label_7F3AA418;
    case 0x7F3AA41Cu: goto label_7F3AA41C;
    case 0x7F3AA420u: goto label_7F3AA420;
    case 0x7F3AA424u: goto label_7F3AA424;
    case 0x7F3AA428u: goto label_7F3AA428;
    case 0x7F3AA42Cu: goto label_7F3AA42C;
    case 0x7F3AA430u: goto label_7F3AA430;
    case 0x7F3AA434u: goto label_7F3AA434;
    case 0x7F3AA438u: goto label_7F3AA438;
    case 0x7F3AA43Cu: goto label_7F3AA43C;
    case 0x7F3AA440u: goto label_7F3AA440;
    case 0x7F3AA444u: goto label_7F3AA444;
    case 0x7F3AA448u: goto label_7F3AA448;
    case 0x7F3AA44Cu: goto label_7F3AA44C;
    case 0x7F3AA450u: goto label_7F3AA450;
    case 0x7F3AA454u: goto label_7F3AA454;
    case 0x7F3AA458u: goto label_7F3AA458;
    case 0x7F3AA45Cu: goto label_7F3AA45C;
    case 0x7F3AA460u: goto label_7F3AA460;
    case 0x7F3AA464u: goto label_7F3AA464;
    case 0x7F3AA468u: goto label_7F3AA468;
    case 0x7F3AA46Cu: goto label_7F3AA46C;
    case 0x7F3AA470u: goto label_7F3AA470;
    case 0x7F3AA474u: goto label_7F3AA474;
    case 0x7F3AA478u: goto label_7F3AA478;
    case 0x7F3AA47Cu: goto label_7F3AA47C;
    case 0x7F3AA480u: goto label_7F3AA480;
    case 0x7F3AA484u: goto label_7F3AA484;
    case 0x7F3AA488u: goto label_7F3AA488;
    case 0x7F3AA48Cu: goto label_7F3AA48C;
    case 0x7F3AA490u: goto label_7F3AA490;
    case 0x7F3AA494u: goto label_7F3AA494;
    case 0x7F3AA498u: goto label_7F3AA498;
    case 0x7F3AA49Cu: goto label_7F3AA49C;
    case 0x7F3AA4A0u: goto label_7F3AA4A0;
    case 0x7F3AA4A4u: goto label_7F3AA4A4;
    case 0x7F3AA4A8u: goto label_7F3AA4A8;
    case 0x7F3AA4ACu: goto label_7F3AA4AC;
    case 0x7F3AA4B0u: goto label_7F3AA4B0;
    case 0x7F3AA4B4u: goto label_7F3AA4B4;
    case 0x7F3AA4B8u: goto label_7F3AA4B8;
    case 0x7F3AA4BCu: goto label_7F3AA4BC;
    case 0x7F3AA4C0u: goto label_7F3AA4C0;
    case 0x7F3AA4C4u: goto label_7F3AA4C4;
    case 0x7F3AA4C8u: goto label_7F3AA4C8;
    case 0x7F3AA4CCu: goto label_7F3AA4CC;
    case 0x7F3AA4D0u: goto label_7F3AA4D0;
    case 0x7F3AA4D4u: goto label_7F3AA4D4;
    case 0x7F3AA4D8u: goto label_7F3AA4D8;
    case 0x7F3AA4DCu: goto label_7F3AA4DC;
    case 0x7F3AA4E0u: goto label_7F3AA4E0;
    case 0x7F3AA4E4u: goto label_7F3AA4E4;
    case 0x7F3AA4E8u: goto label_7F3AA4E8;
    case 0x7F3AA4ECu: goto label_7F3AA4EC;
    case 0x7F3AA4F0u: goto label_7F3AA4F0;
    case 0x7F3AA4F4u: goto label_7F3AA4F4;
    case 0x7F3AA4F8u: goto label_7F3AA4F8;
    case 0x7F3AA4FCu: goto label_7F3AA4FC;
    case 0x7F3AA500u: goto label_7F3AA500;
    case 0x7F3AA504u: goto label_7F3AA504;
    case 0x7F3AA508u: goto label_7F3AA508;
    case 0x7F3AA50Cu: goto label_7F3AA50C;
    case 0x7F3AA510u: goto label_7F3AA510;
    case 0x7F3AA514u: goto label_7F3AA514;
    case 0x7F3AA518u: goto label_7F3AA518;
    case 0x7F3AA51Cu: goto label_7F3AA51C;
    case 0x7F3AA520u: goto label_7F3AA520;
    case 0x7F3AA524u: goto label_7F3AA524;
    case 0x7F3AA528u: goto label_7F3AA528;
    case 0x7F3AA52Cu: goto label_7F3AA52C;
    case 0x7F3AA530u: goto label_7F3AA530;
    case 0x7F3AA534u: goto label_7F3AA534;
    case 0x7F3AA538u: goto label_7F3AA538;
    case 0x7F3AA53Cu: goto label_7F3AA53C;
    case 0x7F3AA540u: goto label_7F3AA540;
    case 0x7F3AA544u: goto label_7F3AA544;
    case 0x7F3AA548u: goto label_7F3AA548;
    case 0x7F3AA54Cu: goto label_7F3AA54C;
    case 0x7F3AA550u: goto label_7F3AA550;
    case 0x7F3AA554u: goto label_7F3AA554;
    case 0x7F3AA558u: goto label_7F3AA558;
    case 0x7F3AA55Cu: goto label_7F3AA55C;
    case 0x7F3AA560u: goto label_7F3AA560;
    case 0x7F3AA564u: goto label_7F3AA564;
    case 0x7F3AA568u: goto label_7F3AA568;
    case 0x7F3AA56Cu: goto label_7F3AA56C;
    case 0x7F3AA570u: goto label_7F3AA570;
    case 0x7F3AA574u: goto label_7F3AA574;
    case 0x7F3AA578u: goto label_7F3AA578;
    case 0x7F3AA57Cu: goto label_7F3AA57C;
    case 0x7F3AA580u: goto label_7F3AA580;
    case 0x7F3AA584u: goto label_7F3AA584;
    case 0x7F3AA588u: goto label_7F3AA588;
    case 0x7F3AA58Cu: goto label_7F3AA58C;
    case 0x7F3AA590u: goto label_7F3AA590;
    case 0x7F3AA594u: goto label_7F3AA594;
    case 0x7F3AA598u: goto label_7F3AA598;
    case 0x7F3AA59Cu: goto label_7F3AA59C;
    case 0x7F3AA5A0u: goto label_7F3AA5A0;
    case 0x7F3AA5A4u: goto label_7F3AA5A4;
    case 0x7F3AA5A8u: goto label_7F3AA5A8;
    case 0x7F3AA5ACu: goto label_7F3AA5AC;
    case 0x7F3AA5B0u: goto label_7F3AA5B0;
    case 0x7F3AA5B4u: goto label_7F3AA5B4;
    case 0x7F3AA5B8u: goto label_7F3AA5B8;
    case 0x7F3AA5BCu: goto label_7F3AA5BC;
    case 0x7F3AA5C0u: goto label_7F3AA5C0;
    case 0x7F3AA5C4u: goto label_7F3AA5C4;
    case 0x7F3AA5C8u: goto label_7F3AA5C8;
    case 0x7F3AA5CCu: goto label_7F3AA5CC;
    case 0x7F3AA5D0u: goto label_7F3AA5D0;
    case 0x7F3AA5D4u: goto label_7F3AA5D4;
    case 0x7F3AA5D8u: goto label_7F3AA5D8;
    case 0x7F3AA5DCu: goto label_7F3AA5DC;
    case 0x7F3AA5E0u: goto label_7F3AA5E0;
    case 0x7F3AA5E4u: goto label_7F3AA5E4;
    case 0x7F3AA5E8u: goto label_7F3AA5E8;
    case 0x7F3AA5ECu: goto label_7F3AA5EC;
    case 0x7F3AA5F0u: goto label_7F3AA5F0;
    case 0x7F3AA5F4u: goto label_7F3AA5F4;
    case 0x7F3AA5F8u: goto label_7F3AA5F8;
    case 0x7F3AA5FCu: goto label_7F3AA5FC;
    case 0x7F3AA600u: goto label_7F3AA600;
    case 0x7F3AA604u: goto label_7F3AA604;
    case 0x7F3AA608u: goto label_7F3AA608;
    case 0x7F3AA60Cu: goto label_7F3AA60C;
    case 0x7F3AA610u: goto label_7F3AA610;
    case 0x7F3AA614u: goto label_7F3AA614;
    case 0x7F3AA618u: goto label_7F3AA618;
    case 0x7F3AA61Cu: goto label_7F3AA61C;
    case 0x7F3AA620u: goto label_7F3AA620;
    case 0x7F3AA624u: goto label_7F3AA624;
    case 0x7F3AA628u: goto label_7F3AA628;
    case 0x7F3AA62Cu: goto label_7F3AA62C;
    case 0x7F3AA630u: goto label_7F3AA630;
    case 0x7F3AA634u: goto label_7F3AA634;
    case 0x7F3AA638u: goto label_7F3AA638;
    case 0x7F3AA63Cu: goto label_7F3AA63C;
    case 0x7F3AA640u: goto label_7F3AA640;
    case 0x7F3AA644u: goto label_7F3AA644;
    case 0x7F3AA648u: goto label_7F3AA648;
    case 0x7F3AA64Cu: goto label_7F3AA64C;
    case 0x7F3AA650u: goto label_7F3AA650;
    case 0x7F3AA654u: goto label_7F3AA654;
    case 0x7F3AA658u: goto label_7F3AA658;
    case 0x7F3AA65Cu: goto label_7F3AA65C;
    case 0x7F3AA660u: goto label_7F3AA660;
    case 0x7F3AA664u: goto label_7F3AA664;
    case 0x7F3AA668u: goto label_7F3AA668;
    case 0x7F3AA66Cu: goto label_7F3AA66C;
    case 0x7F3AA670u: goto label_7F3AA670;
    case 0x7F3AA674u: goto label_7F3AA674;
    case 0x7F3AA678u: goto label_7F3AA678;
    case 0x7F3AA67Cu: goto label_7F3AA67C;
    case 0x7F3AA680u: goto label_7F3AA680;
    case 0x7F3AA684u: goto label_7F3AA684;
    case 0x7F3AA688u: goto label_7F3AA688;
    case 0x7F3AA68Cu: goto label_7F3AA68C;
    case 0x7F3AA690u: goto label_7F3AA690;
    case 0x7F3AA694u: goto label_7F3AA694;
    case 0x7F3AA698u: goto label_7F3AA698;
    case 0x7F3AA69Cu: goto label_7F3AA69C;
    case 0x7F3AA6A0u: goto label_7F3AA6A0;
    case 0x7F3AA6A4u: goto label_7F3AA6A4;
    case 0x7F3AA6A8u: goto label_7F3AA6A8;
    case 0x7F3AA6ACu: goto label_7F3AA6AC;
    case 0x7F3AA6B0u: goto label_7F3AA6B0;
    case 0x7F3AA6B4u: goto label_7F3AA6B4;
    case 0x7F3AA6B8u: goto label_7F3AA6B8;
    case 0x7F3AA6BCu: goto label_7F3AA6BC;
    case 0x7F3AA6C0u: goto label_7F3AA6C0;
    case 0x7F3AA6C4u: goto label_7F3AA6C4;
    case 0x7F3AA6C8u: goto label_7F3AA6C8;
    case 0x7F3AA6CCu: goto label_7F3AA6CC;
    case 0x7F3AA6D0u: goto label_7F3AA6D0;
    case 0x7F3AA6D4u: goto label_7F3AA6D4;
    case 0x7F3AA6D8u: goto label_7F3AA6D8;
    case 0x7F3AA6DCu: goto label_7F3AA6DC;
    case 0x7F3AA6E0u: goto label_7F3AA6E0;
    case 0x7F3AA6E4u: goto label_7F3AA6E4;
    case 0x7F3AA6E8u: goto label_7F3AA6E8;
    case 0x7F3AA6ECu: goto label_7F3AA6EC;
    case 0x7F3AA6F0u: goto label_7F3AA6F0;
    case 0x7F3AA6F4u: goto label_7F3AA6F4;
    case 0x7F3AA6F8u: goto label_7F3AA6F8;
    case 0x7F3AA6FCu: goto label_7F3AA6FC;
    case 0x7F3AA700u: goto label_7F3AA700;
    case 0x7F3AA704u: goto label_7F3AA704;
    case 0x7F3AA708u: goto label_7F3AA708;
    case 0x7F3AA70Cu: goto label_7F3AA70C;
    case 0x7F3AA710u: goto label_7F3AA710;
    case 0x7F3AA714u: goto label_7F3AA714;
    case 0x7F3AA718u: goto label_7F3AA718;
    case 0x7F3AA71Cu: goto label_7F3AA71C;
    case 0x7F3AA720u: goto label_7F3AA720;
    case 0x7F3AA724u: goto label_7F3AA724;
    case 0x7F3AA728u: goto label_7F3AA728;
    case 0x7F3AA72Cu: goto label_7F3AA72C;
    case 0x7F3AA730u: goto label_7F3AA730;
    case 0x7F3AA734u: goto label_7F3AA734;
    case 0x7F3AA738u: goto label_7F3AA738;
    case 0x7F3AA73Cu: goto label_7F3AA73C;
    case 0x7F3AA740u: goto label_7F3AA740;
    case 0x7F3AA744u: goto label_7F3AA744;
    case 0x7F3AA748u: goto label_7F3AA748;
    case 0x7F3AA74Cu: goto label_7F3AA74C;
    case 0x7F3AA750u: goto label_7F3AA750;
    case 0x7F3AA754u: goto label_7F3AA754;
    case 0x7F3AA758u: goto label_7F3AA758;
    case 0x7F3AA75Cu: goto label_7F3AA75C;
    case 0x7F3AA760u: goto label_7F3AA760;
    case 0x7F3AA764u: goto label_7F3AA764;
    case 0x7F3AA768u: goto label_7F3AA768;
    case 0x7F3AA76Cu: goto label_7F3AA76C;
    case 0x7F3AA770u: goto label_7F3AA770;
    case 0x7F3AA774u: goto label_7F3AA774;
    case 0x7F3AA778u: goto label_7F3AA778;
    case 0x7F3AA77Cu: goto label_7F3AA77C;
    case 0x7F3AA780u: goto label_7F3AA780;
    case 0x7F3AA784u: goto label_7F3AA784;
    case 0x7F3AA788u: goto label_7F3AA788;
    case 0x7F3AA78Cu: goto label_7F3AA78C;
    case 0x7F3AA790u: goto label_7F3AA790;
    case 0x7F3AA794u: goto label_7F3AA794;
    case 0x7F3AA798u: goto label_7F3AA798;
    case 0x7F3AA79Cu: goto label_7F3AA79C;
    case 0x7F3AA7A0u: goto label_7F3AA7A0;
    case 0x7F3AA7A4u: goto label_7F3AA7A4;
    case 0x7F3AA7A8u: goto label_7F3AA7A8;
    case 0x7F3AA7ACu: goto label_7F3AA7AC;
    case 0x7F3AA7B0u: goto label_7F3AA7B0;
    case 0x7F3AA7B4u: goto label_7F3AA7B4;
    case 0x7F3AA7B8u: goto label_7F3AA7B8;
    case 0x7F3AA7BCu: goto label_7F3AA7BC;
    case 0x7F3AA7C0u: goto label_7F3AA7C0;
    case 0x7F3AA7C4u: goto label_7F3AA7C4;
    case 0x7F3AA7C8u: goto label_7F3AA7C8;
    case 0x7F3AA7CCu: goto label_7F3AA7CC;
    case 0x7F3AA7D0u: goto label_7F3AA7D0;
    case 0x7F3AA7D4u: goto label_7F3AA7D4;
    case 0x7F3AA7D8u: goto label_7F3AA7D8;
    case 0x7F3AA7DCu: goto label_7F3AA7DC;
    case 0x7F3AA7E0u: goto label_7F3AA7E0;
    case 0x7F3AA7E4u: goto label_7F3AA7E4;
    case 0x7F3AA7E8u: goto label_7F3AA7E8;
    case 0x7F3AA7ECu: goto label_7F3AA7EC;
    case 0x7F3AA7F0u: goto label_7F3AA7F0;
    case 0x7F3AA7F4u: goto label_7F3AA7F4;
    case 0x7F3AA7F8u: goto label_7F3AA7F8;
    case 0x7F3AA7FCu: goto label_7F3AA7FC;
    case 0x7F3AA800u: goto label_7F3AA800;
    case 0x7F3AA804u: goto label_7F3AA804;
    case 0x7F3AA808u: goto label_7F3AA808;
    case 0x7F3AA80Cu: goto label_7F3AA80C;
    case 0x7F3AA810u: goto label_7F3AA810;
    case 0x7F3AA814u: goto label_7F3AA814;
    case 0x7F3AA818u: goto label_7F3AA818;
    case 0x7F3AA81Cu: goto label_7F3AA81C;
    case 0x7F3AA820u: goto label_7F3AA820;
    case 0x7F3AA824u: goto label_7F3AA824;
    case 0x7F3AA828u: goto label_7F3AA828;
    case 0x7F3AA82Cu: goto label_7F3AA82C;
    case 0x7F3AA830u: goto label_7F3AA830;
    case 0x7F3AA834u: goto label_7F3AA834;
    case 0x7F3AA838u: goto label_7F3AA838;
    case 0x7F3AA83Cu: goto label_7F3AA83C;
    case 0x7F3AA840u: goto label_7F3AA840;
    case 0x7F3AA844u: goto label_7F3AA844;
    case 0x7F3AA848u: goto label_7F3AA848;
    case 0x7F3AA84Cu: goto label_7F3AA84C;
    case 0x7F3AA850u: goto label_7F3AA850;
    case 0x7F3AA854u: goto label_7F3AA854;
    case 0x7F3AA858u: goto label_7F3AA858;
    case 0x7F3AA85Cu: goto label_7F3AA85C;
    case 0x7F3AA860u: goto label_7F3AA860;
    case 0x7F3AA864u: goto label_7F3AA864;
    case 0x7F3AA868u: goto label_7F3AA868;
    case 0x7F3AA86Cu: goto label_7F3AA86C;
    case 0x7F3AA870u: goto label_7F3AA870;
    case 0x7F3AA874u: goto label_7F3AA874;
    case 0x7F3AA878u: goto label_7F3AA878;
    case 0x7F3AA87Cu: goto label_7F3AA87C;
    case 0x7F3AA880u: goto label_7F3AA880;
    case 0x7F3AA884u: goto label_7F3AA884;
    case 0x7F3AA888u: goto label_7F3AA888;
    case 0x7F3AA88Cu: goto label_7F3AA88C;
    case 0x7F3AA890u: goto label_7F3AA890;
    case 0x7F3AA894u: goto label_7F3AA894;
    case 0x7F3AA898u: goto label_7F3AA898;
    case 0x7F3AA89Cu: goto label_7F3AA89C;
    case 0x7F3AA8A0u: goto label_7F3AA8A0;
    case 0x7F3AA8A4u: goto label_7F3AA8A4;
    case 0x7F3AA8A8u: goto label_7F3AA8A8;
    case 0x7F3AA8ACu: goto label_7F3AA8AC;
    case 0x7F3AA8B0u: goto label_7F3AA8B0;
    case 0x7F3AA8B4u: goto label_7F3AA8B4;
    case 0x7F3AA8B8u: goto label_7F3AA8B8;
    case 0x7F3AA8BCu: goto label_7F3AA8BC;
    case 0x7F3AA8C0u: goto label_7F3AA8C0;
    case 0x7F3AA8C4u: goto label_7F3AA8C4;
    case 0x7F3AA8C8u: goto label_7F3AA8C8;
    case 0x7F3AA8CCu: goto label_7F3AA8CC;
    case 0x7F3AA8D0u: goto label_7F3AA8D0;
    case 0x7F3AA8D4u: goto label_7F3AA8D4;
    case 0x7F3AA8D8u: goto label_7F3AA8D8;
    case 0x7F3AA8DCu: goto label_7F3AA8DC;
    case 0x7F3AA8E0u: goto label_7F3AA8E0;
    case 0x7F3AA8E4u: goto label_7F3AA8E4;
    case 0x7F3AA8E8u: goto label_7F3AA8E8;
    case 0x7F3AA8ECu: goto label_7F3AA8EC;
    case 0x7F3AA8F0u: goto label_7F3AA8F0;
    case 0x7F3AA8F4u: goto label_7F3AA8F4;
    case 0x7F3AA8F8u: goto label_7F3AA8F8;
    case 0x7F3AA8FCu: goto label_7F3AA8FC;
    case 0x7F3AA900u: goto label_7F3AA900;
    case 0x7F3AA904u: goto label_7F3AA904;
    case 0x7F3AA908u: goto label_7F3AA908;
    case 0x7F3AA90Cu: goto label_7F3AA90C;
    case 0x7F3AA910u: goto label_7F3AA910;
    case 0x7F3AA914u: goto label_7F3AA914;
    case 0x7F3AA918u: goto label_7F3AA918;
    case 0x7F3AA91Cu: goto label_7F3AA91C;
    case 0x7F3AA920u: goto label_7F3AA920;
    case 0x7F3AA924u: goto label_7F3AA924;
    case 0x7F3AA928u: goto label_7F3AA928;
    case 0x7F3AA92Cu: goto label_7F3AA92C;
    case 0x7F3AA930u: goto label_7F3AA930;
    case 0x7F3AA934u: goto label_7F3AA934;
    case 0x7F3AA938u: goto label_7F3AA938;
    case 0x7F3AA93Cu: goto label_7F3AA93C;
    case 0x7F3AA940u: goto label_7F3AA940;
    case 0x7F3AA944u: goto label_7F3AA944;
    case 0x7F3AA948u: goto label_7F3AA948;
    case 0x7F3AA94Cu: goto label_7F3AA94C;
    case 0x7F3AA950u: goto label_7F3AA950;
    case 0x7F3AA954u: goto label_7F3AA954;
    case 0x7F3AA958u: goto label_7F3AA958;
    case 0x7F3AA95Cu: goto label_7F3AA95C;
    case 0x7F3AA960u: goto label_7F3AA960;
    case 0x7F3AA964u: goto label_7F3AA964;
    case 0x7F3AA968u: goto label_7F3AA968;
    case 0x7F3AA96Cu: goto label_7F3AA96C;
    case 0x7F3AA970u: goto label_7F3AA970;
    case 0x7F3AA974u: goto label_7F3AA974;
    case 0x7F3AA978u: goto label_7F3AA978;
    case 0x7F3AA97Cu: goto label_7F3AA97C;
    case 0x7F3AA980u: goto label_7F3AA980;
    case 0x7F3AA984u: goto label_7F3AA984;
    case 0x7F3AA988u: goto label_7F3AA988;
    case 0x7F3AA98Cu: goto label_7F3AA98C;
    case 0x7F3AA990u: goto label_7F3AA990;
    case 0x7F3AA994u: goto label_7F3AA994;
    case 0x7F3AA998u: goto label_7F3AA998;
    case 0x7F3AA99Cu: goto label_7F3AA99C;
    case 0x7F3AA9A0u: goto label_7F3AA9A0;
    case 0x7F3AA9A4u: goto label_7F3AA9A4;
    case 0x7F3AA9A8u: goto label_7F3AA9A8;
    case 0x7F3AA9ACu: goto label_7F3AA9AC;
    case 0x7F3AA9B0u: goto label_7F3AA9B0;
    case 0x7F3AA9B4u: goto label_7F3AA9B4;
    case 0x7F3AA9B8u: goto label_7F3AA9B8;
    case 0x7F3AA9BCu: goto label_7F3AA9BC;
    case 0x7F3AA9C0u: goto label_7F3AA9C0;
    case 0x7F3AA9C4u: goto label_7F3AA9C4;
    case 0x7F3AA9C8u: goto label_7F3AA9C8;
    case 0x7F3AA9CCu: goto label_7F3AA9CC;
    case 0x7F3AA9D0u: goto label_7F3AA9D0;
    case 0x7F3AA9D4u: goto label_7F3AA9D4;
    case 0x7F3AA9D8u: goto label_7F3AA9D8;
    case 0x7F3AA9DCu: goto label_7F3AA9DC;
    case 0x7F3AA9E0u: goto label_7F3AA9E0;
    case 0x7F3AA9E4u: goto label_7F3AA9E4;
    case 0x7F3AA9E8u: goto label_7F3AA9E8;
    case 0x7F3AA9ECu: goto label_7F3AA9EC;
    case 0x7F3AA9F0u: goto label_7F3AA9F0;
    case 0x7F3AA9F4u: goto label_7F3AA9F4;
    case 0x7F3AA9F8u: goto label_7F3AA9F8;
    case 0x7F3AA9FCu: goto label_7F3AA9FC;
    case 0x7F3AAA00u: goto label_7F3AAA00;
    case 0x7F3AAA04u: goto label_7F3AAA04;
    case 0x7F3AAA08u: goto label_7F3AAA08;
    case 0x7F3AAA0Cu: goto label_7F3AAA0C;
    case 0x7F3AAA10u: goto label_7F3AAA10;
    case 0x7F3AAA14u: goto label_7F3AAA14;
    case 0x7F3AAA18u: goto label_7F3AAA18;
    case 0x7F3AAA1Cu: goto label_7F3AAA1C;
    case 0x7F3AAA20u: goto label_7F3AAA20;
    case 0x7F3AAA24u: goto label_7F3AAA24;
    case 0x7F3AAA28u: goto label_7F3AAA28;
    case 0x7F3AAA2Cu: goto label_7F3AAA2C;
    case 0x7F3AAA30u: goto label_7F3AAA30;
    case 0x7F3AAA34u: goto label_7F3AAA34;
    case 0x7F3AAA38u: goto label_7F3AAA38;
    case 0x7F3AAA3Cu: goto label_7F3AAA3C;
    case 0x7F3AAA40u: goto label_7F3AAA40;
    case 0x7F3AAA44u: goto label_7F3AAA44;
    case 0x7F3AAA48u: goto label_7F3AAA48;
    case 0x7F3AAA4Cu: goto label_7F3AAA4C;
    case 0x7F3AAA50u: goto label_7F3AAA50;
    case 0x7F3AAA54u: goto label_7F3AAA54;
    case 0x7F3AAA58u: goto label_7F3AAA58;
    case 0x7F3AAA5Cu: goto label_7F3AAA5C;
    case 0x7F3AAA60u: goto label_7F3AAA60;
    case 0x7F3AAA64u: goto label_7F3AAA64;
    case 0x7F3AAA68u: goto label_7F3AAA68;
    case 0x7F3AAA6Cu: goto label_7F3AAA6C;
    case 0x7F3AAA70u: goto label_7F3AAA70;
    case 0x7F3AAA74u: goto label_7F3AAA74;
    case 0x7F3AAA78u: goto label_7F3AAA78;
    case 0x7F3AAA7Cu: goto label_7F3AAA7C;
    case 0x7F3AAA80u: goto label_7F3AAA80;
    case 0x7F3AAA84u: goto label_7F3AAA84;
    case 0x7F3AAA88u: goto label_7F3AAA88;
    case 0x7F3AAA8Cu: goto label_7F3AAA8C;
    case 0x7F3AAA90u: goto label_7F3AAA90;
    case 0x7F3AAA94u: goto label_7F3AAA94;
    case 0x7F3AAA98u: goto label_7F3AAA98;
    case 0x7F3AAA9Cu: goto label_7F3AAA9C;
    case 0x7F3AAAA0u: goto label_7F3AAAA0;
    case 0x7F3AAAA4u: goto label_7F3AAAA4;
    case 0x7F3AAAA8u: goto label_7F3AAAA8;
    case 0x7F3AAAACu: goto label_7F3AAAAC;
    case 0x7F3AAAB0u: goto label_7F3AAAB0;
    case 0x7F3AAAB4u: goto label_7F3AAAB4;
    case 0x7F3AAAB8u: goto label_7F3AAAB8;
    case 0x7F3AAABCu: goto label_7F3AAABC;
    case 0x7F3AAAC0u: goto label_7F3AAAC0;
    case 0x7F3AAAC4u: goto label_7F3AAAC4;
    case 0x7F3AAAC8u: goto label_7F3AAAC8;
    case 0x7F3AAACCu: goto label_7F3AAACC;
    case 0x7F3AAAD0u: goto label_7F3AAAD0;
    case 0x7F3AAAD4u: goto label_7F3AAAD4;
    case 0x7F3AAAD8u: goto label_7F3AAAD8;
    case 0x7F3AAADCu: goto label_7F3AAADC;
    case 0x7F3AAAE0u: goto label_7F3AAAE0;
    case 0x7F3AAAE4u: goto label_7F3AAAE4;
    case 0x7F3AAAE8u: goto label_7F3AAAE8;
    case 0x7F3AAAECu: goto label_7F3AAAEC;
    case 0x7F3AAAF0u: goto label_7F3AAAF0;
    case 0x7F3AAAF4u: goto label_7F3AAAF4;
    case 0x7F3AAAF8u: goto label_7F3AAAF8;
    case 0x7F3AAAFCu: goto label_7F3AAAFC;
    case 0x7F3AAB00u: goto label_7F3AAB00;
    case 0x7F3AAB04u: goto label_7F3AAB04;
    case 0x7F3AAB08u: goto label_7F3AAB08;
    case 0x7F3AAB0Cu: goto label_7F3AAB0C;
    case 0x7F3AAB10u: goto label_7F3AAB10;
    case 0x7F3AAB14u: goto label_7F3AAB14;
    case 0x7F3AAB18u: goto label_7F3AAB18;
    case 0x7F3AAB1Cu: goto label_7F3AAB1C;
    case 0x7F3AAB20u: goto label_7F3AAB20;
    case 0x7F3AAB24u: goto label_7F3AAB24;
    case 0x7F3AAB28u: goto label_7F3AAB28;
    case 0x7F3AAB2Cu: goto label_7F3AAB2C;
    case 0x7F3AAB30u: goto label_7F3AAB30;
    case 0x7F3AAB34u: goto label_7F3AAB34;
    case 0x7F3AAB38u: goto label_7F3AAB38;
    case 0x7F3AAB3Cu: goto label_7F3AAB3C;
    case 0x7F3AAB40u: goto label_7F3AAB40;
    case 0x7F3AAB44u: goto label_7F3AAB44;
    case 0x7F3AAB48u: goto label_7F3AAB48;
    case 0x7F3AAB4Cu: goto label_7F3AAB4C;
    case 0x7F3AAB50u: goto label_7F3AAB50;
    case 0x7F3AAB54u: goto label_7F3AAB54;
    case 0x7F3AAB58u: goto label_7F3AAB58;
    case 0x7F3AAB5Cu: goto label_7F3AAB5C;
    case 0x7F3AAB60u: goto label_7F3AAB60;
    case 0x7F3AAB64u: goto label_7F3AAB64;
    case 0x7F3AAB68u: goto label_7F3AAB68;
    case 0x7F3AAB6Cu: goto label_7F3AAB6C;
    case 0x7F3AAB70u: goto label_7F3AAB70;
    case 0x7F3AAB74u: goto label_7F3AAB74;
    case 0x7F3AAB78u: goto label_7F3AAB78;
    case 0x7F3AAB7Cu: goto label_7F3AAB7C;
    case 0x7F3AAB80u: goto label_7F3AAB80;
    case 0x7F3AAB84u: goto label_7F3AAB84;
    case 0x7F3AAB88u: goto label_7F3AAB88;
    case 0x7F3AAB8Cu: goto label_7F3AAB8C;
    case 0x7F3AAB90u: goto label_7F3AAB90;
    case 0x7F3AAB94u: goto label_7F3AAB94;
    case 0x7F3AAB98u: goto label_7F3AAB98;
    case 0x7F3AAB9Cu: goto label_7F3AAB9C;
    case 0x7F3AABA0u: goto label_7F3AABA0;
    case 0x7F3AABA4u: goto label_7F3AABA4;
    case 0x7F3AABA8u: goto label_7F3AABA8;
    case 0x7F3AABACu: goto label_7F3AABAC;
    case 0x7F3AABB0u: goto label_7F3AABB0;
    case 0x7F3AABB4u: goto label_7F3AABB4;
    case 0x7F3AABB8u: goto label_7F3AABB8;
    case 0x7F3AABBCu: goto label_7F3AABBC;
    case 0x7F3AABC0u: goto label_7F3AABC0;
    case 0x7F3AABC4u: goto label_7F3AABC4;
    case 0x7F3AABC8u: goto label_7F3AABC8;
    case 0x7F3AABCCu: goto label_7F3AABCC;
    case 0x7F3AABD0u: goto label_7F3AABD0;
    case 0x7F3AABD4u: goto label_7F3AABD4;
    case 0x7F3AABD8u: goto label_7F3AABD8;
    case 0x7F3AABDCu: goto label_7F3AABDC;
    case 0x7F3AABE0u: goto label_7F3AABE0;
    case 0x7F3AABE4u: goto label_7F3AABE4;
    case 0x7F3AABE8u: goto label_7F3AABE8;
    case 0x7F3AABECu: goto label_7F3AABEC;
    case 0x7F3AABF0u: goto label_7F3AABF0;
    case 0x7F3AABF4u: goto label_7F3AABF4;
    case 0x7F3AABF8u: goto label_7F3AABF8;
    case 0x7F3AABFCu: goto label_7F3AABFC;
    case 0x7F3AAC00u: goto label_7F3AAC00;
    case 0x7F3AAC04u: goto label_7F3AAC04;
    case 0x7F3AAC08u: goto label_7F3AAC08;
    case 0x7F3AAC0Cu: goto label_7F3AAC0C;
    case 0x7F3AAC10u: goto label_7F3AAC10;
    case 0x7F3AAC14u: goto label_7F3AAC14;
    case 0x7F3AAC18u: goto label_7F3AAC18;
    case 0x7F3AAC1Cu: goto label_7F3AAC1C;
    case 0x7F3AAC20u: goto label_7F3AAC20;
    case 0x7F3AAC24u: goto label_7F3AAC24;
    case 0x7F3AAC28u: goto label_7F3AAC28;
    case 0x7F3AAC2Cu: goto label_7F3AAC2C;
    case 0x7F3AAC30u: goto label_7F3AAC30;
    case 0x7F3AAC34u: goto label_7F3AAC34;
    case 0x7F3AAC38u: goto label_7F3AAC38;
    case 0x7F3AAC3Cu: goto label_7F3AAC3C;
    case 0x7F3AAC40u: goto label_7F3AAC40;
    case 0x7F3AAC44u: goto label_7F3AAC44;
    case 0x7F3AAC48u: goto label_7F3AAC48;
    case 0x7F3AAC4Cu: goto label_7F3AAC4C;
    case 0x7F3AAC50u: goto label_7F3AAC50;
    case 0x7F3AAC54u: goto label_7F3AAC54;
    case 0x7F3AAC58u: goto label_7F3AAC58;
    case 0x7F3AAC5Cu: goto label_7F3AAC5C;
    case 0x7F3AAC60u: goto label_7F3AAC60;
    case 0x7F3AAC64u: goto label_7F3AAC64;
    case 0x7F3AAC68u: goto label_7F3AAC68;
    case 0x7F3AAC6Cu: goto label_7F3AAC6C;
    case 0x7F3AAC70u: goto label_7F3AAC70;
    case 0x7F3AAC74u: goto label_7F3AAC74;
    case 0x7F3AAC78u: goto label_7F3AAC78;
    case 0x7F3AAC7Cu: goto label_7F3AAC7C;
    case 0x7F3AAC80u: goto label_7F3AAC80;
    case 0x7F3AAC84u: goto label_7F3AAC84;
    case 0x7F3AAC88u: goto label_7F3AAC88;
    case 0x7F3AAC8Cu: goto label_7F3AAC8C;
    case 0x7F3AAC90u: goto label_7F3AAC90;
    case 0x7F3AAC94u: goto label_7F3AAC94;
    case 0x7F3AAC98u: goto label_7F3AAC98;
    case 0x7F3AAC9Cu: goto label_7F3AAC9C;
    case 0x7F3AACA0u: goto label_7F3AACA0;
    case 0x7F3AACA4u: goto label_7F3AACA4;
    case 0x7F3AACA8u: goto label_7F3AACA8;
    case 0x7F3AACACu: goto label_7F3AACAC;
    case 0x7F3AACB0u: goto label_7F3AACB0;
    case 0x7F3AACB4u: goto label_7F3AACB4;
    case 0x7F3AACB8u: goto label_7F3AACB8;
    case 0x7F3AACBCu: goto label_7F3AACBC;
    case 0x7F3AACC0u: goto label_7F3AACC0;
    case 0x7F3AACC4u: goto label_7F3AACC4;
    case 0x7F3AACC8u: goto label_7F3AACC8;
    case 0x7F3AACCCu: goto label_7F3AACCC;
    case 0x7F3AACD0u: goto label_7F3AACD0;
    case 0x7F3AACD4u: goto label_7F3AACD4;
    case 0x7F3AACD8u: goto label_7F3AACD8;
    case 0x7F3AACDCu: goto label_7F3AACDC;
    case 0x7F3AACE0u: goto label_7F3AACE0;
    case 0x7F3AACE4u: goto label_7F3AACE4;
    case 0x7F3AACE8u: goto label_7F3AACE8;
    case 0x7F3AACECu: goto label_7F3AACEC;
    case 0x7F3AACF0u: goto label_7F3AACF0;
    case 0x7F3AACF4u: goto label_7F3AACF4;
    case 0x7F3AACF8u: goto label_7F3AACF8;
    case 0x7F3AACFCu: goto label_7F3AACFC;
    case 0x7F3AAD00u: goto label_7F3AAD00;
    case 0x7F3AAD04u: goto label_7F3AAD04;
    case 0x7F3AAD08u: goto label_7F3AAD08;
    case 0x7F3AAD0Cu: goto label_7F3AAD0C;
    case 0x7F3AAD10u: goto label_7F3AAD10;
    case 0x7F3AAD14u: goto label_7F3AAD14;
    case 0x7F3AAD18u: goto label_7F3AAD18;
    case 0x7F3AAD1Cu: goto label_7F3AAD1C;
    case 0x7F3AAD20u: goto label_7F3AAD20;
    case 0x7F3AAD24u: goto label_7F3AAD24;
    case 0x7F3AAD28u: goto label_7F3AAD28;
    case 0x7F3AAD2Cu: goto label_7F3AAD2C;
    case 0x7F3AAD30u: goto label_7F3AAD30;
    case 0x7F3AAD34u: goto label_7F3AAD34;
    case 0x7F3AAD38u: goto label_7F3AAD38;
    case 0x7F3AAD3Cu: goto label_7F3AAD3C;
    case 0x7F3AAD40u: goto label_7F3AAD40;
    case 0x7F3AAD44u: goto label_7F3AAD44;
    case 0x7F3AAD48u: goto label_7F3AAD48;
    case 0x7F3AAD4Cu: goto label_7F3AAD4C;
    case 0x7F3AAD50u: goto label_7F3AAD50;
    case 0x7F3AAD54u: goto label_7F3AAD54;
    case 0x7F3AAD58u: goto label_7F3AAD58;
    case 0x7F3AAD5Cu: goto label_7F3AAD5C;
    case 0x7F3AAD60u: goto label_7F3AAD60;
    case 0x7F3AAD64u: goto label_7F3AAD64;
    case 0x7F3AAD68u: goto label_7F3AAD68;
    case 0x7F3AAD6Cu: goto label_7F3AAD6C;
    case 0x7F3AAD70u: goto label_7F3AAD70;
    case 0x7F3AAD74u: goto label_7F3AAD74;
    case 0x7F3AAD78u: goto label_7F3AAD78;
    case 0x7F3AAD7Cu: goto label_7F3AAD7C;
    case 0x7F3AAD80u: goto label_7F3AAD80;
    case 0x7F3AAD84u: goto label_7F3AAD84;
    case 0x7F3AAD88u: goto label_7F3AAD88;
    case 0x7F3AAD8Cu: goto label_7F3AAD8C;
    case 0x7F3AAD90u: goto label_7F3AAD90;
    case 0x7F3AAD94u: goto label_7F3AAD94;
    case 0x7F3AAD98u: goto label_7F3AAD98;
    case 0x7F3AAD9Cu: goto label_7F3AAD9C;
    case 0x7F3AADA0u: goto label_7F3AADA0;
    case 0x7F3AADA4u: goto label_7F3AADA4;
    case 0x7F3AADA8u: goto label_7F3AADA8;
    case 0x7F3AADACu: goto label_7F3AADAC;
    case 0x7F3AADB0u: goto label_7F3AADB0;
    case 0x7F3AADB4u: goto label_7F3AADB4;
    case 0x7F3AADB8u: goto label_7F3AADB8;
    case 0x7F3AADBCu: goto label_7F3AADBC;
    case 0x7F3AADC0u: goto label_7F3AADC0;
    case 0x7F3AADC4u: goto label_7F3AADC4;
    case 0x7F3AADC8u: goto label_7F3AADC8;
    case 0x7F3AADCCu: goto label_7F3AADCC;
    case 0x7F3AADD0u: goto label_7F3AADD0;
    case 0x7F3AADD4u: goto label_7F3AADD4;
    case 0x7F3AADD8u: goto label_7F3AADD8;
    case 0x7F3AADDCu: goto label_7F3AADDC;
    case 0x7F3AADE0u: goto label_7F3AADE0;
    case 0x7F3AADE4u: goto label_7F3AADE4;
    case 0x7F3AADE8u: goto label_7F3AADE8;
    case 0x7F3AADECu: goto label_7F3AADEC;
    case 0x7F3AADF0u: goto label_7F3AADF0;
    case 0x7F3AADF4u: goto label_7F3AADF4;
    case 0x7F3AADF8u: goto label_7F3AADF8;
    case 0x7F3AADFCu: goto label_7F3AADFC;
    case 0x7F3AAE00u: goto label_7F3AAE00;
    case 0x7F3AAE04u: goto label_7F3AAE04;
    case 0x7F3AAE08u: goto label_7F3AAE08;
    case 0x7F3AAE0Cu: goto label_7F3AAE0C;
    case 0x7F3AAE10u: goto label_7F3AAE10;
    case 0x7F3AAE14u: goto label_7F3AAE14;
    case 0x7F3AAE18u: goto label_7F3AAE18;
    case 0x7F3AAE1Cu: goto label_7F3AAE1C;
    case 0x7F3AAE20u: goto label_7F3AAE20;
    case 0x7F3AAE24u: goto label_7F3AAE24;
    case 0x7F3AAE28u: goto label_7F3AAE28;
    case 0x7F3AAE2Cu: goto label_7F3AAE2C;
    case 0x7F3AAE30u: goto label_7F3AAE30;
    case 0x7F3AAE34u: goto label_7F3AAE34;
    case 0x7F3AAE38u: goto label_7F3AAE38;
    case 0x7F3AAE3Cu: goto label_7F3AAE3C;
    case 0x7F3AAE40u: goto label_7F3AAE40;
    case 0x7F3AAE44u: goto label_7F3AAE44;
    case 0x7F3AAE48u: goto label_7F3AAE48;
    case 0x7F3AAE4Cu: goto label_7F3AAE4C;
    case 0x7F3AAE50u: goto label_7F3AAE50;
    case 0x7F3AAE54u: goto label_7F3AAE54;
    case 0x7F3AAE58u: goto label_7F3AAE58;
    case 0x7F3AAE5Cu: goto label_7F3AAE5C;
    case 0x7F3AAE60u: goto label_7F3AAE60;
    case 0x7F3AAE64u: goto label_7F3AAE64;
    case 0x7F3AAE68u: goto label_7F3AAE68;
    case 0x7F3AAE6Cu: goto label_7F3AAE6C;
    case 0x7F3AAE70u: goto label_7F3AAE70;
    case 0x7F3AAE74u: goto label_7F3AAE74;
    case 0x7F3AAE78u: goto label_7F3AAE78;
    case 0x7F3AAE7Cu: goto label_7F3AAE7C;
    case 0x7F3AAE80u: goto label_7F3AAE80;
    case 0x7F3AAE84u: goto label_7F3AAE84;
    case 0x7F3AAE88u: goto label_7F3AAE88;
    case 0x7F3AAE8Cu: goto label_7F3AAE8C;
    case 0x7F3AAE90u: goto label_7F3AAE90;
    case 0x7F3AAE94u: goto label_7F3AAE94;
    case 0x7F3AAE98u: goto label_7F3AAE98;
    case 0x7F3AAE9Cu: goto label_7F3AAE9C;
    case 0x7F3AAEA0u: goto label_7F3AAEA0;
    case 0x7F3AAEA4u: goto label_7F3AAEA4;
    case 0x7F3AAEA8u: goto label_7F3AAEA8;
    case 0x7F3AAEACu: goto label_7F3AAEAC;
    case 0x7F3AAEB0u: goto label_7F3AAEB0;
    case 0x7F3AAEB4u: goto label_7F3AAEB4;
    case 0x7F3AAEB8u: goto label_7F3AAEB8;
    case 0x7F3AAEBCu: goto label_7F3AAEBC;
    case 0x7F3AAEC0u: goto label_7F3AAEC0;
    case 0x7F3AAEC4u: goto label_7F3AAEC4;
    case 0x7F3AAEC8u: goto label_7F3AAEC8;
    case 0x7F3AAECCu: goto label_7F3AAECC;
    case 0x7F3AAED0u: goto label_7F3AAED0;
    case 0x7F3AAED4u: goto label_7F3AAED4;
    case 0x7F3AAED8u: goto label_7F3AAED8;
    case 0x7F3AAEDCu: goto label_7F3AAEDC;
    case 0x7F3AAEE0u: goto label_7F3AAEE0;
    case 0x7F3AAEE4u: goto label_7F3AAEE4;
    case 0x7F3AAEE8u: goto label_7F3AAEE8;
    case 0x7F3AAEECu: goto label_7F3AAEEC;
    case 0x7F3AAEF0u: goto label_7F3AAEF0;
    case 0x7F3AAEF4u: goto label_7F3AAEF4;
    case 0x7F3AAEF8u: goto label_7F3AAEF8;
    case 0x7F3AAEFCu: goto label_7F3AAEFC;
    case 0x7F3AAF00u: goto label_7F3AAF00;
    case 0x7F3AAF04u: goto label_7F3AAF04;
    case 0x7F3AAF08u: goto label_7F3AAF08;
    case 0x7F3AAF0Cu: goto label_7F3AAF0C;
    case 0x7F3AAF10u: goto label_7F3AAF10;
    case 0x7F3AAF14u: goto label_7F3AAF14;
    case 0x7F3AAF18u: goto label_7F3AAF18;
    case 0x7F3AAF1Cu: goto label_7F3AAF1C;
    case 0x7F3AAF20u: goto label_7F3AAF20;
    case 0x7F3AAF24u: goto label_7F3AAF24;
    case 0x7F3AAF28u: goto label_7F3AAF28;
    case 0x7F3AAF2Cu: goto label_7F3AAF2C;
    case 0x7F3AAF30u: goto label_7F3AAF30;
    case 0x7F3AAF34u: goto label_7F3AAF34;
    case 0x7F3AAF38u: goto label_7F3AAF38;
    case 0x7F3AAF3Cu: goto label_7F3AAF3C;
    case 0x7F3AAF40u: goto label_7F3AAF40;
    case 0x7F3AAF44u: goto label_7F3AAF44;
    case 0x7F3AAF48u: goto label_7F3AAF48;
    case 0x7F3AAF4Cu: goto label_7F3AAF4C;
    case 0x7F3AAF50u: goto label_7F3AAF50;
    case 0x7F3AAF54u: goto label_7F3AAF54;
    case 0x7F3AAF58u: goto label_7F3AAF58;
    case 0x7F3AAF5Cu: goto label_7F3AAF5C;
    case 0x7F3AAF60u: goto label_7F3AAF60;
    case 0x7F3AAF64u: goto label_7F3AAF64;
    case 0x7F3AAF68u: goto label_7F3AAF68;
    case 0x7F3AAF6Cu: goto label_7F3AAF6C;
    case 0x7F3AAF70u: goto label_7F3AAF70;
    case 0x7F3AAF74u: goto label_7F3AAF74;
    case 0x7F3AAF78u: goto label_7F3AAF78;
    case 0x7F3AAF7Cu: goto label_7F3AAF7C;
    case 0x7F3AAF80u: goto label_7F3AAF80;
    case 0x7F3AAF84u: goto label_7F3AAF84;
    case 0x7F3AAF88u: goto label_7F3AAF88;
    case 0x7F3AAF8Cu: goto label_7F3AAF8C;
    case 0x7F3AAF90u: goto label_7F3AAF90;
    case 0x7F3AAF94u: goto label_7F3AAF94;
    case 0x7F3AAF98u: goto label_7F3AAF98;
    case 0x7F3AAF9Cu: goto label_7F3AAF9C;
    case 0x7F3AAFA0u: goto label_7F3AAFA0;
    case 0x7F3AAFA4u: goto label_7F3AAFA4;
    case 0x7F3AAFA8u: goto label_7F3AAFA8;
    case 0x7F3AAFACu: goto label_7F3AAFAC;
    case 0x7F3AAFB0u: goto label_7F3AAFB0;
    case 0x7F3AAFB4u: goto label_7F3AAFB4;
    case 0x7F3AAFB8u: goto label_7F3AAFB8;
    case 0x7F3AAFBCu: goto label_7F3AAFBC;
    case 0x7F3AAFC0u: goto label_7F3AAFC0;
    case 0x7F3AAFC4u: goto label_7F3AAFC4;
    case 0x7F3AAFC8u: goto label_7F3AAFC8;
    case 0x7F3AAFCCu: goto label_7F3AAFCC;
    case 0x7F3AAFD0u: goto label_7F3AAFD0;
    case 0x7F3AAFD4u: goto label_7F3AAFD4;
    case 0x7F3AAFD8u: goto label_7F3AAFD8;
    case 0x7F3AAFDCu: goto label_7F3AAFDC;
    case 0x7F3AAFE0u: goto label_7F3AAFE0;
    case 0x7F3AAFE4u: goto label_7F3AAFE4;
    case 0x7F3AAFE8u: goto label_7F3AAFE8;
    case 0x7F3AAFECu: goto label_7F3AAFEC;
    case 0x7F3AAFF0u: goto label_7F3AAFF0;
    case 0x7F3AAFF4u: goto label_7F3AAFF4;
    case 0x7F3AAFF8u: goto label_7F3AAFF8;
    case 0x7F3AAFFCu: goto label_7F3AAFFC;
    case 0x7F3AB000u: goto label_7F3AB000;
    case 0x7F3AB004u: goto label_7F3AB004;
    case 0x7F3AB008u: goto label_7F3AB008;
    case 0x7F3AB00Cu: goto label_7F3AB00C;
    case 0x7F3AB010u: goto label_7F3AB010;
    case 0x7F3AB014u: goto label_7F3AB014;
    case 0x7F3AB018u: goto label_7F3AB018;
    case 0x7F3AB01Cu: goto label_7F3AB01C;
    case 0x7F3AB020u: goto label_7F3AB020;
    case 0x7F3AB024u: goto label_7F3AB024;
    case 0x7F3AB028u: goto label_7F3AB028;
    case 0x7F3AB02Cu: goto label_7F3AB02C;
    case 0x7F3AB030u: goto label_7F3AB030;
    case 0x7F3AB034u: goto label_7F3AB034;
    case 0x7F3AB038u: goto label_7F3AB038;
    case 0x7F3AB03Cu: goto label_7F3AB03C;
    case 0x7F3AB040u: goto label_7F3AB040;
    case 0x7F3AB044u: goto label_7F3AB044;
    case 0x7F3AB048u: goto label_7F3AB048;
    case 0x7F3AB04Cu: goto label_7F3AB04C;
    case 0x7F3AB050u: goto label_7F3AB050;
    case 0x7F3AB054u: goto label_7F3AB054;
    case 0x7F3AB058u: goto label_7F3AB058;
    case 0x7F3AB05Cu: goto label_7F3AB05C;
    case 0x7F3AB060u: goto label_7F3AB060;
    case 0x7F3AB064u: goto label_7F3AB064;
    case 0x7F3AB068u: goto label_7F3AB068;
    case 0x7F3AB06Cu: goto label_7F3AB06C;
    case 0x7F3AB070u: goto label_7F3AB070;
    case 0x7F3AB074u: goto label_7F3AB074;
    case 0x7F3AB078u: goto label_7F3AB078;
    case 0x7F3AB07Cu: goto label_7F3AB07C;
    case 0x7F3AB080u: goto label_7F3AB080;
    case 0x7F3AB084u: goto label_7F3AB084;
    case 0x7F3AB088u: goto label_7F3AB088;
    case 0x7F3AB08Cu: goto label_7F3AB08C;
    case 0x7F3AB090u: goto label_7F3AB090;
    case 0x7F3AB094u: goto label_7F3AB094;
    case 0x7F3AB098u: goto label_7F3AB098;
    case 0x7F3AB09Cu: goto label_7F3AB09C;
    case 0x7F3AB0A0u: goto label_7F3AB0A0;
    case 0x7F3AB0A4u: goto label_7F3AB0A4;
    case 0x7F3AB0A8u: goto label_7F3AB0A8;
    case 0x7F3AB0ACu: goto label_7F3AB0AC;
    case 0x7F3AB0B0u: goto label_7F3AB0B0;
    case 0x7F3AB0B4u: goto label_7F3AB0B4;
    case 0x7F3AB0B8u: goto label_7F3AB0B8;
    case 0x7F3AB0BCu: goto label_7F3AB0BC;
    case 0x7F3AB0C0u: goto label_7F3AB0C0;
    case 0x7F3AB0C4u: goto label_7F3AB0C4;
    case 0x7F3AB0C8u: goto label_7F3AB0C8;
    case 0x7F3AB0CCu: goto label_7F3AB0CC;
    case 0x7F3AB0D0u: goto label_7F3AB0D0;
    case 0x7F3AB0D4u: goto label_7F3AB0D4;
    case 0x7F3AB0D8u: goto label_7F3AB0D8;
    case 0x7F3AB0DCu: goto label_7F3AB0DC;
    case 0x7F3AB0E0u: goto label_7F3AB0E0;
    case 0x7F3AB0E4u: goto label_7F3AB0E4;
    case 0x7F3AB0E8u: goto label_7F3AB0E8;
    case 0x7F3AB0ECu: goto label_7F3AB0EC;
    case 0x7F3AB0F0u: goto label_7F3AB0F0;
    case 0x7F3AB0F4u: goto label_7F3AB0F4;
    case 0x7F3AB0F8u: goto label_7F3AB0F8;
    case 0x7F3AB0FCu: goto label_7F3AB0FC;
    case 0x7F3AB100u: goto label_7F3AB100;
    case 0x7F3AB104u: goto label_7F3AB104;
    case 0x7F3AB108u: goto label_7F3AB108;
    case 0x7F3AB10Cu: goto label_7F3AB10C;
    case 0x7F3AB110u: goto label_7F3AB110;
    case 0x7F3AB114u: goto label_7F3AB114;
    case 0x7F3AB118u: goto label_7F3AB118;
    case 0x7F3AB11Cu: goto label_7F3AB11C;
    case 0x7F3AB120u: goto label_7F3AB120;
    case 0x7F3AB124u: goto label_7F3AB124;
    case 0x7F3AB128u: goto label_7F3AB128;
    case 0x7F3AB12Cu: goto label_7F3AB12C;
    case 0x7F3AB130u: goto label_7F3AB130;
    case 0x7F3AB134u: goto label_7F3AB134;
    case 0x7F3AB138u: goto label_7F3AB138;
    case 0x7F3AB13Cu: goto label_7F3AB13C;
    case 0x7F3AB140u: goto label_7F3AB140;
    case 0x7F3AB144u: goto label_7F3AB144;
    case 0x7F3AB148u: goto label_7F3AB148;
    case 0x7F3AB14Cu: goto label_7F3AB14C;
    case 0x7F3AB150u: goto label_7F3AB150;
    case 0x7F3AB154u: goto label_7F3AB154;
    case 0x7F3AB158u: goto label_7F3AB158;
    case 0x7F3AB15Cu: goto label_7F3AB15C;
    case 0x7F3AB160u: goto label_7F3AB160;
    case 0x7F3AB164u: goto label_7F3AB164;
    case 0x7F3AB168u: goto label_7F3AB168;
    case 0x7F3AB16Cu: goto label_7F3AB16C;
    case 0x7F3AB170u: goto label_7F3AB170;
    case 0x7F3AB174u: goto label_7F3AB174;
    case 0x7F3AB178u: goto label_7F3AB178;
    case 0x7F3AB17Cu: goto label_7F3AB17C;
    case 0x7F3AB180u: goto label_7F3AB180;
    case 0x7F3AB184u: goto label_7F3AB184;
    case 0x7F3AB188u: goto label_7F3AB188;
    case 0x7F3AB18Cu: goto label_7F3AB18C;
    case 0x7F3AB190u: goto label_7F3AB190;
    case 0x7F3AB194u: goto label_7F3AB194;
    case 0x7F3AB198u: goto label_7F3AB198;
    case 0x7F3AB19Cu: goto label_7F3AB19C;
    case 0x7F3AB1A0u: goto label_7F3AB1A0;
    case 0x7F3AB1A4u: goto label_7F3AB1A4;
    case 0x7F3AB1A8u: goto label_7F3AB1A8;
    case 0x7F3AB1ACu: goto label_7F3AB1AC;
    case 0x7F3AB1B0u: goto label_7F3AB1B0;
    case 0x7F3AB1B4u: goto label_7F3AB1B4;
    case 0x7F3AB1B8u: goto label_7F3AB1B8;
    case 0x7F3AB1BCu: goto label_7F3AB1BC;
    case 0x7F3AB1C0u: goto label_7F3AB1C0;
    case 0x7F3AB1C4u: goto label_7F3AB1C4;
    case 0x7F3AB1C8u: goto label_7F3AB1C8;
    case 0x7F3AB1CCu: goto label_7F3AB1CC;
    case 0x7F3AB1D0u: goto label_7F3AB1D0;
    case 0x7F3AB1D4u: goto label_7F3AB1D4;
    case 0x7F3AB1D8u: goto label_7F3AB1D8;
    case 0x7F3AB1DCu: goto label_7F3AB1DC;
    case 0x7F3AB1E0u: goto label_7F3AB1E0;
    case 0x7F3AB1E4u: goto label_7F3AB1E4;
    case 0x7F3AB1E8u: goto label_7F3AB1E8;
    case 0x7F3AB1ECu: goto label_7F3AB1EC;
    case 0x7F3AB1F0u: goto label_7F3AB1F0;
    case 0x7F3AB1F4u: goto label_7F3AB1F4;
    case 0x7F3AB1F8u: goto label_7F3AB1F8;
    case 0x7F3AB1FCu: goto label_7F3AB1FC;
    case 0x7F3AB200u: goto label_7F3AB200;
    case 0x7F3AB204u: goto label_7F3AB204;
    case 0x7F3AB208u: goto label_7F3AB208;
    case 0x7F3AB20Cu: goto label_7F3AB20C;
    case 0x7F3AB210u: goto label_7F3AB210;
    case 0x7F3AB214u: goto label_7F3AB214;
    case 0x7F3AB218u: goto label_7F3AB218;
    case 0x7F3AB21Cu: goto label_7F3AB21C;
    case 0x7F3AB220u: goto label_7F3AB220;
    case 0x7F3AB224u: goto label_7F3AB224;
    case 0x7F3AB228u: goto label_7F3AB228;
    case 0x7F3AB22Cu: goto label_7F3AB22C;
    case 0x7F3AB230u: goto label_7F3AB230;
    case 0x7F3AB234u: goto label_7F3AB234;
    case 0x7F3AB238u: goto label_7F3AB238;
    case 0x7F3AB23Cu: goto label_7F3AB23C;
    case 0x7F3AB240u: goto label_7F3AB240;
    case 0x7F3AB244u: goto label_7F3AB244;
    case 0x7F3AB248u: goto label_7F3AB248;
    case 0x7F3AB24Cu: goto label_7F3AB24C;
    case 0x7F3AB250u: goto label_7F3AB250;
    case 0x7F3AB254u: goto label_7F3AB254;
    case 0x7F3AB258u: goto label_7F3AB258;
    case 0x7F3AB25Cu: goto label_7F3AB25C;
    case 0x7F3AB260u: goto label_7F3AB260;
    case 0x7F3AB264u: goto label_7F3AB264;
    case 0x7F3AB268u: goto label_7F3AB268;
    case 0x7F3AB26Cu: goto label_7F3AB26C;
    case 0x7F3AB270u: goto label_7F3AB270;
    case 0x7F3AB274u: goto label_7F3AB274;
    case 0x7F3AB278u: goto label_7F3AB278;
    case 0x7F3AB27Cu: goto label_7F3AB27C;
    case 0x7F3AB280u: goto label_7F3AB280;
    case 0x7F3AB284u: goto label_7F3AB284;
    case 0x7F3AB288u: goto label_7F3AB288;
    case 0x7F3AB28Cu: goto label_7F3AB28C;
    case 0x7F3AB290u: goto label_7F3AB290;
    case 0x7F3AB294u: goto label_7F3AB294;
    case 0x7F3AB298u: goto label_7F3AB298;
    case 0x7F3AB29Cu: goto label_7F3AB29C;
    case 0x7F3AB2A0u: goto label_7F3AB2A0;
    case 0x7F3AB2A4u: goto label_7F3AB2A4;
    case 0x7F3AB2A8u: goto label_7F3AB2A8;
    case 0x7F3AB2ACu: goto label_7F3AB2AC;
    case 0x7F3AB2B0u: goto label_7F3AB2B0;
    case 0x7F3AB2B4u: goto label_7F3AB2B4;
    case 0x7F3AB2B8u: goto label_7F3AB2B8;
    case 0x7F3AB2BCu: goto label_7F3AB2BC;
    case 0x7F3AB2C0u: goto label_7F3AB2C0;
    case 0x7F3AB2C4u: goto label_7F3AB2C4;
    case 0x7F3AB2C8u: goto label_7F3AB2C8;
    case 0x7F3AB2CCu: goto label_7F3AB2CC;
    case 0x7F3AB2D0u: goto label_7F3AB2D0;
    case 0x7F3AB2D4u: goto label_7F3AB2D4;
    case 0x7F3AB2D8u: goto label_7F3AB2D8;
    case 0x7F3AB2DCu: goto label_7F3AB2DC;
    case 0x7F3AB2E0u: goto label_7F3AB2E0;
    case 0x7F3AB2E4u: goto label_7F3AB2E4;
    case 0x7F3AB2E8u: goto label_7F3AB2E8;
    case 0x7F3AB2ECu: goto label_7F3AB2EC;
    case 0x7F3AB2F0u: goto label_7F3AB2F0;
    case 0x7F3AB2F4u: goto label_7F3AB2F4;
    case 0x7F3AB2F8u: goto label_7F3AB2F8;
    case 0x7F3AB2FCu: goto label_7F3AB2FC;
    case 0x7F3AB300u: goto label_7F3AB300;
    case 0x7F3AB304u: goto label_7F3AB304;
    case 0x7F3AB308u: goto label_7F3AB308;
    case 0x7F3AB30Cu: goto label_7F3AB30C;
    case 0x7F3AB310u: goto label_7F3AB310;
    case 0x7F3AB314u: goto label_7F3AB314;
    case 0x7F3AB318u: goto label_7F3AB318;
    case 0x7F3AB31Cu: goto label_7F3AB31C;
    case 0x7F3AB320u: goto label_7F3AB320;
    case 0x7F3AB324u: goto label_7F3AB324;
    case 0x7F3AB328u: goto label_7F3AB328;
    case 0x7F3AB32Cu: goto label_7F3AB32C;
    case 0x7F3AB330u: goto label_7F3AB330;
    case 0x7F3AB334u: goto label_7F3AB334;
    case 0x7F3AB338u: goto label_7F3AB338;
    case 0x7F3AB33Cu: goto label_7F3AB33C;
    case 0x7F3AB340u: goto label_7F3AB340;
    case 0x7F3AB344u: goto label_7F3AB344;
    case 0x7F3AB348u: goto label_7F3AB348;
    case 0x7F3AB34Cu: goto label_7F3AB34C;
    case 0x7F3AB350u: goto label_7F3AB350;
    case 0x7F3AB354u: goto label_7F3AB354;
    case 0x7F3AB358u: goto label_7F3AB358;
    case 0x7F3AB35Cu: goto label_7F3AB35C;
    case 0x7F3AB360u: goto label_7F3AB360;
    case 0x7F3AB364u: goto label_7F3AB364;
    case 0x7F3AB368u: goto label_7F3AB368;
    case 0x7F3AB36Cu: goto label_7F3AB36C;
    case 0x7F3AB370u: goto label_7F3AB370;
    case 0x7F3AB374u: goto label_7F3AB374;
    case 0x7F3AB378u: goto label_7F3AB378;
    case 0x7F3AB37Cu: goto label_7F3AB37C;
    case 0x7F3AB380u: goto label_7F3AB380;
    case 0x7F3AB384u: goto label_7F3AB384;
    case 0x7F3AB388u: goto label_7F3AB388;
    case 0x7F3AB38Cu: goto label_7F3AB38C;
    case 0x7F3AB390u: goto label_7F3AB390;
    case 0x7F3AB394u: goto label_7F3AB394;
    case 0x7F3AB398u: goto label_7F3AB398;
    case 0x7F3AB39Cu: goto label_7F3AB39C;
    case 0x7F3AB3A0u: goto label_7F3AB3A0;
    case 0x7F3AB3A4u: goto label_7F3AB3A4;
    case 0x7F3AB3A8u: goto label_7F3AB3A8;
    case 0x7F3AB3ACu: goto label_7F3AB3AC;
    case 0x7F3AB3B0u: goto label_7F3AB3B0;
    case 0x7F3AB3B4u: goto label_7F3AB3B4;
    case 0x7F3AB3B8u: goto label_7F3AB3B8;
    case 0x7F3AB3BCu: goto label_7F3AB3BC;
    case 0x7F3AB3C0u: goto label_7F3AB3C0;
    case 0x7F3AB3C4u: goto label_7F3AB3C4;
    case 0x7F3AB3C8u: goto label_7F3AB3C8;
    case 0x7F3AB3CCu: goto label_7F3AB3CC;
    case 0x7F3AB3D0u: goto label_7F3AB3D0;
    case 0x7F3AB3D4u: goto label_7F3AB3D4;
    case 0x7F3AB3D8u: goto label_7F3AB3D8;
    case 0x7F3AB3DCu: goto label_7F3AB3DC;
    case 0x7F3AB3E0u: goto label_7F3AB3E0;
    case 0x7F3AB3E4u: goto label_7F3AB3E4;
    case 0x7F3AB3E8u: goto label_7F3AB3E8;
    case 0x7F3AB3ECu: goto label_7F3AB3EC;
    case 0x7F3AB3F0u: goto label_7F3AB3F0;
    case 0x7F3AB3F4u: goto label_7F3AB3F4;
    case 0x7F3AB3F8u: goto label_7F3AB3F8;
    case 0x7F3AB3FCu: goto label_7F3AB3FC;
    case 0x7F3AB400u: goto label_7F3AB400;
    case 0x7F3AB404u: goto label_7F3AB404;
    case 0x7F3AB408u: goto label_7F3AB408;
    case 0x7F3AB40Cu: goto label_7F3AB40C;
    case 0x7F3AB410u: goto label_7F3AB410;
    case 0x7F3AB414u: goto label_7F3AB414;
    case 0x7F3AB418u: goto label_7F3AB418;
    case 0x7F3AB41Cu: goto label_7F3AB41C;
    case 0x7F3AB420u: goto label_7F3AB420;
    case 0x7F3AB424u: goto label_7F3AB424;
    case 0x7F3AB428u: goto label_7F3AB428;
    case 0x7F3AB42Cu: goto label_7F3AB42C;
    case 0x7F3AB430u: goto label_7F3AB430;
    case 0x7F3AB434u: goto label_7F3AB434;
    case 0x7F3AB438u: goto label_7F3AB438;
    case 0x7F3AB43Cu: goto label_7F3AB43C;
    case 0x7F3AB440u: goto label_7F3AB440;
    case 0x7F3AB444u: goto label_7F3AB444;
    case 0x7F3AB448u: goto label_7F3AB448;
    case 0x7F3AB44Cu: goto label_7F3AB44C;
    case 0x7F3AB450u: goto label_7F3AB450;
    case 0x7F3AB454u: goto label_7F3AB454;
    case 0x7F3AB458u: goto label_7F3AB458;
    case 0x7F3AB45Cu: goto label_7F3AB45C;
    case 0x7F3AB460u: goto label_7F3AB460;
    case 0x7F3AB464u: goto label_7F3AB464;
    case 0x7F3AB468u: goto label_7F3AB468;
    case 0x7F3AB46Cu: goto label_7F3AB46C;
    case 0x7F3AB470u: goto label_7F3AB470;
    case 0x7F3AB474u: goto label_7F3AB474;
    case 0x7F3AB478u: goto label_7F3AB478;
    case 0x7F3AB47Cu: goto label_7F3AB47C;
    case 0x7F3AB480u: goto label_7F3AB480;
    case 0x7F3AB484u: goto label_7F3AB484;
    case 0x7F3AB488u: goto label_7F3AB488;
    case 0x7F3AB48Cu: goto label_7F3AB48C;
    case 0x7F3AB490u: goto label_7F3AB490;
    case 0x7F3AB494u: goto label_7F3AB494;
    case 0x7F3AB498u: goto label_7F3AB498;
    case 0x7F3AB49Cu: goto label_7F3AB49C;
    case 0x7F3AB4A0u: goto label_7F3AB4A0;
    case 0x7F3AB4A4u: goto label_7F3AB4A4;
    case 0x7F3AB4A8u: goto label_7F3AB4A8;
    case 0x7F3AB4ACu: goto label_7F3AB4AC;
    case 0x7F3AB4B0u: goto label_7F3AB4B0;
    case 0x7F3AB4B4u: goto label_7F3AB4B4;
    case 0x7F3AB4B8u: goto label_7F3AB4B8;
    case 0x7F3AB4BCu: goto label_7F3AB4BC;
    case 0x7F3AB4C0u: goto label_7F3AB4C0;
    case 0x7F3AB4C4u: goto label_7F3AB4C4;
    case 0x7F3AB4C8u: goto label_7F3AB4C8;
    case 0x7F3AB4CCu: goto label_7F3AB4CC;
    case 0x7F3AB4D0u: goto label_7F3AB4D0;
    case 0x7F3AB4D4u: goto label_7F3AB4D4;
    case 0x7F3AB4D8u: goto label_7F3AB4D8;
    case 0x7F3AB4DCu: goto label_7F3AB4DC;
    case 0x7F3AB4E0u: goto label_7F3AB4E0;
    case 0x7F3AB4E4u: goto label_7F3AB4E4;
    case 0x7F3AB4E8u: goto label_7F3AB4E8;
    case 0x7F3AB4ECu: goto label_7F3AB4EC;
    case 0x7F3AB4F0u: goto label_7F3AB4F0;
    case 0x7F3AB4F4u: goto label_7F3AB4F4;
    case 0x7F3AB4F8u: goto label_7F3AB4F8;
    case 0x7F3AB4FCu: goto label_7F3AB4FC;
    case 0x7F3AB500u: goto label_7F3AB500;
    case 0x7F3AB504u: goto label_7F3AB504;
    case 0x7F3AB508u: goto label_7F3AB508;
    case 0x7F3AB50Cu: goto label_7F3AB50C;
    case 0x7F3AB510u: goto label_7F3AB510;
    case 0x7F3AB514u: goto label_7F3AB514;
    case 0x7F3AB518u: goto label_7F3AB518;
    case 0x7F3AB51Cu: goto label_7F3AB51C;
    case 0x7F3AB520u: goto label_7F3AB520;
    case 0x7F3AB524u: goto label_7F3AB524;
    case 0x7F3AB528u: goto label_7F3AB528;
    case 0x7F3AB52Cu: goto label_7F3AB52C;
    case 0x7F3AB530u: goto label_7F3AB530;
    case 0x7F3AB534u: goto label_7F3AB534;
    case 0x7F3AB538u: goto label_7F3AB538;
    case 0x7F3AB53Cu: goto label_7F3AB53C;
    case 0x7F3AB540u: goto label_7F3AB540;
    case 0x7F3AB544u: goto label_7F3AB544;
    case 0x7F3AB548u: goto label_7F3AB548;
    case 0x7F3AB54Cu: goto label_7F3AB54C;
    case 0x7F3AB550u: goto label_7F3AB550;
    case 0x7F3AB554u: goto label_7F3AB554;
    case 0x7F3AB558u: goto label_7F3AB558;
    case 0x7F3AB55Cu: goto label_7F3AB55C;
    case 0x7F3AB560u: goto label_7F3AB560;
    case 0x7F3AB564u: goto label_7F3AB564;
    case 0x7F3AB568u: goto label_7F3AB568;
    case 0x7F3AB56Cu: goto label_7F3AB56C;
    case 0x7F3AB570u: goto label_7F3AB570;
    case 0x7F3AB574u: goto label_7F3AB574;
    case 0x7F3AB578u: goto label_7F3AB578;
    case 0x7F3AB57Cu: goto label_7F3AB57C;
    case 0x7F3AB580u: goto label_7F3AB580;
    case 0x7F3AB584u: goto label_7F3AB584;
    case 0x7F3AB588u: goto label_7F3AB588;
    case 0x7F3AB58Cu: goto label_7F3AB58C;
    case 0x7F3AB590u: goto label_7F3AB590;
    case 0x7F3AB594u: goto label_7F3AB594;
    case 0x7F3AB598u: goto label_7F3AB598;
    case 0x7F3AB59Cu: goto label_7F3AB59C;
    case 0x7F3AB5A0u: goto label_7F3AB5A0;
    case 0x7F3AB5A4u: goto label_7F3AB5A4;
    case 0x7F3AB5A8u: goto label_7F3AB5A8;
    case 0x7F3AB5ACu: goto label_7F3AB5AC;
    case 0x7F3AB5B0u: goto label_7F3AB5B0;
    case 0x7F3AB5B4u: goto label_7F3AB5B4;
    case 0x7F3AB5B8u: goto label_7F3AB5B8;
    case 0x7F3AB5BCu: goto label_7F3AB5BC;
    case 0x7F3AB5C0u: goto label_7F3AB5C0;
    case 0x7F3AB5C4u: goto label_7F3AB5C4;
    case 0x7F3AB5C8u: goto label_7F3AB5C8;
    case 0x7F3AB5CCu: goto label_7F3AB5CC;
    case 0x7F3AB5D0u: goto label_7F3AB5D0;
    case 0x7F3AB5D4u: goto label_7F3AB5D4;
    case 0x7F3AB5D8u: goto label_7F3AB5D8;
    case 0x7F3AB5DCu: goto label_7F3AB5DC;
    case 0x7F3AB5E0u: goto label_7F3AB5E0;
    case 0x7F3AB5E4u: goto label_7F3AB5E4;
    case 0x7F3AB5E8u: goto label_7F3AB5E8;
    case 0x7F3AB5ECu: goto label_7F3AB5EC;
    case 0x7F3AB5F0u: goto label_7F3AB5F0;
    case 0x7F3AB5F4u: goto label_7F3AB5F4;
    case 0x7F3AB5F8u: goto label_7F3AB5F8;
    case 0x7F3AB5FCu: goto label_7F3AB5FC;
    case 0x7F3AB600u: goto label_7F3AB600;
    case 0x7F3AB604u: goto label_7F3AB604;
    case 0x7F3AB608u: goto label_7F3AB608;
    case 0x7F3AB60Cu: goto label_7F3AB60C;
    case 0x7F3AB610u: goto label_7F3AB610;
    case 0x7F3AB614u: goto label_7F3AB614;
    case 0x7F3AB618u: goto label_7F3AB618;
    case 0x7F3AB61Cu: goto label_7F3AB61C;
    case 0x7F3AB620u: goto label_7F3AB620;
    case 0x7F3AB624u: goto label_7F3AB624;
    case 0x7F3AB628u: goto label_7F3AB628;
    case 0x7F3AB62Cu: goto label_7F3AB62C;
    case 0x7F3AB630u: goto label_7F3AB630;
    case 0x7F3AB634u: goto label_7F3AB634;
    case 0x7F3AB638u: goto label_7F3AB638;
    case 0x7F3AB63Cu: goto label_7F3AB63C;
    case 0x7F3AB640u: goto label_7F3AB640;
    case 0x7F3AB644u: goto label_7F3AB644;
    case 0x7F3AB648u: goto label_7F3AB648;
    case 0x7F3AB64Cu: goto label_7F3AB64C;
    case 0x7F3AB650u: goto label_7F3AB650;
    case 0x7F3AB654u: goto label_7F3AB654;
    case 0x7F3AB658u: goto label_7F3AB658;
    case 0x7F3AB65Cu: goto label_7F3AB65C;
    case 0x7F3AB660u: goto label_7F3AB660;
    case 0x7F3AB664u: goto label_7F3AB664;
    case 0x7F3AB668u: goto label_7F3AB668;
    case 0x7F3AB66Cu: goto label_7F3AB66C;
    case 0x7F3AB670u: goto label_7F3AB670;
    case 0x7F3AB674u: goto label_7F3AB674;
    case 0x7F3AB678u: goto label_7F3AB678;
    case 0x7F3AB67Cu: goto label_7F3AB67C;
    case 0x7F3AB680u: goto label_7F3AB680;
    case 0x7F3AB684u: goto label_7F3AB684;
    case 0x7F3AB688u: goto label_7F3AB688;
    case 0x7F3AB68Cu: goto label_7F3AB68C;
    case 0x7F3AB690u: goto label_7F3AB690;
    case 0x7F3AB694u: goto label_7F3AB694;
    case 0x7F3AB698u: goto label_7F3AB698;
    case 0x7F3AB69Cu: goto label_7F3AB69C;
    case 0x7F3AB6A0u: goto label_7F3AB6A0;
    case 0x7F3AB6A4u: goto label_7F3AB6A4;
    case 0x7F3AB6A8u: goto label_7F3AB6A8;
    case 0x7F3AB6ACu: goto label_7F3AB6AC;
    case 0x7F3AB6B0u: goto label_7F3AB6B0;
    case 0x7F3AB6B4u: goto label_7F3AB6B4;
    case 0x7F3AB6B8u: goto label_7F3AB6B8;
    case 0x7F3AB6BCu: goto label_7F3AB6BC;
    case 0x7F3AB6C0u: goto label_7F3AB6C0;
    case 0x7F3AB6C4u: goto label_7F3AB6C4;
    case 0x7F3AB6C8u: goto label_7F3AB6C8;
    case 0x7F3AB6CCu: goto label_7F3AB6CC;
    case 0x7F3AB6D0u: goto label_7F3AB6D0;
    case 0x7F3AB6D4u: goto label_7F3AB6D4;
    case 0x7F3AB6D8u: goto label_7F3AB6D8;
    case 0x7F3AB6DCu: goto label_7F3AB6DC;
    case 0x7F3AB6E0u: goto label_7F3AB6E0;
    case 0x7F3AB6E4u: goto label_7F3AB6E4;
    case 0x7F3AB6E8u: goto label_7F3AB6E8;
    case 0x7F3AB6ECu: goto label_7F3AB6EC;
    case 0x7F3AB6F0u: goto label_7F3AB6F0;
    case 0x7F3AB6F4u: goto label_7F3AB6F4;
    case 0x7F3AB6F8u: goto label_7F3AB6F8;
    case 0x7F3AB6FCu: goto label_7F3AB6FC;
    case 0x7F3AB700u: goto label_7F3AB700;
    case 0x7F3AB704u: goto label_7F3AB704;
    case 0x7F3AB708u: goto label_7F3AB708;
    case 0x7F3AB70Cu: goto label_7F3AB70C;
    case 0x7F3AB710u: goto label_7F3AB710;
    case 0x7F3AB714u: goto label_7F3AB714;
    case 0x7F3AB718u: goto label_7F3AB718;
    case 0x7F3AB71Cu: goto label_7F3AB71C;
    case 0x7F3AB720u: goto label_7F3AB720;
    case 0x7F3AB724u: goto label_7F3AB724;
    case 0x7F3AB728u: goto label_7F3AB728;
    case 0x7F3AB72Cu: goto label_7F3AB72C;
    case 0x7F3AB730u: goto label_7F3AB730;
    case 0x7F3AB734u: goto label_7F3AB734;
    case 0x7F3AB738u: goto label_7F3AB738;
    case 0x7F3AB73Cu: goto label_7F3AB73C;
    case 0x7F3AB740u: goto label_7F3AB740;
    case 0x7F3AB744u: goto label_7F3AB744;
    case 0x7F3AB748u: goto label_7F3AB748;
    case 0x7F3AB74Cu: goto label_7F3AB74C;
    case 0x7F3AB750u: goto label_7F3AB750;
    case 0x7F3AB754u: goto label_7F3AB754;
    case 0x7F3AB758u: goto label_7F3AB758;
    case 0x7F3AB75Cu: goto label_7F3AB75C;
    case 0x7F3AB760u: goto label_7F3AB760;
    case 0x7F3AB764u: goto label_7F3AB764;
    case 0x7F3AB768u: goto label_7F3AB768;
    case 0x7F3AB76Cu: goto label_7F3AB76C;
    case 0x7F3AB770u: goto label_7F3AB770;
    case 0x7F3AB774u: goto label_7F3AB774;
    case 0x7F3AB778u: goto label_7F3AB778;
    case 0x7F3AB77Cu: goto label_7F3AB77C;
    case 0x7F3AB780u: goto label_7F3AB780;
    case 0x7F3AB784u: goto label_7F3AB784;
    case 0x7F3AB788u: goto label_7F3AB788;
    case 0x7F3AB78Cu: goto label_7F3AB78C;
    case 0x7F3AB790u: goto label_7F3AB790;
    case 0x7F3AB794u: goto label_7F3AB794;
    case 0x7F3AB798u: goto label_7F3AB798;
    case 0x7F3AB79Cu: goto label_7F3AB79C;
    case 0x7F3AB7A0u: goto label_7F3AB7A0;
    case 0x7F3AB7A4u: goto label_7F3AB7A4;
    case 0x7F3AB7A8u: goto label_7F3AB7A8;
    case 0x7F3AB7ACu: goto label_7F3AB7AC;
    case 0x7F3AB7B0u: goto label_7F3AB7B0;
    case 0x7F3AB7B4u: goto label_7F3AB7B4;
    case 0x7F3AB7B8u: goto label_7F3AB7B8;
    case 0x7F3AB7BCu: goto label_7F3AB7BC;
    case 0x7F3AB7C0u: goto label_7F3AB7C0;
    case 0x7F3AB7C4u: goto label_7F3AB7C4;
    case 0x7F3AB7C8u: goto label_7F3AB7C8;
    case 0x7F3AB7CCu: goto label_7F3AB7CC;
    case 0x7F3AB7D0u: goto label_7F3AB7D0;
    case 0x7F3AB7D4u: goto label_7F3AB7D4;
    case 0x7F3AB7D8u: goto label_7F3AB7D8;
    case 0x7F3AB7DCu: goto label_7F3AB7DC;
    case 0x7F3AB7E0u: goto label_7F3AB7E0;
    case 0x7F3AB7E4u: goto label_7F3AB7E4;
    case 0x7F3AB7E8u: goto label_7F3AB7E8;
    case 0x7F3AB7ECu: goto label_7F3AB7EC;
    case 0x7F3AB7F0u: goto label_7F3AB7F0;
    case 0x7F3AB7F4u: goto label_7F3AB7F4;
    case 0x7F3AB7F8u: goto label_7F3AB7F8;
    case 0x7F3AB7FCu: goto label_7F3AB7FC;
    case 0x7F3AB800u: goto label_7F3AB800;
    case 0x7F3AB804u: goto label_7F3AB804;
    case 0x7F3AB808u: goto label_7F3AB808;
    case 0x7F3AB80Cu: goto label_7F3AB80C;
    case 0x7F3AB810u: goto label_7F3AB810;
    case 0x7F3AB814u: goto label_7F3AB814;
    case 0x7F3AB818u: goto label_7F3AB818;
    case 0x7F3AB81Cu: goto label_7F3AB81C;
    case 0x7F3AB820u: goto label_7F3AB820;
    case 0x7F3AB824u: goto label_7F3AB824;
    case 0x7F3AB828u: goto label_7F3AB828;
    case 0x7F3AB82Cu: goto label_7F3AB82C;
    case 0x7F3AB830u: goto label_7F3AB830;
    case 0x7F3AB834u: goto label_7F3AB834;
    case 0x7F3AB838u: goto label_7F3AB838;
    case 0x7F3AB83Cu: goto label_7F3AB83C;
    case 0x7F3AB840u: goto label_7F3AB840;
    case 0x7F3AB844u: goto label_7F3AB844;
    case 0x7F3AB848u: goto label_7F3AB848;
    case 0x7F3AB84Cu: goto label_7F3AB84C;
    case 0x7F3AB850u: goto label_7F3AB850;
    case 0x7F3AB854u: goto label_7F3AB854;
    case 0x7F3AB858u: goto label_7F3AB858;
    case 0x7F3AB85Cu: goto label_7F3AB85C;
    case 0x7F3AB860u: goto label_7F3AB860;
    case 0x7F3AB864u: goto label_7F3AB864;
    case 0x7F3AB868u: goto label_7F3AB868;
    case 0x7F3AB86Cu: goto label_7F3AB86C;
    case 0x7F3AB870u: goto label_7F3AB870;
    case 0x7F3AB874u: goto label_7F3AB874;
    case 0x7F3AB878u: goto label_7F3AB878;
    case 0x7F3AB87Cu: goto label_7F3AB87C;
    case 0x7F3AB880u: goto label_7F3AB880;
    case 0x7F3AB884u: goto label_7F3AB884;
    case 0x7F3AB888u: goto label_7F3AB888;
    case 0x7F3AB88Cu: goto label_7F3AB88C;
    case 0x7F3AB890u: goto label_7F3AB890;
    case 0x7F3AB894u: goto label_7F3AB894;
    case 0x7F3AB898u: goto label_7F3AB898;
    case 0x7F3AB89Cu: goto label_7F3AB89C;
    case 0x7F3AB8A0u: goto label_7F3AB8A0;
    case 0x7F3AB8A4u: goto label_7F3AB8A4;
    case 0x7F3AB8A8u: goto label_7F3AB8A8;
    case 0x7F3AB8ACu: goto label_7F3AB8AC;
    case 0x7F3AB8B0u: goto label_7F3AB8B0;
    case 0x7F3AB8B4u: goto label_7F3AB8B4;
    case 0x7F3AB8B8u: goto label_7F3AB8B8;
    case 0x7F3AB8BCu: goto label_7F3AB8BC;
    case 0x7F3AB8C0u: goto label_7F3AB8C0;
    case 0x7F3AB8C4u: goto label_7F3AB8C4;
    case 0x7F3AB8C8u: goto label_7F3AB8C8;
    case 0x7F3AB8CCu: goto label_7F3AB8CC;
    case 0x7F3AB8D0u: goto label_7F3AB8D0;
    case 0x7F3AB8D4u: goto label_7F3AB8D4;
    case 0x7F3AB8D8u: goto label_7F3AB8D8;
    case 0x7F3AB8DCu: goto label_7F3AB8DC;
    case 0x7F3AB8E0u: goto label_7F3AB8E0;
    case 0x7F3AB8E4u: goto label_7F3AB8E4;
    case 0x7F3AB8E8u: goto label_7F3AB8E8;
    case 0x7F3AB8ECu: goto label_7F3AB8EC;
    case 0x7F3AB8F0u: goto label_7F3AB8F0;
    case 0x7F3AB8F4u: goto label_7F3AB8F4;
    case 0x7F3AB8F8u: goto label_7F3AB8F8;
    case 0x7F3AB8FCu: goto label_7F3AB8FC;
    case 0x7F3AB900u: goto label_7F3AB900;
    case 0x7F3AB904u: goto label_7F3AB904;
    case 0x7F3AB908u: goto label_7F3AB908;
    case 0x7F3AB90Cu: goto label_7F3AB90C;
    case 0x7F3AB910u: goto label_7F3AB910;
    case 0x7F3AB914u: goto label_7F3AB914;
    case 0x7F3AB918u: goto label_7F3AB918;
    case 0x7F3AB91Cu: goto label_7F3AB91C;
    case 0x7F3AB920u: goto label_7F3AB920;
    case 0x7F3AB924u: goto label_7F3AB924;
    case 0x7F3AB928u: goto label_7F3AB928;
    case 0x7F3AB92Cu: goto label_7F3AB92C;
    case 0x7F3AB930u: goto label_7F3AB930;
    case 0x7F3AB934u: goto label_7F3AB934;
    case 0x7F3AB938u: goto label_7F3AB938;
    case 0x7F3AB93Cu: goto label_7F3AB93C;
    case 0x7F3AB940u: goto label_7F3AB940;
    case 0x7F3AB944u: goto label_7F3AB944;
    case 0x7F3AB948u: goto label_7F3AB948;
    case 0x7F3AB94Cu: goto label_7F3AB94C;
    case 0x7F3AB950u: goto label_7F3AB950;
    case 0x7F3AB954u: goto label_7F3AB954;
    case 0x7F3AB958u: goto label_7F3AB958;
    case 0x7F3AB95Cu: goto label_7F3AB95C;
    case 0x7F3AB960u: goto label_7F3AB960;
    case 0x7F3AB964u: goto label_7F3AB964;
    case 0x7F3AB968u: goto label_7F3AB968;
    case 0x7F3AB96Cu: goto label_7F3AB96C;
    case 0x7F3AB970u: goto label_7F3AB970;
    case 0x7F3AB974u: goto label_7F3AB974;
    case 0x7F3AB978u: goto label_7F3AB978;
    case 0x7F3AB97Cu: goto label_7F3AB97C;
    case 0x7F3AB980u: goto label_7F3AB980;
    case 0x7F3AB984u: goto label_7F3AB984;
    case 0x7F3AB988u: goto label_7F3AB988;
    case 0x7F3AB98Cu: goto label_7F3AB98C;
    case 0x7F3AB990u: goto label_7F3AB990;
    case 0x7F3AB994u: goto label_7F3AB994;
    case 0x7F3AB998u: goto label_7F3AB998;
    case 0x7F3AB99Cu: goto label_7F3AB99C;
    case 0x7F3AB9A0u: goto label_7F3AB9A0;
    case 0x7F3AB9A4u: goto label_7F3AB9A4;
    case 0x7F3AB9A8u: goto label_7F3AB9A8;
    case 0x7F3AB9ACu: goto label_7F3AB9AC;
    case 0x7F3AB9B0u: goto label_7F3AB9B0;
    case 0x7F3AB9B4u: goto label_7F3AB9B4;
    case 0x7F3AB9B8u: goto label_7F3AB9B8;
    case 0x7F3AB9BCu: goto label_7F3AB9BC;
    case 0x7F3AB9C0u: goto label_7F3AB9C0;
    case 0x7F3AB9C4u: goto label_7F3AB9C4;
    case 0x7F3AB9C8u: goto label_7F3AB9C8;
    case 0x7F3AB9CCu: goto label_7F3AB9CC;
    case 0x7F3AB9D0u: goto label_7F3AB9D0;
    case 0x7F3AB9D4u: goto label_7F3AB9D4;
    case 0x7F3AB9D8u: goto label_7F3AB9D8;
    case 0x7F3AB9DCu: goto label_7F3AB9DC;
    case 0x7F3AB9E0u: goto label_7F3AB9E0;
    case 0x7F3AB9E4u: goto label_7F3AB9E4;
    case 0x7F3AB9E8u: goto label_7F3AB9E8;
    case 0x7F3AB9ECu: goto label_7F3AB9EC;
    case 0x7F3AB9F0u: goto label_7F3AB9F0;
    case 0x7F3AB9F4u: goto label_7F3AB9F4;
    case 0x7F3AB9F8u: goto label_7F3AB9F8;
    case 0x7F3AB9FCu: goto label_7F3AB9FC;
    case 0x7F3ABA00u: goto label_7F3ABA00;
    case 0x7F3ABA04u: goto label_7F3ABA04;
    case 0x7F3ABA08u: goto label_7F3ABA08;
    case 0x7F3ABA0Cu: goto label_7F3ABA0C;
    case 0x7F3ABA10u: goto label_7F3ABA10;
    case 0x7F3ABA14u: goto label_7F3ABA14;
    case 0x7F3ABA18u: goto label_7F3ABA18;
    case 0x7F3ABA1Cu: goto label_7F3ABA1C;
    case 0x7F3ABA20u: goto label_7F3ABA20;
    case 0x7F3ABA24u: goto label_7F3ABA24;
    case 0x7F3ABA28u: goto label_7F3ABA28;
    case 0x7F3ABA2Cu: goto label_7F3ABA2C;
    case 0x7F3ABA30u: goto label_7F3ABA30;
    case 0x7F3ABA34u: goto label_7F3ABA34;
    case 0x7F3ABA38u: goto label_7F3ABA38;
    case 0x7F3ABA3Cu: goto label_7F3ABA3C;
    case 0x7F3ABA40u: goto label_7F3ABA40;
    case 0x7F3ABA44u: goto label_7F3ABA44;
    case 0x7F3ABA48u: goto label_7F3ABA48;
    case 0x7F3ABA4Cu: goto label_7F3ABA4C;
    case 0x7F3ABA50u: goto label_7F3ABA50;
    case 0x7F3ABA54u: goto label_7F3ABA54;
    case 0x7F3ABA58u: goto label_7F3ABA58;
    case 0x7F3ABA5Cu: goto label_7F3ABA5C;
    case 0x7F3ABA60u: goto label_7F3ABA60;
    case 0x7F3ABA64u: goto label_7F3ABA64;
    case 0x7F3ABA68u: goto label_7F3ABA68;
    case 0x7F3ABA6Cu: goto label_7F3ABA6C;
    case 0x7F3ABA70u: goto label_7F3ABA70;
    case 0x7F3ABA74u: goto label_7F3ABA74;
    case 0x7F3ABA78u: goto label_7F3ABA78;
    case 0x7F3ABA7Cu: goto label_7F3ABA7C;
    case 0x7F3ABA80u: goto label_7F3ABA80;
    case 0x7F3ABA84u: goto label_7F3ABA84;
    case 0x7F3ABA88u: goto label_7F3ABA88;
    case 0x7F3ABA8Cu: goto label_7F3ABA8C;
    case 0x7F3ABA90u: goto label_7F3ABA90;
    case 0x7F3ABA94u: goto label_7F3ABA94;
    case 0x7F3ABA98u: goto label_7F3ABA98;
    case 0x7F3ABA9Cu: goto label_7F3ABA9C;
    case 0x7F3ABAA0u: goto label_7F3ABAA0;
    case 0x7F3ABAA4u: goto label_7F3ABAA4;
    case 0x7F3ABAA8u: goto label_7F3ABAA8;
    case 0x7F3ABAACu: goto label_7F3ABAAC;
    case 0x7F3ABAB0u: goto label_7F3ABAB0;
    case 0x7F3ABAB4u: goto label_7F3ABAB4;
    case 0x7F3ABAB8u: goto label_7F3ABAB8;
    case 0x7F3ABABCu: goto label_7F3ABABC;
    case 0x7F3ABAC0u: goto label_7F3ABAC0;
    case 0x7F3ABAC4u: goto label_7F3ABAC4;
    case 0x7F3ABAC8u: goto label_7F3ABAC8;
    case 0x7F3ABACCu: goto label_7F3ABACC;
    case 0x7F3ABAD0u: goto label_7F3ABAD0;
    case 0x7F3ABAD4u: goto label_7F3ABAD4;
    case 0x7F3ABAD8u: goto label_7F3ABAD8;
    case 0x7F3ABADCu: goto label_7F3ABADC;
    case 0x7F3ABAE0u: goto label_7F3ABAE0;
    case 0x7F3ABAE4u: goto label_7F3ABAE4;
    case 0x7F3ABAE8u: goto label_7F3ABAE8;
    case 0x7F3ABAECu: goto label_7F3ABAEC;
    case 0x7F3ABAF0u: goto label_7F3ABAF0;
    case 0x7F3ABAF4u: goto label_7F3ABAF4;
    case 0x7F3ABAF8u: goto label_7F3ABAF8;
    case 0x7F3ABAFCu: goto label_7F3ABAFC;
    case 0x7F3ABB00u: goto label_7F3ABB00;
    case 0x7F3ABB04u: goto label_7F3ABB04;
    case 0x7F3ABB08u: goto label_7F3ABB08;
    case 0x7F3ABB0Cu: goto label_7F3ABB0C;
    case 0x7F3ABB10u: goto label_7F3ABB10;
    case 0x7F3ABB14u: goto label_7F3ABB14;
    case 0x7F3ABB18u: goto label_7F3ABB18;
    case 0x7F3ABB1Cu: goto label_7F3ABB1C;
    case 0x7F3ABB20u: goto label_7F3ABB20;
    case 0x7F3ABB24u: goto label_7F3ABB24;
    case 0x7F3ABB28u: goto label_7F3ABB28;
    case 0x7F3ABB2Cu: goto label_7F3ABB2C;
    case 0x7F3ABB30u: goto label_7F3ABB30;
    case 0x7F3ABB34u: goto label_7F3ABB34;
    case 0x7F3ABB38u: goto label_7F3ABB38;
    case 0x7F3ABB3Cu: goto label_7F3ABB3C;
    case 0x7F3ABB40u: goto label_7F3ABB40;
    case 0x7F3ABB44u: goto label_7F3ABB44;
    case 0x7F3ABB48u: goto label_7F3ABB48;
    case 0x7F3ABB4Cu: goto label_7F3ABB4C;
    case 0x7F3ABB50u: goto label_7F3ABB50;
    case 0x7F3ABB54u: goto label_7F3ABB54;
    case 0x7F3ABB58u: goto label_7F3ABB58;
    case 0x7F3ABB5Cu: goto label_7F3ABB5C;
    case 0x7F3ABB60u: goto label_7F3ABB60;
    case 0x7F3ABB64u: goto label_7F3ABB64;
    case 0x7F3ABB68u: goto label_7F3ABB68;
    case 0x7F3ABB6Cu: goto label_7F3ABB6C;
    case 0x7F3ABB70u: goto label_7F3ABB70;
    case 0x7F3ABB74u: goto label_7F3ABB74;
    case 0x7F3ABB78u: goto label_7F3ABB78;
    case 0x7F3ABB7Cu: goto label_7F3ABB7C;
    case 0x7F3ABB80u: goto label_7F3ABB80;
    case 0x7F3ABB84u: goto label_7F3ABB84;
    case 0x7F3ABB88u: goto label_7F3ABB88;
    case 0x7F3ABB8Cu: goto label_7F3ABB8C;
    case 0x7F3ABB90u: goto label_7F3ABB90;
    case 0x7F3ABB94u: goto label_7F3ABB94;
    case 0x7F3ABB98u: goto label_7F3ABB98;
    case 0x7F3ABB9Cu: goto label_7F3ABB9C;
    case 0x7F3ABBA0u: goto label_7F3ABBA0;
    case 0x7F3ABBA4u: goto label_7F3ABBA4;
    case 0x7F3ABBA8u: goto label_7F3ABBA8;
    case 0x7F3ABBACu: goto label_7F3ABBAC;
    case 0x7F3ABBB0u: goto label_7F3ABBB0;
    case 0x7F3ABBB4u: goto label_7F3ABBB4;
    case 0x7F3ABBB8u: goto label_7F3ABBB8;
    case 0x7F3ABBBCu: goto label_7F3ABBBC;
    case 0x7F3ABBC0u: goto label_7F3ABBC0;
    case 0x7F3ABBC4u: goto label_7F3ABBC4;
    case 0x7F3ABBC8u: goto label_7F3ABBC8;
    case 0x7F3ABBCCu: goto label_7F3ABBCC;
    case 0x7F3ABBD0u: goto label_7F3ABBD0;
    case 0x7F3ABBD4u: goto label_7F3ABBD4;
    case 0x7F3ABBD8u: goto label_7F3ABBD8;
    case 0x7F3ABBDCu: goto label_7F3ABBDC;
    case 0x7F3ABBE0u: goto label_7F3ABBE0;
    case 0x7F3ABBE4u: goto label_7F3ABBE4;
    case 0x7F3ABBE8u: goto label_7F3ABBE8;
    case 0x7F3ABBECu: goto label_7F3ABBEC;
    case 0x7F3ABBF0u: goto label_7F3ABBF0;
    case 0x7F3ABBF4u: goto label_7F3ABBF4;
    case 0x7F3ABBF8u: goto label_7F3ABBF8;
    case 0x7F3ABBFCu: goto label_7F3ABBFC;
    case 0x7F3ABC00u: goto label_7F3ABC00;
    case 0x7F3ABC04u: goto label_7F3ABC04;
    case 0x7F3ABC08u: goto label_7F3ABC08;
    case 0x7F3ABC0Cu: goto label_7F3ABC0C;
    case 0x7F3ABC10u: goto label_7F3ABC10;
    case 0x7F3ABC14u: goto label_7F3ABC14;
    case 0x7F3ABC18u: goto label_7F3ABC18;
    case 0x7F3ABC1Cu: goto label_7F3ABC1C;
    case 0x7F3ABC20u: goto label_7F3ABC20;
    case 0x7F3ABC24u: goto label_7F3ABC24;
    case 0x7F3ABC28u: goto label_7F3ABC28;
    case 0x7F3ABC2Cu: goto label_7F3ABC2C;
    case 0x7F3ABC30u: goto label_7F3ABC30;
    case 0x7F3ABC34u: goto label_7F3ABC34;
    case 0x7F3ABC38u: goto label_7F3ABC38;
    case 0x7F3ABC3Cu: goto label_7F3ABC3C;
    case 0x7F3ABC40u: goto label_7F3ABC40;
    case 0x7F3ABC44u: goto label_7F3ABC44;
    case 0x7F3ABC48u: goto label_7F3ABC48;
    case 0x7F3ABC4Cu: goto label_7F3ABC4C;
    case 0x7F3ABC50u: goto label_7F3ABC50;
    case 0x7F3ABC54u: goto label_7F3ABC54;
    case 0x7F3ABC58u: goto label_7F3ABC58;
    case 0x7F3ABC5Cu: goto label_7F3ABC5C;
    case 0x7F3ABC60u: goto label_7F3ABC60;
    case 0x7F3ABC64u: goto label_7F3ABC64;
    case 0x7F3ABC68u: goto label_7F3ABC68;
    case 0x7F3ABC6Cu: goto label_7F3ABC6C;
    case 0x7F3ABC70u: goto label_7F3ABC70;
    case 0x7F3ABC74u: goto label_7F3ABC74;
    case 0x7F3ABC78u: goto label_7F3ABC78;
    case 0x7F3ABC7Cu: goto label_7F3ABC7C;
    case 0x7F3ABC80u: goto label_7F3ABC80;
    case 0x7F3ABC84u: goto label_7F3ABC84;
    case 0x7F3ABC88u: goto label_7F3ABC88;
    case 0x7F3ABC8Cu: goto label_7F3ABC8C;
    case 0x7F3ABC90u: goto label_7F3ABC90;
    case 0x7F3ABC94u: goto label_7F3ABC94;
    case 0x7F3ABC98u: goto label_7F3ABC98;
    case 0x7F3ABC9Cu: goto label_7F3ABC9C;
    case 0x7F3ABCA0u: goto label_7F3ABCA0;
    case 0x7F3ABCA4u: goto label_7F3ABCA4;
    case 0x7F3ABCA8u: goto label_7F3ABCA8;
    case 0x7F3ABCACu: goto label_7F3ABCAC;
    case 0x7F3ABCB0u: goto label_7F3ABCB0;
    case 0x7F3ABCB4u: goto label_7F3ABCB4;
    case 0x7F3ABCB8u: goto label_7F3ABCB8;
    case 0x7F3ABCBCu: goto label_7F3ABCBC;
    case 0x7F3ABCC0u: goto label_7F3ABCC0;
    case 0x7F3ABCC4u: goto label_7F3ABCC4;
    case 0x7F3ABCC8u: goto label_7F3ABCC8;
    case 0x7F3ABCCCu: goto label_7F3ABCCC;
    case 0x7F3ABCD0u: goto label_7F3ABCD0;
    case 0x7F3ABCD4u: goto label_7F3ABCD4;
    case 0x7F3ABCD8u: goto label_7F3ABCD8;
    case 0x7F3ABCDCu: goto label_7F3ABCDC;
    case 0x7F3ABCE0u: goto label_7F3ABCE0;
    case 0x7F3ABCE4u: goto label_7F3ABCE4;
    case 0x7F3ABCE8u: goto label_7F3ABCE8;
    case 0x7F3ABCECu: goto label_7F3ABCEC;
    case 0x7F3ABCF0u: goto label_7F3ABCF0;
    case 0x7F3ABCF4u: goto label_7F3ABCF4;
    case 0x7F3ABCF8u: goto label_7F3ABCF8;
    case 0x7F3ABCFCu: goto label_7F3ABCFC;
    case 0x7F3ABD00u: goto label_7F3ABD00;
    case 0x7F3ABD04u: goto label_7F3ABD04;
    case 0x7F3ABD08u: goto label_7F3ABD08;
    case 0x7F3ABD0Cu: goto label_7F3ABD0C;
    case 0x7F3ABD10u: goto label_7F3ABD10;
    case 0x7F3ABD14u: goto label_7F3ABD14;
    case 0x7F3ABD18u: goto label_7F3ABD18;
    case 0x7F3ABD1Cu: goto label_7F3ABD1C;
    case 0x7F3ABD20u: goto label_7F3ABD20;
    case 0x7F3ABD24u: goto label_7F3ABD24;
    case 0x7F3ABD28u: goto label_7F3ABD28;
    case 0x7F3ABD2Cu: goto label_7F3ABD2C;
    case 0x7F3ABD30u: goto label_7F3ABD30;
    case 0x7F3ABD34u: goto label_7F3ABD34;
    case 0x7F3ABD38u: goto label_7F3ABD38;
    case 0x7F3ABD3Cu: goto label_7F3ABD3C;
    case 0x7F3ABD40u: goto label_7F3ABD40;
    case 0x7F3ABD44u: goto label_7F3ABD44;
    case 0x7F3ABD48u: goto label_7F3ABD48;
    case 0x7F3ABD4Cu: goto label_7F3ABD4C;
    case 0x7F3ABD50u: goto label_7F3ABD50;
    case 0x7F3ABD54u: goto label_7F3ABD54;
    case 0x7F3ABD58u: goto label_7F3ABD58;
    case 0x7F3ABD5Cu: goto label_7F3ABD5C;
    case 0x7F3ABD60u: goto label_7F3ABD60;
    case 0x7F3ABD64u: goto label_7F3ABD64;
    case 0x7F3ABD68u: goto label_7F3ABD68;
    case 0x7F3ABD6Cu: goto label_7F3ABD6C;
    case 0x7F3ABD70u: goto label_7F3ABD70;
    case 0x7F3ABD74u: goto label_7F3ABD74;
    case 0x7F3ABD78u: goto label_7F3ABD78;
    case 0x7F3ABD7Cu: goto label_7F3ABD7C;
    case 0x7F3ABD80u: goto label_7F3ABD80;
    case 0x7F3ABD84u: goto label_7F3ABD84;
    case 0x7F3ABD88u: goto label_7F3ABD88;
    case 0x7F3ABD8Cu: goto label_7F3ABD8C;
    case 0x7F3ABD90u: goto label_7F3ABD90;
    case 0x7F3ABD94u: goto label_7F3ABD94;
    case 0x7F3ABD98u: goto label_7F3ABD98;
    case 0x7F3ABD9Cu: goto label_7F3ABD9C;
    case 0x7F3ABDA0u: goto label_7F3ABDA0;
    case 0x7F3ABDA4u: goto label_7F3ABDA4;
    case 0x7F3ABDA8u: goto label_7F3ABDA8;
    case 0x7F3ABDACu: goto label_7F3ABDAC;
    case 0x7F3ABDB0u: goto label_7F3ABDB0;
    case 0x7F3ABDB4u: goto label_7F3ABDB4;
    case 0x7F3ABDB8u: goto label_7F3ABDB8;
    case 0x7F3ABDBCu: goto label_7F3ABDBC;
    case 0x7F3ABDC0u: goto label_7F3ABDC0;
    case 0x7F3ABDC4u: goto label_7F3ABDC4;
    case 0x7F3ABDC8u: goto label_7F3ABDC8;
    case 0x7F3ABDCCu: goto label_7F3ABDCC;
    case 0x7F3ABDD0u: goto label_7F3ABDD0;
    case 0x7F3ABDD4u: goto label_7F3ABDD4;
    case 0x7F3ABDD8u: goto label_7F3ABDD8;
    case 0x7F3ABDDCu: goto label_7F3ABDDC;
    case 0x7F3ABDE0u: goto label_7F3ABDE0;
    case 0x7F3ABDE4u: goto label_7F3ABDE4;
    case 0x7F3ABDE8u: goto label_7F3ABDE8;
    case 0x7F3ABDECu: goto label_7F3ABDEC;
    case 0x7F3ABDF0u: goto label_7F3ABDF0;
    case 0x7F3ABDF4u: goto label_7F3ABDF4;
    case 0x7F3ABDF8u: goto label_7F3ABDF8;
    case 0x7F3ABDFCu: goto label_7F3ABDFC;
    case 0x7F3ABE00u: goto label_7F3ABE00;
    case 0x7F3ABE04u: goto label_7F3ABE04;
    case 0x7F3ABE08u: goto label_7F3ABE08;
    case 0x7F3ABE0Cu: goto label_7F3ABE0C;
    case 0x7F3ABE10u: goto label_7F3ABE10;
    case 0x7F3ABE14u: goto label_7F3ABE14;
    case 0x7F3ABE18u: goto label_7F3ABE18;
    case 0x7F3ABE1Cu: goto label_7F3ABE1C;
    case 0x7F3ABE20u: goto label_7F3ABE20;
    case 0x7F3ABE24u: goto label_7F3ABE24;
    case 0x7F3ABE28u: goto label_7F3ABE28;
    case 0x7F3ABE2Cu: goto label_7F3ABE2C;
    case 0x7F3ABE30u: goto label_7F3ABE30;
    case 0x7F3ABE34u: goto label_7F3ABE34;
    case 0x7F3ABE38u: goto label_7F3ABE38;
    case 0x7F3ABE3Cu: goto label_7F3ABE3C;
    case 0x7F3ABE40u: goto label_7F3ABE40;
    case 0x7F3ABE44u: goto label_7F3ABE44;
    case 0x7F3ABE48u: goto label_7F3ABE48;
    case 0x7F3ABE4Cu: goto label_7F3ABE4C;
    case 0x7F3ABE50u: goto label_7F3ABE50;
    case 0x7F3ABE54u: goto label_7F3ABE54;
    case 0x7F3ABE58u: goto label_7F3ABE58;
    case 0x7F3ABE5Cu: goto label_7F3ABE5C;
    case 0x7F3ABE60u: goto label_7F3ABE60;
    case 0x7F3ABE64u: goto label_7F3ABE64;
    case 0x7F3ABE68u: goto label_7F3ABE68;
    case 0x7F3ABE6Cu: goto label_7F3ABE6C;
    case 0x7F3ABE70u: goto label_7F3ABE70;
    case 0x7F3ABE74u: goto label_7F3ABE74;
    case 0x7F3ABE78u: goto label_7F3ABE78;
    case 0x7F3ABE7Cu: goto label_7F3ABE7C;
    case 0x7F3ABE80u: goto label_7F3ABE80;
    case 0x7F3ABE84u: goto label_7F3ABE84;
    case 0x7F3ABE88u: goto label_7F3ABE88;
    case 0x7F3ABE8Cu: goto label_7F3ABE8C;
    case 0x7F3ABE90u: goto label_7F3ABE90;
    case 0x7F3ABE94u: goto label_7F3ABE94;
    case 0x7F3ABE98u: goto label_7F3ABE98;
    case 0x7F3ABE9Cu: goto label_7F3ABE9C;
    case 0x7F3ABEA0u: goto label_7F3ABEA0;
    case 0x7F3ABEA4u: goto label_7F3ABEA4;
    case 0x7F3ABEA8u: goto label_7F3ABEA8;
    case 0x7F3ABEACu: goto label_7F3ABEAC;
    case 0x7F3ABEB0u: goto label_7F3ABEB0;
    case 0x7F3ABEB4u: goto label_7F3ABEB4;
    case 0x7F3ABEB8u: goto label_7F3ABEB8;
    case 0x7F3ABEBCu: goto label_7F3ABEBC;
    case 0x7F3ABEC0u: goto label_7F3ABEC0;
    case 0x7F3ABEC4u: goto label_7F3ABEC4;
    case 0x7F3ABEC8u: goto label_7F3ABEC8;
    case 0x7F3ABECCu: goto label_7F3ABECC;
    case 0x7F3ABED0u: goto label_7F3ABED0;
    case 0x7F3ABED4u: goto label_7F3ABED4;
    case 0x7F3ABED8u: goto label_7F3ABED8;
    case 0x7F3ABEDCu: goto label_7F3ABEDC;
    case 0x7F3ABEE0u: goto label_7F3ABEE0;
    case 0x7F3ABEE4u: goto label_7F3ABEE4;
    case 0x7F3ABEE8u: goto label_7F3ABEE8;
    case 0x7F3ABEECu: goto label_7F3ABEEC;
    case 0x7F3ABEF0u: goto label_7F3ABEF0;
    case 0x7F3ABEF4u: goto label_7F3ABEF4;
    case 0x7F3ABEF8u: goto label_7F3ABEF8;
    case 0x7F3ABEFCu: goto label_7F3ABEFC;
    case 0x7F3ABF00u: goto label_7F3ABF00;
    case 0x7F3ABF04u: goto label_7F3ABF04;
    case 0x7F3ABF08u: goto label_7F3ABF08;
    case 0x7F3ABF0Cu: goto label_7F3ABF0C;
    case 0x7F3ABF10u: goto label_7F3ABF10;
    case 0x7F3ABF14u: goto label_7F3ABF14;
    case 0x7F3ABF18u: goto label_7F3ABF18;
    case 0x7F3ABF1Cu: goto label_7F3ABF1C;
    case 0x7F3ABF20u: goto label_7F3ABF20;
    case 0x7F3ABF24u: goto label_7F3ABF24;
    case 0x7F3ABF28u: goto label_7F3ABF28;
    case 0x7F3ABF2Cu: goto label_7F3ABF2C;
    case 0x7F3ABF30u: goto label_7F3ABF30;
    case 0x7F3ABF34u: goto label_7F3ABF34;
    case 0x7F3ABF38u: goto label_7F3ABF38;
    case 0x7F3ABF3Cu: goto label_7F3ABF3C;
    case 0x7F3ABF40u: goto label_7F3ABF40;
    case 0x7F3ABF44u: goto label_7F3ABF44;
    case 0x7F3ABF48u: goto label_7F3ABF48;
    case 0x7F3ABF4Cu: goto label_7F3ABF4C;
    case 0x7F3ABF50u: goto label_7F3ABF50;
    case 0x7F3ABF54u: goto label_7F3ABF54;
    case 0x7F3ABF58u: goto label_7F3ABF58;
    case 0x7F3ABF5Cu: goto label_7F3ABF5C;
    case 0x7F3ABF60u: goto label_7F3ABF60;
    case 0x7F3ABF64u: goto label_7F3ABF64;
    case 0x7F3ABF68u: goto label_7F3ABF68;
    case 0x7F3ABF6Cu: goto label_7F3ABF6C;
    case 0x7F3ABF70u: goto label_7F3ABF70;
    case 0x7F3ABF74u: goto label_7F3ABF74;
    case 0x7F3ABF78u: goto label_7F3ABF78;
    case 0x7F3ABF7Cu: goto label_7F3ABF7C;
    case 0x7F3ABF80u: goto label_7F3ABF80;
    case 0x7F3ABF84u: goto label_7F3ABF84;
    case 0x7F3ABF88u: goto label_7F3ABF88;
    case 0x7F3ABF8Cu: goto label_7F3ABF8C;
    case 0x7F3ABF90u: goto label_7F3ABF90;
    case 0x7F3ABF94u: goto label_7F3ABF94;
    case 0x7F3ABF98u: goto label_7F3ABF98;
    case 0x7F3ABF9Cu: goto label_7F3ABF9C;
    case 0x7F3ABFA0u: goto label_7F3ABFA0;
    case 0x7F3ABFA4u: goto label_7F3ABFA4;
    case 0x7F3ABFA8u: goto label_7F3ABFA8;
    case 0x7F3ABFACu: goto label_7F3ABFAC;
    case 0x7F3ABFB0u: goto label_7F3ABFB0;
    case 0x7F3ABFB4u: goto label_7F3ABFB4;
    case 0x7F3ABFB8u: goto label_7F3ABFB8;
    case 0x7F3ABFBCu: goto label_7F3ABFBC;
    case 0x7F3ABFC0u: goto label_7F3ABFC0;
    case 0x7F3ABFC4u: goto label_7F3ABFC4;
    case 0x7F3ABFC8u: goto label_7F3ABFC8;
    case 0x7F3ABFCCu: goto label_7F3ABFCC;
    case 0x7F3ABFD0u: goto label_7F3ABFD0;
    case 0x7F3ABFD4u: goto label_7F3ABFD4;
    case 0x7F3ABFD8u: goto label_7F3ABFD8;
    case 0x7F3ABFDCu: goto label_7F3ABFDC;
    case 0x7F3ABFE0u: goto label_7F3ABFE0;
    case 0x7F3ABFE4u: goto label_7F3ABFE4;
    case 0x7F3ABFE8u: goto label_7F3ABFE8;
    case 0x7F3ABFECu: goto label_7F3ABFEC;
    case 0x7F3ABFF0u: goto label_7F3ABFF0;
    case 0x7F3ABFF4u: goto label_7F3ABFF4;
    case 0x7F3ABFF8u: goto label_7F3ABFF8;
    case 0x7F3ABFFCu: goto label_7F3ABFFC;
    case 0x7F3AC000u: goto label_7F3AC000;
    case 0x7F3AC004u: goto label_7F3AC004;
    case 0x7F3AC008u: goto label_7F3AC008;
    case 0x7F3AC00Cu: goto label_7F3AC00C;
    case 0x7F3AC010u: goto label_7F3AC010;
    case 0x7F3AC014u: goto label_7F3AC014;
    case 0x7F3AC018u: goto label_7F3AC018;
    case 0x7F3AC01Cu: goto label_7F3AC01C;
    case 0x7F3AC020u: goto label_7F3AC020;
    case 0x7F3AC024u: goto label_7F3AC024;
    case 0x7F3AC028u: goto label_7F3AC028;
    case 0x7F3AC02Cu: goto label_7F3AC02C;
    case 0x7F3AC030u: goto label_7F3AC030;
    case 0x7F3AC034u: goto label_7F3AC034;
    case 0x7F3AC038u: goto label_7F3AC038;
    case 0x7F3AC03Cu: goto label_7F3AC03C;
    case 0x7F3AC040u: goto label_7F3AC040;
    case 0x7F3AC044u: goto label_7F3AC044;
    case 0x7F3AC048u: goto label_7F3AC048;
    case 0x7F3AC04Cu: goto label_7F3AC04C;
    case 0x7F3AC050u: goto label_7F3AC050;
    case 0x7F3AC054u: goto label_7F3AC054;
    case 0x7F3AC058u: goto label_7F3AC058;
    case 0x7F3AC05Cu: goto label_7F3AC05C;
    case 0x7F3AC060u: goto label_7F3AC060;
    case 0x7F3AC064u: goto label_7F3AC064;
    case 0x7F3AC068u: goto label_7F3AC068;
    case 0x7F3AC06Cu: goto label_7F3AC06C;
    case 0x7F3AC070u: goto label_7F3AC070;
    case 0x7F3AC074u: goto label_7F3AC074;
    case 0x7F3AC078u: goto label_7F3AC078;
    case 0x7F3AC07Cu: goto label_7F3AC07C;
    case 0x7F3AC080u: goto label_7F3AC080;
    case 0x7F3AC084u: goto label_7F3AC084;
    case 0x7F3AC088u: goto label_7F3AC088;
    case 0x7F3AC08Cu: goto label_7F3AC08C;
    case 0x7F3AC090u: goto label_7F3AC090;
    case 0x7F3AC094u: goto label_7F3AC094;
    case 0x7F3AC098u: goto label_7F3AC098;
    case 0x7F3AC09Cu: goto label_7F3AC09C;
    case 0x7F3AC0A0u: goto label_7F3AC0A0;
    case 0x7F3AC0A4u: goto label_7F3AC0A4;
    case 0x7F3AC0A8u: goto label_7F3AC0A8;
    case 0x7F3AC0ACu: goto label_7F3AC0AC;
    case 0x7F3AC0B0u: goto label_7F3AC0B0;
    case 0x7F3AC0B4u: goto label_7F3AC0B4;
    case 0x7F3AC0B8u: goto label_7F3AC0B8;
    case 0x7F3AC0BCu: goto label_7F3AC0BC;
    case 0x7F3AC0C0u: goto label_7F3AC0C0;
    case 0x7F3AC0C4u: goto label_7F3AC0C4;
    case 0x7F3AC0C8u: goto label_7F3AC0C8;
    case 0x7F3AC0CCu: goto label_7F3AC0CC;
    case 0x7F3AC0D0u: goto label_7F3AC0D0;
    case 0x7F3AC0D4u: goto label_7F3AC0D4;
    case 0x7F3AC0D8u: goto label_7F3AC0D8;
    case 0x7F3AC0DCu: goto label_7F3AC0DC;
    case 0x7F3AC0E0u: goto label_7F3AC0E0;
    case 0x7F3AC0E4u: goto label_7F3AC0E4;
    case 0x7F3AC0E8u: goto label_7F3AC0E8;
    default: return;
    }
label_7F3A80EC:
    ctx->pc = 0x7F3A80ECu;
    ctx->downcount -= 16;
    // 7F3A80EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A80F0:
    ctx->pc = 0x7F3A80F0u;
    // 7F3A80F0: cmpwi   r0, 1
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

label_7F3A80F4:
    ctx->pc = 0x7F3A80F4u;
    // 7F3A80F4: lwz     r31, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A80F8:
    ctx->pc = 0x7F3A80F8u;
    // 7F3A80F8: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A80F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A80FC:
    ctx->pc = 0x7F3A80FCu;
    // 7F3A80FC: stw     r6, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A8100:
    ctx->pc = 0x7F3A8100u;
    // 7F3A8100: fsubs   f2, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A8100u)) return;
    ppc_fsubs(ctx, 2, 0, 4);

label_7F3A8104:
    ctx->pc = 0x7F3A8104u;
    // 7F3A8104: lfs     f5, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8104u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3A8108:
    ctx->pc = 0x7F3A8108u;
    // 7F3A8108: stw     r8, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A810C:
    ctx->pc = 0x7F3A810Cu;
    // 7F3A810C: lfs     f6, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A810Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F3A8110:
    ctx->pc = 0x7F3A8110u;
    // 7F3A8110: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A8114:
    ctx->pc = 0x7F3A8114u;
    // 7F3A8114: stw     r5, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A8118:
    ctx->pc = 0x7F3A8118u;
    // 7F3A8118: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A8118u)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_7F3A811C:
    ctx->pc = 0x7F3A811Cu;
    // 7F3A811C: stw     r8, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A8120:
    ctx->pc = 0x7F3A8120u;
    // 7F3A8120: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A8124:
    ctx->pc = 0x7F3A8124u;
    // 7F3A8124: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A8124u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_7F3A8128:
    ctx->pc = 0x7F3A8128u;
    // 7F3A8128: bc    4, 2, 0x7F3A8138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8138;
        }
    }

label_7F3A812C:
    ctx->pc = 0x7F3A812Cu;
    ctx->downcount -= 3;
    // 7F3A812C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A8130:
    ctx->pc = 0x7F3A8130u;
    // 7F3A8130: lfs     f0, -21368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8130u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A8134:
    ctx->pc = 0x7F3A8134u;
    // 7F3A8134: b       0x7F3A8140
    {
            goto label_7F3A8140;
    }

label_7F3A8138:
    ctx->pc = 0x7F3A8138u;
    ctx->downcount -= 2;
    // 7F3A8138: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A813C:
    ctx->pc = 0x7F3A813Cu;
    // 7F3A813C: lfs     f0, -21364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A813Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A8140:
    ctx->pc = 0x7F3A8140u;
    ctx->downcount -= 2;
    // 7F3A8140: fsubs   f6, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A8140u)) return;
    ppc_fsubs(ctx, 6, 6, 0);

label_7F3A8144:
    ctx->pc = 0x7F3A8144u;
    // 7F3A8144: bl      0x8004DAA4
    {
            ctx->lr = 0x7F3A8148u;
            ctx->pc = 0x8004DAA4u;
            return;
    }

label_7F3A8148:
    ctx->pc = 0x7F3A8148u;
    ctx->downcount -= 5;
    // 7F3A8148: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A814C:
    ctx->pc = 0x7F3A814Cu;
    // 7F3A814C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A8150:
    ctx->pc = 0x7F3A8150u;
    // 7F3A8150: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A8154:
    ctx->pc = 0x7F3A8154u;
    // 7F3A8154: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8158:
    ctx->pc = 0x7F3A8158u;
    // 7F3A8158: bl      0x80042184
    {
            ctx->lr = 0x7F3A815Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A815C:
    ctx->pc = 0x7F3A815Cu;
    ctx->downcount -= 5;
    // 7F3A815C: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8160:
    ctx->pc = 0x7F3A8160u;
    // 7F3A8160: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_7F3A8164:
    ctx->pc = 0x7F3A8164u;
    // 7F3A8164: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3A8168:
    ctx->pc = 0x7F3A8168u;
    // 7F3A8168: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A816C:
    ctx->pc = 0x7F3A816Cu;
    // 7F3A816C: bl      0x80042184
    {
            ctx->lr = 0x7F3A8170u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A8170:
    ctx->pc = 0x7F3A8170u;
    ctx->downcount -= 2;
    // 7F3A8170: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8174:
    ctx->pc = 0x7F3A8174u;
    // 7F3A8174: bl      0x80044084
    {
            ctx->lr = 0x7F3A8178u;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F3A8178:
    ctx->pc = 0x7F3A8178u;
    ctx->downcount -= 3;
    // 7F3A8178: lwz     r4, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A817C:
    ctx->pc = 0x7F3A817Cu;
    // 7F3A817C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8180:
    ctx->pc = 0x7F3A8180u;
    // 7F3A8180: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3A8184u;
            goto label_7F3ABF74;
    }

label_7F3A8184:
    ctx->pc = 0x7F3A8184u;
    ctx->downcount -= 13;
    // 7F3A8184: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A8188:
    ctx->pc = 0x7F3A8188u;
    // 7F3A8188: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A818C:
    ctx->pc = 0x7F3A818Cu;
    // 7F3A818C: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8190:
    ctx->pc = 0x7F3A8190u;
    // 7F3A8190: addi    r4, r3, 15496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15496);

label_7F3A8194:
    ctx->pc = 0x7F3A8194u;
    // 7F3A8194: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A8198:
    ctx->pc = 0x7F3A8198u;
    // 7F3A8198: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3A819C:
    ctx->pc = 0x7F3A819Cu;
    // 7F3A819C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A81A0:
    ctx->pc = 0x7F3A81A0u;
    // 7F3A81A0: addi    r3, r3, 32000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32000);

label_7F3A81A4:
    ctx->pc = 0x7F3A81A4u;
    // 7F3A81A4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3A81A8:
    ctx->pc = 0x7F3A81A8u;
    // 7F3A81A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A81AC:
    ctx->pc = 0x7F3A81ACu;
    // 7F3A81AC: cmpwi   r0, 0
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

label_7F3A81B0:
    ctx->pc = 0x7F3A81B0u;
    // 7F3A81B0: bc    4, 1, 0x7F3A8268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8268;
        }
    }

label_7F3A81B4:
    ctx->pc = 0x7F3A81B4u;
    ctx->downcount -= 5;
    // 7F3A81B4: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A81B8:
    ctx->pc = 0x7F3A81B8u;
    // 7F3A81B8: lwzx    r0, r3, r27
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A81BC:
    ctx->pc = 0x7F3A81BCu;
    // 7F3A81BC: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A81C0:
    // 7F3A81C0: cmplw   r4, r0
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

label_7F3A81C4:
    // 7F3A81C4: bc    4, 2, 0x7F3A825C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A825C;
        }
    }

label_7F3A81C8:
    ctx->pc = 0x7F3A81C8u;
    ctx->downcount -= 4;
    // 7F3A81C8: lwz     r5, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A81CC:
    // 7F3A81CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A81D0:
    // 7F3A81D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A81D4:
    // 7F3A81D4: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3A81D8u;
            ctx->pc = 0x7F3AC4B0u;
            return;
    }

label_7F3A81D8:
    ctx->pc = 0x7F3A81D8u;
    ctx->downcount -= 5;
    // 7F3A81D8: lwz     r6, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A81DC:
    // 7F3A81DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A81E0:
    // 7F3A81E0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A81E4:
    // 7F3A81E4: addi    r4, r28, 640
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(640);

label_7F3A81E8:
    // 7F3A81E8: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3A81ECu;
            ctx->pc = 0x7F3AC188u;
            return;
    }

label_7F3A81EC:
    ctx->downcount -= 2;
    // 7F3A81EC: cmpwi   r3, 0
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

label_7F3A81F0:
    // 7F3A81F0: bc    12, 2, 0x7F3A820C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A820C;
        }
    }

label_7F3A81F4:
    ctx->pc = 0x7F3A81F4u;
    ctx->downcount -= 6;
    // 7F3A81F4: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A81F8:
    // 7F3A81F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A81FC:
    ctx->pc = 0x7F3A81FCu;
    // 7F3A81FC: lwz     r6, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A8200:
    // 7F3A8200: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8204:
    ctx->pc = 0x7F3A8204u;
    // 7F3A8204: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A8208:
    // 7F3A8208: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3A820Cu;
            ctx->pc = 0x7F3AC438u;
            return;
    }

label_7F3A820C:
    ctx->pc = 0x7F3A820Cu;
    ctx->downcount -= 3;
    // 7F3A820C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8210:
    // 7F3A8210: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8214:
    // 7F3A8214: bc    4, 2, 0x7F3A8268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8268;
        }
    }

label_7F3A8218:
    ctx->downcount -= 16;
    // 7F3A8218: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F3A821C:
    // 7F3A821C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A8220:
    ctx->pc = 0x7F3A8220u;
    // 7F3A8220: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3A8224:
    // 7F3A8224: addi    r3, r3, 32004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32004);

label_7F3A8228:
    // 7F3A8228: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A822C:
    // 7F3A822C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8230:
    ctx->pc = 0x7F3A8230u;
    // 7F3A8230: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8234:
    // 7F3A8234: addi    r6, r28, 640
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(640);

label_7F3A8238:
    // 7F3A8238: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A823C:
    // 7F3A823C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8240:
    ctx->pc = 0x7F3A8240u;
    // 7F3A8240: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8244:
    // 7F3A8244: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A8248:
    // 7F3A8248: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A824C:
    ctx->pc = 0x7F3A824Cu;
    // 7F3A824C: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3A8250:
    ctx->pc = 0x7F3A8250u;
    // 7F3A8250: lwzx    r3, r3, r27
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[27];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8254:
    // 7F3A8254: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3A8258u;
            goto label_7F3A96A4;
    }

label_7F3A8258:
    ctx->downcount -= 1;
    // 7F3A8258: b       0x7F3A8268
    {
            goto label_7F3A8268;
    }

label_7F3A825C:
    ctx->downcount -= 3;
    // 7F3A825C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3A8260:
    // 7F3A8260: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F3A8264:
    // 7F3A8264: bc    16, 0, 0x7F3A81B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A81B4u;
                return;
            }
            goto label_7F3A81B4;
        }
    }

label_7F3A8268:
    ctx->pc = 0x7F3A8268u;
    ctx->downcount -= 4;
    // 7F3A8268: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A826C:
    ctx->pc = 0x7F3A826Cu;
    // 7F3A826C: lwz     r0, 15496(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15496);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8270:
    ctx->pc = 0x7F3A8270u;
    // 7F3A8270: cmpw    r30, r0
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

label_7F3A8274:
    ctx->pc = 0x7F3A8274u;
    // 7F3A8274: bc    12, 0, 0x7F3A8378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8378;
        }
    }

label_7F3A8278:
    ctx->pc = 0x7F3A8278u;
    ctx->downcount -= 2;
    // 7F3A8278: cmpwi   r0, 1
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

label_7F3A827C:
    ctx->pc = 0x7F3A827Cu;
    // 7F3A827C: bc    4, 0, 0x7F3A8378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8378;
        }
    }

label_7F3A8280:
    ctx->pc = 0x7F3A8280u;
    ctx->downcount -= 8;
    // 7F3A8280: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8284:
    ctx->pc = 0x7F3A8284u;
    // 7F3A8284: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8288:
    ctx->pc = 0x7F3A8288u;
    // 7F3A8288: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A828C:
    ctx->pc = 0x7F3A828Cu;
    // 7F3A828C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A8290:
    ctx->pc = 0x7F3A8290u;
    // 7F3A8290: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8294:
    ctx->pc = 0x7F3A8294u;
    // 7F3A8294: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8298:
    ctx->pc = 0x7F3A8298u;
    // 7F3A8298: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A829C:
    ctx->pc = 0x7F3A829Cu;
    // 7F3A829C: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3A82A0u;
            goto label_7F3A8E8C;
    }

label_7F3A82A0:
    ctx->pc = 0x7F3A82A0u;
    ctx->downcount -= 18;
    // 7F3A82A0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A82A4:
    ctx->pc = 0x7F3A82A4u;
    // 7F3A82A4: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3A82A8:
    ctx->pc = 0x7F3A82A8u;
    // 7F3A82A8: addi    r8, r4, 15496
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(15496);

label_7F3A82AC:
    ctx->pc = 0x7F3A82ACu;
    // 7F3A82AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A82B0:
    ctx->pc = 0x7F3A82B0u;
    // 7F3A82B0: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A82B4:
    ctx->pc = 0x7F3A82B4u;
    // 7F3A82B4: addi    r6, r5, 32004
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(32004);

label_7F3A82B8:
    ctx->pc = 0x7F3A82B8u;
    // 7F3A82B8: addi    r5, r4, 32000
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32000);

label_7F3A82BC:
    ctx->pc = 0x7F3A82BCu;
    // 7F3A82BC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A82C0:
    ctx->pc = 0x7F3A82C0u;
    // 7F3A82C0: rlwinm r9, r7, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_7F3A82C4:
    ctx->pc = 0x7F3A82C4u;
    // 7F3A82C4: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F3A82C8:
    ctx->pc = 0x7F3A82C8u;
    // 7F3A82C8: stwx    r3, r6, r9
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A82CC:
    ctx->pc = 0x7F3A82CCu;
    // 7F3A82CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A82D0:
    ctx->pc = 0x7F3A82D0u;
    // 7F3A82D0: lwz     r6, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A82D4:
    ctx->pc = 0x7F3A82D4u;
    // 7F3A82D4: lwz     r6, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A82D8:
    ctx->pc = 0x7F3A82D8u;
    // 7F3A82D8: stwx    r6, r5, r9
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A82DC:
    ctx->pc = 0x7F3A82DCu;
    // 7F3A82DC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A82E0:
    ctx->pc = 0x7F3A82E0u;
    // 7F3A82E0: lwz     r5, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A82E4:
    ctx->pc = 0x7F3A82E4u;
    // 7F3A82E4: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3A82E8u;
            ctx->pc = 0x7F3AC4B0u;
            return;
    }

label_7F3A82E8:
    ctx->pc = 0x7F3A82E8u;
    ctx->downcount -= 5;
    // 7F3A82E8: lwz     r6, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A82EC:
    ctx->pc = 0x7F3A82ECu;
    // 7F3A82EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A82F0:
    ctx->pc = 0x7F3A82F0u;
    // 7F3A82F0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A82F4:
    ctx->pc = 0x7F3A82F4u;
    // 7F3A82F4: addi    r4, r28, 640
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(640);

label_7F3A82F8:
    ctx->pc = 0x7F3A82F8u;
    // 7F3A82F8: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3A82FCu;
            ctx->pc = 0x7F3AC188u;
            return;
    }

label_7F3A82FC:
    ctx->pc = 0x7F3A82FCu;
    ctx->downcount -= 2;
    // 7F3A82FC: cmpwi   r3, 0
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

label_7F3A8300:
    ctx->pc = 0x7F3A8300u;
    // 7F3A8300: bc    12, 2, 0x7F3A831C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A831C;
        }
    }

label_7F3A8304:
    ctx->pc = 0x7F3A8304u;
    ctx->downcount -= 6;
    // 7F3A8304: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8308:
    ctx->pc = 0x7F3A8308u;
    // 7F3A8308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A830C:
    ctx->pc = 0x7F3A830Cu;
    // 7F3A830C: lwz     r6, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A8310:
    ctx->pc = 0x7F3A8310u;
    // 7F3A8310: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8314:
    ctx->pc = 0x7F3A8314u;
    // 7F3A8314: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A8318:
    ctx->pc = 0x7F3A8318u;
    // 7F3A8318: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3A831Cu;
            ctx->pc = 0x7F3AC438u;
            return;
    }

label_7F3A831C:
    ctx->pc = 0x7F3A831Cu;
    ctx->downcount -= 3;
    // 7F3A831C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8320:
    ctx->pc = 0x7F3A8320u;
    // 7F3A8320: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8324:
    ctx->pc = 0x7F3A8324u;
    // 7F3A8324: bc    4, 2, 0x7F3A8378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8378;
        }
    }

label_7F3A8328:
    ctx->pc = 0x7F3A8328u;
    ctx->downcount -= 20;
    // 7F3A8328: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A832C:
    ctx->pc = 0x7F3A832Cu;
    // 7F3A832C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3A8330:
    ctx->pc = 0x7F3A8330u;
    // 7F3A8330: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A8334:
    ctx->pc = 0x7F3A8334u;
    // 7F3A8334: addi    r11, r5, 32004
    ctx->gpr[11] = ctx->gpr[5] + (u32)(s32)(32004);

label_7F3A8338:
    ctx->pc = 0x7F3A8338u;
    // 7F3A8338: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A833C:
    ctx->pc = 0x7F3A833Cu;
    // 7F3A833C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8340:
    ctx->pc = 0x7F3A8340u;
    // 7F3A8340: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8344:
    ctx->pc = 0x7F3A8344u;
    // 7F3A8344: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8348:
    ctx->pc = 0x7F3A8348u;
    // 7F3A8348: addi    r6, r28, 640
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(640);

label_7F3A834C:
    ctx->pc = 0x7F3A834Cu;
    // 7F3A834C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8350:
    ctx->pc = 0x7F3A8350u;
    // 7F3A8350: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8354:
    ctx->pc = 0x7F3A8354u;
    // 7F3A8354: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8358:
    ctx->pc = 0x7F3A8358u;
    // 7F3A8358: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A835C:
    ctx->pc = 0x7F3A835Cu;
    // 7F3A835C: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A8360:
    ctx->pc = 0x7F3A8360u;
    // 7F3A8360: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A8364:
    ctx->pc = 0x7F3A8364u;
    // 7F3A8364: lwz     r0, 15496(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15496);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8368:
    ctx->pc = 0x7F3A8368u;
    // 7F3A8368: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A836C:
    ctx->pc = 0x7F3A836Cu;
    // 7F3A836C: add   r3, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A8370:
    ctx->pc = 0x7F3A8370u;
    // 7F3A8370: lwz     r3, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8374:
    ctx->pc = 0x7F3A8374u;
    // 7F3A8374: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3A8378u;
            goto label_7F3A96A4;
    }

label_7F3A8378:
    ctx->pc = 0x7F3A8378u;
    ctx->downcount -= 32;
    // 7F3A8378: lwz     r0, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A837C:
    ctx->pc = 0x7F3A837Cu;
    // 7F3A837C: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F3A8380:
    ctx->pc = 0x7F3A8380u;
    // 7F3A8380: lwz     r4, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8384:
    ctx->pc = 0x7F3A8384u;
    // 7F3A8384: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F3A8388:
    ctx->pc = 0x7F3A8388u;
    // 7F3A8388: xoris   r8, r0, 0x8000
    ctx->gpr[8] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3A838C:
    ctx->pc = 0x7F3A838Cu;
    // 7F3A838C: lwz     r3, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8390:
    ctx->pc = 0x7F3A8390u;
    // 7F3A8390: stw     r8, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A8394:
    ctx->pc = 0x7F3A8394u;
    // 7F3A8394: xoris   r6, r4, 0x8000
    ctx->gpr[6] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F3A8398:
    ctx->pc = 0x7F3A8398u;
    // 7F3A8398: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3A839C:
    ctx->pc = 0x7F3A839Cu;
    // 7F3A839C: lwz     r0, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A83A0:
    ctx->pc = 0x7F3A83A0u;
    // 7F3A83A0: stw     r7, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A83A4:
    ctx->pc = 0x7F3A83A4u;
    // 7F3A83A4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A83A8:
    ctx->pc = 0x7F3A83A8u;
    // 7F3A83A8: lfd     f4, -21360(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83A8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-21360);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A83AC:
    ctx->pc = 0x7F3A83ACu;
    // 7F3A83AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3A83B0:
    ctx->pc = 0x7F3A83B0u;
    // 7F3A83B0: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A83B4:
    ctx->pc = 0x7F3A83B4u;
    // 7F3A83B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A83B8:
    ctx->pc = 0x7F3A83B8u;
    // 7F3A83B8: stw     r6, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A83BC:
    ctx->pc = 0x7F3A83BCu;
    // 7F3A83BC: fsubs   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A83BCu)) return;
    ppc_fsubs(ctx, 1, 0, 4);

label_7F3A83C0:
    ctx->pc = 0x7F3A83C0u;
    // 7F3A83C0: lfs     f5, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3A83C4:
    ctx->pc = 0x7F3A83C4u;
    // 7F3A83C4: stw     r7, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A83C8:
    ctx->pc = 0x7F3A83C8u;
    // 7F3A83C8: lfs     f6, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F3A83CC:
    ctx->pc = 0x7F3A83CCu;
    // 7F3A83CC: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A83D0:
    ctx->pc = 0x7F3A83D0u;
    // 7F3A83D0: stw     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A83D4:
    ctx->pc = 0x7F3A83D4u;
    // 7F3A83D4: fsubs   f2, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A83D4u)) return;
    ppc_fsubs(ctx, 2, 0, 4);

label_7F3A83D8:
    ctx->pc = 0x7F3A83D8u;
    // 7F3A83D8: stw     r7, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A83DC:
    ctx->pc = 0x7F3A83DCu;
    // 7F3A83DC: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A83E0:
    ctx->pc = 0x7F3A83E0u;
    // 7F3A83E0: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A83E4:
    ctx->pc = 0x7F3A83E4u;
    // 7F3A83E4: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A83E4u)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_7F3A83E8:
    ctx->pc = 0x7F3A83E8u;
    // 7F3A83E8: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A83EC:
    ctx->pc = 0x7F3A83ECu;
    // 7F3A83EC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A83ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A83F0:
    ctx->pc = 0x7F3A83F0u;
    // 7F3A83F0: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A83F0u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_7F3A83F4:
    ctx->pc = 0x7F3A83F4u;
    // 7F3A83F4: bl      0x8004DAA4
    {
            ctx->lr = 0x7F3A83F8u;
            ctx->pc = 0x8004DAA4u;
            return;
    }

label_7F3A83F8:
    ctx->pc = 0x7F3A83F8u;
    ctx->downcount -= 16;
    // 7F3A83F8: lmw     r27, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A83FC:
    ctx->pc = 0x7F3A83FCu;
    // 7F3A83FC: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8400:
    ctx->pc = 0x7F3A8400u;
    // 7F3A8400: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A8404:
    ctx->pc = 0x7F3A8404u;
    // 7F3A8404: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F3A8408:
    ctx->pc = 0x7F3A8408u;
    // 7F3A8408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A840C:
    ctx->pc = 0x7F3A840Cu;
    ctx->downcount -= 6;
    // 7F3A840C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A8410:
    ctx->pc = 0x7F3A8410u;
    // 7F3A8410: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A8414:
    ctx->pc = 0x7F3A8414u;
    // 7F3A8414: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8418:
    ctx->pc = 0x7F3A8418u;
    // 7F3A8418: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_7F3A841C:
    ctx->pc = 0x7F3A841Cu;
    // 7F3A841C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8420:
    ctx->pc = 0x7F3A8420u;
    // 7F3A8420: bl      0x80042220
    {
            ctx->lr = 0x7F3A8424u;
            ctx->pc = 0x80042220u;
            return;
    }

label_7F3A8424:
    ctx->pc = 0x7F3A8424u;
    ctx->downcount -= 5;
    // 7F3A8424: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8428:
    ctx->pc = 0x7F3A8428u;
    // 7F3A8428: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A842C:
    ctx->pc = 0x7F3A842Cu;
    // 7F3A842C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A8430:
    ctx->pc = 0x7F3A8430u;
    // 7F3A8430: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8434:
    ctx->pc = 0x7F3A8434u;
    ctx->downcount -= 10;
    // 7F3A8434: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3A8438:
    ctx->pc = 0x7F3A8438u;
    // 7F3A8438: subfic  r0, r3, 64
    {
        u64 res = (u64)(u32)(s32)(64) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F3A843C:
    ctx->pc = 0x7F3A843Cu;
    // 7F3A843C: addi    r7, r5, -11960
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-11960);

label_7F3A8440:
    ctx->pc = 0x7F3A8440u;
    // 7F3A8440: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A8444:
    ctx->pc = 0x7F3A8444u;
    // 7F3A8444: rlwinm r5, r3, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F3A8448:
    ctx->pc = 0x7F3A8448u;
    // 7F3A8448: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F3A844C:
    ctx->pc = 0x7F3A844Cu;
    // 7F3A844C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A8450:
    ctx->pc = 0x7F3A8450u;
    // 7F3A8450: cmplwi  r3, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8454:
    ctx->pc = 0x7F3A8454u;
    // 7F3A8454: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8458:
    ctx->downcount -= 2;
    // 7F3A8458: cmpwi   r8, 0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A845C:
    // 7F3A845C: bc    12, 2, 0x7F3A846C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A846C;
        }
    }

label_7F3A8460:
    ctx->downcount -= 3;
    // 7F3A8460: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A8464:
    // 7F3A8464: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8468:
    // 7F3A8468: b       0x7F3A8480
    {
            goto label_7F3A8480;
    }

label_7F3A846C:
    ctx->pc = 0x7F3A846Cu;
    ctx->downcount -= 2;
    // 7F3A846C: lwzx    r9, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3A8470:
    // 7F3A8470: b       0x7F3A8480
    {
            goto label_7F3A8480;
    }

label_7F3A8474:
    loop_7F3A8474(ctx);
    if (ctx->pc == 0x7F3A8488u) goto label_7F3A8488;
    return;
label_7F3A8478:
    ctx->pc = 0x7F3A8478u;
    // 7F3A8478: stw     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A847C:
    ctx->pc = 0x7F3A847Cu;
    // 7F3A847C: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3A8480:
    ctx->downcount -= 2;
    // 7F3A8480: cmplwi  r9, 0x0000
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

label_7F3A8484:
    // 7F3A8484: bc    4, 2, 0x7F3A8474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8474u;
                return;
            }
            goto label_7F3A8474;
        }
    }

label_7F3A8488:
    ctx->downcount -= 2;
    // 7F3A8488: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3A848C:
    // 7F3A848C: bc    16, 0, 0x7F3A8458
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8458u;
                return;
            }
            goto label_7F3A8458;
        }
    }

label_7F3A8490:
    ctx->pc = 0x7F3A8490u;
    ctx->downcount -= 1;
    // 7F3A8490: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8494:
    ctx->pc = 0x7F3A8494u;
    ctx->downcount -= 10;
    // 7F3A8494: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3A8498:
    ctx->pc = 0x7F3A8498u;
    // 7F3A8498: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A849C:
    ctx->pc = 0x7F3A849Cu;
    // 7F3A849C: addi    r7, r5, -11960
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-11960);

label_7F3A84A0:
    ctx->pc = 0x7F3A84A0u;
    // 7F3A84A0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A84A4:
    ctx->pc = 0x7F3A84A4u;
    // 7F3A84A4: rlwinm r5, r3, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F3A84A8:
    ctx->pc = 0x7F3A84A8u;
    // 7F3A84A8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F3A84AC:
    ctx->pc = 0x7F3A84ACu;
    // 7F3A84AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A84B0:
    ctx->pc = 0x7F3A84B0u;
    // 7F3A84B0: cmpwi   r3, 0
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

label_7F3A84B4:
    ctx->pc = 0x7F3A84B4u;
    // 7F3A84B4: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A84B8:
    ctx->downcount -= 2;
    // 7F3A84B8: cmpwi   r8, 0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A84BC:
    // 7F3A84BC: bc    12, 2, 0x7F3A84CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A84CC;
        }
    }

label_7F3A84C0:
    ctx->downcount -= 3;
    // 7F3A84C0: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A84C4:
    // 7F3A84C4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A84C8:
    // 7F3A84C8: b       0x7F3A84E0
    {
            goto label_7F3A84E0;
    }

label_7F3A84CC:
    ctx->pc = 0x7F3A84CCu;
    ctx->downcount -= 2;
    // 7F3A84CC: lwzx    r9, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3A84D0:
    // 7F3A84D0: b       0x7F3A84E0
    {
            goto label_7F3A84E0;
    }

label_7F3A84D4:
    loop_7F3A84D4(ctx);
    if (ctx->pc == 0x7F3A84E8u) goto label_7F3A84E8;
    return;
label_7F3A84D8:
    ctx->pc = 0x7F3A84D8u;
    // 7F3A84D8: stw     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A84DC:
    ctx->pc = 0x7F3A84DCu;
    // 7F3A84DC: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3A84E0:
    ctx->downcount -= 2;
    // 7F3A84E0: cmplwi  r9, 0x0000
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

label_7F3A84E4:
    // 7F3A84E4: bc    4, 2, 0x7F3A84D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A84D4u;
                return;
            }
            goto label_7F3A84D4;
        }
    }

label_7F3A84E8:
    ctx->downcount -= 2;
    // 7F3A84E8: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F3A84EC:
    // 7F3A84EC: bc    16, 0, 0x7F3A84B8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A84B8u;
                return;
            }
            goto label_7F3A84B8;
        }
    }

label_7F3A84F0:
    ctx->pc = 0x7F3A84F0u;
    ctx->downcount -= 1;
    // 7F3A84F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A84F4:
    ctx->pc = 0x7F3A84F4u;
    ctx->downcount -= 27;
    // 7F3A84F4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A84F8:
    ctx->pc = 0x7F3A84F8u;
    // 7F3A84F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A84FC:
    ctx->pc = 0x7F3A84FCu;
    // 7F3A84FC: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F3A8500:
    ctx->pc = 0x7F3A8500u;
    // 7F3A8500: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8504:
    ctx->pc = 0x7F3A8504u;
    // 7F3A8504: addi    r0, r11, 15512
    ctx->gpr[0] = ctx->gpr[11] + (u32)(s32)(15512);

label_7F3A8508:
    ctx->pc = 0x7F3A8508u;
    // 7F3A8508: stmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A850C:
    ctx->pc = 0x7F3A850Cu;
    // 7F3A850C: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8510:
    ctx->pc = 0x7F3A8510u;
    // 7F3A8510: or   r15, r4, r4
    {
        ctx->gpr[15] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A8514:
    ctx->pc = 0x7F3A8514u;
    // 7F3A8514: or   r16, r5, r5
    {
        ctx->gpr[16] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A8518:
    ctx->pc = 0x7F3A8518u;
    // 7F3A8518: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A851C:
    ctx->pc = 0x7F3A851Cu;
    // 7F3A851C: or   r14, r6, r6
    {
        ctx->gpr[14] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3A8520:
    ctx->pc = 0x7F3A8520u;
    // 7F3A8520: or   r17, r9, r9
    {
        ctx->gpr[17] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3A8524:
    ctx->pc = 0x7F3A8524u;
    // 7F3A8524: or   r18, r10, r10
    {
        ctx->gpr[18] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3A8528:
    ctx->pc = 0x7F3A8528u;
    // 7F3A8528: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A852C:
    ctx->pc = 0x7F3A852Cu;
    // 7F3A852C: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_7F3A8530:
    ctx->pc = 0x7F3A8530u;
    // 7F3A8530: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8534:
    ctx->pc = 0x7F3A8534u;
    // 7F3A8534: bl      0x7F3AD0A4
    {
            ctx->lr = 0x7F3A8538u;
            ctx->pc = 0x7F3AD0A4u;
            return;
    }

label_7F3A8538:
    ctx->pc = 0x7F3A8538u;
    ctx->downcount -= 1;
    // 7F3A8538: bl      0x7F3AD454
    {
            ctx->lr = 0x7F3A853Cu;
            ctx->pc = 0x7F3AD454u;
            return;
    }

label_7F3A853C:
    ctx->pc = 0x7F3A853Cu;
    ctx->downcount -= 1;
    // 7F3A853C: bl      0x7F3C176C
    {
            ctx->lr = 0x7F3A8540u;
            ctx->pc = 0x7F3C176Cu;
            return;
    }

label_7F3A8540:
    ctx->pc = 0x7F3A8540u;
    ctx->downcount -= 6;
    // 7F3A8540: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A8544:
    ctx->pc = 0x7F3A8544u;
    // 7F3A8544: or   r27, r19, r19
    {
        ctx->gpr[27] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A8548:
    ctx->pc = 0x7F3A8548u;
    // 7F3A8548: addi    r29, r3, -1740
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3A854C:
    ctx->pc = 0x7F3A854Cu;
    // 7F3A854C: rlwinm r31, r19, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[19], 2u) & 0xFFFFFFFCu;
    }

label_7F3A8550:
    ctx->pc = 0x7F3A8550u;
    // 7F3A8550: addi    r28, r29, 4
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(4);

label_7F3A8554:
    ctx->pc = 0x7F3A8554u;
    // 7F3A8554: b       0x7F3A8AA4
    {
            goto label_7F3A8AA4;
    }

label_7F3A8558:
    ctx->downcount -= 2;
    // 7F3A8558: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A855C:
    // 7F3A855C: bc    12, 2, 0x7F3A8570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8570;
        }
    }

label_7F3A8560:
    ctx->downcount -= 4;
    // 7F3A8560: or   r25, r15, r15
    {
        ctx->gpr[25] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F3A8564:
    // 7F3A8564: or   r24, r16, r16
    {
        ctx->gpr[24] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F3A8568:
    // 7F3A8568: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3A856C:
    // 7F3A856C: b       0x7F3A8A74
    {
            goto label_7F3A8A74;
    }

label_7F3A8570:
    ctx->downcount -= 7;
    // 7F3A8570: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A8574:
    // 7F3A8574: addi    r0, r31, 15360
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(15360);

label_7F3A8578:
    // 7F3A8578: addi    r4, r3, -11960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11960);

label_7F3A857C:
    ctx->pc = 0x7F3A857Cu;
    // 7F3A857C: lwz     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8580:
    ctx->pc = 0x7F3A8580u;
    // 7F3A8580: lwzx    r24, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3A8584:
    ctx->pc = 0x7F3A8584u;
    // 7F3A8584: lwzx    r25, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F3A8588:
    // 7F3A8588: b       0x7F3A8A74
    {
            goto label_7F3A8A74;
    }

label_7F3A858C:
    ctx->downcount -= 2;
    // 7F3A858C: cmplwi  r25, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8590:
    // 7F3A8590: bc    12, 2, 0x7F3A85C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A85C4;
        }
    }

label_7F3A8594:
    ctx->downcount -= 2;
    // 7F3A8594: cmplwi  r24, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8598:
    // 7F3A8598: bc    12, 2, 0x7F3A85BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A85BC;
        }
    }

label_7F3A859C:
    ctx->pc = 0x7F3A859Cu;
    ctx->downcount -= 4;
    // 7F3A859C: lwz     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A85A0:
    ctx->pc = 0x7F3A85A0u;
    // 7F3A85A0: lwz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A85A4:
    // 7F3A85A4: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A85A8:
    // 7F3A85A8: bc    4, 1, 0x7F3A85B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A85B4;
        }
    }

label_7F3A85AC:
    ctx->downcount -= 2;
    // 7F3A85AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A85B0:
    // 7F3A85B0: b       0x7F3A85C8
    {
            goto label_7F3A85C8;
    }

label_7F3A85B4:
    ctx->downcount -= 2;
    // 7F3A85B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A85B8:
    // 7F3A85B8: b       0x7F3A85C8
    {
            goto label_7F3A85C8;
    }

label_7F3A85BC:
    ctx->downcount -= 2;
    // 7F3A85BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A85C0:
    // 7F3A85C0: b       0x7F3A85C8
    {
            goto label_7F3A85C8;
    }

label_7F3A85C4:
    ctx->downcount -= 1;
    // 7F3A85C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A85C8:
    ctx->downcount -= 2;
    // 7F3A85C8: cmpwi   r0, 0
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

label_7F3A85CC:
    // 7F3A85CC: bc    12, 2, 0x7F3A8A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A30;
        }
    }

label_7F3A85D0:
    ctx->downcount -= 6;
    // 7F3A85D0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F3A85D4:
    ctx->pc = 0x7F3A85D4u;
    // 7F3A85D4: lwz     r23, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3A85D8:
    ctx->pc = 0x7F3A85D8u;
    // 7F3A85D8: lwz     r22, 16(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3A85DC:
    // 7F3A85DC: addi    r30, r3, -21852
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F3A85E0:
    ctx->pc = 0x7F3A85E0u;
    // 7F3A85E0: lwz     r21, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3A85E4:
    // 7F3A85E4: bl      0x7F3C02D0
    {
            ctx->lr = 0x7F3A85E8u;
            ctx->pc = 0x7F3C02D0u;
            return;
    }

label_7F3A85E8:
    ctx->pc = 0x7F3A85E8u;
    ctx->downcount -= 3;
    // 7F3A85E8: lwz     r0, 192(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A85EC:
    // 7F3A85EC: rlwinm. r0, r0, 0, 9, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00400000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A85F0:
    // 7F3A85F0: bc    12, 2, 0x7F3A8760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8760;
        }
    }

label_7F3A85F4:
    ctx->pc = 0x7F3A85F4u;
    ctx->downcount -= 3;
    // 7F3A85F4: lwz     r0, 80(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A85F8:
    // 7F3A85F8: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A85FC:
    // 7F3A85FC: bc    4, 2, 0x7F3A8760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8760;
        }
    }

label_7F3A8600:
    ctx->pc = 0x7F3A8600u;
    ctx->downcount -= 3;
    // 7F3A8600: lwz     r4, 2704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2704);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8604:
    // 7F3A8604: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8608:
    // 7F3A8608: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3A860Cu;
            goto label_7F3ABF74;
    }

label_7F3A860C:
    ctx->downcount -= 3;
    // 7F3A860C: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8610:
    // 7F3A8610: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A8614:
    // 7F3A8614: bl      0x7F3AD038
    {
            ctx->lr = 0x7F3A8618u;
            ctx->pc = 0x7F3AD038u;
            return;
    }

label_7F3A8618:
    ctx->pc = 0x7F3A8618u;
    ctx->downcount -= 5;
    // 7F3A8618: lwz     r6, 2704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A861C:
    // 7F3A861C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8620:
    // 7F3A8620: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8624:
    // 7F3A8624: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A8628:
    // 7F3A8628: bl      0x7F3AD46C
    {
            ctx->lr = 0x7F3A862Cu;
            ctx->pc = 0x7F3AD46Cu;
            return;
    }

label_7F3A862C:
    ctx->downcount -= 2;
    // 7F3A862C: or.   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[20];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8630:
    // 7F3A8630: bc    12, 2, 0x7F3A8758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8758;
        }
    }

label_7F3A8634:
    ctx->downcount -= 3;
    // 7F3A8634: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A8638:
    // 7F3A8638: addi    r3, r20, 420
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(420);

label_7F3A863C:
    // 7F3A863C: bl      0x7F3ACFF8
    {
            ctx->lr = 0x7F3A8640u;
            ctx->pc = 0x7F3ACFF8u;
            return;
    }

label_7F3A8640:
    ctx->downcount -= 2;
    // 7F3A8640: or.   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[19];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8644:
    // 7F3A8644: bc    12, 2, 0x7F3A8758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8758;
        }
    }

label_7F3A8648:
    ctx->downcount -= 5;
    // 7F3A8648: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A864C:
    ctx->pc = 0x7F3A864Cu;
    // 7F3A864C: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8650:
    ctx->pc = 0x7F3A8650u;
    // 7F3A8650: lwz     r0, 31988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8654:
    // 7F3A8654: cmpw    r4, r0
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

label_7F3A8658:
    // 7F3A8658: bc    12, 2, 0x7F3A8660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8660;
        }
    }

label_7F3A865C:
    ctx->downcount -= 1;
    // 7F3A865C: bl      0x7F3AD454
    {
            ctx->lr = 0x7F3A8660u;
            ctx->pc = 0x7F3AD454u;
            return;
    }

label_7F3A8660:
    ctx->downcount -= 4;
    // 7F3A8660: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8664:
    // 7F3A8664: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8668:
    // 7F3A8668: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A866C:
    // 7F3A866C: bl      0x7F3AD0B4
    {
            ctx->lr = 0x7F3A8670u;
            ctx->pc = 0x7F3AD0B4u;
            return;
    }

label_7F3A8670:
    ctx->downcount -= 2;
    // 7F3A8670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8674:
    // 7F3A8674: bl      0x800455BC
    {
            ctx->lr = 0x7F3A8678u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3A8678:
    ctx->downcount -= 2;
    // 7F3A8678: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A867C:
    // 7F3A867C: bl      0x800455E0
    {
            ctx->lr = 0x7F3A8680u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A8680:
    ctx->downcount -= 2;
    // 7F3A8680: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A8684:
    // 7F3A8684: bl      0x800455E0
    {
            ctx->lr = 0x7F3A8688u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A8688:
    ctx->downcount -= 2;
    // 7F3A8688: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A868C:
    // 7F3A868C: bl      0x800455E0
    {
            ctx->lr = 0x7F3A8690u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A8690:
    ctx->downcount -= 2;
    // 7F3A8690: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8694:
    // 7F3A8694: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3A8698u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3A8698:
    ctx->pc = 0x7F3A8698u;
    ctx->downcount -= 3;
    // 7F3A8698: lbz     r0, 119(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(119);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A869C:
    // 7F3A869C: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A86A0:
    // 7F3A86A0: bc    12, 2, 0x7F3A86DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A86DC;
        }
    }

label_7F3A86A4:
    ctx->downcount -= 2;
    // 7F3A86A4: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A86A8:
    // 7F3A86A8: bl      0x7F3AD9B0
    {
            ctx->lr = 0x7F3A86ACu;
            ctx->pc = 0x7F3AD9B0u;
            return;
    }

label_7F3A86AC:
    ctx->downcount -= 2;
    // 7F3A86AC: cmpwi   r3, 0
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

label_7F3A86B0:
    // 7F3A86B0: bc    12, 2, 0x7F3A86DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A86DC;
        }
    }

label_7F3A86B4:
    ctx->pc = 0x7F3A86B4u;
    ctx->downcount -= 9;
    // 7F3A86B4: lwz     r8, 3208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3208);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A86B8:
    // 7F3A86B8: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A86BC:
    // 7F3A86BC: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A86C0:
    // 7F3A86C0: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A86C4:
    // 7F3A86C4: or   r6, r17, r17
    {
        ctx->gpr[6] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A86C8:
    // 7F3A86C8: or   r9, r21, r21
    {
        ctx->gpr[9] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A86CC:
    // 7F3A86CC: or   r10, r19, r19
    {
        ctx->gpr[10] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A86D0:
    // 7F3A86D0: addi    r7, r1, 32
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A86D4:
    // 7F3A86D4: bl      0x7F3AD2A0
    {
            ctx->lr = 0x7F3A86D8u;
            ctx->pc = 0x7F3AD2A0u;
            return;
    }

label_7F3A86D8:
    ctx->downcount -= 1;
    // 7F3A86D8: b       0x7F3A8738
    {
            goto label_7F3A8738;
    }

label_7F3A86DC:
    ctx->downcount -= 4;
    // 7F3A86DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A86E0:
    // 7F3A86E0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A86E4:
    // 7F3A86E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A86E8:
    // 7F3A86E8: bl      0x800462E4
    {
            ctx->lr = 0x7F3A86ECu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A86EC:
    ctx->downcount -= 15;
    // 7F3A86EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A86F0:
    // 7F3A86F0: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A86F4:
    ctx->pc = 0x7F3A86F4u;
    // 7F3A86F4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A86F8:
    // 7F3A86F8: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A86FC:
    // 7F3A86FC: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8700:
    // 7F3A8700: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A8704:
    ctx->pc = 0x7F3A8704u;
    // 7F3A8704: lwz     r0, 3208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8708:
    // 7F3A8708: addi    r7, r1, 32
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A870C:
    // 7F3A870C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A8710:
    // 7F3A8710: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3A8714:
    ctx->pc = 0x7F3A8714u;
    // 7F3A8714: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8718:
    // 7F3A8718: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F3A871C:
    ctx->pc = 0x7F3A871Cu;
    // 7F3A871C: stw     r21, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F3A8720:
    ctx->pc = 0x7F3A8720u;
    // 7F3A8720: stw     r19, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F3A8724:
    // 7F3A8724: bl      0x7F3AC6F4
    {
            ctx->lr = 0x7F3A8728u;
            ctx->pc = 0x7F3AC6F4u;
            return;
    }

label_7F3A8728:
    ctx->downcount -= 4;
    // 7F3A8728: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A872C:
    // 7F3A872C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8730:
    // 7F3A8730: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A8734:
    // 7F3A8734: bl      0x800462E4
    {
            ctx->lr = 0x7F3A8738u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A8738:
    ctx->downcount -= 2;
    // 7F3A8738: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A873C:
    // 7F3A873C: bl      0x80046318
    {
            ctx->lr = 0x7F3A8740u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3A8740:
    ctx->downcount -= 6;
    // 7F3A8740: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A8744:
    // 7F3A8744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8748:
    // 7F3A8748: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A874C:
    // 7F3A874C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A8750:
    // 7F3A8750: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8754:
    // 7F3A8754: bl      0x80045C5C
    {
            ctx->lr = 0x7F3A8758u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3A8758:
    ctx->downcount -= 1;
    // 7F3A8758: bl      0x7F3BF8AC
    {
            ctx->lr = 0x7F3A875Cu;
            ctx->pc = 0x7F3BF8ACu;
            return;
    }

label_7F3A875C:
    ctx->downcount -= 1;
    // 7F3A875C: b       0x7F3A8A24
    {
            goto label_7F3A8A24;
    }

label_7F3A8760:
    ctx->pc = 0x7F3A8760u;
    ctx->downcount -= 3;
    // 7F3A8760: lwz     r0, 80(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8764:
    // 7F3A8764: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8768:
    // 7F3A8768: bc    12, 2, 0x7F3A8A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A24;
        }
    }

label_7F3A876C:
    ctx->downcount -= 5;
    // 7F3A876C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A8770:
    ctx->pc = 0x7F3A8770u;
    // 7F3A8770: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8774:
    ctx->pc = 0x7F3A8774u;
    // 7F3A8774: lwz     r0, 31988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8778:
    // 7F3A8778: cmpw    r4, r0
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

label_7F3A877C:
    // 7F3A877C: bc    12, 2, 0x7F3A8784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8784;
        }
    }

label_7F3A8780:
    ctx->downcount -= 1;
    // 7F3A8780: bl      0x7F3AD454
    {
            ctx->lr = 0x7F3A8784u;
            ctx->pc = 0x7F3AD454u;
            return;
    }

label_7F3A8784:
    ctx->downcount -= 3;
    // 7F3A8784: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8788:
    // 7F3A8788: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A878C:
    // 7F3A878C: bl      0x7F3AD038
    {
            ctx->lr = 0x7F3A8790u;
            ctx->pc = 0x7F3AD038u;
            return;
    }

label_7F3A8790:
    ctx->pc = 0x7F3A8790u;
    ctx->downcount -= 3;
    // 7F3A8790: lwz     r4, 2704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2704);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8794:
    // 7F3A8794: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8798:
    // 7F3A8798: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3A879Cu;
            goto label_7F3ABF74;
    }

label_7F3A879C:
    ctx->downcount -= 4;
    // 7F3A879C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A87A0:
    // 7F3A87A0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A87A4:
    // 7F3A87A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A87A8:
    // 7F3A87A8: bl      0x7F3AD0B4
    {
            ctx->lr = 0x7F3A87ACu;
            ctx->pc = 0x7F3AD0B4u;
            return;
    }

label_7F3A87AC:
    ctx->downcount -= 2;
    // 7F3A87AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A87B0:
    // 7F3A87B0: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3A87B4u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3A87B4:
    ctx->pc = 0x7F3A87B4u;
    ctx->downcount -= 3;
    // 7F3A87B4: lbz     r0, 119(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(119);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A87B8:
    // 7F3A87B8: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A87BC:
    // 7F3A87BC: bc    12, 2, 0x7F3A896C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A896C;
        }
    }

label_7F3A87C0:
    ctx->downcount -= 2;
    // 7F3A87C0: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A87C4:
    // 7F3A87C4: bl      0x7F3AD9B0
    {
            ctx->lr = 0x7F3A87C8u;
            ctx->pc = 0x7F3AD9B0u;
            return;
    }

label_7F3A87C8:
    ctx->downcount -= 2;
    // 7F3A87C8: cmpwi   r3, 0
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

label_7F3A87CC:
    // 7F3A87CC: bc    12, 2, 0x7F3A896C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A896C;
        }
    }

label_7F3A87D0:
    ctx->pc = 0x7F3A87D0u;
    ctx->downcount -= 9;
    // 7F3A87D0: lwz     r4, 920(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A87D4:
    // 7F3A87D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A87D8:
    ctx->pc = 0x7F3A87D8u;
    // 7F3A87D8: lwz     r5, 924(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A87DC:
    // 7F3A87DC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A87E0:
    ctx->pc = 0x7F3A87E0u;
    // 7F3A87E0: lwz     r6, 928(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A87E4:
    // 7F3A87E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A87E8:
    ctx->pc = 0x7F3A87E8u;
    // 7F3A87E8: lwz     r7, 932(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A87EC:
    // 7F3A87EC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A87F0:
    // 7F3A87F0: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3A87F4u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3A87F4:
    ctx->downcount -= 2;
    // 7F3A87F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A87F8:
    // 7F3A87F8: bl      0x8004628C
    {
            ctx->lr = 0x7F3A87FCu;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3A87FC:
    ctx->downcount -= 2;
    // 7F3A87FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8800:
    // 7F3A8800: bl      0x800462B8
    {
            ctx->lr = 0x7F3A8804u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3A8804:
    ctx->downcount -= 2;
    // 7F3A8804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8808:
    // 7F3A8808: bl      0x80046318
    {
            ctx->lr = 0x7F3A880Cu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3A880C:
    ctx->downcount -= 6;
    // 7F3A880C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A8810:
    // 7F3A8810: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F3A8814:
    // 7F3A8814: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8818:
    // 7F3A8818: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3A881C:
    // 7F3A881C: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3A8820:
    // 7F3A8820: bl      0x80045C5C
    {
            ctx->lr = 0x7F3A8824u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3A8824:
    ctx->downcount -= 4;
    // 7F3A8824: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A8828:
    ctx->pc = 0x7F3A8828u;
    // 7F3A8828: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A882C:
    ctx->pc = 0x7F3A882Cu;
    // 7F3A882C: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8830:
    // 7F3A8830: b       0x7F3A88A8
    {
            goto label_7F3A88A8;
    }

label_7F3A8834:
    ctx->downcount -= 4;
    // 7F3A8834: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8838:
    // 7F3A8838: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A883C:
    // 7F3A883C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A8840:
    // 7F3A8840: bl      0x800462E4
    {
            ctx->lr = 0x7F3A8844u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A8844:
    ctx->downcount -= 5;
    // 7F3A8844: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8848:
    // 7F3A8848: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A884C:
    // 7F3A884C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8850:
    // 7F3A8850: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A8854:
    // 7F3A8854: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3A8858u;
            goto label_7F3A9D3C;
    }

label_7F3A8858:
    ctx->downcount -= 2;
    // 7F3A8858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A885C:
    // 7F3A885C: bl      0x80046318
    {
            ctx->lr = 0x7F3A8860u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3A8860:
    ctx->downcount -= 6;
    // 7F3A8860: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A8864:
    // 7F3A8864: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A8868:
    // 7F3A8868: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A886C:
    // 7F3A886C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3A8870:
    // 7F3A8870: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3A8874:
    // 7F3A8874: bl      0x80045C5C
    {
            ctx->lr = 0x7F3A8878u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3A8878:
    ctx->downcount -= 9;
    // 7F3A8878: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A887C:
    // 7F3A887C: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A8880:
    // 7F3A8880: or   r7, r18, r18
    {
        ctx->gpr[7] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8884:
    // 7F3A8884: or   r8, r17, r17
    {
        ctx->gpr[8] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8888:
    // 7F3A8888: addi    r10, r1, 32
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A888C:
    // 7F3A888C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8890:
    // 7F3A8890: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A8894:
    // 7F3A8894: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A8898:
    // 7F3A8898: bl      0x7F3ACC78
    {
            ctx->lr = 0x7F3A889Cu;
            ctx->pc = 0x7F3ACC78u;
            return;
    }

label_7F3A889C:
    ctx->pc = 0x7F3A889Cu;
    ctx->downcount -= 3;
    // 7F3A889C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A88A0:
    // 7F3A88A0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A88A4:
    ctx->pc = 0x7F3A88A4u;
    // 7F3A88A4: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A88A8:
    ctx->pc = 0x7F3A88A8u;
    ctx->downcount -= 3;
    // 7F3A88A8: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A88AC:
    // 7F3A88AC: cmpwi   r0, 2
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

label_7F3A88B0:
    // 7F3A88B0: bc    12, 0, 0x7F3A8834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8834u;
                return;
            }
            goto label_7F3A8834;
        }
    }

label_7F3A88B4:
    ctx->downcount -= 4;
    // 7F3A88B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A88B8:
    // 7F3A88B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A88BC:
    ctx->pc = 0x7F3A88BCu;
    // 7F3A88BC: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A88C0:
    // 7F3A88C0: bl      0x8004628C
    {
            ctx->lr = 0x7F3A88C4u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3A88C4:
    ctx->downcount -= 4;
    // 7F3A88C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A88C8:
    // 7F3A88C8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A88CC:
    // 7F3A88CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A88D0:
    // 7F3A88D0: bl      0x800462E4
    {
            ctx->lr = 0x7F3A88D4u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A88D4:
    ctx->downcount -= 2;
    // 7F3A88D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A88D8:
    // 7F3A88D8: bl      0x80046318
    {
            ctx->lr = 0x7F3A88DCu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3A88DC:
    ctx->downcount -= 6;
    // 7F3A88DC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A88E0:
    // 7F3A88E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A88E4:
    // 7F3A88E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A88E8:
    // 7F3A88E8: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A88EC:
    // 7F3A88EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A88F0:
    // 7F3A88F0: bl      0x80045C5C
    {
            ctx->lr = 0x7F3A88F4u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3A88F4:
    ctx->downcount -= 3;
    // 7F3A88F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A88F8:
    ctx->pc = 0x7F3A88F8u;
    // 7F3A88F8: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A88FC:
    // 7F3A88FC: b       0x7F3A8944
    {
            goto label_7F3A8944;
    }

label_7F3A8900:
    ctx->downcount -= 5;
    // 7F3A8900: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8904:
    // 7F3A8904: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8908:
    // 7F3A8908: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A890C:
    // 7F3A890C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A8910:
    // 7F3A8910: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3A8914u;
            goto label_7F3A9D3C;
    }

label_7F3A8914:
    ctx->downcount -= 9;
    // 7F3A8914: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8918:
    // 7F3A8918: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A891C:
    // 7F3A891C: or   r7, r18, r18
    {
        ctx->gpr[7] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8920:
    // 7F3A8920: or   r8, r17, r17
    {
        ctx->gpr[8] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8924:
    // 7F3A8924: addi    r10, r1, 32
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A8928:
    // 7F3A8928: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A892C:
    // 7F3A892C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A8930:
    // 7F3A8930: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A8934:
    // 7F3A8934: bl      0x7F3ACC78
    {
            ctx->lr = 0x7F3A8938u;
            ctx->pc = 0x7F3ACC78u;
            return;
    }

label_7F3A8938:
    ctx->pc = 0x7F3A8938u;
    ctx->downcount -= 3;
    // 7F3A8938: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A893C:
    // 7F3A893C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A8940:
    ctx->pc = 0x7F3A8940u;
    // 7F3A8940: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8944:
    ctx->pc = 0x7F3A8944u;
    ctx->downcount -= 3;
    // 7F3A8944: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8948:
    // 7F3A8948: cmpwi   r0, 2
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

label_7F3A894C:
    // 7F3A894C: bc    12, 0, 0x7F3A8900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8900u;
                return;
            }
            goto label_7F3A8900;
        }
    }

label_7F3A8950:
    ctx->downcount -= 4;
    // 7F3A8950: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8954:
    // 7F3A8954: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8958:
    // 7F3A8958: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A895C:
    // 7F3A895C: bl      0x800462E4
    {
            ctx->lr = 0x7F3A8960u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A8960:
    ctx->downcount -= 2;
    // 7F3A8960: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8964:
    // 7F3A8964: bl      0x8004628C
    {
            ctx->lr = 0x7F3A8968u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3A8968:
    ctx->downcount -= 1;
    // 7F3A8968: b       0x7F3A8A00
    {
            goto label_7F3A8A00;
    }

label_7F3A896C:
    ctx->downcount -= 2;
    // 7F3A896C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A8970:
    // 7F3A8970: bl      0x7F3AD9B0
    {
            ctx->lr = 0x7F3A8974u;
            ctx->pc = 0x7F3AD9B0u;
            return;
    }

label_7F3A8974:
    ctx->downcount -= 2;
    // 7F3A8974: cmpwi   r3, 0
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

label_7F3A8978:
    // 7F3A8978: bc    12, 2, 0x7F3A8A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A00;
        }
    }

label_7F3A897C:
    ctx->downcount -= 4;
    // 7F3A897C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8980:
    // 7F3A8980: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8984:
    // 7F3A8984: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A8988:
    // 7F3A8988: bl      0x800462E4
    {
            ctx->lr = 0x7F3A898Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A898C:
    ctx->downcount -= 3;
    // 7F3A898C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A8990:
    ctx->pc = 0x7F3A8990u;
    // 7F3A8990: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8994:
    // 7F3A8994: b       0x7F3A89DC
    {
            goto label_7F3A89DC;
    }

label_7F3A8998:
    ctx->downcount -= 5;
    // 7F3A8998: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A899C:
    // 7F3A899C: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A89A0:
    // 7F3A89A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A89A4:
    // 7F3A89A4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A89A8:
    // 7F3A89A8: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3A89ACu;
            goto label_7F3A9D3C;
    }

label_7F3A89AC:
    ctx->downcount -= 9;
    // 7F3A89AC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3A89B0:
    // 7F3A89B0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A89B4:
    // 7F3A89B4: or   r7, r18, r18
    {
        ctx->gpr[7] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A89B8:
    // 7F3A89B8: or   r8, r17, r17
    {
        ctx->gpr[8] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A89BC:
    // 7F3A89BC: addi    r10, r1, 32
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A89C0:
    // 7F3A89C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A89C4:
    // 7F3A89C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A89C8:
    // 7F3A89C8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A89CC:
    // 7F3A89CC: bl      0x7F3ACC78
    {
            ctx->lr = 0x7F3A89D0u;
            ctx->pc = 0x7F3ACC78u;
            return;
    }

label_7F3A89D0:
    ctx->pc = 0x7F3A89D0u;
    ctx->downcount -= 3;
    // 7F3A89D0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A89D4:
    // 7F3A89D4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A89D8:
    ctx->pc = 0x7F3A89D8u;
    // 7F3A89D8: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A89DC:
    ctx->pc = 0x7F3A89DCu;
    ctx->downcount -= 3;
    // 7F3A89DC: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A89E0:
    // 7F3A89E0: cmpwi   r0, 2
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

label_7F3A89E4:
    // 7F3A89E4: bc    12, 0, 0x7F3A8998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8998u;
                return;
            }
            goto label_7F3A8998;
        }
    }

label_7F3A89E8:
    ctx->downcount -= 4;
    // 7F3A89E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A89EC:
    // 7F3A89EC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A89F0:
    // 7F3A89F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A89F4:
    // 7F3A89F4: bl      0x800462E4
    {
            ctx->lr = 0x7F3A89F8u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A89F8:
    ctx->downcount -= 2;
    // 7F3A89F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A89FC:
    // 7F3A89FC: bl      0x8004628C
    {
            ctx->lr = 0x7F3A8A00u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3A8A00:
    ctx->downcount -= 2;
    // 7F3A8A00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8A04:
    // 7F3A8A04: bl      0x80046318
    {
            ctx->lr = 0x7F3A8A08u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3A8A08:
    ctx->downcount -= 6;
    // 7F3A8A08: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A8A0C:
    // 7F3A8A0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8A10:
    // 7F3A8A10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8A14:
    // 7F3A8A14: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A8A18:
    // 7F3A8A18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8A1C:
    // 7F3A8A1C: bl      0x80045C5C
    {
            ctx->lr = 0x7F3A8A20u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3A8A20:
    ctx->downcount -= 1;
    // 7F3A8A20: bl      0x7F3BF8AC
    {
            ctx->lr = 0x7F3A8A24u;
            ctx->pc = 0x7F3BF8ACu;
            return;
    }

label_7F3A8A24:
    ctx->downcount -= 1;
    // 7F3A8A24: bl      0x7F3C0278
    {
            ctx->lr = 0x7F3A8A28u;
            ctx->pc = 0x7F3C0278u;
            return;
    }

label_7F3A8A28:
    ctx->pc = 0x7F3A8A28u;
    ctx->downcount -= 2;
    // 7F3A8A28: lwz     r25, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F3A8A2C:
    // 7F3A8A2C: b       0x7F3A8A74
    {
            goto label_7F3A8A74;
    }

label_7F3A8A30:
    ctx->pc = 0x7F3A8A30u;
    ctx->downcount -= 2;
    // 7F3A8A30: lwz     r19, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F3A8A34:
    // 7F3A8A34: bl      0x7F3AD454
    {
            ctx->lr = 0x7F3A8A38u;
            ctx->pc = 0x7F3AD454u;
            return;
    }

label_7F3A8A38:
    ctx->pc = 0x7F3A8A38u;
    ctx->downcount -= 3;
    // 7F3A8A38: lwz     r0, 164(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8A3C:
    // 7F3A8A3C: rlwinm. r0, r0, 0, 24, 24
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

label_7F3A8A40:
    // 7F3A8A40: bc    12, 2, 0x7F3A8A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A5C;
        }
    }

label_7F3A8A44:
    ctx->downcount -= 4;
    // 7F3A8A44: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3A8A48:
    // 7F3A8A48: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A8A4C:
    // 7F3A8A4C: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8A50:
    // 7F3A8A50: bl      0x7F3A7F10
    {
            ctx->lr = 0x7F3A8A54u;
            ctx->pc = 0x7F3A7F10u;
            return;
    }

label_7F3A8A54:
    ctx->downcount -= 1;
    // 7F3A8A54: bl      0x7F3BF8AC
    {
            ctx->lr = 0x7F3A8A58u;
            ctx->pc = 0x7F3BF8ACu;
            return;
    }

label_7F3A8A58:
    ctx->downcount -= 1;
    // 7F3A8A58: b       0x7F3A8A70
    {
            goto label_7F3A8A70;
    }

label_7F3A8A5C:
    ctx->pc = 0x7F3A8A5Cu;
    ctx->downcount -= 5;
    // 7F3A8A5C: lwz     r6, 940(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A8A60:
    // 7F3A8A60: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3A8A64:
    // 7F3A8A64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8A68:
    // 7F3A8A68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8A6C:
    // 7F3A8A6C: bl      0x7F3C0324
    {
            ctx->lr = 0x7F3A8A70u;
            ctx->pc = 0x7F3C0324u;
            return;
    }

label_7F3A8A70:
    ctx->pc = 0x7F3A8A70u;
    ctx->downcount -= 1;
    // 7F3A8A70: lwz     r24, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3A8A74:
    ctx->downcount -= 2;
    // 7F3A8A74: cmplwi  r25, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8A78:
    // 7F3A8A78: bc    4, 2, 0x7F3A8A84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A84;
        }
    }

label_7F3A8A7C:
    ctx->downcount -= 2;
    // 7F3A8A7C: cmplwi  r24, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8A80:
    // 7F3A8A80: bc    12, 2, 0x7F3A8A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8A9C;
        }
    }

label_7F3A8A84:
    ctx->pc = 0x7F3A8A84u;
    ctx->downcount -= 3;
    // 7F3A8A84: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8A88:
    // 7F3A8A88: cmplw   r25, r0
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8A8C:
    // 7F3A8A8C: bc    4, 2, 0x7F3A858C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A858Cu;
                return;
            }
            goto label_7F3A858C;
        }
    }

label_7F3A8A90:
    ctx->pc = 0x7F3A8A90u;
    ctx->downcount -= 3;
    // 7F3A8A90: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8A94:
    // 7F3A8A94: cmplw   r24, r0
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8A98:
    // 7F3A8A98: bc    4, 2, 0x7F3A858C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A858Cu;
                return;
            }
            goto label_7F3A858C;
        }
    }

label_7F3A8A9C:
    ctx->downcount -= 2;
    // 7F3A8A9C: addi    r27, r27, -1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-1);

label_7F3A8AA0:
    // 7F3A8AA0: addi    r31, r31, -4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F3A8AA4:
    ctx->downcount -= 2;
    // 7F3A8AA4: cmpw    r27, r14
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[14]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8AA8:
    // 7F3A8AA8: bc    4, 0, 0x7F3A8558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8558u;
                return;
            }
            goto label_7F3A8558;
        }
    }

label_7F3A8AAC:
    ctx->pc = 0x7F3A8AACu;
    ctx->downcount -= 16;
    // 7F3A8AAC: lmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A8AB0:
    ctx->pc = 0x7F3A8AB0u;
    // 7F3A8AB0: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8AB4:
    ctx->pc = 0x7F3A8AB4u;
    // 7F3A8AB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A8AB8:
    ctx->pc = 0x7F3A8AB8u;
    // 7F3A8AB8: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F3A8ABC:
    ctx->pc = 0x7F3A8ABCu;
    // 7F3A8ABC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8AC0:
    ctx->pc = 0x7F3A8AC0u;
    ctx->downcount -= 19;
    // 7F3A8AC0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A8AC4:
    ctx->pc = 0x7F3A8AC4u;
    // 7F3A8AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A8AC8:
    ctx->pc = 0x7F3A8AC8u;
    // 7F3A8AC8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8ACC:
    ctx->pc = 0x7F3A8ACCu;
    // 7F3A8ACC: stmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A8AD0:
    ctx->pc = 0x7F3A8AD0u;
    // 7F3A8AD0: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8AD4:
    ctx->pc = 0x7F3A8AD4u;
    // 7F3A8AD4: or   r19, r4, r4
    {
        ctx->gpr[19] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A8AD8:
    ctx->pc = 0x7F3A8AD8u;
    // 7F3A8AD8: li      r24, -2
    ctx->gpr[24] = (u32)(s32)(-2);

label_7F3A8ADC:
    ctx->pc = 0x7F3A8ADCu;
    // 7F3A8ADC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3A8AE0:
    ctx->pc = 0x7F3A8AE0u;
    // 7F3A8AE0: bl      0x7F3C0278
    {
            ctx->lr = 0x7F3A8AE4u;
            ctx->pc = 0x7F3C0278u;
            return;
    }

label_7F3A8AE4:
    ctx->pc = 0x7F3A8AE4u;
    ctx->downcount -= 4;
    // 7F3A8AE4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A8AE8:
    ctx->pc = 0x7F3A8AE8u;
    // 7F3A8AE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8AEC:
    ctx->pc = 0x7F3A8AECu;
    // 7F3A8AEC: addi    r30, r4, 15512
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(15512);

label_7F3A8AF0:
    ctx->pc = 0x7F3A8AF0u;
    // 7F3A8AF0: bl      0x80044084
    {
            ctx->lr = 0x7F3A8AF4u;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F3A8AF4:
    ctx->pc = 0x7F3A8AF4u;
    ctx->downcount -= 8;
    // 7F3A8AF4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A8AF8:
    ctx->pc = 0x7F3A8AF8u;
    // 7F3A8AF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8AFC:
    ctx->pc = 0x7F3A8AFCu;
    // 7F3A8AFC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A8B00:
    ctx->pc = 0x7F3A8B00u;
    // 7F3A8B00: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A8B04:
    ctx->pc = 0x7F3A8B04u;
    // 7F3A8B04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8B08:
    ctx->pc = 0x7F3A8B08u;
    // 7F3A8B08: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8B0C:
    ctx->pc = 0x7F3A8B0Cu;
    // 7F3A8B0C: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F3A8B10:
    ctx->pc = 0x7F3A8B10u;
    // 7F3A8B10: bl      0x800440C0
    {
            ctx->lr = 0x7F3A8B14u;
            ctx->pc = 0x800440C0u;
            return;
    }

label_7F3A8B14:
    ctx->pc = 0x7F3A8B14u;
    ctx->downcount -= 2;
    // 7F3A8B14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8B18:
    ctx->pc = 0x7F3A8B18u;
    // 7F3A8B18: bl      0x800424A0
    {
            ctx->lr = 0x7F3A8B1Cu;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3A8B1C:
    ctx->pc = 0x7F3A8B1Cu;
    ctx->downcount -= 2;
    // 7F3A8B1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8B20:
    ctx->pc = 0x7F3A8B20u;
    // 7F3A8B20: bl      0x800455BC
    {
            ctx->lr = 0x7F3A8B24u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3A8B24:
    ctx->pc = 0x7F3A8B24u;
    ctx->downcount -= 4;
    // 7F3A8B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8B28:
    ctx->pc = 0x7F3A8B28u;
    // 7F3A8B28: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A8B2C:
    ctx->pc = 0x7F3A8B2Cu;
    // 7F3A8B2C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A8B30:
    ctx->pc = 0x7F3A8B30u;
    // 7F3A8B30: bl      0x80042FE4
    {
            ctx->lr = 0x7F3A8B34u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_7F3A8B34:
    ctx->pc = 0x7F3A8B34u;
    ctx->downcount -= 1;
    // 7F3A8B34: bl      0x7F3BF8AC
    {
            ctx->lr = 0x7F3A8B38u;
            ctx->pc = 0x7F3BF8ACu;
            return;
    }

label_7F3A8B38:
    ctx->pc = 0x7F3A8B38u;
    ctx->downcount -= 1;
    // 7F3A8B38: bl      0x7F3C1750
    {
            ctx->lr = 0x7F3A8B3Cu;
            ctx->pc = 0x7F3C1750u;
            return;
    }

label_7F3A8B3C:
    ctx->pc = 0x7F3A8B3Cu;
    ctx->downcount -= 5;
    // 7F3A8B3C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A8B40:
    ctx->pc = 0x7F3A8B40u;
    // 7F3A8B40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8B44:
    ctx->pc = 0x7F3A8B44u;
    // 7F3A8B44: addi    r4, r4, -11960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11960);

label_7F3A8B48:
    ctx->pc = 0x7F3A8B48u;
    // 7F3A8B48: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A8B4C:
    ctx->pc = 0x7F3A8B4Cu;
    // 7F3A8B4C: bl      0x7F3A8434
    {
            ctx->lr = 0x7F3A8B50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8434u;
                return;
            }
            goto label_7F3A8434;
    }

label_7F3A8B50:
    ctx->pc = 0x7F3A8B50u;
    ctx->downcount -= 1;
    // 7F3A8B50: bl      0x7F3AD0A4
    {
            ctx->lr = 0x7F3A8B54u;
            ctx->pc = 0x7F3AD0A4u;
            return;
    }

label_7F3A8B54:
    ctx->pc = 0x7F3A8B54u;
    ctx->downcount -= 1;
    // 7F3A8B54: bl      0x80042210
    {
            ctx->lr = 0x7F3A8B58u;
            ctx->pc = 0x80042210u;
            return;
    }

label_7F3A8B58:
    ctx->pc = 0x7F3A8B58u;
    ctx->downcount -= 1;
    // 7F3A8B58: bl      0x8004ABB0
    {
            ctx->lr = 0x7F3A8B5Cu;
            ctx->pc = 0x8004ABB0u;
            return;
    }

label_7F3A8B5C:
    ctx->pc = 0x7F3A8B5Cu;
    ctx->downcount -= 7;
    // 7F3A8B5C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A8B60:
    ctx->pc = 0x7F3A8B60u;
    // 7F3A8B60: lwz     r21, 15612(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15612);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3A8B64:
    ctx->pc = 0x7F3A8B64u;
    // 7F3A8B64: addi    r31, r3, -11960
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-11960);

label_7F3A8B68:
    ctx->pc = 0x7F3A8B68u;
    // 7F3A8B68: li      r23, 63
    ctx->gpr[23] = (u32)(s32)(63);

label_7F3A8B6C:
    ctx->pc = 0x7F3A8B6Cu;
    // 7F3A8B6C: lwz     r20, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F3A8B70:
    ctx->pc = 0x7F3A8B70u;
    // 7F3A8B70: li      r29, 63
    ctx->gpr[29] = (u32)(s32)(63);

label_7F3A8B74:
    ctx->pc = 0x7F3A8B74u;
    // 7F3A8B74: li      r17, 252
    ctx->gpr[17] = (u32)(s32)(252);

label_7F3A8B78:
    ctx->downcount -= 4;
    // 7F3A8B78: addi    r0, r17, 15360
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(15360);

label_7F3A8B7C:
    ctx->pc = 0x7F3A8B7Cu;
    // 7F3A8B7C: lwzx    r27, r31, r17
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[17];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F3A8B80:
    ctx->pc = 0x7F3A8B80u;
    // 7F3A8B80: lwzx    r28, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3A8B84:
    // 7F3A8B84: b       0x7F3A8C48
    {
            goto label_7F3A8C48;
    }

label_7F3A8B88:
    ctx->downcount -= 5;
    // 7F3A8B88: cmplwi  r28, 0x0000
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

label_7F3A8B8C:
    // 7F3A8B8C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A8B90:
    // 7F3A8B90: or   r26, r28, r28
    {
        ctx->gpr[26] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A8B94:
    // 7F3A8B94: or   r25, r27, r27
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A8B98:
    // 7F3A8B98: bc    12, 2, 0x7F3A8BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8BCC;
        }
    }

label_7F3A8B9C:
    ctx->downcount -= 2;
    // 7F3A8B9C: cmplwi  r27, 0x0000
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

label_7F3A8BA0:
    // 7F3A8BA0: bc    12, 2, 0x7F3A8BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8BC4;
        }
    }

label_7F3A8BA4:
    ctx->pc = 0x7F3A8BA4u;
    ctx->downcount -= 4;
    // 7F3A8BA4: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8BA8:
    ctx->pc = 0x7F3A8BA8u;
    // 7F3A8BA8: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8BAC:
    // 7F3A8BAC: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8BB0:
    // 7F3A8BB0: bc    4, 1, 0x7F3A8BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8BBC;
        }
    }

label_7F3A8BB4:
    ctx->downcount -= 2;
    // 7F3A8BB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A8BB8:
    // 7F3A8BB8: b       0x7F3A8BD0
    {
            goto label_7F3A8BD0;
    }

label_7F3A8BBC:
    ctx->downcount -= 2;
    // 7F3A8BBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A8BC0:
    // 7F3A8BC0: b       0x7F3A8BD0
    {
            goto label_7F3A8BD0;
    }

label_7F3A8BC4:
    ctx->downcount -= 2;
    // 7F3A8BC4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A8BC8:
    // 7F3A8BC8: b       0x7F3A8BD0
    {
            goto label_7F3A8BD0;
    }

label_7F3A8BCC:
    ctx->downcount -= 1;
    // 7F3A8BCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A8BD0:
    ctx->downcount -= 2;
    // 7F3A8BD0: cmpwi   r0, 0
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

label_7F3A8BD4:
    // 7F3A8BD4: bc    12, 2, 0x7F3A8BE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8BE4;
        }
    }

label_7F3A8BD8:
    ctx->pc = 0x7F3A8BD8u;
    ctx->downcount -= 3;
    // 7F3A8BD8: lwz     r28, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3A8BDC:
    // 7F3A8BDC: li      r22, 1
    ctx->gpr[22] = (u32)(s32)(1);

label_7F3A8BE0:
    // 7F3A8BE0: b       0x7F3A8BF8
    {
            goto label_7F3A8BF8;
    }

label_7F3A8BE4:
    ctx->downcount -= 2;
    // 7F3A8BE4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A8BE8:
    // 7F3A8BE8: bl      0x7F3C17E8
    {
            ctx->lr = 0x7F3A8BECu;
            ctx->pc = 0x7F3C17E8u;
            return;
    }

label_7F3A8BEC:
    ctx->downcount -= 2;
    // 7F3A8BEC: or.   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8BF0:
    // 7F3A8BF0: bc    12, 0, 0x7F3A8BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8BF8;
        }
    }

label_7F3A8BF4:
    ctx->pc = 0x7F3A8BF4u;
    ctx->downcount -= 1;
    // 7F3A8BF4: lwz     r27, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F3A8BF8:
    ctx->downcount -= 2;
    // 7F3A8BF8: cmpwi   r24, -1
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8BFC:
    // 7F3A8BFC: bc    4, 2, 0x7F3A8C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8C48;
        }
    }

label_7F3A8C00:
    ctx->downcount -= 9;
    // 7F3A8C00: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A8C04:
    // 7F3A8C04: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A8C08:
    // 7F3A8C08: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A8C0C:
    // 7F3A8C0C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8C10:
    // 7F3A8C10: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3A8C14:
    // 7F3A8C14: or   r8, r25, r25
    {
        ctx->gpr[8] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3A8C18:
    // 7F3A8C18: or   r9, r18, r18
    {
        ctx->gpr[9] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8C1C:
    // 7F3A8C1C: or   r10, r19, r19
    {
        ctx->gpr[10] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A8C20:
    // 7F3A8C20: bl      0x7F3A84F4
    {
            ctx->lr = 0x7F3A8C24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A84F4u;
                return;
            }
            goto label_7F3A84F4;
    }

label_7F3A8C24:
    ctx->downcount -= 6;
    // 7F3A8C24: or   r21, r26, r26
    {
        ctx->gpr[21] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3A8C28:
    // 7F3A8C28: or   r20, r25, r25
    {
        ctx->gpr[20] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3A8C2C:
    // 7F3A8C2C: or   r23, r29, r29
    {
        ctx->gpr[23] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8C30:
    // 7F3A8C30: li      r24, -2
    ctx->gpr[24] = (u32)(s32)(-2);

label_7F3A8C34:
    // 7F3A8C34: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3A8C38:
    // 7F3A8C38: bl      0x7F3C1750
    {
            ctx->lr = 0x7F3A8C3Cu;
            ctx->pc = 0x7F3C1750u;
            return;
    }

label_7F3A8C3C:
    ctx->downcount -= 3;
    // 7F3A8C3C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8C40:
    // 7F3A8C40: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3A8C44:
    // 7F3A8C44: bl      0x7F3A8494
    {
            ctx->lr = 0x7F3A8C48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8494u;
                return;
            }
            goto label_7F3A8494;
    }

label_7F3A8C48:
    ctx->downcount -= 2;
    // 7F3A8C48: cmplwi  r28, 0x0000
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

label_7F3A8C4C:
    // 7F3A8C4C: bc    4, 2, 0x7F3A8B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8B88u;
                return;
            }
            goto label_7F3A8B88;
        }
    }

label_7F3A8C50:
    ctx->downcount -= 2;
    // 7F3A8C50: cmplwi  r27, 0x0000
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

label_7F3A8C54:
    // 7F3A8C54: bc    4, 2, 0x7F3A8B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8B88u;
                return;
            }
            goto label_7F3A8B88;
        }
    }

label_7F3A8C58:
    ctx->downcount -= 3;
    // 7F3A8C58: addic.  r29, r29, -1
    {
        u64 a = ctx->gpr[29];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8C5C:
    // 7F3A8C5C: addi    r17, r17, -4
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(-4);

label_7F3A8C60:
    // 7F3A8C60: bc    4, 0, 0x7F3A8B78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8B78u;
                return;
            }
            goto label_7F3A8B78;
        }
    }

label_7F3A8C64:
    ctx->pc = 0x7F3A8C64u;
    ctx->downcount -= 2;
    // 7F3A8C64: cmpwi   r24, -2
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8C68:
    ctx->pc = 0x7F3A8C68u;
    // 7F3A8C68: bc    4, 2, 0x7F3A8C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8C74;
        }
    }

label_7F3A8C6C:
    ctx->pc = 0x7F3A8C6Cu;
    ctx->downcount -= 2;
    // 7F3A8C6C: cmpwi   r22, 1
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8C70:
    ctx->pc = 0x7F3A8C70u;
    // 7F3A8C70: bc    4, 2, 0x7F3A8C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8C98;
        }
    }

label_7F3A8C74:
    ctx->pc = 0x7F3A8C74u;
    ctx->downcount -= 9;
    // 7F3A8C74: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A8C78:
    ctx->pc = 0x7F3A8C78u;
    // 7F3A8C78: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A8C7C:
    ctx->pc = 0x7F3A8C7Cu;
    // 7F3A8C7C: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A8C80:
    ctx->pc = 0x7F3A8C80u;
    // 7F3A8C80: or   r9, r18, r18
    {
        ctx->gpr[9] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A8C84:
    ctx->pc = 0x7F3A8C84u;
    // 7F3A8C84: or   r10, r19, r19
    {
        ctx->gpr[10] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A8C88:
    ctx->pc = 0x7F3A8C88u;
    // 7F3A8C88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A8C8C:
    ctx->pc = 0x7F3A8C8Cu;
    // 7F3A8C8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8C90:
    ctx->pc = 0x7F3A8C90u;
    // 7F3A8C90: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A8C94:
    ctx->pc = 0x7F3A8C94u;
    // 7F3A8C94: bl      0x7F3A84F4
    {
            ctx->lr = 0x7F3A8C98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A84F4u;
                return;
            }
            goto label_7F3A84F4;
    }

label_7F3A8C98:
    ctx->pc = 0x7F3A8C98u;
    ctx->downcount -= 5;
    // 7F3A8C98: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A8C9C:
    ctx->pc = 0x7F3A8C9Cu;
    // 7F3A8C9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8CA0:
    ctx->pc = 0x7F3A8CA0u;
    // 7F3A8CA0: addi    r3, r3, -11960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11960);

label_7F3A8CA4:
    ctx->pc = 0x7F3A8CA4u;
    // 7F3A8CA4: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F3A8CA8:
    ctx->pc = 0x7F3A8CA8u;
    // 7F3A8CA8: bl      0x800050B4
    {
            ctx->lr = 0x7F3A8CACu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3A8CAC:
    ctx->pc = 0x7F3A8CACu;
    ctx->downcount -= 1;
    // 7F3A8CAC: bl      0x7F3C02D0
    {
            ctx->lr = 0x7F3A8CB0u;
            ctx->pc = 0x7F3C02D0u;
            return;
    }

label_7F3A8CB0:
    ctx->pc = 0x7F3A8CB0u;
    ctx->downcount -= 2;
    // 7F3A8CB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8CB4:
    ctx->pc = 0x7F3A8CB4u;
    // 7F3A8CB4: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3A8CB8u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3A8CB8:
    ctx->pc = 0x7F3A8CB8u;
    ctx->downcount -= 1;
    // 7F3A8CB8: bl      0x7F3C29E8
    {
            ctx->lr = 0x7F3A8CBCu;
            ctx->pc = 0x7F3C29E8u;
            return;
    }

label_7F3A8CBC:
    ctx->pc = 0x7F3A8CBCu;
    ctx->downcount -= 1;
    // 7F3A8CBC: bl      0x8004ABF0
    {
            ctx->lr = 0x7F3A8CC0u;
            ctx->pc = 0x8004ABF0u;
            return;
    }

label_7F3A8CC0:
    ctx->pc = 0x7F3A8CC0u;
    ctx->downcount -= 16;
    // 7F3A8CC0: lmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A8CC4:
    ctx->pc = 0x7F3A8CC4u;
    // 7F3A8CC4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8CC8:
    ctx->pc = 0x7F3A8CC8u;
    // 7F3A8CC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A8CCC:
    ctx->pc = 0x7F3A8CCCu;
    // 7F3A8CCC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F3A8CD0:
    ctx->pc = 0x7F3A8CD0u;
    // 7F3A8CD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8CD4:
    ctx->pc = 0x7F3A8CD4u;
    ctx->downcount -= 21;
    // 7F3A8CD4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A8CD8:
    ctx->pc = 0x7F3A8CD8u;
    // 7F3A8CD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A8CDC:
    ctx->pc = 0x7F3A8CDCu;
    // 7F3A8CDC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8CE0:
    ctx->pc = 0x7F3A8CE0u;
    // 7F3A8CE0: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A8CE4:
    ctx->pc = 0x7F3A8CE4u;
    // 7F3A8CE4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8CE8:
    ctx->pc = 0x7F3A8CE8u;
    // 7F3A8CE8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F3A8CEC:
    ctx->pc = 0x7F3A8CECu;
    // 7F3A8CEC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A8CF0:
    ctx->pc = 0x7F3A8CF0u;
    // 7F3A8CF0: addi    r31, r3, -21852
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F3A8CF4:
    ctx->pc = 0x7F3A8CF4u;
    // 7F3A8CF4: lwz     r29, 908(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(908);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3A8CF8:
    ctx->pc = 0x7F3A8CF8u;
    // 7F3A8CF8: cmplwi  r29, 0x0000
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

label_7F3A8CFC:
    ctx->pc = 0x7F3A8CFCu;
    // 7F3A8CFC: bc    12, 2, 0x7F3A8E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E78;
        }
    }

label_7F3A8D00:
    ctx->pc = 0x7F3A8D00u;
    ctx->downcount -= 8;
    // 7F3A8D00: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A8D04:
    ctx->pc = 0x7F3A8D04u;
    // 7F3A8D04: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A8D08:
    ctx->pc = 0x7F3A8D08u;
    // 7F3A8D08: addi    r5, r4, -12064
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-12064);

label_7F3A8D0C:
    ctx->pc = 0x7F3A8D0Cu;
    // 7F3A8D0C: li      r4, 768
    ctx->gpr[4] = (u32)(s32)(768);

label_7F3A8D10:
    ctx->pc = 0x7F3A8D10u;
    // 7F3A8D10: addi    r30, r3, 15512
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(15512);

label_7F3A8D14:
    ctx->pc = 0x7F3A8D14u;
    // 7F3A8D14: lwz     r28, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3A8D18:
    ctx->pc = 0x7F3A8D18u;
    // 7F3A8D18: addi    r3, r30, 15360
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(15360);

label_7F3A8D1C:
    ctx->pc = 0x7F3A8D1Cu;
    // 7F3A8D1C: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3A8D20u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3A8D20:
    ctx->pc = 0x7F3A8D20u;
    ctx->downcount -= 18;
    // 7F3A8D20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A8D24:
    ctx->pc = 0x7F3A8D24u;
    // 7F3A8D24: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A8D28:
    ctx->pc = 0x7F3A8D28u;
    // 7F3A8D28: stw     r7, 3200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3200);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A8D2C:
    ctx->pc = 0x7F3A8D2Cu;
    // 7F3A8D2C: addi    r5, r3, 13464
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13464);

label_7F3A8D30:
    ctx->pc = 0x7F3A8D30u;
    // 7F3A8D30: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3A8D34:
    ctx->pc = 0x7F3A8D34u;
    // 7F3A8D34: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F3A8D38:
    ctx->pc = 0x7F3A8D38u;
    // 7F3A8D38: stw     r30, 3204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3204);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3A8D3C:
    ctx->pc = 0x7F3A8D3Cu;
    // 7F3A8D3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8D40:
    ctx->pc = 0x7F3A8D40u;
    // 7F3A8D40: lfs     f1, 13460(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8D40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A8D44:
    ctx->pc = 0x7F3A8D44u;
    // 7F3A8D44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A8D48:
    ctx->pc = 0x7F3A8D48u;
    // 7F3A8D48: lwz     r0, 940(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8D4C:
    ctx->pc = 0x7F3A8D4Cu;
    // 7F3A8D4C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8D4Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A8D50:
    ctx->pc = 0x7F3A8D50u;
    // 7F3A8D50: slw   r0, r6, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_7F3A8D54:
    ctx->pc = 0x7F3A8D54u;
    // 7F3A8D54: stw     r7, 3212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3212);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A8D58:
    ctx->pc = 0x7F3A8D58u;
    // 7F3A8D58: stw     r0, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8D5C:
    ctx->pc = 0x7F3A8D5Cu;
    // 7F3A8D5C: stfs     f1, 2904(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8D5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2904);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A8D60:
    ctx->pc = 0x7F3A8D60u;
    // 7F3A8D60: stfs     f0, 2908(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A8D60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2908);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A8D64:
    ctx->pc = 0x7F3A8D64u;
    // 7F3A8D64: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3A8D68u;
            goto label_7F3A911C;
    }

label_7F3A8D68:
    ctx->pc = 0x7F3A8D68u;
    ctx->downcount -= 5;
    // 7F3A8D68: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A8D6C:
    ctx->pc = 0x7F3A8D6Cu;
    // 7F3A8D6C: addi    r5, r31, 3068
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(3068);

label_7F3A8D70:
    ctx->pc = 0x7F3A8D70u;
    // 7F3A8D70: addi    r4, r26, 124
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(124);

label_7F3A8D74:
    ctx->pc = 0x7F3A8D74u;
    // 7F3A8D74: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A8D78:
    loop_7F3A8D78(ctx);
    if (ctx->pc == 0x7F3A8D8Cu) goto label_7F3A8D8C;
    return;
label_7F3A8D7C:
    ctx->pc = 0x7F3A8D7Cu;
    // 7F3A8D7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A8D80:
    ctx->pc = 0x7F3A8D80u;
    // 7F3A8D80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A8D84:
    ctx->pc = 0x7F3A8D84u;
    // 7F3A8D84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A8D88:
    // 7F3A8D88: bc    16, 0, 0x7F3A8D78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8D78u;
                return;
            }
            goto label_7F3A8D78;
        }
    }

label_7F3A8D8C:
    ctx->pc = 0x7F3A8D8Cu;
    ctx->downcount -= 5;
    // 7F3A8D8C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A8D90:
    ctx->pc = 0x7F3A8D90u;
    // 7F3A8D90: addi    r5, r31, 3132
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(3132);

label_7F3A8D94:
    ctx->pc = 0x7F3A8D94u;
    // 7F3A8D94: addi    r4, r26, 188
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(188);

label_7F3A8D98:
    ctx->pc = 0x7F3A8D98u;
    // 7F3A8D98: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A8D9C:
    loop_7F3A8D9C(ctx);
    if (ctx->pc == 0x7F3A8DB0u) goto label_7F3A8DB0;
    return;
label_7F3A8DA0:
    ctx->pc = 0x7F3A8DA0u;
    // 7F3A8DA0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A8DA4:
    ctx->pc = 0x7F3A8DA4u;
    // 7F3A8DA4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A8DA8:
    ctx->pc = 0x7F3A8DA8u;
    // 7F3A8DA8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A8DAC:
    // 7F3A8DAC: bc    16, 0, 0x7F3A8D9C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8D9Cu;
                return;
            }
            goto label_7F3A8D9C;
        }
    }

label_7F3A8DB0:
    ctx->pc = 0x7F3A8DB0u;
    ctx->downcount -= 3;
    // 7F3A8DB0: addi    r3, r31, 3136
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3136);

label_7F3A8DB4:
    ctx->pc = 0x7F3A8DB4u;
    // 7F3A8DB4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A8DB8:
    ctx->pc = 0x7F3A8DB8u;
    // 7F3A8DB8: bl      0x80025B84
    {
            ctx->lr = 0x7F3A8DBCu;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3A8DBC:
    ctx->pc = 0x7F3A8DBCu;
    ctx->downcount -= 3;
    // 7F3A8DBC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A8DC0:
    ctx->pc = 0x7F3A8DC0u;
    // 7F3A8DC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8DC4:
    ctx->pc = 0x7F3A8DC4u;
    // 7F3A8DC4: bl      0x800468B8
    {
            ctx->lr = 0x7F3A8DC8u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3A8DC8:
    ctx->pc = 0x7F3A8DC8u;
    ctx->downcount -= 5;
    // 7F3A8DC8: lwz     r0, 940(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8DCC:
    ctx->pc = 0x7F3A8DCCu;
    // 7F3A8DCC: stw     r0, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8DD0:
    ctx->pc = 0x7F3A8DD0u;
    // 7F3A8DD0: lwz     r30, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3A8DD4:
    ctx->pc = 0x7F3A8DD4u;
    // 7F3A8DD4: lwz     r29, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3A8DD8:
    ctx->pc = 0x7F3A8DD8u;
    // 7F3A8DD8: b       0x7F3A8E60
    {
            goto label_7F3A8E60;
    }

label_7F3A8DDC:
    ctx->pc = 0x7F3A8DDCu;
    ctx->downcount -= 5;
    // 7F3A8DDC: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8DE0:
    ctx->pc = 0x7F3A8DE0u;
    // 7F3A8DE0: lwz     r0, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8DE4:
    ctx->pc = 0x7F3A8DE4u;
    // 7F3A8DE4: lwz     r6, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A8DE8:
    // 7F3A8DE8: and.   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8DEC:
    // 7F3A8DEC: bc    4, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8DF0:
    ctx->downcount -= 2;
    // 7F3A8DF0: rlwinm. r0, r6, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8DF4:
    // 7F3A8DF4: bc    4, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8DF8:
    ctx->pc = 0x7F3A8DF8u;
    ctx->downcount -= 3;
    // 7F3A8DF8: lha     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A8DFC:
    // 7F3A8DFC: cmpwi   r0, 2
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

label_7F3A8E00:
    // 7F3A8E00: bc    12, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8E04:
    ctx->downcount -= 4;
    // 7F3A8E04: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A8E08:
    ctx->pc = 0x7F3A8E08u;
    // 7F3A8E08: lwz     r7, -12068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12068);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A8E0C:
    // 7F3A8E0C: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8E10:
    // 7F3A8E10: bc    4, 2, 0x7F3A8E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E28;
        }
    }

label_7F3A8E14:
    ctx->downcount -= 5;
    // 7F3A8E14: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A8E18:
    ctx->pc = 0x7F3A8E18u;
    // 7F3A8E18: lwz     r5, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A8E1C:
    ctx->pc = 0x7F3A8E1Cu;
    // 7F3A8E1C: lwz     r0, -12064(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8E20:
    // 7F3A8E20: and.   r0, r5, r0
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

label_7F3A8E24:
    // 7F3A8E24: bc    12, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8E28:
    ctx->downcount -= 4;
    // 7F3A8E28: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F3A8E2C:
    // 7F3A8E2C: addi    r0, r4, 128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(128);

label_7F3A8E30:
    // 7F3A8E30: and.   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8E34:
    // 7F3A8E34: bc    4, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8E38:
    ctx->downcount -= 2;
    // 7F3A8E38: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8E3C:
    // 7F3A8E3C: bc    4, 2, 0x7F3A8E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E54;
        }
    }

label_7F3A8E40:
    ctx->pc = 0x7F3A8E40u;
    ctx->downcount -= 3;
    // 7F3A8E40: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8E44:
    // 7F3A8E44: cmpwi   r0, 0
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

label_7F3A8E48:
    // 7F3A8E48: bc    12, 2, 0x7F3A8E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E54;
        }
    }

label_7F3A8E4C:
    ctx->downcount -= 2;
    // 7F3A8E4C: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8E50:
    // 7F3A8E50: bc    12, 2, 0x7F3A8E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8E58;
        }
    }

label_7F3A8E54:
    ctx->downcount -= 1;
    // 7F3A8E54: bl      0x7F3A7D98
    {
            ctx->lr = 0x7F3A8E58u;
            ctx->pc = 0x7F3A7D98u;
            return;
    }

label_7F3A8E58:
    ctx->downcount -= 2;
    // 7F3A8E58: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F3A8E5C:
    // 7F3A8E5C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F3A8E60:
    ctx->downcount -= 2;
    // 7F3A8E60: cmpwi   r29, 0
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

label_7F3A8E64:
    // 7F3A8E64: bc    12, 1, 0x7F3A8DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8DDCu;
                return;
            }
            goto label_7F3A8DDC;
        }
    }

label_7F3A8E68:
    ctx->pc = 0x7F3A8E68u;
    ctx->downcount -= 1;
    // 7F3A8E68: bl      0x7F3A7E74
    {
            ctx->lr = 0x7F3A8E6Cu;
            ctx->pc = 0x7F3A7E74u;
            return;
    }

label_7F3A8E6C:
    ctx->pc = 0x7F3A8E6Cu;
    ctx->downcount -= 3;
    // 7F3A8E6C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3A8E70:
    ctx->pc = 0x7F3A8E70u;
    // 7F3A8E70: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A8E74:
    ctx->pc = 0x7F3A8E74u;
    // 7F3A8E74: bl      0x7F3A8AC0
    {
            ctx->lr = 0x7F3A8E78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8AC0u;
                return;
            }
            goto label_7F3A8AC0;
    }

label_7F3A8E78:
    ctx->pc = 0x7F3A8E78u;
    ctx->downcount -= 16;
    // 7F3A8E78: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A8E7C:
    ctx->pc = 0x7F3A8E7Cu;
    // 7F3A8E7C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8E80:
    ctx->pc = 0x7F3A8E80u;
    // 7F3A8E80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A8E84:
    ctx->pc = 0x7F3A8E84u;
    // 7F3A8E84: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3A8E88:
    ctx->pc = 0x7F3A8E88u;
    // 7F3A8E88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A8E8C:
    ctx->pc = 0x7F3A8E8Cu;
    ctx->downcount -= 26;
    // 7F3A8E8C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A8E90:
    ctx->pc = 0x7F3A8E90u;
    // 7F3A8E90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A8E94:
    ctx->pc = 0x7F3A8E94u;
    // 7F3A8E94: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8E98:
    ctx->pc = 0x7F3A8E98u;
    // 7F3A8E98: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A8E9C:
    ctx->pc = 0x7F3A8E9Cu;
    // 7F3A8E9C: stmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A8EA0:
    ctx->pc = 0x7F3A8EA0u;
    // 7F3A8EA0: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A8EA4:
    ctx->pc = 0x7F3A8EA4u;
    // 7F3A8EA4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8EA8:
    ctx->pc = 0x7F3A8EA8u;
    // 7F3A8EA8: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A8EAC:
    ctx->pc = 0x7F3A8EACu;
    // 7F3A8EAC: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3A8EB0:
    ctx->pc = 0x7F3A8EB0u;
    // 7F3A8EB0: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3A8EB4:
    ctx->pc = 0x7F3A8EB4u;
    // 7F3A8EB4: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3A8EB8:
    ctx->pc = 0x7F3A8EB8u;
    // 7F3A8EB8: or   r23, r9, r9
    {
        ctx->gpr[23] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3A8EBC:
    ctx->pc = 0x7F3A8EBCu;
    // 7F3A8EBC: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F3A8EC0:
    ctx->pc = 0x7F3A8EC0u;
    // 7F3A8EC0: addi    r4, r26, 416
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(416);

label_7F3A8EC4:
    ctx->pc = 0x7F3A8EC4u;
    // 7F3A8EC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A8EC8:
    loop_7F3A8EC8(ctx);
    if (ctx->pc == 0x7F3A8EDCu) goto label_7F3A8EDC;
    return;
label_7F3A8ECC:
    ctx->pc = 0x7F3A8ECCu;
    // 7F3A8ECC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A8ED0:
    ctx->pc = 0x7F3A8ED0u;
    // 7F3A8ED0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A8ED4:
    ctx->pc = 0x7F3A8ED4u;
    // 7F3A8ED4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A8ED8:
    // 7F3A8ED8: bc    16, 0, 0x7F3A8EC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8EC8u;
                return;
            }
            goto label_7F3A8EC8;
        }
    }

label_7F3A8EDC:
    ctx->pc = 0x7F3A8EDCu;
    ctx->downcount -= 2;
    // 7F3A8EDC: cmpwi   r23, 0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8EE0:
    ctx->pc = 0x7F3A8EE0u;
    // 7F3A8EE0: bc    12, 2, 0x7F3A8EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8EF0;
        }
    }

label_7F3A8EE4:
    ctx->pc = 0x7F3A8EE4u;
    ctx->downcount -= 3;
    // 7F3A8EE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8EE8:
    ctx->pc = 0x7F3A8EE8u;
    // 7F3A8EE8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A8EEC:
    ctx->pc = 0x7F3A8EECu;
    // 7F3A8EEC: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3A8EF0u;
            goto label_7F3A911C;
    }

label_7F3A8EF0:
    ctx->pc = 0x7F3A8EF0u;
    ctx->downcount -= 2;
    // 7F3A8EF0: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8EF4:
    ctx->pc = 0x7F3A8EF4u;
    // 7F3A8EF4: bc    12, 2, 0x7F3A8F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8F50;
        }
    }

label_7F3A8EF8:
    ctx->pc = 0x7F3A8EF8u;
    ctx->downcount -= 3;
    // 7F3A8EF8: lwz     r0, 388(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8EFC:
    ctx->pc = 0x7F3A8EFCu;
    // 7F3A8EFC: cmplwi  r0, 0x0000
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

label_7F3A8F00:
    ctx->pc = 0x7F3A8F00u;
    // 7F3A8F00: bc    12, 2, 0x7F3A8F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8F50;
        }
    }

label_7F3A8F04:
    ctx->pc = 0x7F3A8F04u;
    ctx->downcount -= 2;
    // 7F3A8F04: cmpwi   r29, 0
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

label_7F3A8F08:
    ctx->pc = 0x7F3A8F08u;
    // 7F3A8F08: bc    4, 2, 0x7F3A8F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8F50;
        }
    }

label_7F3A8F0C:
    ctx->pc = 0x7F3A8F0Cu;
    ctx->downcount -= 2;
    // 7F3A8F0C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F3A8F10:
    ctx->pc = 0x7F3A8F10u;
    // 7F3A8F10: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3A8F14:
    ctx->downcount -= 4;
    // 7F3A8F14: addi    r0, r25, 388
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(388);

label_7F3A8F18:
    ctx->pc = 0x7F3A8F18u;
    // 7F3A8F18: lwzx    r3, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8F1C:
    // 7F3A8F1C: cmplwi  r3, 0x0000
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

label_7F3A8F20:
    // 7F3A8F20: bc    12, 2, 0x7F3A8F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8F40;
        }
    }

label_7F3A8F24:
    ctx->downcount -= 7;
    // 7F3A8F24: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A8F28:
    // 7F3A8F28: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A8F2C:
    // 7F3A8F2C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8F30:
    // 7F3A8F30: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8F34:
    // 7F3A8F34: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A8F38:
    // 7F3A8F38: or   r9, r23, r23
    {
        ctx->gpr[9] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3A8F3C:
    // 7F3A8F3C: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3A8F40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8E8Cu;
                return;
            }
            goto label_7F3A8E8C;
    }

label_7F3A8F40:
    ctx->downcount -= 4;
    // 7F3A8F40: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F3A8F44:
    // 7F3A8F44: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F3A8F48:
    // 7F3A8F48: cmpwi   r24, 8
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8F4C:
    // 7F3A8F4C: bc    12, 0, 0x7F3A8F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8F14u;
                return;
            }
            goto label_7F3A8F14;
        }
    }

label_7F3A8F50:
    ctx->pc = 0x7F3A8F50u;
    ctx->downcount -= 3;
    // 7F3A8F50: lha     r0, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A8F54:
    ctx->pc = 0x7F3A8F54u;
    // 7F3A8F54: cmpwi   r0, 0
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

label_7F3A8F58:
    ctx->pc = 0x7F3A8F58u;
    // 7F3A8F58: bc    12, 2, 0x7F3A90A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A90A4;
        }
    }

label_7F3A8F5C:
    ctx->pc = 0x7F3A8F5Cu;
    ctx->downcount -= 1;
    // 7F3A8F5C: bl      0x7F3AB7D8
    {
            ctx->lr = 0x7F3A8F60u;
            goto label_7F3AB7D8;
    }

label_7F3A8F60:
    ctx->pc = 0x7F3A8F60u;
    ctx->downcount -= 7;
    // 7F3A8F60: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3A8F64:
    ctx->pc = 0x7F3A8F64u;
    // 7F3A8F64: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A8F68:
    ctx->pc = 0x7F3A8F68u;
    // 7F3A8F68: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A8F6C:
    ctx->pc = 0x7F3A8F6Cu;
    // 7F3A8F6C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A8F70:
    ctx->pc = 0x7F3A8F70u;
    // 7F3A8F70: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A8F74:
    ctx->pc = 0x7F3A8F74u;
    // 7F3A8F74: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A8F78:
    ctx->pc = 0x7F3A8F78u;
    // 7F3A8F78: bl      0x7F3AB9BC
    {
            ctx->lr = 0x7F3A8F7Cu;
            goto label_7F3AB9BC;
    }

label_7F3A8F7C:
    ctx->pc = 0x7F3A8F7Cu;
    ctx->downcount -= 2;
    // 7F3A8F7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8F80:
    ctx->pc = 0x7F3A8F80u;
    // 7F3A8F80: bl      0x7F3AB7B8
    {
            ctx->lr = 0x7F3A8F84u;
            goto label_7F3AB7B8;
    }

label_7F3A8F84:
    ctx->pc = 0x7F3A8F84u;
    ctx->downcount -= 2;
    // 7F3A8F84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8F88:
    ctx->pc = 0x7F3A8F88u;
    // 7F3A8F88: bl      0x7F3AB7C8
    {
            ctx->lr = 0x7F3A8F8Cu;
            goto label_7F3AB7C8;
    }

label_7F3A8F8C:
    ctx->pc = 0x7F3A8F8Cu;
    ctx->downcount -= 11;
    // 7F3A8F8C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A8F90:
    ctx->pc = 0x7F3A8F90u;
    // 7F3A8F90: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8F94:
    ctx->pc = 0x7F3A8F94u;
    // 7F3A8F94: addi    r0, r25, 1
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(1);

label_7F3A8F98:
    ctx->pc = 0x7F3A8F98u;
    // 7F3A8F98: mulli   r0, r0, 136
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)136);

label_7F3A8F9C:
    ctx->pc = 0x7F3A8F9Cu;
    // 7F3A8F9C: add   r24, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F3A8FA0:
    ctx->pc = 0x7F3A8FA0u;
    // 7F3A8FA0: addi    r0, r24, 415
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(415);

label_7F3A8FA4:
    ctx->pc = 0x7F3A8FA4u;
    // 7F3A8FA4: rlwinm r0, r0, 0, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_7F3A8FA8:
    ctx->pc = 0x7F3A8FA8u;
    // 7F3A8FA8: addi    r24, r24, 128
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(128);

label_7F3A8FAC:
    ctx->pc = 0x7F3A8FACu;
    // 7F3A8FAC: bc    4, 2, 0x7F3A8FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8FB8;
        }
    }

label_7F3A8FB0:
    ctx->pc = 0x7F3A8FB0u;
    ctx->downcount -= 2;
    // 7F3A8FB0: stw     r0, 320(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8FB4:
    ctx->pc = 0x7F3A8FB4u;
    // 7F3A8FB4: b       0x7F3A8FD4
    {
            goto label_7F3A8FD4;
    }

label_7F3A8FB8:
    ctx->pc = 0x7F3A8FB8u;
    ctx->downcount -= 2;
    // 7F3A8FB8: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8FBC:
    ctx->pc = 0x7F3A8FBCu;
    // 7F3A8FBC: bc    4, 2, 0x7F3A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8FC8;
        }
    }

label_7F3A8FC0:
    ctx->pc = 0x7F3A8FC0u;
    ctx->downcount -= 2;
    // 7F3A8FC0: stw     r0, 324(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8FC4:
    ctx->pc = 0x7F3A8FC4u;
    // 7F3A8FC4: b       0x7F3A8FD4
    {
            goto label_7F3A8FD4;
    }

label_7F3A8FC8:
    ctx->pc = 0x7F3A8FC8u;
    ctx->downcount -= 2;
    // 7F3A8FC8: cmpwi   r28, 0
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

label_7F3A8FCC:
    ctx->pc = 0x7F3A8FCCu;
    // 7F3A8FCC: bc    4, 2, 0x7F3A8FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8FD4;
        }
    }

label_7F3A8FD0:
    ctx->pc = 0x7F3A8FD0u;
    ctx->downcount -= 1;
    // 7F3A8FD0: stw     r0, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A8FD4:
    ctx->pc = 0x7F3A8FD4u;
    ctx->downcount -= 2;
    // 7F3A8FD4: cmpwi   r29, 0
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

label_7F3A8FD8:
    ctx->pc = 0x7F3A8FD8u;
    // 7F3A8FD8: bc    12, 2, 0x7F3A9008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9008;
        }
    }

label_7F3A8FDC:
    ctx->pc = 0x7F3A8FDCu;
    ctx->downcount -= 3;
    // 7F3A8FDC: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8FE0:
    ctx->pc = 0x7F3A8FE0u;
    // 7F3A8FE0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8FE4:
    ctx->pc = 0x7F3A8FE4u;
    // 7F3A8FE4: bc    4, 2, 0x7F3A8FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8FF0;
        }
    }

label_7F3A8FE8:
    ctx->pc = 0x7F3A8FE8u;
    ctx->downcount -= 2;
    // 7F3A8FE8: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8FEC:
    ctx->pc = 0x7F3A8FECu;
    // 7F3A8FEC: b       0x7F3A8FFC
    {
            goto label_7F3A8FFC;
    }

label_7F3A8FF0:
    ctx->pc = 0x7F3A8FF0u;
    ctx->downcount -= 2;
    // 7F3A8FF0: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A8FF4:
    ctx->pc = 0x7F3A8FF4u;
    // 7F3A8FF4: bc    4, 2, 0x7F3A8FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8FFC;
        }
    }

label_7F3A8FF8:
    ctx->pc = 0x7F3A8FF8u;
    ctx->downcount -= 1;
    // 7F3A8FF8: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8FFC:
    ctx->pc = 0x7F3A8FFCu;
    ctx->downcount -= 3;
    // 7F3A8FFC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9000:
    ctx->pc = 0x7F3A9000u;
    // 7F3A9000: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9004:
    ctx->pc = 0x7F3A9004u;
    // 7F3A9004: bl      0x7F3AB884
    {
            ctx->lr = 0x7F3A9008u;
            goto label_7F3AB884;
    }

label_7F3A9008:
    ctx->pc = 0x7F3A9008u;
    ctx->downcount -= 9;
    // 7F3A9008: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A900C:
    ctx->pc = 0x7F3A900Cu;
    // 7F3A900C: mulli   r5, r25, 136
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[25] * (s64)(s32)136);

label_7F3A9010:
    ctx->pc = 0x7F3A9010u;
    // 7F3A9010: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A9014:
    ctx->pc = 0x7F3A9014u;
    // 7F3A9014: add   r27, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F3A9018:
    ctx->pc = 0x7F3A9018u;
    // 7F3A9018: addi    r27, r27, 128
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(128);

label_7F3A901C:
    ctx->pc = 0x7F3A901Cu;
    // 7F3A901C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9020:
    ctx->pc = 0x7F3A9020u;
    // 7F3A9020: bl      0x8000519C
    {
            ctx->lr = 0x7F3A9024u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3A9024:
    ctx->pc = 0x7F3A9024u;
    ctx->downcount -= 3;
    // 7F3A9024: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9028:
    ctx->pc = 0x7F3A9028u;
    // 7F3A9028: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3A902C:
    ctx->pc = 0x7F3A902Cu;
    // 7F3A902C: bl      0x7F3C91D0
    {
            ctx->lr = 0x7F3A9030u;
            ctx->pc = 0x7F3C91D0u;
            return;
    }

label_7F3A9030:
    ctx->pc = 0x7F3A9030u;
    ctx->downcount -= 2;
    // 7F3A9030: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9034:
    ctx->pc = 0x7F3A9034u;
    // 7F3A9034: bc    4, 2, 0x7F3A9050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9050;
        }
    }

label_7F3A9038:
    ctx->pc = 0x7F3A9038u;
    ctx->downcount -= 8;
    // 7F3A9038: addi    r0, r25, -1
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(-1);

label_7F3A903C:
    ctx->pc = 0x7F3A903Cu;
    // 7F3A903C: stw     r27, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3A9040:
    ctx->pc = 0x7F3A9040u;
    // 7F3A9040: mulli   r0, r0, 136
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)136);

label_7F3A9044:
    ctx->pc = 0x7F3A9044u;
    // 7F3A9044: add   r0, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3A9048:
    ctx->pc = 0x7F3A9048u;
    // 7F3A9048: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A904C:
    ctx->pc = 0x7F3A904Cu;
    // 7F3A904C: b       0x7F3A9084
    {
            goto label_7F3A9084;
    }

label_7F3A9050:
    ctx->pc = 0x7F3A9050u;
    ctx->downcount -= 2;
    // 7F3A9050: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9054:
    ctx->pc = 0x7F3A9054u;
    // 7F3A9054: bc    4, 2, 0x7F3A9070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9070;
        }
    }

label_7F3A9058:
    ctx->pc = 0x7F3A9058u;
    ctx->downcount -= 8;
    // 7F3A9058: addi    r0, r25, -1
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(-1);

label_7F3A905C:
    ctx->pc = 0x7F3A905Cu;
    // 7F3A905C: stw     r27, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3A9060:
    ctx->pc = 0x7F3A9060u;
    // 7F3A9060: mulli   r0, r0, 136
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)136);

label_7F3A9064:
    ctx->pc = 0x7F3A9064u;
    // 7F3A9064: add   r0, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3A9068:
    ctx->pc = 0x7F3A9068u;
    // 7F3A9068: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A906C:
    ctx->pc = 0x7F3A906Cu;
    // 7F3A906C: b       0x7F3A9084
    {
            goto label_7F3A9084;
    }

label_7F3A9070:
    ctx->pc = 0x7F3A9070u;
    ctx->downcount -= 7;
    // 7F3A9070: addi    r0, r25, -1
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(-1);

label_7F3A9074:
    ctx->pc = 0x7F3A9074u;
    // 7F3A9074: stw     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3A9078:
    ctx->pc = 0x7F3A9078u;
    // 7F3A9078: mulli   r0, r0, 136
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)136);

label_7F3A907C:
    ctx->pc = 0x7F3A907Cu;
    // 7F3A907C: add   r0, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3A9080:
    ctx->pc = 0x7F3A9080u;
    // 7F3A9080: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9084:
    ctx->pc = 0x7F3A9084u;
    ctx->downcount -= 3;
    // 7F3A9084: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9088:
    ctx->pc = 0x7F3A9088u;
    // 7F3A9088: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A908C:
    ctx->pc = 0x7F3A908Cu;
    // 7F3A908C: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3A9090u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3A9090:
    ctx->pc = 0x7F3A9090u;
    ctx->downcount -= 2;
    // 7F3A9090: cmplwi  r30, 0x0000
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

label_7F3A9094:
    ctx->pc = 0x7F3A9094u;
    // 7F3A9094: bc    12, 2, 0x7F3A90E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A90E0;
        }
    }

label_7F3A9098:
    ctx->pc = 0x7F3A9098u;
    ctx->downcount -= 2;
    // 7F3A9098: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A909C:
    ctx->pc = 0x7F3A909Cu;
    // 7F3A909C: bl      0x7F3AB8BC
    {
            ctx->lr = 0x7F3A90A0u;
            goto label_7F3AB8BC;
    }

label_7F3A90A0:
    ctx->pc = 0x7F3A90A0u;
    ctx->downcount -= 1;
    // 7F3A90A0: b       0x7F3A90E0
    {
            goto label_7F3A90E0;
    }

label_7F3A90A4:
    ctx->pc = 0x7F3A90A4u;
    ctx->downcount -= 2;
    // 7F3A90A4: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A90A8:
    ctx->pc = 0x7F3A90A8u;
    // 7F3A90A8: bc    4, 2, 0x7F3A90BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A90BC;
        }
    }

label_7F3A90AC:
    ctx->pc = 0x7F3A90ACu;
    ctx->downcount -= 4;
    // 7F3A90AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A90B0:
    ctx->pc = 0x7F3A90B0u;
    // 7F3A90B0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90B4:
    ctx->pc = 0x7F3A90B4u;
    // 7F3A90B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90B8:
    ctx->pc = 0x7F3A90B8u;
    // 7F3A90B8: b       0x7F3A90E0
    {
            goto label_7F3A90E0;
    }

label_7F3A90BC:
    ctx->pc = 0x7F3A90BCu;
    ctx->downcount -= 2;
    // 7F3A90BC: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A90C0:
    ctx->pc = 0x7F3A90C0u;
    // 7F3A90C0: bc    4, 2, 0x7F3A90D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A90D4;
        }
    }

label_7F3A90C4:
    ctx->pc = 0x7F3A90C4u;
    ctx->downcount -= 4;
    // 7F3A90C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A90C8:
    ctx->pc = 0x7F3A90C8u;
    // 7F3A90C8: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90CC:
    ctx->pc = 0x7F3A90CCu;
    // 7F3A90CC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90D0:
    ctx->pc = 0x7F3A90D0u;
    // 7F3A90D0: b       0x7F3A90E0
    {
            goto label_7F3A90E0;
    }

label_7F3A90D4:
    ctx->pc = 0x7F3A90D4u;
    ctx->downcount -= 3;
    // 7F3A90D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A90D8:
    ctx->pc = 0x7F3A90D8u;
    // 7F3A90D8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90DC:
    ctx->pc = 0x7F3A90DCu;
    // 7F3A90DC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A90E0:
    ctx->pc = 0x7F3A90E0u;
    ctx->downcount -= 5;
    // 7F3A90E0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A90E4:
    ctx->pc = 0x7F3A90E4u;
    // 7F3A90E4: addi    r5, r26, 416
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(416);

label_7F3A90E8:
    ctx->pc = 0x7F3A90E8u;
    // 7F3A90E8: addi    r4, r1, 4
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(4);

label_7F3A90EC:
    ctx->pc = 0x7F3A90ECu;
    // 7F3A90EC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A90F0:
    loop_7F3A90F0(ctx);
    if (ctx->pc == 0x7F3A9104u) goto label_7F3A9104;
    return;
label_7F3A90F4:
    ctx->pc = 0x7F3A90F4u;
    // 7F3A90F4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A90F8:
    ctx->pc = 0x7F3A90F8u;
    // 7F3A90F8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A90FC:
    ctx->pc = 0x7F3A90FCu;
    // 7F3A90FC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9100:
    // 7F3A9100: bc    16, 0, 0x7F3A90F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A90F0u;
                return;
            }
            goto label_7F3A90F0;
        }
    }

label_7F3A9104:
    ctx->pc = 0x7F3A9104u;
    ctx->downcount -= 17;
    // 7F3A9104: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3A9108:
    ctx->pc = 0x7F3A9108u;
    // 7F3A9108: lmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A910C:
    ctx->pc = 0x7F3A910Cu;
    // 7F3A910C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9110:
    ctx->pc = 0x7F3A9110u;
    // 7F3A9110: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A9114:
    ctx->pc = 0x7F3A9114u;
    // 7F3A9114: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F3A9118:
    ctx->pc = 0x7F3A9118u;
    // 7F3A9118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A911C:
    ctx->pc = 0x7F3A911Cu;
    ctx->downcount -= 18;
    // 7F3A911C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A9120:
    ctx->pc = 0x7F3A9120u;
    // 7F3A9120: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A9124:
    ctx->pc = 0x7F3A9124u;
    // 7F3A9124: cmpwi   r4, 0
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

label_7F3A9128:
    ctx->pc = 0x7F3A9128u;
    // 7F3A9128: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A912C:
    ctx->pc = 0x7F3A912Cu;
    // 7F3A912C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A9130:
    ctx->pc = 0x7F3A9130u;
    // 7F3A9130: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A9134:
    ctx->pc = 0x7F3A9134u;
    // 7F3A9134: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3A9138:
    ctx->pc = 0x7F3A9138u;
    // 7F3A9138: bc    12, 2, 0x7F3A9144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9144;
        }
    }

label_7F3A913C:
    ctx->pc = 0x7F3A913Cu;
    ctx->downcount -= 2;
    // 7F3A913C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3A9140:
    ctx->pc = 0x7F3A9140u;
    // 7F3A9140: b       0x7F3A918C
    {
            goto label_7F3A918C;
    }

label_7F3A9144:
    ctx->pc = 0x7F3A9144u;
    ctx->downcount -= 1;
    // 7F3A9144: bc    4, 2, 0x7F3A918C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A918C;
        }
    }

label_7F3A9148:
    ctx->pc = 0x7F3A9148u;
    ctx->downcount -= 4;
    // 7F3A9148: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A914C:
    ctx->pc = 0x7F3A914Cu;
    // 7F3A914C: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9150:
    ctx->pc = 0x7F3A9150u;
    // 7F3A9150: cmpwi   r4, 0
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

label_7F3A9154:
    ctx->pc = 0x7F3A9154u;
    // 7F3A9154: bc    12, 2, 0x7F3A9170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9170;
        }
    }

label_7F3A9158:
    ctx->pc = 0x7F3A9158u;
    ctx->downcount -= 4;
    // 7F3A9158: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A915C:
    ctx->pc = 0x7F3A915Cu;
    // 7F3A915C: lwz     r0, -1740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9160:
    ctx->pc = 0x7F3A9160u;
    // 7F3A9160: cmpwi   r0, 0
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

label_7F3A9164:
    ctx->pc = 0x7F3A9164u;
    // 7F3A9164: bc    12, 2, 0x7F3A9170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9170;
        }
    }

label_7F3A9168:
    ctx->pc = 0x7F3A9168u;
    ctx->downcount -= 2;
    // 7F3A9168: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F3A916C:
    ctx->pc = 0x7F3A916Cu;
    // 7F3A916C: b       0x7F3A918C
    {
            goto label_7F3A918C;
    }

label_7F3A9170:
    ctx->pc = 0x7F3A9170u;
    ctx->downcount -= 2;
    // 7F3A9170: cmpwi   r4, 0
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

label_7F3A9174:
    ctx->pc = 0x7F3A9174u;
    // 7F3A9174: bc    4, 2, 0x7F3A918C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A918C;
        }
    }

label_7F3A9178:
    ctx->pc = 0x7F3A9178u;
    ctx->downcount -= 4;
    // 7F3A9178: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A917C:
    ctx->pc = 0x7F3A917Cu;
    // 7F3A917C: lwz     r0, -1740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9180:
    ctx->pc = 0x7F3A9180u;
    // 7F3A9180: cmpwi   r0, 0
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

label_7F3A9184:
    ctx->pc = 0x7F3A9184u;
    // 7F3A9184: bc    4, 2, 0x7F3A918C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A918C;
        }
    }

label_7F3A9188:
    ctx->pc = 0x7F3A9188u;
    ctx->downcount -= 1;
    // 7F3A9188: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3A918C:
    ctx->pc = 0x7F3A918Cu;
    ctx->downcount -= 2;
    // 7F3A918C: cmpwi   r31, 0
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

label_7F3A9190:
    ctx->pc = 0x7F3A9190u;
    // 7F3A9190: bc    12, 2, 0x7F3A9444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9444;
        }
    }

label_7F3A9194:
    ctx->pc = 0x7F3A9194u;
    ctx->downcount -= 6;
    // 7F3A9194: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A9198:
    ctx->pc = 0x7F3A9198u;
    // 7F3A9198: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A919C:
    ctx->pc = 0x7F3A919Cu;
    // 7F3A919C: addi    r4, r3, -1740
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3A91A0:
    ctx->pc = 0x7F3A91A0u;
    // 7F3A91A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A91A4:
    ctx->pc = 0x7F3A91A4u;
    // 7F3A91A4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A91A8:
    ctx->pc = 0x7F3A91A8u;
    // 7F3A91A8: bl      0x800455BC
    {
            ctx->lr = 0x7F3A91ACu;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3A91AC:
    ctx->pc = 0x7F3A91ACu;
    ctx->downcount -= 4;
    // 7F3A91AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A91B0:
    ctx->pc = 0x7F3A91B0u;
    // 7F3A91B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A91B4:
    ctx->pc = 0x7F3A91B4u;
    // 7F3A91B4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A91B8:
    ctx->pc = 0x7F3A91B8u;
    // 7F3A91B8: bl      0x80045628
    {
            ctx->lr = 0x7F3A91BCu;
            ctx->pc = 0x80045628u;
            return;
    }

label_7F3A91BC:
    ctx->pc = 0x7F3A91BCu;
    ctx->downcount -= 4;
    // 7F3A91BC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A91C0:
    ctx->pc = 0x7F3A91C0u;
    // 7F3A91C0: lwz     r0, 12256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A91C4:
    ctx->pc = 0x7F3A91C4u;
    // 7F3A91C4: cmpwi   r0, 0
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

label_7F3A91C8:
    ctx->pc = 0x7F3A91C8u;
    // 7F3A91C8: bc    12, 2, 0x7F3A9348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9348;
        }
    }

label_7F3A91CC:
    ctx->pc = 0x7F3A91CCu;
    ctx->downcount -= 2;
    // 7F3A91CC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3A91D0:
    ctx->pc = 0x7F3A91D0u;
    // 7F3A91D0: bl      0x80045EC8
    {
            ctx->lr = 0x7F3A91D4u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3A91D4:
    ctx->pc = 0x7F3A91D4u;
    ctx->downcount -= 5;
    // 7F3A91D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A91D8:
    ctx->pc = 0x7F3A91D8u;
    // 7F3A91D8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A91DC:
    ctx->pc = 0x7F3A91DCu;
    // 7F3A91DC: li      r5, 257
    ctx->gpr[5] = (u32)(s32)(257);

label_7F3A91E0:
    ctx->pc = 0x7F3A91E0u;
    // 7F3A91E0: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3A91E4:
    ctx->pc = 0x7F3A91E4u;
    // 7F3A91E4: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A91E8u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A91E8:
    ctx->pc = 0x7F3A91E8u;
    ctx->downcount -= 6;
    // 7F3A91E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A91EC:
    ctx->pc = 0x7F3A91ECu;
    // 7F3A91EC: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A91F0:
    ctx->pc = 0x7F3A91F0u;
    // 7F3A91F0: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F3A91F4:
    ctx->pc = 0x7F3A91F4u;
    // 7F3A91F4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F3A91F8:
    ctx->pc = 0x7F3A91F8u;
    // 7F3A91F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A91FC:
    ctx->pc = 0x7F3A91FCu;
    // 7F3A91FC: bl      0x80045818
    {
            ctx->lr = 0x7F3A9200u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A9200:
    ctx->pc = 0x7F3A9200u;
    ctx->downcount -= 6;
    // 7F3A9200: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9204:
    ctx->pc = 0x7F3A9204u;
    // 7F3A9204: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A9208:
    ctx->pc = 0x7F3A9208u;
    // 7F3A9208: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F3A920C:
    ctx->pc = 0x7F3A920Cu;
    // 7F3A920C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A9210:
    ctx->pc = 0x7F3A9210u;
    // 7F3A9210: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A9214:
    ctx->pc = 0x7F3A9214u;
    // 7F3A9214: bl      0x8004585C
    {
            ctx->lr = 0x7F3A9218u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A9218:
    ctx->pc = 0x7F3A9218u;
    ctx->downcount -= 7;
    // 7F3A9218: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A921C:
    ctx->pc = 0x7F3A921Cu;
    // 7F3A921C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9220:
    ctx->pc = 0x7F3A9220u;
    // 7F3A9220: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9224:
    ctx->pc = 0x7F3A9224u;
    // 7F3A9224: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9228:
    ctx->pc = 0x7F3A9228u;
    // 7F3A9228: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A922C:
    ctx->pc = 0x7F3A922Cu;
    // 7F3A922C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A9230:
    ctx->pc = 0x7F3A9230u;
    // 7F3A9230: bl      0x800458A0
    {
            ctx->lr = 0x7F3A9234u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A9234:
    ctx->pc = 0x7F3A9234u;
    ctx->downcount -= 7;
    // 7F3A9234: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9238:
    ctx->pc = 0x7F3A9238u;
    // 7F3A9238: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A923C:
    ctx->pc = 0x7F3A923Cu;
    // 7F3A923C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9240:
    ctx->pc = 0x7F3A9240u;
    // 7F3A9240: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9244:
    ctx->pc = 0x7F3A9244u;
    // 7F3A9244: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9248:
    ctx->pc = 0x7F3A9248u;
    // 7F3A9248: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A924C:
    ctx->pc = 0x7F3A924Cu;
    // 7F3A924C: bl      0x80045908
    {
            ctx->lr = 0x7F3A9250u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A9250:
    ctx->pc = 0x7F3A9250u;
    ctx->downcount -= 5;
    // 7F3A9250: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9254:
    ctx->pc = 0x7F3A9254u;
    // 7F3A9254: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A9258:
    ctx->pc = 0x7F3A9258u;
    // 7F3A9258: li      r5, 257
    ctx->gpr[5] = (u32)(s32)(257);

label_7F3A925C:
    ctx->pc = 0x7F3A925Cu;
    // 7F3A925C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3A9260:
    ctx->pc = 0x7F3A9260u;
    // 7F3A9260: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A9264u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A9264:
    ctx->pc = 0x7F3A9264u;
    ctx->downcount -= 6;
    // 7F3A9264: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9268:
    ctx->pc = 0x7F3A9268u;
    // 7F3A9268: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A926C:
    ctx->pc = 0x7F3A926Cu;
    // 7F3A926C: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F3A9270:
    ctx->pc = 0x7F3A9270u;
    // 7F3A9270: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F3A9274:
    ctx->pc = 0x7F3A9274u;
    // 7F3A9274: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A9278:
    ctx->pc = 0x7F3A9278u;
    // 7F3A9278: bl      0x80045818
    {
            ctx->lr = 0x7F3A927Cu;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A927C:
    ctx->pc = 0x7F3A927Cu;
    ctx->downcount -= 6;
    // 7F3A927C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9280:
    ctx->pc = 0x7F3A9280u;
    // 7F3A9280: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A9284:
    ctx->pc = 0x7F3A9284u;
    // 7F3A9284: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F3A9288:
    ctx->pc = 0x7F3A9288u;
    // 7F3A9288: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A928C:
    ctx->pc = 0x7F3A928Cu;
    // 7F3A928C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A9290:
    ctx->pc = 0x7F3A9290u;
    // 7F3A9290: bl      0x8004585C
    {
            ctx->lr = 0x7F3A9294u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A9294:
    ctx->pc = 0x7F3A9294u;
    ctx->downcount -= 7;
    // 7F3A9294: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9298:
    ctx->pc = 0x7F3A9298u;
    // 7F3A9298: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A929C:
    ctx->pc = 0x7F3A929Cu;
    // 7F3A929C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A92A0:
    ctx->pc = 0x7F3A92A0u;
    // 7F3A92A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A92A4:
    ctx->pc = 0x7F3A92A4u;
    // 7F3A92A4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A92A8:
    ctx->pc = 0x7F3A92A8u;
    // 7F3A92A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A92AC:
    ctx->pc = 0x7F3A92ACu;
    // 7F3A92AC: bl      0x800458A0
    {
            ctx->lr = 0x7F3A92B0u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A92B0:
    ctx->pc = 0x7F3A92B0u;
    ctx->downcount -= 7;
    // 7F3A92B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A92B4:
    ctx->pc = 0x7F3A92B4u;
    // 7F3A92B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A92B8:
    ctx->pc = 0x7F3A92B8u;
    // 7F3A92B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A92BC:
    ctx->pc = 0x7F3A92BCu;
    // 7F3A92BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A92C0:
    ctx->pc = 0x7F3A92C0u;
    // 7F3A92C0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A92C4:
    ctx->pc = 0x7F3A92C4u;
    // 7F3A92C4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A92C8:
    ctx->pc = 0x7F3A92C8u;
    // 7F3A92C8: bl      0x80045908
    {
            ctx->lr = 0x7F3A92CCu;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A92CC:
    ctx->pc = 0x7F3A92CCu;
    ctx->downcount -= 5;
    // 7F3A92CC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A92D0:
    ctx->pc = 0x7F3A92D0u;
    // 7F3A92D0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A92D4:
    ctx->pc = 0x7F3A92D4u;
    // 7F3A92D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A92D8:
    ctx->pc = 0x7F3A92D8u;
    // 7F3A92D8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3A92DC:
    ctx->pc = 0x7F3A92DCu;
    // 7F3A92DC: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A92E0u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A92E0:
    ctx->pc = 0x7F3A92E0u;
    ctx->downcount -= 6;
    // 7F3A92E0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A92E4:
    ctx->pc = 0x7F3A92E4u;
    // 7F3A92E4: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A92E8:
    ctx->pc = 0x7F3A92E8u;
    // 7F3A92E8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3A92EC:
    ctx->pc = 0x7F3A92ECu;
    // 7F3A92EC: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F3A92F0:
    ctx->pc = 0x7F3A92F0u;
    // 7F3A92F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A92F4:
    ctx->pc = 0x7F3A92F4u;
    // 7F3A92F4: bl      0x80045818
    {
            ctx->lr = 0x7F3A92F8u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A92F8:
    ctx->pc = 0x7F3A92F8u;
    ctx->downcount -= 6;
    // 7F3A92F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A92FC:
    ctx->pc = 0x7F3A92FCu;
    // 7F3A92FC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A9300:
    ctx->pc = 0x7F3A9300u;
    // 7F3A9300: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9304:
    ctx->pc = 0x7F3A9304u;
    // 7F3A9304: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F3A9308:
    ctx->pc = 0x7F3A9308u;
    // 7F3A9308: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F3A930C:
    ctx->pc = 0x7F3A930Cu;
    // 7F3A930C: bl      0x8004585C
    {
            ctx->lr = 0x7F3A9310u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A9310:
    ctx->pc = 0x7F3A9310u;
    ctx->downcount -= 7;
    // 7F3A9310: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9314:
    ctx->pc = 0x7F3A9314u;
    // 7F3A9314: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9318:
    ctx->pc = 0x7F3A9318u;
    // 7F3A9318: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A931C:
    ctx->pc = 0x7F3A931Cu;
    // 7F3A931C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9320:
    ctx->pc = 0x7F3A9320u;
    // 7F3A9320: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9324:
    ctx->pc = 0x7F3A9324u;
    // 7F3A9324: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A9328:
    ctx->pc = 0x7F3A9328u;
    // 7F3A9328: bl      0x800458A0
    {
            ctx->lr = 0x7F3A932Cu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A932C:
    ctx->pc = 0x7F3A932Cu;
    ctx->downcount -= 7;
    // 7F3A932C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9330:
    ctx->pc = 0x7F3A9330u;
    // 7F3A9330: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9334:
    ctx->pc = 0x7F3A9334u;
    // 7F3A9334: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9338:
    ctx->pc = 0x7F3A9338u;
    // 7F3A9338: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A933C:
    ctx->pc = 0x7F3A933Cu;
    // 7F3A933C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9340:
    ctx->pc = 0x7F3A9340u;
    // 7F3A9340: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A9344:
    ctx->pc = 0x7F3A9344u;
    // 7F3A9344: bl      0x80045908
    {
            ctx->lr = 0x7F3A9348u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A9348:
    ctx->pc = 0x7F3A9348u;
    ctx->downcount -= 1;
    // 7F3A9348: bl      0x80041BD4
    {
            ctx->lr = 0x7F3A934Cu;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F3A934C:
    ctx->pc = 0x7F3A934Cu;
    ctx->downcount -= 3;
    // 7F3A934C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9350:
    ctx->pc = 0x7F3A9350u;
    // 7F3A9350: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9354:
    ctx->pc = 0x7F3A9354u;
    // 7F3A9354: bl      0x80041500
    {
            ctx->lr = 0x7F3A9358u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A9358:
    ctx->pc = 0x7F3A9358u;
    ctx->downcount -= 3;
    // 7F3A9358: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A935C:
    ctx->pc = 0x7F3A935Cu;
    // 7F3A935C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9360:
    ctx->pc = 0x7F3A9360u;
    // 7F3A9360: bl      0x80041500
    {
            ctx->lr = 0x7F3A9364u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A9364:
    ctx->pc = 0x7F3A9364u;
    ctx->downcount -= 3;
    // 7F3A9364: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9368:
    ctx->pc = 0x7F3A9368u;
    // 7F3A9368: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A936C:
    ctx->pc = 0x7F3A936Cu;
    // 7F3A936C: bl      0x80041500
    {
            ctx->lr = 0x7F3A9370u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A9370:
    ctx->pc = 0x7F3A9370u;
    ctx->downcount -= 3;
    // 7F3A9370: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A9374:
    ctx->pc = 0x7F3A9374u;
    // 7F3A9374: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9378:
    ctx->pc = 0x7F3A9378u;
    // 7F3A9378: bl      0x80041500
    {
            ctx->lr = 0x7F3A937Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A937C:
    ctx->pc = 0x7F3A937Cu;
    ctx->downcount -= 3;
    // 7F3A937C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A9380:
    ctx->pc = 0x7F3A9380u;
    // 7F3A9380: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A9384:
    ctx->pc = 0x7F3A9384u;
    // 7F3A9384: bl      0x80041500
    {
            ctx->lr = 0x7F3A9388u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A9388:
    ctx->pc = 0x7F3A9388u;
    ctx->downcount -= 3;
    // 7F3A9388: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_7F3A938C:
    ctx->pc = 0x7F3A938Cu;
    // 7F3A938C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A9390:
    ctx->pc = 0x7F3A9390u;
    // 7F3A9390: bl      0x80041500
    {
            ctx->lr = 0x7F3A9394u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A9394:
    ctx->pc = 0x7F3A9394u;
    ctx->downcount -= 5;
    // 7F3A9394: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A9398:
    ctx->pc = 0x7F3A9398u;
    // 7F3A9398: addi    r3, r3, -1740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3A939C:
    ctx->pc = 0x7F3A939Cu;
    // 7F3A939C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A93A0:
    ctx->pc = 0x7F3A93A0u;
    // 7F3A93A0: cmpwi   r0, 0
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

label_7F3A93A4:
    ctx->pc = 0x7F3A93A4u;
    // 7F3A93A4: bc    12, 2, 0x7F3A93B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A93B4;
        }
    }

label_7F3A93A8:
    ctx->pc = 0x7F3A93A8u;
    ctx->downcount -= 3;
    // 7F3A93A8: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F3A93AC:
    ctx->pc = 0x7F3A93ACu;
    // 7F3A93AC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A93B0:
    ctx->pc = 0x7F3A93B0u;
    // 7F3A93B0: bl      0x80041500
    {
            ctx->lr = 0x7F3A93B4u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A93B4:
    ctx->pc = 0x7F3A93B4u;
    ctx->downcount -= 3;
    // 7F3A93B4: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3A93B8:
    ctx->pc = 0x7F3A93B8u;
    // 7F3A93B8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A93BC:
    ctx->pc = 0x7F3A93BCu;
    // 7F3A93BC: bl      0x80041500
    {
            ctx->lr = 0x7F3A93C0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A93C0:
    ctx->pc = 0x7F3A93C0u;
    ctx->downcount -= 3;
    // 7F3A93C0: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A93C4:
    ctx->pc = 0x7F3A93C4u;
    // 7F3A93C4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A93C8:
    ctx->pc = 0x7F3A93C8u;
    // 7F3A93C8: bl      0x80041500
    {
            ctx->lr = 0x7F3A93CCu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A93CC:
    ctx->pc = 0x7F3A93CCu;
    ctx->downcount -= 2;
    // 7F3A93CC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3A93D0:
    ctx->pc = 0x7F3A93D0u;
    // 7F3A93D0: bl      0x800424A0
    {
            ctx->lr = 0x7F3A93D4u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3A93D4:
    ctx->pc = 0x7F3A93D4u;
    ctx->downcount -= 5;
    // 7F3A93D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A93D8:
    ctx->pc = 0x7F3A93D8u;
    // 7F3A93D8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A93DC:
    ctx->pc = 0x7F3A93DCu;
    // 7F3A93DC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A93E0:
    ctx->pc = 0x7F3A93E0u;
    // 7F3A93E0: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_7F3A93E4:
    ctx->pc = 0x7F3A93E4u;
    // 7F3A93E4: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A93E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A93E8:
    ctx->pc = 0x7F3A93E8u;
    ctx->downcount -= 5;
    // 7F3A93E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A93EC:
    ctx->pc = 0x7F3A93ECu;
    // 7F3A93EC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A93F0:
    ctx->pc = 0x7F3A93F0u;
    // 7F3A93F0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F3A93F4:
    ctx->pc = 0x7F3A93F4u;
    // 7F3A93F4: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A93F8:
    ctx->pc = 0x7F3A93F8u;
    // 7F3A93F8: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A93FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A93FC:
    ctx->pc = 0x7F3A93FCu;
    ctx->downcount -= 5;
    // 7F3A93FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9400:
    ctx->pc = 0x7F3A9400u;
    // 7F3A9400: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9404:
    ctx->pc = 0x7F3A9404u;
    // 7F3A9404: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3A9408:
    ctx->pc = 0x7F3A9408u;
    // 7F3A9408: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A940C:
    ctx->pc = 0x7F3A940Cu;
    // 7F3A940C: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A9410u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A9410:
    ctx->pc = 0x7F3A9410u;
    ctx->downcount -= 7;
    // 7F3A9410: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9414:
    ctx->pc = 0x7F3A9414u;
    // 7F3A9414: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9418:
    ctx->pc = 0x7F3A9418u;
    // 7F3A9418: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A941C:
    ctx->pc = 0x7F3A941Cu;
    // 7F3A941C: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A9420:
    ctx->pc = 0x7F3A9420u;
    // 7F3A9420: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A9424:
    ctx->pc = 0x7F3A9424u;
    // 7F3A9424: li      r8, 82
    ctx->gpr[8] = (u32)(s32)(82);

label_7F3A9428:
    ctx->pc = 0x7F3A9428u;
    // 7F3A9428: bl      0x80042220
    {
            ctx->lr = 0x7F3A942Cu;
            ctx->pc = 0x80042220u;
            return;
    }

label_7F3A942C:
    ctx->pc = 0x7F3A942Cu;
    ctx->downcount -= 5;
    // 7F3A942C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A9430:
    ctx->pc = 0x7F3A9430u;
    // 7F3A9430: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9434:
    ctx->pc = 0x7F3A9434u;
    // 7F3A9434: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F3A9438:
    ctx->pc = 0x7F3A9438u;
    // 7F3A9438: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_7F3A943C:
    ctx->pc = 0x7F3A943Cu;
    // 7F3A943C: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A9440u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A9440:
    ctx->pc = 0x7F3A9440u;
    ctx->downcount -= 1;
    // 7F3A9440: b       0x7F3A9644
    {
            goto label_7F3A9644;
    }

label_7F3A9444:
    ctx->pc = 0x7F3A9444u;
    ctx->downcount -= 2;
    // 7F3A9444: cmpwi   r30, 0
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

label_7F3A9448:
    ctx->pc = 0x7F3A9448u;
    // 7F3A9448: bc    12, 2, 0x7F3A9644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9644;
        }
    }

label_7F3A944C:
    ctx->pc = 0x7F3A944Cu;
    ctx->downcount -= 6;
    // 7F3A944C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A9450:
    ctx->pc = 0x7F3A9450u;
    // 7F3A9450: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A9454:
    ctx->pc = 0x7F3A9454u;
    // 7F3A9454: addi    r4, r3, -1740
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3A9458:
    ctx->pc = 0x7F3A9458u;
    // 7F3A9458: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A945C:
    ctx->pc = 0x7F3A945Cu;
    // 7F3A945C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9460:
    ctx->pc = 0x7F3A9460u;
    // 7F3A9460: bl      0x800455BC
    {
            ctx->lr = 0x7F3A9464u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3A9464:
    ctx->pc = 0x7F3A9464u;
    ctx->downcount -= 2;
    // 7F3A9464: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9468:
    ctx->pc = 0x7F3A9468u;
    // 7F3A9468: bl      0x800455E0
    {
            ctx->lr = 0x7F3A946Cu;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A946C:
    ctx->pc = 0x7F3A946Cu;
    ctx->downcount -= 2;
    // 7F3A946C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9470:
    ctx->pc = 0x7F3A9470u;
    // 7F3A9470: bl      0x800455E0
    {
            ctx->lr = 0x7F3A9474u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A9474:
    ctx->pc = 0x7F3A9474u;
    ctx->downcount -= 2;
    // 7F3A9474: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9478:
    ctx->pc = 0x7F3A9478u;
    // 7F3A9478: bl      0x800455E0
    {
            ctx->lr = 0x7F3A947Cu;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3A947C:
    ctx->pc = 0x7F3A947Cu;
    ctx->downcount -= 4;
    // 7F3A947C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A9480:
    ctx->pc = 0x7F3A9480u;
    // 7F3A9480: lwz     r0, 12256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9484:
    ctx->pc = 0x7F3A9484u;
    // 7F3A9484: cmpwi   r0, 0
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

label_7F3A9488:
    ctx->pc = 0x7F3A9488u;
    // 7F3A9488: bc    12, 2, 0x7F3A958C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A958C;
        }
    }

label_7F3A948C:
    ctx->pc = 0x7F3A948Cu;
    ctx->downcount -= 2;
    // 7F3A948C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A9490:
    ctx->pc = 0x7F3A9490u;
    // 7F3A9490: bl      0x80045EC8
    {
            ctx->lr = 0x7F3A9494u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3A9494:
    ctx->pc = 0x7F3A9494u;
    ctx->downcount -= 5;
    // 7F3A9494: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9498:
    ctx->pc = 0x7F3A9498u;
    // 7F3A9498: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A949C:
    ctx->pc = 0x7F3A949Cu;
    // 7F3A949C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A94A0:
    ctx->pc = 0x7F3A94A0u;
    // 7F3A94A0: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3A94A4:
    ctx->pc = 0x7F3A94A4u;
    // 7F3A94A4: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A94A8u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A94A8:
    ctx->pc = 0x7F3A94A8u;
    ctx->downcount -= 6;
    // 7F3A94A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A94AC:
    ctx->pc = 0x7F3A94ACu;
    // 7F3A94AC: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A94B0:
    ctx->pc = 0x7F3A94B0u;
    // 7F3A94B0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3A94B4:
    ctx->pc = 0x7F3A94B4u;
    // 7F3A94B4: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F3A94B8:
    ctx->pc = 0x7F3A94B8u;
    // 7F3A94B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A94BC:
    ctx->pc = 0x7F3A94BCu;
    // 7F3A94BC: bl      0x80045818
    {
            ctx->lr = 0x7F3A94C0u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A94C0:
    ctx->pc = 0x7F3A94C0u;
    ctx->downcount -= 6;
    // 7F3A94C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A94C4:
    ctx->pc = 0x7F3A94C4u;
    // 7F3A94C4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A94C8:
    ctx->pc = 0x7F3A94C8u;
    // 7F3A94C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A94CC:
    ctx->pc = 0x7F3A94CCu;
    // 7F3A94CC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F3A94D0:
    ctx->pc = 0x7F3A94D0u;
    // 7F3A94D0: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F3A94D4:
    ctx->pc = 0x7F3A94D4u;
    // 7F3A94D4: bl      0x8004585C
    {
            ctx->lr = 0x7F3A94D8u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A94D8:
    ctx->pc = 0x7F3A94D8u;
    ctx->downcount -= 7;
    // 7F3A94D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A94DC:
    ctx->pc = 0x7F3A94DCu;
    // 7F3A94DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A94E0:
    ctx->pc = 0x7F3A94E0u;
    // 7F3A94E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A94E4:
    ctx->pc = 0x7F3A94E4u;
    // 7F3A94E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A94E8:
    ctx->pc = 0x7F3A94E8u;
    // 7F3A94E8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A94EC:
    ctx->pc = 0x7F3A94ECu;
    // 7F3A94EC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A94F0:
    ctx->pc = 0x7F3A94F0u;
    // 7F3A94F0: bl      0x800458A0
    {
            ctx->lr = 0x7F3A94F4u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A94F4:
    ctx->pc = 0x7F3A94F4u;
    ctx->downcount -= 7;
    // 7F3A94F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A94F8:
    ctx->pc = 0x7F3A94F8u;
    // 7F3A94F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A94FC:
    ctx->pc = 0x7F3A94FCu;
    // 7F3A94FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9500:
    ctx->pc = 0x7F3A9500u;
    // 7F3A9500: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9504:
    ctx->pc = 0x7F3A9504u;
    // 7F3A9504: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9508:
    ctx->pc = 0x7F3A9508u;
    // 7F3A9508: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A950C:
    ctx->pc = 0x7F3A950Cu;
    // 7F3A950C: bl      0x80045908
    {
            ctx->lr = 0x7F3A9510u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A9510:
    ctx->pc = 0x7F3A9510u;
    ctx->downcount -= 5;
    // 7F3A9510: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9514:
    ctx->pc = 0x7F3A9514u;
    // 7F3A9514: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A9518:
    ctx->pc = 0x7F3A9518u;
    // 7F3A9518: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3A951C:
    ctx->pc = 0x7F3A951Cu;
    // 7F3A951C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3A9520:
    ctx->pc = 0x7F3A9520u;
    // 7F3A9520: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A9524u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A9524:
    ctx->pc = 0x7F3A9524u;
    ctx->downcount -= 6;
    // 7F3A9524: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9528:
    ctx->pc = 0x7F3A9528u;
    // 7F3A9528: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3A952C:
    ctx->pc = 0x7F3A952Cu;
    // 7F3A952C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9530:
    ctx->pc = 0x7F3A9530u;
    // 7F3A9530: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F3A9534:
    ctx->pc = 0x7F3A9534u;
    // 7F3A9534: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9538:
    ctx->pc = 0x7F3A9538u;
    // 7F3A9538: bl      0x80045818
    {
            ctx->lr = 0x7F3A953Cu;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A953C:
    ctx->pc = 0x7F3A953Cu;
    ctx->downcount -= 6;
    // 7F3A953C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9540:
    ctx->pc = 0x7F3A9540u;
    // 7F3A9540: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A9544:
    ctx->pc = 0x7F3A9544u;
    // 7F3A9544: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A9548:
    ctx->pc = 0x7F3A9548u;
    // 7F3A9548: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A954C:
    ctx->pc = 0x7F3A954Cu;
    // 7F3A954C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F3A9550:
    ctx->pc = 0x7F3A9550u;
    // 7F3A9550: bl      0x8004585C
    {
            ctx->lr = 0x7F3A9554u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A9554:
    ctx->pc = 0x7F3A9554u;
    ctx->downcount -= 7;
    // 7F3A9554: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9558:
    ctx->pc = 0x7F3A9558u;
    // 7F3A9558: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A955C:
    ctx->pc = 0x7F3A955Cu;
    // 7F3A955C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A9560:
    ctx->pc = 0x7F3A9560u;
    // 7F3A9560: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9564:
    ctx->pc = 0x7F3A9564u;
    // 7F3A9564: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9568:
    ctx->pc = 0x7F3A9568u;
    // 7F3A9568: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A956C:
    ctx->pc = 0x7F3A956Cu;
    // 7F3A956C: bl      0x800458A0
    {
            ctx->lr = 0x7F3A9570u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A9570:
    ctx->pc = 0x7F3A9570u;
    ctx->downcount -= 7;
    // 7F3A9570: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9574:
    ctx->pc = 0x7F3A9574u;
    // 7F3A9574: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9578:
    ctx->pc = 0x7F3A9578u;
    // 7F3A9578: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A957C:
    ctx->pc = 0x7F3A957Cu;
    // 7F3A957C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9580:
    ctx->pc = 0x7F3A9580u;
    // 7F3A9580: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9584:
    ctx->pc = 0x7F3A9584u;
    // 7F3A9584: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A9588:
    ctx->pc = 0x7F3A9588u;
    // 7F3A9588: bl      0x80045908
    {
            ctx->lr = 0x7F3A958Cu;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A958C:
    ctx->pc = 0x7F3A958Cu;
    ctx->downcount -= 1;
    // 7F3A958C: bl      0x80041BD4
    {
            ctx->lr = 0x7F3A9590u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F3A9590:
    ctx->pc = 0x7F3A9590u;
    ctx->downcount -= 3;
    // 7F3A9590: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9594:
    ctx->pc = 0x7F3A9594u;
    // 7F3A9594: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9598:
    ctx->pc = 0x7F3A9598u;
    // 7F3A9598: bl      0x80041500
    {
            ctx->lr = 0x7F3A959Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A959C:
    ctx->pc = 0x7F3A959Cu;
    ctx->downcount -= 3;
    // 7F3A959C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A95A0:
    ctx->pc = 0x7F3A95A0u;
    // 7F3A95A0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A95A4:
    ctx->pc = 0x7F3A95A4u;
    // 7F3A95A4: bl      0x80041500
    {
            ctx->lr = 0x7F3A95A8u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95A8:
    ctx->pc = 0x7F3A95A8u;
    ctx->downcount -= 3;
    // 7F3A95A8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A95AC:
    ctx->pc = 0x7F3A95ACu;
    // 7F3A95AC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A95B0:
    ctx->pc = 0x7F3A95B0u;
    // 7F3A95B0: bl      0x80041500
    {
            ctx->lr = 0x7F3A95B4u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95B4:
    ctx->pc = 0x7F3A95B4u;
    ctx->downcount -= 3;
    // 7F3A95B4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3A95B8:
    ctx->pc = 0x7F3A95B8u;
    // 7F3A95B8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A95BC:
    ctx->pc = 0x7F3A95BCu;
    // 7F3A95BC: bl      0x80041500
    {
            ctx->lr = 0x7F3A95C0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95C0:
    ctx->pc = 0x7F3A95C0u;
    ctx->downcount -= 5;
    // 7F3A95C0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3A95C4:
    ctx->pc = 0x7F3A95C4u;
    // 7F3A95C4: addi    r3, r3, -1740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3A95C8:
    ctx->pc = 0x7F3A95C8u;
    // 7F3A95C8: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A95CC:
    ctx->pc = 0x7F3A95CCu;
    // 7F3A95CC: cmpwi   r0, 0
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

label_7F3A95D0:
    ctx->pc = 0x7F3A95D0u;
    // 7F3A95D0: bc    12, 2, 0x7F3A95E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A95E0;
        }
    }

label_7F3A95D4:
    ctx->pc = 0x7F3A95D4u;
    ctx->downcount -= 3;
    // 7F3A95D4: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F3A95D8:
    ctx->pc = 0x7F3A95D8u;
    // 7F3A95D8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A95DC:
    ctx->pc = 0x7F3A95DCu;
    // 7F3A95DC: bl      0x80041500
    {
            ctx->lr = 0x7F3A95E0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95E0:
    ctx->pc = 0x7F3A95E0u;
    ctx->downcount -= 3;
    // 7F3A95E0: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3A95E4:
    ctx->pc = 0x7F3A95E4u;
    // 7F3A95E4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A95E8:
    ctx->pc = 0x7F3A95E8u;
    // 7F3A95E8: bl      0x80041500
    {
            ctx->lr = 0x7F3A95ECu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95EC:
    ctx->pc = 0x7F3A95ECu;
    ctx->downcount -= 3;
    // 7F3A95EC: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A95F0:
    ctx->pc = 0x7F3A95F0u;
    // 7F3A95F0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A95F4:
    ctx->pc = 0x7F3A95F4u;
    // 7F3A95F4: bl      0x80041500
    {
            ctx->lr = 0x7F3A95F8u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A95F8:
    ctx->pc = 0x7F3A95F8u;
    ctx->downcount -= 2;
    // 7F3A95F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A95FC:
    ctx->pc = 0x7F3A95FCu;
    // 7F3A95FC: bl      0x800424A0
    {
            ctx->lr = 0x7F3A9600u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3A9600:
    ctx->pc = 0x7F3A9600u;
    ctx->downcount -= 5;
    // 7F3A9600: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9604:
    ctx->pc = 0x7F3A9604u;
    // 7F3A9604: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9608:
    ctx->pc = 0x7F3A9608u;
    // 7F3A9608: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A960C:
    ctx->pc = 0x7F3A960Cu;
    // 7F3A960C: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_7F3A9610:
    ctx->pc = 0x7F3A9610u;
    // 7F3A9610: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A9614u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A9614:
    ctx->pc = 0x7F3A9614u;
    ctx->downcount -= 7;
    // 7F3A9614: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9618:
    ctx->pc = 0x7F3A9618u;
    // 7F3A9618: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A961C:
    ctx->pc = 0x7F3A961Cu;
    // 7F3A961C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A9620:
    ctx->pc = 0x7F3A9620u;
    // 7F3A9620: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A9624:
    ctx->pc = 0x7F3A9624u;
    // 7F3A9624: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A9628:
    ctx->pc = 0x7F3A9628u;
    // 7F3A9628: li      r8, 82
    ctx->gpr[8] = (u32)(s32)(82);

label_7F3A962C:
    ctx->pc = 0x7F3A962Cu;
    // 7F3A962C: bl      0x80042220
    {
            ctx->lr = 0x7F3A9630u;
            ctx->pc = 0x80042220u;
            return;
    }

label_7F3A9630:
    ctx->pc = 0x7F3A9630u;
    ctx->downcount -= 5;
    // 7F3A9630: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A9634:
    ctx->pc = 0x7F3A9634u;
    // 7F3A9634: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A9638:
    ctx->pc = 0x7F3A9638u;
    // 7F3A9638: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F3A963C:
    ctx->pc = 0x7F3A963Cu;
    // 7F3A963C: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_7F3A9640:
    ctx->pc = 0x7F3A9640u;
    // 7F3A9640: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A9644u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A840Cu;
                return;
            }
            goto label_7F3A840C;
    }

label_7F3A9644:
    ctx->pc = 0x7F3A9644u;
    ctx->downcount -= 2;
    // 7F3A9644: cmpwi   r31, 0
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

label_7F3A9648:
    ctx->pc = 0x7F3A9648u;
    // 7F3A9648: bc    4, 2, 0x7F3A9654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9654;
        }
    }

label_7F3A964C:
    ctx->pc = 0x7F3A964Cu;
    ctx->downcount -= 2;
    // 7F3A964C: cmpwi   r30, 0
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

label_7F3A9650:
    ctx->pc = 0x7F3A9650u;
    // 7F3A9650: bc    12, 2, 0x7F3A9678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9678;
        }
    }

label_7F3A9654:
    ctx->pc = 0x7F3A9654u;
    ctx->downcount -= 9;
    // 7F3A9654: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A9658:
    ctx->pc = 0x7F3A9658u;
    // 7F3A9658: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3A965C:
    ctx->pc = 0x7F3A965Cu;
    // 7F3A965C: addi    r4, r3, 15464
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15464);

label_7F3A9660:
    ctx->pc = 0x7F3A9660u;
    // 7F3A9660: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A9664:
    ctx->pc = 0x7F3A9664u;
    // 7F3A9664: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9668:
    ctx->pc = 0x7F3A9668u;
    // 7F3A9668: addi    r5, r5, -1740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1740);

label_7F3A966C:
    ctx->pc = 0x7F3A966Cu;
    // 7F3A966C: stw     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9670:
    ctx->pc = 0x7F3A9670u;
    // 7F3A9670: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A9674:
    ctx->pc = 0x7F3A9674u;
    // 7F3A9674: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9678:
    ctx->pc = 0x7F3A9678u;
    ctx->downcount -= 3;
    // 7F3A9678: cmpwi   r31, 0
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

label_7F3A967C:
    ctx->pc = 0x7F3A967Cu;
    // 7F3A967C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9680:
    ctx->pc = 0x7F3A9680u;
    // 7F3A9680: bc    4, 2, 0x7F3A968C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A968C;
        }
    }

label_7F3A9684:
    ctx->pc = 0x7F3A9684u;
    ctx->downcount -= 2;
    // 7F3A9684: cmpwi   r30, 0
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

label_7F3A9688:
    ctx->pc = 0x7F3A9688u;
    // 7F3A9688: bc    12, 2, 0x7F3A9690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9690;
        }
    }

label_7F3A968C:
    ctx->pc = 0x7F3A968Cu;
    ctx->downcount -= 1;
    // 7F3A968C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A9690:
    ctx->pc = 0x7F3A9690u;
    ctx->downcount -= 16;
    // 7F3A9690: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A9694:
    ctx->pc = 0x7F3A9694u;
    // 7F3A9694: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9698:
    ctx->pc = 0x7F3A9698u;
    // 7F3A9698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A969C:
    ctx->pc = 0x7F3A969Cu;
    // 7F3A969C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A96A0:
    ctx->pc = 0x7F3A96A0u;
    // 7F3A96A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A96A4:
    ctx->pc = 0x7F3A96A4u;
    ctx->downcount -= 27;
    // 7F3A96A4: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A96A8:
    ctx->pc = 0x7F3A96A8u;
    // 7F3A96A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A96AC:
    ctx->pc = 0x7F3A96ACu;
    // 7F3A96AC: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A96B0:
    ctx->pc = 0x7F3A96B0u;
    // 7F3A96B0: stmw     r16, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A96B4:
    ctx->pc = 0x7F3A96B4u;
    // 7F3A96B4: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A96B8:
    ctx->pc = 0x7F3A96B8u;
    // 7F3A96B8: lwz     r17, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F3A96BC:
    ctx->pc = 0x7F3A96BCu;
    // 7F3A96BC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A96C0:
    ctx->pc = 0x7F3A96C0u;
    // 7F3A96C0: lwz     r30, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3A96C4:
    ctx->pc = 0x7F3A96C4u;
    // 7F3A96C4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A96C8:
    ctx->pc = 0x7F3A96C8u;
    // 7F3A96C8: lwz     r31, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A96CC:
    ctx->pc = 0x7F3A96CCu;
    // 7F3A96CC: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3A96D0:
    ctx->pc = 0x7F3A96D0u;
    // 7F3A96D0: or   r20, r7, r7
    {
        ctx->gpr[20] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3A96D4:
    ctx->pc = 0x7F3A96D4u;
    // 7F3A96D4: or   r19, r8, r8
    {
        ctx->gpr[19] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3A96D8:
    ctx->pc = 0x7F3A96D8u;
    // 7F3A96D8: or   r18, r9, r9
    {
        ctx->gpr[18] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3A96DC:
    ctx->pc = 0x7F3A96DCu;
    // 7F3A96DC: or   r16, r10, r10
    {
        ctx->gpr[16] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3A96E0:
    ctx->pc = 0x7F3A96E0u;
    // 7F3A96E0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A96E4:
    ctx->pc = 0x7F3A96E4u;
    // 7F3A96E4: bl      0x80043070
    {
            ctx->lr = 0x7F3A96E8u;
            ctx->pc = 0x80043070u;
            return;
    }

label_7F3A96E8:
    ctx->pc = 0x7F3A96E8u;
    ctx->downcount -= 3;
    // 7F3A96E8: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A96EC:
    ctx->pc = 0x7F3A96ECu;
    // 7F3A96EC: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A96F0:
    ctx->pc = 0x7F3A96F0u;
    // 7F3A96F0: bc    12, 2, 0x7F3A9700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9700;
        }
    }

label_7F3A96F4:
    ctx->pc = 0x7F3A96F4u;
    ctx->downcount -= 3;
    // 7F3A96F4: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A96F8:
    ctx->pc = 0x7F3A96F8u;
    // 7F3A96F8: ori     r0, r0, 0x0800
    ctx->gpr[0] = ctx->gpr[0] | 0x0800u;

label_7F3A96FC:
    ctx->pc = 0x7F3A96FCu;
    // 7F3A96FC: stw     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9700:
    ctx->pc = 0x7F3A9700u;
    ctx->downcount -= 2;
    // 7F3A9700: cmpwi   r20, 1
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9704:
    ctx->pc = 0x7F3A9704u;
    // 7F3A9704: bc    12, 2, 0x7F3A9778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9778;
        }
    }

label_7F3A9708:
    ctx->pc = 0x7F3A9708u;
    ctx->downcount -= 3;
    // 7F3A9708: lwz     r0, 388(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A970C:
    ctx->pc = 0x7F3A970Cu;
    // 7F3A970C: cmplwi  r0, 0x0000
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

label_7F3A9710:
    ctx->pc = 0x7F3A9710u;
    // 7F3A9710: bc    12, 2, 0x7F3A9778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9778;
        }
    }

label_7F3A9714:
    ctx->pc = 0x7F3A9714u;
    ctx->downcount -= 3;
    // 7F3A9714: lha     r0, 96(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A9718:
    ctx->pc = 0x7F3A9718u;
    // 7F3A9718: cmpwi   r0, 2
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

label_7F3A971C:
    ctx->pc = 0x7F3A971Cu;
    // 7F3A971C: bc    12, 2, 0x7F3A9778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9778;
        }
    }

label_7F3A9720:
    ctx->pc = 0x7F3A9720u;
    ctx->downcount -= 2;
    // 7F3A9720: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F3A9724:
    ctx->pc = 0x7F3A9724u;
    // 7F3A9724: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3A9728:
    ctx->downcount -= 5;
    // 7F3A9728: addi    r3, r22, 388
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(388);

label_7F3A972C:
    ctx->pc = 0x7F3A972Cu;
    // 7F3A972C: lwzx    r4, r27, r3
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[3];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9730:
    ctx->pc = 0x7F3A9730u;
    // 7F3A9730: lha     r0, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A9734:
    // 7F3A9734: cmpwi   r0, 2
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

label_7F3A9738:
    // 7F3A9738: bc    12, 2, 0x7F3A9768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9768;
        }
    }

label_7F3A973C:
    ctx->pc = 0x7F3A973Cu;
    ctx->downcount -= 11;
    // 7F3A973C: stw     r17, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3A9740:
    // 7F3A9740: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A9744:
    // 7F3A9744: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9748:
    // 7F3A9748: or   r7, r20, r20
    {
        ctx->gpr[7] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A974C:
    ctx->pc = 0x7F3A974Cu;
    // 7F3A974C: stw     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3A9750:
    // 7F3A9750: or   r8, r19, r19
    {
        ctx->gpr[8] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3A9754:
    // 7F3A9754: or   r9, r18, r18
    {
        ctx->gpr[9] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F3A9758:
    // 7F3A9758: or   r10, r16, r16
    {
        ctx->gpr[10] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F3A975C:
    ctx->pc = 0x7F3A975Cu;
    // 7F3A975C: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A9760:
    ctx->pc = 0x7F3A9760u;
    // 7F3A9760: lwzx    r3, r21, r3
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9764:
    // 7F3A9764: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3A9768u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A96A4u;
                return;
            }
            goto label_7F3A96A4;
    }

label_7F3A9768:
    ctx->downcount -= 4;
    // 7F3A9768: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F3A976C:
    // 7F3A976C: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F3A9770:
    // 7F3A9770: cmpwi   r23, 8
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9774:
    // 7F3A9774: bc    12, 0, 0x7F3A9728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9728u;
                return;
            }
            goto label_7F3A9728;
        }
    }

label_7F3A9778:
    ctx->pc = 0x7F3A9778u;
    ctx->downcount -= 2;
    // 7F3A9778: cmpwi   r20, 2
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A977C:
    ctx->pc = 0x7F3A977Cu;
    // 7F3A977C: bc    12, 2, 0x7F3A97F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A97F4;
        }
    }

label_7F3A9780:
    ctx->pc = 0x7F3A9780u;
    ctx->downcount -= 3;
    // 7F3A9780: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9784:
    ctx->pc = 0x7F3A9784u;
    // 7F3A9784: rlwinm. r0, r0, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9788:
    ctx->pc = 0x7F3A9788u;
    // 7F3A9788: bc    12, 2, 0x7F3A97F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A97F4;
        }
    }

label_7F3A978C:
    ctx->downcount -= 1;
    // 7F3A978C: bl      0x8004C5F4
    {
            ctx->lr = 0x7F3A9790u;
            ctx->pc = 0x8004C5F4u;
            return;
    }

label_7F3A9790:
    ctx->downcount -= 2;
    // 7F3A9790: cmpwi   r3, 0
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

label_7F3A9794:
    // 7F3A9794: bc    12, 1, 0x7F3A978C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A978Cu;
                return;
            }
            goto label_7F3A978C;
        }
    }

label_7F3A9798:
    ctx->pc = 0x7F3A9798u;
    ctx->downcount -= 1;
    // 7F3A9798: bl      0x8004C388
    {
            ctx->lr = 0x7F3A979Cu;
            ctx->pc = 0x8004C388u;
            return;
    }

label_7F3A979C:
    ctx->pc = 0x7F3A979Cu;
    ctx->downcount -= 12;
    // 7F3A979C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A97A0:
    ctx->pc = 0x7F3A97A0u;
    // 7F3A97A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A97A4:
    ctx->pc = 0x7F3A97A4u;
    // 7F3A97A4: addi    r4, r3, -27360
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27360);

label_7F3A97A8:
    ctx->pc = 0x7F3A97A8u;
    // 7F3A97A8: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A97AC:
    ctx->pc = 0x7F3A97ACu;
    // 7F3A97AC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A97B0:
    ctx->pc = 0x7F3A97B0u;
    // 7F3A97B0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A97B4:
    ctx->pc = 0x7F3A97B4u;
    // 7F3A97B4: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A97B8:
    ctx->pc = 0x7F3A97B8u;
    // 7F3A97B8: or   r9, r31, r31
    {
        ctx->gpr[9] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A97BC:
    ctx->pc = 0x7F3A97BCu;
    // 7F3A97BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3A97C0:
    ctx->pc = 0x7F3A97C0u;
    // 7F3A97C0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A97C4:
    ctx->pc = 0x7F3A97C4u;
    // 7F3A97C4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A97C8:
    ctx->pc = 0x7F3A97C8u;
    // 7F3A97C8: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3A97CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8E8Cu;
                return;
            }
            goto label_7F3A8E8C;
    }

label_7F3A97CC:
    ctx->pc = 0x7F3A97CCu;
    ctx->downcount -= 3;
    // 7F3A97CC: lwz     r3, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A97D0:
    ctx->pc = 0x7F3A97D0u;
    // 7F3A97D0: rlwinm. r0, r3, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A97D4:
    ctx->pc = 0x7F3A97D4u;
    // 7F3A97D4: bc    12, 2, 0x7F3A97EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A97EC;
        }
    }

label_7F3A97D8:
    ctx->pc = 0x7F3A97D8u;
    ctx->downcount -= 2;
    // 7F3A97D8: cmpwi   r20, 1
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A97DC:
    ctx->pc = 0x7F3A97DCu;
    // 7F3A97DC: bc    4, 2, 0x7F3A97F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A97F4;
        }
    }

label_7F3A97E0:
    ctx->pc = 0x7F3A97E0u;
    ctx->downcount -= 3;
    // 7F3A97E0: rlwinm r0, r3, 0, 14, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFBFFFFu;
    }

label_7F3A97E4:
    ctx->pc = 0x7F3A97E4u;
    // 7F3A97E4: stw     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A97E8:
    ctx->pc = 0x7F3A97E8u;
    // 7F3A97E8: b       0x7F3A97F4
    {
            goto label_7F3A97F4;
    }

label_7F3A97EC:
    ctx->pc = 0x7F3A97ECu;
    ctx->downcount -= 2;
    // 7F3A97EC: rlwinm r0, r3, 0, 14, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFBFFFFu;
    }

label_7F3A97F0:
    ctx->pc = 0x7F3A97F0u;
    // 7F3A97F0: stw     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A97F4:
    ctx->pc = 0x7F3A97F4u;
    ctx->downcount -= 5;
    // 7F3A97F4: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A97F8:
    ctx->pc = 0x7F3A97F8u;
    // 7F3A97F8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A97FC:
    ctx->pc = 0x7F3A97FCu;
    // 7F3A97FC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A9800:
    ctx->pc = 0x7F3A9800u;
    // 7F3A9800: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9804:
    ctx->pc = 0x7F3A9804u;
    // 7F3A9804: bl      0x80042184
    {
            ctx->lr = 0x7F3A9808u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9808:
    ctx->pc = 0x7F3A9808u;
    ctx->downcount -= 5;
    // 7F3A9808: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A980C:
    ctx->pc = 0x7F3A980Cu;
    // 7F3A980C: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_7F3A9810:
    ctx->pc = 0x7F3A9810u;
    // 7F3A9810: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3A9814:
    ctx->pc = 0x7F3A9814u;
    // 7F3A9814: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9818:
    ctx->pc = 0x7F3A9818u;
    // 7F3A9818: bl      0x80042184
    {
            ctx->lr = 0x7F3A981Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A981C:
    ctx->pc = 0x7F3A981Cu;
    ctx->downcount -= 5;
    // 7F3A981C: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9820:
    ctx->pc = 0x7F3A9820u;
    // 7F3A9820: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A9824:
    ctx->pc = 0x7F3A9824u;
    // 7F3A9824: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9828:
    ctx->pc = 0x7F3A9828u;
    // 7F3A9828: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A982C:
    ctx->pc = 0x7F3A982Cu;
    // 7F3A982C: bl      0x80042184
    {
            ctx->lr = 0x7F3A9830u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9830:
    ctx->pc = 0x7F3A9830u;
    ctx->downcount -= 5;
    // 7F3A9830: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9834:
    ctx->pc = 0x7F3A9834u;
    // 7F3A9834: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3A9838:
    ctx->pc = 0x7F3A9838u;
    // 7F3A9838: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A983C:
    ctx->pc = 0x7F3A983Cu;
    // 7F3A983C: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9840:
    ctx->pc = 0x7F3A9840u;
    // 7F3A9840: bl      0x80042184
    {
            ctx->lr = 0x7F3A9844u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9844:
    ctx->pc = 0x7F3A9844u;
    ctx->downcount -= 2;
    // 7F3A9844: cmpwi   r20, 1
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9848:
    ctx->pc = 0x7F3A9848u;
    // 7F3A9848: bc    4, 2, 0x7F3A9858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9858;
        }
    }

label_7F3A984C:
    ctx->pc = 0x7F3A984Cu;
    ctx->downcount -= 3;
    // 7F3A984C: lwz     r24, 428(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(428);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3A9850:
    ctx->pc = 0x7F3A9850u;
    // 7F3A9850: lwz     r23, 432(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(432);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3A9854:
    ctx->pc = 0x7F3A9854u;
    // 7F3A9854: b       0x7F3A9874
    {
            goto label_7F3A9874;
    }

label_7F3A9858:
    ctx->pc = 0x7F3A9858u;
    ctx->downcount -= 2;
    // 7F3A9858: cmpwi   r20, 2
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A985C:
    ctx->pc = 0x7F3A985Cu;
    // 7F3A985C: bc    4, 2, 0x7F3A986C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A986C;
        }
    }

label_7F3A9860:
    ctx->pc = 0x7F3A9860u;
    ctx->downcount -= 3;
    // 7F3A9860: lwz     r24, 436(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(436);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3A9864:
    ctx->pc = 0x7F3A9864u;
    // 7F3A9864: lwz     r23, 440(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(440);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3A9868:
    ctx->pc = 0x7F3A9868u;
    // 7F3A9868: b       0x7F3A9874
    {
            goto label_7F3A9874;
    }

label_7F3A986C:
    ctx->pc = 0x7F3A986Cu;
    ctx->downcount -= 2;
    // 7F3A986C: lwz     r24, 420(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(420);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3A9870:
    ctx->pc = 0x7F3A9870u;
    // 7F3A9870: lwz     r23, 424(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(424);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3A9874:
    ctx->pc = 0x7F3A9874u;
    ctx->downcount -= 5;
    // 7F3A9874: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3A9878:
    ctx->pc = 0x7F3A9878u;
    // 7F3A9878: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A987C:
    ctx->pc = 0x7F3A987Cu;
    // 7F3A987C: addi    r16, r4, -1740
    ctx->gpr[16] = ctx->gpr[4] + (u32)(s32)(-1740);

label_7F3A9880:
    ctx->pc = 0x7F3A9880u;
    // 7F3A9880: addi    r26, r3, 12260
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(12260);

label_7F3A9884:
    ctx->pc = 0x7F3A9884u;
    // 7F3A9884: b       0x7F3A9D18
    {
            goto label_7F3A9D18;
    }

label_7F3A9888:
    ctx->pc = 0x7F3A9888u;
    ctx->downcount -= 11;
    // 7F3A9888: lwz     r22, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3A988C:
    // 7F3A988C: cmpwi   r31, 0
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

label_7F3A9890:
    // 7F3A9890: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F3A9894:
    // 7F3A9894: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3A9898:
    // 7F3A9898: mulli   r0, r22, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[22] * (s64)(s32)324);

label_7F3A989C:
    // 7F3A989C: add   r25, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F3A98A0:
    ctx->pc = 0x7F3A98A0u;
    // 7F3A98A0: lwz     r5, 636(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A98A4:
    // 7F3A98A4: addi    r21, r25, 444
    ctx->gpr[21] = ctx->gpr[25] + (u32)(s32)(444);

label_7F3A98A8:
    // 7F3A98A8: bc    12, 2, 0x7F3A98C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A98C0;
        }
    }

label_7F3A98AC:
    ctx->pc = 0x7F3A98ACu;
    ctx->downcount -= 5;
    // 7F3A98AC: lwz     r3, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A98B0:
    ctx->pc = 0x7F3A98B0u;
    // 7F3A98B0: lwz     r4, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A98B4:
    ctx->pc = 0x7F3A98B4u;
    // 7F3A98B4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A98B8:
    // 7F3A98B8: cmpw    r4, r0
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

label_7F3A98BC:
    // 7F3A98BC: bc    4, 2, 0x7F3A9D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9D14;
        }
    }

label_7F3A98C0:
    ctx->downcount -= 2;
    // 7F3A98C0: rlwinm. r0, r5, 0, 9, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00400000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A98C4:
    // 7F3A98C4: bc    12, 2, 0x7F3A98D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A98D4;
        }
    }

label_7F3A98C8:
    ctx->pc = 0x7F3A98C8u;
    ctx->downcount -= 3;
    // 7F3A98C8: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A98CC:
    // 7F3A98CC: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A98D0:
    // 7F3A98D0: bc    12, 2, 0x7F3A9CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CE4;
        }
    }

label_7F3A98D4:
    ctx->pc = 0x7F3A98D4u;
    ctx->downcount -= 3;
    // 7F3A98D4: lwz     r0, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A98D8:
    // 7F3A98D8: cmplwi  r0, 0x0000
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

label_7F3A98DC:
    // 7F3A98DC: bc    4, 2, 0x7F3A9904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9904;
        }
    }

label_7F3A98E0:
    ctx->downcount -= 2;
    // 7F3A98E0: cmpwi   r22, -1
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A98E4:
    // 7F3A98E4: bc    12, 2, 0x7F3A9904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9904;
        }
    }

label_7F3A98E8:
    ctx->pc = 0x7F3A98E8u;
    ctx->downcount -= 4;
    // 7F3A98E8: lwz     r3, 660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A98EC:
    ctx->pc = 0x7F3A98ECu;
    // 7F3A98EC: lha     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A98F0:
    // 7F3A98F0: cmpwi   r0, -1
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

label_7F3A98F4:
    // 7F3A98F4: bc    12, 2, 0x7F3A9904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9904;
        }
    }

label_7F3A98F8:
    ctx->downcount -= 5;
    // 7F3A98F8: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3A98FC:
    // 7F3A98FC: addi    r0, r3, 636
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(636);

label_7F3A9900:
    ctx->pc = 0x7F3A9900u;
    // 7F3A9900: lwzx    r5, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9904:
    ctx->downcount -= 2;
    // 7F3A9904: and.   r0, r5, r17
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[17];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9908:
    // 7F3A9908: bc    4, 2, 0x7F3A9924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9924;
        }
    }

label_7F3A990C:
    ctx->pc = 0x7F3A990Cu;
    ctx->downcount -= 3;
    // 7F3A990C: lha     r0, 644(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(644);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A9910:
    // 7F3A9910: cmpwi   r0, 2
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

label_7F3A9914:
    // 7F3A9914: bc    12, 2, 0x7F3A9924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9924;
        }
    }

label_7F3A9918:
    ctx->pc = 0x7F3A9918u;
    ctx->downcount -= 3;
    // 7F3A9918: lha     r0, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A991C:
    // 7F3A991C: cmpwi   r0, 0
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

label_7F3A9920:
    // 7F3A9920: bc    4, 2, 0x7F3A9928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9928;
        }
    }

label_7F3A9924:
    ctx->downcount -= 1;
    // 7F3A9924: li      r19, 1
    ctx->gpr[19] = (u32)(s32)(1);

label_7F3A9928:
    ctx->downcount -= 2;
    // 7F3A9928: cmpwi   r31, 0
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

label_7F3A992C:
    // 7F3A992C: bc    12, 2, 0x7F3A9984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9984;
        }
    }

label_7F3A9930:
    ctx->downcount -= 3;
    // 7F3A9930: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3A9934:
    // 7F3A9934: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9938:
    // 7F3A9938: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3A993Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A911Cu;
                return;
            }
            goto label_7F3A911C;
    }

label_7F3A993C:
    ctx->downcount -= 5;
    // 7F3A993C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A9940:
    // 7F3A9940: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9944:
    ctx->pc = 0x7F3A9944u;
    // 7F3A9944: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9948:
    // 7F3A9948: rlwinm. r0, r0, 0, 31, 31
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

label_7F3A994C:
    // 7F3A994C: bc    12, 2, 0x7F3A995C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A995C;
        }
    }

label_7F3A9950:
    ctx->pc = 0x7F3A9950u;
    ctx->downcount -= 3;
    // 7F3A9950: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9954:
    // 7F3A9954: rlwinm. r0, r0, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9958:
    // 7F3A9958: bc    4, 2, 0x7F3A9978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9978;
        }
    }

label_7F3A995C:
    ctx->downcount -= 4;
    // 7F3A995C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3A9960:
    ctx->pc = 0x7F3A9960u;
    // 7F3A9960: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9964:
    // 7F3A9964: rlwinm. r0, r0, 0, 31, 31
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

label_7F3A9968:
    // 7F3A9968: bc    4, 2, 0x7F3A9978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9978;
        }
    }

label_7F3A996C:
    ctx->pc = 0x7F3A996Cu;
    ctx->downcount -= 3;
    // 7F3A996C: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9970:
    // 7F3A9970: rlwinm. r0, r0, 0, 8, 8
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00800000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9974:
    // 7F3A9974: bc    12, 2, 0x7F3A997C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A997C;
        }
    }

label_7F3A9978:
    ctx->downcount -= 1;
    // 7F3A9978: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A997C:
    ctx->downcount -= 2;
    // 7F3A997C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9980:
    // 7F3A9980: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3A9984u;
            ctx->pc = 0x7F3AC5ACu;
            return;
    }

label_7F3A9984:
    ctx->downcount -= 2;
    // 7F3A9984: cmpwi   r22, -1
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9988:
    // 7F3A9988: bc    12, 2, 0x7F3A9CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CBC;
        }
    }

label_7F3A998C:
    ctx->downcount -= 2;
    // 7F3A998C: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9990:
    // 7F3A9990: bc    4, 2, 0x7F3A9CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CBC;
        }
    }

label_7F3A9994:
    ctx->pc = 0x7F3A9994u;
    ctx->downcount -= 3;
    // 7F3A9994: lwz     r0, 240(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(240);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9998:
    // 7F3A9998: cmplwi  r0, 0x0000
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

label_7F3A999C:
    // 7F3A999C: bc    12, 2, 0x7F3A99A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A99A4;
        }
    }

label_7F3A99A0:
    ctx->downcount -= 1;
    // 7F3A99A0: li      r20, 1
    ctx->gpr[20] = (u32)(s32)(1);

label_7F3A99A4:
    ctx->downcount -= 2;
    // 7F3A99A4: cmpwi   r18, 0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A99A8:
    // 7F3A99A8: bc    12, 2, 0x7F3A9C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9C08;
        }
    }

label_7F3A99AC:
    ctx->downcount -= 4;
    // 7F3A99AC: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A99B0:
    ctx->pc = 0x7F3A99B0u;
    // 7F3A99B0: lwz     r0, -12084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A99B4:
    // 7F3A99B4: rlwinm. r0, r0, 0, 31, 31
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

label_7F3A99B8:
    // 7F3A99B8: bc    12, 2, 0x7F3A9BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9BF0;
        }
    }

label_7F3A99BC:
    ctx->downcount -= 2;
    // 7F3A99BC: cmpwi   r30, 2
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

label_7F3A99C0:
    // 7F3A99C0: bc    12, 2, 0x7F3A9BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9BF0;
        }
    }

label_7F3A99C4:
    ctx->downcount -= 2;
    // 7F3A99C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A99C8:
    // 7F3A99C8: bl      0x7F026F5C
    {
            ctx->lr = 0x7F3A99CCu;
            ctx->pc = 0x7F026F5Cu;
            return;
    }

label_7F3A99CC:
    ctx->downcount -= 20;
    // 7F3A99CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A99D0:
    // 7F3A99D0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F3A99D4:
    // 7F3A99D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A99D8:
    ctx->pc = 0x7F3A99D8u;
    // 7F3A99D8: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A99DC:
    // 7F3A99DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A99E0:
    // 7F3A99E0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3A99E4:
    ctx->pc = 0x7F3A99E4u;
    // 7F3A99E4: stw     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A99E8:
    ctx->pc = 0x7F3A99E8u;
    // 7F3A99E8: lfs     f0, -21352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A99E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A99EC:
    ctx->pc = 0x7F3A99ECu;
    // 7F3A99EC: sth     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A99F0:
    ctx->pc = 0x7F3A99F0u;
    // 7F3A99F0: sth     r6, 126(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(126);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F3A99F4:
    ctx->pc = 0x7F3A99F4u;
    // 7F3A99F4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A99F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A99F8:
    ctx->pc = 0x7F3A99F8u;
    // 7F3A99F8: stfs     f1, 12260(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A99F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A99FC:
    ctx->pc = 0x7F3A99FCu;
    // 7F3A99FC: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A99FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9A00:
    ctx->pc = 0x7F3A9A00u;
    // 7F3A9A00: stfs     f1, 16(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9A00u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9A04:
    ctx->pc = 0x7F3A9A04u;
    // 7F3A9A04: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9A04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9A08:
    ctx->pc = 0x7F3A9A08u;
    // 7F3A9A08: stfs     f1, 32(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9A08u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9A0C:
    ctx->pc = 0x7F3A9A0Cu;
    // 7F3A9A0C: stfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9A0Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A9A10:
    ctx->pc = 0x7F3A9A10u;
    // 7F3A9A10: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9A14:
    // 7F3A9A14: rlwinm. r0, r0, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9A18:
    // 7F3A9A18: bc    4, 2, 0x7F3A9BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9BB0;
        }
    }

label_7F3A9A1C:
    ctx->downcount -= 1;
    // 7F3A9A1C: bl      0x7F022504
    {
            ctx->lr = 0x7F3A9A20u;
            ctx->pc = 0x7F022504u;
            return;
    }

label_7F3A9A20:
    ctx->downcount -= 3;
    // 7F3A9A20: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F3A9A24:
    // 7F3A9A24: cmpwi   r0, 36
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9A28:
    // 7F3A9A28: bc    12, 2, 0x7F3A9AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9AE4;
        }
    }

label_7F3A9A2C:
    ctx->downcount -= 1;
    // 7F3A9A2C: bc    4, 0, 0x7F3A9B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9B8C;
        }
    }

label_7F3A9A30:
    ctx->downcount -= 2;
    // 7F3A9A30: cmpwi   r0, 31
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(31);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9A34:
    // 7F3A9A34: bc    12, 2, 0x7F3A9A3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9A3C;
        }
    }

label_7F3A9A38:
    ctx->downcount -= 1;
    // 7F3A9A38: b       0x7F3A9B8C
    {
            goto label_7F3A9B8C;
    }

label_7F3A9A3C:
    ctx->pc = 0x7F3A9A3Cu;
    ctx->downcount -= 8;
    // 7F3A9A3C: lwz     r4, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9A40:
    // 7F3A9A40: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A9A44:
    // 7F3A9A44: addi    r3, r3, 12260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12260);

label_7F3A9A48:
    // 7F3A9A48: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A9A4C:
    // 7F3A9A4C: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3A9A50:
    // 7F3A9A50: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F3A9A54:
    ctx->pc = 0x7F3A9A54u;
    // 7F3A9A54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9A58:
    loop_7F3A9A58(ctx);
    if (ctx->pc == 0x7F3A9A6Cu) goto label_7F3A9A6C;
    return;
label_7F3A9A5C:
    ctx->pc = 0x7F3A9A5Cu;
    // 7F3A9A5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9A60:
    ctx->pc = 0x7F3A9A60u;
    // 7F3A9A60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9A64:
    ctx->pc = 0x7F3A9A64u;
    // 7F3A9A64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9A68:
    // 7F3A9A68: bc    16, 0, 0x7F3A9A58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9A58u;
                return;
            }
            goto label_7F3A9A58;
        }
    }

label_7F3A9A6C:
    ctx->pc = 0x7F3A9A6Cu;
    ctx->downcount -= 6;
    // 7F3A9A6C: lwz     r3, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9A70:
    // 7F3A9A70: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A9A74:
    // 7F3A9A74: addi    r5, r26, 60
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(60);

label_7F3A9A78:
    // 7F3A9A78: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F3A9A7C:
    ctx->pc = 0x7F3A9A7Cu;
    // 7F3A9A7C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9A80:
    loop_7F3A9A80(ctx);
    if (ctx->pc == 0x7F3A9A94u) goto label_7F3A9A94;
    return;
label_7F3A9A84:
    ctx->pc = 0x7F3A9A84u;
    // 7F3A9A84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9A88:
    ctx->pc = 0x7F3A9A88u;
    // 7F3A9A88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9A8C:
    ctx->pc = 0x7F3A9A8Cu;
    // 7F3A9A8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9A90:
    // 7F3A9A90: bc    16, 0, 0x7F3A9A80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9A80u;
                return;
            }
            goto label_7F3A9A80;
        }
    }

label_7F3A9A94:
    ctx->downcount -= 13;
    // 7F3A9A94: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A9A98:
    // 7F3A9A98: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A9A9C:
    ctx->pc = 0x7F3A9A9Cu;
    // 7F3A9A9C: lfs     f1, -21348(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9A9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9AA0:
    // 7F3A9AA0: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F3A9AA4:
    ctx->pc = 0x7F3A9AA4u;
    // 7F3A9AA4: lfs     f0, -21352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9AA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A9AA8:
    // 7F3A9AA8: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9AAC:
    ctx->pc = 0x7F3A9AACu;
    // 7F3A9AAC: stfs     f1, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9AACu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9AB0:
    // 7F3A9AB0: addi    r4, r27, 152
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(152);

label_7F3A9AB4:
    ctx->pc = 0x7F3A9AB4u;
    // 7F3A9AB4: stfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9AB4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9AB8:
    ctx->pc = 0x7F3A9AB8u;
    // 7F3A9AB8: stfs     f1, 112(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9AB8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9ABC:
    ctx->pc = 0x7F3A9ABCu;
    // 7F3A9ABC: stfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9ABCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A9AC0:
    ctx->pc = 0x7F3A9AC0u;
    // 7F3A9AC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9AC4:
    loop_7F3A9AC4(ctx);
    if (ctx->pc == 0x7F3A9AD8u) goto label_7F3A9AD8;
    return;
label_7F3A9AC8:
    ctx->pc = 0x7F3A9AC8u;
    // 7F3A9AC8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9ACC:
    ctx->pc = 0x7F3A9ACCu;
    // 7F3A9ACC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9AD0:
    ctx->pc = 0x7F3A9AD0u;
    // 7F3A9AD0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9AD4:
    // 7F3A9AD4: bc    16, 0, 0x7F3A9AC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9AC4u;
                return;
            }
            goto label_7F3A9AC4;
        }
    }

label_7F3A9AD8:
    ctx->pc = 0x7F3A9AD8u;
    ctx->downcount -= 3;
    // 7F3A9AD8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9ADC:
    ctx->pc = 0x7F3A9ADCu;
    // 7F3A9ADC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9AE0:
    // 7F3A9AE0: b       0x7F3A9BD0
    {
            goto label_7F3A9BD0;
    }

label_7F3A9AE4:
    ctx->pc = 0x7F3A9AE4u;
    ctx->downcount -= 8;
    // 7F3A9AE4: lwz     r4, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9AE8:
    // 7F3A9AE8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A9AEC:
    // 7F3A9AEC: addi    r3, r3, 12260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12260);

label_7F3A9AF0:
    // 7F3A9AF0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A9AF4:
    // 7F3A9AF4: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3A9AF8:
    // 7F3A9AF8: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F3A9AFC:
    ctx->pc = 0x7F3A9AFCu;
    // 7F3A9AFC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9B00:
    loop_7F3A9B00(ctx);
    if (ctx->pc == 0x7F3A9B14u) goto label_7F3A9B14;
    return;
label_7F3A9B04:
    ctx->pc = 0x7F3A9B04u;
    // 7F3A9B04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9B08:
    ctx->pc = 0x7F3A9B08u;
    // 7F3A9B08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9B0C:
    ctx->pc = 0x7F3A9B0Cu;
    // 7F3A9B0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9B10:
    // 7F3A9B10: bc    16, 0, 0x7F3A9B00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B00u;
                return;
            }
            goto label_7F3A9B00;
        }
    }

label_7F3A9B14:
    ctx->pc = 0x7F3A9B14u;
    ctx->downcount -= 6;
    // 7F3A9B14: lwz     r3, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9B18:
    // 7F3A9B18: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A9B1C:
    // 7F3A9B1C: addi    r5, r26, 60
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(60);

label_7F3A9B20:
    // 7F3A9B20: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F3A9B24:
    ctx->pc = 0x7F3A9B24u;
    // 7F3A9B24: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9B28:
    loop_7F3A9B28(ctx);
    if (ctx->pc == 0x7F3A9B3Cu) goto label_7F3A9B3C;
    return;
label_7F3A9B2C:
    ctx->pc = 0x7F3A9B2Cu;
    // 7F3A9B2C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9B30:
    ctx->pc = 0x7F3A9B30u;
    // 7F3A9B30: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9B34:
    ctx->pc = 0x7F3A9B34u;
    // 7F3A9B34: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9B38:
    // 7F3A9B38: bc    16, 0, 0x7F3A9B28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B28u;
                return;
            }
            goto label_7F3A9B28;
        }
    }

label_7F3A9B3C:
    ctx->downcount -= 13;
    // 7F3A9B3C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A9B40:
    // 7F3A9B40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A9B44:
    ctx->pc = 0x7F3A9B44u;
    // 7F3A9B44: lfs     f1, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9B48:
    // 7F3A9B48: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F3A9B4C:
    ctx->pc = 0x7F3A9B4Cu;
    // 7F3A9B4C: lfs     f0, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A9B50:
    // 7F3A9B50: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9B54:
    ctx->pc = 0x7F3A9B54u;
    // 7F3A9B54: stfs     f1, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B54u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9B58:
    // 7F3A9B58: addi    r4, r27, 152
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(152);

label_7F3A9B5C:
    ctx->pc = 0x7F3A9B5Cu;
    // 7F3A9B5C: stfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B5Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9B60:
    ctx->pc = 0x7F3A9B60u;
    // 7F3A9B60: stfs     f1, 112(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B60u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9B64:
    ctx->pc = 0x7F3A9B64u;
    // 7F3A9B64: stfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B64u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A9B68:
    ctx->pc = 0x7F3A9B68u;
    // 7F3A9B68: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A9B6C:
    loop_7F3A9B6C(ctx);
    if (ctx->pc == 0x7F3A9B80u) goto label_7F3A9B80;
    return;
label_7F3A9B70:
    ctx->pc = 0x7F3A9B70u;
    // 7F3A9B70: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3A9B74:
    ctx->pc = 0x7F3A9B74u;
    // 7F3A9B74: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9B78:
    ctx->pc = 0x7F3A9B78u;
    // 7F3A9B78: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3A9B7C:
    // 7F3A9B7C: bc    16, 0, 0x7F3A9B6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9B6Cu;
                return;
            }
            goto label_7F3A9B6C;
        }
    }

label_7F3A9B80:
    ctx->pc = 0x7F3A9B80u;
    ctx->downcount -= 3;
    // 7F3A9B80: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9B84:
    ctx->pc = 0x7F3A9B84u;
    // 7F3A9B84: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9B88:
    // 7F3A9B88: b       0x7F3A9BD0
    {
            goto label_7F3A9BD0;
    }

label_7F3A9B8C:
    ctx->downcount -= 9;
    // 7F3A9B8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A9B90:
    // 7F3A9B90: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A9B94:
    ctx->pc = 0x7F3A9B94u;
    // 7F3A9B94: lfs     f1, -21344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9B98:
    ctx->pc = 0x7F3A9B98u;
    // 7F3A9B98: lfs     f0, -21352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A9B9C:
    ctx->pc = 0x7F3A9B9Cu;
    // 7F3A9B9C: stfs     f1, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9B9Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BA0:
    ctx->pc = 0x7F3A9BA0u;
    // 7F3A9BA0: stfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BA0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BA4:
    ctx->pc = 0x7F3A9BA4u;
    // 7F3A9BA4: stfs     f1, 112(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BA4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BA8:
    ctx->pc = 0x7F3A9BA8u;
    // 7F3A9BA8: stfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BA8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A9BAC:
    // 7F3A9BAC: b       0x7F3A9BD0
    {
            goto label_7F3A9BD0;
    }

label_7F3A9BB0:
    ctx->downcount -= 8;
    // 7F3A9BB0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A9BB4:
    // 7F3A9BB4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A9BB8:
    ctx->pc = 0x7F3A9BB8u;
    // 7F3A9BB8: lfs     f1, -21340(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A9BBC:
    ctx->pc = 0x7F3A9BBCu;
    // 7F3A9BBC: lfs     f0, -21336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A9BC0:
    ctx->pc = 0x7F3A9BC0u;
    // 7F3A9BC0: stfs     f1, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BC0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BC4:
    ctx->pc = 0x7F3A9BC4u;
    // 7F3A9BC4: stfs     f1, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BC4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BC8:
    ctx->pc = 0x7F3A9BC8u;
    // 7F3A9BC8: stfs     f1, 112(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BC8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A9BCC:
    ctx->pc = 0x7F3A9BCCu;
    // 7F3A9BCC: stfs     f0, 48(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9BCCu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A9BD0:
    ctx->downcount -= 7;
    // 7F3A9BD0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A9BD4:
    // 7F3A9BD4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9BD8:
    // 7F3A9BD8: addi    r5, r3, 12260
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12260);

label_7F3A9BDC:
    // 7F3A9BDC: or   r6, r20, r20
    {
        ctx->gpr[6] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A9BE0:
    // 7F3A9BE0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A9BE4:
    // 7F3A9BE4: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F3A9BE8:
    // 7F3A9BE8: bl      0x7F3BC964
    {
            ctx->lr = 0x7F3A9BECu;
            ctx->pc = 0x7F3BC964u;
            return;
    }

label_7F3A9BEC:
    ctx->downcount -= 1;
    // 7F3A9BEC: b       0x7F3A9C08
    {
            goto label_7F3A9C08;
    }

label_7F3A9BF0:
    ctx->pc = 0x7F3A9BF0u;
    ctx->downcount -= 6;
    // 7F3A9BF0: lwz     r5, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9BF4:
    // 7F3A9BF4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9BF8:
    // 7F3A9BF8: or   r6, r20, r20
    {
        ctx->gpr[6] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3A9BFC:
    // 7F3A9BFC: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A9C00:
    // 7F3A9C00: addi    r3, r27, 156
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(156);

label_7F3A9C04:
    // 7F3A9C04: bl      0x7F3BC964
    {
            ctx->lr = 0x7F3A9C08u;
            ctx->pc = 0x7F3BC964u;
            return;
    }

label_7F3A9C08:
    ctx->pc = 0x7F3A9C08u;
    ctx->downcount -= 3;
    // 7F3A9C08: lwz     r4, 220(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C0C:
    // 7F3A9C0C: cmplwi  r4, 0x0000
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

label_7F3A9C10:
    // 7F3A9C10: bc    12, 2, 0x7F3A9C24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9C24;
        }
    }

label_7F3A9C14:
    ctx->downcount -= 3;
    // 7F3A9C14: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A9C18:
    // 7F3A9C18: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A9C1C:
    // 7F3A9C1C: bl      0x80042184
    {
            ctx->lr = 0x7F3A9C20u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9C20:
    ctx->downcount -= 1;
    // 7F3A9C20: b       0x7F3A9C38
    {
            goto label_7F3A9C38;
    }

label_7F3A9C24:
    ctx->pc = 0x7F3A9C24u;
    ctx->downcount -= 5;
    // 7F3A9C24: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C28:
    // 7F3A9C28: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A9C2C:
    // 7F3A9C2C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A9C30:
    ctx->pc = 0x7F3A9C30u;
    // 7F3A9C30: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C34:
    // 7F3A9C34: bl      0x80042184
    {
            ctx->lr = 0x7F3A9C38u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9C38:
    ctx->pc = 0x7F3A9C38u;
    ctx->downcount -= 3;
    // 7F3A9C38: lwz     r4, 228(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C3C:
    // 7F3A9C3C: cmplwi  r4, 0x0000
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

label_7F3A9C40:
    // 7F3A9C40: bc    12, 2, 0x7F3A9C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9C54;
        }
    }

label_7F3A9C44:
    ctx->downcount -= 3;
    // 7F3A9C44: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A9C48:
    // 7F3A9C48: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9C4C:
    // 7F3A9C4C: bl      0x80042184
    {
            ctx->lr = 0x7F3A9C50u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9C50:
    ctx->downcount -= 1;
    // 7F3A9C50: b       0x7F3A9C68
    {
            goto label_7F3A9C68;
    }

label_7F3A9C54:
    ctx->pc = 0x7F3A9C54u;
    ctx->downcount -= 5;
    // 7F3A9C54: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C58:
    // 7F3A9C58: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A9C5C:
    // 7F3A9C5C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9C60:
    ctx->pc = 0x7F3A9C60u;
    // 7F3A9C60: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C64:
    // 7F3A9C64: bl      0x80042184
    {
            ctx->lr = 0x7F3A9C68u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9C68:
    ctx->downcount -= 2;
    // 7F3A9C68: cmpwi   r20, 0
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

label_7F3A9C6C:
    // 7F3A9C6C: bc    12, 2, 0x7F3A9C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9C80;
        }
    }

label_7F3A9C70:
    ctx->pc = 0x7F3A9C70u;
    ctx->downcount -= 4;
    // 7F3A9C70: lwz     r4, 240(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9C74:
    // 7F3A9C74: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F3A9C78:
    // 7F3A9C78: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9C7C:
    // 7F3A9C7C: bl      0x80042184
    {
            ctx->lr = 0x7F3A9C80u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9C80:
    ctx->pc = 0x7F3A9C80u;
    ctx->downcount -= 4;
    // 7F3A9C80: lwz     r3, 660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9C84:
    ctx->pc = 0x7F3A9C84u;
    // 7F3A9C84: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9C88:
    // 7F3A9C88: cmplwi  r3, 0x0000
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

label_7F3A9C8C:
    // 7F3A9C8C: bc    12, 2, 0x7F3A9CAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CAC;
        }
    }

label_7F3A9C90:
    ctx->pc = 0x7F3A9C90u;
    ctx->downcount -= 3;
    // 7F3A9C90: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9C94:
    // 7F3A9C94: rlwinm. r0, r0, 0, 18, 18
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

label_7F3A9C98:
    // 7F3A9C98: bc    12, 2, 0x7F3A9CAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CAC;
        }
    }

label_7F3A9C9C:
    ctx->downcount -= 3;
    // 7F3A9C9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A9CA0:
    // 7F3A9CA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9CA4:
    // 7F3A9CA4: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3A9CA8u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3A9CA8:
    ctx->downcount -= 1;
    // 7F3A9CA8: b       0x7F3A9CD0
    {
            goto label_7F3A9CD0;
    }

label_7F3A9CAC:
    ctx->pc = 0x7F3A9CACu;
    ctx->downcount -= 3;
    // 7F3A9CAC: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9CB0:
    // 7F3A9CB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9CB4:
    // 7F3A9CB4: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3A9CB8u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3A9CB8:
    ctx->downcount -= 1;
    // 7F3A9CB8: b       0x7F3A9CD0
    {
            goto label_7F3A9CD0;
    }

label_7F3A9CBC:
    ctx->downcount -= 2;
    // 7F3A9CBC: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9CC0:
    // 7F3A9CC0: bc    4, 2, 0x7F3A9CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CD0;
        }
    }

label_7F3A9CC4:
    ctx->pc = 0x7F3A9CC4u;
    ctx->downcount -= 3;
    // 7F3A9CC4: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9CC8:
    // 7F3A9CC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9CCC:
    // 7F3A9CCC: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3A9CD0u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3A9CD0:
    ctx->downcount -= 2;
    // 7F3A9CD0: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9CD4:
    // 7F3A9CD4: bc    4, 2, 0x7F3A9CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9CE4;
        }
    }

label_7F3A9CD8:
    ctx->pc = 0x7F3A9CD8u;
    ctx->downcount -= 3;
    // 7F3A9CD8: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9CDC:
    ctx->pc = 0x7F3A9CDCu;
    // 7F3A9CDC: lwz     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9CE0:
    // 7F3A9CE0: bl      0x800466D4
    {
            ctx->lr = 0x7F3A9CE4u;
            ctx->pc = 0x800466D4u;
            return;
    }

label_7F3A9CE4:
    ctx->downcount -= 2;
    // 7F3A9CE4: cmpwi   r22, -1
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9CE8:
    // 7F3A9CE8: bc    12, 2, 0x7F3A9D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9D14;
        }
    }

label_7F3A9CEC:
    ctx->pc = 0x7F3A9CECu;
    ctx->downcount -= 4;
    // 7F3A9CEC: lwz     r3, 660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9CF0:
    ctx->pc = 0x7F3A9CF0u;
    // 7F3A9CF0: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9CF4:
    // 7F3A9CF4: cmplwi  r3, 0x0000
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

label_7F3A9CF8:
    // 7F3A9CF8: bc    12, 2, 0x7F3A9D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9D14;
        }
    }

label_7F3A9CFC:
    ctx->pc = 0x7F3A9CFCu;
    ctx->downcount -= 3;
    // 7F3A9CFC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9D00:
    // 7F3A9D00: rlwinm. r0, r0, 0, 18, 18
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

label_7F3A9D04:
    // 7F3A9D04: bc    12, 2, 0x7F3A9D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9D14;
        }
    }

label_7F3A9D08:
    ctx->pc = 0x7F3A9D08u;
    ctx->downcount -= 3;
    // 7F3A9D08: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9D0C:
    // 7F3A9D0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A9D10:
    // 7F3A9D10: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3A9D14u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3A9D14:
    ctx->downcount -= 1;
    // 7F3A9D14: addi    r24, r24, 136
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(136);

label_7F3A9D18:
    ctx->downcount -= 2;
    // 7F3A9D18: cmplwi  r24, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9D1C:
    // 7F3A9D1C: bc    12, 2, 0x7F3A9D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9D28;
        }
    }

label_7F3A9D20:
    ctx->downcount -= 2;
    // 7F3A9D20: cmplw   r24, r23
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9D24:
    // 7F3A9D24: bc    4, 1, 0x7F3A9888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9888u;
                return;
            }
            goto label_7F3A9888;
        }
    }

label_7F3A9D28:
    ctx->pc = 0x7F3A9D28u;
    ctx->downcount -= 16;
    // 7F3A9D28: lmw     r16, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A9D2C:
    ctx->pc = 0x7F3A9D2Cu;
    // 7F3A9D2C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9D30:
    ctx->pc = 0x7F3A9D30u;
    // 7F3A9D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A9D34:
    ctx->pc = 0x7F3A9D34u;
    // 7F3A9D34: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F3A9D38:
    ctx->pc = 0x7F3A9D38u;
    // 7F3A9D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A9D3C:
    ctx->pc = 0x7F3A9D3Cu;
    ctx->downcount -= 23;
    // 7F3A9D3C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A9D40:
    ctx->pc = 0x7F3A9D40u;
    // 7F3A9D40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A9D44:
    ctx->pc = 0x7F3A9D44u;
    // 7F3A9D44: lis     r7, 32592
    ctx->gpr[7] = ((u32)(s32)(32592) << 16);

label_7F3A9D48:
    ctx->pc = 0x7F3A9D48u;
    // 7F3A9D48: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9D4C:
    ctx->pc = 0x7F3A9D4Cu;
    // 7F3A9D4C: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A9D50:
    ctx->pc = 0x7F3A9D50u;
    // 7F3A9D50: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A9D54:
    ctx->pc = 0x7F3A9D54u;
    // 7F3A9D54: addi    r31, r7, -21852
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(-21852);

label_7F3A9D58:
    ctx->pc = 0x7F3A9D58u;
    // 7F3A9D58: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A9D5C:
    ctx->pc = 0x7F3A9D5Cu;
    // 7F3A9D5C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A9D60:
    ctx->pc = 0x7F3A9D60u;
    // 7F3A9D60: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3A9D64:
    ctx->pc = 0x7F3A9D64u;
    // 7F3A9D64: addi    r3, r31, 3008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3008);

label_7F3A9D68:
    ctx->pc = 0x7F3A9D68u;
    // 7F3A9D68: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9D6C:
    ctx->pc = 0x7F3A9D6Cu;
    // 7F3A9D6C: bl      0x7F114E28
    {
            ctx->lr = 0x7F3A9D70u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3A9D70:
    ctx->pc = 0x7F3A9D70u;
    ctx->downcount -= 3;
    // 7F3A9D70: lwz     r4, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9D74:
    ctx->pc = 0x7F3A9D74u;
    // 7F3A9D74: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9D78:
    ctx->pc = 0x7F3A9D78u;
    // 7F3A9D78: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3A9D7Cu;
            goto label_7F3ABF74;
    }

label_7F3A9D7C:
    ctx->pc = 0x7F3A9D7Cu;
    ctx->downcount -= 2;
    // 7F3A9D7C: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9D80:
    ctx->pc = 0x7F3A9D80u;
    // 7F3A9D80: bc    12, 2, 0x7F3A9FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9FD8;
        }
    }

label_7F3A9D84:
    ctx->pc = 0x7F3A9D84u;
    ctx->downcount -= 9;
    // 7F3A9D84: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A9D88:
    ctx->pc = 0x7F3A9D88u;
    // 7F3A9D88: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3A9D8C:
    ctx->pc = 0x7F3A9D8Cu;
    // 7F3A9D8C: lwz     r5, 15484(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15484);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9D90:
    ctx->pc = 0x7F3A9D90u;
    // 7F3A9D90: addi    r3, r3, -32120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32120);

label_7F3A9D94:
    ctx->pc = 0x7F3A9D94u;
    // 7F3A9D94: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3A9D98:
    ctx->pc = 0x7F3A9D98u;
    // 7F3A9D98: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3A9D9C:
    ctx->pc = 0x7F3A9D9Cu;
    // 7F3A9D9C: cmpwi   r5, 0
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

label_7F3A9DA0:
    ctx->pc = 0x7F3A9DA0u;
    // 7F3A9DA0: bc    4, 1, 0x7F3A9E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9E7C;
        }
    }

label_7F3A9DA4:
    ctx->pc = 0x7F3A9DA4u;
    ctx->downcount -= 5;
    // 7F3A9DA4: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9DA8:
    ctx->pc = 0x7F3A9DA8u;
    // 7F3A9DA8: lwzx    r0, r3, r26
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[26];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9DAC:
    ctx->pc = 0x7F3A9DACu;
    // 7F3A9DAC: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9DB0:
    // 7F3A9DB0: cmplw   r4, r0
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

label_7F3A9DB4:
    // 7F3A9DB4: bc    4, 2, 0x7F3A9E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9E74;
        }
    }

label_7F3A9DB8:
    ctx->pc = 0x7F3A9DB8u;
    ctx->downcount -= 4;
    // 7F3A9DB8: lwz     r5, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9DBC:
    // 7F3A9DBC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9DC0:
    // 7F3A9DC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9DC4:
    // 7F3A9DC4: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3A9DC8u;
            ctx->pc = 0x7F3AC4B0u;
            return;
    }

label_7F3A9DC8:
    ctx->pc = 0x7F3A9DC8u;
    ctx->downcount -= 5;
    // 7F3A9DC8: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A9DCC:
    // 7F3A9DCC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9DD0:
    // 7F3A9DD0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9DD4:
    // 7F3A9DD4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9DD8:
    // 7F3A9DD8: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3A9DDCu;
            ctx->pc = 0x7F3AC188u;
            return;
    }

label_7F3A9DDC:
    ctx->downcount -= 2;
    // 7F3A9DDC: cmpwi   r3, 0
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

label_7F3A9DE0:
    // 7F3A9DE0: bc    12, 2, 0x7F3A9DFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9DFC;
        }
    }

label_7F3A9DE4:
    ctx->pc = 0x7F3A9DE4u;
    ctx->downcount -= 6;
    // 7F3A9DE4: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9DE8:
    // 7F3A9DE8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9DEC:
    ctx->pc = 0x7F3A9DECu;
    // 7F3A9DEC: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A9DF0:
    // 7F3A9DF0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9DF4:
    ctx->pc = 0x7F3A9DF4u;
    // 7F3A9DF4: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A9DF8:
    // 7F3A9DF8: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3A9DFCu;
            ctx->pc = 0x7F3AC438u;
            return;
    }

label_7F3A9DFC:
    ctx->downcount -= 6;
    // 7F3A9DFC: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3A9E00:
    // 7F3A9E00: addi    r11, r3, -31608
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(-31608);

label_7F3A9E04:
    ctx->pc = 0x7F3A9E04u;
    // 7F3A9E04: lwzx    r3, r11, r26
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[26];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9E08:
    ctx->pc = 0x7F3A9E08u;
    // 7F3A9E08: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9E0C:
    // 7F3A9E0C: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9E10:
    // 7F3A9E10: bc    12, 2, 0x7F3A9E20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9E20;
        }
    }

label_7F3A9E14:
    ctx->pc = 0x7F3A9E14u;
    ctx->downcount -= 3;
    // 7F3A9E14: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9E18:
    // 7F3A9E18: ori     r0, r0, 0x0800
    ctx->gpr[0] = ctx->gpr[0] | 0x0800u;

label_7F3A9E1C:
    ctx->pc = 0x7F3A9E1Cu;
    // 7F3A9E1C: stw     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9E20:
    ctx->pc = 0x7F3A9E20u;
    ctx->downcount -= 3;
    // 7F3A9E20: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9E24:
    // 7F3A9E24: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9E28:
    // 7F3A9E28: bc    12, 2, 0x7F3A9E34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9E34;
        }
    }

label_7F3A9E2C:
    ctx->downcount -= 2;
    // 7F3A9E2C: cmpwi   r30, 0
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

label_7F3A9E30:
    // 7F3A9E30: bc    12, 2, 0x7F3A9FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9FD8;
        }
    }

label_7F3A9E34:
    ctx->pc = 0x7F3A9E34u;
    ctx->downcount -= 15;
    // 7F3A9E34: lwz     r3, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9E38:
    // 7F3A9E38: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A9E3C:
    // 7F3A9E3C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9E40:
    // 7F3A9E40: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9E44:
    ctx->pc = 0x7F3A9E44u;
    // 7F3A9E44: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9E48:
    // 7F3A9E48: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A9E4C:
    // 7F3A9E4C: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9E50:
    // 7F3A9E50: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A9E54:
    ctx->pc = 0x7F3A9E54u;
    // 7F3A9E54: lwz     r3, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9E58:
    // 7F3A9E58: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3A9E5C:
    // 7F3A9E5C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A9E60:
    ctx->pc = 0x7F3A9E60u;
    // 7F3A9E60: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9E64:
    ctx->pc = 0x7F3A9E64u;
    // 7F3A9E64: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9E68:
    ctx->pc = 0x7F3A9E68u;
    // 7F3A9E68: lwzx    r3, r11, r26
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[26];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9E6C:
    // 7F3A9E6C: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3A9E70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A96A4u;
                return;
            }
            goto label_7F3A96A4;
    }

label_7F3A9E70:
    ctx->downcount -= 1;
    // 7F3A9E70: b       0x7F3A9FD8
    {
            goto label_7F3A9FD8;
    }

label_7F3A9E74:
    ctx->downcount -= 2;
    // 7F3A9E74: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F3A9E78:
    // 7F3A9E78: bc    16, 0, 0x7F3A9DA4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9DA4u;
                return;
            }
            goto label_7F3A9DA4;
        }
    }

label_7F3A9E7C:
    ctx->pc = 0x7F3A9E7Cu;
    ctx->downcount -= 2;
    // 7F3A9E7C: cmpwi   r5, 128
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A9E80:
    ctx->pc = 0x7F3A9E80u;
    // 7F3A9E80: bc    12, 2, 0x7F3A9FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9FD8;
        }
    }

label_7F3A9E84:
    ctx->pc = 0x7F3A9E84u;
    ctx->downcount -= 5;
    // 7F3A9E84: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9E88:
    ctx->pc = 0x7F3A9E88u;
    // 7F3A9E88: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A9E8C:
    ctx->pc = 0x7F3A9E8Cu;
    // 7F3A9E8C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A9E90:
    ctx->pc = 0x7F3A9E90u;
    // 7F3A9E90: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9E94:
    ctx->pc = 0x7F3A9E94u;
    // 7F3A9E94: bl      0x80042184
    {
            ctx->lr = 0x7F3A9E98u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9E98:
    ctx->pc = 0x7F3A9E98u;
    ctx->downcount -= 5;
    // 7F3A9E98: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9E9C:
    ctx->pc = 0x7F3A9E9Cu;
    // 7F3A9E9C: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_7F3A9EA0:
    ctx->pc = 0x7F3A9EA0u;
    // 7F3A9EA0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3A9EA4:
    ctx->pc = 0x7F3A9EA4u;
    // 7F3A9EA4: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9EA8:
    ctx->pc = 0x7F3A9EA8u;
    // 7F3A9EA8: bl      0x80042184
    {
            ctx->lr = 0x7F3A9EACu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9EAC:
    ctx->pc = 0x7F3A9EACu;
    ctx->downcount -= 5;
    // 7F3A9EAC: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9EB0:
    ctx->pc = 0x7F3A9EB0u;
    // 7F3A9EB0: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3A9EB4:
    ctx->pc = 0x7F3A9EB4u;
    // 7F3A9EB4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9EB8:
    ctx->pc = 0x7F3A9EB8u;
    // 7F3A9EB8: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9EBC:
    ctx->pc = 0x7F3A9EBCu;
    // 7F3A9EBC: bl      0x80042184
    {
            ctx->lr = 0x7F3A9EC0u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9EC0:
    ctx->pc = 0x7F3A9EC0u;
    ctx->downcount -= 5;
    // 7F3A9EC0: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9EC4:
    ctx->pc = 0x7F3A9EC4u;
    // 7F3A9EC4: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3A9EC8:
    ctx->pc = 0x7F3A9EC8u;
    // 7F3A9EC8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3A9ECC:
    ctx->pc = 0x7F3A9ECCu;
    // 7F3A9ECC: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9ED0:
    ctx->pc = 0x7F3A9ED0u;
    // 7F3A9ED0: bl      0x80042184
    {
            ctx->lr = 0x7F3A9ED4u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3A9ED4:
    ctx->pc = 0x7F3A9ED4u;
    ctx->downcount -= 4;
    // 7F3A9ED4: lwz     r5, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9ED8:
    ctx->pc = 0x7F3A9ED8u;
    // 7F3A9ED8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9EDC:
    ctx->pc = 0x7F3A9EDCu;
    // 7F3A9EDC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9EE0:
    ctx->pc = 0x7F3A9EE0u;
    // 7F3A9EE0: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3A9EE4u;
            ctx->pc = 0x7F3AC4B0u;
            return;
    }

label_7F3A9EE4:
    ctx->pc = 0x7F3A9EE4u;
    ctx->downcount -= 8;
    // 7F3A9EE4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9EE8:
    ctx->pc = 0x7F3A9EE8u;
    // 7F3A9EE8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9EEC:
    ctx->pc = 0x7F3A9EECu;
    // 7F3A9EEC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A9EF0:
    ctx->pc = 0x7F3A9EF0u;
    // 7F3A9EF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A9EF4:
    ctx->pc = 0x7F3A9EF4u;
    // 7F3A9EF4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A9EF8:
    ctx->pc = 0x7F3A9EF8u;
    // 7F3A9EF8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A9EFC:
    ctx->pc = 0x7F3A9EFCu;
    // 7F3A9EFC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3A9F00:
    ctx->pc = 0x7F3A9F00u;
    // 7F3A9F00: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3A9F04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A8E8Cu;
                return;
            }
            goto label_7F3A8E8C;
    }

label_7F3A9F04:
    ctx->pc = 0x7F3A9F04u;
    ctx->downcount -= 19;
    // 7F3A9F04: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A9F08:
    ctx->pc = 0x7F3A9F08u;
    // 7F3A9F08: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3A9F0C:
    ctx->pc = 0x7F3A9F0Cu;
    // 7F3A9F0C: addi    r9, r4, 15484
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(15484);

label_7F3A9F10:
    ctx->pc = 0x7F3A9F10u;
    // 7F3A9F10: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3A9F14:
    ctx->pc = 0x7F3A9F14u;
    // 7F3A9F14: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A9F18:
    ctx->pc = 0x7F3A9F18u;
    // 7F3A9F18: addi    r5, r5, -31608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31608);

label_7F3A9F1C:
    ctx->pc = 0x7F3A9F1Cu;
    // 7F3A9F1C: addi    r7, r4, -32120
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-32120);

label_7F3A9F20:
    ctx->pc = 0x7F3A9F20u;
    // 7F3A9F20: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A9F24:
    ctx->pc = 0x7F3A9F24u;
    // 7F3A9F24: rlwinm r10, r8, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_7F3A9F28:
    ctx->pc = 0x7F3A9F28u;
    // 7F3A9F28: addi    r0, r8, 1
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3A9F2C:
    ctx->pc = 0x7F3A9F2Cu;
    // 7F3A9F2C: stwx    r3, r5, r10
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A9F30:
    ctx->pc = 0x7F3A9F30u;
    // 7F3A9F30: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9F34:
    ctx->pc = 0x7F3A9F34u;
    // 7F3A9F34: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9F38:
    ctx->pc = 0x7F3A9F38u;
    // 7F3A9F38: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9F3C:
    ctx->pc = 0x7F3A9F3Cu;
    // 7F3A9F3C: lwz     r8, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A9F40:
    ctx->pc = 0x7F3A9F40u;
    // 7F3A9F40: lwz     r8, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A9F44:
    ctx->pc = 0x7F3A9F44u;
    // 7F3A9F44: stwx    r8, r7, r10
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A9F48:
    ctx->pc = 0x7F3A9F48u;
    // 7F3A9F48: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9F4C:
    ctx->pc = 0x7F3A9F4Cu;
    // 7F3A9F4C: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3A9F50u;
            ctx->pc = 0x7F3AC188u;
            return;
    }

label_7F3A9F50:
    ctx->pc = 0x7F3A9F50u;
    ctx->downcount -= 2;
    // 7F3A9F50: cmpwi   r3, 0
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

label_7F3A9F54:
    ctx->pc = 0x7F3A9F54u;
    // 7F3A9F54: bc    12, 2, 0x7F3A9F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9F70;
        }
    }

label_7F3A9F58:
    ctx->pc = 0x7F3A9F58u;
    ctx->downcount -= 6;
    // 7F3A9F58: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A9F5C:
    ctx->pc = 0x7F3A9F5Cu;
    // 7F3A9F5C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9F60:
    ctx->pc = 0x7F3A9F60u;
    // 7F3A9F60: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A9F64:
    ctx->pc = 0x7F3A9F64u;
    // 7F3A9F64: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A9F68:
    ctx->pc = 0x7F3A9F68u;
    // 7F3A9F68: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A9F6C:
    ctx->pc = 0x7F3A9F6Cu;
    // 7F3A9F6C: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3A9F70u;
            ctx->pc = 0x7F3AC438u;
            return;
    }

label_7F3A9F70:
    ctx->pc = 0x7F3A9F70u;
    ctx->downcount -= 3;
    // 7F3A9F70: lwz     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9F74:
    ctx->pc = 0x7F3A9F74u;
    // 7F3A9F74: rlwinm. r0, r0, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A9F78:
    ctx->pc = 0x7F3A9F78u;
    // 7F3A9F78: bc    12, 2, 0x7F3A9F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9F84;
        }
    }

label_7F3A9F7C:
    ctx->pc = 0x7F3A9F7Cu;
    ctx->downcount -= 2;
    // 7F3A9F7C: cmpwi   r30, 0
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

label_7F3A9F80:
    ctx->pc = 0x7F3A9F80u;
    // 7F3A9F80: bc    12, 2, 0x7F3A9FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A9FD8;
        }
    }

label_7F3A9F84:
    ctx->pc = 0x7F3A9F84u;
    ctx->downcount -= 21;
    // 7F3A9F84: lwz     r5, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A9F88:
    ctx->pc = 0x7F3A9F88u;
    // 7F3A9F88: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3A9F8C:
    ctx->pc = 0x7F3A9F8Cu;
    // 7F3A9F8C: addi    r11, r4, -31608
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(-31608);

label_7F3A9F90:
    ctx->pc = 0x7F3A9F90u;
    // 7F3A9F90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A9F94:
    ctx->pc = 0x7F3A9F94u;
    // 7F3A9F94: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A9F98:
    ctx->pc = 0x7F3A9F98u;
    // 7F3A9F98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A9F9C:
    ctx->pc = 0x7F3A9F9Cu;
    // 7F3A9F9C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9FA0:
    ctx->pc = 0x7F3A9FA0u;
    // 7F3A9FA0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A9FA4:
    ctx->pc = 0x7F3A9FA4u;
    // 7F3A9FA4: lwz     r8, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A9FA8:
    ctx->pc = 0x7F3A9FA8u;
    // 7F3A9FA8: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A9FAC:
    ctx->pc = 0x7F3A9FACu;
    // 7F3A9FAC: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A9FB0:
    ctx->pc = 0x7F3A9FB0u;
    // 7F3A9FB0: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3A9FB4:
    ctx->pc = 0x7F3A9FB4u;
    // 7F3A9FB4: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A9FB8:
    ctx->pc = 0x7F3A9FB8u;
    // 7F3A9FB8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3A9FBC:
    ctx->pc = 0x7F3A9FBCu;
    // 7F3A9FBC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A9FC0:
    ctx->pc = 0x7F3A9FC0u;
    // 7F3A9FC0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9FC4:
    ctx->pc = 0x7F3A9FC4u;
    // 7F3A9FC4: lwz     r0, 15484(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9FC8:
    ctx->pc = 0x7F3A9FC8u;
    // 7F3A9FC8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A9FCC:
    ctx->pc = 0x7F3A9FCCu;
    // 7F3A9FCC: add   r3, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A9FD0:
    ctx->pc = 0x7F3A9FD0u;
    // 7F3A9FD0: lwz     r3, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A9FD4:
    ctx->pc = 0x7F3A9FD4u;
    // 7F3A9FD4: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3A9FD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A96A4u;
                return;
            }
            goto label_7F3A96A4;
    }

label_7F3A9FD8:
    ctx->pc = 0x7F3A9FD8u;
    ctx->downcount -= 16;
    // 7F3A9FD8: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A9FDC:
    ctx->pc = 0x7F3A9FDCu;
    // 7F3A9FDC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A9FE0:
    ctx->pc = 0x7F3A9FE0u;
    // 7F3A9FE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A9FE4:
    ctx->pc = 0x7F3A9FE4u;
    // 7F3A9FE4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3A9FE8:
    ctx->pc = 0x7F3A9FE8u;
    // 7F3A9FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3A9FEC:
    ctx->pc = 0x7F3A9FECu;
    ctx->downcount -= 52;
    // 7F3A9FEC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A9FF0:
    ctx->pc = 0x7F3A9FF0u;
    // 7F3A9FF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A9FF4:
    ctx->pc = 0x7F3A9FF4u;
    // 7F3A9FF4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A9FF8:
    ctx->pc = 0x7F3A9FF8u;
    // 7F3A9FF8: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A9FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3A9FFC:
    ctx->pc = 0x7F3A9FFCu;
    // 7F3A9FFC: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3A9FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3A9FFCu);
        if (ctx->exception) return;
    }

label_7F3AA000:
    ctx->pc = 0x7F3AA000u;
    // 7F3AA000: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F3AA004:
    ctx->pc = 0x7F3AA004u;
    // 7F3AA004: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F3AA004u);
        if (ctx->exception) return;
    }

label_7F3AA008:
    ctx->pc = 0x7F3AA008u;
    // 7F3AA008: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F3AA00C:
    ctx->pc = 0x7F3AA00Cu;
    // 7F3AA00C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA00Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F3AA00Cu);
        if (ctx->exception) return;
    }

label_7F3AA010:
    ctx->pc = 0x7F3AA010u;
    // 7F3AA010: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F3AA014:
    ctx->pc = 0x7F3AA014u;
    // 7F3AA014: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F3AA014u);
        if (ctx->exception) return;
    }

label_7F3AA018:
    ctx->pc = 0x7F3AA018u;
    // 7F3AA018: lwz     r4, 920(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA01C:
    ctx->pc = 0x7F3AA01Cu;
    // 7F3AA01C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F3AA020:
    ctx->pc = 0x7F3AA020u;
    // 7F3AA020: lwz     r0, 924(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA024:
    ctx->pc = 0x7F3AA024u;
    // 7F3AA024: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F3AA028:
    ctx->pc = 0x7F3AA028u;
    // 7F3AA028: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F3AA02C:
    ctx->pc = 0x7F3AA02Cu;
    // 7F3AA02C: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F3AA030:
    ctx->pc = 0x7F3AA030u;
    // 7F3AA030: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AA034:
    ctx->pc = 0x7F3AA034u;
    // 7F3AA034: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3AA038:
    ctx->pc = 0x7F3AA038u;
    // 7F3AA038: lfs     f31, 896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA038u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F3AA03C:
    ctx->pc = 0x7F3AA03Cu;
    // 7F3AA03C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AA040:
    ctx->pc = 0x7F3AA040u;
    // 7F3AA040: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AA044:
    ctx->pc = 0x7F3AA044u;
    // 7F3AA044: lfd     f2, -21360(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA044u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-21360);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA048:
    ctx->pc = 0x7F3AA048u;
    // 7F3AA048: fmuls   f29, f31, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3AA048u)) return;
    ppc_fmuls(ctx, 29, 31, 31);

label_7F3AA04C:
    ctx->pc = 0x7F3AA04Cu;
    // 7F3AA04C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA04Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA050:
    ctx->pc = 0x7F3AA050u;
    // 7F3AA050: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA054:
    ctx->pc = 0x7F3AA054u;
    // 7F3AA054: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AA054u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F3AA058:
    ctx->pc = 0x7F3AA058u;
    // 7F3AA058: lfs     f3, -21332(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA058u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3AA05C:
    ctx->pc = 0x7F3AA05Cu;
    // 7F3AA05C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AA060:
    ctx->pc = 0x7F3AA060u;
    // 7F3AA060: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA060u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA064:
    ctx->pc = 0x7F3AA064u;
    // 7F3AA064: fmuls   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA064u)) return;
    ppc_fmuls(ctx, 3, 3, 0);

label_7F3AA068:
    ctx->pc = 0x7F3AA068u;
    // 7F3AA068: lfs     f0, -21372(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA068u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AA06C:
    ctx->pc = 0x7F3AA06Cu;
    // 7F3AA06C: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AA06Cu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F3AA070:
    ctx->pc = 0x7F3AA070u;
    // 7F3AA070: fadds   f1, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F3AA070u)) return;
    ppc_fadds(ctx, 1, 0, 29);

label_7F3AA074:
    ctx->pc = 0x7F3AA074u;
    // 7F3AA074: fdivs   f28, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AA074u)) return;
    ppc_fdivs(ctx, 28, 3, 2);

label_7F3AA078:
    ctx->pc = 0x7F3AA078u;
    // 7F3AA078: bl      0x80006668
    {
            ctx->lr = 0x7F3AA07Cu;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F3AA07C:
    ctx->pc = 0x7F3AA07Cu;
    ctx->downcount -= 3;
    // 7F3AA07C: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AA07Cu)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F3AA080:
    ctx->pc = 0x7F3AA080u;
    // 7F3AA080: fmadds f1, f28, f28, f29
    if (!ppc_fp_available_inline(ctx, 0x7F3AA080u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[28], ctx->fpr[28], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F3AA084:
    ctx->pc = 0x7F3AA084u;
    // 7F3AA084: bl      0x80006668
    {
            ctx->lr = 0x7F3AA088u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F3AA088:
    ctx->pc = 0x7F3AA088u;
    ctx->downcount -= 133;
    // 7F3AA088: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AA08C:
    ctx->pc = 0x7F3AA08Cu;
    // 7F3AA08C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F3AA090:
    ctx->pc = 0x7F3AA090u;
    // 7F3AA090: lfs     f0, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA090u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AA094:
    ctx->pc = 0x7F3AA094u;
    // 7F3AA094: addi    r6, r5, -21376
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-21376);

label_7F3AA098:
    ctx->pc = 0x7F3AA098u;
    // 7F3AA098: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AA09C:
    ctx->pc = 0x7F3AA09Cu;
    // 7F3AA09C: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AA0A0:
    ctx->pc = 0x7F3AA0A0u;
    // 7F3AA0A0: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0A0u)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F3AA0A4:
    ctx->pc = 0x7F3AA0A4u;
    // 7F3AA0A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AA0A8:
    ctx->pc = 0x7F3AA0A8u;
    // 7F3AA0A8: lfs     f3, -21328(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3AA0AC:
    ctx->pc = 0x7F3AA0ACu;
    // 7F3AA0AC: addi    r5, r5, -31092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31092);

label_7F3AA0B0:
    ctx->pc = 0x7F3AA0B0u;
    // 7F3AA0B0: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0B0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F3AA0B4:
    ctx->pc = 0x7F3AA0B4u;
    // 7F3AA0B4: lfs     f2, 13476(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3AA0B8:
    ctx->pc = 0x7F3AA0B8u;
    // 7F3AA0B8: fneg    f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0B8u)) return;
    ctx->fpr[6] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3AA0BC:
    ctx->pc = 0x7F3AA0BCu;
    // 7F3AA0BC: stfs     f2, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3AA0C0:
    ctx->pc = 0x7F3AA0C0u;
    // 7F3AA0C0: fdivs   f0, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0C0u)) return;
    ppc_fdivs(ctx, 0, 28, 1);

label_7F3AA0C4:
    ctx->pc = 0x7F3AA0C4u;
    // 7F3AA0C4: stfs     f3, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3AA0C8:
    ctx->pc = 0x7F3AA0C8u;
    // 7F3AA0C8: stfs     f4, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0CC:
    ctx->pc = 0x7F3AA0CCu;
    // 7F3AA0CC: stfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0D0:
    ctx->pc = 0x7F3AA0D0u;
    // 7F3AA0D0: stfs     f4, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0D4:
    ctx->pc = 0x7F3AA0D4u;
    // 7F3AA0D4: stfs     f4, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0D8:
    ctx->pc = 0x7F3AA0D8u;
    // 7F3AA0D8: fneg    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0D8u)) return;
    ctx->fpr[3] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3AA0DC:
    ctx->pc = 0x7F3AA0DCu;
    // 7F3AA0DC: stfs     f6, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F3AA0E0:
    ctx->pc = 0x7F3AA0E0u;
    // 7F3AA0E0: fdivs   f5, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0E0u)) return;
    ppc_fdivs(ctx, 5, 31, 30);

label_7F3AA0E4:
    ctx->pc = 0x7F3AA0E4u;
    // 7F3AA0E4: stfs     f4, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0E8:
    ctx->pc = 0x7F3AA0E8u;
    // 7F3AA0E8: stfs     f4, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0EC:
    ctx->pc = 0x7F3AA0ECu;
    // 7F3AA0EC: stfs     f6, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F3AA0F0:
    ctx->pc = 0x7F3AA0F0u;
    // 7F3AA0F0: stfs     f4, 60(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0F4:
    ctx->pc = 0x7F3AA0F4u;
    // 7F3AA0F4: stfs     f4, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA0F8:
    ctx->pc = 0x7F3AA0F8u;
    // 7F3AA0F8: fneg    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0F8u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F3AA0FC:
    ctx->pc = 0x7F3AA0FCu;
    // 7F3AA0FC: stfs     f5, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA0FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F3AA100:
    ctx->pc = 0x7F3AA100u;
    // 7F3AA100: fdivs   f2, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AA100u)) return;
    ppc_fdivs(ctx, 2, 31, 1);

label_7F3AA104:
    ctx->pc = 0x7F3AA104u;
    // 7F3AA104: stfs     f3, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA104u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3AA108:
    ctx->pc = 0x7F3AA108u;
    // 7F3AA108: stfs     f4, 76(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA108u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA10C:
    ctx->pc = 0x7F3AA10Cu;
    // 7F3AA10C: stfs     f4, 64(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA10Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F3AA110:
    ctx->pc = 0x7F3AA110u;
    // 7F3AA110: stfs     f3, 72(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA110u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F3AA114:
    ctx->pc = 0x7F3AA114u;
    // 7F3AA114: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AA114u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F3AA118:
    ctx->pc = 0x7F3AA118u;
    // 7F3AA118: stfs     f2, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA118u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F3AA11C:
    ctx->pc = 0x7F3AA11Cu;
    // 7F3AA11C: fneg    f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F3AA11Cu)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F3AA120:
    ctx->pc = 0x7F3AA120u;
    // 7F3AA120: stfs     f0, 68(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA120u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AA124:
    ctx->pc = 0x7F3AA124u;
    // 7F3AA124: stfs     f1, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA124u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AA128:
    ctx->pc = 0x7F3AA128u;
    // 7F3AA128: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA128u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AA128u);
        if (ctx->exception) return;
    }

label_7F3AA12C:
    ctx->pc = 0x7F3AA12Cu;
    // 7F3AA12C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA12Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA130:
    ctx->pc = 0x7F3AA130u;
    // 7F3AA130: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F3AA130u);
        if (ctx->exception) return;
    }

label_7F3AA134:
    ctx->pc = 0x7F3AA134u;
    // 7F3AA134: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA138:
    ctx->pc = 0x7F3AA138u;
    // 7F3AA138: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F3AA138u);
        if (ctx->exception) return;
    }

label_7F3AA13C:
    ctx->pc = 0x7F3AA13Cu;
    // 7F3AA13C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA140:
    ctx->pc = 0x7F3AA140u;
    // 7F3AA140: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AA140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F3AA140u);
        if (ctx->exception) return;
    }

label_7F3AA144:
    ctx->pc = 0x7F3AA144u;
    // 7F3AA144: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA148:
    ctx->pc = 0x7F3AA148u;
    // 7F3AA148: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AA14C:
    ctx->pc = 0x7F3AA14Cu;
    // 7F3AA14C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AA150:
    ctx->pc = 0x7F3AA150u;
    // 7F3AA150: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3AA154:
    ctx->pc = 0x7F3AA154u;
    // 7F3AA154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AA158:
    ctx->pc = 0x7F3AA158u;
    ctx->downcount -= 20;
    // 7F3AA158: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AA15C:
    ctx->pc = 0x7F3AA15Cu;
    // 7F3AA15C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AA160:
    ctx->pc = 0x7F3AA160u;
    // 7F3AA160: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA164:
    ctx->pc = 0x7F3AA164u;
    // 7F3AA164: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AA168:
    ctx->pc = 0x7F3AA168u;
    // 7F3AA168: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AA16C:
    ctx->pc = 0x7F3AA16Cu;
    // 7F3AA16C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AA170:
    ctx->pc = 0x7F3AA170u;
    // 7F3AA170: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F3AA174:
    ctx->pc = 0x7F3AA174u;
    // 7F3AA174: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA178:
    ctx->pc = 0x7F3AA178u;
    // 7F3AA178: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA17C:
    ctx->pc = 0x7F3AA17Cu;
    // 7F3AA17C: bc    12, 2, 0x7F3AA184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA184;
        }
    }

label_7F3AA180:
    ctx->pc = 0x7F3AA180u;
    ctx->downcount -= 1;
    // 7F3AA180: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3AA184:
    ctx->pc = 0x7F3AA184u;
    ctx->downcount -= 9;
    // 7F3AA184: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA188:
    ctx->pc = 0x7F3AA188u;
    // 7F3AA188: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA18C:
    ctx->pc = 0x7F3AA18Cu;
    // 7F3AA18C: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA190:
    ctx->pc = 0x7F3AA190u;
    // 7F3AA190: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA194:
    ctx->pc = 0x7F3AA194u;
    // 7F3AA194: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA198:
    ctx->pc = 0x7F3AA198u;
    // 7F3AA198: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA19C:
    ctx->pc = 0x7F3AA19Cu;
    // 7F3AA19C: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA1A0:
    ctx->pc = 0x7F3AA1A0u;
    // 7F3AA1A0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AA1A4:
    ctx->pc = 0x7F3AA1A4u;
    // 7F3AA1A4: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AA1A8u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AA1A8:
    ctx->pc = 0x7F3AA1A8u;
    ctx->downcount -= 5;
    // 7F3AA1A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA1AC:
    ctx->pc = 0x7F3AA1ACu;
    // 7F3AA1AC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA1B0:
    ctx->pc = 0x7F3AA1B0u;
    // 7F3AA1B0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA1B4:
    ctx->pc = 0x7F3AA1B4u;
    // 7F3AA1B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA1B8:
    ctx->pc = 0x7F3AA1B8u;
    // 7F3AA1B8: bl      0x7F3AA360
    {
            ctx->lr = 0x7F3AA1BCu;
            goto label_7F3AA360;
    }

label_7F3AA1BC:
    ctx->pc = 0x7F3AA1BCu;
    ctx->downcount -= 16;
    // 7F3AA1BC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AA1C0:
    ctx->pc = 0x7F3AA1C0u;
    // 7F3AA1C0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA1C4:
    ctx->pc = 0x7F3AA1C4u;
    // 7F3AA1C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AA1C8:
    ctx->pc = 0x7F3AA1C8u;
    // 7F3AA1C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AA1CC:
    ctx->pc = 0x7F3AA1CCu;
    // 7F3AA1CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AA1D0:
    ctx->pc = 0x7F3AA1D0u;
    ctx->downcount -= 20;
    // 7F3AA1D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AA1D4:
    ctx->pc = 0x7F3AA1D4u;
    // 7F3AA1D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AA1D8:
    ctx->pc = 0x7F3AA1D8u;
    // 7F3AA1D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA1DC:
    ctx->pc = 0x7F3AA1DCu;
    // 7F3AA1DC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AA1E0:
    ctx->pc = 0x7F3AA1E0u;
    // 7F3AA1E0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AA1E4:
    ctx->pc = 0x7F3AA1E4u;
    // 7F3AA1E4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AA1E8:
    ctx->pc = 0x7F3AA1E8u;
    // 7F3AA1E8: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_7F3AA1EC:
    ctx->pc = 0x7F3AA1ECu;
    // 7F3AA1EC: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA1F0:
    ctx->pc = 0x7F3AA1F0u;
    // 7F3AA1F0: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA1F4:
    ctx->pc = 0x7F3AA1F4u;
    // 7F3AA1F4: bc    12, 2, 0x7F3AA1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA1FC;
        }
    }

label_7F3AA1F8:
    ctx->pc = 0x7F3AA1F8u;
    ctx->downcount -= 1;
    // 7F3AA1F8: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F3AA1FC:
    ctx->pc = 0x7F3AA1FCu;
    ctx->downcount -= 8;
    // 7F3AA1FC: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA200:
    ctx->pc = 0x7F3AA200u;
    // 7F3AA200: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA204:
    ctx->pc = 0x7F3AA204u;
    // 7F3AA204: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA208:
    ctx->pc = 0x7F3AA208u;
    // 7F3AA208: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA20C:
    ctx->pc = 0x7F3AA20Cu;
    // 7F3AA20C: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA210:
    ctx->pc = 0x7F3AA210u;
    // 7F3AA210: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA214:
    ctx->pc = 0x7F3AA214u;
    // 7F3AA214: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA218:
    ctx->pc = 0x7F3AA218u;
    // 7F3AA218: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3AA21Cu;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3AA21C:
    ctx->pc = 0x7F3AA21Cu;
    ctx->downcount -= 9;
    // 7F3AA21C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AA220:
    ctx->pc = 0x7F3AA220u;
    // 7F3AA220: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AA224:
    ctx->pc = 0x7F3AA224u;
    // 7F3AA224: addi    r31, r3, -1740
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3AA228:
    ctx->pc = 0x7F3AA228u;
    // 7F3AA228: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AA22C:
    ctx->pc = 0x7F3AA22Cu;
    // 7F3AA22C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA230:
    ctx->pc = 0x7F3AA230u;
    // 7F3AA230: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA234:
    ctx->pc = 0x7F3AA234u;
    // 7F3AA234: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA238:
    ctx->pc = 0x7F3AA238u;
    // 7F3AA238: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AA23C:
    ctx->pc = 0x7F3AA23Cu;
    // 7F3AA23C: bl      0x7F3AA360
    {
            ctx->lr = 0x7F3AA240u;
            goto label_7F3AA360;
    }

label_7F3AA240:
    ctx->pc = 0x7F3AA240u;
    ctx->downcount -= 18;
    // 7F3AA240: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AA244:
    ctx->pc = 0x7F3AA244u;
    // 7F3AA244: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA248:
    ctx->pc = 0x7F3AA248u;
    // 7F3AA248: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AA24C:
    ctx->pc = 0x7F3AA24Cu;
    // 7F3AA24C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA250:
    ctx->pc = 0x7F3AA250u;
    // 7F3AA250: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AA254:
    ctx->pc = 0x7F3AA254u;
    // 7F3AA254: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AA258:
    ctx->pc = 0x7F3AA258u;
    // 7F3AA258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AA25C:
    ctx->pc = 0x7F3AA25Cu;
    ctx->downcount -= 20;
    // 7F3AA25C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AA260:
    ctx->pc = 0x7F3AA260u;
    // 7F3AA260: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AA264:
    ctx->pc = 0x7F3AA264u;
    // 7F3AA264: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA268:
    ctx->pc = 0x7F3AA268u;
    // 7F3AA268: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AA26C:
    ctx->pc = 0x7F3AA26Cu;
    // 7F3AA26C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AA270:
    ctx->pc = 0x7F3AA270u;
    // 7F3AA270: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AA274:
    ctx->pc = 0x7F3AA274u;
    // 7F3AA274: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F3AA278:
    ctx->pc = 0x7F3AA278u;
    // 7F3AA278: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA27C:
    ctx->pc = 0x7F3AA27Cu;
    // 7F3AA27C: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA280:
    ctx->pc = 0x7F3AA280u;
    // 7F3AA280: bc    12, 2, 0x7F3AA288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA288;
        }
    }

label_7F3AA284:
    ctx->pc = 0x7F3AA284u;
    ctx->downcount -= 1;
    // 7F3AA284: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3AA288:
    ctx->pc = 0x7F3AA288u;
    ctx->downcount -= 9;
    // 7F3AA288: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA28C:
    ctx->pc = 0x7F3AA28Cu;
    // 7F3AA28C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA290:
    ctx->pc = 0x7F3AA290u;
    // 7F3AA290: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA294:
    ctx->pc = 0x7F3AA294u;
    // 7F3AA294: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA298:
    ctx->pc = 0x7F3AA298u;
    // 7F3AA298: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA29C:
    ctx->pc = 0x7F3AA29Cu;
    // 7F3AA29C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA2A0:
    ctx->pc = 0x7F3AA2A0u;
    // 7F3AA2A0: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA2A4:
    ctx->pc = 0x7F3AA2A4u;
    // 7F3AA2A4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AA2A8:
    ctx->pc = 0x7F3AA2A8u;
    // 7F3AA2A8: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AA2ACu;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AA2AC:
    ctx->pc = 0x7F3AA2ACu;
    ctx->downcount -= 5;
    // 7F3AA2AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA2B0:
    ctx->pc = 0x7F3AA2B0u;
    // 7F3AA2B0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA2B4:
    ctx->pc = 0x7F3AA2B4u;
    // 7F3AA2B4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA2B8:
    ctx->pc = 0x7F3AA2B8u;
    // 7F3AA2B8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F3AA2BC:
    ctx->pc = 0x7F3AA2BCu;
    // 7F3AA2BC: bl      0x7F3AA360
    {
            ctx->lr = 0x7F3AA2C0u;
            goto label_7F3AA360;
    }

label_7F3AA2C0:
    ctx->pc = 0x7F3AA2C0u;
    ctx->downcount -= 16;
    // 7F3AA2C0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AA2C4:
    ctx->pc = 0x7F3AA2C4u;
    // 7F3AA2C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA2C8:
    ctx->pc = 0x7F3AA2C8u;
    // 7F3AA2C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AA2CC:
    ctx->pc = 0x7F3AA2CCu;
    // 7F3AA2CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AA2D0:
    ctx->pc = 0x7F3AA2D0u;
    // 7F3AA2D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AA2D4:
    ctx->pc = 0x7F3AA2D4u;
    ctx->downcount -= 20;
    // 7F3AA2D4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AA2D8:
    ctx->pc = 0x7F3AA2D8u;
    // 7F3AA2D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AA2DC:
    ctx->pc = 0x7F3AA2DCu;
    // 7F3AA2DC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA2E0:
    ctx->pc = 0x7F3AA2E0u;
    // 7F3AA2E0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AA2E4:
    ctx->pc = 0x7F3AA2E4u;
    // 7F3AA2E4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AA2E8:
    ctx->pc = 0x7F3AA2E8u;
    // 7F3AA2E8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AA2EC:
    ctx->pc = 0x7F3AA2ECu;
    // 7F3AA2EC: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F3AA2F0:
    ctx->pc = 0x7F3AA2F0u;
    // 7F3AA2F0: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA2F4:
    ctx->pc = 0x7F3AA2F4u;
    // 7F3AA2F4: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA2F8:
    ctx->pc = 0x7F3AA2F8u;
    // 7F3AA2F8: bc    12, 2, 0x7F3AA300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA300;
        }
    }

label_7F3AA2FC:
    ctx->pc = 0x7F3AA2FCu;
    ctx->downcount -= 1;
    // 7F3AA2FC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3AA300:
    ctx->pc = 0x7F3AA300u;
    ctx->downcount -= 9;
    // 7F3AA300: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA304:
    ctx->pc = 0x7F3AA304u;
    // 7F3AA304: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA308:
    ctx->pc = 0x7F3AA308u;
    // 7F3AA308: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA30C:
    ctx->pc = 0x7F3AA30Cu;
    // 7F3AA30C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA310:
    ctx->pc = 0x7F3AA310u;
    // 7F3AA310: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA314:
    ctx->pc = 0x7F3AA314u;
    // 7F3AA314: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA318:
    ctx->pc = 0x7F3AA318u;
    // 7F3AA318: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA31C:
    ctx->pc = 0x7F3AA31Cu;
    // 7F3AA31C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AA320:
    ctx->pc = 0x7F3AA320u;
    // 7F3AA320: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AA324u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AA324:
    ctx->pc = 0x7F3AA324u;
    ctx->downcount -= 5;
    // 7F3AA324: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA328:
    ctx->pc = 0x7F3AA328u;
    // 7F3AA328: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA32C:
    ctx->pc = 0x7F3AA32Cu;
    // 7F3AA32C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA330:
    ctx->pc = 0x7F3AA330u;
    // 7F3AA330: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AA334:
    ctx->pc = 0x7F3AA334u;
    // 7F3AA334: bl      0x7F3AA360
    {
            ctx->lr = 0x7F3AA338u;
            goto label_7F3AA360;
    }

label_7F3AA338:
    ctx->pc = 0x7F3AA338u;
    ctx->downcount -= 5;
    // 7F3AA338: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA33C:
    ctx->pc = 0x7F3AA33Cu;
    // 7F3AA33C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AA340:
    ctx->pc = 0x7F3AA340u;
    // 7F3AA340: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA344:
    ctx->pc = 0x7F3AA344u;
    // 7F3AA344: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F3AA348:
    ctx->pc = 0x7F3AA348u;
    // 7F3AA348: bl      0x7F3AA360
    {
            ctx->lr = 0x7F3AA34Cu;
            goto label_7F3AA360;
    }

label_7F3AA34C:
    ctx->pc = 0x7F3AA34Cu;
    ctx->downcount -= 16;
    // 7F3AA34C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AA350:
    ctx->pc = 0x7F3AA350u;
    // 7F3AA350: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA354:
    ctx->pc = 0x7F3AA354u;
    // 7F3AA354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AA358:
    ctx->pc = 0x7F3AA358u;
    // 7F3AA358: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AA35C:
    ctx->pc = 0x7F3AA35Cu;
    // 7F3AA35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AA360:
    ctx->pc = 0x7F3AA360u;
    ctx->downcount -= 21;
    // 7F3AA360: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AA364:
    ctx->pc = 0x7F3AA364u;
    // 7F3AA364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AA368:
    ctx->pc = 0x7F3AA368u;
    // 7F3AA368: lis     r7, 32592
    ctx->gpr[7] = ((u32)(s32)(32592) << 16);

label_7F3AA36C:
    ctx->pc = 0x7F3AA36Cu;
    // 7F3AA36C: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA370:
    ctx->pc = 0x7F3AA370u;
    // 7F3AA370: stmw     r19, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AA374:
    ctx->pc = 0x7F3AA374u;
    // 7F3AA374: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AA378:
    ctx->pc = 0x7F3AA378u;
    // 7F3AA378: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AA37C:
    ctx->pc = 0x7F3AA37Cu;
    // 7F3AA37C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AA380:
    ctx->pc = 0x7F3AA380u;
    // 7F3AA380: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AA384:
    ctx->pc = 0x7F3AA384u;
    // 7F3AA384: addi    r26, r7, -21852
    ctx->gpr[26] = ctx->gpr[7] + (u32)(s32)(-21852);

label_7F3AA388:
    ctx->pc = 0x7F3AA388u;
    // 7F3AA388: bl      0x7F3AAFD0
    {
            ctx->lr = 0x7F3AA38Cu;
            goto label_7F3AAFD0;
    }

label_7F3AA38C:
    ctx->pc = 0x7F3AA38Cu;
    ctx->downcount -= 8;
    // 7F3AA38C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AA390:
    ctx->pc = 0x7F3AA390u;
    // 7F3AA390: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AA394:
    ctx->pc = 0x7F3AA394u;
    // 7F3AA394: addi    r5, r3, -21324
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21324);

label_7F3AA398:
    ctx->pc = 0x7F3AA398u;
    // 7F3AA398: lfs     f3, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA398u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3AA39C:
    ctx->pc = 0x7F3AA39Cu;
    // 7F3AA39C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA39Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AA3A0:
    ctx->pc = 0x7F3AA3A0u;
    // 7F3AA3A0: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AA3A4:
    ctx->pc = 0x7F3AA3A4u;
    // 7F3AA3A4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AA3A4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3AA3A8:
    ctx->pc = 0x7F3AA3A8u;
    // 7F3AA3A8: bl      0x8002548C
    {
            ctx->lr = 0x7F3AA3ACu;
            ctx->pc = 0x8002548Cu;
            return;
    }

label_7F3AA3AC:
    ctx->pc = 0x7F3AA3ACu;
    ctx->downcount -= 4;
    // 7F3AA3AC: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AA3B0:
    ctx->pc = 0x7F3AA3B0u;
    // 7F3AA3B0: li      r4, 82
    ctx->gpr[4] = (u32)(s32)(82);

label_7F3AA3B4:
    ctx->pc = 0x7F3AA3B4u;
    // 7F3AA3B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA3B8:
    ctx->pc = 0x7F3AA3B8u;
    // 7F3AA3B8: bl      0x80046B68
    {
            ctx->lr = 0x7F3AA3BCu;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F3AA3BC:
    ctx->pc = 0x7F3AA3BCu;
    ctx->downcount -= 2;
    // 7F3AA3BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AA3C0:
    ctx->pc = 0x7F3AA3C0u;
    // 7F3AA3C0: bl      0x7F3A9FEC
    {
            ctx->lr = 0x7F3AA3C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9FECu;
                return;
            }
            goto label_7F3A9FEC;
    }

label_7F3AA3C4:
    ctx->pc = 0x7F3AA3C4u;
    ctx->downcount -= 8;
    // 7F3AA3C4: lwz     r3, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA3C8:
    ctx->pc = 0x7F3AA3C8u;
    // 7F3AA3C8: lwz     r0, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA3CC:
    ctx->pc = 0x7F3AA3CCu;
    // 7F3AA3CC: srawi r3, r3, 2
    {
        u32 sh = 2u;
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

label_7F3AA3D0:
    ctx->pc = 0x7F3AA3D0u;
    // 7F3AA3D0: lwz     r5, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA3D4:
    ctx->pc = 0x7F3AA3D4u;
    // 7F3AA3D4: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F3AA3D8:
    ctx->pc = 0x7F3AA3D8u;
    // 7F3AA3D8: srawi r0, r0, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[0];
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

label_7F3AA3DC:
    ctx->pc = 0x7F3AA3DCu;
    // 7F3AA3DC: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F3AA3E0:
    ctx->pc = 0x7F3AA3E0u;
    // 7F3AA3E0: bl      0x7F3AB6FC
    {
            ctx->lr = 0x7F3AA3E4u;
            goto label_7F3AB6FC;
    }

label_7F3AA3E4:
    ctx->pc = 0x7F3AA3E4u;
    ctx->downcount -= 3;
    // 7F3AA3E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA3E8:
    ctx->pc = 0x7F3AA3E8u;
    // 7F3AA3E8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AA3EC:
    ctx->pc = 0x7F3AA3ECu;
    // 7F3AA3EC: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3AA3F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A911Cu;
                return;
            }
            goto label_7F3A911C;
    }

label_7F3AA3F0:
    ctx->pc = 0x7F3AA3F0u;
    ctx->downcount -= 6;
    // 7F3AA3F0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AA3F4:
    ctx->pc = 0x7F3AA3F4u;
    // 7F3AA3F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AA3F8:
    ctx->pc = 0x7F3AA3F8u;
    // 7F3AA3F8: stw     r0, 15464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15464);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA3FC:
    ctx->pc = 0x7F3AA3FCu;
    // 7F3AA3FC: lwz     r24, 908(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(908);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3AA400:
    ctx->pc = 0x7F3AA400u;
    // 7F3AA400: cmplwi  r24, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA404:
    ctx->pc = 0x7F3AA404u;
    // 7F3AA404: bc    12, 2, 0x7F3AAA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAA58;
        }
    }

label_7F3AA408:
    ctx->pc = 0x7F3AA408u;
    ctx->downcount -= 7;
    // 7F3AA408: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AA40C:
    ctx->pc = 0x7F3AA40Cu;
    // 7F3AA40C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AA410:
    ctx->pc = 0x7F3AA410u;
    // 7F3AA410: addi    r5, r26, 2940
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(2940);

label_7F3AA414:
    ctx->pc = 0x7F3AA414u;
    // 7F3AA414: addi    r4, r28, -4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(-4);

label_7F3AA418:
    ctx->pc = 0x7F3AA418u;
    // 7F3AA418: lwz     r21, -12064(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12064);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3AA41C:
    ctx->pc = 0x7F3AA41Cu;
    // 7F3AA41C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AA420:
    loop_7F3AA420(ctx);
    if (ctx->pc == 0x7F3AA434u) goto label_7F3AA434;
    return;
label_7F3AA424:
    ctx->pc = 0x7F3AA424u;
    // 7F3AA424: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AA428:
    ctx->pc = 0x7F3AA428u;
    // 7F3AA428: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AA42C:
    ctx->pc = 0x7F3AA42Cu;
    // 7F3AA42C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AA430:
    // 7F3AA430: bc    16, 0, 0x7F3AA420
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA420u;
                return;
            }
            goto label_7F3AA420;
        }
    }

label_7F3AA434:
    ctx->pc = 0x7F3AA434u;
    ctx->downcount -= 5;
    // 7F3AA434: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AA438:
    ctx->pc = 0x7F3AA438u;
    // 7F3AA438: addi    r5, r26, 3004
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(3004);

label_7F3AA43C:
    ctx->pc = 0x7F3AA43Cu;
    // 7F3AA43C: addi    r4, r28, 60
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(60);

label_7F3AA440:
    ctx->pc = 0x7F3AA440u;
    // 7F3AA440: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AA444:
    loop_7F3AA444(ctx);
    if (ctx->pc == 0x7F3AA458u) goto label_7F3AA458;
    return;
label_7F3AA448:
    ctx->pc = 0x7F3AA448u;
    // 7F3AA448: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AA44C:
    ctx->pc = 0x7F3AA44Cu;
    // 7F3AA44C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AA450:
    ctx->pc = 0x7F3AA450u;
    // 7F3AA450: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AA454:
    // 7F3AA454: bc    16, 0, 0x7F3AA444
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA444u;
                return;
            }
            goto label_7F3AA444;
        }
    }

label_7F3AA458:
    ctx->pc = 0x7F3AA458u;
    ctx->downcount -= 5;
    // 7F3AA458: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AA45C:
    ctx->pc = 0x7F3AA45Cu;
    // 7F3AA45C: addi    r5, r26, 3068
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(3068);

label_7F3AA460:
    ctx->pc = 0x7F3AA460u;
    // 7F3AA460: addi    r4, r28, 124
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(124);

label_7F3AA464:
    ctx->pc = 0x7F3AA464u;
    // 7F3AA464: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AA468:
    loop_7F3AA468(ctx);
    if (ctx->pc == 0x7F3AA47Cu) goto label_7F3AA47C;
    return;
label_7F3AA46C:
    ctx->pc = 0x7F3AA46Cu;
    // 7F3AA46C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AA470:
    ctx->pc = 0x7F3AA470u;
    // 7F3AA470: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AA474:
    ctx->pc = 0x7F3AA474u;
    // 7F3AA474: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AA478:
    // 7F3AA478: bc    16, 0, 0x7F3AA468
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA468u;
                return;
            }
            goto label_7F3AA468;
        }
    }

label_7F3AA47C:
    ctx->pc = 0x7F3AA47Cu;
    ctx->downcount -= 5;
    // 7F3AA47C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AA480:
    ctx->pc = 0x7F3AA480u;
    // 7F3AA480: addi    r5, r26, 3132
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(3132);

label_7F3AA484:
    ctx->pc = 0x7F3AA484u;
    // 7F3AA484: addi    r4, r28, 188
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(188);

label_7F3AA488:
    ctx->pc = 0x7F3AA488u;
    // 7F3AA488: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AA48C:
    loop_7F3AA48C(ctx);
    if (ctx->pc == 0x7F3AA4A0u) goto label_7F3AA4A0;
    return;
label_7F3AA490:
    ctx->pc = 0x7F3AA490u;
    // 7F3AA490: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AA494:
    ctx->pc = 0x7F3AA494u;
    // 7F3AA494: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AA498:
    ctx->pc = 0x7F3AA498u;
    // 7F3AA498: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AA49C:
    // 7F3AA49C: bc    16, 0, 0x7F3AA48C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA48Cu;
                return;
            }
            goto label_7F3AA48C;
        }
    }

label_7F3AA4A0:
    ctx->pc = 0x7F3AA4A0u;
    ctx->downcount -= 16;
    // 7F3AA4A0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3AA4A4:
    ctx->pc = 0x7F3AA4A4u;
    // 7F3AA4A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AA4A8:
    ctx->pc = 0x7F3AA4A8u;
    // 7F3AA4A8: lwz     r6, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA4AC:
    ctx->pc = 0x7F3AA4ACu;
    // 7F3AA4AC: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F3AA4B0:
    ctx->pc = 0x7F3AA4B0u;
    // 7F3AA4B0: lfs     f1, 13460(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA4B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AA4B4:
    ctx->pc = 0x7F3AA4B4u;
    // 7F3AA4B4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AA4B8:
    ctx->pc = 0x7F3AA4B8u;
    // 7F3AA4B8: lfs     f0, 13464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA4B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AA4BC:
    ctx->pc = 0x7F3AA4BCu;
    // 7F3AA4BC: slw   r5, r0, r6
    {
        u32 sh = ctx->gpr[6] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F3AA4C0:
    ctx->pc = 0x7F3AA4C0u;
    // 7F3AA4C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AA4C4:
    ctx->pc = 0x7F3AA4C4u;
    // 7F3AA4C4: stw     r6, 2704(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2704);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AA4C8:
    ctx->pc = 0x7F3AA4C8u;
    // 7F3AA4C8: addi    r3, r26, 3136
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(3136);

label_7F3AA4CC:
    ctx->pc = 0x7F3AA4CCu;
    // 7F3AA4CC: stw     r5, 3208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3208);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AA4D0:
    ctx->pc = 0x7F3AA4D0u;
    // 7F3AA4D0: stw     r0, 3212(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA4D4:
    ctx->pc = 0x7F3AA4D4u;
    // 7F3AA4D4: stfs     f1, 2904(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA4D4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2904);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AA4D8:
    ctx->pc = 0x7F3AA4D8u;
    // 7F3AA4D8: stfs     f0, 2908(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AA4D8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2908);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AA4DC:
    ctx->pc = 0x7F3AA4DCu;
    // 7F3AA4DC: bl      0x80025B84
    {
            ctx->lr = 0x7F3AA4E0u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3AA4E0:
    ctx->pc = 0x7F3AA4E0u;
    ctx->downcount -= 3;
    // 7F3AA4E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AA4E4:
    ctx->pc = 0x7F3AA4E4u;
    // 7F3AA4E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA4E8:
    ctx->pc = 0x7F3AA4E8u;
    // 7F3AA4E8: bl      0x800468B8
    {
            ctx->lr = 0x7F3AA4ECu;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3AA4EC:
    ctx->pc = 0x7F3AA4ECu;
    ctx->downcount -= 5;
    // 7F3AA4EC: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA4F0:
    ctx->pc = 0x7F3AA4F0u;
    // 7F3AA4F0: addi    r22, r26, 3224
    ctx->gpr[22] = ctx->gpr[26] + (u32)(s32)(3224);

label_7F3AA4F4:
    ctx->pc = 0x7F3AA4F4u;
    // 7F3AA4F4: lwz     r23, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3AA4F8:
    ctx->pc = 0x7F3AA4F8u;
    // 7F3AA4F8: cmpwi   r0, 0
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

label_7F3AA4FC:
    ctx->pc = 0x7F3AA4FCu;
    // 7F3AA4FC: bc    12, 2, 0x7F3AA51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA51C;
        }
    }

label_7F3AA500:
    ctx->pc = 0x7F3AA500u;
    ctx->downcount -= 3;
    // 7F3AA500: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA504:
    ctx->pc = 0x7F3AA504u;
    // 7F3AA504: cmpwi   r0, 0
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

label_7F3AA508:
    ctx->pc = 0x7F3AA508u;
    // 7F3AA508: bc    4, 2, 0x7F3AA51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA51C;
        }
    }

label_7F3AA50C:
    ctx->pc = 0x7F3AA50Cu;
    ctx->downcount -= 1;
    // 7F3AA50C: bl      0x7F3B9DF0
    {
            ctx->lr = 0x7F3AA510u;
            ctx->pc = 0x7F3B9DF0u;
            return;
    }

label_7F3AA510:
    ctx->pc = 0x7F3AA510u;
    ctx->downcount -= 3;
    // 7F3AA510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA514:
    ctx->pc = 0x7F3AA514u;
    // 7F3AA514: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA518:
    ctx->pc = 0x7F3AA518u;
    // 7F3AA518: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AA51Cu;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AA51C:
    ctx->pc = 0x7F3AA51Cu;
    ctx->downcount -= 7;
    // 7F3AA51C: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA520:
    ctx->pc = 0x7F3AA520u;
    // 7F3AA520: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA524:
    ctx->pc = 0x7F3AA524u;
    // 7F3AA524: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA528:
    ctx->pc = 0x7F3AA528u;
    // 7F3AA528: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AA52C:
    ctx->pc = 0x7F3AA52Cu;
    // 7F3AA52C: cmpwi   r0, 0
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

label_7F3AA530:
    ctx->pc = 0x7F3AA530u;
    // 7F3AA530: bc    4, 1, 0x7F3AA61C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA61C;
        }
    }

label_7F3AA534:
    ctx->downcount -= 3;
    // 7F3AA534: cmpwi   r30, 0
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

label_7F3AA538:
    ctx->pc = 0x7F3AA538u;
    // 7F3AA538: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA53C:
    // 7F3AA53C: bc    12, 2, 0x7F3AA550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA550;
        }
    }

label_7F3AA540:
    ctx->pc = 0x7F3AA540u;
    ctx->downcount -= 3;
    // 7F3AA540: lha     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AA544:
    // 7F3AA544: and.   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[30];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA548:
    // 7F3AA548: bc    12, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA54C:
    ctx->downcount -= 1;
    // 7F3AA54C: b       0x7F3AA55C
    {
            goto label_7F3AA55C;
    }

label_7F3AA550:
    ctx->pc = 0x7F3AA550u;
    ctx->downcount -= 3;
    // 7F3AA550: lha     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AA554:
    // 7F3AA554: cmpwi   r0, 0
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

label_7F3AA558:
    // 7F3AA558: bc    4, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA55C:
    ctx->pc = 0x7F3AA55Cu;
    ctx->downcount -= 3;
    // 7F3AA55C: lwz     r8, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AA560:
    // 7F3AA560: rlwinm. r0, r8, 0, 15, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00010000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA564:
    // 7F3AA564: bc    4, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA568:
    ctx->pc = 0x7F3AA568u;
    ctx->downcount -= 3;
    // 7F3AA568: lwz     r0, 3208(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA56C:
    // 7F3AA56C: and.   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA570:
    // 7F3AA570: bc    4, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA574:
    ctx->downcount -= 2;
    // 7F3AA574: rlwinm. r0, r8, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA578:
    // 7F3AA578: bc    4, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA57C:
    ctx->downcount -= 4;
    // 7F3AA57C: lis     r6, 32591
    ctx->gpr[6] = ((u32)(s32)(32591) << 16);

label_7F3AA580:
    ctx->pc = 0x7F3AA580u;
    // 7F3AA580: lwz     r9, -12068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-12068);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AA584:
    // 7F3AA584: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA588:
    // 7F3AA588: bc    4, 2, 0x7F3AA5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA5A0;
        }
    }

label_7F3AA58C:
    ctx->downcount -= 5;
    // 7F3AA58C: lis     r6, 32591
    ctx->gpr[6] = ((u32)(s32)(32591) << 16);

label_7F3AA590:
    ctx->pc = 0x7F3AA590u;
    // 7F3AA590: lwz     r7, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA594:
    ctx->pc = 0x7F3AA594u;
    // 7F3AA594: lwz     r0, -12064(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-12064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA598:
    // 7F3AA598: and.   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA59C:
    // 7F3AA59C: bc    12, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA5A0:
    ctx->downcount -= 4;
    // 7F3AA5A0: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F3AA5A4:
    // 7F3AA5A4: addi    r0, r6, 128
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(128);

label_7F3AA5A8:
    // 7F3AA5A8: and.   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA5AC:
    // 7F3AA5AC: bc    4, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA5B0:
    ctx->downcount -= 2;
    // 7F3AA5B0: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA5B4:
    // 7F3AA5B4: bc    4, 2, 0x7F3AA5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA5CC;
        }
    }

label_7F3AA5B8:
    ctx->pc = 0x7F3AA5B8u;
    ctx->downcount -= 3;
    // 7F3AA5B8: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA5BC:
    // 7F3AA5BC: cmpwi   r0, 0
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

label_7F3AA5C0:
    // 7F3AA5C0: bc    12, 2, 0x7F3AA5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA5CC;
        }
    }

label_7F3AA5C4:
    ctx->downcount -= 2;
    // 7F3AA5C4: and.   r0, r0, r21
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[21];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA5C8:
    // 7F3AA5C8: bc    12, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA5CC:
    ctx->pc = 0x7F3AA5CCu;
    ctx->downcount -= 3;
    // 7F3AA5CC: lha     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AA5D0:
    // 7F3AA5D0: cmpwi   r0, 2
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

label_7F3AA5D4:
    // 7F3AA5D4: bc    12, 2, 0x7F3AA614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA614;
        }
    }

label_7F3AA5D8:
    ctx->pc = 0x7F3AA5D8u;
    ctx->downcount -= 3;
    // 7F3AA5D8: lwz     r0, 684(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA5DC:
    // 7F3AA5DC: cmplwi  r0, 0x0000
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

label_7F3AA5E0:
    // 7F3AA5E0: bc    12, 2, 0x7F3AA5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA5FC;
        }
    }

label_7F3AA5E4:
    ctx->pc = 0x7F3AA5E4u;
    ctx->downcount -= 3;
    // 7F3AA5E4: lha     r6, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AA5E8:
    // 7F3AA5E8: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA5EC:
    // 7F3AA5EC: bc    4, 2, 0x7F3AA5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA5FC;
        }
    }

label_7F3AA5F0:
    ctx->downcount -= 3;
    // 7F3AA5F0: ori     r0, r6, 0x0001
    ctx->gpr[0] = ctx->gpr[6] | 0x0001u;

label_7F3AA5F4:
    ctx->pc = 0x7F3AA5F4u;
    // 7F3AA5F4: sth     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AA5F8:
    // 7F3AA5F8: b       0x7F3AA614
    {
            goto label_7F3AA614;
    }

label_7F3AA5FC:
    ctx->downcount -= 6;
    // 7F3AA5FC: add   r6, r22, r5
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AA600:
    // 7F3AA600: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3AA604:
    ctx->pc = 0x7F3AA604u;
    // 7F3AA604: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AA608:
    // 7F3AA608: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_7F3AA60C:
    ctx->pc = 0x7F3AA60Cu;
    // 7F3AA60C: lwz     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA610:
    ctx->pc = 0x7F3AA610u;
    // 7F3AA610: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA614:
    ctx->downcount -= 2;
    // 7F3AA614: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F3AA618:
    // 7F3AA618: bc    16, 0, 0x7F3AA534
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA534u;
                return;
            }
            goto label_7F3AA534;
        }
    }

label_7F3AA61C:
    ctx->pc = 0x7F3AA61Cu;
    ctx->downcount -= 2;
    // 7F3AA61C: cmpwi   r4, 0
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

label_7F3AA620:
    ctx->pc = 0x7F3AA620u;
    // 7F3AA620: bc    12, 2, 0x7F3AAA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAA58;
        }
    }

label_7F3AA624:
    ctx->pc = 0x7F3AA624u;
    ctx->downcount -= 10;
    // 7F3AA624: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AA628:
    ctx->pc = 0x7F3AA628u;
    // 7F3AA628: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AA62C:
    ctx->pc = 0x7F3AA62Cu;
    // 7F3AA62C: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AA630:
    ctx->pc = 0x7F3AA630u;
    // 7F3AA630: lwz     r7, -27320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-27320);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA634:
    ctx->pc = 0x7F3AA634u;
    // 7F3AA634: addi    r6, r6, 15512
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15512);

label_7F3AA638:
    ctx->pc = 0x7F3AA638u;
    // 7F3AA638: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F3AA63C:
    ctx->pc = 0x7F3AA63Cu;
    // 7F3AA63C: addi    r0, r5, -27304
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-27304);

label_7F3AA640:
    ctx->pc = 0x7F3AA640u;
    // 7F3AA640: or   r10, r6, r6
    {
        ctx->gpr[10] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AA644:
    ctx->pc = 0x7F3AA644u;
    // 7F3AA644: or   r9, r0, r0
    {
        ctx->gpr[9] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AA648:
    ctx->pc = 0x7F3AA648u;
    // 7F3AA648: b       0x7F3AA6A8
    {
            goto label_7F3AA6A8;
    }

label_7F3AA64C:
    ctx->pc = 0x7F3AA64Cu;
    ctx->downcount -= 5;
    // 7F3AA64C: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AA650:
    ctx->pc = 0x7F3AA650u;
    // 7F3AA650: lwz     r3, 816(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(816);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA654:
    ctx->pc = 0x7F3AA654u;
    // 7F3AA654: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA658:
    // 7F3AA658: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA65C:
    // 7F3AA65C: bc    4, 2, 0x7F3AA6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA6A0;
        }
    }

label_7F3AA660:
    ctx->downcount -= 5;
    // 7F3AA660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA664:
    ctx->pc = 0x7F3AA664u;
    // 7F3AA664: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_7F3AA668:
    // 7F3AA668: cmpwi   r4, 0
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

label_7F3AA66C:
    // 7F3AA66C: bc    4, 1, 0x7F3AA6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA6A0;
        }
    }

label_7F3AA670:
    ctx->downcount -= 5;
    // 7F3AA670: add   r6, r22, r3
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AA674:
    ctx->pc = 0x7F3AA674u;
    // 7F3AA674: lwz     r5, 804(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(804);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA678:
    ctx->pc = 0x7F3AA678u;
    // 7F3AA678: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA67C:
    // 7F3AA67C: cmpw    r5, r0
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

label_7F3AA680:
    // 7F3AA680: bc    4, 2, 0x7F3AA698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA698;
        }
    }

label_7F3AA684:
    ctx->pc = 0x7F3AA684u;
    ctx->downcount -= 5;
    // 7F3AA684: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA688:
    // 7F3AA688: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F3AA68C:
    ctx->pc = 0x7F3AA68Cu;
    // 7F3AA68C: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA690:
    ctx->pc = 0x7F3AA690u;
    // 7F3AA690: stw     r8, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AA694:
    // 7F3AA694: addi    r10, r10, 8
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(8);

label_7F3AA698:
    ctx->downcount -= 2;
    // 7F3AA698: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F3AA69C:
    // 7F3AA69C: bc    16, 0, 0x7F3AA670
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA670u;
                return;
            }
            goto label_7F3AA670;
        }
    }

label_7F3AA6A0:
    ctx->downcount -= 2;
    // 7F3AA6A0: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_7F3AA6A4:
    // 7F3AA6A4: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

label_7F3AA6A8:
    ctx->downcount -= 2;
    // 7F3AA6A8: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA6AC:
    // 7F3AA6AC: bc    12, 1, 0x7F3AA64C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA64Cu;
                return;
            }
            goto label_7F3AA64C;
        }
    }

label_7F3AA6B0:
    ctx->pc = 0x7F3AA6B0u;
    ctx->downcount -= 2;
    // 7F3AA6B0: li      r22, -1
    ctx->gpr[22] = (u32)(s32)(-1);

label_7F3AA6B4:
    ctx->pc = 0x7F3AA6B4u;
    // 7F3AA6B4: bl      0x7F3B8900
    {
            ctx->lr = 0x7F3AA6B8u;
            ctx->pc = 0x7F3B8900u;
            return;
    }

label_7F3AA6B8:
    ctx->pc = 0x7F3AA6B8u;
    ctx->downcount -= 3;
    // 7F3AA6B8: addi    r3, r26, 3008
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(3008);

label_7F3AA6BC:
    ctx->pc = 0x7F3AA6BCu;
    // 7F3AA6BC: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F3AA6C0:
    ctx->pc = 0x7F3AA6C0u;
    // 7F3AA6C0: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AA6C4u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AA6C4:
    ctx->pc = 0x7F3AA6C4u;
    ctx->downcount -= 8;
    // 7F3AA6C4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3AA6C8:
    ctx->pc = 0x7F3AA6C8u;
    // 7F3AA6C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AA6CC:
    ctx->pc = 0x7F3AA6CCu;
    // 7F3AA6CC: addi    r26, r4, -1740
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-1740);

label_7F3AA6D0:
    ctx->pc = 0x7F3AA6D0u;
    // 7F3AA6D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AA6D4:
    ctx->pc = 0x7F3AA6D4u;
    // 7F3AA6D4: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA6D8:
    ctx->pc = 0x7F3AA6D8u;
    // 7F3AA6D8: rlwinm r25, r30, 0, 31, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000001u;
    }

label_7F3AA6DC:
    ctx->pc = 0x7F3AA6DCu;
    // 7F3AA6DC: addi    r27, r3, 15512
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(15512);

label_7F3AA6E0:
    ctx->pc = 0x7F3AA6E0u;
    // 7F3AA6E0: b       0x7F3AAA24
    {
            goto label_7F3AAA24;
    }

label_7F3AA6E4:
    ctx->downcount -= 3;
    // 7F3AA6E4: or   r23, r27, r27
    {
        ctx->gpr[23] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AA6E8:
    // 7F3AA6E8: or   r24, r21, r21
    {
        ctx->gpr[24] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AA6EC:
    // 7F3AA6EC: b       0x7F3AAA10
    {
            goto label_7F3AAA10;
    }

label_7F3AA6F0:
    ctx->pc = 0x7F3AA6F0u;
    ctx->downcount -= 4;
    // 7F3AA6F0: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA6F4:
    // 7F3AA6F4: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F3AA6F8:
    // 7F3AA6F8: cmpw    r4, r22
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA6FC:
    // 7F3AA6FC: bc    12, 2, 0x7F3AA718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA718;
        }
    }

label_7F3AA700:
    ctx->downcount -= 6;
    // 7F3AA700: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AA704:
    // 7F3AA704: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AA708:
    ctx->pc = 0x7F3AA708u;
    // 7F3AA708: sth     r0, 840(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(840);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AA70C:
    ctx->pc = 0x7F3AA70Cu;
    // 7F3AA70C: lwz     r0, 824(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA710:
    ctx->pc = 0x7F3AA710u;
    // 7F3AA710: lwz     r22, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3AA714:
    ctx->pc = 0x7F3AA714u;
    // 7F3AA714: stw     r0, -31004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA718:
    ctx->pc = 0x7F3AA718u;
    ctx->downcount -= 3;
    // 7F3AA718: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA71C:
    ctx->pc = 0x7F3AA71Cu;
    // 7F3AA71C: lbz     r3, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3AA720:
    // 7F3AA720: bl      0x7F3AC52C
    {
            ctx->lr = 0x7F3AA724u;
            ctx->pc = 0x7F3AC52Cu;
            return;
    }

label_7F3AA724:
    ctx->pc = 0x7F3AA724u;
    ctx->downcount -= 3;
    // 7F3AA724: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA728:
    // 7F3AA728: cmpwi   r0, 1
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

label_7F3AA72C:
    // 7F3AA72C: bc    4, 2, 0x7F3AA750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA750;
        }
    }

label_7F3AA730:
    ctx->downcount -= 2;
    // 7F3AA730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA734:
    // 7F3AA734: bl      0x800455BC
    {
            ctx->lr = 0x7F3AA738u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3AA738:
    ctx->downcount -= 2;
    // 7F3AA738: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA73C:
    // 7F3AA73C: bl      0x800455E0
    {
            ctx->lr = 0x7F3AA740u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AA740:
    ctx->downcount -= 2;
    // 7F3AA740: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AA744:
    // 7F3AA744: bl      0x800455E0
    {
            ctx->lr = 0x7F3AA748u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AA748:
    ctx->downcount -= 2;
    // 7F3AA748: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3AA74C:
    // 7F3AA74C: bl      0x800455E0
    {
            ctx->lr = 0x7F3AA750u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AA750:
    ctx->pc = 0x7F3AA750u;
    ctx->downcount -= 4;
    // 7F3AA750: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA754:
    ctx->pc = 0x7F3AA754u;
    // 7F3AA754: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA758:
    // 7F3AA758: rlwinm. r0, r0, 0, 12, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00080000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA75C:
    // 7F3AA75C: bc    4, 2, 0x7F3AA76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA76C;
        }
    }

label_7F3AA760:
    ctx->pc = 0x7F3AA760u;
    ctx->downcount -= 3;
    // 7F3AA760: lwz     r0, 900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA764:
    // 7F3AA764: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA768:
    // 7F3AA768: bc    12, 2, 0x7F3AA77C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA77C;
        }
    }

label_7F3AA76C:
    ctx->downcount -= 3;
    // 7F3AA76C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA770:
    // 7F3AA770: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA774:
    // 7F3AA774: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AA778u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AA778:
    ctx->downcount -= 1;
    // 7F3AA778: li      r20, 1
    ctx->gpr[20] = (u32)(s32)(1);

label_7F3AA77C:
    ctx->pc = 0x7F3AA77Cu;
    ctx->downcount -= 4;
    // 7F3AA77C: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA780:
    ctx->pc = 0x7F3AA780u;
    // 7F3AA780: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA784:
    // 7F3AA784: rlwinm. r0, r4, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA788:
    // 7F3AA788: bc    12, 2, 0x7F3AA798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA798;
        }
    }

label_7F3AA78C:
    ctx->downcount -= 2;
    // 7F3AA78C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA790:
    // 7F3AA790: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3AA794u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3AA794:
    ctx->downcount -= 1;
    // 7F3AA794: b       0x7F3AA7CC
    {
            goto label_7F3AA7CC;
    }

label_7F3AA798:
    ctx->downcount -= 4;
    // 7F3AA798: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AA79C:
    ctx->pc = 0x7F3AA79Cu;
    // 7F3AA79C: lwz     r0, -12084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA7A0:
    // 7F3AA7A0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AA7A4:
    // 7F3AA7A4: bc    12, 2, 0x7F3AA7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA7C4;
        }
    }

label_7F3AA7A8:
    ctx->downcount -= 2;
    // 7F3AA7A8: rlwinm. r0, r4, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA7AC:
    // 7F3AA7AC: bc    4, 2, 0x7F3AA7B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA7B8;
        }
    }

label_7F3AA7B0:
    ctx->downcount -= 2;
    // 7F3AA7B0: rlwinm. r0, r4, 0, 2, 2
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x20000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA7B4:
    // 7F3AA7B4: bc    12, 2, 0x7F3AA7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA7C4;
        }
    }

label_7F3AA7B8:
    ctx->downcount -= 2;
    // 7F3AA7B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA7BC:
    // 7F3AA7BC: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3AA7C0u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3AA7C0:
    ctx->downcount -= 1;
    // 7F3AA7C0: b       0x7F3AA7CC
    {
            goto label_7F3AA7CC;
    }

label_7F3AA7C4:
    ctx->downcount -= 2;
    // 7F3AA7C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA7C8:
    // 7F3AA7C8: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3AA7CCu;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3AA7CC:
    ctx->pc = 0x7F3AA7CCu;
    ctx->downcount -= 3;
    // 7F3AA7CC: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA7D0:
    ctx->pc = 0x7F3AA7D0u;
    // 7F3AA7D0: lwz     r3, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA7D4:
    // 7F3AA7D4: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3AA7D8u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3AA7D8:
    ctx->pc = 0x7F3AA7D8u;
    ctx->downcount -= 4;
    // 7F3AA7D8: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA7DC:
    ctx->pc = 0x7F3AA7DCu;
    // 7F3AA7DC: lbz     r0, 119(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(119);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AA7E0:
    // 7F3AA7E0: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA7E4:
    // 7F3AA7E4: bc    12, 2, 0x7F3AA9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA9C8;
        }
    }

label_7F3AA7E8:
    ctx->downcount -= 1;
    // 7F3AA7E8: bl      0x7F3AD9B0
    {
            ctx->lr = 0x7F3AA7ECu;
            ctx->pc = 0x7F3AD9B0u;
            return;
    }

label_7F3AA7EC:
    ctx->downcount -= 2;
    // 7F3AA7EC: cmpwi   r3, 0
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

label_7F3AA7F0:
    // 7F3AA7F0: bc    12, 2, 0x7F3AA9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA9C8;
        }
    }

label_7F3AA7F4:
    ctx->pc = 0x7F3AA7F4u;
    ctx->downcount -= 3;
    // 7F3AA7F4: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA7F8:
    // 7F3AA7F8: cmpwi   r0, 0
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

label_7F3AA7FC:
    // 7F3AA7FC: bc    4, 2, 0x7F3AA9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA9F4;
        }
    }

label_7F3AA800:
    ctx->downcount -= 2;
    // 7F3AA800: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA804:
    // 7F3AA804: bl      0x80045EC8
    {
            ctx->lr = 0x7F3AA808u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3AA808:
    ctx->downcount -= 2;
    // 7F3AA808: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA80C:
    // 7F3AA80C: bl      0x800424A0
    {
            ctx->lr = 0x7F3AA810u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3AA810:
    ctx->downcount -= 2;
    // 7F3AA810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA814:
    // 7F3AA814: bl      0x800455BC
    {
            ctx->lr = 0x7F3AA818u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3AA818:
    ctx->downcount -= 2;
    // 7F3AA818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA81C:
    // 7F3AA81C: bl      0x800455E0
    {
            ctx->lr = 0x7F3AA820u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AA820:
    ctx->downcount -= 7;
    // 7F3AA820: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA824:
    // 7F3AA824: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA828:
    // 7F3AA828: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA82C:
    // 7F3AA82C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AA830:
    // 7F3AA830: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AA834:
    // 7F3AA834: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA838:
    // 7F3AA838: bl      0x800458A0
    {
            ctx->lr = 0x7F3AA83Cu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3AA83C:
    ctx->downcount -= 7;
    // 7F3AA83C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA840:
    // 7F3AA840: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA844:
    // 7F3AA844: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA848:
    // 7F3AA848: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AA84C:
    // 7F3AA84C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AA850:
    // 7F3AA850: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA854:
    // 7F3AA854: bl      0x80045908
    {
            ctx->lr = 0x7F3AA858u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3AA858:
    ctx->downcount -= 2;
    // 7F3AA858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA85C:
    // 7F3AA85C: bl      0x8004628C
    {
            ctx->lr = 0x7F3AA860u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3AA860:
    ctx->downcount -= 2;
    // 7F3AA860: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA864:
    // 7F3AA864: bl      0x800462B8
    {
            ctx->lr = 0x7F3AA868u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3AA868:
    ctx->downcount -= 4;
    // 7F3AA868: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA86C:
    // 7F3AA86C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AA870:
    // 7F3AA870: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AA874:
    // 7F3AA874: bl      0x800462E4
    {
            ctx->lr = 0x7F3AA878u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AA878:
    ctx->downcount -= 6;
    // 7F3AA878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA87C:
    // 7F3AA87C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3AA880:
    // 7F3AA880: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F3AA884:
    // 7F3AA884: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F3AA888:
    // 7F3AA888: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F3AA88C:
    // 7F3AA88C: bl      0x80045818
    {
            ctx->lr = 0x7F3AA890u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3AA890:
    ctx->downcount -= 6;
    // 7F3AA890: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA894:
    // 7F3AA894: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3AA898:
    // 7F3AA898: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F3AA89C:
    // 7F3AA89C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AA8A0:
    // 7F3AA8A0: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F3AA8A4:
    // 7F3AA8A4: bl      0x8004585C
    {
            ctx->lr = 0x7F3AA8A8u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3AA8A8:
    ctx->downcount -= 1;
    // 7F3AA8A8: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3AA8AC:
    ctx->pc = 0x7F3AA8ACu;
    ctx->downcount -= 6;
    // 7F3AA8AC: stw     r19, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F3AA8B0:
    // 7F3AA8B0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA8B4:
    ctx->pc = 0x7F3AA8B4u;
    // 7F3AA8B4: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA8B8:
    // 7F3AA8B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA8BC:
    // 7F3AA8BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AA8C0:
    // 7F3AA8C0: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3AA8C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9D3Cu;
                return;
            }
            goto label_7F3A9D3C;
    }

label_7F3AA8C4:
    ctx->downcount -= 3;
    // 7F3AA8C4: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F3AA8C8:
    // 7F3AA8C8: cmpwi   r19, 2
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA8CC:
    // 7F3AA8CC: bc    12, 0, 0x7F3AA8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA8ACu;
                return;
            }
            goto label_7F3AA8AC;
        }
    }

label_7F3AA8D0:
    ctx->downcount -= 2;
    // 7F3AA8D0: cmpwi   r25, 0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA8D4:
    // 7F3AA8D4: bc    12, 2, 0x7F3AA8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA8FC;
        }
    }

label_7F3AA8D8:
    ctx->pc = 0x7F3AA8D8u;
    ctx->downcount -= 8;
    // 7F3AA8D8: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA8DC:
    // 7F3AA8DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA8E0:
    ctx->pc = 0x7F3AA8E0u;
    // 7F3AA8E0: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA8E4:
    // 7F3AA8E4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA8E8:
    ctx->pc = 0x7F3AA8E8u;
    // 7F3AA8E8: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA8EC:
    // 7F3AA8EC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA8F0:
    ctx->pc = 0x7F3AA8F0u;
    // 7F3AA8F0: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA8F4:
    // 7F3AA8F4: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3AA8F8u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3AA8F8:
    ctx->downcount -= 1;
    // 7F3AA8F8: b       0x7F3AA924
    {
            goto label_7F3AA924;
    }

label_7F3AA8FC:
    ctx->pc = 0x7F3AA8FCu;
    ctx->downcount -= 10;
    // 7F3AA8FC: lwz     r10, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AA900:
    // 7F3AA900: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AA904:
    ctx->pc = 0x7F3AA904u;
    // 7F3AA904: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA908:
    // 7F3AA908: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AA90C:
    ctx->pc = 0x7F3AA90Cu;
    // 7F3AA90C: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AA910:
    // 7F3AA910: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AA914:
    ctx->pc = 0x7F3AA914u;
    // 7F3AA914: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AA918:
    ctx->pc = 0x7F3AA918u;
    // 7F3AA918: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AA91C:
    ctx->pc = 0x7F3AA91Cu;
    // 7F3AA91C: lwz     r10, 308(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(308);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AA920:
    // 7F3AA920: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AA924u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AA924:
    ctx->downcount -= 5;
    // 7F3AA924: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AA928:
    // 7F3AA928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AA92C:
    ctx->pc = 0x7F3AA92Cu;
    // 7F3AA92C: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA930:
    // 7F3AA930: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AA934:
    // 7F3AA934: bc    12, 2, 0x7F3AA948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA948;
        }
    }

label_7F3AA938:
    ctx->pc = 0x7F3AA938u;
    ctx->downcount -= 4;
    // 7F3AA938: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA93C:
    ctx->pc = 0x7F3AA93Cu;
    // 7F3AA93C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA940:
    // 7F3AA940: rlwinm. r0, r0, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA944:
    // 7F3AA944: bc    4, 2, 0x7F3AA968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA968;
        }
    }

label_7F3AA948:
    ctx->downcount -= 4;
    // 7F3AA948: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AA94C:
    ctx->pc = 0x7F3AA94Cu;
    // 7F3AA94C: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA950:
    // 7F3AA950: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AA954:
    // 7F3AA954: bc    4, 2, 0x7F3AA968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA968;
        }
    }

label_7F3AA958:
    ctx->pc = 0x7F3AA958u;
    ctx->downcount -= 4;
    // 7F3AA958: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA95C:
    ctx->pc = 0x7F3AA95Cu;
    // 7F3AA95C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AA960:
    // 7F3AA960: rlwinm. r0, r0, 0, 8, 8
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00800000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AA964:
    // 7F3AA964: bc    12, 2, 0x7F3AA96C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA96C;
        }
    }

label_7F3AA968:
    ctx->downcount -= 1;
    // 7F3AA968: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA96C:
    ctx->pc = 0x7F3AA96Cu;
    ctx->downcount -= 2;
    // 7F3AA96C: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AA970:
    // 7F3AA970: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3AA974u;
            ctx->pc = 0x7F3AC5ACu;
            return;
    }

label_7F3AA974:
    ctx->downcount -= 4;
    // 7F3AA974: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA978:
    // 7F3AA978: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3AA97C:
    // 7F3AA97C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AA980:
    // 7F3AA980: bl      0x800462E4
    {
            ctx->lr = 0x7F3AA984u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AA984:
    ctx->downcount -= 1;
    // 7F3AA984: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3AA988:
    ctx->pc = 0x7F3AA988u;
    ctx->downcount -= 6;
    // 7F3AA988: stw     r19, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F3AA98C:
    // 7F3AA98C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA990:
    ctx->pc = 0x7F3AA990u;
    // 7F3AA990: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA994:
    // 7F3AA994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA998:
    // 7F3AA998: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AA99C:
    // 7F3AA99C: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3AA9A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9D3Cu;
                return;
            }
            goto label_7F3A9D3C;
    }

label_7F3AA9A0:
    ctx->downcount -= 3;
    // 7F3AA9A0: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F3AA9A4:
    // 7F3AA9A4: cmpwi   r19, 2
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA9A8:
    // 7F3AA9A8: bc    12, 0, 0x7F3AA988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA988u;
                return;
            }
            goto label_7F3AA988;
        }
    }

label_7F3AA9AC:
    ctx->downcount -= 4;
    // 7F3AA9AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA9B0:
    // 7F3AA9B0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AA9B4:
    // 7F3AA9B4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AA9B8:
    // 7F3AA9B8: bl      0x800462E4
    {
            ctx->lr = 0x7F3AA9BCu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AA9BC:
    ctx->downcount -= 3;
    // 7F3AA9BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AA9C0:
    ctx->pc = 0x7F3AA9C0u;
    // 7F3AA9C0: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AA9C4:
    // 7F3AA9C4: b       0x7F3AA9F4
    {
            goto label_7F3AA9F4;
    }

label_7F3AA9C8:
    ctx->downcount -= 2;
    // 7F3AA9C8: cmpwi   r30, 8
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AA9CC:
    // 7F3AA9CC: bc    4, 2, 0x7F3AA9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AA9E0;
        }
    }

label_7F3AA9D0:
    ctx->downcount -= 4;
    // 7F3AA9D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AA9D4:
    // 7F3AA9D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AA9D8:
    // 7F3AA9D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AA9DC:
    // 7F3AA9DC: bl      0x800462E4
    {
            ctx->lr = 0x7F3AA9E0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AA9E0:
    ctx->pc = 0x7F3AA9E0u;
    ctx->downcount -= 5;
    // 7F3AA9E0: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AA9E4:
    // 7F3AA9E4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AA9E8:
    // 7F3AA9E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AA9EC:
    // 7F3AA9EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AA9F0:
    // 7F3AA9F0: bl      0x7F3A9D3C
    {
            ctx->lr = 0x7F3AA9F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A9D3Cu;
                return;
            }
            goto label_7F3A9D3C;
    }

label_7F3AA9F4:
    ctx->downcount -= 2;
    // 7F3AA9F4: cmpwi   r20, 0
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

label_7F3AA9F8:
    // 7F3AA9F8: bc    12, 2, 0x7F3AAA08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAA08;
        }
    }

label_7F3AA9FC:
    ctx->downcount -= 3;
    // 7F3AA9FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AAA00:
    // 7F3AAA00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AAA04:
    // 7F3AAA04: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AAA08u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AAA08:
    ctx->downcount -= 2;
    // 7F3AAA08: addi    r23, r23, 8
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(8);

label_7F3AAA0C:
    // 7F3AAA0C: addi    r24, r24, -1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-1);

label_7F3AAA10:
    ctx->downcount -= 2;
    // 7F3AAA10: cmpwi   r24, 0
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

label_7F3AAA14:
    // 7F3AAA14: bc    12, 1, 0x7F3AA6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA6F0u;
                return;
            }
            goto label_7F3AA6F0;
        }
    }

label_7F3AAA18:
    ctx->pc = 0x7F3AAA18u;
    ctx->downcount -= 3;
    // 7F3AAA18: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAA1C:
    // 7F3AAA1C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AAA20:
    ctx->pc = 0x7F3AAA20u;
    // 7F3AAA20: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAA24:
    ctx->pc = 0x7F3AAA24u;
    ctx->downcount -= 3;
    // 7F3AAA24: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAA28:
    // 7F3AAA28: cmpwi   r0, 2
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

label_7F3AAA2C:
    // 7F3AAA2C: bc    12, 0, 0x7F3AA6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AA6E4u;
                return;
            }
            goto label_7F3AA6E4;
        }
    }

label_7F3AAA30:
    ctx->pc = 0x7F3AAA30u;
    ctx->downcount -= 4;
    // 7F3AAA30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AAA34:
    ctx->pc = 0x7F3AAA34u;
    // 7F3AAA34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AAA38:
    ctx->pc = 0x7F3AAA38u;
    // 7F3AAA38: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAA3C:
    ctx->pc = 0x7F3AAA3Cu;
    // 7F3AAA3C: bl      0x80046318
    {
            ctx->lr = 0x7F3AAA40u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AAA40:
    ctx->pc = 0x7F3AAA40u;
    ctx->downcount -= 6;
    // 7F3AAA40: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AAA44:
    ctx->pc = 0x7F3AAA44u;
    // 7F3AAA44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AAA48:
    ctx->pc = 0x7F3AAA48u;
    // 7F3AAA48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AAA4C:
    ctx->pc = 0x7F3AAA4Cu;
    // 7F3AAA4C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AAA50:
    ctx->pc = 0x7F3AAA50u;
    // 7F3AAA50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AAA54:
    ctx->pc = 0x7F3AAA54u;
    // 7F3AAA54: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AAA58u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AAA58:
    ctx->pc = 0x7F3AAA58u;
    ctx->downcount -= 16;
    // 7F3AAA58: lmw     r19, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AAA5C:
    ctx->pc = 0x7F3AAA5Cu;
    // 7F3AAA5C: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAA60:
    ctx->pc = 0x7F3AAA60u;
    // 7F3AAA60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AAA64:
    ctx->pc = 0x7F3AAA64u;
    // 7F3AAA64: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_7F3AAA68:
    ctx->pc = 0x7F3AAA68u;
    // 7F3AAA68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAA6C:
    ctx->pc = 0x7F3AAA6Cu;
    ctx->downcount -= 32;
    // 7F3AAA6C: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AAA70:
    ctx->pc = 0x7F3AAA70u;
    // 7F3AAA70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AAA74:
    ctx->pc = 0x7F3AAA74u;
    // 7F3AAA74: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAA78:
    ctx->pc = 0x7F3AAA78u;
    // 7F3AAA78: lwz     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAA7C:
    ctx->pc = 0x7F3AAA7Cu;
    // 7F3AAA7C: stmw     r14, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AAA80:
    ctx->pc = 0x7F3AAA80u;
    // 7F3AAA80: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AAA84:
    ctx->pc = 0x7F3AAA84u;
    // 7F3AAA84: lwz     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAA88:
    ctx->pc = 0x7F3AAA88u;
    // 7F3AAA88: or   r20, r4, r4
    {
        ctx->gpr[20] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AAA8C:
    ctx->pc = 0x7F3AAA8Cu;
    // 7F3AAA8C: lwz     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAA90:
    ctx->pc = 0x7F3AAA90u;
    // 7F3AAA90: or   r14, r6, r6
    {
        ctx->gpr[14] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AAA94:
    ctx->pc = 0x7F3AAA94u;
    // 7F3AAA94: lwz     r19, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F3AAA98:
    ctx->pc = 0x7F3AAA98u;
    // 7F3AAA98: or   r15, r7, r7
    {
        ctx->gpr[15] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AAA9C:
    ctx->pc = 0x7F3AAA9Cu;
    // 7F3AAA9C: cmpwi   r0, 0
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

label_7F3AAAA0:
    ctx->pc = 0x7F3AAAA0u;
    // 7F3AAAA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AAAA4:
    ctx->pc = 0x7F3AAAA4u;
    // 7F3AAAA4: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAAA8:
    ctx->pc = 0x7F3AAAA8u;
    // 7F3AAAA8: or   r16, r8, r8
    {
        ctx->gpr[16] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AAAAC:
    ctx->pc = 0x7F3AAAACu;
    // 7F3AAAAC: or   r17, r9, r9
    {
        ctx->gpr[17] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3AAAB0:
    ctx->pc = 0x7F3AAAB0u;
    // 7F3AAAB0: or   r18, r10, r10
    {
        ctx->gpr[18] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3AAAB4:
    ctx->pc = 0x7F3AAAB4u;
    // 7F3AAAB4: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AAAB8:
    ctx->pc = 0x7F3AAAB8u;
    // 7F3AAAB8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AAABC:
    ctx->pc = 0x7F3AAABCu;
    // 7F3AAABC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AAAC0:
    ctx->pc = 0x7F3AAAC0u;
    // 7F3AAAC0: bc    12, 2, 0x7F3AAAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAAC8;
        }
    }

label_7F3AAAC4:
    ctx->pc = 0x7F3AAAC4u;
    ctx->downcount -= 1;
    // 7F3AAAC4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3AAAC8:
    ctx->pc = 0x7F3AAAC8u;
    ctx->downcount -= 6;
    // 7F3AAAC8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AAACC:
    ctx->pc = 0x7F3AAACCu;
    // 7F3AAACC: or   r24, r0, r0
    {
        ctx->gpr[24] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AAAD0:
    ctx->pc = 0x7F3AAAD0u;
    // 7F3AAAD0: addi    r3, r3, -1740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3AAAD4:
    ctx->pc = 0x7F3AAAD4u;
    // 7F3AAAD4: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAAD8:
    ctx->pc = 0x7F3AAAD8u;
    // 7F3AAAD8: cmpwi   r0, 0
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

label_7F3AAADC:
    ctx->pc = 0x7F3AAADCu;
    // 7F3AAADC: bc    12, 2, 0x7F3AAB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAB38;
        }
    }

label_7F3AAAE0:
    ctx->pc = 0x7F3AAAE0u;
    ctx->downcount -= 4;
    // 7F3AAAE0: lwz     r3, 216(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAAE4:
    ctx->pc = 0x7F3AAAE4u;
    // 7F3AAAE4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAAE8:
    ctx->pc = 0x7F3AAAE8u;
    // 7F3AAAE8: cmpwi   r0, 0
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

label_7F3AAAEC:
    ctx->pc = 0x7F3AAAECu;
    // 7F3AAAEC: bc    4, 2, 0x7F3AAB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAB20;
        }
    }

label_7F3AAAF0:
    ctx->pc = 0x7F3AAAF0u;
    ctx->downcount -= 6;
    // 7F3AAAF0: li      r24, 3
    ctx->gpr[24] = (u32)(s32)(3);

label_7F3AAAF4:
    ctx->pc = 0x7F3AAAF4u;
    // 7F3AAAF4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3AAAF8:
    ctx->pc = 0x7F3AAAF8u;
    // 7F3AAAF8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3AAAFC:
    ctx->pc = 0x7F3AAAFCu;
    // 7F3AAAFC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AAB00:
    ctx->pc = 0x7F3AAB00u;
    // 7F3AAB00: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3AAB04:
    ctx->pc = 0x7F3AAB04u;
    // 7F3AAB04: bl      0x80045D2C
    {
            ctx->lr = 0x7F3AAB08u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3AAB08:
    ctx->pc = 0x7F3AAB08u;
    ctx->downcount -= 5;
    // 7F3AAB08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AAB0C:
    ctx->pc = 0x7F3AAB0Cu;
    // 7F3AAB0C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3AAB10:
    ctx->pc = 0x7F3AAB10u;
    // 7F3AAB10: li      r5, 257
    ctx->gpr[5] = (u32)(s32)(257);

label_7F3AAB14:
    ctx->pc = 0x7F3AAB14u;
    // 7F3AAB14: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3AAB18:
    ctx->pc = 0x7F3AAB18u;
    // 7F3AAB18: bl      0x80045D2C
    {
            ctx->lr = 0x7F3AAB1Cu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3AAB1C:
    ctx->pc = 0x7F3AAB1Cu;
    ctx->downcount -= 1;
    // 7F3AAB1C: b       0x7F3AAB38
    {
            goto label_7F3AAB38;
    }

label_7F3AAB20:
    ctx->pc = 0x7F3AAB20u;
    ctx->downcount -= 6;
    // 7F3AAB20: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_7F3AAB24:
    ctx->pc = 0x7F3AAB24u;
    // 7F3AAB24: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AAB28:
    ctx->pc = 0x7F3AAB28u;
    // 7F3AAB28: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3AAB2C:
    ctx->pc = 0x7F3AAB2Cu;
    // 7F3AAB2C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AAB30:
    ctx->pc = 0x7F3AAB30u;
    // 7F3AAB30: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3AAB34:
    ctx->pc = 0x7F3AAB34u;
    // 7F3AAB34: bl      0x80045D2C
    {
            ctx->lr = 0x7F3AAB38u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3AAB38:
    ctx->pc = 0x7F3AAB38u;
    ctx->downcount -= 3;
    // 7F3AAB38: lwz     r0, 68(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAB3C:
    ctx->pc = 0x7F3AAB3Cu;
    // 7F3AAB3C: cmplwi  r0, 0x0000
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

label_7F3AAB40:
    ctx->pc = 0x7F3AAB40u;
    // 7F3AAB40: bc    12, 2, 0x7F3AAB48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAB48;
        }
    }

label_7F3AAB44:
    ctx->pc = 0x7F3AAB44u;
    ctx->downcount -= 1;
    // 7F3AAB44: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AAB48:
    ctx->pc = 0x7F3AAB48u;
    ctx->downcount -= 10;
    // 7F3AAB48: lwz     r3, 72(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAB4C:
    ctx->pc = 0x7F3AAB4Cu;
    // 7F3AAB4C: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAB50:
    ctx->pc = 0x7F3AAB50u;
    // 7F3AAB50: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAB54:
    ctx->pc = 0x7F3AAB54u;
    // 7F3AAB54: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAB58:
    ctx->pc = 0x7F3AAB58u;
    // 7F3AAB58: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAB5C:
    ctx->pc = 0x7F3AAB5Cu;
    // 7F3AAB5C: lwz     r0, 388(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAB60:
    ctx->pc = 0x7F3AAB60u;
    // 7F3AAB60: lwz     r26, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F3AAB64:
    ctx->pc = 0x7F3AAB64u;
    // 7F3AAB64: cmplwi  r0, 0x0000
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

label_7F3AAB68:
    ctx->pc = 0x7F3AAB68u;
    // 7F3AAB68: lwz     r25, 244(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(244);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F3AAB6C:
    ctx->pc = 0x7F3AAB6Cu;
    // 7F3AAB6C: bc    4, 2, 0x7F3AAB98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAB98;
        }
    }

label_7F3AAB70:
    ctx->pc = 0x7F3AAB70u;
    ctx->downcount -= 4;
    // 7F3AAB70: lwz     r3, 216(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAB74:
    ctx->pc = 0x7F3AAB74u;
    // 7F3AAB74: lha     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAB78:
    ctx->pc = 0x7F3AAB78u;
    // 7F3AAB78: cmpwi   r0, -1
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

label_7F3AAB7C:
    ctx->pc = 0x7F3AAB7Cu;
    // 7F3AAB7C: bc    12, 2, 0x7F3AAB98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAB98;
        }
    }

label_7F3AAB80:
    ctx->pc = 0x7F3AAB80u;
    ctx->downcount -= 7;
    // 7F3AAB80: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3AAB84:
    ctx->pc = 0x7F3AAB84u;
    // 7F3AAB84: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AAB88:
    ctx->pc = 0x7F3AAB88u;
    // 7F3AAB88: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F3AAB8C:
    ctx->pc = 0x7F3AAB8Cu;
    // 7F3AAB8C: add   r3, r16, r3
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AAB90:
    ctx->pc = 0x7F3AAB90u;
    // 7F3AAB90: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AAB94u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AAB94:
    ctx->pc = 0x7F3AAB94u;
    ctx->downcount -= 1;
    // 7F3AAB94: b       0x7F3AABA4
    {
            goto label_7F3AABA4;
    }

label_7F3AAB98:
    ctx->pc = 0x7F3AAB98u;
    ctx->downcount -= 3;
    // 7F3AAB98: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F3AAB9C:
    ctx->pc = 0x7F3AAB9Cu;
    // 7F3AAB9C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AABA0:
    ctx->pc = 0x7F3AABA0u;
    // 7F3AABA0: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AABA4u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AABA4:
    ctx->pc = 0x7F3AABA4u;
    ctx->downcount -= 4;
    // 7F3AABA4: ori     r0, r27, 0x0004
    ctx->gpr[0] = ctx->gpr[27] | 0x0004u;

label_7F3AABA8:
    ctx->pc = 0x7F3AABA8u;
    // 7F3AABA8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3AABAC:
    ctx->pc = 0x7F3AABACu;
    // 7F3AABAC: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AABB0:
    ctx->pc = 0x7F3AABB0u;
    // 7F3AABB0: b       0x7F3AAF68
    {
            goto label_7F3AAF68;
    }

label_7F3AABB4:
    ctx->pc = 0x7F3AABB4u;
    ctx->downcount -= 5;
    // 7F3AABB4: lwz     r3, 72(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AABB8:
    ctx->pc = 0x7F3AABB8u;
    // 7F3AABB8: lwz     r22, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3AABBC:
    ctx->pc = 0x7F3AABBCu;
    // 7F3AABBC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AABC0:
    // 7F3AABC0: cmplwi  r0, 0x0000
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

label_7F3AABC4:
    // 7F3AABC4: bc    12, 2, 0x7F3AAF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAF78;
        }
    }

label_7F3AABC8:
    ctx->pc = 0x7F3AABC8u;
    ctx->downcount -= 3;
    // 7F3AABC8: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AABCC:
    // 7F3AABCC: rlwinm. r0, r0, 0, 18, 18
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

label_7F3AABD0:
    // 7F3AABD0: bc    12, 2, 0x7F3AABFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AABFC;
        }
    }

label_7F3AABD4:
    ctx->pc = 0x7F3AABD4u;
    ctx->downcount -= 4;
    // 7F3AABD4: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AABD8:
    // 7F3AABD8: cmpwi   r0, 0
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

label_7F3AABDC:
    // 7F3AABDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AABE0:
    // 7F3AABE0: bc    4, 2, 0x7F3AABF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AABF0;
        }
    }

label_7F3AABE4:
    ctx->downcount -= 3;
    // 7F3AABE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AABE8:
    ctx->pc = 0x7F3AABE8u;
    // 7F3AABE8: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AABEC:
    // 7F3AABEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AABF0:
    ctx->downcount -= 2;
    // 7F3AABF0: cmpwi   r0, 0
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

label_7F3AABF4:
    // 7F3AABF4: bc    12, 2, 0x7F3AABFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AABFC;
        }
    }

label_7F3AABF8:
    ctx->downcount -= 1;
    // 7F3AABF8: bl      0x80042570
    {
            ctx->lr = 0x7F3AABFCu;
            ctx->pc = 0x80042570u;
            return;
    }

label_7F3AABFC:
    ctx->pc = 0x7F3AABFCu;
    ctx->downcount -= 3;
    // 7F3AABFC: lha     r0, 332(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAC00:
    // 7F3AAC00: rlwinm. r0, r0, 0, 28, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Eu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AAC04:
    // 7F3AAC04: bc    4, 2, 0x7F3AAC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAC54;
        }
    }

label_7F3AAC08:
    ctx->pc = 0x7F3AAC08u;
    ctx->downcount -= 3;
    // 7F3AAC08: lwz     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC0C:
    // 7F3AAC0C: cmpwi   r0, 1
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

label_7F3AAC10:
    // 7F3AAC10: bc    4, 2, 0x7F3AAC24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAC24;
        }
    }

label_7F3AAC14:
    ctx->pc = 0x7F3AAC14u;
    ctx->downcount -= 3;
    // 7F3AAC14: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC18:
    // 7F3AAC18: rlwinm. r0, r0, 0, 19, 19
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

label_7F3AAC1C:
    // 7F3AAC1C: bc    12, 2, 0x7F3AAF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAF78;
        }
    }

label_7F3AAC20:
    ctx->downcount -= 1;
    // 7F3AAC20: b       0x7F3AAC54
    {
            goto label_7F3AAC54;
    }

label_7F3AAC24:
    ctx->downcount -= 2;
    // 7F3AAC24: cmpwi   r0, 3
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

label_7F3AAC28:
    // 7F3AAC28: bc    12, 2, 0x7F3AAC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAC54;
        }
    }

label_7F3AAC2C:
    ctx->pc = 0x7F3AAC2Cu;
    ctx->downcount -= 3;
    // 7F3AAC2C: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC30:
    // 7F3AAC30: rlwinm. r0, r0, 0, 19, 19
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

label_7F3AAC34:
    // 7F3AAC34: bc    12, 2, 0x7F3AAC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAC54;
        }
    }

label_7F3AAC38:
    ctx->pc = 0x7F3AAC38u;
    ctx->downcount -= 7;
    // 7F3AAC38: lwz     r0, 80(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC3C:
    // 7F3AAC3C: ori     r0, r0, 0x0800
    ctx->gpr[0] = ctx->gpr[0] | 0x0800u;

label_7F3AAC40:
    ctx->pc = 0x7F3AAC40u;
    // 7F3AAC40: stw     r0, 80(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAC44:
    ctx->pc = 0x7F3AAC44u;
    // 7F3AAC44: lwz     r0, 192(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC48:
    // 7F3AAC48: ori     r0, r0, 0x0800
    ctx->gpr[0] = ctx->gpr[0] | 0x0800u;

label_7F3AAC4C:
    ctx->pc = 0x7F3AAC4Cu;
    // 7F3AAC4C: stw     r0, 192(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAC50:
    // 7F3AAC50: b       0x7F3AAF78
    {
            goto label_7F3AAF78;
    }

label_7F3AAC54:
    ctx->pc = 0x7F3AAC54u;
    ctx->downcount -= 5;
    // 7F3AAC54: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAC58:
    ctx->pc = 0x7F3AAC58u;
    // 7F3AAC58: lwz     r29, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3AAC5C:
    // 7F3AAC5C: cmplwi  r0, 0x0000
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

label_7F3AAC60:
    ctx->pc = 0x7F3AAC60u;
    // 7F3AAC60: stw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AAC64:
    // 7F3AAC64: bc    12, 2, 0x7F3AAC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAC6C;
        }
    }

label_7F3AAC68:
    ctx->downcount -= 1;
    // 7F3AAC68: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AAC6C:
    ctx->downcount -= 2;
    // 7F3AAC6C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F3AAC70:
    // 7F3AAC70: b       0x7F3AAF50
    {
            goto label_7F3AAF50;
    }

label_7F3AAC74:
    ctx->downcount -= 4;
    // 7F3AAC74: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AAC78:
    // 7F3AAC78: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3AAC7C:
    // 7F3AAC7C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F3AAC80:
    // 7F3AAC80: bl      0x800050B4
    {
            ctx->lr = 0x7F3AAC84u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AAC84:
    ctx->downcount -= 3;
    // 7F3AAC84: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAC88:
    ctx->pc = 0x7F3AAC88u;
    // 7F3AAC88: lwz     r30, 20(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3AAC8C:
    // 7F3AAC8C: bc    12, 2, 0x7F3AAD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD90;
        }
    }

label_7F3AAC90:
    ctx->pc = 0x7F3AAC90u;
    ctx->downcount -= 6;
    // 7F3AAC90: lwz     r7, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AAC94:
    // 7F3AAC94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AAC98:
    ctx->pc = 0x7F3AAC98u;
    // 7F3AAC98: lwz     r5, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AAC9C:
    // 7F3AAC9C: cmplwi  r7, 0x0000
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

label_7F3AACA0:
    ctx->pc = 0x7F3AACA0u;
    // 7F3AACA0: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AACA4:
    // 7F3AACA4: bc    12, 2, 0x7F3AACF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AACF0;
        }
    }

label_7F3AACA8:
    ctx->downcount -= 2;
    // 7F3AACA8: cmplwi  r5, 0x0000
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

label_7F3AACAC:
    // 7F3AACAC: bc    12, 2, 0x7F3AACF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AACF0;
        }
    }

label_7F3AACB0:
    ctx->downcount -= 2;
    // 7F3AACB0: cmplwi  r3, 0x0000
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

label_7F3AACB4:
    // 7F3AACB4: bc    12, 2, 0x7F3AACF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AACF0;
        }
    }

label_7F3AACB8:
    ctx->downcount -= 2;
    // 7F3AACB8: cmpwi   r27, 0
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

label_7F3AACBC:
    // 7F3AACBC: bc    4, 2, 0x7F3AACF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AACF0;
        }
    }

label_7F3AACC0:
    ctx->downcount -= 5;
    // 7F3AACC0: cmpwi   r15, -1
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AACC4:
    ctx->pc = 0x7F3AACC4u;
    // 7F3AACC4: lwz     r4, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AACC8:
    ctx->pc = 0x7F3AACC8u;
    // 7F3AACC8: lwz     r5, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AACCC:
    ctx->pc = 0x7F3AACCCu;
    // 7F3AACCC: lwz     r6, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AACD0:
    // 7F3AACD0: bc    12, 2, 0x7F3AAD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD30;
        }
    }

label_7F3AACD4:
    ctx->pc = 0x7F3AACD4u;
    ctx->downcount -= 5;
    // 7F3AACD4: lwz     r8, 72(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AACD8:
    ctx->pc = 0x7F3AACD8u;
    // 7F3AACD8: lwz     r7, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AACDC:
    ctx->pc = 0x7F3AACDCu;
    // 7F3AACDC: lwz     r8, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AACE0:
    // 7F3AACE0: cmplw   r8, r7
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AACE4:
    // 7F3AACE4: bc    12, 2, 0x7F3AAD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD30;
        }
    }

label_7F3AACE8:
    ctx->downcount -= 2;
    // 7F3AACE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AACEC:
    // 7F3AACEC: b       0x7F3AAD30
    {
            goto label_7F3AAD30;
    }

label_7F3AACF0:
    ctx->downcount -= 2;
    // 7F3AACF0: cmplwi  r3, 0x0000
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

label_7F3AACF4:
    // 7F3AACF4: bc    12, 2, 0x7F3AAD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD08;
        }
    }

label_7F3AACF8:
    ctx->pc = 0x7F3AACF8u;
    ctx->downcount -= 4;
    // 7F3AACF8: lwz     r5, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AACFC:
    ctx->pc = 0x7F3AACFCu;
    // 7F3AACFC: lwz     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AAD00:
    ctx->pc = 0x7F3AAD00u;
    // 7F3AAD00: stw     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AAD04:
    // 7F3AAD04: b       0x7F3AAD0C
    {
            goto label_7F3AAD0C;
    }

label_7F3AAD08:
    ctx->downcount -= 1;
    // 7F3AAD08: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3AAD0C:
    ctx->pc = 0x7F3AAD0Cu;
    ctx->downcount -= 7;
    // 7F3AAD0C: lwz     r8, 72(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(72);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AAD10:
    // 7F3AAD10: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3AAD14:
    ctx->pc = 0x7F3AAD14u;
    // 7F3AAD14: lwz     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AAD18:
    // 7F3AAD18: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F3AAD1C:
    ctx->pc = 0x7F3AAD1Cu;
    // 7F3AAD1C: lwz     r8, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AAD20:
    // 7F3AAD20: cmplw   r8, r7
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAD24:
    // 7F3AAD24: bc    12, 2, 0x7F3AAD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD2C;
        }
    }

label_7F3AAD28:
    ctx->downcount -= 1;
    // 7F3AAD28: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AAD2C:
    ctx->pc = 0x7F3AAD2Cu;
    ctx->downcount -= 1;
    // 7F3AAD2C: lwz     r29, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3AAD30:
    ctx->downcount -= 2;
    // 7F3AAD30: cmpwi   r15, -1
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAD34:
    // 7F3AAD34: bc    12, 2, 0x7F3AAD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD90;
        }
    }

label_7F3AAD38:
    ctx->downcount -= 2;
    // 7F3AAD38: cmpwi   r0, 0
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

label_7F3AAD3C:
    // 7F3AAD3C: bc    12, 2, 0x7F3AAD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD78;
        }
    }

label_7F3AAD40:
    ctx->pc = 0x7F3AAD40u;
    ctx->downcount -= 5;
    // 7F3AAD40: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAD44:
    // 7F3AAD44: rlwinm r3, r0, 0, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_7F3AAD48:
    // 7F3AAD48: addis   r0, r3, -87
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-87) << 16);

label_7F3AAD4C:
    // 7F3AAD4C: cmplwi  r0, 0x3DE0
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x3DE0u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAD50:
    // 7F3AAD50: bc    4, 2, 0x7F3AAD60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD60;
        }
    }

label_7F3AAD54:
    ctx->downcount -= 3;
    // 7F3AAD54: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AAD58:
    ctx->pc = 0x7F3AAD58u;
    // 7F3AAD58: lwz     r21, -31008(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31008);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3AAD5C:
    // 7F3AAD5C: b       0x7F3AAD80
    {
            goto label_7F3AAD80;
    }

label_7F3AAD60:
    ctx->downcount -= 3;
    // 7F3AAD60: addis   r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-1) << 16);

label_7F3AAD64:
    // 7F3AAD64: cmplwi  r0, 0xC6F3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xC6F3u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAD68:
    // 7F3AAD68: bc    4, 2, 0x7F3AAD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAD80;
        }
    }

label_7F3AAD6C:
    ctx->downcount -= 3;
    // 7F3AAD6C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AAD70:
    ctx->pc = 0x7F3AAD70u;
    // 7F3AAD70: lwz     r21, -31012(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31012);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3AAD74:
    // 7F3AAD74: b       0x7F3AAD80
    {
            goto label_7F3AAD80;
    }

label_7F3AAD78:
    ctx->downcount -= 2;
    // 7F3AAD78: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AAD7C:
    ctx->pc = 0x7F3AAD7Cu;
    // 7F3AAD7C: lwz     r21, -31004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31004);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3AAD80:
    ctx->pc = 0x7F3AAD80u;
    ctx->downcount -= 4;
    // 7F3AAD80: lha     r7, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAD84:
    // 7F3AAD84: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AAD88:
    // 7F3AAD88: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AAD8C:
    // 7F3AAD8C: bl      0x7F3B8BA4
    {
            ctx->lr = 0x7F3AAD90u;
            ctx->pc = 0x7F3B8BA4u;
            return;
    }

label_7F3AAD90:
    ctx->downcount -= 2;
    // 7F3AAD90: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F3AAD94:
    // 7F3AAD94: b       0x7F3AADF4
    {
            goto label_7F3AADF4;
    }

label_7F3AAD98:
    ctx->downcount -= 5;
    // 7F3AAD98: rlwinm r14, r20, 1, 15, 30
    {
        ctx->gpr[14] = dolrecomp_rotl32(ctx->gpr[20], 1u) & 0x0001FFFEu;
    }

label_7F3AAD9C:
    // 7F3AAD9C: rlwinm r31, r20, 0, 16, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[20], 0u) & 0x0000FFFFu;
    }

label_7F3AADA0:
    ctx->pc = 0x7F3AADA0u;
    // 7F3AADA0: lhax    r0, r30, r14
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[14];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AADA4:
    // 7F3AADA4: cmpwi   r0, -1
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

label_7F3AADA8:
    // 7F3AADA8: bc    12, 2, 0x7F3AADF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AADF0;
        }
    }

label_7F3AADAC:
    ctx->downcount -= 5;
    // 7F3AADAC: rlwinm r3, r0, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F3AADB0:
    ctx->pc = 0x7F3AADB0u;
    // 7F3AADB0: lwz     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AADB4:
    // 7F3AADB4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F3AADB8:
    // 7F3AADB8: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AADBC:
    // 7F3AADBC: bl      0x7F3AF6CC
    {
            ctx->lr = 0x7F3AADC0u;
            ctx->pc = 0x7F3AF6CCu;
            return;
    }

label_7F3AADC0:
    ctx->downcount -= 9;
    // 7F3AADC0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AADC4:
    ctx->pc = 0x7F3AADC4u;
    // 7F3AADC4: lwz     r5, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AADC8:
    ctx->pc = 0x7F3AADC8u;
    // 7F3AADC8: stw     r3, 15504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15504);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AADCC:
    // 7F3AADCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AADD0:
    // 7F3AADD0: or   r8, r19, r19
    {
        ctx->gpr[8] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3AADD4:
    // 7F3AADD4: addi    r6, r1, 12
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(12);

label_7F3AADD8:
    ctx->pc = 0x7F3AADD8u;
    // 7F3AADD8: lhax    r3, r30, r14
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[14];
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AADDC:
    // 7F3AADDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AADE0:
    // 7F3AADE0: bl      0x7F3AB04C
    {
            ctx->lr = 0x7F3AADE4u;
            goto label_7F3AB04C;
    }

label_7F3AADE4:
    ctx->downcount -= 3;
    // 7F3AADE4: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F3AADE8:
    // 7F3AADE8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AADEC:
    ctx->pc = 0x7F3AADECu;
    // 7F3AADEC: stwx    r3, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AADF0:
    ctx->downcount -= 1;
    // 7F3AADF0: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_7F3AADF4:
    ctx->pc = 0x7F3AADF4u;
    ctx->downcount -= 3;
    // 7F3AADF4: lhz     r0, 30(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(30);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AADF8:
    // 7F3AADF8: cmpw    r20, r0
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

label_7F3AADFC:
    // 7F3AADFC: bc    12, 0, 0x7F3AAD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAD98u;
                return;
            }
            goto label_7F3AAD98;
        }
    }

label_7F3AAE00:
    ctx->pc = 0x7F3AAE00u;
    ctx->downcount -= 4;
    // 7F3AAE00: lhz     r5, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F3AAE04:
    // 7F3AAE04: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3AAE08:
    // 7F3AAE08: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F3AAE0C:
    // 7F3AAE0C: bl      0x80042E0C
    {
            ctx->lr = 0x7F3AAE10u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F3AAE10:
    ctx->downcount -= 5;
    // 7F3AAE10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AAE14:
    // 7F3AAE14: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3AAE18:
    ctx->pc = 0x7F3AAE18u;
    // 7F3AAE18: stw     r0, 132(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAE1C:
    // 7F3AAE1C: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AAE20:
    // 7F3AAE20: b       0x7F3AAF38
    {
            goto label_7F3AAF38;
    }

label_7F3AAE24:
    ctx->pc = 0x7F3AAE24u;
    ctx->downcount -= 12;
    // 7F3AAE24: lwz     r3, 24(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAE28:
    ctx->pc = 0x7F3AAE28u;
    // 7F3AAE28: lwz     r5, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AAE2C:
    ctx->pc = 0x7F3AAE2Cu;
    // 7F3AAE2C: lhax    r0, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAE30:
    // 7F3AAE30: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AAE34:
    ctx->pc = 0x7F3AAE34u;
    // 7F3AAE34: lwz     r4, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AAE38:
    // 7F3AAE38: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AAE3C:
    ctx->pc = 0x7F3AAE3Cu;
    // 7F3AAE3C: lhzx    r14, r5, r31
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[31];
        ctx->gpr[14] = mem_read16(ctx, ea);
    }

label_7F3AAE40:
    ctx->pc = 0x7F3AAE40u;
    // 7F3AAE40: lwzx    r20, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F3AAE44:
    ctx->pc = 0x7F3AAE44u;
    // 7F3AAE44: lhzx    r0, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AAE48:
    // 7F3AAE48: rlwinm r3, r20, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[20], 0u) & 0x000000FFu;
    }

label_7F3AAE4C:
    ctx->pc = 0x7F3AAE4Cu;
    // 7F3AAE4C: sth     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AAE50:
    // 7F3AAE50: bl      0x7F3AAFC4
    {
            ctx->lr = 0x7F3AAE54u;
            goto label_7F3AAFC4;
    }

label_7F3AAE54:
    ctx->downcount -= 2;
    // 7F3AAE54: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAE58:
    // 7F3AAE58: bc    12, 2, 0x7F3AAE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAE90;
        }
    }

label_7F3AAE5C:
    ctx->downcount -= 2;
    // 7F3AAE5C: cmpwi   r15, -1
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAE60:
    // 7F3AAE60: bc    12, 2, 0x7F3AAE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAE90;
        }
    }

label_7F3AAE64:
    ctx->downcount -= 3;
    // 7F3AAE64: addi    r0, r20, 30
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(30);

label_7F3AAE68:
    // 7F3AAE68: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3AAE6C:
    // 7F3AAE6C: bl      0x7F3AAFC4
    {
            ctx->lr = 0x7F3AAE70u;
            goto label_7F3AAFC4;
    }

label_7F3AAE70:
    ctx->downcount -= 2;
    // 7F3AAE70: cmpwi   r24, 3
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAE74:
    // 7F3AAE74: bc    4, 2, 0x7F3AAE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAE90;
        }
    }

label_7F3AAE78:
    ctx->downcount -= 3;
    // 7F3AAE78: addi    r0, r20, 30
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(30);

label_7F3AAE7C:
    // 7F3AAE7C: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3AAE80:
    // 7F3AAE80: bl      0x7F3AAFC4
    {
            ctx->lr = 0x7F3AAE84u;
            goto label_7F3AAFC4;
    }

label_7F3AAE84:
    ctx->downcount -= 3;
    // 7F3AAE84: addi    r0, r20, 30
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(30);

label_7F3AAE88:
    // 7F3AAE88: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F3AAE8C:
    // 7F3AAE8C: bl      0x7F3AAFC4
    {
            ctx->lr = 0x7F3AAE90u;
            goto label_7F3AAFC4;
    }

label_7F3AAE90:
    ctx->pc = 0x7F3AAE90u;
    ctx->downcount -= 3;
    // 7F3AAE90: sth     r14, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[14]);
    }

label_7F3AAE94:
    // 7F3AAE94: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F3AAE98:
    // 7F3AAE98: bl      0x7F3AAFB8
    {
            ctx->lr = 0x7F3AAE9Cu;
            goto label_7F3AAFB8;
    }

label_7F3AAE9C:
    ctx->pc = 0x7F3AAE9Cu;
    ctx->downcount -= 2;
    // 7F3AAE9C: lhz     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F3AAEA0:
    // 7F3AAEA0: bl      0x7F3AAFAC
    {
            ctx->lr = 0x7F3AAEA4u;
            goto label_7F3AAFAC;
    }

label_7F3AAEA4:
    ctx->downcount -= 2;
    // 7F3AAEA4: cmpwi   r19, 0
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAEA8:
    // 7F3AAEA8: bc    12, 2, 0x7F3AAF30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAF30;
        }
    }

label_7F3AAEAC:
    ctx->downcount -= 2;
    // 7F3AAEAC: cmpwi   r15, -1
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAEB0:
    // 7F3AAEB0: bc    12, 2, 0x7F3AAF30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAF30;
        }
    }

label_7F3AAEB4:
    ctx->pc = 0x7F3AAEB4u;
    ctx->downcount -= 5;
    // 7F3AAEB4: lwz     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAEB8:
    ctx->pc = 0x7F3AAEB8u;
    // 7F3AAEB8: lwz     r3, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAEBC:
    // 7F3AAEBC: cmpwi   r0, 0
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

label_7F3AAEC0:
    ctx->pc = 0x7F3AAEC0u;
    // 7F3AAEC0: lhzx    r20, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[20] = mem_read16(ctx, ea);
    }

label_7F3AAEC4:
    // 7F3AAEC4: bc    12, 2, 0x7F3AAEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAEFC;
        }
    }

label_7F3AAEC8:
    ctx->downcount -= 2;
    // 7F3AAEC8: cmpwi   r24, 3
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AAECC:
    // 7F3AAECC: bc    4, 2, 0x7F3AAEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAEFC;
        }
    }

label_7F3AAED0:
    ctx->pc = 0x7F3AAED0u;
    ctx->downcount -= 9;
    // 7F3AAED0: lwz     r3, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAED4:
    ctx->pc = 0x7F3AAED4u;
    // 7F3AAED4: lwz     r4, 16(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AAED8:
    ctx->pc = 0x7F3AAED8u;
    // 7F3AAED8: lhzx    r3, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F3AAEDC:
    ctx->pc = 0x7F3AAEDCu;
    // 7F3AAEDC: lhzx    r4, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F3AAEE0:
    // 7F3AAEE0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AAEE4:
    // 7F3AAEE4: addi    r4, r4, -2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2);

label_7F3AAEE8:
    // 7F3AAEE8: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3AAEEC:
    // 7F3AAEEC: rlwinm r14, r4, 0, 16, 31
    {
        ctx->gpr[14] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_7F3AAEF0:
    // 7F3AAEF0: bl      0x7F3AAFAC
    {
            ctx->lr = 0x7F3AAEF4u;
            goto label_7F3AAFAC;
    }

label_7F3AAEF4:
    ctx->downcount -= 2;
    // 7F3AAEF4: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F3AAEF8:
    // 7F3AAEF8: bl      0x7F3AAFAC
    {
            ctx->lr = 0x7F3AAEFCu;
            goto label_7F3AAFAC;
    }

label_7F3AAEFC:
    ctx->pc = 0x7F3AAEFCu;
    ctx->downcount -= 3;
    // 7F3AAEFC: lwz     r0, 240(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(240);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAF00:
    // 7F3AAF00: cmplwi  r0, 0x0000
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

label_7F3AAF04:
    // 7F3AAF04: bc    12, 2, 0x7F3AAF10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AAF10;
        }
    }

label_7F3AAF08:
    ctx->pc = 0x7F3AAF08u;
    ctx->downcount -= 2;
    // 7F3AAF08: lhz     r3, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F3AAF0C:
    // 7F3AAF0C: bl      0x7F3AAFA0
    {
            ctx->lr = 0x7F3AAF10u;
            goto label_7F3AAFA0;
    }

label_7F3AAF10:
    ctx->downcount -= 4;
    // 7F3AAF10: rlwinm r14, r20, 1, 15, 30
    {
        ctx->gpr[14] = dolrecomp_rotl32(ctx->gpr[20], 1u) & 0x0001FFFEu;
    }

label_7F3AAF14:
    ctx->pc = 0x7F3AAF14u;
    // 7F3AAF14: lhax    r0, r29, r14
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[14];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAF18:
    // 7F3AAF18: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3AAF1C:
    // 7F3AAF1C: bl      0x7F3AAF94
    {
            ctx->lr = 0x7F3AAF20u;
            goto label_7F3AAF94;
    }

label_7F3AAF20:
    ctx->pc = 0x7F3AAF20u;
    ctx->downcount -= 4;
    // 7F3AAF20: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAF24:
    ctx->pc = 0x7F3AAF24u;
    // 7F3AAF24: lhax    r0, r3, r14
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[14];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AAF28:
    // 7F3AAF28: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3AAF2C:
    // 7F3AAF2C: bl      0x7F3AAF94
    {
            ctx->lr = 0x7F3AAF30u;
            goto label_7F3AAF94;
    }

label_7F3AAF30:
    ctx->downcount -= 2;
    // 7F3AAF30: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3AAF34:
    // 7F3AAF34: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_7F3AAF38:
    ctx->pc = 0x7F3AAF38u;
    ctx->downcount -= 3;
    // 7F3AAF38: lhz     r0, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AAF3C:
    // 7F3AAF3C: cmpw    r30, r0
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

label_7F3AAF40:
    // 7F3AAF40: bc    12, 0, 0x7F3AAE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAE24u;
                return;
            }
            goto label_7F3AAE24;
        }
    }

label_7F3AAF44:
    ctx->downcount -= 1;
    // 7F3AAF44: bl      0x7F3AAF90
    {
            ctx->lr = 0x7F3AAF48u;
            goto label_7F3AAF90;
    }

label_7F3AAF48:
    ctx->downcount -= 2;
    // 7F3AAF48: addi    r22, r22, 32
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(32);

label_7F3AAF4C:
    // 7F3AAF4C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F3AAF50:
    ctx->pc = 0x7F3AAF50u;
    ctx->downcount -= 3;
    // 7F3AAF50: lhz     r0, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AAF54:
    // 7F3AAF54: cmpw    r23, r0
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

label_7F3AAF58:
    // 7F3AAF58: bc    12, 0, 0x7F3AAC74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAC74u;
                return;
            }
            goto label_7F3AAC74;
        }
    }

label_7F3AAF5C:
    ctx->downcount -= 3;
    // 7F3AAF5C: addi    r26, r26, 36
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(36);

label_7F3AAF60:
    // 7F3AAF60: addi    r25, r25, 48
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(48);

label_7F3AAF64:
    // 7F3AAF64: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3AAF68:
    ctx->pc = 0x7F3AAF68u;
    ctx->downcount -= 4;
    // 7F3AAF68: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AAF6C:
    ctx->pc = 0x7F3AAF6Cu;
    // 7F3AAF6C: lhz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AAF70:
    // 7F3AAF70: cmpw    r28, r0
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

label_7F3AAF74:
    // 7F3AAF74: bc    12, 0, 0x7F3AABB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AABB4u;
                return;
            }
            goto label_7F3AABB4;
        }
    }

label_7F3AAF78:
    ctx->pc = 0x7F3AAF78u;
    ctx->downcount -= 17;
    // 7F3AAF78: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F3AAF7C:
    ctx->pc = 0x7F3AAF7Cu;
    // 7F3AAF7C: lmw     r14, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AAF80:
    ctx->pc = 0x7F3AAF80u;
    // 7F3AAF80: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AAF84:
    ctx->pc = 0x7F3AAF84u;
    // 7F3AAF84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AAF88:
    ctx->pc = 0x7F3AAF88u;
    // 7F3AAF88: addi    r1, r1, 208
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(208);

label_7F3AAF8C:
    ctx->pc = 0x7F3AAF8Cu;
    // 7F3AAF8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAF90:
    ctx->pc = 0x7F3AAF90u;
    ctx->downcount -= 1;
    // 7F3AAF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAF94:
    ctx->pc = 0x7F3AAF94u;
    ctx->downcount -= 3;
    // 7F3AAF94: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AAF98:
    ctx->pc = 0x7F3AAF98u;
    // 7F3AAF98: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AAF9C:
    ctx->pc = 0x7F3AAF9Cu;
    // 7F3AAF9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAFA0:
    ctx->pc = 0x7F3AAFA0u;
    ctx->downcount -= 3;
    // 7F3AAFA0: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AAFA4:
    ctx->pc = 0x7F3AAFA4u;
    // 7F3AAFA4: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AAFA8:
    ctx->pc = 0x7F3AAFA8u;
    // 7F3AAFA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAFAC:
    ctx->pc = 0x7F3AAFACu;
    ctx->downcount -= 3;
    // 7F3AAFAC: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AAFB0:
    ctx->pc = 0x7F3AAFB0u;
    // 7F3AAFB0: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AAFB4:
    ctx->pc = 0x7F3AAFB4u;
    // 7F3AAFB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAFB8:
    ctx->pc = 0x7F3AAFB8u;
    ctx->downcount -= 3;
    // 7F3AAFB8: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AAFBC:
    ctx->pc = 0x7F3AAFBCu;
    // 7F3AAFBC: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AAFC0:
    ctx->pc = 0x7F3AAFC0u;
    // 7F3AAFC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAFC4:
    ctx->pc = 0x7F3AAFC4u;
    ctx->downcount -= 3;
    // 7F3AAFC4: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AAFC8:
    ctx->pc = 0x7F3AAFC8u;
    // 7F3AAFC8: stb     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3AAFCC:
    ctx->pc = 0x7F3AAFCCu;
    // 7F3AAFCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AAFD0:
    ctx->pc = 0x7F3AAFD0u;
    ctx->downcount -= 15;
    // 7F3AAFD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AAFD4:
    ctx->pc = 0x7F3AAFD4u;
    // 7F3AAFD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AAFD8:
    ctx->pc = 0x7F3AAFD8u;
    // 7F3AAFD8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AAFDC:
    ctx->pc = 0x7F3AAFDCu;
    // 7F3AAFDC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AAFE0:
    ctx->pc = 0x7F3AAFE0u;
    // 7F3AAFE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAFE4:
    ctx->pc = 0x7F3AAFE4u;
    // 7F3AAFE4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AAFE8:
    ctx->pc = 0x7F3AAFE8u;
    // 7F3AAFE8: addi    r6, r5, 31984
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(31984);

label_7F3AAFEC:
    ctx->pc = 0x7F3AAFECu;
    // 7F3AAFEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AAFF0:
    ctx->pc = 0x7F3AAFF0u;
    // 7F3AAFF0: addi    r5, r4, 31976
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(31976);

label_7F3AAFF4:
    ctx->pc = 0x7F3AAFF4u;
    // 7F3AAFF4: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AAFF8:
    ctx->pc = 0x7F3AAFF8u;
    // 7F3AAFF8: addi    r3, r3, 31896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31896);

label_7F3AAFFC:
    ctx->pc = 0x7F3AAFFCu;
    // 7F3AAFFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB000:
    ctx->pc = 0x7F3AB000u;
    // 7F3AB000: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB004:
    ctx->pc = 0x7F3AB004u;
    // 7F3AB004: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F3AB008:
    ctx->pc = 0x7F3AB008u;
    // 7F3AB008: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB00Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB00C:
    ctx->pc = 0x7F3AB00Cu;
    ctx->downcount -= 7;
    // 7F3AB00C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB010:
    ctx->pc = 0x7F3AB010u;
    // 7F3AB010: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F3AB014:
    ctx->pc = 0x7F3AB014u;
    // 7F3AB014: addi    r4, r3, 31896
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31896);

label_7F3AB018:
    ctx->pc = 0x7F3AB018u;
    // 7F3AB018: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3AB01C:
    ctx->pc = 0x7F3AB01Cu;
    // 7F3AB01C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AB020:
    ctx->pc = 0x7F3AB020u;
    // 7F3AB020: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AB024:
    loop_7F3AB024(ctx);
    if (ctx->pc == 0x7F3AB030u) goto label_7F3AB030;
    return;
label_7F3AB028:
    // 7F3AB028: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F3AB02C:
    // 7F3AB02C: bc    16, 0, 0x7F3AB024
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB024u;
                return;
            }
            goto label_7F3AB024;
        }
    }

label_7F3AB030:
    ctx->pc = 0x7F3AB030u;
    ctx->downcount -= 8;
    // 7F3AB030: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB034:
    ctx->pc = 0x7F3AB034u;
    // 7F3AB034: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB038:
    ctx->pc = 0x7F3AB038u;
    // 7F3AB038: stw     r0, 15500(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB03C:
    ctx->pc = 0x7F3AB03Cu;
    // 7F3AB03C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB040:
    ctx->pc = 0x7F3AB040u;
    // 7F3AB040: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB044:
    ctx->pc = 0x7F3AB044u;
    // 7F3AB044: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB048:
    ctx->pc = 0x7F3AB048u;
    // 7F3AB048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB04C:
    ctx->pc = 0x7F3AB04Cu;
    ctx->downcount -= 16;
    // 7F3AB04C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB050:
    ctx->pc = 0x7F3AB050u;
    // 7F3AB050: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB054:
    ctx->pc = 0x7F3AB054u;
    // 7F3AB054: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F3AB058:
    ctx->pc = 0x7F3AB058u;
    // 7F3AB058: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F3AB05C:
    ctx->pc = 0x7F3AB05Cu;
    // 7F3AB05C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB060:
    ctx->pc = 0x7F3AB060u;
    // 7F3AB060: addi    r0, r9, 31896
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(31896);

label_7F3AB064:
    ctx->pc = 0x7F3AB064u;
    // 7F3AB064: addi    r11, r10, 31984
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(31984);

label_7F3AB068:
    ctx->pc = 0x7F3AB068u;
    // 7F3AB068: cmplwi  r6, 0x0000
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

label_7F3AB06C:
    ctx->pc = 0x7F3AB06Cu;
    // 7F3AB06C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AB070:
    ctx->pc = 0x7F3AB070u;
    // 7F3AB070: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AB074:
    ctx->pc = 0x7F3AB074u;
    // 7F3AB074: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AB078:
    ctx->pc = 0x7F3AB078u;
    // 7F3AB078: addi    r9, r10, 1
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AB07C:
    ctx->pc = 0x7F3AB07Cu;
    // 7F3AB07C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AB080:
    ctx->pc = 0x7F3AB080u;
    // 7F3AB080: stw     r9, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AB084:
    ctx->pc = 0x7F3AB084u;
    // 7F3AB084: or   r11, r9, r9
    {
        ctx->gpr[11] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3AB088:
    ctx->pc = 0x7F3AB088u;
    // 7F3AB088: bc    12, 2, 0x7F3AB094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB094;
        }
    }

label_7F3AB08C:
    ctx->pc = 0x7F3AB08Cu;
    ctx->downcount -= 2;
    // 7F3AB08C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB090:
    ctx->pc = 0x7F3AB090u;
    // 7F3AB090: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB094:
    ctx->pc = 0x7F3AB094u;
    ctx->downcount -= 4;
    // 7F3AB094: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F3AB098:
    ctx->pc = 0x7F3AB098u;
    // 7F3AB098: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AB09C:
    ctx->pc = 0x7F3AB09Cu;
    // 7F3AB09C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AB0A0:
    ctx->downcount -= 2;
    // 7F3AB0A0: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB0A4:
    // 7F3AB0A4: bc    4, 2, 0x7F3AB0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB0F0;
        }
    }

label_7F3AB0A8:
    ctx->pc = 0x7F3AB0A8u;
    ctx->downcount -= 3;
    // 7F3AB0A8: lwz     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB0AC:
    // 7F3AB0AC: cmplw   r0, r4
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB0B0:
    // 7F3AB0B0: bc    4, 2, 0x7F3AB0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB0F0;
        }
    }

label_7F3AB0B4:
    ctx->downcount -= 11;
    // 7F3AB0B4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB0B8:
    // 7F3AB0B8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB0BC:
    // 7F3AB0BC: addi    r4, r3, 31976
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31976);

label_7F3AB0C0:
    // 7F3AB0C0: cmplwi  r6, 0x0000
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

label_7F3AB0C4:
    // 7F3AB0C4: addi    r5, r5, 31984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31984);

label_7F3AB0C8:
    ctx->pc = 0x7F3AB0C8u;
    // 7F3AB0C8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB0CC:
    ctx->pc = 0x7F3AB0CCu;
    // 7F3AB0CC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AB0D0:
    // 7F3AB0D0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AB0D4:
    ctx->pc = 0x7F3AB0D4u;
    // 7F3AB0D4: stw     r5, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AB0D8:
    ctx->pc = 0x7F3AB0D8u;
    // 7F3AB0D8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB0DC:
    // 7F3AB0DC: bc    12, 2, 0x7F3AB0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB0E8;
        }
    }

label_7F3AB0E0:
    ctx->downcount -= 2;
    // 7F3AB0E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AB0E4:
    ctx->pc = 0x7F3AB0E4u;
    // 7F3AB0E4: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB0E8:
    ctx->downcount -= 4;
    // 7F3AB0E8: mulli   r3, r9, 3
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[9] * (s64)(s32)3);

label_7F3AB0EC:
    // 7F3AB0EC: b       0x7F3AB170
    {
            goto label_7F3AB170;
    }

label_7F3AB0F0:
    ctx->pc = 0x7F3AB0F0u;
    ctx->downcount -= 3;
    // 7F3AB0F0: lwz     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB0F4:
    // 7F3AB0F4: cmpw    r0, r11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[11]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB0F8:
    // 7F3AB0F8: bc    4, 0, 0x7F3AB104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB104;
        }
    }

label_7F3AB0FC:
    ctx->downcount -= 2;
    // 7F3AB0FC: or   r11, r0, r0
    {
        ctx->gpr[11] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AB100:
    // 7F3AB100: or   r10, r9, r9
    {
        ctx->gpr[10] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3AB104:
    ctx->downcount -= 3;
    // 7F3AB104: addi    r12, r12, 8
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(8);

label_7F3AB108:
    // 7F3AB108: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F3AB10C:
    // 7F3AB10C: bc    16, 0, 0x7F3AB0A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB0A0u;
                return;
            }
            goto label_7F3AB0A0;
        }
    }

label_7F3AB110:
    ctx->pc = 0x7F3AB110u;
    ctx->downcount -= 14;
    // 7F3AB110: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AB114:
    ctx->pc = 0x7F3AB114u;
    // 7F3AB114: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F3AB118:
    ctx->pc = 0x7F3AB118u;
    // 7F3AB118: addi    r6, r6, 31984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31984);

label_7F3AB11C:
    ctx->pc = 0x7F3AB11Cu;
    // 7F3AB11C: rlwinm r9, r10, 3, 0, 28
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[10], 3u) & 0xFFFFFFF8u;
    }

label_7F3AB120:
    ctx->pc = 0x7F3AB120u;
    // 7F3AB120: addi    r7, r7, 31896
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(31896);

label_7F3AB124:
    ctx->pc = 0x7F3AB124u;
    // 7F3AB124: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AB128:
    ctx->pc = 0x7F3AB128u;
    // 7F3AB128: add   r7, r7, r9
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3AB12C:
    ctx->pc = 0x7F3AB12Cu;
    // 7F3AB12C: rlwinm. r0, r5, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AB130:
    ctx->pc = 0x7F3AB130u;
    // 7F3AB130: stw     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AB134:
    ctx->pc = 0x7F3AB134u;
    // 7F3AB134: mulli   r31, r10, 3
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[10] * (s64)(s32)3);

label_7F3AB138:
    ctx->pc = 0x7F3AB138u;
    // 7F3AB138: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AB13C:
    ctx->pc = 0x7F3AB13Cu;
    // 7F3AB13C: bc    4, 2, 0x7F3AB16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB16C;
        }
    }

label_7F3AB140:
    ctx->pc = 0x7F3AB140u;
    ctx->downcount -= 2;
    // 7F3AB140: rlwinm. r0, r5, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AB144:
    ctx->pc = 0x7F3AB144u;
    // 7F3AB144: bc    12, 2, 0x7F3AB15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB15C;
        }
    }

label_7F3AB148:
    ctx->pc = 0x7F3AB148u;
    ctx->downcount -= 4;
    // 7F3AB148: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB14C:
    ctx->pc = 0x7F3AB14Cu;
    // 7F3AB14C: or   r5, r10, r10
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3AB150:
    ctx->pc = 0x7F3AB150u;
    // 7F3AB150: or   r6, r8, r8
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AB154:
    ctx->pc = 0x7F3AB154u;
    // 7F3AB154: bl      0x7F3AB280
    {
            ctx->lr = 0x7F3AB158u;
            goto label_7F3AB280;
    }

label_7F3AB158:
    ctx->pc = 0x7F3AB158u;
    ctx->downcount -= 1;
    // 7F3AB158: b       0x7F3AB16C
    {
            goto label_7F3AB16C;
    }

label_7F3AB15C:
    ctx->pc = 0x7F3AB15Cu;
    ctx->downcount -= 4;
    // 7F3AB15C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB160:
    ctx->pc = 0x7F3AB160u;
    // 7F3AB160: or   r5, r10, r10
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3AB164:
    ctx->pc = 0x7F3AB164u;
    // 7F3AB164: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AB168:
    ctx->pc = 0x7F3AB168u;
    // 7F3AB168: bl      0x7F3AB184
    {
            ctx->lr = 0x7F3AB16Cu;
            goto label_7F3AB184;
    }

label_7F3AB16C:
    ctx->pc = 0x7F3AB16Cu;
    ctx->downcount -= 1;
    // 7F3AB16C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB170:
    ctx->pc = 0x7F3AB170u;
    ctx->downcount -= 6;
    // 7F3AB170: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB174:
    ctx->pc = 0x7F3AB174u;
    // 7F3AB174: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3AB178:
    ctx->pc = 0x7F3AB178u;
    // 7F3AB178: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB17C:
    ctx->pc = 0x7F3AB17Cu;
    // 7F3AB17C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB180:
    ctx->pc = 0x7F3AB180u;
    // 7F3AB180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB184:
    ctx->pc = 0x7F3AB184u;
    ctx->downcount -= 20;
    // 7F3AB184: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB188:
    ctx->pc = 0x7F3AB188u;
    // 7F3AB188: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB18C:
    ctx->pc = 0x7F3AB18Cu;
    // 7F3AB18C: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB190:
    ctx->pc = 0x7F3AB190u;
    // 7F3AB190: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AB194:
    ctx->pc = 0x7F3AB194u;
    // 7F3AB194: stmw     r28, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB198:
    ctx->pc = 0x7F3AB198u;
    // 7F3AB198: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AB19C:
    ctx->pc = 0x7F3AB19Cu;
    // 7F3AB19C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB1A0:
    ctx->pc = 0x7F3AB1A0u;
    // 7F3AB1A0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AB1A4:
    ctx->pc = 0x7F3AB1A4u;
    // 7F3AB1A4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AB1A8:
    ctx->pc = 0x7F3AB1A8u;
    // 7F3AB1A8: bc    12, 2, 0x7F3AB1B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB1B0;
        }
    }

label_7F3AB1AC:
    ctx->pc = 0x7F3AB1ACu;
    ctx->downcount -= 1;
    // 7F3AB1AC: bl      0x80046A30
    {
            ctx->lr = 0x7F3AB1B0u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_7F3AB1B0:
    ctx->pc = 0x7F3AB1B0u;
    ctx->downcount -= 3;
    // 7F3AB1B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AB1B4:
    ctx->pc = 0x7F3AB1B4u;
    // 7F3AB1B4: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AB1B8:
    ctx->pc = 0x7F3AB1B8u;
    // 7F3AB1B8: bl      0x8002505C
    {
            ctx->lr = 0x7F3AB1BCu;
            ctx->pc = 0x8002505Cu;
            return;
    }

label_7F3AB1BC:
    ctx->pc = 0x7F3AB1BCu;
    ctx->downcount -= 7;
    // 7F3AB1BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AB1C0:
    ctx->pc = 0x7F3AB1C0u;
    // 7F3AB1C0: rlwinm. r0, r31, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AB1C4:
    ctx->pc = 0x7F3AB1C4u;
    // 7F3AB1C4: lfs     f0, -21376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AB1C8:
    ctx->pc = 0x7F3AB1C8u;
    // 7F3AB1C8: stfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AB1CC:
    ctx->pc = 0x7F3AB1CCu;
    // 7F3AB1CC: stfs     f0, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AB1D0:
    ctx->pc = 0x7F3AB1D0u;
    // 7F3AB1D0: stfs     f0, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AB1D4:
    ctx->pc = 0x7F3AB1D4u;
    // 7F3AB1D4: bc    12, 2, 0x7F3AB244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB244;
        }
    }

label_7F3AB1D8:
    ctx->pc = 0x7F3AB1D8u;
    ctx->downcount -= 6;
    // 7F3AB1D8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AB1DC:
    ctx->pc = 0x7F3AB1DCu;
    // 7F3AB1DC: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AB1E0:
    ctx->pc = 0x7F3AB1E0u;
    // 7F3AB1E0: lfs     f1, -21324(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AB1E4:
    ctx->pc = 0x7F3AB1E4u;
    // 7F3AB1E4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1E4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3AB1E8:
    ctx->pc = 0x7F3AB1E8u;
    // 7F3AB1E8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AB1E8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F3AB1EC:
    ctx->pc = 0x7F3AB1ECu;
    // 7F3AB1EC: bl      0x8002550C
    {
            ctx->lr = 0x7F3AB1F0u;
            ctx->pc = 0x8002550Cu;
            return;
    }

label_7F3AB1F0:
    ctx->pc = 0x7F3AB1F0u;
    ctx->downcount -= 4;
    // 7F3AB1F0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AB1F4:
    ctx->pc = 0x7F3AB1F4u;
    // 7F3AB1F4: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AB1F8:
    ctx->pc = 0x7F3AB1F8u;
    // 7F3AB1F8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AB1FC:
    ctx->pc = 0x7F3AB1FCu;
    // 7F3AB1FC: bl      0x80025090
    {
            ctx->lr = 0x7F3AB200u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AB200:
    ctx->pc = 0x7F3AB200u;
    ctx->downcount -= 8;
    // 7F3AB200: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AB204:
    ctx->pc = 0x7F3AB204u;
    // 7F3AB204: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AB208:
    ctx->pc = 0x7F3AB208u;
    // 7F3AB208: addi    r5, r3, -21324
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21324);

label_7F3AB20C:
    ctx->pc = 0x7F3AB20Cu;
    // 7F3AB20C: lfs     f3, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB20Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3AB210:
    ctx->pc = 0x7F3AB210u;
    // 7F3AB210: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AB210u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AB214:
    ctx->pc = 0x7F3AB214u;
    // 7F3AB214: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_7F3AB218:
    ctx->pc = 0x7F3AB218u;
    // 7F3AB218: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AB218u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3AB21C:
    ctx->pc = 0x7F3AB21Cu;
    // 7F3AB21C: bl      0x8002548C
    {
            ctx->lr = 0x7F3AB220u;
            ctx->pc = 0x8002548Cu;
            return;
    }

label_7F3AB220:
    ctx->pc = 0x7F3AB220u;
    ctx->downcount -= 7;
    // 7F3AB220: mulli   r4, r30, 3
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)3);

label_7F3AB224:
    ctx->pc = 0x7F3AB224u;
    // 7F3AB224: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AB228:
    ctx->pc = 0x7F3AB228u;
    // 7F3AB228: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AB22C:
    ctx->pc = 0x7F3AB22Cu;
    // 7F3AB22C: addi    r4, r4, 30
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30);

label_7F3AB230:
    ctx->pc = 0x7F3AB230u;
    // 7F3AB230: bl      0x80046B68
    {
            ctx->lr = 0x7F3AB234u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F3AB234:
    ctx->pc = 0x7F3AB234u;
    ctx->downcount -= 4;
    // 7F3AB234: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_7F3AB238:
    ctx->pc = 0x7F3AB238u;
    // 7F3AB238: li      r4, 82
    ctx->gpr[4] = (u32)(s32)(82);

label_7F3AB23C:
    ctx->pc = 0x7F3AB23Cu;
    // 7F3AB23C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB240:
    ctx->pc = 0x7F3AB240u;
    // 7F3AB240: bl      0x80046B68
    {
            ctx->lr = 0x7F3AB244u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F3AB244:
    ctx->pc = 0x7F3AB244u;
    ctx->downcount -= 2;
    // 7F3AB244: rlwinm. r0, r31, 0, 30, 30
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

label_7F3AB248:
    ctx->pc = 0x7F3AB248u;
    // 7F3AB248: bc    12, 2, 0x7F3AB258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB258;
        }
    }

label_7F3AB24C:
    ctx->pc = 0x7F3AB24Cu;
    ctx->downcount -= 3;
    // 7F3AB24C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AB250:
    ctx->pc = 0x7F3AB250u;
    // 7F3AB250: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AB254:
    ctx->pc = 0x7F3AB254u;
    // 7F3AB254: bl      0x80046AB0
    {
            ctx->lr = 0x7F3AB258u;
            ctx->pc = 0x80046AB0u;
            return;
    }

label_7F3AB258:
    ctx->pc = 0x7F3AB258u;
    ctx->downcount -= 21;
    // 7F3AB258: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB25C:
    ctx->pc = 0x7F3AB25Cu;
    // 7F3AB25C: addi    r4, r3, 31980
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31980);

label_7F3AB260:
    ctx->pc = 0x7F3AB260u;
    // 7F3AB260: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB264:
    ctx->pc = 0x7F3AB264u;
    // 7F3AB264: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AB268:
    ctx->pc = 0x7F3AB268u;
    // 7F3AB268: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB26C:
    ctx->pc = 0x7F3AB26Cu;
    // 7F3AB26C: lmw     r28, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB270:
    ctx->pc = 0x7F3AB270u;
    // 7F3AB270: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB274:
    ctx->pc = 0x7F3AB274u;
    // 7F3AB274: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB278:
    ctx->pc = 0x7F3AB278u;
    // 7F3AB278: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_7F3AB27C:
    ctx->pc = 0x7F3AB27Cu;
    // 7F3AB27C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB280:
    ctx->pc = 0x7F3AB280u;
    ctx->downcount -= 20;
    // 7F3AB280: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB284:
    ctx->pc = 0x7F3AB284u;
    // 7F3AB284: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB288:
    ctx->pc = 0x7F3AB288u;
    // 7F3AB288: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB28C:
    ctx->pc = 0x7F3AB28Cu;
    // 7F3AB28C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB290:
    ctx->pc = 0x7F3AB290u;
    // 7F3AB290: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB294:
    ctx->pc = 0x7F3AB294u;
    // 7F3AB294: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AB298:
    ctx->pc = 0x7F3AB298u;
    // 7F3AB298: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AB29C:
    ctx->pc = 0x7F3AB29Cu;
    // 7F3AB29C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AB2A0:
    ctx->pc = 0x7F3AB2A0u;
    // 7F3AB2A0: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F3AB2A4:
    ctx->pc = 0x7F3AB2A4u;
    // 7F3AB2A4: bl      0x80046A80
    {
            ctx->lr = 0x7F3AB2A8u;
            ctx->pc = 0x80046A80u;
            return;
    }

label_7F3AB2A8:
    ctx->pc = 0x7F3AB2A8u;
    ctx->downcount -= 3;
    // 7F3AB2A8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB2AC:
    ctx->pc = 0x7F3AB2ACu;
    // 7F3AB2AC: rlwinm r3, r28, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_7F3AB2B0:
    ctx->pc = 0x7F3AB2B0u;
    // 7F3AB2B0: bl      0x80046B00
    {
            ctx->lr = 0x7F3AB2B4u;
            ctx->pc = 0x80046B00u;
            return;
    }

label_7F3AB2B4:
    ctx->pc = 0x7F3AB2B4u;
    ctx->downcount -= 2;
    // 7F3AB2B4: cmpwi   r30, 0
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

label_7F3AB2B8:
    ctx->pc = 0x7F3AB2B8u;
    // 7F3AB2B8: bc    12, 2, 0x7F3AB2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB2D0;
        }
    }

label_7F3AB2BC:
    ctx->pc = 0x7F3AB2BCu;
    ctx->downcount -= 7;
    // 7F3AB2BC: mulli   r4, r29, 3
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)3);

label_7F3AB2C0:
    ctx->pc = 0x7F3AB2C0u;
    // 7F3AB2C0: rlwinm r3, r28, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_7F3AB2C4:
    ctx->pc = 0x7F3AB2C4u;
    // 7F3AB2C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB2C8:
    ctx->pc = 0x7F3AB2C8u;
    // 7F3AB2C8: addi    r4, r4, 30
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30);

label_7F3AB2CC:
    ctx->pc = 0x7F3AB2CCu;
    // 7F3AB2CC: bl      0x80046C1C
    {
            ctx->lr = 0x7F3AB2D0u;
            ctx->pc = 0x80046C1Cu;
            return;
    }

label_7F3AB2D0:
    ctx->pc = 0x7F3AB2D0u;
    ctx->downcount -= 21;
    // 7F3AB2D0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB2D4:
    ctx->pc = 0x7F3AB2D4u;
    // 7F3AB2D4: addi    r4, r3, 31980
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31980);

label_7F3AB2D8:
    ctx->pc = 0x7F3AB2D8u;
    // 7F3AB2D8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB2DC:
    ctx->pc = 0x7F3AB2DCu;
    // 7F3AB2DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AB2E0:
    ctx->pc = 0x7F3AB2E0u;
    // 7F3AB2E0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB2E4:
    ctx->pc = 0x7F3AB2E4u;
    // 7F3AB2E4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB2E8:
    ctx->pc = 0x7F3AB2E8u;
    // 7F3AB2E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB2EC:
    ctx->pc = 0x7F3AB2ECu;
    // 7F3AB2EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB2F0:
    ctx->pc = 0x7F3AB2F0u;
    // 7F3AB2F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AB2F4:
    ctx->pc = 0x7F3AB2F4u;
    // 7F3AB2F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB2F8:
    ctx->pc = 0x7F3AB2F8u;
    ctx->downcount -= 7;
    // 7F3AB2F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB2FC:
    ctx->pc = 0x7F3AB2FCu;
    // 7F3AB2FC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AB300:
    ctx->pc = 0x7F3AB300u;
    // 7F3AB300: stwu     r4, -1740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1740);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[3] = ea;
    }

label_7F3AB304:
    ctx->pc = 0x7F3AB304u;
    // 7F3AB304: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AB308:
    ctx->pc = 0x7F3AB308u;
    // 7F3AB308: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB30C:
    ctx->pc = 0x7F3AB30Cu;
    // 7F3AB30C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB310:
    ctx->pc = 0x7F3AB310u;
    // 7F3AB310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB314:
    ctx->pc = 0x7F3AB314u;
    ctx->downcount -= 13;
    // 7F3AB314: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB318:
    ctx->pc = 0x7F3AB318u;
    // 7F3AB318: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB31C:
    ctx->pc = 0x7F3AB31Cu;
    // 7F3AB31C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AB320:
    ctx->pc = 0x7F3AB320u;
    // 7F3AB320: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB324:
    ctx->pc = 0x7F3AB324u;
    // 7F3AB324: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB328:
    ctx->pc = 0x7F3AB328u;
    // 7F3AB328: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB32C:
    ctx->pc = 0x7F3AB32Cu;
    // 7F3AB32C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB330:
    ctx->pc = 0x7F3AB330u;
    // 7F3AB330: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB334:
    ctx->pc = 0x7F3AB334u;
    // 7F3AB334: stw     r0, 15484(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB338:
    ctx->pc = 0x7F3AB338u;
    // 7F3AB338: stw     r0, 15488(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15488);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB33C:
    ctx->pc = 0x7F3AB33Cu;
    // 7F3AB33C: stw     r0, 15496(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB340:
    ctx->pc = 0x7F3AB340u;
    // 7F3AB340: stw     r0, 15492(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB344:
    ctx->pc = 0x7F3AB344u;
    // 7F3AB344: bl      0x7F3AB7D8
    {
            ctx->lr = 0x7F3AB348u;
            goto label_7F3AB7D8;
    }

label_7F3AB348:
    ctx->pc = 0x7F3AB348u;
    ctx->downcount -= 5;
    // 7F3AB348: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AB34C:
    ctx->pc = 0x7F3AB34Cu;
    // 7F3AB34C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB350:
    ctx->pc = 0x7F3AB350u;
    // 7F3AB350: addi    r3, r3, -31608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31608);

label_7F3AB354:
    ctx->pc = 0x7F3AB354u;
    // 7F3AB354: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB358:
    ctx->pc = 0x7F3AB358u;
    // 7F3AB358: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB35Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB35C:
    ctx->pc = 0x7F3AB35Cu;
    ctx->downcount -= 5;
    // 7F3AB35C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AB360:
    ctx->pc = 0x7F3AB360u;
    // 7F3AB360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB364:
    ctx->pc = 0x7F3AB364u;
    // 7F3AB364: addi    r3, r3, -32120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32120);

label_7F3AB368:
    ctx->pc = 0x7F3AB368u;
    // 7F3AB368: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB36C:
    ctx->pc = 0x7F3AB36Cu;
    // 7F3AB36C: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB370u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB370:
    ctx->pc = 0x7F3AB370u;
    ctx->downcount -= 5;
    // 7F3AB370: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AB374:
    ctx->pc = 0x7F3AB374u;
    // 7F3AB374: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB378:
    ctx->pc = 0x7F3AB378u;
    // 7F3AB378: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F3AB37C:
    ctx->pc = 0x7F3AB37Cu;
    // 7F3AB37C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB380:
    ctx->pc = 0x7F3AB380u;
    // 7F3AB380: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB384u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB384:
    ctx->pc = 0x7F3AB384u;
    ctx->downcount -= 5;
    // 7F3AB384: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB388:
    ctx->pc = 0x7F3AB388u;
    // 7F3AB388: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB38C:
    ctx->pc = 0x7F3AB38Cu;
    // 7F3AB38C: addi    r3, r3, 32392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32392);

label_7F3AB390:
    ctx->pc = 0x7F3AB390u;
    // 7F3AB390: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB394:
    ctx->pc = 0x7F3AB394u;
    // 7F3AB394: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB398u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB398:
    ctx->pc = 0x7F3AB398u;
    ctx->downcount -= 5;
    // 7F3AB398: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB39C:
    ctx->pc = 0x7F3AB39Cu;
    // 7F3AB39C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB3A0:
    ctx->pc = 0x7F3AB3A0u;
    // 7F3AB3A0: addi    r3, r3, 32004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32004);

label_7F3AB3A4:
    ctx->pc = 0x7F3AB3A4u;
    // 7F3AB3A4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AB3A8:
    ctx->pc = 0x7F3AB3A8u;
    // 7F3AB3A8: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB3ACu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB3AC:
    ctx->pc = 0x7F3AB3ACu;
    ctx->downcount -= 5;
    // 7F3AB3AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB3B0:
    ctx->pc = 0x7F3AB3B0u;
    // 7F3AB3B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB3B4:
    ctx->pc = 0x7F3AB3B4u;
    // 7F3AB3B4: addi    r3, r3, 32000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32000);

label_7F3AB3B8:
    ctx->pc = 0x7F3AB3B8u;
    // 7F3AB3B8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AB3BC:
    ctx->pc = 0x7F3AB3BCu;
    // 7F3AB3BC: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB3C0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB3C0:
    ctx->pc = 0x7F3AB3C0u;
    ctx->downcount -= 5;
    // 7F3AB3C0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB3C4:
    ctx->pc = 0x7F3AB3C4u;
    // 7F3AB3C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB3C8:
    ctx->pc = 0x7F3AB3C8u;
    // 7F3AB3C8: addi    r3, r3, 32200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32200);

label_7F3AB3CC:
    ctx->pc = 0x7F3AB3CCu;
    // 7F3AB3CC: li      r5, 192
    ctx->gpr[5] = (u32)(s32)(192);

label_7F3AB3D0:
    ctx->pc = 0x7F3AB3D0u;
    // 7F3AB3D0: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB3D4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB3D4:
    ctx->pc = 0x7F3AB3D4u;
    ctx->downcount -= 5;
    // 7F3AB3D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB3D8:
    ctx->pc = 0x7F3AB3D8u;
    // 7F3AB3D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB3DC:
    ctx->pc = 0x7F3AB3DCu;
    // 7F3AB3DC: addi    r3, r3, 32008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32008);

label_7F3AB3E0:
    ctx->pc = 0x7F3AB3E0u;
    // 7F3AB3E0: li      r5, 192
    ctx->gpr[5] = (u32)(s32)(192);

label_7F3AB3E4:
    ctx->pc = 0x7F3AB3E4u;
    // 7F3AB3E4: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB3E8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB3E8:
    ctx->pc = 0x7F3AB3E8u;
    ctx->downcount -= 5;
    // 7F3AB3E8: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AB3EC:
    ctx->pc = 0x7F3AB3ECu;
    // 7F3AB3EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB3F0:
    ctx->pc = 0x7F3AB3F0u;
    // 7F3AB3F0: addi    r3, r3, -31568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31568);

label_7F3AB3F4:
    ctx->pc = 0x7F3AB3F4u;
    // 7F3AB3F4: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB3F8:
    ctx->pc = 0x7F3AB3F8u;
    // 7F3AB3F8: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB3FCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB3FC:
    ctx->pc = 0x7F3AB3FCu;
    ctx->downcount -= 5;
    // 7F3AB3FC: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AB400:
    ctx->pc = 0x7F3AB400u;
    // 7F3AB400: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB404:
    ctx->pc = 0x7F3AB404u;
    // 7F3AB404: addi    r3, r3, -32080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32080);

label_7F3AB408:
    ctx->pc = 0x7F3AB408u;
    // 7F3AB408: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3AB40C:
    ctx->pc = 0x7F3AB40Cu;
    // 7F3AB40C: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB410u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB410:
    ctx->pc = 0x7F3AB410u;
    ctx->downcount -= 1;
    // 7F3AB410: bl      0x7F3AB2F8
    {
            ctx->lr = 0x7F3AB414u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB2F8u;
                return;
            }
            goto label_7F3AB2F8;
    }

label_7F3AB414:
    ctx->pc = 0x7F3AB414u;
    ctx->downcount -= 5;
    // 7F3AB414: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB418:
    ctx->pc = 0x7F3AB418u;
    // 7F3AB418: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB41C:
    ctx->pc = 0x7F3AB41Cu;
    // 7F3AB41C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB420:
    ctx->pc = 0x7F3AB420u;
    // 7F3AB420: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB424:
    ctx->pc = 0x7F3AB424u;
    ctx->downcount -= 14;
    // 7F3AB424: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB428:
    ctx->pc = 0x7F3AB428u;
    // 7F3AB428: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AB42C:
    ctx->pc = 0x7F3AB42Cu;
    // 7F3AB42C: addi    r6, r4, 15484
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15484);

label_7F3AB430:
    ctx->pc = 0x7F3AB430u;
    // 7F3AB430: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AB434:
    ctx->pc = 0x7F3AB434u;
    // 7F3AB434: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AB438:
    ctx->pc = 0x7F3AB438u;
    // 7F3AB438: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AB43C:
    ctx->pc = 0x7F3AB43Cu;
    // 7F3AB43C: addi    r8, r5, -31608
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-31608);

label_7F3AB440:
    ctx->pc = 0x7F3AB440u;
    // 7F3AB440: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB444:
    ctx->pc = 0x7F3AB444u;
    // 7F3AB444: addi    r7, r4, -32120
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-32120);

label_7F3AB448:
    ctx->pc = 0x7F3AB448u;
    // 7F3AB448: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB44C:
    ctx->pc = 0x7F3AB44Cu;
    // 7F3AB44C: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F3AB450:
    ctx->pc = 0x7F3AB450u;
    // 7F3AB450: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB454:
    ctx->pc = 0x7F3AB454u;
    // 7F3AB454: bc    4, 1, 0x7F3AB484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB484;
        }
    }

label_7F3AB458:
    ctx->pc = 0x7F3AB458u;
    ctx->downcount -= 7;
    // 7F3AB458: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB45C:
    ctx->pc = 0x7F3AB45Cu;
    // 7F3AB45C: lwzx    r6, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AB460:
    ctx->pc = 0x7F3AB460u;
    // 7F3AB460: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB464:
    ctx->pc = 0x7F3AB464u;
    // 7F3AB464: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB468:
    ctx->pc = 0x7F3AB468u;
    // 7F3AB468: stwx    r6, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AB46C:
    // 7F3AB46C: cmplw   r0, r3
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

label_7F3AB470:
    // 7F3AB470: bc    12, 2, 0x7F3AB47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB47C;
        }
    }

label_7F3AB474:
    ctx->downcount -= 2;
    // 7F3AB474: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AB478:
    // 7F3AB478: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AB47C:
    ctx->downcount -= 2;
    // 7F3AB47C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3AB480:
    // 7F3AB480: bc    16, 0, 0x7F3AB458
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB458u;
                return;
            }
            goto label_7F3AB458;
        }
    }

label_7F3AB484:
    ctx->pc = 0x7F3AB484u;
    ctx->downcount -= 2;
    // 7F3AB484: cmpw    r10, r9
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB488:
    ctx->pc = 0x7F3AB488u;
    // 7F3AB488: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB48C:
    ctx->pc = 0x7F3AB48Cu;
    ctx->downcount -= 14;
    // 7F3AB48C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB490:
    ctx->pc = 0x7F3AB490u;
    // 7F3AB490: lis     r6, 32590
    ctx->gpr[6] = ((u32)(s32)(32590) << 16);

label_7F3AB494:
    ctx->pc = 0x7F3AB494u;
    // 7F3AB494: addi    r4, r3, 15484
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15484);

label_7F3AB498:
    ctx->pc = 0x7F3AB498u;
    // 7F3AB498: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AB49C:
    ctx->pc = 0x7F3AB49Cu;
    // 7F3AB49C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB4A0:
    ctx->pc = 0x7F3AB4A0u;
    // 7F3AB4A0: rlwinm r8, r10, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F3AB4A4:
    ctx->pc = 0x7F3AB4A4u;
    // 7F3AB4A4: addi    r6, r6, -31608
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31608);

label_7F3AB4A8:
    ctx->pc = 0x7F3AB4A8u;
    // 7F3AB4A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AB4AC:
    ctx->pc = 0x7F3AB4ACu;
    // 7F3AB4AC: addi    r5, r5, -32120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32120);

label_7F3AB4B0:
    ctx->pc = 0x7F3AB4B0u;
    // 7F3AB4B0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AB4B4:
    ctx->pc = 0x7F3AB4B4u;
    // 7F3AB4B4: stwx    r7, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB4B8:
    ctx->pc = 0x7F3AB4B8u;
    // 7F3AB4B8: stwx    r7, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB4BC:
    ctx->pc = 0x7F3AB4BCu;
    // 7F3AB4BC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB4C0:
    ctx->pc = 0x7F3AB4C0u;
    // 7F3AB4C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB4C4:
    ctx->pc = 0x7F3AB4C4u;
    ctx->downcount -= 14;
    // 7F3AB4C4: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AB4C8:
    ctx->pc = 0x7F3AB4C8u;
    // 7F3AB4C8: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AB4CC:
    ctx->pc = 0x7F3AB4CCu;
    // 7F3AB4CC: addi    r6, r4, -32084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-32084);

label_7F3AB4D0:
    ctx->pc = 0x7F3AB4D0u;
    // 7F3AB4D0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AB4D4:
    ctx->pc = 0x7F3AB4D4u;
    // 7F3AB4D4: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AB4D8:
    ctx->pc = 0x7F3AB4D8u;
    // 7F3AB4D8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AB4DC:
    ctx->pc = 0x7F3AB4DCu;
    // 7F3AB4DC: addi    r8, r5, -31568
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-31568);

label_7F3AB4E0:
    ctx->pc = 0x7F3AB4E0u;
    // 7F3AB4E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB4E4:
    ctx->pc = 0x7F3AB4E4u;
    // 7F3AB4E4: addi    r7, r4, -32080
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-32080);

label_7F3AB4E8:
    ctx->pc = 0x7F3AB4E8u;
    // 7F3AB4E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB4EC:
    ctx->pc = 0x7F3AB4ECu;
    // 7F3AB4EC: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F3AB4F0:
    ctx->pc = 0x7F3AB4F0u;
    // 7F3AB4F0: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB4F4:
    ctx->pc = 0x7F3AB4F4u;
    // 7F3AB4F4: bc    4, 1, 0x7F3AB524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB524;
        }
    }

label_7F3AB4F8:
    ctx->pc = 0x7F3AB4F8u;
    ctx->downcount -= 7;
    // 7F3AB4F8: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB4FC:
    ctx->pc = 0x7F3AB4FCu;
    // 7F3AB4FC: lwzx    r6, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AB500:
    ctx->pc = 0x7F3AB500u;
    // 7F3AB500: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB504:
    ctx->pc = 0x7F3AB504u;
    // 7F3AB504: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB508:
    ctx->pc = 0x7F3AB508u;
    // 7F3AB508: stwx    r6, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AB50C:
    // 7F3AB50C: cmplw   r0, r3
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

label_7F3AB510:
    // 7F3AB510: bc    12, 2, 0x7F3AB51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB51C;
        }
    }

label_7F3AB514:
    ctx->downcount -= 2;
    // 7F3AB514: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AB518:
    // 7F3AB518: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AB51C:
    ctx->downcount -= 2;
    // 7F3AB51C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3AB520:
    // 7F3AB520: bc    16, 0, 0x7F3AB4F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB4F8u;
                return;
            }
            goto label_7F3AB4F8;
        }
    }

label_7F3AB524:
    ctx->pc = 0x7F3AB524u;
    ctx->downcount -= 2;
    // 7F3AB524: cmpw    r10, r9
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB528:
    ctx->pc = 0x7F3AB528u;
    // 7F3AB528: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB52C:
    ctx->pc = 0x7F3AB52Cu;
    ctx->downcount -= 14;
    // 7F3AB52C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AB530:
    ctx->pc = 0x7F3AB530u;
    // 7F3AB530: lis     r6, 32591
    ctx->gpr[6] = ((u32)(s32)(32591) << 16);

label_7F3AB534:
    ctx->pc = 0x7F3AB534u;
    // 7F3AB534: addi    r4, r3, -32084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32084);

label_7F3AB538:
    ctx->pc = 0x7F3AB538u;
    // 7F3AB538: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AB53C:
    ctx->pc = 0x7F3AB53Cu;
    // 7F3AB53C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB540:
    ctx->pc = 0x7F3AB540u;
    // 7F3AB540: rlwinm r8, r10, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F3AB544:
    ctx->pc = 0x7F3AB544u;
    // 7F3AB544: addi    r6, r6, -31568
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31568);

label_7F3AB548:
    ctx->pc = 0x7F3AB548u;
    // 7F3AB548: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AB54C:
    ctx->pc = 0x7F3AB54Cu;
    // 7F3AB54C: addi    r5, r5, -32080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32080);

label_7F3AB550:
    ctx->pc = 0x7F3AB550u;
    // 7F3AB550: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AB554:
    ctx->pc = 0x7F3AB554u;
    // 7F3AB554: stwx    r7, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB558:
    ctx->pc = 0x7F3AB558u;
    // 7F3AB558: stwx    r7, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB55C:
    ctx->pc = 0x7F3AB55Cu;
    // 7F3AB55C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB560:
    ctx->pc = 0x7F3AB560u;
    // 7F3AB560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB564:
    ctx->pc = 0x7F3AB564u;
    ctx->downcount -= 14;
    // 7F3AB564: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB568:
    ctx->pc = 0x7F3AB568u;
    // 7F3AB568: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB56C:
    ctx->pc = 0x7F3AB56Cu;
    // 7F3AB56C: addi    r6, r4, 15496
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15496);

label_7F3AB570:
    ctx->pc = 0x7F3AB570u;
    // 7F3AB570: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AB574:
    ctx->pc = 0x7F3AB574u;
    // 7F3AB574: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AB578:
    ctx->pc = 0x7F3AB578u;
    // 7F3AB578: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB57C:
    ctx->pc = 0x7F3AB57Cu;
    // 7F3AB57C: addi    r8, r5, 32004
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(32004);

label_7F3AB580:
    ctx->pc = 0x7F3AB580u;
    // 7F3AB580: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB584:
    ctx->pc = 0x7F3AB584u;
    // 7F3AB584: addi    r6, r4, 32000
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(32000);

label_7F3AB588:
    ctx->pc = 0x7F3AB588u;
    // 7F3AB588: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB58C:
    ctx->pc = 0x7F3AB58Cu;
    // 7F3AB58C: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F3AB590:
    ctx->pc = 0x7F3AB590u;
    // 7F3AB590: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB594:
    ctx->pc = 0x7F3AB594u;
    // 7F3AB594: bc    4, 1, 0x7F3AB5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB5C0;
        }
    }

label_7F3AB598:
    ctx->pc = 0x7F3AB598u;
    ctx->downcount -= 6;
    // 7F3AB598: lwzx    r7, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AB59C:
    ctx->pc = 0x7F3AB59Cu;
    // 7F3AB59C: lwzx    r0, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB5A0:
    // 7F3AB5A0: cmplw   r7, r3
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB5A4:
    ctx->pc = 0x7F3AB5A4u;
    // 7F3AB5A4: stwx    r7, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB5A8:
    ctx->pc = 0x7F3AB5A8u;
    // 7F3AB5A8: stwx    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB5AC:
    // 7F3AB5AC: bc    12, 2, 0x7F3AB5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB5B8;
        }
    }

label_7F3AB5B0:
    ctx->downcount -= 2;
    // 7F3AB5B0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AB5B4:
    // 7F3AB5B4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AB5B8:
    ctx->downcount -= 2;
    // 7F3AB5B8: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3AB5BC:
    // 7F3AB5BC: bc    16, 0, 0x7F3AB598
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB598u;
                return;
            }
            goto label_7F3AB598;
        }
    }

label_7F3AB5C0:
    ctx->pc = 0x7F3AB5C0u;
    ctx->downcount -= 2;
    // 7F3AB5C0: cmpw    r10, r9
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB5C4:
    ctx->pc = 0x7F3AB5C4u;
    // 7F3AB5C4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB5C8:
    ctx->pc = 0x7F3AB5C8u;
    ctx->downcount -= 14;
    // 7F3AB5C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB5CC:
    ctx->pc = 0x7F3AB5CCu;
    // 7F3AB5CC: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AB5D0:
    ctx->pc = 0x7F3AB5D0u;
    // 7F3AB5D0: addi    r4, r3, 15496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15496);

label_7F3AB5D4:
    ctx->pc = 0x7F3AB5D4u;
    // 7F3AB5D4: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB5D8:
    ctx->pc = 0x7F3AB5D8u;
    // 7F3AB5D8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB5DC:
    ctx->pc = 0x7F3AB5DCu;
    // 7F3AB5DC: rlwinm r8, r10, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F3AB5E0:
    ctx->pc = 0x7F3AB5E0u;
    // 7F3AB5E0: addi    r6, r6, 32004
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32004);

label_7F3AB5E4:
    ctx->pc = 0x7F3AB5E4u;
    // 7F3AB5E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AB5E8:
    ctx->pc = 0x7F3AB5E8u;
    // 7F3AB5E8: addi    r5, r5, 32000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32000);

label_7F3AB5EC:
    ctx->pc = 0x7F3AB5ECu;
    // 7F3AB5EC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AB5F0:
    ctx->pc = 0x7F3AB5F0u;
    // 7F3AB5F0: stwx    r7, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB5F4:
    ctx->pc = 0x7F3AB5F4u;
    // 7F3AB5F4: stwx    r7, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB5F8:
    ctx->pc = 0x7F3AB5F8u;
    // 7F3AB5F8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB5FC:
    ctx->pc = 0x7F3AB5FCu;
    // 7F3AB5FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB600:
    ctx->pc = 0x7F3AB600u;
    ctx->downcount -= 14;
    // 7F3AB600: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB604:
    ctx->pc = 0x7F3AB604u;
    // 7F3AB604: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB608:
    ctx->pc = 0x7F3AB608u;
    // 7F3AB608: addi    r6, r4, 15492
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15492);

label_7F3AB60C:
    ctx->pc = 0x7F3AB60Cu;
    // 7F3AB60C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AB610:
    ctx->pc = 0x7F3AB610u;
    // 7F3AB610: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AB614:
    ctx->pc = 0x7F3AB614u;
    // 7F3AB614: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB618:
    ctx->pc = 0x7F3AB618u;
    // 7F3AB618: addi    r8, r5, 32200
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(32200);

label_7F3AB61C:
    ctx->pc = 0x7F3AB61Cu;
    // 7F3AB61C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AB620:
    ctx->pc = 0x7F3AB620u;
    // 7F3AB620: addi    r7, r4, 32008
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(32008);

label_7F3AB624:
    ctx->pc = 0x7F3AB624u;
    // 7F3AB624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB628:
    ctx->pc = 0x7F3AB628u;
    // 7F3AB628: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F3AB62C:
    ctx->pc = 0x7F3AB62Cu;
    // 7F3AB62C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB630:
    ctx->pc = 0x7F3AB630u;
    // 7F3AB630: bc    4, 1, 0x7F3AB660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB660;
        }
    }

label_7F3AB634:
    ctx->pc = 0x7F3AB634u;
    ctx->downcount -= 7;
    // 7F3AB634: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB638:
    ctx->pc = 0x7F3AB638u;
    // 7F3AB638: lwzx    r6, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AB63C:
    ctx->pc = 0x7F3AB63Cu;
    // 7F3AB63C: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB640:
    ctx->pc = 0x7F3AB640u;
    // 7F3AB640: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB644:
    ctx->pc = 0x7F3AB644u;
    // 7F3AB644: stwx    r6, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AB648:
    // 7F3AB648: cmplw   r0, r3
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

label_7F3AB64C:
    // 7F3AB64C: bc    12, 2, 0x7F3AB658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB658;
        }
    }

label_7F3AB650:
    ctx->downcount -= 2;
    // 7F3AB650: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AB654:
    // 7F3AB654: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AB658:
    ctx->downcount -= 2;
    // 7F3AB658: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3AB65C:
    // 7F3AB65C: bc    16, 0, 0x7F3AB634
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB634u;
                return;
            }
            goto label_7F3AB634;
        }
    }

label_7F3AB660:
    ctx->pc = 0x7F3AB660u;
    ctx->downcount -= 2;
    // 7F3AB660: cmpw    r10, r9
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB664:
    ctx->pc = 0x7F3AB664u;
    // 7F3AB664: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB668:
    ctx->pc = 0x7F3AB668u;
    ctx->downcount -= 14;
    // 7F3AB668: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB66C:
    ctx->pc = 0x7F3AB66Cu;
    // 7F3AB66C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AB670:
    ctx->pc = 0x7F3AB670u;
    // 7F3AB670: addi    r4, r3, 15492
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15492);

label_7F3AB674:
    ctx->pc = 0x7F3AB674u;
    // 7F3AB674: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB678:
    ctx->pc = 0x7F3AB678u;
    // 7F3AB678: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB67C:
    ctx->pc = 0x7F3AB67Cu;
    // 7F3AB67C: rlwinm r8, r10, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F3AB680:
    ctx->pc = 0x7F3AB680u;
    // 7F3AB680: addi    r6, r6, 32200
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32200);

label_7F3AB684:
    ctx->pc = 0x7F3AB684u;
    // 7F3AB684: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AB688:
    ctx->pc = 0x7F3AB688u;
    // 7F3AB688: addi    r5, r5, 32008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32008);

label_7F3AB68C:
    ctx->pc = 0x7F3AB68Cu;
    // 7F3AB68C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AB690:
    ctx->pc = 0x7F3AB690u;
    // 7F3AB690: stwx    r7, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB694:
    ctx->pc = 0x7F3AB694u;
    // 7F3AB694: stwx    r7, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AB698:
    ctx->pc = 0x7F3AB698u;
    // 7F3AB698: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB69C:
    ctx->pc = 0x7F3AB69Cu;
    // 7F3AB69C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB6A0:
    ctx->pc = 0x7F3AB6A0u;
    ctx->downcount -= 17;
    // 7F3AB6A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB6A4:
    ctx->pc = 0x7F3AB6A4u;
    // 7F3AB6A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB6A8:
    ctx->pc = 0x7F3AB6A8u;
    // 7F3AB6A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB6AC:
    ctx->pc = 0x7F3AB6ACu;
    // 7F3AB6AC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB6B0:
    ctx->pc = 0x7F3AB6B0u;
    // 7F3AB6B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB6B4:
    ctx->pc = 0x7F3AB6B4u;
    // 7F3AB6B4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AB6B8:
    ctx->pc = 0x7F3AB6B8u;
    // 7F3AB6B8: bl      0x7F3AB424
    {
            ctx->lr = 0x7F3AB6BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB424u;
                return;
            }
            goto label_7F3AB424;
    }

label_7F3AB6BC:
    ctx->pc = 0x7F3AB6BCu;
    ctx->downcount -= 2;
    // 7F3AB6BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB6C0:
    ctx->pc = 0x7F3AB6C0u;
    // 7F3AB6C0: bl      0x7F3AE49C
    {
            ctx->lr = 0x7F3AB6C4u;
            ctx->pc = 0x7F3AE49Cu;
            return;
    }

label_7F3AB6C4:
    ctx->pc = 0x7F3AB6C4u;
    ctx->downcount -= 2;
    // 7F3AB6C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB6C8:
    ctx->pc = 0x7F3AB6C8u;
    // 7F3AB6C8: bl      0x7F3AB564
    {
            ctx->lr = 0x7F3AB6CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB564u;
                return;
            }
            goto label_7F3AB564;
    }

label_7F3AB6CC:
    ctx->pc = 0x7F3AB6CCu;
    ctx->downcount -= 2;
    // 7F3AB6CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB6D0:
    ctx->pc = 0x7F3AB6D0u;
    // 7F3AB6D0: bl      0x7F3AB600
    {
            ctx->lr = 0x7F3AB6D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB600u;
                return;
            }
            goto label_7F3AB600;
    }

label_7F3AB6D4:
    ctx->pc = 0x7F3AB6D4u;
    ctx->downcount -= 2;
    // 7F3AB6D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB6D8:
    ctx->pc = 0x7F3AB6D8u;
    // 7F3AB6D8: bl      0x7F3AB4C4
    {
            ctx->lr = 0x7F3AB6DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB4C4u;
                return;
            }
            goto label_7F3AB4C4;
    }

label_7F3AB6DC:
    ctx->pc = 0x7F3AB6DCu;
    ctx->downcount -= 3;
    // 7F3AB6DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB6E0:
    ctx->pc = 0x7F3AB6E0u;
    // 7F3AB6E0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB6E4:
    ctx->pc = 0x7F3AB6E4u;
    // 7F3AB6E4: bl      0x7F3AB8E4
    {
            ctx->lr = 0x7F3AB6E8u;
            goto label_7F3AB8E4;
    }

label_7F3AB6E8:
    ctx->pc = 0x7F3AB6E8u;
    ctx->downcount -= 16;
    // 7F3AB6E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB6EC:
    ctx->pc = 0x7F3AB6ECu;
    // 7F3AB6EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB6F0:
    ctx->pc = 0x7F3AB6F0u;
    // 7F3AB6F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB6F4:
    ctx->pc = 0x7F3AB6F4u;
    // 7F3AB6F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB6F8:
    ctx->pc = 0x7F3AB6F8u;
    // 7F3AB6F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB6FC:
    ctx->pc = 0x7F3AB6FCu;
    ctx->downcount -= 14;
    // 7F3AB6FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB700:
    ctx->pc = 0x7F3AB700u;
    // 7F3AB700: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB704:
    ctx->pc = 0x7F3AB704u;
    // 7F3AB704: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F3AB708:
    ctx->pc = 0x7F3AB708u;
    // 7F3AB708: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F3AB70C:
    ctx->pc = 0x7F3AB70Cu;
    // 7F3AB70C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB710:
    ctx->pc = 0x7F3AB710u;
    // 7F3AB710: lwz     r0, 12388(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB714:
    ctx->pc = 0x7F3AB714u;
    // 7F3AB714: mullw   r6, r3, r4
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[6] = (u32)product;
    }

label_7F3AB718:
    ctx->pc = 0x7F3AB718u;
    // 7F3AB718: lwz     r7, 15468(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(15468);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AB71C:
    ctx->pc = 0x7F3AB71Cu;
    // 7F3AB71C: cmpwi   r0, 0
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

label_7F3AB720:
    ctx->pc = 0x7F3AB720u;
    // 7F3AB720: bc    4, 2, 0x7F3AB72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB72C;
        }
    }

label_7F3AB724:
    ctx->pc = 0x7F3AB724u;
    ctx->downcount -= 2;
    // 7F3AB724: cmpwi   r5, 0
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

label_7F3AB728:
    ctx->pc = 0x7F3AB728u;
    // 7F3AB728: bc    12, 2, 0x7F3AB744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB744;
        }
    }

label_7F3AB72C:
    ctx->pc = 0x7F3AB72Cu;
    ctx->downcount -= 5;
    // 7F3AB72C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AB730:
    ctx->pc = 0x7F3AB730u;
    // 7F3AB730: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AB734:
    ctx->pc = 0x7F3AB734u;
    // 7F3AB734: addi    r3, r3, -31096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31096);

label_7F3AB738:
    ctx->pc = 0x7F3AB738u;
    // 7F3AB738: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AB73C:
    ctx->pc = 0x7F3AB73Cu;
    // 7F3AB73C: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB740u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB740:
    ctx->pc = 0x7F3AB740u;
    ctx->downcount -= 1;
    // 7F3AB740: b       0x7F3AB780
    {
            goto label_7F3AB780;
    }

label_7F3AB744:
    ctx->pc = 0x7F3AB744u;
    ctx->downcount -= 7;
    // 7F3AB744: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AB748:
    ctx->pc = 0x7F3AB748u;
    // 7F3AB748: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AB74C:
    ctx->pc = 0x7F3AB74Cu;
    // 7F3AB74C: addi    r4, r3, -31096
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-31096);

label_7F3AB750:
    ctx->pc = 0x7F3AB750u;
    // 7F3AB750: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F3AB754:
    ctx->pc = 0x7F3AB754u;
    // 7F3AB754: cmpwi   r6, 0
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

label_7F3AB758:
    ctx->pc = 0x7F3AB758u;
    // 7F3AB758: bc    4, 1, 0x7F3AB780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB780;
        }
    }

label_7F3AB75C:
    ctx->pc = 0x7F3AB75Cu;
    ctx->downcount -= 3;
    // 7F3AB75C: lhz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F3AB760:
    // 7F3AB760: cmplwi  r5, 0x1000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x1000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB764:
    // 7F3AB764: bc    4, 0, 0x7F3AB778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB778;
        }
    }

label_7F3AB768:
    ctx->pc = 0x7F3AB768u;
    ctx->downcount -= 3;
    // 7F3AB768: lbzx    r3, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3AB76C:
    // 7F3AB76C: cmplwi  r3, 0x0000
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

label_7F3AB770:
    // 7F3AB770: bc    4, 2, 0x7F3AB778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB778;
        }
    }

label_7F3AB774:
    ctx->pc = 0x7F3AB774u;
    ctx->downcount -= 1;
    // 7F3AB774: stbx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AB778:
    ctx->downcount -= 2;
    // 7F3AB778: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_7F3AB77C:
    // 7F3AB77C: bc    16, 0, 0x7F3AB75C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB75Cu;
                return;
            }
            goto label_7F3AB75C;
        }
    }

label_7F3AB780:
    ctx->pc = 0x7F3AB780u;
    ctx->downcount -= 5;
    // 7F3AB780: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB784:
    ctx->pc = 0x7F3AB784u;
    // 7F3AB784: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB788:
    ctx->pc = 0x7F3AB788u;
    // 7F3AB788: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB78C:
    ctx->pc = 0x7F3AB78Cu;
    // 7F3AB78C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB790:
    ctx->pc = 0x7F3AB790u;
    ctx->downcount -= 10;
    // 7F3AB790: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB794:
    ctx->pc = 0x7F3AB794u;
    // 7F3AB794: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB798:
    ctx->pc = 0x7F3AB798u;
    // 7F3AB798: addi    r6, r5, 15472
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(15472);

label_7F3AB79C:
    ctx->pc = 0x7F3AB79Cu;
    // 7F3AB79C: lwzu     r0, 15476(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15476);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AB7A0:
    ctx->pc = 0x7F3AB7A0u;
    // 7F3AB7A0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AB7A4:
    ctx->pc = 0x7F3AB7A4u;
    // 7F3AB7A4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AB7A8:
    ctx->pc = 0x7F3AB7A8u;
    // 7F3AB7A8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3AB7AC:
    ctx->pc = 0x7F3AB7ACu;
    // 7F3AB7AC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB7B0:
    ctx->pc = 0x7F3AB7B0u;
    // 7F3AB7B0: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AB7B4:
    ctx->pc = 0x7F3AB7B4u;
    // 7F3AB7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB7B8:
    ctx->pc = 0x7F3AB7B8u;
    ctx->downcount -= 4;
    // 7F3AB7B8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB7BC:
    ctx->pc = 0x7F3AB7BCu;
    // 7F3AB7BC: addi    r3, r3, 15476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15476);

label_7F3AB7C0:
    ctx->pc = 0x7F3AB7C0u;
    // 7F3AB7C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB7C4:
    ctx->pc = 0x7F3AB7C4u;
    // 7F3AB7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB7C8:
    ctx->pc = 0x7F3AB7C8u;
    ctx->downcount -= 4;
    // 7F3AB7C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB7CC:
    ctx->pc = 0x7F3AB7CCu;
    // 7F3AB7CC: addi    r3, r3, 15472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15472);

label_7F3AB7D0:
    ctx->pc = 0x7F3AB7D0u;
    // 7F3AB7D0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB7D4:
    ctx->pc = 0x7F3AB7D4u;
    // 7F3AB7D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB7D8:
    ctx->pc = 0x7F3AB7D8u;
    ctx->downcount -= 8;
    // 7F3AB7D8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AB7DC:
    ctx->pc = 0x7F3AB7DCu;
    // 7F3AB7DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB7E0:
    ctx->pc = 0x7F3AB7E0u;
    // 7F3AB7E0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AB7E4:
    ctx->pc = 0x7F3AB7E4u;
    // 7F3AB7E4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AB7E8:
    ctx->pc = 0x7F3AB7E8u;
    // 7F3AB7E8: stw     r0, 15472(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15472);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB7EC:
    ctx->pc = 0x7F3AB7ECu;
    // 7F3AB7EC: stw     r0, 15476(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15476);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB7F0:
    ctx->pc = 0x7F3AB7F0u;
    // 7F3AB7F0: stw     r0, 15480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB7F4:
    ctx->pc = 0x7F3AB7F4u;
    // 7F3AB7F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB7F8:
    ctx->pc = 0x7F3AB7F8u;
    ctx->downcount -= 19;
    // 7F3AB7F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB7FC:
    ctx->pc = 0x7F3AB7FCu;
    // 7F3AB7FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB800:
    ctx->pc = 0x7F3AB800u;
    // 7F3AB800: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB804:
    ctx->pc = 0x7F3AB804u;
    // 7F3AB804: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB808:
    ctx->pc = 0x7F3AB808u;
    // 7F3AB808: mulli   r31, r3, 136
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)136);

label_7F3AB80C:
    ctx->pc = 0x7F3AB80Cu;
    // 7F3AB80C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB810:
    ctx->pc = 0x7F3AB810u;
    // 7F3AB810: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AB814u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AB814:
    ctx->pc = 0x7F3AB814u;
    ctx->downcount -= 2;
    // 7F3AB814: or.   r30, r3, r3
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

label_7F3AB818:
    ctx->pc = 0x7F3AB818u;
    // 7F3AB818: bc    12, 2, 0x7F3AB828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB828;
        }
    }

label_7F3AB81C:
    ctx->pc = 0x7F3AB81Cu;
    ctx->downcount -= 3;
    // 7F3AB81C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB820:
    ctx->pc = 0x7F3AB820u;
    // 7F3AB820: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB824:
    ctx->pc = 0x7F3AB824u;
    // 7F3AB824: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB828u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB828:
    ctx->pc = 0x7F3AB828u;
    ctx->downcount -= 17;
    // 7F3AB828: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB82C:
    ctx->pc = 0x7F3AB82Cu;
    // 7F3AB82C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB830:
    ctx->pc = 0x7F3AB830u;
    // 7F3AB830: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB834:
    ctx->pc = 0x7F3AB834u;
    // 7F3AB834: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB838:
    ctx->pc = 0x7F3AB838u;
    // 7F3AB838: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB83C:
    ctx->pc = 0x7F3AB83Cu;
    // 7F3AB83C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB840:
    ctx->pc = 0x7F3AB840u;
    ctx->downcount -= 16;
    // 7F3AB840: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB844:
    ctx->pc = 0x7F3AB844u;
    // 7F3AB844: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB848:
    ctx->pc = 0x7F3AB848u;
    // 7F3AB848: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB84C:
    ctx->pc = 0x7F3AB84Cu;
    // 7F3AB84C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB850:
    ctx->pc = 0x7F3AB850u;
    // 7F3AB850: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB854:
    ctx->pc = 0x7F3AB854u;
    // 7F3AB854: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AB858u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AB858:
    ctx->pc = 0x7F3AB858u;
    ctx->downcount -= 2;
    // 7F3AB858: or.   r31, r3, r3
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

label_7F3AB85C:
    ctx->pc = 0x7F3AB85Cu;
    // 7F3AB85C: bc    12, 2, 0x7F3AB86C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB86C;
        }
    }

label_7F3AB860:
    ctx->pc = 0x7F3AB860u;
    ctx->downcount -= 3;
    // 7F3AB860: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AB864:
    ctx->pc = 0x7F3AB864u;
    // 7F3AB864: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB868:
    ctx->pc = 0x7F3AB868u;
    // 7F3AB868: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB86Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB86C:
    ctx->pc = 0x7F3AB86Cu;
    ctx->downcount -= 17;
    // 7F3AB86C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AB870:
    ctx->pc = 0x7F3AB870u;
    // 7F3AB870: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB874:
    ctx->pc = 0x7F3AB874u;
    // 7F3AB874: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB878:
    ctx->pc = 0x7F3AB878u;
    // 7F3AB878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB87C:
    ctx->pc = 0x7F3AB87Cu;
    // 7F3AB87C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB880:
    ctx->pc = 0x7F3AB880u;
    // 7F3AB880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB884:
    ctx->pc = 0x7F3AB884u;
    ctx->downcount -= 5;
    // 7F3AB884: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB888:
    ctx->pc = 0x7F3AB888u;
    // 7F3AB888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB88C:
    ctx->pc = 0x7F3AB88Cu;
    // 7F3AB88C: cmplwi  r3, 0x0000
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

label_7F3AB890:
    ctx->pc = 0x7F3AB890u;
    // 7F3AB890: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB894:
    ctx->pc = 0x7F3AB894u;
    // 7F3AB894: bc    12, 2, 0x7F3AB8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB8AC;
        }
    }

label_7F3AB898:
    ctx->pc = 0x7F3AB898u;
    ctx->downcount -= 2;
    // 7F3AB898: cmpwi   r4, 0
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

label_7F3AB89C:
    ctx->pc = 0x7F3AB89Cu;
    // 7F3AB89C: bc    12, 2, 0x7F3AB8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB8A8;
        }
    }

label_7F3AB8A0:
    ctx->pc = 0x7F3AB8A0u;
    ctx->downcount -= 1;
    // 7F3AB8A0: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F3AB8A4u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F3AB8A4:
    ctx->pc = 0x7F3AB8A4u;
    ctx->downcount -= 1;
    // 7F3AB8A4: b       0x7F3AB8AC
    {
            goto label_7F3AB8AC;
    }

label_7F3AB8A8:
    ctx->pc = 0x7F3AB8A8u;
    ctx->downcount -= 1;
    // 7F3AB8A8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3AB8ACu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3AB8AC:
    ctx->pc = 0x7F3AB8ACu;
    ctx->downcount -= 5;
    // 7F3AB8AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB8B0:
    ctx->pc = 0x7F3AB8B0u;
    // 7F3AB8B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB8B4:
    ctx->pc = 0x7F3AB8B4u;
    // 7F3AB8B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB8B8:
    ctx->pc = 0x7F3AB8B8u;
    // 7F3AB8B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB8BC:
    ctx->pc = 0x7F3AB8BCu;
    ctx->downcount -= 5;
    // 7F3AB8BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB8C0:
    ctx->pc = 0x7F3AB8C0u;
    // 7F3AB8C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB8C4:
    ctx->pc = 0x7F3AB8C4u;
    // 7F3AB8C4: cmplwi  r3, 0x0000
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

label_7F3AB8C8:
    ctx->pc = 0x7F3AB8C8u;
    // 7F3AB8C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB8CC:
    ctx->pc = 0x7F3AB8CCu;
    // 7F3AB8CC: bc    12, 2, 0x7F3AB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB8D4;
        }
    }

label_7F3AB8D0:
    ctx->pc = 0x7F3AB8D0u;
    ctx->downcount -= 1;
    // 7F3AB8D0: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3AB8D4u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3AB8D4:
    ctx->pc = 0x7F3AB8D4u;
    ctx->downcount -= 5;
    // 7F3AB8D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB8D8:
    ctx->pc = 0x7F3AB8D8u;
    // 7F3AB8D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB8DC:
    ctx->pc = 0x7F3AB8DCu;
    // 7F3AB8DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AB8E0:
    ctx->pc = 0x7F3AB8E0u;
    // 7F3AB8E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB8E4:
    ctx->pc = 0x7F3AB8E4u;
    ctx->downcount -= 19;
    // 7F3AB8E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB8E8:
    ctx->pc = 0x7F3AB8E8u;
    // 7F3AB8E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB8EC:
    ctx->pc = 0x7F3AB8ECu;
    // 7F3AB8EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB8F0:
    ctx->pc = 0x7F3AB8F0u;
    // 7F3AB8F0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB8F4:
    ctx->pc = 0x7F3AB8F4u;
    // 7F3AB8F4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB8F8:
    ctx->pc = 0x7F3AB8F8u;
    // 7F3AB8F8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AB8FC:
    ctx->pc = 0x7F3AB8FCu;
    // 7F3AB8FC: lwz     r3, 420(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(420);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB900:
    ctx->pc = 0x7F3AB900u;
    // 7F3AB900: cmplwi  r3, 0x0000
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

label_7F3AB904:
    ctx->pc = 0x7F3AB904u;
    // 7F3AB904: bc    12, 2, 0x7F3AB918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB918;
        }
    }

label_7F3AB908:
    ctx->pc = 0x7F3AB908u;
    ctx->downcount -= 2;
    // 7F3AB908: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB90C:
    ctx->pc = 0x7F3AB90Cu;
    // 7F3AB90C: bl      0x7F3AB884
    {
            ctx->lr = 0x7F3AB910u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB884u;
                return;
            }
            goto label_7F3AB884;
    }

label_7F3AB910:
    ctx->pc = 0x7F3AB910u;
    ctx->downcount -= 2;
    // 7F3AB910: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB914:
    ctx->pc = 0x7F3AB914u;
    // 7F3AB914: stw     r0, 420(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB918:
    ctx->pc = 0x7F3AB918u;
    ctx->downcount -= 3;
    // 7F3AB918: lwz     r3, 428(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB91C:
    ctx->pc = 0x7F3AB91Cu;
    // 7F3AB91C: cmplwi  r3, 0x0000
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

label_7F3AB920:
    ctx->pc = 0x7F3AB920u;
    // 7F3AB920: bc    12, 2, 0x7F3AB938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB938;
        }
    }

label_7F3AB924:
    ctx->pc = 0x7F3AB924u;
    ctx->downcount -= 3;
    // 7F3AB924: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB928:
    ctx->pc = 0x7F3AB928u;
    // 7F3AB928: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AB92C:
    ctx->pc = 0x7F3AB92Cu;
    // 7F3AB92C: bl      0x7F3AB884
    {
            ctx->lr = 0x7F3AB930u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB884u;
                return;
            }
            goto label_7F3AB884;
    }

label_7F3AB930:
    ctx->pc = 0x7F3AB930u;
    ctx->downcount -= 2;
    // 7F3AB930: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB934:
    ctx->pc = 0x7F3AB934u;
    // 7F3AB934: stw     r0, 428(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB938:
    ctx->pc = 0x7F3AB938u;
    ctx->downcount -= 3;
    // 7F3AB938: lwz     r3, 436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB93C:
    ctx->pc = 0x7F3AB93Cu;
    // 7F3AB93C: cmplwi  r3, 0x0000
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

label_7F3AB940:
    ctx->pc = 0x7F3AB940u;
    // 7F3AB940: bc    12, 2, 0x7F3AB958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB958;
        }
    }

label_7F3AB944:
    ctx->pc = 0x7F3AB944u;
    ctx->downcount -= 3;
    // 7F3AB944: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB948:
    ctx->pc = 0x7F3AB948u;
    // 7F3AB948: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AB94C:
    ctx->pc = 0x7F3AB94Cu;
    // 7F3AB94C: bl      0x7F3AB884
    {
            ctx->lr = 0x7F3AB950u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB884u;
                return;
            }
            goto label_7F3AB884;
    }

label_7F3AB950:
    ctx->pc = 0x7F3AB950u;
    ctx->downcount -= 2;
    // 7F3AB950: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AB954:
    ctx->pc = 0x7F3AB954u;
    // 7F3AB954: stw     r0, 436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB958:
    ctx->pc = 0x7F3AB958u;
    ctx->downcount -= 4;
    // 7F3AB958: addi    r3, r28, 420
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(420);

label_7F3AB95C:
    ctx->pc = 0x7F3AB95Cu;
    // 7F3AB95C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AB960:
    ctx->pc = 0x7F3AB960u;
    // 7F3AB960: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F3AB964:
    ctx->pc = 0x7F3AB964u;
    // 7F3AB964: bl      0x800050B4
    {
            ctx->lr = 0x7F3AB968u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AB968:
    ctx->pc = 0x7F3AB968u;
    ctx->downcount -= 3;
    // 7F3AB968: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AB96C:
    ctx->pc = 0x7F3AB96Cu;
    // 7F3AB96C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AB970:
    ctx->pc = 0x7F3AB970u;
    // 7F3AB970: bl      0x7F3AC010
    {
            ctx->lr = 0x7F3AB974u;
            goto label_7F3AC010;
    }

label_7F3AB974:
    ctx->pc = 0x7F3AB974u;
    ctx->downcount -= 3;
    // 7F3AB974: lwz     r0, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB978:
    ctx->pc = 0x7F3AB978u;
    // 7F3AB978: cmplwi  r0, 0x0000
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

label_7F3AB97C:
    ctx->pc = 0x7F3AB97Cu;
    // 7F3AB97C: bc    12, 2, 0x7F3AB9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AB9A8;
        }
    }

label_7F3AB980:
    ctx->pc = 0x7F3AB980u;
    ctx->downcount -= 2;
    // 7F3AB980: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3AB984:
    ctx->pc = 0x7F3AB984u;
    // 7F3AB984: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AB988:
    ctx->downcount -= 4;
    // 7F3AB988: addi    r0, r31, 388
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(388);

label_7F3AB98C:
    // 7F3AB98C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AB990:
    ctx->pc = 0x7F3AB990u;
    // 7F3AB990: lwzx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AB994:
    // 7F3AB994: bl      0x7F3AB8E4
    {
            ctx->lr = 0x7F3AB998u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB8E4u;
                return;
            }
            goto label_7F3AB8E4;
    }

label_7F3AB998:
    ctx->downcount -= 4;
    // 7F3AB998: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3AB99C:
    // 7F3AB99C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3AB9A0:
    // 7F3AB9A0: cmpwi   r30, 8
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AB9A4:
    // 7F3AB9A4: bc    12, 0, 0x7F3AB988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB988u;
                return;
            }
            goto label_7F3AB988;
        }
    }

label_7F3AB9A8:
    ctx->pc = 0x7F3AB9A8u;
    ctx->downcount -= 16;
    // 7F3AB9A8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AB9AC:
    ctx->pc = 0x7F3AB9ACu;
    // 7F3AB9AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AB9B0:
    ctx->pc = 0x7F3AB9B0u;
    // 7F3AB9B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AB9B4:
    ctx->pc = 0x7F3AB9B4u;
    // 7F3AB9B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AB9B8:
    ctx->pc = 0x7F3AB9B8u;
    // 7F3AB9B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AB9BC:
    ctx->pc = 0x7F3AB9BCu;
    ctx->downcount -= 28;
    // 7F3AB9BC: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AB9C0:
    ctx->pc = 0x7F3AB9C0u;
    // 7F3AB9C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AB9C4:
    ctx->pc = 0x7F3AB9C4u;
    // 7F3AB9C4: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AB9C8:
    ctx->pc = 0x7F3AB9C8u;
    // 7F3AB9C8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3AB9CC:
    ctx->pc = 0x7F3AB9CCu;
    // 7F3AB9CC: stmw     r17, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AB9D0:
    ctx->pc = 0x7F3AB9D0u;
    // 7F3AB9D0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AB9D4:
    ctx->pc = 0x7F3AB9D4u;
    // 7F3AB9D4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F3AB9D8:
    ctx->pc = 0x7F3AB9D8u;
    // 7F3AB9D8: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AB9DC:
    ctx->pc = 0x7F3AB9DCu;
    // 7F3AB9DC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AB9E0:
    ctx->pc = 0x7F3AB9E0u;
    // 7F3AB9E0: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AB9E4:
    ctx->pc = 0x7F3AB9E4u;
    // 7F3AB9E4: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AB9E8:
    ctx->pc = 0x7F3AB9E8u;
    // 7F3AB9E8: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AB9EC:
    ctx->pc = 0x7F3AB9ECu;
    // 7F3AB9EC: addi    r25, r3, -21852
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F3AB9F0:
    ctx->pc = 0x7F3AB9F0u;
    // 7F3AB9F0: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_7F3AB9F4:
    ctx->pc = 0x7F3AB9F4u;
    // 7F3AB9F4: addi    r4, r26, 416
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(416);

label_7F3AB9F8:
    ctx->pc = 0x7F3AB9F8u;
    // 7F3AB9F8: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3AB9FC:
    ctx->pc = 0x7F3AB9FCu;
    // 7F3AB9FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ABA00:
    loop_7F3ABA00(ctx);
    if (ctx->pc == 0x7F3ABA14u) goto label_7F3ABA14;
    return;
label_7F3ABA04:
    ctx->pc = 0x7F3ABA04u;
    // 7F3ABA04: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ABA08:
    ctx->pc = 0x7F3ABA08u;
    // 7F3ABA08: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABA0C:
    ctx->pc = 0x7F3ABA0Cu;
    // 7F3ABA0C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ABA10:
    // 7F3ABA10: bc    16, 0, 0x7F3ABA00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABA00u;
                return;
            }
            goto label_7F3ABA00;
        }
    }

label_7F3ABA14:
    ctx->pc = 0x7F3ABA14u;
    ctx->downcount -= 7;
    // 7F3ABA14: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ABA18:
    ctx->pc = 0x7F3ABA18u;
    // 7F3ABA18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ABA1C:
    ctx->pc = 0x7F3ABA1Cu;
    // 7F3ABA1C: lis     r3, 3
    ctx->gpr[3] = ((u32)(s32)(3) << 16);

label_7F3ABA20:
    ctx->pc = 0x7F3ABA20u;
    // 7F3ABA20: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABA24:
    ctx->pc = 0x7F3ABA24u;
    // 7F3ABA24: stw     r0, 15480(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABA28:
    ctx->pc = 0x7F3ABA28u;
    // 7F3ABA28: addi    r21, r3, 11264
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(11264);

label_7F3ABA2C:
    ctx->pc = 0x7F3ABA2Cu;
    // 7F3ABA2C: bc    4, 2, 0x7F3ABA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA44;
        }
    }

label_7F3ABA30:
    ctx->pc = 0x7F3ABA30u;
    ctx->downcount -= 3;
    // 7F3ABA30: lwz     r0, 320(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABA34:
    ctx->pc = 0x7F3ABA34u;
    // 7F3ABA34: cmpwi   r0, -1
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

label_7F3ABA38:
    ctx->pc = 0x7F3ABA38u;
    // 7F3ABA38: bc    12, 2, 0x7F3ABA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA78;
        }
    }

label_7F3ABA3C:
    ctx->pc = 0x7F3ABA3Cu;
    ctx->downcount -= 2;
    // 7F3ABA3C: or   r21, r0, r0
    {
        ctx->gpr[21] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3ABA40:
    ctx->pc = 0x7F3ABA40u;
    // 7F3ABA40: b       0x7F3ABA78
    {
            goto label_7F3ABA78;
    }

label_7F3ABA44:
    ctx->pc = 0x7F3ABA44u;
    ctx->downcount -= 2;
    // 7F3ABA44: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABA48:
    ctx->pc = 0x7F3ABA48u;
    // 7F3ABA48: bc    4, 2, 0x7F3ABA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA60;
        }
    }

label_7F3ABA4C:
    ctx->pc = 0x7F3ABA4Cu;
    ctx->downcount -= 3;
    // 7F3ABA4C: lwz     r0, 324(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABA50:
    ctx->pc = 0x7F3ABA50u;
    // 7F3ABA50: cmpwi   r0, -1
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

label_7F3ABA54:
    ctx->pc = 0x7F3ABA54u;
    // 7F3ABA54: bc    12, 2, 0x7F3ABA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA78;
        }
    }

label_7F3ABA58:
    ctx->pc = 0x7F3ABA58u;
    ctx->downcount -= 2;
    // 7F3ABA58: or   r21, r0, r0
    {
        ctx->gpr[21] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3ABA5C:
    ctx->pc = 0x7F3ABA5Cu;
    // 7F3ABA5C: b       0x7F3ABA78
    {
            goto label_7F3ABA78;
    }

label_7F3ABA60:
    ctx->pc = 0x7F3ABA60u;
    ctx->downcount -= 2;
    // 7F3ABA60: cmpwi   r28, 0
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

label_7F3ABA64:
    ctx->pc = 0x7F3ABA64u;
    // 7F3ABA64: bc    4, 2, 0x7F3ABA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA78;
        }
    }

label_7F3ABA68:
    ctx->pc = 0x7F3ABA68u;
    ctx->downcount -= 3;
    // 7F3ABA68: lwz     r0, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABA6C:
    ctx->pc = 0x7F3ABA6Cu;
    // 7F3ABA6C: cmpwi   r0, -1
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

label_7F3ABA70:
    ctx->pc = 0x7F3ABA70u;
    // 7F3ABA70: bc    12, 2, 0x7F3ABA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABA78;
        }
    }

label_7F3ABA74:
    ctx->pc = 0x7F3ABA74u;
    ctx->downcount -= 1;
    // 7F3ABA74: or   r21, r0, r0
    {
        ctx->gpr[21] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3ABA78:
    ctx->pc = 0x7F3ABA78u;
    ctx->downcount -= 3;
    // 7F3ABA78: lha     r0, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ABA7C:
    ctx->pc = 0x7F3ABA7Cu;
    // 7F3ABA7C: cmpwi   r0, 0
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

label_7F3ABA80:
    ctx->pc = 0x7F3ABA80u;
    // 7F3ABA80: bc    12, 2, 0x7F3ABCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABCE4;
        }
    }

label_7F3ABA84:
    ctx->pc = 0x7F3ABA84u;
    ctx->downcount -= 1;
    // 7F3ABA84: bl      0x7F3AB7D8
    {
            ctx->lr = 0x7F3ABA88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB7D8u;
                return;
            }
            goto label_7F3AB7D8;
    }

label_7F3ABA88:
    ctx->pc = 0x7F3ABA88u;
    ctx->downcount -= 2;
    // 7F3ABA88: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F3ABA8C:
    ctx->pc = 0x7F3ABA8Cu;
    // 7F3ABA8C: bl      0x7F3AB7F8
    {
            ctx->lr = 0x7F3ABA90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB7F8u;
                return;
            }
            goto label_7F3AB7F8;
    }

label_7F3ABA90:
    ctx->pc = 0x7F3ABA90u;
    ctx->downcount -= 5;
    // 7F3ABA90: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABA94:
    ctx->pc = 0x7F3ABA94u;
    // 7F3ABA94: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ABA98:
    ctx->pc = 0x7F3ABA98u;
    // 7F3ABA98: or   r20, r0, r0
    {
        ctx->gpr[20] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3ABA9C:
    ctx->pc = 0x7F3ABA9Cu;
    // 7F3ABA9C: or   r19, r20, r20
    {
        ctx->gpr[19] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3ABAA0:
    ctx->pc = 0x7F3ABAA0u;
    // 7F3ABAA0: bl      0x7F3AB840
    {
            ctx->lr = 0x7F3ABAA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB840u;
                return;
            }
            goto label_7F3AB840;
    }

label_7F3ABAA4:
    ctx->pc = 0x7F3ABAA4u;
    ctx->downcount -= 8;
    // 7F3ABAA4: stw     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABAA8:
    ctx->pc = 0x7F3ABAA8u;
    // 7F3ABAA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ABAAC:
    ctx->pc = 0x7F3ABAACu;
    // 7F3ABAAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABAB0:
    ctx->pc = 0x7F3ABAB0u;
    // 7F3ABAB0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F3ABAB4:
    ctx->pc = 0x7F3ABAB4u;
    // 7F3ABAB4: stw     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABAB8:
    ctx->pc = 0x7F3ABAB8u;
    // 7F3ABAB8: addi    r3, r20, 8
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(8);

label_7F3ABABC:
    ctx->pc = 0x7F3ABABCu;
    // 7F3ABABC: stw     r0, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABAC0:
    ctx->pc = 0x7F3ABAC0u;
    // 7F3ABAC0: bl      0x800050B4
    {
            ctx->lr = 0x7F3ABAC4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3ABAC4:
    ctx->pc = 0x7F3ABAC4u;
    ctx->downcount -= 4;
    // 7F3ABAC4: addi    r3, r20, 92
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(92);

label_7F3ABAC8:
    ctx->pc = 0x7F3ABAC8u;
    // 7F3ABAC8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3ABACC:
    ctx->pc = 0x7F3ABACCu;
    // 7F3ABACC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F3ABAD0:
    ctx->pc = 0x7F3ABAD0u;
    // 7F3ABAD0: bl      0x800050B4
    {
            ctx->lr = 0x7F3ABAD4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3ABAD4:
    ctx->pc = 0x7F3ABAD4u;
    ctx->downcount -= 4;
    // 7F3ABAD4: addi    r3, r20, 52
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(52);

label_7F3ABAD8:
    ctx->pc = 0x7F3ABAD8u;
    // 7F3ABAD8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3ABADC:
    ctx->pc = 0x7F3ABADCu;
    // 7F3ABADC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F3ABAE0:
    ctx->pc = 0x7F3ABAE0u;
    // 7F3ABAE0: bl      0x800050B4
    {
            ctx->lr = 0x7F3ABAE4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3ABAE4:
    ctx->pc = 0x7F3ABAE4u;
    ctx->downcount -= 6;
    // 7F3ABAE4: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABAE8:
    ctx->pc = 0x7F3ABAE8u;
    // 7F3ABAE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ABAEC:
    ctx->pc = 0x7F3ABAECu;
    // 7F3ABAEC: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABAF0:
    ctx->pc = 0x7F3ABAF0u;
    // 7F3ABAF0: stwu     r0, 15480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_7F3ABAF4:
    ctx->pc = 0x7F3ABAF4u;
    // 7F3ABAF4: stw     r20, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F3ABAF8:
    ctx->pc = 0x7F3ABAF8u;
    // 7F3ABAF8: bc    4, 2, 0x7F3ABB08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABB08;
        }
    }

label_7F3ABAFC:
    ctx->pc = 0x7F3ABAFCu;
    ctx->downcount -= 3;
    // 7F3ABAFC: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABB00:
    ctx->pc = 0x7F3ABB00u;
    // 7F3ABB00: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABB04:
    ctx->pc = 0x7F3ABB04u;
    // 7F3ABB04: b       0x7F3ABB18
    {
            goto label_7F3ABB18;
    }

label_7F3ABB08:
    ctx->pc = 0x7F3ABB08u;
    ctx->downcount -= 2;
    // 7F3ABB08: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABB0C:
    ctx->pc = 0x7F3ABB0Cu;
    // 7F3ABB0C: bc    4, 2, 0x7F3ABB18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABB18;
        }
    }

label_7F3ABB10:
    ctx->pc = 0x7F3ABB10u;
    ctx->downcount -= 2;
    // 7F3ABB10: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABB14:
    ctx->pc = 0x7F3ABB14u;
    // 7F3ABB14: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABB18:
    ctx->pc = 0x7F3ABB18u;
    ctx->downcount -= 3;
    // 7F3ABB18: addi    r3, r25, 3008
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(3008);

label_7F3ABB1C:
    ctx->pc = 0x7F3ABB1Cu;
    // 7F3ABB1C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3ABB20:
    ctx->pc = 0x7F3ABB20u;
    // 7F3ABB20: bl      0x7F114E28
    {
            ctx->lr = 0x7F3ABB24u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3ABB24:
    ctx->pc = 0x7F3ABB24u;
    ctx->downcount -= 6;
    // 7F3ABB24: addi    r23, r26, 444
    ctx->gpr[23] = ctx->gpr[26] + (u32)(s32)(444);

label_7F3ABB28:
    ctx->pc = 0x7F3ABB28u;
    // 7F3ABB28: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABB2C:
    ctx->pc = 0x7F3ABB2Cu;
    // 7F3ABB2C: lwz     r22, 660(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(660);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3ABB30:
    ctx->pc = 0x7F3ABB30u;
    // 7F3ABB30: or   r24, r21, r21
    {
        ctx->gpr[24] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ABB34:
    ctx->pc = 0x7F3ABB34u;
    // 7F3ABB34: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ABB38:
    ctx->pc = 0x7F3ABB38u;
    // 7F3ABB38: bl      0x8001DA20
    {
            ctx->lr = 0x7F3ABB3Cu;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_7F3ABB3C:
    ctx->pc = 0x7F3ABB3Cu;
    ctx->downcount -= 1;
    // 7F3ABB3C: bl      0x80042570
    {
            ctx->lr = 0x7F3ABB40u;
            ctx->pc = 0x80042570u;
            return;
    }

label_7F3ABB40:
    ctx->pc = 0x7F3ABB40u;
    ctx->downcount -= 1;
    // 7F3ABB40: bl      0x800425CC
    {
            ctx->lr = 0x7F3ABB44u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3ABB44:
    ctx->pc = 0x7F3ABB44u;
    ctx->downcount -= 3;
    // 7F3ABB44: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABB48:
    ctx->pc = 0x7F3ABB48u;
    // 7F3ABB48: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ABB4C:
    ctx->pc = 0x7F3ABB4Cu;
    // 7F3ABB4C: bl      0x80046538
    {
            ctx->lr = 0x7F3ABB50u;
            ctx->pc = 0x80046538u;
            return;
    }

label_7F3ABB50:
    ctx->pc = 0x7F3ABB50u;
    ctx->downcount -= 1;
    // 7F3ABB50: bl      0x800425CC
    {
            ctx->lr = 0x7F3ABB54u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3ABB54:
    ctx->pc = 0x7F3ABB54u;
    ctx->downcount -= 1;
    // 7F3ABB54: bl      0x7F3B8930
    {
            ctx->lr = 0x7F3ABB58u;
            ctx->pc = 0x7F3B8930u;
            return;
    }

label_7F3ABB58:
    ctx->pc = 0x7F3ABB58u;
    ctx->downcount -= 1;
    // 7F3ABB58: bl      0x7F3AAFD0
    {
            ctx->lr = 0x7F3ABB5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAFD0u;
                return;
            }
            goto label_7F3AAFD0;
    }

label_7F3ABB5C:
    ctx->pc = 0x7F3ABB5Cu;
    ctx->downcount -= 3;
    // 7F3ABB5C: or   r25, r21, r21
    {
        ctx->gpr[25] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ABB60:
    ctx->pc = 0x7F3ABB60u;
    // 7F3ABB60: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F3ABB64:
    ctx->pc = 0x7F3ABB64u;
    // 7F3ABB64: b       0x7F3ABCB0
    {
            goto label_7F3ABCB0;
    }

label_7F3ABB68:
    ctx->pc = 0x7F3ABB68u;
    ctx->downcount -= 5;
    // 7F3ABB68: lwz     r3, 216(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABB6C:
    ctx->pc = 0x7F3ABB6Cu;
    // 7F3ABB6C: lwz     r18, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F3ABB70:
    ctx->pc = 0x7F3ABB70u;
    // 7F3ABB70: lhz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3ABB74:
    // 7F3ABB74: cmplwi  r0, 0x0000
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

label_7F3ABB78:
    // 7F3ABB78: bc    12, 2, 0x7F3ABC14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABC14;
        }
    }

label_7F3ABB7C:
    ctx->downcount -= 4;
    // 7F3ABB7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ABB80:
    // 7F3ABB80: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABB84:
    ctx->pc = 0x7F3ABB84u;
    // 7F3ABB84: stw     r0, 132(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABB88:
    // 7F3ABB88: bc    12, 2, 0x7F3ABBC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABBC8;
        }
    }

label_7F3ABB8C:
    ctx->pc = 0x7F3ABB8Cu;
    ctx->downcount -= 13;
    // 7F3ABB8C: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3ABB90:
    // 7F3ABB90: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3ABB94:
    // 7F3ABB94: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3ABB98:
    // 7F3ABB98: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3ABB9C:
    ctx->pc = 0x7F3ABB9Cu;
    // 7F3ABB9C: stw     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3ABBA0:
    // 7F3ABBA0: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ABBA4:
    // 7F3ABBA4: or   r9, r20, r20
    {
        ctx->gpr[9] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3ABBA8:
    // 7F3ABBA8: or   r10, r23, r23
    {
        ctx->gpr[10] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3ABBAC:
    ctx->pc = 0x7F3ABBACu;
    // 7F3ABBAC: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3ABBB0:
    ctx->pc = 0x7F3ABBB0u;
    // 7F3ABBB0: lwz     r7, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ABBB4:
    ctx->pc = 0x7F3ABBB4u;
    // 7F3ABBB4: lwz     r5, 216(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(216);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ABBB8:
    ctx->pc = 0x7F3ABBB8u;
    // 7F3ABBB8: lwz     r7, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ABBBC:
    // 7F3ABBBC: bl      0x7F3AAA6C
    {
            ctx->lr = 0x7F3ABBC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAA6Cu;
                return;
            }
            goto label_7F3AAA6C;
    }

label_7F3ABBC0:
    ctx->downcount -= 2;
    // 7F3ABBC0: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABBC4:
    // 7F3ABBC4: b       0x7F3ABC14
    {
            goto label_7F3ABC14;
    }

label_7F3ABBC8:
    ctx->pc = 0x7F3ABBC8u;
    ctx->downcount -= 3;
    // 7F3ABBC8: lwz     r0, 192(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABBCC:
    // 7F3ABBCC: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ABBD0:
    // 7F3ABBD0: bc    12, 2, 0x7F3ABC14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABC14;
        }
    }

label_7F3ABBD4:
    ctx->downcount -= 1;
    // 7F3ABBD4: bl      0x7F3B8930
    {
            ctx->lr = 0x7F3ABBD8u;
            ctx->pc = 0x7F3B8930u;
            return;
    }

label_7F3ABBD8:
    ctx->downcount -= 1;
    // 7F3ABBD8: bl      0x7F3AAFD0
    {
            ctx->lr = 0x7F3ABBDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAFD0u;
                return;
            }
            goto label_7F3AAFD0;
    }

label_7F3ABBDC:
    ctx->pc = 0x7F3ABBDCu;
    ctx->downcount -= 13;
    // 7F3ABBDC: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3ABBE0:
    // 7F3ABBE0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3ABBE4:
    // 7F3ABBE4: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3ABBE8:
    // 7F3ABBE8: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3ABBEC:
    ctx->pc = 0x7F3ABBECu;
    // 7F3ABBEC: stw     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3ABBF0:
    // 7F3ABBF0: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ABBF4:
    // 7F3ABBF4: or   r9, r20, r20
    {
        ctx->gpr[9] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F3ABBF8:
    // 7F3ABBF8: or   r10, r23, r23
    {
        ctx->gpr[10] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3ABBFC:
    ctx->pc = 0x7F3ABBFCu;
    // 7F3ABBFC: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3ABC00:
    ctx->pc = 0x7F3ABC00u;
    // 7F3ABC00: lwz     r7, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ABC04:
    ctx->pc = 0x7F3ABC04u;
    // 7F3ABC04: lwz     r5, 216(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(216);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ABC08:
    ctx->pc = 0x7F3ABC08u;
    // 7F3ABC08: lwz     r7, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ABC0C:
    // 7F3ABC0C: bl      0x7F3AAA6C
    {
            ctx->lr = 0x7F3ABC10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAA6Cu;
                return;
            }
            goto label_7F3AAA6C;
    }

label_7F3ABC10:
    ctx->downcount -= 1;
    // 7F3ABC10: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABC14:
    ctx->pc = 0x7F3ABC14u;
    ctx->downcount -= 4;
    // 7F3ABC14: stw     r21, 52(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F3ABC18:
    ctx->pc = 0x7F3ABC18u;
    // 7F3ABC18: lwz     r0, 132(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABC1C:
    // 7F3ABC1C: cmpwi   r0, 0
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

label_7F3ABC20:
    // 7F3ABC20: bc    12, 2, 0x7F3ABCA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABCA8;
        }
    }

label_7F3ABC24:
    ctx->downcount -= 1;
    // 7F3ABC24: bl      0x80046600
    {
            ctx->lr = 0x7F3ABC28u;
            ctx->pc = 0x80046600u;
            return;
    }

label_7F3ABC28:
    ctx->downcount -= 2;
    // 7F3ABC28: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABC2C:
    // 7F3ABC2C: bl      0x800425CC
    {
            ctx->lr = 0x7F3ABC30u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3ABC30:
    ctx->downcount -= 2;
    // 7F3ABC30: cmpwi   r17, 32
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABC34:
    // 7F3ABC34: bc    4, 2, 0x7F3ABC44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABC44;
        }
    }

label_7F3ABC38:
    ctx->downcount -= 3;
    // 7F3ABC38: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3ABC3C:
    ctx->pc = 0x7F3ABC3Cu;
    // 7F3ABC3C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ABC40:
    ctx->downcount -= 1;
    // 7F3ABC40: bc    16, 0, 0x7F3ABC40
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABC40u;
                return;
            }
            goto label_7F3ABC40;
        }
    }

label_7F3ABC44:
    ctx->pc = 0x7F3ABC44u;
    ctx->downcount -= 6;
    // 7F3ABC44: stw     r17, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F3ABC48:
    // 7F3ABC48: add   r18, r17, r18
    {
        u32 a = ctx->gpr[17];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_7F3ABC4C:
    // 7F3ABC4C: addi    r18, r18, 128
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(128);

label_7F3ABC50:
    ctx->pc = 0x7F3ABC50u;
    // 7F3ABC50: lwz     r3, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABC54:
    // 7F3ABC54: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_7F3ABC58:
    // 7F3ABC58: bl      0x7F3AB790
    {
            ctx->lr = 0x7F3ABC5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB790u;
                return;
            }
            goto label_7F3AB790;
    }

label_7F3ABC5C:
    ctx->downcount -= 3;
    // 7F3ABC5C: cmpwi   r29, 0
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

label_7F3ABC60:
    ctx->pc = 0x7F3ABC60u;
    // 7F3ABC60: stwu     r18, 136(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
        ctx->gpr[20] = ea;
    }

label_7F3ABC64:
    // 7F3ABC64: bc    4, 2, 0x7F3ABC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABC70;
        }
    }

label_7F3ABC68:
    ctx->downcount -= 2;
    // 7F3ABC68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ABC6C:
    ctx->pc = 0x7F3ABC6Cu;
    // 7F3ABC6C: stw     r0, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABC70:
    ctx->downcount -= 5;
    // 7F3ABC70: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ABC74:
    // 7F3ABC74: addi    r4, r3, 15480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15480);

label_7F3ABC78:
    ctx->pc = 0x7F3ABC78u;
    // 7F3ABC78: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABC7C:
    // 7F3ABC7C: cmplwi  r3, 0x0000
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

label_7F3ABC80:
    // 7F3ABC80: bc    12, 2, 0x7F3ABC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABC8C;
        }
    }

label_7F3ABC84:
    ctx->downcount -= 2;
    // 7F3ABC84: addi    r0, r3, 136
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(136);

label_7F3ABC88:
    ctx->pc = 0x7F3ABC88u;
    // 7F3ABC88: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABC8C:
    ctx->downcount -= 1;
    // 7F3ABC8C: bl      0x7F3B8930
    {
            ctx->lr = 0x7F3ABC90u;
            ctx->pc = 0x7F3B8930u;
            return;
    }

label_7F3ABC90:
    ctx->downcount -= 1;
    // 7F3ABC90: bl      0x80042570
    {
            ctx->lr = 0x7F3ABC94u;
            ctx->pc = 0x80042570u;
            return;
    }

label_7F3ABC94:
    ctx->downcount -= 1;
    // 7F3ABC94: bl      0x7F3AAFD0
    {
            ctx->lr = 0x7F3ABC98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AAFD0u;
                return;
            }
            goto label_7F3AAFD0;
    }

label_7F3ABC98:
    ctx->pc = 0x7F3ABC98u;
    ctx->downcount -= 3;
    // 7F3ABC98: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABC9C:
    // 7F3ABC9C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3ABCA0:
    // 7F3ABCA0: bl      0x80046538
    {
            ctx->lr = 0x7F3ABCA4u;
            ctx->pc = 0x80046538u;
            return;
    }

label_7F3ABCA4:
    ctx->downcount -= 1;
    // 7F3ABCA4: bl      0x800425CC
    {
            ctx->lr = 0x7F3ABCA8u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3ABCA8:
    ctx->downcount -= 2;
    // 7F3ABCA8: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F3ABCAC:
    // 7F3ABCAC: addi    r23, r23, 324
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(324);

label_7F3ABCB0:
    ctx->pc = 0x7F3ABCB0u;
    ctx->downcount -= 3;
    // 7F3ABCB0: lha     r0, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ABCB4:
    // 7F3ABCB4: cmpw    r21, r0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABCB8:
    // 7F3ABCB8: bc    12, 0, 0x7F3ABB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABB68u;
                return;
            }
            goto label_7F3ABB68;
        }
    }

label_7F3ABCBC:
    ctx->pc = 0x7F3ABCBCu;
    ctx->downcount -= 1;
    // 7F3ABCBC: bl      0x80046600
    {
            ctx->lr = 0x7F3ABCC0u;
            ctx->pc = 0x80046600u;
            return;
    }

label_7F3ABCC0:
    ctx->pc = 0x7F3ABCC0u;
    ctx->downcount -= 2;
    // 7F3ABCC0: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABCC4:
    ctx->pc = 0x7F3ABCC4u;
    // 7F3ABCC4: bl      0x800425CC
    {
            ctx->lr = 0x7F3ABCC8u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3ABCC8:
    ctx->pc = 0x7F3ABCC8u;
    ctx->downcount -= 3;
    // 7F3ABCC8: lwz     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABCCC:
    ctx->pc = 0x7F3ABCCCu;
    // 7F3ABCCC: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3ABCD0:
    ctx->pc = 0x7F3ABCD0u;
    // 7F3ABCD0: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3ABCD4u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3ABCD4:
    ctx->pc = 0x7F3ABCD4u;
    ctx->downcount -= 4;
    // 7F3ABCD4: stw     r18, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F3ABCD8:
    ctx->pc = 0x7F3ABCD8u;
    // 7F3ABCD8: lwz     r3, 48(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABCDC:
    ctx->pc = 0x7F3ABCDCu;
    // 7F3ABCDC: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_7F3ABCE0:
    ctx->pc = 0x7F3ABCE0u;
    // 7F3ABCE0: bl      0x7F3AB790
    {
            ctx->lr = 0x7F3ABCE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AB790u;
                return;
            }
            goto label_7F3AB790;
    }

label_7F3ABCE4:
    ctx->pc = 0x7F3ABCE4u;
    ctx->downcount -= 17;
    // 7F3ABCE4: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F3ABCE8:
    ctx->pc = 0x7F3ABCE8u;
    // 7F3ABCE8: lmw     r17, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3ABCEC:
    ctx->pc = 0x7F3ABCECu;
    // 7F3ABCEC: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABCF0:
    ctx->pc = 0x7F3ABCF0u;
    // 7F3ABCF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ABCF4:
    ctx->pc = 0x7F3ABCF4u;
    // 7F3ABCF4: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F3ABCF8:
    ctx->pc = 0x7F3ABCF8u;
    // 7F3ABCF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3ABCFC:
    ctx->pc = 0x7F3ABCFCu;
    ctx->downcount -= 30;
    // 7F3ABCFC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3ABD00:
    ctx->pc = 0x7F3ABD00u;
    // 7F3ABD00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3ABD04:
    ctx->pc = 0x7F3ABD04u;
    // 7F3ABD04: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABD08:
    ctx->pc = 0x7F3ABD08u;
    // 7F3ABD08: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3ABD0C:
    ctx->pc = 0x7F3ABD0Cu;
    // 7F3ABD0C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3ABD0Cu);
        if (ctx->exception) return;
    }

label_7F3ABD10:
    ctx->pc = 0x7F3ABD10u;
    // 7F3ABD10: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F3ABD14:
    ctx->pc = 0x7F3ABD14u;
    // 7F3ABD14: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F3ABD14u);
        if (ctx->exception) return;
    }

label_7F3ABD18:
    ctx->pc = 0x7F3ABD18u;
    // 7F3ABD18: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F3ABD1C:
    ctx->pc = 0x7F3ABD1Cu;
    // 7F3ABD1C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F3ABD1Cu);
        if (ctx->exception) return;
    }

label_7F3ABD20:
    ctx->pc = 0x7F3ABD20u;
    // 7F3ABD20: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F3ABD24:
    ctx->pc = 0x7F3ABD24u;
    // 7F3ABD24: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F3ABD24u);
        if (ctx->exception) return;
    }

label_7F3ABD28:
    ctx->pc = 0x7F3ABD28u;
    // 7F3ABD28: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3ABD2C:
    ctx->pc = 0x7F3ABD2Cu;
    // 7F3ABD2C: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD2Cu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F3ABD30:
    ctx->pc = 0x7F3ABD30u;
    // 7F3ABD30: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABD34:
    ctx->pc = 0x7F3ABD34u;
    // 7F3ABD34: fmr    f29, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD34u)) return;
    ctx->fpr[29] = ctx->fpr[2];

label_7F3ABD38:
    ctx->pc = 0x7F3ABD38u;
    // 7F3ABD38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ABD3C:
    ctx->pc = 0x7F3ABD3Cu;
    // 7F3ABD3C: fmr    f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD3Cu)) return;
    ctx->fpr[30] = ctx->fpr[3];

label_7F3ABD40:
    ctx->pc = 0x7F3ABD40u;
    // 7F3ABD40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABD44:
    ctx->pc = 0x7F3ABD44u;
    // 7F3ABD44: fmr    f31, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD44u)) return;
    ctx->fpr[31] = ctx->fpr[4];

label_7F3ABD48:
    ctx->pc = 0x7F3ABD48u;
    // 7F3ABD48: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ABD4Cu;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ABD4C:
    ctx->pc = 0x7F3ABD4Cu;
    ctx->downcount -= 9;
    // 7F3ABD4C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3ABD50:
    ctx->pc = 0x7F3ABD50u;
    // 7F3ABD50: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ABD54:
    ctx->pc = 0x7F3ABD54u;
    // 7F3ABD54: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD54u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F3ABD58:
    ctx->pc = 0x7F3ABD58u;
    // 7F3ABD58: lfs     f5, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F3ABD5C:
    ctx->pc = 0x7F3ABD5Cu;
    // 7F3ABD5C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD5Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F3ABD60:
    ctx->pc = 0x7F3ABD60u;
    // 7F3ABD60: lfs     f6, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F3ABD64:
    ctx->pc = 0x7F3ABD64u;
    // 7F3ABD64: fmr    f3, f28
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD64u)) return;
    ctx->fpr[3] = ctx->fpr[28];

label_7F3ABD68:
    ctx->pc = 0x7F3ABD68u;
    // 7F3ABD68: fmr    f4, f29
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD68u)) return;
    ctx->fpr[4] = ctx->fpr[29];

label_7F3ABD6C:
    ctx->pc = 0x7F3ABD6Cu;
    // 7F3ABD6C: bl      0x80046D04
    {
            ctx->lr = 0x7F3ABD70u;
            ctx->pc = 0x80046D04u;
            return;
    }

label_7F3ABD70:
    ctx->pc = 0x7F3ABD70u;
    ctx->downcount -= 2;
    // 7F3ABD70: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD70u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F3ABD74:
    ctx->pc = 0x7F3ABD74u;
    // 7F3ABD74: bl      0x8000DBEC
    {
            ctx->lr = 0x7F3ABD78u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F3ABD78:
    ctx->pc = 0x7F3ABD78u;
    ctx->downcount -= 3;
    // 7F3ABD78: fmr    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD78u)) return;
    ctx->fpr[1] = ctx->fpr[28];

label_7F3ABD7C:
    ctx->pc = 0x7F3ABD7Cu;
    // 7F3ABD7C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABD80:
    ctx->pc = 0x7F3ABD80u;
    // 7F3ABD80: bl      0x8000DBEC
    {
            ctx->lr = 0x7F3ABD84u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F3ABD84:
    ctx->pc = 0x7F3ABD84u;
    ctx->downcount -= 3;
    // 7F3ABD84: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD84u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F3ABD88:
    ctx->pc = 0x7F3ABD88u;
    // 7F3ABD88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABD8C:
    ctx->pc = 0x7F3ABD8Cu;
    // 7F3ABD8C: bl      0x8000DBEC
    {
            ctx->lr = 0x7F3ABD90u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F3ABD90:
    ctx->pc = 0x7F3ABD90u;
    ctx->downcount -= 3;
    // 7F3ABD90: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F3ABD90u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F3ABD94:
    ctx->pc = 0x7F3ABD94u;
    // 7F3ABD94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABD98:
    ctx->pc = 0x7F3ABD98u;
    // 7F3ABD98: bl      0x8000DBEC
    {
            ctx->lr = 0x7F3ABD9Cu;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F3ABD9C:
    ctx->pc = 0x7F3ABD9Cu;
    ctx->downcount -= 4;
    // 7F3ABD9C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3ABDA0:
    ctx->pc = 0x7F3ABDA0u;
    // 7F3ABDA0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ABDA4:
    ctx->pc = 0x7F3ABDA4u;
    // 7F3ABDA4: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3ABDA8:
    ctx->pc = 0x7F3ABDA8u;
    // 7F3ABDA8: bl      0x80046D70
    {
            ctx->lr = 0x7F3ABDACu;
            ctx->pc = 0x80046D70u;
            return;
    }

label_7F3ABDAC:
    ctx->pc = 0x7F3ABDACu;
    ctx->downcount -= 3;
    // 7F3ABDAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABDB0:
    ctx->pc = 0x7F3ABDB0u;
    // 7F3ABDB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABDB4:
    ctx->pc = 0x7F3ABDB4u;
    // 7F3ABDB4: bl      0x80046E30
    {
            ctx->lr = 0x7F3ABDB8u;
            ctx->pc = 0x80046E30u;
            return;
    }

label_7F3ABDB8:
    ctx->pc = 0x7F3ABDB8u;
    ctx->downcount -= 5;
    // 7F3ABDB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABDBC:
    ctx->pc = 0x7F3ABDBCu;
    // 7F3ABDBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABDC0:
    ctx->pc = 0x7F3ABDC0u;
    // 7F3ABDC0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3ABDC4:
    ctx->pc = 0x7F3ABDC4u;
    // 7F3ABDC4: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F3ABDC8:
    ctx->pc = 0x7F3ABDC8u;
    // 7F3ABDC8: bl      0x8004310C
    {
            ctx->lr = 0x7F3ABDCCu;
            ctx->pc = 0x8004310Cu;
            return;
    }

label_7F3ABDCC:
    ctx->pc = 0x7F3ABDCCu;
    ctx->downcount -= 3;
    // 7F3ABDCC: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3ABDD0:
    ctx->pc = 0x7F3ABDD0u;
    // 7F3ABDD0: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F3ABDD4:
    ctx->pc = 0x7F3ABDD4u;
    // 7F3ABDD4: bl      0x80043204
    {
            ctx->lr = 0x7F3ABDD8u;
            ctx->pc = 0x80043204u;
            return;
    }

label_7F3ABDD8:
    ctx->pc = 0x7F3ABDD8u;
    ctx->downcount -= 1;
    // 7F3ABDD8: bl      0x80042210
    {
            ctx->lr = 0x7F3ABDDCu;
            ctx->pc = 0x80042210u;
            return;
    }

label_7F3ABDDC:
    ctx->pc = 0x7F3ABDDCu;
    ctx->downcount -= 1;
    // 7F3ABDDC: bl      0x80041BD4
    {
            ctx->lr = 0x7F3ABDE0u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F3ABDE0:
    ctx->pc = 0x7F3ABDE0u;
    ctx->downcount -= 2;
    // 7F3ABDE0: cmpwi   r28, 0
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

label_7F3ABDE4:
    ctx->pc = 0x7F3ABDE4u;
    // 7F3ABDE4: bc    12, 2, 0x7F3ABE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABE10;
        }
    }

label_7F3ABDE8:
    ctx->pc = 0x7F3ABDE8u;
    ctx->downcount -= 3;
    // 7F3ABDE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABDEC:
    ctx->pc = 0x7F3ABDECu;
    // 7F3ABDEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3ABDF0:
    ctx->pc = 0x7F3ABDF0u;
    // 7F3ABDF0: bl      0x80041500
    {
            ctx->lr = 0x7F3ABDF4u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3ABDF4:
    ctx->pc = 0x7F3ABDF4u;
    ctx->downcount -= 3;
    // 7F3ABDF4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3ABDF8:
    ctx->pc = 0x7F3ABDF8u;
    // 7F3ABDF8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3ABDFC:
    ctx->pc = 0x7F3ABDFCu;
    // 7F3ABDFC: bl      0x80041500
    {
            ctx->lr = 0x7F3ABE00u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3ABE00:
    ctx->pc = 0x7F3ABE00u;
    ctx->downcount -= 3;
    // 7F3ABE00: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3ABE04:
    ctx->pc = 0x7F3ABE04u;
    // 7F3ABE04: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3ABE08:
    ctx->pc = 0x7F3ABE08u;
    // 7F3ABE08: bl      0x80041500
    {
            ctx->lr = 0x7F3ABE0Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3ABE0C:
    ctx->pc = 0x7F3ABE0Cu;
    ctx->downcount -= 1;
    // 7F3ABE0C: b       0x7F3ABE1C
    {
            goto label_7F3ABE1C;
    }

label_7F3ABE10:
    ctx->pc = 0x7F3ABE10u;
    ctx->downcount -= 3;
    // 7F3ABE10: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3ABE14:
    ctx->pc = 0x7F3ABE14u;
    // 7F3ABE14: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3ABE18:
    ctx->pc = 0x7F3ABE18u;
    // 7F3ABE18: bl      0x80041500
    {
            ctx->lr = 0x7F3ABE1Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3ABE1C:
    ctx->pc = 0x7F3ABE1Cu;
    ctx->downcount -= 7;
    // 7F3ABE1C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ABE20:
    ctx->pc = 0x7F3ABE20u;
    // 7F3ABE20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3ABE24:
    ctx->pc = 0x7F3ABE24u;
    // 7F3ABE24: addi    r5, r3, -21320
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21320);

label_7F3ABE28:
    ctx->pc = 0x7F3ABE28u;
    // 7F3ABE28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ABE2C:
    ctx->pc = 0x7F3ABE2Cu;
    // 7F3ABE2C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABE30:
    ctx->pc = 0x7F3ABE30u;
    // 7F3ABE30: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABE34:
    ctx->pc = 0x7F3ABE34u;
    // 7F3ABE34: bl      0x80045970
    {
            ctx->lr = 0x7F3ABE38u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F3ABE38:
    ctx->pc = 0x7F3ABE38u;
    ctx->downcount -= 2;
    // 7F3ABE38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ABE3C:
    ctx->pc = 0x7F3ABE3Cu;
    // 7F3ABE3C: bl      0x80044084
    {
            ctx->lr = 0x7F3ABE40u;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F3ABE40:
    ctx->pc = 0x7F3ABE40u;
    ctx->downcount -= 8;
    // 7F3ABE40: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3ABE44:
    ctx->pc = 0x7F3ABE44u;
    // 7F3ABE44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABE48:
    ctx->pc = 0x7F3ABE48u;
    // 7F3ABE48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3ABE4C:
    ctx->pc = 0x7F3ABE4Cu;
    // 7F3ABE4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3ABE50:
    ctx->pc = 0x7F3ABE50u;
    // 7F3ABE50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3ABE54:
    ctx->pc = 0x7F3ABE54u;
    // 7F3ABE54: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3ABE58:
    ctx->pc = 0x7F3ABE58u;
    // 7F3ABE58: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F3ABE5C:
    ctx->pc = 0x7F3ABE5Cu;
    // 7F3ABE5C: bl      0x800440C0
    {
            ctx->lr = 0x7F3ABE60u;
            ctx->pc = 0x800440C0u;
            return;
    }

label_7F3ABE60:
    ctx->pc = 0x7F3ABE60u;
    ctx->downcount -= 5;
    // 7F3ABE60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABE64:
    ctx->pc = 0x7F3ABE64u;
    // 7F3ABE64: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F3ABE68:
    ctx->pc = 0x7F3ABE68u;
    // 7F3ABE68: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F3ABE6C:
    ctx->pc = 0x7F3ABE6Cu;
    // 7F3ABE6C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F3ABE70:
    ctx->pc = 0x7F3ABE70u;
    // 7F3ABE70: bl      0x80045D2C
    {
            ctx->lr = 0x7F3ABE74u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3ABE74:
    ctx->pc = 0x7F3ABE74u;
    ctx->downcount -= 6;
    // 7F3ABE74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABE78:
    ctx->pc = 0x7F3ABE78u;
    // 7F3ABE78: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3ABE7C:
    ctx->pc = 0x7F3ABE7Cu;
    // 7F3ABE7C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F3ABE80:
    ctx->pc = 0x7F3ABE80u;
    // 7F3ABE80: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3ABE84:
    ctx->pc = 0x7F3ABE84u;
    // 7F3ABE84: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F3ABE88:
    ctx->pc = 0x7F3ABE88u;
    // 7F3ABE88: bl      0x8004585C
    {
            ctx->lr = 0x7F3ABE8Cu;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3ABE8C:
    ctx->pc = 0x7F3ABE8Cu;
    ctx->downcount -= 6;
    // 7F3ABE8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABE90:
    ctx->pc = 0x7F3ABE90u;
    // 7F3ABE90: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3ABE94:
    ctx->pc = 0x7F3ABE94u;
    // 7F3ABE94: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F3ABE98:
    ctx->pc = 0x7F3ABE98u;
    // 7F3ABE98: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F3ABE9C:
    ctx->pc = 0x7F3ABE9Cu;
    // 7F3ABE9C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F3ABEA0:
    ctx->pc = 0x7F3ABEA0u;
    // 7F3ABEA0: bl      0x80045818
    {
            ctx->lr = 0x7F3ABEA4u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3ABEA4:
    ctx->pc = 0x7F3ABEA4u;
    ctx->downcount -= 2;
    // 7F3ABEA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABEA8:
    ctx->pc = 0x7F3ABEA8u;
    // 7F3ABEA8: bl      0x800424A0
    {
            ctx->lr = 0x7F3ABEACu;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3ABEAC:
    ctx->pc = 0x7F3ABEACu;
    ctx->downcount -= 2;
    // 7F3ABEAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ABEB0:
    ctx->pc = 0x7F3ABEB0u;
    // 7F3ABEB0: bl      0x80045EC8
    {
            ctx->lr = 0x7F3ABEB4u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3ABEB4:
    ctx->pc = 0x7F3ABEB4u;
    ctx->downcount -= 2;
    // 7F3ABEB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABEB8:
    ctx->pc = 0x7F3ABEB8u;
    // 7F3ABEB8: bl      0x800455BC
    {
            ctx->lr = 0x7F3ABEBCu;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3ABEBC:
    ctx->pc = 0x7F3ABEBCu;
    ctx->downcount -= 5;
    // 7F3ABEBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABEC0:
    ctx->pc = 0x7F3ABEC0u;
    // 7F3ABEC0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3ABEC4:
    ctx->pc = 0x7F3ABEC4u;
    // 7F3ABEC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3ABEC8:
    ctx->pc = 0x7F3ABEC8u;
    // 7F3ABEC8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3ABECC:
    ctx->pc = 0x7F3ABECCu;
    // 7F3ABECC: bl      0x80046238
    {
            ctx->lr = 0x7F3ABED0u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F3ABED0:
    ctx->pc = 0x7F3ABED0u;
    ctx->downcount -= 2;
    // 7F3ABED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABED4:
    ctx->pc = 0x7F3ABED4u;
    // 7F3ABED4: bl      0x800462B8
    {
            ctx->lr = 0x7F3ABED8u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3ABED8:
    ctx->pc = 0x7F3ABED8u;
    ctx->downcount -= 2;
    // 7F3ABED8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ABEDC:
    ctx->pc = 0x7F3ABEDCu;
    // 7F3ABEDC: bl      0x80046420
    {
            ctx->lr = 0x7F3ABEE0u;
            ctx->pc = 0x80046420u;
            return;
    }

label_7F3ABEE0:
    ctx->pc = 0x7F3ABEE0u;
    ctx->downcount -= 24;
    // 7F3ABEE0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3ABEE0u);
        if (ctx->exception) return;
    }

label_7F3ABEE4:
    ctx->pc = 0x7F3ABEE4u;
    // 7F3ABEE4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3ABEE8:
    ctx->pc = 0x7F3ABEE8u;
    // 7F3ABEE8: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F3ABEE8u);
        if (ctx->exception) return;
    }

label_7F3ABEEC:
    ctx->pc = 0x7F3ABEECu;
    // 7F3ABEEC: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3ABEF0:
    ctx->pc = 0x7F3ABEF0u;
    // 7F3ABEF0: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F3ABEF0u);
        if (ctx->exception) return;
    }

label_7F3ABEF4:
    ctx->pc = 0x7F3ABEF4u;
    // 7F3ABEF4: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3ABEF8:
    ctx->pc = 0x7F3ABEF8u;
    // 7F3ABEF8: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F3ABEF8u);
        if (ctx->exception) return;
    }

label_7F3ABEFC:
    ctx->pc = 0x7F3ABEFCu;
    // 7F3ABEFC: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ABEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3ABF00:
    ctx->pc = 0x7F3ABF00u;
    // 7F3ABF00: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3ABF04:
    ctx->pc = 0x7F3ABF04u;
    // 7F3ABF04: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABF08:
    ctx->pc = 0x7F3ABF08u;
    // 7F3ABF08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ABF0C:
    ctx->pc = 0x7F3ABF0Cu;
    // 7F3ABF0C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3ABF10:
    ctx->pc = 0x7F3ABF10u;
    // 7F3ABF10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3ABF14:
    ctx->pc = 0x7F3ABF14u;
    ctx->downcount -= 21;
    // 7F3ABF14: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3ABF18:
    ctx->pc = 0x7F3ABF18u;
    // 7F3ABF18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3ABF1C:
    ctx->pc = 0x7F3ABF1Cu;
    // 7F3ABF1C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ABF20:
    ctx->pc = 0x7F3ABF20u;
    // 7F3ABF20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ABF24:
    ctx->pc = 0x7F3ABF24u;
    // 7F3ABF24: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABF28:
    ctx->pc = 0x7F3ABF28u;
    // 7F3ABF28: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3ABF2C:
    ctx->pc = 0x7F3ABF2Cu;
    // 7F3ABF2C: addi    r29, r4, 32004
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(32004);

label_7F3ABF30:
    ctx->pc = 0x7F3ABF30u;
    // 7F3ABF30: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3ABF34:
    ctx->pc = 0x7F3ABF34u;
    // 7F3ABF34: addi    r30, r3, 15496
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(15496);

label_7F3ABF38:
    ctx->pc = 0x7F3ABF38u;
    // 7F3ABF38: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3ABF3C:
    ctx->pc = 0x7F3ABF3Cu;
    // 7F3ABF3C: b       0x7F3ABF54
    {
            goto label_7F3ABF54;
    }

label_7F3ABF40:
    ctx->pc = 0x7F3ABF40u;
    ctx->downcount -= 3;
    // 7F3ABF40: lwzx    r3, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ABF44:
    // 7F3ABF44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ABF48:
    // 7F3ABF48: bl      0x7F3B0CFC
    {
            ctx->lr = 0x7F3ABF4Cu;
            ctx->pc = 0x7F3B0CFCu;
            return;
    }

label_7F3ABF4C:
    ctx->downcount -= 2;
    // 7F3ABF4C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3ABF50:
    // 7F3ABF50: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3ABF54:
    ctx->pc = 0x7F3ABF54u;
    ctx->downcount -= 3;
    // 7F3ABF54: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABF58:
    // 7F3ABF58: cmpw    r28, r0
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

label_7F3ABF5C:
    // 7F3ABF5C: bc    12, 0, 0x7F3ABF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABF40u;
                return;
            }
            goto label_7F3ABF40;
        }
    }

label_7F3ABF60:
    ctx->pc = 0x7F3ABF60u;
    ctx->downcount -= 16;
    // 7F3ABF60: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3ABF64:
    ctx->pc = 0x7F3ABF64u;
    // 7F3ABF64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABF68:
    ctx->pc = 0x7F3ABF68u;
    // 7F3ABF68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ABF6C:
    ctx->pc = 0x7F3ABF6Cu;
    // 7F3ABF6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3ABF70:
    ctx->pc = 0x7F3ABF70u;
    // 7F3ABF70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3ABF74:
    ctx->pc = 0x7F3ABF74u;
    ctx->downcount -= 30;
    // 7F3ABF74: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3ABF78:
    ctx->pc = 0x7F3ABF78u;
    // 7F3ABF78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3ABF7C:
    ctx->pc = 0x7F3ABF7Cu;
    // 7F3ABF7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ABF80:
    ctx->pc = 0x7F3ABF80u;
    // 7F3ABF80: rlwinm r0, r4, 3, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0x00000008u;
    }

label_7F3ABF84:
    ctx->pc = 0x7F3ABF84u;
    // 7F3ABF84: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3ABF88:
    ctx->pc = 0x7F3ABF88u;
    // 7F3ABF88: rlwinm r29, r4, 1, 30, 30
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00000002u;
    }

label_7F3ABF8C:
    ctx->pc = 0x7F3ABF8Cu;
    // 7F3ABF8C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ABF90:
    ctx->pc = 0x7F3ABF90u;
    // 7F3ABF90: addi    r28, r29, 2
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(2);

label_7F3ABF94:
    ctx->pc = 0x7F3ABF94u;
    // 7F3ABF94: lwz     r5, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ABF98:
    ctx->pc = 0x7F3ABF98u;
    // 7F3ABF98: add   r3, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ABF9C:
    ctx->pc = 0x7F3ABF9Cu;
    // 7F3ABF9C: lwz     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ABFA0:
    ctx->pc = 0x7F3ABFA0u;
    // 7F3ABFA0: lha     r3, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ABFA4:
    ctx->pc = 0x7F3ABFA4u;
    // 7F3ABFA4: cmplwi  r0, 0x0000
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

label_7F3ABFA8:
    ctx->pc = 0x7F3ABFA8u;
    // 7F3ABFA8: mulli   r31, r3, 48
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)48);

label_7F3ABFAC:
    ctx->pc = 0x7F3ABFACu;
    // 7F3ABFAC: mulli   r30, r3, 36
    ctx->gpr[30] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)36);

label_7F3ABFB0:
    ctx->pc = 0x7F3ABFB0u;
    // 7F3ABFB0: bc    4, 2, 0x7F3ABFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABFFC;
        }
    }

label_7F3ABFB4:
    ctx->pc = 0x7F3ABFB4u;
    ctx->downcount -= 4;
    // 7F3ABFB4: rlwinm r0, r31, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F3ABFB8:
    ctx->pc = 0x7F3ABFB8u;
    // 7F3ABFB8: add   r0, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3ABFBC:
    ctx->pc = 0x7F3ABFBCu;
    // 7F3ABFBC: rlwinm r3, r0, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F3ABFC0:
    ctx->pc = 0x7F3ABFC0u;
    // 7F3ABFC0: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3ABFC4u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3ABFC4:
    ctx->pc = 0x7F3ABFC4u;
    ctx->downcount -= 6;
    // 7F3ABFC4: subf   r0, r29, r28
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3ABFC8:
    ctx->pc = 0x7F3ABFC8u;
    // 7F3ABFC8: rlwinm r4, r29, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F3ABFCC:
    ctx->pc = 0x7F3ABFCCu;
    // 7F3ABFCC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ABFD0:
    ctx->pc = 0x7F3ABFD0u;
    // 7F3ABFD0: cmpw    r29, r28
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ABFD4:
    ctx->pc = 0x7F3ABFD4u;
    // 7F3ABFD4: bc    4, 0, 0x7F3ABFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ABFFC;
        }
    }

label_7F3ABFD8:
    loop_7F3ABFD8(ctx);
    if (ctx->pc == 0x7F3ABFFCu) goto label_7F3ABFFC;
    return;
label_7F3ABFDC:
    // 7F3ABFDC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3ABFE0:
    ctx->pc = 0x7F3ABFE0u;
    // 7F3ABFE0: stw     r3, 256(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABFE4:
    // 7F3ABFE4: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ABFE8:
    ctx->pc = 0x7F3ABFE8u;
    // 7F3ABFE8: stw     r3, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABFEC:
    // 7F3ABFEC: add   r3, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ABFF0:
    ctx->pc = 0x7F3ABFF0u;
    // 7F3ABFF0: stw     r3, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ABFF4:
    // 7F3ABFF4: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ABFF8:
    // 7F3ABFF8: bc    16, 0, 0x7F3ABFD8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ABFD8u;
                return;
            }
            goto label_7F3ABFD8;
        }
    }

label_7F3ABFFC:
    ctx->pc = 0x7F3ABFFCu;
    ctx->downcount -= 16;
    // 7F3ABFFC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC000:
    ctx->pc = 0x7F3AC000u;
    // 7F3AC000: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC004:
    ctx->pc = 0x7F3AC004u;
    // 7F3AC004: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC008:
    ctx->pc = 0x7F3AC008u;
    // 7F3AC008: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AC00C:
    ctx->pc = 0x7F3AC00Cu;
    // 7F3AC00C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AC010:
    ctx->pc = 0x7F3AC010u;
    ctx->downcount -= 18;
    // 7F3AC010: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC014:
    ctx->pc = 0x7F3AC014u;
    // 7F3AC014: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC018:
    ctx->pc = 0x7F3AC018u;
    // 7F3AC018: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC01C:
    ctx->pc = 0x7F3AC01Cu;
    // 7F3AC01C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC020:
    ctx->pc = 0x7F3AC020u;
    // 7F3AC020: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC024:
    ctx->pc = 0x7F3AC024u;
    // 7F3AC024: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC028:
    ctx->pc = 0x7F3AC028u;
    // 7F3AC028: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3AC02C:
    ctx->pc = 0x7F3AC02Cu;
    // 7F3AC02C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AC030:
    ctx->downcount -= 4;
    // 7F3AC030: addi    r0, r31, 256
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(256);

label_7F3AC034:
    ctx->pc = 0x7F3AC034u;
    // 7F3AC034: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC038:
    // 7F3AC038: cmplwi  r3, 0x0000
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

label_7F3AC03C:
    // 7F3AC03C: bc    12, 2, 0x7F3AC090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC090;
        }
    }

label_7F3AC040:
    ctx->downcount -= 3;
    // 7F3AC040: cmpwi   r28, 0
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

label_7F3AC044:
    // 7F3AC044: addi    r29, r30, 2
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(2);

label_7F3AC048:
    // 7F3AC048: bc    12, 2, 0x7F3AC054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC054;
        }
    }

label_7F3AC04C:
    ctx->downcount -= 1;
    // 7F3AC04C: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F3AC050u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F3AC050:
    ctx->downcount -= 1;
    // 7F3AC050: b       0x7F3AC058
    {
            goto label_7F3AC058;
    }

label_7F3AC054:
    ctx->downcount -= 1;
    // 7F3AC054: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3AC058u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3AC058:
    ctx->downcount -= 8;
    // 7F3AC058: subf   r0, r30, r29
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3AC05C:
    // 7F3AC05C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC060:
    // 7F3AC060: rlwinm r3, r30, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F3AC064:
    // 7F3AC064: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AC068:
    ctx->pc = 0x7F3AC068u;
    // 7F3AC068: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC06C:
    // 7F3AC06C: cmpw    r30, r29
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC070:
    // 7F3AC070: bc    4, 0, 0x7F3AC090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC090;
        }
    }

label_7F3AC074:
    loop_7F3AC074(ctx);
    if (ctx->pc == 0x7F3AC090u) goto label_7F3AC090;
    return;
label_7F3AC078:
    // 7F3AC078: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F3AC07C:
    ctx->pc = 0x7F3AC07Cu;
    // 7F3AC07C: stw     r4, 256(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC080:
    // 7F3AC080: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3AC084:
    ctx->pc = 0x7F3AC084u;
    // 7F3AC084: stw     r4, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC088:
    ctx->pc = 0x7F3AC088u;
    // 7F3AC088: stw     r4, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC08C:
    // 7F3AC08C: bc    16, 0, 0x7F3AC074
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC074u;
                return;
            }
            goto label_7F3AC074;
        }
    }

label_7F3AC090:
    ctx->downcount -= 4;
    // 7F3AC090: addi    r30, r30, 2
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(2);

label_7F3AC094:
    // 7F3AC094: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F3AC098:
    // 7F3AC098: cmpwi   r30, 2
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

label_7F3AC09C:
    // 7F3AC09C: bc    4, 1, 0x7F3AC030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC030u;
                return;
            }
            goto label_7F3AC030;
        }
    }

label_7F3AC0A0:
    ctx->pc = 0x7F3AC0A0u;
    ctx->downcount -= 18;
    // 7F3AC0A0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3AC0A4:
    ctx->pc = 0x7F3AC0A4u;
    // 7F3AC0A4: stw     r0, 304(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC0A8:
    ctx->pc = 0x7F3AC0A8u;
    // 7F3AC0A8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC0AC:
    ctx->pc = 0x7F3AC0ACu;
    // 7F3AC0AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC0B0:
    ctx->pc = 0x7F3AC0B0u;
    // 7F3AC0B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC0B4:
    ctx->pc = 0x7F3AC0B4u;
    // 7F3AC0B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AC0B8:
    ctx->pc = 0x7F3AC0B8u;
    // 7F3AC0B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A80EC;
        }
    }

label_7F3AC0BC:
    ctx->pc = 0x7F3AC0BCu;
    ctx->downcount -= 22;
    // 7F3AC0BC: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC0C0:
    ctx->pc = 0x7F3AC0C0u;
    // 7F3AC0C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC0C4:
    ctx->pc = 0x7F3AC0C4u;
    // 7F3AC0C4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F3AC0C8:
    ctx->pc = 0x7F3AC0C8u;
    // 7F3AC0C8: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC0CC:
    ctx->pc = 0x7F3AC0CCu;
    // 7F3AC0CC: lfs     f0, -21372(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC0CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC0D0:
    ctx->pc = 0x7F3AC0D0u;
    // 7F3AC0D0: stmw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC0D4:
    ctx->pc = 0x7F3AC0D4u;
    // 7F3AC0D4: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC0D8:
    ctx->pc = 0x7F3AC0D8u;
    // 7F3AC0D8: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC0DC:
    ctx->pc = 0x7F3AC0DCu;
    // 7F3AC0DC: addi    r29, r1, 72
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AC0E0:
    ctx->pc = 0x7F3AC0E0u;
    // 7F3AC0E0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AC0E4:
    ctx->pc = 0x7F3AC0E4u;
    // 7F3AC0E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AC0E8:
    ctx->pc = 0x7F3AC0E8u;
    // 7F3AC0E8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

    ctx->pc = 0x7F3AC0ECu;
    return;
return_dispatch_7F3A80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F3A8148u: goto label_7F3A8148;
    case 0x7F3A815Cu: goto label_7F3A815C;
    case 0x7F3A8170u: goto label_7F3A8170;
    case 0x7F3A8178u: goto label_7F3A8178;
    case 0x7F3A8184u: goto label_7F3A8184;
    case 0x7F3A81D8u: goto label_7F3A81D8;
    case 0x7F3A81ECu: goto label_7F3A81EC;
    case 0x7F3A820Cu: goto label_7F3A820C;
    case 0x7F3A8258u: goto label_7F3A8258;
    case 0x7F3A82A0u: goto label_7F3A82A0;
    case 0x7F3A82E8u: goto label_7F3A82E8;
    case 0x7F3A82FCu: goto label_7F3A82FC;
    case 0x7F3A831Cu: goto label_7F3A831C;
    case 0x7F3A8378u: goto label_7F3A8378;
    case 0x7F3A83F8u: goto label_7F3A83F8;
    case 0x7F3A8424u: goto label_7F3A8424;
    case 0x7F3A8538u: goto label_7F3A8538;
    case 0x7F3A853Cu: goto label_7F3A853C;
    case 0x7F3A8540u: goto label_7F3A8540;
    case 0x7F3A85E8u: goto label_7F3A85E8;
    case 0x7F3A860Cu: goto label_7F3A860C;
    case 0x7F3A8618u: goto label_7F3A8618;
    case 0x7F3A862Cu: goto label_7F3A862C;
    case 0x7F3A8640u: goto label_7F3A8640;
    case 0x7F3A8660u: goto label_7F3A8660;
    case 0x7F3A8670u: goto label_7F3A8670;
    case 0x7F3A8678u: goto label_7F3A8678;
    case 0x7F3A8680u: goto label_7F3A8680;
    case 0x7F3A8688u: goto label_7F3A8688;
    case 0x7F3A8690u: goto label_7F3A8690;
    case 0x7F3A8698u: goto label_7F3A8698;
    case 0x7F3A86ACu: goto label_7F3A86AC;
    case 0x7F3A86D8u: goto label_7F3A86D8;
    case 0x7F3A86ECu: goto label_7F3A86EC;
    case 0x7F3A8728u: goto label_7F3A8728;
    case 0x7F3A8738u: goto label_7F3A8738;
    case 0x7F3A8740u: goto label_7F3A8740;
    case 0x7F3A8758u: goto label_7F3A8758;
    case 0x7F3A875Cu: goto label_7F3A875C;
    case 0x7F3A8784u: goto label_7F3A8784;
    case 0x7F3A8790u: goto label_7F3A8790;
    case 0x7F3A879Cu: goto label_7F3A879C;
    case 0x7F3A87ACu: goto label_7F3A87AC;
    case 0x7F3A87B4u: goto label_7F3A87B4;
    case 0x7F3A87C8u: goto label_7F3A87C8;
    case 0x7F3A87F4u: goto label_7F3A87F4;
    case 0x7F3A87FCu: goto label_7F3A87FC;
    case 0x7F3A8804u: goto label_7F3A8804;
    case 0x7F3A880Cu: goto label_7F3A880C;
    case 0x7F3A8824u: goto label_7F3A8824;
    case 0x7F3A8844u: goto label_7F3A8844;
    case 0x7F3A8858u: goto label_7F3A8858;
    case 0x7F3A8860u: goto label_7F3A8860;
    case 0x7F3A8878u: goto label_7F3A8878;
    case 0x7F3A889Cu: goto label_7F3A889C;
    case 0x7F3A88C4u: goto label_7F3A88C4;
    case 0x7F3A88D4u: goto label_7F3A88D4;
    case 0x7F3A88DCu: goto label_7F3A88DC;
    case 0x7F3A88F4u: goto label_7F3A88F4;
    case 0x7F3A8914u: goto label_7F3A8914;
    case 0x7F3A8938u: goto label_7F3A8938;
    case 0x7F3A8960u: goto label_7F3A8960;
    case 0x7F3A8968u: goto label_7F3A8968;
    case 0x7F3A8974u: goto label_7F3A8974;
    case 0x7F3A898Cu: goto label_7F3A898C;
    case 0x7F3A89ACu: goto label_7F3A89AC;
    case 0x7F3A89D0u: goto label_7F3A89D0;
    case 0x7F3A89F8u: goto label_7F3A89F8;
    case 0x7F3A8A00u: goto label_7F3A8A00;
    case 0x7F3A8A08u: goto label_7F3A8A08;
    case 0x7F3A8A20u: goto label_7F3A8A20;
    case 0x7F3A8A24u: goto label_7F3A8A24;
    case 0x7F3A8A28u: goto label_7F3A8A28;
    case 0x7F3A8A38u: goto label_7F3A8A38;
    case 0x7F3A8A54u: goto label_7F3A8A54;
    case 0x7F3A8A58u: goto label_7F3A8A58;
    case 0x7F3A8A70u: goto label_7F3A8A70;
    case 0x7F3A8AE4u: goto label_7F3A8AE4;
    case 0x7F3A8AF4u: goto label_7F3A8AF4;
    case 0x7F3A8B14u: goto label_7F3A8B14;
    case 0x7F3A8B1Cu: goto label_7F3A8B1C;
    case 0x7F3A8B24u: goto label_7F3A8B24;
    case 0x7F3A8B34u: goto label_7F3A8B34;
    case 0x7F3A8B38u: goto label_7F3A8B38;
    case 0x7F3A8B3Cu: goto label_7F3A8B3C;
    case 0x7F3A8B50u: goto label_7F3A8B50;
    case 0x7F3A8B54u: goto label_7F3A8B54;
    case 0x7F3A8B58u: goto label_7F3A8B58;
    case 0x7F3A8B5Cu: goto label_7F3A8B5C;
    case 0x7F3A8BECu: goto label_7F3A8BEC;
    case 0x7F3A8C24u: goto label_7F3A8C24;
    case 0x7F3A8C3Cu: goto label_7F3A8C3C;
    case 0x7F3A8C48u: goto label_7F3A8C48;
    case 0x7F3A8C98u: goto label_7F3A8C98;
    case 0x7F3A8CACu: goto label_7F3A8CAC;
    case 0x7F3A8CB0u: goto label_7F3A8CB0;
    case 0x7F3A8CB8u: goto label_7F3A8CB8;
    case 0x7F3A8CBCu: goto label_7F3A8CBC;
    case 0x7F3A8CC0u: goto label_7F3A8CC0;
    case 0x7F3A8D20u: goto label_7F3A8D20;
    case 0x7F3A8D68u: goto label_7F3A8D68;
    case 0x7F3A8DBCu: goto label_7F3A8DBC;
    case 0x7F3A8DC8u: goto label_7F3A8DC8;
    case 0x7F3A8E58u: goto label_7F3A8E58;
    case 0x7F3A8E6Cu: goto label_7F3A8E6C;
    case 0x7F3A8E78u: goto label_7F3A8E78;
    case 0x7F3A8EF0u: goto label_7F3A8EF0;
    case 0x7F3A8F40u: goto label_7F3A8F40;
    case 0x7F3A8F60u: goto label_7F3A8F60;
    case 0x7F3A8F7Cu: goto label_7F3A8F7C;
    case 0x7F3A8F84u: goto label_7F3A8F84;
    case 0x7F3A8F8Cu: goto label_7F3A8F8C;
    case 0x7F3A9008u: goto label_7F3A9008;
    case 0x7F3A9024u: goto label_7F3A9024;
    case 0x7F3A9030u: goto label_7F3A9030;
    case 0x7F3A9090u: goto label_7F3A9090;
    case 0x7F3A90A0u: goto label_7F3A90A0;
    case 0x7F3A91ACu: goto label_7F3A91AC;
    case 0x7F3A91BCu: goto label_7F3A91BC;
    case 0x7F3A91D4u: goto label_7F3A91D4;
    case 0x7F3A91E8u: goto label_7F3A91E8;
    case 0x7F3A9200u: goto label_7F3A9200;
    case 0x7F3A9218u: goto label_7F3A9218;
    case 0x7F3A9234u: goto label_7F3A9234;
    case 0x7F3A9250u: goto label_7F3A9250;
    case 0x7F3A9264u: goto label_7F3A9264;
    case 0x7F3A927Cu: goto label_7F3A927C;
    case 0x7F3A9294u: goto label_7F3A9294;
    case 0x7F3A92B0u: goto label_7F3A92B0;
    case 0x7F3A92CCu: goto label_7F3A92CC;
    case 0x7F3A92E0u: goto label_7F3A92E0;
    case 0x7F3A92F8u: goto label_7F3A92F8;
    case 0x7F3A9310u: goto label_7F3A9310;
    case 0x7F3A932Cu: goto label_7F3A932C;
    case 0x7F3A9348u: goto label_7F3A9348;
    case 0x7F3A934Cu: goto label_7F3A934C;
    case 0x7F3A9358u: goto label_7F3A9358;
    case 0x7F3A9364u: goto label_7F3A9364;
    case 0x7F3A9370u: goto label_7F3A9370;
    case 0x7F3A937Cu: goto label_7F3A937C;
    case 0x7F3A9388u: goto label_7F3A9388;
    case 0x7F3A9394u: goto label_7F3A9394;
    case 0x7F3A93B4u: goto label_7F3A93B4;
    case 0x7F3A93C0u: goto label_7F3A93C0;
    case 0x7F3A93CCu: goto label_7F3A93CC;
    case 0x7F3A93D4u: goto label_7F3A93D4;
    case 0x7F3A93E8u: goto label_7F3A93E8;
    case 0x7F3A93FCu: goto label_7F3A93FC;
    case 0x7F3A9410u: goto label_7F3A9410;
    case 0x7F3A942Cu: goto label_7F3A942C;
    case 0x7F3A9440u: goto label_7F3A9440;
    case 0x7F3A9464u: goto label_7F3A9464;
    case 0x7F3A946Cu: goto label_7F3A946C;
    case 0x7F3A9474u: goto label_7F3A9474;
    case 0x7F3A947Cu: goto label_7F3A947C;
    case 0x7F3A9494u: goto label_7F3A9494;
    case 0x7F3A94A8u: goto label_7F3A94A8;
    case 0x7F3A94C0u: goto label_7F3A94C0;
    case 0x7F3A94D8u: goto label_7F3A94D8;
    case 0x7F3A94F4u: goto label_7F3A94F4;
    case 0x7F3A9510u: goto label_7F3A9510;
    case 0x7F3A9524u: goto label_7F3A9524;
    case 0x7F3A953Cu: goto label_7F3A953C;
    case 0x7F3A9554u: goto label_7F3A9554;
    case 0x7F3A9570u: goto label_7F3A9570;
    case 0x7F3A958Cu: goto label_7F3A958C;
    case 0x7F3A9590u: goto label_7F3A9590;
    case 0x7F3A959Cu: goto label_7F3A959C;
    case 0x7F3A95A8u: goto label_7F3A95A8;
    case 0x7F3A95B4u: goto label_7F3A95B4;
    case 0x7F3A95C0u: goto label_7F3A95C0;
    case 0x7F3A95E0u: goto label_7F3A95E0;
    case 0x7F3A95ECu: goto label_7F3A95EC;
    case 0x7F3A95F8u: goto label_7F3A95F8;
    case 0x7F3A9600u: goto label_7F3A9600;
    case 0x7F3A9614u: goto label_7F3A9614;
    case 0x7F3A9630u: goto label_7F3A9630;
    case 0x7F3A9644u: goto label_7F3A9644;
    case 0x7F3A96E8u: goto label_7F3A96E8;
    case 0x7F3A9768u: goto label_7F3A9768;
    case 0x7F3A9790u: goto label_7F3A9790;
    case 0x7F3A979Cu: goto label_7F3A979C;
    case 0x7F3A97CCu: goto label_7F3A97CC;
    case 0x7F3A9808u: goto label_7F3A9808;
    case 0x7F3A981Cu: goto label_7F3A981C;
    case 0x7F3A9830u: goto label_7F3A9830;
    case 0x7F3A9844u: goto label_7F3A9844;
    case 0x7F3A993Cu: goto label_7F3A993C;
    case 0x7F3A9984u: goto label_7F3A9984;
    case 0x7F3A99CCu: goto label_7F3A99CC;
    case 0x7F3A9A20u: goto label_7F3A9A20;
    case 0x7F3A9BECu: goto label_7F3A9BEC;
    case 0x7F3A9C08u: goto label_7F3A9C08;
    case 0x7F3A9C20u: goto label_7F3A9C20;
    case 0x7F3A9C38u: goto label_7F3A9C38;
    case 0x7F3A9C50u: goto label_7F3A9C50;
    case 0x7F3A9C68u: goto label_7F3A9C68;
    case 0x7F3A9C80u: goto label_7F3A9C80;
    case 0x7F3A9CA8u: goto label_7F3A9CA8;
    case 0x7F3A9CB8u: goto label_7F3A9CB8;
    case 0x7F3A9CD0u: goto label_7F3A9CD0;
    case 0x7F3A9CE4u: goto label_7F3A9CE4;
    case 0x7F3A9D14u: goto label_7F3A9D14;
    case 0x7F3A9D70u: goto label_7F3A9D70;
    case 0x7F3A9D7Cu: goto label_7F3A9D7C;
    case 0x7F3A9DC8u: goto label_7F3A9DC8;
    case 0x7F3A9DDCu: goto label_7F3A9DDC;
    case 0x7F3A9DFCu: goto label_7F3A9DFC;
    case 0x7F3A9E70u: goto label_7F3A9E70;
    case 0x7F3A9E98u: goto label_7F3A9E98;
    case 0x7F3A9EACu: goto label_7F3A9EAC;
    case 0x7F3A9EC0u: goto label_7F3A9EC0;
    case 0x7F3A9ED4u: goto label_7F3A9ED4;
    case 0x7F3A9EE4u: goto label_7F3A9EE4;
    case 0x7F3A9F04u: goto label_7F3A9F04;
    case 0x7F3A9F50u: goto label_7F3A9F50;
    case 0x7F3A9F70u: goto label_7F3A9F70;
    case 0x7F3A9FD8u: goto label_7F3A9FD8;
    case 0x7F3AA07Cu: goto label_7F3AA07C;
    case 0x7F3AA088u: goto label_7F3AA088;
    case 0x7F3AA1A8u: goto label_7F3AA1A8;
    case 0x7F3AA1BCu: goto label_7F3AA1BC;
    case 0x7F3AA21Cu: goto label_7F3AA21C;
    case 0x7F3AA240u: goto label_7F3AA240;
    case 0x7F3AA2ACu: goto label_7F3AA2AC;
    case 0x7F3AA2C0u: goto label_7F3AA2C0;
    case 0x7F3AA324u: goto label_7F3AA324;
    case 0x7F3AA338u: goto label_7F3AA338;
    case 0x7F3AA34Cu: goto label_7F3AA34C;
    case 0x7F3AA38Cu: goto label_7F3AA38C;
    case 0x7F3AA3ACu: goto label_7F3AA3AC;
    case 0x7F3AA3BCu: goto label_7F3AA3BC;
    case 0x7F3AA3C4u: goto label_7F3AA3C4;
    case 0x7F3AA3E4u: goto label_7F3AA3E4;
    case 0x7F3AA3F0u: goto label_7F3AA3F0;
    case 0x7F3AA4E0u: goto label_7F3AA4E0;
    case 0x7F3AA4ECu: goto label_7F3AA4EC;
    case 0x7F3AA510u: goto label_7F3AA510;
    case 0x7F3AA51Cu: goto label_7F3AA51C;
    case 0x7F3AA6B8u: goto label_7F3AA6B8;
    case 0x7F3AA6C4u: goto label_7F3AA6C4;
    case 0x7F3AA724u: goto label_7F3AA724;
    case 0x7F3AA738u: goto label_7F3AA738;
    case 0x7F3AA740u: goto label_7F3AA740;
    case 0x7F3AA748u: goto label_7F3AA748;
    case 0x7F3AA750u: goto label_7F3AA750;
    case 0x7F3AA778u: goto label_7F3AA778;
    case 0x7F3AA794u: goto label_7F3AA794;
    case 0x7F3AA7C0u: goto label_7F3AA7C0;
    case 0x7F3AA7CCu: goto label_7F3AA7CC;
    case 0x7F3AA7D8u: goto label_7F3AA7D8;
    case 0x7F3AA7ECu: goto label_7F3AA7EC;
    case 0x7F3AA808u: goto label_7F3AA808;
    case 0x7F3AA810u: goto label_7F3AA810;
    case 0x7F3AA818u: goto label_7F3AA818;
    case 0x7F3AA820u: goto label_7F3AA820;
    case 0x7F3AA83Cu: goto label_7F3AA83C;
    case 0x7F3AA858u: goto label_7F3AA858;
    case 0x7F3AA860u: goto label_7F3AA860;
    case 0x7F3AA868u: goto label_7F3AA868;
    case 0x7F3AA878u: goto label_7F3AA878;
    case 0x7F3AA890u: goto label_7F3AA890;
    case 0x7F3AA8A8u: goto label_7F3AA8A8;
    case 0x7F3AA8C4u: goto label_7F3AA8C4;
    case 0x7F3AA8F8u: goto label_7F3AA8F8;
    case 0x7F3AA924u: goto label_7F3AA924;
    case 0x7F3AA974u: goto label_7F3AA974;
    case 0x7F3AA984u: goto label_7F3AA984;
    case 0x7F3AA9A0u: goto label_7F3AA9A0;
    case 0x7F3AA9BCu: goto label_7F3AA9BC;
    case 0x7F3AA9E0u: goto label_7F3AA9E0;
    case 0x7F3AA9F4u: goto label_7F3AA9F4;
    case 0x7F3AAA08u: goto label_7F3AAA08;
    case 0x7F3AAA40u: goto label_7F3AAA40;
    case 0x7F3AAA58u: goto label_7F3AAA58;
    case 0x7F3AAB08u: goto label_7F3AAB08;
    case 0x7F3AAB1Cu: goto label_7F3AAB1C;
    case 0x7F3AAB38u: goto label_7F3AAB38;
    case 0x7F3AAB94u: goto label_7F3AAB94;
    case 0x7F3AABA4u: goto label_7F3AABA4;
    case 0x7F3AABFCu: goto label_7F3AABFC;
    case 0x7F3AAC84u: goto label_7F3AAC84;
    case 0x7F3AAD90u: goto label_7F3AAD90;
    case 0x7F3AADC0u: goto label_7F3AADC0;
    case 0x7F3AADE4u: goto label_7F3AADE4;
    case 0x7F3AAE10u: goto label_7F3AAE10;
    case 0x7F3AAE54u: goto label_7F3AAE54;
    case 0x7F3AAE70u: goto label_7F3AAE70;
    case 0x7F3AAE84u: goto label_7F3AAE84;
    case 0x7F3AAE90u: goto label_7F3AAE90;
    case 0x7F3AAE9Cu: goto label_7F3AAE9C;
    case 0x7F3AAEA4u: goto label_7F3AAEA4;
    case 0x7F3AAEF4u: goto label_7F3AAEF4;
    case 0x7F3AAEFCu: goto label_7F3AAEFC;
    case 0x7F3AAF10u: goto label_7F3AAF10;
    case 0x7F3AAF20u: goto label_7F3AAF20;
    case 0x7F3AAF30u: goto label_7F3AAF30;
    case 0x7F3AAF48u: goto label_7F3AAF48;
    case 0x7F3AB00Cu: goto label_7F3AB00C;
    case 0x7F3AB158u: goto label_7F3AB158;
    case 0x7F3AB16Cu: goto label_7F3AB16C;
    case 0x7F3AB1B0u: goto label_7F3AB1B0;
    case 0x7F3AB1BCu: goto label_7F3AB1BC;
    case 0x7F3AB1F0u: goto label_7F3AB1F0;
    case 0x7F3AB200u: goto label_7F3AB200;
    case 0x7F3AB220u: goto label_7F3AB220;
    case 0x7F3AB234u: goto label_7F3AB234;
    case 0x7F3AB244u: goto label_7F3AB244;
    case 0x7F3AB258u: goto label_7F3AB258;
    case 0x7F3AB2A8u: goto label_7F3AB2A8;
    case 0x7F3AB2B4u: goto label_7F3AB2B4;
    case 0x7F3AB2D0u: goto label_7F3AB2D0;
    case 0x7F3AB348u: goto label_7F3AB348;
    case 0x7F3AB35Cu: goto label_7F3AB35C;
    case 0x7F3AB370u: goto label_7F3AB370;
    case 0x7F3AB384u: goto label_7F3AB384;
    case 0x7F3AB398u: goto label_7F3AB398;
    case 0x7F3AB3ACu: goto label_7F3AB3AC;
    case 0x7F3AB3C0u: goto label_7F3AB3C0;
    case 0x7F3AB3D4u: goto label_7F3AB3D4;
    case 0x7F3AB3E8u: goto label_7F3AB3E8;
    case 0x7F3AB3FCu: goto label_7F3AB3FC;
    case 0x7F3AB410u: goto label_7F3AB410;
    case 0x7F3AB414u: goto label_7F3AB414;
    case 0x7F3AB6BCu: goto label_7F3AB6BC;
    case 0x7F3AB6C4u: goto label_7F3AB6C4;
    case 0x7F3AB6CCu: goto label_7F3AB6CC;
    case 0x7F3AB6D4u: goto label_7F3AB6D4;
    case 0x7F3AB6DCu: goto label_7F3AB6DC;
    case 0x7F3AB6E8u: goto label_7F3AB6E8;
    case 0x7F3AB740u: goto label_7F3AB740;
    case 0x7F3AB814u: goto label_7F3AB814;
    case 0x7F3AB828u: goto label_7F3AB828;
    case 0x7F3AB858u: goto label_7F3AB858;
    case 0x7F3AB86Cu: goto label_7F3AB86C;
    case 0x7F3AB8A4u: goto label_7F3AB8A4;
    case 0x7F3AB8ACu: goto label_7F3AB8AC;
    case 0x7F3AB8D4u: goto label_7F3AB8D4;
    case 0x7F3AB910u: goto label_7F3AB910;
    case 0x7F3AB930u: goto label_7F3AB930;
    case 0x7F3AB950u: goto label_7F3AB950;
    case 0x7F3AB968u: goto label_7F3AB968;
    case 0x7F3AB974u: goto label_7F3AB974;
    case 0x7F3AB998u: goto label_7F3AB998;
    case 0x7F3ABA88u: goto label_7F3ABA88;
    case 0x7F3ABA90u: goto label_7F3ABA90;
    case 0x7F3ABAA4u: goto label_7F3ABAA4;
    case 0x7F3ABAC4u: goto label_7F3ABAC4;
    case 0x7F3ABAD4u: goto label_7F3ABAD4;
    case 0x7F3ABAE4u: goto label_7F3ABAE4;
    case 0x7F3ABB24u: goto label_7F3ABB24;
    case 0x7F3ABB3Cu: goto label_7F3ABB3C;
    case 0x7F3ABB40u: goto label_7F3ABB40;
    case 0x7F3ABB44u: goto label_7F3ABB44;
    case 0x7F3ABB50u: goto label_7F3ABB50;
    case 0x7F3ABB54u: goto label_7F3ABB54;
    case 0x7F3ABB58u: goto label_7F3ABB58;
    case 0x7F3ABB5Cu: goto label_7F3ABB5C;
    case 0x7F3ABBC0u: goto label_7F3ABBC0;
    case 0x7F3ABBD8u: goto label_7F3ABBD8;
    case 0x7F3ABBDCu: goto label_7F3ABBDC;
    case 0x7F3ABC10u: goto label_7F3ABC10;
    case 0x7F3ABC28u: goto label_7F3ABC28;
    case 0x7F3ABC30u: goto label_7F3ABC30;
    case 0x7F3ABC5Cu: goto label_7F3ABC5C;
    case 0x7F3ABC90u: goto label_7F3ABC90;
    case 0x7F3ABC94u: goto label_7F3ABC94;
    case 0x7F3ABC98u: goto label_7F3ABC98;
    case 0x7F3ABCA4u: goto label_7F3ABCA4;
    case 0x7F3ABCA8u: goto label_7F3ABCA8;
    case 0x7F3ABCC0u: goto label_7F3ABCC0;
    case 0x7F3ABCC8u: goto label_7F3ABCC8;
    case 0x7F3ABCD4u: goto label_7F3ABCD4;
    case 0x7F3ABCE4u: goto label_7F3ABCE4;
    case 0x7F3ABD4Cu: goto label_7F3ABD4C;
    case 0x7F3ABD70u: goto label_7F3ABD70;
    case 0x7F3ABD78u: goto label_7F3ABD78;
    case 0x7F3ABD84u: goto label_7F3ABD84;
    case 0x7F3ABD90u: goto label_7F3ABD90;
    case 0x7F3ABD9Cu: goto label_7F3ABD9C;
    case 0x7F3ABDACu: goto label_7F3ABDAC;
    case 0x7F3ABDB8u: goto label_7F3ABDB8;
    case 0x7F3ABDCCu: goto label_7F3ABDCC;
    case 0x7F3ABDD8u: goto label_7F3ABDD8;
    case 0x7F3ABDDCu: goto label_7F3ABDDC;
    case 0x7F3ABDE0u: goto label_7F3ABDE0;
    case 0x7F3ABDF4u: goto label_7F3ABDF4;
    case 0x7F3ABE00u: goto label_7F3ABE00;
    case 0x7F3ABE0Cu: goto label_7F3ABE0C;
    case 0x7F3ABE1Cu: goto label_7F3ABE1C;
    case 0x7F3ABE38u: goto label_7F3ABE38;
    case 0x7F3ABE40u: goto label_7F3ABE40;
    case 0x7F3ABE60u: goto label_7F3ABE60;
    case 0x7F3ABE74u: goto label_7F3ABE74;
    case 0x7F3ABE8Cu: goto label_7F3ABE8C;
    case 0x7F3ABEA4u: goto label_7F3ABEA4;
    case 0x7F3ABEACu: goto label_7F3ABEAC;
    case 0x7F3ABEB4u: goto label_7F3ABEB4;
    case 0x7F3ABEBCu: goto label_7F3ABEBC;
    case 0x7F3ABED0u: goto label_7F3ABED0;
    case 0x7F3ABED8u: goto label_7F3ABED8;
    case 0x7F3ABEE0u: goto label_7F3ABEE0;
    case 0x7F3ABF4Cu: goto label_7F3ABF4C;
    case 0x7F3ABFC4u: goto label_7F3ABFC4;
    case 0x7F3AC050u: goto label_7F3AC050;
    case 0x7F3AC058u: goto label_7F3AC058;
    default: return;
    }
}

