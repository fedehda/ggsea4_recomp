// DolRecomp output
#include "../generated.h"

static void loop_7F3AC554(CPUState* ctx) {
label_7F3AC554:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AC554u;
    // 7F3AC554: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AC558u;
    // 7F3AC558: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F3AC55Cu;
    // 7F3AC55C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F3AC560u;
    // 7F3AC560: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F3AC564: bc    16, 0, 0x7F3AC554
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC554u;
                return;
            }
            goto label_7F3AC554;
        }
    }

    ctx->pc = 0x7F3AC568u;
}

static void loop_7F3AC914(CPUState* ctx) {
label_7F3AC914:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AC914u;
    // 7F3AC914: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AC918u;
    // 7F3AC918: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F3AC91Cu;
    // 7F3AC91C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F3AC920u;
    // 7F3AC920: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F3AC924: bc    16, 0, 0x7F3AC914
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC914u;
                return;
            }
            goto label_7F3AC914;
        }
    }

    ctx->pc = 0x7F3AC928u;
}

static void loop_7F3AC9A8(CPUState* ctx) {
label_7F3AC9A8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AC9A8u;
    // 7F3AC9A8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AC9ACu;
    // 7F3AC9AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AC9B0u;
    // 7F3AC9B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AC9B4u;
    // 7F3AC9B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AC9B8: bc    16, 0, 0x7F3AC9A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC9A8u;
                return;
            }
            goto label_7F3AC9A8;
        }
    }

    ctx->pc = 0x7F3AC9BCu;
}

static void loop_7F3AC9D0(CPUState* ctx) {
label_7F3AC9D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AC9D0u;
    // 7F3AC9D0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AC9D4u;
    // 7F3AC9D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AC9D8u;
    // 7F3AC9D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AC9DCu;
    // 7F3AC9DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AC9E0: bc    16, 0, 0x7F3AC9D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC9D0u;
                return;
            }
            goto label_7F3AC9D0;
        }
    }

    ctx->pc = 0x7F3AC9E4u;
}

static void loop_7F3ACA14(CPUState* ctx) {
label_7F3ACA14:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ACA14u;
    // 7F3ACA14: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ACA18u;
    // 7F3ACA18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ACA1Cu;
    // 7F3ACA1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ACA20u;
    // 7F3ACA20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ACA24: bc    16, 0, 0x7F3ACA14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA14u;
                return;
            }
            goto label_7F3ACA14;
        }
    }

    ctx->pc = 0x7F3ACA28u;
}

static void loop_7F3ACA48(CPUState* ctx) {
label_7F3ACA48:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ACA48u;
    // 7F3ACA48: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ACA4Cu;
    // 7F3ACA4C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ACA50u;
    // 7F3ACA50: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ACA54u;
    // 7F3ACA54: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ACA58: bc    16, 0, 0x7F3ACA48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA48u;
                return;
            }
            goto label_7F3ACA48;
        }
    }

    ctx->pc = 0x7F3ACA5Cu;
}

static void loop_7F3ACA70(CPUState* ctx) {
label_7F3ACA70:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ACA70u;
    // 7F3ACA70: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ACA74u;
    // 7F3ACA74: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ACA78u;
    // 7F3ACA78: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ACA7Cu;
    // 7F3ACA7C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ACA80: bc    16, 0, 0x7F3ACA70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA70u;
                return;
            }
            goto label_7F3ACA70;
        }
    }

    ctx->pc = 0x7F3ACA84u;
}

static void loop_7F3ACAB4(CPUState* ctx) {
label_7F3ACAB4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ACAB4u;
    // 7F3ACAB4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ACAB8u;
    // 7F3ACAB8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ACABCu;
    // 7F3ACABC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ACAC0u;
    // 7F3ACAC0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ACAC4: bc    16, 0, 0x7F3ACAB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACAB4u;
                return;
            }
            goto label_7F3ACAB4;
        }
    }

    ctx->pc = 0x7F3ACAC8u;
}

static void loop_7F3AD684(CPUState* ctx) {
label_7F3AD684:
    ctx->downcount -= 8;
    ctx->pc = 0x7F3AD684u;
    // 7F3AD684: lha     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F3AD688: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    // 7F3AD68C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x7F3AD690u;
    // 7F3AD690: sth     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    ctx->pc = 0x7F3AD694u;
    // 7F3AD694: lha     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F3AD698: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x7F3AD69Cu;
    // 7F3AD69C: sth     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    // 7F3AD6A0: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

    ctx->pc = 0x7F3AD6A4u;
    // 7F3AD6A4: lwz     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AD6A8u;
    // 7F3AD6A8: lha     r0, 70(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F3AD6AC: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F3AD6B0: bc    12, 0, 0x7F3AD684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD684u;
                return;
            }
            goto label_7F3AD684;
        }
    }

    ctx->pc = 0x7F3AD6B4u;
}

static void loop_7F3ADB58(CPUState* ctx) {
label_7F3ADB58:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3ADB58u;
    // 7F3ADB58: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3ADB5Cu;
    // 7F3ADB5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3ADB60u;
    // 7F3ADB60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3ADB64u;
    // 7F3ADB64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3ADB68: bc    16, 0, 0x7F3ADB58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADB58u;
                return;
            }
            goto label_7F3ADB58;
        }
    }

    ctx->pc = 0x7F3ADB6Cu;
}

static void loop_7F3AE9F4(CPUState* ctx) {
label_7F3AE9F4:
    ctx->downcount -= 4;
    ctx->pc = 0x7F3AE9F4u;
    // 7F3AE9F4: lwzx    r5, r6, r3
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F3AE9F8: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    // 7F3AE9FC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F3AEA00u;
    // 7F3AEA00: sth     r7, 840(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(840);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    ctx->pc = 0x7F3AEA04u;
    // 7F3AEA04: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F3AEA08: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F3AEA0C: bc    12, 0, 0x7F3AE9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE9F4u;
                return;
            }
            goto label_7F3AE9F4;
        }
    }

    ctx->pc = 0x7F3AEA10u;
}

static void loop_7F3AEB58(CPUState* ctx) {
label_7F3AEB58:
    ctx->downcount -= 4;
    ctx->pc = 0x7F3AEB58u;
    // 7F3AEB58: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AEB5Cu;
    // 7F3AEB5C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F3AEB60: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

    // 7F3AEB64: bc    16, 0, 0x7F3AEB58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB58u;
                return;
            }
            goto label_7F3AEB58;
        }
    }

    ctx->pc = 0x7F3AEB68u;
}

static void loop_7F3AF8C4(CPUState* ctx) {
label_7F3AF8C4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AF8C4u;
    // 7F3AF8C4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AF8C8u;
    // 7F3AF8C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AF8CCu;
    // 7F3AF8CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AF8D0u;
    // 7F3AF8D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AF8D4: bc    16, 0, 0x7F3AF8C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF8C4u;
                return;
            }
            goto label_7F3AF8C4;
        }
    }

    ctx->pc = 0x7F3AF8D8u;
}

static void loop_7F3AFA0C(CPUState* ctx) {
label_7F3AFA0C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3AFA0Cu;
    // 7F3AFA0C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3AFA10u;
    // 7F3AFA10: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3AFA14u;
    // 7F3AFA14: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3AFA18u;
    // 7F3AFA18: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3AFA1C: bc    16, 0, 0x7F3AFA0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFA0Cu;
                return;
            }
            goto label_7F3AFA0C;
        }
    }

    ctx->pc = 0x7F3AFA20u;
}

void func_7F3AC0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3AC0ECu: goto label_7F3AC0EC;
    case 0x7F3AC0F0u: goto label_7F3AC0F0;
    case 0x7F3AC0F4u: goto label_7F3AC0F4;
    case 0x7F3AC0F8u: goto label_7F3AC0F8;
    case 0x7F3AC0FCu: goto label_7F3AC0FC;
    case 0x7F3AC100u: goto label_7F3AC100;
    case 0x7F3AC104u: goto label_7F3AC104;
    case 0x7F3AC108u: goto label_7F3AC108;
    case 0x7F3AC10Cu: goto label_7F3AC10C;
    case 0x7F3AC110u: goto label_7F3AC110;
    case 0x7F3AC114u: goto label_7F3AC114;
    case 0x7F3AC118u: goto label_7F3AC118;
    case 0x7F3AC11Cu: goto label_7F3AC11C;
    case 0x7F3AC120u: goto label_7F3AC120;
    case 0x7F3AC124u: goto label_7F3AC124;
    case 0x7F3AC128u: goto label_7F3AC128;
    case 0x7F3AC12Cu: goto label_7F3AC12C;
    case 0x7F3AC130u: goto label_7F3AC130;
    case 0x7F3AC134u: goto label_7F3AC134;
    case 0x7F3AC138u: goto label_7F3AC138;
    case 0x7F3AC13Cu: goto label_7F3AC13C;
    case 0x7F3AC140u: goto label_7F3AC140;
    case 0x7F3AC144u: goto label_7F3AC144;
    case 0x7F3AC148u: goto label_7F3AC148;
    case 0x7F3AC14Cu: goto label_7F3AC14C;
    case 0x7F3AC150u: goto label_7F3AC150;
    case 0x7F3AC154u: goto label_7F3AC154;
    case 0x7F3AC158u: goto label_7F3AC158;
    case 0x7F3AC15Cu: goto label_7F3AC15C;
    case 0x7F3AC160u: goto label_7F3AC160;
    case 0x7F3AC164u: goto label_7F3AC164;
    case 0x7F3AC168u: goto label_7F3AC168;
    case 0x7F3AC16Cu: goto label_7F3AC16C;
    case 0x7F3AC170u: goto label_7F3AC170;
    case 0x7F3AC174u: goto label_7F3AC174;
    case 0x7F3AC178u: goto label_7F3AC178;
    case 0x7F3AC17Cu: goto label_7F3AC17C;
    case 0x7F3AC180u: goto label_7F3AC180;
    case 0x7F3AC184u: goto label_7F3AC184;
    case 0x7F3AC188u: goto label_7F3AC188;
    case 0x7F3AC18Cu: goto label_7F3AC18C;
    case 0x7F3AC190u: goto label_7F3AC190;
    case 0x7F3AC194u: goto label_7F3AC194;
    case 0x7F3AC198u: goto label_7F3AC198;
    case 0x7F3AC19Cu: goto label_7F3AC19C;
    case 0x7F3AC1A0u: goto label_7F3AC1A0;
    case 0x7F3AC1A4u: goto label_7F3AC1A4;
    case 0x7F3AC1A8u: goto label_7F3AC1A8;
    case 0x7F3AC1ACu: goto label_7F3AC1AC;
    case 0x7F3AC1B0u: goto label_7F3AC1B0;
    case 0x7F3AC1B4u: goto label_7F3AC1B4;
    case 0x7F3AC1B8u: goto label_7F3AC1B8;
    case 0x7F3AC1BCu: goto label_7F3AC1BC;
    case 0x7F3AC1C0u: goto label_7F3AC1C0;
    case 0x7F3AC1C4u: goto label_7F3AC1C4;
    case 0x7F3AC1C8u: goto label_7F3AC1C8;
    case 0x7F3AC1CCu: goto label_7F3AC1CC;
    case 0x7F3AC1D0u: goto label_7F3AC1D0;
    case 0x7F3AC1D4u: goto label_7F3AC1D4;
    case 0x7F3AC1D8u: goto label_7F3AC1D8;
    case 0x7F3AC1DCu: goto label_7F3AC1DC;
    case 0x7F3AC1E0u: goto label_7F3AC1E0;
    case 0x7F3AC1E4u: goto label_7F3AC1E4;
    case 0x7F3AC1E8u: goto label_7F3AC1E8;
    case 0x7F3AC1ECu: goto label_7F3AC1EC;
    case 0x7F3AC1F0u: goto label_7F3AC1F0;
    case 0x7F3AC1F4u: goto label_7F3AC1F4;
    case 0x7F3AC1F8u: goto label_7F3AC1F8;
    case 0x7F3AC1FCu: goto label_7F3AC1FC;
    case 0x7F3AC200u: goto label_7F3AC200;
    case 0x7F3AC204u: goto label_7F3AC204;
    case 0x7F3AC208u: goto label_7F3AC208;
    case 0x7F3AC20Cu: goto label_7F3AC20C;
    case 0x7F3AC210u: goto label_7F3AC210;
    case 0x7F3AC214u: goto label_7F3AC214;
    case 0x7F3AC218u: goto label_7F3AC218;
    case 0x7F3AC21Cu: goto label_7F3AC21C;
    case 0x7F3AC220u: goto label_7F3AC220;
    case 0x7F3AC224u: goto label_7F3AC224;
    case 0x7F3AC228u: goto label_7F3AC228;
    case 0x7F3AC22Cu: goto label_7F3AC22C;
    case 0x7F3AC230u: goto label_7F3AC230;
    case 0x7F3AC234u: goto label_7F3AC234;
    case 0x7F3AC238u: goto label_7F3AC238;
    case 0x7F3AC23Cu: goto label_7F3AC23C;
    case 0x7F3AC240u: goto label_7F3AC240;
    case 0x7F3AC244u: goto label_7F3AC244;
    case 0x7F3AC248u: goto label_7F3AC248;
    case 0x7F3AC24Cu: goto label_7F3AC24C;
    case 0x7F3AC250u: goto label_7F3AC250;
    case 0x7F3AC254u: goto label_7F3AC254;
    case 0x7F3AC258u: goto label_7F3AC258;
    case 0x7F3AC25Cu: goto label_7F3AC25C;
    case 0x7F3AC260u: goto label_7F3AC260;
    case 0x7F3AC264u: goto label_7F3AC264;
    case 0x7F3AC268u: goto label_7F3AC268;
    case 0x7F3AC26Cu: goto label_7F3AC26C;
    case 0x7F3AC270u: goto label_7F3AC270;
    case 0x7F3AC274u: goto label_7F3AC274;
    case 0x7F3AC278u: goto label_7F3AC278;
    case 0x7F3AC27Cu: goto label_7F3AC27C;
    case 0x7F3AC280u: goto label_7F3AC280;
    case 0x7F3AC284u: goto label_7F3AC284;
    case 0x7F3AC288u: goto label_7F3AC288;
    case 0x7F3AC28Cu: goto label_7F3AC28C;
    case 0x7F3AC290u: goto label_7F3AC290;
    case 0x7F3AC294u: goto label_7F3AC294;
    case 0x7F3AC298u: goto label_7F3AC298;
    case 0x7F3AC29Cu: goto label_7F3AC29C;
    case 0x7F3AC2A0u: goto label_7F3AC2A0;
    case 0x7F3AC2A4u: goto label_7F3AC2A4;
    case 0x7F3AC2A8u: goto label_7F3AC2A8;
    case 0x7F3AC2ACu: goto label_7F3AC2AC;
    case 0x7F3AC2B0u: goto label_7F3AC2B0;
    case 0x7F3AC2B4u: goto label_7F3AC2B4;
    case 0x7F3AC2B8u: goto label_7F3AC2B8;
    case 0x7F3AC2BCu: goto label_7F3AC2BC;
    case 0x7F3AC2C0u: goto label_7F3AC2C0;
    case 0x7F3AC2C4u: goto label_7F3AC2C4;
    case 0x7F3AC2C8u: goto label_7F3AC2C8;
    case 0x7F3AC2CCu: goto label_7F3AC2CC;
    case 0x7F3AC2D0u: goto label_7F3AC2D0;
    case 0x7F3AC2D4u: goto label_7F3AC2D4;
    case 0x7F3AC2D8u: goto label_7F3AC2D8;
    case 0x7F3AC2DCu: goto label_7F3AC2DC;
    case 0x7F3AC2E0u: goto label_7F3AC2E0;
    case 0x7F3AC2E4u: goto label_7F3AC2E4;
    case 0x7F3AC2E8u: goto label_7F3AC2E8;
    case 0x7F3AC2ECu: goto label_7F3AC2EC;
    case 0x7F3AC2F0u: goto label_7F3AC2F0;
    case 0x7F3AC2F4u: goto label_7F3AC2F4;
    case 0x7F3AC2F8u: goto label_7F3AC2F8;
    case 0x7F3AC2FCu: goto label_7F3AC2FC;
    case 0x7F3AC300u: goto label_7F3AC300;
    case 0x7F3AC304u: goto label_7F3AC304;
    case 0x7F3AC308u: goto label_7F3AC308;
    case 0x7F3AC30Cu: goto label_7F3AC30C;
    case 0x7F3AC310u: goto label_7F3AC310;
    case 0x7F3AC314u: goto label_7F3AC314;
    case 0x7F3AC318u: goto label_7F3AC318;
    case 0x7F3AC31Cu: goto label_7F3AC31C;
    case 0x7F3AC320u: goto label_7F3AC320;
    case 0x7F3AC324u: goto label_7F3AC324;
    case 0x7F3AC328u: goto label_7F3AC328;
    case 0x7F3AC32Cu: goto label_7F3AC32C;
    case 0x7F3AC330u: goto label_7F3AC330;
    case 0x7F3AC334u: goto label_7F3AC334;
    case 0x7F3AC338u: goto label_7F3AC338;
    case 0x7F3AC33Cu: goto label_7F3AC33C;
    case 0x7F3AC340u: goto label_7F3AC340;
    case 0x7F3AC344u: goto label_7F3AC344;
    case 0x7F3AC348u: goto label_7F3AC348;
    case 0x7F3AC34Cu: goto label_7F3AC34C;
    case 0x7F3AC350u: goto label_7F3AC350;
    case 0x7F3AC354u: goto label_7F3AC354;
    case 0x7F3AC358u: goto label_7F3AC358;
    case 0x7F3AC35Cu: goto label_7F3AC35C;
    case 0x7F3AC360u: goto label_7F3AC360;
    case 0x7F3AC364u: goto label_7F3AC364;
    case 0x7F3AC368u: goto label_7F3AC368;
    case 0x7F3AC36Cu: goto label_7F3AC36C;
    case 0x7F3AC370u: goto label_7F3AC370;
    case 0x7F3AC374u: goto label_7F3AC374;
    case 0x7F3AC378u: goto label_7F3AC378;
    case 0x7F3AC37Cu: goto label_7F3AC37C;
    case 0x7F3AC380u: goto label_7F3AC380;
    case 0x7F3AC384u: goto label_7F3AC384;
    case 0x7F3AC388u: goto label_7F3AC388;
    case 0x7F3AC38Cu: goto label_7F3AC38C;
    case 0x7F3AC390u: goto label_7F3AC390;
    case 0x7F3AC394u: goto label_7F3AC394;
    case 0x7F3AC398u: goto label_7F3AC398;
    case 0x7F3AC39Cu: goto label_7F3AC39C;
    case 0x7F3AC3A0u: goto label_7F3AC3A0;
    case 0x7F3AC3A4u: goto label_7F3AC3A4;
    case 0x7F3AC3A8u: goto label_7F3AC3A8;
    case 0x7F3AC3ACu: goto label_7F3AC3AC;
    case 0x7F3AC3B0u: goto label_7F3AC3B0;
    case 0x7F3AC3B4u: goto label_7F3AC3B4;
    case 0x7F3AC3B8u: goto label_7F3AC3B8;
    case 0x7F3AC3BCu: goto label_7F3AC3BC;
    case 0x7F3AC3C0u: goto label_7F3AC3C0;
    case 0x7F3AC3C4u: goto label_7F3AC3C4;
    case 0x7F3AC3C8u: goto label_7F3AC3C8;
    case 0x7F3AC3CCu: goto label_7F3AC3CC;
    case 0x7F3AC3D0u: goto label_7F3AC3D0;
    case 0x7F3AC3D4u: goto label_7F3AC3D4;
    case 0x7F3AC3D8u: goto label_7F3AC3D8;
    case 0x7F3AC3DCu: goto label_7F3AC3DC;
    case 0x7F3AC3E0u: goto label_7F3AC3E0;
    case 0x7F3AC3E4u: goto label_7F3AC3E4;
    case 0x7F3AC3E8u: goto label_7F3AC3E8;
    case 0x7F3AC3ECu: goto label_7F3AC3EC;
    case 0x7F3AC3F0u: goto label_7F3AC3F0;
    case 0x7F3AC3F4u: goto label_7F3AC3F4;
    case 0x7F3AC3F8u: goto label_7F3AC3F8;
    case 0x7F3AC3FCu: goto label_7F3AC3FC;
    case 0x7F3AC400u: goto label_7F3AC400;
    case 0x7F3AC404u: goto label_7F3AC404;
    case 0x7F3AC408u: goto label_7F3AC408;
    case 0x7F3AC40Cu: goto label_7F3AC40C;
    case 0x7F3AC410u: goto label_7F3AC410;
    case 0x7F3AC414u: goto label_7F3AC414;
    case 0x7F3AC418u: goto label_7F3AC418;
    case 0x7F3AC41Cu: goto label_7F3AC41C;
    case 0x7F3AC420u: goto label_7F3AC420;
    case 0x7F3AC424u: goto label_7F3AC424;
    case 0x7F3AC428u: goto label_7F3AC428;
    case 0x7F3AC42Cu: goto label_7F3AC42C;
    case 0x7F3AC430u: goto label_7F3AC430;
    case 0x7F3AC434u: goto label_7F3AC434;
    case 0x7F3AC438u: goto label_7F3AC438;
    case 0x7F3AC43Cu: goto label_7F3AC43C;
    case 0x7F3AC440u: goto label_7F3AC440;
    case 0x7F3AC444u: goto label_7F3AC444;
    case 0x7F3AC448u: goto label_7F3AC448;
    case 0x7F3AC44Cu: goto label_7F3AC44C;
    case 0x7F3AC450u: goto label_7F3AC450;
    case 0x7F3AC454u: goto label_7F3AC454;
    case 0x7F3AC458u: goto label_7F3AC458;
    case 0x7F3AC45Cu: goto label_7F3AC45C;
    case 0x7F3AC460u: goto label_7F3AC460;
    case 0x7F3AC464u: goto label_7F3AC464;
    case 0x7F3AC468u: goto label_7F3AC468;
    case 0x7F3AC46Cu: goto label_7F3AC46C;
    case 0x7F3AC470u: goto label_7F3AC470;
    case 0x7F3AC474u: goto label_7F3AC474;
    case 0x7F3AC478u: goto label_7F3AC478;
    case 0x7F3AC47Cu: goto label_7F3AC47C;
    case 0x7F3AC480u: goto label_7F3AC480;
    case 0x7F3AC484u: goto label_7F3AC484;
    case 0x7F3AC488u: goto label_7F3AC488;
    case 0x7F3AC48Cu: goto label_7F3AC48C;
    case 0x7F3AC490u: goto label_7F3AC490;
    case 0x7F3AC494u: goto label_7F3AC494;
    case 0x7F3AC498u: goto label_7F3AC498;
    case 0x7F3AC49Cu: goto label_7F3AC49C;
    case 0x7F3AC4A0u: goto label_7F3AC4A0;
    case 0x7F3AC4A4u: goto label_7F3AC4A4;
    case 0x7F3AC4A8u: goto label_7F3AC4A8;
    case 0x7F3AC4ACu: goto label_7F3AC4AC;
    case 0x7F3AC4B0u: goto label_7F3AC4B0;
    case 0x7F3AC4B4u: goto label_7F3AC4B4;
    case 0x7F3AC4B8u: goto label_7F3AC4B8;
    case 0x7F3AC4BCu: goto label_7F3AC4BC;
    case 0x7F3AC4C0u: goto label_7F3AC4C0;
    case 0x7F3AC4C4u: goto label_7F3AC4C4;
    case 0x7F3AC4C8u: goto label_7F3AC4C8;
    case 0x7F3AC4CCu: goto label_7F3AC4CC;
    case 0x7F3AC4D0u: goto label_7F3AC4D0;
    case 0x7F3AC4D4u: goto label_7F3AC4D4;
    case 0x7F3AC4D8u: goto label_7F3AC4D8;
    case 0x7F3AC4DCu: goto label_7F3AC4DC;
    case 0x7F3AC4E0u: goto label_7F3AC4E0;
    case 0x7F3AC4E4u: goto label_7F3AC4E4;
    case 0x7F3AC4E8u: goto label_7F3AC4E8;
    case 0x7F3AC4ECu: goto label_7F3AC4EC;
    case 0x7F3AC4F0u: goto label_7F3AC4F0;
    case 0x7F3AC4F4u: goto label_7F3AC4F4;
    case 0x7F3AC4F8u: goto label_7F3AC4F8;
    case 0x7F3AC4FCu: goto label_7F3AC4FC;
    case 0x7F3AC500u: goto label_7F3AC500;
    case 0x7F3AC504u: goto label_7F3AC504;
    case 0x7F3AC508u: goto label_7F3AC508;
    case 0x7F3AC50Cu: goto label_7F3AC50C;
    case 0x7F3AC510u: goto label_7F3AC510;
    case 0x7F3AC514u: goto label_7F3AC514;
    case 0x7F3AC518u: goto label_7F3AC518;
    case 0x7F3AC51Cu: goto label_7F3AC51C;
    case 0x7F3AC520u: goto label_7F3AC520;
    case 0x7F3AC524u: goto label_7F3AC524;
    case 0x7F3AC528u: goto label_7F3AC528;
    case 0x7F3AC52Cu: goto label_7F3AC52C;
    case 0x7F3AC530u: goto label_7F3AC530;
    case 0x7F3AC534u: goto label_7F3AC534;
    case 0x7F3AC538u: goto label_7F3AC538;
    case 0x7F3AC53Cu: goto label_7F3AC53C;
    case 0x7F3AC540u: goto label_7F3AC540;
    case 0x7F3AC544u: goto label_7F3AC544;
    case 0x7F3AC548u: goto label_7F3AC548;
    case 0x7F3AC54Cu: goto label_7F3AC54C;
    case 0x7F3AC550u: goto label_7F3AC550;
    case 0x7F3AC554u: goto label_7F3AC554;
    case 0x7F3AC558u: goto label_7F3AC558;
    case 0x7F3AC55Cu: goto label_7F3AC55C;
    case 0x7F3AC560u: goto label_7F3AC560;
    case 0x7F3AC564u: goto label_7F3AC564;
    case 0x7F3AC568u: goto label_7F3AC568;
    case 0x7F3AC56Cu: goto label_7F3AC56C;
    case 0x7F3AC570u: goto label_7F3AC570;
    case 0x7F3AC574u: goto label_7F3AC574;
    case 0x7F3AC578u: goto label_7F3AC578;
    case 0x7F3AC57Cu: goto label_7F3AC57C;
    case 0x7F3AC580u: goto label_7F3AC580;
    case 0x7F3AC584u: goto label_7F3AC584;
    case 0x7F3AC588u: goto label_7F3AC588;
    case 0x7F3AC58Cu: goto label_7F3AC58C;
    case 0x7F3AC590u: goto label_7F3AC590;
    case 0x7F3AC594u: goto label_7F3AC594;
    case 0x7F3AC598u: goto label_7F3AC598;
    case 0x7F3AC59Cu: goto label_7F3AC59C;
    case 0x7F3AC5A0u: goto label_7F3AC5A0;
    case 0x7F3AC5A4u: goto label_7F3AC5A4;
    case 0x7F3AC5A8u: goto label_7F3AC5A8;
    case 0x7F3AC5ACu: goto label_7F3AC5AC;
    case 0x7F3AC5B0u: goto label_7F3AC5B0;
    case 0x7F3AC5B4u: goto label_7F3AC5B4;
    case 0x7F3AC5B8u: goto label_7F3AC5B8;
    case 0x7F3AC5BCu: goto label_7F3AC5BC;
    case 0x7F3AC5C0u: goto label_7F3AC5C0;
    case 0x7F3AC5C4u: goto label_7F3AC5C4;
    case 0x7F3AC5C8u: goto label_7F3AC5C8;
    case 0x7F3AC5CCu: goto label_7F3AC5CC;
    case 0x7F3AC5D0u: goto label_7F3AC5D0;
    case 0x7F3AC5D4u: goto label_7F3AC5D4;
    case 0x7F3AC5D8u: goto label_7F3AC5D8;
    case 0x7F3AC5DCu: goto label_7F3AC5DC;
    case 0x7F3AC5E0u: goto label_7F3AC5E0;
    case 0x7F3AC5E4u: goto label_7F3AC5E4;
    case 0x7F3AC5E8u: goto label_7F3AC5E8;
    case 0x7F3AC5ECu: goto label_7F3AC5EC;
    case 0x7F3AC5F0u: goto label_7F3AC5F0;
    case 0x7F3AC5F4u: goto label_7F3AC5F4;
    case 0x7F3AC5F8u: goto label_7F3AC5F8;
    case 0x7F3AC5FCu: goto label_7F3AC5FC;
    case 0x7F3AC600u: goto label_7F3AC600;
    case 0x7F3AC604u: goto label_7F3AC604;
    case 0x7F3AC608u: goto label_7F3AC608;
    case 0x7F3AC60Cu: goto label_7F3AC60C;
    case 0x7F3AC610u: goto label_7F3AC610;
    case 0x7F3AC614u: goto label_7F3AC614;
    case 0x7F3AC618u: goto label_7F3AC618;
    case 0x7F3AC61Cu: goto label_7F3AC61C;
    case 0x7F3AC620u: goto label_7F3AC620;
    case 0x7F3AC624u: goto label_7F3AC624;
    case 0x7F3AC628u: goto label_7F3AC628;
    case 0x7F3AC62Cu: goto label_7F3AC62C;
    case 0x7F3AC630u: goto label_7F3AC630;
    case 0x7F3AC634u: goto label_7F3AC634;
    case 0x7F3AC638u: goto label_7F3AC638;
    case 0x7F3AC63Cu: goto label_7F3AC63C;
    case 0x7F3AC640u: goto label_7F3AC640;
    case 0x7F3AC644u: goto label_7F3AC644;
    case 0x7F3AC648u: goto label_7F3AC648;
    case 0x7F3AC64Cu: goto label_7F3AC64C;
    case 0x7F3AC650u: goto label_7F3AC650;
    case 0x7F3AC654u: goto label_7F3AC654;
    case 0x7F3AC658u: goto label_7F3AC658;
    case 0x7F3AC65Cu: goto label_7F3AC65C;
    case 0x7F3AC660u: goto label_7F3AC660;
    case 0x7F3AC664u: goto label_7F3AC664;
    case 0x7F3AC668u: goto label_7F3AC668;
    case 0x7F3AC66Cu: goto label_7F3AC66C;
    case 0x7F3AC670u: goto label_7F3AC670;
    case 0x7F3AC674u: goto label_7F3AC674;
    case 0x7F3AC678u: goto label_7F3AC678;
    case 0x7F3AC67Cu: goto label_7F3AC67C;
    case 0x7F3AC680u: goto label_7F3AC680;
    case 0x7F3AC684u: goto label_7F3AC684;
    case 0x7F3AC688u: goto label_7F3AC688;
    case 0x7F3AC68Cu: goto label_7F3AC68C;
    case 0x7F3AC690u: goto label_7F3AC690;
    case 0x7F3AC694u: goto label_7F3AC694;
    case 0x7F3AC698u: goto label_7F3AC698;
    case 0x7F3AC69Cu: goto label_7F3AC69C;
    case 0x7F3AC6A0u: goto label_7F3AC6A0;
    case 0x7F3AC6A4u: goto label_7F3AC6A4;
    case 0x7F3AC6A8u: goto label_7F3AC6A8;
    case 0x7F3AC6ACu: goto label_7F3AC6AC;
    case 0x7F3AC6B0u: goto label_7F3AC6B0;
    case 0x7F3AC6B4u: goto label_7F3AC6B4;
    case 0x7F3AC6B8u: goto label_7F3AC6B8;
    case 0x7F3AC6BCu: goto label_7F3AC6BC;
    case 0x7F3AC6C0u: goto label_7F3AC6C0;
    case 0x7F3AC6C4u: goto label_7F3AC6C4;
    case 0x7F3AC6C8u: goto label_7F3AC6C8;
    case 0x7F3AC6CCu: goto label_7F3AC6CC;
    case 0x7F3AC6D0u: goto label_7F3AC6D0;
    case 0x7F3AC6D4u: goto label_7F3AC6D4;
    case 0x7F3AC6D8u: goto label_7F3AC6D8;
    case 0x7F3AC6DCu: goto label_7F3AC6DC;
    case 0x7F3AC6E0u: goto label_7F3AC6E0;
    case 0x7F3AC6E4u: goto label_7F3AC6E4;
    case 0x7F3AC6E8u: goto label_7F3AC6E8;
    case 0x7F3AC6ECu: goto label_7F3AC6EC;
    case 0x7F3AC6F0u: goto label_7F3AC6F0;
    case 0x7F3AC6F4u: goto label_7F3AC6F4;
    case 0x7F3AC6F8u: goto label_7F3AC6F8;
    case 0x7F3AC6FCu: goto label_7F3AC6FC;
    case 0x7F3AC700u: goto label_7F3AC700;
    case 0x7F3AC704u: goto label_7F3AC704;
    case 0x7F3AC708u: goto label_7F3AC708;
    case 0x7F3AC70Cu: goto label_7F3AC70C;
    case 0x7F3AC710u: goto label_7F3AC710;
    case 0x7F3AC714u: goto label_7F3AC714;
    case 0x7F3AC718u: goto label_7F3AC718;
    case 0x7F3AC71Cu: goto label_7F3AC71C;
    case 0x7F3AC720u: goto label_7F3AC720;
    case 0x7F3AC724u: goto label_7F3AC724;
    case 0x7F3AC728u: goto label_7F3AC728;
    case 0x7F3AC72Cu: goto label_7F3AC72C;
    case 0x7F3AC730u: goto label_7F3AC730;
    case 0x7F3AC734u: goto label_7F3AC734;
    case 0x7F3AC738u: goto label_7F3AC738;
    case 0x7F3AC73Cu: goto label_7F3AC73C;
    case 0x7F3AC740u: goto label_7F3AC740;
    case 0x7F3AC744u: goto label_7F3AC744;
    case 0x7F3AC748u: goto label_7F3AC748;
    case 0x7F3AC74Cu: goto label_7F3AC74C;
    case 0x7F3AC750u: goto label_7F3AC750;
    case 0x7F3AC754u: goto label_7F3AC754;
    case 0x7F3AC758u: goto label_7F3AC758;
    case 0x7F3AC75Cu: goto label_7F3AC75C;
    case 0x7F3AC760u: goto label_7F3AC760;
    case 0x7F3AC764u: goto label_7F3AC764;
    case 0x7F3AC768u: goto label_7F3AC768;
    case 0x7F3AC76Cu: goto label_7F3AC76C;
    case 0x7F3AC770u: goto label_7F3AC770;
    case 0x7F3AC774u: goto label_7F3AC774;
    case 0x7F3AC778u: goto label_7F3AC778;
    case 0x7F3AC77Cu: goto label_7F3AC77C;
    case 0x7F3AC780u: goto label_7F3AC780;
    case 0x7F3AC784u: goto label_7F3AC784;
    case 0x7F3AC788u: goto label_7F3AC788;
    case 0x7F3AC78Cu: goto label_7F3AC78C;
    case 0x7F3AC790u: goto label_7F3AC790;
    case 0x7F3AC794u: goto label_7F3AC794;
    case 0x7F3AC798u: goto label_7F3AC798;
    case 0x7F3AC79Cu: goto label_7F3AC79C;
    case 0x7F3AC7A0u: goto label_7F3AC7A0;
    case 0x7F3AC7A4u: goto label_7F3AC7A4;
    case 0x7F3AC7A8u: goto label_7F3AC7A8;
    case 0x7F3AC7ACu: goto label_7F3AC7AC;
    case 0x7F3AC7B0u: goto label_7F3AC7B0;
    case 0x7F3AC7B4u: goto label_7F3AC7B4;
    case 0x7F3AC7B8u: goto label_7F3AC7B8;
    case 0x7F3AC7BCu: goto label_7F3AC7BC;
    case 0x7F3AC7C0u: goto label_7F3AC7C0;
    case 0x7F3AC7C4u: goto label_7F3AC7C4;
    case 0x7F3AC7C8u: goto label_7F3AC7C8;
    case 0x7F3AC7CCu: goto label_7F3AC7CC;
    case 0x7F3AC7D0u: goto label_7F3AC7D0;
    case 0x7F3AC7D4u: goto label_7F3AC7D4;
    case 0x7F3AC7D8u: goto label_7F3AC7D8;
    case 0x7F3AC7DCu: goto label_7F3AC7DC;
    case 0x7F3AC7E0u: goto label_7F3AC7E0;
    case 0x7F3AC7E4u: goto label_7F3AC7E4;
    case 0x7F3AC7E8u: goto label_7F3AC7E8;
    case 0x7F3AC7ECu: goto label_7F3AC7EC;
    case 0x7F3AC7F0u: goto label_7F3AC7F0;
    case 0x7F3AC7F4u: goto label_7F3AC7F4;
    case 0x7F3AC7F8u: goto label_7F3AC7F8;
    case 0x7F3AC7FCu: goto label_7F3AC7FC;
    case 0x7F3AC800u: goto label_7F3AC800;
    case 0x7F3AC804u: goto label_7F3AC804;
    case 0x7F3AC808u: goto label_7F3AC808;
    case 0x7F3AC80Cu: goto label_7F3AC80C;
    case 0x7F3AC810u: goto label_7F3AC810;
    case 0x7F3AC814u: goto label_7F3AC814;
    case 0x7F3AC818u: goto label_7F3AC818;
    case 0x7F3AC81Cu: goto label_7F3AC81C;
    case 0x7F3AC820u: goto label_7F3AC820;
    case 0x7F3AC824u: goto label_7F3AC824;
    case 0x7F3AC828u: goto label_7F3AC828;
    case 0x7F3AC82Cu: goto label_7F3AC82C;
    case 0x7F3AC830u: goto label_7F3AC830;
    case 0x7F3AC834u: goto label_7F3AC834;
    case 0x7F3AC838u: goto label_7F3AC838;
    case 0x7F3AC83Cu: goto label_7F3AC83C;
    case 0x7F3AC840u: goto label_7F3AC840;
    case 0x7F3AC844u: goto label_7F3AC844;
    case 0x7F3AC848u: goto label_7F3AC848;
    case 0x7F3AC84Cu: goto label_7F3AC84C;
    case 0x7F3AC850u: goto label_7F3AC850;
    case 0x7F3AC854u: goto label_7F3AC854;
    case 0x7F3AC858u: goto label_7F3AC858;
    case 0x7F3AC85Cu: goto label_7F3AC85C;
    case 0x7F3AC860u: goto label_7F3AC860;
    case 0x7F3AC864u: goto label_7F3AC864;
    case 0x7F3AC868u: goto label_7F3AC868;
    case 0x7F3AC86Cu: goto label_7F3AC86C;
    case 0x7F3AC870u: goto label_7F3AC870;
    case 0x7F3AC874u: goto label_7F3AC874;
    case 0x7F3AC878u: goto label_7F3AC878;
    case 0x7F3AC87Cu: goto label_7F3AC87C;
    case 0x7F3AC880u: goto label_7F3AC880;
    case 0x7F3AC884u: goto label_7F3AC884;
    case 0x7F3AC888u: goto label_7F3AC888;
    case 0x7F3AC88Cu: goto label_7F3AC88C;
    case 0x7F3AC890u: goto label_7F3AC890;
    case 0x7F3AC894u: goto label_7F3AC894;
    case 0x7F3AC898u: goto label_7F3AC898;
    case 0x7F3AC89Cu: goto label_7F3AC89C;
    case 0x7F3AC8A0u: goto label_7F3AC8A0;
    case 0x7F3AC8A4u: goto label_7F3AC8A4;
    case 0x7F3AC8A8u: goto label_7F3AC8A8;
    case 0x7F3AC8ACu: goto label_7F3AC8AC;
    case 0x7F3AC8B0u: goto label_7F3AC8B0;
    case 0x7F3AC8B4u: goto label_7F3AC8B4;
    case 0x7F3AC8B8u: goto label_7F3AC8B8;
    case 0x7F3AC8BCu: goto label_7F3AC8BC;
    case 0x7F3AC8C0u: goto label_7F3AC8C0;
    case 0x7F3AC8C4u: goto label_7F3AC8C4;
    case 0x7F3AC8C8u: goto label_7F3AC8C8;
    case 0x7F3AC8CCu: goto label_7F3AC8CC;
    case 0x7F3AC8D0u: goto label_7F3AC8D0;
    case 0x7F3AC8D4u: goto label_7F3AC8D4;
    case 0x7F3AC8D8u: goto label_7F3AC8D8;
    case 0x7F3AC8DCu: goto label_7F3AC8DC;
    case 0x7F3AC8E0u: goto label_7F3AC8E0;
    case 0x7F3AC8E4u: goto label_7F3AC8E4;
    case 0x7F3AC8E8u: goto label_7F3AC8E8;
    case 0x7F3AC8ECu: goto label_7F3AC8EC;
    case 0x7F3AC8F0u: goto label_7F3AC8F0;
    case 0x7F3AC8F4u: goto label_7F3AC8F4;
    case 0x7F3AC8F8u: goto label_7F3AC8F8;
    case 0x7F3AC8FCu: goto label_7F3AC8FC;
    case 0x7F3AC900u: goto label_7F3AC900;
    case 0x7F3AC904u: goto label_7F3AC904;
    case 0x7F3AC908u: goto label_7F3AC908;
    case 0x7F3AC90Cu: goto label_7F3AC90C;
    case 0x7F3AC910u: goto label_7F3AC910;
    case 0x7F3AC914u: goto label_7F3AC914;
    case 0x7F3AC918u: goto label_7F3AC918;
    case 0x7F3AC91Cu: goto label_7F3AC91C;
    case 0x7F3AC920u: goto label_7F3AC920;
    case 0x7F3AC924u: goto label_7F3AC924;
    case 0x7F3AC928u: goto label_7F3AC928;
    case 0x7F3AC92Cu: goto label_7F3AC92C;
    case 0x7F3AC930u: goto label_7F3AC930;
    case 0x7F3AC934u: goto label_7F3AC934;
    case 0x7F3AC938u: goto label_7F3AC938;
    case 0x7F3AC93Cu: goto label_7F3AC93C;
    case 0x7F3AC940u: goto label_7F3AC940;
    case 0x7F3AC944u: goto label_7F3AC944;
    case 0x7F3AC948u: goto label_7F3AC948;
    case 0x7F3AC94Cu: goto label_7F3AC94C;
    case 0x7F3AC950u: goto label_7F3AC950;
    case 0x7F3AC954u: goto label_7F3AC954;
    case 0x7F3AC958u: goto label_7F3AC958;
    case 0x7F3AC95Cu: goto label_7F3AC95C;
    case 0x7F3AC960u: goto label_7F3AC960;
    case 0x7F3AC964u: goto label_7F3AC964;
    case 0x7F3AC968u: goto label_7F3AC968;
    case 0x7F3AC96Cu: goto label_7F3AC96C;
    case 0x7F3AC970u: goto label_7F3AC970;
    case 0x7F3AC974u: goto label_7F3AC974;
    case 0x7F3AC978u: goto label_7F3AC978;
    case 0x7F3AC97Cu: goto label_7F3AC97C;
    case 0x7F3AC980u: goto label_7F3AC980;
    case 0x7F3AC984u: goto label_7F3AC984;
    case 0x7F3AC988u: goto label_7F3AC988;
    case 0x7F3AC98Cu: goto label_7F3AC98C;
    case 0x7F3AC990u: goto label_7F3AC990;
    case 0x7F3AC994u: goto label_7F3AC994;
    case 0x7F3AC998u: goto label_7F3AC998;
    case 0x7F3AC99Cu: goto label_7F3AC99C;
    case 0x7F3AC9A0u: goto label_7F3AC9A0;
    case 0x7F3AC9A4u: goto label_7F3AC9A4;
    case 0x7F3AC9A8u: goto label_7F3AC9A8;
    case 0x7F3AC9ACu: goto label_7F3AC9AC;
    case 0x7F3AC9B0u: goto label_7F3AC9B0;
    case 0x7F3AC9B4u: goto label_7F3AC9B4;
    case 0x7F3AC9B8u: goto label_7F3AC9B8;
    case 0x7F3AC9BCu: goto label_7F3AC9BC;
    case 0x7F3AC9C0u: goto label_7F3AC9C0;
    case 0x7F3AC9C4u: goto label_7F3AC9C4;
    case 0x7F3AC9C8u: goto label_7F3AC9C8;
    case 0x7F3AC9CCu: goto label_7F3AC9CC;
    case 0x7F3AC9D0u: goto label_7F3AC9D0;
    case 0x7F3AC9D4u: goto label_7F3AC9D4;
    case 0x7F3AC9D8u: goto label_7F3AC9D8;
    case 0x7F3AC9DCu: goto label_7F3AC9DC;
    case 0x7F3AC9E0u: goto label_7F3AC9E0;
    case 0x7F3AC9E4u: goto label_7F3AC9E4;
    case 0x7F3AC9E8u: goto label_7F3AC9E8;
    case 0x7F3AC9ECu: goto label_7F3AC9EC;
    case 0x7F3AC9F0u: goto label_7F3AC9F0;
    case 0x7F3AC9F4u: goto label_7F3AC9F4;
    case 0x7F3AC9F8u: goto label_7F3AC9F8;
    case 0x7F3AC9FCu: goto label_7F3AC9FC;
    case 0x7F3ACA00u: goto label_7F3ACA00;
    case 0x7F3ACA04u: goto label_7F3ACA04;
    case 0x7F3ACA08u: goto label_7F3ACA08;
    case 0x7F3ACA0Cu: goto label_7F3ACA0C;
    case 0x7F3ACA10u: goto label_7F3ACA10;
    case 0x7F3ACA14u: goto label_7F3ACA14;
    case 0x7F3ACA18u: goto label_7F3ACA18;
    case 0x7F3ACA1Cu: goto label_7F3ACA1C;
    case 0x7F3ACA20u: goto label_7F3ACA20;
    case 0x7F3ACA24u: goto label_7F3ACA24;
    case 0x7F3ACA28u: goto label_7F3ACA28;
    case 0x7F3ACA2Cu: goto label_7F3ACA2C;
    case 0x7F3ACA30u: goto label_7F3ACA30;
    case 0x7F3ACA34u: goto label_7F3ACA34;
    case 0x7F3ACA38u: goto label_7F3ACA38;
    case 0x7F3ACA3Cu: goto label_7F3ACA3C;
    case 0x7F3ACA40u: goto label_7F3ACA40;
    case 0x7F3ACA44u: goto label_7F3ACA44;
    case 0x7F3ACA48u: goto label_7F3ACA48;
    case 0x7F3ACA4Cu: goto label_7F3ACA4C;
    case 0x7F3ACA50u: goto label_7F3ACA50;
    case 0x7F3ACA54u: goto label_7F3ACA54;
    case 0x7F3ACA58u: goto label_7F3ACA58;
    case 0x7F3ACA5Cu: goto label_7F3ACA5C;
    case 0x7F3ACA60u: goto label_7F3ACA60;
    case 0x7F3ACA64u: goto label_7F3ACA64;
    case 0x7F3ACA68u: goto label_7F3ACA68;
    case 0x7F3ACA6Cu: goto label_7F3ACA6C;
    case 0x7F3ACA70u: goto label_7F3ACA70;
    case 0x7F3ACA74u: goto label_7F3ACA74;
    case 0x7F3ACA78u: goto label_7F3ACA78;
    case 0x7F3ACA7Cu: goto label_7F3ACA7C;
    case 0x7F3ACA80u: goto label_7F3ACA80;
    case 0x7F3ACA84u: goto label_7F3ACA84;
    case 0x7F3ACA88u: goto label_7F3ACA88;
    case 0x7F3ACA8Cu: goto label_7F3ACA8C;
    case 0x7F3ACA90u: goto label_7F3ACA90;
    case 0x7F3ACA94u: goto label_7F3ACA94;
    case 0x7F3ACA98u: goto label_7F3ACA98;
    case 0x7F3ACA9Cu: goto label_7F3ACA9C;
    case 0x7F3ACAA0u: goto label_7F3ACAA0;
    case 0x7F3ACAA4u: goto label_7F3ACAA4;
    case 0x7F3ACAA8u: goto label_7F3ACAA8;
    case 0x7F3ACAACu: goto label_7F3ACAAC;
    case 0x7F3ACAB0u: goto label_7F3ACAB0;
    case 0x7F3ACAB4u: goto label_7F3ACAB4;
    case 0x7F3ACAB8u: goto label_7F3ACAB8;
    case 0x7F3ACABCu: goto label_7F3ACABC;
    case 0x7F3ACAC0u: goto label_7F3ACAC0;
    case 0x7F3ACAC4u: goto label_7F3ACAC4;
    case 0x7F3ACAC8u: goto label_7F3ACAC8;
    case 0x7F3ACACCu: goto label_7F3ACACC;
    case 0x7F3ACAD0u: goto label_7F3ACAD0;
    case 0x7F3ACAD4u: goto label_7F3ACAD4;
    case 0x7F3ACAD8u: goto label_7F3ACAD8;
    case 0x7F3ACADCu: goto label_7F3ACADC;
    case 0x7F3ACAE0u: goto label_7F3ACAE0;
    case 0x7F3ACAE4u: goto label_7F3ACAE4;
    case 0x7F3ACAE8u: goto label_7F3ACAE8;
    case 0x7F3ACAECu: goto label_7F3ACAEC;
    case 0x7F3ACAF0u: goto label_7F3ACAF0;
    case 0x7F3ACAF4u: goto label_7F3ACAF4;
    case 0x7F3ACAF8u: goto label_7F3ACAF8;
    case 0x7F3ACAFCu: goto label_7F3ACAFC;
    case 0x7F3ACB00u: goto label_7F3ACB00;
    case 0x7F3ACB04u: goto label_7F3ACB04;
    case 0x7F3ACB08u: goto label_7F3ACB08;
    case 0x7F3ACB0Cu: goto label_7F3ACB0C;
    case 0x7F3ACB10u: goto label_7F3ACB10;
    case 0x7F3ACB14u: goto label_7F3ACB14;
    case 0x7F3ACB18u: goto label_7F3ACB18;
    case 0x7F3ACB1Cu: goto label_7F3ACB1C;
    case 0x7F3ACB20u: goto label_7F3ACB20;
    case 0x7F3ACB24u: goto label_7F3ACB24;
    case 0x7F3ACB28u: goto label_7F3ACB28;
    case 0x7F3ACB2Cu: goto label_7F3ACB2C;
    case 0x7F3ACB30u: goto label_7F3ACB30;
    case 0x7F3ACB34u: goto label_7F3ACB34;
    case 0x7F3ACB38u: goto label_7F3ACB38;
    case 0x7F3ACB3Cu: goto label_7F3ACB3C;
    case 0x7F3ACB40u: goto label_7F3ACB40;
    case 0x7F3ACB44u: goto label_7F3ACB44;
    case 0x7F3ACB48u: goto label_7F3ACB48;
    case 0x7F3ACB4Cu: goto label_7F3ACB4C;
    case 0x7F3ACB50u: goto label_7F3ACB50;
    case 0x7F3ACB54u: goto label_7F3ACB54;
    case 0x7F3ACB58u: goto label_7F3ACB58;
    case 0x7F3ACB5Cu: goto label_7F3ACB5C;
    case 0x7F3ACB60u: goto label_7F3ACB60;
    case 0x7F3ACB64u: goto label_7F3ACB64;
    case 0x7F3ACB68u: goto label_7F3ACB68;
    case 0x7F3ACB6Cu: goto label_7F3ACB6C;
    case 0x7F3ACB70u: goto label_7F3ACB70;
    case 0x7F3ACB74u: goto label_7F3ACB74;
    case 0x7F3ACB78u: goto label_7F3ACB78;
    case 0x7F3ACB7Cu: goto label_7F3ACB7C;
    case 0x7F3ACB80u: goto label_7F3ACB80;
    case 0x7F3ACB84u: goto label_7F3ACB84;
    case 0x7F3ACB88u: goto label_7F3ACB88;
    case 0x7F3ACB8Cu: goto label_7F3ACB8C;
    case 0x7F3ACB90u: goto label_7F3ACB90;
    case 0x7F3ACB94u: goto label_7F3ACB94;
    case 0x7F3ACB98u: goto label_7F3ACB98;
    case 0x7F3ACB9Cu: goto label_7F3ACB9C;
    case 0x7F3ACBA0u: goto label_7F3ACBA0;
    case 0x7F3ACBA4u: goto label_7F3ACBA4;
    case 0x7F3ACBA8u: goto label_7F3ACBA8;
    case 0x7F3ACBACu: goto label_7F3ACBAC;
    case 0x7F3ACBB0u: goto label_7F3ACBB0;
    case 0x7F3ACBB4u: goto label_7F3ACBB4;
    case 0x7F3ACBB8u: goto label_7F3ACBB8;
    case 0x7F3ACBBCu: goto label_7F3ACBBC;
    case 0x7F3ACBC0u: goto label_7F3ACBC0;
    case 0x7F3ACBC4u: goto label_7F3ACBC4;
    case 0x7F3ACBC8u: goto label_7F3ACBC8;
    case 0x7F3ACBCCu: goto label_7F3ACBCC;
    case 0x7F3ACBD0u: goto label_7F3ACBD0;
    case 0x7F3ACBD4u: goto label_7F3ACBD4;
    case 0x7F3ACBD8u: goto label_7F3ACBD8;
    case 0x7F3ACBDCu: goto label_7F3ACBDC;
    case 0x7F3ACBE0u: goto label_7F3ACBE0;
    case 0x7F3ACBE4u: goto label_7F3ACBE4;
    case 0x7F3ACBE8u: goto label_7F3ACBE8;
    case 0x7F3ACBECu: goto label_7F3ACBEC;
    case 0x7F3ACBF0u: goto label_7F3ACBF0;
    case 0x7F3ACBF4u: goto label_7F3ACBF4;
    case 0x7F3ACBF8u: goto label_7F3ACBF8;
    case 0x7F3ACBFCu: goto label_7F3ACBFC;
    case 0x7F3ACC00u: goto label_7F3ACC00;
    case 0x7F3ACC04u: goto label_7F3ACC04;
    case 0x7F3ACC08u: goto label_7F3ACC08;
    case 0x7F3ACC0Cu: goto label_7F3ACC0C;
    case 0x7F3ACC10u: goto label_7F3ACC10;
    case 0x7F3ACC14u: goto label_7F3ACC14;
    case 0x7F3ACC18u: goto label_7F3ACC18;
    case 0x7F3ACC1Cu: goto label_7F3ACC1C;
    case 0x7F3ACC20u: goto label_7F3ACC20;
    case 0x7F3ACC24u: goto label_7F3ACC24;
    case 0x7F3ACC28u: goto label_7F3ACC28;
    case 0x7F3ACC2Cu: goto label_7F3ACC2C;
    case 0x7F3ACC30u: goto label_7F3ACC30;
    case 0x7F3ACC34u: goto label_7F3ACC34;
    case 0x7F3ACC38u: goto label_7F3ACC38;
    case 0x7F3ACC3Cu: goto label_7F3ACC3C;
    case 0x7F3ACC40u: goto label_7F3ACC40;
    case 0x7F3ACC44u: goto label_7F3ACC44;
    case 0x7F3ACC48u: goto label_7F3ACC48;
    case 0x7F3ACC4Cu: goto label_7F3ACC4C;
    case 0x7F3ACC50u: goto label_7F3ACC50;
    case 0x7F3ACC54u: goto label_7F3ACC54;
    case 0x7F3ACC58u: goto label_7F3ACC58;
    case 0x7F3ACC5Cu: goto label_7F3ACC5C;
    case 0x7F3ACC60u: goto label_7F3ACC60;
    case 0x7F3ACC64u: goto label_7F3ACC64;
    case 0x7F3ACC68u: goto label_7F3ACC68;
    case 0x7F3ACC6Cu: goto label_7F3ACC6C;
    case 0x7F3ACC70u: goto label_7F3ACC70;
    case 0x7F3ACC74u: goto label_7F3ACC74;
    case 0x7F3ACC78u: goto label_7F3ACC78;
    case 0x7F3ACC7Cu: goto label_7F3ACC7C;
    case 0x7F3ACC80u: goto label_7F3ACC80;
    case 0x7F3ACC84u: goto label_7F3ACC84;
    case 0x7F3ACC88u: goto label_7F3ACC88;
    case 0x7F3ACC8Cu: goto label_7F3ACC8C;
    case 0x7F3ACC90u: goto label_7F3ACC90;
    case 0x7F3ACC94u: goto label_7F3ACC94;
    case 0x7F3ACC98u: goto label_7F3ACC98;
    case 0x7F3ACC9Cu: goto label_7F3ACC9C;
    case 0x7F3ACCA0u: goto label_7F3ACCA0;
    case 0x7F3ACCA4u: goto label_7F3ACCA4;
    case 0x7F3ACCA8u: goto label_7F3ACCA8;
    case 0x7F3ACCACu: goto label_7F3ACCAC;
    case 0x7F3ACCB0u: goto label_7F3ACCB0;
    case 0x7F3ACCB4u: goto label_7F3ACCB4;
    case 0x7F3ACCB8u: goto label_7F3ACCB8;
    case 0x7F3ACCBCu: goto label_7F3ACCBC;
    case 0x7F3ACCC0u: goto label_7F3ACCC0;
    case 0x7F3ACCC4u: goto label_7F3ACCC4;
    case 0x7F3ACCC8u: goto label_7F3ACCC8;
    case 0x7F3ACCCCu: goto label_7F3ACCCC;
    case 0x7F3ACCD0u: goto label_7F3ACCD0;
    case 0x7F3ACCD4u: goto label_7F3ACCD4;
    case 0x7F3ACCD8u: goto label_7F3ACCD8;
    case 0x7F3ACCDCu: goto label_7F3ACCDC;
    case 0x7F3ACCE0u: goto label_7F3ACCE0;
    case 0x7F3ACCE4u: goto label_7F3ACCE4;
    case 0x7F3ACCE8u: goto label_7F3ACCE8;
    case 0x7F3ACCECu: goto label_7F3ACCEC;
    case 0x7F3ACCF0u: goto label_7F3ACCF0;
    case 0x7F3ACCF4u: goto label_7F3ACCF4;
    case 0x7F3ACCF8u: goto label_7F3ACCF8;
    case 0x7F3ACCFCu: goto label_7F3ACCFC;
    case 0x7F3ACD00u: goto label_7F3ACD00;
    case 0x7F3ACD04u: goto label_7F3ACD04;
    case 0x7F3ACD08u: goto label_7F3ACD08;
    case 0x7F3ACD0Cu: goto label_7F3ACD0C;
    case 0x7F3ACD10u: goto label_7F3ACD10;
    case 0x7F3ACD14u: goto label_7F3ACD14;
    case 0x7F3ACD18u: goto label_7F3ACD18;
    case 0x7F3ACD1Cu: goto label_7F3ACD1C;
    case 0x7F3ACD20u: goto label_7F3ACD20;
    case 0x7F3ACD24u: goto label_7F3ACD24;
    case 0x7F3ACD28u: goto label_7F3ACD28;
    case 0x7F3ACD2Cu: goto label_7F3ACD2C;
    case 0x7F3ACD30u: goto label_7F3ACD30;
    case 0x7F3ACD34u: goto label_7F3ACD34;
    case 0x7F3ACD38u: goto label_7F3ACD38;
    case 0x7F3ACD3Cu: goto label_7F3ACD3C;
    case 0x7F3ACD40u: goto label_7F3ACD40;
    case 0x7F3ACD44u: goto label_7F3ACD44;
    case 0x7F3ACD48u: goto label_7F3ACD48;
    case 0x7F3ACD4Cu: goto label_7F3ACD4C;
    case 0x7F3ACD50u: goto label_7F3ACD50;
    case 0x7F3ACD54u: goto label_7F3ACD54;
    case 0x7F3ACD58u: goto label_7F3ACD58;
    case 0x7F3ACD5Cu: goto label_7F3ACD5C;
    case 0x7F3ACD60u: goto label_7F3ACD60;
    case 0x7F3ACD64u: goto label_7F3ACD64;
    case 0x7F3ACD68u: goto label_7F3ACD68;
    case 0x7F3ACD6Cu: goto label_7F3ACD6C;
    case 0x7F3ACD70u: goto label_7F3ACD70;
    case 0x7F3ACD74u: goto label_7F3ACD74;
    case 0x7F3ACD78u: goto label_7F3ACD78;
    case 0x7F3ACD7Cu: goto label_7F3ACD7C;
    case 0x7F3ACD80u: goto label_7F3ACD80;
    case 0x7F3ACD84u: goto label_7F3ACD84;
    case 0x7F3ACD88u: goto label_7F3ACD88;
    case 0x7F3ACD8Cu: goto label_7F3ACD8C;
    case 0x7F3ACD90u: goto label_7F3ACD90;
    case 0x7F3ACD94u: goto label_7F3ACD94;
    case 0x7F3ACD98u: goto label_7F3ACD98;
    case 0x7F3ACD9Cu: goto label_7F3ACD9C;
    case 0x7F3ACDA0u: goto label_7F3ACDA0;
    case 0x7F3ACDA4u: goto label_7F3ACDA4;
    case 0x7F3ACDA8u: goto label_7F3ACDA8;
    case 0x7F3ACDACu: goto label_7F3ACDAC;
    case 0x7F3ACDB0u: goto label_7F3ACDB0;
    case 0x7F3ACDB4u: goto label_7F3ACDB4;
    case 0x7F3ACDB8u: goto label_7F3ACDB8;
    case 0x7F3ACDBCu: goto label_7F3ACDBC;
    case 0x7F3ACDC0u: goto label_7F3ACDC0;
    case 0x7F3ACDC4u: goto label_7F3ACDC4;
    case 0x7F3ACDC8u: goto label_7F3ACDC8;
    case 0x7F3ACDCCu: goto label_7F3ACDCC;
    case 0x7F3ACDD0u: goto label_7F3ACDD0;
    case 0x7F3ACDD4u: goto label_7F3ACDD4;
    case 0x7F3ACDD8u: goto label_7F3ACDD8;
    case 0x7F3ACDDCu: goto label_7F3ACDDC;
    case 0x7F3ACDE0u: goto label_7F3ACDE0;
    case 0x7F3ACDE4u: goto label_7F3ACDE4;
    case 0x7F3ACDE8u: goto label_7F3ACDE8;
    case 0x7F3ACDECu: goto label_7F3ACDEC;
    case 0x7F3ACDF0u: goto label_7F3ACDF0;
    case 0x7F3ACDF4u: goto label_7F3ACDF4;
    case 0x7F3ACDF8u: goto label_7F3ACDF8;
    case 0x7F3ACDFCu: goto label_7F3ACDFC;
    case 0x7F3ACE00u: goto label_7F3ACE00;
    case 0x7F3ACE04u: goto label_7F3ACE04;
    case 0x7F3ACE08u: goto label_7F3ACE08;
    case 0x7F3ACE0Cu: goto label_7F3ACE0C;
    case 0x7F3ACE10u: goto label_7F3ACE10;
    case 0x7F3ACE14u: goto label_7F3ACE14;
    case 0x7F3ACE18u: goto label_7F3ACE18;
    case 0x7F3ACE1Cu: goto label_7F3ACE1C;
    case 0x7F3ACE20u: goto label_7F3ACE20;
    case 0x7F3ACE24u: goto label_7F3ACE24;
    case 0x7F3ACE28u: goto label_7F3ACE28;
    case 0x7F3ACE2Cu: goto label_7F3ACE2C;
    case 0x7F3ACE30u: goto label_7F3ACE30;
    case 0x7F3ACE34u: goto label_7F3ACE34;
    case 0x7F3ACE38u: goto label_7F3ACE38;
    case 0x7F3ACE3Cu: goto label_7F3ACE3C;
    case 0x7F3ACE40u: goto label_7F3ACE40;
    case 0x7F3ACE44u: goto label_7F3ACE44;
    case 0x7F3ACE48u: goto label_7F3ACE48;
    case 0x7F3ACE4Cu: goto label_7F3ACE4C;
    case 0x7F3ACE50u: goto label_7F3ACE50;
    case 0x7F3ACE54u: goto label_7F3ACE54;
    case 0x7F3ACE58u: goto label_7F3ACE58;
    case 0x7F3ACE5Cu: goto label_7F3ACE5C;
    case 0x7F3ACE60u: goto label_7F3ACE60;
    case 0x7F3ACE64u: goto label_7F3ACE64;
    case 0x7F3ACE68u: goto label_7F3ACE68;
    case 0x7F3ACE6Cu: goto label_7F3ACE6C;
    case 0x7F3ACE70u: goto label_7F3ACE70;
    case 0x7F3ACE74u: goto label_7F3ACE74;
    case 0x7F3ACE78u: goto label_7F3ACE78;
    case 0x7F3ACE7Cu: goto label_7F3ACE7C;
    case 0x7F3ACE80u: goto label_7F3ACE80;
    case 0x7F3ACE84u: goto label_7F3ACE84;
    case 0x7F3ACE88u: goto label_7F3ACE88;
    case 0x7F3ACE8Cu: goto label_7F3ACE8C;
    case 0x7F3ACE90u: goto label_7F3ACE90;
    case 0x7F3ACE94u: goto label_7F3ACE94;
    case 0x7F3ACE98u: goto label_7F3ACE98;
    case 0x7F3ACE9Cu: goto label_7F3ACE9C;
    case 0x7F3ACEA0u: goto label_7F3ACEA0;
    case 0x7F3ACEA4u: goto label_7F3ACEA4;
    case 0x7F3ACEA8u: goto label_7F3ACEA8;
    case 0x7F3ACEACu: goto label_7F3ACEAC;
    case 0x7F3ACEB0u: goto label_7F3ACEB0;
    case 0x7F3ACEB4u: goto label_7F3ACEB4;
    case 0x7F3ACEB8u: goto label_7F3ACEB8;
    case 0x7F3ACEBCu: goto label_7F3ACEBC;
    case 0x7F3ACEC0u: goto label_7F3ACEC0;
    case 0x7F3ACEC4u: goto label_7F3ACEC4;
    case 0x7F3ACEC8u: goto label_7F3ACEC8;
    case 0x7F3ACECCu: goto label_7F3ACECC;
    case 0x7F3ACED0u: goto label_7F3ACED0;
    case 0x7F3ACED4u: goto label_7F3ACED4;
    case 0x7F3ACED8u: goto label_7F3ACED8;
    case 0x7F3ACEDCu: goto label_7F3ACEDC;
    case 0x7F3ACEE0u: goto label_7F3ACEE0;
    case 0x7F3ACEE4u: goto label_7F3ACEE4;
    case 0x7F3ACEE8u: goto label_7F3ACEE8;
    case 0x7F3ACEECu: goto label_7F3ACEEC;
    case 0x7F3ACEF0u: goto label_7F3ACEF0;
    case 0x7F3ACEF4u: goto label_7F3ACEF4;
    case 0x7F3ACEF8u: goto label_7F3ACEF8;
    case 0x7F3ACEFCu: goto label_7F3ACEFC;
    case 0x7F3ACF00u: goto label_7F3ACF00;
    case 0x7F3ACF04u: goto label_7F3ACF04;
    case 0x7F3ACF08u: goto label_7F3ACF08;
    case 0x7F3ACF0Cu: goto label_7F3ACF0C;
    case 0x7F3ACF10u: goto label_7F3ACF10;
    case 0x7F3ACF14u: goto label_7F3ACF14;
    case 0x7F3ACF18u: goto label_7F3ACF18;
    case 0x7F3ACF1Cu: goto label_7F3ACF1C;
    case 0x7F3ACF20u: goto label_7F3ACF20;
    case 0x7F3ACF24u: goto label_7F3ACF24;
    case 0x7F3ACF28u: goto label_7F3ACF28;
    case 0x7F3ACF2Cu: goto label_7F3ACF2C;
    case 0x7F3ACF30u: goto label_7F3ACF30;
    case 0x7F3ACF34u: goto label_7F3ACF34;
    case 0x7F3ACF38u: goto label_7F3ACF38;
    case 0x7F3ACF3Cu: goto label_7F3ACF3C;
    case 0x7F3ACF40u: goto label_7F3ACF40;
    case 0x7F3ACF44u: goto label_7F3ACF44;
    case 0x7F3ACF48u: goto label_7F3ACF48;
    case 0x7F3ACF4Cu: goto label_7F3ACF4C;
    case 0x7F3ACF50u: goto label_7F3ACF50;
    case 0x7F3ACF54u: goto label_7F3ACF54;
    case 0x7F3ACF58u: goto label_7F3ACF58;
    case 0x7F3ACF5Cu: goto label_7F3ACF5C;
    case 0x7F3ACF60u: goto label_7F3ACF60;
    case 0x7F3ACF64u: goto label_7F3ACF64;
    case 0x7F3ACF68u: goto label_7F3ACF68;
    case 0x7F3ACF6Cu: goto label_7F3ACF6C;
    case 0x7F3ACF70u: goto label_7F3ACF70;
    case 0x7F3ACF74u: goto label_7F3ACF74;
    case 0x7F3ACF78u: goto label_7F3ACF78;
    case 0x7F3ACF7Cu: goto label_7F3ACF7C;
    case 0x7F3ACF80u: goto label_7F3ACF80;
    case 0x7F3ACF84u: goto label_7F3ACF84;
    case 0x7F3ACF88u: goto label_7F3ACF88;
    case 0x7F3ACF8Cu: goto label_7F3ACF8C;
    case 0x7F3ACF90u: goto label_7F3ACF90;
    case 0x7F3ACF94u: goto label_7F3ACF94;
    case 0x7F3ACF98u: goto label_7F3ACF98;
    case 0x7F3ACF9Cu: goto label_7F3ACF9C;
    case 0x7F3ACFA0u: goto label_7F3ACFA0;
    case 0x7F3ACFA4u: goto label_7F3ACFA4;
    case 0x7F3ACFA8u: goto label_7F3ACFA8;
    case 0x7F3ACFACu: goto label_7F3ACFAC;
    case 0x7F3ACFB0u: goto label_7F3ACFB0;
    case 0x7F3ACFB4u: goto label_7F3ACFB4;
    case 0x7F3ACFB8u: goto label_7F3ACFB8;
    case 0x7F3ACFBCu: goto label_7F3ACFBC;
    case 0x7F3ACFC0u: goto label_7F3ACFC0;
    case 0x7F3ACFC4u: goto label_7F3ACFC4;
    case 0x7F3ACFC8u: goto label_7F3ACFC8;
    case 0x7F3ACFCCu: goto label_7F3ACFCC;
    case 0x7F3ACFD0u: goto label_7F3ACFD0;
    case 0x7F3ACFD4u: goto label_7F3ACFD4;
    case 0x7F3ACFD8u: goto label_7F3ACFD8;
    case 0x7F3ACFDCu: goto label_7F3ACFDC;
    case 0x7F3ACFE0u: goto label_7F3ACFE0;
    case 0x7F3ACFE4u: goto label_7F3ACFE4;
    case 0x7F3ACFE8u: goto label_7F3ACFE8;
    case 0x7F3ACFECu: goto label_7F3ACFEC;
    case 0x7F3ACFF0u: goto label_7F3ACFF0;
    case 0x7F3ACFF4u: goto label_7F3ACFF4;
    case 0x7F3ACFF8u: goto label_7F3ACFF8;
    case 0x7F3ACFFCu: goto label_7F3ACFFC;
    case 0x7F3AD000u: goto label_7F3AD000;
    case 0x7F3AD004u: goto label_7F3AD004;
    case 0x7F3AD008u: goto label_7F3AD008;
    case 0x7F3AD00Cu: goto label_7F3AD00C;
    case 0x7F3AD010u: goto label_7F3AD010;
    case 0x7F3AD014u: goto label_7F3AD014;
    case 0x7F3AD018u: goto label_7F3AD018;
    case 0x7F3AD01Cu: goto label_7F3AD01C;
    case 0x7F3AD020u: goto label_7F3AD020;
    case 0x7F3AD024u: goto label_7F3AD024;
    case 0x7F3AD028u: goto label_7F3AD028;
    case 0x7F3AD02Cu: goto label_7F3AD02C;
    case 0x7F3AD030u: goto label_7F3AD030;
    case 0x7F3AD034u: goto label_7F3AD034;
    case 0x7F3AD038u: goto label_7F3AD038;
    case 0x7F3AD03Cu: goto label_7F3AD03C;
    case 0x7F3AD040u: goto label_7F3AD040;
    case 0x7F3AD044u: goto label_7F3AD044;
    case 0x7F3AD048u: goto label_7F3AD048;
    case 0x7F3AD04Cu: goto label_7F3AD04C;
    case 0x7F3AD050u: goto label_7F3AD050;
    case 0x7F3AD054u: goto label_7F3AD054;
    case 0x7F3AD058u: goto label_7F3AD058;
    case 0x7F3AD05Cu: goto label_7F3AD05C;
    case 0x7F3AD060u: goto label_7F3AD060;
    case 0x7F3AD064u: goto label_7F3AD064;
    case 0x7F3AD068u: goto label_7F3AD068;
    case 0x7F3AD06Cu: goto label_7F3AD06C;
    case 0x7F3AD070u: goto label_7F3AD070;
    case 0x7F3AD074u: goto label_7F3AD074;
    case 0x7F3AD078u: goto label_7F3AD078;
    case 0x7F3AD07Cu: goto label_7F3AD07C;
    case 0x7F3AD080u: goto label_7F3AD080;
    case 0x7F3AD084u: goto label_7F3AD084;
    case 0x7F3AD088u: goto label_7F3AD088;
    case 0x7F3AD08Cu: goto label_7F3AD08C;
    case 0x7F3AD090u: goto label_7F3AD090;
    case 0x7F3AD094u: goto label_7F3AD094;
    case 0x7F3AD098u: goto label_7F3AD098;
    case 0x7F3AD09Cu: goto label_7F3AD09C;
    case 0x7F3AD0A0u: goto label_7F3AD0A0;
    case 0x7F3AD0A4u: goto label_7F3AD0A4;
    case 0x7F3AD0A8u: goto label_7F3AD0A8;
    case 0x7F3AD0ACu: goto label_7F3AD0AC;
    case 0x7F3AD0B0u: goto label_7F3AD0B0;
    case 0x7F3AD0B4u: goto label_7F3AD0B4;
    case 0x7F3AD0B8u: goto label_7F3AD0B8;
    case 0x7F3AD0BCu: goto label_7F3AD0BC;
    case 0x7F3AD0C0u: goto label_7F3AD0C0;
    case 0x7F3AD0C4u: goto label_7F3AD0C4;
    case 0x7F3AD0C8u: goto label_7F3AD0C8;
    case 0x7F3AD0CCu: goto label_7F3AD0CC;
    case 0x7F3AD0D0u: goto label_7F3AD0D0;
    case 0x7F3AD0D4u: goto label_7F3AD0D4;
    case 0x7F3AD0D8u: goto label_7F3AD0D8;
    case 0x7F3AD0DCu: goto label_7F3AD0DC;
    case 0x7F3AD0E0u: goto label_7F3AD0E0;
    case 0x7F3AD0E4u: goto label_7F3AD0E4;
    case 0x7F3AD0E8u: goto label_7F3AD0E8;
    case 0x7F3AD0ECu: goto label_7F3AD0EC;
    case 0x7F3AD0F0u: goto label_7F3AD0F0;
    case 0x7F3AD0F4u: goto label_7F3AD0F4;
    case 0x7F3AD0F8u: goto label_7F3AD0F8;
    case 0x7F3AD0FCu: goto label_7F3AD0FC;
    case 0x7F3AD100u: goto label_7F3AD100;
    case 0x7F3AD104u: goto label_7F3AD104;
    case 0x7F3AD108u: goto label_7F3AD108;
    case 0x7F3AD10Cu: goto label_7F3AD10C;
    case 0x7F3AD110u: goto label_7F3AD110;
    case 0x7F3AD114u: goto label_7F3AD114;
    case 0x7F3AD118u: goto label_7F3AD118;
    case 0x7F3AD11Cu: goto label_7F3AD11C;
    case 0x7F3AD120u: goto label_7F3AD120;
    case 0x7F3AD124u: goto label_7F3AD124;
    case 0x7F3AD128u: goto label_7F3AD128;
    case 0x7F3AD12Cu: goto label_7F3AD12C;
    case 0x7F3AD130u: goto label_7F3AD130;
    case 0x7F3AD134u: goto label_7F3AD134;
    case 0x7F3AD138u: goto label_7F3AD138;
    case 0x7F3AD13Cu: goto label_7F3AD13C;
    case 0x7F3AD140u: goto label_7F3AD140;
    case 0x7F3AD144u: goto label_7F3AD144;
    case 0x7F3AD148u: goto label_7F3AD148;
    case 0x7F3AD14Cu: goto label_7F3AD14C;
    case 0x7F3AD150u: goto label_7F3AD150;
    case 0x7F3AD154u: goto label_7F3AD154;
    case 0x7F3AD158u: goto label_7F3AD158;
    case 0x7F3AD15Cu: goto label_7F3AD15C;
    case 0x7F3AD160u: goto label_7F3AD160;
    case 0x7F3AD164u: goto label_7F3AD164;
    case 0x7F3AD168u: goto label_7F3AD168;
    case 0x7F3AD16Cu: goto label_7F3AD16C;
    case 0x7F3AD170u: goto label_7F3AD170;
    case 0x7F3AD174u: goto label_7F3AD174;
    case 0x7F3AD178u: goto label_7F3AD178;
    case 0x7F3AD17Cu: goto label_7F3AD17C;
    case 0x7F3AD180u: goto label_7F3AD180;
    case 0x7F3AD184u: goto label_7F3AD184;
    case 0x7F3AD188u: goto label_7F3AD188;
    case 0x7F3AD18Cu: goto label_7F3AD18C;
    case 0x7F3AD190u: goto label_7F3AD190;
    case 0x7F3AD194u: goto label_7F3AD194;
    case 0x7F3AD198u: goto label_7F3AD198;
    case 0x7F3AD19Cu: goto label_7F3AD19C;
    case 0x7F3AD1A0u: goto label_7F3AD1A0;
    case 0x7F3AD1A4u: goto label_7F3AD1A4;
    case 0x7F3AD1A8u: goto label_7F3AD1A8;
    case 0x7F3AD1ACu: goto label_7F3AD1AC;
    case 0x7F3AD1B0u: goto label_7F3AD1B0;
    case 0x7F3AD1B4u: goto label_7F3AD1B4;
    case 0x7F3AD1B8u: goto label_7F3AD1B8;
    case 0x7F3AD1BCu: goto label_7F3AD1BC;
    case 0x7F3AD1C0u: goto label_7F3AD1C0;
    case 0x7F3AD1C4u: goto label_7F3AD1C4;
    case 0x7F3AD1C8u: goto label_7F3AD1C8;
    case 0x7F3AD1CCu: goto label_7F3AD1CC;
    case 0x7F3AD1D0u: goto label_7F3AD1D0;
    case 0x7F3AD1D4u: goto label_7F3AD1D4;
    case 0x7F3AD1D8u: goto label_7F3AD1D8;
    case 0x7F3AD1DCu: goto label_7F3AD1DC;
    case 0x7F3AD1E0u: goto label_7F3AD1E0;
    case 0x7F3AD1E4u: goto label_7F3AD1E4;
    case 0x7F3AD1E8u: goto label_7F3AD1E8;
    case 0x7F3AD1ECu: goto label_7F3AD1EC;
    case 0x7F3AD1F0u: goto label_7F3AD1F0;
    case 0x7F3AD1F4u: goto label_7F3AD1F4;
    case 0x7F3AD1F8u: goto label_7F3AD1F8;
    case 0x7F3AD1FCu: goto label_7F3AD1FC;
    case 0x7F3AD200u: goto label_7F3AD200;
    case 0x7F3AD204u: goto label_7F3AD204;
    case 0x7F3AD208u: goto label_7F3AD208;
    case 0x7F3AD20Cu: goto label_7F3AD20C;
    case 0x7F3AD210u: goto label_7F3AD210;
    case 0x7F3AD214u: goto label_7F3AD214;
    case 0x7F3AD218u: goto label_7F3AD218;
    case 0x7F3AD21Cu: goto label_7F3AD21C;
    case 0x7F3AD220u: goto label_7F3AD220;
    case 0x7F3AD224u: goto label_7F3AD224;
    case 0x7F3AD228u: goto label_7F3AD228;
    case 0x7F3AD22Cu: goto label_7F3AD22C;
    case 0x7F3AD230u: goto label_7F3AD230;
    case 0x7F3AD234u: goto label_7F3AD234;
    case 0x7F3AD238u: goto label_7F3AD238;
    case 0x7F3AD23Cu: goto label_7F3AD23C;
    case 0x7F3AD240u: goto label_7F3AD240;
    case 0x7F3AD244u: goto label_7F3AD244;
    case 0x7F3AD248u: goto label_7F3AD248;
    case 0x7F3AD24Cu: goto label_7F3AD24C;
    case 0x7F3AD250u: goto label_7F3AD250;
    case 0x7F3AD254u: goto label_7F3AD254;
    case 0x7F3AD258u: goto label_7F3AD258;
    case 0x7F3AD25Cu: goto label_7F3AD25C;
    case 0x7F3AD260u: goto label_7F3AD260;
    case 0x7F3AD264u: goto label_7F3AD264;
    case 0x7F3AD268u: goto label_7F3AD268;
    case 0x7F3AD26Cu: goto label_7F3AD26C;
    case 0x7F3AD270u: goto label_7F3AD270;
    case 0x7F3AD274u: goto label_7F3AD274;
    case 0x7F3AD278u: goto label_7F3AD278;
    case 0x7F3AD27Cu: goto label_7F3AD27C;
    case 0x7F3AD280u: goto label_7F3AD280;
    case 0x7F3AD284u: goto label_7F3AD284;
    case 0x7F3AD288u: goto label_7F3AD288;
    case 0x7F3AD28Cu: goto label_7F3AD28C;
    case 0x7F3AD290u: goto label_7F3AD290;
    case 0x7F3AD294u: goto label_7F3AD294;
    case 0x7F3AD298u: goto label_7F3AD298;
    case 0x7F3AD29Cu: goto label_7F3AD29C;
    case 0x7F3AD2A0u: goto label_7F3AD2A0;
    case 0x7F3AD2A4u: goto label_7F3AD2A4;
    case 0x7F3AD2A8u: goto label_7F3AD2A8;
    case 0x7F3AD2ACu: goto label_7F3AD2AC;
    case 0x7F3AD2B0u: goto label_7F3AD2B0;
    case 0x7F3AD2B4u: goto label_7F3AD2B4;
    case 0x7F3AD2B8u: goto label_7F3AD2B8;
    case 0x7F3AD2BCu: goto label_7F3AD2BC;
    case 0x7F3AD2C0u: goto label_7F3AD2C0;
    case 0x7F3AD2C4u: goto label_7F3AD2C4;
    case 0x7F3AD2C8u: goto label_7F3AD2C8;
    case 0x7F3AD2CCu: goto label_7F3AD2CC;
    case 0x7F3AD2D0u: goto label_7F3AD2D0;
    case 0x7F3AD2D4u: goto label_7F3AD2D4;
    case 0x7F3AD2D8u: goto label_7F3AD2D8;
    case 0x7F3AD2DCu: goto label_7F3AD2DC;
    case 0x7F3AD2E0u: goto label_7F3AD2E0;
    case 0x7F3AD2E4u: goto label_7F3AD2E4;
    case 0x7F3AD2E8u: goto label_7F3AD2E8;
    case 0x7F3AD2ECu: goto label_7F3AD2EC;
    case 0x7F3AD2F0u: goto label_7F3AD2F0;
    case 0x7F3AD2F4u: goto label_7F3AD2F4;
    case 0x7F3AD2F8u: goto label_7F3AD2F8;
    case 0x7F3AD2FCu: goto label_7F3AD2FC;
    case 0x7F3AD300u: goto label_7F3AD300;
    case 0x7F3AD304u: goto label_7F3AD304;
    case 0x7F3AD308u: goto label_7F3AD308;
    case 0x7F3AD30Cu: goto label_7F3AD30C;
    case 0x7F3AD310u: goto label_7F3AD310;
    case 0x7F3AD314u: goto label_7F3AD314;
    case 0x7F3AD318u: goto label_7F3AD318;
    case 0x7F3AD31Cu: goto label_7F3AD31C;
    case 0x7F3AD320u: goto label_7F3AD320;
    case 0x7F3AD324u: goto label_7F3AD324;
    case 0x7F3AD328u: goto label_7F3AD328;
    case 0x7F3AD32Cu: goto label_7F3AD32C;
    case 0x7F3AD330u: goto label_7F3AD330;
    case 0x7F3AD334u: goto label_7F3AD334;
    case 0x7F3AD338u: goto label_7F3AD338;
    case 0x7F3AD33Cu: goto label_7F3AD33C;
    case 0x7F3AD340u: goto label_7F3AD340;
    case 0x7F3AD344u: goto label_7F3AD344;
    case 0x7F3AD348u: goto label_7F3AD348;
    case 0x7F3AD34Cu: goto label_7F3AD34C;
    case 0x7F3AD350u: goto label_7F3AD350;
    case 0x7F3AD354u: goto label_7F3AD354;
    case 0x7F3AD358u: goto label_7F3AD358;
    case 0x7F3AD35Cu: goto label_7F3AD35C;
    case 0x7F3AD360u: goto label_7F3AD360;
    case 0x7F3AD364u: goto label_7F3AD364;
    case 0x7F3AD368u: goto label_7F3AD368;
    case 0x7F3AD36Cu: goto label_7F3AD36C;
    case 0x7F3AD370u: goto label_7F3AD370;
    case 0x7F3AD374u: goto label_7F3AD374;
    case 0x7F3AD378u: goto label_7F3AD378;
    case 0x7F3AD37Cu: goto label_7F3AD37C;
    case 0x7F3AD380u: goto label_7F3AD380;
    case 0x7F3AD384u: goto label_7F3AD384;
    case 0x7F3AD388u: goto label_7F3AD388;
    case 0x7F3AD38Cu: goto label_7F3AD38C;
    case 0x7F3AD390u: goto label_7F3AD390;
    case 0x7F3AD394u: goto label_7F3AD394;
    case 0x7F3AD398u: goto label_7F3AD398;
    case 0x7F3AD39Cu: goto label_7F3AD39C;
    case 0x7F3AD3A0u: goto label_7F3AD3A0;
    case 0x7F3AD3A4u: goto label_7F3AD3A4;
    case 0x7F3AD3A8u: goto label_7F3AD3A8;
    case 0x7F3AD3ACu: goto label_7F3AD3AC;
    case 0x7F3AD3B0u: goto label_7F3AD3B0;
    case 0x7F3AD3B4u: goto label_7F3AD3B4;
    case 0x7F3AD3B8u: goto label_7F3AD3B8;
    case 0x7F3AD3BCu: goto label_7F3AD3BC;
    case 0x7F3AD3C0u: goto label_7F3AD3C0;
    case 0x7F3AD3C4u: goto label_7F3AD3C4;
    case 0x7F3AD3C8u: goto label_7F3AD3C8;
    case 0x7F3AD3CCu: goto label_7F3AD3CC;
    case 0x7F3AD3D0u: goto label_7F3AD3D0;
    case 0x7F3AD3D4u: goto label_7F3AD3D4;
    case 0x7F3AD3D8u: goto label_7F3AD3D8;
    case 0x7F3AD3DCu: goto label_7F3AD3DC;
    case 0x7F3AD3E0u: goto label_7F3AD3E0;
    case 0x7F3AD3E4u: goto label_7F3AD3E4;
    case 0x7F3AD3E8u: goto label_7F3AD3E8;
    case 0x7F3AD3ECu: goto label_7F3AD3EC;
    case 0x7F3AD3F0u: goto label_7F3AD3F0;
    case 0x7F3AD3F4u: goto label_7F3AD3F4;
    case 0x7F3AD3F8u: goto label_7F3AD3F8;
    case 0x7F3AD3FCu: goto label_7F3AD3FC;
    case 0x7F3AD400u: goto label_7F3AD400;
    case 0x7F3AD404u: goto label_7F3AD404;
    case 0x7F3AD408u: goto label_7F3AD408;
    case 0x7F3AD40Cu: goto label_7F3AD40C;
    case 0x7F3AD410u: goto label_7F3AD410;
    case 0x7F3AD414u: goto label_7F3AD414;
    case 0x7F3AD418u: goto label_7F3AD418;
    case 0x7F3AD41Cu: goto label_7F3AD41C;
    case 0x7F3AD420u: goto label_7F3AD420;
    case 0x7F3AD424u: goto label_7F3AD424;
    case 0x7F3AD428u: goto label_7F3AD428;
    case 0x7F3AD42Cu: goto label_7F3AD42C;
    case 0x7F3AD430u: goto label_7F3AD430;
    case 0x7F3AD434u: goto label_7F3AD434;
    case 0x7F3AD438u: goto label_7F3AD438;
    case 0x7F3AD43Cu: goto label_7F3AD43C;
    case 0x7F3AD440u: goto label_7F3AD440;
    case 0x7F3AD444u: goto label_7F3AD444;
    case 0x7F3AD448u: goto label_7F3AD448;
    case 0x7F3AD44Cu: goto label_7F3AD44C;
    case 0x7F3AD450u: goto label_7F3AD450;
    case 0x7F3AD454u: goto label_7F3AD454;
    case 0x7F3AD458u: goto label_7F3AD458;
    case 0x7F3AD45Cu: goto label_7F3AD45C;
    case 0x7F3AD460u: goto label_7F3AD460;
    case 0x7F3AD464u: goto label_7F3AD464;
    case 0x7F3AD468u: goto label_7F3AD468;
    case 0x7F3AD46Cu: goto label_7F3AD46C;
    case 0x7F3AD470u: goto label_7F3AD470;
    case 0x7F3AD474u: goto label_7F3AD474;
    case 0x7F3AD478u: goto label_7F3AD478;
    case 0x7F3AD47Cu: goto label_7F3AD47C;
    case 0x7F3AD480u: goto label_7F3AD480;
    case 0x7F3AD484u: goto label_7F3AD484;
    case 0x7F3AD488u: goto label_7F3AD488;
    case 0x7F3AD48Cu: goto label_7F3AD48C;
    case 0x7F3AD490u: goto label_7F3AD490;
    case 0x7F3AD494u: goto label_7F3AD494;
    case 0x7F3AD498u: goto label_7F3AD498;
    case 0x7F3AD49Cu: goto label_7F3AD49C;
    case 0x7F3AD4A0u: goto label_7F3AD4A0;
    case 0x7F3AD4A4u: goto label_7F3AD4A4;
    case 0x7F3AD4A8u: goto label_7F3AD4A8;
    case 0x7F3AD4ACu: goto label_7F3AD4AC;
    case 0x7F3AD4B0u: goto label_7F3AD4B0;
    case 0x7F3AD4B4u: goto label_7F3AD4B4;
    case 0x7F3AD4B8u: goto label_7F3AD4B8;
    case 0x7F3AD4BCu: goto label_7F3AD4BC;
    case 0x7F3AD4C0u: goto label_7F3AD4C0;
    case 0x7F3AD4C4u: goto label_7F3AD4C4;
    case 0x7F3AD4C8u: goto label_7F3AD4C8;
    case 0x7F3AD4CCu: goto label_7F3AD4CC;
    case 0x7F3AD4D0u: goto label_7F3AD4D0;
    case 0x7F3AD4D4u: goto label_7F3AD4D4;
    case 0x7F3AD4D8u: goto label_7F3AD4D8;
    case 0x7F3AD4DCu: goto label_7F3AD4DC;
    case 0x7F3AD4E0u: goto label_7F3AD4E0;
    case 0x7F3AD4E4u: goto label_7F3AD4E4;
    case 0x7F3AD4E8u: goto label_7F3AD4E8;
    case 0x7F3AD4ECu: goto label_7F3AD4EC;
    case 0x7F3AD4F0u: goto label_7F3AD4F0;
    case 0x7F3AD4F4u: goto label_7F3AD4F4;
    case 0x7F3AD4F8u: goto label_7F3AD4F8;
    case 0x7F3AD4FCu: goto label_7F3AD4FC;
    case 0x7F3AD500u: goto label_7F3AD500;
    case 0x7F3AD504u: goto label_7F3AD504;
    case 0x7F3AD508u: goto label_7F3AD508;
    case 0x7F3AD50Cu: goto label_7F3AD50C;
    case 0x7F3AD510u: goto label_7F3AD510;
    case 0x7F3AD514u: goto label_7F3AD514;
    case 0x7F3AD518u: goto label_7F3AD518;
    case 0x7F3AD51Cu: goto label_7F3AD51C;
    case 0x7F3AD520u: goto label_7F3AD520;
    case 0x7F3AD524u: goto label_7F3AD524;
    case 0x7F3AD528u: goto label_7F3AD528;
    case 0x7F3AD52Cu: goto label_7F3AD52C;
    case 0x7F3AD530u: goto label_7F3AD530;
    case 0x7F3AD534u: goto label_7F3AD534;
    case 0x7F3AD538u: goto label_7F3AD538;
    case 0x7F3AD53Cu: goto label_7F3AD53C;
    case 0x7F3AD540u: goto label_7F3AD540;
    case 0x7F3AD544u: goto label_7F3AD544;
    case 0x7F3AD548u: goto label_7F3AD548;
    case 0x7F3AD54Cu: goto label_7F3AD54C;
    case 0x7F3AD550u: goto label_7F3AD550;
    case 0x7F3AD554u: goto label_7F3AD554;
    case 0x7F3AD558u: goto label_7F3AD558;
    case 0x7F3AD55Cu: goto label_7F3AD55C;
    case 0x7F3AD560u: goto label_7F3AD560;
    case 0x7F3AD564u: goto label_7F3AD564;
    case 0x7F3AD568u: goto label_7F3AD568;
    case 0x7F3AD56Cu: goto label_7F3AD56C;
    case 0x7F3AD570u: goto label_7F3AD570;
    case 0x7F3AD574u: goto label_7F3AD574;
    case 0x7F3AD578u: goto label_7F3AD578;
    case 0x7F3AD57Cu: goto label_7F3AD57C;
    case 0x7F3AD580u: goto label_7F3AD580;
    case 0x7F3AD584u: goto label_7F3AD584;
    case 0x7F3AD588u: goto label_7F3AD588;
    case 0x7F3AD58Cu: goto label_7F3AD58C;
    case 0x7F3AD590u: goto label_7F3AD590;
    case 0x7F3AD594u: goto label_7F3AD594;
    case 0x7F3AD598u: goto label_7F3AD598;
    case 0x7F3AD59Cu: goto label_7F3AD59C;
    case 0x7F3AD5A0u: goto label_7F3AD5A0;
    case 0x7F3AD5A4u: goto label_7F3AD5A4;
    case 0x7F3AD5A8u: goto label_7F3AD5A8;
    case 0x7F3AD5ACu: goto label_7F3AD5AC;
    case 0x7F3AD5B0u: goto label_7F3AD5B0;
    case 0x7F3AD5B4u: goto label_7F3AD5B4;
    case 0x7F3AD5B8u: goto label_7F3AD5B8;
    case 0x7F3AD5BCu: goto label_7F3AD5BC;
    case 0x7F3AD5C0u: goto label_7F3AD5C0;
    case 0x7F3AD5C4u: goto label_7F3AD5C4;
    case 0x7F3AD5C8u: goto label_7F3AD5C8;
    case 0x7F3AD5CCu: goto label_7F3AD5CC;
    case 0x7F3AD5D0u: goto label_7F3AD5D0;
    case 0x7F3AD5D4u: goto label_7F3AD5D4;
    case 0x7F3AD5D8u: goto label_7F3AD5D8;
    case 0x7F3AD5DCu: goto label_7F3AD5DC;
    case 0x7F3AD5E0u: goto label_7F3AD5E0;
    case 0x7F3AD5E4u: goto label_7F3AD5E4;
    case 0x7F3AD5E8u: goto label_7F3AD5E8;
    case 0x7F3AD5ECu: goto label_7F3AD5EC;
    case 0x7F3AD5F0u: goto label_7F3AD5F0;
    case 0x7F3AD5F4u: goto label_7F3AD5F4;
    case 0x7F3AD5F8u: goto label_7F3AD5F8;
    case 0x7F3AD5FCu: goto label_7F3AD5FC;
    case 0x7F3AD600u: goto label_7F3AD600;
    case 0x7F3AD604u: goto label_7F3AD604;
    case 0x7F3AD608u: goto label_7F3AD608;
    case 0x7F3AD60Cu: goto label_7F3AD60C;
    case 0x7F3AD610u: goto label_7F3AD610;
    case 0x7F3AD614u: goto label_7F3AD614;
    case 0x7F3AD618u: goto label_7F3AD618;
    case 0x7F3AD61Cu: goto label_7F3AD61C;
    case 0x7F3AD620u: goto label_7F3AD620;
    case 0x7F3AD624u: goto label_7F3AD624;
    case 0x7F3AD628u: goto label_7F3AD628;
    case 0x7F3AD62Cu: goto label_7F3AD62C;
    case 0x7F3AD630u: goto label_7F3AD630;
    case 0x7F3AD634u: goto label_7F3AD634;
    case 0x7F3AD638u: goto label_7F3AD638;
    case 0x7F3AD63Cu: goto label_7F3AD63C;
    case 0x7F3AD640u: goto label_7F3AD640;
    case 0x7F3AD644u: goto label_7F3AD644;
    case 0x7F3AD648u: goto label_7F3AD648;
    case 0x7F3AD64Cu: goto label_7F3AD64C;
    case 0x7F3AD650u: goto label_7F3AD650;
    case 0x7F3AD654u: goto label_7F3AD654;
    case 0x7F3AD658u: goto label_7F3AD658;
    case 0x7F3AD65Cu: goto label_7F3AD65C;
    case 0x7F3AD660u: goto label_7F3AD660;
    case 0x7F3AD664u: goto label_7F3AD664;
    case 0x7F3AD668u: goto label_7F3AD668;
    case 0x7F3AD66Cu: goto label_7F3AD66C;
    case 0x7F3AD670u: goto label_7F3AD670;
    case 0x7F3AD674u: goto label_7F3AD674;
    case 0x7F3AD678u: goto label_7F3AD678;
    case 0x7F3AD67Cu: goto label_7F3AD67C;
    case 0x7F3AD680u: goto label_7F3AD680;
    case 0x7F3AD684u: goto label_7F3AD684;
    case 0x7F3AD688u: goto label_7F3AD688;
    case 0x7F3AD68Cu: goto label_7F3AD68C;
    case 0x7F3AD690u: goto label_7F3AD690;
    case 0x7F3AD694u: goto label_7F3AD694;
    case 0x7F3AD698u: goto label_7F3AD698;
    case 0x7F3AD69Cu: goto label_7F3AD69C;
    case 0x7F3AD6A0u: goto label_7F3AD6A0;
    case 0x7F3AD6A4u: goto label_7F3AD6A4;
    case 0x7F3AD6A8u: goto label_7F3AD6A8;
    case 0x7F3AD6ACu: goto label_7F3AD6AC;
    case 0x7F3AD6B0u: goto label_7F3AD6B0;
    case 0x7F3AD6B4u: goto label_7F3AD6B4;
    case 0x7F3AD6B8u: goto label_7F3AD6B8;
    case 0x7F3AD6BCu: goto label_7F3AD6BC;
    case 0x7F3AD6C0u: goto label_7F3AD6C0;
    case 0x7F3AD6C4u: goto label_7F3AD6C4;
    case 0x7F3AD6C8u: goto label_7F3AD6C8;
    case 0x7F3AD6CCu: goto label_7F3AD6CC;
    case 0x7F3AD6D0u: goto label_7F3AD6D0;
    case 0x7F3AD6D4u: goto label_7F3AD6D4;
    case 0x7F3AD6D8u: goto label_7F3AD6D8;
    case 0x7F3AD6DCu: goto label_7F3AD6DC;
    case 0x7F3AD6E0u: goto label_7F3AD6E0;
    case 0x7F3AD6E4u: goto label_7F3AD6E4;
    case 0x7F3AD6E8u: goto label_7F3AD6E8;
    case 0x7F3AD6ECu: goto label_7F3AD6EC;
    case 0x7F3AD6F0u: goto label_7F3AD6F0;
    case 0x7F3AD6F4u: goto label_7F3AD6F4;
    case 0x7F3AD6F8u: goto label_7F3AD6F8;
    case 0x7F3AD6FCu: goto label_7F3AD6FC;
    case 0x7F3AD700u: goto label_7F3AD700;
    case 0x7F3AD704u: goto label_7F3AD704;
    case 0x7F3AD708u: goto label_7F3AD708;
    case 0x7F3AD70Cu: goto label_7F3AD70C;
    case 0x7F3AD710u: goto label_7F3AD710;
    case 0x7F3AD714u: goto label_7F3AD714;
    case 0x7F3AD718u: goto label_7F3AD718;
    case 0x7F3AD71Cu: goto label_7F3AD71C;
    case 0x7F3AD720u: goto label_7F3AD720;
    case 0x7F3AD724u: goto label_7F3AD724;
    case 0x7F3AD728u: goto label_7F3AD728;
    case 0x7F3AD72Cu: goto label_7F3AD72C;
    case 0x7F3AD730u: goto label_7F3AD730;
    case 0x7F3AD734u: goto label_7F3AD734;
    case 0x7F3AD738u: goto label_7F3AD738;
    case 0x7F3AD73Cu: goto label_7F3AD73C;
    case 0x7F3AD740u: goto label_7F3AD740;
    case 0x7F3AD744u: goto label_7F3AD744;
    case 0x7F3AD748u: goto label_7F3AD748;
    case 0x7F3AD74Cu: goto label_7F3AD74C;
    case 0x7F3AD750u: goto label_7F3AD750;
    case 0x7F3AD754u: goto label_7F3AD754;
    case 0x7F3AD758u: goto label_7F3AD758;
    case 0x7F3AD75Cu: goto label_7F3AD75C;
    case 0x7F3AD760u: goto label_7F3AD760;
    case 0x7F3AD764u: goto label_7F3AD764;
    case 0x7F3AD768u: goto label_7F3AD768;
    case 0x7F3AD76Cu: goto label_7F3AD76C;
    case 0x7F3AD770u: goto label_7F3AD770;
    case 0x7F3AD774u: goto label_7F3AD774;
    case 0x7F3AD778u: goto label_7F3AD778;
    case 0x7F3AD77Cu: goto label_7F3AD77C;
    case 0x7F3AD780u: goto label_7F3AD780;
    case 0x7F3AD784u: goto label_7F3AD784;
    case 0x7F3AD788u: goto label_7F3AD788;
    case 0x7F3AD78Cu: goto label_7F3AD78C;
    case 0x7F3AD790u: goto label_7F3AD790;
    case 0x7F3AD794u: goto label_7F3AD794;
    case 0x7F3AD798u: goto label_7F3AD798;
    case 0x7F3AD79Cu: goto label_7F3AD79C;
    case 0x7F3AD7A0u: goto label_7F3AD7A0;
    case 0x7F3AD7A4u: goto label_7F3AD7A4;
    case 0x7F3AD7A8u: goto label_7F3AD7A8;
    case 0x7F3AD7ACu: goto label_7F3AD7AC;
    case 0x7F3AD7B0u: goto label_7F3AD7B0;
    case 0x7F3AD7B4u: goto label_7F3AD7B4;
    case 0x7F3AD7B8u: goto label_7F3AD7B8;
    case 0x7F3AD7BCu: goto label_7F3AD7BC;
    case 0x7F3AD7C0u: goto label_7F3AD7C0;
    case 0x7F3AD7C4u: goto label_7F3AD7C4;
    case 0x7F3AD7C8u: goto label_7F3AD7C8;
    case 0x7F3AD7CCu: goto label_7F3AD7CC;
    case 0x7F3AD7D0u: goto label_7F3AD7D0;
    case 0x7F3AD7D4u: goto label_7F3AD7D4;
    case 0x7F3AD7D8u: goto label_7F3AD7D8;
    case 0x7F3AD7DCu: goto label_7F3AD7DC;
    case 0x7F3AD7E0u: goto label_7F3AD7E0;
    case 0x7F3AD7E4u: goto label_7F3AD7E4;
    case 0x7F3AD7E8u: goto label_7F3AD7E8;
    case 0x7F3AD7ECu: goto label_7F3AD7EC;
    case 0x7F3AD7F0u: goto label_7F3AD7F0;
    case 0x7F3AD7F4u: goto label_7F3AD7F4;
    case 0x7F3AD7F8u: goto label_7F3AD7F8;
    case 0x7F3AD7FCu: goto label_7F3AD7FC;
    case 0x7F3AD800u: goto label_7F3AD800;
    case 0x7F3AD804u: goto label_7F3AD804;
    case 0x7F3AD808u: goto label_7F3AD808;
    case 0x7F3AD80Cu: goto label_7F3AD80C;
    case 0x7F3AD810u: goto label_7F3AD810;
    case 0x7F3AD814u: goto label_7F3AD814;
    case 0x7F3AD818u: goto label_7F3AD818;
    case 0x7F3AD81Cu: goto label_7F3AD81C;
    case 0x7F3AD820u: goto label_7F3AD820;
    case 0x7F3AD824u: goto label_7F3AD824;
    case 0x7F3AD828u: goto label_7F3AD828;
    case 0x7F3AD82Cu: goto label_7F3AD82C;
    case 0x7F3AD830u: goto label_7F3AD830;
    case 0x7F3AD834u: goto label_7F3AD834;
    case 0x7F3AD838u: goto label_7F3AD838;
    case 0x7F3AD83Cu: goto label_7F3AD83C;
    case 0x7F3AD840u: goto label_7F3AD840;
    case 0x7F3AD844u: goto label_7F3AD844;
    case 0x7F3AD848u: goto label_7F3AD848;
    case 0x7F3AD84Cu: goto label_7F3AD84C;
    case 0x7F3AD850u: goto label_7F3AD850;
    case 0x7F3AD854u: goto label_7F3AD854;
    case 0x7F3AD858u: goto label_7F3AD858;
    case 0x7F3AD85Cu: goto label_7F3AD85C;
    case 0x7F3AD860u: goto label_7F3AD860;
    case 0x7F3AD864u: goto label_7F3AD864;
    case 0x7F3AD868u: goto label_7F3AD868;
    case 0x7F3AD86Cu: goto label_7F3AD86C;
    case 0x7F3AD870u: goto label_7F3AD870;
    case 0x7F3AD874u: goto label_7F3AD874;
    case 0x7F3AD878u: goto label_7F3AD878;
    case 0x7F3AD87Cu: goto label_7F3AD87C;
    case 0x7F3AD880u: goto label_7F3AD880;
    case 0x7F3AD884u: goto label_7F3AD884;
    case 0x7F3AD888u: goto label_7F3AD888;
    case 0x7F3AD88Cu: goto label_7F3AD88C;
    case 0x7F3AD890u: goto label_7F3AD890;
    case 0x7F3AD894u: goto label_7F3AD894;
    case 0x7F3AD898u: goto label_7F3AD898;
    case 0x7F3AD89Cu: goto label_7F3AD89C;
    case 0x7F3AD8A0u: goto label_7F3AD8A0;
    case 0x7F3AD8A4u: goto label_7F3AD8A4;
    case 0x7F3AD8A8u: goto label_7F3AD8A8;
    case 0x7F3AD8ACu: goto label_7F3AD8AC;
    case 0x7F3AD8B0u: goto label_7F3AD8B0;
    case 0x7F3AD8B4u: goto label_7F3AD8B4;
    case 0x7F3AD8B8u: goto label_7F3AD8B8;
    case 0x7F3AD8BCu: goto label_7F3AD8BC;
    case 0x7F3AD8C0u: goto label_7F3AD8C0;
    case 0x7F3AD8C4u: goto label_7F3AD8C4;
    case 0x7F3AD8C8u: goto label_7F3AD8C8;
    case 0x7F3AD8CCu: goto label_7F3AD8CC;
    case 0x7F3AD8D0u: goto label_7F3AD8D0;
    case 0x7F3AD8D4u: goto label_7F3AD8D4;
    case 0x7F3AD8D8u: goto label_7F3AD8D8;
    case 0x7F3AD8DCu: goto label_7F3AD8DC;
    case 0x7F3AD8E0u: goto label_7F3AD8E0;
    case 0x7F3AD8E4u: goto label_7F3AD8E4;
    case 0x7F3AD8E8u: goto label_7F3AD8E8;
    case 0x7F3AD8ECu: goto label_7F3AD8EC;
    case 0x7F3AD8F0u: goto label_7F3AD8F0;
    case 0x7F3AD8F4u: goto label_7F3AD8F4;
    case 0x7F3AD8F8u: goto label_7F3AD8F8;
    case 0x7F3AD8FCu: goto label_7F3AD8FC;
    case 0x7F3AD900u: goto label_7F3AD900;
    case 0x7F3AD904u: goto label_7F3AD904;
    case 0x7F3AD908u: goto label_7F3AD908;
    case 0x7F3AD90Cu: goto label_7F3AD90C;
    case 0x7F3AD910u: goto label_7F3AD910;
    case 0x7F3AD914u: goto label_7F3AD914;
    case 0x7F3AD918u: goto label_7F3AD918;
    case 0x7F3AD91Cu: goto label_7F3AD91C;
    case 0x7F3AD920u: goto label_7F3AD920;
    case 0x7F3AD924u: goto label_7F3AD924;
    case 0x7F3AD928u: goto label_7F3AD928;
    case 0x7F3AD92Cu: goto label_7F3AD92C;
    case 0x7F3AD930u: goto label_7F3AD930;
    case 0x7F3AD934u: goto label_7F3AD934;
    case 0x7F3AD938u: goto label_7F3AD938;
    case 0x7F3AD93Cu: goto label_7F3AD93C;
    case 0x7F3AD940u: goto label_7F3AD940;
    case 0x7F3AD944u: goto label_7F3AD944;
    case 0x7F3AD948u: goto label_7F3AD948;
    case 0x7F3AD94Cu: goto label_7F3AD94C;
    case 0x7F3AD950u: goto label_7F3AD950;
    case 0x7F3AD954u: goto label_7F3AD954;
    case 0x7F3AD958u: goto label_7F3AD958;
    case 0x7F3AD95Cu: goto label_7F3AD95C;
    case 0x7F3AD960u: goto label_7F3AD960;
    case 0x7F3AD964u: goto label_7F3AD964;
    case 0x7F3AD968u: goto label_7F3AD968;
    case 0x7F3AD96Cu: goto label_7F3AD96C;
    case 0x7F3AD970u: goto label_7F3AD970;
    case 0x7F3AD974u: goto label_7F3AD974;
    case 0x7F3AD978u: goto label_7F3AD978;
    case 0x7F3AD97Cu: goto label_7F3AD97C;
    case 0x7F3AD980u: goto label_7F3AD980;
    case 0x7F3AD984u: goto label_7F3AD984;
    case 0x7F3AD988u: goto label_7F3AD988;
    case 0x7F3AD98Cu: goto label_7F3AD98C;
    case 0x7F3AD990u: goto label_7F3AD990;
    case 0x7F3AD994u: goto label_7F3AD994;
    case 0x7F3AD998u: goto label_7F3AD998;
    case 0x7F3AD99Cu: goto label_7F3AD99C;
    case 0x7F3AD9A0u: goto label_7F3AD9A0;
    case 0x7F3AD9A4u: goto label_7F3AD9A4;
    case 0x7F3AD9A8u: goto label_7F3AD9A8;
    case 0x7F3AD9ACu: goto label_7F3AD9AC;
    case 0x7F3AD9B0u: goto label_7F3AD9B0;
    case 0x7F3AD9B4u: goto label_7F3AD9B4;
    case 0x7F3AD9B8u: goto label_7F3AD9B8;
    case 0x7F3AD9BCu: goto label_7F3AD9BC;
    case 0x7F3AD9C0u: goto label_7F3AD9C0;
    case 0x7F3AD9C4u: goto label_7F3AD9C4;
    case 0x7F3AD9C8u: goto label_7F3AD9C8;
    case 0x7F3AD9CCu: goto label_7F3AD9CC;
    case 0x7F3AD9D0u: goto label_7F3AD9D0;
    case 0x7F3AD9D4u: goto label_7F3AD9D4;
    case 0x7F3AD9D8u: goto label_7F3AD9D8;
    case 0x7F3AD9DCu: goto label_7F3AD9DC;
    case 0x7F3AD9E0u: goto label_7F3AD9E0;
    case 0x7F3AD9E4u: goto label_7F3AD9E4;
    case 0x7F3AD9E8u: goto label_7F3AD9E8;
    case 0x7F3AD9ECu: goto label_7F3AD9EC;
    case 0x7F3AD9F0u: goto label_7F3AD9F0;
    case 0x7F3AD9F4u: goto label_7F3AD9F4;
    case 0x7F3AD9F8u: goto label_7F3AD9F8;
    case 0x7F3AD9FCu: goto label_7F3AD9FC;
    case 0x7F3ADA00u: goto label_7F3ADA00;
    case 0x7F3ADA04u: goto label_7F3ADA04;
    case 0x7F3ADA08u: goto label_7F3ADA08;
    case 0x7F3ADA0Cu: goto label_7F3ADA0C;
    case 0x7F3ADA10u: goto label_7F3ADA10;
    case 0x7F3ADA14u: goto label_7F3ADA14;
    case 0x7F3ADA18u: goto label_7F3ADA18;
    case 0x7F3ADA1Cu: goto label_7F3ADA1C;
    case 0x7F3ADA20u: goto label_7F3ADA20;
    case 0x7F3ADA24u: goto label_7F3ADA24;
    case 0x7F3ADA28u: goto label_7F3ADA28;
    case 0x7F3ADA2Cu: goto label_7F3ADA2C;
    case 0x7F3ADA30u: goto label_7F3ADA30;
    case 0x7F3ADA34u: goto label_7F3ADA34;
    case 0x7F3ADA38u: goto label_7F3ADA38;
    case 0x7F3ADA3Cu: goto label_7F3ADA3C;
    case 0x7F3ADA40u: goto label_7F3ADA40;
    case 0x7F3ADA44u: goto label_7F3ADA44;
    case 0x7F3ADA48u: goto label_7F3ADA48;
    case 0x7F3ADA4Cu: goto label_7F3ADA4C;
    case 0x7F3ADA50u: goto label_7F3ADA50;
    case 0x7F3ADA54u: goto label_7F3ADA54;
    case 0x7F3ADA58u: goto label_7F3ADA58;
    case 0x7F3ADA5Cu: goto label_7F3ADA5C;
    case 0x7F3ADA60u: goto label_7F3ADA60;
    case 0x7F3ADA64u: goto label_7F3ADA64;
    case 0x7F3ADA68u: goto label_7F3ADA68;
    case 0x7F3ADA6Cu: goto label_7F3ADA6C;
    case 0x7F3ADA70u: goto label_7F3ADA70;
    case 0x7F3ADA74u: goto label_7F3ADA74;
    case 0x7F3ADA78u: goto label_7F3ADA78;
    case 0x7F3ADA7Cu: goto label_7F3ADA7C;
    case 0x7F3ADA80u: goto label_7F3ADA80;
    case 0x7F3ADA84u: goto label_7F3ADA84;
    case 0x7F3ADA88u: goto label_7F3ADA88;
    case 0x7F3ADA8Cu: goto label_7F3ADA8C;
    case 0x7F3ADA90u: goto label_7F3ADA90;
    case 0x7F3ADA94u: goto label_7F3ADA94;
    case 0x7F3ADA98u: goto label_7F3ADA98;
    case 0x7F3ADA9Cu: goto label_7F3ADA9C;
    case 0x7F3ADAA0u: goto label_7F3ADAA0;
    case 0x7F3ADAA4u: goto label_7F3ADAA4;
    case 0x7F3ADAA8u: goto label_7F3ADAA8;
    case 0x7F3ADAACu: goto label_7F3ADAAC;
    case 0x7F3ADAB0u: goto label_7F3ADAB0;
    case 0x7F3ADAB4u: goto label_7F3ADAB4;
    case 0x7F3ADAB8u: goto label_7F3ADAB8;
    case 0x7F3ADABCu: goto label_7F3ADABC;
    case 0x7F3ADAC0u: goto label_7F3ADAC0;
    case 0x7F3ADAC4u: goto label_7F3ADAC4;
    case 0x7F3ADAC8u: goto label_7F3ADAC8;
    case 0x7F3ADACCu: goto label_7F3ADACC;
    case 0x7F3ADAD0u: goto label_7F3ADAD0;
    case 0x7F3ADAD4u: goto label_7F3ADAD4;
    case 0x7F3ADAD8u: goto label_7F3ADAD8;
    case 0x7F3ADADCu: goto label_7F3ADADC;
    case 0x7F3ADAE0u: goto label_7F3ADAE0;
    case 0x7F3ADAE4u: goto label_7F3ADAE4;
    case 0x7F3ADAE8u: goto label_7F3ADAE8;
    case 0x7F3ADAECu: goto label_7F3ADAEC;
    case 0x7F3ADAF0u: goto label_7F3ADAF0;
    case 0x7F3ADAF4u: goto label_7F3ADAF4;
    case 0x7F3ADAF8u: goto label_7F3ADAF8;
    case 0x7F3ADAFCu: goto label_7F3ADAFC;
    case 0x7F3ADB00u: goto label_7F3ADB00;
    case 0x7F3ADB04u: goto label_7F3ADB04;
    case 0x7F3ADB08u: goto label_7F3ADB08;
    case 0x7F3ADB0Cu: goto label_7F3ADB0C;
    case 0x7F3ADB10u: goto label_7F3ADB10;
    case 0x7F3ADB14u: goto label_7F3ADB14;
    case 0x7F3ADB18u: goto label_7F3ADB18;
    case 0x7F3ADB1Cu: goto label_7F3ADB1C;
    case 0x7F3ADB20u: goto label_7F3ADB20;
    case 0x7F3ADB24u: goto label_7F3ADB24;
    case 0x7F3ADB28u: goto label_7F3ADB28;
    case 0x7F3ADB2Cu: goto label_7F3ADB2C;
    case 0x7F3ADB30u: goto label_7F3ADB30;
    case 0x7F3ADB34u: goto label_7F3ADB34;
    case 0x7F3ADB38u: goto label_7F3ADB38;
    case 0x7F3ADB3Cu: goto label_7F3ADB3C;
    case 0x7F3ADB40u: goto label_7F3ADB40;
    case 0x7F3ADB44u: goto label_7F3ADB44;
    case 0x7F3ADB48u: goto label_7F3ADB48;
    case 0x7F3ADB4Cu: goto label_7F3ADB4C;
    case 0x7F3ADB50u: goto label_7F3ADB50;
    case 0x7F3ADB54u: goto label_7F3ADB54;
    case 0x7F3ADB58u: goto label_7F3ADB58;
    case 0x7F3ADB5Cu: goto label_7F3ADB5C;
    case 0x7F3ADB60u: goto label_7F3ADB60;
    case 0x7F3ADB64u: goto label_7F3ADB64;
    case 0x7F3ADB68u: goto label_7F3ADB68;
    case 0x7F3ADB6Cu: goto label_7F3ADB6C;
    case 0x7F3ADB70u: goto label_7F3ADB70;
    case 0x7F3ADB74u: goto label_7F3ADB74;
    case 0x7F3ADB78u: goto label_7F3ADB78;
    case 0x7F3ADB7Cu: goto label_7F3ADB7C;
    case 0x7F3ADB80u: goto label_7F3ADB80;
    case 0x7F3ADB84u: goto label_7F3ADB84;
    case 0x7F3ADB88u: goto label_7F3ADB88;
    case 0x7F3ADB8Cu: goto label_7F3ADB8C;
    case 0x7F3ADB90u: goto label_7F3ADB90;
    case 0x7F3ADB94u: goto label_7F3ADB94;
    case 0x7F3ADB98u: goto label_7F3ADB98;
    case 0x7F3ADB9Cu: goto label_7F3ADB9C;
    case 0x7F3ADBA0u: goto label_7F3ADBA0;
    case 0x7F3ADBA4u: goto label_7F3ADBA4;
    case 0x7F3ADBA8u: goto label_7F3ADBA8;
    case 0x7F3ADBACu: goto label_7F3ADBAC;
    case 0x7F3ADBB0u: goto label_7F3ADBB0;
    case 0x7F3ADBB4u: goto label_7F3ADBB4;
    case 0x7F3ADBB8u: goto label_7F3ADBB8;
    case 0x7F3ADBBCu: goto label_7F3ADBBC;
    case 0x7F3ADBC0u: goto label_7F3ADBC0;
    case 0x7F3ADBC4u: goto label_7F3ADBC4;
    case 0x7F3ADBC8u: goto label_7F3ADBC8;
    case 0x7F3ADBCCu: goto label_7F3ADBCC;
    case 0x7F3ADBD0u: goto label_7F3ADBD0;
    case 0x7F3ADBD4u: goto label_7F3ADBD4;
    case 0x7F3ADBD8u: goto label_7F3ADBD8;
    case 0x7F3ADBDCu: goto label_7F3ADBDC;
    case 0x7F3ADBE0u: goto label_7F3ADBE0;
    case 0x7F3ADBE4u: goto label_7F3ADBE4;
    case 0x7F3ADBE8u: goto label_7F3ADBE8;
    case 0x7F3ADBECu: goto label_7F3ADBEC;
    case 0x7F3ADBF0u: goto label_7F3ADBF0;
    case 0x7F3ADBF4u: goto label_7F3ADBF4;
    case 0x7F3ADBF8u: goto label_7F3ADBF8;
    case 0x7F3ADBFCu: goto label_7F3ADBFC;
    case 0x7F3ADC00u: goto label_7F3ADC00;
    case 0x7F3ADC04u: goto label_7F3ADC04;
    case 0x7F3ADC08u: goto label_7F3ADC08;
    case 0x7F3ADC0Cu: goto label_7F3ADC0C;
    case 0x7F3ADC10u: goto label_7F3ADC10;
    case 0x7F3ADC14u: goto label_7F3ADC14;
    case 0x7F3ADC18u: goto label_7F3ADC18;
    case 0x7F3ADC1Cu: goto label_7F3ADC1C;
    case 0x7F3ADC20u: goto label_7F3ADC20;
    case 0x7F3ADC24u: goto label_7F3ADC24;
    case 0x7F3ADC28u: goto label_7F3ADC28;
    case 0x7F3ADC2Cu: goto label_7F3ADC2C;
    case 0x7F3ADC30u: goto label_7F3ADC30;
    case 0x7F3ADC34u: goto label_7F3ADC34;
    case 0x7F3ADC38u: goto label_7F3ADC38;
    case 0x7F3ADC3Cu: goto label_7F3ADC3C;
    case 0x7F3ADC40u: goto label_7F3ADC40;
    case 0x7F3ADC44u: goto label_7F3ADC44;
    case 0x7F3ADC48u: goto label_7F3ADC48;
    case 0x7F3ADC4Cu: goto label_7F3ADC4C;
    case 0x7F3ADC50u: goto label_7F3ADC50;
    case 0x7F3ADC54u: goto label_7F3ADC54;
    case 0x7F3ADC58u: goto label_7F3ADC58;
    case 0x7F3ADC5Cu: goto label_7F3ADC5C;
    case 0x7F3ADC60u: goto label_7F3ADC60;
    case 0x7F3ADC64u: goto label_7F3ADC64;
    case 0x7F3ADC68u: goto label_7F3ADC68;
    case 0x7F3ADC6Cu: goto label_7F3ADC6C;
    case 0x7F3ADC70u: goto label_7F3ADC70;
    case 0x7F3ADC74u: goto label_7F3ADC74;
    case 0x7F3ADC78u: goto label_7F3ADC78;
    case 0x7F3ADC7Cu: goto label_7F3ADC7C;
    case 0x7F3ADC80u: goto label_7F3ADC80;
    case 0x7F3ADC84u: goto label_7F3ADC84;
    case 0x7F3ADC88u: goto label_7F3ADC88;
    case 0x7F3ADC8Cu: goto label_7F3ADC8C;
    case 0x7F3ADC90u: goto label_7F3ADC90;
    case 0x7F3ADC94u: goto label_7F3ADC94;
    case 0x7F3ADC98u: goto label_7F3ADC98;
    case 0x7F3ADC9Cu: goto label_7F3ADC9C;
    case 0x7F3ADCA0u: goto label_7F3ADCA0;
    case 0x7F3ADCA4u: goto label_7F3ADCA4;
    case 0x7F3ADCA8u: goto label_7F3ADCA8;
    case 0x7F3ADCACu: goto label_7F3ADCAC;
    case 0x7F3ADCB0u: goto label_7F3ADCB0;
    case 0x7F3ADCB4u: goto label_7F3ADCB4;
    case 0x7F3ADCB8u: goto label_7F3ADCB8;
    case 0x7F3ADCBCu: goto label_7F3ADCBC;
    case 0x7F3ADCC0u: goto label_7F3ADCC0;
    case 0x7F3ADCC4u: goto label_7F3ADCC4;
    case 0x7F3ADCC8u: goto label_7F3ADCC8;
    case 0x7F3ADCCCu: goto label_7F3ADCCC;
    case 0x7F3ADCD0u: goto label_7F3ADCD0;
    case 0x7F3ADCD4u: goto label_7F3ADCD4;
    case 0x7F3ADCD8u: goto label_7F3ADCD8;
    case 0x7F3ADCDCu: goto label_7F3ADCDC;
    case 0x7F3ADCE0u: goto label_7F3ADCE0;
    case 0x7F3ADCE4u: goto label_7F3ADCE4;
    case 0x7F3ADCE8u: goto label_7F3ADCE8;
    case 0x7F3ADCECu: goto label_7F3ADCEC;
    case 0x7F3ADCF0u: goto label_7F3ADCF0;
    case 0x7F3ADCF4u: goto label_7F3ADCF4;
    case 0x7F3ADCF8u: goto label_7F3ADCF8;
    case 0x7F3ADCFCu: goto label_7F3ADCFC;
    case 0x7F3ADD00u: goto label_7F3ADD00;
    case 0x7F3ADD04u: goto label_7F3ADD04;
    case 0x7F3ADD08u: goto label_7F3ADD08;
    case 0x7F3ADD0Cu: goto label_7F3ADD0C;
    case 0x7F3ADD10u: goto label_7F3ADD10;
    case 0x7F3ADD14u: goto label_7F3ADD14;
    case 0x7F3ADD18u: goto label_7F3ADD18;
    case 0x7F3ADD1Cu: goto label_7F3ADD1C;
    case 0x7F3ADD20u: goto label_7F3ADD20;
    case 0x7F3ADD24u: goto label_7F3ADD24;
    case 0x7F3ADD28u: goto label_7F3ADD28;
    case 0x7F3ADD2Cu: goto label_7F3ADD2C;
    case 0x7F3ADD30u: goto label_7F3ADD30;
    case 0x7F3ADD34u: goto label_7F3ADD34;
    case 0x7F3ADD38u: goto label_7F3ADD38;
    case 0x7F3ADD3Cu: goto label_7F3ADD3C;
    case 0x7F3ADD40u: goto label_7F3ADD40;
    case 0x7F3ADD44u: goto label_7F3ADD44;
    case 0x7F3ADD48u: goto label_7F3ADD48;
    case 0x7F3ADD4Cu: goto label_7F3ADD4C;
    case 0x7F3ADD50u: goto label_7F3ADD50;
    case 0x7F3ADD54u: goto label_7F3ADD54;
    case 0x7F3ADD58u: goto label_7F3ADD58;
    case 0x7F3ADD5Cu: goto label_7F3ADD5C;
    case 0x7F3ADD60u: goto label_7F3ADD60;
    case 0x7F3ADD64u: goto label_7F3ADD64;
    case 0x7F3ADD68u: goto label_7F3ADD68;
    case 0x7F3ADD6Cu: goto label_7F3ADD6C;
    case 0x7F3ADD70u: goto label_7F3ADD70;
    case 0x7F3ADD74u: goto label_7F3ADD74;
    case 0x7F3ADD78u: goto label_7F3ADD78;
    case 0x7F3ADD7Cu: goto label_7F3ADD7C;
    case 0x7F3ADD80u: goto label_7F3ADD80;
    case 0x7F3ADD84u: goto label_7F3ADD84;
    case 0x7F3ADD88u: goto label_7F3ADD88;
    case 0x7F3ADD8Cu: goto label_7F3ADD8C;
    case 0x7F3ADD90u: goto label_7F3ADD90;
    case 0x7F3ADD94u: goto label_7F3ADD94;
    case 0x7F3ADD98u: goto label_7F3ADD98;
    case 0x7F3ADD9Cu: goto label_7F3ADD9C;
    case 0x7F3ADDA0u: goto label_7F3ADDA0;
    case 0x7F3ADDA4u: goto label_7F3ADDA4;
    case 0x7F3ADDA8u: goto label_7F3ADDA8;
    case 0x7F3ADDACu: goto label_7F3ADDAC;
    case 0x7F3ADDB0u: goto label_7F3ADDB0;
    case 0x7F3ADDB4u: goto label_7F3ADDB4;
    case 0x7F3ADDB8u: goto label_7F3ADDB8;
    case 0x7F3ADDBCu: goto label_7F3ADDBC;
    case 0x7F3ADDC0u: goto label_7F3ADDC0;
    case 0x7F3ADDC4u: goto label_7F3ADDC4;
    case 0x7F3ADDC8u: goto label_7F3ADDC8;
    case 0x7F3ADDCCu: goto label_7F3ADDCC;
    case 0x7F3ADDD0u: goto label_7F3ADDD0;
    case 0x7F3ADDD4u: goto label_7F3ADDD4;
    case 0x7F3ADDD8u: goto label_7F3ADDD8;
    case 0x7F3ADDDCu: goto label_7F3ADDDC;
    case 0x7F3ADDE0u: goto label_7F3ADDE0;
    case 0x7F3ADDE4u: goto label_7F3ADDE4;
    case 0x7F3ADDE8u: goto label_7F3ADDE8;
    case 0x7F3ADDECu: goto label_7F3ADDEC;
    case 0x7F3ADDF0u: goto label_7F3ADDF0;
    case 0x7F3ADDF4u: goto label_7F3ADDF4;
    case 0x7F3ADDF8u: goto label_7F3ADDF8;
    case 0x7F3ADDFCu: goto label_7F3ADDFC;
    case 0x7F3ADE00u: goto label_7F3ADE00;
    case 0x7F3ADE04u: goto label_7F3ADE04;
    case 0x7F3ADE08u: goto label_7F3ADE08;
    case 0x7F3ADE0Cu: goto label_7F3ADE0C;
    case 0x7F3ADE10u: goto label_7F3ADE10;
    case 0x7F3ADE14u: goto label_7F3ADE14;
    case 0x7F3ADE18u: goto label_7F3ADE18;
    case 0x7F3ADE1Cu: goto label_7F3ADE1C;
    case 0x7F3ADE20u: goto label_7F3ADE20;
    case 0x7F3ADE24u: goto label_7F3ADE24;
    case 0x7F3ADE28u: goto label_7F3ADE28;
    case 0x7F3ADE2Cu: goto label_7F3ADE2C;
    case 0x7F3ADE30u: goto label_7F3ADE30;
    case 0x7F3ADE34u: goto label_7F3ADE34;
    case 0x7F3ADE38u: goto label_7F3ADE38;
    case 0x7F3ADE3Cu: goto label_7F3ADE3C;
    case 0x7F3ADE40u: goto label_7F3ADE40;
    case 0x7F3ADE44u: goto label_7F3ADE44;
    case 0x7F3ADE48u: goto label_7F3ADE48;
    case 0x7F3ADE4Cu: goto label_7F3ADE4C;
    case 0x7F3ADE50u: goto label_7F3ADE50;
    case 0x7F3ADE54u: goto label_7F3ADE54;
    case 0x7F3ADE58u: goto label_7F3ADE58;
    case 0x7F3ADE5Cu: goto label_7F3ADE5C;
    case 0x7F3ADE60u: goto label_7F3ADE60;
    case 0x7F3ADE64u: goto label_7F3ADE64;
    case 0x7F3ADE68u: goto label_7F3ADE68;
    case 0x7F3ADE6Cu: goto label_7F3ADE6C;
    case 0x7F3ADE70u: goto label_7F3ADE70;
    case 0x7F3ADE74u: goto label_7F3ADE74;
    case 0x7F3ADE78u: goto label_7F3ADE78;
    case 0x7F3ADE7Cu: goto label_7F3ADE7C;
    case 0x7F3ADE80u: goto label_7F3ADE80;
    case 0x7F3ADE84u: goto label_7F3ADE84;
    case 0x7F3ADE88u: goto label_7F3ADE88;
    case 0x7F3ADE8Cu: goto label_7F3ADE8C;
    case 0x7F3ADE90u: goto label_7F3ADE90;
    case 0x7F3ADE94u: goto label_7F3ADE94;
    case 0x7F3ADE98u: goto label_7F3ADE98;
    case 0x7F3ADE9Cu: goto label_7F3ADE9C;
    case 0x7F3ADEA0u: goto label_7F3ADEA0;
    case 0x7F3ADEA4u: goto label_7F3ADEA4;
    case 0x7F3ADEA8u: goto label_7F3ADEA8;
    case 0x7F3ADEACu: goto label_7F3ADEAC;
    case 0x7F3ADEB0u: goto label_7F3ADEB0;
    case 0x7F3ADEB4u: goto label_7F3ADEB4;
    case 0x7F3ADEB8u: goto label_7F3ADEB8;
    case 0x7F3ADEBCu: goto label_7F3ADEBC;
    case 0x7F3ADEC0u: goto label_7F3ADEC0;
    case 0x7F3ADEC4u: goto label_7F3ADEC4;
    case 0x7F3ADEC8u: goto label_7F3ADEC8;
    case 0x7F3ADECCu: goto label_7F3ADECC;
    case 0x7F3ADED0u: goto label_7F3ADED0;
    case 0x7F3ADED4u: goto label_7F3ADED4;
    case 0x7F3ADED8u: goto label_7F3ADED8;
    case 0x7F3ADEDCu: goto label_7F3ADEDC;
    case 0x7F3ADEE0u: goto label_7F3ADEE0;
    case 0x7F3ADEE4u: goto label_7F3ADEE4;
    case 0x7F3ADEE8u: goto label_7F3ADEE8;
    case 0x7F3ADEECu: goto label_7F3ADEEC;
    case 0x7F3ADEF0u: goto label_7F3ADEF0;
    case 0x7F3ADEF4u: goto label_7F3ADEF4;
    case 0x7F3ADEF8u: goto label_7F3ADEF8;
    case 0x7F3ADEFCu: goto label_7F3ADEFC;
    case 0x7F3ADF00u: goto label_7F3ADF00;
    case 0x7F3ADF04u: goto label_7F3ADF04;
    case 0x7F3ADF08u: goto label_7F3ADF08;
    case 0x7F3ADF0Cu: goto label_7F3ADF0C;
    case 0x7F3ADF10u: goto label_7F3ADF10;
    case 0x7F3ADF14u: goto label_7F3ADF14;
    case 0x7F3ADF18u: goto label_7F3ADF18;
    case 0x7F3ADF1Cu: goto label_7F3ADF1C;
    case 0x7F3ADF20u: goto label_7F3ADF20;
    case 0x7F3ADF24u: goto label_7F3ADF24;
    case 0x7F3ADF28u: goto label_7F3ADF28;
    case 0x7F3ADF2Cu: goto label_7F3ADF2C;
    case 0x7F3ADF30u: goto label_7F3ADF30;
    case 0x7F3ADF34u: goto label_7F3ADF34;
    case 0x7F3ADF38u: goto label_7F3ADF38;
    case 0x7F3ADF3Cu: goto label_7F3ADF3C;
    case 0x7F3ADF40u: goto label_7F3ADF40;
    case 0x7F3ADF44u: goto label_7F3ADF44;
    case 0x7F3ADF48u: goto label_7F3ADF48;
    case 0x7F3ADF4Cu: goto label_7F3ADF4C;
    case 0x7F3ADF50u: goto label_7F3ADF50;
    case 0x7F3ADF54u: goto label_7F3ADF54;
    case 0x7F3ADF58u: goto label_7F3ADF58;
    case 0x7F3ADF5Cu: goto label_7F3ADF5C;
    case 0x7F3ADF60u: goto label_7F3ADF60;
    case 0x7F3ADF64u: goto label_7F3ADF64;
    case 0x7F3ADF68u: goto label_7F3ADF68;
    case 0x7F3ADF6Cu: goto label_7F3ADF6C;
    case 0x7F3ADF70u: goto label_7F3ADF70;
    case 0x7F3ADF74u: goto label_7F3ADF74;
    case 0x7F3ADF78u: goto label_7F3ADF78;
    case 0x7F3ADF7Cu: goto label_7F3ADF7C;
    case 0x7F3ADF80u: goto label_7F3ADF80;
    case 0x7F3ADF84u: goto label_7F3ADF84;
    case 0x7F3ADF88u: goto label_7F3ADF88;
    case 0x7F3ADF8Cu: goto label_7F3ADF8C;
    case 0x7F3ADF90u: goto label_7F3ADF90;
    case 0x7F3ADF94u: goto label_7F3ADF94;
    case 0x7F3ADF98u: goto label_7F3ADF98;
    case 0x7F3ADF9Cu: goto label_7F3ADF9C;
    case 0x7F3ADFA0u: goto label_7F3ADFA0;
    case 0x7F3ADFA4u: goto label_7F3ADFA4;
    case 0x7F3ADFA8u: goto label_7F3ADFA8;
    case 0x7F3ADFACu: goto label_7F3ADFAC;
    case 0x7F3ADFB0u: goto label_7F3ADFB0;
    case 0x7F3ADFB4u: goto label_7F3ADFB4;
    case 0x7F3ADFB8u: goto label_7F3ADFB8;
    case 0x7F3ADFBCu: goto label_7F3ADFBC;
    case 0x7F3ADFC0u: goto label_7F3ADFC0;
    case 0x7F3ADFC4u: goto label_7F3ADFC4;
    case 0x7F3ADFC8u: goto label_7F3ADFC8;
    case 0x7F3ADFCCu: goto label_7F3ADFCC;
    case 0x7F3ADFD0u: goto label_7F3ADFD0;
    case 0x7F3ADFD4u: goto label_7F3ADFD4;
    case 0x7F3ADFD8u: goto label_7F3ADFD8;
    case 0x7F3ADFDCu: goto label_7F3ADFDC;
    case 0x7F3ADFE0u: goto label_7F3ADFE0;
    case 0x7F3ADFE4u: goto label_7F3ADFE4;
    case 0x7F3ADFE8u: goto label_7F3ADFE8;
    case 0x7F3ADFECu: goto label_7F3ADFEC;
    case 0x7F3ADFF0u: goto label_7F3ADFF0;
    case 0x7F3ADFF4u: goto label_7F3ADFF4;
    case 0x7F3ADFF8u: goto label_7F3ADFF8;
    case 0x7F3ADFFCu: goto label_7F3ADFFC;
    case 0x7F3AE000u: goto label_7F3AE000;
    case 0x7F3AE004u: goto label_7F3AE004;
    case 0x7F3AE008u: goto label_7F3AE008;
    case 0x7F3AE00Cu: goto label_7F3AE00C;
    case 0x7F3AE010u: goto label_7F3AE010;
    case 0x7F3AE014u: goto label_7F3AE014;
    case 0x7F3AE018u: goto label_7F3AE018;
    case 0x7F3AE01Cu: goto label_7F3AE01C;
    case 0x7F3AE020u: goto label_7F3AE020;
    case 0x7F3AE024u: goto label_7F3AE024;
    case 0x7F3AE028u: goto label_7F3AE028;
    case 0x7F3AE02Cu: goto label_7F3AE02C;
    case 0x7F3AE030u: goto label_7F3AE030;
    case 0x7F3AE034u: goto label_7F3AE034;
    case 0x7F3AE038u: goto label_7F3AE038;
    case 0x7F3AE03Cu: goto label_7F3AE03C;
    case 0x7F3AE040u: goto label_7F3AE040;
    case 0x7F3AE044u: goto label_7F3AE044;
    case 0x7F3AE048u: goto label_7F3AE048;
    case 0x7F3AE04Cu: goto label_7F3AE04C;
    case 0x7F3AE050u: goto label_7F3AE050;
    case 0x7F3AE054u: goto label_7F3AE054;
    case 0x7F3AE058u: goto label_7F3AE058;
    case 0x7F3AE05Cu: goto label_7F3AE05C;
    case 0x7F3AE060u: goto label_7F3AE060;
    case 0x7F3AE064u: goto label_7F3AE064;
    case 0x7F3AE068u: goto label_7F3AE068;
    case 0x7F3AE06Cu: goto label_7F3AE06C;
    case 0x7F3AE070u: goto label_7F3AE070;
    case 0x7F3AE074u: goto label_7F3AE074;
    case 0x7F3AE078u: goto label_7F3AE078;
    case 0x7F3AE07Cu: goto label_7F3AE07C;
    case 0x7F3AE080u: goto label_7F3AE080;
    case 0x7F3AE084u: goto label_7F3AE084;
    case 0x7F3AE088u: goto label_7F3AE088;
    case 0x7F3AE08Cu: goto label_7F3AE08C;
    case 0x7F3AE090u: goto label_7F3AE090;
    case 0x7F3AE094u: goto label_7F3AE094;
    case 0x7F3AE098u: goto label_7F3AE098;
    case 0x7F3AE09Cu: goto label_7F3AE09C;
    case 0x7F3AE0A0u: goto label_7F3AE0A0;
    case 0x7F3AE0A4u: goto label_7F3AE0A4;
    case 0x7F3AE0A8u: goto label_7F3AE0A8;
    case 0x7F3AE0ACu: goto label_7F3AE0AC;
    case 0x7F3AE0B0u: goto label_7F3AE0B0;
    case 0x7F3AE0B4u: goto label_7F3AE0B4;
    case 0x7F3AE0B8u: goto label_7F3AE0B8;
    case 0x7F3AE0BCu: goto label_7F3AE0BC;
    case 0x7F3AE0C0u: goto label_7F3AE0C0;
    case 0x7F3AE0C4u: goto label_7F3AE0C4;
    case 0x7F3AE0C8u: goto label_7F3AE0C8;
    case 0x7F3AE0CCu: goto label_7F3AE0CC;
    case 0x7F3AE0D0u: goto label_7F3AE0D0;
    case 0x7F3AE0D4u: goto label_7F3AE0D4;
    case 0x7F3AE0D8u: goto label_7F3AE0D8;
    case 0x7F3AE0DCu: goto label_7F3AE0DC;
    case 0x7F3AE0E0u: goto label_7F3AE0E0;
    case 0x7F3AE0E4u: goto label_7F3AE0E4;
    case 0x7F3AE0E8u: goto label_7F3AE0E8;
    case 0x7F3AE0ECu: goto label_7F3AE0EC;
    case 0x7F3AE0F0u: goto label_7F3AE0F0;
    case 0x7F3AE0F4u: goto label_7F3AE0F4;
    case 0x7F3AE0F8u: goto label_7F3AE0F8;
    case 0x7F3AE0FCu: goto label_7F3AE0FC;
    case 0x7F3AE100u: goto label_7F3AE100;
    case 0x7F3AE104u: goto label_7F3AE104;
    case 0x7F3AE108u: goto label_7F3AE108;
    case 0x7F3AE10Cu: goto label_7F3AE10C;
    case 0x7F3AE110u: goto label_7F3AE110;
    case 0x7F3AE114u: goto label_7F3AE114;
    case 0x7F3AE118u: goto label_7F3AE118;
    case 0x7F3AE11Cu: goto label_7F3AE11C;
    case 0x7F3AE120u: goto label_7F3AE120;
    case 0x7F3AE124u: goto label_7F3AE124;
    case 0x7F3AE128u: goto label_7F3AE128;
    case 0x7F3AE12Cu: goto label_7F3AE12C;
    case 0x7F3AE130u: goto label_7F3AE130;
    case 0x7F3AE134u: goto label_7F3AE134;
    case 0x7F3AE138u: goto label_7F3AE138;
    case 0x7F3AE13Cu: goto label_7F3AE13C;
    case 0x7F3AE140u: goto label_7F3AE140;
    case 0x7F3AE144u: goto label_7F3AE144;
    case 0x7F3AE148u: goto label_7F3AE148;
    case 0x7F3AE14Cu: goto label_7F3AE14C;
    case 0x7F3AE150u: goto label_7F3AE150;
    case 0x7F3AE154u: goto label_7F3AE154;
    case 0x7F3AE158u: goto label_7F3AE158;
    case 0x7F3AE15Cu: goto label_7F3AE15C;
    case 0x7F3AE160u: goto label_7F3AE160;
    case 0x7F3AE164u: goto label_7F3AE164;
    case 0x7F3AE168u: goto label_7F3AE168;
    case 0x7F3AE16Cu: goto label_7F3AE16C;
    case 0x7F3AE170u: goto label_7F3AE170;
    case 0x7F3AE174u: goto label_7F3AE174;
    case 0x7F3AE178u: goto label_7F3AE178;
    case 0x7F3AE17Cu: goto label_7F3AE17C;
    case 0x7F3AE180u: goto label_7F3AE180;
    case 0x7F3AE184u: goto label_7F3AE184;
    case 0x7F3AE188u: goto label_7F3AE188;
    case 0x7F3AE18Cu: goto label_7F3AE18C;
    case 0x7F3AE190u: goto label_7F3AE190;
    case 0x7F3AE194u: goto label_7F3AE194;
    case 0x7F3AE198u: goto label_7F3AE198;
    case 0x7F3AE19Cu: goto label_7F3AE19C;
    case 0x7F3AE1A0u: goto label_7F3AE1A0;
    case 0x7F3AE1A4u: goto label_7F3AE1A4;
    case 0x7F3AE1A8u: goto label_7F3AE1A8;
    case 0x7F3AE1ACu: goto label_7F3AE1AC;
    case 0x7F3AE1B0u: goto label_7F3AE1B0;
    case 0x7F3AE1B4u: goto label_7F3AE1B4;
    case 0x7F3AE1B8u: goto label_7F3AE1B8;
    case 0x7F3AE1BCu: goto label_7F3AE1BC;
    case 0x7F3AE1C0u: goto label_7F3AE1C0;
    case 0x7F3AE1C4u: goto label_7F3AE1C4;
    case 0x7F3AE1C8u: goto label_7F3AE1C8;
    case 0x7F3AE1CCu: goto label_7F3AE1CC;
    case 0x7F3AE1D0u: goto label_7F3AE1D0;
    case 0x7F3AE1D4u: goto label_7F3AE1D4;
    case 0x7F3AE1D8u: goto label_7F3AE1D8;
    case 0x7F3AE1DCu: goto label_7F3AE1DC;
    case 0x7F3AE1E0u: goto label_7F3AE1E0;
    case 0x7F3AE1E4u: goto label_7F3AE1E4;
    case 0x7F3AE1E8u: goto label_7F3AE1E8;
    case 0x7F3AE1ECu: goto label_7F3AE1EC;
    case 0x7F3AE1F0u: goto label_7F3AE1F0;
    case 0x7F3AE1F4u: goto label_7F3AE1F4;
    case 0x7F3AE1F8u: goto label_7F3AE1F8;
    case 0x7F3AE1FCu: goto label_7F3AE1FC;
    case 0x7F3AE200u: goto label_7F3AE200;
    case 0x7F3AE204u: goto label_7F3AE204;
    case 0x7F3AE208u: goto label_7F3AE208;
    case 0x7F3AE20Cu: goto label_7F3AE20C;
    case 0x7F3AE210u: goto label_7F3AE210;
    case 0x7F3AE214u: goto label_7F3AE214;
    case 0x7F3AE218u: goto label_7F3AE218;
    case 0x7F3AE21Cu: goto label_7F3AE21C;
    case 0x7F3AE220u: goto label_7F3AE220;
    case 0x7F3AE224u: goto label_7F3AE224;
    case 0x7F3AE228u: goto label_7F3AE228;
    case 0x7F3AE22Cu: goto label_7F3AE22C;
    case 0x7F3AE230u: goto label_7F3AE230;
    case 0x7F3AE234u: goto label_7F3AE234;
    case 0x7F3AE238u: goto label_7F3AE238;
    case 0x7F3AE23Cu: goto label_7F3AE23C;
    case 0x7F3AE240u: goto label_7F3AE240;
    case 0x7F3AE244u: goto label_7F3AE244;
    case 0x7F3AE248u: goto label_7F3AE248;
    case 0x7F3AE24Cu: goto label_7F3AE24C;
    case 0x7F3AE250u: goto label_7F3AE250;
    case 0x7F3AE254u: goto label_7F3AE254;
    case 0x7F3AE258u: goto label_7F3AE258;
    case 0x7F3AE25Cu: goto label_7F3AE25C;
    case 0x7F3AE260u: goto label_7F3AE260;
    case 0x7F3AE264u: goto label_7F3AE264;
    case 0x7F3AE268u: goto label_7F3AE268;
    case 0x7F3AE26Cu: goto label_7F3AE26C;
    case 0x7F3AE270u: goto label_7F3AE270;
    case 0x7F3AE274u: goto label_7F3AE274;
    case 0x7F3AE278u: goto label_7F3AE278;
    case 0x7F3AE27Cu: goto label_7F3AE27C;
    case 0x7F3AE280u: goto label_7F3AE280;
    case 0x7F3AE284u: goto label_7F3AE284;
    case 0x7F3AE288u: goto label_7F3AE288;
    case 0x7F3AE28Cu: goto label_7F3AE28C;
    case 0x7F3AE290u: goto label_7F3AE290;
    case 0x7F3AE294u: goto label_7F3AE294;
    case 0x7F3AE298u: goto label_7F3AE298;
    case 0x7F3AE29Cu: goto label_7F3AE29C;
    case 0x7F3AE2A0u: goto label_7F3AE2A0;
    case 0x7F3AE2A4u: goto label_7F3AE2A4;
    case 0x7F3AE2A8u: goto label_7F3AE2A8;
    case 0x7F3AE2ACu: goto label_7F3AE2AC;
    case 0x7F3AE2B0u: goto label_7F3AE2B0;
    case 0x7F3AE2B4u: goto label_7F3AE2B4;
    case 0x7F3AE2B8u: goto label_7F3AE2B8;
    case 0x7F3AE2BCu: goto label_7F3AE2BC;
    case 0x7F3AE2C0u: goto label_7F3AE2C0;
    case 0x7F3AE2C4u: goto label_7F3AE2C4;
    case 0x7F3AE2C8u: goto label_7F3AE2C8;
    case 0x7F3AE2CCu: goto label_7F3AE2CC;
    case 0x7F3AE2D0u: goto label_7F3AE2D0;
    case 0x7F3AE2D4u: goto label_7F3AE2D4;
    case 0x7F3AE2D8u: goto label_7F3AE2D8;
    case 0x7F3AE2DCu: goto label_7F3AE2DC;
    case 0x7F3AE2E0u: goto label_7F3AE2E0;
    case 0x7F3AE2E4u: goto label_7F3AE2E4;
    case 0x7F3AE2E8u: goto label_7F3AE2E8;
    case 0x7F3AE2ECu: goto label_7F3AE2EC;
    case 0x7F3AE2F0u: goto label_7F3AE2F0;
    case 0x7F3AE2F4u: goto label_7F3AE2F4;
    case 0x7F3AE2F8u: goto label_7F3AE2F8;
    case 0x7F3AE2FCu: goto label_7F3AE2FC;
    case 0x7F3AE300u: goto label_7F3AE300;
    case 0x7F3AE304u: goto label_7F3AE304;
    case 0x7F3AE308u: goto label_7F3AE308;
    case 0x7F3AE30Cu: goto label_7F3AE30C;
    case 0x7F3AE310u: goto label_7F3AE310;
    case 0x7F3AE314u: goto label_7F3AE314;
    case 0x7F3AE318u: goto label_7F3AE318;
    case 0x7F3AE31Cu: goto label_7F3AE31C;
    case 0x7F3AE320u: goto label_7F3AE320;
    case 0x7F3AE324u: goto label_7F3AE324;
    case 0x7F3AE328u: goto label_7F3AE328;
    case 0x7F3AE32Cu: goto label_7F3AE32C;
    case 0x7F3AE330u: goto label_7F3AE330;
    case 0x7F3AE334u: goto label_7F3AE334;
    case 0x7F3AE338u: goto label_7F3AE338;
    case 0x7F3AE33Cu: goto label_7F3AE33C;
    case 0x7F3AE340u: goto label_7F3AE340;
    case 0x7F3AE344u: goto label_7F3AE344;
    case 0x7F3AE348u: goto label_7F3AE348;
    case 0x7F3AE34Cu: goto label_7F3AE34C;
    case 0x7F3AE350u: goto label_7F3AE350;
    case 0x7F3AE354u: goto label_7F3AE354;
    case 0x7F3AE358u: goto label_7F3AE358;
    case 0x7F3AE35Cu: goto label_7F3AE35C;
    case 0x7F3AE360u: goto label_7F3AE360;
    case 0x7F3AE364u: goto label_7F3AE364;
    case 0x7F3AE368u: goto label_7F3AE368;
    case 0x7F3AE36Cu: goto label_7F3AE36C;
    case 0x7F3AE370u: goto label_7F3AE370;
    case 0x7F3AE374u: goto label_7F3AE374;
    case 0x7F3AE378u: goto label_7F3AE378;
    case 0x7F3AE37Cu: goto label_7F3AE37C;
    case 0x7F3AE380u: goto label_7F3AE380;
    case 0x7F3AE384u: goto label_7F3AE384;
    case 0x7F3AE388u: goto label_7F3AE388;
    case 0x7F3AE38Cu: goto label_7F3AE38C;
    case 0x7F3AE390u: goto label_7F3AE390;
    case 0x7F3AE394u: goto label_7F3AE394;
    case 0x7F3AE398u: goto label_7F3AE398;
    case 0x7F3AE39Cu: goto label_7F3AE39C;
    case 0x7F3AE3A0u: goto label_7F3AE3A0;
    case 0x7F3AE3A4u: goto label_7F3AE3A4;
    case 0x7F3AE3A8u: goto label_7F3AE3A8;
    case 0x7F3AE3ACu: goto label_7F3AE3AC;
    case 0x7F3AE3B0u: goto label_7F3AE3B0;
    case 0x7F3AE3B4u: goto label_7F3AE3B4;
    case 0x7F3AE3B8u: goto label_7F3AE3B8;
    case 0x7F3AE3BCu: goto label_7F3AE3BC;
    case 0x7F3AE3C0u: goto label_7F3AE3C0;
    case 0x7F3AE3C4u: goto label_7F3AE3C4;
    case 0x7F3AE3C8u: goto label_7F3AE3C8;
    case 0x7F3AE3CCu: goto label_7F3AE3CC;
    case 0x7F3AE3D0u: goto label_7F3AE3D0;
    case 0x7F3AE3D4u: goto label_7F3AE3D4;
    case 0x7F3AE3D8u: goto label_7F3AE3D8;
    case 0x7F3AE3DCu: goto label_7F3AE3DC;
    case 0x7F3AE3E0u: goto label_7F3AE3E0;
    case 0x7F3AE3E4u: goto label_7F3AE3E4;
    case 0x7F3AE3E8u: goto label_7F3AE3E8;
    case 0x7F3AE3ECu: goto label_7F3AE3EC;
    case 0x7F3AE3F0u: goto label_7F3AE3F0;
    case 0x7F3AE3F4u: goto label_7F3AE3F4;
    case 0x7F3AE3F8u: goto label_7F3AE3F8;
    case 0x7F3AE3FCu: goto label_7F3AE3FC;
    case 0x7F3AE400u: goto label_7F3AE400;
    case 0x7F3AE404u: goto label_7F3AE404;
    case 0x7F3AE408u: goto label_7F3AE408;
    case 0x7F3AE40Cu: goto label_7F3AE40C;
    case 0x7F3AE410u: goto label_7F3AE410;
    case 0x7F3AE414u: goto label_7F3AE414;
    case 0x7F3AE418u: goto label_7F3AE418;
    case 0x7F3AE41Cu: goto label_7F3AE41C;
    case 0x7F3AE420u: goto label_7F3AE420;
    case 0x7F3AE424u: goto label_7F3AE424;
    case 0x7F3AE428u: goto label_7F3AE428;
    case 0x7F3AE42Cu: goto label_7F3AE42C;
    case 0x7F3AE430u: goto label_7F3AE430;
    case 0x7F3AE434u: goto label_7F3AE434;
    case 0x7F3AE438u: goto label_7F3AE438;
    case 0x7F3AE43Cu: goto label_7F3AE43C;
    case 0x7F3AE440u: goto label_7F3AE440;
    case 0x7F3AE444u: goto label_7F3AE444;
    case 0x7F3AE448u: goto label_7F3AE448;
    case 0x7F3AE44Cu: goto label_7F3AE44C;
    case 0x7F3AE450u: goto label_7F3AE450;
    case 0x7F3AE454u: goto label_7F3AE454;
    case 0x7F3AE458u: goto label_7F3AE458;
    case 0x7F3AE45Cu: goto label_7F3AE45C;
    case 0x7F3AE460u: goto label_7F3AE460;
    case 0x7F3AE464u: goto label_7F3AE464;
    case 0x7F3AE468u: goto label_7F3AE468;
    case 0x7F3AE46Cu: goto label_7F3AE46C;
    case 0x7F3AE470u: goto label_7F3AE470;
    case 0x7F3AE474u: goto label_7F3AE474;
    case 0x7F3AE478u: goto label_7F3AE478;
    case 0x7F3AE47Cu: goto label_7F3AE47C;
    case 0x7F3AE480u: goto label_7F3AE480;
    case 0x7F3AE484u: goto label_7F3AE484;
    case 0x7F3AE488u: goto label_7F3AE488;
    case 0x7F3AE48Cu: goto label_7F3AE48C;
    case 0x7F3AE490u: goto label_7F3AE490;
    case 0x7F3AE494u: goto label_7F3AE494;
    case 0x7F3AE498u: goto label_7F3AE498;
    case 0x7F3AE49Cu: goto label_7F3AE49C;
    case 0x7F3AE4A0u: goto label_7F3AE4A0;
    case 0x7F3AE4A4u: goto label_7F3AE4A4;
    case 0x7F3AE4A8u: goto label_7F3AE4A8;
    case 0x7F3AE4ACu: goto label_7F3AE4AC;
    case 0x7F3AE4B0u: goto label_7F3AE4B0;
    case 0x7F3AE4B4u: goto label_7F3AE4B4;
    case 0x7F3AE4B8u: goto label_7F3AE4B8;
    case 0x7F3AE4BCu: goto label_7F3AE4BC;
    case 0x7F3AE4C0u: goto label_7F3AE4C0;
    case 0x7F3AE4C4u: goto label_7F3AE4C4;
    case 0x7F3AE4C8u: goto label_7F3AE4C8;
    case 0x7F3AE4CCu: goto label_7F3AE4CC;
    case 0x7F3AE4D0u: goto label_7F3AE4D0;
    case 0x7F3AE4D4u: goto label_7F3AE4D4;
    case 0x7F3AE4D8u: goto label_7F3AE4D8;
    case 0x7F3AE4DCu: goto label_7F3AE4DC;
    case 0x7F3AE4E0u: goto label_7F3AE4E0;
    case 0x7F3AE4E4u: goto label_7F3AE4E4;
    case 0x7F3AE4E8u: goto label_7F3AE4E8;
    case 0x7F3AE4ECu: goto label_7F3AE4EC;
    case 0x7F3AE4F0u: goto label_7F3AE4F0;
    case 0x7F3AE4F4u: goto label_7F3AE4F4;
    case 0x7F3AE4F8u: goto label_7F3AE4F8;
    case 0x7F3AE4FCu: goto label_7F3AE4FC;
    case 0x7F3AE500u: goto label_7F3AE500;
    case 0x7F3AE504u: goto label_7F3AE504;
    case 0x7F3AE508u: goto label_7F3AE508;
    case 0x7F3AE50Cu: goto label_7F3AE50C;
    case 0x7F3AE510u: goto label_7F3AE510;
    case 0x7F3AE514u: goto label_7F3AE514;
    case 0x7F3AE518u: goto label_7F3AE518;
    case 0x7F3AE51Cu: goto label_7F3AE51C;
    case 0x7F3AE520u: goto label_7F3AE520;
    case 0x7F3AE524u: goto label_7F3AE524;
    case 0x7F3AE528u: goto label_7F3AE528;
    case 0x7F3AE52Cu: goto label_7F3AE52C;
    case 0x7F3AE530u: goto label_7F3AE530;
    case 0x7F3AE534u: goto label_7F3AE534;
    case 0x7F3AE538u: goto label_7F3AE538;
    case 0x7F3AE53Cu: goto label_7F3AE53C;
    case 0x7F3AE540u: goto label_7F3AE540;
    case 0x7F3AE544u: goto label_7F3AE544;
    case 0x7F3AE548u: goto label_7F3AE548;
    case 0x7F3AE54Cu: goto label_7F3AE54C;
    case 0x7F3AE550u: goto label_7F3AE550;
    case 0x7F3AE554u: goto label_7F3AE554;
    case 0x7F3AE558u: goto label_7F3AE558;
    case 0x7F3AE55Cu: goto label_7F3AE55C;
    case 0x7F3AE560u: goto label_7F3AE560;
    case 0x7F3AE564u: goto label_7F3AE564;
    case 0x7F3AE568u: goto label_7F3AE568;
    case 0x7F3AE56Cu: goto label_7F3AE56C;
    case 0x7F3AE570u: goto label_7F3AE570;
    case 0x7F3AE574u: goto label_7F3AE574;
    case 0x7F3AE578u: goto label_7F3AE578;
    case 0x7F3AE57Cu: goto label_7F3AE57C;
    case 0x7F3AE580u: goto label_7F3AE580;
    case 0x7F3AE584u: goto label_7F3AE584;
    case 0x7F3AE588u: goto label_7F3AE588;
    case 0x7F3AE58Cu: goto label_7F3AE58C;
    case 0x7F3AE590u: goto label_7F3AE590;
    case 0x7F3AE594u: goto label_7F3AE594;
    case 0x7F3AE598u: goto label_7F3AE598;
    case 0x7F3AE59Cu: goto label_7F3AE59C;
    case 0x7F3AE5A0u: goto label_7F3AE5A0;
    case 0x7F3AE5A4u: goto label_7F3AE5A4;
    case 0x7F3AE5A8u: goto label_7F3AE5A8;
    case 0x7F3AE5ACu: goto label_7F3AE5AC;
    case 0x7F3AE5B0u: goto label_7F3AE5B0;
    case 0x7F3AE5B4u: goto label_7F3AE5B4;
    case 0x7F3AE5B8u: goto label_7F3AE5B8;
    case 0x7F3AE5BCu: goto label_7F3AE5BC;
    case 0x7F3AE5C0u: goto label_7F3AE5C0;
    case 0x7F3AE5C4u: goto label_7F3AE5C4;
    case 0x7F3AE5C8u: goto label_7F3AE5C8;
    case 0x7F3AE5CCu: goto label_7F3AE5CC;
    case 0x7F3AE5D0u: goto label_7F3AE5D0;
    case 0x7F3AE5D4u: goto label_7F3AE5D4;
    case 0x7F3AE5D8u: goto label_7F3AE5D8;
    case 0x7F3AE5DCu: goto label_7F3AE5DC;
    case 0x7F3AE5E0u: goto label_7F3AE5E0;
    case 0x7F3AE5E4u: goto label_7F3AE5E4;
    case 0x7F3AE5E8u: goto label_7F3AE5E8;
    case 0x7F3AE5ECu: goto label_7F3AE5EC;
    case 0x7F3AE5F0u: goto label_7F3AE5F0;
    case 0x7F3AE5F4u: goto label_7F3AE5F4;
    case 0x7F3AE5F8u: goto label_7F3AE5F8;
    case 0x7F3AE5FCu: goto label_7F3AE5FC;
    case 0x7F3AE600u: goto label_7F3AE600;
    case 0x7F3AE604u: goto label_7F3AE604;
    case 0x7F3AE608u: goto label_7F3AE608;
    case 0x7F3AE60Cu: goto label_7F3AE60C;
    case 0x7F3AE610u: goto label_7F3AE610;
    case 0x7F3AE614u: goto label_7F3AE614;
    case 0x7F3AE618u: goto label_7F3AE618;
    case 0x7F3AE61Cu: goto label_7F3AE61C;
    case 0x7F3AE620u: goto label_7F3AE620;
    case 0x7F3AE624u: goto label_7F3AE624;
    case 0x7F3AE628u: goto label_7F3AE628;
    case 0x7F3AE62Cu: goto label_7F3AE62C;
    case 0x7F3AE630u: goto label_7F3AE630;
    case 0x7F3AE634u: goto label_7F3AE634;
    case 0x7F3AE638u: goto label_7F3AE638;
    case 0x7F3AE63Cu: goto label_7F3AE63C;
    case 0x7F3AE640u: goto label_7F3AE640;
    case 0x7F3AE644u: goto label_7F3AE644;
    case 0x7F3AE648u: goto label_7F3AE648;
    case 0x7F3AE64Cu: goto label_7F3AE64C;
    case 0x7F3AE650u: goto label_7F3AE650;
    case 0x7F3AE654u: goto label_7F3AE654;
    case 0x7F3AE658u: goto label_7F3AE658;
    case 0x7F3AE65Cu: goto label_7F3AE65C;
    case 0x7F3AE660u: goto label_7F3AE660;
    case 0x7F3AE664u: goto label_7F3AE664;
    case 0x7F3AE668u: goto label_7F3AE668;
    case 0x7F3AE66Cu: goto label_7F3AE66C;
    case 0x7F3AE670u: goto label_7F3AE670;
    case 0x7F3AE674u: goto label_7F3AE674;
    case 0x7F3AE678u: goto label_7F3AE678;
    case 0x7F3AE67Cu: goto label_7F3AE67C;
    case 0x7F3AE680u: goto label_7F3AE680;
    case 0x7F3AE684u: goto label_7F3AE684;
    case 0x7F3AE688u: goto label_7F3AE688;
    case 0x7F3AE68Cu: goto label_7F3AE68C;
    case 0x7F3AE690u: goto label_7F3AE690;
    case 0x7F3AE694u: goto label_7F3AE694;
    case 0x7F3AE698u: goto label_7F3AE698;
    case 0x7F3AE69Cu: goto label_7F3AE69C;
    case 0x7F3AE6A0u: goto label_7F3AE6A0;
    case 0x7F3AE6A4u: goto label_7F3AE6A4;
    case 0x7F3AE6A8u: goto label_7F3AE6A8;
    case 0x7F3AE6ACu: goto label_7F3AE6AC;
    case 0x7F3AE6B0u: goto label_7F3AE6B0;
    case 0x7F3AE6B4u: goto label_7F3AE6B4;
    case 0x7F3AE6B8u: goto label_7F3AE6B8;
    case 0x7F3AE6BCu: goto label_7F3AE6BC;
    case 0x7F3AE6C0u: goto label_7F3AE6C0;
    case 0x7F3AE6C4u: goto label_7F3AE6C4;
    case 0x7F3AE6C8u: goto label_7F3AE6C8;
    case 0x7F3AE6CCu: goto label_7F3AE6CC;
    case 0x7F3AE6D0u: goto label_7F3AE6D0;
    case 0x7F3AE6D4u: goto label_7F3AE6D4;
    case 0x7F3AE6D8u: goto label_7F3AE6D8;
    case 0x7F3AE6DCu: goto label_7F3AE6DC;
    case 0x7F3AE6E0u: goto label_7F3AE6E0;
    case 0x7F3AE6E4u: goto label_7F3AE6E4;
    case 0x7F3AE6E8u: goto label_7F3AE6E8;
    case 0x7F3AE6ECu: goto label_7F3AE6EC;
    case 0x7F3AE6F0u: goto label_7F3AE6F0;
    case 0x7F3AE6F4u: goto label_7F3AE6F4;
    case 0x7F3AE6F8u: goto label_7F3AE6F8;
    case 0x7F3AE6FCu: goto label_7F3AE6FC;
    case 0x7F3AE700u: goto label_7F3AE700;
    case 0x7F3AE704u: goto label_7F3AE704;
    case 0x7F3AE708u: goto label_7F3AE708;
    case 0x7F3AE70Cu: goto label_7F3AE70C;
    case 0x7F3AE710u: goto label_7F3AE710;
    case 0x7F3AE714u: goto label_7F3AE714;
    case 0x7F3AE718u: goto label_7F3AE718;
    case 0x7F3AE71Cu: goto label_7F3AE71C;
    case 0x7F3AE720u: goto label_7F3AE720;
    case 0x7F3AE724u: goto label_7F3AE724;
    case 0x7F3AE728u: goto label_7F3AE728;
    case 0x7F3AE72Cu: goto label_7F3AE72C;
    case 0x7F3AE730u: goto label_7F3AE730;
    case 0x7F3AE734u: goto label_7F3AE734;
    case 0x7F3AE738u: goto label_7F3AE738;
    case 0x7F3AE73Cu: goto label_7F3AE73C;
    case 0x7F3AE740u: goto label_7F3AE740;
    case 0x7F3AE744u: goto label_7F3AE744;
    case 0x7F3AE748u: goto label_7F3AE748;
    case 0x7F3AE74Cu: goto label_7F3AE74C;
    case 0x7F3AE750u: goto label_7F3AE750;
    case 0x7F3AE754u: goto label_7F3AE754;
    case 0x7F3AE758u: goto label_7F3AE758;
    case 0x7F3AE75Cu: goto label_7F3AE75C;
    case 0x7F3AE760u: goto label_7F3AE760;
    case 0x7F3AE764u: goto label_7F3AE764;
    case 0x7F3AE768u: goto label_7F3AE768;
    case 0x7F3AE76Cu: goto label_7F3AE76C;
    case 0x7F3AE770u: goto label_7F3AE770;
    case 0x7F3AE774u: goto label_7F3AE774;
    case 0x7F3AE778u: goto label_7F3AE778;
    case 0x7F3AE77Cu: goto label_7F3AE77C;
    case 0x7F3AE780u: goto label_7F3AE780;
    case 0x7F3AE784u: goto label_7F3AE784;
    case 0x7F3AE788u: goto label_7F3AE788;
    case 0x7F3AE78Cu: goto label_7F3AE78C;
    case 0x7F3AE790u: goto label_7F3AE790;
    case 0x7F3AE794u: goto label_7F3AE794;
    case 0x7F3AE798u: goto label_7F3AE798;
    case 0x7F3AE79Cu: goto label_7F3AE79C;
    case 0x7F3AE7A0u: goto label_7F3AE7A0;
    case 0x7F3AE7A4u: goto label_7F3AE7A4;
    case 0x7F3AE7A8u: goto label_7F3AE7A8;
    case 0x7F3AE7ACu: goto label_7F3AE7AC;
    case 0x7F3AE7B0u: goto label_7F3AE7B0;
    case 0x7F3AE7B4u: goto label_7F3AE7B4;
    case 0x7F3AE7B8u: goto label_7F3AE7B8;
    case 0x7F3AE7BCu: goto label_7F3AE7BC;
    case 0x7F3AE7C0u: goto label_7F3AE7C0;
    case 0x7F3AE7C4u: goto label_7F3AE7C4;
    case 0x7F3AE7C8u: goto label_7F3AE7C8;
    case 0x7F3AE7CCu: goto label_7F3AE7CC;
    case 0x7F3AE7D0u: goto label_7F3AE7D0;
    case 0x7F3AE7D4u: goto label_7F3AE7D4;
    case 0x7F3AE7D8u: goto label_7F3AE7D8;
    case 0x7F3AE7DCu: goto label_7F3AE7DC;
    case 0x7F3AE7E0u: goto label_7F3AE7E0;
    case 0x7F3AE7E4u: goto label_7F3AE7E4;
    case 0x7F3AE7E8u: goto label_7F3AE7E8;
    case 0x7F3AE7ECu: goto label_7F3AE7EC;
    case 0x7F3AE7F0u: goto label_7F3AE7F0;
    case 0x7F3AE7F4u: goto label_7F3AE7F4;
    case 0x7F3AE7F8u: goto label_7F3AE7F8;
    case 0x7F3AE7FCu: goto label_7F3AE7FC;
    case 0x7F3AE800u: goto label_7F3AE800;
    case 0x7F3AE804u: goto label_7F3AE804;
    case 0x7F3AE808u: goto label_7F3AE808;
    case 0x7F3AE80Cu: goto label_7F3AE80C;
    case 0x7F3AE810u: goto label_7F3AE810;
    case 0x7F3AE814u: goto label_7F3AE814;
    case 0x7F3AE818u: goto label_7F3AE818;
    case 0x7F3AE81Cu: goto label_7F3AE81C;
    case 0x7F3AE820u: goto label_7F3AE820;
    case 0x7F3AE824u: goto label_7F3AE824;
    case 0x7F3AE828u: goto label_7F3AE828;
    case 0x7F3AE82Cu: goto label_7F3AE82C;
    case 0x7F3AE830u: goto label_7F3AE830;
    case 0x7F3AE834u: goto label_7F3AE834;
    case 0x7F3AE838u: goto label_7F3AE838;
    case 0x7F3AE83Cu: goto label_7F3AE83C;
    case 0x7F3AE840u: goto label_7F3AE840;
    case 0x7F3AE844u: goto label_7F3AE844;
    case 0x7F3AE848u: goto label_7F3AE848;
    case 0x7F3AE84Cu: goto label_7F3AE84C;
    case 0x7F3AE850u: goto label_7F3AE850;
    case 0x7F3AE854u: goto label_7F3AE854;
    case 0x7F3AE858u: goto label_7F3AE858;
    case 0x7F3AE85Cu: goto label_7F3AE85C;
    case 0x7F3AE860u: goto label_7F3AE860;
    case 0x7F3AE864u: goto label_7F3AE864;
    case 0x7F3AE868u: goto label_7F3AE868;
    case 0x7F3AE86Cu: goto label_7F3AE86C;
    case 0x7F3AE870u: goto label_7F3AE870;
    case 0x7F3AE874u: goto label_7F3AE874;
    case 0x7F3AE878u: goto label_7F3AE878;
    case 0x7F3AE87Cu: goto label_7F3AE87C;
    case 0x7F3AE880u: goto label_7F3AE880;
    case 0x7F3AE884u: goto label_7F3AE884;
    case 0x7F3AE888u: goto label_7F3AE888;
    case 0x7F3AE88Cu: goto label_7F3AE88C;
    case 0x7F3AE890u: goto label_7F3AE890;
    case 0x7F3AE894u: goto label_7F3AE894;
    case 0x7F3AE898u: goto label_7F3AE898;
    case 0x7F3AE89Cu: goto label_7F3AE89C;
    case 0x7F3AE8A0u: goto label_7F3AE8A0;
    case 0x7F3AE8A4u: goto label_7F3AE8A4;
    case 0x7F3AE8A8u: goto label_7F3AE8A8;
    case 0x7F3AE8ACu: goto label_7F3AE8AC;
    case 0x7F3AE8B0u: goto label_7F3AE8B0;
    case 0x7F3AE8B4u: goto label_7F3AE8B4;
    case 0x7F3AE8B8u: goto label_7F3AE8B8;
    case 0x7F3AE8BCu: goto label_7F3AE8BC;
    case 0x7F3AE8C0u: goto label_7F3AE8C0;
    case 0x7F3AE8C4u: goto label_7F3AE8C4;
    case 0x7F3AE8C8u: goto label_7F3AE8C8;
    case 0x7F3AE8CCu: goto label_7F3AE8CC;
    case 0x7F3AE8D0u: goto label_7F3AE8D0;
    case 0x7F3AE8D4u: goto label_7F3AE8D4;
    case 0x7F3AE8D8u: goto label_7F3AE8D8;
    case 0x7F3AE8DCu: goto label_7F3AE8DC;
    case 0x7F3AE8E0u: goto label_7F3AE8E0;
    case 0x7F3AE8E4u: goto label_7F3AE8E4;
    case 0x7F3AE8E8u: goto label_7F3AE8E8;
    case 0x7F3AE8ECu: goto label_7F3AE8EC;
    case 0x7F3AE8F0u: goto label_7F3AE8F0;
    case 0x7F3AE8F4u: goto label_7F3AE8F4;
    case 0x7F3AE8F8u: goto label_7F3AE8F8;
    case 0x7F3AE8FCu: goto label_7F3AE8FC;
    case 0x7F3AE900u: goto label_7F3AE900;
    case 0x7F3AE904u: goto label_7F3AE904;
    case 0x7F3AE908u: goto label_7F3AE908;
    case 0x7F3AE90Cu: goto label_7F3AE90C;
    case 0x7F3AE910u: goto label_7F3AE910;
    case 0x7F3AE914u: goto label_7F3AE914;
    case 0x7F3AE918u: goto label_7F3AE918;
    case 0x7F3AE91Cu: goto label_7F3AE91C;
    case 0x7F3AE920u: goto label_7F3AE920;
    case 0x7F3AE924u: goto label_7F3AE924;
    case 0x7F3AE928u: goto label_7F3AE928;
    case 0x7F3AE92Cu: goto label_7F3AE92C;
    case 0x7F3AE930u: goto label_7F3AE930;
    case 0x7F3AE934u: goto label_7F3AE934;
    case 0x7F3AE938u: goto label_7F3AE938;
    case 0x7F3AE93Cu: goto label_7F3AE93C;
    case 0x7F3AE940u: goto label_7F3AE940;
    case 0x7F3AE944u: goto label_7F3AE944;
    case 0x7F3AE948u: goto label_7F3AE948;
    case 0x7F3AE94Cu: goto label_7F3AE94C;
    case 0x7F3AE950u: goto label_7F3AE950;
    case 0x7F3AE954u: goto label_7F3AE954;
    case 0x7F3AE958u: goto label_7F3AE958;
    case 0x7F3AE95Cu: goto label_7F3AE95C;
    case 0x7F3AE960u: goto label_7F3AE960;
    case 0x7F3AE964u: goto label_7F3AE964;
    case 0x7F3AE968u: goto label_7F3AE968;
    case 0x7F3AE96Cu: goto label_7F3AE96C;
    case 0x7F3AE970u: goto label_7F3AE970;
    case 0x7F3AE974u: goto label_7F3AE974;
    case 0x7F3AE978u: goto label_7F3AE978;
    case 0x7F3AE97Cu: goto label_7F3AE97C;
    case 0x7F3AE980u: goto label_7F3AE980;
    case 0x7F3AE984u: goto label_7F3AE984;
    case 0x7F3AE988u: goto label_7F3AE988;
    case 0x7F3AE98Cu: goto label_7F3AE98C;
    case 0x7F3AE990u: goto label_7F3AE990;
    case 0x7F3AE994u: goto label_7F3AE994;
    case 0x7F3AE998u: goto label_7F3AE998;
    case 0x7F3AE99Cu: goto label_7F3AE99C;
    case 0x7F3AE9A0u: goto label_7F3AE9A0;
    case 0x7F3AE9A4u: goto label_7F3AE9A4;
    case 0x7F3AE9A8u: goto label_7F3AE9A8;
    case 0x7F3AE9ACu: goto label_7F3AE9AC;
    case 0x7F3AE9B0u: goto label_7F3AE9B0;
    case 0x7F3AE9B4u: goto label_7F3AE9B4;
    case 0x7F3AE9B8u: goto label_7F3AE9B8;
    case 0x7F3AE9BCu: goto label_7F3AE9BC;
    case 0x7F3AE9C0u: goto label_7F3AE9C0;
    case 0x7F3AE9C4u: goto label_7F3AE9C4;
    case 0x7F3AE9C8u: goto label_7F3AE9C8;
    case 0x7F3AE9CCu: goto label_7F3AE9CC;
    case 0x7F3AE9D0u: goto label_7F3AE9D0;
    case 0x7F3AE9D4u: goto label_7F3AE9D4;
    case 0x7F3AE9D8u: goto label_7F3AE9D8;
    case 0x7F3AE9DCu: goto label_7F3AE9DC;
    case 0x7F3AE9E0u: goto label_7F3AE9E0;
    case 0x7F3AE9E4u: goto label_7F3AE9E4;
    case 0x7F3AE9E8u: goto label_7F3AE9E8;
    case 0x7F3AE9ECu: goto label_7F3AE9EC;
    case 0x7F3AE9F0u: goto label_7F3AE9F0;
    case 0x7F3AE9F4u: goto label_7F3AE9F4;
    case 0x7F3AE9F8u: goto label_7F3AE9F8;
    case 0x7F3AE9FCu: goto label_7F3AE9FC;
    case 0x7F3AEA00u: goto label_7F3AEA00;
    case 0x7F3AEA04u: goto label_7F3AEA04;
    case 0x7F3AEA08u: goto label_7F3AEA08;
    case 0x7F3AEA0Cu: goto label_7F3AEA0C;
    case 0x7F3AEA10u: goto label_7F3AEA10;
    case 0x7F3AEA14u: goto label_7F3AEA14;
    case 0x7F3AEA18u: goto label_7F3AEA18;
    case 0x7F3AEA1Cu: goto label_7F3AEA1C;
    case 0x7F3AEA20u: goto label_7F3AEA20;
    case 0x7F3AEA24u: goto label_7F3AEA24;
    case 0x7F3AEA28u: goto label_7F3AEA28;
    case 0x7F3AEA2Cu: goto label_7F3AEA2C;
    case 0x7F3AEA30u: goto label_7F3AEA30;
    case 0x7F3AEA34u: goto label_7F3AEA34;
    case 0x7F3AEA38u: goto label_7F3AEA38;
    case 0x7F3AEA3Cu: goto label_7F3AEA3C;
    case 0x7F3AEA40u: goto label_7F3AEA40;
    case 0x7F3AEA44u: goto label_7F3AEA44;
    case 0x7F3AEA48u: goto label_7F3AEA48;
    case 0x7F3AEA4Cu: goto label_7F3AEA4C;
    case 0x7F3AEA50u: goto label_7F3AEA50;
    case 0x7F3AEA54u: goto label_7F3AEA54;
    case 0x7F3AEA58u: goto label_7F3AEA58;
    case 0x7F3AEA5Cu: goto label_7F3AEA5C;
    case 0x7F3AEA60u: goto label_7F3AEA60;
    case 0x7F3AEA64u: goto label_7F3AEA64;
    case 0x7F3AEA68u: goto label_7F3AEA68;
    case 0x7F3AEA6Cu: goto label_7F3AEA6C;
    case 0x7F3AEA70u: goto label_7F3AEA70;
    case 0x7F3AEA74u: goto label_7F3AEA74;
    case 0x7F3AEA78u: goto label_7F3AEA78;
    case 0x7F3AEA7Cu: goto label_7F3AEA7C;
    case 0x7F3AEA80u: goto label_7F3AEA80;
    case 0x7F3AEA84u: goto label_7F3AEA84;
    case 0x7F3AEA88u: goto label_7F3AEA88;
    case 0x7F3AEA8Cu: goto label_7F3AEA8C;
    case 0x7F3AEA90u: goto label_7F3AEA90;
    case 0x7F3AEA94u: goto label_7F3AEA94;
    case 0x7F3AEA98u: goto label_7F3AEA98;
    case 0x7F3AEA9Cu: goto label_7F3AEA9C;
    case 0x7F3AEAA0u: goto label_7F3AEAA0;
    case 0x7F3AEAA4u: goto label_7F3AEAA4;
    case 0x7F3AEAA8u: goto label_7F3AEAA8;
    case 0x7F3AEAACu: goto label_7F3AEAAC;
    case 0x7F3AEAB0u: goto label_7F3AEAB0;
    case 0x7F3AEAB4u: goto label_7F3AEAB4;
    case 0x7F3AEAB8u: goto label_7F3AEAB8;
    case 0x7F3AEABCu: goto label_7F3AEABC;
    case 0x7F3AEAC0u: goto label_7F3AEAC0;
    case 0x7F3AEAC4u: goto label_7F3AEAC4;
    case 0x7F3AEAC8u: goto label_7F3AEAC8;
    case 0x7F3AEACCu: goto label_7F3AEACC;
    case 0x7F3AEAD0u: goto label_7F3AEAD0;
    case 0x7F3AEAD4u: goto label_7F3AEAD4;
    case 0x7F3AEAD8u: goto label_7F3AEAD8;
    case 0x7F3AEADCu: goto label_7F3AEADC;
    case 0x7F3AEAE0u: goto label_7F3AEAE0;
    case 0x7F3AEAE4u: goto label_7F3AEAE4;
    case 0x7F3AEAE8u: goto label_7F3AEAE8;
    case 0x7F3AEAECu: goto label_7F3AEAEC;
    case 0x7F3AEAF0u: goto label_7F3AEAF0;
    case 0x7F3AEAF4u: goto label_7F3AEAF4;
    case 0x7F3AEAF8u: goto label_7F3AEAF8;
    case 0x7F3AEAFCu: goto label_7F3AEAFC;
    case 0x7F3AEB00u: goto label_7F3AEB00;
    case 0x7F3AEB04u: goto label_7F3AEB04;
    case 0x7F3AEB08u: goto label_7F3AEB08;
    case 0x7F3AEB0Cu: goto label_7F3AEB0C;
    case 0x7F3AEB10u: goto label_7F3AEB10;
    case 0x7F3AEB14u: goto label_7F3AEB14;
    case 0x7F3AEB18u: goto label_7F3AEB18;
    case 0x7F3AEB1Cu: goto label_7F3AEB1C;
    case 0x7F3AEB20u: goto label_7F3AEB20;
    case 0x7F3AEB24u: goto label_7F3AEB24;
    case 0x7F3AEB28u: goto label_7F3AEB28;
    case 0x7F3AEB2Cu: goto label_7F3AEB2C;
    case 0x7F3AEB30u: goto label_7F3AEB30;
    case 0x7F3AEB34u: goto label_7F3AEB34;
    case 0x7F3AEB38u: goto label_7F3AEB38;
    case 0x7F3AEB3Cu: goto label_7F3AEB3C;
    case 0x7F3AEB40u: goto label_7F3AEB40;
    case 0x7F3AEB44u: goto label_7F3AEB44;
    case 0x7F3AEB48u: goto label_7F3AEB48;
    case 0x7F3AEB4Cu: goto label_7F3AEB4C;
    case 0x7F3AEB50u: goto label_7F3AEB50;
    case 0x7F3AEB54u: goto label_7F3AEB54;
    case 0x7F3AEB58u: goto label_7F3AEB58;
    case 0x7F3AEB5Cu: goto label_7F3AEB5C;
    case 0x7F3AEB60u: goto label_7F3AEB60;
    case 0x7F3AEB64u: goto label_7F3AEB64;
    case 0x7F3AEB68u: goto label_7F3AEB68;
    case 0x7F3AEB6Cu: goto label_7F3AEB6C;
    case 0x7F3AEB70u: goto label_7F3AEB70;
    case 0x7F3AEB74u: goto label_7F3AEB74;
    case 0x7F3AEB78u: goto label_7F3AEB78;
    case 0x7F3AEB7Cu: goto label_7F3AEB7C;
    case 0x7F3AEB80u: goto label_7F3AEB80;
    case 0x7F3AEB84u: goto label_7F3AEB84;
    case 0x7F3AEB88u: goto label_7F3AEB88;
    case 0x7F3AEB8Cu: goto label_7F3AEB8C;
    case 0x7F3AEB90u: goto label_7F3AEB90;
    case 0x7F3AEB94u: goto label_7F3AEB94;
    case 0x7F3AEB98u: goto label_7F3AEB98;
    case 0x7F3AEB9Cu: goto label_7F3AEB9C;
    case 0x7F3AEBA0u: goto label_7F3AEBA0;
    case 0x7F3AEBA4u: goto label_7F3AEBA4;
    case 0x7F3AEBA8u: goto label_7F3AEBA8;
    case 0x7F3AEBACu: goto label_7F3AEBAC;
    case 0x7F3AEBB0u: goto label_7F3AEBB0;
    case 0x7F3AEBB4u: goto label_7F3AEBB4;
    case 0x7F3AEBB8u: goto label_7F3AEBB8;
    case 0x7F3AEBBCu: goto label_7F3AEBBC;
    case 0x7F3AEBC0u: goto label_7F3AEBC0;
    case 0x7F3AEBC4u: goto label_7F3AEBC4;
    case 0x7F3AEBC8u: goto label_7F3AEBC8;
    case 0x7F3AEBCCu: goto label_7F3AEBCC;
    case 0x7F3AEBD0u: goto label_7F3AEBD0;
    case 0x7F3AEBD4u: goto label_7F3AEBD4;
    case 0x7F3AEBD8u: goto label_7F3AEBD8;
    case 0x7F3AEBDCu: goto label_7F3AEBDC;
    case 0x7F3AEBE0u: goto label_7F3AEBE0;
    case 0x7F3AEBE4u: goto label_7F3AEBE4;
    case 0x7F3AEBE8u: goto label_7F3AEBE8;
    case 0x7F3AEBECu: goto label_7F3AEBEC;
    case 0x7F3AEBF0u: goto label_7F3AEBF0;
    case 0x7F3AEBF4u: goto label_7F3AEBF4;
    case 0x7F3AEBF8u: goto label_7F3AEBF8;
    case 0x7F3AEBFCu: goto label_7F3AEBFC;
    case 0x7F3AEC00u: goto label_7F3AEC00;
    case 0x7F3AEC04u: goto label_7F3AEC04;
    case 0x7F3AEC08u: goto label_7F3AEC08;
    case 0x7F3AEC0Cu: goto label_7F3AEC0C;
    case 0x7F3AEC10u: goto label_7F3AEC10;
    case 0x7F3AEC14u: goto label_7F3AEC14;
    case 0x7F3AEC18u: goto label_7F3AEC18;
    case 0x7F3AEC1Cu: goto label_7F3AEC1C;
    case 0x7F3AEC20u: goto label_7F3AEC20;
    case 0x7F3AEC24u: goto label_7F3AEC24;
    case 0x7F3AEC28u: goto label_7F3AEC28;
    case 0x7F3AEC2Cu: goto label_7F3AEC2C;
    case 0x7F3AEC30u: goto label_7F3AEC30;
    case 0x7F3AEC34u: goto label_7F3AEC34;
    case 0x7F3AEC38u: goto label_7F3AEC38;
    case 0x7F3AEC3Cu: goto label_7F3AEC3C;
    case 0x7F3AEC40u: goto label_7F3AEC40;
    case 0x7F3AEC44u: goto label_7F3AEC44;
    case 0x7F3AEC48u: goto label_7F3AEC48;
    case 0x7F3AEC4Cu: goto label_7F3AEC4C;
    case 0x7F3AEC50u: goto label_7F3AEC50;
    case 0x7F3AEC54u: goto label_7F3AEC54;
    case 0x7F3AEC58u: goto label_7F3AEC58;
    case 0x7F3AEC5Cu: goto label_7F3AEC5C;
    case 0x7F3AEC60u: goto label_7F3AEC60;
    case 0x7F3AEC64u: goto label_7F3AEC64;
    case 0x7F3AEC68u: goto label_7F3AEC68;
    case 0x7F3AEC6Cu: goto label_7F3AEC6C;
    case 0x7F3AEC70u: goto label_7F3AEC70;
    case 0x7F3AEC74u: goto label_7F3AEC74;
    case 0x7F3AEC78u: goto label_7F3AEC78;
    case 0x7F3AEC7Cu: goto label_7F3AEC7C;
    case 0x7F3AEC80u: goto label_7F3AEC80;
    case 0x7F3AEC84u: goto label_7F3AEC84;
    case 0x7F3AEC88u: goto label_7F3AEC88;
    case 0x7F3AEC8Cu: goto label_7F3AEC8C;
    case 0x7F3AEC90u: goto label_7F3AEC90;
    case 0x7F3AEC94u: goto label_7F3AEC94;
    case 0x7F3AEC98u: goto label_7F3AEC98;
    case 0x7F3AEC9Cu: goto label_7F3AEC9C;
    case 0x7F3AECA0u: goto label_7F3AECA0;
    case 0x7F3AECA4u: goto label_7F3AECA4;
    case 0x7F3AECA8u: goto label_7F3AECA8;
    case 0x7F3AECACu: goto label_7F3AECAC;
    case 0x7F3AECB0u: goto label_7F3AECB0;
    case 0x7F3AECB4u: goto label_7F3AECB4;
    case 0x7F3AECB8u: goto label_7F3AECB8;
    case 0x7F3AECBCu: goto label_7F3AECBC;
    case 0x7F3AECC0u: goto label_7F3AECC0;
    case 0x7F3AECC4u: goto label_7F3AECC4;
    case 0x7F3AECC8u: goto label_7F3AECC8;
    case 0x7F3AECCCu: goto label_7F3AECCC;
    case 0x7F3AECD0u: goto label_7F3AECD0;
    case 0x7F3AECD4u: goto label_7F3AECD4;
    case 0x7F3AECD8u: goto label_7F3AECD8;
    case 0x7F3AECDCu: goto label_7F3AECDC;
    case 0x7F3AECE0u: goto label_7F3AECE0;
    case 0x7F3AECE4u: goto label_7F3AECE4;
    case 0x7F3AECE8u: goto label_7F3AECE8;
    case 0x7F3AECECu: goto label_7F3AECEC;
    case 0x7F3AECF0u: goto label_7F3AECF0;
    case 0x7F3AECF4u: goto label_7F3AECF4;
    case 0x7F3AECF8u: goto label_7F3AECF8;
    case 0x7F3AECFCu: goto label_7F3AECFC;
    case 0x7F3AED00u: goto label_7F3AED00;
    case 0x7F3AED04u: goto label_7F3AED04;
    case 0x7F3AED08u: goto label_7F3AED08;
    case 0x7F3AED0Cu: goto label_7F3AED0C;
    case 0x7F3AED10u: goto label_7F3AED10;
    case 0x7F3AED14u: goto label_7F3AED14;
    case 0x7F3AED18u: goto label_7F3AED18;
    case 0x7F3AED1Cu: goto label_7F3AED1C;
    case 0x7F3AED20u: goto label_7F3AED20;
    case 0x7F3AED24u: goto label_7F3AED24;
    case 0x7F3AED28u: goto label_7F3AED28;
    case 0x7F3AED2Cu: goto label_7F3AED2C;
    case 0x7F3AED30u: goto label_7F3AED30;
    case 0x7F3AED34u: goto label_7F3AED34;
    case 0x7F3AED38u: goto label_7F3AED38;
    case 0x7F3AED3Cu: goto label_7F3AED3C;
    case 0x7F3AED40u: goto label_7F3AED40;
    case 0x7F3AED44u: goto label_7F3AED44;
    case 0x7F3AED48u: goto label_7F3AED48;
    case 0x7F3AED4Cu: goto label_7F3AED4C;
    case 0x7F3AED50u: goto label_7F3AED50;
    case 0x7F3AED54u: goto label_7F3AED54;
    case 0x7F3AED58u: goto label_7F3AED58;
    case 0x7F3AED5Cu: goto label_7F3AED5C;
    case 0x7F3AED60u: goto label_7F3AED60;
    case 0x7F3AED64u: goto label_7F3AED64;
    case 0x7F3AED68u: goto label_7F3AED68;
    case 0x7F3AED6Cu: goto label_7F3AED6C;
    case 0x7F3AED70u: goto label_7F3AED70;
    case 0x7F3AED74u: goto label_7F3AED74;
    case 0x7F3AED78u: goto label_7F3AED78;
    case 0x7F3AED7Cu: goto label_7F3AED7C;
    case 0x7F3AED80u: goto label_7F3AED80;
    case 0x7F3AED84u: goto label_7F3AED84;
    case 0x7F3AED88u: goto label_7F3AED88;
    case 0x7F3AED8Cu: goto label_7F3AED8C;
    case 0x7F3AED90u: goto label_7F3AED90;
    case 0x7F3AED94u: goto label_7F3AED94;
    case 0x7F3AED98u: goto label_7F3AED98;
    case 0x7F3AED9Cu: goto label_7F3AED9C;
    case 0x7F3AEDA0u: goto label_7F3AEDA0;
    case 0x7F3AEDA4u: goto label_7F3AEDA4;
    case 0x7F3AEDA8u: goto label_7F3AEDA8;
    case 0x7F3AEDACu: goto label_7F3AEDAC;
    case 0x7F3AEDB0u: goto label_7F3AEDB0;
    case 0x7F3AEDB4u: goto label_7F3AEDB4;
    case 0x7F3AEDB8u: goto label_7F3AEDB8;
    case 0x7F3AEDBCu: goto label_7F3AEDBC;
    case 0x7F3AEDC0u: goto label_7F3AEDC0;
    case 0x7F3AEDC4u: goto label_7F3AEDC4;
    case 0x7F3AEDC8u: goto label_7F3AEDC8;
    case 0x7F3AEDCCu: goto label_7F3AEDCC;
    case 0x7F3AEDD0u: goto label_7F3AEDD0;
    case 0x7F3AEDD4u: goto label_7F3AEDD4;
    case 0x7F3AEDD8u: goto label_7F3AEDD8;
    case 0x7F3AEDDCu: goto label_7F3AEDDC;
    case 0x7F3AEDE0u: goto label_7F3AEDE0;
    case 0x7F3AEDE4u: goto label_7F3AEDE4;
    case 0x7F3AEDE8u: goto label_7F3AEDE8;
    case 0x7F3AEDECu: goto label_7F3AEDEC;
    case 0x7F3AEDF0u: goto label_7F3AEDF0;
    case 0x7F3AEDF4u: goto label_7F3AEDF4;
    case 0x7F3AEDF8u: goto label_7F3AEDF8;
    case 0x7F3AEDFCu: goto label_7F3AEDFC;
    case 0x7F3AEE00u: goto label_7F3AEE00;
    case 0x7F3AEE04u: goto label_7F3AEE04;
    case 0x7F3AEE08u: goto label_7F3AEE08;
    case 0x7F3AEE0Cu: goto label_7F3AEE0C;
    case 0x7F3AEE10u: goto label_7F3AEE10;
    case 0x7F3AEE14u: goto label_7F3AEE14;
    case 0x7F3AEE18u: goto label_7F3AEE18;
    case 0x7F3AEE1Cu: goto label_7F3AEE1C;
    case 0x7F3AEE20u: goto label_7F3AEE20;
    case 0x7F3AEE24u: goto label_7F3AEE24;
    case 0x7F3AEE28u: goto label_7F3AEE28;
    case 0x7F3AEE2Cu: goto label_7F3AEE2C;
    case 0x7F3AEE30u: goto label_7F3AEE30;
    case 0x7F3AEE34u: goto label_7F3AEE34;
    case 0x7F3AEE38u: goto label_7F3AEE38;
    case 0x7F3AEE3Cu: goto label_7F3AEE3C;
    case 0x7F3AEE40u: goto label_7F3AEE40;
    case 0x7F3AEE44u: goto label_7F3AEE44;
    case 0x7F3AEE48u: goto label_7F3AEE48;
    case 0x7F3AEE4Cu: goto label_7F3AEE4C;
    case 0x7F3AEE50u: goto label_7F3AEE50;
    case 0x7F3AEE54u: goto label_7F3AEE54;
    case 0x7F3AEE58u: goto label_7F3AEE58;
    case 0x7F3AEE5Cu: goto label_7F3AEE5C;
    case 0x7F3AEE60u: goto label_7F3AEE60;
    case 0x7F3AEE64u: goto label_7F3AEE64;
    case 0x7F3AEE68u: goto label_7F3AEE68;
    case 0x7F3AEE6Cu: goto label_7F3AEE6C;
    case 0x7F3AEE70u: goto label_7F3AEE70;
    case 0x7F3AEE74u: goto label_7F3AEE74;
    case 0x7F3AEE78u: goto label_7F3AEE78;
    case 0x7F3AEE7Cu: goto label_7F3AEE7C;
    case 0x7F3AEE80u: goto label_7F3AEE80;
    case 0x7F3AEE84u: goto label_7F3AEE84;
    case 0x7F3AEE88u: goto label_7F3AEE88;
    case 0x7F3AEE8Cu: goto label_7F3AEE8C;
    case 0x7F3AEE90u: goto label_7F3AEE90;
    case 0x7F3AEE94u: goto label_7F3AEE94;
    case 0x7F3AEE98u: goto label_7F3AEE98;
    case 0x7F3AEE9Cu: goto label_7F3AEE9C;
    case 0x7F3AEEA0u: goto label_7F3AEEA0;
    case 0x7F3AEEA4u: goto label_7F3AEEA4;
    case 0x7F3AEEA8u: goto label_7F3AEEA8;
    case 0x7F3AEEACu: goto label_7F3AEEAC;
    case 0x7F3AEEB0u: goto label_7F3AEEB0;
    case 0x7F3AEEB4u: goto label_7F3AEEB4;
    case 0x7F3AEEB8u: goto label_7F3AEEB8;
    case 0x7F3AEEBCu: goto label_7F3AEEBC;
    case 0x7F3AEEC0u: goto label_7F3AEEC0;
    case 0x7F3AEEC4u: goto label_7F3AEEC4;
    case 0x7F3AEEC8u: goto label_7F3AEEC8;
    case 0x7F3AEECCu: goto label_7F3AEECC;
    case 0x7F3AEED0u: goto label_7F3AEED0;
    case 0x7F3AEED4u: goto label_7F3AEED4;
    case 0x7F3AEED8u: goto label_7F3AEED8;
    case 0x7F3AEEDCu: goto label_7F3AEEDC;
    case 0x7F3AEEE0u: goto label_7F3AEEE0;
    case 0x7F3AEEE4u: goto label_7F3AEEE4;
    case 0x7F3AEEE8u: goto label_7F3AEEE8;
    case 0x7F3AEEECu: goto label_7F3AEEEC;
    case 0x7F3AEEF0u: goto label_7F3AEEF0;
    case 0x7F3AEEF4u: goto label_7F3AEEF4;
    case 0x7F3AEEF8u: goto label_7F3AEEF8;
    case 0x7F3AEEFCu: goto label_7F3AEEFC;
    case 0x7F3AEF00u: goto label_7F3AEF00;
    case 0x7F3AEF04u: goto label_7F3AEF04;
    case 0x7F3AEF08u: goto label_7F3AEF08;
    case 0x7F3AEF0Cu: goto label_7F3AEF0C;
    case 0x7F3AEF10u: goto label_7F3AEF10;
    case 0x7F3AEF14u: goto label_7F3AEF14;
    case 0x7F3AEF18u: goto label_7F3AEF18;
    case 0x7F3AEF1Cu: goto label_7F3AEF1C;
    case 0x7F3AEF20u: goto label_7F3AEF20;
    case 0x7F3AEF24u: goto label_7F3AEF24;
    case 0x7F3AEF28u: goto label_7F3AEF28;
    case 0x7F3AEF2Cu: goto label_7F3AEF2C;
    case 0x7F3AEF30u: goto label_7F3AEF30;
    case 0x7F3AEF34u: goto label_7F3AEF34;
    case 0x7F3AEF38u: goto label_7F3AEF38;
    case 0x7F3AEF3Cu: goto label_7F3AEF3C;
    case 0x7F3AEF40u: goto label_7F3AEF40;
    case 0x7F3AEF44u: goto label_7F3AEF44;
    case 0x7F3AEF48u: goto label_7F3AEF48;
    case 0x7F3AEF4Cu: goto label_7F3AEF4C;
    case 0x7F3AEF50u: goto label_7F3AEF50;
    case 0x7F3AEF54u: goto label_7F3AEF54;
    case 0x7F3AEF58u: goto label_7F3AEF58;
    case 0x7F3AEF5Cu: goto label_7F3AEF5C;
    case 0x7F3AEF60u: goto label_7F3AEF60;
    case 0x7F3AEF64u: goto label_7F3AEF64;
    case 0x7F3AEF68u: goto label_7F3AEF68;
    case 0x7F3AEF6Cu: goto label_7F3AEF6C;
    case 0x7F3AEF70u: goto label_7F3AEF70;
    case 0x7F3AEF74u: goto label_7F3AEF74;
    case 0x7F3AEF78u: goto label_7F3AEF78;
    case 0x7F3AEF7Cu: goto label_7F3AEF7C;
    case 0x7F3AEF80u: goto label_7F3AEF80;
    case 0x7F3AEF84u: goto label_7F3AEF84;
    case 0x7F3AEF88u: goto label_7F3AEF88;
    case 0x7F3AEF8Cu: goto label_7F3AEF8C;
    case 0x7F3AEF90u: goto label_7F3AEF90;
    case 0x7F3AEF94u: goto label_7F3AEF94;
    case 0x7F3AEF98u: goto label_7F3AEF98;
    case 0x7F3AEF9Cu: goto label_7F3AEF9C;
    case 0x7F3AEFA0u: goto label_7F3AEFA0;
    case 0x7F3AEFA4u: goto label_7F3AEFA4;
    case 0x7F3AEFA8u: goto label_7F3AEFA8;
    case 0x7F3AEFACu: goto label_7F3AEFAC;
    case 0x7F3AEFB0u: goto label_7F3AEFB0;
    case 0x7F3AEFB4u: goto label_7F3AEFB4;
    case 0x7F3AEFB8u: goto label_7F3AEFB8;
    case 0x7F3AEFBCu: goto label_7F3AEFBC;
    case 0x7F3AEFC0u: goto label_7F3AEFC0;
    case 0x7F3AEFC4u: goto label_7F3AEFC4;
    case 0x7F3AEFC8u: goto label_7F3AEFC8;
    case 0x7F3AEFCCu: goto label_7F3AEFCC;
    case 0x7F3AEFD0u: goto label_7F3AEFD0;
    case 0x7F3AEFD4u: goto label_7F3AEFD4;
    case 0x7F3AEFD8u: goto label_7F3AEFD8;
    case 0x7F3AEFDCu: goto label_7F3AEFDC;
    case 0x7F3AEFE0u: goto label_7F3AEFE0;
    case 0x7F3AEFE4u: goto label_7F3AEFE4;
    case 0x7F3AEFE8u: goto label_7F3AEFE8;
    case 0x7F3AEFECu: goto label_7F3AEFEC;
    case 0x7F3AEFF0u: goto label_7F3AEFF0;
    case 0x7F3AEFF4u: goto label_7F3AEFF4;
    case 0x7F3AEFF8u: goto label_7F3AEFF8;
    case 0x7F3AEFFCu: goto label_7F3AEFFC;
    case 0x7F3AF000u: goto label_7F3AF000;
    case 0x7F3AF004u: goto label_7F3AF004;
    case 0x7F3AF008u: goto label_7F3AF008;
    case 0x7F3AF00Cu: goto label_7F3AF00C;
    case 0x7F3AF010u: goto label_7F3AF010;
    case 0x7F3AF014u: goto label_7F3AF014;
    case 0x7F3AF018u: goto label_7F3AF018;
    case 0x7F3AF01Cu: goto label_7F3AF01C;
    case 0x7F3AF020u: goto label_7F3AF020;
    case 0x7F3AF024u: goto label_7F3AF024;
    case 0x7F3AF028u: goto label_7F3AF028;
    case 0x7F3AF02Cu: goto label_7F3AF02C;
    case 0x7F3AF030u: goto label_7F3AF030;
    case 0x7F3AF034u: goto label_7F3AF034;
    case 0x7F3AF038u: goto label_7F3AF038;
    case 0x7F3AF03Cu: goto label_7F3AF03C;
    case 0x7F3AF040u: goto label_7F3AF040;
    case 0x7F3AF044u: goto label_7F3AF044;
    case 0x7F3AF048u: goto label_7F3AF048;
    case 0x7F3AF04Cu: goto label_7F3AF04C;
    case 0x7F3AF050u: goto label_7F3AF050;
    case 0x7F3AF054u: goto label_7F3AF054;
    case 0x7F3AF058u: goto label_7F3AF058;
    case 0x7F3AF05Cu: goto label_7F3AF05C;
    case 0x7F3AF060u: goto label_7F3AF060;
    case 0x7F3AF064u: goto label_7F3AF064;
    case 0x7F3AF068u: goto label_7F3AF068;
    case 0x7F3AF06Cu: goto label_7F3AF06C;
    case 0x7F3AF070u: goto label_7F3AF070;
    case 0x7F3AF074u: goto label_7F3AF074;
    case 0x7F3AF078u: goto label_7F3AF078;
    case 0x7F3AF07Cu: goto label_7F3AF07C;
    case 0x7F3AF080u: goto label_7F3AF080;
    case 0x7F3AF084u: goto label_7F3AF084;
    case 0x7F3AF088u: goto label_7F3AF088;
    case 0x7F3AF08Cu: goto label_7F3AF08C;
    case 0x7F3AF090u: goto label_7F3AF090;
    case 0x7F3AF094u: goto label_7F3AF094;
    case 0x7F3AF098u: goto label_7F3AF098;
    case 0x7F3AF09Cu: goto label_7F3AF09C;
    case 0x7F3AF0A0u: goto label_7F3AF0A0;
    case 0x7F3AF0A4u: goto label_7F3AF0A4;
    case 0x7F3AF0A8u: goto label_7F3AF0A8;
    case 0x7F3AF0ACu: goto label_7F3AF0AC;
    case 0x7F3AF0B0u: goto label_7F3AF0B0;
    case 0x7F3AF0B4u: goto label_7F3AF0B4;
    case 0x7F3AF0B8u: goto label_7F3AF0B8;
    case 0x7F3AF0BCu: goto label_7F3AF0BC;
    case 0x7F3AF0C0u: goto label_7F3AF0C0;
    case 0x7F3AF0C4u: goto label_7F3AF0C4;
    case 0x7F3AF0C8u: goto label_7F3AF0C8;
    case 0x7F3AF0CCu: goto label_7F3AF0CC;
    case 0x7F3AF0D0u: goto label_7F3AF0D0;
    case 0x7F3AF0D4u: goto label_7F3AF0D4;
    case 0x7F3AF0D8u: goto label_7F3AF0D8;
    case 0x7F3AF0DCu: goto label_7F3AF0DC;
    case 0x7F3AF0E0u: goto label_7F3AF0E0;
    case 0x7F3AF0E4u: goto label_7F3AF0E4;
    case 0x7F3AF0E8u: goto label_7F3AF0E8;
    case 0x7F3AF0ECu: goto label_7F3AF0EC;
    case 0x7F3AF0F0u: goto label_7F3AF0F0;
    case 0x7F3AF0F4u: goto label_7F3AF0F4;
    case 0x7F3AF0F8u: goto label_7F3AF0F8;
    case 0x7F3AF0FCu: goto label_7F3AF0FC;
    case 0x7F3AF100u: goto label_7F3AF100;
    case 0x7F3AF104u: goto label_7F3AF104;
    case 0x7F3AF108u: goto label_7F3AF108;
    case 0x7F3AF10Cu: goto label_7F3AF10C;
    case 0x7F3AF110u: goto label_7F3AF110;
    case 0x7F3AF114u: goto label_7F3AF114;
    case 0x7F3AF118u: goto label_7F3AF118;
    case 0x7F3AF11Cu: goto label_7F3AF11C;
    case 0x7F3AF120u: goto label_7F3AF120;
    case 0x7F3AF124u: goto label_7F3AF124;
    case 0x7F3AF128u: goto label_7F3AF128;
    case 0x7F3AF12Cu: goto label_7F3AF12C;
    case 0x7F3AF130u: goto label_7F3AF130;
    case 0x7F3AF134u: goto label_7F3AF134;
    case 0x7F3AF138u: goto label_7F3AF138;
    case 0x7F3AF13Cu: goto label_7F3AF13C;
    case 0x7F3AF140u: goto label_7F3AF140;
    case 0x7F3AF144u: goto label_7F3AF144;
    case 0x7F3AF148u: goto label_7F3AF148;
    case 0x7F3AF14Cu: goto label_7F3AF14C;
    case 0x7F3AF150u: goto label_7F3AF150;
    case 0x7F3AF154u: goto label_7F3AF154;
    case 0x7F3AF158u: goto label_7F3AF158;
    case 0x7F3AF15Cu: goto label_7F3AF15C;
    case 0x7F3AF160u: goto label_7F3AF160;
    case 0x7F3AF164u: goto label_7F3AF164;
    case 0x7F3AF168u: goto label_7F3AF168;
    case 0x7F3AF16Cu: goto label_7F3AF16C;
    case 0x7F3AF170u: goto label_7F3AF170;
    case 0x7F3AF174u: goto label_7F3AF174;
    case 0x7F3AF178u: goto label_7F3AF178;
    case 0x7F3AF17Cu: goto label_7F3AF17C;
    case 0x7F3AF180u: goto label_7F3AF180;
    case 0x7F3AF184u: goto label_7F3AF184;
    case 0x7F3AF188u: goto label_7F3AF188;
    case 0x7F3AF18Cu: goto label_7F3AF18C;
    case 0x7F3AF190u: goto label_7F3AF190;
    case 0x7F3AF194u: goto label_7F3AF194;
    case 0x7F3AF198u: goto label_7F3AF198;
    case 0x7F3AF19Cu: goto label_7F3AF19C;
    case 0x7F3AF1A0u: goto label_7F3AF1A0;
    case 0x7F3AF1A4u: goto label_7F3AF1A4;
    case 0x7F3AF1A8u: goto label_7F3AF1A8;
    case 0x7F3AF1ACu: goto label_7F3AF1AC;
    case 0x7F3AF1B0u: goto label_7F3AF1B0;
    case 0x7F3AF1B4u: goto label_7F3AF1B4;
    case 0x7F3AF1B8u: goto label_7F3AF1B8;
    case 0x7F3AF1BCu: goto label_7F3AF1BC;
    case 0x7F3AF1C0u: goto label_7F3AF1C0;
    case 0x7F3AF1C4u: goto label_7F3AF1C4;
    case 0x7F3AF1C8u: goto label_7F3AF1C8;
    case 0x7F3AF1CCu: goto label_7F3AF1CC;
    case 0x7F3AF1D0u: goto label_7F3AF1D0;
    case 0x7F3AF1D4u: goto label_7F3AF1D4;
    case 0x7F3AF1D8u: goto label_7F3AF1D8;
    case 0x7F3AF1DCu: goto label_7F3AF1DC;
    case 0x7F3AF1E0u: goto label_7F3AF1E0;
    case 0x7F3AF1E4u: goto label_7F3AF1E4;
    case 0x7F3AF1E8u: goto label_7F3AF1E8;
    case 0x7F3AF1ECu: goto label_7F3AF1EC;
    case 0x7F3AF1F0u: goto label_7F3AF1F0;
    case 0x7F3AF1F4u: goto label_7F3AF1F4;
    case 0x7F3AF1F8u: goto label_7F3AF1F8;
    case 0x7F3AF1FCu: goto label_7F3AF1FC;
    case 0x7F3AF200u: goto label_7F3AF200;
    case 0x7F3AF204u: goto label_7F3AF204;
    case 0x7F3AF208u: goto label_7F3AF208;
    case 0x7F3AF20Cu: goto label_7F3AF20C;
    case 0x7F3AF210u: goto label_7F3AF210;
    case 0x7F3AF214u: goto label_7F3AF214;
    case 0x7F3AF218u: goto label_7F3AF218;
    case 0x7F3AF21Cu: goto label_7F3AF21C;
    case 0x7F3AF220u: goto label_7F3AF220;
    case 0x7F3AF224u: goto label_7F3AF224;
    case 0x7F3AF228u: goto label_7F3AF228;
    case 0x7F3AF22Cu: goto label_7F3AF22C;
    case 0x7F3AF230u: goto label_7F3AF230;
    case 0x7F3AF234u: goto label_7F3AF234;
    case 0x7F3AF238u: goto label_7F3AF238;
    case 0x7F3AF23Cu: goto label_7F3AF23C;
    case 0x7F3AF240u: goto label_7F3AF240;
    case 0x7F3AF244u: goto label_7F3AF244;
    case 0x7F3AF248u: goto label_7F3AF248;
    case 0x7F3AF24Cu: goto label_7F3AF24C;
    case 0x7F3AF250u: goto label_7F3AF250;
    case 0x7F3AF254u: goto label_7F3AF254;
    case 0x7F3AF258u: goto label_7F3AF258;
    case 0x7F3AF25Cu: goto label_7F3AF25C;
    case 0x7F3AF260u: goto label_7F3AF260;
    case 0x7F3AF264u: goto label_7F3AF264;
    case 0x7F3AF268u: goto label_7F3AF268;
    case 0x7F3AF26Cu: goto label_7F3AF26C;
    case 0x7F3AF270u: goto label_7F3AF270;
    case 0x7F3AF274u: goto label_7F3AF274;
    case 0x7F3AF278u: goto label_7F3AF278;
    case 0x7F3AF27Cu: goto label_7F3AF27C;
    case 0x7F3AF280u: goto label_7F3AF280;
    case 0x7F3AF284u: goto label_7F3AF284;
    case 0x7F3AF288u: goto label_7F3AF288;
    case 0x7F3AF28Cu: goto label_7F3AF28C;
    case 0x7F3AF290u: goto label_7F3AF290;
    case 0x7F3AF294u: goto label_7F3AF294;
    case 0x7F3AF298u: goto label_7F3AF298;
    case 0x7F3AF29Cu: goto label_7F3AF29C;
    case 0x7F3AF2A0u: goto label_7F3AF2A0;
    case 0x7F3AF2A4u: goto label_7F3AF2A4;
    case 0x7F3AF2A8u: goto label_7F3AF2A8;
    case 0x7F3AF2ACu: goto label_7F3AF2AC;
    case 0x7F3AF2B0u: goto label_7F3AF2B0;
    case 0x7F3AF2B4u: goto label_7F3AF2B4;
    case 0x7F3AF2B8u: goto label_7F3AF2B8;
    case 0x7F3AF2BCu: goto label_7F3AF2BC;
    case 0x7F3AF2C0u: goto label_7F3AF2C0;
    case 0x7F3AF2C4u: goto label_7F3AF2C4;
    case 0x7F3AF2C8u: goto label_7F3AF2C8;
    case 0x7F3AF2CCu: goto label_7F3AF2CC;
    case 0x7F3AF2D0u: goto label_7F3AF2D0;
    case 0x7F3AF2D4u: goto label_7F3AF2D4;
    case 0x7F3AF2D8u: goto label_7F3AF2D8;
    case 0x7F3AF2DCu: goto label_7F3AF2DC;
    case 0x7F3AF2E0u: goto label_7F3AF2E0;
    case 0x7F3AF2E4u: goto label_7F3AF2E4;
    case 0x7F3AF2E8u: goto label_7F3AF2E8;
    case 0x7F3AF2ECu: goto label_7F3AF2EC;
    case 0x7F3AF2F0u: goto label_7F3AF2F0;
    case 0x7F3AF2F4u: goto label_7F3AF2F4;
    case 0x7F3AF2F8u: goto label_7F3AF2F8;
    case 0x7F3AF2FCu: goto label_7F3AF2FC;
    case 0x7F3AF300u: goto label_7F3AF300;
    case 0x7F3AF304u: goto label_7F3AF304;
    case 0x7F3AF308u: goto label_7F3AF308;
    case 0x7F3AF30Cu: goto label_7F3AF30C;
    case 0x7F3AF310u: goto label_7F3AF310;
    case 0x7F3AF314u: goto label_7F3AF314;
    case 0x7F3AF318u: goto label_7F3AF318;
    case 0x7F3AF31Cu: goto label_7F3AF31C;
    case 0x7F3AF320u: goto label_7F3AF320;
    case 0x7F3AF324u: goto label_7F3AF324;
    case 0x7F3AF328u: goto label_7F3AF328;
    case 0x7F3AF32Cu: goto label_7F3AF32C;
    case 0x7F3AF330u: goto label_7F3AF330;
    case 0x7F3AF334u: goto label_7F3AF334;
    case 0x7F3AF338u: goto label_7F3AF338;
    case 0x7F3AF33Cu: goto label_7F3AF33C;
    case 0x7F3AF340u: goto label_7F3AF340;
    case 0x7F3AF344u: goto label_7F3AF344;
    case 0x7F3AF348u: goto label_7F3AF348;
    case 0x7F3AF34Cu: goto label_7F3AF34C;
    case 0x7F3AF350u: goto label_7F3AF350;
    case 0x7F3AF354u: goto label_7F3AF354;
    case 0x7F3AF358u: goto label_7F3AF358;
    case 0x7F3AF35Cu: goto label_7F3AF35C;
    case 0x7F3AF360u: goto label_7F3AF360;
    case 0x7F3AF364u: goto label_7F3AF364;
    case 0x7F3AF368u: goto label_7F3AF368;
    case 0x7F3AF36Cu: goto label_7F3AF36C;
    case 0x7F3AF370u: goto label_7F3AF370;
    case 0x7F3AF374u: goto label_7F3AF374;
    case 0x7F3AF378u: goto label_7F3AF378;
    case 0x7F3AF37Cu: goto label_7F3AF37C;
    case 0x7F3AF380u: goto label_7F3AF380;
    case 0x7F3AF384u: goto label_7F3AF384;
    case 0x7F3AF388u: goto label_7F3AF388;
    case 0x7F3AF38Cu: goto label_7F3AF38C;
    case 0x7F3AF390u: goto label_7F3AF390;
    case 0x7F3AF394u: goto label_7F3AF394;
    case 0x7F3AF398u: goto label_7F3AF398;
    case 0x7F3AF39Cu: goto label_7F3AF39C;
    case 0x7F3AF3A0u: goto label_7F3AF3A0;
    case 0x7F3AF3A4u: goto label_7F3AF3A4;
    case 0x7F3AF3A8u: goto label_7F3AF3A8;
    case 0x7F3AF3ACu: goto label_7F3AF3AC;
    case 0x7F3AF3B0u: goto label_7F3AF3B0;
    case 0x7F3AF3B4u: goto label_7F3AF3B4;
    case 0x7F3AF3B8u: goto label_7F3AF3B8;
    case 0x7F3AF3BCu: goto label_7F3AF3BC;
    case 0x7F3AF3C0u: goto label_7F3AF3C0;
    case 0x7F3AF3C4u: goto label_7F3AF3C4;
    case 0x7F3AF3C8u: goto label_7F3AF3C8;
    case 0x7F3AF3CCu: goto label_7F3AF3CC;
    case 0x7F3AF3D0u: goto label_7F3AF3D0;
    case 0x7F3AF3D4u: goto label_7F3AF3D4;
    case 0x7F3AF3D8u: goto label_7F3AF3D8;
    case 0x7F3AF3DCu: goto label_7F3AF3DC;
    case 0x7F3AF3E0u: goto label_7F3AF3E0;
    case 0x7F3AF3E4u: goto label_7F3AF3E4;
    case 0x7F3AF3E8u: goto label_7F3AF3E8;
    case 0x7F3AF3ECu: goto label_7F3AF3EC;
    case 0x7F3AF3F0u: goto label_7F3AF3F0;
    case 0x7F3AF3F4u: goto label_7F3AF3F4;
    case 0x7F3AF3F8u: goto label_7F3AF3F8;
    case 0x7F3AF3FCu: goto label_7F3AF3FC;
    case 0x7F3AF400u: goto label_7F3AF400;
    case 0x7F3AF404u: goto label_7F3AF404;
    case 0x7F3AF408u: goto label_7F3AF408;
    case 0x7F3AF40Cu: goto label_7F3AF40C;
    case 0x7F3AF410u: goto label_7F3AF410;
    case 0x7F3AF414u: goto label_7F3AF414;
    case 0x7F3AF418u: goto label_7F3AF418;
    case 0x7F3AF41Cu: goto label_7F3AF41C;
    case 0x7F3AF420u: goto label_7F3AF420;
    case 0x7F3AF424u: goto label_7F3AF424;
    case 0x7F3AF428u: goto label_7F3AF428;
    case 0x7F3AF42Cu: goto label_7F3AF42C;
    case 0x7F3AF430u: goto label_7F3AF430;
    case 0x7F3AF434u: goto label_7F3AF434;
    case 0x7F3AF438u: goto label_7F3AF438;
    case 0x7F3AF43Cu: goto label_7F3AF43C;
    case 0x7F3AF440u: goto label_7F3AF440;
    case 0x7F3AF444u: goto label_7F3AF444;
    case 0x7F3AF448u: goto label_7F3AF448;
    case 0x7F3AF44Cu: goto label_7F3AF44C;
    case 0x7F3AF450u: goto label_7F3AF450;
    case 0x7F3AF454u: goto label_7F3AF454;
    case 0x7F3AF458u: goto label_7F3AF458;
    case 0x7F3AF45Cu: goto label_7F3AF45C;
    case 0x7F3AF460u: goto label_7F3AF460;
    case 0x7F3AF464u: goto label_7F3AF464;
    case 0x7F3AF468u: goto label_7F3AF468;
    case 0x7F3AF46Cu: goto label_7F3AF46C;
    case 0x7F3AF470u: goto label_7F3AF470;
    case 0x7F3AF474u: goto label_7F3AF474;
    case 0x7F3AF478u: goto label_7F3AF478;
    case 0x7F3AF47Cu: goto label_7F3AF47C;
    case 0x7F3AF480u: goto label_7F3AF480;
    case 0x7F3AF484u: goto label_7F3AF484;
    case 0x7F3AF488u: goto label_7F3AF488;
    case 0x7F3AF48Cu: goto label_7F3AF48C;
    case 0x7F3AF490u: goto label_7F3AF490;
    case 0x7F3AF494u: goto label_7F3AF494;
    case 0x7F3AF498u: goto label_7F3AF498;
    case 0x7F3AF49Cu: goto label_7F3AF49C;
    case 0x7F3AF4A0u: goto label_7F3AF4A0;
    case 0x7F3AF4A4u: goto label_7F3AF4A4;
    case 0x7F3AF4A8u: goto label_7F3AF4A8;
    case 0x7F3AF4ACu: goto label_7F3AF4AC;
    case 0x7F3AF4B0u: goto label_7F3AF4B0;
    case 0x7F3AF4B4u: goto label_7F3AF4B4;
    case 0x7F3AF4B8u: goto label_7F3AF4B8;
    case 0x7F3AF4BCu: goto label_7F3AF4BC;
    case 0x7F3AF4C0u: goto label_7F3AF4C0;
    case 0x7F3AF4C4u: goto label_7F3AF4C4;
    case 0x7F3AF4C8u: goto label_7F3AF4C8;
    case 0x7F3AF4CCu: goto label_7F3AF4CC;
    case 0x7F3AF4D0u: goto label_7F3AF4D0;
    case 0x7F3AF4D4u: goto label_7F3AF4D4;
    case 0x7F3AF4D8u: goto label_7F3AF4D8;
    case 0x7F3AF4DCu: goto label_7F3AF4DC;
    case 0x7F3AF4E0u: goto label_7F3AF4E0;
    case 0x7F3AF4E4u: goto label_7F3AF4E4;
    case 0x7F3AF4E8u: goto label_7F3AF4E8;
    case 0x7F3AF4ECu: goto label_7F3AF4EC;
    case 0x7F3AF4F0u: goto label_7F3AF4F0;
    case 0x7F3AF4F4u: goto label_7F3AF4F4;
    case 0x7F3AF4F8u: goto label_7F3AF4F8;
    case 0x7F3AF4FCu: goto label_7F3AF4FC;
    case 0x7F3AF500u: goto label_7F3AF500;
    case 0x7F3AF504u: goto label_7F3AF504;
    case 0x7F3AF508u: goto label_7F3AF508;
    case 0x7F3AF50Cu: goto label_7F3AF50C;
    case 0x7F3AF510u: goto label_7F3AF510;
    case 0x7F3AF514u: goto label_7F3AF514;
    case 0x7F3AF518u: goto label_7F3AF518;
    case 0x7F3AF51Cu: goto label_7F3AF51C;
    case 0x7F3AF520u: goto label_7F3AF520;
    case 0x7F3AF524u: goto label_7F3AF524;
    case 0x7F3AF528u: goto label_7F3AF528;
    case 0x7F3AF52Cu: goto label_7F3AF52C;
    case 0x7F3AF530u: goto label_7F3AF530;
    case 0x7F3AF534u: goto label_7F3AF534;
    case 0x7F3AF538u: goto label_7F3AF538;
    case 0x7F3AF53Cu: goto label_7F3AF53C;
    case 0x7F3AF540u: goto label_7F3AF540;
    case 0x7F3AF544u: goto label_7F3AF544;
    case 0x7F3AF548u: goto label_7F3AF548;
    case 0x7F3AF54Cu: goto label_7F3AF54C;
    case 0x7F3AF550u: goto label_7F3AF550;
    case 0x7F3AF554u: goto label_7F3AF554;
    case 0x7F3AF558u: goto label_7F3AF558;
    case 0x7F3AF55Cu: goto label_7F3AF55C;
    case 0x7F3AF560u: goto label_7F3AF560;
    case 0x7F3AF564u: goto label_7F3AF564;
    case 0x7F3AF568u: goto label_7F3AF568;
    case 0x7F3AF56Cu: goto label_7F3AF56C;
    case 0x7F3AF570u: goto label_7F3AF570;
    case 0x7F3AF574u: goto label_7F3AF574;
    case 0x7F3AF578u: goto label_7F3AF578;
    case 0x7F3AF57Cu: goto label_7F3AF57C;
    case 0x7F3AF580u: goto label_7F3AF580;
    case 0x7F3AF584u: goto label_7F3AF584;
    case 0x7F3AF588u: goto label_7F3AF588;
    case 0x7F3AF58Cu: goto label_7F3AF58C;
    case 0x7F3AF590u: goto label_7F3AF590;
    case 0x7F3AF594u: goto label_7F3AF594;
    case 0x7F3AF598u: goto label_7F3AF598;
    case 0x7F3AF59Cu: goto label_7F3AF59C;
    case 0x7F3AF5A0u: goto label_7F3AF5A0;
    case 0x7F3AF5A4u: goto label_7F3AF5A4;
    case 0x7F3AF5A8u: goto label_7F3AF5A8;
    case 0x7F3AF5ACu: goto label_7F3AF5AC;
    case 0x7F3AF5B0u: goto label_7F3AF5B0;
    case 0x7F3AF5B4u: goto label_7F3AF5B4;
    case 0x7F3AF5B8u: goto label_7F3AF5B8;
    case 0x7F3AF5BCu: goto label_7F3AF5BC;
    case 0x7F3AF5C0u: goto label_7F3AF5C0;
    case 0x7F3AF5C4u: goto label_7F3AF5C4;
    case 0x7F3AF5C8u: goto label_7F3AF5C8;
    case 0x7F3AF5CCu: goto label_7F3AF5CC;
    case 0x7F3AF5D0u: goto label_7F3AF5D0;
    case 0x7F3AF5D4u: goto label_7F3AF5D4;
    case 0x7F3AF5D8u: goto label_7F3AF5D8;
    case 0x7F3AF5DCu: goto label_7F3AF5DC;
    case 0x7F3AF5E0u: goto label_7F3AF5E0;
    case 0x7F3AF5E4u: goto label_7F3AF5E4;
    case 0x7F3AF5E8u: goto label_7F3AF5E8;
    case 0x7F3AF5ECu: goto label_7F3AF5EC;
    case 0x7F3AF5F0u: goto label_7F3AF5F0;
    case 0x7F3AF5F4u: goto label_7F3AF5F4;
    case 0x7F3AF5F8u: goto label_7F3AF5F8;
    case 0x7F3AF5FCu: goto label_7F3AF5FC;
    case 0x7F3AF600u: goto label_7F3AF600;
    case 0x7F3AF604u: goto label_7F3AF604;
    case 0x7F3AF608u: goto label_7F3AF608;
    case 0x7F3AF60Cu: goto label_7F3AF60C;
    case 0x7F3AF610u: goto label_7F3AF610;
    case 0x7F3AF614u: goto label_7F3AF614;
    case 0x7F3AF618u: goto label_7F3AF618;
    case 0x7F3AF61Cu: goto label_7F3AF61C;
    case 0x7F3AF620u: goto label_7F3AF620;
    case 0x7F3AF624u: goto label_7F3AF624;
    case 0x7F3AF628u: goto label_7F3AF628;
    case 0x7F3AF62Cu: goto label_7F3AF62C;
    case 0x7F3AF630u: goto label_7F3AF630;
    case 0x7F3AF634u: goto label_7F3AF634;
    case 0x7F3AF638u: goto label_7F3AF638;
    case 0x7F3AF63Cu: goto label_7F3AF63C;
    case 0x7F3AF640u: goto label_7F3AF640;
    case 0x7F3AF644u: goto label_7F3AF644;
    case 0x7F3AF648u: goto label_7F3AF648;
    case 0x7F3AF64Cu: goto label_7F3AF64C;
    case 0x7F3AF650u: goto label_7F3AF650;
    case 0x7F3AF654u: goto label_7F3AF654;
    case 0x7F3AF658u: goto label_7F3AF658;
    case 0x7F3AF65Cu: goto label_7F3AF65C;
    case 0x7F3AF660u: goto label_7F3AF660;
    case 0x7F3AF664u: goto label_7F3AF664;
    case 0x7F3AF668u: goto label_7F3AF668;
    case 0x7F3AF66Cu: goto label_7F3AF66C;
    case 0x7F3AF670u: goto label_7F3AF670;
    case 0x7F3AF674u: goto label_7F3AF674;
    case 0x7F3AF678u: goto label_7F3AF678;
    case 0x7F3AF67Cu: goto label_7F3AF67C;
    case 0x7F3AF680u: goto label_7F3AF680;
    case 0x7F3AF684u: goto label_7F3AF684;
    case 0x7F3AF688u: goto label_7F3AF688;
    case 0x7F3AF68Cu: goto label_7F3AF68C;
    case 0x7F3AF690u: goto label_7F3AF690;
    case 0x7F3AF694u: goto label_7F3AF694;
    case 0x7F3AF698u: goto label_7F3AF698;
    case 0x7F3AF69Cu: goto label_7F3AF69C;
    case 0x7F3AF6A0u: goto label_7F3AF6A0;
    case 0x7F3AF6A4u: goto label_7F3AF6A4;
    case 0x7F3AF6A8u: goto label_7F3AF6A8;
    case 0x7F3AF6ACu: goto label_7F3AF6AC;
    case 0x7F3AF6B0u: goto label_7F3AF6B0;
    case 0x7F3AF6B4u: goto label_7F3AF6B4;
    case 0x7F3AF6B8u: goto label_7F3AF6B8;
    case 0x7F3AF6BCu: goto label_7F3AF6BC;
    case 0x7F3AF6C0u: goto label_7F3AF6C0;
    case 0x7F3AF6C4u: goto label_7F3AF6C4;
    case 0x7F3AF6C8u: goto label_7F3AF6C8;
    case 0x7F3AF6CCu: goto label_7F3AF6CC;
    case 0x7F3AF6D0u: goto label_7F3AF6D0;
    case 0x7F3AF6D4u: goto label_7F3AF6D4;
    case 0x7F3AF6D8u: goto label_7F3AF6D8;
    case 0x7F3AF6DCu: goto label_7F3AF6DC;
    case 0x7F3AF6E0u: goto label_7F3AF6E0;
    case 0x7F3AF6E4u: goto label_7F3AF6E4;
    case 0x7F3AF6E8u: goto label_7F3AF6E8;
    case 0x7F3AF6ECu: goto label_7F3AF6EC;
    case 0x7F3AF6F0u: goto label_7F3AF6F0;
    case 0x7F3AF6F4u: goto label_7F3AF6F4;
    case 0x7F3AF6F8u: goto label_7F3AF6F8;
    case 0x7F3AF6FCu: goto label_7F3AF6FC;
    case 0x7F3AF700u: goto label_7F3AF700;
    case 0x7F3AF704u: goto label_7F3AF704;
    case 0x7F3AF708u: goto label_7F3AF708;
    case 0x7F3AF70Cu: goto label_7F3AF70C;
    case 0x7F3AF710u: goto label_7F3AF710;
    case 0x7F3AF714u: goto label_7F3AF714;
    case 0x7F3AF718u: goto label_7F3AF718;
    case 0x7F3AF71Cu: goto label_7F3AF71C;
    case 0x7F3AF720u: goto label_7F3AF720;
    case 0x7F3AF724u: goto label_7F3AF724;
    case 0x7F3AF728u: goto label_7F3AF728;
    case 0x7F3AF72Cu: goto label_7F3AF72C;
    case 0x7F3AF730u: goto label_7F3AF730;
    case 0x7F3AF734u: goto label_7F3AF734;
    case 0x7F3AF738u: goto label_7F3AF738;
    case 0x7F3AF73Cu: goto label_7F3AF73C;
    case 0x7F3AF740u: goto label_7F3AF740;
    case 0x7F3AF744u: goto label_7F3AF744;
    case 0x7F3AF748u: goto label_7F3AF748;
    case 0x7F3AF74Cu: goto label_7F3AF74C;
    case 0x7F3AF750u: goto label_7F3AF750;
    case 0x7F3AF754u: goto label_7F3AF754;
    case 0x7F3AF758u: goto label_7F3AF758;
    case 0x7F3AF75Cu: goto label_7F3AF75C;
    case 0x7F3AF760u: goto label_7F3AF760;
    case 0x7F3AF764u: goto label_7F3AF764;
    case 0x7F3AF768u: goto label_7F3AF768;
    case 0x7F3AF76Cu: goto label_7F3AF76C;
    case 0x7F3AF770u: goto label_7F3AF770;
    case 0x7F3AF774u: goto label_7F3AF774;
    case 0x7F3AF778u: goto label_7F3AF778;
    case 0x7F3AF77Cu: goto label_7F3AF77C;
    case 0x7F3AF780u: goto label_7F3AF780;
    case 0x7F3AF784u: goto label_7F3AF784;
    case 0x7F3AF788u: goto label_7F3AF788;
    case 0x7F3AF78Cu: goto label_7F3AF78C;
    case 0x7F3AF790u: goto label_7F3AF790;
    case 0x7F3AF794u: goto label_7F3AF794;
    case 0x7F3AF798u: goto label_7F3AF798;
    case 0x7F3AF79Cu: goto label_7F3AF79C;
    case 0x7F3AF7A0u: goto label_7F3AF7A0;
    case 0x7F3AF7A4u: goto label_7F3AF7A4;
    case 0x7F3AF7A8u: goto label_7F3AF7A8;
    case 0x7F3AF7ACu: goto label_7F3AF7AC;
    case 0x7F3AF7B0u: goto label_7F3AF7B0;
    case 0x7F3AF7B4u: goto label_7F3AF7B4;
    case 0x7F3AF7B8u: goto label_7F3AF7B8;
    case 0x7F3AF7BCu: goto label_7F3AF7BC;
    case 0x7F3AF7C0u: goto label_7F3AF7C0;
    case 0x7F3AF7C4u: goto label_7F3AF7C4;
    case 0x7F3AF7C8u: goto label_7F3AF7C8;
    case 0x7F3AF7CCu: goto label_7F3AF7CC;
    case 0x7F3AF7D0u: goto label_7F3AF7D0;
    case 0x7F3AF7D4u: goto label_7F3AF7D4;
    case 0x7F3AF7D8u: goto label_7F3AF7D8;
    case 0x7F3AF7DCu: goto label_7F3AF7DC;
    case 0x7F3AF7E0u: goto label_7F3AF7E0;
    case 0x7F3AF7E4u: goto label_7F3AF7E4;
    case 0x7F3AF7E8u: goto label_7F3AF7E8;
    case 0x7F3AF7ECu: goto label_7F3AF7EC;
    case 0x7F3AF7F0u: goto label_7F3AF7F0;
    case 0x7F3AF7F4u: goto label_7F3AF7F4;
    case 0x7F3AF7F8u: goto label_7F3AF7F8;
    case 0x7F3AF7FCu: goto label_7F3AF7FC;
    case 0x7F3AF800u: goto label_7F3AF800;
    case 0x7F3AF804u: goto label_7F3AF804;
    case 0x7F3AF808u: goto label_7F3AF808;
    case 0x7F3AF80Cu: goto label_7F3AF80C;
    case 0x7F3AF810u: goto label_7F3AF810;
    case 0x7F3AF814u: goto label_7F3AF814;
    case 0x7F3AF818u: goto label_7F3AF818;
    case 0x7F3AF81Cu: goto label_7F3AF81C;
    case 0x7F3AF820u: goto label_7F3AF820;
    case 0x7F3AF824u: goto label_7F3AF824;
    case 0x7F3AF828u: goto label_7F3AF828;
    case 0x7F3AF82Cu: goto label_7F3AF82C;
    case 0x7F3AF830u: goto label_7F3AF830;
    case 0x7F3AF834u: goto label_7F3AF834;
    case 0x7F3AF838u: goto label_7F3AF838;
    case 0x7F3AF83Cu: goto label_7F3AF83C;
    case 0x7F3AF840u: goto label_7F3AF840;
    case 0x7F3AF844u: goto label_7F3AF844;
    case 0x7F3AF848u: goto label_7F3AF848;
    case 0x7F3AF84Cu: goto label_7F3AF84C;
    case 0x7F3AF850u: goto label_7F3AF850;
    case 0x7F3AF854u: goto label_7F3AF854;
    case 0x7F3AF858u: goto label_7F3AF858;
    case 0x7F3AF85Cu: goto label_7F3AF85C;
    case 0x7F3AF860u: goto label_7F3AF860;
    case 0x7F3AF864u: goto label_7F3AF864;
    case 0x7F3AF868u: goto label_7F3AF868;
    case 0x7F3AF86Cu: goto label_7F3AF86C;
    case 0x7F3AF870u: goto label_7F3AF870;
    case 0x7F3AF874u: goto label_7F3AF874;
    case 0x7F3AF878u: goto label_7F3AF878;
    case 0x7F3AF87Cu: goto label_7F3AF87C;
    case 0x7F3AF880u: goto label_7F3AF880;
    case 0x7F3AF884u: goto label_7F3AF884;
    case 0x7F3AF888u: goto label_7F3AF888;
    case 0x7F3AF88Cu: goto label_7F3AF88C;
    case 0x7F3AF890u: goto label_7F3AF890;
    case 0x7F3AF894u: goto label_7F3AF894;
    case 0x7F3AF898u: goto label_7F3AF898;
    case 0x7F3AF89Cu: goto label_7F3AF89C;
    case 0x7F3AF8A0u: goto label_7F3AF8A0;
    case 0x7F3AF8A4u: goto label_7F3AF8A4;
    case 0x7F3AF8A8u: goto label_7F3AF8A8;
    case 0x7F3AF8ACu: goto label_7F3AF8AC;
    case 0x7F3AF8B0u: goto label_7F3AF8B0;
    case 0x7F3AF8B4u: goto label_7F3AF8B4;
    case 0x7F3AF8B8u: goto label_7F3AF8B8;
    case 0x7F3AF8BCu: goto label_7F3AF8BC;
    case 0x7F3AF8C0u: goto label_7F3AF8C0;
    case 0x7F3AF8C4u: goto label_7F3AF8C4;
    case 0x7F3AF8C8u: goto label_7F3AF8C8;
    case 0x7F3AF8CCu: goto label_7F3AF8CC;
    case 0x7F3AF8D0u: goto label_7F3AF8D0;
    case 0x7F3AF8D4u: goto label_7F3AF8D4;
    case 0x7F3AF8D8u: goto label_7F3AF8D8;
    case 0x7F3AF8DCu: goto label_7F3AF8DC;
    case 0x7F3AF8E0u: goto label_7F3AF8E0;
    case 0x7F3AF8E4u: goto label_7F3AF8E4;
    case 0x7F3AF8E8u: goto label_7F3AF8E8;
    case 0x7F3AF8ECu: goto label_7F3AF8EC;
    case 0x7F3AF8F0u: goto label_7F3AF8F0;
    case 0x7F3AF8F4u: goto label_7F3AF8F4;
    case 0x7F3AF8F8u: goto label_7F3AF8F8;
    case 0x7F3AF8FCu: goto label_7F3AF8FC;
    case 0x7F3AF900u: goto label_7F3AF900;
    case 0x7F3AF904u: goto label_7F3AF904;
    case 0x7F3AF908u: goto label_7F3AF908;
    case 0x7F3AF90Cu: goto label_7F3AF90C;
    case 0x7F3AF910u: goto label_7F3AF910;
    case 0x7F3AF914u: goto label_7F3AF914;
    case 0x7F3AF918u: goto label_7F3AF918;
    case 0x7F3AF91Cu: goto label_7F3AF91C;
    case 0x7F3AF920u: goto label_7F3AF920;
    case 0x7F3AF924u: goto label_7F3AF924;
    case 0x7F3AF928u: goto label_7F3AF928;
    case 0x7F3AF92Cu: goto label_7F3AF92C;
    case 0x7F3AF930u: goto label_7F3AF930;
    case 0x7F3AF934u: goto label_7F3AF934;
    case 0x7F3AF938u: goto label_7F3AF938;
    case 0x7F3AF93Cu: goto label_7F3AF93C;
    case 0x7F3AF940u: goto label_7F3AF940;
    case 0x7F3AF944u: goto label_7F3AF944;
    case 0x7F3AF948u: goto label_7F3AF948;
    case 0x7F3AF94Cu: goto label_7F3AF94C;
    case 0x7F3AF950u: goto label_7F3AF950;
    case 0x7F3AF954u: goto label_7F3AF954;
    case 0x7F3AF958u: goto label_7F3AF958;
    case 0x7F3AF95Cu: goto label_7F3AF95C;
    case 0x7F3AF960u: goto label_7F3AF960;
    case 0x7F3AF964u: goto label_7F3AF964;
    case 0x7F3AF968u: goto label_7F3AF968;
    case 0x7F3AF96Cu: goto label_7F3AF96C;
    case 0x7F3AF970u: goto label_7F3AF970;
    case 0x7F3AF974u: goto label_7F3AF974;
    case 0x7F3AF978u: goto label_7F3AF978;
    case 0x7F3AF97Cu: goto label_7F3AF97C;
    case 0x7F3AF980u: goto label_7F3AF980;
    case 0x7F3AF984u: goto label_7F3AF984;
    case 0x7F3AF988u: goto label_7F3AF988;
    case 0x7F3AF98Cu: goto label_7F3AF98C;
    case 0x7F3AF990u: goto label_7F3AF990;
    case 0x7F3AF994u: goto label_7F3AF994;
    case 0x7F3AF998u: goto label_7F3AF998;
    case 0x7F3AF99Cu: goto label_7F3AF99C;
    case 0x7F3AF9A0u: goto label_7F3AF9A0;
    case 0x7F3AF9A4u: goto label_7F3AF9A4;
    case 0x7F3AF9A8u: goto label_7F3AF9A8;
    case 0x7F3AF9ACu: goto label_7F3AF9AC;
    case 0x7F3AF9B0u: goto label_7F3AF9B0;
    case 0x7F3AF9B4u: goto label_7F3AF9B4;
    case 0x7F3AF9B8u: goto label_7F3AF9B8;
    case 0x7F3AF9BCu: goto label_7F3AF9BC;
    case 0x7F3AF9C0u: goto label_7F3AF9C0;
    case 0x7F3AF9C4u: goto label_7F3AF9C4;
    case 0x7F3AF9C8u: goto label_7F3AF9C8;
    case 0x7F3AF9CCu: goto label_7F3AF9CC;
    case 0x7F3AF9D0u: goto label_7F3AF9D0;
    case 0x7F3AF9D4u: goto label_7F3AF9D4;
    case 0x7F3AF9D8u: goto label_7F3AF9D8;
    case 0x7F3AF9DCu: goto label_7F3AF9DC;
    case 0x7F3AF9E0u: goto label_7F3AF9E0;
    case 0x7F3AF9E4u: goto label_7F3AF9E4;
    case 0x7F3AF9E8u: goto label_7F3AF9E8;
    case 0x7F3AF9ECu: goto label_7F3AF9EC;
    case 0x7F3AF9F0u: goto label_7F3AF9F0;
    case 0x7F3AF9F4u: goto label_7F3AF9F4;
    case 0x7F3AF9F8u: goto label_7F3AF9F8;
    case 0x7F3AF9FCu: goto label_7F3AF9FC;
    case 0x7F3AFA00u: goto label_7F3AFA00;
    case 0x7F3AFA04u: goto label_7F3AFA04;
    case 0x7F3AFA08u: goto label_7F3AFA08;
    case 0x7F3AFA0Cu: goto label_7F3AFA0C;
    case 0x7F3AFA10u: goto label_7F3AFA10;
    case 0x7F3AFA14u: goto label_7F3AFA14;
    case 0x7F3AFA18u: goto label_7F3AFA18;
    case 0x7F3AFA1Cu: goto label_7F3AFA1C;
    case 0x7F3AFA20u: goto label_7F3AFA20;
    case 0x7F3AFA24u: goto label_7F3AFA24;
    case 0x7F3AFA28u: goto label_7F3AFA28;
    case 0x7F3AFA2Cu: goto label_7F3AFA2C;
    case 0x7F3AFA30u: goto label_7F3AFA30;
    case 0x7F3AFA34u: goto label_7F3AFA34;
    case 0x7F3AFA38u: goto label_7F3AFA38;
    case 0x7F3AFA3Cu: goto label_7F3AFA3C;
    case 0x7F3AFA40u: goto label_7F3AFA40;
    case 0x7F3AFA44u: goto label_7F3AFA44;
    case 0x7F3AFA48u: goto label_7F3AFA48;
    case 0x7F3AFA4Cu: goto label_7F3AFA4C;
    case 0x7F3AFA50u: goto label_7F3AFA50;
    case 0x7F3AFA54u: goto label_7F3AFA54;
    case 0x7F3AFA58u: goto label_7F3AFA58;
    case 0x7F3AFA5Cu: goto label_7F3AFA5C;
    case 0x7F3AFA60u: goto label_7F3AFA60;
    case 0x7F3AFA64u: goto label_7F3AFA64;
    case 0x7F3AFA68u: goto label_7F3AFA68;
    case 0x7F3AFA6Cu: goto label_7F3AFA6C;
    case 0x7F3AFA70u: goto label_7F3AFA70;
    case 0x7F3AFA74u: goto label_7F3AFA74;
    case 0x7F3AFA78u: goto label_7F3AFA78;
    case 0x7F3AFA7Cu: goto label_7F3AFA7C;
    case 0x7F3AFA80u: goto label_7F3AFA80;
    case 0x7F3AFA84u: goto label_7F3AFA84;
    case 0x7F3AFA88u: goto label_7F3AFA88;
    case 0x7F3AFA8Cu: goto label_7F3AFA8C;
    case 0x7F3AFA90u: goto label_7F3AFA90;
    case 0x7F3AFA94u: goto label_7F3AFA94;
    case 0x7F3AFA98u: goto label_7F3AFA98;
    case 0x7F3AFA9Cu: goto label_7F3AFA9C;
    case 0x7F3AFAA0u: goto label_7F3AFAA0;
    case 0x7F3AFAA4u: goto label_7F3AFAA4;
    case 0x7F3AFAA8u: goto label_7F3AFAA8;
    case 0x7F3AFAACu: goto label_7F3AFAAC;
    case 0x7F3AFAB0u: goto label_7F3AFAB0;
    case 0x7F3AFAB4u: goto label_7F3AFAB4;
    case 0x7F3AFAB8u: goto label_7F3AFAB8;
    case 0x7F3AFABCu: goto label_7F3AFABC;
    case 0x7F3AFAC0u: goto label_7F3AFAC0;
    case 0x7F3AFAC4u: goto label_7F3AFAC4;
    case 0x7F3AFAC8u: goto label_7F3AFAC8;
    case 0x7F3AFACCu: goto label_7F3AFACC;
    case 0x7F3AFAD0u: goto label_7F3AFAD0;
    case 0x7F3AFAD4u: goto label_7F3AFAD4;
    case 0x7F3AFAD8u: goto label_7F3AFAD8;
    case 0x7F3AFADCu: goto label_7F3AFADC;
    case 0x7F3AFAE0u: goto label_7F3AFAE0;
    case 0x7F3AFAE4u: goto label_7F3AFAE4;
    case 0x7F3AFAE8u: goto label_7F3AFAE8;
    case 0x7F3AFAECu: goto label_7F3AFAEC;
    case 0x7F3AFAF0u: goto label_7F3AFAF0;
    case 0x7F3AFAF4u: goto label_7F3AFAF4;
    case 0x7F3AFAF8u: goto label_7F3AFAF8;
    case 0x7F3AFAFCu: goto label_7F3AFAFC;
    case 0x7F3AFB00u: goto label_7F3AFB00;
    case 0x7F3AFB04u: goto label_7F3AFB04;
    case 0x7F3AFB08u: goto label_7F3AFB08;
    case 0x7F3AFB0Cu: goto label_7F3AFB0C;
    case 0x7F3AFB10u: goto label_7F3AFB10;
    case 0x7F3AFB14u: goto label_7F3AFB14;
    case 0x7F3AFB18u: goto label_7F3AFB18;
    case 0x7F3AFB1Cu: goto label_7F3AFB1C;
    case 0x7F3AFB20u: goto label_7F3AFB20;
    case 0x7F3AFB24u: goto label_7F3AFB24;
    case 0x7F3AFB28u: goto label_7F3AFB28;
    case 0x7F3AFB2Cu: goto label_7F3AFB2C;
    case 0x7F3AFB30u: goto label_7F3AFB30;
    case 0x7F3AFB34u: goto label_7F3AFB34;
    case 0x7F3AFB38u: goto label_7F3AFB38;
    case 0x7F3AFB3Cu: goto label_7F3AFB3C;
    case 0x7F3AFB40u: goto label_7F3AFB40;
    case 0x7F3AFB44u: goto label_7F3AFB44;
    case 0x7F3AFB48u: goto label_7F3AFB48;
    case 0x7F3AFB4Cu: goto label_7F3AFB4C;
    case 0x7F3AFB50u: goto label_7F3AFB50;
    case 0x7F3AFB54u: goto label_7F3AFB54;
    case 0x7F3AFB58u: goto label_7F3AFB58;
    case 0x7F3AFB5Cu: goto label_7F3AFB5C;
    case 0x7F3AFB60u: goto label_7F3AFB60;
    case 0x7F3AFB64u: goto label_7F3AFB64;
    case 0x7F3AFB68u: goto label_7F3AFB68;
    case 0x7F3AFB6Cu: goto label_7F3AFB6C;
    case 0x7F3AFB70u: goto label_7F3AFB70;
    case 0x7F3AFB74u: goto label_7F3AFB74;
    case 0x7F3AFB78u: goto label_7F3AFB78;
    case 0x7F3AFB7Cu: goto label_7F3AFB7C;
    case 0x7F3AFB80u: goto label_7F3AFB80;
    case 0x7F3AFB84u: goto label_7F3AFB84;
    case 0x7F3AFB88u: goto label_7F3AFB88;
    case 0x7F3AFB8Cu: goto label_7F3AFB8C;
    case 0x7F3AFB90u: goto label_7F3AFB90;
    case 0x7F3AFB94u: goto label_7F3AFB94;
    case 0x7F3AFB98u: goto label_7F3AFB98;
    case 0x7F3AFB9Cu: goto label_7F3AFB9C;
    case 0x7F3AFBA0u: goto label_7F3AFBA0;
    case 0x7F3AFBA4u: goto label_7F3AFBA4;
    case 0x7F3AFBA8u: goto label_7F3AFBA8;
    case 0x7F3AFBACu: goto label_7F3AFBAC;
    case 0x7F3AFBB0u: goto label_7F3AFBB0;
    case 0x7F3AFBB4u: goto label_7F3AFBB4;
    case 0x7F3AFBB8u: goto label_7F3AFBB8;
    case 0x7F3AFBBCu: goto label_7F3AFBBC;
    case 0x7F3AFBC0u: goto label_7F3AFBC0;
    case 0x7F3AFBC4u: goto label_7F3AFBC4;
    case 0x7F3AFBC8u: goto label_7F3AFBC8;
    case 0x7F3AFBCCu: goto label_7F3AFBCC;
    case 0x7F3AFBD0u: goto label_7F3AFBD0;
    case 0x7F3AFBD4u: goto label_7F3AFBD4;
    case 0x7F3AFBD8u: goto label_7F3AFBD8;
    case 0x7F3AFBDCu: goto label_7F3AFBDC;
    case 0x7F3AFBE0u: goto label_7F3AFBE0;
    case 0x7F3AFBE4u: goto label_7F3AFBE4;
    case 0x7F3AFBE8u: goto label_7F3AFBE8;
    case 0x7F3AFBECu: goto label_7F3AFBEC;
    case 0x7F3AFBF0u: goto label_7F3AFBF0;
    case 0x7F3AFBF4u: goto label_7F3AFBF4;
    case 0x7F3AFBF8u: goto label_7F3AFBF8;
    case 0x7F3AFBFCu: goto label_7F3AFBFC;
    case 0x7F3AFC00u: goto label_7F3AFC00;
    case 0x7F3AFC04u: goto label_7F3AFC04;
    case 0x7F3AFC08u: goto label_7F3AFC08;
    case 0x7F3AFC0Cu: goto label_7F3AFC0C;
    case 0x7F3AFC10u: goto label_7F3AFC10;
    case 0x7F3AFC14u: goto label_7F3AFC14;
    case 0x7F3AFC18u: goto label_7F3AFC18;
    case 0x7F3AFC1Cu: goto label_7F3AFC1C;
    case 0x7F3AFC20u: goto label_7F3AFC20;
    case 0x7F3AFC24u: goto label_7F3AFC24;
    case 0x7F3AFC28u: goto label_7F3AFC28;
    case 0x7F3AFC2Cu: goto label_7F3AFC2C;
    case 0x7F3AFC30u: goto label_7F3AFC30;
    case 0x7F3AFC34u: goto label_7F3AFC34;
    case 0x7F3AFC38u: goto label_7F3AFC38;
    case 0x7F3AFC3Cu: goto label_7F3AFC3C;
    case 0x7F3AFC40u: goto label_7F3AFC40;
    case 0x7F3AFC44u: goto label_7F3AFC44;
    case 0x7F3AFC48u: goto label_7F3AFC48;
    case 0x7F3AFC4Cu: goto label_7F3AFC4C;
    case 0x7F3AFC50u: goto label_7F3AFC50;
    case 0x7F3AFC54u: goto label_7F3AFC54;
    case 0x7F3AFC58u: goto label_7F3AFC58;
    case 0x7F3AFC5Cu: goto label_7F3AFC5C;
    case 0x7F3AFC60u: goto label_7F3AFC60;
    case 0x7F3AFC64u: goto label_7F3AFC64;
    case 0x7F3AFC68u: goto label_7F3AFC68;
    case 0x7F3AFC6Cu: goto label_7F3AFC6C;
    case 0x7F3AFC70u: goto label_7F3AFC70;
    case 0x7F3AFC74u: goto label_7F3AFC74;
    case 0x7F3AFC78u: goto label_7F3AFC78;
    case 0x7F3AFC7Cu: goto label_7F3AFC7C;
    case 0x7F3AFC80u: goto label_7F3AFC80;
    case 0x7F3AFC84u: goto label_7F3AFC84;
    case 0x7F3AFC88u: goto label_7F3AFC88;
    case 0x7F3AFC8Cu: goto label_7F3AFC8C;
    case 0x7F3AFC90u: goto label_7F3AFC90;
    case 0x7F3AFC94u: goto label_7F3AFC94;
    case 0x7F3AFC98u: goto label_7F3AFC98;
    case 0x7F3AFC9Cu: goto label_7F3AFC9C;
    case 0x7F3AFCA0u: goto label_7F3AFCA0;
    case 0x7F3AFCA4u: goto label_7F3AFCA4;
    case 0x7F3AFCA8u: goto label_7F3AFCA8;
    case 0x7F3AFCACu: goto label_7F3AFCAC;
    case 0x7F3AFCB0u: goto label_7F3AFCB0;
    case 0x7F3AFCB4u: goto label_7F3AFCB4;
    case 0x7F3AFCB8u: goto label_7F3AFCB8;
    case 0x7F3AFCBCu: goto label_7F3AFCBC;
    case 0x7F3AFCC0u: goto label_7F3AFCC0;
    case 0x7F3AFCC4u: goto label_7F3AFCC4;
    case 0x7F3AFCC8u: goto label_7F3AFCC8;
    case 0x7F3AFCCCu: goto label_7F3AFCCC;
    case 0x7F3AFCD0u: goto label_7F3AFCD0;
    case 0x7F3AFCD4u: goto label_7F3AFCD4;
    case 0x7F3AFCD8u: goto label_7F3AFCD8;
    case 0x7F3AFCDCu: goto label_7F3AFCDC;
    case 0x7F3AFCE0u: goto label_7F3AFCE0;
    case 0x7F3AFCE4u: goto label_7F3AFCE4;
    case 0x7F3AFCE8u: goto label_7F3AFCE8;
    case 0x7F3AFCECu: goto label_7F3AFCEC;
    case 0x7F3AFCF0u: goto label_7F3AFCF0;
    case 0x7F3AFCF4u: goto label_7F3AFCF4;
    case 0x7F3AFCF8u: goto label_7F3AFCF8;
    case 0x7F3AFCFCu: goto label_7F3AFCFC;
    case 0x7F3AFD00u: goto label_7F3AFD00;
    case 0x7F3AFD04u: goto label_7F3AFD04;
    case 0x7F3AFD08u: goto label_7F3AFD08;
    case 0x7F3AFD0Cu: goto label_7F3AFD0C;
    case 0x7F3AFD10u: goto label_7F3AFD10;
    case 0x7F3AFD14u: goto label_7F3AFD14;
    case 0x7F3AFD18u: goto label_7F3AFD18;
    case 0x7F3AFD1Cu: goto label_7F3AFD1C;
    case 0x7F3AFD20u: goto label_7F3AFD20;
    case 0x7F3AFD24u: goto label_7F3AFD24;
    case 0x7F3AFD28u: goto label_7F3AFD28;
    case 0x7F3AFD2Cu: goto label_7F3AFD2C;
    case 0x7F3AFD30u: goto label_7F3AFD30;
    case 0x7F3AFD34u: goto label_7F3AFD34;
    case 0x7F3AFD38u: goto label_7F3AFD38;
    case 0x7F3AFD3Cu: goto label_7F3AFD3C;
    case 0x7F3AFD40u: goto label_7F3AFD40;
    case 0x7F3AFD44u: goto label_7F3AFD44;
    case 0x7F3AFD48u: goto label_7F3AFD48;
    case 0x7F3AFD4Cu: goto label_7F3AFD4C;
    case 0x7F3AFD50u: goto label_7F3AFD50;
    case 0x7F3AFD54u: goto label_7F3AFD54;
    case 0x7F3AFD58u: goto label_7F3AFD58;
    case 0x7F3AFD5Cu: goto label_7F3AFD5C;
    case 0x7F3AFD60u: goto label_7F3AFD60;
    case 0x7F3AFD64u: goto label_7F3AFD64;
    case 0x7F3AFD68u: goto label_7F3AFD68;
    case 0x7F3AFD6Cu: goto label_7F3AFD6C;
    case 0x7F3AFD70u: goto label_7F3AFD70;
    case 0x7F3AFD74u: goto label_7F3AFD74;
    case 0x7F3AFD78u: goto label_7F3AFD78;
    case 0x7F3AFD7Cu: goto label_7F3AFD7C;
    case 0x7F3AFD80u: goto label_7F3AFD80;
    case 0x7F3AFD84u: goto label_7F3AFD84;
    case 0x7F3AFD88u: goto label_7F3AFD88;
    case 0x7F3AFD8Cu: goto label_7F3AFD8C;
    case 0x7F3AFD90u: goto label_7F3AFD90;
    case 0x7F3AFD94u: goto label_7F3AFD94;
    case 0x7F3AFD98u: goto label_7F3AFD98;
    case 0x7F3AFD9Cu: goto label_7F3AFD9C;
    case 0x7F3AFDA0u: goto label_7F3AFDA0;
    case 0x7F3AFDA4u: goto label_7F3AFDA4;
    case 0x7F3AFDA8u: goto label_7F3AFDA8;
    case 0x7F3AFDACu: goto label_7F3AFDAC;
    case 0x7F3AFDB0u: goto label_7F3AFDB0;
    case 0x7F3AFDB4u: goto label_7F3AFDB4;
    case 0x7F3AFDB8u: goto label_7F3AFDB8;
    case 0x7F3AFDBCu: goto label_7F3AFDBC;
    case 0x7F3AFDC0u: goto label_7F3AFDC0;
    case 0x7F3AFDC4u: goto label_7F3AFDC4;
    case 0x7F3AFDC8u: goto label_7F3AFDC8;
    case 0x7F3AFDCCu: goto label_7F3AFDCC;
    case 0x7F3AFDD0u: goto label_7F3AFDD0;
    case 0x7F3AFDD4u: goto label_7F3AFDD4;
    case 0x7F3AFDD8u: goto label_7F3AFDD8;
    case 0x7F3AFDDCu: goto label_7F3AFDDC;
    case 0x7F3AFDE0u: goto label_7F3AFDE0;
    case 0x7F3AFDE4u: goto label_7F3AFDE4;
    case 0x7F3AFDE8u: goto label_7F3AFDE8;
    case 0x7F3AFDECu: goto label_7F3AFDEC;
    case 0x7F3AFDF0u: goto label_7F3AFDF0;
    case 0x7F3AFDF4u: goto label_7F3AFDF4;
    case 0x7F3AFDF8u: goto label_7F3AFDF8;
    case 0x7F3AFDFCu: goto label_7F3AFDFC;
    case 0x7F3AFE00u: goto label_7F3AFE00;
    case 0x7F3AFE04u: goto label_7F3AFE04;
    case 0x7F3AFE08u: goto label_7F3AFE08;
    case 0x7F3AFE0Cu: goto label_7F3AFE0C;
    case 0x7F3AFE10u: goto label_7F3AFE10;
    case 0x7F3AFE14u: goto label_7F3AFE14;
    case 0x7F3AFE18u: goto label_7F3AFE18;
    case 0x7F3AFE1Cu: goto label_7F3AFE1C;
    case 0x7F3AFE20u: goto label_7F3AFE20;
    case 0x7F3AFE24u: goto label_7F3AFE24;
    case 0x7F3AFE28u: goto label_7F3AFE28;
    case 0x7F3AFE2Cu: goto label_7F3AFE2C;
    case 0x7F3AFE30u: goto label_7F3AFE30;
    case 0x7F3AFE34u: goto label_7F3AFE34;
    case 0x7F3AFE38u: goto label_7F3AFE38;
    case 0x7F3AFE3Cu: goto label_7F3AFE3C;
    case 0x7F3AFE40u: goto label_7F3AFE40;
    case 0x7F3AFE44u: goto label_7F3AFE44;
    case 0x7F3AFE48u: goto label_7F3AFE48;
    case 0x7F3AFE4Cu: goto label_7F3AFE4C;
    case 0x7F3AFE50u: goto label_7F3AFE50;
    case 0x7F3AFE54u: goto label_7F3AFE54;
    case 0x7F3AFE58u: goto label_7F3AFE58;
    case 0x7F3AFE5Cu: goto label_7F3AFE5C;
    case 0x7F3AFE60u: goto label_7F3AFE60;
    case 0x7F3AFE64u: goto label_7F3AFE64;
    case 0x7F3AFE68u: goto label_7F3AFE68;
    case 0x7F3AFE6Cu: goto label_7F3AFE6C;
    case 0x7F3AFE70u: goto label_7F3AFE70;
    case 0x7F3AFE74u: goto label_7F3AFE74;
    case 0x7F3AFE78u: goto label_7F3AFE78;
    case 0x7F3AFE7Cu: goto label_7F3AFE7C;
    case 0x7F3AFE80u: goto label_7F3AFE80;
    case 0x7F3AFE84u: goto label_7F3AFE84;
    case 0x7F3AFE88u: goto label_7F3AFE88;
    case 0x7F3AFE8Cu: goto label_7F3AFE8C;
    case 0x7F3AFE90u: goto label_7F3AFE90;
    case 0x7F3AFE94u: goto label_7F3AFE94;
    case 0x7F3AFE98u: goto label_7F3AFE98;
    case 0x7F3AFE9Cu: goto label_7F3AFE9C;
    case 0x7F3AFEA0u: goto label_7F3AFEA0;
    case 0x7F3AFEA4u: goto label_7F3AFEA4;
    case 0x7F3AFEA8u: goto label_7F3AFEA8;
    case 0x7F3AFEACu: goto label_7F3AFEAC;
    case 0x7F3AFEB0u: goto label_7F3AFEB0;
    case 0x7F3AFEB4u: goto label_7F3AFEB4;
    case 0x7F3AFEB8u: goto label_7F3AFEB8;
    case 0x7F3AFEBCu: goto label_7F3AFEBC;
    case 0x7F3AFEC0u: goto label_7F3AFEC0;
    case 0x7F3AFEC4u: goto label_7F3AFEC4;
    case 0x7F3AFEC8u: goto label_7F3AFEC8;
    case 0x7F3AFECCu: goto label_7F3AFECC;
    case 0x7F3AFED0u: goto label_7F3AFED0;
    case 0x7F3AFED4u: goto label_7F3AFED4;
    case 0x7F3AFED8u: goto label_7F3AFED8;
    case 0x7F3AFEDCu: goto label_7F3AFEDC;
    case 0x7F3AFEE0u: goto label_7F3AFEE0;
    case 0x7F3AFEE4u: goto label_7F3AFEE4;
    case 0x7F3AFEE8u: goto label_7F3AFEE8;
    case 0x7F3AFEECu: goto label_7F3AFEEC;
    case 0x7F3AFEF0u: goto label_7F3AFEF0;
    case 0x7F3AFEF4u: goto label_7F3AFEF4;
    case 0x7F3AFEF8u: goto label_7F3AFEF8;
    case 0x7F3AFEFCu: goto label_7F3AFEFC;
    case 0x7F3AFF00u: goto label_7F3AFF00;
    case 0x7F3AFF04u: goto label_7F3AFF04;
    case 0x7F3AFF08u: goto label_7F3AFF08;
    case 0x7F3AFF0Cu: goto label_7F3AFF0C;
    case 0x7F3AFF10u: goto label_7F3AFF10;
    case 0x7F3AFF14u: goto label_7F3AFF14;
    case 0x7F3AFF18u: goto label_7F3AFF18;
    case 0x7F3AFF1Cu: goto label_7F3AFF1C;
    case 0x7F3AFF20u: goto label_7F3AFF20;
    case 0x7F3AFF24u: goto label_7F3AFF24;
    case 0x7F3AFF28u: goto label_7F3AFF28;
    case 0x7F3AFF2Cu: goto label_7F3AFF2C;
    case 0x7F3AFF30u: goto label_7F3AFF30;
    case 0x7F3AFF34u: goto label_7F3AFF34;
    case 0x7F3AFF38u: goto label_7F3AFF38;
    case 0x7F3AFF3Cu: goto label_7F3AFF3C;
    case 0x7F3AFF40u: goto label_7F3AFF40;
    case 0x7F3AFF44u: goto label_7F3AFF44;
    case 0x7F3AFF48u: goto label_7F3AFF48;
    case 0x7F3AFF4Cu: goto label_7F3AFF4C;
    case 0x7F3AFF50u: goto label_7F3AFF50;
    case 0x7F3AFF54u: goto label_7F3AFF54;
    case 0x7F3AFF58u: goto label_7F3AFF58;
    case 0x7F3AFF5Cu: goto label_7F3AFF5C;
    case 0x7F3AFF60u: goto label_7F3AFF60;
    case 0x7F3AFF64u: goto label_7F3AFF64;
    case 0x7F3AFF68u: goto label_7F3AFF68;
    case 0x7F3AFF6Cu: goto label_7F3AFF6C;
    case 0x7F3AFF70u: goto label_7F3AFF70;
    case 0x7F3AFF74u: goto label_7F3AFF74;
    case 0x7F3AFF78u: goto label_7F3AFF78;
    case 0x7F3AFF7Cu: goto label_7F3AFF7C;
    case 0x7F3AFF80u: goto label_7F3AFF80;
    case 0x7F3AFF84u: goto label_7F3AFF84;
    case 0x7F3AFF88u: goto label_7F3AFF88;
    case 0x7F3AFF8Cu: goto label_7F3AFF8C;
    case 0x7F3AFF90u: goto label_7F3AFF90;
    case 0x7F3AFF94u: goto label_7F3AFF94;
    case 0x7F3AFF98u: goto label_7F3AFF98;
    case 0x7F3AFF9Cu: goto label_7F3AFF9C;
    case 0x7F3AFFA0u: goto label_7F3AFFA0;
    case 0x7F3AFFA4u: goto label_7F3AFFA4;
    case 0x7F3AFFA8u: goto label_7F3AFFA8;
    case 0x7F3AFFACu: goto label_7F3AFFAC;
    case 0x7F3AFFB0u: goto label_7F3AFFB0;
    case 0x7F3AFFB4u: goto label_7F3AFFB4;
    case 0x7F3AFFB8u: goto label_7F3AFFB8;
    case 0x7F3AFFBCu: goto label_7F3AFFBC;
    case 0x7F3AFFC0u: goto label_7F3AFFC0;
    case 0x7F3AFFC4u: goto label_7F3AFFC4;
    case 0x7F3AFFC8u: goto label_7F3AFFC8;
    case 0x7F3AFFCCu: goto label_7F3AFFCC;
    case 0x7F3AFFD0u: goto label_7F3AFFD0;
    case 0x7F3AFFD4u: goto label_7F3AFFD4;
    case 0x7F3AFFD8u: goto label_7F3AFFD8;
    case 0x7F3AFFDCu: goto label_7F3AFFDC;
    case 0x7F3AFFE0u: goto label_7F3AFFE0;
    case 0x7F3AFFE4u: goto label_7F3AFFE4;
    case 0x7F3AFFE8u: goto label_7F3AFFE8;
    case 0x7F3AFFECu: goto label_7F3AFFEC;
    case 0x7F3AFFF0u: goto label_7F3AFFF0;
    case 0x7F3AFFF4u: goto label_7F3AFFF4;
    case 0x7F3AFFF8u: goto label_7F3AFFF8;
    case 0x7F3AFFFCu: goto label_7F3AFFFC;
    case 0x7F3B0000u: goto label_7F3B0000;
    case 0x7F3B0004u: goto label_7F3B0004;
    case 0x7F3B0008u: goto label_7F3B0008;
    case 0x7F3B000Cu: goto label_7F3B000C;
    case 0x7F3B0010u: goto label_7F3B0010;
    case 0x7F3B0014u: goto label_7F3B0014;
    case 0x7F3B0018u: goto label_7F3B0018;
    case 0x7F3B001Cu: goto label_7F3B001C;
    case 0x7F3B0020u: goto label_7F3B0020;
    case 0x7F3B0024u: goto label_7F3B0024;
    case 0x7F3B0028u: goto label_7F3B0028;
    case 0x7F3B002Cu: goto label_7F3B002C;
    case 0x7F3B0030u: goto label_7F3B0030;
    case 0x7F3B0034u: goto label_7F3B0034;
    case 0x7F3B0038u: goto label_7F3B0038;
    case 0x7F3B003Cu: goto label_7F3B003C;
    case 0x7F3B0040u: goto label_7F3B0040;
    case 0x7F3B0044u: goto label_7F3B0044;
    case 0x7F3B0048u: goto label_7F3B0048;
    case 0x7F3B004Cu: goto label_7F3B004C;
    case 0x7F3B0050u: goto label_7F3B0050;
    case 0x7F3B0054u: goto label_7F3B0054;
    case 0x7F3B0058u: goto label_7F3B0058;
    case 0x7F3B005Cu: goto label_7F3B005C;
    case 0x7F3B0060u: goto label_7F3B0060;
    case 0x7F3B0064u: goto label_7F3B0064;
    case 0x7F3B0068u: goto label_7F3B0068;
    case 0x7F3B006Cu: goto label_7F3B006C;
    case 0x7F3B0070u: goto label_7F3B0070;
    case 0x7F3B0074u: goto label_7F3B0074;
    case 0x7F3B0078u: goto label_7F3B0078;
    case 0x7F3B007Cu: goto label_7F3B007C;
    case 0x7F3B0080u: goto label_7F3B0080;
    case 0x7F3B0084u: goto label_7F3B0084;
    case 0x7F3B0088u: goto label_7F3B0088;
    case 0x7F3B008Cu: goto label_7F3B008C;
    case 0x7F3B0090u: goto label_7F3B0090;
    case 0x7F3B0094u: goto label_7F3B0094;
    case 0x7F3B0098u: goto label_7F3B0098;
    case 0x7F3B009Cu: goto label_7F3B009C;
    case 0x7F3B00A0u: goto label_7F3B00A0;
    case 0x7F3B00A4u: goto label_7F3B00A4;
    case 0x7F3B00A8u: goto label_7F3B00A8;
    case 0x7F3B00ACu: goto label_7F3B00AC;
    case 0x7F3B00B0u: goto label_7F3B00B0;
    case 0x7F3B00B4u: goto label_7F3B00B4;
    case 0x7F3B00B8u: goto label_7F3B00B8;
    case 0x7F3B00BCu: goto label_7F3B00BC;
    case 0x7F3B00C0u: goto label_7F3B00C0;
    case 0x7F3B00C4u: goto label_7F3B00C4;
    case 0x7F3B00C8u: goto label_7F3B00C8;
    case 0x7F3B00CCu: goto label_7F3B00CC;
    case 0x7F3B00D0u: goto label_7F3B00D0;
    case 0x7F3B00D4u: goto label_7F3B00D4;
    case 0x7F3B00D8u: goto label_7F3B00D8;
    case 0x7F3B00DCu: goto label_7F3B00DC;
    case 0x7F3B00E0u: goto label_7F3B00E0;
    case 0x7F3B00E4u: goto label_7F3B00E4;
    case 0x7F3B00E8u: goto label_7F3B00E8;
    default: return;
    }
label_7F3AC0EC:
    ctx->pc = 0x7F3AC0ECu;
    ctx->downcount -= 2;
    // 7F3AC0EC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC0F0:
    ctx->pc = 0x7F3AC0F0u;
    // 7F3AC0F0: b       0x7F3AC168
    {
            goto label_7F3AC168;
    }

label_7F3AC0F4:
    ctx->downcount -= 6;
    // 7F3AC0F4: add   r28, r24, r30
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F3AC0F8:
    // 7F3AC0F8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AC0FC:
    // 7F3AC0FC: addi    r26, r28, 444
    ctx->gpr[26] = ctx->gpr[28] + (u32)(s32)(444);

label_7F3AC100:
    // 7F3AC100: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F3AC104:
    // 7F3AC104: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AC108:
    // 7F3AC108: bl      0x8000519C
    {
            ctx->lr = 0x7F3AC10Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3AC10C:
    ctx->pc = 0x7F3AC10Cu;
    ctx->downcount -= 3;
    // 7F3AC10C: lha     r0, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AC110:
    // 7F3AC110: cmpw    r27, r0
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

label_7F3AC114:
    // 7F3AC114: bc    4, 0, 0x7F3AC150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC150;
        }
    }

label_7F3AC118:
    ctx->pc = 0x7F3AC118u;
    ctx->downcount -= 14;
    // 7F3AC118: lwz     r6, 660(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(660);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AC11C:
    // 7F3AC11C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AC120:
    // 7F3AC120: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AC124:
    // 7F3AC124: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC128:
    ctx->pc = 0x7F3AC128u;
    // 7F3AC128: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC128u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC12C:
    ctx->pc = 0x7F3AC12Cu;
    // 7F3AC12C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AC12Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3AC130:
    ctx->pc = 0x7F3AC130u;
    // 7F3AC130: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC134:
    ctx->pc = 0x7F3AC134u;
    // 7F3AC134: lfs     f0, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC134u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC138:
    ctx->pc = 0x7F3AC138u;
    // 7F3AC138: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AC138u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3AC13C:
    ctx->pc = 0x7F3AC13Cu;
    // 7F3AC13C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC140:
    ctx->pc = 0x7F3AC140u;
    // 7F3AC140: lfs     f0, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC140u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC144:
    ctx->pc = 0x7F3AC144u;
    // 7F3AC144: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AC144u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F3AC148:
    ctx->pc = 0x7F3AC148u;
    // 7F3AC148: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC14C:
    // 7F3AC14C: bl      0x7F114508
    {
            ctx->lr = 0x7F3AC150u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3AC150:
    ctx->downcount -= 3;
    // 7F3AC150: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AC154:
    // 7F3AC154: add   r4, r25, r31
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC158:
    // 7F3AC158: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AC15Cu;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AC15C:
    ctx->downcount -= 3;
    // 7F3AC15C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F3AC160:
    // 7F3AC160: addi    r31, r31, 48
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3AC164:
    // 7F3AC164: addi    r30, r30, 324
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(324);

label_7F3AC168:
    ctx->pc = 0x7F3AC168u;
    ctx->downcount -= 3;
    // 7F3AC168: lha     r0, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AC16C:
    // 7F3AC16C: cmpw    r27, r0
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

label_7F3AC170:
    // 7F3AC170: bc    12, 0, 0x7F3AC0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC0F4u;
                return;
            }
            goto label_7F3AC0F4;
        }
    }

label_7F3AC174:
    ctx->pc = 0x7F3AC174u;
    ctx->downcount -= 16;
    // 7F3AC174: lmw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC178:
    ctx->pc = 0x7F3AC178u;
    // 7F3AC178: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC17C:
    ctx->pc = 0x7F3AC17Cu;
    // 7F3AC17C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC180:
    ctx->pc = 0x7F3AC180u;
    // 7F3AC180: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F3AC184:
    ctx->pc = 0x7F3AC184u;
    // 7F3AC184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC188:
    ctx->pc = 0x7F3AC188u;
    ctx->downcount -= 23;
    // 7F3AC188: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC18C:
    ctx->pc = 0x7F3AC18Cu;
    // 7F3AC18C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC190:
    ctx->pc = 0x7F3AC190u;
    // 7F3AC190: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC194:
    ctx->pc = 0x7F3AC194u;
    // 7F3AC194: stmw     r23, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC198:
    ctx->pc = 0x7F3AC198u;
    // 7F3AC198: or   r23, r6, r6
    {
        ctx->gpr[23] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AC19C:
    ctx->pc = 0x7F3AC19Cu;
    // 7F3AC19C: lis     r6, 32592
    ctx->gpr[6] = ((u32)(s32)(32592) << 16);

label_7F3AC1A0:
    ctx->pc = 0x7F3AC1A0u;
    // 7F3AC1A0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC1A4:
    ctx->pc = 0x7F3AC1A4u;
    // 7F3AC1A4: addi    r3, r6, -21852
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-21852);

label_7F3AC1A8:
    ctx->pc = 0x7F3AC1A8u;
    // 7F3AC1A8: cmpwi   r23, 2
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC1AC:
    ctx->pc = 0x7F3AC1ACu;
    // 7F3AC1AC: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC1B0:
    ctx->pc = 0x7F3AC1B0u;
    // 7F3AC1B0: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AC1B4:
    ctx->pc = 0x7F3AC1B4u;
    // 7F3AC1B4: addi    r27, r3, 3224
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(3224);

label_7F3AC1B8:
    ctx->pc = 0x7F3AC1B8u;
    // 7F3AC1B8: bc    4, 2, 0x7F3AC1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC1C0;
        }
    }

label_7F3AC1BC:
    ctx->pc = 0x7F3AC1BCu;
    ctx->downcount -= 1;
    // 7F3AC1BC: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F3AC1C0:
    ctx->pc = 0x7F3AC1C0u;
    ctx->downcount -= 8;
    // 7F3AC1C0: rlwinm r0, r23, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 1u) & 0xFFFFFFFEu;
    }

label_7F3AC1C4:
    ctx->pc = 0x7F3AC1C4u;
    // 7F3AC1C4: lwz     r3, 304(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC1C8:
    ctx->pc = 0x7F3AC1C8u;
    // 7F3AC1C8: add   r29, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3AC1CC:
    ctx->pc = 0x7F3AC1CCu;
    // 7F3AC1CC: xori    r0, r23, 0x0001
    ctx->gpr[0] = ctx->gpr[23] ^ 0x0001u;

label_7F3AC1D0:
    ctx->pc = 0x7F3AC1D0u;
    // 7F3AC1D0: cmpw    r3, r29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC1D4:
    ctx->pc = 0x7F3AC1D4u;
    // 7F3AC1D4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F3AC1D8:
    ctx->pc = 0x7F3AC1D8u;
    // 7F3AC1D8: add   r0, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AC1DC:
    ctx->pc = 0x7F3AC1DCu;
    // 7F3AC1DC: bc    4, 2, 0x7F3AC1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC1E8;
        }
    }

label_7F3AC1E0:
    ctx->pc = 0x7F3AC1E0u;
    ctx->downcount -= 2;
    // 7F3AC1E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AC1E4:
    ctx->pc = 0x7F3AC1E4u;
    // 7F3AC1E4: b       0x7F3AC384
    {
            goto label_7F3AC384;
    }

label_7F3AC1E8:
    ctx->pc = 0x7F3AC1E8u;
    ctx->downcount -= 2;
    // 7F3AC1E8: cmpw    r3, r0
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

label_7F3AC1EC:
    ctx->pc = 0x7F3AC1ECu;
    // 7F3AC1EC: bc    4, 2, 0x7F3AC230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC230;
        }
    }

label_7F3AC1F0:
    ctx->pc = 0x7F3AC1F0u;
    ctx->downcount -= 9;
    // 7F3AC1F0: mulli   r5, r0, 948
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)948);

label_7F3AC1F4:
    ctx->pc = 0x7F3AC1F4u;
    // 7F3AC1F4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AC1F8:
    ctx->pc = 0x7F3AC1F8u;
    // 7F3AC1F8: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AC1FC:
    ctx->pc = 0x7F3AC1FCu;
    // 7F3AC1FC: addi    r0, r3, 28636
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F3AC200:
    ctx->pc = 0x7F3AC200u;
    // 7F3AC200: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC204:
    ctx->pc = 0x7F3AC204u;
    // 7F3AC204: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F3AC208:
    ctx->pc = 0x7F3AC208u;
    // 7F3AC208: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AC20Cu;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AC20C:
    ctx->pc = 0x7F3AC20Cu;
    ctx->downcount -= 6;
    // 7F3AC20C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3AC210:
    ctx->pc = 0x7F3AC210u;
    // 7F3AC210: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3AC214:
    ctx->pc = 0x7F3AC214u;
    // 7F3AC214: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AC218:
    ctx->pc = 0x7F3AC218u;
    // 7F3AC218: or   r7, r23, r23
    {
        ctx->gpr[7] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3AC21C:
    ctx->pc = 0x7F3AC21Cu;
    // 7F3AC21C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AC220:
    ctx->pc = 0x7F3AC220u;
    // 7F3AC220: bl      0x7F3AD534
    {
            ctx->lr = 0x7F3AC224u;
            goto label_7F3AD534;
    }

label_7F3AC224:
    ctx->pc = 0x7F3AC224u;
    ctx->downcount -= 3;
    // 7F3AC224: stw     r29, 304(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AC228:
    ctx->pc = 0x7F3AC228u;
    // 7F3AC228: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AC22C:
    ctx->pc = 0x7F3AC22Cu;
    // 7F3AC22C: b       0x7F3AC384
    {
            goto label_7F3AC384;
    }

label_7F3AC230:
    ctx->pc = 0x7F3AC230u;
    ctx->downcount -= 11;
    // 7F3AC230: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AC234:
    ctx->pc = 0x7F3AC234u;
    // 7F3AC234: stw     r29, 304(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AC238:
    ctx->pc = 0x7F3AC238u;
    // 7F3AC238: lfs     f1, -21324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC238u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC23C:
    ctx->pc = 0x7F3AC23Cu;
    // 7F3AC23C: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AC240:
    ctx->pc = 0x7F3AC240u;
    // 7F3AC240: addi    r3, r4, -31000
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-31000);

label_7F3AC244:
    ctx->pc = 0x7F3AC244u;
    // 7F3AC244: lwz     r4, 72(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC248:
    ctx->pc = 0x7F3AC248u;
    // 7F3AC248: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AC248u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3AC24C:
    ctx->pc = 0x7F3AC24Cu;
    // 7F3AC24C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AC24Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F3AC250:
    ctx->pc = 0x7F3AC250u;
    // 7F3AC250: lwz     r30, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3AC254:
    ctx->pc = 0x7F3AC254u;
    // 7F3AC254: lha     r28, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[28] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AC258:
    ctx->pc = 0x7F3AC258u;
    // 7F3AC258: bl      0x8002550C
    {
            ctx->lr = 0x7F3AC25Cu;
            ctx->pc = 0x8002550Cu;
            return;
    }

label_7F3AC25C:
    ctx->pc = 0x7F3AC25Cu;
    ctx->downcount -= 3;
    // 7F3AC25C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3AC260:
    ctx->pc = 0x7F3AC260u;
    // 7F3AC260: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AC264:
    ctx->pc = 0x7F3AC264u;
    // 7F3AC264: bl      0x7F3AC0BC
    {
            ctx->lr = 0x7F3AC268u;
            ctx->pc = 0x7F3AC0BCu;
            return;
    }

label_7F3AC268:
    ctx->pc = 0x7F3AC268u;
    ctx->downcount -= 5;
    // 7F3AC268: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F3AC26C:
    ctx->pc = 0x7F3AC26Cu;
    // 7F3AC26C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3AC270:
    ctx->pc = 0x7F3AC270u;
    // 7F3AC270: add   r31, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F3AC274:
    ctx->pc = 0x7F3AC274u;
    // 7F3AC274: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F3AC278:
    ctx->pc = 0x7F3AC278u;
    // 7F3AC278: b       0x7F3AC378
    {
            goto label_7F3AC378;
    }

label_7F3AC27C:
    ctx->downcount -= 6;
    // 7F3AC27C: rlwinm r0, r29, 3, 13, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 3u) & 0x0007FFF8u;
    }

label_7F3AC280:
    // 7F3AC280: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC284:
    // 7F3AC284: add   r26, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F3AC288:
    // 7F3AC288: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AC28C:
    // 7F3AC28C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F3AC290:
    // 7F3AC290: bl      0x800050B4
    {
            ctx->lr = 0x7F3AC294u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3AC294:
    ctx->downcount -= 1;
    // 7F3AC294: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3AC298:
    ctx->downcount -= 5;
    // 7F3AC298: add   r3, r26, r25
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC29C:
    ctx->pc = 0x7F3AC29Cu;
    // 7F3AC29C: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AC2A0:
    ctx->pc = 0x7F3AC2A0u;
    // 7F3AC2A0: lbz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F3AC2A4:
    // 7F3AC2A4: cmpwi   r0, 128
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

label_7F3AC2A8:
    // 7F3AC2A8: bc    4, 2, 0x7F3AC2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC2C4;
        }
    }

label_7F3AC2AC:
    ctx->downcount -= 7;
    // 7F3AC2AC: mulli   r0, r6, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)48);

label_7F3AC2B0:
    // 7F3AC2B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC2B4:
    // 7F3AC2B4: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F3AC2B8:
    // 7F3AC2B8: add   r4, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC2BC:
    // 7F3AC2BC: bl      0x8000519C
    {
            ctx->lr = 0x7F3AC2C0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3AC2C0:
    ctx->downcount -= 1;
    // 7F3AC2C0: b       0x7F3AC338
    {
            goto label_7F3AC338;
    }

label_7F3AC2C4:
    ctx->downcount -= 2;
    // 7F3AC2C4: cmpwi   r0, 0
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

label_7F3AC2C8:
    // 7F3AC2C8: bc    12, 2, 0x7F3AC338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC338;
        }
    }

label_7F3AC2CC:
    ctx->downcount -= 2;
    // 7F3AC2CC: cmpwi   r6, 255
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC2D0:
    // 7F3AC2D0: bc    12, 2, 0x7F3AC338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC338;
        }
    }

label_7F3AC2D4:
    ctx->downcount -= 21;
    // 7F3AC2D4: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3AC2D8:
    // 7F3AC2D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3AC2DC:
    // 7F3AC2DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AC2E0:
    ctx->pc = 0x7F3AC2E0u;
    // 7F3AC2E0: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AC2E4:
    // 7F3AC2E4: addi    r5, r4, -21360
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-21360);

label_7F3AC2E8:
    // 7F3AC2E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AC2EC:
    ctx->pc = 0x7F3AC2ECu;
    // 7F3AC2EC: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC2F0:
    // 7F3AC2F0: addi    r4, r3, -21316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21316);

label_7F3AC2F4:
    ctx->pc = 0x7F3AC2F4u;
    // 7F3AC2F4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC2F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AC2F8:
    // 7F3AC2F8: mulli   r3, r6, 48
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)48);

label_7F3AC2FC:
    ctx->pc = 0x7F3AC2FCu;
    // 7F3AC2FC: lfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC2FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AC300:
    // 7F3AC300: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F3AC304:
    ctx->pc = 0x7F3AC304u;
    // 7F3AC304: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC304u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC308:
    // 7F3AC308: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC30C:
    ctx->pc = 0x7F3AC30Cu;
    // 7F3AC30C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AC30Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F3AC310:
    // 7F3AC310: add   r3, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC314:
    ctx->pc = 0x7F3AC314u;
    // 7F3AC314: fmuls   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AC314u)) return;
    ppc_fmuls(ctx, 2, 1, 0);

label_7F3AC318:
    ctx->pc = 0x7F3AC318u;
    // 7F3AC318: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC31C:
    ctx->pc = 0x7F3AC31Cu;
    ctx->downcount -= 7;
    // 7F3AC31C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC31Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC320:
    // 7F3AC320: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3AC324:
    ctx->pc = 0x7F3AC324u;
    // 7F3AC324: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC324u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC328:
    ctx->pc = 0x7F3AC328u;
    // 7F3AC328: fmadds f0, f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AC328u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F3AC32C:
    ctx->pc = 0x7F3AC32Cu;
    // 7F3AC32C: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC32Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC330:
    // 7F3AC330: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AC334:
    // 7F3AC334: bc    16, 0, 0x7F3AC31C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC31Cu;
                return;
            }
            goto label_7F3AC31C;
        }
    }

label_7F3AC338:
    ctx->downcount -= 3;
    // 7F3AC338: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F3AC33C:
    // 7F3AC33C: cmpwi   r25, 4
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC340:
    // 7F3AC340: bc    12, 0, 0x7F3AC298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC298u;
                return;
            }
            goto label_7F3AC298;
        }
    }

label_7F3AC344:
    ctx->pc = 0x7F3AC344u;
    ctx->downcount -= 5;
    // 7F3AC344: lwz     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC348:
    // 7F3AC348: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3AC34C:
    // 7F3AC34C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC350:
    // 7F3AC350: add   r5, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3AC354:
    // 7F3AC354: bl      0x80025090
    {
            ctx->lr = 0x7F3AC358u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AC358:
    ctx->pc = 0x7F3AC358u;
    ctx->downcount -= 6;
    // 7F3AC358: lwz     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC35C:
    // 7F3AC35C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AC360:
    ctx->pc = 0x7F3AC360u;
    // 7F3AC360: lwz     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AC364:
    ctx->pc = 0x7F3AC364u;
    // 7F3AC364: lwz     r6, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AC368:
    // 7F3AC368: add   r3, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC36C:
    // 7F3AC36C: bl      0x7F3AC398
    {
            ctx->lr = 0x7F3AC370u;
            goto label_7F3AC398;
    }

label_7F3AC370:
    ctx->downcount -= 2;
    // 7F3AC370: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3AC374:
    // 7F3AC374: addi    r23, r23, 48
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(48);

label_7F3AC378:
    ctx->downcount -= 2;
    // 7F3AC378: cmpw    r29, r28
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

label_7F3AC37C:
    // 7F3AC37C: bc    12, 0, 0x7F3AC27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC27Cu;
                return;
            }
            goto label_7F3AC27C;
        }
    }

label_7F3AC380:
    ctx->pc = 0x7F3AC380u;
    ctx->downcount -= 1;
    // 7F3AC380: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AC384:
    ctx->pc = 0x7F3AC384u;
    ctx->downcount -= 16;
    // 7F3AC384: lmw     r23, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC388:
    ctx->pc = 0x7F3AC388u;
    // 7F3AC388: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC38C:
    ctx->pc = 0x7F3AC38Cu;
    // 7F3AC38C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC390:
    ctx->pc = 0x7F3AC390u;
    // 7F3AC390: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F3AC394:
    ctx->pc = 0x7F3AC394u;
    // 7F3AC394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC398:
    ctx->pc = 0x7F3AC398u;
    ctx->downcount -= 19;
    // 7F3AC398: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC39C:
    ctx->pc = 0x7F3AC39Cu;
    // 7F3AC39C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC3A0:
    ctx->pc = 0x7F3AC3A0u;
    // 7F3AC3A0: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC3A4:
    ctx->pc = 0x7F3AC3A4u;
    // 7F3AC3A4: stmw     r29, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC3A8:
    ctx->pc = 0x7F3AC3A8u;
    // 7F3AC3A8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC3AC:
    ctx->pc = 0x7F3AC3ACu;
    // 7F3AC3AC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AC3B0:
    ctx->pc = 0x7F3AC3B0u;
    // 7F3AC3B0: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AC3B4:
    ctx->pc = 0x7F3AC3B4u;
    // 7F3AC3B4: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AC3B8:
    ctx->pc = 0x7F3AC3B8u;
    // 7F3AC3B8: bl      0x800251AC
    {
            ctx->lr = 0x7F3AC3BCu;
            ctx->pc = 0x800251ACu;
            return;
    }

label_7F3AC3BC:
    ctx->pc = 0x7F3AC3BCu;
    ctx->downcount -= 3;
    // 7F3AC3BC: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AC3C0:
    ctx->pc = 0x7F3AC3C0u;
    // 7F3AC3C0: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AC3C4:
    ctx->pc = 0x7F3AC3C4u;
    // 7F3AC3C4: bl      0x8002515C
    {
            ctx->lr = 0x7F3AC3C8u;
            ctx->pc = 0x8002515Cu;
            return;
    }

label_7F3AC3C8:
    ctx->pc = 0x7F3AC3C8u;
    ctx->downcount -= 5;
    // 7F3AC3C8: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AC3CC:
    ctx->pc = 0x7F3AC3CCu;
    // 7F3AC3CC: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AC3D0:
    ctx->pc = 0x7F3AC3D0u;
    // 7F3AC3D0: addi    r4, r4, -31000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31000);

label_7F3AC3D4:
    ctx->pc = 0x7F3AC3D4u;
    // 7F3AC3D4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC3D8:
    ctx->pc = 0x7F3AC3D8u;
    // 7F3AC3D8: bl      0x80025090
    {
            ctx->lr = 0x7F3AC3DCu;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AC3DC:
    ctx->pc = 0x7F3AC3DCu;
    ctx->downcount -= 6;
    // 7F3AC3DC: mulli   r0, r29, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)48);

label_7F3AC3E0:
    ctx->pc = 0x7F3AC3E0u;
    // 7F3AC3E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC3E4:
    ctx->pc = 0x7F3AC3E4u;
    // 7F3AC3E4: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC3E8:
    ctx->pc = 0x7F3AC3E8u;
    // 7F3AC3E8: bl      0x8002505C
    {
            ctx->lr = 0x7F3AC3ECu;
            ctx->pc = 0x8002505Cu;
            return;
    }

label_7F3AC3EC:
    ctx->pc = 0x7F3AC3ECu;
    ctx->downcount -= 8;
    // 7F3AC3EC: mulli   r0, r29, 36
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)36);

label_7F3AC3F0:
    ctx->pc = 0x7F3AC3F0u;
    // 7F3AC3F0: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F3AC3F4:
    ctx->pc = 0x7F3AC3F4u;
    // 7F3AC3F4: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3AC3F8:
    ctx->pc = 0x7F3AC3F8u;
    // 7F3AC3F8: add   r31, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F3AC3FC:
    ctx->pc = 0x7F3AC3FCu;
    // 7F3AC3FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AC400:
    ctx->pc = 0x7F3AC400u;
    // 7F3AC400: bl      0x8000519C
    {
            ctx->lr = 0x7F3AC404u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3AC404:
    ctx->pc = 0x7F3AC404u;
    ctx->downcount -= 4;
    // 7F3AC404: addi    r3, r31, 12
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(12);

label_7F3AC408:
    ctx->pc = 0x7F3AC408u;
    // 7F3AC408: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F3AC40C:
    ctx->pc = 0x7F3AC40Cu;
    // 7F3AC40C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3AC410:
    ctx->pc = 0x7F3AC410u;
    // 7F3AC410: bl      0x8000519C
    {
            ctx->lr = 0x7F3AC414u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3AC414:
    ctx->pc = 0x7F3AC414u;
    ctx->downcount -= 4;
    // 7F3AC414: addi    r3, r31, 24
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(24);

label_7F3AC418:
    ctx->pc = 0x7F3AC418u;
    // 7F3AC418: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F3AC41C:
    ctx->pc = 0x7F3AC41Cu;
    // 7F3AC41C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3AC420:
    ctx->pc = 0x7F3AC420u;
    // 7F3AC420: bl      0x8000519C
    {
            ctx->lr = 0x7F3AC424u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3AC424:
    ctx->pc = 0x7F3AC424u;
    ctx->downcount -= 16;
    // 7F3AC424: lmw     r29, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC428:
    ctx->pc = 0x7F3AC428u;
    // 7F3AC428: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC42C:
    ctx->pc = 0x7F3AC42Cu;
    // 7F3AC42C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC430:
    ctx->pc = 0x7F3AC430u;
    // 7F3AC430: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F3AC434:
    ctx->pc = 0x7F3AC434u;
    // 7F3AC434: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC438:
    ctx->pc = 0x7F3AC438u;
    ctx->downcount -= 18;
    // 7F3AC438: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC43C:
    ctx->pc = 0x7F3AC43Cu;
    // 7F3AC43C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC440:
    ctx->pc = 0x7F3AC440u;
    // 7F3AC440: cmpwi   r6, 2
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC444:
    ctx->pc = 0x7F3AC444u;
    // 7F3AC444: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC448:
    ctx->pc = 0x7F3AC448u;
    // 7F3AC448: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC44C:
    ctx->pc = 0x7F3AC44Cu;
    // 7F3AC44C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC450:
    ctx->pc = 0x7F3AC450u;
    // 7F3AC450: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC454:
    ctx->pc = 0x7F3AC454u;
    // 7F3AC454: bc    4, 2, 0x7F3AC45C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC45C;
        }
    }

label_7F3AC458:
    ctx->pc = 0x7F3AC458u;
    ctx->downcount -= 1;
    // 7F3AC458: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AC45C:
    ctx->pc = 0x7F3AC45Cu;
    ctx->downcount -= 10;
    // 7F3AC45C: rlwinm r0, r6, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_7F3AC460:
    ctx->pc = 0x7F3AC460u;
    // 7F3AC460: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AC464:
    ctx->pc = 0x7F3AC464u;
    // 7F3AC464: mulli   r4, r29, 48
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)48);

label_7F3AC468:
    ctx->pc = 0x7F3AC468u;
    // 7F3AC468: rlwinm r31, r0, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AC46C:
    ctx->pc = 0x7F3AC46Cu;
    // 7F3AC46C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC470:
    ctx->pc = 0x7F3AC470u;
    // 7F3AC470: lwz     r3, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC474:
    ctx->pc = 0x7F3AC474u;
    // 7F3AC474: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC478:
    ctx->pc = 0x7F3AC478u;
    // 7F3AC478: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3AC47Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3AC47C:
    ctx->pc = 0x7F3AC47Cu;
    ctx->downcount -= 6;
    // 7F3AC47C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC480:
    ctx->pc = 0x7F3AC480u;
    // 7F3AC480: mulli   r4, r29, 36
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)36);

label_7F3AC484:
    ctx->pc = 0x7F3AC484u;
    // 7F3AC484: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC488:
    ctx->pc = 0x7F3AC488u;
    // 7F3AC488: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3AC48Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3AC48C:
    ctx->pc = 0x7F3AC48Cu;
    ctx->downcount -= 4;
    // 7F3AC48C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AC490:
    ctx->pc = 0x7F3AC490u;
    // 7F3AC490: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC494:
    ctx->pc = 0x7F3AC494u;
    // 7F3AC494: lwz     r3, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC498:
    ctx->pc = 0x7F3AC498u;
    // 7F3AC498: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3AC49Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3AC49C:
    ctx->pc = 0x7F3AC49Cu;
    ctx->downcount -= 16;
    // 7F3AC49C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC4A0:
    ctx->pc = 0x7F3AC4A0u;
    // 7F3AC4A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC4A4:
    ctx->pc = 0x7F3AC4A4u;
    // 7F3AC4A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC4A8:
    ctx->pc = 0x7F3AC4A8u;
    // 7F3AC4A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AC4AC:
    ctx->pc = 0x7F3AC4ACu;
    // 7F3AC4AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC4B0:
    ctx->pc = 0x7F3AC4B0u;
    ctx->downcount -= 17;
    // 7F3AC4B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC4B4:
    ctx->pc = 0x7F3AC4B4u;
    // 7F3AC4B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC4B8:
    ctx->pc = 0x7F3AC4B8u;
    // 7F3AC4B8: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC4BC:
    ctx->pc = 0x7F3AC4BCu;
    // 7F3AC4BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC4C0:
    ctx->pc = 0x7F3AC4C0u;
    // 7F3AC4C0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC4C4:
    ctx->pc = 0x7F3AC4C4u;
    // 7F3AC4C4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC4C8:
    ctx->pc = 0x7F3AC4C8u;
    // 7F3AC4C8: bc    4, 2, 0x7F3AC4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC4D0;
        }
    }

label_7F3AC4CC:
    ctx->pc = 0x7F3AC4CCu;
    ctx->downcount -= 1;
    // 7F3AC4CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC4D0:
    ctx->pc = 0x7F3AC4D0u;
    ctx->downcount -= 8;
    // 7F3AC4D0: rlwinm r0, r5, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_7F3AC4D4:
    ctx->pc = 0x7F3AC4D4u;
    // 7F3AC4D4: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_7F3AC4D8:
    ctx->pc = 0x7F3AC4D8u;
    // 7F3AC4D8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AC4DC:
    ctx->pc = 0x7F3AC4DCu;
    // 7F3AC4DC: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F3AC4E0:
    ctx->pc = 0x7F3AC4E0u;
    // 7F3AC4E0: rlwinm r31, r0, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AC4E4:
    ctx->pc = 0x7F3AC4E4u;
    // 7F3AC4E4: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC4E8:
    ctx->pc = 0x7F3AC4E8u;
    // 7F3AC4E8: lwz     r4, 256(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC4EC:
    ctx->pc = 0x7F3AC4ECu;
    // 7F3AC4EC: bl      0x80042184
    {
            ctx->lr = 0x7F3AC4F0u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC4F0:
    ctx->pc = 0x7F3AC4F0u;
    ctx->downcount -= 5;
    // 7F3AC4F0: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC4F4:
    ctx->pc = 0x7F3AC4F4u;
    // 7F3AC4F4: li      r3, 22
    ctx->gpr[3] = (u32)(s32)(22);

label_7F3AC4F8:
    ctx->pc = 0x7F3AC4F8u;
    // 7F3AC4F8: lwz     r4, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC4FC:
    ctx->pc = 0x7F3AC4FCu;
    // 7F3AC4FC: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F3AC500:
    ctx->pc = 0x7F3AC500u;
    // 7F3AC500: bl      0x80042184
    {
            ctx->lr = 0x7F3AC504u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC504:
    ctx->pc = 0x7F3AC504u;
    ctx->downcount -= 5;
    // 7F3AC504: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AC508:
    ctx->pc = 0x7F3AC508u;
    // 7F3AC508: li      r3, 23
    ctx->gpr[3] = (u32)(s32)(23);

label_7F3AC50C:
    ctx->pc = 0x7F3AC50Cu;
    // 7F3AC50C: lwz     r4, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC510:
    ctx->pc = 0x7F3AC510u;
    // 7F3AC510: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F3AC514:
    ctx->pc = 0x7F3AC514u;
    // 7F3AC514: bl      0x80042184
    {
            ctx->lr = 0x7F3AC518u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC518:
    ctx->pc = 0x7F3AC518u;
    ctx->downcount -= 16;
    // 7F3AC518: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC51C:
    ctx->pc = 0x7F3AC51Cu;
    // 7F3AC51C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC520:
    ctx->pc = 0x7F3AC520u;
    // 7F3AC520: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC524:
    ctx->pc = 0x7F3AC524u;
    // 7F3AC524: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AC528:
    ctx->pc = 0x7F3AC528u;
    // 7F3AC528: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC52C:
    ctx->pc = 0x7F3AC52Cu;
    ctx->downcount -= 11;
    // 7F3AC52C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC530:
    ctx->pc = 0x7F3AC530u;
    // 7F3AC530: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC534:
    ctx->pc = 0x7F3AC534u;
    // 7F3AC534: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AC538:
    ctx->pc = 0x7F3AC538u;
    // 7F3AC538: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC53C:
    ctx->pc = 0x7F3AC53Cu;
    // 7F3AC53C: addi    r4, r4, -21312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21312);

label_7F3AC540:
    ctx->pc = 0x7F3AC540u;
    // 7F3AC540: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3AC544:
    ctx->pc = 0x7F3AC544u;
    // 7F3AC544: addi    r6, r1, 4
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(4);

label_7F3AC548:
    ctx->pc = 0x7F3AC548u;
    // 7F3AC548: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AC54C:
    ctx->pc = 0x7F3AC54Cu;
    // 7F3AC54C: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F3AC550:
    ctx->pc = 0x7F3AC550u;
    // 7F3AC550: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC554:
    loop_7F3AC554(ctx);
    if (ctx->pc == 0x7F3AC568u) goto label_7F3AC568;
    return;
label_7F3AC558:
    ctx->pc = 0x7F3AC558u;
    // 7F3AC558: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F3AC55C:
    ctx->pc = 0x7F3AC55Cu;
    // 7F3AC55C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC560:
    ctx->pc = 0x7F3AC560u;
    // 7F3AC560: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F3AC564:
    // 7F3AC564: bc    16, 0, 0x7F3AC554
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC554u;
                return;
            }
            goto label_7F3AC554;
        }
    }

label_7F3AC568:
    ctx->pc = 0x7F3AC568u;
    ctx->downcount -= 6;
    // 7F3AC568: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3AC56C:
    ctx->pc = 0x7F3AC56Cu;
    // 7F3AC56C: lwzu     r0, 13112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13112);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AC570:
    ctx->pc = 0x7F3AC570u;
    // 7F3AC570: extsb r5, r3
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3AC574:
    ctx->pc = 0x7F3AC574u;
    // 7F3AC574: cmpw    r0, r5
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

label_7F3AC578:
    ctx->pc = 0x7F3AC578u;
    // 7F3AC578: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AC57C:
    ctx->pc = 0x7F3AC57Cu;
    // 7F3AC57C: bc    12, 2, 0x7F3AC594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC594;
        }
    }

label_7F3AC580:
    ctx->pc = 0x7F3AC580u;
    ctx->downcount -= 5;
    // 7F3AC580: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AC584:
    ctx->pc = 0x7F3AC584u;
    // 7F3AC584: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC588:
    ctx->pc = 0x7F3AC588u;
    // 7F3AC588: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC58C:
    ctx->pc = 0x7F3AC58Cu;
    // 7F3AC58C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AC590:
    ctx->pc = 0x7F3AC590u;
    // 7F3AC590: bl      0x80045214
    {
            ctx->lr = 0x7F3AC594u;
            ctx->pc = 0x80045214u;
            return;
    }

label_7F3AC594:
    ctx->pc = 0x7F3AC594u;
    ctx->downcount -= 7;
    // 7F3AC594: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC598:
    ctx->pc = 0x7F3AC598u;
    // 7F3AC598: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AC59C:
    ctx->pc = 0x7F3AC59Cu;
    // 7F3AC59C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3AC5A0:
    ctx->pc = 0x7F3AC5A0u;
    // 7F3AC5A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC5A4:
    ctx->pc = 0x7F3AC5A4u;
    // 7F3AC5A4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3AC5A8:
    ctx->pc = 0x7F3AC5A8u;
    // 7F3AC5A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC5AC:
    ctx->pc = 0x7F3AC5ACu;
    ctx->downcount -= 20;
    // 7F3AC5AC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC5B0:
    ctx->pc = 0x7F3AC5B0u;
    // 7F3AC5B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC5B4:
    ctx->pc = 0x7F3AC5B4u;
    // 7F3AC5B4: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F3AC5B8:
    ctx->pc = 0x7F3AC5B8u;
    // 7F3AC5B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC5BC:
    ctx->pc = 0x7F3AC5BCu;
    // 7F3AC5BC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC5C0:
    ctx->pc = 0x7F3AC5C0u;
    // 7F3AC5C0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC5C4:
    ctx->pc = 0x7F3AC5C4u;
    // 7F3AC5C4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC5C8:
    ctx->pc = 0x7F3AC5C8u;
    // 7F3AC5C8: lwz     r0, -1740(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-1740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC5CC:
    ctx->pc = 0x7F3AC5CCu;
    // 7F3AC5CC: cmpwi   r0, 0
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

label_7F3AC5D0:
    ctx->pc = 0x7F3AC5D0u;
    // 7F3AC5D0: bc    4, 2, 0x7F3AC5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC5E0;
        }
    }

label_7F3AC5D4:
    ctx->pc = 0x7F3AC5D4u;
    ctx->downcount -= 3;
    // 7F3AC5D4: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_7F3AC5D8:
    ctx->pc = 0x7F3AC5D8u;
    // 7F3AC5D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3AC5DC:
    ctx->pc = 0x7F3AC5DCu;
    // 7F3AC5DC: b       0x7F3AC5E8
    {
            goto label_7F3AC5E8;
    }

label_7F3AC5E0:
    ctx->pc = 0x7F3AC5E0u;
    ctx->downcount -= 2;
    // 7F3AC5E0: li      r30, 4
    ctx->gpr[30] = (u32)(s32)(4);

label_7F3AC5E4:
    ctx->pc = 0x7F3AC5E4u;
    // 7F3AC5E4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3AC5E8:
    ctx->pc = 0x7F3AC5E8u;
    ctx->downcount -= 5;
    // 7F3AC5E8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AC5EC:
    ctx->pc = 0x7F3AC5ECu;
    // 7F3AC5EC: addi    r31, r3, -1740
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3AC5F0:
    ctx->pc = 0x7F3AC5F0u;
    // 7F3AC5F0: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC5F4:
    ctx->pc = 0x7F3AC5F4u;
    // 7F3AC5F4: cmpw    r30, r0
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

label_7F3AC5F8:
    ctx->pc = 0x7F3AC5F8u;
    // 7F3AC5F8: bc    12, 2, 0x7F3AC648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC648;
        }
    }

label_7F3AC5FC:
    ctx->pc = 0x7F3AC5FCu;
    ctx->downcount -= 4;
    // 7F3AC5FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC600:
    ctx->pc = 0x7F3AC600u;
    // 7F3AC600: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AC604:
    ctx->pc = 0x7F3AC604u;
    // 7F3AC604: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3AC608:
    ctx->pc = 0x7F3AC608u;
    // 7F3AC608: bl      0x80045D2C
    {
            ctx->lr = 0x7F3AC60Cu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3AC60C:
    ctx->pc = 0x7F3AC60Cu;
    ctx->downcount -= 7;
    // 7F3AC60C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC610:
    ctx->pc = 0x7F3AC610u;
    // 7F3AC610: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AC614:
    ctx->pc = 0x7F3AC614u;
    // 7F3AC614: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC618:
    ctx->pc = 0x7F3AC618u;
    // 7F3AC618: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AC61C:
    ctx->pc = 0x7F3AC61Cu;
    // 7F3AC61C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AC620:
    ctx->pc = 0x7F3AC620u;
    // 7F3AC620: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AC624:
    ctx->pc = 0x7F3AC624u;
    // 7F3AC624: bl      0x800458A0
    {
            ctx->lr = 0x7F3AC628u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3AC628:
    ctx->pc = 0x7F3AC628u;
    ctx->downcount -= 7;
    // 7F3AC628: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC62C:
    ctx->pc = 0x7F3AC62Cu;
    // 7F3AC62C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AC630:
    ctx->pc = 0x7F3AC630u;
    // 7F3AC630: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC634:
    ctx->pc = 0x7F3AC634u;
    // 7F3AC634: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AC638:
    ctx->pc = 0x7F3AC638u;
    // 7F3AC638: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AC63C:
    ctx->pc = 0x7F3AC63Cu;
    // 7F3AC63C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AC640:
    ctx->pc = 0x7F3AC640u;
    // 7F3AC640: bl      0x80045908
    {
            ctx->lr = 0x7F3AC644u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3AC644:
    ctx->pc = 0x7F3AC644u;
    ctx->downcount -= 1;
    // 7F3AC644: stw     r30, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3AC648:
    ctx->pc = 0x7F3AC648u;
    ctx->downcount -= 5;
    // 7F3AC648: lwz     r0, 116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC64C:
    ctx->pc = 0x7F3AC64Cu;
    // 7F3AC64C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC650:
    ctx->pc = 0x7F3AC650u;
    // 7F3AC650: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AC654:
    ctx->pc = 0x7F3AC654u;
    // 7F3AC654: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC658:
    ctx->pc = 0x7F3AC658u;
    // 7F3AC658: bl      0x80045970
    {
            ctx->lr = 0x7F3AC65Cu;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F3AC65C:
    ctx->pc = 0x7F3AC65Cu;
    ctx->downcount -= 5;
    // 7F3AC65C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AC660:
    ctx->pc = 0x7F3AC660u;
    // 7F3AC660: addi    r3, r3, -1740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3AC664:
    ctx->pc = 0x7F3AC664u;
    // 7F3AC664: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC668:
    ctx->pc = 0x7F3AC668u;
    // 7F3AC668: cmpwi   r0, 0
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

label_7F3AC66C:
    ctx->pc = 0x7F3AC66Cu;
    // 7F3AC66C: bc    12, 2, 0x7F3AC68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC68C;
        }
    }

label_7F3AC670:
    ctx->pc = 0x7F3AC670u;
    ctx->downcount -= 6;
    // 7F3AC670: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC674:
    ctx->pc = 0x7F3AC674u;
    // 7F3AC674: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3AC678:
    ctx->pc = 0x7F3AC678u;
    // 7F3AC678: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AC67C:
    ctx->pc = 0x7F3AC67Cu;
    // 7F3AC67C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3AC680:
    ctx->pc = 0x7F3AC680u;
    // 7F3AC680: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F3AC684:
    ctx->pc = 0x7F3AC684u;
    // 7F3AC684: bl      0x8004585C
    {
            ctx->lr = 0x7F3AC688u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3AC688:
    ctx->pc = 0x7F3AC688u;
    ctx->downcount -= 1;
    // 7F3AC688: b       0x7F3AC6A4
    {
            goto label_7F3AC6A4;
    }

label_7F3AC68C:
    ctx->pc = 0x7F3AC68Cu;
    ctx->downcount -= 6;
    // 7F3AC68C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AC690:
    ctx->pc = 0x7F3AC690u;
    // 7F3AC690: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3AC694:
    ctx->pc = 0x7F3AC694u;
    // 7F3AC694: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3AC698:
    ctx->pc = 0x7F3AC698u;
    // 7F3AC698: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AC69C:
    ctx->pc = 0x7F3AC69Cu;
    // 7F3AC69C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F3AC6A0:
    ctx->pc = 0x7F3AC6A0u;
    // 7F3AC6A0: bl      0x8004585C
    {
            ctx->lr = 0x7F3AC6A4u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3AC6A4:
    ctx->pc = 0x7F3AC6A4u;
    ctx->downcount -= 2;
    // 7F3AC6A4: cmpwi   r28, 0
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

label_7F3AC6A8:
    ctx->pc = 0x7F3AC6A8u;
    // 7F3AC6A8: bc    12, 2, 0x7F3AC6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC6C8;
        }
    }

label_7F3AC6AC:
    ctx->pc = 0x7F3AC6ACu;
    ctx->downcount -= 6;
    // 7F3AC6AC: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC6B0:
    ctx->pc = 0x7F3AC6B0u;
    // 7F3AC6B0: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3AC6B4:
    ctx->pc = 0x7F3AC6B4u;
    // 7F3AC6B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC6B8:
    ctx->pc = 0x7F3AC6B8u;
    // 7F3AC6B8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F3AC6BC:
    ctx->pc = 0x7F3AC6BCu;
    // 7F3AC6BC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AC6C0:
    ctx->pc = 0x7F3AC6C0u;
    // 7F3AC6C0: bl      0x80045818
    {
            ctx->lr = 0x7F3AC6C4u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3AC6C4:
    ctx->pc = 0x7F3AC6C4u;
    ctx->downcount -= 1;
    // 7F3AC6C4: b       0x7F3AC6E0
    {
            goto label_7F3AC6E0;
    }

label_7F3AC6C8:
    ctx->pc = 0x7F3AC6C8u;
    ctx->downcount -= 6;
    // 7F3AC6C8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC6CC:
    ctx->pc = 0x7F3AC6CCu;
    // 7F3AC6CC: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3AC6D0:
    ctx->pc = 0x7F3AC6D0u;
    // 7F3AC6D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC6D4:
    ctx->pc = 0x7F3AC6D4u;
    // 7F3AC6D4: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F3AC6D8:
    ctx->pc = 0x7F3AC6D8u;
    // 7F3AC6D8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AC6DC:
    ctx->pc = 0x7F3AC6DCu;
    // 7F3AC6DC: bl      0x80045818
    {
            ctx->lr = 0x7F3AC6E0u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3AC6E0:
    ctx->pc = 0x7F3AC6E0u;
    ctx->downcount -= 16;
    // 7F3AC6E0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AC6E4:
    ctx->pc = 0x7F3AC6E4u;
    // 7F3AC6E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC6E8:
    ctx->pc = 0x7F3AC6E8u;
    // 7F3AC6E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AC6EC:
    ctx->pc = 0x7F3AC6ECu;
    // 7F3AC6EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AC6F0:
    ctx->pc = 0x7F3AC6F0u;
    // 7F3AC6F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AC6F4:
    ctx->pc = 0x7F3AC6F4u;
    ctx->downcount -= 28;
    // 7F3AC6F4: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AC6F8:
    ctx->pc = 0x7F3AC6F8u;
    // 7F3AC6F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AC6FC:
    ctx->pc = 0x7F3AC6FCu;
    // 7F3AC6FC: lis     r9, 32592
    ctx->gpr[9] = ((u32)(s32)(32592) << 16);

label_7F3AC700:
    ctx->pc = 0x7F3AC700u;
    // 7F3AC700: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC704:
    ctx->pc = 0x7F3AC704u;
    // 7F3AC704: stmw     r21, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AC708:
    ctx->pc = 0x7F3AC708u;
    // 7F3AC708: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AC70C:
    ctx->pc = 0x7F3AC70Cu;
    // 7F3AC70C: lwz     r26, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F3AC710:
    ctx->pc = 0x7F3AC710u;
    // 7F3AC710: or   r21, r4, r4
    {
        ctx->gpr[21] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AC714:
    ctx->pc = 0x7F3AC714u;
    // 7F3AC714: lwz     r28, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3AC718:
    ctx->pc = 0x7F3AC718u;
    // 7F3AC718: or   r22, r5, r5
    {
        ctx->gpr[22] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AC71C:
    ctx->pc = 0x7F3AC71Cu;
    // 7F3AC71C: lwz     r27, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F3AC720:
    ctx->pc = 0x7F3AC720u;
    // 7F3AC720: or   r23, r6, r6
    {
        ctx->gpr[23] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AC724:
    ctx->pc = 0x7F3AC724u;
    // 7F3AC724: or   r24, r7, r7
    {
        ctx->gpr[24] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AC728:
    ctx->pc = 0x7F3AC728u;
    // 7F3AC728: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AC72C:
    ctx->pc = 0x7F3AC72Cu;
    // 7F3AC72C: or   r25, r10, r10
    {
        ctx->gpr[25] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3AC730:
    ctx->pc = 0x7F3AC730u;
    // 7F3AC730: addi    r31, r9, -21852
    ctx->gpr[31] = ctx->gpr[9] + (u32)(s32)(-21852);

label_7F3AC734:
    ctx->pc = 0x7F3AC734u;
    // 7F3AC734: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC738:
    ctx->pc = 0x7F3AC738u;
    // 7F3AC738: bl      0x80043070
    {
            ctx->lr = 0x7F3AC73Cu;
            ctx->pc = 0x80043070u;
            return;
    }

label_7F3AC73C:
    ctx->pc = 0x7F3AC73Cu;
    ctx->downcount -= 3;
    // 7F3AC73C: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC740:
    ctx->pc = 0x7F3AC740u;
    // 7F3AC740: rlwinm. r0, r0, 0, 20, 20
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

label_7F3AC744:
    ctx->pc = 0x7F3AC744u;
    // 7F3AC744: bc    12, 2, 0x7F3AC754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC754;
        }
    }

label_7F3AC748:
    ctx->pc = 0x7F3AC748u;
    ctx->downcount -= 3;
    // 7F3AC748: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC74C:
    ctx->pc = 0x7F3AC74Cu;
    // 7F3AC74C: ori     r0, r0, 0x0800
    ctx->gpr[0] = ctx->gpr[0] | 0x0800u;

label_7F3AC750:
    ctx->pc = 0x7F3AC750u;
    // 7F3AC750: stw     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC754:
    ctx->pc = 0x7F3AC754u;
    ctx->downcount -= 3;
    // 7F3AC754: lwz     r4, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC758:
    ctx->pc = 0x7F3AC758u;
    // 7F3AC758: cmpwi   r4, 1
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

label_7F3AC75C:
    ctx->pc = 0x7F3AC75Cu;
    // 7F3AC75C: bc    4, 0, 0x7F3AC78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC78C;
        }
    }

label_7F3AC760:
    ctx->pc = 0x7F3AC760u;
    ctx->downcount -= 3;
    // 7F3AC760: lha     r0, 92(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AC764:
    ctx->pc = 0x7F3AC764u;
    // 7F3AC764: cmpwi   r0, 0
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

label_7F3AC768:
    ctx->pc = 0x7F3AC768u;
    // 7F3AC768: bc    12, 2, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3AC76C:
    ctx->pc = 0x7F3AC76Cu;
    ctx->downcount -= 2;
    // 7F3AC76C: cmpwi   r29, 0
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

label_7F3AC770:
    ctx->pc = 0x7F3AC770u;
    // 7F3AC770: bc    4, 2, 0x7F3AC78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC78C;
        }
    }

label_7F3AC774:
    ctx->pc = 0x7F3AC774u;
    ctx->downcount -= 5;
    // 7F3AC774: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AC778:
    ctx->pc = 0x7F3AC778u;
    // 7F3AC778: addi    r3, r3, -31096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31096);

label_7F3AC77C:
    ctx->pc = 0x7F3AC77Cu;
    // 7F3AC77C: lbzx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AC780:
    ctx->pc = 0x7F3AC780u;
    // 7F3AC780: cmplwi  r0, 0x0000
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

label_7F3AC784:
    ctx->pc = 0x7F3AC784u;
    // 7F3AC784: bc    4, 2, 0x7F3AC78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC78C;
        }
    }

label_7F3AC788:
    ctx->pc = 0x7F3AC788u;
    ctx->downcount -= 1;
    // 7F3AC788: b       0x7F3ACC64
    {
            goto label_7F3ACC64;
    }

label_7F3AC78C:
    ctx->pc = 0x7F3AC78Cu;
    ctx->downcount -= 2;
    // 7F3AC78C: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC790:
    ctx->pc = 0x7F3AC790u;
    // 7F3AC790: bc    12, 2, 0x7F3AC7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC7EC;
        }
    }

label_7F3AC794:
    ctx->pc = 0x7F3AC794u;
    ctx->downcount -= 3;
    // 7F3AC794: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC798:
    ctx->pc = 0x7F3AC798u;
    // 7F3AC798: rlwinm. r0, r0, 0, 13, 13
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

label_7F3AC79C:
    ctx->pc = 0x7F3AC79Cu;
    // 7F3AC79C: bc    12, 2, 0x7F3AC7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC7EC;
        }
    }

label_7F3AC7A0:
    ctx->downcount -= 1;
    // 7F3AC7A0: bl      0x8004C5F4
    {
            ctx->lr = 0x7F3AC7A4u;
            ctx->pc = 0x8004C5F4u;
            return;
    }

label_7F3AC7A4:
    ctx->downcount -= 2;
    // 7F3AC7A4: cmpwi   r3, 0
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

label_7F3AC7A8:
    // 7F3AC7A8: bc    12, 1, 0x7F3AC7A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC7A0u;
                return;
            }
            goto label_7F3AC7A0;
        }
    }

label_7F3AC7AC:
    ctx->pc = 0x7F3AC7ACu;
    ctx->downcount -= 1;
    // 7F3AC7AC: bl      0x8004C388
    {
            ctx->lr = 0x7F3AC7B0u;
            ctx->pc = 0x8004C388u;
            return;
    }

label_7F3AC7B0:
    ctx->pc = 0x7F3AC7B0u;
    ctx->downcount -= 12;
    // 7F3AC7B0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AC7B4:
    ctx->pc = 0x7F3AC7B4u;
    // 7F3AC7B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AC7B8:
    ctx->pc = 0x7F3AC7B8u;
    // 7F3AC7B8: addi    r4, r3, -27360
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27360);

label_7F3AC7BC:
    ctx->pc = 0x7F3AC7BCu;
    // 7F3AC7BC: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AC7C0:
    ctx->pc = 0x7F3AC7C0u;
    // 7F3AC7C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC7C4:
    ctx->pc = 0x7F3AC7C4u;
    // 7F3AC7C4: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3AC7C8:
    ctx->pc = 0x7F3AC7C8u;
    // 7F3AC7C8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AC7CC:
    ctx->pc = 0x7F3AC7CCu;
    // 7F3AC7CC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3AC7D0:
    ctx->pc = 0x7F3AC7D0u;
    // 7F3AC7D0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AC7D4:
    ctx->pc = 0x7F3AC7D4u;
    // 7F3AC7D4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AC7D8:
    ctx->pc = 0x7F3AC7D8u;
    // 7F3AC7D8: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AC7DC:
    ctx->pc = 0x7F3AC7DCu;
    // 7F3AC7DC: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3AC7E0u;
            ctx->pc = 0x7F3A8E8Cu;
            return;
    }

label_7F3AC7E0:
    ctx->pc = 0x7F3AC7E0u;
    ctx->downcount -= 3;
    // 7F3AC7E0: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC7E4:
    ctx->pc = 0x7F3AC7E4u;
    // 7F3AC7E4: rlwinm r0, r0, 0, 14, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFBFFFFu;
    }

label_7F3AC7E8:
    ctx->pc = 0x7F3AC7E8u;
    // 7F3AC7E8: stw     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AC7EC:
    ctx->pc = 0x7F3AC7ECu;
    ctx->downcount -= 3;
    // 7F3AC7EC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3AC7F0:
    ctx->pc = 0x7F3AC7F0u;
    // 7F3AC7F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AC7F4:
    ctx->pc = 0x7F3AC7F4u;
    // 7F3AC7F4: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3AC7F8u;
            ctx->pc = 0x7F3A911Cu;
            return;
    }

label_7F3AC7F8:
    ctx->pc = 0x7F3AC7F8u;
    ctx->downcount -= 5;
    // 7F3AC7F8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AC7FC:
    ctx->pc = 0x7F3AC7FCu;
    // 7F3AC7FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AC800:
    ctx->pc = 0x7F3AC800u;
    // 7F3AC800: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC804:
    ctx->pc = 0x7F3AC804u;
    // 7F3AC804: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AC808:
    ctx->pc = 0x7F3AC808u;
    // 7F3AC808: bc    12, 2, 0x7F3AC818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC818;
        }
    }

label_7F3AC80C:
    ctx->pc = 0x7F3AC80Cu;
    ctx->downcount -= 3;
    // 7F3AC80C: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC810:
    ctx->pc = 0x7F3AC810u;
    // 7F3AC810: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AC814:
    ctx->pc = 0x7F3AC814u;
    // 7F3AC814: bc    4, 2, 0x7F3AC834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC834;
        }
    }

label_7F3AC818:
    ctx->pc = 0x7F3AC818u;
    ctx->downcount -= 4;
    // 7F3AC818: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AC81C:
    ctx->pc = 0x7F3AC81Cu;
    // 7F3AC81C: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC820:
    ctx->pc = 0x7F3AC820u;
    // 7F3AC820: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AC824:
    ctx->pc = 0x7F3AC824u;
    // 7F3AC824: bc    4, 2, 0x7F3AC834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC834;
        }
    }

label_7F3AC828:
    ctx->pc = 0x7F3AC828u;
    ctx->downcount -= 3;
    // 7F3AC828: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC82C:
    ctx->pc = 0x7F3AC82Cu;
    // 7F3AC82C: rlwinm. r0, r0, 0, 8, 8
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

label_7F3AC830:
    ctx->pc = 0x7F3AC830u;
    // 7F3AC830: bc    12, 2, 0x7F3AC838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC838;
        }
    }

label_7F3AC834:
    ctx->pc = 0x7F3AC834u;
    ctx->downcount -= 1;
    // 7F3AC834: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AC838:
    ctx->pc = 0x7F3AC838u;
    ctx->downcount -= 2;
    // 7F3AC838: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AC83C:
    ctx->pc = 0x7F3AC83Cu;
    // 7F3AC83C: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3AC840u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3AC840:
    ctx->pc = 0x7F3AC840u;
    ctx->downcount -= 5;
    // 7F3AC840: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC844:
    ctx->pc = 0x7F3AC844u;
    // 7F3AC844: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3AC848:
    ctx->pc = 0x7F3AC848u;
    // 7F3AC848: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3AC84C:
    ctx->pc = 0x7F3AC84Cu;
    // 7F3AC84C: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC850:
    ctx->pc = 0x7F3AC850u;
    // 7F3AC850: bl      0x80042184
    {
            ctx->lr = 0x7F3AC854u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC854:
    ctx->pc = 0x7F3AC854u;
    ctx->downcount -= 5;
    // 7F3AC854: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC858:
    ctx->pc = 0x7F3AC858u;
    // 7F3AC858: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_7F3AC85C:
    ctx->pc = 0x7F3AC85Cu;
    // 7F3AC85C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AC860:
    ctx->pc = 0x7F3AC860u;
    // 7F3AC860: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC864:
    ctx->pc = 0x7F3AC864u;
    // 7F3AC864: bl      0x80042184
    {
            ctx->lr = 0x7F3AC868u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC868:
    ctx->pc = 0x7F3AC868u;
    ctx->downcount -= 5;
    // 7F3AC868: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC86C:
    ctx->pc = 0x7F3AC86Cu;
    // 7F3AC86C: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3AC870:
    ctx->pc = 0x7F3AC870u;
    // 7F3AC870: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AC874:
    ctx->pc = 0x7F3AC874u;
    // 7F3AC874: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC878:
    ctx->pc = 0x7F3AC878u;
    // 7F3AC878: bl      0x80042184
    {
            ctx->lr = 0x7F3AC87Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC87C:
    ctx->pc = 0x7F3AC87Cu;
    ctx->downcount -= 5;
    // 7F3AC87C: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC880:
    ctx->pc = 0x7F3AC880u;
    // 7F3AC880: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3AC884:
    ctx->pc = 0x7F3AC884u;
    // 7F3AC884: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AC888:
    ctx->pc = 0x7F3AC888u;
    // 7F3AC888: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AC88C:
    ctx->pc = 0x7F3AC88Cu;
    // 7F3AC88C: bl      0x80042184
    {
            ctx->lr = 0x7F3AC890u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AC890:
    ctx->pc = 0x7F3AC890u;
    ctx->downcount -= 2;
    // 7F3AC890: cmplwi  r27, 0x0000
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

label_7F3AC894:
    ctx->pc = 0x7F3AC894u;
    // 7F3AC894: bc    12, 2, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3AC898:
    ctx->pc = 0x7F3AC898u;
    ctx->downcount -= 3;
    // 7F3AC898: lwz     r30, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3AC89C:
    ctx->pc = 0x7F3AC89Cu;
    // 7F3AC89C: cmpwi   r30, 0
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

label_7F3AC8A0:
    ctx->pc = 0x7F3AC8A0u;
    // 7F3AC8A0: bc    12, 0, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3AC8A4:
    ctx->pc = 0x7F3AC8A4u;
    ctx->downcount -= 3;
    // 7F3AC8A4: lha     r0, 92(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AC8A8:
    ctx->pc = 0x7F3AC8A8u;
    // 7F3AC8A8: cmpw    r30, r0
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

label_7F3AC8AC:
    ctx->pc = 0x7F3AC8ACu;
    // 7F3AC8AC: bc    4, 0, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3AC8B0:
    ctx->pc = 0x7F3AC8B0u;
    ctx->downcount -= 4;
    // 7F3AC8B0: cmpw    r30, r28
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AC8B4:
    ctx->pc = 0x7F3AC8B4u;
    // 7F3AC8B4: lwz     r29, 192(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3AC8B8:
    ctx->pc = 0x7F3AC8B8u;
    // 7F3AC8B8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3AC8BC:
    ctx->pc = 0x7F3AC8BCu;
    // 7F3AC8BC: bc    4, 2, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3AC8C0:
    ctx->pc = 0x7F3AC8C0u;
    ctx->downcount -= 3;
    // 7F3AC8C0: lwz     r0, 240(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(240);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC8C4:
    ctx->pc = 0x7F3AC8C4u;
    // 7F3AC8C4: cmplwi  r0, 0x0000
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

label_7F3AC8C8:
    ctx->pc = 0x7F3AC8C8u;
    // 7F3AC8C8: bc    12, 2, 0x7F3AC8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC8D0;
        }
    }

label_7F3AC8CC:
    ctx->pc = 0x7F3AC8CCu;
    ctx->downcount -= 1;
    // 7F3AC8CC: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F3AC8D0:
    ctx->pc = 0x7F3AC8D0u;
    ctx->downcount -= 2;
    // 7F3AC8D0: cmpwi   r25, 0
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

label_7F3AC8D4:
    ctx->pc = 0x7F3AC8D4u;
    // 7F3AC8D4: bc    12, 2, 0x7F3ACB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACB4C;
        }
    }

label_7F3AC8D8:
    ctx->pc = 0x7F3AC8D8u;
    ctx->downcount -= 4;
    // 7F3AC8D8: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AC8DC:
    ctx->pc = 0x7F3AC8DCu;
    // 7F3AC8DC: lwz     r0, -12084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC8E0:
    ctx->pc = 0x7F3AC8E0u;
    // 7F3AC8E0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AC8E4:
    ctx->pc = 0x7F3AC8E4u;
    // 7F3AC8E4: bc    12, 2, 0x7F3ACB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACB34;
        }
    }

label_7F3AC8E8:
    ctx->pc = 0x7F3AC8E8u;
    ctx->downcount -= 3;
    // 7F3AC8E8: lwz     r0, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC8EC:
    ctx->pc = 0x7F3AC8ECu;
    // 7F3AC8EC: cmpwi   r0, 2
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

label_7F3AC8F0:
    ctx->pc = 0x7F3AC8F0u;
    // 7F3AC8F0: bc    12, 2, 0x7F3ACB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACB34;
        }
    }

label_7F3AC8F4:
    ctx->pc = 0x7F3AC8F4u;
    ctx->downcount -= 2;
    // 7F3AC8F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AC8F8:
    ctx->pc = 0x7F3AC8F8u;
    // 7F3AC8F8: bl      0x7F026F5C
    {
            ctx->lr = 0x7F3AC8FCu;
            ctx->pc = 0x7F026F5Cu;
            return;
    }

label_7F3AC8FC:
    ctx->pc = 0x7F3AC8FCu;
    ctx->downcount -= 7;
    // 7F3AC8FC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AC900:
    ctx->pc = 0x7F3AC900u;
    // 7F3AC900: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F3AC904:
    ctx->pc = 0x7F3AC904u;
    // 7F3AC904: addi    r4, r4, -21288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21288);

label_7F3AC908:
    ctx->pc = 0x7F3AC908u;
    // 7F3AC908: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC90C:
    ctx->pc = 0x7F3AC90Cu;
    // 7F3AC90C: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F3AC910:
    ctx->pc = 0x7F3AC910u;
    // 7F3AC910: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC914:
    loop_7F3AC914(ctx);
    if (ctx->pc == 0x7F3AC928u) goto label_7F3AC928;
    return;
label_7F3AC918:
    ctx->pc = 0x7F3AC918u;
    // 7F3AC918: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F3AC91C:
    ctx->pc = 0x7F3AC91Cu;
    // 7F3AC91C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC920:
    ctx->pc = 0x7F3AC920u;
    // 7F3AC920: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F3AC924:
    // 7F3AC924: bc    16, 0, 0x7F3AC914
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC914u;
                return;
            }
            goto label_7F3AC914;
        }
    }

label_7F3AC928:
    ctx->pc = 0x7F3AC928u;
    ctx->downcount -= 19;
    // 7F3AC928: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AC92C:
    ctx->pc = 0x7F3AC92Cu;
    // 7F3AC92C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F3AC930:
    ctx->pc = 0x7F3AC930u;
    // 7F3AC930: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AC934:
    ctx->pc = 0x7F3AC934u;
    // 7F3AC934: stw     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AC938:
    ctx->pc = 0x7F3AC938u;
    // 7F3AC938: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AC93C:
    ctx->pc = 0x7F3AC93Cu;
    // 7F3AC93C: stw     r5, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AC940:
    ctx->pc = 0x7F3AC940u;
    // 7F3AC940: lfs     f0, -21352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC940u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC944:
    ctx->pc = 0x7F3AC944u;
    // 7F3AC944: sth     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AC948:
    ctx->pc = 0x7F3AC948u;
    // 7F3AC948: sth     r5, 238(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(238);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F3AC94C:
    ctx->pc = 0x7F3AC94Cu;
    // 7F3AC94C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC94Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC950:
    ctx->pc = 0x7F3AC950u;
    // 7F3AC950: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AC954:
    ctx->pc = 0x7F3AC954u;
    // 7F3AC954: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC954u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC958:
    ctx->pc = 0x7F3AC958u;
    // 7F3AC958: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AC95C:
    ctx->pc = 0x7F3AC95Cu;
    // 7F3AC95C: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC95Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC960:
    ctx->pc = 0x7F3AC960u;
    // 7F3AC960: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AC964:
    ctx->pc = 0x7F3AC964u;
    // 7F3AC964: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AC968:
    ctx->pc = 0x7F3AC968u;
    // 7F3AC968: lwz     r0, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AC96C:
    ctx->pc = 0x7F3AC96Cu;
    // 7F3AC96C: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AC970:
    ctx->pc = 0x7F3AC970u;
    // 7F3AC970: bc    4, 2, 0x7F3ACAF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACAF8;
        }
    }

label_7F3AC974:
    ctx->pc = 0x7F3AC974u;
    ctx->downcount -= 1;
    // 7F3AC974: bl      0x7F022504
    {
            ctx->lr = 0x7F3AC978u;
            ctx->pc = 0x7F022504u;
            return;
    }

label_7F3AC978:
    ctx->pc = 0x7F3AC978u;
    ctx->downcount -= 3;
    // 7F3AC978: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F3AC97C:
    ctx->pc = 0x7F3AC97Cu;
    // 7F3AC97C: cmpwi   r0, 36
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

label_7F3AC980:
    ctx->pc = 0x7F3AC980u;
    // 7F3AC980: bc    12, 2, 0x7F3ACA34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACA34;
        }
    }

label_7F3AC984:
    ctx->pc = 0x7F3AC984u;
    ctx->downcount -= 1;
    // 7F3AC984: bc    4, 0, 0x7F3ACAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACAD4;
        }
    }

label_7F3AC988:
    ctx->pc = 0x7F3AC988u;
    ctx->downcount -= 2;
    // 7F3AC988: cmpwi   r0, 31
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

label_7F3AC98C:
    ctx->pc = 0x7F3AC98Cu;
    // 7F3AC98C: bc    12, 2, 0x7F3AC994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AC994;
        }
    }

label_7F3AC990:
    ctx->pc = 0x7F3AC990u;
    ctx->downcount -= 1;
    // 7F3AC990: b       0x7F3ACAD4
    {
            goto label_7F3ACAD4;
    }

label_7F3AC994:
    ctx->pc = 0x7F3AC994u;
    ctx->downcount -= 6;
    // 7F3AC994: lwz     r3, 212(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC998:
    ctx->pc = 0x7F3AC998u;
    // 7F3AC998: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AC99C:
    ctx->pc = 0x7F3AC99Cu;
    // 7F3AC99C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AC9A0:
    ctx->pc = 0x7F3AC9A0u;
    // 7F3AC9A0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3AC9A4:
    ctx->pc = 0x7F3AC9A4u;
    // 7F3AC9A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC9A8:
    loop_7F3AC9A8(ctx);
    if (ctx->pc == 0x7F3AC9BCu) goto label_7F3AC9BC;
    return;
label_7F3AC9AC:
    ctx->pc = 0x7F3AC9ACu;
    // 7F3AC9AC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AC9B0:
    ctx->pc = 0x7F3AC9B0u;
    // 7F3AC9B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AC9B4:
    ctx->pc = 0x7F3AC9B4u;
    // 7F3AC9B4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AC9B8:
    // 7F3AC9B8: bc    16, 0, 0x7F3AC9A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC9A8u;
                return;
            }
            goto label_7F3AC9A8;
        }
    }

label_7F3AC9BC:
    ctx->pc = 0x7F3AC9BCu;
    ctx->downcount -= 6;
    // 7F3AC9BC: lwz     r3, 212(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AC9C0:
    ctx->pc = 0x7F3AC9C0u;
    // 7F3AC9C0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AC9C4:
    ctx->pc = 0x7F3AC9C4u;
    // 7F3AC9C4: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AC9C8:
    ctx->pc = 0x7F3AC9C8u;
    // 7F3AC9C8: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F3AC9CC:
    ctx->pc = 0x7F3AC9CCu;
    // 7F3AC9CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AC9D0:
    loop_7F3AC9D0(ctx);
    if (ctx->pc == 0x7F3AC9E4u) goto label_7F3AC9E4;
    return;
label_7F3AC9D4:
    ctx->pc = 0x7F3AC9D4u;
    // 7F3AC9D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AC9D8:
    ctx->pc = 0x7F3AC9D8u;
    // 7F3AC9D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AC9DC:
    ctx->pc = 0x7F3AC9DCu;
    // 7F3AC9DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AC9E0:
    // 7F3AC9E0: bc    16, 0, 0x7F3AC9D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC9D0u;
                return;
            }
            goto label_7F3AC9D0;
        }
    }

label_7F3AC9E4:
    ctx->pc = 0x7F3AC9E4u;
    ctx->downcount -= 13;
    // 7F3AC9E4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AC9E8:
    ctx->pc = 0x7F3AC9E8u;
    // 7F3AC9E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AC9EC:
    ctx->pc = 0x7F3AC9ECu;
    // 7F3AC9EC: lfs     f1, -21348(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC9ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AC9F0:
    ctx->pc = 0x7F3AC9F0u;
    // 7F3AC9F0: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F3AC9F4:
    ctx->pc = 0x7F3AC9F4u;
    // 7F3AC9F4: lfs     f0, -21352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC9F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AC9F8:
    ctx->pc = 0x7F3AC9F8u;
    // 7F3AC9F8: addi    r5, r1, 136
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(136);

label_7F3AC9FC:
    ctx->pc = 0x7F3AC9FCu;
    // 7F3AC9FC: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AC9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACA00:
    ctx->pc = 0x7F3ACA00u;
    // 7F3ACA00: addi    r4, r21, 152
    ctx->gpr[4] = ctx->gpr[21] + (u32)(s32)(152);

label_7F3ACA04:
    ctx->pc = 0x7F3ACA04u;
    // 7F3ACA04: stfs     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACA08:
    ctx->pc = 0x7F3ACA08u;
    // 7F3ACA08: stfs     f1, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACA0C:
    ctx->pc = 0x7F3ACA0Cu;
    // 7F3ACA0C: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3ACA10:
    ctx->pc = 0x7F3ACA10u;
    // 7F3ACA10: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ACA14:
    loop_7F3ACA14(ctx);
    if (ctx->pc == 0x7F3ACA28u) goto label_7F3ACA28;
    return;
label_7F3ACA18:
    ctx->pc = 0x7F3ACA18u;
    // 7F3ACA18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ACA1C:
    ctx->pc = 0x7F3ACA1Cu;
    // 7F3ACA1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ACA20:
    ctx->pc = 0x7F3ACA20u;
    // 7F3ACA20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ACA24:
    // 7F3ACA24: bc    16, 0, 0x7F3ACA14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA14u;
                return;
            }
            goto label_7F3ACA14;
        }
    }

label_7F3ACA28:
    ctx->pc = 0x7F3ACA28u;
    ctx->downcount -= 3;
    // 7F3ACA28: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACA2C:
    ctx->pc = 0x7F3ACA2Cu;
    // 7F3ACA2C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACA30:
    ctx->pc = 0x7F3ACA30u;
    // 7F3ACA30: b       0x7F3ACB18
    {
            goto label_7F3ACB18;
    }

label_7F3ACA34:
    ctx->pc = 0x7F3ACA34u;
    ctx->downcount -= 6;
    // 7F3ACA34: lwz     r3, 212(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACA38:
    ctx->pc = 0x7F3ACA38u;
    // 7F3ACA38: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3ACA3C:
    ctx->pc = 0x7F3ACA3Cu;
    // 7F3ACA3C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3ACA40:
    ctx->pc = 0x7F3ACA40u;
    // 7F3ACA40: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3ACA44:
    ctx->pc = 0x7F3ACA44u;
    // 7F3ACA44: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ACA48:
    loop_7F3ACA48(ctx);
    if (ctx->pc == 0x7F3ACA5Cu) goto label_7F3ACA5C;
    return;
label_7F3ACA4C:
    ctx->pc = 0x7F3ACA4Cu;
    // 7F3ACA4C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ACA50:
    ctx->pc = 0x7F3ACA50u;
    // 7F3ACA50: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ACA54:
    ctx->pc = 0x7F3ACA54u;
    // 7F3ACA54: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ACA58:
    // 7F3ACA58: bc    16, 0, 0x7F3ACA48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA48u;
                return;
            }
            goto label_7F3ACA48;
        }
    }

label_7F3ACA5C:
    ctx->pc = 0x7F3ACA5Cu;
    ctx->downcount -= 6;
    // 7F3ACA5C: lwz     r3, 212(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACA60:
    ctx->pc = 0x7F3ACA60u;
    // 7F3ACA60: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3ACA64:
    ctx->pc = 0x7F3ACA64u;
    // 7F3ACA64: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3ACA68:
    ctx->pc = 0x7F3ACA68u;
    // 7F3ACA68: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F3ACA6C:
    ctx->pc = 0x7F3ACA6Cu;
    // 7F3ACA6C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ACA70:
    loop_7F3ACA70(ctx);
    if (ctx->pc == 0x7F3ACA84u) goto label_7F3ACA84;
    return;
label_7F3ACA74:
    ctx->pc = 0x7F3ACA74u;
    // 7F3ACA74: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ACA78:
    ctx->pc = 0x7F3ACA78u;
    // 7F3ACA78: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ACA7C:
    ctx->pc = 0x7F3ACA7Cu;
    // 7F3ACA7C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ACA80:
    // 7F3ACA80: bc    16, 0, 0x7F3ACA70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACA70u;
                return;
            }
            goto label_7F3ACA70;
        }
    }

label_7F3ACA84:
    ctx->pc = 0x7F3ACA84u;
    ctx->downcount -= 13;
    // 7F3ACA84: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3ACA88:
    ctx->pc = 0x7F3ACA88u;
    // 7F3ACA88: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ACA8C:
    ctx->pc = 0x7F3ACA8Cu;
    // 7F3ACA8C: lfs     f1, -21376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3ACA90:
    ctx->pc = 0x7F3ACA90u;
    // 7F3ACA90: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F3ACA94:
    ctx->pc = 0x7F3ACA94u;
    // 7F3ACA94: lfs     f0, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3ACA98:
    ctx->pc = 0x7F3ACA98u;
    // 7F3ACA98: addi    r5, r1, 136
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(136);

label_7F3ACA9C:
    ctx->pc = 0x7F3ACA9Cu;
    // 7F3ACA9C: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACA9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAA0:
    ctx->pc = 0x7F3ACAA0u;
    // 7F3ACAA0: addi    r4, r21, 152
    ctx->gpr[4] = ctx->gpr[21] + (u32)(s32)(152);

label_7F3ACAA4:
    ctx->pc = 0x7F3ACAA4u;
    // 7F3ACAA4: stfs     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAA8:
    ctx->pc = 0x7F3ACAA8u;
    // 7F3ACAA8: stfs     f1, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAAC:
    ctx->pc = 0x7F3ACAACu;
    // 7F3ACAAC: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3ACAB0:
    ctx->pc = 0x7F3ACAB0u;
    // 7F3ACAB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ACAB4:
    loop_7F3ACAB4(ctx);
    if (ctx->pc == 0x7F3ACAC8u) goto label_7F3ACAC8;
    return;
label_7F3ACAB8:
    ctx->pc = 0x7F3ACAB8u;
    // 7F3ACAB8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ACABC:
    ctx->pc = 0x7F3ACABCu;
    // 7F3ACABC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ACAC0:
    ctx->pc = 0x7F3ACAC0u;
    // 7F3ACAC0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ACAC4:
    // 7F3ACAC4: bc    16, 0, 0x7F3ACAB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACAB4u;
                return;
            }
            goto label_7F3ACAB4;
        }
    }

label_7F3ACAC8:
    ctx->pc = 0x7F3ACAC8u;
    ctx->downcount -= 3;
    // 7F3ACAC8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACACC:
    ctx->pc = 0x7F3ACACCu;
    // 7F3ACACC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACAD0:
    ctx->pc = 0x7F3ACAD0u;
    // 7F3ACAD0: b       0x7F3ACB18
    {
            goto label_7F3ACB18;
    }

label_7F3ACAD4:
    ctx->pc = 0x7F3ACAD4u;
    ctx->downcount -= 9;
    // 7F3ACAD4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3ACAD8:
    ctx->pc = 0x7F3ACAD8u;
    // 7F3ACAD8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ACADC:
    ctx->pc = 0x7F3ACADCu;
    // 7F3ACADC: lfs     f1, -21344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACADCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3ACAE0:
    ctx->pc = 0x7F3ACAE0u;
    // 7F3ACAE0: lfs     f0, -21352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3ACAE4:
    ctx->pc = 0x7F3ACAE4u;
    // 7F3ACAE4: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAE8:
    ctx->pc = 0x7F3ACAE8u;
    // 7F3ACAE8: stfs     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAEC:
    ctx->pc = 0x7F3ACAECu;
    // 7F3ACAEC: stfs     f1, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACAF0:
    ctx->pc = 0x7F3ACAF0u;
    // 7F3ACAF0: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACAF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3ACAF4:
    ctx->pc = 0x7F3ACAF4u;
    // 7F3ACAF4: b       0x7F3ACB18
    {
            goto label_7F3ACB18;
    }

label_7F3ACAF8:
    ctx->pc = 0x7F3ACAF8u;
    ctx->downcount -= 8;
    // 7F3ACAF8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3ACAFC:
    ctx->pc = 0x7F3ACAFCu;
    // 7F3ACAFC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ACB00:
    ctx->pc = 0x7F3ACB00u;
    // 7F3ACB00: lfs     f1, -21340(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3ACB04:
    ctx->pc = 0x7F3ACB04u;
    // 7F3ACB04: lfs     f0, -21336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3ACB08:
    ctx->pc = 0x7F3ACB08u;
    // 7F3ACB08: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACB0C:
    ctx->pc = 0x7F3ACB0Cu;
    // 7F3ACB0C: stfs     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACB10:
    ctx->pc = 0x7F3ACB10u;
    // 7F3ACB10: stfs     f1, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3ACB14:
    ctx->pc = 0x7F3ACB14u;
    // 7F3ACB14: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3ACB14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3ACB18:
    ctx->pc = 0x7F3ACB18u;
    ctx->downcount -= 6;
    // 7F3ACB18: lwz     r7, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ACB1C:
    ctx->pc = 0x7F3ACB1Cu;
    // 7F3ACB1C: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3ACB20:
    ctx->pc = 0x7F3ACB20u;
    // 7F3ACB20: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACB24:
    ctx->pc = 0x7F3ACB24u;
    // 7F3ACB24: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_7F3ACB28:
    ctx->pc = 0x7F3ACB28u;
    // 7F3ACB28: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F3ACB2C:
    ctx->pc = 0x7F3ACB2Cu;
    // 7F3ACB2C: bl      0x7F3BC964
    {
            ctx->lr = 0x7F3ACB30u;
            ctx->pc = 0x7F3BC964u;
            return;
    }

label_7F3ACB30:
    ctx->pc = 0x7F3ACB30u;
    ctx->downcount -= 1;
    // 7F3ACB30: b       0x7F3ACB4C
    {
            goto label_7F3ACB4C;
    }

label_7F3ACB34:
    ctx->pc = 0x7F3ACB34u;
    ctx->downcount -= 6;
    // 7F3ACB34: lwz     r5, 212(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACB38:
    ctx->pc = 0x7F3ACB38u;
    // 7F3ACB38: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F3ACB3C:
    ctx->pc = 0x7F3ACB3Cu;
    // 7F3ACB3C: lwz     r7, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ACB40:
    ctx->pc = 0x7F3ACB40u;
    // 7F3ACB40: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACB44:
    ctx->pc = 0x7F3ACB44u;
    // 7F3ACB44: addi    r3, r21, 156
    ctx->gpr[3] = ctx->gpr[21] + (u32)(s32)(156);

label_7F3ACB48:
    ctx->pc = 0x7F3ACB48u;
    // 7F3ACB48: bl      0x7F3BC964
    {
            ctx->lr = 0x7F3ACB4Cu;
            ctx->pc = 0x7F3BC964u;
            return;
    }

label_7F3ACB4C:
    ctx->pc = 0x7F3ACB4Cu;
    ctx->downcount -= 3;
    // 7F3ACB4C: lwz     r4, 220(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACB50:
    ctx->pc = 0x7F3ACB50u;
    // 7F3ACB50: cmplwi  r4, 0x0000
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

label_7F3ACB54:
    ctx->pc = 0x7F3ACB54u;
    // 7F3ACB54: bc    12, 2, 0x7F3ACB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACB68;
        }
    }

label_7F3ACB58:
    ctx->pc = 0x7F3ACB58u;
    ctx->downcount -= 3;
    // 7F3ACB58: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3ACB5C:
    ctx->pc = 0x7F3ACB5Cu;
    // 7F3ACB5C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3ACB60:
    ctx->pc = 0x7F3ACB60u;
    // 7F3ACB60: bl      0x80042184
    {
            ctx->lr = 0x7F3ACB64u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3ACB64:
    ctx->pc = 0x7F3ACB64u;
    ctx->downcount -= 1;
    // 7F3ACB64: b       0x7F3ACB7C
    {
            goto label_7F3ACB7C;
    }

label_7F3ACB68:
    ctx->pc = 0x7F3ACB68u;
    ctx->downcount -= 5;
    // 7F3ACB68: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACB6C:
    ctx->pc = 0x7F3ACB6Cu;
    // 7F3ACB6C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3ACB70:
    ctx->pc = 0x7F3ACB70u;
    // 7F3ACB70: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3ACB74:
    ctx->pc = 0x7F3ACB74u;
    // 7F3ACB74: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACB78:
    ctx->pc = 0x7F3ACB78u;
    // 7F3ACB78: bl      0x80042184
    {
            ctx->lr = 0x7F3ACB7Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3ACB7C:
    ctx->pc = 0x7F3ACB7Cu;
    ctx->downcount -= 3;
    // 7F3ACB7C: lwz     r4, 228(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACB80:
    ctx->pc = 0x7F3ACB80u;
    // 7F3ACB80: cmplwi  r4, 0x0000
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

label_7F3ACB84:
    ctx->pc = 0x7F3ACB84u;
    // 7F3ACB84: bc    12, 2, 0x7F3ACB98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACB98;
        }
    }

label_7F3ACB88:
    ctx->pc = 0x7F3ACB88u;
    ctx->downcount -= 3;
    // 7F3ACB88: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3ACB8C:
    ctx->pc = 0x7F3ACB8Cu;
    // 7F3ACB8C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3ACB90:
    ctx->pc = 0x7F3ACB90u;
    // 7F3ACB90: bl      0x80042184
    {
            ctx->lr = 0x7F3ACB94u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3ACB94:
    ctx->pc = 0x7F3ACB94u;
    ctx->downcount -= 1;
    // 7F3ACB94: b       0x7F3ACBAC
    {
            goto label_7F3ACBAC;
    }

label_7F3ACB98:
    ctx->pc = 0x7F3ACB98u;
    ctx->downcount -= 5;
    // 7F3ACB98: lwz     r4, 72(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACB9C:
    ctx->pc = 0x7F3ACB9Cu;
    // 7F3ACB9C: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F3ACBA0:
    ctx->pc = 0x7F3ACBA0u;
    // 7F3ACBA0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3ACBA4:
    ctx->pc = 0x7F3ACBA4u;
    // 7F3ACBA4: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACBA8:
    ctx->pc = 0x7F3ACBA8u;
    // 7F3ACBA8: bl      0x80042184
    {
            ctx->lr = 0x7F3ACBACu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3ACBAC:
    ctx->pc = 0x7F3ACBACu;
    ctx->downcount -= 2;
    // 7F3ACBAC: cmpwi   r28, 0
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

label_7F3ACBB0:
    ctx->pc = 0x7F3ACBB0u;
    // 7F3ACBB0: bc    12, 2, 0x7F3ACBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACBC4;
        }
    }

label_7F3ACBB4:
    ctx->pc = 0x7F3ACBB4u;
    ctx->downcount -= 4;
    // 7F3ACBB4: lwz     r4, 240(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACBB8:
    ctx->pc = 0x7F3ACBB8u;
    // 7F3ACBB8: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F3ACBBC:
    ctx->pc = 0x7F3ACBBCu;
    // 7F3ACBBC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3ACBC0:
    ctx->pc = 0x7F3ACBC0u;
    // 7F3ACBC0: bl      0x80042184
    {
            ctx->lr = 0x7F3ACBC4u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3ACBC4:
    ctx->pc = 0x7F3ACBC4u;
    ctx->downcount -= 3;
    // 7F3ACBC4: lwz     r0, 388(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACBC8:
    ctx->pc = 0x7F3ACBC8u;
    // 7F3ACBC8: cmplwi  r0, 0x0000
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

label_7F3ACBCC:
    ctx->pc = 0x7F3ACBCCu;
    // 7F3ACBCC: bc    4, 2, 0x7F3ACBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACBFC;
        }
    }

label_7F3ACBD0:
    ctx->pc = 0x7F3ACBD0u;
    ctx->downcount -= 2;
    // 7F3ACBD0: cmpwi   r30, -1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ACBD4:
    ctx->pc = 0x7F3ACBD4u;
    // 7F3ACBD4: bc    12, 2, 0x7F3ACBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACBFC;
        }
    }

label_7F3ACBD8:
    ctx->pc = 0x7F3ACBD8u;
    ctx->downcount -= 8;
    // 7F3ACBD8: mulli   r0, r30, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)324);

label_7F3ACBDC:
    ctx->pc = 0x7F3ACBDCu;
    // 7F3ACBDC: add   r3, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ACBE0:
    ctx->pc = 0x7F3ACBE0u;
    // 7F3ACBE0: lwz     r3, 660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACBE4:
    ctx->pc = 0x7F3ACBE4u;
    // 7F3ACBE4: lha     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ACBE8:
    ctx->pc = 0x7F3ACBE8u;
    // 7F3ACBE8: cmpwi   r0, -1
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

label_7F3ACBEC:
    ctx->pc = 0x7F3ACBECu;
    // 7F3ACBEC: bc    12, 2, 0x7F3ACBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACBFC;
        }
    }

label_7F3ACBF0:
    ctx->pc = 0x7F3ACBF0u;
    ctx->downcount -= 5;
    // 7F3ACBF0: mulli   r0, r0, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3ACBF4:
    ctx->pc = 0x7F3ACBF4u;
    // 7F3ACBF4: add   r3, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ACBF8:
    ctx->pc = 0x7F3ACBF8u;
    // 7F3ACBF8: lwz     r29, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3ACBFC:
    ctx->pc = 0x7F3ACBFCu;
    ctx->downcount -= 8;
    // 7F3ACBFC: mulli   r0, r30, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)324);

label_7F3ACC00:
    ctx->pc = 0x7F3ACC00u;
    // 7F3ACC00: add   r3, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3ACC04:
    ctx->pc = 0x7F3ACC04u;
    // 7F3ACC04: lwz     r3, 660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACC08:
    ctx->pc = 0x7F3ACC08u;
    // 7F3ACC08: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACC0C:
    ctx->pc = 0x7F3ACC0Cu;
    // 7F3ACC0C: cmplwi  r3, 0x0000
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

label_7F3ACC10:
    ctx->pc = 0x7F3ACC10u;
    // 7F3ACC10: bc    12, 2, 0x7F3ACC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC30;
        }
    }

label_7F3ACC14:
    ctx->pc = 0x7F3ACC14u;
    ctx->downcount -= 3;
    // 7F3ACC14: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACC18:
    ctx->pc = 0x7F3ACC18u;
    // 7F3ACC18: rlwinm. r0, r0, 0, 18, 18
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

label_7F3ACC1C:
    ctx->pc = 0x7F3ACC1Cu;
    // 7F3ACC1C: bc    12, 2, 0x7F3ACC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC30;
        }
    }

label_7F3ACC20:
    ctx->pc = 0x7F3ACC20u;
    ctx->downcount -= 3;
    // 7F3ACC20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ACC24:
    ctx->pc = 0x7F3ACC24u;
    // 7F3ACC24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ACC28:
    ctx->pc = 0x7F3ACC28u;
    // 7F3ACC28: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ACC2Cu;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ACC2C:
    ctx->pc = 0x7F3ACC2Cu;
    ctx->downcount -= 1;
    // 7F3ACC2C: b       0x7F3ACC3C
    {
            goto label_7F3ACC3C;
    }

label_7F3ACC30:
    ctx->pc = 0x7F3ACC30u;
    ctx->downcount -= 3;
    // 7F3ACC30: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACC34:
    ctx->pc = 0x7F3ACC34u;
    // 7F3ACC34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ACC38:
    ctx->pc = 0x7F3ACC38u;
    // 7F3ACC38: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ACC3Cu;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ACC3C:
    ctx->pc = 0x7F3ACC3Cu;
    ctx->downcount -= 3;
    // 7F3ACC3C: lwz     r0, 388(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACC40:
    ctx->pc = 0x7F3ACC40u;
    // 7F3ACC40: cmplwi  r0, 0x0000
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

label_7F3ACC44:
    ctx->pc = 0x7F3ACC44u;
    // 7F3ACC44: bc    4, 2, 0x7F3ACC50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC50;
        }
    }

label_7F3ACC48:
    ctx->pc = 0x7F3ACC48u;
    ctx->downcount -= 2;
    // 7F3ACC48: and.   r0, r29, r26
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[26];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ACC4C:
    ctx->pc = 0x7F3ACC4Cu;
    // 7F3ACC4C: bc    4, 2, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3ACC50:
    ctx->pc = 0x7F3ACC50u;
    ctx->downcount -= 3;
    // 7F3ACC50: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACC54:
    ctx->pc = 0x7F3ACC54u;
    // 7F3ACC54: cmplwi  r3, 0x0000
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

label_7F3ACC58:
    ctx->pc = 0x7F3ACC58u;
    // 7F3ACC58: bc    12, 2, 0x7F3ACC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACC64;
        }
    }

label_7F3ACC5C:
    ctx->pc = 0x7F3ACC5Cu;
    ctx->downcount -= 2;
    // 7F3ACC5C: lwz     r4, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACC60:
    ctx->pc = 0x7F3ACC60u;
    // 7F3ACC60: bl      0x800466D4
    {
            ctx->lr = 0x7F3ACC64u;
            ctx->pc = 0x800466D4u;
            return;
    }

label_7F3ACC64:
    ctx->pc = 0x7F3ACC64u;
    ctx->downcount -= 16;
    // 7F3ACC64: lmw     r21, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3ACC68:
    ctx->pc = 0x7F3ACC68u;
    // 7F3ACC68: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACC6C:
    ctx->pc = 0x7F3ACC6Cu;
    // 7F3ACC6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ACC70:
    ctx->pc = 0x7F3ACC70u;
    // 7F3ACC70: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_7F3ACC74:
    ctx->pc = 0x7F3ACC74u;
    // 7F3ACC74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3ACC78:
    ctx->pc = 0x7F3ACC78u;
    ctx->downcount -= 24;
    // 7F3ACC78: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3ACC7C:
    ctx->pc = 0x7F3ACC7Cu;
    // 7F3ACC7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3ACC80:
    ctx->pc = 0x7F3ACC80u;
    // 7F3ACC80: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F3ACC84:
    ctx->pc = 0x7F3ACC84u;
    // 7F3ACC84: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACC88:
    ctx->pc = 0x7F3ACC88u;
    // 7F3ACC88: stmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3ACC8C:
    ctx->pc = 0x7F3ACC8Cu;
    // 7F3ACC8C: addi    r31, r4, -21852
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F3ACC90:
    ctx->pc = 0x7F3ACC90u;
    // 7F3ACC90: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3ACC94:
    ctx->pc = 0x7F3ACC94u;
    // 7F3ACC94: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ACC98:
    ctx->pc = 0x7F3ACC98u;
    // 7F3ACC98: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3ACC9C:
    ctx->pc = 0x7F3ACC9Cu;
    // 7F3ACC9C: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3ACCA0:
    ctx->pc = 0x7F3ACCA0u;
    // 7F3ACCA0: or   r30, r10, r10
    {
        ctx->gpr[30] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3ACCA4:
    ctx->pc = 0x7F3ACCA4u;
    // 7F3ACCA4: addi    r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(192);

label_7F3ACCA8:
    ctx->pc = 0x7F3ACCA8u;
    // 7F3ACCA8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3ACCAC:
    ctx->pc = 0x7F3ACCACu;
    // 7F3ACCAC: bl      0x80025B84
    {
            ctx->lr = 0x7F3ACCB0u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3ACCB0:
    ctx->pc = 0x7F3ACCB0u;
    ctx->downcount -= 3;
    // 7F3ACCB0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3ACCB4:
    ctx->pc = 0x7F3ACCB4u;
    // 7F3ACCB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ACCB8:
    ctx->pc = 0x7F3ACCB8u;
    // 7F3ACCB8: bl      0x800468B8
    {
            ctx->lr = 0x7F3ACCBCu;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3ACCBC:
    ctx->pc = 0x7F3ACCBCu;
    ctx->downcount -= 3;
    // 7F3ACCBC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ACCC0:
    ctx->pc = 0x7F3ACCC0u;
    // 7F3ACCC0: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F3ACCC4:
    ctx->pc = 0x7F3ACCC4u;
    // 7F3ACCC4: bl      0x7F114E28
    {
            ctx->lr = 0x7F3ACCC8u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3ACCC8:
    ctx->pc = 0x7F3ACCC8u;
    ctx->downcount -= 2;
    // 7F3ACCC8: lbz     r3, 98(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(98);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3ACCCC:
    ctx->pc = 0x7F3ACCCCu;
    // 7F3ACCCC: bl      0x7F3AC52C
    {
            ctx->lr = 0x7F3ACCD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC52Cu;
                return;
            }
            goto label_7F3AC52C;
    }

label_7F3ACCD0:
    ctx->pc = 0x7F3ACCD0u;
    ctx->downcount -= 3;
    // 7F3ACCD0: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACCD4:
    ctx->pc = 0x7F3ACCD4u;
    // 7F3ACCD4: rlwinm. r0, r0, 0, 12, 12
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

label_7F3ACCD8:
    ctx->pc = 0x7F3ACCD8u;
    // 7F3ACCD8: bc    12, 2, 0x7F3ACCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACCEC;
        }
    }

label_7F3ACCDC:
    ctx->pc = 0x7F3ACCDCu;
    ctx->downcount -= 3;
    // 7F3ACCDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACCE0:
    ctx->pc = 0x7F3ACCE0u;
    // 7F3ACCE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ACCE4:
    ctx->pc = 0x7F3ACCE4u;
    // 7F3ACCE4: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ACCE8u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ACCE8:
    ctx->pc = 0x7F3ACCE8u;
    ctx->downcount -= 1;
    // 7F3ACCE8: b       0x7F3ACCF8
    {
            goto label_7F3ACCF8;
    }

label_7F3ACCEC:
    ctx->pc = 0x7F3ACCECu;
    ctx->downcount -= 3;
    // 7F3ACCEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ACCF0:
    ctx->pc = 0x7F3ACCF0u;
    // 7F3ACCF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ACCF4:
    ctx->pc = 0x7F3ACCF4u;
    // 7F3ACCF4: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ACCF8u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ACCF8:
    ctx->pc = 0x7F3ACCF8u;
    ctx->downcount -= 3;
    // 7F3ACCF8: lwz     r0, 684(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACCFC:
    ctx->pc = 0x7F3ACCFCu;
    // 7F3ACCFC: cmplwi  r0, 0x0000
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

label_7F3ACD00:
    ctx->pc = 0x7F3ACD00u;
    // 7F3ACD00: bc    12, 2, 0x7F3ACD6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACD6C;
        }
    }

label_7F3ACD04:
    ctx->pc = 0x7F3ACD04u;
    ctx->downcount -= 3;
    // 7F3ACD04: lwz     r0, 900(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACD08:
    ctx->pc = 0x7F3ACD08u;
    // 7F3ACD08: rlwinm. r0, r0, 0, 30, 30
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

label_7F3ACD0C:
    ctx->pc = 0x7F3ACD0Cu;
    // 7F3ACD0C: bc    12, 2, 0x7F3ACD40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACD40;
        }
    }

label_7F3ACD10:
    ctx->pc = 0x7F3ACD10u;
    ctx->downcount -= 8;
    // 7F3ACD10: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACD14:
    ctx->pc = 0x7F3ACD14u;
    // 7F3ACD14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACD18:
    ctx->pc = 0x7F3ACD18u;
    // 7F3ACD18: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACD1C:
    ctx->pc = 0x7F3ACD1Cu;
    // 7F3ACD1C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3ACD20:
    ctx->pc = 0x7F3ACD20u;
    // 7F3ACD20: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACD24:
    ctx->pc = 0x7F3ACD24u;
    // 7F3ACD24: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3ACD28:
    ctx->pc = 0x7F3ACD28u;
    // 7F3ACD28: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ACD2C:
    ctx->pc = 0x7F3ACD2Cu;
    // 7F3ACD2C: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3ACD30u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3ACD30:
    ctx->pc = 0x7F3ACD30u;
    ctx->downcount -= 4;
    // 7F3ACD30: lha     r0, 332(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ACD34:
    ctx->pc = 0x7F3ACD34u;
    // 7F3ACD34: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3ACD38:
    ctx->pc = 0x7F3ACD38u;
    // 7F3ACD38: sth     r0, 332(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3ACD3C:
    ctx->pc = 0x7F3ACD3Cu;
    // 7F3ACD3C: b       0x7F3ACD6C
    {
            goto label_7F3ACD6C;
    }

label_7F3ACD40:
    ctx->pc = 0x7F3ACD40u;
    ctx->downcount -= 8;
    // 7F3ACD40: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACD44:
    ctx->pc = 0x7F3ACD44u;
    // 7F3ACD44: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ACD48:
    ctx->pc = 0x7F3ACD48u;
    // 7F3ACD48: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACD4C:
    ctx->pc = 0x7F3ACD4Cu;
    // 7F3ACD4C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3ACD50:
    ctx->pc = 0x7F3ACD50u;
    // 7F3ACD50: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACD54:
    ctx->pc = 0x7F3ACD54u;
    // 7F3ACD54: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3ACD58:
    ctx->pc = 0x7F3ACD58u;
    // 7F3ACD58: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ACD5C:
    ctx->pc = 0x7F3ACD5Cu;
    // 7F3ACD5C: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3ACD60u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3ACD60:
    ctx->pc = 0x7F3ACD60u;
    ctx->downcount -= 3;
    // 7F3ACD60: lha     r0, 332(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ACD64:
    ctx->pc = 0x7F3ACD64u;
    // 7F3ACD64: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3ACD68:
    ctx->pc = 0x7F3ACD68u;
    // 7F3ACD68: sth     r0, 332(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3ACD6C:
    ctx->pc = 0x7F3ACD6Cu;
    ctx->downcount -= 2;
    // 7F3ACD6C: lwz     r3, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACD70:
    ctx->pc = 0x7F3ACD70u;
    // 7F3ACD70: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3ACD74u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3ACD74:
    ctx->pc = 0x7F3ACD74u;
    ctx->downcount -= 3;
    // 7F3ACD74: lwz     r0, 940(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACD78:
    ctx->pc = 0x7F3ACD78u;
    // 7F3ACD78: cmpwi   r0, 1
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

label_7F3ACD7C:
    ctx->pc = 0x7F3ACD7Cu;
    // 7F3ACD7C: bc    4, 2, 0x7F3ACDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACDA0;
        }
    }

label_7F3ACD80:
    ctx->pc = 0x7F3ACD80u;
    ctx->downcount -= 2;
    // 7F3ACD80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ACD84:
    ctx->pc = 0x7F3ACD84u;
    // 7F3ACD84: bl      0x800455BC
    {
            ctx->lr = 0x7F3ACD88u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3ACD88:
    ctx->pc = 0x7F3ACD88u;
    ctx->downcount -= 2;
    // 7F3ACD88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACD8C:
    ctx->pc = 0x7F3ACD8Cu;
    // 7F3ACD8C: bl      0x800455E0
    {
            ctx->lr = 0x7F3ACD90u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ACD90:
    ctx->pc = 0x7F3ACD90u;
    ctx->downcount -= 2;
    // 7F3ACD90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ACD94:
    ctx->pc = 0x7F3ACD94u;
    // 7F3ACD94: bl      0x800455E0
    {
            ctx->lr = 0x7F3ACD98u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ACD98:
    ctx->pc = 0x7F3ACD98u;
    ctx->downcount -= 2;
    // 7F3ACD98: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3ACD9C:
    ctx->pc = 0x7F3ACD9Cu;
    // 7F3ACD9C: bl      0x800455E0
    {
            ctx->lr = 0x7F3ACDA0u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ACDA0:
    ctx->pc = 0x7F3ACDA0u;
    ctx->downcount -= 5;
    // 7F3ACDA0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3ACDA4:
    ctx->pc = 0x7F3ACDA4u;
    // 7F3ACDA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ACDA8:
    ctx->pc = 0x7F3ACDA8u;
    // 7F3ACDA8: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACDAC:
    ctx->pc = 0x7F3ACDACu;
    // 7F3ACDAC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3ACDB0:
    ctx->pc = 0x7F3ACDB0u;
    // 7F3ACDB0: bc    12, 2, 0x7F3ACDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACDC0;
        }
    }

label_7F3ACDB4:
    ctx->pc = 0x7F3ACDB4u;
    ctx->downcount -= 3;
    // 7F3ACDB4: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACDB8:
    ctx->pc = 0x7F3ACDB8u;
    // 7F3ACDB8: rlwinm. r0, r0, 0, 23, 23
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

label_7F3ACDBC:
    ctx->pc = 0x7F3ACDBCu;
    // 7F3ACDBC: bc    4, 2, 0x7F3ACDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACDDC;
        }
    }

label_7F3ACDC0:
    ctx->pc = 0x7F3ACDC0u;
    ctx->downcount -= 4;
    // 7F3ACDC0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3ACDC4:
    ctx->pc = 0x7F3ACDC4u;
    // 7F3ACDC4: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACDC8:
    ctx->pc = 0x7F3ACDC8u;
    // 7F3ACDC8: rlwinm. r0, r0, 0, 31, 31
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

label_7F3ACDCC:
    ctx->pc = 0x7F3ACDCCu;
    // 7F3ACDCC: bc    4, 2, 0x7F3ACDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACDDC;
        }
    }

label_7F3ACDD0:
    ctx->pc = 0x7F3ACDD0u;
    ctx->downcount -= 3;
    // 7F3ACDD0: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACDD4:
    ctx->pc = 0x7F3ACDD4u;
    // 7F3ACDD4: rlwinm. r0, r0, 0, 8, 8
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

label_7F3ACDD8:
    ctx->pc = 0x7F3ACDD8u;
    // 7F3ACDD8: bc    12, 2, 0x7F3ACDE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACDE0;
        }
    }

label_7F3ACDDC:
    ctx->pc = 0x7F3ACDDCu;
    ctx->downcount -= 1;
    // 7F3ACDDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACDE0:
    ctx->pc = 0x7F3ACDE0u;
    ctx->downcount -= 2;
    // 7F3ACDE0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACDE4:
    ctx->pc = 0x7F3ACDE4u;
    // 7F3ACDE4: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3ACDE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3ACDE8:
    ctx->pc = 0x7F3ACDE8u;
    ctx->downcount -= 3;
    // 7F3ACDE8: lwz     r4, 940(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(940);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACDEC:
    ctx->pc = 0x7F3ACDECu;
    // 7F3ACDEC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACDF0:
    ctx->pc = 0x7F3ACDF0u;
    // 7F3ACDF0: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3ACDF4u;
            ctx->pc = 0x7F3ABF74u;
            return;
    }

label_7F3ACDF4:
    ctx->pc = 0x7F3ACDF4u;
    ctx->downcount -= 4;
    // 7F3ACDF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACDF8:
    ctx->pc = 0x7F3ACDF8u;
    // 7F3ACDF8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3ACDFC:
    ctx->pc = 0x7F3ACDFCu;
    // 7F3ACDFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3ACE00:
    ctx->pc = 0x7F3ACE00u;
    // 7F3ACE00: bl      0x800462E4
    {
            ctx->lr = 0x7F3ACE04u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3ACE04:
    ctx->pc = 0x7F3ACE04u;
    ctx->downcount -= 9;
    // 7F3ACE04: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ACE08:
    ctx->pc = 0x7F3ACE08u;
    // 7F3ACE08: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ACE0C:
    ctx->pc = 0x7F3ACE0Cu;
    // 7F3ACE0C: lwz     r5, 15488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACE10:
    ctx->pc = 0x7F3ACE10u;
    // 7F3ACE10: addi    r3, r3, 32392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32392);

label_7F3ACE14:
    ctx->pc = 0x7F3ACE14u;
    // 7F3ACE14: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3ACE18:
    ctx->pc = 0x7F3ACE18u;
    // 7F3ACE18: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3ACE1C:
    ctx->pc = 0x7F3ACE1Cu;
    // 7F3ACE1C: cmpwi   r5, 0
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

label_7F3ACE20:
    ctx->pc = 0x7F3ACE20u;
    // 7F3ACE20: bc    4, 1, 0x7F3ACECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACECC;
        }
    }

label_7F3ACE24:
    ctx->pc = 0x7F3ACE24u;
    ctx->downcount -= 5;
    // 7F3ACE24: lwz     r4, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACE28:
    ctx->pc = 0x7F3ACE28u;
    // 7F3ACE28: lwzx    r0, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACE2C:
    ctx->pc = 0x7F3ACE2Cu;
    // 7F3ACE2C: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACE30:
    // 7F3ACE30: cmplw   r4, r0
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

label_7F3ACE34:
    // 7F3ACE34: bc    4, 2, 0x7F3ACEC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACEC4;
        }
    }

label_7F3ACE38:
    ctx->pc = 0x7F3ACE38u;
    ctx->downcount -= 4;
    // 7F3ACE38: lwz     r5, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACE3C:
    // 7F3ACE3C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACE40:
    // 7F3ACE40: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACE44:
    // 7F3ACE44: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3ACE48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC4B0u;
                return;
            }
            goto label_7F3AC4B0;
    }

label_7F3ACE48:
    ctx->pc = 0x7F3ACE48u;
    ctx->downcount -= 5;
    // 7F3ACE48: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACE4C:
    // 7F3ACE4C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACE50:
    // 7F3ACE50: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ACE54:
    // 7F3ACE54: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACE58:
    // 7F3ACE58: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3ACE5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC188u;
                return;
            }
            goto label_7F3AC188;
    }

label_7F3ACE5C:
    ctx->downcount -= 2;
    // 7F3ACE5C: cmpwi   r3, 0
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

label_7F3ACE60:
    // 7F3ACE60: bc    12, 2, 0x7F3ACE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACE7C;
        }
    }

label_7F3ACE64:
    ctx->pc = 0x7F3ACE64u;
    ctx->downcount -= 6;
    // 7F3ACE64: lwz     r4, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACE68:
    // 7F3ACE68: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACE6C:
    ctx->pc = 0x7F3ACE6Cu;
    // 7F3ACE6C: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACE70:
    // 7F3ACE70: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACE74:
    ctx->pc = 0x7F3ACE74u;
    // 7F3ACE74: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ACE78:
    // 7F3ACE78: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3ACE7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC438u;
                return;
            }
            goto label_7F3AC438;
    }

label_7F3ACE7C:
    ctx->pc = 0x7F3ACE7Cu;
    ctx->downcount -= 17;
    // 7F3ACE7C: lwz     r5, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACE80:
    // 7F3ACE80: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3ACE84:
    // 7F3ACE84: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3ACE88:
    // 7F3ACE88: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACE8C:
    ctx->pc = 0x7F3ACE8Cu;
    // 7F3ACE8C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3ACE90:
    // 7F3ACE90: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F3ACE94:
    // 7F3ACE94: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACE98:
    // 7F3ACE98: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ACE9C:
    ctx->pc = 0x7F3ACE9Cu;
    // 7F3ACE9C: lwz     r10, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3ACEA0:
    // 7F3ACEA0: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3ACEA4:
    // 7F3ACEA4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3ACEA8:
    // 7F3ACEA8: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3ACEAC:
    ctx->pc = 0x7F3ACEACu;
    // 7F3ACEAC: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3ACEB0:
    // 7F3ACEB0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3ACEB4:
    ctx->pc = 0x7F3ACEB4u;
    // 7F3ACEB4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACEB8:
    ctx->pc = 0x7F3ACEB8u;
    // 7F3ACEB8: lwzx    r3, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACEBC:
    // 7F3ACEBC: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3ACEC0u;
            ctx->pc = 0x7F3A96A4u;
            return;
    }

label_7F3ACEC0:
    ctx->downcount -= 1;
    // 7F3ACEC0: b       0x7F3ACFE4
    {
            goto label_7F3ACFE4;
    }

label_7F3ACEC4:
    ctx->downcount -= 2;
    // 7F3ACEC4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F3ACEC8:
    // 7F3ACEC8: bc    16, 0, 0x7F3ACE24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ACE24u;
                return;
            }
            goto label_7F3ACE24;
        }
    }

label_7F3ACECC:
    ctx->pc = 0x7F3ACECCu;
    ctx->downcount -= 2;
    // 7F3ACECC: cmpwi   r5, 128
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

label_7F3ACED0:
    ctx->pc = 0x7F3ACED0u;
    // 7F3ACED0: bc    12, 2, 0x7F3ACFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACFD4;
        }
    }

label_7F3ACED4:
    ctx->pc = 0x7F3ACED4u;
    ctx->downcount -= 8;
    // 7F3ACED4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACED8:
    ctx->pc = 0x7F3ACED8u;
    // 7F3ACED8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACEDC:
    ctx->pc = 0x7F3ACEDCu;
    // 7F3ACEDC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3ACEE0:
    ctx->pc = 0x7F3ACEE0u;
    // 7F3ACEE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3ACEE4:
    ctx->pc = 0x7F3ACEE4u;
    // 7F3ACEE4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3ACEE8:
    ctx->pc = 0x7F3ACEE8u;
    // 7F3ACEE8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3ACEEC:
    ctx->pc = 0x7F3ACEECu;
    // 7F3ACEEC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3ACEF0:
    ctx->pc = 0x7F3ACEF0u;
    // 7F3ACEF0: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3ACEF4u;
            ctx->pc = 0x7F3A8E8Cu;
            return;
    }

label_7F3ACEF4:
    ctx->pc = 0x7F3ACEF4u;
    ctx->downcount -= 16;
    // 7F3ACEF4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ACEF8:
    ctx->pc = 0x7F3ACEF8u;
    // 7F3ACEF8: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3ACEFC:
    ctx->pc = 0x7F3ACEFCu;
    // 7F3ACEFC: addi    r6, r4, 15488
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15488);

label_7F3ACF00:
    ctx->pc = 0x7F3ACF00u;
    // 7F3ACF00: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ACF04:
    ctx->pc = 0x7F3ACF04u;
    // 7F3ACF04: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACF08:
    ctx->pc = 0x7F3ACF08u;
    // 7F3ACF08: addi    r7, r5, -32632
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-32632);

label_7F3ACF0C:
    ctx->pc = 0x7F3ACF0Cu;
    // 7F3ACF0C: addi    r6, r4, 32392
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(32392);

label_7F3ACF10:
    ctx->pc = 0x7F3ACF10u;
    // 7F3ACF10: lwz     r5, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACF14:
    ctx->pc = 0x7F3ACF14u;
    // 7F3ACF14: rlwinm r8, r0, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3ACF18:
    ctx->pc = 0x7F3ACF18u;
    // 7F3ACF18: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACF1C:
    ctx->pc = 0x7F3ACF1Cu;
    // 7F3ACF1C: stwx    r3, r7, r8
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ACF20:
    ctx->pc = 0x7F3ACF20u;
    // 7F3ACF20: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACF24:
    ctx->pc = 0x7F3ACF24u;
    // 7F3ACF24: lwz     r7, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ACF28:
    ctx->pc = 0x7F3ACF28u;
    // 7F3ACF28: lwz     r0, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACF2C:
    ctx->pc = 0x7F3ACF2Cu;
    // 7F3ACF2C: stwx    r0, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACF30:
    ctx->pc = 0x7F3ACF30u;
    // 7F3ACF30: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3ACF34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC4B0u;
                return;
            }
            goto label_7F3AC4B0;
    }

label_7F3ACF34:
    ctx->pc = 0x7F3ACF34u;
    ctx->downcount -= 5;
    // 7F3ACF34: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACF38:
    ctx->pc = 0x7F3ACF38u;
    // 7F3ACF38: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACF3C:
    ctx->pc = 0x7F3ACF3Cu;
    // 7F3ACF3C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ACF40:
    ctx->pc = 0x7F3ACF40u;
    // 7F3ACF40: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACF44:
    ctx->pc = 0x7F3ACF44u;
    // 7F3ACF44: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3ACF48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC188u;
                return;
            }
            goto label_7F3AC188;
    }

label_7F3ACF48:
    ctx->pc = 0x7F3ACF48u;
    ctx->downcount -= 2;
    // 7F3ACF48: cmpwi   r3, 0
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

label_7F3ACF4C:
    ctx->pc = 0x7F3ACF4Cu;
    // 7F3ACF4C: bc    12, 2, 0x7F3ACF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ACF68;
        }
    }

label_7F3ACF50:
    ctx->pc = 0x7F3ACF50u;
    ctx->downcount -= 6;
    // 7F3ACF50: lwz     r4, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ACF54:
    ctx->pc = 0x7F3ACF54u;
    // 7F3ACF54: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACF58:
    ctx->pc = 0x7F3ACF58u;
    // 7F3ACF58: lwz     r6, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ACF5C:
    ctx->pc = 0x7F3ACF5Cu;
    // 7F3ACF5C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3ACF60:
    ctx->pc = 0x7F3ACF60u;
    // 7F3ACF60: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ACF64:
    ctx->pc = 0x7F3ACF64u;
    // 7F3ACF64: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3ACF68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC438u;
                return;
            }
            goto label_7F3AC438;
    }

label_7F3ACF68:
    ctx->pc = 0x7F3ACF68u;
    ctx->downcount -= 21;
    // 7F3ACF68: lwz     r5, 3208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACF6C:
    ctx->pc = 0x7F3ACF6Cu;
    // 7F3ACF6C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ACF70:
    ctx->pc = 0x7F3ACF70u;
    // 7F3ACF70: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3ACF74:
    ctx->pc = 0x7F3ACF74u;
    // 7F3ACF74: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3ACF78:
    ctx->pc = 0x7F3ACF78u;
    // 7F3ACF78: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3ACF7C:
    ctx->pc = 0x7F3ACF7Cu;
    // 7F3ACF7C: addi    r11, r4, 15488
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(15488);

label_7F3ACF80:
    ctx->pc = 0x7F3ACF80u;
    // 7F3ACF80: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F3ACF84:
    ctx->pc = 0x7F3ACF84u;
    // 7F3ACF84: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACF88:
    ctx->pc = 0x7F3ACF88u;
    // 7F3ACF88: lwz     r8, 2704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2704);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3ACF8C:
    ctx->pc = 0x7F3ACF8Cu;
    // 7F3ACF8C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ACF90:
    ctx->pc = 0x7F3ACF90u;
    // 7F3ACF90: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ACF94:
    ctx->pc = 0x7F3ACF94u;
    // 7F3ACF94: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3ACF98:
    ctx->pc = 0x7F3ACF98u;
    // 7F3ACF98: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3ACF9C:
    ctx->pc = 0x7F3ACF9Cu;
    // 7F3ACF9C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3ACFA0:
    ctx->pc = 0x7F3ACFA0u;
    // 7F3ACFA0: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3ACFA4:
    ctx->pc = 0x7F3ACFA4u;
    // 7F3ACFA4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3ACFA8:
    ctx->pc = 0x7F3ACFA8u;
    // 7F3ACFA8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACFAC:
    ctx->pc = 0x7F3ACFACu;
    // 7F3ACFAC: lwz     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACFB0:
    ctx->pc = 0x7F3ACFB0u;
    // 7F3ACFB0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3ACFB4:
    ctx->pc = 0x7F3ACFB4u;
    // 7F3ACFB4: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACFB8:
    ctx->pc = 0x7F3ACFB8u;
    // 7F3ACFB8: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3ACFBCu;
            ctx->pc = 0x7F3A96A4u;
            return;
    }

label_7F3ACFBC:
    ctx->pc = 0x7F3ACFBCu;
    ctx->downcount -= 6;
    // 7F3ACFBC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ACFC0:
    ctx->pc = 0x7F3ACFC0u;
    // 7F3ACFC0: addi    r4, r3, 15488
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15488);

label_7F3ACFC4:
    ctx->pc = 0x7F3ACFC4u;
    // 7F3ACFC4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ACFC8:
    ctx->pc = 0x7F3ACFC8u;
    // 7F3ACFC8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3ACFCC:
    ctx->pc = 0x7F3ACFCCu;
    // 7F3ACFCC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ACFD0:
    ctx->pc = 0x7F3ACFD0u;
    // 7F3ACFD0: b       0x7F3ACFE4
    {
            goto label_7F3ACFE4;
    }

label_7F3ACFD4:
    ctx->pc = 0x7F3ACFD4u;
    ctx->downcount -= 4;
    // 7F3ACFD4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ACFD8:
    ctx->pc = 0x7F3ACFD8u;
    // 7F3ACFD8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3ACFDC:
    ctx->pc = 0x7F3ACFDCu;
    // 7F3ACFDC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3ACFE0:
    ctx->pc = 0x7F3ACFE0u;
    // 7F3ACFE0: bl      0x800462E4
    {
            ctx->lr = 0x7F3ACFE4u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3ACFE4:
    ctx->pc = 0x7F3ACFE4u;
    ctx->downcount -= 16;
    // 7F3ACFE4: lmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3ACFE8:
    ctx->pc = 0x7F3ACFE8u;
    // 7F3ACFE8: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ACFEC:
    ctx->pc = 0x7F3ACFECu;
    // 7F3ACFEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ACFF0:
    ctx->pc = 0x7F3ACFF0u;
    // 7F3ACFF0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F3ACFF4:
    ctx->pc = 0x7F3ACFF4u;
    // 7F3ACFF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3ACFF8:
    ctx->pc = 0x7F3ACFF8u;
    ctx->downcount -= 4;
    // 7F3ACFF8: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ACFFC:
    ctx->pc = 0x7F3ACFFCu;
    // 7F3ACFFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AD000:
    ctx->pc = 0x7F3AD000u;
    // 7F3AD000: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD004:
    ctx->pc = 0x7F3AD004u;
    // 7F3AD004: b       0x7F3AD020
    {
            goto label_7F3AD020;
    }

label_7F3AD008:
    ctx->pc = 0x7F3AD008u;
    ctx->downcount -= 3;
    // 7F3AD008: lwz     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD00C:
    // 7F3AD00C: cmpw    r0, r4
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

label_7F3AD010:
    // 7F3AD010: bc    4, 2, 0x7F3AD01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD01C;
        }
    }

label_7F3AD014:
    ctx->downcount -= 2;
    // 7F3AD014: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AD018:
    // 7F3AD018: b       0x7F3AD030
    {
            goto label_7F3AD030;
    }

label_7F3AD01C:
    ctx->downcount -= 1;
    // 7F3AD01C: addi    r5, r5, 136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(136);

label_7F3AD020:
    ctx->downcount -= 2;
    // 7F3AD020: cmplwi  r5, 0x0000
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

label_7F3AD024:
    // 7F3AD024: bc    12, 2, 0x7F3AD030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD030;
        }
    }

label_7F3AD028:
    ctx->downcount -= 2;
    // 7F3AD028: cmplw   r5, r3
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD02C:
    // 7F3AD02C: bc    4, 1, 0x7F3AD008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD008u;
                return;
            }
            goto label_7F3AD008;
        }
    }

label_7F3AD030:
    ctx->pc = 0x7F3AD030u;
    ctx->downcount -= 2;
    // 7F3AD030: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AD034:
    ctx->pc = 0x7F3AD034u;
    // 7F3AD034: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD038:
    ctx->pc = 0x7F3AD038u;
    ctx->downcount -= 20;
    // 7F3AD038: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD03C:
    ctx->pc = 0x7F3AD03Cu;
    // 7F3AD03C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD040:
    ctx->pc = 0x7F3AD040u;
    // 7F3AD040: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AD044:
    ctx->pc = 0x7F3AD044u;
    // 7F3AD044: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD048:
    ctx->pc = 0x7F3AD048u;
    // 7F3AD048: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD04C:
    ctx->pc = 0x7F3AD04Cu;
    // 7F3AD04C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD050:
    ctx->pc = 0x7F3AD050u;
    // 7F3AD050: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD054:
    ctx->pc = 0x7F3AD054u;
    // 7F3AD054: lwz     r0, 31996(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD058:
    ctx->pc = 0x7F3AD058u;
    // 7F3AD058: cmpwi   r0, -1
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

label_7F3AD05C:
    ctx->pc = 0x7F3AD05Cu;
    // 7F3AD05C: bc    4, 2, 0x7F3AD090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD090;
        }
    }

label_7F3AD060:
    ctx->pc = 0x7F3AD060u;
    ctx->downcount -= 3;
    // 7F3AD060: addi    r3, r30, 192
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(192);

label_7F3AD064:
    ctx->pc = 0x7F3AD064u;
    // 7F3AD064: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD068:
    ctx->pc = 0x7F3AD068u;
    // 7F3AD068: bl      0x80025B84
    {
            ctx->lr = 0x7F3AD06Cu;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3AD06C:
    ctx->pc = 0x7F3AD06Cu;
    ctx->downcount -= 3;
    // 7F3AD06C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD070:
    ctx->pc = 0x7F3AD070u;
    // 7F3AD070: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AD074:
    ctx->pc = 0x7F3AD074u;
    // 7F3AD074: bl      0x800468B8
    {
            ctx->lr = 0x7F3AD078u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3AD078:
    ctx->pc = 0x7F3AD078u;
    ctx->downcount -= 3;
    // 7F3AD078: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AD07C:
    ctx->pc = 0x7F3AD07Cu;
    // 7F3AD07C: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F3AD080:
    ctx->pc = 0x7F3AD080u;
    // 7F3AD080: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AD084u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AD084:
    ctx->pc = 0x7F3AD084u;
    ctx->downcount -= 3;
    // 7F3AD084: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AD088:
    ctx->pc = 0x7F3AD088u;
    // 7F3AD088: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AD08C:
    ctx->pc = 0x7F3AD08Cu;
    // 7F3AD08C: stw     r0, 31996(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD090:
    ctx->pc = 0x7F3AD090u;
    ctx->downcount -= 16;
    // 7F3AD090: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD094:
    ctx->pc = 0x7F3AD094u;
    // 7F3AD094: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD098:
    ctx->pc = 0x7F3AD098u;
    // 7F3AD098: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD09C:
    ctx->pc = 0x7F3AD09Cu;
    // 7F3AD09C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F3AD0A0:
    ctx->pc = 0x7F3AD0A0u;
    // 7F3AD0A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD0A4:
    ctx->pc = 0x7F3AD0A4u;
    ctx->downcount -= 4;
    // 7F3AD0A4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AD0A8:
    ctx->pc = 0x7F3AD0A8u;
    // 7F3AD0A8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3AD0AC:
    ctx->pc = 0x7F3AD0ACu;
    // 7F3AD0AC: stw     r0, 31996(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD0B0:
    ctx->pc = 0x7F3AD0B0u;
    // 7F3AD0B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD0B4:
    ctx->pc = 0x7F3AD0B4u;
    ctx->downcount -= 21;
    // 7F3AD0B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD0B8:
    ctx->pc = 0x7F3AD0B8u;
    // 7F3AD0B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD0BC:
    ctx->pc = 0x7F3AD0BCu;
    // 7F3AD0BC: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AD0C0:
    ctx->pc = 0x7F3AD0C0u;
    // 7F3AD0C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD0C4:
    ctx->pc = 0x7F3AD0C4u;
    // 7F3AD0C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD0C8:
    ctx->pc = 0x7F3AD0C8u;
    // 7F3AD0C8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD0CC:
    ctx->pc = 0x7F3AD0CCu;
    // 7F3AD0CC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD0D0:
    ctx->pc = 0x7F3AD0D0u;
    // 7F3AD0D0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AD0D4:
    ctx->pc = 0x7F3AD0D4u;
    // 7F3AD0D4: lwz     r0, 31992(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(31992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD0D8:
    ctx->pc = 0x7F3AD0D8u;
    // 7F3AD0D8: cmpwi   r0, -1
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

label_7F3AD0DC:
    ctx->pc = 0x7F3AD0DCu;
    // 7F3AD0DC: bc    4, 2, 0x7F3AD28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD28C;
        }
    }

label_7F3AD0E0:
    ctx->pc = 0x7F3AD0E0u;
    ctx->downcount -= 2;
    // 7F3AD0E0: lbz     r3, 98(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(98);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3AD0E4:
    ctx->pc = 0x7F3AD0E4u;
    // 7F3AD0E4: bl      0x7F3AC52C
    {
            ctx->lr = 0x7F3AD0E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC52Cu;
                return;
            }
            goto label_7F3AC52C;
    }

label_7F3AD0E8:
    ctx->pc = 0x7F3AD0E8u;
    ctx->downcount -= 3;
    // 7F3AD0E8: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD0EC:
    ctx->pc = 0x7F3AD0ECu;
    // 7F3AD0EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AD0F0:
    ctx->pc = 0x7F3AD0F0u;
    // 7F3AD0F0: bc    12, 2, 0x7F3AD110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD110;
        }
    }

label_7F3AD0F4:
    ctx->pc = 0x7F3AD0F4u;
    ctx->downcount -= 1;
    // 7F3AD0F4: bc    4, 0, 0x7F3AD11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD11C;
        }
    }

label_7F3AD0F8:
    ctx->pc = 0x7F3AD0F8u;
    ctx->downcount -= 2;
    // 7F3AD0F8: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD0FC:
    ctx->pc = 0x7F3AD0FCu;
    // 7F3AD0FC: bc    4, 0, 0x7F3AD104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD104;
        }
    }

label_7F3AD100:
    ctx->pc = 0x7F3AD100u;
    ctx->downcount -= 1;
    // 7F3AD100: b       0x7F3AD11C
    {
            goto label_7F3AD11C;
    }

label_7F3AD104:
    ctx->pc = 0x7F3AD104u;
    ctx->downcount -= 3;
    // 7F3AD104: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AD108:
    ctx->pc = 0x7F3AD108u;
    // 7F3AD108: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AD10C:
    ctx->pc = 0x7F3AD10Cu;
    // 7F3AD10C: b       0x7F3AD13C
    {
            goto label_7F3AD13C;
    }

label_7F3AD110:
    ctx->pc = 0x7F3AD110u;
    ctx->downcount -= 3;
    // 7F3AD110: lwz     r10, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AD114:
    ctx->pc = 0x7F3AD114u;
    // 7F3AD114: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD118:
    ctx->pc = 0x7F3AD118u;
    // 7F3AD118: b       0x7F3AD13C
    {
            goto label_7F3AD13C;
    }

label_7F3AD11C:
    ctx->pc = 0x7F3AD11Cu;
    ctx->downcount -= 3;
    // 7F3AD11C: lwz     r0, 900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD120:
    ctx->pc = 0x7F3AD120u;
    // 7F3AD120: rlwinm. r0, r0, 0, 30, 30
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

label_7F3AD124:
    ctx->pc = 0x7F3AD124u;
    // 7F3AD124: bc    12, 2, 0x7F3AD134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD134;
        }
    }

label_7F3AD128:
    ctx->pc = 0x7F3AD128u;
    ctx->downcount -= 3;
    // 7F3AD128: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD12C:
    ctx->pc = 0x7F3AD12Cu;
    // 7F3AD12C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD130:
    ctx->pc = 0x7F3AD130u;
    // 7F3AD130: b       0x7F3AD138
    {
            goto label_7F3AD138;
    }

label_7F3AD134:
    ctx->pc = 0x7F3AD134u;
    ctx->downcount -= 1;
    // 7F3AD134: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AD138:
    ctx->pc = 0x7F3AD138u;
    ctx->downcount -= 1;
    // 7F3AD138: lwz     r10, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AD13C:
    ctx->pc = 0x7F3AD13Cu;
    ctx->downcount -= 6;
    // 7F3AD13C: lwz     r4, 920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD140:
    ctx->pc = 0x7F3AD140u;
    // 7F3AD140: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AD144:
    ctx->pc = 0x7F3AD144u;
    // 7F3AD144: lwz     r5, 924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD148:
    ctx->pc = 0x7F3AD148u;
    // 7F3AD148: lwz     r6, 928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD14C:
    ctx->pc = 0x7F3AD14Cu;
    // 7F3AD14C: lwz     r7, 932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD150:
    ctx->pc = 0x7F3AD150u;
    // 7F3AD150: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AD154u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AD154:
    ctx->pc = 0x7F3AD154u;
    ctx->downcount -= 3;
    // 7F3AD154: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD158:
    ctx->pc = 0x7F3AD158u;
    // 7F3AD158: rlwinm. r0, r0, 0, 12, 12
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

label_7F3AD15C:
    ctx->pc = 0x7F3AD15Cu;
    // 7F3AD15C: bc    4, 2, 0x7F3AD16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD16C;
        }
    }

label_7F3AD160:
    ctx->pc = 0x7F3AD160u;
    ctx->downcount -= 3;
    // 7F3AD160: lwz     r0, 900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD164:
    ctx->pc = 0x7F3AD164u;
    // 7F3AD164: rlwinm. r0, r0, 0, 30, 30
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

label_7F3AD168:
    ctx->pc = 0x7F3AD168u;
    // 7F3AD168: bc    12, 2, 0x7F3AD178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD178;
        }
    }

label_7F3AD16C:
    ctx->pc = 0x7F3AD16Cu;
    ctx->downcount -= 3;
    // 7F3AD16C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD170:
    ctx->pc = 0x7F3AD170u;
    // 7F3AD170: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AD174:
    ctx->pc = 0x7F3AD174u;
    // 7F3AD174: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AD178u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AD178:
    ctx->pc = 0x7F3AD178u;
    ctx->downcount -= 3;
    // 7F3AD178: lwz     r0, 684(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD17C:
    ctx->pc = 0x7F3AD17Cu;
    // 7F3AD17C: cmplwi  r0, 0x0000
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

label_7F3AD180:
    ctx->pc = 0x7F3AD180u;
    // 7F3AD180: bc    12, 2, 0x7F3AD1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD1EC;
        }
    }

label_7F3AD184:
    ctx->pc = 0x7F3AD184u;
    ctx->downcount -= 3;
    // 7F3AD184: lwz     r0, 900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD188:
    ctx->pc = 0x7F3AD188u;
    // 7F3AD188: rlwinm. r0, r0, 0, 30, 30
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

label_7F3AD18C:
    ctx->pc = 0x7F3AD18Cu;
    // 7F3AD18C: bc    12, 2, 0x7F3AD1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD1C0;
        }
    }

label_7F3AD190:
    ctx->pc = 0x7F3AD190u;
    ctx->downcount -= 8;
    // 7F3AD190: lwz     r4, 920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD194:
    ctx->pc = 0x7F3AD194u;
    // 7F3AD194: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD198:
    ctx->pc = 0x7F3AD198u;
    // 7F3AD198: lwz     r5, 924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD19C:
    ctx->pc = 0x7F3AD19Cu;
    // 7F3AD19C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD1A0:
    ctx->pc = 0x7F3AD1A0u;
    // 7F3AD1A0: lwz     r6, 928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD1A4:
    ctx->pc = 0x7F3AD1A4u;
    // 7F3AD1A4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AD1A8:
    ctx->pc = 0x7F3AD1A8u;
    // 7F3AD1A8: lwz     r7, 932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD1AC:
    ctx->pc = 0x7F3AD1ACu;
    // 7F3AD1AC: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3AD1B0u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3AD1B0:
    ctx->pc = 0x7F3AD1B0u;
    ctx->downcount -= 4;
    // 7F3AD1B0: lha     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD1B4:
    ctx->pc = 0x7F3AD1B4u;
    // 7F3AD1B4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3AD1B8:
    ctx->pc = 0x7F3AD1B8u;
    // 7F3AD1B8: sth     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AD1BC:
    ctx->pc = 0x7F3AD1BCu;
    // 7F3AD1BC: b       0x7F3AD1EC
    {
            goto label_7F3AD1EC;
    }

label_7F3AD1C0:
    ctx->pc = 0x7F3AD1C0u;
    ctx->downcount -= 8;
    // 7F3AD1C0: lwz     r4, 920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD1C4:
    ctx->pc = 0x7F3AD1C4u;
    // 7F3AD1C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AD1C8:
    ctx->pc = 0x7F3AD1C8u;
    // 7F3AD1C8: lwz     r5, 924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD1CC:
    ctx->pc = 0x7F3AD1CCu;
    // 7F3AD1CC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD1D0:
    ctx->pc = 0x7F3AD1D0u;
    // 7F3AD1D0: lwz     r6, 928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD1D4:
    ctx->pc = 0x7F3AD1D4u;
    // 7F3AD1D4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AD1D8:
    ctx->pc = 0x7F3AD1D8u;
    // 7F3AD1D8: lwz     r7, 932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD1DC:
    ctx->pc = 0x7F3AD1DCu;
    // 7F3AD1DC: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3AD1E0u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3AD1E0:
    ctx->pc = 0x7F3AD1E0u;
    ctx->downcount -= 3;
    // 7F3AD1E0: lha     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD1E4:
    ctx->pc = 0x7F3AD1E4u;
    // 7F3AD1E4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3AD1E8:
    ctx->pc = 0x7F3AD1E8u;
    // 7F3AD1E8: sth     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AD1EC:
    ctx->pc = 0x7F3AD1ECu;
    ctx->downcount -= 3;
    // 7F3AD1EC: lwz     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD1F0:
    ctx->pc = 0x7F3AD1F0u;
    // 7F3AD1F0: cmpwi   r0, 1
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

label_7F3AD1F4:
    ctx->pc = 0x7F3AD1F4u;
    // 7F3AD1F4: bc    4, 2, 0x7F3AD218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD218;
        }
    }

label_7F3AD1F8:
    ctx->pc = 0x7F3AD1F8u;
    ctx->downcount -= 2;
    // 7F3AD1F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD1FC:
    ctx->pc = 0x7F3AD1FCu;
    // 7F3AD1FC: bl      0x800455BC
    {
            ctx->lr = 0x7F3AD200u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3AD200:
    ctx->pc = 0x7F3AD200u;
    ctx->downcount -= 2;
    // 7F3AD200: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD204:
    ctx->pc = 0x7F3AD204u;
    // 7F3AD204: bl      0x800455E0
    {
            ctx->lr = 0x7F3AD208u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AD208:
    ctx->pc = 0x7F3AD208u;
    ctx->downcount -= 2;
    // 7F3AD208: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AD20C:
    ctx->pc = 0x7F3AD20Cu;
    // 7F3AD20C: bl      0x800455E0
    {
            ctx->lr = 0x7F3AD210u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AD210:
    ctx->pc = 0x7F3AD210u;
    ctx->downcount -= 2;
    // 7F3AD210: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3AD214:
    ctx->pc = 0x7F3AD214u;
    // 7F3AD214: bl      0x800455E0
    {
            ctx->lr = 0x7F3AD218u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3AD218:
    ctx->pc = 0x7F3AD218u;
    ctx->downcount -= 2;
    // 7F3AD218: lwz     r3, 308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD21C:
    ctx->pc = 0x7F3AD21Cu;
    // 7F3AD21C: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3AD220u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3AD220:
    ctx->pc = 0x7F3AD220u;
    ctx->downcount -= 5;
    // 7F3AD220: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AD224:
    ctx->pc = 0x7F3AD224u;
    // 7F3AD224: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD228:
    ctx->pc = 0x7F3AD228u;
    // 7F3AD228: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD22C:
    ctx->pc = 0x7F3AD22Cu;
    // 7F3AD22C: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AD230:
    ctx->pc = 0x7F3AD230u;
    // 7F3AD230: bc    12, 2, 0x7F3AD240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD240;
        }
    }

label_7F3AD234:
    ctx->pc = 0x7F3AD234u;
    ctx->downcount -= 3;
    // 7F3AD234: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD238:
    ctx->pc = 0x7F3AD238u;
    // 7F3AD238: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AD23C:
    ctx->pc = 0x7F3AD23Cu;
    // 7F3AD23C: bc    4, 2, 0x7F3AD25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD25C;
        }
    }

label_7F3AD240:
    ctx->pc = 0x7F3AD240u;
    ctx->downcount -= 4;
    // 7F3AD240: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AD244:
    ctx->pc = 0x7F3AD244u;
    // 7F3AD244: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD248:
    ctx->pc = 0x7F3AD248u;
    // 7F3AD248: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AD24C:
    ctx->pc = 0x7F3AD24Cu;
    // 7F3AD24C: bc    4, 2, 0x7F3AD25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD25C;
        }
    }

label_7F3AD250:
    ctx->pc = 0x7F3AD250u;
    ctx->downcount -= 3;
    // 7F3AD250: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD254:
    ctx->pc = 0x7F3AD254u;
    // 7F3AD254: rlwinm. r0, r0, 0, 8, 8
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

label_7F3AD258:
    ctx->pc = 0x7F3AD258u;
    // 7F3AD258: bc    12, 2, 0x7F3AD260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD260;
        }
    }

label_7F3AD25C:
    ctx->pc = 0x7F3AD25Cu;
    ctx->downcount -= 1;
    // 7F3AD25C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD260:
    ctx->pc = 0x7F3AD260u;
    ctx->downcount -= 2;
    // 7F3AD260: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD264:
    ctx->pc = 0x7F3AD264u;
    // 7F3AD264: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3AD268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3AD268:
    ctx->pc = 0x7F3AD268u;
    ctx->downcount -= 3;
    // 7F3AD268: lwz     r4, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD26C:
    ctx->pc = 0x7F3AD26Cu;
    // 7F3AD26C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD270:
    ctx->pc = 0x7F3AD270u;
    // 7F3AD270: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3AD274u;
            ctx->pc = 0x7F3ABF74u;
            return;
    }

label_7F3AD274:
    ctx->pc = 0x7F3AD274u;
    ctx->downcount -= 6;
    // 7F3AD274: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AD278:
    ctx->pc = 0x7F3AD278u;
    // 7F3AD278: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AD27C:
    ctx->pc = 0x7F3AD27Cu;
    // 7F3AD27C: stw     r0, 31992(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD280:
    ctx->pc = 0x7F3AD280u;
    // 7F3AD280: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AD284:
    ctx->pc = 0x7F3AD284u;
    // 7F3AD284: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD288:
    ctx->pc = 0x7F3AD288u;
    // 7F3AD288: stw     r0, 31988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD28C:
    ctx->pc = 0x7F3AD28Cu;
    ctx->downcount -= 16;
    // 7F3AD28C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD290:
    ctx->pc = 0x7F3AD290u;
    // 7F3AD290: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD294:
    ctx->pc = 0x7F3AD294u;
    // 7F3AD294: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD298:
    ctx->pc = 0x7F3AD298u;
    // 7F3AD298: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AD29C:
    ctx->pc = 0x7F3AD29Cu;
    // 7F3AD29C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD2A0:
    ctx->pc = 0x7F3AD2A0u;
    ctx->downcount -= 35;
    // 7F3AD2A0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD2A4:
    ctx->pc = 0x7F3AD2A4u;
    // 7F3AD2A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD2A8:
    ctx->pc = 0x7F3AD2A8u;
    // 7F3AD2A8: lis     r11, 32587
    ctx->gpr[11] = ((u32)(s32)(32587) << 16);

label_7F3AD2AC:
    ctx->pc = 0x7F3AD2ACu;
    // 7F3AD2AC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD2B0:
    ctx->pc = 0x7F3AD2B0u;
    // 7F3AD2B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AD2B4:
    ctx->pc = 0x7F3AD2B4u;
    // 7F3AD2B4: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD2B8:
    ctx->pc = 0x7F3AD2B8u;
    // 7F3AD2B8: addi    r24, r11, -1740
    ctx->gpr[24] = ctx->gpr[11] + (u32)(s32)(-1740);

label_7F3AD2BC:
    ctx->pc = 0x7F3AD2BCu;
    // 7F3AD2BC: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD2C0:
    ctx->pc = 0x7F3AD2C0u;
    // 7F3AD2C0: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AD2C4:
    ctx->pc = 0x7F3AD2C4u;
    // 7F3AD2C4: or   r30, r9, r9
    {
        ctx->gpr[30] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F3AD2C8:
    ctx->pc = 0x7F3AD2C8u;
    // 7F3AD2C8: or   r31, r10, r10
    {
        ctx->gpr[31] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F3AD2CC:
    ctx->pc = 0x7F3AD2CCu;
    // 7F3AD2CC: or   r23, r6, r6
    {
        ctx->gpr[23] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AD2D0:
    ctx->pc = 0x7F3AD2D0u;
    // 7F3AD2D0: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD2D4:
    ctx->pc = 0x7F3AD2D4u;
    // 7F3AD2D4: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AD2D8:
    ctx->pc = 0x7F3AD2D8u;
    // 7F3AD2D8: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AD2DC:
    ctx->pc = 0x7F3AD2DCu;
    // 7F3AD2DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AD2E0:
    ctx->pc = 0x7F3AD2E0u;
    // 7F3AD2E0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AD2E4:
    ctx->pc = 0x7F3AD2E4u;
    // 7F3AD2E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AD2E8:
    ctx->pc = 0x7F3AD2E8u;
    // 7F3AD2E8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AD2EC:
    ctx->pc = 0x7F3AD2ECu;
    // 7F3AD2EC: stw     r0, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD2F0:
    ctx->pc = 0x7F3AD2F0u;
    // 7F3AD2F0: lwz     r4, 920(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD2F4:
    ctx->pc = 0x7F3AD2F4u;
    // 7F3AD2F4: lwz     r5, 924(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD2F8:
    ctx->pc = 0x7F3AD2F8u;
    // 7F3AD2F8: lwz     r6, 928(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD2FC:
    ctx->pc = 0x7F3AD2FCu;
    // 7F3AD2FC: lwz     r7, 932(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD300:
    ctx->pc = 0x7F3AD300u;
    // 7F3AD300: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AD304u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AD304:
    ctx->pc = 0x7F3AD304u;
    ctx->downcount -= 2;
    // 7F3AD304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD308:
    ctx->pc = 0x7F3AD308u;
    // 7F3AD308: bl      0x8004628C
    {
            ctx->lr = 0x7F3AD30Cu;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3AD30C:
    ctx->pc = 0x7F3AD30Cu;
    ctx->downcount -= 2;
    // 7F3AD30C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD310:
    ctx->pc = 0x7F3AD310u;
    // 7F3AD310: bl      0x800462B8
    {
            ctx->lr = 0x7F3AD314u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3AD314:
    ctx->pc = 0x7F3AD314u;
    ctx->downcount -= 2;
    // 7F3AD314: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD318:
    ctx->pc = 0x7F3AD318u;
    // 7F3AD318: bl      0x80046318
    {
            ctx->lr = 0x7F3AD31Cu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AD31C:
    ctx->pc = 0x7F3AD31Cu;
    ctx->downcount -= 6;
    // 7F3AD31C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3AD320:
    ctx->pc = 0x7F3AD320u;
    // 7F3AD320: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F3AD324:
    ctx->pc = 0x7F3AD324u;
    // 7F3AD324: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AD328:
    ctx->pc = 0x7F3AD328u;
    // 7F3AD328: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3AD32C:
    ctx->pc = 0x7F3AD32Cu;
    // 7F3AD32C: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3AD330:
    ctx->pc = 0x7F3AD330u;
    // 7F3AD330: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AD334u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AD334:
    ctx->pc = 0x7F3AD334u;
    ctx->downcount -= 14;
    // 7F3AD334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AD338:
    ctx->pc = 0x7F3AD338u;
    // 7F3AD338: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3AD33C:
    ctx->pc = 0x7F3AD33Cu;
    // 7F3AD33C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD340:
    ctx->pc = 0x7F3AD340u;
    // 7F3AD340: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD344:
    ctx->pc = 0x7F3AD344u;
    // 7F3AD344: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD348:
    ctx->pc = 0x7F3AD348u;
    // 7F3AD348: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD34C:
    ctx->pc = 0x7F3AD34Cu;
    // 7F3AD34C: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AD350:
    ctx->pc = 0x7F3AD350u;
    // 7F3AD350: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD354:
    ctx->pc = 0x7F3AD354u;
    // 7F3AD354: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AD358:
    ctx->pc = 0x7F3AD358u;
    // 7F3AD358: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AD35C:
    ctx->pc = 0x7F3AD35Cu;
    // 7F3AD35C: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3AD360:
    ctx->pc = 0x7F3AD360u;
    // 7F3AD360: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F3AD364:
    ctx->pc = 0x7F3AD364u;
    // 7F3AD364: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AD368:
    ctx->pc = 0x7F3AD368u;
    // 7F3AD368: bl      0x7F3AC6F4
    {
            ctx->lr = 0x7F3AD36Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC6F4u;
                return;
            }
            goto label_7F3AC6F4;
    }

label_7F3AD36C:
    ctx->pc = 0x7F3AD36Cu;
    ctx->downcount -= 11;
    // 7F3AD36C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AD370:
    ctx->pc = 0x7F3AD370u;
    // 7F3AD370: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3AD374:
    ctx->pc = 0x7F3AD374u;
    // 7F3AD374: stw     r0, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD378:
    ctx->pc = 0x7F3AD378u;
    // 7F3AD378: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD37C:
    ctx->pc = 0x7F3AD37Cu;
    // 7F3AD37C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AD380:
    ctx->pc = 0x7F3AD380u;
    // 7F3AD380: lwz     r4, 920(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD384:
    ctx->pc = 0x7F3AD384u;
    // 7F3AD384: lwz     r5, 924(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD388:
    ctx->pc = 0x7F3AD388u;
    // 7F3AD388: lwz     r6, 928(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD38C:
    ctx->pc = 0x7F3AD38Cu;
    // 7F3AD38C: lwz     r7, 932(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD390:
    ctx->pc = 0x7F3AD390u;
    // 7F3AD390: lwz     r10, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AD394:
    ctx->pc = 0x7F3AD394u;
    // 7F3AD394: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AD398u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AD398:
    ctx->pc = 0x7F3AD398u;
    ctx->downcount -= 5;
    // 7F3AD398: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AD39C:
    ctx->pc = 0x7F3AD39Cu;
    // 7F3AD39C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD3A0:
    ctx->pc = 0x7F3AD3A0u;
    // 7F3AD3A0: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD3A4:
    ctx->pc = 0x7F3AD3A4u;
    // 7F3AD3A4: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AD3A8:
    ctx->pc = 0x7F3AD3A8u;
    // 7F3AD3A8: bc    12, 2, 0x7F3AD3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD3B8;
        }
    }

label_7F3AD3AC:
    ctx->pc = 0x7F3AD3ACu;
    ctx->downcount -= 3;
    // 7F3AD3AC: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD3B0:
    ctx->pc = 0x7F3AD3B0u;
    // 7F3AD3B0: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AD3B4:
    ctx->pc = 0x7F3AD3B4u;
    // 7F3AD3B4: bc    4, 2, 0x7F3AD3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD3D4;
        }
    }

label_7F3AD3B8:
    ctx->pc = 0x7F3AD3B8u;
    ctx->downcount -= 4;
    // 7F3AD3B8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AD3BC:
    ctx->pc = 0x7F3AD3BCu;
    // 7F3AD3BC: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD3C0:
    ctx->pc = 0x7F3AD3C0u;
    // 7F3AD3C0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AD3C4:
    ctx->pc = 0x7F3AD3C4u;
    // 7F3AD3C4: bc    4, 2, 0x7F3AD3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD3D4;
        }
    }

label_7F3AD3C8:
    ctx->pc = 0x7F3AD3C8u;
    ctx->downcount -= 3;
    // 7F3AD3C8: lwz     r0, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD3CC:
    ctx->pc = 0x7F3AD3CCu;
    // 7F3AD3CC: rlwinm. r0, r0, 0, 8, 8
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

label_7F3AD3D0:
    ctx->pc = 0x7F3AD3D0u;
    // 7F3AD3D0: bc    12, 2, 0x7F3AD3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD3D8;
        }
    }

label_7F3AD3D4:
    ctx->pc = 0x7F3AD3D4u;
    ctx->downcount -= 1;
    // 7F3AD3D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD3D8:
    ctx->pc = 0x7F3AD3D8u;
    ctx->downcount -= 2;
    // 7F3AD3D8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD3DC:
    ctx->pc = 0x7F3AD3DCu;
    // 7F3AD3DC: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3AD3E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3AD3E0:
    ctx->pc = 0x7F3AD3E0u;
    ctx->downcount -= 4;
    // 7F3AD3E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD3E4:
    ctx->pc = 0x7F3AD3E4u;
    // 7F3AD3E4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AD3E8:
    ctx->pc = 0x7F3AD3E8u;
    // 7F3AD3E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AD3EC:
    ctx->pc = 0x7F3AD3ECu;
    // 7F3AD3EC: bl      0x800462E4
    {
            ctx->lr = 0x7F3AD3F0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AD3F0:
    ctx->pc = 0x7F3AD3F0u;
    ctx->downcount -= 14;
    // 7F3AD3F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AD3F4:
    ctx->pc = 0x7F3AD3F4u;
    // 7F3AD3F4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3AD3F8:
    ctx->pc = 0x7F3AD3F8u;
    // 7F3AD3F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD3FC:
    ctx->pc = 0x7F3AD3FCu;
    // 7F3AD3FC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD400:
    ctx->pc = 0x7F3AD400u;
    // 7F3AD400: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD404:
    ctx->pc = 0x7F3AD404u;
    // 7F3AD404: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD408:
    ctx->pc = 0x7F3AD408u;
    // 7F3AD408: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AD40C:
    ctx->pc = 0x7F3AD40Cu;
    // 7F3AD40C: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD410:
    ctx->pc = 0x7F3AD410u;
    // 7F3AD410: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AD414:
    ctx->pc = 0x7F3AD414u;
    // 7F3AD414: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AD418:
    ctx->pc = 0x7F3AD418u;
    // 7F3AD418: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3AD41C:
    ctx->pc = 0x7F3AD41Cu;
    // 7F3AD41C: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F3AD420:
    ctx->pc = 0x7F3AD420u;
    // 7F3AD420: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AD424:
    ctx->pc = 0x7F3AD424u;
    // 7F3AD424: bl      0x7F3AC6F4
    {
            ctx->lr = 0x7F3AD428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC6F4u;
                return;
            }
            goto label_7F3AC6F4;
    }

label_7F3AD428:
    ctx->pc = 0x7F3AD428u;
    ctx->downcount -= 4;
    // 7F3AD428: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD42C:
    ctx->pc = 0x7F3AD42Cu;
    // 7F3AD42C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AD430:
    ctx->pc = 0x7F3AD430u;
    // 7F3AD430: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AD434:
    ctx->pc = 0x7F3AD434u;
    // 7F3AD434: bl      0x800462E4
    {
            ctx->lr = 0x7F3AD438u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AD438:
    ctx->pc = 0x7F3AD438u;
    ctx->downcount -= 2;
    // 7F3AD438: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD43C:
    ctx->pc = 0x7F3AD43Cu;
    // 7F3AD43C: bl      0x8004628C
    {
            ctx->lr = 0x7F3AD440u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3AD440:
    ctx->pc = 0x7F3AD440u;
    ctx->downcount -= 16;
    // 7F3AD440: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD444:
    ctx->pc = 0x7F3AD444u;
    // 7F3AD444: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD448:
    ctx->pc = 0x7F3AD448u;
    // 7F3AD448: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD44C:
    ctx->pc = 0x7F3AD44Cu;
    // 7F3AD44C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3AD450:
    ctx->pc = 0x7F3AD450u;
    // 7F3AD450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD454:
    ctx->pc = 0x7F3AD454u;
    ctx->downcount -= 6;
    // 7F3AD454: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AD458:
    ctx->pc = 0x7F3AD458u;
    // 7F3AD458: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3AD45C:
    ctx->pc = 0x7F3AD45Cu;
    // 7F3AD45C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AD460:
    ctx->pc = 0x7F3AD460u;
    // 7F3AD460: stw     r0, 31992(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD464:
    ctx->pc = 0x7F3AD464u;
    // 7F3AD464: stw     r0, 31988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD468:
    ctx->pc = 0x7F3AD468u;
    // 7F3AD468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD46C:
    ctx->pc = 0x7F3AD46Cu;
    ctx->downcount -= 27;
    // 7F3AD46C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD470:
    ctx->pc = 0x7F3AD470u;
    // 7F3AD470: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD474:
    ctx->pc = 0x7F3AD474u;
    // 7F3AD474: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F3AD478:
    ctx->pc = 0x7F3AD478u;
    // 7F3AD478: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F3AD47C:
    ctx->pc = 0x7F3AD47Cu;
    // 7F3AD47C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD480:
    ctx->pc = 0x7F3AD480u;
    // 7F3AD480: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD484:
    ctx->pc = 0x7F3AD484u;
    // 7F3AD484: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD488:
    ctx->pc = 0x7F3AD488u;
    // 7F3AD488: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD48C:
    ctx->pc = 0x7F3AD48Cu;
    // 7F3AD48C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AD490:
    ctx->pc = 0x7F3AD490u;
    // 7F3AD490: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AD494:
    ctx->pc = 0x7F3AD494u;
    // 7F3AD494: addi    r3, r7, 32392
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(32392);

label_7F3AD498:
    ctx->pc = 0x7F3AD498u;
    // 7F3AD498: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AD49C:
    ctx->pc = 0x7F3AD49Cu;
    // 7F3AD49C: lwz     r0, 15488(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(15488);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD4A0:
    ctx->pc = 0x7F3AD4A0u;
    // 7F3AD4A0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AD4A4:
    ctx->pc = 0x7F3AD4A4u;
    // 7F3AD4A4: cmpwi   r0, 0
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

label_7F3AD4A8:
    ctx->pc = 0x7F3AD4A8u;
    // 7F3AD4A8: bc    4, 1, 0x7F3AD51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD51C;
        }
    }

label_7F3AD4AC:
    ctx->pc = 0x7F3AD4ACu;
    ctx->downcount -= 5;
    // 7F3AD4AC: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD4B0:
    ctx->pc = 0x7F3AD4B0u;
    // 7F3AD4B0: lwzx    r0, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD4B4:
    ctx->pc = 0x7F3AD4B4u;
    // 7F3AD4B4: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD4B8:
    // 7F3AD4B8: cmplw   r4, r0
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

label_7F3AD4BC:
    // 7F3AD4BC: bc    4, 2, 0x7F3AD514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD514;
        }
    }

label_7F3AD4C0:
    ctx->downcount -= 4;
    // 7F3AD4C0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD4C4:
    // 7F3AD4C4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD4C8:
    // 7F3AD4C8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD4CC:
    // 7F3AD4CC: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3AD4D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC4B0u;
                return;
            }
            goto label_7F3AC4B0;
    }

label_7F3AD4D0:
    ctx->downcount -= 5;
    // 7F3AD4D0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD4D4:
    // 7F3AD4D4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AD4D8:
    // 7F3AD4D8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD4DC:
    // 7F3AD4DC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD4E0:
    // 7F3AD4E0: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3AD4E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC188u;
                return;
            }
            goto label_7F3AC188;
    }

label_7F3AD4E4:
    ctx->downcount -= 2;
    // 7F3AD4E4: cmpwi   r3, 0
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

label_7F3AD4E8:
    // 7F3AD4E8: bc    12, 2, 0x7F3AD504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD504;
        }
    }

label_7F3AD4EC:
    ctx->pc = 0x7F3AD4ECu;
    ctx->downcount -= 6;
    // 7F3AD4EC: lwz     r4, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AD4F0:
    // 7F3AD4F0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD4F4:
    // 7F3AD4F4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD4F8:
    // 7F3AD4F8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD4FC:
    ctx->pc = 0x7F3AD4FCu;
    // 7F3AD4FC: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD500:
    // 7F3AD500: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3AD504u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC438u;
                return;
            }
            goto label_7F3AC438;
    }

label_7F3AD504:
    ctx->downcount -= 4;
    // 7F3AD504: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AD508:
    // 7F3AD508: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F3AD50C:
    ctx->pc = 0x7F3AD50Cu;
    // 7F3AD50C: lwzx    r3, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD510:
    // 7F3AD510: b       0x7F3AD520
    {
            goto label_7F3AD520;
    }

label_7F3AD514:
    ctx->downcount -= 2;
    // 7F3AD514: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3AD518:
    // 7F3AD518: bc    16, 0, 0x7F3AD4AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD4ACu;
                return;
            }
            goto label_7F3AD4AC;
        }
    }

label_7F3AD51C:
    ctx->pc = 0x7F3AD51Cu;
    ctx->downcount -= 1;
    // 7F3AD51C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD520:
    ctx->pc = 0x7F3AD520u;
    ctx->downcount -= 16;
    // 7F3AD520: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD524:
    ctx->pc = 0x7F3AD524u;
    // 7F3AD524: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD528:
    ctx->pc = 0x7F3AD528u;
    // 7F3AD528: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD52C:
    ctx->pc = 0x7F3AD52Cu;
    // 7F3AD52C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AD530:
    ctx->pc = 0x7F3AD530u;
    // 7F3AD530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD534:
    ctx->pc = 0x7F3AD534u;
    ctx->downcount -= 21;
    // 7F3AD534: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD538:
    ctx->pc = 0x7F3AD538u;
    // 7F3AD538: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD53C:
    ctx->pc = 0x7F3AD53Cu;
    // 7F3AD53C: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD540:
    ctx->pc = 0x7F3AD540u;
    // 7F3AD540: stmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD544:
    ctx->pc = 0x7F3AD544u;
    // 7F3AD544: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AD548:
    ctx->pc = 0x7F3AD548u;
    // 7F3AD548: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD54C:
    ctx->pc = 0x7F3AD54Cu;
    // 7F3AD54C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD550:
    ctx->pc = 0x7F3AD550u;
    // 7F3AD550: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD554:
    ctx->pc = 0x7F3AD554u;
    // 7F3AD554: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AD558:
    ctx->pc = 0x7F3AD558u;
    // 7F3AD558: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AD55C:
    ctx->pc = 0x7F3AD55Cu;
    // 7F3AD55C: bc    4, 2, 0x7F3AD564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD564;
        }
    }

label_7F3AD560:
    ctx->pc = 0x7F3AD560u;
    ctx->downcount -= 1;
    // 7F3AD560: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3AD564:
    ctx->pc = 0x7F3AD564u;
    ctx->downcount -= 3;
    // 7F3AD564: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD568:
    ctx->pc = 0x7F3AD568u;
    // 7F3AD568: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AD56C:
    ctx->pc = 0x7F3AD56Cu;
    // 7F3AD56C: bl      0x800251AC
    {
            ctx->lr = 0x7F3AD570u;
            ctx->pc = 0x800251ACu;
            return;
    }

label_7F3AD570:
    ctx->pc = 0x7F3AD570u;
    ctx->downcount -= 4;
    // 7F3AD570: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD574:
    ctx->pc = 0x7F3AD574u;
    // 7F3AD574: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AD578:
    ctx->pc = 0x7F3AD578u;
    // 7F3AD578: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD57C:
    ctx->pc = 0x7F3AD57Cu;
    // 7F3AD57C: bl      0x80025090
    {
            ctx->lr = 0x7F3AD580u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AD580:
    ctx->pc = 0x7F3AD580u;
    ctx->downcount -= 12;
    // 7F3AD580: xori    r3, r26, 0x0001
    ctx->gpr[3] = ctx->gpr[26] ^ 0x0001u;

label_7F3AD584:
    ctx->pc = 0x7F3AD584u;
    // 7F3AD584: rlwinm r0, r26, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 1u) & 0xFFFFFFFEu;
    }

label_7F3AD588:
    ctx->pc = 0x7F3AD588u;
    // 7F3AD588: rlwinm r3, r3, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_7F3AD58C:
    ctx->pc = 0x7F3AD58Cu;
    // 7F3AD58C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3AD590:
    ctx->pc = 0x7F3AD590u;
    // 7F3AD590: add   r3, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AD594:
    ctx->pc = 0x7F3AD594u;
    // 7F3AD594: add   r0, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AD598:
    ctx->pc = 0x7F3AD598u;
    // 7F3AD598: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F3AD59C:
    ctx->pc = 0x7F3AD59Cu;
    // 7F3AD59C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3AD5A0:
    ctx->pc = 0x7F3AD5A0u;
    // 7F3AD5A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AD5A4:
    ctx->pc = 0x7F3AD5A4u;
    // 7F3AD5A4: addi    r28, r3, 256
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(256);

label_7F3AD5A8:
    ctx->pc = 0x7F3AD5A8u;
    // 7F3AD5A8: add   r27, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F3AD5AC:
    ctx->pc = 0x7F3AD5ACu;
    // 7F3AD5AC: b       0x7F3AD5F8
    {
            goto label_7F3AD5F8;
    }

label_7F3AD5B0:
    ctx->pc = 0x7F3AD5B0u;
    ctx->downcount -= 5;
    // 7F3AD5B0: lwzx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD5B4:
    // 7F3AD5B4: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F3AD5B8:
    // 7F3AD5B8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD5BC:
    // 7F3AD5BC: add   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3AD5C0:
    // 7F3AD5C0: bl      0x80025090
    {
            ctx->lr = 0x7F3AD5C4u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AD5C4:
    ctx->pc = 0x7F3AD5C4u;
    ctx->downcount -= 5;
    // 7F3AD5C4: lwz     r0, 256(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD5C8:
    // 7F3AD5C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AD5CC:
    // 7F3AD5CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD5D0:
    // 7F3AD5D0: add   r5, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3AD5D4:
    // 7F3AD5D4: bl      0x80025090
    {
            ctx->lr = 0x7F3AD5D8u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AD5D8:
    ctx->pc = 0x7F3AD5D8u;
    ctx->downcount -= 6;
    // 7F3AD5D8: lwz     r0, 256(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD5DC:
    // 7F3AD5DC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AD5E0:
    ctx->pc = 0x7F3AD5E0u;
    // 7F3AD5E0: lwz     r5, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AD5E4:
    ctx->pc = 0x7F3AD5E4u;
    // 7F3AD5E4: lwz     r6, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD5E8:
    // 7F3AD5E8: add   r3, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AD5EC:
    // 7F3AD5EC: bl      0x7F3AC398
    {
            ctx->lr = 0x7F3AD5F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC398u;
                return;
            }
            goto label_7F3AC398;
    }

label_7F3AD5F0:
    ctx->downcount -= 2;
    // 7F3AD5F0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F3AD5F4:
    // 7F3AD5F4: addi    r29, r29, 48
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(48);

label_7F3AD5F8:
    ctx->pc = 0x7F3AD5F8u;
    ctx->downcount -= 4;
    // 7F3AD5F8: lwz     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD5FC:
    ctx->pc = 0x7F3AD5FCu;
    // 7F3AD5FC: lha     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD600:
    // 7F3AD600: cmpw    r26, r0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD604:
    // 7F3AD604: bc    12, 0, 0x7F3AD5B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD5B0u;
                return;
            }
            goto label_7F3AD5B0;
        }
    }

label_7F3AD608:
    ctx->pc = 0x7F3AD608u;
    ctx->downcount -= 16;
    // 7F3AD608: lmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD60C:
    ctx->pc = 0x7F3AD60Cu;
    // 7F3AD60C: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD610:
    ctx->pc = 0x7F3AD610u;
    // 7F3AD610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD614:
    ctx->pc = 0x7F3AD614u;
    // 7F3AD614: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F3AD618:
    ctx->pc = 0x7F3AD618u;
    // 7F3AD618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD61C:
    ctx->pc = 0x7F3AD61Cu;
    ctx->downcount -= 9;
    // 7F3AD61C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD620:
    ctx->pc = 0x7F3AD620u;
    // 7F3AD620: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD624:
    ctx->pc = 0x7F3AD624u;
    // 7F3AD624: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD628:
    ctx->pc = 0x7F3AD628u;
    // 7F3AD628: extsh r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F3AD62C:
    ctx->pc = 0x7F3AD62Cu;
    // 7F3AD62C: lwz     r7, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AD630:
    ctx->pc = 0x7F3AD630u;
    // 7F3AD630: lha     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD634:
    ctx->pc = 0x7F3AD634u;
    // 7F3AD634: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AD638:
    ctx->pc = 0x7F3AD638u;
    // 7F3AD638: cmpwi   r0, 4096
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

label_7F3AD63C:
    ctx->pc = 0x7F3AD63Cu;
    // 7F3AD63C: bc    12, 0, 0x7F3AD648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD648;
        }
    }

label_7F3AD640:
    ctx->pc = 0x7F3AD640u;
    ctx->downcount -= 2;
    // 7F3AD640: addi    r4, r4, -4096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4096);

label_7F3AD644:
    ctx->pc = 0x7F3AD644u;
    // 7F3AD644: b       0x7F3AD654
    {
            goto label_7F3AD654;
    }

label_7F3AD648:
    ctx->pc = 0x7F3AD648u;
    ctx->downcount -= 2;
    // 7F3AD648: cmpwi   r0, -4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD64C:
    ctx->pc = 0x7F3AD64Cu;
    // 7F3AD64C: bc    12, 1, 0x7F3AD654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD654;
        }
    }

label_7F3AD650:
    ctx->pc = 0x7F3AD650u;
    ctx->downcount -= 1;
    // 7F3AD650: addi    r4, r4, 4096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4096);

label_7F3AD654:
    ctx->pc = 0x7F3AD654u;
    ctx->downcount -= 5;
    // 7F3AD654: lha     r6, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD658:
    ctx->pc = 0x7F3AD658u;
    // 7F3AD658: extsh r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F3AD65C:
    ctx->pc = 0x7F3AD65Cu;
    // 7F3AD65C: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AD660:
    ctx->pc = 0x7F3AD660u;
    // 7F3AD660: cmpwi   r0, 4096
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

label_7F3AD664:
    ctx->pc = 0x7F3AD664u;
    // 7F3AD664: bc    12, 0, 0x7F3AD670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD670;
        }
    }

label_7F3AD668:
    ctx->pc = 0x7F3AD668u;
    ctx->downcount -= 2;
    // 7F3AD668: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_7F3AD66C:
    ctx->pc = 0x7F3AD66Cu;
    // 7F3AD66C: b       0x7F3AD67C
    {
            goto label_7F3AD67C;
    }

label_7F3AD670:
    ctx->pc = 0x7F3AD670u;
    ctx->downcount -= 2;
    // 7F3AD670: cmpwi   r0, -4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD674:
    ctx->pc = 0x7F3AD674u;
    // 7F3AD674: bc    12, 1, 0x7F3AD67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD67C;
        }
    }

label_7F3AD678:
    ctx->pc = 0x7F3AD678u;
    ctx->downcount -= 1;
    // 7F3AD678: addi    r5, r5, 4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4096);

label_7F3AD67C:
    ctx->pc = 0x7F3AD67Cu;
    ctx->downcount -= 2;
    // 7F3AD67C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AD680:
    ctx->pc = 0x7F3AD680u;
    // 7F3AD680: b       0x7F3AD6A4
    {
            goto label_7F3AD6A4;
    }

label_7F3AD684:
    loop_7F3AD684(ctx);
    if (ctx->pc == 0x7F3AD6B4u) goto label_7F3AD6B4;
    return;
label_7F3AD688:
    // 7F3AD688: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3AD68C:
    // 7F3AD68C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AD690:
    ctx->pc = 0x7F3AD690u;
    // 7F3AD690: sth     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AD694:
    ctx->pc = 0x7F3AD694u;
    // 7F3AD694: lha     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD698:
    // 7F3AD698: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AD69C:
    ctx->pc = 0x7F3AD69Cu;
    // 7F3AD69C: sth     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AD6A0:
    // 7F3AD6A0: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F3AD6A4:
    ctx->pc = 0x7F3AD6A4u;
    ctx->downcount -= 4;
    // 7F3AD6A4: lwz     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AD6A8:
    ctx->pc = 0x7F3AD6A8u;
    // 7F3AD6A8: lha     r0, 70(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD6AC:
    // 7F3AD6AC: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD6B0:
    // 7F3AD6B0: bc    12, 0, 0x7F3AD684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD684u;
                return;
            }
            goto label_7F3AD684;
        }
    }

label_7F3AD6B4:
    ctx->pc = 0x7F3AD6B4u;
    ctx->downcount -= 3;
    // 7F3AD6B4: lwz     r3, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD6B8:
    ctx->pc = 0x7F3AD6B8u;
    // 7F3AD6B8: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AD6BC:
    ctx->pc = 0x7F3AD6BCu;
    // 7F3AD6BC: bl      0x8001DA4C
    {
            ctx->lr = 0x7F3AD6C0u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F3AD6C0:
    ctx->pc = 0x7F3AD6C0u;
    ctx->downcount -= 5;
    // 7F3AD6C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD6C4:
    ctx->pc = 0x7F3AD6C4u;
    // 7F3AD6C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD6C8:
    ctx->pc = 0x7F3AD6C8u;
    // 7F3AD6C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AD6CC:
    ctx->pc = 0x7F3AD6CCu;
    // 7F3AD6CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD6D0:
    ctx->pc = 0x7F3AD6D0u;
    ctx->downcount -= 26;
    // 7F3AD6D0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD6D4:
    ctx->pc = 0x7F3AD6D4u;
    // 7F3AD6D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD6D8:
    ctx->pc = 0x7F3AD6D8u;
    // 7F3AD6D8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD6DC:
    ctx->pc = 0x7F3AD6DCu;
    // 7F3AD6DC: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD6DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3AD6E0:
    ctx->pc = 0x7F3AD6E0u;
    // 7F3AD6E0: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD6E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AD6E0u);
        if (ctx->exception) return;
    }

label_7F3AD6E4:
    ctx->pc = 0x7F3AD6E4u;
    // 7F3AD6E4: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD6E8:
    ctx->pc = 0x7F3AD6E8u;
    // 7F3AD6E8: mulli   r5, r3, 948
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)948);

label_7F3AD6EC:
    ctx->pc = 0x7F3AD6ECu;
    // 7F3AD6EC: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AD6F0:
    ctx->pc = 0x7F3AD6F0u;
    // 7F3AD6F0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD6F0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F3AD6F4:
    ctx->pc = 0x7F3AD6F4u;
    // 7F3AD6F4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD6F8:
    ctx->pc = 0x7F3AD6F8u;
    // 7F3AD6F8: addi    r0, r3, 28636
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F3AD6FC:
    ctx->pc = 0x7F3AD6FCu;
    // 7F3AD6FC: add   r30, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F3AD700:
    ctx->pc = 0x7F3AD700u;
    // 7F3AD700: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AD704:
    ctx->pc = 0x7F3AD704u;
    // 7F3AD704: bl      0x7F3A9FEC
    {
            ctx->lr = 0x7F3AD708u;
            ctx->pc = 0x7F3A9FECu;
            return;
    }

label_7F3AD708:
    ctx->pc = 0x7F3AD708u;
    ctx->downcount -= 4;
    // 7F3AD708: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD70C:
    ctx->pc = 0x7F3AD70Cu;
    // 7F3AD70C: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F3AD710:
    ctx->pc = 0x7F3AD710u;
    // 7F3AD710: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD714:
    ctx->pc = 0x7F3AD714u;
    // 7F3AD714: bl      0x8002591C
    {
            ctx->lr = 0x7F3AD718u;
            ctx->pc = 0x8002591Cu;
            return;
    }

label_7F3AD718:
    ctx->pc = 0x7F3AD718u;
    ctx->downcount -= 4;
    // 7F3AD718: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AD71C:
    ctx->pc = 0x7F3AD71Cu;
    // 7F3AD71C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3AD720:
    ctx->pc = 0x7F3AD720u;
    // 7F3AD720: addi    r30, r3, -31092
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-31092);

label_7F3AD724:
    ctx->pc = 0x7F3AD724u;
    // 7F3AD724: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AD728:
    ctx->downcount -= 4;
    // 7F3AD728: add   r28, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F3AD72C:
    // 7F3AD72C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD730:
    // 7F3AD730: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AD734:
    // 7F3AD734: bl      0x800260DC
    {
            ctx->lr = 0x7F3AD738u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F3AD738:
    ctx->pc = 0x7F3AD738u;
    ctx->downcount -= 4;
    // 7F3AD738: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD738u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD73C:
    ctx->pc = 0x7F3AD73Cu;
    // 7F3AD73C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD73Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F3AD740:
    ctx->pc = 0x7F3AD740u;
    // 7F3AD740: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F3AD740u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F3AD744:
    // 7F3AD744: bc    4, 0, 0x7F3AD750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD750;
        }
    }

label_7F3AD748:
    ctx->downcount -= 2;
    // 7F3AD748: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AD74C:
    // 7F3AD74C: b       0x7F3AD764
    {
            goto label_7F3AD764;
    }

label_7F3AD750:
    ctx->downcount -= 4;
    // 7F3AD750: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3AD754:
    // 7F3AD754: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F3AD758:
    // 7F3AD758: cmplwi  r29, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD75C:
    // 7F3AD75C: bc    12, 0, 0x7F3AD728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD728u;
                return;
            }
            goto label_7F3AD728;
        }
    }

label_7F3AD760:
    ctx->pc = 0x7F3AD760u;
    ctx->downcount -= 1;
    // 7F3AD760: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD764:
    ctx->pc = 0x7F3AD764u;
    ctx->downcount -= 18;
    // 7F3AD764: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AD764u);
        if (ctx->exception) return;
    }

label_7F3AD768:
    ctx->pc = 0x7F3AD768u;
    // 7F3AD768: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD76C:
    ctx->pc = 0x7F3AD76Cu;
    // 7F3AD76C: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD770:
    ctx->pc = 0x7F3AD770u;
    // 7F3AD770: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD774:
    ctx->pc = 0x7F3AD774u;
    // 7F3AD774: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD778:
    ctx->pc = 0x7F3AD778u;
    // 7F3AD778: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3AD77C:
    ctx->pc = 0x7F3AD77Cu;
    // 7F3AD77C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD780:
    ctx->pc = 0x7F3AD780u;
    ctx->downcount -= 32;
    // 7F3AD780: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD784:
    ctx->pc = 0x7F3AD784u;
    // 7F3AD784: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD788:
    ctx->pc = 0x7F3AD788u;
    // 7F3AD788: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD78C:
    ctx->pc = 0x7F3AD78Cu;
    // 7F3AD78C: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD78Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3AD790:
    ctx->pc = 0x7F3AD790u;
    // 7F3AD790: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD790u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AD790u);
        if (ctx->exception) return;
    }

label_7F3AD794:
    ctx->pc = 0x7F3AD794u;
    // 7F3AD794: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F3AD798:
    ctx->pc = 0x7F3AD798u;
    // 7F3AD798: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD798u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F3AD798u);
        if (ctx->exception) return;
    }

label_7F3AD79C:
    ctx->pc = 0x7F3AD79Cu;
    // 7F3AD79C: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD79Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F3AD7A0:
    ctx->pc = 0x7F3AD7A0u;
    // 7F3AD7A0: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F3AD7A0u);
        if (ctx->exception) return;
    }

label_7F3AD7A4:
    ctx->pc = 0x7F3AD7A4u;
    // 7F3AD7A4: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F3AD7A8:
    ctx->pc = 0x7F3AD7A8u;
    // 7F3AD7A8: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F3AD7A8u);
        if (ctx->exception) return;
    }

label_7F3AD7AC:
    ctx->pc = 0x7F3AD7ACu;
    // 7F3AD7AC: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F3AD7B0:
    ctx->pc = 0x7F3AD7B0u;
    // 7F3AD7B0: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F3AD7B0u);
        if (ctx->exception) return;
    }

label_7F3AD7B4:
    ctx->pc = 0x7F3AD7B4u;
    // 7F3AD7B4: stfd     f26, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F3AD7B8:
    ctx->pc = 0x7F3AD7B8u;
    // 7F3AD7B8: psq_st   f26, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F3AD7B8u);
        if (ctx->exception) return;
    }

label_7F3AD7BC:
    ctx->pc = 0x7F3AD7BCu;
    // 7F3AD7BC: stfd     f25, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F3AD7C0:
    ctx->pc = 0x7F3AD7C0u;
    // 7F3AD7C0: psq_st   f25, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F3AD7C0u);
        if (ctx->exception) return;
    }

label_7F3AD7C4:
    ctx->pc = 0x7F3AD7C4u;
    // 7F3AD7C4: stmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AD7C8:
    ctx->pc = 0x7F3AD7C8u;
    // 7F3AD7C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD7CC:
    ctx->pc = 0x7F3AD7CCu;
    // 7F3AD7CC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F3AD7D0:
    ctx->pc = 0x7F3AD7D0u;
    // 7F3AD7D0: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3AD7D4:
    ctx->pc = 0x7F3AD7D4u;
    // 7F3AD7D4: bl      0x7F1146A0
    {
            ctx->lr = 0x7F3AD7D8u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F3AD7D8:
    ctx->pc = 0x7F3AD7D8u;
    ctx->downcount -= 5;
    // 7F3AD7D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AD7DC:
    ctx->pc = 0x7F3AD7DCu;
    // 7F3AD7DC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AD7E0:
    ctx->pc = 0x7F3AD7E0u;
    // 7F3AD7E0: lfs     f31, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD7E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F3AD7E4:
    ctx->pc = 0x7F3AD7E4u;
    // 7F3AD7E4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3AD7E8:
    ctx->pc = 0x7F3AD7E8u;
    // 7F3AD7E8: b       0x7F3AD930
    {
            goto label_7F3AD930;
    }

label_7F3AD7EC:
    ctx->downcount -= 6;
    // 7F3AD7EC: add   r28, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F3AD7F0:
    // 7F3AD7F0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AD7F4:
    ctx->pc = 0x7F3AD7F4u;
    // 7F3AD7F4: lwz     r3, 660(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AD7F8:
    ctx->pc = 0x7F3AD7F8u;
    // 7F3AD7F8: lha     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD7FC:
    // 7F3AD7FC: cmpwi   r0, -1
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

label_7F3AD800:
    // 7F3AD800: bc    12, 2, 0x7F3AD808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD808;
        }
    }

label_7F3AD804:
    ctx->downcount -= 1;
    // 7F3AD804: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AD808:
    ctx->downcount -= 6;
    // 7F3AD808: mulli   r3, r4, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)324);

label_7F3AD80C:
    // 7F3AD80C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3AD810:
    // 7F3AD810: addi    r29, r3, 444
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(444);

label_7F3AD814:
    // 7F3AD814: add   r29, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3AD818:
    ctx->downcount -= 2;
    // 7F3AD818: rlwinm. r0, r26, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AD81C:
    // 7F3AD81C: bc    12, 2, 0x7F3AD828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD828;
        }
    }

label_7F3AD820:
    ctx->pc = 0x7F3AD820u;
    ctx->downcount -= 2;
    // 7F3AD820: lfs     f0, 716(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD820u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(716);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD824:
    // 7F3AD824: b       0x7F3AD82C
    {
            goto label_7F3AD82C;
    }

label_7F3AD828:
    ctx->pc = 0x7F3AD828u;
    ctx->downcount -= 1;
    // 7F3AD828: lfs     f0, 700(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD828u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD82C:
    ctx->downcount -= 3;
    // 7F3AD82C: rlwinm. r0, r26, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AD830:
    ctx->pc = 0x7F3AD830u;
    // 7F3AD830: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AD834:
    // 7F3AD834: bc    12, 2, 0x7F3AD840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD840;
        }
    }

label_7F3AD838:
    ctx->pc = 0x7F3AD838u;
    ctx->downcount -= 2;
    // 7F3AD838: lfs     f0, 720(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD838u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD83C:
    // 7F3AD83C: b       0x7F3AD844
    {
            goto label_7F3AD844;
    }

label_7F3AD840:
    ctx->pc = 0x7F3AD840u;
    ctx->downcount -= 1;
    // 7F3AD840: lfs     f0, 704(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD840u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD844:
    ctx->downcount -= 3;
    // 7F3AD844: rlwinm. r0, r26, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AD848:
    ctx->pc = 0x7F3AD848u;
    // 7F3AD848: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD848u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AD84C:
    // 7F3AD84C: bc    12, 2, 0x7F3AD858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD858;
        }
    }

label_7F3AD850:
    ctx->pc = 0x7F3AD850u;
    ctx->downcount -= 2;
    // 7F3AD850: lfs     f0, 724(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD850u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(724);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD854:
    // 7F3AD854: b       0x7F3AD85C
    {
            goto label_7F3AD85C;
    }

label_7F3AD858:
    ctx->pc = 0x7F3AD858u;
    ctx->downcount -= 1;
    // 7F3AD858: lfs     f0, 708(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD858u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD85C:
    ctx->pc = 0x7F3AD85Cu;
    ctx->downcount -= 6;
    // 7F3AD85C: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD85Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AD860:
    // 7F3AD860: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AD864:
    // 7F3AD864: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AD868:
    // 7F3AD868: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD86C:
    ctx->pc = 0x7F3AD86Cu;
    // 7F3AD86C: stfs     f31, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD86Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F3AD870:
    // 7F3AD870: bl      0x7F114508
    {
            ctx->lr = 0x7F3AD874u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3AD874:
    ctx->downcount -= 4;
    // 7F3AD874: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AD878:
    // 7F3AD878: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F3AD87C:
    // 7F3AD87C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AD880:
    // 7F3AD880: bl      0x7F114508
    {
            ctx->lr = 0x7F3AD884u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F3AD884:
    ctx->downcount -= 2;
    // 7F3AD884: cmpwi   r27, 0
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

label_7F3AD888:
    // 7F3AD888: bc    4, 2, 0x7F3AD8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8B0;
        }
    }

label_7F3AD88C:
    ctx->downcount -= 2;
    // 7F3AD88C: cmpwi   r26, 0
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

label_7F3AD890:
    // 7F3AD890: bc    4, 2, 0x7F3AD8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8B0;
        }
    }

label_7F3AD894:
    ctx->pc = 0x7F3AD894u;
    ctx->downcount -= 7;
    // 7F3AD894: lfs     f27, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD894u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F3AD898:
    ctx->pc = 0x7F3AD898u;
    // 7F3AD898: lfs     f26, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD898u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F3AD89C:
    ctx->pc = 0x7F3AD89Cu;
    // 7F3AD89C: lfs     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD89Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F3AD8A0:
    ctx->pc = 0x7F3AD8A0u;
    // 7F3AD8A0: fmr    f30, f27
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8A0u)) return;
    ctx->fpr[30] = ctx->fpr[27];

label_7F3AD8A4:
    ctx->pc = 0x7F3AD8A4u;
    // 7F3AD8A4: fmr    f29, f26
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8A4u)) return;
    ctx->fpr[29] = ctx->fpr[26];

label_7F3AD8A8:
    ctx->pc = 0x7F3AD8A8u;
    // 7F3AD8A8: fmr    f28, f25
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8A8u)) return;
    ctx->fpr[28] = ctx->fpr[25];

label_7F3AD8AC:
    // 7F3AD8AC: b       0x7F3AD91C
    {
            goto label_7F3AD91C;
    }

label_7F3AD8B0:
    ctx->pc = 0x7F3AD8B0u;
    ctx->downcount -= 3;
    // 7F3AD8B0: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD8B4:
    ctx->pc = 0x7F3AD8B4u;
    // 7F3AD8B4: fcmpo   cr0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[27], ctx->fpr[0], true);

label_7F3AD8B8:
    // 7F3AD8B8: bc    4, 0, 0x7F3AD8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8C0;
        }
    }

label_7F3AD8BC:
    ctx->downcount -= 1;
    // 7F3AD8BC: b       0x7F3AD8C4
    {
            goto label_7F3AD8C4;
    }

label_7F3AD8C0:
    ctx->pc = 0x7F3AD8C0u;
    ctx->downcount -= 1;
    // 7F3AD8C0: fmr    f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8C0u)) return;
    ctx->fpr[27] = ctx->fpr[0];

label_7F3AD8C4:
    ctx->pc = 0x7F3AD8C4u;
    ctx->downcount -= 3;
    // 7F3AD8C4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AD8C8:
    ctx->pc = 0x7F3AD8C8u;
    // 7F3AD8C8: fcmpo   cr0, f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[26], ctx->fpr[1], true);

label_7F3AD8CC:
    // 7F3AD8CC: bc    4, 0, 0x7F3AD8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8D4;
        }
    }

label_7F3AD8D0:
    ctx->downcount -= 1;
    // 7F3AD8D0: b       0x7F3AD8D8
    {
            goto label_7F3AD8D8;
    }

label_7F3AD8D4:
    ctx->pc = 0x7F3AD8D4u;
    ctx->downcount -= 1;
    // 7F3AD8D4: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8D4u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_7F3AD8D8:
    ctx->pc = 0x7F3AD8D8u;
    ctx->downcount -= 3;
    // 7F3AD8D8: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3AD8DC:
    ctx->pc = 0x7F3AD8DCu;
    // 7F3AD8DC: fcmpo   cr0, f25, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[25], ctx->fpr[2], true);

label_7F3AD8E0:
    // 7F3AD8E0: bc    4, 0, 0x7F3AD8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8E8;
        }
    }

label_7F3AD8E4:
    ctx->downcount -= 1;
    // 7F3AD8E4: b       0x7F3AD8EC
    {
            goto label_7F3AD8EC;
    }

label_7F3AD8E8:
    ctx->pc = 0x7F3AD8E8u;
    ctx->downcount -= 1;
    // 7F3AD8E8: fmr    f25, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8E8u)) return;
    ctx->fpr[25] = ctx->fpr[2];

label_7F3AD8EC:
    ctx->pc = 0x7F3AD8ECu;
    ctx->downcount -= 2;
    // 7F3AD8EC: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F3AD8F0:
    // 7F3AD8F0: bc    4, 1, 0x7F3AD8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD8F8;
        }
    }

label_7F3AD8F4:
    ctx->downcount -= 1;
    // 7F3AD8F4: b       0x7F3AD8FC
    {
            goto label_7F3AD8FC;
    }

label_7F3AD8F8:
    ctx->pc = 0x7F3AD8F8u;
    ctx->downcount -= 1;
    // 7F3AD8F8: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8F8u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F3AD8FC:
    ctx->pc = 0x7F3AD8FCu;
    ctx->downcount -= 2;
    // 7F3AD8FC: fcmpo   cr0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD8FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[1], true);

label_7F3AD900:
    // 7F3AD900: bc    4, 1, 0x7F3AD908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD908;
        }
    }

label_7F3AD904:
    ctx->downcount -= 1;
    // 7F3AD904: b       0x7F3AD90C
    {
            goto label_7F3AD90C;
    }

label_7F3AD908:
    ctx->pc = 0x7F3AD908u;
    ctx->downcount -= 1;
    // 7F3AD908: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3AD908u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F3AD90C:
    ctx->pc = 0x7F3AD90Cu;
    ctx->downcount -= 2;
    // 7F3AD90C: fcmpo   cr0, f28, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AD90Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[28], ctx->fpr[2], true);

label_7F3AD910:
    // 7F3AD910: bc    4, 1, 0x7F3AD918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD918;
        }
    }

label_7F3AD914:
    ctx->downcount -= 1;
    // 7F3AD914: b       0x7F3AD91C
    {
            goto label_7F3AD91C;
    }

label_7F3AD918:
    ctx->pc = 0x7F3AD918u;
    ctx->downcount -= 1;
    // 7F3AD918: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3AD918u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_7F3AD91C:
    ctx->downcount -= 3;
    // 7F3AD91C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F3AD920:
    // 7F3AD920: cmpwi   r26, 8
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AD924:
    // 7F3AD924: bc    12, 0, 0x7F3AD818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD818u;
                return;
            }
            goto label_7F3AD818;
        }
    }

label_7F3AD928:
    ctx->downcount -= 2;
    // 7F3AD928: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F3AD92C:
    // 7F3AD92C: addi    r30, r30, 324
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(324);

label_7F3AD930:
    ctx->pc = 0x7F3AD930u;
    ctx->downcount -= 3;
    // 7F3AD930: lha     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AD934:
    // 7F3AD934: cmpw    r27, r0
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

label_7F3AD938:
    // 7F3AD938: bc    12, 0, 0x7F3AD7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD7ECu;
                return;
            }
            goto label_7F3AD7EC;
        }
    }

label_7F3AD93C:
    ctx->pc = 0x7F3AD93Cu;
    ctx->downcount -= 40;
    // 7F3AD93C: stfs     f27, 336(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD93Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

label_7F3AD940:
    ctx->pc = 0x7F3AD940u;
    // 7F3AD940: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AD944:
    ctx->pc = 0x7F3AD944u;
    // 7F3AD944: lfs     f0, -21372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD944u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AD948:
    ctx->pc = 0x7F3AD948u;
    // 7F3AD948: stfs     f26, 340(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD948u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

label_7F3AD94C:
    ctx->pc = 0x7F3AD94Cu;
    // 7F3AD94C: stfs     f25, 344(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD94Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[25]));
    }

label_7F3AD950:
    ctx->pc = 0x7F3AD950u;
    // 7F3AD950: stfs     f0, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD950u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AD954:
    ctx->pc = 0x7F3AD954u;
    // 7F3AD954: stfs     f30, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD954u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F3AD958:
    ctx->pc = 0x7F3AD958u;
    // 7F3AD958: stfs     f29, 356(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD958u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F3AD95C:
    ctx->pc = 0x7F3AD95Cu;
    // 7F3AD95C: stfs     f28, 360(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD95Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

label_7F3AD960:
    ctx->pc = 0x7F3AD960u;
    // 7F3AD960: stfs     f0, 364(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD960u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AD964:
    ctx->pc = 0x7F3AD964u;
    // 7F3AD964: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AD964u);
        if (ctx->exception) return;
    }

label_7F3AD968:
    ctx->pc = 0x7F3AD968u;
    // 7F3AD968: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD96C:
    ctx->pc = 0x7F3AD96Cu;
    // 7F3AD96C: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD96Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F3AD96Cu);
        if (ctx->exception) return;
    }

label_7F3AD970:
    ctx->pc = 0x7F3AD970u;
    // 7F3AD970: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD974:
    ctx->pc = 0x7F3AD974u;
    // 7F3AD974: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F3AD974u);
        if (ctx->exception) return;
    }

label_7F3AD978:
    ctx->pc = 0x7F3AD978u;
    // 7F3AD978: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD97C:
    ctx->pc = 0x7F3AD97Cu;
    // 7F3AD97C: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD97Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F3AD97Cu);
        if (ctx->exception) return;
    }

label_7F3AD980:
    ctx->pc = 0x7F3AD980u;
    // 7F3AD980: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD984:
    ctx->pc = 0x7F3AD984u;
    // 7F3AD984: psq_l   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F3AD984u);
        if (ctx->exception) return;
    }

label_7F3AD988:
    ctx->pc = 0x7F3AD988u;
    // 7F3AD988: lfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD98C:
    ctx->pc = 0x7F3AD98Cu;
    // 7F3AD98C: psq_l   f26, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD98Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F3AD98Cu);
        if (ctx->exception) return;
    }

label_7F3AD990:
    ctx->pc = 0x7F3AD990u;
    // 7F3AD990: lfd     f26, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD994:
    ctx->pc = 0x7F3AD994u;
    // 7F3AD994: psq_l   f25, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AD994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F3AD994u);
        if (ctx->exception) return;
    }

label_7F3AD998:
    ctx->pc = 0x7F3AD998u;
    // 7F3AD998: lfd     f25, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AD998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AD99C:
    ctx->pc = 0x7F3AD99Cu;
    // 7F3AD99C: lmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AD9A0:
    ctx->pc = 0x7F3AD9A0u;
    // 7F3AD9A0: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD9A4:
    ctx->pc = 0x7F3AD9A4u;
    // 7F3AD9A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AD9A8:
    ctx->pc = 0x7F3AD9A8u;
    // 7F3AD9A8: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F3AD9AC:
    ctx->pc = 0x7F3AD9ACu;
    // 7F3AD9AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AD9B0:
    ctx->pc = 0x7F3AD9B0u;
    ctx->downcount -= 8;
    // 7F3AD9B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AD9B4:
    ctx->pc = 0x7F3AD9B4u;
    // 7F3AD9B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AD9B8:
    ctx->pc = 0x7F3AD9B8u;
    // 7F3AD9B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AD9BC:
    ctx->pc = 0x7F3AD9BCu;
    // 7F3AD9BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AD9C0:
    ctx->pc = 0x7F3AD9C0u;
    // 7F3AD9C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AD9C4:
    ctx->pc = 0x7F3AD9C4u;
    // 7F3AD9C4: lwz     r0, 420(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD9C8:
    ctx->pc = 0x7F3AD9C8u;
    // 7F3AD9C8: cmplwi  r0, 0x0000
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

label_7F3AD9CC:
    ctx->pc = 0x7F3AD9CCu;
    // 7F3AD9CC: bc    4, 2, 0x7F3AD9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD9E8;
        }
    }

label_7F3AD9D0:
    ctx->pc = 0x7F3AD9D0u;
    ctx->downcount -= 3;
    // 7F3AD9D0: lwz     r0, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD9D4:
    ctx->pc = 0x7F3AD9D4u;
    // 7F3AD9D4: cmplwi  r0, 0x0000
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

label_7F3AD9D8:
    ctx->pc = 0x7F3AD9D8u;
    // 7F3AD9D8: bc    4, 2, 0x7F3AD9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD9E8;
        }
    }

label_7F3AD9DC:
    ctx->pc = 0x7F3AD9DCu;
    ctx->downcount -= 3;
    // 7F3AD9DC: lwz     r0, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AD9E0:
    ctx->pc = 0x7F3AD9E0u;
    // 7F3AD9E0: cmplwi  r0, 0x0000
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

label_7F3AD9E4:
    ctx->pc = 0x7F3AD9E4u;
    // 7F3AD9E4: bc    12, 2, 0x7F3AD9F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AD9F0;
        }
    }

label_7F3AD9E8:
    ctx->pc = 0x7F3AD9E8u;
    ctx->downcount -= 2;
    // 7F3AD9E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AD9EC:
    ctx->pc = 0x7F3AD9ECu;
    // 7F3AD9EC: b       0x7F3ADA40
    {
            goto label_7F3ADA40;
    }

label_7F3AD9F0:
    ctx->pc = 0x7F3AD9F0u;
    ctx->downcount -= 6;
    // 7F3AD9F0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AD9F4:
    ctx->pc = 0x7F3AD9F4u;
    // 7F3AD9F4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AD9F8:
    ctx->pc = 0x7F3AD9F8u;
    // 7F3AD9F8: addi    r6, r5, 15488
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(15488);

label_7F3AD9FC:
    ctx->pc = 0x7F3AD9FCu;
    // 7F3AD9FC: addi    r5, r4, 32392
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32392);

label_7F3ADA00:
    ctx->pc = 0x7F3ADA00u;
    // 7F3ADA00: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADA04:
    ctx->pc = 0x7F3ADA04u;
    // 7F3ADA04: bl      0x7F3ADA54
    {
            ctx->lr = 0x7F3ADA08u;
            goto label_7F3ADA54;
    }

label_7F3ADA08:
    ctx->pc = 0x7F3ADA08u;
    ctx->downcount -= 2;
    // 7F3ADA08: cmpwi   r3, -1
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

label_7F3ADA0C:
    ctx->pc = 0x7F3ADA0Cu;
    // 7F3ADA0C: bc    4, 2, 0x7F3ADA34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADA34;
        }
    }

label_7F3ADA10:
    ctx->pc = 0x7F3ADA10u;
    ctx->downcount -= 7;
    // 7F3ADA10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ADA14:
    ctx->pc = 0x7F3ADA14u;
    // 7F3ADA14: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3ADA18:
    ctx->pc = 0x7F3ADA18u;
    // 7F3ADA18: addi    r6, r3, 15484
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(15484);

label_7F3ADA1C:
    ctx->pc = 0x7F3ADA1Cu;
    // 7F3ADA1C: addi    r5, r4, -32120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32120);

label_7F3ADA20:
    ctx->pc = 0x7F3ADA20u;
    // 7F3ADA20: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADA24:
    ctx->pc = 0x7F3ADA24u;
    // 7F3ADA24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3ADA28:
    ctx->pc = 0x7F3ADA28u;
    // 7F3ADA28: bl      0x7F3ADA54
    {
            ctx->lr = 0x7F3ADA2Cu;
            goto label_7F3ADA54;
    }

label_7F3ADA2C:
    ctx->pc = 0x7F3ADA2Cu;
    ctx->downcount -= 2;
    // 7F3ADA2C: cmpwi   r3, -1
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

label_7F3ADA30:
    ctx->pc = 0x7F3ADA30u;
    // 7F3ADA30: bc    12, 2, 0x7F3ADA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADA3C;
        }
    }

label_7F3ADA34:
    ctx->pc = 0x7F3ADA34u;
    ctx->downcount -= 2;
    // 7F3ADA34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ADA38:
    ctx->pc = 0x7F3ADA38u;
    // 7F3ADA38: b       0x7F3ADA40
    {
            goto label_7F3ADA40;
    }

label_7F3ADA3C:
    ctx->pc = 0x7F3ADA3Cu;
    ctx->downcount -= 1;
    // 7F3ADA3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADA40:
    ctx->pc = 0x7F3ADA40u;
    ctx->downcount -= 6;
    // 7F3ADA40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADA44:
    ctx->pc = 0x7F3ADA44u;
    // 7F3ADA44: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3ADA48:
    ctx->pc = 0x7F3ADA48u;
    // 7F3ADA48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3ADA4C:
    ctx->pc = 0x7F3ADA4Cu;
    // 7F3ADA4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3ADA50:
    ctx->pc = 0x7F3ADA50u;
    // 7F3ADA50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3ADA54:
    ctx->pc = 0x7F3ADA54u;
    ctx->downcount -= 7;
    // 7F3ADA54: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_7F3ADA58:
    ctx->pc = 0x7F3ADA58u;
    // 7F3ADA58: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3ADA5C:
    ctx->pc = 0x7F3ADA5Cu;
    // 7F3ADA5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3ADA60:
    ctx->pc = 0x7F3ADA60u;
    // 7F3ADA60: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_7F3ADA64:
    ctx->pc = 0x7F3ADA64u;
    // 7F3ADA64: cmpwi   r4, 0
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

label_7F3ADA68:
    ctx->pc = 0x7F3ADA68u;
    // 7F3ADA68: bc    4, 1, 0x7F3ADA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADA94;
        }
    }

label_7F3ADA6C:
    ctx->pc = 0x7F3ADA6Cu;
    ctx->downcount -= 5;
    // 7F3ADA6C: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADA70:
    ctx->pc = 0x7F3ADA70u;
    // 7F3ADA70: lwzx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADA74:
    ctx->pc = 0x7F3ADA74u;
    // 7F3ADA74: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADA78:
    // 7F3ADA78: cmplw   r4, r0
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

label_7F3ADA7C:
    // 7F3ADA7C: bc    4, 2, 0x7F3ADA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADA88;
        }
    }

label_7F3ADA80:
    ctx->downcount -= 2;
    // 7F3ADA80: or   r7, r8, r8
    {
        ctx->gpr[7] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3ADA84:
    // 7F3ADA84: b       0x7F3ADA94
    {
            goto label_7F3ADA94;
    }

label_7F3ADA88:
    ctx->downcount -= 3;
    // 7F3ADA88: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3ADA8C:
    // 7F3ADA8C: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F3ADA90:
    // 7F3ADA90: bc    16, 0, 0x7F3ADA6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADA6Cu;
                return;
            }
            goto label_7F3ADA6C;
        }
    }

label_7F3ADA94:
    ctx->pc = 0x7F3ADA94u;
    ctx->downcount -= 2;
    // 7F3ADA94: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3ADA98:
    ctx->pc = 0x7F3ADA98u;
    // 7F3ADA98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3ADA9C:
    ctx->pc = 0x7F3ADA9Cu;
    ctx->downcount -= 3;
    // 7F3ADA9C: addi    r5, r3, 444
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(444);

label_7F3ADAA0:
    ctx->pc = 0x7F3ADAA0u;
    // 7F3ADAA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3ADAA4:
    ctx->pc = 0x7F3ADAA4u;
    // 7F3ADAA4: b       0x7F3ADAE4
    {
            goto label_7F3ADAE4;
    }

label_7F3ADAA8:
    ctx->pc = 0x7F3ADAA8u;
    ctx->downcount -= 6;
    // 7F3ADAA8: lwz     r4, 216(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADAAC:
    ctx->pc = 0x7F3ADAACu;
    // 7F3ADAAC: lhz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3ADAB0:
    ctx->pc = 0x7F3ADAB0u;
    // 7F3ADAB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ADAB4:
    // 7F3ADAB4: cmpwi   r0, 0
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

label_7F3ADAB8:
    // 7F3ADAB8: bc    4, 1, 0x7F3ADADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADADC;
        }
    }

label_7F3ADABC:
    ctx->pc = 0x7F3ADABCu;
    ctx->downcount -= 4;
    // 7F3ADABC: lwz     r7, 244(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(244);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ADAC0:
    ctx->pc = 0x7F3ADAC0u;
    // 7F3ADAC0: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADAC4:
    // 7F3ADAC4: rlwinm. r0, r4, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADAC8:
    // 7F3ADAC8: bc    12, 2, 0x7F3ADAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADAD8;
        }
    }

label_7F3ADACC:
    ctx->downcount -= 3;
    // 7F3ADACC: rlwinm r0, r4, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFEFFFu;
    }

label_7F3ADAD0:
    ctx->pc = 0x7F3ADAD0u;
    // 7F3ADAD0: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADAD4:
    // 7F3ADAD4: b       0x7F3ADADC
    {
            goto label_7F3ADADC;
    }

label_7F3ADAD8:
    ctx->downcount -= 1;
    // 7F3ADAD8: bc    16, 0, 0x7F3ADABC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADABCu;
                return;
            }
            goto label_7F3ADABC;
        }
    }

label_7F3ADADC:
    ctx->downcount -= 2;
    // 7F3ADADC: addi    r5, r5, 324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(324);

label_7F3ADAE0:
    // 7F3ADAE0: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F3ADAE4:
    ctx->pc = 0x7F3ADAE4u;
    ctx->downcount -= 3;
    // 7F3ADAE4: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ADAE8:
    // 7F3ADAE8: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ADAEC:
    // 7F3ADAEC: bc    12, 0, 0x7F3ADAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADAA8u;
                return;
            }
            goto label_7F3ADAA8;
        }
    }

label_7F3ADAF0:
    ctx->pc = 0x7F3ADAF0u;
    ctx->downcount -= 1;
    // 7F3ADAF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3ADAF4:
    ctx->pc = 0x7F3ADAF4u;
    ctx->downcount -= 24;
    // 7F3ADAF4: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3ADAF8:
    ctx->pc = 0x7F3ADAF8u;
    // 7F3ADAF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3ADAFC:
    ctx->pc = 0x7F3ADAFCu;
    // 7F3ADAFC: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADB00:
    ctx->pc = 0x7F3ADB00u;
    // 7F3ADB00: stmw     r20, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3ADB04:
    ctx->pc = 0x7F3ADB04u;
    // 7F3ADB04: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3ADB08:
    ctx->pc = 0x7F3ADB08u;
    // 7F3ADB08: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F3ADB0C:
    ctx->pc = 0x7F3ADB0Cu;
    // 7F3ADB0C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3ADB10:
    ctx->pc = 0x7F3ADB10u;
    // 7F3ADB10: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3ADB14:
    ctx->pc = 0x7F3ADB14u;
    // 7F3ADB14: or   r20, r6, r6
    {
        ctx->gpr[20] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3ADB18:
    ctx->pc = 0x7F3ADB18u;
    // 7F3ADB18: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3ADB1C:
    ctx->pc = 0x7F3ADB1Cu;
    // 7F3ADB1C: addi    r25, r3, -21852
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F3ADB20:
    ctx->pc = 0x7F3ADB20u;
    // 7F3ADB20: lwz     r24, 908(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(908);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F3ADB24:
    ctx->pc = 0x7F3ADB24u;
    // 7F3ADB24: cmplwi  r24, 0x0000
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

label_7F3ADB28:
    ctx->pc = 0x7F3ADB28u;
    // 7F3ADB28: bc    12, 2, 0x7F3AE114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE114;
        }
    }

label_7F3ADB2C:
    ctx->pc = 0x7F3ADB2Cu;
    ctx->downcount -= 12;
    // 7F3ADB2C: lwz     r3, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADB30:
    ctx->pc = 0x7F3ADB30u;
    // 7F3ADB30: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3ADB34:
    ctx->pc = 0x7F3ADB34u;
    // 7F3ADB34: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F3ADB38:
    ctx->pc = 0x7F3ADB38u;
    // 7F3ADB38: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3ADB3C:
    ctx->pc = 0x7F3ADB3Cu;
    // 7F3ADB3C: addi    r6, r5, -12064
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-12064);

label_7F3ADB40:
    ctx->pc = 0x7F3ADB40u;
    // 7F3ADB40: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3ADB44:
    ctx->pc = 0x7F3ADB44u;
    // 7F3ADB44: slw   r3, r4, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

label_7F3ADB48:
    ctx->pc = 0x7F3ADB48u;
    // 7F3ADB48: addi    r4, r28, 60
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(60);

label_7F3ADB4C:
    ctx->pc = 0x7F3ADB4Cu;
    // 7F3ADB4C: stw     r3, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ADB50:
    ctx->pc = 0x7F3ADB50u;
    // 7F3ADB50: lwz     r21, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F3ADB54:
    ctx->pc = 0x7F3ADB54u;
    // 7F3ADB54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ADB58:
    loop_7F3ADB58(ctx);
    if (ctx->pc == 0x7F3ADB6Cu) goto label_7F3ADB6C;
    return;
label_7F3ADB5C:
    ctx->pc = 0x7F3ADB5Cu;
    // 7F3ADB5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3ADB60:
    ctx->pc = 0x7F3ADB60u;
    // 7F3ADB60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ADB64:
    ctx->pc = 0x7F3ADB64u;
    // 7F3ADB64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3ADB68:
    // 7F3ADB68: bc    16, 0, 0x7F3ADB58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADB58u;
                return;
            }
            goto label_7F3ADB58;
        }
    }

label_7F3ADB6C:
    ctx->pc = 0x7F3ADB6Cu;
    ctx->downcount -= 11;
    // 7F3ADB6C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ADB70:
    ctx->pc = 0x7F3ADB70u;
    // 7F3ADB70: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADB74:
    ctx->pc = 0x7F3ADB74u;
    // 7F3ADB74: addi    r4, r3, -21160
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21160);

label_7F3ADB78:
    ctx->pc = 0x7F3ADB78u;
    // 7F3ADB78: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3ADB7C:
    ctx->pc = 0x7F3ADB7Cu;
    // 7F3ADB7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ADB7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3ADB80:
    ctx->pc = 0x7F3ADB80u;
    // 7F3ADB80: addi    r4, r3, -21156
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21156);

label_7F3ADB84:
    ctx->pc = 0x7F3ADB84u;
    // 7F3ADB84: stw     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADB88:
    ctx->pc = 0x7F3ADB88u;
    // 7F3ADB88: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3ADB8C:
    ctx->pc = 0x7F3ADB8Cu;
    // 7F3ADB8C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3ADB8Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F3ADB90:
    ctx->pc = 0x7F3ADB90u;
    // 7F3ADB90: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3ADB90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3ADB94:
    ctx->pc = 0x7F3ADB94u;
    // 7F3ADB94: bl      0x8002548C
    {
            ctx->lr = 0x7F3ADB98u;
            ctx->pc = 0x8002548Cu;
            return;
    }

label_7F3ADB98:
    ctx->pc = 0x7F3ADB98u;
    ctx->downcount -= 4;
    // 7F3ADB98: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3ADB9C:
    ctx->pc = 0x7F3ADB9Cu;
    // 7F3ADB9C: li      r4, 82
    ctx->gpr[4] = (u32)(s32)(82);

label_7F3ADBA0:
    ctx->pc = 0x7F3ADBA0u;
    // 7F3ADBA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3ADBA4:
    ctx->pc = 0x7F3ADBA4u;
    // 7F3ADBA4: bl      0x80046B68
    {
            ctx->lr = 0x7F3ADBA8u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F3ADBA8:
    ctx->pc = 0x7F3ADBA8u;
    ctx->downcount -= 3;
    // 7F3ADBA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADBAC:
    ctx->pc = 0x7F3ADBACu;
    // 7F3ADBAC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3ADBB0:
    ctx->pc = 0x7F3ADBB0u;
    // 7F3ADBB0: bl      0x7F3A911C
    {
            ctx->lr = 0x7F3ADBB4u;
            ctx->pc = 0x7F3A911Cu;
            return;
    }

label_7F3ADBB4:
    ctx->pc = 0x7F3ADBB4u;
    ctx->downcount -= 3;
    // 7F3ADBB4: addi    r3, r28, 192
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(192);

label_7F3ADBB8:
    ctx->pc = 0x7F3ADBB8u;
    // 7F3ADBB8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3ADBBC:
    ctx->pc = 0x7F3ADBBCu;
    // 7F3ADBBC: bl      0x80025B84
    {
            ctx->lr = 0x7F3ADBC0u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3ADBC0:
    ctx->pc = 0x7F3ADBC0u;
    ctx->downcount -= 3;
    // 7F3ADBC0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3ADBC4:
    ctx->pc = 0x7F3ADBC4u;
    // 7F3ADBC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ADBC8:
    ctx->pc = 0x7F3ADBC8u;
    // 7F3ADBC8: bl      0x800468B8
    {
            ctx->lr = 0x7F3ADBCCu;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3ADBCC:
    ctx->pc = 0x7F3ADBCCu;
    ctx->downcount -= 5;
    // 7F3ADBCC: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADBD0:
    ctx->pc = 0x7F3ADBD0u;
    // 7F3ADBD0: addi    r22, r25, 72
    ctx->gpr[22] = ctx->gpr[25] + (u32)(s32)(72);

label_7F3ADBD4:
    ctx->pc = 0x7F3ADBD4u;
    // 7F3ADBD4: lwz     r23, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F3ADBD8:
    ctx->pc = 0x7F3ADBD8u;
    // 7F3ADBD8: cmpwi   r0, 0
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

label_7F3ADBDC:
    ctx->pc = 0x7F3ADBDCu;
    // 7F3ADBDC: bc    12, 2, 0x7F3ADBE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADBE4;
        }
    }

label_7F3ADBE0:
    ctx->pc = 0x7F3ADBE0u;
    ctx->downcount -= 1;
    // 7F3ADBE0: bl      0x7F3B9DF0
    {
            ctx->lr = 0x7F3ADBE4u;
            ctx->pc = 0x7F3B9DF0u;
            return;
    }

label_7F3ADBE4:
    ctx->pc = 0x7F3ADBE4u;
    ctx->downcount -= 7;
    // 7F3ADBE4: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADBE8:
    ctx->pc = 0x7F3ADBE8u;
    // 7F3ADBE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ADBEC:
    ctx->pc = 0x7F3ADBECu;
    // 7F3ADBEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3ADBF0:
    ctx->pc = 0x7F3ADBF0u;
    // 7F3ADBF0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3ADBF4:
    ctx->pc = 0x7F3ADBF4u;
    // 7F3ADBF4: cmpwi   r0, 0
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

label_7F3ADBF8:
    ctx->pc = 0x7F3ADBF8u;
    // 7F3ADBF8: bc    4, 1, 0x7F3ADCF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCF0;
        }
    }

label_7F3ADBFC:
    ctx->downcount -= 3;
    // 7F3ADBFC: cmpwi   r20, 0
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

label_7F3ADC00:
    ctx->pc = 0x7F3ADC00u;
    // 7F3ADC00: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADC04:
    // 7F3ADC04: bc    12, 2, 0x7F3ADC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADC18;
        }
    }

label_7F3ADC08:
    ctx->pc = 0x7F3ADC08u;
    ctx->downcount -= 3;
    // 7F3ADC08: lha     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ADC0C:
    // 7F3ADC0C: and.   r0, r0, r20
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[20];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC10:
    // 7F3ADC10: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC14:
    ctx->downcount -= 1;
    // 7F3ADC14: b       0x7F3ADC24
    {
            goto label_7F3ADC24;
    }

label_7F3ADC18:
    ctx->pc = 0x7F3ADC18u;
    ctx->downcount -= 3;
    // 7F3ADC18: lha     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ADC1C:
    // 7F3ADC1C: cmpwi   r0, 0
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

label_7F3ADC20:
    // 7F3ADC20: bc    4, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC24:
    ctx->pc = 0x7F3ADC24u;
    ctx->downcount -= 4;
    // 7F3ADC24: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADC28:
    ctx->pc = 0x7F3ADC28u;
    // 7F3ADC28: lwz     r6, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ADC2C:
    // 7F3ADC2C: and.   r6, r0, r6
    {
        ctx->gpr[6] = ctx->gpr[0] & ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC30:
    // 7F3ADC30: bc    4, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC34:
    ctx->downcount -= 2;
    // 7F3ADC34: rlwinm. r6, r0, 0, 24, 24
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC38:
    // 7F3ADC38: bc    4, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC3C:
    ctx->pc = 0x7F3ADC3Cu;
    ctx->downcount -= 3;
    // 7F3ADC3C: lwz     r6, 684(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(684);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ADC40:
    // 7F3ADC40: cmplwi  r6, 0x0000
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

label_7F3ADC44:
    // 7F3ADC44: bc    12, 2, 0x7F3ADC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADC60;
        }
    }

label_7F3ADC48:
    ctx->pc = 0x7F3ADC48u;
    ctx->downcount -= 3;
    // 7F3ADC48: lha     r7, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ADC4C:
    // 7F3ADC4C: rlwinm. r6, r7, 0, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC50:
    // 7F3ADC50: bc    4, 2, 0x7F3ADC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADC60;
        }
    }

label_7F3ADC54:
    ctx->downcount -= 3;
    // 7F3ADC54: ori     r0, r7, 0x0001
    ctx->gpr[0] = ctx->gpr[7] | 0x0001u;

label_7F3ADC58:
    ctx->pc = 0x7F3ADC58u;
    // 7F3ADC58: sth     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3ADC5C:
    // 7F3ADC5C: b       0x7F3ADCE8
    {
            goto label_7F3ADCE8;
    }

label_7F3ADC60:
    ctx->downcount -= 2;
    // 7F3ADC60: cmpwi   r30, 0
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

label_7F3ADC64:
    // 7F3ADC64: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC68:
    ctx->downcount -= 2;
    // 7F3ADC68: rlwinm. r6, r0, 0, 20, 20
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC6C:
    // 7F3ADC6C: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC70:
    ctx->downcount -= 4;
    // 7F3ADC70: lis     r6, 32591
    ctx->gpr[6] = ((u32)(s32)(32591) << 16);

label_7F3ADC74:
    ctx->pc = 0x7F3ADC74u;
    // 7F3ADC74: lwz     r8, -12068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-12068);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3ADC78:
    // 7F3ADC78: cmpwi   r8, 0
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

label_7F3ADC7C:
    // 7F3ADC7C: bc    4, 2, 0x7F3ADC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADC98;
        }
    }

label_7F3ADC80:
    ctx->downcount -= 6;
    // 7F3ADC80: lis     r6, 32591
    ctx->gpr[6] = ((u32)(s32)(32591) << 16);

label_7F3ADC84:
    ctx->pc = 0x7F3ADC84u;
    // 7F3ADC84: lwz     r7, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ADC88:
    // 7F3ADC88: addi    r6, r6, -12064
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12064);

label_7F3ADC8C:
    ctx->pc = 0x7F3ADC8Cu;
    // 7F3ADC8C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ADC90:
    // 7F3ADC90: and.   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] & ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADC94:
    // 7F3ADC94: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADC98:
    ctx->downcount -= 4;
    // 7F3ADC98: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F3ADC9C:
    // 7F3ADC9C: addi    r6, r6, 128
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(128);

label_7F3ADCA0:
    // 7F3ADCA0: and.   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3ADCA4:
    // 7F3ADCA4: bc    4, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADCA8:
    ctx->downcount -= 2;
    // 7F3ADCA8: cmpwi   r8, 0
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

label_7F3ADCAC:
    // 7F3ADCAC: bc    4, 2, 0x7F3ADCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCC4;
        }
    }

label_7F3ADCB0:
    ctx->pc = 0x7F3ADCB0u;
    ctx->downcount -= 3;
    // 7F3ADCB0: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADCB4:
    // 7F3ADCB4: cmpwi   r0, 0
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

label_7F3ADCB8:
    // 7F3ADCB8: bc    12, 2, 0x7F3ADCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCC4;
        }
    }

label_7F3ADCBC:
    ctx->downcount -= 2;
    // 7F3ADCBC: and.   r0, r0, r21
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

label_7F3ADCC0:
    // 7F3ADCC0: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADCC4:
    ctx->pc = 0x7F3ADCC4u;
    ctx->downcount -= 3;
    // 7F3ADCC4: lha     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3ADCC8:
    // 7F3ADCC8: cmpwi   r0, 2
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

label_7F3ADCCC:
    // 7F3ADCCC: bc    12, 2, 0x7F3ADCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADCE8;
        }
    }

label_7F3ADCD0:
    ctx->downcount -= 6;
    // 7F3ADCD0: add   r6, r22, r5
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3ADCD4:
    // 7F3ADCD4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3ADCD8:
    ctx->pc = 0x7F3ADCD8u;
    // 7F3ADCD8: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3ADCDC:
    // 7F3ADCDC: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_7F3ADCE0:
    ctx->pc = 0x7F3ADCE0u;
    // 7F3ADCE0: lwz     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADCE4:
    ctx->pc = 0x7F3ADCE4u;
    // 7F3ADCE4: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADCE8:
    ctx->downcount -= 2;
    // 7F3ADCE8: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F3ADCEC:
    // 7F3ADCEC: bc    16, 0, 0x7F3ADBFC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADBFCu;
                return;
            }
            goto label_7F3ADBFC;
        }
    }

label_7F3ADCF0:
    ctx->pc = 0x7F3ADCF0u;
    ctx->downcount -= 2;
    // 7F3ADCF0: cmpwi   r4, 0
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

label_7F3ADCF4:
    ctx->pc = 0x7F3ADCF4u;
    // 7F3ADCF4: bc    12, 2, 0x7F3AE114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE114;
        }
    }

label_7F3ADCF8:
    ctx->pc = 0x7F3ADCF8u;
    ctx->downcount -= 11;
    // 7F3ADCF8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ADCFC:
    ctx->pc = 0x7F3ADCFCu;
    // 7F3ADCFC: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3ADD00:
    ctx->pc = 0x7F3ADD00u;
    // 7F3ADD00: addi    r0, r3, 15512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15512);

label_7F3ADD04:
    ctx->pc = 0x7F3ADD04u;
    // 7F3ADD04: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3ADD08:
    ctx->pc = 0x7F3ADD08u;
    // 7F3ADD08: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3ADD0C:
    ctx->pc = 0x7F3ADD0Cu;
    // 7F3ADD0C: addi    r7, r5, -27304
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-27304);

label_7F3ADD10:
    ctx->pc = 0x7F3ADD10u;
    // 7F3ADD10: addi    r6, r3, -27320
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-27320);

label_7F3ADD14:
    ctx->pc = 0x7F3ADD14u;
    // 7F3ADD14: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F3ADD18:
    ctx->pc = 0x7F3ADD18u;
    // 7F3ADD18: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3ADD1C:
    ctx->pc = 0x7F3ADD1Cu;
    // 7F3ADD1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADD20:
    ctx->pc = 0x7F3ADD20u;
    // 7F3ADD20: b       0x7F3ADD8C
    {
            goto label_7F3ADD8C;
    }

label_7F3ADD24:
    ctx->pc = 0x7F3ADD24u;
    ctx->downcount -= 8;
    // 7F3ADD24: lwz     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3ADD28:
    // 7F3ADD28: add   r9, r22, r3
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F3ADD2C:
    // 7F3ADD2C: or   r20, r7, r7
    {
        ctx->gpr[20] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3ADD30:
    // 7F3ADD30: addi    r8, r9, 4
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(4);

label_7F3ADD34:
    ctx->pc = 0x7F3ADD34u;
    // 7F3ADD34: mtctr    r11
    ctx->ctr = ctx->gpr[11];

label_7F3ADD38:
    // 7F3ADD38: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ADD3C:
    // 7F3ADD3C: bc    4, 1, 0x7F3ADD84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADD84;
        }
    }

label_7F3ADD40:
    ctx->pc = 0x7F3ADD40u;
    ctx->downcount -= 5;
    // 7F3ADD40: lwz     r12, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F3ADD44:
    ctx->pc = 0x7F3ADD44u;
    // 7F3ADD44: lwz     r5, 816(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(816);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ADD48:
    ctx->pc = 0x7F3ADD48u;
    // 7F3ADD48: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADD4C:
    // 7F3ADD4C: rlwinm. r0, r0, 0, 30, 30
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

label_7F3ADD50:
    // 7F3ADD50: bc    4, 2, 0x7F3ADD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADD78;
        }
    }

label_7F3ADD54:
    ctx->pc = 0x7F3ADD54u;
    ctx->downcount -= 4;
    // 7F3ADD54: lwz     r5, 804(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(804);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ADD58:
    ctx->pc = 0x7F3ADD58u;
    // 7F3ADD58: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADD5C:
    // 7F3ADD5C: cmpw    r5, r0
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

label_7F3ADD60:
    // 7F3ADD60: bc    4, 2, 0x7F3ADD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADD78;
        }
    }

label_7F3ADD64:
    ctx->pc = 0x7F3ADD64u;
    ctx->downcount -= 5;
    // 7F3ADD64: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADD68:
    // 7F3ADD68: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F3ADD6C:
    ctx->pc = 0x7F3ADD6Cu;
    // 7F3ADD6C: stw     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADD70:
    ctx->pc = 0x7F3ADD70u;
    // 7F3ADD70: stw     r12, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3ADD74:
    // 7F3ADD74: addi    r23, r23, 8
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(8);

label_7F3ADD78:
    ctx->downcount -= 3;
    // 7F3ADD78: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_7F3ADD7C:
    // 7F3ADD7C: addi    r11, r11, -1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-1);

label_7F3ADD80:
    // 7F3ADD80: bc    16, 0, 0x7F3ADD40
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADD40u;
                return;
            }
            goto label_7F3ADD40;
        }
    }

label_7F3ADD84:
    ctx->downcount -= 2;
    // 7F3ADD84: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3ADD88:
    // 7F3ADD88: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F3ADD8C:
    ctx->downcount -= 2;
    // 7F3ADD8C: cmpw    r10, r4
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ADD90:
    // 7F3ADD90: bc    12, 0, 0x7F3ADD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADD24u;
                return;
            }
            goto label_7F3ADD24;
        }
    }

label_7F3ADD94:
    ctx->pc = 0x7F3ADD94u;
    ctx->downcount -= 2;
    // 7F3ADD94: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3ADD98:
    ctx->pc = 0x7F3ADD98u;
    // 7F3ADD98: bc    12, 2, 0x7F3AE114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE114;
        }
    }

label_7F3ADD9C:
    ctx->pc = 0x7F3ADD9Cu;
    ctx->downcount -= 2;
    // 7F3ADD9C: li      r22, -1
    ctx->gpr[22] = (u32)(s32)(-1);

label_7F3ADDA0:
    ctx->pc = 0x7F3ADDA0u;
    // 7F3ADDA0: bl      0x7F3B8900
    {
            ctx->lr = 0x7F3ADDA4u;
            ctx->pc = 0x7F3B8900u;
            return;
    }

label_7F3ADDA4:
    ctx->pc = 0x7F3ADDA4u;
    ctx->downcount -= 3;
    // 7F3ADDA4: addi    r3, r28, 192
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(192);

label_7F3ADDA8:
    ctx->pc = 0x7F3ADDA8u;
    // 7F3ADDA8: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F3ADDAC:
    ctx->pc = 0x7F3ADDACu;
    // 7F3ADDAC: bl      0x7F114E28
    {
            ctx->lr = 0x7F3ADDB0u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3ADDB0:
    ctx->pc = 0x7F3ADDB0u;
    ctx->downcount -= 9;
    // 7F3ADDB0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F3ADDB4:
    ctx->pc = 0x7F3ADDB4u;
    // 7F3ADDB4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3ADDB8:
    ctx->pc = 0x7F3ADDB8u;
    // 7F3ADDB8: addi    r25, r4, -1740
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(-1740);

label_7F3ADDBC:
    ctx->pc = 0x7F3ADDBCu;
    // 7F3ADDBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ADDC0:
    ctx->pc = 0x7F3ADDC0u;
    // 7F3ADDC0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ADDC4:
    ctx->pc = 0x7F3ADDC4u;
    // 7F3ADDC4: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADDC8:
    ctx->pc = 0x7F3ADDC8u;
    // 7F3ADDC8: addi    r27, r3, -12084
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-12084);

label_7F3ADDCC:
    ctx->pc = 0x7F3ADDCCu;
    // 7F3ADDCC: addi    r26, r4, 15512
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(15512);

label_7F3ADDD0:
    ctx->pc = 0x7F3ADDD0u;
    // 7F3ADDD0: b       0x7F3AE0E0
    {
            goto label_7F3AE0E0;
    }

label_7F3ADDD4:
    ctx->downcount -= 3;
    // 7F3ADDD4: or   r23, r26, r26
    {
        ctx->gpr[23] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3ADDD8:
    // 7F3ADDD8: or   r24, r21, r21
    {
        ctx->gpr[24] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3ADDDC:
    // 7F3ADDDC: b       0x7F3AE0CC
    {
            goto label_7F3AE0CC;
    }

label_7F3ADDE0:
    ctx->pc = 0x7F3ADDE0u;
    ctx->downcount -= 4;
    // 7F3ADDE0: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADDE4:
    // 7F3ADDE4: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F3ADDE8:
    // 7F3ADDE8: cmpw    r4, r22
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

label_7F3ADDEC:
    // 7F3ADDEC: bc    12, 2, 0x7F3ADE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADE08;
        }
    }

label_7F3ADDF0:
    ctx->downcount -= 6;
    // 7F3ADDF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3ADDF4:
    // 7F3ADDF4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3ADDF8:
    ctx->pc = 0x7F3ADDF8u;
    // 7F3ADDF8: sth     r0, 840(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(840);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3ADDFC:
    ctx->pc = 0x7F3ADDFCu;
    // 7F3ADDFC: lwz     r0, 824(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADE00:
    ctx->pc = 0x7F3ADE00u;
    // 7F3ADE00: lwz     r22, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3ADE04:
    ctx->pc = 0x7F3ADE04u;
    // 7F3ADE04: stw     r0, -31004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADE08:
    ctx->pc = 0x7F3ADE08u;
    ctx->downcount -= 3;
    // 7F3ADE08: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADE0C:
    ctx->pc = 0x7F3ADE0Cu;
    // 7F3ADE0C: lbz     r3, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3ADE10:
    // 7F3ADE10: bl      0x7F3AC52C
    {
            ctx->lr = 0x7F3ADE14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC52Cu;
                return;
            }
            goto label_7F3AC52C;
    }

label_7F3ADE14:
    ctx->pc = 0x7F3ADE14u;
    ctx->downcount -= 3;
    // 7F3ADE14: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADE18:
    // 7F3ADE18: cmpwi   r0, 1
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

label_7F3ADE1C:
    // 7F3ADE1C: bc    4, 2, 0x7F3ADE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADE40;
        }
    }

label_7F3ADE20:
    ctx->downcount -= 2;
    // 7F3ADE20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADE24:
    // 7F3ADE24: bl      0x800455BC
    {
            ctx->lr = 0x7F3ADE28u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3ADE28:
    ctx->downcount -= 2;
    // 7F3ADE28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ADE2C:
    // 7F3ADE2C: bl      0x800455E0
    {
            ctx->lr = 0x7F3ADE30u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ADE30:
    ctx->downcount -= 2;
    // 7F3ADE30: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ADE34:
    // 7F3ADE34: bl      0x800455E0
    {
            ctx->lr = 0x7F3ADE38u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ADE38:
    ctx->downcount -= 2;
    // 7F3ADE38: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3ADE3C:
    // 7F3ADE3C: bl      0x800455E0
    {
            ctx->lr = 0x7F3ADE40u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F3ADE40:
    ctx->pc = 0x7F3ADE40u;
    ctx->downcount -= 4;
    // 7F3ADE40: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADE44:
    ctx->pc = 0x7F3ADE44u;
    // 7F3ADE44: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADE48:
    // 7F3ADE48: rlwinm. r0, r0, 0, 12, 12
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

label_7F3ADE4C:
    // 7F3ADE4C: bc    4, 2, 0x7F3ADE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADE5C;
        }
    }

label_7F3ADE50:
    ctx->pc = 0x7F3ADE50u;
    ctx->downcount -= 3;
    // 7F3ADE50: lwz     r0, 900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADE54:
    // 7F3ADE54: rlwinm. r0, r0, 0, 30, 30
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

label_7F3ADE58:
    // 7F3ADE58: bc    12, 2, 0x7F3ADE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADE6C;
        }
    }

label_7F3ADE5C:
    ctx->downcount -= 3;
    // 7F3ADE5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ADE60:
    // 7F3ADE60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3ADE64:
    // 7F3ADE64: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3ADE68u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3ADE68:
    ctx->downcount -= 1;
    // 7F3ADE68: li      r20, 1
    ctx->gpr[20] = (u32)(s32)(1);

label_7F3ADE6C:
    ctx->pc = 0x7F3ADE6Cu;
    ctx->downcount -= 4;
    // 7F3ADE6C: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADE70:
    ctx->pc = 0x7F3ADE70u;
    // 7F3ADE70: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADE74:
    // 7F3ADE74: rlwinm. r0, r4, 0, 29, 29
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

label_7F3ADE78:
    // 7F3ADE78: bc    12, 2, 0x7F3ADE88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADE88;
        }
    }

label_7F3ADE7C:
    ctx->downcount -= 2;
    // 7F3ADE7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADE80:
    // 7F3ADE80: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3ADE84u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3ADE84:
    ctx->downcount -= 1;
    // 7F3ADE84: b       0x7F3ADEBC
    {
            goto label_7F3ADEBC;
    }

label_7F3ADE88:
    ctx->downcount -= 4;
    // 7F3ADE88: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3ADE8C:
    ctx->pc = 0x7F3ADE8Cu;
    // 7F3ADE8C: lwz     r0, -12084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADE90:
    // 7F3ADE90: rlwinm. r0, r0, 0, 31, 31
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

label_7F3ADE94:
    // 7F3ADE94: bc    12, 2, 0x7F3ADEB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADEB4;
        }
    }

label_7F3ADE98:
    ctx->downcount -= 2;
    // 7F3ADE98: rlwinm. r0, r4, 0, 23, 23
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

label_7F3ADE9C:
    // 7F3ADE9C: bc    4, 2, 0x7F3ADEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADEA8;
        }
    }

label_7F3ADEA0:
    ctx->downcount -= 2;
    // 7F3ADEA0: rlwinm. r0, r4, 0, 2, 2
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

label_7F3ADEA4:
    // 7F3ADEA4: bc    12, 2, 0x7F3ADEB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADEB4;
        }
    }

label_7F3ADEA8:
    ctx->downcount -= 2;
    // 7F3ADEA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADEAC:
    // 7F3ADEAC: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3ADEB0u;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3ADEB0:
    ctx->downcount -= 1;
    // 7F3ADEB0: b       0x7F3ADEBC
    {
            goto label_7F3ADEBC;
    }

label_7F3ADEB4:
    ctx->downcount -= 2;
    // 7F3ADEB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ADEB8:
    // 7F3ADEB8: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3ADEBCu;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3ADEBC:
    ctx->pc = 0x7F3ADEBCu;
    ctx->downcount -= 3;
    // 7F3ADEBC: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADEC0:
    ctx->pc = 0x7F3ADEC0u;
    // 7F3ADEC0: lwz     r3, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADEC4:
    // 7F3ADEC4: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3ADEC8u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3ADEC8:
    ctx->pc = 0x7F3ADEC8u;
    ctx->downcount -= 4;
    // 7F3ADEC8: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADECC:
    // 7F3ADECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADED0:
    // 7F3ADED0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3ADED4:
    // 7F3ADED4: bc    12, 2, 0x7F3ADEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADEE8;
        }
    }

label_7F3ADED8:
    ctx->pc = 0x7F3ADED8u;
    ctx->downcount -= 4;
    // 7F3ADED8: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADEDC:
    ctx->pc = 0x7F3ADEDCu;
    // 7F3ADEDC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADEE0:
    // 7F3ADEE0: rlwinm. r0, r0, 0, 23, 23
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

label_7F3ADEE4:
    // 7F3ADEE4: bc    4, 2, 0x7F3ADF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADF08;
        }
    }

label_7F3ADEE8:
    ctx->downcount -= 4;
    // 7F3ADEE8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3ADEEC:
    ctx->pc = 0x7F3ADEECu;
    // 7F3ADEEC: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADEF0:
    // 7F3ADEF0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3ADEF4:
    // 7F3ADEF4: bc    4, 2, 0x7F3ADF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADF08;
        }
    }

label_7F3ADEF8:
    ctx->pc = 0x7F3ADEF8u;
    ctx->downcount -= 4;
    // 7F3ADEF8: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADEFC:
    ctx->pc = 0x7F3ADEFCu;
    // 7F3ADEFC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADF00:
    // 7F3ADF00: rlwinm. r0, r0, 0, 8, 8
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

label_7F3ADF04:
    // 7F3ADF04: bc    12, 2, 0x7F3ADF0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3ADF0C;
        }
    }

label_7F3ADF08:
    ctx->downcount -= 1;
    // 7F3ADF08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3ADF0C:
    ctx->pc = 0x7F3ADF0Cu;
    ctx->downcount -= 2;
    // 7F3ADF0C: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADF10:
    // 7F3ADF10: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3ADF14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3ADF14:
    ctx->pc = 0x7F3ADF14u;
    ctx->downcount -= 4;
    // 7F3ADF14: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADF18:
    ctx->pc = 0x7F3ADF18u;
    // 7F3ADF18: lbz     r0, 119(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(119);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3ADF1C:
    // 7F3ADF1C: cmplwi  r0, 0x00FF
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

label_7F3ADF20:
    // 7F3ADF20: bc    12, 2, 0x7F3AE0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE0A0;
        }
    }

label_7F3ADF24:
    ctx->downcount -= 1;
    // 7F3ADF24: bl      0x7F3AD9B0
    {
            ctx->lr = 0x7F3ADF28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AD9B0u;
                return;
            }
            goto label_7F3AD9B0;
    }

label_7F3ADF28:
    ctx->downcount -= 2;
    // 7F3ADF28: cmpwi   r3, 0
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

label_7F3ADF2C:
    // 7F3ADF2C: bc    12, 2, 0x7F3AE0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE0A0;
        }
    }

label_7F3ADF30:
    ctx->downcount -= 7;
    // 7F3ADF30: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3ADF34:
    // 7F3ADF34: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3ADF38:
    // 7F3ADF38: addi    r6, r3, 15488
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(15488);

label_7F3ADF3C:
    ctx->pc = 0x7F3ADF3Cu;
    // 7F3ADF3C: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADF40:
    // 7F3ADF40: addi    r5, r4, 32392
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32392);

label_7F3ADF44:
    ctx->pc = 0x7F3ADF44u;
    // 7F3ADF44: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADF48:
    // 7F3ADF48: bl      0x7F3ADA54
    {
            ctx->lr = 0x7F3ADF4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADA54u;
                return;
            }
            goto label_7F3ADA54;
    }

label_7F3ADF4C:
    ctx->downcount -= 2;
    // 7F3ADF4C: cmpwi   r3, -1
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

label_7F3ADF50:
    // 7F3ADF50: bc    12, 2, 0x7F3AE0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE0A0;
        }
    }

label_7F3ADF54:
    ctx->downcount -= 11;
    // 7F3ADF54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3ADF58:
    // 7F3ADF58: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3ADF5C:
    ctx->pc = 0x7F3ADF5Cu;
    // 7F3ADF5C: stw     r0, 20(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADF60:
    // 7F3ADF60: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3ADF64:
    // 7F3ADF64: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3ADF68:
    // 7F3ADF68: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3ADF6C:
    ctx->pc = 0x7F3ADF6Cu;
    // 7F3ADF6C: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADF70:
    ctx->pc = 0x7F3ADF70u;
    // 7F3ADF70: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ADF74:
    ctx->pc = 0x7F3ADF74u;
    // 7F3ADF74: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ADF78:
    ctx->pc = 0x7F3ADF78u;
    // 7F3ADF78: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ADF7C:
    // 7F3ADF7C: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3ADF80u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3ADF80:
    ctx->downcount -= 2;
    // 7F3ADF80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADF84:
    // 7F3ADF84: bl      0x8004628C
    {
            ctx->lr = 0x7F3ADF88u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3ADF88:
    ctx->downcount -= 2;
    // 7F3ADF88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADF8C:
    // 7F3ADF8C: bl      0x800462B8
    {
            ctx->lr = 0x7F3ADF90u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3ADF90:
    ctx->downcount -= 2;
    // 7F3ADF90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADF94:
    // 7F3ADF94: bl      0x80046318
    {
            ctx->lr = 0x7F3ADF98u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3ADF98:
    ctx->downcount -= 6;
    // 7F3ADF98: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3ADF9C:
    // 7F3ADF9C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F3ADFA0:
    // 7F3ADFA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3ADFA4:
    // 7F3ADFA4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3ADFA8:
    // 7F3ADFA8: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3ADFAC:
    // 7F3ADFAC: bl      0x80045C5C
    {
            ctx->lr = 0x7F3ADFB0u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3ADFB0:
    ctx->pc = 0x7F3ADFB0u;
    ctx->downcount -= 4;
    // 7F3ADFB0: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3ADFB4:
    // 7F3ADFB4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3ADFB8:
    // 7F3ADFB8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3ADFBC:
    // 7F3ADFBC: bl      0x7F3AE274
    {
            ctx->lr = 0x7F3ADFC0u;
            goto label_7F3AE274;
    }

label_7F3ADFC0:
    ctx->downcount -= 12;
    // 7F3ADFC0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3ADFC4:
    ctx->pc = 0x7F3ADFC4u;
    // 7F3ADFC4: lwz     r10, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3ADFC8:
    ctx->pc = 0x7F3ADFC8u;
    // 7F3ADFC8: stw     r0, 20(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3ADFCC:
    // 7F3ADFCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3ADFD0:
    // 7F3ADFD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3ADFD4:
    // 7F3ADFD4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3ADFD8:
    ctx->pc = 0x7F3ADFD8u;
    // 7F3ADFD8: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3ADFDC:
    ctx->pc = 0x7F3ADFDCu;
    // 7F3ADFDC: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3ADFE0:
    ctx->pc = 0x7F3ADFE0u;
    // 7F3ADFE0: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3ADFE4:
    ctx->pc = 0x7F3ADFE4u;
    // 7F3ADFE4: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3ADFE8:
    ctx->pc = 0x7F3ADFE8u;
    // 7F3ADFE8: lwz     r10, 308(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(308);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3ADFEC:
    // 7F3ADFEC: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3ADFF0u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3ADFF0:
    ctx->downcount -= 5;
    // 7F3ADFF0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3ADFF4:
    // 7F3ADFF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3ADFF8:
    ctx->pc = 0x7F3ADFF8u;
    // 7F3ADFF8: lwz     r0, -12084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3ADFFC:
    // 7F3ADFFC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AE000:
    // 7F3AE000: bc    12, 2, 0x7F3AE014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE014;
        }
    }

label_7F3AE004:
    ctx->pc = 0x7F3AE004u;
    ctx->downcount -= 4;
    // 7F3AE004: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE008:
    ctx->pc = 0x7F3AE008u;
    // 7F3AE008: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE00C:
    // 7F3AE00C: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AE010:
    // 7F3AE010: bc    4, 2, 0x7F3AE034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE034;
        }
    }

label_7F3AE014:
    ctx->downcount -= 4;
    // 7F3AE014: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AE018:
    ctx->pc = 0x7F3AE018u;
    // 7F3AE018: lwz     r0, -26368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE01C:
    // 7F3AE01C: rlwinm. r0, r0, 0, 31, 31
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

label_7F3AE020:
    // 7F3AE020: bc    4, 2, 0x7F3AE034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE034;
        }
    }

label_7F3AE024:
    ctx->pc = 0x7F3AE024u;
    ctx->downcount -= 4;
    // 7F3AE024: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE028:
    ctx->pc = 0x7F3AE028u;
    // 7F3AE028: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE02C:
    // 7F3AE02C: rlwinm. r0, r0, 0, 8, 8
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

label_7F3AE030:
    // 7F3AE030: bc    12, 2, 0x7F3AE038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE038;
        }
    }

label_7F3AE034:
    ctx->downcount -= 1;
    // 7F3AE034: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE038:
    ctx->pc = 0x7F3AE038u;
    ctx->downcount -= 2;
    // 7F3AE038: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE03C:
    // 7F3AE03C: bl      0x7F3AC5AC
    {
            ctx->lr = 0x7F3AE040u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC5ACu;
                return;
            }
            goto label_7F3AC5AC;
    }

label_7F3AE040:
    ctx->downcount -= 4;
    // 7F3AE040: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE044:
    // 7F3AE044: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AE048:
    // 7F3AE048: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AE04C:
    // 7F3AE04C: bl      0x800462E4
    {
            ctx->lr = 0x7F3AE050u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AE050:
    ctx->pc = 0x7F3AE050u;
    ctx->downcount -= 4;
    // 7F3AE050: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE054:
    // 7F3AE054: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE058:
    // 7F3AE058: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE05C:
    // 7F3AE05C: bl      0x7F3AE274
    {
            ctx->lr = 0x7F3AE060u;
            goto label_7F3AE274;
    }

label_7F3AE060:
    ctx->downcount -= 4;
    // 7F3AE060: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE064:
    // 7F3AE064: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AE068:
    // 7F3AE068: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AE06C:
    // 7F3AE06C: bl      0x800462E4
    {
            ctx->lr = 0x7F3AE070u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AE070:
    ctx->downcount -= 2;
    // 7F3AE070: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE074:
    // 7F3AE074: bl      0x8004628C
    {
            ctx->lr = 0x7F3AE078u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3AE078:
    ctx->pc = 0x7F3AE078u;
    ctx->downcount -= 9;
    // 7F3AE078: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE07C:
    // 7F3AE07C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE080:
    ctx->pc = 0x7F3AE080u;
    // 7F3AE080: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE084:
    // 7F3AE084: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE088:
    ctx->pc = 0x7F3AE088u;
    // 7F3AE088: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE08C:
    // 7F3AE08C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AE090:
    ctx->pc = 0x7F3AE090u;
    // 7F3AE090: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AE094:
    // 7F3AE094: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AE098:
    // 7F3AE098: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AE09Cu;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AE09C:
    ctx->downcount -= 1;
    // 7F3AE09C: b       0x7F3AE0B0
    {
            goto label_7F3AE0B0;
    }

label_7F3AE0A0:
    ctx->pc = 0x7F3AE0A0u;
    ctx->downcount -= 4;
    // 7F3AE0A0: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE0A4:
    // 7F3AE0A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE0A8:
    // 7F3AE0A8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE0AC:
    // 7F3AE0AC: bl      0x7F3AE274
    {
            ctx->lr = 0x7F3AE0B0u;
            goto label_7F3AE274;
    }

label_7F3AE0B0:
    ctx->downcount -= 2;
    // 7F3AE0B0: cmpwi   r20, 0
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

label_7F3AE0B4:
    // 7F3AE0B4: bc    12, 2, 0x7F3AE0C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE0C4;
        }
    }

label_7F3AE0B8:
    ctx->downcount -= 3;
    // 7F3AE0B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE0BC:
    // 7F3AE0BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE0C0:
    // 7F3AE0C0: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AE0C4u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AE0C4:
    ctx->downcount -= 2;
    // 7F3AE0C4: addi    r23, r23, 8
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(8);

label_7F3AE0C8:
    // 7F3AE0C8: addi    r24, r24, -1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-1);

label_7F3AE0CC:
    ctx->downcount -= 2;
    // 7F3AE0CC: cmpwi   r24, 0
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

label_7F3AE0D0:
    // 7F3AE0D0: bc    12, 1, 0x7F3ADDE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADDE0u;
                return;
            }
            goto label_7F3ADDE0;
        }
    }

label_7F3AE0D4:
    ctx->pc = 0x7F3AE0D4u;
    ctx->downcount -= 3;
    // 7F3AE0D4: lwz     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE0D8:
    // 7F3AE0D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AE0DC:
    ctx->pc = 0x7F3AE0DCu;
    // 7F3AE0DC: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE0E0:
    ctx->pc = 0x7F3AE0E0u;
    ctx->downcount -= 3;
    // 7F3AE0E0: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE0E4:
    // 7F3AE0E4: cmpwi   r0, 2
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

label_7F3AE0E8:
    // 7F3AE0E8: bc    12, 0, 0x7F3ADDD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADDD4u;
                return;
            }
            goto label_7F3ADDD4;
        }
    }

label_7F3AE0EC:
    ctx->pc = 0x7F3AE0ECu;
    ctx->downcount -= 4;
    // 7F3AE0EC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AE0F0:
    ctx->pc = 0x7F3AE0F0u;
    // 7F3AE0F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE0F4:
    ctx->pc = 0x7F3AE0F4u;
    // 7F3AE0F4: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE0F8:
    ctx->pc = 0x7F3AE0F8u;
    // 7F3AE0F8: bl      0x80046318
    {
            ctx->lr = 0x7F3AE0FCu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AE0FC:
    ctx->pc = 0x7F3AE0FCu;
    ctx->downcount -= 6;
    // 7F3AE0FC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AE100:
    ctx->pc = 0x7F3AE100u;
    // 7F3AE100: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE104:
    ctx->pc = 0x7F3AE104u;
    // 7F3AE104: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE108:
    ctx->pc = 0x7F3AE108u;
    // 7F3AE108: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AE10C:
    ctx->pc = 0x7F3AE10Cu;
    // 7F3AE10C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AE110:
    ctx->pc = 0x7F3AE110u;
    // 7F3AE110: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AE114u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AE114:
    ctx->pc = 0x7F3AE114u;
    ctx->downcount -= 16;
    // 7F3AE114: lmw     r20, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AE118:
    ctx->pc = 0x7F3AE118u;
    // 7F3AE118: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE11C:
    ctx->pc = 0x7F3AE11Cu;
    // 7F3AE11C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AE120:
    ctx->pc = 0x7F3AE120u;
    // 7F3AE120: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_7F3AE124:
    ctx->pc = 0x7F3AE124u;
    // 7F3AE124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE128:
    ctx->pc = 0x7F3AE128u;
    ctx->downcount -= 20;
    // 7F3AE128: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AE12C:
    ctx->pc = 0x7F3AE12Cu;
    // 7F3AE12C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AE130:
    ctx->pc = 0x7F3AE130u;
    // 7F3AE130: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE134:
    ctx->pc = 0x7F3AE134u;
    // 7F3AE134: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AE138:
    ctx->pc = 0x7F3AE138u;
    // 7F3AE138: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AE13C:
    ctx->pc = 0x7F3AE13Cu;
    // 7F3AE13C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AE140:
    ctx->pc = 0x7F3AE140u;
    // 7F3AE140: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F3AE144:
    ctx->pc = 0x7F3AE144u;
    // 7F3AE144: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE148:
    ctx->pc = 0x7F3AE148u;
    // 7F3AE148: rlwinm. r0, r0, 0, 30, 30
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

label_7F3AE14C:
    ctx->pc = 0x7F3AE14Cu;
    // 7F3AE14C: bc    12, 2, 0x7F3AE154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE154;
        }
    }

label_7F3AE150:
    ctx->pc = 0x7F3AE150u;
    ctx->downcount -= 1;
    // 7F3AE150: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3AE154:
    ctx->pc = 0x7F3AE154u;
    ctx->downcount -= 9;
    // 7F3AE154: lwz     r4, 920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE158:
    ctx->pc = 0x7F3AE158u;
    // 7F3AE158: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE15C:
    ctx->pc = 0x7F3AE15Cu;
    // 7F3AE15C: lwz     r5, 924(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE160:
    ctx->pc = 0x7F3AE160u;
    // 7F3AE160: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE164:
    ctx->pc = 0x7F3AE164u;
    // 7F3AE164: lwz     r6, 928(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE168:
    ctx->pc = 0x7F3AE168u;
    // 7F3AE168: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3AE16C:
    ctx->pc = 0x7F3AE16Cu;
    // 7F3AE16C: lwz     r7, 932(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AE170:
    ctx->pc = 0x7F3AE170u;
    // 7F3AE170: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AE174:
    ctx->pc = 0x7F3AE174u;
    // 7F3AE174: bl      0x7F3B9168
    {
            ctx->lr = 0x7F3AE178u;
            ctx->pc = 0x7F3B9168u;
            return;
    }

label_7F3AE178:
    ctx->pc = 0x7F3AE178u;
    ctx->downcount -= 6;
    // 7F3AE178: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE17C:
    ctx->pc = 0x7F3AE17Cu;
    // 7F3AE17C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE180:
    ctx->pc = 0x7F3AE180u;
    // 7F3AE180: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE184:
    ctx->pc = 0x7F3AE184u;
    // 7F3AE184: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AE188:
    ctx->pc = 0x7F3AE188u;
    // 7F3AE188: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE18C:
    ctx->pc = 0x7F3AE18Cu;
    // 7F3AE18C: bl      0x7F3ADAF4
    {
            ctx->lr = 0x7F3AE190u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADAF4u;
                return;
            }
            goto label_7F3ADAF4;
    }

label_7F3AE190:
    ctx->pc = 0x7F3AE190u;
    ctx->downcount -= 2;
    // 7F3AE190: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE194:
    ctx->pc = 0x7F3AE194u;
    // 7F3AE194: bl      0x80046318
    {
            ctx->lr = 0x7F3AE198u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AE198:
    ctx->pc = 0x7F3AE198u;
    ctx->downcount -= 6;
    // 7F3AE198: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AE19C:
    ctx->pc = 0x7F3AE19Cu;
    // 7F3AE19C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE1A0:
    ctx->pc = 0x7F3AE1A0u;
    // 7F3AE1A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE1A4:
    ctx->pc = 0x7F3AE1A4u;
    // 7F3AE1A4: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AE1A8:
    ctx->pc = 0x7F3AE1A8u;
    // 7F3AE1A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AE1AC:
    ctx->pc = 0x7F3AE1ACu;
    // 7F3AE1AC: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AE1B0u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AE1B0:
    ctx->pc = 0x7F3AE1B0u;
    ctx->downcount -= 16;
    // 7F3AE1B0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AE1B4:
    ctx->pc = 0x7F3AE1B4u;
    // 7F3AE1B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE1B8:
    ctx->pc = 0x7F3AE1B8u;
    // 7F3AE1B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AE1BC:
    ctx->pc = 0x7F3AE1BCu;
    // 7F3AE1BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AE1C0:
    ctx->pc = 0x7F3AE1C0u;
    // 7F3AE1C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE1C4:
    ctx->pc = 0x7F3AE1C4u;
    ctx->downcount -= 20;
    // 7F3AE1C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AE1C8:
    ctx->pc = 0x7F3AE1C8u;
    // 7F3AE1C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AE1CC:
    ctx->pc = 0x7F3AE1CCu;
    // 7F3AE1CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE1D0:
    ctx->pc = 0x7F3AE1D0u;
    // 7F3AE1D0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AE1D4:
    ctx->pc = 0x7F3AE1D4u;
    // 7F3AE1D4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AE1D8:
    ctx->pc = 0x7F3AE1D8u;
    // 7F3AE1D8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AE1DC:
    ctx->pc = 0x7F3AE1DCu;
    // 7F3AE1DC: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_7F3AE1E0:
    ctx->pc = 0x7F3AE1E0u;
    // 7F3AE1E0: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE1E4:
    ctx->pc = 0x7F3AE1E4u;
    // 7F3AE1E4: rlwinm. r0, r0, 0, 30, 30
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

label_7F3AE1E8:
    ctx->pc = 0x7F3AE1E8u;
    // 7F3AE1E8: bc    12, 2, 0x7F3AE1F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE1F0;
        }
    }

label_7F3AE1EC:
    ctx->pc = 0x7F3AE1ECu;
    ctx->downcount -= 1;
    // 7F3AE1EC: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F3AE1F0:
    ctx->pc = 0x7F3AE1F0u;
    ctx->downcount -= 8;
    // 7F3AE1F0: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE1F4:
    ctx->pc = 0x7F3AE1F4u;
    // 7F3AE1F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE1F8:
    ctx->pc = 0x7F3AE1F8u;
    // 7F3AE1F8: lwz     r5, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE1FC:
    ctx->pc = 0x7F3AE1FCu;
    // 7F3AE1FC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AE200:
    ctx->pc = 0x7F3AE200u;
    // 7F3AE200: lwz     r6, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE204:
    ctx->pc = 0x7F3AE204u;
    // 7F3AE204: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE208:
    ctx->pc = 0x7F3AE208u;
    // 7F3AE208: lwz     r7, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AE20C:
    ctx->pc = 0x7F3AE20Cu;
    // 7F3AE20C: bl      0x7F3B9308
    {
            ctx->lr = 0x7F3AE210u;
            ctx->pc = 0x7F3B9308u;
            return;
    }

label_7F3AE210:
    ctx->pc = 0x7F3AE210u;
    ctx->downcount -= 10;
    // 7F3AE210: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F3AE214:
    ctx->pc = 0x7F3AE214u;
    // 7F3AE214: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AE218:
    ctx->pc = 0x7F3AE218u;
    // 7F3AE218: addi    r31, r3, -1740
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-1740);

label_7F3AE21C:
    ctx->pc = 0x7F3AE21Cu;
    // 7F3AE21C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE220:
    ctx->pc = 0x7F3AE220u;
    // 7F3AE220: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE224:
    ctx->pc = 0x7F3AE224u;
    // 7F3AE224: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE228:
    ctx->pc = 0x7F3AE228u;
    // 7F3AE228: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE22C:
    ctx->pc = 0x7F3AE22Cu;
    // 7F3AE22C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AE230:
    ctx->pc = 0x7F3AE230u;
    // 7F3AE230: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3AE234:
    ctx->pc = 0x7F3AE234u;
    // 7F3AE234: bl      0x7F3ADAF4
    {
            ctx->lr = 0x7F3AE238u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3ADAF4u;
                return;
            }
            goto label_7F3ADAF4;
    }

label_7F3AE238:
    ctx->pc = 0x7F3AE238u;
    ctx->downcount -= 4;
    // 7F3AE238: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AE23C:
    ctx->pc = 0x7F3AE23Cu;
    // 7F3AE23C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AE240:
    ctx->pc = 0x7F3AE240u;
    // 7F3AE240: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE244:
    ctx->pc = 0x7F3AE244u;
    // 7F3AE244: bl      0x80046318
    {
            ctx->lr = 0x7F3AE248u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AE248:
    ctx->pc = 0x7F3AE248u;
    ctx->downcount -= 6;
    // 7F3AE248: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AE24C:
    ctx->pc = 0x7F3AE24Cu;
    // 7F3AE24C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE250:
    ctx->pc = 0x7F3AE250u;
    // 7F3AE250: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE254:
    ctx->pc = 0x7F3AE254u;
    // 7F3AE254: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AE258:
    ctx->pc = 0x7F3AE258u;
    // 7F3AE258: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AE25C:
    ctx->pc = 0x7F3AE25Cu;
    // 7F3AE25C: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AE260u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AE260:
    ctx->pc = 0x7F3AE260u;
    ctx->downcount -= 16;
    // 7F3AE260: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AE264:
    ctx->pc = 0x7F3AE264u;
    // 7F3AE264: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE268:
    ctx->pc = 0x7F3AE268u;
    // 7F3AE268: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AE26C:
    ctx->pc = 0x7F3AE26Cu;
    // 7F3AE26C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AE270:
    ctx->pc = 0x7F3AE270u;
    // 7F3AE270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE274:
    ctx->pc = 0x7F3AE274u;
    ctx->downcount -= 22;
    // 7F3AE274: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AE278:
    ctx->pc = 0x7F3AE278u;
    // 7F3AE278: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AE27C:
    ctx->pc = 0x7F3AE27Cu;
    // 7F3AE27C: lis     r6, 32592
    ctx->gpr[6] = ((u32)(s32)(32592) << 16);

label_7F3AE280:
    ctx->pc = 0x7F3AE280u;
    // 7F3AE280: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE284:
    ctx->pc = 0x7F3AE284u;
    // 7F3AE284: stmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AE288:
    ctx->pc = 0x7F3AE288u;
    // 7F3AE288: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AE28C:
    ctx->pc = 0x7F3AE28Cu;
    // 7F3AE28C: addi    r31, r6, -21852
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-21852);

label_7F3AE290:
    ctx->pc = 0x7F3AE290u;
    // 7F3AE290: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AE294:
    ctx->pc = 0x7F3AE294u;
    // 7F3AE294: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AE298:
    ctx->pc = 0x7F3AE298u;
    // 7F3AE298: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AE29C:
    ctx->pc = 0x7F3AE29Cu;
    // 7F3AE29C: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3AE2A0:
    ctx->pc = 0x7F3AE2A0u;
    // 7F3AE2A0: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AE2A4u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AE2A4:
    ctx->pc = 0x7F3AE2A4u;
    ctx->downcount -= 3;
    // 7F3AE2A4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE2A8:
    ctx->pc = 0x7F3AE2A8u;
    // 7F3AE2A8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE2AC:
    ctx->pc = 0x7F3AE2ACu;
    // 7F3AE2AC: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F3AE2B0u;
            ctx->pc = 0x7F3ABF74u;
            return;
    }

label_7F3AE2B0:
    ctx->pc = 0x7F3AE2B0u;
    ctx->downcount -= 9;
    // 7F3AE2B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AE2B4:
    ctx->pc = 0x7F3AE2B4u;
    // 7F3AE2B4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AE2B8:
    ctx->pc = 0x7F3AE2B8u;
    // 7F3AE2B8: lwz     r5, 15488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE2BC:
    ctx->pc = 0x7F3AE2BCu;
    // 7F3AE2BC: addi    r3, r3, 32392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32392);

label_7F3AE2C0:
    ctx->pc = 0x7F3AE2C0u;
    // 7F3AE2C0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AE2C4:
    ctx->pc = 0x7F3AE2C4u;
    // 7F3AE2C4: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3AE2C8:
    ctx->pc = 0x7F3AE2C8u;
    // 7F3AE2C8: cmpwi   r5, 0
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

label_7F3AE2CC:
    ctx->pc = 0x7F3AE2CCu;
    // 7F3AE2CC: bc    4, 1, 0x7F3AE384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE384;
        }
    }

label_7F3AE2D0:
    ctx->pc = 0x7F3AE2D0u;
    ctx->downcount -= 5;
    // 7F3AE2D0: lwz     r4, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE2D4:
    ctx->pc = 0x7F3AE2D4u;
    // 7F3AE2D4: lwzx    r0, r3, r27
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE2D8:
    ctx->pc = 0x7F3AE2D8u;
    // 7F3AE2D8: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE2DC:
    // 7F3AE2DC: cmplw   r4, r0
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

label_7F3AE2E0:
    // 7F3AE2E0: bc    4, 2, 0x7F3AE37C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE37C;
        }
    }

label_7F3AE2E4:
    ctx->pc = 0x7F3AE2E4u;
    ctx->downcount -= 4;
    // 7F3AE2E4: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE2E8:
    // 7F3AE2E8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE2EC:
    // 7F3AE2EC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE2F0:
    // 7F3AE2F0: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3AE2F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC4B0u;
                return;
            }
            goto label_7F3AC4B0;
    }

label_7F3AE2F4:
    ctx->pc = 0x7F3AE2F4u;
    ctx->downcount -= 5;
    // 7F3AE2F4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE2F8:
    // 7F3AE2F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE2FC:
    // 7F3AE2FC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE300:
    // 7F3AE300: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AE304:
    // 7F3AE304: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3AE308u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC188u;
                return;
            }
            goto label_7F3AC188;
    }

label_7F3AE308:
    ctx->downcount -= 2;
    // 7F3AE308: cmpwi   r3, 0
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

label_7F3AE30C:
    // 7F3AE30C: bc    12, 2, 0x7F3AE328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE328;
        }
    }

label_7F3AE310:
    ctx->pc = 0x7F3AE310u;
    ctx->downcount -= 6;
    // 7F3AE310: lwz     r4, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE314:
    // 7F3AE314: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE318:
    ctx->pc = 0x7F3AE318u;
    // 7F3AE318: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE31C:
    // 7F3AE31C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE320:
    ctx->pc = 0x7F3AE320u;
    // 7F3AE320: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AE324:
    // 7F3AE324: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3AE328u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC438u;
                return;
            }
            goto label_7F3AC438;
    }

label_7F3AE328:
    ctx->pc = 0x7F3AE328u;
    ctx->downcount -= 3;
    // 7F3AE328: lwz     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE32C:
    // 7F3AE32C: rlwinm. r0, r0, 0, 3, 3
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

label_7F3AE330:
    // 7F3AE330: bc    4, 2, 0x7F3AE488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE488;
        }
    }

label_7F3AE334:
    ctx->pc = 0x7F3AE334u;
    ctx->downcount -= 17;
    // 7F3AE334: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE338:
    // 7F3AE338: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE33C:
    // 7F3AE33C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AE340:
    // 7F3AE340: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE344:
    ctx->pc = 0x7F3AE344u;
    // 7F3AE344: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE348:
    // 7F3AE348: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F3AE34C:
    // 7F3AE34C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE350:
    // 7F3AE350: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE354:
    ctx->pc = 0x7F3AE354u;
    // 7F3AE354: lwz     r10, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AE358:
    // 7F3AE358: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AE35C:
    // 7F3AE35C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE360:
    // 7F3AE360: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE364:
    ctx->pc = 0x7F3AE364u;
    // 7F3AE364: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3AE368:
    // 7F3AE368: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AE36C:
    ctx->pc = 0x7F3AE36Cu;
    // 7F3AE36C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE370:
    ctx->pc = 0x7F3AE370u;
    // 7F3AE370: lwzx    r3, r3, r27
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[27];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE374:
    // 7F3AE374: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3AE378u;
            ctx->pc = 0x7F3A96A4u;
            return;
    }

label_7F3AE378:
    ctx->downcount -= 1;
    // 7F3AE378: b       0x7F3AE488
    {
            goto label_7F3AE488;
    }

label_7F3AE37C:
    ctx->downcount -= 2;
    // 7F3AE37C: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F3AE380:
    // 7F3AE380: bc    16, 0, 0x7F3AE2D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE2D0u;
                return;
            }
            goto label_7F3AE2D0;
        }
    }

label_7F3AE384:
    ctx->pc = 0x7F3AE384u;
    ctx->downcount -= 2;
    // 7F3AE384: cmpwi   r5, 128
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

label_7F3AE388:
    ctx->pc = 0x7F3AE388u;
    // 7F3AE388: bc    12, 2, 0x7F3AE488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE488;
        }
    }

label_7F3AE38C:
    ctx->pc = 0x7F3AE38Cu;
    ctx->downcount -= 8;
    // 7F3AE38C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE390:
    ctx->pc = 0x7F3AE390u;
    // 7F3AE390: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE394:
    ctx->pc = 0x7F3AE394u;
    // 7F3AE394: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE398:
    ctx->pc = 0x7F3AE398u;
    // 7F3AE398: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE39C:
    ctx->pc = 0x7F3AE39Cu;
    // 7F3AE39C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AE3A0:
    ctx->pc = 0x7F3AE3A0u;
    // 7F3AE3A0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE3A4:
    ctx->pc = 0x7F3AE3A4u;
    // 7F3AE3A4: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE3A8:
    ctx->pc = 0x7F3AE3A8u;
    // 7F3AE3A8: bl      0x7F3A8E8C
    {
            ctx->lr = 0x7F3AE3ACu;
            ctx->pc = 0x7F3A8E8Cu;
            return;
    }

label_7F3AE3AC:
    ctx->pc = 0x7F3AE3ACu;
    ctx->downcount -= 18;
    // 7F3AE3AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AE3B0:
    ctx->pc = 0x7F3AE3B0u;
    // 7F3AE3B0: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AE3B4:
    ctx->pc = 0x7F3AE3B4u;
    // 7F3AE3B4: addi    r9, r4, 15488
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(15488);

label_7F3AE3B8:
    ctx->pc = 0x7F3AE3B8u;
    // 7F3AE3B8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AE3BC:
    ctx->pc = 0x7F3AE3BCu;
    // 7F3AE3BC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AE3C0:
    ctx->pc = 0x7F3AE3C0u;
    // 7F3AE3C0: addi    r7, r5, -32632
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-32632);

label_7F3AE3C4:
    ctx->pc = 0x7F3AE3C4u;
    // 7F3AE3C4: addi    r6, r4, 32392
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(32392);

label_7F3AE3C8:
    ctx->pc = 0x7F3AE3C8u;
    // 7F3AE3C8: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE3CC:
    ctx->pc = 0x7F3AE3CCu;
    // 7F3AE3CC: rlwinm r10, r8, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_7F3AE3D0:
    ctx->pc = 0x7F3AE3D0u;
    // 7F3AE3D0: addi    r0, r8, 1
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3AE3D4:
    ctx->pc = 0x7F3AE3D4u;
    // 7F3AE3D4: stwx    r3, r7, r10
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AE3D8:
    ctx->pc = 0x7F3AE3D8u;
    // 7F3AE3D8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE3DC:
    ctx->pc = 0x7F3AE3DCu;
    // 7F3AE3DC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE3E0:
    ctx->pc = 0x7F3AE3E0u;
    // 7F3AE3E0: lwz     r7, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AE3E4:
    ctx->pc = 0x7F3AE3E4u;
    // 7F3AE3E4: lwz     r7, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AE3E8:
    ctx->pc = 0x7F3AE3E8u;
    // 7F3AE3E8: stwx    r7, r6, r10
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE3EC:
    ctx->pc = 0x7F3AE3ECu;
    // 7F3AE3EC: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE3F0:
    ctx->pc = 0x7F3AE3F0u;
    // 7F3AE3F0: bl      0x7F3AC4B0
    {
            ctx->lr = 0x7F3AE3F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC4B0u;
                return;
            }
            goto label_7F3AC4B0;
    }

label_7F3AE3F4:
    ctx->pc = 0x7F3AE3F4u;
    ctx->downcount -= 5;
    // 7F3AE3F4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE3F8:
    ctx->pc = 0x7F3AE3F8u;
    // 7F3AE3F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE3FC:
    ctx->pc = 0x7F3AE3FCu;
    // 7F3AE3FC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE400:
    ctx->pc = 0x7F3AE400u;
    // 7F3AE400: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AE404:
    ctx->pc = 0x7F3AE404u;
    // 7F3AE404: bl      0x7F3AC188
    {
            ctx->lr = 0x7F3AE408u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC188u;
                return;
            }
            goto label_7F3AC188;
    }

label_7F3AE408:
    ctx->pc = 0x7F3AE408u;
    ctx->downcount -= 2;
    // 7F3AE408: cmpwi   r3, 0
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

label_7F3AE40C:
    ctx->pc = 0x7F3AE40Cu;
    // 7F3AE40C: bc    12, 2, 0x7F3AE428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE428;
        }
    }

label_7F3AE410:
    ctx->pc = 0x7F3AE410u;
    ctx->downcount -= 6;
    // 7F3AE410: lwz     r4, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AE414:
    ctx->pc = 0x7F3AE414u;
    // 7F3AE414: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE418:
    ctx->pc = 0x7F3AE418u;
    // 7F3AE418: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE41C:
    ctx->pc = 0x7F3AE41Cu;
    // 7F3AE41C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AE420:
    ctx->pc = 0x7F3AE420u;
    // 7F3AE420: lha     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AE424:
    ctx->pc = 0x7F3AE424u;
    // 7F3AE424: bl      0x7F3AC438
    {
            ctx->lr = 0x7F3AE428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AC438u;
                return;
            }
            goto label_7F3AC438;
    }

label_7F3AE428:
    ctx->pc = 0x7F3AE428u;
    ctx->downcount -= 3;
    // 7F3AE428: lwz     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE42C:
    ctx->pc = 0x7F3AE42Cu;
    // 7F3AE42C: rlwinm. r0, r0, 0, 3, 3
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

label_7F3AE430:
    ctx->pc = 0x7F3AE430u;
    // 7F3AE430: bc    4, 2, 0x7F3AE488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE488;
        }
    }

label_7F3AE434:
    ctx->pc = 0x7F3AE434u;
    ctx->downcount -= 21;
    // 7F3AE434: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AE438:
    ctx->pc = 0x7F3AE438u;
    // 7F3AE438: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE43C:
    ctx->pc = 0x7F3AE43Cu;
    // 7F3AE43C: addi    r11, r4, -32632
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(-32632);

label_7F3AE440:
    ctx->pc = 0x7F3AE440u;
    // 7F3AE440: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AE444:
    ctx->pc = 0x7F3AE444u;
    // 7F3AE444: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE448:
    ctx->pc = 0x7F3AE448u;
    // 7F3AE448: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AE44C:
    ctx->pc = 0x7F3AE44Cu;
    // 7F3AE44C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE450:
    ctx->pc = 0x7F3AE450u;
    // 7F3AE450: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AE454:
    ctx->pc = 0x7F3AE454u;
    // 7F3AE454: lwz     r8, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AE458:
    ctx->pc = 0x7F3AE458u;
    // 7F3AE458: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE45C:
    ctx->pc = 0x7F3AE45Cu;
    // 7F3AE45C: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3AE460:
    ctx->pc = 0x7F3AE460u;
    // 7F3AE460: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE464:
    ctx->pc = 0x7F3AE464u;
    // 7F3AE464: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE468:
    ctx->pc = 0x7F3AE468u;
    // 7F3AE468: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE46C:
    ctx->pc = 0x7F3AE46Cu;
    // 7F3AE46C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AE470:
    ctx->pc = 0x7F3AE470u;
    // 7F3AE470: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE474:
    ctx->pc = 0x7F3AE474u;
    // 7F3AE474: lwz     r0, 15488(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15488);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE478:
    ctx->pc = 0x7F3AE478u;
    // 7F3AE478: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AE47C:
    ctx->pc = 0x7F3AE47Cu;
    // 7F3AE47C: add   r3, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3AE480:
    ctx->pc = 0x7F3AE480u;
    // 7F3AE480: lwz     r3, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE484:
    ctx->pc = 0x7F3AE484u;
    // 7F3AE484: bl      0x7F3A96A4
    {
            ctx->lr = 0x7F3AE488u;
            ctx->pc = 0x7F3A96A4u;
            return;
    }

label_7F3AE488:
    ctx->pc = 0x7F3AE488u;
    ctx->downcount -= 16;
    // 7F3AE488: lmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AE48C:
    ctx->pc = 0x7F3AE48Cu;
    // 7F3AE48C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE490:
    ctx->pc = 0x7F3AE490u;
    // 7F3AE490: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AE494:
    ctx->pc = 0x7F3AE494u;
    // 7F3AE494: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3AE498:
    ctx->pc = 0x7F3AE498u;
    // 7F3AE498: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE49C:
    ctx->pc = 0x7F3AE49Cu;
    ctx->downcount -= 14;
    // 7F3AE49C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AE4A0:
    ctx->pc = 0x7F3AE4A0u;
    // 7F3AE4A0: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AE4A4:
    ctx->pc = 0x7F3AE4A4u;
    // 7F3AE4A4: addi    r6, r4, 15488
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15488);

label_7F3AE4A8:
    ctx->pc = 0x7F3AE4A8u;
    // 7F3AE4A8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AE4AC:
    ctx->pc = 0x7F3AE4ACu;
    // 7F3AE4AC: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AE4B0:
    ctx->pc = 0x7F3AE4B0u;
    // 7F3AE4B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AE4B4:
    ctx->pc = 0x7F3AE4B4u;
    // 7F3AE4B4: addi    r8, r5, -32632
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-32632);

label_7F3AE4B8:
    ctx->pc = 0x7F3AE4B8u;
    // 7F3AE4B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE4BC:
    ctx->pc = 0x7F3AE4BCu;
    // 7F3AE4BC: addi    r7, r4, 32392
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(32392);

label_7F3AE4C0:
    ctx->pc = 0x7F3AE4C0u;
    // 7F3AE4C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE4C4:
    ctx->pc = 0x7F3AE4C4u;
    // 7F3AE4C4: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F3AE4C8:
    ctx->pc = 0x7F3AE4C8u;
    // 7F3AE4C8: cmpwi   r9, 0
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

label_7F3AE4CC:
    ctx->pc = 0x7F3AE4CCu;
    // 7F3AE4CC: bc    4, 1, 0x7F3AE4FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE4FC;
        }
    }

label_7F3AE4D0:
    ctx->pc = 0x7F3AE4D0u;
    ctx->downcount -= 7;
    // 7F3AE4D0: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE4D4:
    ctx->pc = 0x7F3AE4D4u;
    // 7F3AE4D4: lwzx    r6, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AE4D8:
    ctx->pc = 0x7F3AE4D8u;
    // 7F3AE4D8: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE4DC:
    ctx->pc = 0x7F3AE4DCu;
    // 7F3AE4DC: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE4E0:
    ctx->pc = 0x7F3AE4E0u;
    // 7F3AE4E0: stwx    r6, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE4E4:
    // 7F3AE4E4: cmplw   r0, r3
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

label_7F3AE4E8:
    // 7F3AE4E8: bc    12, 2, 0x7F3AE4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE4F4;
        }
    }

label_7F3AE4EC:
    ctx->downcount -= 2;
    // 7F3AE4EC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AE4F0:
    // 7F3AE4F0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F3AE4F4:
    ctx->downcount -= 2;
    // 7F3AE4F4: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F3AE4F8:
    // 7F3AE4F8: bc    16, 0, 0x7F3AE4D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE4D0u;
                return;
            }
            goto label_7F3AE4D0;
        }
    }

label_7F3AE4FC:
    ctx->pc = 0x7F3AE4FCu;
    ctx->downcount -= 2;
    // 7F3AE4FC: cmpw    r10, r9
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

label_7F3AE500:
    ctx->pc = 0x7F3AE500u;
    // 7F3AE500: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE504:
    ctx->pc = 0x7F3AE504u;
    ctx->downcount -= 14;
    // 7F3AE504: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3AE508:
    ctx->pc = 0x7F3AE508u;
    // 7F3AE508: lis     r6, 32590
    ctx->gpr[6] = ((u32)(s32)(32590) << 16);

label_7F3AE50C:
    ctx->pc = 0x7F3AE50Cu;
    // 7F3AE50C: addi    r4, r3, 15488
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15488);

label_7F3AE510:
    ctx->pc = 0x7F3AE510u;
    // 7F3AE510: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3AE514:
    ctx->pc = 0x7F3AE514u;
    // 7F3AE514: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AE518:
    ctx->pc = 0x7F3AE518u;
    // 7F3AE518: rlwinm r8, r10, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F3AE51C:
    ctx->pc = 0x7F3AE51Cu;
    // 7F3AE51C: addi    r6, r6, -32632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32632);

label_7F3AE520:
    ctx->pc = 0x7F3AE520u;
    // 7F3AE520: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AE524:
    ctx->pc = 0x7F3AE524u;
    // 7F3AE524: addi    r5, r5, 32392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32392);

label_7F3AE528:
    ctx->pc = 0x7F3AE528u;
    // 7F3AE528: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AE52C:
    ctx->pc = 0x7F3AE52Cu;
    // 7F3AE52C: stwx    r7, r6, r8
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE530:
    ctx->pc = 0x7F3AE530u;
    // 7F3AE530: stwx    r7, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE534:
    ctx->pc = 0x7F3AE534u;
    // 7F3AE534: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE538:
    ctx->pc = 0x7F3AE538u;
    // 7F3AE538: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE53C:
    ctx->pc = 0x7F3AE53Cu;
    ctx->downcount -= 1;
    // 7F3AE53C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE540:
    ctx->pc = 0x7F3AE540u;
    ctx->downcount -= 5;
    // 7F3AE540: stw     r6, 920(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(920);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE544:
    ctx->pc = 0x7F3AE544u;
    // 7F3AE544: stw     r7, 924(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(924);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE548:
    ctx->pc = 0x7F3AE548u;
    // 7F3AE548: stw     r4, 928(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(928);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AE54C:
    ctx->pc = 0x7F3AE54Cu;
    // 7F3AE54C: stw     r5, 932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(932);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE550:
    ctx->pc = 0x7F3AE550u;
    // 7F3AE550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE554:
    ctx->pc = 0x7F3AE554u;
    ctx->downcount -= 1;
    // 7F3AE554: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE558:
    ctx->pc = 0x7F3AE558u;
    ctx->downcount -= 6;
    // 7F3AE558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE55C:
    ctx->pc = 0x7F3AE55Cu;
    // 7F3AE55C: cmpwi   r4, 0
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

label_7F3AE560:
    ctx->pc = 0x7F3AE560u;
    // 7F3AE560: stw     r5, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE564:
    ctx->pc = 0x7F3AE564u;
    // 7F3AE564: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AE568:
    ctx->pc = 0x7F3AE568u;
    // 7F3AE568: stw     r0, 904(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(904);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE56C:
    ctx->pc = 0x7F3AE56Cu;
    // 7F3AE56C: bc    4, 0, 0x7F3AE578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE578;
        }
    }

label_7F3AE570:
    ctx->pc = 0x7F3AE570u;
    ctx->downcount -= 2;
    // 7F3AE570: stw     r5, 908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(908);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE574:
    ctx->pc = 0x7F3AE574u;
    // 7F3AE574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE578:
    ctx->pc = 0x7F3AE578u;
    ctx->downcount -= 4;
    // 7F3AE578: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE57C:
    ctx->pc = 0x7F3AE57Cu;
    // 7F3AE57C: addi    r0, r4, 28460
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28460);

label_7F3AE580:
    ctx->pc = 0x7F3AE580u;
    // 7F3AE580: stw     r0, 908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(908);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE584:
    ctx->pc = 0x7F3AE584u;
    // 7F3AE584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE588:
    ctx->pc = 0x7F3AE588u;
    ctx->downcount -= 15;
    // 7F3AE588: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AE58C:
    ctx->pc = 0x7F3AE58Cu;
    // 7F3AE58C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AE590:
    ctx->pc = 0x7F3AE590u;
    // 7F3AE590: lis     r6, 32590
    ctx->gpr[6] = ((u32)(s32)(32590) << 16);

label_7F3AE594:
    ctx->pc = 0x7F3AE594u;
    // 7F3AE594: lis     r7, 32590
    ctx->gpr[7] = ((u32)(s32)(32590) << 16);

label_7F3AE598:
    ctx->pc = 0x7F3AE598u;
    // 7F3AE598: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE59C:
    ctx->pc = 0x7F3AE59Cu;
    // 7F3AE59C: addi    r0, r6, -30932
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-30932);

label_7F3AE5A0:
    ctx->pc = 0x7F3AE5A0u;
    // 7F3AE5A0: lwzu     r6, -30944(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-30944);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

label_7F3AE5A4:
    ctx->pc = 0x7F3AE5A4u;
    // 7F3AE5A4: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F3AE5A8:
    ctx->pc = 0x7F3AE5A8u;
    // 7F3AE5A8: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AE5AC:
    ctx->pc = 0x7F3AE5ACu;
    // 7F3AE5AC: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE5B0:
    ctx->pc = 0x7F3AE5B0u;
    // 7F3AE5B0: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE5B4:
    ctx->pc = 0x7F3AE5B4u;
    // 7F3AE5B4: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE5B8:
    ctx->pc = 0x7F3AE5B8u;
    // 7F3AE5B8: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AE5BC:
    ctx->pc = 0x7F3AE5BCu;
    // 7F3AE5BC: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE5C0:
    ctx->pc = 0x7F3AE5C0u;
    // 7F3AE5C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE5C4:
    ctx->pc = 0x7F3AE5C4u;
    ctx->downcount -= 6;
    // 7F3AE5C4: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AE5C8:
    ctx->pc = 0x7F3AE5C8u;
    // 7F3AE5C8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AE5CC:
    ctx->pc = 0x7F3AE5CCu;
    // 7F3AE5CC: addi    r7, r5, 28460
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(28460);

label_7F3AE5D0:
    ctx->pc = 0x7F3AE5D0u;
    // 7F3AE5D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE5D4:
    ctx->pc = 0x7F3AE5D4u;
    // 7F3AE5D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AE5D8:
    ctx->downcount -= 5;
    // 7F3AE5D8: add   r6, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AE5DC:
    // 7F3AE5DC: addi    r8, r6, 48
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(48);

label_7F3AE5E0:
    ctx->pc = 0x7F3AE5E0u;
    // 7F3AE5E0: lwz     r0, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE5E4:
    // 7F3AE5E4: cmpwi   r0, 0
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

label_7F3AE5E8:
    // 7F3AE5E8: bc    4, 2, 0x7F3AE62C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE62C;
        }
    }

label_7F3AE5EC:
    ctx->downcount -= 16;
    // 7F3AE5EC: lis     r6, 32590
    ctx->gpr[6] = ((u32)(s32)(32590) << 16);

label_7F3AE5F0:
    // 7F3AE5F0: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AE5F4:
    // 7F3AE5F4: addi    r7, r6, -30944
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-30944);

label_7F3AE5F8:
    ctx->pc = 0x7F3AE5F8u;
    // 7F3AE5F8: stw     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AE5FC:
    ctx->pc = 0x7F3AE5FCu;
    // 7F3AE5FC: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE600:
    // 7F3AE600: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE604:
    ctx->pc = 0x7F3AE604u;
    // 7F3AE604: stw     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE608:
    // 7F3AE608: addi    r5, r5, -30932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30932);

label_7F3AE60C:
    // 7F3AE60C: rlwinm r6, r0, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3AE610:
    // 7F3AE610: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AE614:
    // 7F3AE614: add   r5, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3AE618:
    ctx->pc = 0x7F3AE618u;
    // 7F3AE618: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE61C:
    // 7F3AE61C: or   r3, r8, r8
    {
        ctx->gpr[3] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AE620:
    ctx->pc = 0x7F3AE620u;
    // 7F3AE620: stw     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE624:
    ctx->pc = 0x7F3AE624u;
    // 7F3AE624: stw     r4, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AE628:
    ctx->pc = 0x7F3AE628u;
    // 7F3AE628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE62C:
    ctx->downcount -= 2;
    // 7F3AE62C: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F3AE630:
    // 7F3AE630: bc    16, 0, 0x7F3AE5D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE5D8u;
                return;
            }
            goto label_7F3AE5D8;
        }
    }

label_7F3AE634:
    ctx->pc = 0x7F3AE634u;
    ctx->downcount -= 2;
    // 7F3AE634: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AE638:
    ctx->pc = 0x7F3AE638u;
    // 7F3AE638: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE63C:
    ctx->pc = 0x7F3AE63Cu;
    ctx->downcount -= 2;
    // 7F3AE63C: cmpwi   r4, 0
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

label_7F3AE640:
    ctx->pc = 0x7F3AE640u;
    // 7F3AE640: bc    12, 2, 0x7F3AE654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE654;
        }
    }

label_7F3AE644:
    ctx->pc = 0x7F3AE644u;
    ctx->downcount -= 4;
    // 7F3AE644: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE648:
    ctx->pc = 0x7F3AE648u;
    // 7F3AE648: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F3AE64C:
    ctx->pc = 0x7F3AE64Cu;
    // 7F3AE64C: stw     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE650:
    ctx->pc = 0x7F3AE650u;
    // 7F3AE650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE654:
    ctx->pc = 0x7F3AE654u;
    ctx->downcount -= 4;
    // 7F3AE654: lwz     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE658:
    ctx->pc = 0x7F3AE658u;
    // 7F3AE658: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F3AE65C:
    ctx->pc = 0x7F3AE65Cu;
    // 7F3AE65C: stw     r0, 900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE660:
    ctx->pc = 0x7F3AE660u;
    // 7F3AE660: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE664:
    ctx->pc = 0x7F3AE664u;
    ctx->downcount -= 11;
    // 7F3AE664: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AE668:
    ctx->pc = 0x7F3AE668u;
    // 7F3AE668: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AE66C:
    ctx->pc = 0x7F3AE66Cu;
    // 7F3AE66C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE670:
    ctx->pc = 0x7F3AE670u;
    // 7F3AE670: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE674:
    ctx->pc = 0x7F3AE674u;
    // 7F3AE674: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE678:
    ctx->pc = 0x7F3AE678u;
    // 7F3AE678: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AE67C:
    ctx->pc = 0x7F3AE67Cu;
    // 7F3AE67C: addi    r3, r3, 28460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28460);

label_7F3AE680:
    ctx->pc = 0x7F3AE680u;
    // 7F3AE680: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AE684:
    ctx->pc = 0x7F3AE684u;
    // 7F3AE684: stw     r0, -30944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE688:
    ctx->pc = 0x7F3AE688u;
    // 7F3AE688: li      r4, 176
    ctx->gpr[4] = (u32)(s32)(176);

label_7F3AE68C:
    ctx->pc = 0x7F3AE68Cu;
    // 7F3AE68C: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3AE690u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3AE690:
    ctx->pc = 0x7F3AE690u;
    ctx->downcount -= 5;
    // 7F3AE690: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE694:
    ctx->pc = 0x7F3AE694u;
    // 7F3AE694: li      r4, 768
    ctx->gpr[4] = (u32)(s32)(768);

label_7F3AE698:
    ctx->pc = 0x7F3AE698u;
    // 7F3AE698: addi    r3, r3, 28460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28460);

label_7F3AE69C:
    ctx->pc = 0x7F3AE69Cu;
    // 7F3AE69C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE6A0:
    ctx->pc = 0x7F3AE6A0u;
    // 7F3AE6A0: bl      0x7F3AE588
    {
            ctx->lr = 0x7F3AE6A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE588u;
                return;
            }
            goto label_7F3AE588;
    }

label_7F3AE6A4:
    ctx->pc = 0x7F3AE6A4u;
    ctx->downcount -= 6;
    // 7F3AE6A4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE6A8:
    ctx->pc = 0x7F3AE6A8u;
    // 7F3AE6A8: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F3AE6AC:
    ctx->pc = 0x7F3AE6ACu;
    // 7F3AE6AC: addi    r3, r3, 28460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28460);

label_7F3AE6B0:
    ctx->pc = 0x7F3AE6B0u;
    // 7F3AE6B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE6B4:
    ctx->pc = 0x7F3AE6B4u;
    // 7F3AE6B4: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F3AE6B8:
    ctx->pc = 0x7F3AE6B8u;
    // 7F3AE6B8: bl      0x7F3AE588
    {
            ctx->lr = 0x7F3AE6BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE588u;
                return;
            }
            goto label_7F3AE588;
    }

label_7F3AE6BC:
    ctx->pc = 0x7F3AE6BCu;
    ctx->downcount -= 6;
    // 7F3AE6BC: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE6C0:
    ctx->pc = 0x7F3AE6C0u;
    // 7F3AE6C0: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F3AE6C4:
    ctx->pc = 0x7F3AE6C4u;
    // 7F3AE6C4: addi    r3, r3, 28460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28460);

label_7F3AE6C8:
    ctx->pc = 0x7F3AE6C8u;
    // 7F3AE6C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE6CC:
    ctx->pc = 0x7F3AE6CCu;
    // 7F3AE6CC: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F3AE6D0:
    ctx->pc = 0x7F3AE6D0u;
    // 7F3AE6D0: bl      0x7F3AE588
    {
            ctx->lr = 0x7F3AE6D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE588u;
                return;
            }
            goto label_7F3AE588;
    }

label_7F3AE6D4:
    ctx->pc = 0x7F3AE6D4u;
    ctx->downcount -= 4;
    // 7F3AE6D4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE6D8:
    ctx->pc = 0x7F3AE6D8u;
    // 7F3AE6D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE6DC:
    ctx->pc = 0x7F3AE6DCu;
    // 7F3AE6DC: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F3AE6E0:
    ctx->pc = 0x7F3AE6E0u;
    // 7F3AE6E0: bl      0x7F3AE558
    {
            ctx->lr = 0x7F3AE6E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE558u;
                return;
            }
            goto label_7F3AE558;
    }

label_7F3AE6E4:
    ctx->pc = 0x7F3AE6E4u;
    ctx->downcount -= 7;
    // 7F3AE6E4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE6E8:
    ctx->pc = 0x7F3AE6E8u;
    // 7F3AE6E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE6EC:
    ctx->pc = 0x7F3AE6ECu;
    // 7F3AE6EC: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F3AE6F0:
    ctx->pc = 0x7F3AE6F0u;
    // 7F3AE6F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE6F4:
    ctx->pc = 0x7F3AE6F4u;
    // 7F3AE6F4: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F3AE6F8:
    ctx->pc = 0x7F3AE6F8u;
    // 7F3AE6F8: li      r7, 448
    ctx->gpr[7] = (u32)(s32)(448);

label_7F3AE6FC:
    ctx->pc = 0x7F3AE6FCu;
    // 7F3AE6FC: bl      0x7F3AE540
    {
            ctx->lr = 0x7F3AE700u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE540u;
                return;
            }
            goto label_7F3AE540;
    }

label_7F3AE700:
    ctx->pc = 0x7F3AE700u;
    ctx->downcount -= 17;
    // 7F3AE700: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE704:
    ctx->pc = 0x7F3AE704u;
    // 7F3AE704: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AE708:
    ctx->pc = 0x7F3AE708u;
    // 7F3AE708: addi    r7, r4, 28636
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE70C:
    ctx->pc = 0x7F3AE70Cu;
    // 7F3AE70C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE710:
    ctx->pc = 0x7F3AE710u;
    // 7F3AE710: addi    r0, r3, 12392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12392);

label_7F3AE714:
    ctx->pc = 0x7F3AE714u;
    // 7F3AE714: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE718:
    ctx->pc = 0x7F3AE718u;
    // 7F3AE718: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F3AE71C:
    ctx->pc = 0x7F3AE71Cu;
    // 7F3AE71C: addi    r31, r7, 948
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(948);

label_7F3AE720:
    ctx->pc = 0x7F3AE720u;
    // 7F3AE720: stw     r8, 936(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(936);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE724:
    ctx->pc = 0x7F3AE724u;
    // 7F3AE724: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE728:
    ctx->pc = 0x7F3AE728u;
    // 7F3AE728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE72C:
    ctx->pc = 0x7F3AE72Cu;
    // 7F3AE72C: stw     r6, 940(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(940);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE730:
    ctx->pc = 0x7F3AE730u;
    // 7F3AE730: stw     r8, 944(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(944);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE734:
    ctx->pc = 0x7F3AE734u;
    // 7F3AE734: stw     r8, 900(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE738:
    ctx->pc = 0x7F3AE738u;
    // 7F3AE738: stw     r5, 912(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(912);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE73C:
    ctx->pc = 0x7F3AE73Cu;
    // 7F3AE73C: stw     r0, 916(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(916);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE740:
    ctx->pc = 0x7F3AE740u;
    // 7F3AE740: bl      0x7F3AE558
    {
            ctx->lr = 0x7F3AE744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE558u;
                return;
            }
            goto label_7F3AE558;
    }

label_7F3AE744:
    ctx->pc = 0x7F3AE744u;
    ctx->downcount -= 6;
    // 7F3AE744: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE748:
    ctx->pc = 0x7F3AE748u;
    // 7F3AE748: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F3AE74C:
    ctx->pc = 0x7F3AE74Cu;
    // 7F3AE74C: li      r5, 148
    ctx->gpr[5] = (u32)(s32)(148);

label_7F3AE750:
    ctx->pc = 0x7F3AE750u;
    // 7F3AE750: li      r6, 170
    ctx->gpr[6] = (u32)(s32)(170);

label_7F3AE754:
    ctx->pc = 0x7F3AE754u;
    // 7F3AE754: li      r7, 112
    ctx->gpr[7] = (u32)(s32)(112);

label_7F3AE758:
    ctx->pc = 0x7F3AE758u;
    // 7F3AE758: bl      0x7F3AE540
    {
            ctx->lr = 0x7F3AE75Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE540u;
                return;
            }
            goto label_7F3AE540;
    }

label_7F3AE75C:
    ctx->pc = 0x7F3AE75Cu;
    ctx->downcount -= 17;
    // 7F3AE75C: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE760:
    ctx->pc = 0x7F3AE760u;
    // 7F3AE760: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AE764:
    ctx->pc = 0x7F3AE764u;
    // 7F3AE764: addi    r7, r4, 28636
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE768:
    ctx->pc = 0x7F3AE768u;
    // 7F3AE768: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F3AE76C:
    ctx->pc = 0x7F3AE76Cu;
    // 7F3AE76C: addi    r0, r3, 12392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12392);

label_7F3AE770:
    ctx->pc = 0x7F3AE770u;
    // 7F3AE770: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE774:
    ctx->pc = 0x7F3AE774u;
    // 7F3AE774: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F3AE778:
    ctx->pc = 0x7F3AE778u;
    // 7F3AE778: addi    r31, r7, 1896
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(1896);

label_7F3AE77C:
    ctx->pc = 0x7F3AE77Cu;
    // 7F3AE77C: stw     r8, 1884(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE780:
    ctx->pc = 0x7F3AE780u;
    // 7F3AE780: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE784:
    ctx->pc = 0x7F3AE784u;
    // 7F3AE784: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE788:
    ctx->pc = 0x7F3AE788u;
    // 7F3AE788: stw     r8, 1888(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE78C:
    ctx->pc = 0x7F3AE78Cu;
    // 7F3AE78C: stw     r8, 1892(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AE790:
    ctx->pc = 0x7F3AE790u;
    // 7F3AE790: stw     r6, 1848(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1848);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE794:
    ctx->pc = 0x7F3AE794u;
    // 7F3AE794: stw     r5, 1860(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1860);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE798:
    ctx->pc = 0x7F3AE798u;
    // 7F3AE798: stw     r0, 1864(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE79C:
    ctx->pc = 0x7F3AE79Cu;
    // 7F3AE79C: bl      0x7F3AE558
    {
            ctx->lr = 0x7F3AE7A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE558u;
                return;
            }
            goto label_7F3AE558;
    }

label_7F3AE7A0:
    ctx->pc = 0x7F3AE7A0u;
    ctx->downcount -= 6;
    // 7F3AE7A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE7A4:
    ctx->pc = 0x7F3AE7A4u;
    // 7F3AE7A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE7A8:
    ctx->pc = 0x7F3AE7A8u;
    // 7F3AE7A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE7AC:
    ctx->pc = 0x7F3AE7ACu;
    // 7F3AE7AC: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F3AE7B0:
    ctx->pc = 0x7F3AE7B0u;
    // 7F3AE7B0: li      r7, 448
    ctx->gpr[7] = (u32)(s32)(448);

label_7F3AE7B4:
    ctx->pc = 0x7F3AE7B4u;
    // 7F3AE7B4: bl      0x7F3AE540
    {
            ctx->lr = 0x7F3AE7B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE540u;
                return;
            }
            goto label_7F3AE540;
    }

label_7F3AE7B8:
    ctx->pc = 0x7F3AE7B8u;
    ctx->downcount -= 18;
    // 7F3AE7B8: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE7BC:
    ctx->pc = 0x7F3AE7BCu;
    // 7F3AE7BC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AE7C0:
    ctx->pc = 0x7F3AE7C0u;
    // 7F3AE7C0: addi    r8, r4, 28636
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE7C4:
    ctx->pc = 0x7F3AE7C4u;
    // 7F3AE7C4: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE7C8:
    ctx->pc = 0x7F3AE7C8u;
    // 7F3AE7C8: addi    r0, r3, 12392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12392);

label_7F3AE7CC:
    ctx->pc = 0x7F3AE7CCu;
    // 7F3AE7CC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F3AE7D0:
    ctx->pc = 0x7F3AE7D0u;
    // 7F3AE7D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE7D4:
    ctx->pc = 0x7F3AE7D4u;
    // 7F3AE7D4: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F3AE7D8:
    ctx->pc = 0x7F3AE7D8u;
    // 7F3AE7D8: addi    r31, r8, 2844
    ctx->gpr[31] = ctx->gpr[8] + (u32)(s32)(2844);

label_7F3AE7DC:
    ctx->pc = 0x7F3AE7DCu;
    // 7F3AE7DC: stw     r9, 2832(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2832);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AE7E0:
    ctx->pc = 0x7F3AE7E0u;
    // 7F3AE7E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE7E4:
    ctx->pc = 0x7F3AE7E4u;
    // 7F3AE7E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE7E8:
    ctx->pc = 0x7F3AE7E8u;
    // 7F3AE7E8: stw     r7, 2836(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2836);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE7EC:
    ctx->pc = 0x7F3AE7ECu;
    // 7F3AE7EC: stw     r9, 2840(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2840);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AE7F0:
    ctx->pc = 0x7F3AE7F0u;
    // 7F3AE7F0: stw     r6, 2796(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2796);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE7F4:
    ctx->pc = 0x7F3AE7F4u;
    // 7F3AE7F4: stw     r5, 2808(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2808);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE7F8:
    ctx->pc = 0x7F3AE7F8u;
    // 7F3AE7F8: stw     r0, 2812(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE7FC:
    ctx->pc = 0x7F3AE7FCu;
    // 7F3AE7FC: bl      0x7F3AE558
    {
            ctx->lr = 0x7F3AE800u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE558u;
                return;
            }
            goto label_7F3AE558;
    }

label_7F3AE800:
    ctx->pc = 0x7F3AE800u;
    ctx->downcount -= 6;
    // 7F3AE800: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE804:
    ctx->pc = 0x7F3AE804u;
    // 7F3AE804: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE808:
    ctx->pc = 0x7F3AE808u;
    // 7F3AE808: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE80C:
    ctx->pc = 0x7F3AE80Cu;
    // 7F3AE80C: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F3AE810:
    ctx->pc = 0x7F3AE810u;
    // 7F3AE810: li      r7, 448
    ctx->gpr[7] = (u32)(s32)(448);

label_7F3AE814:
    ctx->pc = 0x7F3AE814u;
    // 7F3AE814: bl      0x7F3AE540
    {
            ctx->lr = 0x7F3AE818u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE540u;
                return;
            }
            goto label_7F3AE540;
    }

label_7F3AE818:
    ctx->pc = 0x7F3AE818u;
    ctx->downcount -= 18;
    // 7F3AE818: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE81C:
    ctx->pc = 0x7F3AE81Cu;
    // 7F3AE81C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AE820:
    ctx->pc = 0x7F3AE820u;
    // 7F3AE820: addi    r8, r4, 28636
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE824:
    ctx->pc = 0x7F3AE824u;
    // 7F3AE824: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F3AE828:
    ctx->pc = 0x7F3AE828u;
    // 7F3AE828: addi    r0, r3, 12392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12392);

label_7F3AE82C:
    ctx->pc = 0x7F3AE82Cu;
    // 7F3AE82C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F3AE830:
    ctx->pc = 0x7F3AE830u;
    // 7F3AE830: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AE834:
    ctx->pc = 0x7F3AE834u;
    // 7F3AE834: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F3AE838:
    ctx->pc = 0x7F3AE838u;
    // 7F3AE838: addi    r31, r8, 3792
    ctx->gpr[31] = ctx->gpr[8] + (u32)(s32)(3792);

label_7F3AE83C:
    ctx->pc = 0x7F3AE83Cu;
    // 7F3AE83C: stw     r9, 3780(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3780);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AE840:
    ctx->pc = 0x7F3AE840u;
    // 7F3AE840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE844:
    ctx->pc = 0x7F3AE844u;
    // 7F3AE844: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3AE848:
    ctx->pc = 0x7F3AE848u;
    // 7F3AE848: stw     r7, 3784(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3784);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE84C:
    ctx->pc = 0x7F3AE84Cu;
    // 7F3AE84C: stw     r9, 3788(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3788);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AE850:
    ctx->pc = 0x7F3AE850u;
    // 7F3AE850: stw     r6, 3744(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3744);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE854:
    ctx->pc = 0x7F3AE854u;
    // 7F3AE854: stw     r5, 3756(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3756);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE858:
    ctx->pc = 0x7F3AE858u;
    // 7F3AE858: stw     r0, 3760(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3760);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE85C:
    ctx->pc = 0x7F3AE85Cu;
    // 7F3AE85C: bl      0x7F3AE558
    {
            ctx->lr = 0x7F3AE860u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE558u;
                return;
            }
            goto label_7F3AE558;
    }

label_7F3AE860:
    ctx->pc = 0x7F3AE860u;
    ctx->downcount -= 6;
    // 7F3AE860: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AE864:
    ctx->pc = 0x7F3AE864u;
    // 7F3AE864: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE868:
    ctx->pc = 0x7F3AE868u;
    // 7F3AE868: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AE86C:
    ctx->pc = 0x7F3AE86Cu;
    // 7F3AE86C: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F3AE870:
    ctx->pc = 0x7F3AE870u;
    // 7F3AE870: li      r7, 448
    ctx->gpr[7] = (u32)(s32)(448);

label_7F3AE874:
    ctx->pc = 0x7F3AE874u;
    // 7F3AE874: bl      0x7F3AE540
    {
            ctx->lr = 0x7F3AE878u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE540u;
                return;
            }
            goto label_7F3AE540;
    }

label_7F3AE878:
    ctx->pc = 0x7F3AE878u;
    ctx->downcount -= 15;
    // 7F3AE878: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE87C:
    ctx->pc = 0x7F3AE87Cu;
    // 7F3AE87C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AE880:
    ctx->pc = 0x7F3AE880u;
    // 7F3AE880: addi    r6, r4, 28636
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE884:
    ctx->pc = 0x7F3AE884u;
    // 7F3AE884: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AE888:
    ctx->pc = 0x7F3AE888u;
    // 7F3AE888: addi    r0, r3, 12476
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12476);

label_7F3AE88C:
    ctx->pc = 0x7F3AE88Cu;
    // 7F3AE88C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AE890:
    ctx->pc = 0x7F3AE890u;
    // 7F3AE890: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AE894:
    ctx->pc = 0x7F3AE894u;
    // 7F3AE894: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F3AE898:
    ctx->pc = 0x7F3AE898u;
    // 7F3AE898: stw     r7, 4728(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4728);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE89C:
    ctx->pc = 0x7F3AE89Cu;
    // 7F3AE89C: stw     r5, 4732(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4732);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AE8A0:
    ctx->pc = 0x7F3AE8A0u;
    // 7F3AE8A0: stw     r7, 4736(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4736);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3AE8A4:
    ctx->pc = 0x7F3AE8A4u;
    // 7F3AE8A4: stw     r4, 4692(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4692);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AE8A8:
    ctx->pc = 0x7F3AE8A8u;
    // 7F3AE8A8: stw     r3, 4704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4704);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AE8AC:
    ctx->pc = 0x7F3AE8ACu;
    // 7F3AE8AC: stw     r0, 4708(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE8B0:
    ctx->pc = 0x7F3AE8B0u;
    // 7F3AE8B0: bl      0x7F3B2D1C
    {
            ctx->lr = 0x7F3AE8B4u;
            ctx->pc = 0x7F3B2D1Cu;
            return;
    }

label_7F3AE8B4:
    ctx->pc = 0x7F3AE8B4u;
    ctx->downcount -= 1;
    // 7F3AE8B4: bl      0x7F3AED88
    {
            ctx->lr = 0x7F3AE8B8u;
            goto label_7F3AED88;
    }

label_7F3AE8B8:
    ctx->pc = 0x7F3AE8B8u;
    ctx->downcount -= 1;
    // 7F3AE8B8: bl      0x7F3BA130
    {
            ctx->lr = 0x7F3AE8BCu;
            ctx->pc = 0x7F3BA130u;
            return;
    }

label_7F3AE8BC:
    ctx->pc = 0x7F3AE8BCu;
    ctx->downcount -= 1;
    // 7F3AE8BC: bl      0x7F3C2A24
    {
            ctx->lr = 0x7F3AE8C0u;
            ctx->pc = 0x7F3C2A24u;
            return;
    }

label_7F3AE8C0:
    ctx->pc = 0x7F3AE8C0u;
    ctx->downcount -= 1;
    // 7F3AE8C0: bl      0x7F3B1878
    {
            ctx->lr = 0x7F3AE8C4u;
            ctx->pc = 0x7F3B1878u;
            return;
    }

label_7F3AE8C4:
    ctx->pc = 0x7F3AE8C4u;
    ctx->downcount -= 6;
    // 7F3AE8C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE8C8:
    ctx->pc = 0x7F3AE8C8u;
    // 7F3AE8C8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3AE8CC:
    ctx->pc = 0x7F3AE8CCu;
    // 7F3AE8CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AE8D0:
    ctx->pc = 0x7F3AE8D0u;
    // 7F3AE8D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AE8D4:
    ctx->pc = 0x7F3AE8D4u;
    // 7F3AE8D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE8D8:
    ctx->pc = 0x7F3AE8D8u;
    ctx->downcount -= 19;
    // 7F3AE8D8: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AE8DC:
    ctx->pc = 0x7F3AE8DCu;
    // 7F3AE8DC: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE8E0:
    ctx->pc = 0x7F3AE8E0u;
    // 7F3AE8E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AE8E4:
    ctx->pc = 0x7F3AE8E4u;
    // 7F3AE8E4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE8E8:
    ctx->pc = 0x7F3AE8E8u;
    // 7F3AE8E8: addi    r5, r5, 28636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28636);

label_7F3AE8EC:
    ctx->pc = 0x7F3AE8ECu;
    // 7F3AE8EC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3AE8F0:
    ctx->pc = 0x7F3AE8F0u;
    // 7F3AE8F0: stw     r6, 900(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE8F4:
    ctx->pc = 0x7F3AE8F4u;
    // 7F3AE8F4: stw     r0, 1848(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE8F8:
    ctx->pc = 0x7F3AE8F8u;
    // 7F3AE8F8: stw     r0, 2796(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE8FC:
    ctx->pc = 0x7F3AE8FCu;
    // 7F3AE8FC: stw     r0, 3744(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE900:
    ctx->pc = 0x7F3AE900u;
    // 7F3AE900: stw     r6, 4692(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4692);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE904:
    ctx->pc = 0x7F3AE904u;
    // 7F3AE904: stw     r6, 936(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(936);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE908:
    ctx->pc = 0x7F3AE908u;
    // 7F3AE908: stw     r6, 1884(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE90C:
    ctx->pc = 0x7F3AE90Cu;
    // 7F3AE90C: stw     r6, 2832(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2832);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE910:
    ctx->pc = 0x7F3AE910u;
    // 7F3AE910: stw     r6, 3780(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3780);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AE914:
    ctx->pc = 0x7F3AE914u;
    // 7F3AE914: stw     r0, 4728(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE918:
    ctx->pc = 0x7F3AE918u;
    // 7F3AE918: stw     r0, -30952(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE91C:
    ctx->pc = 0x7F3AE91Cu;
    // 7F3AE91C: stw     r0, -30948(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE920:
    ctx->pc = 0x7F3AE920u;
    // 7F3AE920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AE924:
    ctx->pc = 0x7F3AE924u;
    ctx->downcount -= 19;
    // 7F3AE924: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AE928:
    ctx->pc = 0x7F3AE928u;
    // 7F3AE928: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AE92C:
    ctx->pc = 0x7F3AE92Cu;
    // 7F3AE92C: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE930:
    ctx->pc = 0x7F3AE930u;
    // 7F3AE930: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE934:
    ctx->pc = 0x7F3AE934u;
    // 7F3AE934: stmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AE938:
    ctx->pc = 0x7F3AE938u;
    // 7F3AE938: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AE93C:
    ctx->pc = 0x7F3AE93Cu;
    // 7F3AE93C: lwz     r0, -30940(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE940:
    ctx->pc = 0x7F3AE940u;
    // 7F3AE940: cmpwi   r0, 0
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

label_7F3AE944:
    ctx->pc = 0x7F3AE944u;
    // 7F3AE944: bc    4, 2, 0x7F3AEAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEAB8;
        }
    }

label_7F3AE948:
    ctx->pc = 0x7F3AE948u;
    ctx->downcount -= 6;
    // 7F3AE948: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AE94C:
    ctx->pc = 0x7F3AE94Cu;
    // 7F3AE94C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE950:
    ctx->pc = 0x7F3AE950u;
    // 7F3AE950: addi    r30, r4, 28636
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AE954:
    ctx->pc = 0x7F3AE954u;
    // 7F3AE954: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3AE958:
    ctx->pc = 0x7F3AE958u;
    // 7F3AE958: addi    r31, r3, -30948
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-30948);

label_7F3AE95C:
    ctx->pc = 0x7F3AE95Cu;
    // 7F3AE95C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3AE960:
    ctx->downcount -= 2;
    // 7F3AE960: add   r29, r30, r26
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3AE964:
    // 7F3AE964: bl      0x80044BC8
    {
            ctx->lr = 0x7F3AE968u;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_7F3AE968:
    ctx->pc = 0x7F3AE968u;
    ctx->downcount -= 3;
    // 7F3AE968: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE96C:
    // 7F3AE96C: cmpwi   r0, 0
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

label_7F3AE970:
    // 7F3AE970: bc    12, 2, 0x7F3AE990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE990;
        }
    }

label_7F3AE974:
    ctx->downcount -= 2;
    // 7F3AE974: cmpwi   r28, 2
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

label_7F3AE978:
    // 7F3AE978: bc    4, 0, 0x7F3AE990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE990;
        }
    }

label_7F3AE97C:
    ctx->downcount -= 7;
    // 7F3AE97C: xori    r0, r28, 0x0001
    ctx->gpr[0] = ctx->gpr[28] ^ 0x0001u;

label_7F3AE980:
    // 7F3AE980: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AE984:
    // 7F3AE984: mulli   r4, r0, 948
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)948);

label_7F3AE988:
    // 7F3AE988: addi    r0, r3, 28636
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F3AE98C:
    // 7F3AE98C: add   r29, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3AE990:
    ctx->pc = 0x7F3AE990u;
    ctx->downcount -= 3;
    // 7F3AE990: lwz     r0, 900(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE994:
    // 7F3AE994: cmpwi   r0, 0
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

label_7F3AE998:
    // 7F3AE998: bc    12, 2, 0x7F3AEAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEAA8;
        }
    }

label_7F3AE99C:
    ctx->pc = 0x7F3AE99Cu;
    ctx->downcount -= 3;
    // 7F3AE99C: lwz     r0, 940(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE9A0:
    // 7F3AE9A0: cmpwi   r0, 0
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

label_7F3AE9A4:
    // 7F3AE9A4: bc    12, 2, 0x7F3AE9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE9B0;
        }
    }

label_7F3AE9A8:
    ctx->downcount -= 2;
    // 7F3AE9A8: cmpwi   r0, 1
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

label_7F3AE9AC:
    // 7F3AE9AC: bc    4, 2, 0x7F3AE9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AE9C4;
        }
    }

label_7F3AE9B0:
    ctx->downcount -= 3;
    // 7F3AE9B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE9B4:
    // 7F3AE9B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AE9B8:
    // 7F3AE9B8: bl      0x7F3B7868
    {
            ctx->lr = 0x7F3AE9BCu;
            ctx->pc = 0x7F3B7868u;
            return;
    }

label_7F3AE9BC:
    ctx->downcount -= 2;
    // 7F3AE9BC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AE9C0:
    // 7F3AE9C0: bl      0x7F3B7894
    {
            ctx->lr = 0x7F3AE9C4u;
            ctx->pc = 0x7F3B7894u;
            return;
    }

label_7F3AE9C4:
    ctx->downcount -= 12;
    // 7F3AE9C4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AE9C8:
    ctx->pc = 0x7F3AE9C8u;
    // 7F3AE9C8: lwz     r0, 904(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(904);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AE9CC:
    // 7F3AE9CC: addi    r6, r3, -12064
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-12064);

label_7F3AE9D0:
    // 7F3AE9D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AE9D4:
    // 7F3AE9D4: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AE9D8:
    // 7F3AE9D8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AE9DC:
    ctx->pc = 0x7F3AE9DCu;
    // 7F3AE9DC: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AE9E0:
    // 7F3AE9E0: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AE9E4:
    // 7F3AE9E4: addi    r6, r5, -27304
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-27304);

label_7F3AE9E8:
    // 7F3AE9E8: addi    r4, r4, -27320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27320);

label_7F3AE9EC:
    // 7F3AE9EC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AE9F0:
    // 7F3AE9F0: b       0x7F3AEA04
    {
            goto label_7F3AEA04;
    }

label_7F3AE9F4:
    loop_7F3AE9F4(ctx);
    if (ctx->pc == 0x7F3AEA10u) goto label_7F3AEA10;
    return;
label_7F3AE9F8:
    // 7F3AE9F8: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3AE9FC:
    // 7F3AE9FC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3AEA00:
    ctx->pc = 0x7F3AEA00u;
    // 7F3AEA00: sth     r7, 840(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(840);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F3AEA04:
    ctx->pc = 0x7F3AEA04u;
    ctx->downcount -= 3;
    // 7F3AEA04: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEA08:
    // 7F3AEA08: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AEA0C:
    // 7F3AEA0C: bc    12, 0, 0x7F3AE9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE9F4u;
                return;
            }
            goto label_7F3AE9F4;
        }
    }

label_7F3AEA10:
    ctx->downcount -= 7;
    // 7F3AEA10: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3AEA14:
    // 7F3AEA14: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AEA18:
    // 7F3AEA18: addi    r23, r4, 12508
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(12508);

label_7F3AEA1C:
    // 7F3AEA1C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3AEA20:
    // 7F3AEA20: addi    r24, r3, -30936
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(-30936);

label_7F3AEA24:
    // 7F3AEA24: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3AEA28:
    // 7F3AEA28: b       0x7F3AEA9C
    {
            goto label_7F3AEA9C;
    }

label_7F3AEA2C:
    ctx->downcount -= 3;
    // 7F3AEA2C: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F3AEA30:
    // 7F3AEA30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AEA34:
    // 7F3AEA34: bl      0x800235E0
    {
            ctx->lr = 0x7F3AEA38u;
            ctx->pc = 0x800235E0u;
            return;
    }

label_7F3AEA38:
    ctx->downcount -= 2;
    // 7F3AEA38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AEA3C:
    // 7F3AEA3C: bl      0x8002360C
    {
            ctx->lr = 0x7F3AEA40u;
            ctx->pc = 0x8002360Cu;
            return;
    }

label_7F3AEA40:
    ctx->pc = 0x7F3AEA40u;
    ctx->downcount -= 4;
    // 7F3AEA40: lwz     r3, 916(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(916);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEA44:
    ctx->pc = 0x7F3AEA44u;
    // 7F3AEA44: lwzx    r12, r3, r25
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[25];
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F3AEA48:
    // 7F3AEA48: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AEA4C:
    // 7F3AEA4C: bc    12, 2, 0x7F3AEA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEA60;
        }
    }

label_7F3AEA50:
    ctx->downcount -= 5;
    // 7F3AEA50: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AEA54:
    // 7F3AEA54: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AEA58:
    ctx->pc = 0x7F3AEA58u;
    // 7F3AEA58: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F3AEA5C:
    ctx->pc = 0x7F3AEA5Cu;
    // 7F3AEA5C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F3AEA60u;
            ctx->pc = target;
            return;
        }
    }

label_7F3AEA60:
    ctx->downcount -= 2;
    // 7F3AEA60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AEA64:
    // 7F3AEA64: bl      0x80023648
    {
            ctx->lr = 0x7F3AEA68u;
            ctx->pc = 0x80023648u;
            return;
    }

label_7F3AEA68:
    ctx->downcount -= 2;
    // 7F3AEA68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AEA6C:
    // 7F3AEA6C: bl      0x80023714
    {
            ctx->lr = 0x7F3AEA70u;
            ctx->pc = 0x80023714u;
            return;
    }

label_7F3AEA70:
    ctx->pc = 0x7F3AEA70u;
    ctx->downcount -= 3;
    // 7F3AEA70: lwz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEA74:
    // 7F3AEA74: cmpwi   r0, 0
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

label_7F3AEA78:
    // 7F3AEA78: bc    12, 2, 0x7F3AEA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEA94;
        }
    }

label_7F3AEA7C:
    ctx->downcount -= 6;
    // 7F3AEA7C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AEA80:
    ctx->pc = 0x7F3AEA80u;
    // 7F3AEA80: lwz     r5, 940(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(940);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEA84:
    // 7F3AEA84: addi    r3, r3, 12528
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12528);

label_7F3AEA88:
    // 7F3AEA88: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F3AEA8C:
    // 7F3AEA8C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F3AEA90:
    // 7F3AEA90: bl      0x8001E8F8
    {
            ctx->lr = 0x7F3AEA94u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_7F3AEA94:
    ctx->downcount -= 2;
    // 7F3AEA94: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F3AEA98:
    // 7F3AEA98: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F3AEA9C:
    ctx->pc = 0x7F3AEA9Cu;
    ctx->downcount -= 3;
    // 7F3AEA9C: lwz     r0, 912(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(912);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEAA0:
    // 7F3AEAA0: cmpw    r22, r0
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

label_7F3AEAA4:
    // 7F3AEAA4: bc    12, 0, 0x7F3AEA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEA2Cu;
                return;
            }
            goto label_7F3AEA2C;
        }
    }

label_7F3AEAA8:
    ctx->downcount -= 4;
    // 7F3AEAA8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3AEAAC:
    // 7F3AEAAC: addi    r26, r26, 948
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(948);

label_7F3AEAB0:
    // 7F3AEAB0: cmpwi   r28, 5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AEAB4:
    // 7F3AEAB4: bc    12, 0, 0x7F3AE960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AE960u;
                return;
            }
            goto label_7F3AE960;
        }
    }

label_7F3AEAB8:
    ctx->pc = 0x7F3AEAB8u;
    ctx->downcount -= 16;
    // 7F3AEAB8: lmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AEABC:
    ctx->pc = 0x7F3AEABCu;
    // 7F3AEABC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEAC0:
    ctx->pc = 0x7F3AEAC0u;
    // 7F3AEAC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEAC4:
    ctx->pc = 0x7F3AEAC4u;
    // 7F3AEAC4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3AEAC8:
    ctx->pc = 0x7F3AEAC8u;
    // 7F3AEAC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEACC:
    ctx->pc = 0x7F3AEACCu;
    ctx->downcount -= 2;
    // 7F3AEACC: cmplwi  r4, 0x0000
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

label_7F3AEAD0:
    ctx->pc = 0x7F3AEAD0u;
    // 7F3AEAD0: bc    4, 2, 0x7F3AEADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEADC;
        }
    }

label_7F3AEAD4:
    ctx->pc = 0x7F3AEAD4u;
    ctx->downcount -= 2;
    // 7F3AEAD4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3AEAD8:
    ctx->pc = 0x7F3AEAD8u;
    // 7F3AEAD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEADC:
    ctx->pc = 0x7F3AEADCu;
    ctx->downcount -= 4;
    // 7F3AEADC: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AEAE0:
    ctx->pc = 0x7F3AEAE0u;
    // 7F3AEAE0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEAE4:
    ctx->pc = 0x7F3AEAE4u;
    // 7F3AEAE4: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AEAE8:
    ctx->pc = 0x7F3AEAE8u;
    // 7F3AEAE8: bc    12, 0, 0x7F3AEAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEAF4;
        }
    }

label_7F3AEAEC:
    ctx->pc = 0x7F3AEAECu;
    ctx->downcount -= 2;
    // 7F3AEAEC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3AEAF0:
    ctx->pc = 0x7F3AEAF0u;
    // 7F3AEAF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEAF4:
    ctx->pc = 0x7F3AEAF4u;
    ctx->downcount -= 7;
    // 7F3AEAF4: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEAF8:
    ctx->pc = 0x7F3AEAF8u;
    // 7F3AEAF8: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F3AEAFC:
    ctx->pc = 0x7F3AEAFCu;
    // 7F3AEAFC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F3AEB00:
    ctx->pc = 0x7F3AEB00u;
    // 7F3AEB00: stwx    r4, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AEB04:
    ctx->pc = 0x7F3AEB04u;
    // 7F3AEB04: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3AEB08:
    ctx->pc = 0x7F3AEB08u;
    // 7F3AEB08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AEB0C:
    ctx->pc = 0x7F3AEB0Cu;
    // 7F3AEB0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB10:
    ctx->pc = 0x7F3AEB10u;
    ctx->downcount -= 2;
    // 7F3AEB10: cmplwi  r4, 0x0000
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

label_7F3AEB14:
    ctx->pc = 0x7F3AEB14u;
    // 7F3AEB14: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB18:
    ctx->pc = 0x7F3AEB18u;
    ctx->downcount -= 7;
    // 7F3AEB18: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEB1C:
    ctx->pc = 0x7F3AEB1Cu;
    // 7F3AEB1C: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AEB20:
    ctx->pc = 0x7F3AEB20u;
    // 7F3AEB20: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AEB24:
    ctx->pc = 0x7F3AEB24u;
    // 7F3AEB24: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3AEB28:
    ctx->pc = 0x7F3AEB28u;
    // 7F3AEB28: cmpwi   r5, 0
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

label_7F3AEB2C:
    ctx->pc = 0x7F3AEB2Cu;
    // 7F3AEB2C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB30:
    ctx->pc = 0x7F3AEB30u;
    ctx->downcount -= 3;
    // 7F3AEB30: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEB34:
    // 7F3AEB34: cmplw   r0, r4
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

label_7F3AEB38:
    // 7F3AEB38: bc    12, 2, 0x7F3AEB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEB4C;
        }
    }

label_7F3AEB3C:
    ctx->downcount -= 3;
    // 7F3AEB3C: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F3AEB40:
    // 7F3AEB40: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

label_7F3AEB44:
    // 7F3AEB44: bc    16, 0, 0x7F3AEB30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB30u;
                return;
            }
            goto label_7F3AEB30;
        }
    }

label_7F3AEB48:
    ctx->pc = 0x7F3AEB48u;
    ctx->downcount -= 1;
    // 7F3AEB48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB4C:
    ctx->pc = 0x7F3AEB4Cu;
    ctx->downcount -= 4;
    // 7F3AEB4C: addic.  r7, r7, -1
    {
        u64 a = ctx->gpr[7];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[7];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AEB50:
    ctx->pc = 0x7F3AEB50u;
    // 7F3AEB50: mtctr    r7
    ctx->ctr = ctx->gpr[7];

label_7F3AEB54:
    ctx->pc = 0x7F3AEB54u;
    // 7F3AEB54: bc    4, 1, 0x7F3AEB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEB68;
        }
    }

label_7F3AEB58:
    loop_7F3AEB58(ctx);
    if (ctx->pc == 0x7F3AEB68u) goto label_7F3AEB68;
    return;
label_7F3AEB5C:
    ctx->pc = 0x7F3AEB5Cu;
    // 7F3AEB5C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEB60:
    // 7F3AEB60: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F3AEB64:
    // 7F3AEB64: bc    16, 0, 0x7F3AEB58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB58u;
                return;
            }
            goto label_7F3AEB58;
        }
    }

label_7F3AEB68:
    ctx->pc = 0x7F3AEB68u;
    ctx->downcount -= 3;
    // 7F3AEB68: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F3AEB6C:
    ctx->pc = 0x7F3AEB6Cu;
    // 7F3AEB6C: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEB70:
    ctx->pc = 0x7F3AEB70u;
    // 7F3AEB70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB74:
    ctx->pc = 0x7F3AEB74u;
    ctx->downcount -= 2;
    // 7F3AEB74: cmplwi  r4, 0x0000
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

label_7F3AEB78:
    ctx->pc = 0x7F3AEB78u;
    // 7F3AEB78: bc    4, 2, 0x7F3AEB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEB84;
        }
    }

label_7F3AEB7C:
    ctx->pc = 0x7F3AEB7Cu;
    ctx->downcount -= 2;
    // 7F3AEB7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AEB80:
    ctx->pc = 0x7F3AEB80u;
    // 7F3AEB80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEB84:
    ctx->pc = 0x7F3AEB84u;
    ctx->downcount -= 6;
    // 7F3AEB84: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEB88:
    ctx->pc = 0x7F3AEB88u;
    // 7F3AEB88: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEB8C:
    ctx->pc = 0x7F3AEB8Cu;
    // 7F3AEB8C: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3AEB90:
    ctx->pc = 0x7F3AEB90u;
    // 7F3AEB90: cmpwi   r5, 0
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

label_7F3AEB94:
    ctx->pc = 0x7F3AEB94u;
    // 7F3AEB94: bc    4, 1, 0x7F3AEBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEBB0;
        }
    }

label_7F3AEB98:
    ctx->pc = 0x7F3AEB98u;
    ctx->downcount -= 3;
    // 7F3AEB98: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEB9C:
    // 7F3AEB9C: cmplw   r0, r4
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

label_7F3AEBA0:
    // 7F3AEBA0: bc    12, 2, 0x7F3AEBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEBB0;
        }
    }

label_7F3AEBA4:
    ctx->downcount -= 3;
    // 7F3AEBA4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3AEBA8:
    // 7F3AEBA8: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F3AEBAC:
    // 7F3AEBAC: bc    16, 0, 0x7F3AEB98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB98u;
                return;
            }
            goto label_7F3AEB98;
        }
    }

label_7F3AEBB0:
    ctx->pc = 0x7F3AEBB0u;
    ctx->downcount -= 2;
    // 7F3AEBB0: cmpwi   r5, 0
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

label_7F3AEBB4:
    ctx->pc = 0x7F3AEBB4u;
    // 7F3AEBB4: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEBB8:
    ctx->pc = 0x7F3AEBB8u;
    ctx->downcount -= 2;
    // 7F3AEBB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AEBBC:
    ctx->pc = 0x7F3AEBBCu;
    // 7F3AEBBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEBC0:
    ctx->pc = 0x7F3AEBC0u;
    ctx->downcount -= 8;
    // 7F3AEBC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEBC4:
    ctx->pc = 0x7F3AEBC4u;
    // 7F3AEBC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEBC8:
    ctx->pc = 0x7F3AEBC8u;
    // 7F3AEBC8: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AEBCC:
    ctx->pc = 0x7F3AEBCCu;
    // 7F3AEBCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEBD0:
    ctx->pc = 0x7F3AEBD0u;
    // 7F3AEBD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEBD4:
    ctx->pc = 0x7F3AEBD4u;
    // 7F3AEBD4: addi    r3, r5, 28636
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28636);

label_7F3AEBD8:
    ctx->pc = 0x7F3AEBD8u;
    // 7F3AEBD8: lwz     r3, 908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEBDC:
    ctx->pc = 0x7F3AEBDCu;
    // 7F3AEBDC: bl      0x7F3AEACC
    {
            ctx->lr = 0x7F3AEBE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEACCu;
                return;
            }
            goto label_7F3AEACC;
    }

label_7F3AEBE0:
    ctx->pc = 0x7F3AEBE0u;
    ctx->downcount -= 5;
    // 7F3AEBE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEBE4:
    ctx->pc = 0x7F3AEBE4u;
    // 7F3AEBE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEBE8:
    ctx->pc = 0x7F3AEBE8u;
    // 7F3AEBE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEBEC:
    ctx->pc = 0x7F3AEBECu;
    // 7F3AEBEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEBF0:
    ctx->pc = 0x7F3AEBF0u;
    ctx->downcount -= 8;
    // 7F3AEBF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEBF4:
    ctx->pc = 0x7F3AEBF4u;
    // 7F3AEBF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEBF8:
    ctx->pc = 0x7F3AEBF8u;
    // 7F3AEBF8: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AEBFC:
    ctx->pc = 0x7F3AEBFCu;
    // 7F3AEBFC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEC00:
    ctx->pc = 0x7F3AEC00u;
    // 7F3AEC00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEC04:
    ctx->pc = 0x7F3AEC04u;
    // 7F3AEC04: addi    r3, r5, 28636
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28636);

label_7F3AEC08:
    ctx->pc = 0x7F3AEC08u;
    // 7F3AEC08: lwz     r3, 908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEC0C:
    ctx->pc = 0x7F3AEC0Cu;
    // 7F3AEC0C: bl      0x7F3AEB10
    {
            ctx->lr = 0x7F3AEC10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB10u;
                return;
            }
            goto label_7F3AEB10;
    }

label_7F3AEC10:
    ctx->pc = 0x7F3AEC10u;
    ctx->downcount -= 5;
    // 7F3AEC10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEC14:
    ctx->pc = 0x7F3AEC14u;
    // 7F3AEC14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEC18:
    ctx->pc = 0x7F3AEC18u;
    // 7F3AEC18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEC1C:
    ctx->pc = 0x7F3AEC1Cu;
    // 7F3AEC1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEC20:
    ctx->pc = 0x7F3AEC20u;
    ctx->downcount -= 8;
    // 7F3AEC20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEC24:
    ctx->pc = 0x7F3AEC24u;
    // 7F3AEC24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEC28:
    ctx->pc = 0x7F3AEC28u;
    // 7F3AEC28: lis     r5, 32590
    ctx->gpr[5] = ((u32)(s32)(32590) << 16);

label_7F3AEC2C:
    ctx->pc = 0x7F3AEC2Cu;
    // 7F3AEC2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEC30:
    ctx->pc = 0x7F3AEC30u;
    // 7F3AEC30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEC34:
    ctx->pc = 0x7F3AEC34u;
    // 7F3AEC34: addi    r3, r5, 28636
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28636);

label_7F3AEC38:
    ctx->pc = 0x7F3AEC38u;
    // 7F3AEC38: lwz     r3, 908(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEC3C:
    ctx->pc = 0x7F3AEC3Cu;
    // 7F3AEC3C: bl      0x7F3AEB74
    {
            ctx->lr = 0x7F3AEC40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB74u;
                return;
            }
            goto label_7F3AEB74;
    }

label_7F3AEC40:
    ctx->pc = 0x7F3AEC40u;
    ctx->downcount -= 5;
    // 7F3AEC40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEC44:
    ctx->pc = 0x7F3AEC44u;
    // 7F3AEC44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEC48:
    ctx->pc = 0x7F3AEC48u;
    // 7F3AEC48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEC4C:
    ctx->pc = 0x7F3AEC4Cu;
    // 7F3AEC4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEC50:
    ctx->pc = 0x7F3AEC50u;
    ctx->downcount -= 9;
    // 7F3AEC50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEC54:
    ctx->pc = 0x7F3AEC54u;
    // 7F3AEC54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEC58:
    ctx->pc = 0x7F3AEC58u;
    // 7F3AEC58: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AEC5C:
    ctx->pc = 0x7F3AEC5Cu;
    // 7F3AEC5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEC60:
    ctx->pc = 0x7F3AEC60u;
    // 7F3AEC60: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AEC64:
    ctx->pc = 0x7F3AEC64u;
    // 7F3AEC64: lwz     r5, 908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(908);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEC68:
    ctx->pc = 0x7F3AEC68u;
    // 7F3AEC68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEC6C:
    ctx->pc = 0x7F3AEC6Cu;
    // 7F3AEC6C: addi    r3, r5, 32
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(32);

label_7F3AEC70:
    ctx->pc = 0x7F3AEC70u;
    // 7F3AEC70: bl      0x7F3AEACC
    {
            ctx->lr = 0x7F3AEC74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEACCu;
                return;
            }
            goto label_7F3AEACC;
    }

label_7F3AEC74:
    ctx->pc = 0x7F3AEC74u;
    ctx->downcount -= 5;
    // 7F3AEC74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEC78:
    ctx->pc = 0x7F3AEC78u;
    // 7F3AEC78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEC7C:
    ctx->pc = 0x7F3AEC7Cu;
    // 7F3AEC7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEC80:
    ctx->pc = 0x7F3AEC80u;
    // 7F3AEC80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEC84:
    ctx->pc = 0x7F3AEC84u;
    ctx->downcount -= 9;
    // 7F3AEC84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEC88:
    ctx->pc = 0x7F3AEC88u;
    // 7F3AEC88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEC8C:
    ctx->pc = 0x7F3AEC8Cu;
    // 7F3AEC8C: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AEC90:
    ctx->pc = 0x7F3AEC90u;
    // 7F3AEC90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEC94:
    ctx->pc = 0x7F3AEC94u;
    // 7F3AEC94: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AEC98:
    ctx->pc = 0x7F3AEC98u;
    // 7F3AEC98: lwz     r5, 908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(908);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEC9C:
    ctx->pc = 0x7F3AEC9Cu;
    // 7F3AEC9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AECA0:
    ctx->pc = 0x7F3AECA0u;
    // 7F3AECA0: addi    r3, r5, 32
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(32);

label_7F3AECA4:
    ctx->pc = 0x7F3AECA4u;
    // 7F3AECA4: bl      0x7F3AEB10
    {
            ctx->lr = 0x7F3AECA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB10u;
                return;
            }
            goto label_7F3AEB10;
    }

label_7F3AECA8:
    ctx->pc = 0x7F3AECA8u;
    ctx->downcount -= 5;
    // 7F3AECA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AECAC:
    ctx->pc = 0x7F3AECACu;
    // 7F3AECAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AECB0:
    ctx->pc = 0x7F3AECB0u;
    // 7F3AECB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AECB4:
    ctx->pc = 0x7F3AECB4u;
    // 7F3AECB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AECB8:
    ctx->pc = 0x7F3AECB8u;
    ctx->downcount -= 9;
    // 7F3AECB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AECBC:
    ctx->pc = 0x7F3AECBCu;
    // 7F3AECBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AECC0:
    ctx->pc = 0x7F3AECC0u;
    // 7F3AECC0: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AECC4:
    ctx->pc = 0x7F3AECC4u;
    // 7F3AECC4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AECC8:
    ctx->pc = 0x7F3AECC8u;
    // 7F3AECC8: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AECCC:
    ctx->pc = 0x7F3AECCCu;
    // 7F3AECCC: lwz     r5, 908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(908);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AECD0:
    ctx->pc = 0x7F3AECD0u;
    // 7F3AECD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AECD4:
    ctx->pc = 0x7F3AECD4u;
    // 7F3AECD4: addi    r3, r5, 16
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(16);

label_7F3AECD8:
    ctx->pc = 0x7F3AECD8u;
    // 7F3AECD8: bl      0x7F3AEACC
    {
            ctx->lr = 0x7F3AECDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEACCu;
                return;
            }
            goto label_7F3AEACC;
    }

label_7F3AECDC:
    ctx->pc = 0x7F3AECDCu;
    ctx->downcount -= 5;
    // 7F3AECDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AECE0:
    ctx->pc = 0x7F3AECE0u;
    // 7F3AECE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AECE4:
    ctx->pc = 0x7F3AECE4u;
    // 7F3AECE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AECE8:
    ctx->pc = 0x7F3AECE8u;
    // 7F3AECE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AECEC:
    ctx->pc = 0x7F3AECECu;
    ctx->downcount -= 9;
    // 7F3AECEC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AECF0:
    ctx->pc = 0x7F3AECF0u;
    // 7F3AECF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AECF4:
    ctx->pc = 0x7F3AECF4u;
    // 7F3AECF4: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AECF8:
    ctx->pc = 0x7F3AECF8u;
    // 7F3AECF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AECFC:
    ctx->pc = 0x7F3AECFCu;
    // 7F3AECFC: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F3AED00:
    ctx->pc = 0x7F3AED00u;
    // 7F3AED00: lwz     r5, 908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(908);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AED04:
    ctx->pc = 0x7F3AED04u;
    // 7F3AED04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AED08:
    ctx->pc = 0x7F3AED08u;
    // 7F3AED08: addi    r3, r5, 16
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(16);

label_7F3AED0C:
    ctx->pc = 0x7F3AED0Cu;
    // 7F3AED0C: bl      0x7F3AEB10
    {
            ctx->lr = 0x7F3AED10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB10u;
                return;
            }
            goto label_7F3AEB10;
    }

label_7F3AED10:
    ctx->pc = 0x7F3AED10u;
    ctx->downcount -= 5;
    // 7F3AED10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AED14:
    ctx->pc = 0x7F3AED14u;
    // 7F3AED14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AED18:
    ctx->pc = 0x7F3AED18u;
    // 7F3AED18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AED1C:
    ctx->pc = 0x7F3AED1Cu;
    // 7F3AED1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AED20:
    ctx->pc = 0x7F3AED20u;
    ctx->downcount -= 4;
    // 7F3AED20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AED24:
    ctx->pc = 0x7F3AED24u;
    // 7F3AED24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AED28:
    ctx->pc = 0x7F3AED28u;
    // 7F3AED28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AED2C:
    ctx->pc = 0x7F3AED2Cu;
    // 7F3AED2C: bl      0x7F3AEACC
    {
            ctx->lr = 0x7F3AED30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEACCu;
                return;
            }
            goto label_7F3AEACC;
    }

label_7F3AED30:
    ctx->pc = 0x7F3AED30u;
    ctx->downcount -= 5;
    // 7F3AED30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AED34:
    ctx->pc = 0x7F3AED34u;
    // 7F3AED34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AED38:
    ctx->pc = 0x7F3AED38u;
    // 7F3AED38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AED3C:
    ctx->pc = 0x7F3AED3Cu;
    // 7F3AED3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AED40:
    ctx->pc = 0x7F3AED40u;
    ctx->downcount -= 4;
    // 7F3AED40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AED44:
    ctx->pc = 0x7F3AED44u;
    // 7F3AED44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AED48:
    ctx->pc = 0x7F3AED48u;
    // 7F3AED48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AED4C:
    ctx->pc = 0x7F3AED4Cu;
    // 7F3AED4C: bl      0x7F3AEB10
    {
            ctx->lr = 0x7F3AED50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEB10u;
                return;
            }
            goto label_7F3AEB10;
    }

label_7F3AED50:
    ctx->pc = 0x7F3AED50u;
    ctx->downcount -= 5;
    // 7F3AED50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AED54:
    ctx->pc = 0x7F3AED54u;
    // 7F3AED54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AED58:
    ctx->pc = 0x7F3AED58u;
    // 7F3AED58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AED5C:
    ctx->pc = 0x7F3AED5Cu;
    // 7F3AED5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AED60:
    ctx->pc = 0x7F3AED60u;
    ctx->downcount -= 5;
    // 7F3AED60: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AED64:
    ctx->pc = 0x7F3AED64u;
    // 7F3AED64: lwzu     r0, -30952(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30952);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AED68:
    ctx->pc = 0x7F3AED68u;
    // 7F3AED68: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AED6C:
    ctx->pc = 0x7F3AED6Cu;
    // 7F3AED6C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AED70:
    ctx->pc = 0x7F3AED70u;
    // 7F3AED70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AED74:
    ctx->pc = 0x7F3AED74u;
    ctx->downcount -= 5;
    // 7F3AED74: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F3AED78:
    ctx->pc = 0x7F3AED78u;
    // 7F3AED78: lwzu     r0, -30948(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30948);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AED7C:
    ctx->pc = 0x7F3AED7Cu;
    // 7F3AED7C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AED80:
    ctx->pc = 0x7F3AED80u;
    // 7F3AED80: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AED84:
    ctx->pc = 0x7F3AED84u;
    // 7F3AED84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AED88:
    ctx->pc = 0x7F3AED88u;
    ctx->downcount -= 7;
    // 7F3AED88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AED8C:
    ctx->pc = 0x7F3AED8Cu;
    // 7F3AED8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AED90:
    ctx->pc = 0x7F3AED90u;
    // 7F3AED90: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AED94:
    ctx->pc = 0x7F3AED94u;
    // 7F3AED94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AED98:
    ctx->pc = 0x7F3AED98u;
    // 7F3AED98: lwz     r0, -32160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AED9C:
    ctx->pc = 0x7F3AED9Cu;
    // 7F3AED9C: cmpwi   r0, 0
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

label_7F3AEDA0:
    ctx->pc = 0x7F3AEDA0u;
    // 7F3AEDA0: bc    4, 2, 0x7F3AEDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEDE8;
        }
    }

label_7F3AEDA4:
    ctx->pc = 0x7F3AEDA4u;
    ctx->downcount -= 11;
    // 7F3AEDA4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AEDA8:
    ctx->pc = 0x7F3AEDA8u;
    // 7F3AEDA8: lis     r4, 32571
    ctx->gpr[4] = ((u32)(s32)(32571) << 16);

label_7F3AEDAC:
    ctx->pc = 0x7F3AEDACu;
    // 7F3AEDAC: lis     r6, 105
    ctx->gpr[6] = ((u32)(s32)(105) << 16);

label_7F3AEDB0:
    ctx->pc = 0x7F3AEDB0u;
    // 7F3AEDB0: li      r5, 241
    ctx->gpr[5] = (u32)(s32)(241);

label_7F3AEDB4:
    ctx->pc = 0x7F3AEDB4u;
    // 7F3AEDB4: addi    r8, r4, -3564
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-3564);

label_7F3AEDB8:
    ctx->pc = 0x7F3AEDB8u;
    // 7F3AEDB8: addi    r3, r3, -32156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32156);

label_7F3AEDBC:
    ctx->pc = 0x7F3AEDBCu;
    // 7F3AEDBC: addi    r4, r6, 16626
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16626);

label_7F3AEDC0:
    ctx->pc = 0x7F3AEDC0u;
    // 7F3AEDC0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F3AEDC4:
    ctx->pc = 0x7F3AEDC4u;
    // 7F3AEDC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AEDC8:
    ctx->pc = 0x7F3AEDC8u;
    // 7F3AEDC8: li      r9, 128
    ctx->gpr[9] = (u32)(s32)(128);

label_7F3AEDCC:
    ctx->pc = 0x7F3AEDCCu;
    // 7F3AEDCC: bl      0x7F3B2D40
    {
            ctx->lr = 0x7F3AEDD0u;
            ctx->pc = 0x7F3B2D40u;
            return;
    }

label_7F3AEDD0:
    ctx->pc = 0x7F3AEDD0u;
    ctx->downcount -= 3;
    // 7F3AEDD0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AEDD4:
    ctx->pc = 0x7F3AEDD4u;
    // 7F3AEDD4: addi    r3, r3, -32156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32156);

label_7F3AEDD8:
    ctx->pc = 0x7F3AEDD8u;
    // 7F3AEDD8: bl      0x7F3B2D9C
    {
            ctx->lr = 0x7F3AEDDCu;
            ctx->pc = 0x7F3B2D9Cu;
            return;
    }

label_7F3AEDDC:
    ctx->pc = 0x7F3AEDDCu;
    ctx->downcount -= 3;
    // 7F3AEDDC: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AEDE0:
    ctx->pc = 0x7F3AEDE0u;
    // 7F3AEDE0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AEDE4:
    ctx->pc = 0x7F3AEDE4u;
    // 7F3AEDE4: stw     r0, -32160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEDE8:
    ctx->pc = 0x7F3AEDE8u;
    ctx->downcount -= 5;
    // 7F3AEDE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEDEC:
    ctx->pc = 0x7F3AEDECu;
    // 7F3AEDEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEDF0:
    ctx->pc = 0x7F3AEDF0u;
    // 7F3AEDF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEDF4:
    ctx->pc = 0x7F3AEDF4u;
    // 7F3AEDF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEDF8:
    ctx->pc = 0x7F3AEDF8u;
    ctx->downcount -= 7;
    // 7F3AEDF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEDFC:
    ctx->pc = 0x7F3AEDFCu;
    // 7F3AEDFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEE00:
    ctx->pc = 0x7F3AEE00u;
    // 7F3AEE00: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AEE04:
    ctx->pc = 0x7F3AEE04u;
    // 7F3AEE04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEE08:
    ctx->pc = 0x7F3AEE08u;
    // 7F3AEE08: lwz     r0, -32160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEE0C:
    ctx->pc = 0x7F3AEE0Cu;
    // 7F3AEE0C: cmpwi   r0, 0
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

label_7F3AEE10:
    ctx->pc = 0x7F3AEE10u;
    // 7F3AEE10: bc    4, 2, 0x7F3AEE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEE1C;
        }
    }

label_7F3AEE14:
    ctx->pc = 0x7F3AEE14u;
    ctx->downcount -= 2;
    // 7F3AEE14: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3AEE18:
    ctx->pc = 0x7F3AEE18u;
    // 7F3AEE18: b       0x7F3AEE34
    {
            goto label_7F3AEE34;
    }

label_7F3AEE1C:
    ctx->pc = 0x7F3AEE1Cu;
    ctx->downcount -= 5;
    // 7F3AEE1C: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AEE20:
    ctx->pc = 0x7F3AEE20u;
    // 7F3AEE20: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEE24:
    ctx->pc = 0x7F3AEE24u;
    // 7F3AEE24: addi    r3, r5, -32156
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-32156);

label_7F3AEE28:
    ctx->pc = 0x7F3AEE28u;
    // 7F3AEE28: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEE2C:
    ctx->pc = 0x7F3AEE2Cu;
    // 7F3AEE2C: bl      0x7F3AED20
    {
            ctx->lr = 0x7F3AEE30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AED20u;
                return;
            }
            goto label_7F3AED20;
    }

label_7F3AEE30:
    ctx->pc = 0x7F3AEE30u;
    ctx->downcount -= 1;
    // 7F3AEE30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AEE34:
    ctx->pc = 0x7F3AEE34u;
    ctx->downcount -= 5;
    // 7F3AEE34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEE38:
    ctx->pc = 0x7F3AEE38u;
    // 7F3AEE38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEE3C:
    ctx->pc = 0x7F3AEE3Cu;
    // 7F3AEE3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEE40:
    ctx->pc = 0x7F3AEE40u;
    // 7F3AEE40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEE44:
    ctx->pc = 0x7F3AEE44u;
    ctx->downcount -= 7;
    // 7F3AEE44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEE48:
    ctx->pc = 0x7F3AEE48u;
    // 7F3AEE48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEE4C:
    ctx->pc = 0x7F3AEE4Cu;
    // 7F3AEE4C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AEE50:
    ctx->pc = 0x7F3AEE50u;
    // 7F3AEE50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEE54:
    ctx->pc = 0x7F3AEE54u;
    // 7F3AEE54: lwz     r0, -32160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEE58:
    ctx->pc = 0x7F3AEE58u;
    // 7F3AEE58: cmpwi   r0, 0
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

label_7F3AEE5C:
    ctx->pc = 0x7F3AEE5Cu;
    // 7F3AEE5C: bc    12, 2, 0x7F3AEE74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEE74;
        }
    }

label_7F3AEE60:
    ctx->pc = 0x7F3AEE60u;
    ctx->downcount -= 5;
    // 7F3AEE60: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AEE64:
    ctx->pc = 0x7F3AEE64u;
    // 7F3AEE64: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEE68:
    ctx->pc = 0x7F3AEE68u;
    // 7F3AEE68: addi    r3, r5, -32156
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-32156);

label_7F3AEE6C:
    ctx->pc = 0x7F3AEE6Cu;
    // 7F3AEE6C: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEE70:
    ctx->pc = 0x7F3AEE70u;
    // 7F3AEE70: bl      0x7F3AED40
    {
            ctx->lr = 0x7F3AEE74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AED40u;
                return;
            }
            goto label_7F3AED40;
    }

label_7F3AEE74:
    ctx->pc = 0x7F3AEE74u;
    ctx->downcount -= 5;
    // 7F3AEE74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEE78:
    ctx->pc = 0x7F3AEE78u;
    // 7F3AEE78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEE7C:
    ctx->pc = 0x7F3AEE7Cu;
    // 7F3AEE7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AEE80:
    ctx->pc = 0x7F3AEE80u;
    // 7F3AEE80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AEE84:
    ctx->pc = 0x7F3AEE84u;
    ctx->downcount -= 18;
    // 7F3AEE84: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AEE88:
    ctx->pc = 0x7F3AEE88u;
    // 7F3AEE88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AEE8C:
    ctx->pc = 0x7F3AEE8Cu;
    // 7F3AEE8C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AEE90:
    ctx->pc = 0x7F3AEE90u;
    // 7F3AEE90: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AEE94:
    ctx->pc = 0x7F3AEE94u;
    // 7F3AEE94: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AEE98:
    ctx->pc = 0x7F3AEE98u;
    // 7F3AEE98: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_7F3AEE9C:
    ctx->pc = 0x7F3AEE9Cu;
    // 7F3AEE9C: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3AEEA0:
    ctx->pc = 0x7F3AEEA0u;
    // 7F3AEEA0: bl      0x7F3AB840
    {
            ctx->lr = 0x7F3AEEA4u;
            ctx->pc = 0x7F3AB840u;
            return;
    }

label_7F3AEEA4:
    ctx->pc = 0x7F3AEEA4u;
    ctx->downcount -= 4;
    // 7F3AEEA4: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AEEA8:
    ctx->pc = 0x7F3AEEA8u;
    // 7F3AEEA8: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F3AEEAC:
    ctx->pc = 0x7F3AEEACu;
    // 7F3AEEAC: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEEB0:
    ctx->pc = 0x7F3AEEB0u;
    // 7F3AEEB0: bl      0x8001DA20
    {
            ctx->lr = 0x7F3AEEB4u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_7F3AEEB4:
    ctx->pc = 0x7F3AEEB4u;
    ctx->downcount -= 3;
    // 7F3AEEB4: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEEB8:
    ctx->pc = 0x7F3AEEB8u;
    // 7F3AEEB8: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F3AEEBC:
    ctx->pc = 0x7F3AEEBCu;
    // 7F3AEEBC: bl      0x80046538
    {
            ctx->lr = 0x7F3AEEC0u;
            ctx->pc = 0x80046538u;
            return;
    }

label_7F3AEEC0:
    ctx->pc = 0x7F3AEEC0u;
    ctx->downcount -= 1;
    // 7F3AEEC0: bl      0x800425CC
    {
            ctx->lr = 0x7F3AEEC4u;
            ctx->pc = 0x800425CCu;
            return;
    }

label_7F3AEEC4:
    ctx->pc = 0x7F3AEEC4u;
    ctx->downcount -= 4;
    // 7F3AEEC4: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AEEC8:
    ctx->pc = 0x7F3AEEC8u;
    // 7F3AEEC8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3AEECC:
    ctx->pc = 0x7F3AEECCu;
    // 7F3AEECC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3AEED0:
    ctx->pc = 0x7F3AEED0u;
    // 7F3AEED0: bl      0x80042184
    {
            ctx->lr = 0x7F3AEED4u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AEED4:
    ctx->pc = 0x7F3AEED4u;
    ctx->downcount -= 4;
    // 7F3AEED4: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AEED8:
    ctx->pc = 0x7F3AEED8u;
    // 7F3AEED8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3AEEDC:
    ctx->pc = 0x7F3AEEDCu;
    // 7F3AEEDC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AEEE0:
    ctx->pc = 0x7F3AEEE0u;
    // 7F3AEEE0: bl      0x80042184
    {
            ctx->lr = 0x7F3AEEE4u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AEEE4:
    ctx->pc = 0x7F3AEEE4u;
    ctx->downcount -= 4;
    // 7F3AEEE4: lwz     r4, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AEEE8:
    ctx->pc = 0x7F3AEEE8u;
    // 7F3AEEE8: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3AEEEC:
    ctx->pc = 0x7F3AEEECu;
    // 7F3AEEEC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AEEF0:
    ctx->pc = 0x7F3AEEF0u;
    // 7F3AEEF0: bl      0x80042184
    {
            ctx->lr = 0x7F3AEEF4u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F3AEEF4:
    ctx->pc = 0x7F3AEEF4u;
    ctx->downcount -= 3;
    // 7F3AEEF4: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEEF8:
    ctx->pc = 0x7F3AEEF8u;
    // 7F3AEEF8: cmplwi  r3, 0x0000
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

label_7F3AEEFC:
    ctx->pc = 0x7F3AEEFCu;
    // 7F3AEEFC: bc    12, 2, 0x7F3AEF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEF1C;
        }
    }

label_7F3AEF00:
    ctx->pc = 0x7F3AEF00u;
    ctx->downcount -= 3;
    // 7F3AEF00: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEF04:
    ctx->pc = 0x7F3AEF04u;
    // 7F3AEF04: cmplwi  r0, 0x0000
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

label_7F3AEF08:
    ctx->pc = 0x7F3AEF08u;
    // 7F3AEF08: bc    4, 2, 0x7F3AEF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEF1C;
        }
    }

label_7F3AEF0C:
    ctx->pc = 0x7F3AEF0Cu;
    ctx->downcount -= 3;
    // 7F3AEF0C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEF10:
    ctx->pc = 0x7F3AEF10u;
    // 7F3AEF10: cmplwi  r0, 0x0000
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

label_7F3AEF14:
    ctx->pc = 0x7F3AEF14u;
    // 7F3AEF14: bc    4, 2, 0x7F3AEF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AEF1C;
        }
    }

label_7F3AEF18:
    ctx->pc = 0x7F3AEF18u;
    ctx->downcount -= 1;
    // 7F3AEF18: b       0x7F3AEF20
    {
            goto label_7F3AEF20;
    }

label_7F3AEF1C:
    ctx->pc = 0x7F3AEF1Cu;
    ctx->downcount -= 1;
    // 7F3AEF1C: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEF20:
    ctx->pc = 0x7F3AEF20u;
    ctx->downcount -= 2;
    // 7F3AEF20: lwz     r28, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3AEF24:
    ctx->pc = 0x7F3AEF24u;
    // 7F3AEF24: bl      0x7F3B8930
    {
            ctx->lr = 0x7F3AEF28u;
            ctx->pc = 0x7F3B8930u;
            return;
    }

label_7F3AEF28:
    ctx->pc = 0x7F3AEF28u;
    ctx->downcount -= 9;
    // 7F3AEF28: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AEF2C:
    ctx->pc = 0x7F3AEF2Cu;
    // 7F3AEF2C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AEF30:
    ctx->pc = 0x7F3AEF30u;
    // 7F3AEF30: addi    r3, r3, -31004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31004);

label_7F3AEF34:
    ctx->pc = 0x7F3AEF34u;
    // 7F3AEF34: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3AEF38:
    ctx->pc = 0x7F3AEF38u;
    // 7F3AEF38: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEF3C:
    ctx->pc = 0x7F3AEF3Cu;
    // 7F3AEF3C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F3AEF40:
    ctx->pc = 0x7F3AEF40u;
    // 7F3AEF40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AEF44:
    ctx->pc = 0x7F3AEF44u;
    // 7F3AEF44: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AEF48:
    ctx->pc = 0x7F3AEF48u;
    // 7F3AEF48: bl      0x7F3B8BA4
    {
            ctx->lr = 0x7F3AEF4Cu;
            ctx->pc = 0x7F3B8BA4u;
            return;
    }

label_7F3AEF4C:
    ctx->pc = 0x7F3AEF4Cu;
    ctx->downcount -= 3;
    // 7F3AEF4C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3AEF50:
    ctx->pc = 0x7F3AEF50u;
    // 7F3AEF50: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3AEF54:
    ctx->pc = 0x7F3AEF54u;
    // 7F3AEF54: b       0x7F3AEFDC
    {
            goto label_7F3AEFDC;
    }

label_7F3AEF58:
    ctx->pc = 0x7F3AEF58u;
    ctx->downcount -= 6;
    // 7F3AEF58: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEF5C:
    // 7F3AEF5C: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F3AEF60:
    // 7F3AEF60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AEF64:
    // 7F3AEF64: add   r26, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F3AEF68:
    ctx->pc = 0x7F3AEF68u;
    // 7F3AEF68: lhz     r5, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F3AEF6C:
    // 7F3AEF6C: bl      0x80042E0C
    {
            ctx->lr = 0x7F3AEF70u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F3AEF70:
    ctx->downcount -= 3;
    // 7F3AEF70: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3AEF74:
    // 7F3AEF74: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3AEF78:
    // 7F3AEF78: b       0x7F3AEFC4
    {
            goto label_7F3AEFC4;
    }

label_7F3AEF7C:
    ctx->pc = 0x7F3AEF7Cu;
    ctx->downcount -= 12;
    // 7F3AEF7C: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AEF80:
    ctx->pc = 0x7F3AEF80u;
    // 7F3AEF80: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AEF84:
    ctx->pc = 0x7F3AEF84u;
    // 7F3AEF84: lhzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F3AEF88:
    ctx->pc = 0x7F3AEF88u;
    // 7F3AEF88: lwz     r5, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AEF8C:
    ctx->pc = 0x7F3AEF8Cu;
    // 7F3AEF8C: lhzx    r0, r3, r28
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[28];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AEF90:
    // 7F3AEF90: rlwinm r3, r4, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F3AEF94:
    ctx->pc = 0x7F3AEF94u;
    // 7F3AEF94: lwz     r4, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AEF98:
    ctx->pc = 0x7F3AEF98u;
    // 7F3AEF98: lhzx    r5, r5, r28
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[28];
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F3AEF9C:
    ctx->pc = 0x7F3AEF9Cu;
    // 7F3AEF9C: lhax    r23, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[23] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AEFA0:
    // 7F3AEFA0: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3AEFA4:
    // 7F3AEFA4: extsh r24, r5
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F3AEFA8:
    // 7F3AEFA8: bl      0x7F3AF020
    {
            ctx->lr = 0x7F3AEFACu;
            goto label_7F3AF020;
    }

label_7F3AEFAC:
    ctx->downcount -= 2;
    // 7F3AEFAC: rlwinm r3, r24, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x0000FFFFu;
    }

label_7F3AEFB0:
    // 7F3AEFB0: bl      0x7F3AF014
    {
            ctx->lr = 0x7F3AEFB4u;
            goto label_7F3AF014;
    }

label_7F3AEFB4:
    ctx->downcount -= 2;
    // 7F3AEFB4: rlwinm r3, r23, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[23], 0u) & 0x0000FFFFu;
    }

label_7F3AEFB8:
    // 7F3AEFB8: bl      0x7F3AF008
    {
            ctx->lr = 0x7F3AEFBCu;
            goto label_7F3AF008;
    }

label_7F3AEFBC:
    ctx->downcount -= 2;
    // 7F3AEFBC: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F3AEFC0:
    // 7F3AEFC0: addi    r28, r28, 2
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(2);

label_7F3AEFC4:
    ctx->pc = 0x7F3AEFC4u;
    ctx->downcount -= 3;
    // 7F3AEFC4: lhz     r0, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AEFC8:
    // 7F3AEFC8: cmpw    r25, r0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AEFCC:
    // 7F3AEFCC: bc    12, 0, 0x7F3AEF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEF7Cu;
                return;
            }
            goto label_7F3AEF7C;
        }
    }

label_7F3AEFD0:
    ctx->downcount -= 1;
    // 7F3AEFD0: bl      0x7F3AF004
    {
            ctx->lr = 0x7F3AEFD4u;
            goto label_7F3AF004;
    }

label_7F3AEFD4:
    ctx->downcount -= 2;
    // 7F3AEFD4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F3AEFD8:
    // 7F3AEFD8: addi    r29, r29, 32
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(32);

label_7F3AEFDC:
    ctx->pc = 0x7F3AEFDCu;
    ctx->downcount -= 3;
    // 7F3AEFDC: lhz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AEFE0:
    // 7F3AEFE0: cmpw    r27, r0
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

label_7F3AEFE4:
    // 7F3AEFE4: bc    12, 0, 0x7F3AEF58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEF58u;
                return;
            }
            goto label_7F3AEF58;
        }
    }

label_7F3AEFE8:
    ctx->pc = 0x7F3AEFE8u;
    ctx->downcount -= 1;
    // 7F3AEFE8: bl      0x80046600
    {
            ctx->lr = 0x7F3AEFECu;
            ctx->pc = 0x80046600u;
            return;
    }

label_7F3AEFEC:
    ctx->pc = 0x7F3AEFECu;
    ctx->downcount -= 17;
    // 7F3AEFEC: sth     r3, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AEFF0:
    ctx->pc = 0x7F3AEFF0u;
    // 7F3AEFF0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AEFF4:
    ctx->pc = 0x7F3AEFF4u;
    // 7F3AEFF4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AEFF8:
    ctx->pc = 0x7F3AEFF8u;
    // 7F3AEFF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AEFFC:
    ctx->pc = 0x7F3AEFFCu;
    // 7F3AEFFC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3AF000:
    ctx->pc = 0x7F3AF000u;
    // 7F3AF000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF004:
    ctx->pc = 0x7F3AF004u;
    ctx->downcount -= 1;
    // 7F3AF004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF008:
    ctx->pc = 0x7F3AF008u;
    ctx->downcount -= 3;
    // 7F3AF008: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AF00C:
    ctx->pc = 0x7F3AF00Cu;
    // 7F3AF00C: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AF010:
    ctx->pc = 0x7F3AF010u;
    // 7F3AF010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF014:
    ctx->pc = 0x7F3AF014u;
    ctx->downcount -= 3;
    // 7F3AF014: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AF018:
    ctx->pc = 0x7F3AF018u;
    // 7F3AF018: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AF01C:
    ctx->pc = 0x7F3AF01Cu;
    // 7F3AF01C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF020:
    ctx->pc = 0x7F3AF020u;
    ctx->downcount -= 3;
    // 7F3AF020: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F3AF024:
    ctx->pc = 0x7F3AF024u;
    // 7F3AF024: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3AF028:
    ctx->pc = 0x7F3AF028u;
    // 7F3AF028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF02C:
    ctx->pc = 0x7F3AF02Cu;
    ctx->downcount -= 17;
    // 7F3AF02C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF030:
    ctx->pc = 0x7F3AF030u;
    // 7F3AF030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF034:
    ctx->pc = 0x7F3AF034u;
    // 7F3AF034: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF038:
    ctx->pc = 0x7F3AF038u;
    // 7F3AF038: stmw     r28, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF03C:
    ctx->pc = 0x7F3AF03Cu;
    // 7F3AF03C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF040:
    ctx->pc = 0x7F3AF040u;
    // 7F3AF040: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF044:
    ctx->pc = 0x7F3AF044u;
    // 7F3AF044: bl      0x7F3AF4C4
    {
            ctx->lr = 0x7F3AF048u;
            goto label_7F3AF4C4;
    }

label_7F3AF048:
    ctx->pc = 0x7F3AF048u;
    ctx->downcount -= 6;
    // 7F3AF048: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AF04C:
    ctx->pc = 0x7F3AF04Cu;
    // 7F3AF04C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF050:
    ctx->pc = 0x7F3AF050u;
    // 7F3AF050: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF054:
    ctx->pc = 0x7F3AF054u;
    // 7F3AF054: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AF058:
    ctx->pc = 0x7F3AF058u;
    // 7F3AF058: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AF05C:
    ctx->pc = 0x7F3AF05Cu;
    // 7F3AF05C: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AF060u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AF060:
    ctx->pc = 0x7F3AF060u;
    ctx->downcount -= 2;
    // 7F3AF060: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF064:
    ctx->pc = 0x7F3AF064u;
    // 7F3AF064: bl      0x80046318
    {
            ctx->lr = 0x7F3AF068u;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AF068:
    ctx->pc = 0x7F3AF068u;
    ctx->downcount -= 3;
    // 7F3AF068: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF06C:
    ctx->pc = 0x7F3AF06Cu;
    // 7F3AF06C: rlwinm. r0, r0, 0, 22, 22
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

label_7F3AF070:
    ctx->pc = 0x7F3AF070u;
    // 7F3AF070: bc    12, 2, 0x7F3AF094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF094;
        }
    }

label_7F3AF074:
    ctx->pc = 0x7F3AF074u;
    ctx->downcount -= 2;
    // 7F3AF074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF078:
    ctx->pc = 0x7F3AF078u;
    // 7F3AF078: bl      0x80046318
    {
            ctx->lr = 0x7F3AF07Cu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AF07C:
    ctx->pc = 0x7F3AF07Cu;
    ctx->downcount -= 6;
    // 7F3AF07C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3AF080:
    ctx->pc = 0x7F3AF080u;
    // 7F3AF080: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3AF084:
    ctx->pc = 0x7F3AF084u;
    // 7F3AF084: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF088:
    ctx->pc = 0x7F3AF088u;
    // 7F3AF088: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3AF08C:
    ctx->pc = 0x7F3AF08Cu;
    // 7F3AF08C: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3AF090:
    ctx->pc = 0x7F3AF090u;
    // 7F3AF090: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AF094u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AF094:
    ctx->pc = 0x7F3AF094u;
    ctx->downcount -= 3;
    // 7F3AF094: lwz     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF098:
    ctx->pc = 0x7F3AF098u;
    // 7F3AF098: cmplwi  r0, 0x0000
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

label_7F3AF09C:
    ctx->pc = 0x7F3AF09Cu;
    // 7F3AF09C: bc    4, 2, 0x7F3AF0A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF0A8;
        }
    }

label_7F3AF0A0:
    ctx->pc = 0x7F3AF0A0u;
    ctx->downcount -= 2;
    // 7F3AF0A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AF0A4:
    ctx->pc = 0x7F3AF0A4u;
    // 7F3AF0A4: bl      0x7F3AEE84
    {
            ctx->lr = 0x7F3AF0A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AEE84u;
                return;
            }
            goto label_7F3AEE84;
    }

label_7F3AF0A8:
    ctx->pc = 0x7F3AF0A8u;
    ctx->downcount -= 3;
    // 7F3AF0A8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3AF0AC:
    ctx->pc = 0x7F3AF0ACu;
    // 7F3AF0AC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3AF0B0:
    ctx->pc = 0x7F3AF0B0u;
    // 7F3AF0B0: b       0x7F3AF198
    {
            goto label_7F3AF198;
    }

label_7F3AF0B4:
    ctx->downcount -= 12;
    // 7F3AF0B4: add   r6, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AF0B8:
    // 7F3AF0B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AF0BC:
    ctx->pc = 0x7F3AF0BCu;
    // 7F3AF0BC: lwz     r7, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AF0C0:
    ctx->pc = 0x7F3AF0C0u;
    // 7F3AF0C0: lwz     r5, 148(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF0C4:
    ctx->pc = 0x7F3AF0C4u;
    // 7F3AF0C4: lwz     r4, 152(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AF0C8:
    // 7F3AF0C8: cmpwi   r7, 0
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

label_7F3AF0CC:
    ctx->pc = 0x7F3AF0CCu;
    // 7F3AF0CC: lwz     r3, 156(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF0D0:
    ctx->pc = 0x7F3AF0D0u;
    // 7F3AF0D0: stb     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AF0D4:
    ctx->pc = 0x7F3AF0D4u;
    // 7F3AF0D4: stb     r4, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3AF0D8:
    ctx->pc = 0x7F3AF0D8u;
    // 7F3AF0D8: stb     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3AF0DC:
    ctx->pc = 0x7F3AF0DCu;
    // 7F3AF0DC: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AF0E0:
    // 7F3AF0E0: bc    12, 2, 0x7F3AF0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF0F0;
        }
    }

label_7F3AF0E4:
    ctx->downcount -= 3;
    // 7F3AF0E4: rlwinm r3, r7, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0xFFFFFFFEu;
    }

label_7F3AF0E8:
    // 7F3AF0E8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3AF0EC:
    ctx->pc = 0x7F3AF0ECu;
    // 7F3AF0EC: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AF0F0:
    ctx->downcount -= 3;
    // 7F3AF0F0: addi    r3, r6, 84
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(84);

label_7F3AF0F4:
    // 7F3AF0F4: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3AF0F8:
    // 7F3AF0F8: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AF0FCu;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AF0FC:
    ctx->downcount -= 4;
    // 7F3AF0FC: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3AF100:
    // 7F3AF100: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF104:
    // 7F3AF104: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF108:
    // 7F3AF108: bl      0x80025090
    {
            ctx->lr = 0x7F3AF10Cu;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F3AF10C:
    ctx->downcount -= 2;
    // 7F3AF10C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF110:
    // 7F3AF110: bl      0x80046B34
    {
            ctx->lr = 0x7F3AF114u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_7F3AF114:
    ctx->downcount -= 3;
    // 7F3AF114: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3AF118:
    // 7F3AF118: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF11C:
    // 7F3AF11C: bl      0x80046A30
    {
            ctx->lr = 0x7F3AF120u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_7F3AF120:
    ctx->pc = 0x7F3AF120u;
    ctx->downcount -= 3;
    // 7F3AF120: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF124:
    // 7F3AF124: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AF128:
    // 7F3AF128: bc    12, 2, 0x7F3AF140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF140;
        }
    }

label_7F3AF12C:
    ctx->downcount -= 4;
    // 7F3AF12C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF130:
    // 7F3AF130: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AF134:
    // 7F3AF134: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF138:
    // 7F3AF138: bl      0x800462E4
    {
            ctx->lr = 0x7F3AF13Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AF13C:
    ctx->downcount -= 1;
    // 7F3AF13C: b       0x7F3AF170
    {
            goto label_7F3AF170;
    }

label_7F3AF140:
    ctx->pc = 0x7F3AF140u;
    ctx->downcount -= 3;
    // 7F3AF140: lbz     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AF144:
    // 7F3AF144: cmplwi  r0, 0x00FF
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

label_7F3AF148:
    // 7F3AF148: bc    12, 2, 0x7F3AF160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF160;
        }
    }

label_7F3AF14C:
    ctx->downcount -= 4;
    // 7F3AF14C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF150:
    // 7F3AF150: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF154:
    // 7F3AF154: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF158:
    // 7F3AF158: bl      0x800462E4
    {
            ctx->lr = 0x7F3AF15Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AF15C:
    ctx->downcount -= 1;
    // 7F3AF15C: b       0x7F3AF170
    {
            goto label_7F3AF170;
    }

label_7F3AF160:
    ctx->downcount -= 4;
    // 7F3AF160: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF164:
    // 7F3AF164: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF168:
    // 7F3AF168: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AF16C:
    // 7F3AF16C: bl      0x800462E4
    {
            ctx->lr = 0x7F3AF170u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AF170:
    ctx->pc = 0x7F3AF170u;
    ctx->downcount -= 5;
    // 7F3AF170: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF174:
    // 7F3AF174: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AF178:
    // 7F3AF178: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF17C:
    ctx->pc = 0x7F3AF17Cu;
    // 7F3AF17C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF180:
    // 7F3AF180: bl      0x80045970
    {
            ctx->lr = 0x7F3AF184u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F3AF184:
    ctx->pc = 0x7F3AF184u;
    ctx->downcount -= 3;
    // 7F3AF184: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF188:
    ctx->pc = 0x7F3AF188u;
    // 7F3AF188: lha     r4, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF18C:
    // 7F3AF18C: bl      0x800466D4
    {
            ctx->lr = 0x7F3AF190u;
            ctx->pc = 0x800466D4u;
            return;
    }

label_7F3AF190:
    ctx->downcount -= 2;
    // 7F3AF190: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3AF194:
    // 7F3AF194: addi    r29, r29, 80
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(80);

label_7F3AF198:
    ctx->pc = 0x7F3AF198u;
    ctx->downcount -= 3;
    // 7F3AF198: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF19C:
    // 7F3AF19C: cmpw    r28, r0
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

label_7F3AF1A0:
    // 7F3AF1A0: bc    12, 0, 0x7F3AF0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF0B4u;
                return;
            }
            goto label_7F3AF0B4;
        }
    }

label_7F3AF1A4:
    ctx->pc = 0x7F3AF1A4u;
    ctx->downcount -= 2;
    // 7F3AF1A4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AF1A8:
    ctx->pc = 0x7F3AF1A8u;
    // 7F3AF1A8: bl      0x80025030
    {
            ctx->lr = 0x7F3AF1ACu;
            ctx->pc = 0x80025030u;
            return;
    }

label_7F3AF1AC:
    ctx->pc = 0x7F3AF1ACu;
    ctx->downcount -= 2;
    // 7F3AF1AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF1B0:
    ctx->pc = 0x7F3AF1B0u;
    // 7F3AF1B0: bl      0x80046B34
    {
            ctx->lr = 0x7F3AF1B4u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_7F3AF1B4:
    ctx->pc = 0x7F3AF1B4u;
    ctx->downcount -= 3;
    // 7F3AF1B4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AF1B8:
    ctx->pc = 0x7F3AF1B8u;
    // 7F3AF1B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF1BC:
    ctx->pc = 0x7F3AF1BCu;
    // 7F3AF1BC: bl      0x80046A30
    {
            ctx->lr = 0x7F3AF1C0u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_7F3AF1C0:
    ctx->pc = 0x7F3AF1C0u;
    ctx->downcount -= 3;
    // 7F3AF1C0: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF1C4:
    ctx->pc = 0x7F3AF1C4u;
    // 7F3AF1C4: rlwinm. r0, r0, 0, 22, 22
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

label_7F3AF1C8:
    ctx->pc = 0x7F3AF1C8u;
    // 7F3AF1C8: bc    12, 2, 0x7F3AF1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF1FC;
        }
    }

label_7F3AF1CC:
    ctx->pc = 0x7F3AF1CCu;
    ctx->downcount -= 6;
    // 7F3AF1CC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3AF1D0:
    ctx->pc = 0x7F3AF1D0u;
    // 7F3AF1D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF1D4:
    ctx->pc = 0x7F3AF1D4u;
    // 7F3AF1D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF1D8:
    ctx->pc = 0x7F3AF1D8u;
    // 7F3AF1D8: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3AF1DC:
    ctx->pc = 0x7F3AF1DCu;
    // 7F3AF1DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AF1E0:
    ctx->pc = 0x7F3AF1E0u;
    // 7F3AF1E0: bl      0x80045C5C
    {
            ctx->lr = 0x7F3AF1E4u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_7F3AF1E4:
    ctx->pc = 0x7F3AF1E4u;
    ctx->downcount -= 2;
    // 7F3AF1E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF1E8:
    ctx->pc = 0x7F3AF1E8u;
    // 7F3AF1E8: bl      0x80046318
    {
            ctx->lr = 0x7F3AF1ECu;
            ctx->pc = 0x80046318u;
            return;
    }

label_7F3AF1EC:
    ctx->pc = 0x7F3AF1ECu;
    ctx->downcount -= 4;
    // 7F3AF1EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF1F0:
    ctx->pc = 0x7F3AF1F0u;
    // 7F3AF1F0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF1F4:
    ctx->pc = 0x7F3AF1F4u;
    // 7F3AF1F4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AF1F8:
    ctx->pc = 0x7F3AF1F8u;
    // 7F3AF1F8: bl      0x800462E4
    {
            ctx->lr = 0x7F3AF1FCu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AF1FC:
    ctx->pc = 0x7F3AF1FCu;
    ctx->downcount -= 17;
    // 7F3AF1FC: lmw     r28, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF200:
    ctx->pc = 0x7F3AF200u;
    // 7F3AF200: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF204:
    ctx->pc = 0x7F3AF204u;
    // 7F3AF204: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF208:
    ctx->pc = 0x7F3AF208u;
    // 7F3AF208: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF20C:
    ctx->pc = 0x7F3AF20Cu;
    // 7F3AF20C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F3AF210:
    ctx->pc = 0x7F3AF210u;
    // 7F3AF210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF214:
    ctx->pc = 0x7F3AF214u;
    ctx->downcount -= 19;
    // 7F3AF214: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF218:
    ctx->pc = 0x7F3AF218u;
    // 7F3AF218: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF21C:
    ctx->pc = 0x7F3AF21Cu;
    // 7F3AF21C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF220:
    ctx->pc = 0x7F3AF220u;
    // 7F3AF220: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AF224:
    ctx->pc = 0x7F3AF224u;
    // 7F3AF224: stmw     r27, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF228:
    ctx->pc = 0x7F3AF228u;
    // 7F3AF228: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF22C:
    ctx->pc = 0x7F3AF22Cu;
    // 7F3AF22C: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AF230:
    ctx->pc = 0x7F3AF230u;
    // 7F3AF230: addi    r3, r28, 192
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(192);

label_7F3AF234:
    ctx->pc = 0x7F3AF234u;
    // 7F3AF234: bl      0x80025B84
    {
            ctx->lr = 0x7F3AF238u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F3AF238:
    ctx->pc = 0x7F3AF238u;
    ctx->downcount -= 3;
    // 7F3AF238: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AF23C:
    ctx->pc = 0x7F3AF23Cu;
    // 7F3AF23C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF240:
    ctx->pc = 0x7F3AF240u;
    // 7F3AF240: bl      0x800468B8
    {
            ctx->lr = 0x7F3AF244u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F3AF244:
    ctx->pc = 0x7F3AF244u;
    ctx->downcount -= 3;
    // 7F3AF244: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F3AF248:
    ctx->pc = 0x7F3AF248u;
    // 7F3AF248: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AF24C:
    ctx->pc = 0x7F3AF24Cu;
    // 7F3AF24C: bl      0x7F114E28
    {
            ctx->lr = 0x7F3AF250u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F3AF250:
    ctx->pc = 0x7F3AF250u;
    ctx->downcount -= 8;
    // 7F3AF250: lwz     r5, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF254:
    ctx->pc = 0x7F3AF254u;
    // 7F3AF254: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F3AF258:
    ctx->pc = 0x7F3AF258u;
    // 7F3AF258: lwz     r0, 940(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF25C:
    ctx->pc = 0x7F3AF25Cu;
    // 7F3AF25C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F3AF260:
    ctx->pc = 0x7F3AF260u;
    // 7F3AF260: cmpwi   r5, 0
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

label_7F3AF264:
    ctx->pc = 0x7F3AF264u;
    // 7F3AF264: addi    r4, r4, -21852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F3AF268:
    ctx->pc = 0x7F3AF268u;
    // 7F3AF268: slw   r10, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[10] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F3AF26C:
    ctx->pc = 0x7F3AF26Cu;
    // 7F3AF26C: bc    12, 2, 0x7F3AF3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF3B8;
        }
    }

label_7F3AF270:
    ctx->pc = 0x7F3AF270u;
    ctx->downcount -= 9;
    // 7F3AF270: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AF274:
    ctx->pc = 0x7F3AF274u;
    // 7F3AF274: addi    r0, r4, 4160
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4160);

label_7F3AF278:
    ctx->pc = 0x7F3AF278u;
    // 7F3AF278: lwz     r6, -12064(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12064);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AF27C:
    ctx->pc = 0x7F3AF27Cu;
    // 7F3AF27C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF280:
    ctx->pc = 0x7F3AF280u;
    // 7F3AF280: lwz     r9, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AF284:
    ctx->pc = 0x7F3AF284u;
    // 7F3AF284: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF288:
    ctx->pc = 0x7F3AF288u;
    // 7F3AF288: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F3AF28C:
    ctx->pc = 0x7F3AF28Cu;
    // 7F3AF28C: bc    4, 1, 0x7F3AF2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF2CC;
        }
    }

label_7F3AF290:
    ctx->pc = 0x7F3AF290u;
    ctx->downcount -= 4;
    // 7F3AF290: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AF294:
    ctx->pc = 0x7F3AF294u;
    // 7F3AF294: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF298:
    // 7F3AF298: and.   r5, r5, r10
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[10];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AF29C:
    // 7F3AF29C: bc    4, 2, 0x7F3AF2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF2C4;
        }
    }

label_7F3AF2A0:
    ctx->pc = 0x7F3AF2A0u;
    ctx->downcount -= 3;
    // 7F3AF2A0: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF2A4:
    // 7F3AF2A4: and.   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AF2A8:
    // 7F3AF2A8: bc    12, 2, 0x7F3AF2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF2C4;
        }
    }

label_7F3AF2AC:
    ctx->downcount -= 6;
    // 7F3AF2AC: add   r7, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3AF2B0:
    // 7F3AF2B0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AF2B4:
    ctx->pc = 0x7F3AF2B4u;
    // 7F3AF2B4: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3AF2B8:
    // 7F3AF2B8: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_7F3AF2BC:
    ctx->pc = 0x7F3AF2BCu;
    // 7F3AF2BC: lwz     r5, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF2C0:
    ctx->pc = 0x7F3AF2C0u;
    // 7F3AF2C0: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF2C4:
    ctx->downcount -= 2;
    // 7F3AF2C4: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_7F3AF2C8:
    // 7F3AF2C8: bc    16, 0, 0x7F3AF290
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF290u;
                return;
            }
            goto label_7F3AF290;
        }
    }

label_7F3AF2CC:
    ctx->pc = 0x7F3AF2CCu;
    ctx->downcount -= 2;
    // 7F3AF2CC: cmpwi   r3, 0
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

label_7F3AF2D0:
    ctx->pc = 0x7F3AF2D0u;
    // 7F3AF2D0: bc    12, 2, 0x7F3AF3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF3B8;
        }
    }

label_7F3AF2D4:
    ctx->pc = 0x7F3AF2D4u;
    ctx->downcount -= 10;
    // 7F3AF2D4: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F3AF2D8:
    ctx->pc = 0x7F3AF2D8u;
    // 7F3AF2D8: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3AF2DC:
    ctx->pc = 0x7F3AF2DCu;
    // 7F3AF2DC: addi    r6, r6, 15512
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15512);

label_7F3AF2E0:
    ctx->pc = 0x7F3AF2E0u;
    // 7F3AF2E0: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F3AF2E4:
    ctx->pc = 0x7F3AF2E4u;
    // 7F3AF2E4: lwz     r8, -27320(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-27320);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AF2E8:
    ctx->pc = 0x7F3AF2E8u;
    // 7F3AF2E8: addi    r4, r5, -27304
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-27304);

label_7F3AF2EC:
    ctx->pc = 0x7F3AF2ECu;
    // 7F3AF2EC: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F3AF2F0:
    ctx->pc = 0x7F3AF2F0u;
    // 7F3AF2F0: or   r11, r6, r6
    {
        ctx->gpr[11] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AF2F4:
    ctx->pc = 0x7F3AF2F4u;
    // 7F3AF2F4: or   r10, r4, r4
    {
        ctx->gpr[10] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF2F8:
    ctx->pc = 0x7F3AF2F8u;
    // 7F3AF2F8: b       0x7F3AF358
    {
            goto label_7F3AF358;
    }

label_7F3AF2FC:
    ctx->pc = 0x7F3AF2FCu;
    ctx->downcount -= 5;
    // 7F3AF2FC: lwz     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AF300:
    ctx->pc = 0x7F3AF300u;
    // 7F3AF300: lwz     r4, 816(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(816);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AF304:
    ctx->pc = 0x7F3AF304u;
    // 7F3AF304: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AF308:
    // 7F3AF308: rlwinm. r4, r4, 0, 30, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AF30C:
    // 7F3AF30C: bc    4, 2, 0x7F3AF350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF350;
        }
    }

label_7F3AF310:
    ctx->downcount -= 5;
    // 7F3AF310: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF314:
    ctx->pc = 0x7F3AF314u;
    // 7F3AF314: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F3AF318:
    // 7F3AF318: cmpwi   r3, 0
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

label_7F3AF31C:
    // 7F3AF31C: bc    4, 1, 0x7F3AF350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF350;
        }
    }

label_7F3AF320:
    ctx->downcount -= 5;
    // 7F3AF320: add   r7, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3AF324:
    ctx->pc = 0x7F3AF324u;
    // 7F3AF324: lwz     r6, 804(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(804);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AF328:
    ctx->pc = 0x7F3AF328u;
    // 7F3AF328: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF32C:
    // 7F3AF32C: cmpw    r6, r5
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AF330:
    // 7F3AF330: bc    4, 2, 0x7F3AF348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF348;
        }
    }

label_7F3AF334:
    ctx->pc = 0x7F3AF334u;
    ctx->downcount -= 5;
    // 7F3AF334: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AF338:
    // 7F3AF338: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_7F3AF33C:
    ctx->pc = 0x7F3AF33Cu;
    // 7F3AF33C: stw     r5, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF340:
    ctx->pc = 0x7F3AF340u;
    // 7F3AF340: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AF344:
    // 7F3AF344: addi    r11, r11, 8
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(8);

label_7F3AF348:
    ctx->downcount -= 2;
    // 7F3AF348: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_7F3AF34C:
    // 7F3AF34C: bc    16, 0, 0x7F3AF320
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF320u;
                return;
            }
            goto label_7F3AF320;
        }
    }

label_7F3AF350:
    ctx->downcount -= 2;
    // 7F3AF350: addi    r10, r10, 4
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(4);

label_7F3AF354:
    // 7F3AF354: addi    r8, r8, -1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1);

label_7F3AF358:
    ctx->downcount -= 2;
    // 7F3AF358: cmpwi   r8, 0
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

label_7F3AF35C:
    // 7F3AF35C: bc    12, 1, 0x7F3AF2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF2FCu;
                return;
            }
            goto label_7F3AF2FC;
        }
    }

label_7F3AF360:
    ctx->pc = 0x7F3AF360u;
    ctx->downcount -= 8;
    // 7F3AF360: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3AF364:
    ctx->pc = 0x7F3AF364u;
    // 7F3AF364: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F3AF368:
    ctx->pc = 0x7F3AF368u;
    // 7F3AF368: addi    r28, r4, 15512
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(15512);

label_7F3AF36C:
    ctx->pc = 0x7F3AF36Cu;
    // 7F3AF36C: or   r29, r12, r12
    {
        ctx->gpr[29] = ctx->gpr[12] | ctx->gpr[12];
    }

label_7F3AF370:
    ctx->pc = 0x7F3AF370u;
    // 7F3AF370: addi    r31, r3, -31004
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-31004);

label_7F3AF374:
    ctx->pc = 0x7F3AF374u;
    // 7F3AF374: li      r27, -1
    ctx->gpr[27] = (u32)(s32)(-1);

label_7F3AF378:
    ctx->pc = 0x7F3AF378u;
    // 7F3AF378: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F3AF37C:
    ctx->pc = 0x7F3AF37Cu;
    // 7F3AF37C: b       0x7F3AF3B0
    {
            goto label_7F3AF3B0;
    }

label_7F3AF380:
    ctx->pc = 0x7F3AF380u;
    ctx->downcount -= 3;
    // 7F3AF380: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF384:
    // 7F3AF384: cmpw    r3, r27
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AF388:
    // 7F3AF388: bc    12, 2, 0x7F3AF39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF39C;
        }
    }

label_7F3AF38C:
    ctx->pc = 0x7F3AF38Cu;
    ctx->downcount -= 4;
    // 7F3AF38C: sth     r30, 840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(840);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F3AF390:
    ctx->pc = 0x7F3AF390u;
    // 7F3AF390: lwz     r0, 824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF394:
    ctx->pc = 0x7F3AF394u;
    // 7F3AF394: lwz     r27, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F3AF398:
    ctx->pc = 0x7F3AF398u;
    // 7F3AF398: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF39C:
    ctx->pc = 0x7F3AF39Cu;
    ctx->downcount -= 3;
    // 7F3AF39C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF3A0:
    // 7F3AF3A0: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F3AF3A4:
    // 7F3AF3A4: bl      0x7F3AF02C
    {
            ctx->lr = 0x7F3AF3A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF02Cu;
                return;
            }
            goto label_7F3AF02C;
    }

label_7F3AF3A8:
    ctx->downcount -= 2;
    // 7F3AF3A8: addi    r28, r28, 8
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(8);

label_7F3AF3AC:
    // 7F3AF3AC: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F3AF3B0:
    ctx->downcount -= 2;
    // 7F3AF3B0: cmpwi   r29, 0
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

label_7F3AF3B4:
    // 7F3AF3B4: bc    12, 1, 0x7F3AF380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF380u;
                return;
            }
            goto label_7F3AF380;
        }
    }

label_7F3AF3B8:
    ctx->pc = 0x7F3AF3B8u;
    ctx->downcount -= 16;
    // 7F3AF3B8: lmw     r27, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF3BC:
    ctx->pc = 0x7F3AF3BCu;
    // 7F3AF3BC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF3C0:
    ctx->pc = 0x7F3AF3C0u;
    // 7F3AF3C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF3C4:
    ctx->pc = 0x7F3AF3C4u;
    // 7F3AF3C4: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F3AF3C8:
    ctx->pc = 0x7F3AF3C8u;
    // 7F3AF3C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF3CC:
    ctx->pc = 0x7F3AF3CCu;
    ctx->downcount -= 25;
    // 7F3AF3CC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF3D0:
    ctx->pc = 0x7F3AF3D0u;
    // 7F3AF3D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF3D4:
    ctx->pc = 0x7F3AF3D4u;
    // 7F3AF3D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF3D8:
    ctx->pc = 0x7F3AF3D8u;
    // 7F3AF3D8: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF3DC:
    ctx->pc = 0x7F3AF3DCu;
    // 7F3AF3DC: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AF3E0:
    ctx->pc = 0x7F3AF3E0u;
    // 7F3AF3E0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF3E4:
    ctx->pc = 0x7F3AF3E4u;
    // 7F3AF3E4: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF3E8:
    ctx->pc = 0x7F3AF3E8u;
    // 7F3AF3E8: mulli   r3, r27, 80
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)80);

label_7F3AF3EC:
    ctx->pc = 0x7F3AF3ECu;
    // 7F3AF3EC: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AF3F0:
    ctx->pc = 0x7F3AF3F0u;
    // 7F3AF3F0: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AF3F4:
    ctx->pc = 0x7F3AF3F4u;
    // 7F3AF3F4: addi    r30, r3, 84
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(84);

label_7F3AF3F8:
    ctx->pc = 0x7F3AF3F8u;
    // 7F3AF3F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AF3FC:
    ctx->pc = 0x7F3AF3FCu;
    // 7F3AF3FC: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AF400u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AF400:
    ctx->pc = 0x7F3AF400u;
    ctx->downcount -= 2;
    // 7F3AF400: or.   r31, r3, r3
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

label_7F3AF404:
    ctx->pc = 0x7F3AF404u;
    // 7F3AF404: bc    4, 2, 0x7F3AF410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF410;
        }
    }

label_7F3AF408:
    ctx->pc = 0x7F3AF408u;
    ctx->downcount -= 2;
    // 7F3AF408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF40C:
    ctx->pc = 0x7F3AF40Cu;
    // 7F3AF40C: b       0x7F3AF470
    {
            goto label_7F3AF470;
    }

label_7F3AF410:
    ctx->pc = 0x7F3AF410u;
    ctx->downcount -= 2;
    // 7F3AF410: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AF414:
    ctx->pc = 0x7F3AF414u;
    // 7F3AF414: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3AF418u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3AF418:
    ctx->pc = 0x7F3AF418u;
    ctx->downcount -= 22;
    // 7F3AF418: ori     r0, r26, 0x00C0
    ctx->gpr[0] = ctx->gpr[26] | 0x00C0u;

label_7F3AF41C:
    ctx->pc = 0x7F3AF41Cu;
    // 7F3AF41C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF420:
    ctx->pc = 0x7F3AF420u;
    // 7F3AF420: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF424:
    ctx->pc = 0x7F3AF424u;
    // 7F3AF424: stw     r27, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3AF428:
    ctx->pc = 0x7F3AF428u;
    // 7F3AF428: stw     r28, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3AF42C:
    ctx->pc = 0x7F3AF42Cu;
    // 7F3AF42C: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF430:
    ctx->pc = 0x7F3AF430u;
    // 7F3AF430: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF434:
    ctx->pc = 0x7F3AF434u;
    // 7F3AF434: stw     r25, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3AF438:
    ctx->pc = 0x7F3AF438u;
    // 7F3AF438: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF43C:
    ctx->pc = 0x7F3AF43Cu;
    // 7F3AF43C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF440:
    ctx->pc = 0x7F3AF440u;
    // 7F3AF440: lwz     r0, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF444:
    ctx->pc = 0x7F3AF444u;
    // 7F3AF444: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF448:
    ctx->pc = 0x7F3AF448u;
    // 7F3AF448: lwz     r0, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF44C:
    ctx->pc = 0x7F3AF44Cu;
    // 7F3AF44C: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF450:
    ctx->pc = 0x7F3AF450u;
    // 7F3AF450: lwz     r0, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF454:
    ctx->pc = 0x7F3AF454u;
    // 7F3AF454: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF458:
    ctx->pc = 0x7F3AF458u;
    // 7F3AF458: lha     r0, 66(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF45C:
    ctx->pc = 0x7F3AF45Cu;
    // 7F3AF45C: sth     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AF460:
    ctx->pc = 0x7F3AF460u;
    // 7F3AF460: lha     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF464:
    ctx->pc = 0x7F3AF464u;
    // 7F3AF464: sth     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AF468:
    ctx->pc = 0x7F3AF468u;
    // 7F3AF468: lha     r0, 70(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF46C:
    ctx->pc = 0x7F3AF46Cu;
    // 7F3AF46C: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AF470:
    ctx->pc = 0x7F3AF470u;
    ctx->downcount -= 16;
    // 7F3AF470: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF474:
    ctx->pc = 0x7F3AF474u;
    // 7F3AF474: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF478:
    ctx->pc = 0x7F3AF478u;
    // 7F3AF478: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF47C:
    ctx->pc = 0x7F3AF47Cu;
    // 7F3AF47C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3AF480:
    ctx->pc = 0x7F3AF480u;
    // 7F3AF480: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF484:
    ctx->pc = 0x7F3AF484u;
    ctx->downcount -= 8;
    // 7F3AF484: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF488:
    ctx->pc = 0x7F3AF488u;
    // 7F3AF488: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF48C:
    ctx->pc = 0x7F3AF48Cu;
    // 7F3AF48C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF490:
    ctx->pc = 0x7F3AF490u;
    // 7F3AF490: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3AF494:
    ctx->pc = 0x7F3AF494u;
    // 7F3AF494: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF498:
    ctx->pc = 0x7F3AF498u;
    // 7F3AF498: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF49C:
    ctx->pc = 0x7F3AF49Cu;
    // 7F3AF49C: cmplwi  r3, 0x0000
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

label_7F3AF4A0:
    ctx->pc = 0x7F3AF4A0u;
    // 7F3AF4A0: bc    12, 2, 0x7F3AF4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF4A8;
        }
    }

label_7F3AF4A4:
    ctx->pc = 0x7F3AF4A4u;
    ctx->downcount -= 1;
    // 7F3AF4A4: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F3AF4A8u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F3AF4A8:
    ctx->pc = 0x7F3AF4A8u;
    ctx->downcount -= 2;
    // 7F3AF4A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF4AC:
    ctx->pc = 0x7F3AF4ACu;
    // 7F3AF4AC: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F3AF4B0u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F3AF4B0:
    ctx->pc = 0x7F3AF4B0u;
    ctx->downcount -= 6;
    // 7F3AF4B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF4B4:
    ctx->pc = 0x7F3AF4B4u;
    // 7F3AF4B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3AF4B8:
    ctx->pc = 0x7F3AF4B8u;
    // 7F3AF4B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF4BC:
    ctx->pc = 0x7F3AF4BCu;
    // 7F3AF4BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AF4C0:
    ctx->pc = 0x7F3AF4C0u;
    // 7F3AF4C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF4C4:
    ctx->pc = 0x7F3AF4C4u;
    ctx->downcount -= 6;
    // 7F3AF4C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF4C8:
    ctx->pc = 0x7F3AF4C8u;
    // 7F3AF4C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF4CC:
    ctx->pc = 0x7F3AF4CCu;
    // 7F3AF4CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF4D0:
    ctx->pc = 0x7F3AF4D0u;
    // 7F3AF4D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF4D4:
    ctx->pc = 0x7F3AF4D4u;
    // 7F3AF4D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF4D8:
    ctx->pc = 0x7F3AF4D8u;
    // 7F3AF4D8: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3AF4DCu;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3AF4DC:
    ctx->pc = 0x7F3AF4DCu;
    ctx->downcount -= 1;
    // 7F3AF4DC: bl      0x80042210
    {
            ctx->lr = 0x7F3AF4E0u;
            ctx->pc = 0x80042210u;
            return;
    }

label_7F3AF4E0:
    ctx->pc = 0x7F3AF4E0u;
    ctx->downcount -= 1;
    // 7F3AF4E0: bl      0x80041BD4
    {
            ctx->lr = 0x7F3AF4E4u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F3AF4E4:
    ctx->pc = 0x7F3AF4E4u;
    ctx->downcount -= 3;
    // 7F3AF4E4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3AF4E8:
    ctx->pc = 0x7F3AF4E8u;
    // 7F3AF4E8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF4EC:
    ctx->pc = 0x7F3AF4ECu;
    // 7F3AF4EC: bl      0x80041500
    {
            ctx->lr = 0x7F3AF4F0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3AF4F0:
    ctx->pc = 0x7F3AF4F0u;
    ctx->downcount -= 3;
    // 7F3AF4F0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3AF4F4:
    ctx->pc = 0x7F3AF4F4u;
    // 7F3AF4F4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF4F8:
    ctx->pc = 0x7F3AF4F8u;
    // 7F3AF4F8: bl      0x80041500
    {
            ctx->lr = 0x7F3AF4FCu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3AF4FC:
    ctx->pc = 0x7F3AF4FCu;
    ctx->downcount -= 3;
    // 7F3AF4FC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F3AF500:
    ctx->pc = 0x7F3AF500u;
    // 7F3AF500: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF504:
    ctx->pc = 0x7F3AF504u;
    // 7F3AF504: bl      0x80041500
    {
            ctx->lr = 0x7F3AF508u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3AF508:
    ctx->pc = 0x7F3AF508u;
    ctx->downcount -= 7;
    // 7F3AF508: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AF50C:
    ctx->pc = 0x7F3AF50Cu;
    // 7F3AF50C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AF510:
    ctx->pc = 0x7F3AF510u;
    // 7F3AF510: addi    r5, r3, -21152
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21152);

label_7F3AF514:
    ctx->pc = 0x7F3AF514u;
    // 7F3AF514: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3AF518:
    ctx->pc = 0x7F3AF518u;
    // 7F3AF518: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF51C:
    ctx->pc = 0x7F3AF51Cu;
    // 7F3AF51C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF520:
    ctx->pc = 0x7F3AF520u;
    // 7F3AF520: bl      0x80043F94
    {
            ctx->lr = 0x7F3AF524u;
            ctx->pc = 0x80043F94u;
            return;
    }

label_7F3AF524:
    ctx->pc = 0x7F3AF524u;
    ctx->downcount -= 2;
    // 7F3AF524: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF528:
    ctx->pc = 0x7F3AF528u;
    // 7F3AF528: bl      0x80044084
    {
            ctx->lr = 0x7F3AF52Cu;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F3AF52C:
    ctx->pc = 0x7F3AF52Cu;
    ctx->downcount -= 7;
    // 7F3AF52C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AF530:
    ctx->pc = 0x7F3AF530u;
    // 7F3AF530: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F3AF534:
    ctx->pc = 0x7F3AF534u;
    // 7F3AF534: addi    r5, r3, -21148
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21148);

label_7F3AF538:
    ctx->pc = 0x7F3AF538u;
    // 7F3AF538: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3AF53C:
    ctx->pc = 0x7F3AF53Cu;
    // 7F3AF53C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF540:
    ctx->pc = 0x7F3AF540u;
    // 7F3AF540: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF544:
    ctx->pc = 0x7F3AF544u;
    // 7F3AF544: bl      0x80043EA4
    {
            ctx->lr = 0x7F3AF548u;
            ctx->pc = 0x80043EA4u;
            return;
    }

label_7F3AF548:
    ctx->pc = 0x7F3AF548u;
    ctx->downcount -= 7;
    // 7F3AF548: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AF54C:
    ctx->pc = 0x7F3AF54Cu;
    // 7F3AF54C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3AF550:
    ctx->pc = 0x7F3AF550u;
    // 7F3AF550: addi    r5, r3, -21144
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21144);

label_7F3AF554:
    ctx->pc = 0x7F3AF554u;
    // 7F3AF554: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF558:
    ctx->pc = 0x7F3AF558u;
    // 7F3AF558: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF55C:
    ctx->pc = 0x7F3AF55Cu;
    // 7F3AF55C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF560:
    ctx->pc = 0x7F3AF560u;
    // 7F3AF560: bl      0x80045970
    {
            ctx->lr = 0x7F3AF564u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F3AF564:
    ctx->pc = 0x7F3AF564u;
    ctx->downcount -= 2;
    // 7F3AF564: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF568:
    ctx->pc = 0x7F3AF568u;
    // 7F3AF568: bl      0x80044084
    {
            ctx->lr = 0x7F3AF56Cu;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F3AF56C:
    ctx->pc = 0x7F3AF56Cu;
    ctx->downcount -= 8;
    // 7F3AF56C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3AF570:
    ctx->pc = 0x7F3AF570u;
    // 7F3AF570: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF574:
    ctx->pc = 0x7F3AF574u;
    // 7F3AF574: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF578:
    ctx->pc = 0x7F3AF578u;
    // 7F3AF578: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AF57C:
    ctx->pc = 0x7F3AF57Cu;
    // 7F3AF57C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AF580:
    ctx->pc = 0x7F3AF580u;
    // 7F3AF580: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AF584:
    ctx->pc = 0x7F3AF584u;
    // 7F3AF584: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F3AF588:
    ctx->pc = 0x7F3AF588u;
    // 7F3AF588: bl      0x800440C0
    {
            ctx->lr = 0x7F3AF58Cu;
            ctx->pc = 0x800440C0u;
            return;
    }

label_7F3AF58C:
    ctx->pc = 0x7F3AF58Cu;
    ctx->downcount -= 5;
    // 7F3AF58C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF590:
    ctx->pc = 0x7F3AF590u;
    // 7F3AF590: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF594:
    ctx->pc = 0x7F3AF594u;
    // 7F3AF594: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3AF598:
    ctx->pc = 0x7F3AF598u;
    // 7F3AF598: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F3AF59C:
    ctx->pc = 0x7F3AF59Cu;
    // 7F3AF59C: bl      0x80045D2C
    {
            ctx->lr = 0x7F3AF5A0u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3AF5A0:
    ctx->pc = 0x7F3AF5A0u;
    ctx->downcount -= 6;
    // 7F3AF5A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF5A4:
    ctx->pc = 0x7F3AF5A4u;
    // 7F3AF5A4: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F3AF5A8:
    ctx->pc = 0x7F3AF5A8u;
    // 7F3AF5A8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F3AF5AC:
    ctx->pc = 0x7F3AF5ACu;
    // 7F3AF5AC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F3AF5B0:
    ctx->pc = 0x7F3AF5B0u;
    // 7F3AF5B0: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F3AF5B4:
    ctx->pc = 0x7F3AF5B4u;
    // 7F3AF5B4: bl      0x80045818
    {
            ctx->lr = 0x7F3AF5B8u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3AF5B8:
    ctx->pc = 0x7F3AF5B8u;
    ctx->downcount -= 6;
    // 7F3AF5B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF5BC:
    ctx->pc = 0x7F3AF5BCu;
    // 7F3AF5BC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3AF5C0:
    ctx->pc = 0x7F3AF5C0u;
    // 7F3AF5C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AF5C4:
    ctx->pc = 0x7F3AF5C4u;
    // 7F3AF5C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F3AF5C8:
    ctx->pc = 0x7F3AF5C8u;
    // 7F3AF5C8: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F3AF5CC:
    ctx->pc = 0x7F3AF5CCu;
    // 7F3AF5CC: bl      0x8004585C
    {
            ctx->lr = 0x7F3AF5D0u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3AF5D0:
    ctx->pc = 0x7F3AF5D0u;
    ctx->downcount -= 7;
    // 7F3AF5D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF5D4:
    ctx->pc = 0x7F3AF5D4u;
    // 7F3AF5D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF5D8:
    ctx->pc = 0x7F3AF5D8u;
    // 7F3AF5D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF5DC:
    ctx->pc = 0x7F3AF5DCu;
    // 7F3AF5DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AF5E0:
    ctx->pc = 0x7F3AF5E0u;
    // 7F3AF5E0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AF5E4:
    ctx->pc = 0x7F3AF5E4u;
    // 7F3AF5E4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AF5E8:
    ctx->pc = 0x7F3AF5E8u;
    // 7F3AF5E8: bl      0x800458A0
    {
            ctx->lr = 0x7F3AF5ECu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3AF5EC:
    ctx->pc = 0x7F3AF5ECu;
    ctx->downcount -= 7;
    // 7F3AF5EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF5F0:
    ctx->pc = 0x7F3AF5F0u;
    // 7F3AF5F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF5F4:
    ctx->pc = 0x7F3AF5F4u;
    // 7F3AF5F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AF5F8:
    ctx->pc = 0x7F3AF5F8u;
    // 7F3AF5F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AF5FC:
    ctx->pc = 0x7F3AF5FCu;
    // 7F3AF5FC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3AF600:
    ctx->pc = 0x7F3AF600u;
    // 7F3AF600: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AF604:
    ctx->pc = 0x7F3AF604u;
    // 7F3AF604: bl      0x80045908
    {
            ctx->lr = 0x7F3AF608u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3AF608:
    ctx->pc = 0x7F3AF608u;
    ctx->downcount -= 2;
    // 7F3AF608: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF60C:
    ctx->pc = 0x7F3AF60Cu;
    // 7F3AF60C: bl      0x800424A0
    {
            ctx->lr = 0x7F3AF610u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F3AF610:
    ctx->pc = 0x7F3AF610u;
    ctx->downcount -= 2;
    // 7F3AF610: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF614:
    ctx->pc = 0x7F3AF614u;
    // 7F3AF614: bl      0x80045EC8
    {
            ctx->lr = 0x7F3AF618u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3AF618:
    ctx->pc = 0x7F3AF618u;
    ctx->downcount -= 2;
    // 7F3AF618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF61C:
    ctx->pc = 0x7F3AF61Cu;
    // 7F3AF61C: bl      0x800455BC
    {
            ctx->lr = 0x7F3AF620u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F3AF620:
    ctx->pc = 0x7F3AF620u;
    ctx->downcount -= 5;
    // 7F3AF620: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF624:
    ctx->pc = 0x7F3AF624u;
    // 7F3AF624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AF628:
    ctx->pc = 0x7F3AF628u;
    // 7F3AF628: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3AF62C:
    ctx->pc = 0x7F3AF62Cu;
    // 7F3AF62C: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_7F3AF630:
    ctx->pc = 0x7F3AF630u;
    // 7F3AF630: bl      0x7F3AF678
    {
            ctx->lr = 0x7F3AF634u;
            goto label_7F3AF678;
    }

label_7F3AF634:
    ctx->pc = 0x7F3AF634u;
    ctx->downcount -= 5;
    // 7F3AF634: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF638:
    ctx->pc = 0x7F3AF638u;
    // 7F3AF638: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3AF63C:
    ctx->pc = 0x7F3AF63Cu;
    // 7F3AF63C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F3AF640:
    ctx->pc = 0x7F3AF640u;
    // 7F3AF640: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3AF644:
    ctx->pc = 0x7F3AF644u;
    // 7F3AF644: bl      0x80046238
    {
            ctx->lr = 0x7F3AF648u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F3AF648:
    ctx->pc = 0x7F3AF648u;
    ctx->downcount -= 4;
    // 7F3AF648: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF64C:
    ctx->pc = 0x7F3AF64Cu;
    // 7F3AF64C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3AF650:
    ctx->pc = 0x7F3AF650u;
    // 7F3AF650: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3AF654:
    ctx->pc = 0x7F3AF654u;
    // 7F3AF654: bl      0x800462E4
    {
            ctx->lr = 0x7F3AF658u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3AF658:
    ctx->pc = 0x7F3AF658u;
    ctx->downcount -= 2;
    // 7F3AF658: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3AF65C:
    ctx->pc = 0x7F3AF65Cu;
    // 7F3AF65C: bl      0x8004628C
    {
            ctx->lr = 0x7F3AF660u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_7F3AF660:
    ctx->pc = 0x7F3AF660u;
    ctx->downcount -= 2;
    // 7F3AF660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF664:
    ctx->pc = 0x7F3AF664u;
    // 7F3AF664: bl      0x800462B8
    {
            ctx->lr = 0x7F3AF668u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_7F3AF668:
    ctx->pc = 0x7F3AF668u;
    ctx->downcount -= 5;
    // 7F3AF668: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF66C:
    ctx->pc = 0x7F3AF66Cu;
    // 7F3AF66C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF670:
    ctx->pc = 0x7F3AF670u;
    // 7F3AF670: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AF674:
    ctx->pc = 0x7F3AF674u;
    // 7F3AF674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF678:
    ctx->pc = 0x7F3AF678u;
    ctx->downcount -= 6;
    // 7F3AF678: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF67C:
    ctx->pc = 0x7F3AF67Cu;
    // 7F3AF67C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF680:
    ctx->pc = 0x7F3AF680u;
    // 7F3AF680: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AF684:
    ctx->pc = 0x7F3AF684u;
    // 7F3AF684: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_7F3AF688:
    ctx->pc = 0x7F3AF688u;
    // 7F3AF688: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF68C:
    ctx->pc = 0x7F3AF68Cu;
    // 7F3AF68C: bl      0x80042220
    {
            ctx->lr = 0x7F3AF690u;
            ctx->pc = 0x80042220u;
            return;
    }

label_7F3AF690:
    ctx->pc = 0x7F3AF690u;
    ctx->downcount -= 5;
    // 7F3AF690: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF694:
    ctx->pc = 0x7F3AF694u;
    // 7F3AF694: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF698:
    ctx->pc = 0x7F3AF698u;
    // 7F3AF698: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3AF69C:
    ctx->pc = 0x7F3AF69Cu;
    // 7F3AF69C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF6A0:
    ctx->pc = 0x7F3AF6A0u;
    ctx->downcount -= 4;
    // 7F3AF6A0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AF6A4:
    ctx->pc = 0x7F3AF6A4u;
    // 7F3AF6A4: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F3AF6A8:
    ctx->pc = 0x7F3AF6A8u;
    // 7F3AF6A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AF6AC:
    ctx->downcount -= 4;
    // 7F3AF6AC: xor   r0, r3, r4
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3AF6B0:
    // 7F3AF6B0: rlwinm r3, r3, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_7F3AF6B4:
    // 7F3AF6B4: rlwinm. r0, r0, 0, 16, 16
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

label_7F3AF6B8:
    // 7F3AF6B8: bc    12, 2, 0x7F3AF6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF6C0;
        }
    }

label_7F3AF6BC:
    ctx->downcount -= 1;
    // 7F3AF6BC: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F3AF6C0:
    ctx->downcount -= 2;
    // 7F3AF6C0: rlwinm r4, r4, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F3AF6C4:
    // 7F3AF6C4: bc    16, 0, 0x7F3AF6AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF6ACu;
                return;
            }
            goto label_7F3AF6AC;
        }
    }

label_7F3AF6C8:
    ctx->pc = 0x7F3AF6C8u;
    ctx->downcount -= 1;
    // 7F3AF6C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF6CC:
    ctx->pc = 0x7F3AF6CCu;
    ctx->downcount -= 19;
    // 7F3AF6CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF6D0:
    ctx->pc = 0x7F3AF6D0u;
    // 7F3AF6D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF6D4:
    ctx->pc = 0x7F3AF6D4u;
    // 7F3AF6D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF6D8:
    ctx->pc = 0x7F3AF6D8u;
    // 7F3AF6D8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF6DC:
    ctx->pc = 0x7F3AF6DCu;
    // 7F3AF6DC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF6E0:
    ctx->pc = 0x7F3AF6E0u;
    // 7F3AF6E0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF6E4:
    ctx->pc = 0x7F3AF6E4u;
    // 7F3AF6E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF6E8:
    ctx->pc = 0x7F3AF6E8u;
    // 7F3AF6E8: lis     r31, 1
    ctx->gpr[31] = ((u32)(s32)(1) << 16);

label_7F3AF6EC:
    ctx->pc = 0x7F3AF6ECu;
    // 7F3AF6EC: b       0x7F3AF704
    {
            goto label_7F3AF704;
    }

label_7F3AF6F0:
    ctx->pc = 0x7F3AF6F0u;
    ctx->downcount -= 3;
    // 7F3AF6F0: lbz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F3AF6F4:
    // 7F3AF6F4: addi    r5, r31, -24575
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(-24575);

label_7F3AF6F8:
    // 7F3AF6F8: bl      0x7F3AF6A0
    {
            ctx->lr = 0x7F3AF6FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF6A0u;
                return;
            }
            goto label_7F3AF6A0;
    }

label_7F3AF6FC:
    ctx->downcount -= 2;
    // 7F3AF6FC: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F3AF700:
    // 7F3AF700: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3AF704:
    ctx->downcount -= 2;
    // 7F3AF704: cmplwi  r30, 0x0000
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

label_7F3AF708:
    // 7F3AF708: bc    4, 2, 0x7F3AF6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF6F0u;
                return;
            }
            goto label_7F3AF6F0;
        }
    }

label_7F3AF70C:
    ctx->pc = 0x7F3AF70Cu;
    ctx->downcount -= 16;
    // 7F3AF70C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF710:
    ctx->pc = 0x7F3AF710u;
    // 7F3AF710: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF714:
    ctx->pc = 0x7F3AF714u;
    // 7F3AF714: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF718:
    ctx->pc = 0x7F3AF718u;
    // 7F3AF718: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AF71C:
    ctx->pc = 0x7F3AF71Cu;
    // 7F3AF71C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF720:
    ctx->pc = 0x7F3AF720u;
    ctx->downcount -= 1;
    // 7F3AF720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF724:
    ctx->pc = 0x7F3AF724u;
    ctx->downcount -= 1;
    // 7F3AF724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF728:
    ctx->pc = 0x7F3AF728u;
    ctx->downcount -= 6;
    // 7F3AF728: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3AF72C:
    ctx->pc = 0x7F3AF72Cu;
    // 7F3AF72C: addi    r4, r3, -32120
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32120);

label_7F3AF730:
    ctx->pc = 0x7F3AF730u;
    // 7F3AF730: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF734:
    ctx->pc = 0x7F3AF734u;
    // 7F3AF734: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AF738:
    ctx->pc = 0x7F3AF738u;
    // 7F3AF738: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AF73C:
    ctx->pc = 0x7F3AF73Cu;
    // 7F3AF73C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF740:
    ctx->pc = 0x7F3AF740u;
    ctx->downcount -= 18;
    // 7F3AF740: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF744:
    ctx->pc = 0x7F3AF744u;
    // 7F3AF744: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF748:
    ctx->pc = 0x7F3AF748u;
    // 7F3AF748: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF74C:
    ctx->pc = 0x7F3AF74Cu;
    // 7F3AF74C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF750:
    ctx->pc = 0x7F3AF750u;
    // 7F3AF750: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF754:
    ctx->pc = 0x7F3AF754u;
    // 7F3AF754: lwz     r0, 388(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF758:
    ctx->pc = 0x7F3AF758u;
    // 7F3AF758: cmplwi  r0, 0x0000
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

label_7F3AF75C:
    ctx->pc = 0x7F3AF75Cu;
    // 7F3AF75C: bc    12, 2, 0x7F3AF7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF7A8;
        }
    }

label_7F3AF760:
    ctx->pc = 0x7F3AF760u;
    ctx->downcount -= 2;
    // 7F3AF760: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3AF764:
    ctx->pc = 0x7F3AF764u;
    // 7F3AF764: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3AF768:
    ctx->downcount -= 12;
    // 7F3AF768: addi    r0, r31, 388
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(388);

label_7F3AF76C:
    ctx->pc = 0x7F3AF76Cu;
    // 7F3AF76C: lfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF76Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF770:
    ctx->pc = 0x7F3AF770u;
    // 7F3AF770: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF774:
    ctx->pc = 0x7F3AF774u;
    // 7F3AF774: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF778:
    ctx->pc = 0x7F3AF778u;
    // 7F3AF778: lfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF778u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF77C:
    ctx->pc = 0x7F3AF77Cu;
    // 7F3AF77C: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF780:
    ctx->pc = 0x7F3AF780u;
    // 7F3AF780: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF780u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF784:
    ctx->pc = 0x7F3AF784u;
    // 7F3AF784: lfs     f0, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF784u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF788:
    ctx->pc = 0x7F3AF788u;
    // 7F3AF788: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF78C:
    ctx->pc = 0x7F3AF78Cu;
    // 7F3AF78C: stfs     f0, 60(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF78Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF790:
    ctx->pc = 0x7F3AF790u;
    // 7F3AF790: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF794:
    // 7F3AF794: bl      0x7F3AF740
    {
            ctx->lr = 0x7F3AF798u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF740u;
                return;
            }
            goto label_7F3AF740;
    }

label_7F3AF798:
    ctx->downcount -= 4;
    // 7F3AF798: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3AF79C:
    // 7F3AF79C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3AF7A0:
    // 7F3AF7A0: cmpwi   r30, 8
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

label_7F3AF7A4:
    // 7F3AF7A4: bc    12, 0, 0x7F3AF768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF768u;
                return;
            }
            goto label_7F3AF768;
        }
    }

label_7F3AF7A8:
    ctx->pc = 0x7F3AF7A8u;
    ctx->downcount -= 16;
    // 7F3AF7A8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF7AC:
    ctx->pc = 0x7F3AF7ACu;
    // 7F3AF7AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF7B0:
    ctx->pc = 0x7F3AF7B0u;
    // 7F3AF7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF7B4:
    ctx->pc = 0x7F3AF7B4u;
    // 7F3AF7B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AF7B8:
    ctx->pc = 0x7F3AF7B8u;
    // 7F3AF7B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF7BC:
    ctx->pc = 0x7F3AF7BCu;
    ctx->downcount -= 28;
    // 7F3AF7BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF7C0:
    ctx->pc = 0x7F3AF7C0u;
    // 7F3AF7C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF7C4:
    ctx->pc = 0x7F3AF7C4u;
    // 7F3AF7C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF7C8:
    ctx->pc = 0x7F3AF7C8u;
    // 7F3AF7C8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF7CC:
    ctx->pc = 0x7F3AF7CCu;
    // 7F3AF7CC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF7D0:
    ctx->pc = 0x7F3AF7D0u;
    // 7F3AF7D0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AF7D4:
    ctx->pc = 0x7F3AF7D4u;
    // 7F3AF7D4: ori     r28, r4, 0xC000
    ctx->gpr[28] = ctx->gpr[4] | 0xC000u;

label_7F3AF7D8:
    ctx->pc = 0x7F3AF7D8u;
    // 7F3AF7D8: lha     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF7DC:
    ctx->pc = 0x7F3AF7DCu;
    // 7F3AF7DC: lha     r0, 62(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF7E0:
    ctx->pc = 0x7F3AF7E0u;
    // 7F3AF7E0: mulli   r30, r3, 444
    ctx->gpr[30] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)444);

label_7F3AF7E4:
    ctx->pc = 0x7F3AF7E4u;
    // 7F3AF7E4: mulli   r0, r0, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3AF7E8:
    ctx->pc = 0x7F3AF7E8u;
    // 7F3AF7E8: add   r30, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F3AF7EC:
    ctx->pc = 0x7F3AF7ECu;
    // 7F3AF7EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AF7F0:
    ctx->pc = 0x7F3AF7F0u;
    // 7F3AF7F0: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AF7F4u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AF7F4:
    ctx->pc = 0x7F3AF7F4u;
    ctx->downcount -= 2;
    // 7F3AF7F4: or.   r31, r3, r3
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

label_7F3AF7F8:
    ctx->pc = 0x7F3AF7F8u;
    // 7F3AF7F8: bc    4, 2, 0x7F3AF804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF804;
        }
    }

label_7F3AF7FC:
    ctx->pc = 0x7F3AF7FCu;
    ctx->downcount -= 2;
    // 7F3AF7FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AF800:
    ctx->pc = 0x7F3AF800u;
    // 7F3AF800: b       0x7F3AF84C
    {
            goto label_7F3AF84C;
    }

label_7F3AF804:
    ctx->pc = 0x7F3AF804u;
    ctx->downcount -= 2;
    // 7F3AF804: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AF808:
    ctx->pc = 0x7F3AF808u;
    // 7F3AF808: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3AF80Cu;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3AF80C:
    ctx->pc = 0x7F3AF80Cu;
    ctx->downcount -= 4;
    // 7F3AF80C: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF810:
    ctx->pc = 0x7F3AF810u;
    // 7F3AF810: addis   r0, r3, -178
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-178) << 16);

label_7F3AF814:
    ctx->pc = 0x7F3AF814u;
    // 7F3AF814: cmplwi  r0, 0x53A3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x53A3u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AF818:
    ctx->pc = 0x7F3AF818u;
    // 7F3AF818: bc    12, 2, 0x7F3AF828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF828;
        }
    }

label_7F3AF81C:
    ctx->pc = 0x7F3AF81Cu;
    ctx->downcount -= 3;
    // 7F3AF81C: addis   r0, r3, -78
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-78) << 16);

label_7F3AF820:
    ctx->pc = 0x7F3AF820u;
    // 7F3AF820: cmplwi  r0, 0x9AE2
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x9AE2u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AF824:
    ctx->pc = 0x7F3AF824u;
    // 7F3AF824: bc    4, 2, 0x7F3AF82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AF82C;
        }
    }

label_7F3AF828:
    ctx->pc = 0x7F3AF828u;
    ctx->downcount -= 1;
    // 7F3AF828: oris    r28, r28, 0x0001
    ctx->gpr[28] = ctx->gpr[28] | (0x0001u << 16);

label_7F3AF82C:
    ctx->pc = 0x7F3AF82Cu;
    ctx->downcount -= 7;
    // 7F3AF82C: lwz     r6, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AF830:
    ctx->pc = 0x7F3AF830u;
    // 7F3AF830: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF834:
    ctx->pc = 0x7F3AF834u;
    // 7F3AF834: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AF838:
    ctx->pc = 0x7F3AF838u;
    // 7F3AF838: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF83C:
    ctx->pc = 0x7F3AF83Cu;
    // 7F3AF83C: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AF840:
    ctx->pc = 0x7F3AF840u;
    // 7F3AF840: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3AF844:
    ctx->pc = 0x7F3AF844u;
    // 7F3AF844: bl      0x7F3AF860
    {
            ctx->lr = 0x7F3AF848u;
            goto label_7F3AF860;
    }

label_7F3AF848:
    ctx->pc = 0x7F3AF848u;
    ctx->downcount -= 1;
    // 7F3AF848: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AF84C:
    ctx->pc = 0x7F3AF84Cu;
    ctx->downcount -= 16;
    // 7F3AF84C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AF850:
    ctx->pc = 0x7F3AF850u;
    // 7F3AF850: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF854:
    ctx->pc = 0x7F3AF854u;
    // 7F3AF854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AF858:
    ctx->pc = 0x7F3AF858u;
    // 7F3AF858: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3AF85C:
    ctx->pc = 0x7F3AF85Cu;
    // 7F3AF85C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AF860:
    ctx->pc = 0x7F3AF860u;
    ctx->downcount -= 36;
    // 7F3AF860: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AF864:
    ctx->pc = 0x7F3AF864u;
    // 7F3AF864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AF868:
    ctx->pc = 0x7F3AF868u;
    // 7F3AF868: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF86C:
    ctx->pc = 0x7F3AF86Cu;
    // 7F3AF86C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF86Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F3AF870:
    ctx->pc = 0x7F3AF870u;
    // 7F3AF870: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AF870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AF870u);
        if (ctx->exception) return;
    }

label_7F3AF874:
    ctx->pc = 0x7F3AF874u;
    // 7F3AF874: stmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AF878:
    ctx->pc = 0x7F3AF878u;
    // 7F3AF878: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F3AF87C:
    ctx->pc = 0x7F3AF87Cu;
    // 7F3AF87C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF880:
    ctx->pc = 0x7F3AF880u;
    // 7F3AF880: addi    r9, r9, -21136
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-21136);

label_7F3AF884:
    ctx->pc = 0x7F3AF884u;
    // 7F3AF884: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AF888:
    ctx->pc = 0x7F3AF888u;
    // 7F3AF888: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AF88C:
    ctx->pc = 0x7F3AF88Cu;
    // 7F3AF88C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3AF890:
    ctx->pc = 0x7F3AF890u;
    // 7F3AF890: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F3AF894:
    ctx->pc = 0x7F3AF894u;
    // 7F3AF894: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AF898:
    ctx->pc = 0x7F3AF898u;
    // 7F3AF898: stw     r29, 384(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3AF89C:
    ctx->pc = 0x7F3AF89Cu;
    // 7F3AF89C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AF8A0:
    ctx->pc = 0x7F3AF8A0u;
    // 7F3AF8A0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3AF8A4:
    ctx->pc = 0x7F3AF8A4u;
    // 7F3AF8A4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3AF8A8:
    ctx->pc = 0x7F3AF8A8u;
    // 7F3AF8A8: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AF8AC:
    ctx->pc = 0x7F3AF8ACu;
    // 7F3AF8AC: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F3AF8B0:
    ctx->pc = 0x7F3AF8B0u;
    // 7F3AF8B0: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AF8B4:
    ctx->pc = 0x7F3AF8B4u;
    // 7F3AF8B4: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3AF8B8:
    ctx->pc = 0x7F3AF8B8u;
    // 7F3AF8B8: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3AF8BC:
    ctx->pc = 0x7F3AF8BCu;
    // 7F3AF8BC: sth     r6, 332(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(332);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F3AF8C0:
    ctx->pc = 0x7F3AF8C0u;
    // 7F3AF8C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AF8C4:
    loop_7F3AF8C4(ctx);
    if (ctx->pc == 0x7F3AF8D8u) goto label_7F3AF8D8;
    return;
label_7F3AF8C8:
    ctx->pc = 0x7F3AF8C8u;
    // 7F3AF8C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AF8CC:
    ctx->pc = 0x7F3AF8CCu;
    // 7F3AF8CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AF8D0:
    ctx->pc = 0x7F3AF8D0u;
    // 7F3AF8D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AF8D4:
    // 7F3AF8D4: bc    16, 0, 0x7F3AF8C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF8C4u;
                return;
            }
            goto label_7F3AF8C4;
        }
    }

label_7F3AF8D8:
    ctx->pc = 0x7F3AF8D8u;
    ctx->downcount -= 10;
    // 7F3AF8D8: stw     r27, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3AF8DC:
    ctx->pc = 0x7F3AF8DCu;
    // 7F3AF8DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3AF8E0:
    ctx->pc = 0x7F3AF8E0u;
    // 7F3AF8E0: addi    r0, r3, 13184
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(13184);

label_7F3AF8E4:
    ctx->pc = 0x7F3AF8E4u;
    // 7F3AF8E4: lha     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF8E8:
    ctx->pc = 0x7F3AF8E8u;
    // 7F3AF8E8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AF8EC:
    ctx->pc = 0x7F3AF8ECu;
    // 7F3AF8EC: sth     r4, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3AF8F0:
    ctx->pc = 0x7F3AF8F0u;
    // 7F3AF8F0: stw     r30, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3AF8F4:
    ctx->pc = 0x7F3AF8F4u;
    // 7F3AF8F4: sth     r31, 94(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(94);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F3AF8F8:
    ctx->pc = 0x7F3AF8F8u;
    // 7F3AF8F8: stw     r0, 100(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF8FC:
    ctx->pc = 0x7F3AF8FCu;
    // 7F3AF8FC: bl      0x7F3B69EC
    {
            ctx->lr = 0x7F3AF900u;
            ctx->pc = 0x7F3B69ECu;
            return;
    }

label_7F3AF900:
    ctx->pc = 0x7F3AF900u;
    ctx->downcount -= 25;
    // 7F3AF900: stw     r3, 120(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AF904:
    ctx->pc = 0x7F3AF904u;
    // 7F3AF904: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3AF908:
    ctx->pc = 0x7F3AF908u;
    // 7F3AF908: lfs     f1, -21132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF908u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3AF90C:
    ctx->pc = 0x7F3AF90Cu;
    // 7F3AF90C: lfs     f0, 24(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF90Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF910:
    ctx->pc = 0x7F3AF910u;
    // 7F3AF910: stfs     f0, 336(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF910u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF914:
    ctx->pc = 0x7F3AF914u;
    // 7F3AF914: lfs     f0, 28(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF914u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF918:
    ctx->pc = 0x7F3AF918u;
    // 7F3AF918: stfs     f0, 340(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF918u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF91C:
    ctx->pc = 0x7F3AF91Cu;
    // 7F3AF91C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF91Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF920:
    ctx->pc = 0x7F3AF920u;
    // 7F3AF920: stfs     f0, 344(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF920u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF924:
    ctx->pc = 0x7F3AF924u;
    // 7F3AF924: stfs     f1, 348(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF924u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AF928:
    ctx->pc = 0x7F3AF928u;
    // 7F3AF928: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF928u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF92C:
    ctx->pc = 0x7F3AF92Cu;
    // 7F3AF92C: stfs     f0, 352(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF92Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF930:
    ctx->pc = 0x7F3AF930u;
    // 7F3AF930: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF930u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF934:
    ctx->pc = 0x7F3AF934u;
    // 7F3AF934: stfs     f0, 356(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF934u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF938:
    ctx->pc = 0x7F3AF938u;
    // 7F3AF938: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF938u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF93C:
    ctx->pc = 0x7F3AF93Cu;
    // 7F3AF93C: stfs     f0, 360(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF93Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF940:
    ctx->pc = 0x7F3AF940u;
    // 7F3AF940: stfs     f1, 364(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF940u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(364);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AF944:
    ctx->pc = 0x7F3AF944u;
    // 7F3AF944: lfs     f0, 48(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF944u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF948:
    ctx->pc = 0x7F3AF948u;
    // 7F3AF948: stfs     f0, 368(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF948u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(368);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF94C:
    ctx->pc = 0x7F3AF94Cu;
    // 7F3AF94C: lfs     f0, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF94Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF950:
    ctx->pc = 0x7F3AF950u;
    // 7F3AF950: stfs     f0, 372(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF950u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF954:
    ctx->pc = 0x7F3AF954u;
    // 7F3AF954: lfs     f0, 56(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF954u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AF958:
    ctx->pc = 0x7F3AF958u;
    // 7F3AF958: stfs     f0, 376(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF958u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(376);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AF95C:
    ctx->pc = 0x7F3AF95Cu;
    // 7F3AF95C: stfs     f1, 380(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF95Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(380);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3AF960:
    ctx->pc = 0x7F3AF960u;
    // 7F3AF960: bl      0x7F3AF728
    {
            ctx->lr = 0x7F3AF964u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF728u;
                return;
            }
            goto label_7F3AF728;
    }

label_7F3AF964:
    ctx->pc = 0x7F3AF964u;
    ctx->downcount -= 7;
    // 7F3AF964: stw     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AF968:
    ctx->pc = 0x7F3AF968u;
    // 7F3AF968: addi    r3, r26, 156
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(156);

label_7F3AF96C:
    ctx->pc = 0x7F3AF96Cu;
    // 7F3AF96C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3AF970:
    ctx->pc = 0x7F3AF970u;
    // 7F3AF970: lha     r5, 74(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(74);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AF974:
    ctx->pc = 0x7F3AF974u;
    // 7F3AF974: addi    r0, r5, 3
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(3);

label_7F3AF978:
    ctx->pc = 0x7F3AF978u;
    // 7F3AF978: stb     r0, 98(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(98);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AF97C:
    ctx->pc = 0x7F3AF97Cu;
    // 7F3AF97C: bl      0x7F3BC8F4
    {
            ctx->lr = 0x7F3AF980u;
            ctx->pc = 0x7F3BC8F4u;
            return;
    }

label_7F3AF980:
    ctx->pc = 0x7F3AF980u;
    ctx->downcount -= 20;
    // 7F3AF980: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AF984:
    ctx->pc = 0x7F3AF984u;
    // 7F3AF984: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_7F3AF988:
    ctx->pc = 0x7F3AF988u;
    // 7F3AF988: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F3AF98C:
    ctx->pc = 0x7F3AF98Cu;
    // 7F3AF98C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3AF990:
    ctx->pc = 0x7F3AF990u;
    // 7F3AF990: stw     r0, 116(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF994:
    ctx->pc = 0x7F3AF994u;
    // 7F3AF994: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F3AF998:
    ctx->pc = 0x7F3AF998u;
    // 7F3AF998: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AF99C:
    ctx->pc = 0x7F3AF99Cu;
    // 7F3AF99C: addi    r21, r26, 444
    ctx->gpr[21] = ctx->gpr[26] + (u32)(s32)(444);

label_7F3AF9A0:
    ctx->pc = 0x7F3AF9A0u;
    // 7F3AF9A0: stw     r4, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3AF9A4:
    ctx->pc = 0x7F3AF9A4u;
    // 7F3AF9A4: addi    r4, r3, 30447
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(30447);

label_7F3AF9A8:
    ctx->pc = 0x7F3AF9A8u;
    // 7F3AF9A8: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3AF9AC:
    ctx->pc = 0x7F3AF9ACu;
    // 7F3AF9AC: stw     r5, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF9B0:
    ctx->pc = 0x7F3AF9B0u;
    // 7F3AF9B0: stw     r0, 308(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF9B4:
    ctx->pc = 0x7F3AF9B4u;
    // 7F3AF9B4: stw     r5, 316(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF9B8:
    ctx->pc = 0x7F3AF9B8u;
    // 7F3AF9B8: stw     r5, 320(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF9BC:
    ctx->pc = 0x7F3AF9BCu;
    // 7F3AF9BC: stw     r5, 324(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3AF9C0:
    ctx->pc = 0x7F3AF9C0u;
    // 7F3AF9C0: stw     r0, 328(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AF9C4:
    ctx->pc = 0x7F3AF9C4u;
    // 7F3AF9C4: lwz     r3, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF9C8:
    ctx->pc = 0x7F3AF9C8u;
    // 7F3AF9C8: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AF9CC:
    ctx->pc = 0x7F3AF9CCu;
    // 7F3AF9CC: bl      0x7F3B6880
    {
            ctx->lr = 0x7F3AF9D0u;
            ctx->pc = 0x7F3B6880u;
            return;
    }

label_7F3AF9D0:
    ctx->pc = 0x7F3AF9D0u;
    ctx->downcount -= 10;
    // 7F3AF9D0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3AF9D4:
    ctx->pc = 0x7F3AF9D4u;
    // 7F3AF9D4: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F3AF9D8:
    ctx->pc = 0x7F3AF9D8u;
    // 7F3AF9D8: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3AF9DC:
    ctx->pc = 0x7F3AF9DCu;
    // 7F3AF9DC: lfs     f31, -21132(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3AF9DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F3AF9E0:
    ctx->pc = 0x7F3AF9E0u;
    // 7F3AF9E0: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AF9E4:
    ctx->pc = 0x7F3AF9E4u;
    // 7F3AF9E4: addi    r24, r6, 12860
    ctx->gpr[24] = ctx->gpr[6] + (u32)(s32)(12860);

label_7F3AF9E8:
    ctx->pc = 0x7F3AF9E8u;
    // 7F3AF9E8: addi    r25, r5, 13184
    ctx->gpr[25] = ctx->gpr[5] + (u32)(s32)(13184);

label_7F3AF9EC:
    ctx->pc = 0x7F3AF9ECu;
    // 7F3AF9EC: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F3AF9F0:
    ctx->pc = 0x7F3AF9F0u;
    // 7F3AF9F0: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F3AF9F4:
    ctx->pc = 0x7F3AF9F4u;
    // 7F3AF9F4: b       0x7F3AFC7C
    {
            goto label_7F3AFC7C;
    }

label_7F3AF9F8:
    ctx->downcount -= 6;
    // 7F3AF9F8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AF9FC:
    // 7F3AF9FC: addi    r5, r21, -4
    ctx->gpr[5] = ctx->gpr[21] + (u32)(s32)(-4);

label_7F3AFA00:
    // 7F3AFA00: addi    r4, r24, -4
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(-4);

label_7F3AFA04:
    // 7F3AFA04: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F3AFA08:
    ctx->pc = 0x7F3AFA08u;
    // 7F3AFA08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AFA0C:
    loop_7F3AFA0C(ctx);
    if (ctx->pc == 0x7F3AFA20u) goto label_7F3AFA20;
    return;
label_7F3AFA10:
    ctx->pc = 0x7F3AFA10u;
    // 7F3AFA10: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3AFA14:
    ctx->pc = 0x7F3AFA14u;
    // 7F3AFA14: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3AFA18:
    ctx->pc = 0x7F3AFA18u;
    // 7F3AFA18: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3AFA1C:
    // 7F3AFA1C: bc    16, 0, 0x7F3AFA0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFA0Cu;
                return;
            }
            goto label_7F3AFA0C;
        }
    }

label_7F3AFA20:
    ctx->pc = 0x7F3AFA20u;
    ctx->downcount -= 58;
    // 7F3AFA20: stw     r25, 212(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F3AFA24:
    // 7F3AFA24: addi    r12, r17, 56
    ctx->gpr[12] = ctx->gpr[17] + (u32)(s32)(56);

label_7F3AFA28:
    // 7F3AFA28: addi    r11, r17, 58
    ctx->gpr[11] = ctx->gpr[17] + (u32)(s32)(58);

label_7F3AFA2C:
    // 7F3AFA2C: addi    r10, r17, 8
    ctx->gpr[10] = ctx->gpr[17] + (u32)(s32)(8);

label_7F3AFA30:
    ctx->pc = 0x7F3AFA30u;
    // 7F3AFA30: lwz     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFA34:
    // 7F3AFA34: addi    r9, r17, 12
    ctx->gpr[9] = ctx->gpr[17] + (u32)(s32)(12);

label_7F3AFA38:
    // 7F3AFA38: addi    r8, r17, 16
    ctx->gpr[8] = ctx->gpr[17] + (u32)(s32)(16);

label_7F3AFA3C:
    // 7F3AFA3C: addi    r7, r17, 20
    ctx->gpr[7] = ctx->gpr[17] + (u32)(s32)(20);

label_7F3AFA40:
    // 7F3AFA40: add   r0, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3AFA44:
    // 7F3AFA44: addi    r6, r17, 24
    ctx->gpr[6] = ctx->gpr[17] + (u32)(s32)(24);

label_7F3AFA48:
    ctx->pc = 0x7F3AFA48u;
    // 7F3AFA48: stw     r0, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFA4C:
    // 7F3AFA4C: addi    r5, r17, 28
    ctx->gpr[5] = ctx->gpr[17] + (u32)(s32)(28);

label_7F3AFA50:
    // 7F3AFA50: addi    r4, r17, 32
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(32);

label_7F3AFA54:
    // 7F3AFA54: addi    r3, r17, 36
    ctx->gpr[3] = ctx->gpr[17] + (u32)(s32)(36);

label_7F3AFA58:
    ctx->pc = 0x7F3AFA58u;
    // 7F3AFA58: lwz     r22, 80(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(80);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3AFA5C:
    // 7F3AFA5C: addi    r0, r17, 40
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(40);

label_7F3AFA60:
    ctx->pc = 0x7F3AFA60u;
    // 7F3AFA60: stw     r22, 192(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3AFA64:
    ctx->pc = 0x7F3AFA64u;
    // 7F3AFA64: lwz     r22, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3AFA68:
    ctx->pc = 0x7F3AFA68u;
    // 7F3AFA68: lhzx    r12, r22, r12
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[12];
        ctx->gpr[12] = mem_read16(ctx, ea);
    }

label_7F3AFA6C:
    ctx->pc = 0x7F3AFA6Cu;
    // 7F3AFA6C: sth     r12, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_7F3AFA70:
    ctx->pc = 0x7F3AFA70u;
    // 7F3AFA70: lwz     r12, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F3AFA74:
    ctx->pc = 0x7F3AFA74u;
    // 7F3AFA74: lhax    r11, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        ctx->gpr[11] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFA78:
    ctx->pc = 0x7F3AFA78u;
    // 7F3AFA78: sth     r11, 202(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(202);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F3AFA7C:
    ctx->pc = 0x7F3AFA7Cu;
    // 7F3AFA7C: lwz     r11, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3AFA80:
    ctx->pc = 0x7F3AFA80u;
    // 7F3AFA80: lwzx    r11, r11, r17
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[17];
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3AFA84:
    ctx->pc = 0x7F3AFA84u;
    // 7F3AFA84: sth     r11, 206(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(206);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F3AFA88:
    ctx->pc = 0x7F3AFA88u;
    // 7F3AFA88: lwz     r11, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3AFA8C:
    ctx->pc = 0x7F3AFA8Cu;
    // 7F3AFA8C: lfsx    f0, r11, r10
    if (!ppc_fp_available_inline(ctx, 0x7F3AFA8Cu)) return;
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[10];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFA90:
    ctx->pc = 0x7F3AFA90u;
    // 7F3AFA90: stfs     f0, 256(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFA90u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(256);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFA94:
    ctx->pc = 0x7F3AFA94u;
    // 7F3AFA94: lwz     r10, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3AFA98:
    ctx->pc = 0x7F3AFA98u;
    // 7F3AFA98: lfsx    f0, r10, r9
    if (!ppc_fp_available_inline(ctx, 0x7F3AFA98u)) return;
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[9];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFA9C:
    ctx->pc = 0x7F3AFA9Cu;
    // 7F3AFA9C: stfs     f0, 260(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFA9Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAA0:
    ctx->pc = 0x7F3AFAA0u;
    // 7F3AFAA0: lwz     r9, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AFAA4:
    ctx->pc = 0x7F3AFAA4u;
    // 7F3AFAA4: lfsx    f0, r9, r8
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAA4u)) return;
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAA8:
    ctx->pc = 0x7F3AFAA8u;
    // 7F3AFAA8: stfs     f0, 264(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAA8u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAAC:
    ctx->pc = 0x7F3AFAACu;
    // 7F3AFAAC: lwz     r8, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3AFAB0:
    ctx->pc = 0x7F3AFAB0u;
    // 7F3AFAB0: lfsx    f0, r8, r7
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAB0u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAB4:
    ctx->pc = 0x7F3AFAB4u;
    // 7F3AFAB4: stfs     f0, 272(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAB4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(272);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAB8:
    ctx->pc = 0x7F3AFAB8u;
    // 7F3AFAB8: lwz     r7, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AFABC:
    ctx->pc = 0x7F3AFABCu;
    // 7F3AFABC: lfsx    f0, r7, r6
    if (!ppc_fp_available_inline(ctx, 0x7F3AFABCu)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[6];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAC0:
    ctx->pc = 0x7F3AFAC0u;
    // 7F3AFAC0: stfs     f0, 276(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAC0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAC4:
    ctx->pc = 0x7F3AFAC4u;
    // 7F3AFAC4: lwz     r6, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AFAC8:
    ctx->pc = 0x7F3AFAC8u;
    // 7F3AFAC8: lfsx    f0, r6, r5
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAC8u)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFACC:
    ctx->pc = 0x7F3AFACCu;
    // 7F3AFACC: stfs     f0, 280(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFACCu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAD0:
    ctx->pc = 0x7F3AFAD0u;
    // 7F3AFAD0: lwz     r5, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AFAD4:
    ctx->pc = 0x7F3AFAD4u;
    // 7F3AFAD4: lfsx    f0, r5, r4
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAD4u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAD8:
    ctx->pc = 0x7F3AFAD8u;
    // 7F3AFAD8: stfs     f0, 288(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAD8u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFADC:
    ctx->pc = 0x7F3AFADCu;
    // 7F3AFADC: lwz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AFAE0:
    ctx->pc = 0x7F3AFAE0u;
    // 7F3AFAE0: lfsx    f0, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAE0u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAE4:
    ctx->pc = 0x7F3AFAE4u;
    // 7F3AFAE4: stfs     f0, 292(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAE4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAE8:
    ctx->pc = 0x7F3AFAE8u;
    // 7F3AFAE8: lwz     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AFAEC:
    ctx->pc = 0x7F3AFAECu;
    // 7F3AFAEC: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAECu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3AFAF0:
    ctx->pc = 0x7F3AFAF0u;
    // 7F3AFAF0: stfs     f0, 296(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAF0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3AFAF4:
    ctx->pc = 0x7F3AFAF4u;
    // 7F3AFAF4: stfs     f31, 300(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFAF4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F3AFAF8:
    ctx->pc = 0x7F3AFAF8u;
    // 7F3AFAF8: sth     r20, 320(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(320);
        mem_write16(ctx, ea, (u16)ctx->gpr[20]);
    }

label_7F3AFAFC:
    ctx->pc = 0x7F3AFAFCu;
    // 7F3AFAFC: lha     r0, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFB00:
    // 7F3AFB00: cmpwi   r0, 0
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

label_7F3AFB04:
    // 7F3AFB04: bc    4, 2, 0x7F3AFB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFB20;
        }
    }

label_7F3AFB08:
    ctx->pc = 0x7F3AFB08u;
    ctx->downcount -= 4;
    // 7F3AFB08: lwz     r3, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AFB0C:
    ctx->pc = 0x7F3AFB0Cu;
    // 7F3AFB0C: lha     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFB10:
    // 7F3AFB10: cmpwi   r0, -1
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

label_7F3AFB14:
    // 7F3AFB14: bc    12, 2, 0x7F3AFB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFB20;
        }
    }

label_7F3AFB18:
    ctx->downcount -= 2;
    // 7F3AFB18: addi    r21, r21, 324
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(324);

label_7F3AFB1C:
    // 7F3AFB1C: b       0x7F3AFC74
    {
            goto label_7F3AFC74;
    }

label_7F3AFB20:
    ctx->downcount -= 11;
    // 7F3AFB20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AFB24:
    ctx->pc = 0x7F3AFB24u;
    // 7F3AFB24: stw     r0, 220(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB28:
    ctx->pc = 0x7F3AFB28u;
    // 7F3AFB28: stw     r0, 224(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB2C:
    ctx->pc = 0x7F3AFB2Cu;
    // 7F3AFB2C: stw     r0, 228(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB30:
    ctx->pc = 0x7F3AFB30u;
    // 7F3AFB30: stw     r0, 232(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB34:
    ctx->pc = 0x7F3AFB34u;
    // 7F3AFB34: stw     r0, 236(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB38:
    ctx->pc = 0x7F3AFB38u;
    // 7F3AFB38: lha     r0, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFB3C:
    // 7F3AFB3C: mulli   r3, r0, 48
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_7F3AFB40:
    // 7F3AFB40: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AFB44u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AFB44:
    ctx->downcount -= 3;
    // 7F3AFB44: or.   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[22];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3AFB48:
    ctx->pc = 0x7F3AFB48u;
    // 7F3AFB48: stw     r22, 244(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3AFB4C:
    // 7F3AFB4C: bc    4, 2, 0x7F3AFB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFB60;
        }
    }

label_7F3AFB50:
    ctx->downcount -= 2;
    // 7F3AFB50: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3AFB54:
    // 7F3AFB54: bl      0x7F3B0820
    {
            ctx->lr = 0x7F3AFB58u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F3AFB58:
    ctx->downcount -= 2;
    // 7F3AFB58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AFB5C:
    // 7F3AFB5C: b       0x7F3AFCF4
    {
            goto label_7F3AFCF4;
    }

label_7F3AFB60:
    ctx->pc = 0x7F3AFB60u;
    ctx->downcount -= 5;
    // 7F3AFB60: lha     r0, 204(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(204);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFB64:
    // 7F3AFB64: mulli   r4, r0, 48
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_7F3AFB68:
    // 7F3AFB68: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3AFB6Cu;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3AFB6C:
    ctx->pc = 0x7F3AFB6Cu;
    ctx->downcount -= 5;
    // 7F3AFB6C: lwz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AFB70:
    // 7F3AFB70: addi    r0, r17, 68
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(68);

label_7F3AFB74:
    // 7F3AFB74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3AFB78:
    ctx->pc = 0x7F3AFB78u;
    // 7F3AFB78: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AFB7C:
    // 7F3AFB7C: b       0x7F3AFC48
    {
            goto label_7F3AFC48;
    }

label_7F3AFB80:
    ctx->pc = 0x7F3AFB80u;
    ctx->downcount -= 12;
    // 7F3AFB80: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFB84:
    // 7F3AFB84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AFB88:
    ctx->pc = 0x7F3AFB88u;
    // 7F3AFB88: stw     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFB8C:
    ctx->pc = 0x7F3AFB8Cu;
    // 7F3AFB8C: sth     r5, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F3AFB90:
    ctx->pc = 0x7F3AFB90u;
    // 7F3AFB90: stb     r5, 14(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFB94:
    ctx->pc = 0x7F3AFB94u;
    // 7F3AFB94: stb     r5, 15(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFB98:
    ctx->pc = 0x7F3AFB98u;
    // 7F3AFB98: stb     r5, 16(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFB9C:
    ctx->pc = 0x7F3AFB9Cu;
    // 7F3AFB9C: stb     r5, 17(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFBA0:
    ctx->pc = 0x7F3AFBA0u;
    // 7F3AFBA0: stb     r5, 18(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFBA4:
    ctx->pc = 0x7F3AFBA4u;
    // 7F3AFBA4: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFBA8:
    // 7F3AFBA8: rlwinm. r0, r0, 0, 25, 25
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

label_7F3AFBAC:
    // 7F3AFBAC: bc    4, 2, 0x7F3AFBB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFBB4;
        }
    }

label_7F3AFBB0:
    ctx->pc = 0x7F3AFBB0u;
    ctx->downcount -= 1;
    // 7F3AFBB0: stb     r5, 16(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3AFBB4:
    ctx->pc = 0x7F3AFBB4u;
    ctx->downcount -= 3;
    // 7F3AFBB4: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFBB8:
    // 7F3AFBB8: rlwinm. r0, r0, 0, 24, 24
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

label_7F3AFBBC:
    // 7F3AFBBC: bc    4, 2, 0x7F3AFBC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFBC8;
        }
    }

label_7F3AFBC0:
    ctx->downcount -= 2;
    // 7F3AFBC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AFBC4:
    ctx->pc = 0x7F3AFBC4u;
    // 7F3AFBC4: stb     r0, 17(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFBC8:
    ctx->pc = 0x7F3AFBC8u;
    ctx->downcount -= 3;
    // 7F3AFBC8: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFBCC:
    // 7F3AFBCC: rlwinm. r0, r0, 0, 23, 23
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

label_7F3AFBD0:
    // 7F3AFBD0: bc    4, 2, 0x7F3AFBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFBDC;
        }
    }

label_7F3AFBD4:
    ctx->downcount -= 2;
    // 7F3AFBD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3AFBD8:
    ctx->pc = 0x7F3AFBD8u;
    // 7F3AFBD8: stb     r0, 18(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFBDC:
    ctx->pc = 0x7F3AFBDCu;
    ctx->downcount -= 3;
    // 7F3AFBDC: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AFBE0:
    // 7F3AFBE0: cmplwi  r5, 0x0000
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

label_7F3AFBE4:
    // 7F3AFBE4: bc    12, 2, 0x7F3AFBF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFBF0;
        }
    }

label_7F3AFBE8:
    ctx->downcount -= 2;
    // 7F3AFBE8: addi    r0, r5, 32
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32);

label_7F3AFBEC:
    ctx->pc = 0x7F3AFBECu;
    // 7F3AFBEC: stw     r0, 20(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFBF0:
    ctx->pc = 0x7F3AFBF0u;
    ctx->downcount -= 3;
    // 7F3AFBF0: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AFBF4:
    // 7F3AFBF4: cmplwi  r5, 0x0000
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

label_7F3AFBF8:
    // 7F3AFBF8: bc    12, 2, 0x7F3AFC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC04;
        }
    }

label_7F3AFBFC:
    ctx->downcount -= 2;
    // 7F3AFBFC: addi    r0, r5, 32
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32);

label_7F3AFC00:
    ctx->pc = 0x7F3AFC00u;
    // 7F3AFC00: stw     r0, 24(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFC04:
    ctx->pc = 0x7F3AFC04u;
    ctx->downcount -= 3;
    // 7F3AFC04: lwz     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AFC08:
    // 7F3AFC08: cmplwi  r5, 0x0000
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

label_7F3AFC0C:
    // 7F3AFC0C: bc    12, 2, 0x7F3AFC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC18;
        }
    }

label_7F3AFC10:
    ctx->downcount -= 2;
    // 7F3AFC10: addi    r0, r5, 32
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32);

label_7F3AFC14:
    ctx->pc = 0x7F3AFC14u;
    // 7F3AFC14: stw     r0, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFC18:
    ctx->pc = 0x7F3AFC18u;
    ctx->downcount -= 3;
    // 7F3AFC18: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFC1C:
    // 7F3AFC1C: cmplw   r0, r23
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFC20:
    // 7F3AFC20: bc    12, 2, 0x7F3AFC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC28;
        }
    }

label_7F3AFC24:
    ctx->downcount -= 1;
    // 7F3AFC24: li      r18, 1
    ctx->gpr[18] = (u32)(s32)(1);

label_7F3AFC28:
    ctx->pc = 0x7F3AFC28u;
    ctx->downcount -= 3;
    // 7F3AFC28: lha     r0, 30(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFC2C:
    // 7F3AFC2C: cmpwi   r0, 3
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

label_7F3AFC30:
    // 7F3AFC30: bc    4, 2, 0x7F3AFC38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC38;
        }
    }

label_7F3AFC34:
    ctx->downcount -= 1;
    // 7F3AFC34: li      r19, 1
    ctx->gpr[19] = (u32)(s32)(1);

label_7F3AFC38:
    ctx->pc = 0x7F3AFC38u;
    ctx->downcount -= 4;
    // 7F3AFC38: sth     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AFC3C:
    // 7F3AFC3C: addi    r22, r22, 48
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(48);

label_7F3AFC40:
    // 7F3AFC40: addi    r4, r4, 36
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(36);

label_7F3AFC44:
    // 7F3AFC44: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3AFC48:
    ctx->pc = 0x7F3AFC48u;
    ctx->downcount -= 5;
    // 7F3AFC48: lwz     r5, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3AFC4C:
    // 7F3AFC4C: addi    r0, r5, 56
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(56);

label_7F3AFC50:
    ctx->pc = 0x7F3AFC50u;
    // 7F3AFC50: lhzx    r0, r17, r0
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AFC54:
    // 7F3AFC54: cmpw    r3, r0
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

label_7F3AFC58:
    // 7F3AFC58: bc    12, 0, 0x7F3AFB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFB80u;
                return;
            }
            goto label_7F3AFB80;
        }
    }

label_7F3AFC5C:
    ctx->downcount -= 2;
    // 7F3AFC5C: cmpwi   r18, 0
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

label_7F3AFC60:
    // 7F3AFC60: bc    4, 2, 0x7F3AFC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC70;
        }
    }

label_7F3AFC64:
    ctx->pc = 0x7F3AFC64u;
    ctx->downcount -= 3;
    // 7F3AFC64: lwz     r3, 216(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AFC68:
    // 7F3AFC68: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3AFC6C:
    ctx->pc = 0x7F3AFC6Cu;
    // 7F3AFC6C: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFC70:
    ctx->downcount -= 1;
    // 7F3AFC70: addi    r21, r21, 324
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(324);

label_7F3AFC74:
    ctx->downcount -= 2;
    // 7F3AFC74: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_7F3AFC78:
    // 7F3AFC78: addi    r17, r17, 72
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(72);

label_7F3AFC7C:
    ctx->pc = 0x7F3AFC7Cu;
    ctx->downcount -= 3;
    // 7F3AFC7C: lha     r0, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFC80:
    // 7F3AFC80: cmpw    r20, r0
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

label_7F3AFC84:
    // 7F3AFC84: bc    12, 0, 0x7F3AF9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF9F8u;
                return;
            }
            goto label_7F3AF9F8;
        }
    }

label_7F3AFC88:
    ctx->pc = 0x7F3AFC88u;
    ctx->downcount -= 2;
    // 7F3AFC88: cmpwi   r19, 0
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

label_7F3AFC8C:
    ctx->pc = 0x7F3AFC8Cu;
    // 7F3AFC8C: bc    12, 2, 0x7F3AFC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFC98;
        }
    }

label_7F3AFC90:
    ctx->pc = 0x7F3AFC90u;
    ctx->downcount -= 2;
    // 7F3AFC90: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3AFC94:
    ctx->pc = 0x7F3AFC94u;
    // 7F3AFC94: sth     r0, 254(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(254);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AFC98:
    ctx->pc = 0x7F3AFC98u;
    ctx->downcount -= 3;
    // 7F3AFC98: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFC9C:
    ctx->pc = 0x7F3AFC9Cu;
    // 7F3AFC9C: cmplwi  r0, 0x0000
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

label_7F3AFCA0:
    ctx->pc = 0x7F3AFCA0u;
    // 7F3AFCA0: bc    12, 2, 0x7F3AFCF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFCF0;
        }
    }

label_7F3AFCA4:
    ctx->pc = 0x7F3AFCA4u;
    ctx->downcount -= 3;
    // 7F3AFCA4: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F3AFCA8:
    ctx->pc = 0x7F3AFCA8u;
    // 7F3AFCA8: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F3AFCAC:
    ctx->pc = 0x7F3AFCACu;
    // 7F3AFCAC: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F3AFCB0:
    ctx->downcount -= 10;
    // 7F3AFCB0: addi    r0, r19, 388
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(388);

label_7F3AFCB4:
    // 7F3AFCB4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AFCB8:
    ctx->pc = 0x7F3AFCB8u;
    // 7F3AFCB8: stwx    r21, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F3AFCBC:
    // 7F3AFCBC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AFCC0:
    // 7F3AFCC0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3AFCC4:
    // 7F3AFCC4: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3AFCC8:
    ctx->pc = 0x7F3AFCC8u;
    // 7F3AFCC8: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFCCC:
    // 7F3AFCCC: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3AFCD0:
    // 7F3AFCD0: add   r6, r0, r18
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AFCD4:
    // 7F3AFCD4: bl      0x7F3AF860
    {
            ctx->lr = 0x7F3AFCD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AF860u;
                return;
            }
            goto label_7F3AF860;
    }

label_7F3AFCD8:
    ctx->downcount -= 6;
    // 7F3AFCD8: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F3AFCDC:
    // 7F3AFCDC: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AFCE0:
    // 7F3AFCE0: cmpwi   r17, 8
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFCE4:
    // 7F3AFCE4: addi    r19, r19, 4
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(4);

label_7F3AFCE8:
    // 7F3AFCE8: addi    r18, r18, 20
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(20);

label_7F3AFCEC:
    // 7F3AFCEC: bc    12, 0, 0x7F3AFCB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFCB0u;
                return;
            }
            goto label_7F3AFCB0;
        }
    }

label_7F3AFCF0:
    ctx->pc = 0x7F3AFCF0u;
    ctx->downcount -= 1;
    // 7F3AFCF0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F3AFCF4:
    ctx->pc = 0x7F3AFCF4u;
    ctx->downcount -= 18;
    // 7F3AFCF4: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F3AFCF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F3AFCF4u);
        if (ctx->exception) return;
    }

label_7F3AFCF8:
    ctx->pc = 0x7F3AFCF8u;
    // 7F3AFCF8: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3AFCF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3AFCFC:
    ctx->pc = 0x7F3AFCFCu;
    // 7F3AFCFC: lmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3AFD00:
    ctx->pc = 0x7F3AFD00u;
    // 7F3AFD00: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3AFD04:
    ctx->pc = 0x7F3AFD04u;
    // 7F3AFD04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3AFD08:
    ctx->pc = 0x7F3AFD08u;
    // 7F3AFD08: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3AFD0C:
    ctx->pc = 0x7F3AFD0Cu;
    // 7F3AFD0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AFD10:
    ctx->pc = 0x7F3AFD10u;
    ctx->downcount -= 5;
    // 7F3AFD10: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3AFD14:
    ctx->pc = 0x7F3AFD14u;
    // 7F3AFD14: stw     r0, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFD18:
    ctx->pc = 0x7F3AFD18u;
    // 7F3AFD18: stw     r0, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFD1C:
    ctx->pc = 0x7F3AFD1Cu;
    // 7F3AFD1C: stw     r0, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFD20:
    ctx->pc = 0x7F3AFD20u;
    // 7F3AFD20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3AFD24:
    ctx->pc = 0x7F3AFD24u;
    ctx->downcount -= 21;
    // 7F3AFD24: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3AFD28:
    ctx->pc = 0x7F3AFD28u;
    // 7F3AFD28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3AFD2C:
    ctx->pc = 0x7F3AFD2Cu;
    // 7F3AFD2C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3AFD30:
    ctx->pc = 0x7F3AFD30u;
    // 7F3AFD30: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3AFD34:
    ctx->pc = 0x7F3AFD34u;
    // 7F3AFD34: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3AFD38:
    ctx->pc = 0x7F3AFD38u;
    // 7F3AFD38: addi    r31, r29, 444
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(444);

label_7F3AFD3C:
    ctx->pc = 0x7F3AFD3Cu;
    // 7F3AFD3C: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3AFD40:
    ctx->pc = 0x7F3AFD40u;
    // 7F3AFD40: lha     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFD44:
    ctx->pc = 0x7F3AFD44u;
    // 7F3AFD44: lwz     r30, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3AFD48:
    ctx->pc = 0x7F3AFD48u;
    // 7F3AFD48: rlwinm r3, r0, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F3AFD4C:
    ctx->pc = 0x7F3AFD4Cu;
    // 7F3AFD4C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3AFD50u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3AFD50:
    ctx->pc = 0x7F3AFD50u;
    ctx->downcount -= 2;
    // 7F3AFD50: cmplwi  r3, 0x0000
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

label_7F3AFD54:
    ctx->pc = 0x7F3AFD54u;
    // 7F3AFD54: bc    12, 2, 0x7F3B003C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3B003C;
        }
    }

label_7F3AFD58:
    ctx->pc = 0x7F3AFD58u;
    ctx->downcount -= 3;
    // 7F3AFD58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AFD5C:
    ctx->pc = 0x7F3AFD5Cu;
    // 7F3AFD5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AFD60:
    ctx->pc = 0x7F3AFD60u;
    // 7F3AFD60: b       0x7F3AFE8C
    {
            goto label_7F3AFE8C;
    }

label_7F3AFD64:
    ctx->downcount -= 10;
    // 7F3AFD64: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3AFD68:
    // 7F3AFD68: add   r9, r30, r5
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F3AFD6C:
    // 7F3AFD6C: li      r10, -1
    ctx->gpr[10] = (u32)(s32)(-1);

label_7F3AFD70:
    // 7F3AFD70: li      r11, -1
    ctx->gpr[11] = (u32)(s32)(-1);

label_7F3AFD74:
    // 7F3AFD74: li      r12, -1
    ctx->gpr[12] = (u32)(s32)(-1);

label_7F3AFD78:
    // 7F3AFD78: li      r26, -1
    ctx->gpr[26] = (u32)(s32)(-1);

label_7F3AFD7C:
    // 7F3AFD7C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AFD80:
    // 7F3AFD80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AFD84:
    ctx->pc = 0x7F3AFD84u;
    // 7F3AFD84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AFD88:
    ctx->downcount -= 4;
    // 7F3AFD88: add   r6, r9, r7
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AFD8C:
    ctx->pc = 0x7F3AFD8Cu;
    // 7F3AFD8C: lbz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFD90:
    // 7F3AFD90: cmplwi  r0, 0x00FF
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

label_7F3AFD94:
    // 7F3AFD94: bc    12, 2, 0x7F3AFDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFDB0;
        }
    }

label_7F3AFD98:
    ctx->pc = 0x7F3AFD98u;
    ctx->downcount -= 3;
    // 7F3AFD98: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFD9C:
    // 7F3AFD9C: cmpw    r0, r10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFDA0:
    // 7F3AFDA0: bc    4, 1, 0x7F3AFDAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFDAC;
        }
    }

label_7F3AFDA4:
    ctx->downcount -= 2;
    // 7F3AFDA4: or   r10, r0, r0
    {
        ctx->gpr[10] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AFDA8:
    // 7F3AFDA8: or   r12, r7, r7
    {
        ctx->gpr[12] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AFDAC:
    ctx->downcount -= 1;
    // 7F3AFDAC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3AFDB0:
    ctx->downcount -= 2;
    // 7F3AFDB0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F3AFDB4:
    // 7F3AFDB4: bc    16, 0, 0x7F3AFD88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFD88u;
                return;
            }
            goto label_7F3AFD88;
        }
    }

label_7F3AFDB8:
    ctx->downcount -= 2;
    // 7F3AFDB8: cmpwi   r8, 1
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFDBC:
    // 7F3AFDBC: bc    12, 2, 0x7F3AFDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFDD0;
        }
    }

label_7F3AFDC0:
    ctx->downcount -= 1;
    // 7F3AFDC0: bc    12, 0, 0x7F3AFE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE84;
        }
    }

label_7F3AFDC4:
    ctx->downcount -= 2;
    // 7F3AFDC4: cmpwi   r8, 5
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFDC8:
    // 7F3AFDC8: bc    4, 0, 0x7F3AFE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE84;
        }
    }

label_7F3AFDCC:
    ctx->downcount -= 1;
    // 7F3AFDCC: b       0x7F3AFE04
    {
            goto label_7F3AFE04;
    }

label_7F3AFDD0:
    ctx->downcount -= 13;
    // 7F3AFDD0: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F3AFDD4:
    // 7F3AFDD4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F3AFDD8:
    ctx->pc = 0x7F3AFDD8u;
    // 7F3AFDD8: stb     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFDDC:
    // 7F3AFDDC: addi    r0, r12, 4
    ctx->gpr[0] = ctx->gpr[12] + (u32)(s32)(4);

label_7F3AFDE0:
    ctx->pc = 0x7F3AFDE0u;
    // 7F3AFDE0: stb     r6, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFDE4:
    ctx->pc = 0x7F3AFDE4u;
    // 7F3AFDE4: stb     r6, 2(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFDE8:
    ctx->pc = 0x7F3AFDE8u;
    // 7F3AFDE8: stb     r6, 3(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFDEC:
    ctx->pc = 0x7F3AFDECu;
    // 7F3AFDEC: lbzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFDF0:
    ctx->pc = 0x7F3AFDF0u;
    // 7F3AFDF0: stb     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFDF4:
    ctx->pc = 0x7F3AFDF4u;
    // 7F3AFDF4: stb     r6, 5(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFDF8:
    ctx->pc = 0x7F3AFDF8u;
    // 7F3AFDF8: stb     r6, 6(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFDFC:
    ctx->pc = 0x7F3AFDFCu;
    // 7F3AFDFC: stb     r6, 7(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFE00:
    // 7F3AFE00: b       0x7F3AFE84
    {
            goto label_7F3AFE84;
    }

label_7F3AFE04:
    ctx->downcount -= 4;
    // 7F3AFE04: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3AFE08:
    // 7F3AFE08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AFE0C:
    ctx->pc = 0x7F3AFE0Cu;
    // 7F3AFE0C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AFE10:
    ctx->downcount -= 4;
    // 7F3AFE10: add   r6, r9, r7
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F3AFE14:
    ctx->pc = 0x7F3AFE14u;
    // 7F3AFE14: lbz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFE18:
    // 7F3AFE18: cmplwi  r0, 0x00FF
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

label_7F3AFE1C:
    // 7F3AFE1C: bc    12, 2, 0x7F3AFE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE44;
        }
    }

label_7F3AFE20:
    ctx->pc = 0x7F3AFE20u;
    ctx->downcount -= 3;
    // 7F3AFE20: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFE24:
    // 7F3AFE24: cmpw    r0, r11
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

label_7F3AFE28:
    // 7F3AFE28: bc    4, 1, 0x7F3AFE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE44;
        }
    }

label_7F3AFE2C:
    ctx->downcount -= 2;
    // 7F3AFE2C: cmpw    r0, r10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFE30:
    // 7F3AFE30: bc    12, 1, 0x7F3AFE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE44;
        }
    }

label_7F3AFE34:
    ctx->downcount -= 2;
    // 7F3AFE34: cmpw    r7, r12
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[12]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFE38:
    // 7F3AFE38: bc    12, 2, 0x7F3AFE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFE44;
        }
    }

label_7F3AFE3C:
    ctx->downcount -= 2;
    // 7F3AFE3C: or   r11, r0, r0
    {
        ctx->gpr[11] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3AFE40:
    // 7F3AFE40: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3AFE44:
    ctx->downcount -= 2;
    // 7F3AFE44: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F3AFE48:
    // 7F3AFE48: bc    16, 0, 0x7F3AFE10
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFE10u;
                return;
            }
            goto label_7F3AFE10;
        }
    }

label_7F3AFE4C:
    ctx->downcount -= 14;
    // 7F3AFE4C: li      r8, 64
    ctx->gpr[8] = (u32)(s32)(64);

label_7F3AFE50:
    // 7F3AFE50: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F3AFE54:
    ctx->pc = 0x7F3AFE54u;
    // 7F3AFE54: stb     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F3AFE58:
    // 7F3AFE58: addi    r6, r12, 4
    ctx->gpr[6] = ctx->gpr[12] + (u32)(s32)(4);

label_7F3AFE5C:
    // 7F3AFE5C: addi    r0, r26, 4
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(4);

label_7F3AFE60:
    ctx->pc = 0x7F3AFE60u;
    // 7F3AFE60: stb     r8, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F3AFE64:
    ctx->pc = 0x7F3AFE64u;
    // 7F3AFE64: stb     r7, 2(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F3AFE68:
    ctx->pc = 0x7F3AFE68u;
    // 7F3AFE68: stb     r7, 3(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F3AFE6C:
    ctx->pc = 0x7F3AFE6Cu;
    // 7F3AFE6C: lbzx    r6, r9, r6
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[6];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F3AFE70:
    ctx->pc = 0x7F3AFE70u;
    // 7F3AFE70: stb     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F3AFE74:
    ctx->pc = 0x7F3AFE74u;
    // 7F3AFE74: lbzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFE78:
    ctx->pc = 0x7F3AFE78u;
    // 7F3AFE78: stb     r0, 5(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFE7C:
    ctx->pc = 0x7F3AFE7Cu;
    // 7F3AFE7C: stb     r7, 6(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F3AFE80:
    ctx->pc = 0x7F3AFE80u;
    // 7F3AFE80: stb     r7, 7(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F3AFE84:
    ctx->downcount -= 2;
    // 7F3AFE84: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3AFE88:
    // 7F3AFE88: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_7F3AFE8C:
    ctx->pc = 0x7F3AFE8Cu;
    ctx->downcount -= 4;
    // 7F3AFE8C: lwz     r6, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3AFE90:
    ctx->pc = 0x7F3AFE90u;
    // 7F3AFE90: lha     r0, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFE94:
    // 7F3AFE94: cmpw    r4, r0
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

label_7F3AFE98:
    // 7F3AFE98: bc    12, 0, 0x7F3AFD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFD64u;
                return;
            }
            goto label_7F3AFD64;
        }
    }

label_7F3AFE9C:
    ctx->pc = 0x7F3AFE9Cu;
    ctx->downcount -= 6;
    // 7F3AFE9C: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F3AFEA0:
    ctx->pc = 0x7F3AFEA0u;
    // 7F3AFEA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AFEA4:
    ctx->pc = 0x7F3AFEA4u;
    // 7F3AFEA4: or   r28, r12, r12
    {
        ctx->gpr[28] = ctx->gpr[12] | ctx->gpr[12];
    }

label_7F3AFEA8:
    ctx->pc = 0x7F3AFEA8u;
    // 7F3AFEA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AFEAC:
    ctx->pc = 0x7F3AFEACu;
    // 7F3AFEAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AFEB0:
    ctx->pc = 0x7F3AFEB0u;
    // 7F3AFEB0: b       0x7F3AFF84
    {
            goto label_7F3AFF84;
    }

label_7F3AFEB4:
    ctx->downcount -= 5;
    // 7F3AFEB4: add   r27, r30, r6
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F3AFEB8:
    // 7F3AFEB8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3AFEBC:
    // 7F3AFEBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3AFEC0:
    // 7F3AFEC0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3AFEC4:
    // 7F3AFEC4: b       0x7F3AFF18
    {
            goto label_7F3AFF18;
    }

label_7F3AFEC8:
    ctx->downcount -= 6;
    // 7F3AFEC8: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3AFECC:
    // 7F3AFECC: add   r9, r30, r7
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F3AFED0:
    // 7F3AFED0: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_7F3AFED4:
    // 7F3AFED4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3AFED8:
    ctx->pc = 0x7F3AFED8u;
    // 7F3AFED8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3AFEDC:
    ctx->pc = 0x7F3AFEDCu;
    ctx->downcount -= 4;
    // 7F3AFEDC: lbz     r11, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_7F3AFEE0:
    ctx->pc = 0x7F3AFEE0u;
    // 7F3AFEE0: lbz     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read8(ctx, ea);
    }

label_7F3AFEE4:
    // 7F3AFEE4: cmplw   r11, r10
    {
        u32 val_a = (u32)(ctx->gpr[11]);
        u32 val_b = (u32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFEE8:
    // 7F3AFEE8: bc    12, 2, 0x7F3AFEF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFEF0;
        }
    }

label_7F3AFEEC:
    ctx->downcount -= 1;
    // 7F3AFEEC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F3AFEF0:
    ctx->downcount -= 4;
    // 7F3AFEF0: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F3AFEF4:
    // 7F3AFEF4: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3AFEF8:
    // 7F3AFEF8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F3AFEFC:
    // 7F3AFEFC: bc    16, 0, 0x7F3AFEDC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFEDCu;
                return;
            }
            goto label_7F3AFEDC;
        }
    }

label_7F3AFF00:
    ctx->downcount -= 2;
    // 7F3AFF00: cmpwi   r24, 0
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

label_7F3AFF04:
    // 7F3AFF04: bc    12, 2, 0x7F3AFF10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFF10;
        }
    }

label_7F3AFF08:
    ctx->pc = 0x7F3AFF08u;
    ctx->downcount -= 2;
    // 7F3AFF08: sthx    r26, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F3AFF0C:
    // 7F3AFF0C: b       0x7F3AFF20
    {
            goto label_7F3AFF20;
    }

label_7F3AFF10:
    ctx->downcount -= 2;
    // 7F3AFF10: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F3AFF14:
    // 7F3AFF14: addi    r7, r7, 8
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(8);

label_7F3AFF18:
    ctx->downcount -= 2;
    // 7F3AFF18: cmpw    r26, r12
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[12]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFF1C:
    // 7F3AFF1C: bc    12, 0, 0x7F3AFEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFEC8u;
                return;
            }
            goto label_7F3AFEC8;
        }
    }

label_7F3AFF20:
    ctx->downcount -= 2;
    // 7F3AFF20: cmpw    r26, r12
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[12]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFF24:
    // 7F3AFF24: bc    4, 2, 0x7F3AFF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFF78;
        }
    }

label_7F3AFF28:
    ctx->pc = 0x7F3AFF28u;
    ctx->downcount -= 20;
    // 7F3AFF28: lbz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF2C:
    // 7F3AFF2C: add   r7, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F3AFF30:
    // 7F3AFF30: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_7F3AFF34:
    // 7F3AFF34: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_7F3AFF38:
    ctx->pc = 0x7F3AFF38u;
    // 7F3AFF38: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF3C:
    ctx->pc = 0x7F3AFF3Cu;
    // 7F3AFF3C: lbz     r0, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF40:
    ctx->pc = 0x7F3AFF40u;
    // 7F3AFF40: stb     r0, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF44:
    ctx->pc = 0x7F3AFF44u;
    // 7F3AFF44: lbz     r0, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF48:
    ctx->pc = 0x7F3AFF48u;
    // 7F3AFF48: stb     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF4C:
    ctx->pc = 0x7F3AFF4Cu;
    // 7F3AFF4C: lbz     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF50:
    ctx->pc = 0x7F3AFF50u;
    // 7F3AFF50: stb     r0, 3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF54:
    ctx->pc = 0x7F3AFF54u;
    // 7F3AFF54: lbz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF58:
    ctx->pc = 0x7F3AFF58u;
    // 7F3AFF58: stb     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF5C:
    ctx->pc = 0x7F3AFF5Cu;
    // 7F3AFF5C: lbz     r0, 5(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF60:
    ctx->pc = 0x7F3AFF60u;
    // 7F3AFF60: stb     r0, 5(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF64:
    ctx->pc = 0x7F3AFF64u;
    // 7F3AFF64: lbz     r0, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF68:
    ctx->pc = 0x7F3AFF68u;
    // 7F3AFF68: stb     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF6C:
    ctx->pc = 0x7F3AFF6Cu;
    // 7F3AFF6C: lbz     r0, 7(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3AFF70:
    ctx->pc = 0x7F3AFF70u;
    // 7F3AFF70: stb     r0, 7(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3AFF74:
    ctx->pc = 0x7F3AFF74u;
    // 7F3AFF74: sthx    r26, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F3AFF78:
    ctx->downcount -= 3;
    // 7F3AFF78: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3AFF7C:
    // 7F3AFF7C: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_7F3AFF80:
    // 7F3AFF80: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

label_7F3AFF84:
    ctx->pc = 0x7F3AFF84u;
    ctx->downcount -= 4;
    // 7F3AFF84: lwz     r7, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AFF88:
    ctx->pc = 0x7F3AFF88u;
    // 7F3AFF88: lha     r0, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFF8C:
    // 7F3AFF8C: cmpw    r28, r0
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

label_7F3AFF90:
    // 7F3AFF90: bc    12, 0, 0x7F3AFEB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFEB4u;
                return;
            }
            goto label_7F3AFEB4;
        }
    }

label_7F3AFF94:
    ctx->pc = 0x7F3AFF94u;
    ctx->downcount -= 3;
    // 7F3AFF94: sth     r12, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_7F3AFF98:
    ctx->pc = 0x7F3AFF98u;
    // 7F3AFF98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3AFF9C:
    ctx->pc = 0x7F3AFF9Cu;
    // 7F3AFF9C: b       0x7F3B002C
    {
            goto label_7F3B002C;
    }

label_7F3AFFA0:
    ctx->pc = 0x7F3AFFA0u;
    ctx->downcount -= 4;
    // 7F3AFFA0: lwz     r4, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3AFFA4:
    // 7F3AFFA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3AFFA8:
    ctx->pc = 0x7F3AFFA8u;
    // 7F3AFFA8: lwz     r7, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3AFFAC:
    // 7F3AFFAC: b       0x7F3B0014
    {
            goto label_7F3B0014;
    }

label_7F3AFFB0:
    ctx->pc = 0x7F3AFFB0u;
    ctx->downcount -= 3;
    // 7F3AFFB0: lwz     r9, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3AFFB4:
    // 7F3AFFB4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3AFFB8:
    // 7F3AFFB8: b       0x7F3B0000
    {
            goto label_7F3B0000;
    }

label_7F3AFFBC:
    ctx->pc = 0x7F3AFFBCu;
    ctx->downcount -= 4;
    // 7F3AFFBC: lwz     r11, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3AFFC0:
    // 7F3AFFC0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3AFFC4:
    // 7F3AFFC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3AFFC8:
    // 7F3AFFC8: b       0x7F3AFFEC
    {
            goto label_7F3AFFEC;
    }

label_7F3AFFCC:
    ctx->pc = 0x7F3AFFCCu;
    ctx->downcount -= 3;
    // 7F3AFFCC: lhax    r0, r11, r4
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[4];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFFD0:
    // 7F3AFFD0: cmpwi   r0, -1
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

label_7F3AFFD4:
    // 7F3AFFD4: bc    12, 2, 0x7F3AFFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3AFFE4;
        }
    }

label_7F3AFFD8:
    ctx->downcount -= 3;
    // 7F3AFFD8: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F3AFFDC:
    ctx->pc = 0x7F3AFFDCu;
    // 7F3AFFDC: lhax    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3AFFE0:
    ctx->pc = 0x7F3AFFE0u;
    // 7F3AFFE0: sthx    r0, r11, r4
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[4];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3AFFE4:
    ctx->downcount -= 2;
    // 7F3AFFE4: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3AFFE8:
    // 7F3AFFE8: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_7F3AFFEC:
    ctx->pc = 0x7F3AFFECu;
    ctx->downcount -= 3;
    // 7F3AFFEC: lhz     r0, 30(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(30);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3AFFF0:
    // 7F3AFFF0: cmpw    r10, r0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3AFFF4:
    // 7F3AFFF4: bc    12, 0, 0x7F3AFFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFFCCu;
                return;
            }
            goto label_7F3AFFCC;
        }
    }

label_7F3AFFF8:
    ctx->downcount -= 2;
    // 7F3AFFF8: addi    r9, r9, 32
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(32);

label_7F3AFFFC:
    // 7F3AFFFC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F3B0000:
    ctx->pc = 0x7F3B0000u;
    ctx->downcount -= 3;
    // 7F3B0000: lhz     r0, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3B0004:
    // 7F3B0004: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3B0008:
    // 7F3B0008: bc    12, 0, 0x7F3AFFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFFBCu;
                return;
            }
            goto label_7F3AFFBC;
        }
    }

label_7F3B000C:
    ctx->downcount -= 2;
    // 7F3B000C: addi    r7, r7, 36
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(36);

label_7F3B0010:
    // 7F3B0010: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F3B0014:
    ctx->pc = 0x7F3B0014u;
    ctx->downcount -= 4;
    // 7F3B0014: lwz     r4, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3B0018:
    ctx->pc = 0x7F3B0018u;
    // 7F3B0018: lhz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3B001C:
    // 7F3B001C: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3B0020:
    // 7F3B0020: bc    12, 0, 0x7F3AFFB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFFB0u;
                return;
            }
            goto label_7F3AFFB0;
        }
    }

label_7F3B0024:
    ctx->downcount -= 2;
    // 7F3B0024: addi    r31, r31, 324
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(324);

label_7F3B0028:
    // 7F3B0028: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3B002C:
    ctx->pc = 0x7F3B002Cu;
    ctx->downcount -= 3;
    // 7F3B002C: lha     r0, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3B0030:
    // 7F3B0030: cmpw    r5, r0
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

label_7F3B0034:
    // 7F3B0034: bc    12, 0, 0x7F3AFFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3AFFA0u;
                return;
            }
            goto label_7F3AFFA0;
        }
    }

label_7F3B0038:
    ctx->pc = 0x7F3B0038u;
    ctx->downcount -= 1;
    // 7F3B0038: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3B003Cu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3B003C:
    ctx->pc = 0x7F3B003Cu;
    ctx->downcount -= 16;
    // 7F3B003C: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3B0040:
    ctx->pc = 0x7F3B0040u;
    // 7F3B0040: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3B0044:
    ctx->pc = 0x7F3B0044u;
    // 7F3B0044: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3B0048:
    ctx->pc = 0x7F3B0048u;
    // 7F3B0048: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3B004C:
    ctx->pc = 0x7F3B004Cu;
    // 7F3B004C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3AC0EC;
        }
    }

label_7F3B0050:
    ctx->pc = 0x7F3B0050u;
    ctx->downcount -= 30;
    // 7F3B0050: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3B0054:
    ctx->pc = 0x7F3B0054u;
    // 7F3B0054: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3B0058:
    ctx->pc = 0x7F3B0058u;
    // 7F3B0058: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3B005C:
    ctx->pc = 0x7F3B005Cu;
    // 7F3B005C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3B0060:
    ctx->pc = 0x7F3B0060u;
    // 7F3B0060: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3B0064:
    ctx->pc = 0x7F3B0064u;
    // 7F3B0064: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3B0068:
    ctx->pc = 0x7F3B0068u;
    // 7F3B0068: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3B006C:
    ctx->pc = 0x7F3B006Cu;
    // 7F3B006C: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F3B0070:
    ctx->pc = 0x7F3B0070u;
    // 7F3B0070: ori     r26, r4, 0xC000
    ctx->gpr[26] = ctx->gpr[4] | 0xC000u;

label_7F3B0074:
    ctx->pc = 0x7F3B0074u;
    // 7F3B0074: lha     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3B0078:
    ctx->pc = 0x7F3B0078u;
    // 7F3B0078: lha     r0, 62(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3B007C:
    ctx->pc = 0x7F3B007Cu;
    // 7F3B007C: mulli   r3, r3, 444
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)444);

label_7F3B0080:
    ctx->pc = 0x7F3B0080u;
    // 7F3B0080: mulli   r0, r0, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3B0084:
    ctx->pc = 0x7F3B0084u;
    // 7F3B0084: add   r30, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F3B0088:
    ctx->pc = 0x7F3B0088u;
    // 7F3B0088: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3B008C:
    ctx->pc = 0x7F3B008Cu;
    // 7F3B008C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F3B0090u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F3B0090:
    ctx->pc = 0x7F3B0090u;
    ctx->downcount -= 2;
    // 7F3B0090: or.   r31, r3, r3
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

label_7F3B0094:
    ctx->pc = 0x7F3B0094u;
    // 7F3B0094: bc    4, 2, 0x7F3B00A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3B00A0;
        }
    }

label_7F3B0098:
    ctx->pc = 0x7F3B0098u;
    ctx->downcount -= 2;
    // 7F3B0098: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3B009C:
    ctx->pc = 0x7F3B009Cu;
    // 7F3B009C: b       0x7F3B00F0
    {
            ctx->pc = 0x7F3B00F0u;
            return;
    }

label_7F3B00A0:
    ctx->pc = 0x7F3B00A0u;
    ctx->downcount -= 2;
    // 7F3B00A0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3B00A4:
    ctx->pc = 0x7F3B00A4u;
    // 7F3B00A4: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3B00A8u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3B00A8:
    ctx->pc = 0x7F3B00A8u;
    ctx->downcount -= 4;
    // 7F3B00A8: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3B00AC:
    ctx->pc = 0x7F3B00ACu;
    // 7F3B00AC: addis   r0, r3, -178
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-178) << 16);

label_7F3B00B0:
    ctx->pc = 0x7F3B00B0u;
    // 7F3B00B0: cmplwi  r0, 0x53A3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x53A3u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3B00B4:
    ctx->pc = 0x7F3B00B4u;
    // 7F3B00B4: bc    12, 2, 0x7F3B00C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3B00C4;
        }
    }

label_7F3B00B8:
    ctx->pc = 0x7F3B00B8u;
    ctx->downcount -= 3;
    // 7F3B00B8: addis   r0, r3, -78
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-78) << 16);

label_7F3B00BC:
    ctx->pc = 0x7F3B00BCu;
    // 7F3B00BC: cmplwi  r0, 0x9AE2
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x9AE2u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3B00C0:
    ctx->pc = 0x7F3B00C0u;
    // 7F3B00C0: bc    4, 2, 0x7F3B00C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3B00C8;
        }
    }

label_7F3B00C4:
    ctx->pc = 0x7F3B00C4u;
    ctx->downcount -= 1;
    // 7F3B00C4: oris    r26, r26, 0x0001
    ctx->gpr[26] = ctx->gpr[26] | (0x0001u << 16);

label_7F3B00C8:
    ctx->pc = 0x7F3B00C8u;
    ctx->downcount -= 9;
    // 7F3B00C8: lwz     r6, 92(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(92);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3B00CC:
    ctx->pc = 0x7F3B00CCu;
    // 7F3B00CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3B00D0:
    ctx->pc = 0x7F3B00D0u;
    // 7F3B00D0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F3B00D4:
    ctx->pc = 0x7F3B00D4u;
    // 7F3B00D4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3B00D8:
    ctx->pc = 0x7F3B00D8u;
    // 7F3B00D8: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3B00DC:
    ctx->pc = 0x7F3B00DCu;
    // 7F3B00DC: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3B00E0:
    ctx->pc = 0x7F3B00E0u;
    // 7F3B00E0: or   r9, r28, r28
    {
        ctx->gpr[9] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3B00E4:
    ctx->pc = 0x7F3B00E4u;
    // 7F3B00E4: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3B00E8:
    ctx->pc = 0x7F3B00E8u;
    // 7F3B00E8: bl      0x7F3B0104
    {
            ctx->lr = 0x7F3B00ECu;
            ctx->pc = 0x7F3B0104u;
            return;
    }

    ctx->pc = 0x7F3B00ECu;
    return;
return_dispatch_7F3AC0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F3AC10Cu: goto label_7F3AC10C;
    case 0x7F3AC150u: goto label_7F3AC150;
    case 0x7F3AC15Cu: goto label_7F3AC15C;
    case 0x7F3AC20Cu: goto label_7F3AC20C;
    case 0x7F3AC224u: goto label_7F3AC224;
    case 0x7F3AC25Cu: goto label_7F3AC25C;
    case 0x7F3AC268u: goto label_7F3AC268;
    case 0x7F3AC294u: goto label_7F3AC294;
    case 0x7F3AC2C0u: goto label_7F3AC2C0;
    case 0x7F3AC358u: goto label_7F3AC358;
    case 0x7F3AC370u: goto label_7F3AC370;
    case 0x7F3AC3BCu: goto label_7F3AC3BC;
    case 0x7F3AC3C8u: goto label_7F3AC3C8;
    case 0x7F3AC3DCu: goto label_7F3AC3DC;
    case 0x7F3AC3ECu: goto label_7F3AC3EC;
    case 0x7F3AC404u: goto label_7F3AC404;
    case 0x7F3AC414u: goto label_7F3AC414;
    case 0x7F3AC424u: goto label_7F3AC424;
    case 0x7F3AC47Cu: goto label_7F3AC47C;
    case 0x7F3AC48Cu: goto label_7F3AC48C;
    case 0x7F3AC49Cu: goto label_7F3AC49C;
    case 0x7F3AC4F0u: goto label_7F3AC4F0;
    case 0x7F3AC504u: goto label_7F3AC504;
    case 0x7F3AC518u: goto label_7F3AC518;
    case 0x7F3AC594u: goto label_7F3AC594;
    case 0x7F3AC60Cu: goto label_7F3AC60C;
    case 0x7F3AC628u: goto label_7F3AC628;
    case 0x7F3AC644u: goto label_7F3AC644;
    case 0x7F3AC65Cu: goto label_7F3AC65C;
    case 0x7F3AC688u: goto label_7F3AC688;
    case 0x7F3AC6A4u: goto label_7F3AC6A4;
    case 0x7F3AC6C4u: goto label_7F3AC6C4;
    case 0x7F3AC6E0u: goto label_7F3AC6E0;
    case 0x7F3AC73Cu: goto label_7F3AC73C;
    case 0x7F3AC7A4u: goto label_7F3AC7A4;
    case 0x7F3AC7B0u: goto label_7F3AC7B0;
    case 0x7F3AC7E0u: goto label_7F3AC7E0;
    case 0x7F3AC7F8u: goto label_7F3AC7F8;
    case 0x7F3AC840u: goto label_7F3AC840;
    case 0x7F3AC854u: goto label_7F3AC854;
    case 0x7F3AC868u: goto label_7F3AC868;
    case 0x7F3AC87Cu: goto label_7F3AC87C;
    case 0x7F3AC890u: goto label_7F3AC890;
    case 0x7F3AC8FCu: goto label_7F3AC8FC;
    case 0x7F3AC978u: goto label_7F3AC978;
    case 0x7F3ACB30u: goto label_7F3ACB30;
    case 0x7F3ACB4Cu: goto label_7F3ACB4C;
    case 0x7F3ACB64u: goto label_7F3ACB64;
    case 0x7F3ACB7Cu: goto label_7F3ACB7C;
    case 0x7F3ACB94u: goto label_7F3ACB94;
    case 0x7F3ACBACu: goto label_7F3ACBAC;
    case 0x7F3ACBC4u: goto label_7F3ACBC4;
    case 0x7F3ACC2Cu: goto label_7F3ACC2C;
    case 0x7F3ACC3Cu: goto label_7F3ACC3C;
    case 0x7F3ACC64u: goto label_7F3ACC64;
    case 0x7F3ACCB0u: goto label_7F3ACCB0;
    case 0x7F3ACCBCu: goto label_7F3ACCBC;
    case 0x7F3ACCC8u: goto label_7F3ACCC8;
    case 0x7F3ACCD0u: goto label_7F3ACCD0;
    case 0x7F3ACCE8u: goto label_7F3ACCE8;
    case 0x7F3ACCF8u: goto label_7F3ACCF8;
    case 0x7F3ACD30u: goto label_7F3ACD30;
    case 0x7F3ACD60u: goto label_7F3ACD60;
    case 0x7F3ACD74u: goto label_7F3ACD74;
    case 0x7F3ACD88u: goto label_7F3ACD88;
    case 0x7F3ACD90u: goto label_7F3ACD90;
    case 0x7F3ACD98u: goto label_7F3ACD98;
    case 0x7F3ACDA0u: goto label_7F3ACDA0;
    case 0x7F3ACDE8u: goto label_7F3ACDE8;
    case 0x7F3ACDF4u: goto label_7F3ACDF4;
    case 0x7F3ACE04u: goto label_7F3ACE04;
    case 0x7F3ACE48u: goto label_7F3ACE48;
    case 0x7F3ACE5Cu: goto label_7F3ACE5C;
    case 0x7F3ACE7Cu: goto label_7F3ACE7C;
    case 0x7F3ACEC0u: goto label_7F3ACEC0;
    case 0x7F3ACEF4u: goto label_7F3ACEF4;
    case 0x7F3ACF34u: goto label_7F3ACF34;
    case 0x7F3ACF48u: goto label_7F3ACF48;
    case 0x7F3ACF68u: goto label_7F3ACF68;
    case 0x7F3ACFBCu: goto label_7F3ACFBC;
    case 0x7F3ACFE4u: goto label_7F3ACFE4;
    case 0x7F3AD06Cu: goto label_7F3AD06C;
    case 0x7F3AD078u: goto label_7F3AD078;
    case 0x7F3AD084u: goto label_7F3AD084;
    case 0x7F3AD0E8u: goto label_7F3AD0E8;
    case 0x7F3AD154u: goto label_7F3AD154;
    case 0x7F3AD178u: goto label_7F3AD178;
    case 0x7F3AD1B0u: goto label_7F3AD1B0;
    case 0x7F3AD1E0u: goto label_7F3AD1E0;
    case 0x7F3AD200u: goto label_7F3AD200;
    case 0x7F3AD208u: goto label_7F3AD208;
    case 0x7F3AD210u: goto label_7F3AD210;
    case 0x7F3AD218u: goto label_7F3AD218;
    case 0x7F3AD220u: goto label_7F3AD220;
    case 0x7F3AD268u: goto label_7F3AD268;
    case 0x7F3AD274u: goto label_7F3AD274;
    case 0x7F3AD304u: goto label_7F3AD304;
    case 0x7F3AD30Cu: goto label_7F3AD30C;
    case 0x7F3AD314u: goto label_7F3AD314;
    case 0x7F3AD31Cu: goto label_7F3AD31C;
    case 0x7F3AD334u: goto label_7F3AD334;
    case 0x7F3AD36Cu: goto label_7F3AD36C;
    case 0x7F3AD398u: goto label_7F3AD398;
    case 0x7F3AD3E0u: goto label_7F3AD3E0;
    case 0x7F3AD3F0u: goto label_7F3AD3F0;
    case 0x7F3AD428u: goto label_7F3AD428;
    case 0x7F3AD438u: goto label_7F3AD438;
    case 0x7F3AD440u: goto label_7F3AD440;
    case 0x7F3AD4D0u: goto label_7F3AD4D0;
    case 0x7F3AD4E4u: goto label_7F3AD4E4;
    case 0x7F3AD504u: goto label_7F3AD504;
    case 0x7F3AD570u: goto label_7F3AD570;
    case 0x7F3AD580u: goto label_7F3AD580;
    case 0x7F3AD5C4u: goto label_7F3AD5C4;
    case 0x7F3AD5D8u: goto label_7F3AD5D8;
    case 0x7F3AD5F0u: goto label_7F3AD5F0;
    case 0x7F3AD6C0u: goto label_7F3AD6C0;
    case 0x7F3AD708u: goto label_7F3AD708;
    case 0x7F3AD718u: goto label_7F3AD718;
    case 0x7F3AD738u: goto label_7F3AD738;
    case 0x7F3AD7D8u: goto label_7F3AD7D8;
    case 0x7F3AD874u: goto label_7F3AD874;
    case 0x7F3AD884u: goto label_7F3AD884;
    case 0x7F3ADA08u: goto label_7F3ADA08;
    case 0x7F3ADA2Cu: goto label_7F3ADA2C;
    case 0x7F3ADB98u: goto label_7F3ADB98;
    case 0x7F3ADBA8u: goto label_7F3ADBA8;
    case 0x7F3ADBB4u: goto label_7F3ADBB4;
    case 0x7F3ADBC0u: goto label_7F3ADBC0;
    case 0x7F3ADBCCu: goto label_7F3ADBCC;
    case 0x7F3ADBE4u: goto label_7F3ADBE4;
    case 0x7F3ADDA4u: goto label_7F3ADDA4;
    case 0x7F3ADDB0u: goto label_7F3ADDB0;
    case 0x7F3ADE14u: goto label_7F3ADE14;
    case 0x7F3ADE28u: goto label_7F3ADE28;
    case 0x7F3ADE30u: goto label_7F3ADE30;
    case 0x7F3ADE38u: goto label_7F3ADE38;
    case 0x7F3ADE40u: goto label_7F3ADE40;
    case 0x7F3ADE68u: goto label_7F3ADE68;
    case 0x7F3ADE84u: goto label_7F3ADE84;
    case 0x7F3ADEB0u: goto label_7F3ADEB0;
    case 0x7F3ADEBCu: goto label_7F3ADEBC;
    case 0x7F3ADEC8u: goto label_7F3ADEC8;
    case 0x7F3ADF14u: goto label_7F3ADF14;
    case 0x7F3ADF28u: goto label_7F3ADF28;
    case 0x7F3ADF4Cu: goto label_7F3ADF4C;
    case 0x7F3ADF80u: goto label_7F3ADF80;
    case 0x7F3ADF88u: goto label_7F3ADF88;
    case 0x7F3ADF90u: goto label_7F3ADF90;
    case 0x7F3ADF98u: goto label_7F3ADF98;
    case 0x7F3ADFB0u: goto label_7F3ADFB0;
    case 0x7F3ADFC0u: goto label_7F3ADFC0;
    case 0x7F3ADFF0u: goto label_7F3ADFF0;
    case 0x7F3AE040u: goto label_7F3AE040;
    case 0x7F3AE050u: goto label_7F3AE050;
    case 0x7F3AE060u: goto label_7F3AE060;
    case 0x7F3AE070u: goto label_7F3AE070;
    case 0x7F3AE078u: goto label_7F3AE078;
    case 0x7F3AE09Cu: goto label_7F3AE09C;
    case 0x7F3AE0B0u: goto label_7F3AE0B0;
    case 0x7F3AE0C4u: goto label_7F3AE0C4;
    case 0x7F3AE0FCu: goto label_7F3AE0FC;
    case 0x7F3AE114u: goto label_7F3AE114;
    case 0x7F3AE178u: goto label_7F3AE178;
    case 0x7F3AE190u: goto label_7F3AE190;
    case 0x7F3AE198u: goto label_7F3AE198;
    case 0x7F3AE1B0u: goto label_7F3AE1B0;
    case 0x7F3AE210u: goto label_7F3AE210;
    case 0x7F3AE238u: goto label_7F3AE238;
    case 0x7F3AE248u: goto label_7F3AE248;
    case 0x7F3AE260u: goto label_7F3AE260;
    case 0x7F3AE2A4u: goto label_7F3AE2A4;
    case 0x7F3AE2B0u: goto label_7F3AE2B0;
    case 0x7F3AE2F4u: goto label_7F3AE2F4;
    case 0x7F3AE308u: goto label_7F3AE308;
    case 0x7F3AE328u: goto label_7F3AE328;
    case 0x7F3AE378u: goto label_7F3AE378;
    case 0x7F3AE3ACu: goto label_7F3AE3AC;
    case 0x7F3AE3F4u: goto label_7F3AE3F4;
    case 0x7F3AE408u: goto label_7F3AE408;
    case 0x7F3AE428u: goto label_7F3AE428;
    case 0x7F3AE488u: goto label_7F3AE488;
    case 0x7F3AE690u: goto label_7F3AE690;
    case 0x7F3AE6A4u: goto label_7F3AE6A4;
    case 0x7F3AE6BCu: goto label_7F3AE6BC;
    case 0x7F3AE6D4u: goto label_7F3AE6D4;
    case 0x7F3AE6E4u: goto label_7F3AE6E4;
    case 0x7F3AE700u: goto label_7F3AE700;
    case 0x7F3AE744u: goto label_7F3AE744;
    case 0x7F3AE75Cu: goto label_7F3AE75C;
    case 0x7F3AE7A0u: goto label_7F3AE7A0;
    case 0x7F3AE7B8u: goto label_7F3AE7B8;
    case 0x7F3AE800u: goto label_7F3AE800;
    case 0x7F3AE818u: goto label_7F3AE818;
    case 0x7F3AE860u: goto label_7F3AE860;
    case 0x7F3AE878u: goto label_7F3AE878;
    case 0x7F3AE8B4u: goto label_7F3AE8B4;
    case 0x7F3AE8B8u: goto label_7F3AE8B8;
    case 0x7F3AE8BCu: goto label_7F3AE8BC;
    case 0x7F3AE8C0u: goto label_7F3AE8C0;
    case 0x7F3AE8C4u: goto label_7F3AE8C4;
    case 0x7F3AE968u: goto label_7F3AE968;
    case 0x7F3AE9BCu: goto label_7F3AE9BC;
    case 0x7F3AE9C4u: goto label_7F3AE9C4;
    case 0x7F3AEA38u: goto label_7F3AEA38;
    case 0x7F3AEA40u: goto label_7F3AEA40;
    case 0x7F3AEA60u: goto label_7F3AEA60;
    case 0x7F3AEA68u: goto label_7F3AEA68;
    case 0x7F3AEA70u: goto label_7F3AEA70;
    case 0x7F3AEA94u: goto label_7F3AEA94;
    case 0x7F3AEBE0u: goto label_7F3AEBE0;
    case 0x7F3AEC10u: goto label_7F3AEC10;
    case 0x7F3AEC40u: goto label_7F3AEC40;
    case 0x7F3AEC74u: goto label_7F3AEC74;
    case 0x7F3AECA8u: goto label_7F3AECA8;
    case 0x7F3AECDCu: goto label_7F3AECDC;
    case 0x7F3AED10u: goto label_7F3AED10;
    case 0x7F3AED30u: goto label_7F3AED30;
    case 0x7F3AED50u: goto label_7F3AED50;
    case 0x7F3AEDD0u: goto label_7F3AEDD0;
    case 0x7F3AEDDCu: goto label_7F3AEDDC;
    case 0x7F3AEE30u: goto label_7F3AEE30;
    case 0x7F3AEE74u: goto label_7F3AEE74;
    case 0x7F3AEEA4u: goto label_7F3AEEA4;
    case 0x7F3AEEB4u: goto label_7F3AEEB4;
    case 0x7F3AEEC0u: goto label_7F3AEEC0;
    case 0x7F3AEEC4u: goto label_7F3AEEC4;
    case 0x7F3AEED4u: goto label_7F3AEED4;
    case 0x7F3AEEE4u: goto label_7F3AEEE4;
    case 0x7F3AEEF4u: goto label_7F3AEEF4;
    case 0x7F3AEF28u: goto label_7F3AEF28;
    case 0x7F3AEF4Cu: goto label_7F3AEF4C;
    case 0x7F3AEF70u: goto label_7F3AEF70;
    case 0x7F3AEFACu: goto label_7F3AEFAC;
    case 0x7F3AEFB4u: goto label_7F3AEFB4;
    case 0x7F3AEFBCu: goto label_7F3AEFBC;
    case 0x7F3AEFD4u: goto label_7F3AEFD4;
    case 0x7F3AEFECu: goto label_7F3AEFEC;
    case 0x7F3AF048u: goto label_7F3AF048;
    case 0x7F3AF060u: goto label_7F3AF060;
    case 0x7F3AF068u: goto label_7F3AF068;
    case 0x7F3AF07Cu: goto label_7F3AF07C;
    case 0x7F3AF094u: goto label_7F3AF094;
    case 0x7F3AF0A8u: goto label_7F3AF0A8;
    case 0x7F3AF0FCu: goto label_7F3AF0FC;
    case 0x7F3AF10Cu: goto label_7F3AF10C;
    case 0x7F3AF114u: goto label_7F3AF114;
    case 0x7F3AF120u: goto label_7F3AF120;
    case 0x7F3AF13Cu: goto label_7F3AF13C;
    case 0x7F3AF15Cu: goto label_7F3AF15C;
    case 0x7F3AF170u: goto label_7F3AF170;
    case 0x7F3AF184u: goto label_7F3AF184;
    case 0x7F3AF190u: goto label_7F3AF190;
    case 0x7F3AF1ACu: goto label_7F3AF1AC;
    case 0x7F3AF1B4u: goto label_7F3AF1B4;
    case 0x7F3AF1C0u: goto label_7F3AF1C0;
    case 0x7F3AF1E4u: goto label_7F3AF1E4;
    case 0x7F3AF1ECu: goto label_7F3AF1EC;
    case 0x7F3AF1FCu: goto label_7F3AF1FC;
    case 0x7F3AF238u: goto label_7F3AF238;
    case 0x7F3AF244u: goto label_7F3AF244;
    case 0x7F3AF250u: goto label_7F3AF250;
    case 0x7F3AF3A8u: goto label_7F3AF3A8;
    case 0x7F3AF400u: goto label_7F3AF400;
    case 0x7F3AF418u: goto label_7F3AF418;
    case 0x7F3AF4A8u: goto label_7F3AF4A8;
    case 0x7F3AF4B0u: goto label_7F3AF4B0;
    case 0x7F3AF4DCu: goto label_7F3AF4DC;
    case 0x7F3AF4E0u: goto label_7F3AF4E0;
    case 0x7F3AF4E4u: goto label_7F3AF4E4;
    case 0x7F3AF4F0u: goto label_7F3AF4F0;
    case 0x7F3AF4FCu: goto label_7F3AF4FC;
    case 0x7F3AF508u: goto label_7F3AF508;
    case 0x7F3AF524u: goto label_7F3AF524;
    case 0x7F3AF52Cu: goto label_7F3AF52C;
    case 0x7F3AF548u: goto label_7F3AF548;
    case 0x7F3AF564u: goto label_7F3AF564;
    case 0x7F3AF56Cu: goto label_7F3AF56C;
    case 0x7F3AF58Cu: goto label_7F3AF58C;
    case 0x7F3AF5A0u: goto label_7F3AF5A0;
    case 0x7F3AF5B8u: goto label_7F3AF5B8;
    case 0x7F3AF5D0u: goto label_7F3AF5D0;
    case 0x7F3AF5ECu: goto label_7F3AF5EC;
    case 0x7F3AF608u: goto label_7F3AF608;
    case 0x7F3AF610u: goto label_7F3AF610;
    case 0x7F3AF618u: goto label_7F3AF618;
    case 0x7F3AF620u: goto label_7F3AF620;
    case 0x7F3AF634u: goto label_7F3AF634;
    case 0x7F3AF648u: goto label_7F3AF648;
    case 0x7F3AF658u: goto label_7F3AF658;
    case 0x7F3AF660u: goto label_7F3AF660;
    case 0x7F3AF668u: goto label_7F3AF668;
    case 0x7F3AF690u: goto label_7F3AF690;
    case 0x7F3AF6FCu: goto label_7F3AF6FC;
    case 0x7F3AF798u: goto label_7F3AF798;
    case 0x7F3AF7F4u: goto label_7F3AF7F4;
    case 0x7F3AF80Cu: goto label_7F3AF80C;
    case 0x7F3AF848u: goto label_7F3AF848;
    case 0x7F3AF900u: goto label_7F3AF900;
    case 0x7F3AF964u: goto label_7F3AF964;
    case 0x7F3AF980u: goto label_7F3AF980;
    case 0x7F3AF9D0u: goto label_7F3AF9D0;
    case 0x7F3AFB44u: goto label_7F3AFB44;
    case 0x7F3AFB58u: goto label_7F3AFB58;
    case 0x7F3AFB6Cu: goto label_7F3AFB6C;
    case 0x7F3AFCD8u: goto label_7F3AFCD8;
    case 0x7F3AFD50u: goto label_7F3AFD50;
    case 0x7F3B003Cu: goto label_7F3B003C;
    case 0x7F3B0090u: goto label_7F3B0090;
    case 0x7F3B00A8u: goto label_7F3B00A8;
    default: return;
    }
}

