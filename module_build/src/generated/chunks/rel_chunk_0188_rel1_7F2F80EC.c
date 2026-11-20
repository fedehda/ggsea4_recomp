// DolRecomp output
#include "../generated.h"

static void loop_7F2F8258(CPUState* ctx) {
label_7F2F8258:
    ctx->downcount -= 8;
    // 7F2F8258: rlwinm r5, r6, 0, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFCu;
    }

    // 7F2F825C: rlwinm r0, r6, 3, 27, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 3u) & 0x00000018u;
    }

    ctx->pc = 0x7F2F8260u;
    // 7F2F8260: lwzx    r5, r24, r5
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F2F8264: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    // 7F2F8268: srw   r0, r5, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] >> sh);
    }

    ctx->pc = 0x7F2F826Cu;
    // 7F2F826C: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F2F8270: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

    // 7F2F8274: bc    16, 0, 0x7F2F8258
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8258u;
                return;
            }
            goto label_7F2F8258;
        }
    }

    ctx->pc = 0x7F2F8278u;
}

static void loop_7F2F8298(CPUState* ctx) {
label_7F2F8298:
    ctx->downcount -= 14;
    // 7F2F8298: rlwinm r7, r8, 0, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFFFFCu;
    }

    // 7F2F829C: rlwinm r9, r8, 3, 27, 28
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[8], 3u) & 0x00000018u;
    }

    ctx->pc = 0x7F2F82A0u;
    // 7F2F82A0: lwzx    r5, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F2F82A4: slw   r0, r6, r9
    {
        u32 sh = ctx->gpr[9] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

    // 7F2F82A8: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    // 7F2F82AC: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

    ctx->pc = 0x7F2F82B0u;
    // 7F2F82B0: stwx    r0, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2F82B4u;
    // 7F2F82B4: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    // 7F2F82B8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    ctx->pc = 0x7F2F82BCu;
    // 7F2F82BC: lwzx    r5, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F2F82C0: slw   r0, r0, r9
    {
        u32 sh = ctx->gpr[9] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

    // 7F2F82C4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

    ctx->pc = 0x7F2F82C8u;
    // 7F2F82C8: stwx    r0, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2F82CC: bc    16, 0, 0x7F2F8298
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8298u;
                return;
            }
            goto label_7F2F8298;
        }
    }

    ctx->pc = 0x7F2F82D0u;
}

static void loop_7F2F837C(CPUState* ctx) {
label_7F2F837C:
    ctx->downcount -= 3;
    ctx->pc = 0x7F2F837Cu;
    // 7F2F837C: stwx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2F8380: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F2F8384: bc    16, 0, 0x7F2F837C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F837Cu;
                return;
            }
            goto label_7F2F837C;
        }
    }

    ctx->pc = 0x7F2F8388u;
}

static void loop_7F2F83D4(CPUState* ctx) {
label_7F2F83D4:
    ctx->downcount -= 4;
    ctx->pc = 0x7F2F83D4u;
    // 7F2F83D4: lwzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F83D8u;
    // 7F2F83D8: stwx    r0, r24, r3
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2F83DC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F2F83E0: bc    16, 0, 0x7F2F83D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F83D4u;
                return;
            }
            goto label_7F2F83D4;
        }
    }

    ctx->pc = 0x7F2F83E4u;
}

static void loop_7F2F8600(CPUState* ctx) {
label_7F2F8600:
    ctx->downcount -= 53;
    ctx->pc = 0x7F2F8600u;
    // 7F2F8600: lhzx    r0, r9, r3
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[3];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 7F2F8604: rlwinm r7, r12, 16, 0, 15
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[12], 16u) & 0xFFFF0000u;
    }

    // 7F2F8608: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

    // 7F2F860C: or   r12, r7, r0
    {
        ctx->gpr[12] = ctx->gpr[7] | ctx->gpr[0];
    }

    // 7F2F8610: divwu   r7, r12, r8
    {
        u32 divisor = ctx->gpr[8];
        ctx->gpr[7] = divisor == 0 ? 0u : ctx->gpr[12] / divisor;
    }

    // 7F2F8614: mullw   r0, r7, r8
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x7F2F8618u;
    // 7F2F8618: sthx    r7, r9, r3
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[3];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    // 7F2F861C: addi    r3, r3, -2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2);

    // 7F2F8620: subf   r12, r0, r12
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[12];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

    // 7F2F8624: bc    16, 0, 0x7F2F8600
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8600u;
                return;
            }
            goto label_7F2F8600;
        }
    }

    ctx->pc = 0x7F2F8628u;
}

static void loop_7F2F935C(CPUState* ctx) {
label_7F2F935C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F935Cu;
    // 7F2F935C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9360u;
    // 7F2F9360: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9364u;
    // 7F2F9364: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9368u;
    // 7F2F9368: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F936C: bc    16, 0, 0x7F2F935C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F935Cu;
                return;
            }
            goto label_7F2F935C;
        }
    }

    ctx->pc = 0x7F2F9370u;
}

static void loop_7F2F9538(CPUState* ctx) {
label_7F2F9538:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9538u;
    // 7F2F9538: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F953Cu;
    // 7F2F953C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9540u;
    // 7F2F9540: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9544u;
    // 7F2F9544: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9548: bc    16, 0, 0x7F2F9538
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9538u;
                return;
            }
            goto label_7F2F9538;
        }
    }

    ctx->pc = 0x7F2F954Cu;
}

static void loop_7F2F96BC(CPUState* ctx) {
label_7F2F96BC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F96BCu;
    // 7F2F96BC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F96C0u;
    // 7F2F96C0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F96C4u;
    // 7F2F96C4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F96C8u;
    // 7F2F96C8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F96CC: bc    16, 0, 0x7F2F96BC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F96BCu;
                return;
            }
            goto label_7F2F96BC;
        }
    }

    ctx->pc = 0x7F2F96D0u;
}

static void loop_7F2F9EA8(CPUState* ctx) {
label_7F2F9EA8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9EA8u;
    // 7F2F9EA8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9EACu;
    // 7F2F9EAC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9EB0u;
    // 7F2F9EB0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9EB4u;
    // 7F2F9EB4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9EB8: bc    16, 0, 0x7F2F9EA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9EA8u;
                return;
            }
            goto label_7F2F9EA8;
        }
    }

    ctx->pc = 0x7F2F9EBCu;
}

static void loop_7F2F9EE4(CPUState* ctx) {
label_7F2F9EE4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9EE4u;
    // 7F2F9EE4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9EE8u;
    // 7F2F9EE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9EECu;
    // 7F2F9EEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9EF0u;
    // 7F2F9EF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9EF4: bc    16, 0, 0x7F2F9EE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9EE4u;
                return;
            }
            goto label_7F2F9EE4;
        }
    }

    ctx->pc = 0x7F2F9EF8u;
}

static void loop_7F2F9F54(CPUState* ctx) {
label_7F2F9F54:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9F54u;
    // 7F2F9F54: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9F58u;
    // 7F2F9F58: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9F5Cu;
    // 7F2F9F5C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9F60u;
    // 7F2F9F60: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9F64: bc    16, 0, 0x7F2F9F54
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9F54u;
                return;
            }
            goto label_7F2F9F54;
        }
    }

    ctx->pc = 0x7F2F9F68u;
}

static void loop_7F2F9F80(CPUState* ctx) {
label_7F2F9F80:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9F80u;
    // 7F2F9F80: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9F84u;
    // 7F2F9F84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9F88u;
    // 7F2F9F88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9F8Cu;
    // 7F2F9F8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9F90: bc    16, 0, 0x7F2F9F80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9F80u;
                return;
            }
            goto label_7F2F9F80;
        }
    }

    ctx->pc = 0x7F2F9F94u;
}

static void loop_7F2F9FCC(CPUState* ctx) {
label_7F2F9FCC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2F9FCCu;
    // 7F2F9FCC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2F9FD0u;
    // 7F2F9FD0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2F9FD4u;
    // 7F2F9FD4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2F9FD8u;
    // 7F2F9FD8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2F9FDC: bc    16, 0, 0x7F2F9FCC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9FCCu;
                return;
            }
            goto label_7F2F9FCC;
        }
    }

    ctx->pc = 0x7F2F9FE0u;
}

static void loop_7F2FA00C(CPUState* ctx) {
label_7F2FA00C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FA00Cu;
    // 7F2FA00C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA010u;
    // 7F2FA010: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FA014u;
    // 7F2FA014: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FA018u;
    // 7F2FA018: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FA01C: bc    16, 0, 0x7F2FA00C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA00Cu;
                return;
            }
            goto label_7F2FA00C;
        }
    }

    ctx->pc = 0x7F2FA020u;
}

static void loop_7F2FA0F0(CPUState* ctx) {
label_7F2FA0F0:
    ctx->downcount -= 14;
    ctx->pc = 0x7F2FA0F0u;
    // 7F2FA0F0: lwz     r4, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA0F4u;
    // 7F2FA0F4: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2FA0F8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F2FA0FC: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x7F2FA100u;
    // 7F2FA100: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA104u;
    // 7F2FA104: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2FA108: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F2FA10Cu;
    // 7F2FA10C: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2FA110u;
    // 7F2FA110: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2FA114u;
    // 7F2FA114: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA118u;
    // 7F2FA118: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA11Cu;
    // 7F2FA11C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2FA120u;
    // 7F2FA120: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2FA124: bc    16, 0, 0x7F2FA0F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA0F0u;
                return;
            }
            goto label_7F2FA0F0;
        }
    }

    ctx->pc = 0x7F2FA128u;
}

static void loop_7F2FA2E8(CPUState* ctx) {
label_7F2FA2E8:
    ctx->downcount -= 12;
    ctx->pc = 0x7F2FA2E8u;
    // 7F2FA2E8: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA2ECu;
    // 7F2FA2EC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F2FA2F0: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x7F2FA2F4u;
    // 7F2FA2F4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2FA2F8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F2FA2FCu;
    // 7F2FA2FC: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2FA300u;
    // 7F2FA300: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2FA304u;
    // 7F2FA304: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA308u;
    // 7F2FA308: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA30Cu;
    // 7F2FA30C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2FA310u;
    // 7F2FA310: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2FA314: bc    16, 0, 0x7F2FA2E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA2E8u;
                return;
            }
            goto label_7F2FA2E8;
        }
    }

    ctx->pc = 0x7F2FA318u;
}

static void loop_7F2FA3F8(CPUState* ctx) {
label_7F2FA3F8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FA3F8u;
    // 7F2FA3F8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA3FCu;
    // 7F2FA3FC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FA400u;
    // 7F2FA400: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FA404u;
    // 7F2FA404: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FA408: bc    16, 0, 0x7F2FA3F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA3F8u;
                return;
            }
            goto label_7F2FA3F8;
        }
    }

    ctx->pc = 0x7F2FA40Cu;
}

static void loop_7F2FA5E4(CPUState* ctx) {
label_7F2FA5E4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FA5E4u;
    // 7F2FA5E4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FA5E8u;
    // 7F2FA5E8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FA5ECu;
    // 7F2FA5EC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FA5F0u;
    // 7F2FA5F0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FA5F4: bc    16, 0, 0x7F2FA5E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA5E4u;
                return;
            }
            goto label_7F2FA5E4;
        }
    }

    ctx->pc = 0x7F2FA5F8u;
}

static void loop_7F2FAE84(CPUState* ctx) {
label_7F2FAE84:
    ctx->downcount -= 25;
    // 7F2FAE84: addi    r7, r4, 48
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(48);

    ctx->pc = 0x7F2FAE88u;
    // 7F2FAE88: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2FAE8C: add   r7, r24, r7
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    // 7F2FAE90: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

    // 7F2FAE94: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x7F2FAE98u;
    // 7F2FAE98: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAE9Cu;
    // 7F2FAE9C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAEA0u;
    // 7F2FAEA0: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2FAEA4u;
    // 7F2FAEA4: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2FAEA8u;
    // 7F2FAEA8: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAEACu;
    // 7F2FAEAC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAEB0u;
    // 7F2FAEB0: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2FAEB4u;
    // 7F2FAEB4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2FAEB8u;
    // 7F2FAEB8: lwz     r0, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAEBCu;
    // 7F2FAEBC: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F2FAEC0: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x7F2FAEC4u;
    // 7F2FAEC4: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2FAEC8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F2FAECCu;
    // 7F2FAECC: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2FAED0u;
    // 7F2FAED0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F2FAED4u;
    // 7F2FAED4: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAED8u;
    // 7F2FAED8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FAEDCu;
    // 7F2FAEDC: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2FAEE0u;
    // 7F2FAEE0: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2FAEE4: bc    16, 0, 0x7F2FAE84
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FAE84u;
                return;
            }
            goto label_7F2FAE84;
        }
    }

    ctx->pc = 0x7F2FAEE8u;
}

static void loop_7F2FB210(CPUState* ctx) {
label_7F2FB210:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FB210u;
    // 7F2FB210: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FB214u;
    // 7F2FB214: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F2FB218u;
    // 7F2FB218: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FB21Cu;
    // 7F2FB21C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F2FB220: bc    16, 0, 0x7F2FB210
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB210u;
                return;
            }
            goto label_7F2FB210;
        }
    }

    ctx->pc = 0x7F2FB224u;
}

static void loop_7F2FB2F4(CPUState* ctx) {
label_7F2FB2F4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FB2F4u;
    // 7F2FB2F4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FB2F8u;
    // 7F2FB2F8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FB2FCu;
    // 7F2FB2FC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FB300u;
    // 7F2FB300: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FB304: bc    16, 0, 0x7F2FB2F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB2F4u;
                return;
            }
            goto label_7F2FB2F4;
        }
    }

    ctx->pc = 0x7F2FB308u;
}

static void loop_7F2FB4BC(CPUState* ctx) {
label_7F2FB4BC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FB4BCu;
    // 7F2FB4BC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FB4C0u;
    // 7F2FB4C0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FB4C4u;
    // 7F2FB4C4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FB4C8u;
    // 7F2FB4C8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FB4CC: bc    16, 0, 0x7F2FB4BC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB4BCu;
                return;
            }
            goto label_7F2FB4BC;
        }
    }

    ctx->pc = 0x7F2FB4D0u;
}

static void loop_7F2FBA48(CPUState* ctx) {
label_7F2FBA48:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FBA48u;
    // 7F2FBA48: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FBA4Cu;
    // 7F2FBA4C: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x7F2FBA50u;
    // 7F2FBA50: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F2FBA54u;
    // 7F2FBA54: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F2FBA58: bc    16, 0, 0x7F2FBA48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBA48u;
                return;
            }
            goto label_7F2FBA48;
        }
    }

    ctx->pc = 0x7F2FBA5Cu;
}

static void loop_7F2FBAE4(CPUState* ctx) {
label_7F2FBAE4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FBAE4u;
    // 7F2FBAE4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FBAE8u;
    // 7F2FBAE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2FBAECu;
    // 7F2FBAEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2FBAF0u;
    // 7F2FBAF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2FBAF4: bc    16, 0, 0x7F2FBAE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBAE4u;
                return;
            }
            goto label_7F2FBAE4;
        }
    }

    ctx->pc = 0x7F2FBAF8u;
}

static void loop_7F2FBB80(CPUState* ctx) {
label_7F2FBB80:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2FBB80u;
    // 7F2FBB80: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2FBB84u;
    // 7F2FBB84: lwzu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

    ctx->pc = 0x7F2FBB88u;
    // 7F2FBB88: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2FBB8Cu;
    // 7F2FBB8C: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

    // 7F2FBB90: bc    16, 0, 0x7F2FBB80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBB80u;
                return;
            }
            goto label_7F2FBB80;
        }
    }

    ctx->pc = 0x7F2FBB94u;
}

void func_7F2F80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2F80ECu: goto label_7F2F80EC;
    case 0x7F2F80F0u: goto label_7F2F80F0;
    case 0x7F2F80F4u: goto label_7F2F80F4;
    case 0x7F2F80F8u: goto label_7F2F80F8;
    case 0x7F2F80FCu: goto label_7F2F80FC;
    case 0x7F2F8100u: goto label_7F2F8100;
    case 0x7F2F8104u: goto label_7F2F8104;
    case 0x7F2F8108u: goto label_7F2F8108;
    case 0x7F2F810Cu: goto label_7F2F810C;
    case 0x7F2F8110u: goto label_7F2F8110;
    case 0x7F2F8114u: goto label_7F2F8114;
    case 0x7F2F8118u: goto label_7F2F8118;
    case 0x7F2F811Cu: goto label_7F2F811C;
    case 0x7F2F8120u: goto label_7F2F8120;
    case 0x7F2F8124u: goto label_7F2F8124;
    case 0x7F2F8128u: goto label_7F2F8128;
    case 0x7F2F812Cu: goto label_7F2F812C;
    case 0x7F2F8130u: goto label_7F2F8130;
    case 0x7F2F8134u: goto label_7F2F8134;
    case 0x7F2F8138u: goto label_7F2F8138;
    case 0x7F2F813Cu: goto label_7F2F813C;
    case 0x7F2F8140u: goto label_7F2F8140;
    case 0x7F2F8144u: goto label_7F2F8144;
    case 0x7F2F8148u: goto label_7F2F8148;
    case 0x7F2F814Cu: goto label_7F2F814C;
    case 0x7F2F8150u: goto label_7F2F8150;
    case 0x7F2F8154u: goto label_7F2F8154;
    case 0x7F2F8158u: goto label_7F2F8158;
    case 0x7F2F815Cu: goto label_7F2F815C;
    case 0x7F2F8160u: goto label_7F2F8160;
    case 0x7F2F8164u: goto label_7F2F8164;
    case 0x7F2F8168u: goto label_7F2F8168;
    case 0x7F2F816Cu: goto label_7F2F816C;
    case 0x7F2F8170u: goto label_7F2F8170;
    case 0x7F2F8174u: goto label_7F2F8174;
    case 0x7F2F8178u: goto label_7F2F8178;
    case 0x7F2F817Cu: goto label_7F2F817C;
    case 0x7F2F8180u: goto label_7F2F8180;
    case 0x7F2F8184u: goto label_7F2F8184;
    case 0x7F2F8188u: goto label_7F2F8188;
    case 0x7F2F818Cu: goto label_7F2F818C;
    case 0x7F2F8190u: goto label_7F2F8190;
    case 0x7F2F8194u: goto label_7F2F8194;
    case 0x7F2F8198u: goto label_7F2F8198;
    case 0x7F2F819Cu: goto label_7F2F819C;
    case 0x7F2F81A0u: goto label_7F2F81A0;
    case 0x7F2F81A4u: goto label_7F2F81A4;
    case 0x7F2F81A8u: goto label_7F2F81A8;
    case 0x7F2F81ACu: goto label_7F2F81AC;
    case 0x7F2F81B0u: goto label_7F2F81B0;
    case 0x7F2F81B4u: goto label_7F2F81B4;
    case 0x7F2F81B8u: goto label_7F2F81B8;
    case 0x7F2F81BCu: goto label_7F2F81BC;
    case 0x7F2F81C0u: goto label_7F2F81C0;
    case 0x7F2F81C4u: goto label_7F2F81C4;
    case 0x7F2F81C8u: goto label_7F2F81C8;
    case 0x7F2F81CCu: goto label_7F2F81CC;
    case 0x7F2F81D0u: goto label_7F2F81D0;
    case 0x7F2F81D4u: goto label_7F2F81D4;
    case 0x7F2F81D8u: goto label_7F2F81D8;
    case 0x7F2F81DCu: goto label_7F2F81DC;
    case 0x7F2F81E0u: goto label_7F2F81E0;
    case 0x7F2F81E4u: goto label_7F2F81E4;
    case 0x7F2F81E8u: goto label_7F2F81E8;
    case 0x7F2F81ECu: goto label_7F2F81EC;
    case 0x7F2F81F0u: goto label_7F2F81F0;
    case 0x7F2F81F4u: goto label_7F2F81F4;
    case 0x7F2F81F8u: goto label_7F2F81F8;
    case 0x7F2F81FCu: goto label_7F2F81FC;
    case 0x7F2F8200u: goto label_7F2F8200;
    case 0x7F2F8204u: goto label_7F2F8204;
    case 0x7F2F8208u: goto label_7F2F8208;
    case 0x7F2F820Cu: goto label_7F2F820C;
    case 0x7F2F8210u: goto label_7F2F8210;
    case 0x7F2F8214u: goto label_7F2F8214;
    case 0x7F2F8218u: goto label_7F2F8218;
    case 0x7F2F821Cu: goto label_7F2F821C;
    case 0x7F2F8220u: goto label_7F2F8220;
    case 0x7F2F8224u: goto label_7F2F8224;
    case 0x7F2F8228u: goto label_7F2F8228;
    case 0x7F2F822Cu: goto label_7F2F822C;
    case 0x7F2F8230u: goto label_7F2F8230;
    case 0x7F2F8234u: goto label_7F2F8234;
    case 0x7F2F8238u: goto label_7F2F8238;
    case 0x7F2F823Cu: goto label_7F2F823C;
    case 0x7F2F8240u: goto label_7F2F8240;
    case 0x7F2F8244u: goto label_7F2F8244;
    case 0x7F2F8248u: goto label_7F2F8248;
    case 0x7F2F824Cu: goto label_7F2F824C;
    case 0x7F2F8250u: goto label_7F2F8250;
    case 0x7F2F8254u: goto label_7F2F8254;
    case 0x7F2F8258u: goto label_7F2F8258;
    case 0x7F2F825Cu: goto label_7F2F825C;
    case 0x7F2F8260u: goto label_7F2F8260;
    case 0x7F2F8264u: goto label_7F2F8264;
    case 0x7F2F8268u: goto label_7F2F8268;
    case 0x7F2F826Cu: goto label_7F2F826C;
    case 0x7F2F8270u: goto label_7F2F8270;
    case 0x7F2F8274u: goto label_7F2F8274;
    case 0x7F2F8278u: goto label_7F2F8278;
    case 0x7F2F827Cu: goto label_7F2F827C;
    case 0x7F2F8280u: goto label_7F2F8280;
    case 0x7F2F8284u: goto label_7F2F8284;
    case 0x7F2F8288u: goto label_7F2F8288;
    case 0x7F2F828Cu: goto label_7F2F828C;
    case 0x7F2F8290u: goto label_7F2F8290;
    case 0x7F2F8294u: goto label_7F2F8294;
    case 0x7F2F8298u: goto label_7F2F8298;
    case 0x7F2F829Cu: goto label_7F2F829C;
    case 0x7F2F82A0u: goto label_7F2F82A0;
    case 0x7F2F82A4u: goto label_7F2F82A4;
    case 0x7F2F82A8u: goto label_7F2F82A8;
    case 0x7F2F82ACu: goto label_7F2F82AC;
    case 0x7F2F82B0u: goto label_7F2F82B0;
    case 0x7F2F82B4u: goto label_7F2F82B4;
    case 0x7F2F82B8u: goto label_7F2F82B8;
    case 0x7F2F82BCu: goto label_7F2F82BC;
    case 0x7F2F82C0u: goto label_7F2F82C0;
    case 0x7F2F82C4u: goto label_7F2F82C4;
    case 0x7F2F82C8u: goto label_7F2F82C8;
    case 0x7F2F82CCu: goto label_7F2F82CC;
    case 0x7F2F82D0u: goto label_7F2F82D0;
    case 0x7F2F82D4u: goto label_7F2F82D4;
    case 0x7F2F82D8u: goto label_7F2F82D8;
    case 0x7F2F82DCu: goto label_7F2F82DC;
    case 0x7F2F82E0u: goto label_7F2F82E0;
    case 0x7F2F82E4u: goto label_7F2F82E4;
    case 0x7F2F82E8u: goto label_7F2F82E8;
    case 0x7F2F82ECu: goto label_7F2F82EC;
    case 0x7F2F82F0u: goto label_7F2F82F0;
    case 0x7F2F82F4u: goto label_7F2F82F4;
    case 0x7F2F82F8u: goto label_7F2F82F8;
    case 0x7F2F82FCu: goto label_7F2F82FC;
    case 0x7F2F8300u: goto label_7F2F8300;
    case 0x7F2F8304u: goto label_7F2F8304;
    case 0x7F2F8308u: goto label_7F2F8308;
    case 0x7F2F830Cu: goto label_7F2F830C;
    case 0x7F2F8310u: goto label_7F2F8310;
    case 0x7F2F8314u: goto label_7F2F8314;
    case 0x7F2F8318u: goto label_7F2F8318;
    case 0x7F2F831Cu: goto label_7F2F831C;
    case 0x7F2F8320u: goto label_7F2F8320;
    case 0x7F2F8324u: goto label_7F2F8324;
    case 0x7F2F8328u: goto label_7F2F8328;
    case 0x7F2F832Cu: goto label_7F2F832C;
    case 0x7F2F8330u: goto label_7F2F8330;
    case 0x7F2F8334u: goto label_7F2F8334;
    case 0x7F2F8338u: goto label_7F2F8338;
    case 0x7F2F833Cu: goto label_7F2F833C;
    case 0x7F2F8340u: goto label_7F2F8340;
    case 0x7F2F8344u: goto label_7F2F8344;
    case 0x7F2F8348u: goto label_7F2F8348;
    case 0x7F2F834Cu: goto label_7F2F834C;
    case 0x7F2F8350u: goto label_7F2F8350;
    case 0x7F2F8354u: goto label_7F2F8354;
    case 0x7F2F8358u: goto label_7F2F8358;
    case 0x7F2F835Cu: goto label_7F2F835C;
    case 0x7F2F8360u: goto label_7F2F8360;
    case 0x7F2F8364u: goto label_7F2F8364;
    case 0x7F2F8368u: goto label_7F2F8368;
    case 0x7F2F836Cu: goto label_7F2F836C;
    case 0x7F2F8370u: goto label_7F2F8370;
    case 0x7F2F8374u: goto label_7F2F8374;
    case 0x7F2F8378u: goto label_7F2F8378;
    case 0x7F2F837Cu: goto label_7F2F837C;
    case 0x7F2F8380u: goto label_7F2F8380;
    case 0x7F2F8384u: goto label_7F2F8384;
    case 0x7F2F8388u: goto label_7F2F8388;
    case 0x7F2F838Cu: goto label_7F2F838C;
    case 0x7F2F8390u: goto label_7F2F8390;
    case 0x7F2F8394u: goto label_7F2F8394;
    case 0x7F2F8398u: goto label_7F2F8398;
    case 0x7F2F839Cu: goto label_7F2F839C;
    case 0x7F2F83A0u: goto label_7F2F83A0;
    case 0x7F2F83A4u: goto label_7F2F83A4;
    case 0x7F2F83A8u: goto label_7F2F83A8;
    case 0x7F2F83ACu: goto label_7F2F83AC;
    case 0x7F2F83B0u: goto label_7F2F83B0;
    case 0x7F2F83B4u: goto label_7F2F83B4;
    case 0x7F2F83B8u: goto label_7F2F83B8;
    case 0x7F2F83BCu: goto label_7F2F83BC;
    case 0x7F2F83C0u: goto label_7F2F83C0;
    case 0x7F2F83C4u: goto label_7F2F83C4;
    case 0x7F2F83C8u: goto label_7F2F83C8;
    case 0x7F2F83CCu: goto label_7F2F83CC;
    case 0x7F2F83D0u: goto label_7F2F83D0;
    case 0x7F2F83D4u: goto label_7F2F83D4;
    case 0x7F2F83D8u: goto label_7F2F83D8;
    case 0x7F2F83DCu: goto label_7F2F83DC;
    case 0x7F2F83E0u: goto label_7F2F83E0;
    case 0x7F2F83E4u: goto label_7F2F83E4;
    case 0x7F2F83E8u: goto label_7F2F83E8;
    case 0x7F2F83ECu: goto label_7F2F83EC;
    case 0x7F2F83F0u: goto label_7F2F83F0;
    case 0x7F2F83F4u: goto label_7F2F83F4;
    case 0x7F2F83F8u: goto label_7F2F83F8;
    case 0x7F2F83FCu: goto label_7F2F83FC;
    case 0x7F2F8400u: goto label_7F2F8400;
    case 0x7F2F8404u: goto label_7F2F8404;
    case 0x7F2F8408u: goto label_7F2F8408;
    case 0x7F2F840Cu: goto label_7F2F840C;
    case 0x7F2F8410u: goto label_7F2F8410;
    case 0x7F2F8414u: goto label_7F2F8414;
    case 0x7F2F8418u: goto label_7F2F8418;
    case 0x7F2F841Cu: goto label_7F2F841C;
    case 0x7F2F8420u: goto label_7F2F8420;
    case 0x7F2F8424u: goto label_7F2F8424;
    case 0x7F2F8428u: goto label_7F2F8428;
    case 0x7F2F842Cu: goto label_7F2F842C;
    case 0x7F2F8430u: goto label_7F2F8430;
    case 0x7F2F8434u: goto label_7F2F8434;
    case 0x7F2F8438u: goto label_7F2F8438;
    case 0x7F2F843Cu: goto label_7F2F843C;
    case 0x7F2F8440u: goto label_7F2F8440;
    case 0x7F2F8444u: goto label_7F2F8444;
    case 0x7F2F8448u: goto label_7F2F8448;
    case 0x7F2F844Cu: goto label_7F2F844C;
    case 0x7F2F8450u: goto label_7F2F8450;
    case 0x7F2F8454u: goto label_7F2F8454;
    case 0x7F2F8458u: goto label_7F2F8458;
    case 0x7F2F845Cu: goto label_7F2F845C;
    case 0x7F2F8460u: goto label_7F2F8460;
    case 0x7F2F8464u: goto label_7F2F8464;
    case 0x7F2F8468u: goto label_7F2F8468;
    case 0x7F2F846Cu: goto label_7F2F846C;
    case 0x7F2F8470u: goto label_7F2F8470;
    case 0x7F2F8474u: goto label_7F2F8474;
    case 0x7F2F8478u: goto label_7F2F8478;
    case 0x7F2F847Cu: goto label_7F2F847C;
    case 0x7F2F8480u: goto label_7F2F8480;
    case 0x7F2F8484u: goto label_7F2F8484;
    case 0x7F2F8488u: goto label_7F2F8488;
    case 0x7F2F848Cu: goto label_7F2F848C;
    case 0x7F2F8490u: goto label_7F2F8490;
    case 0x7F2F8494u: goto label_7F2F8494;
    case 0x7F2F8498u: goto label_7F2F8498;
    case 0x7F2F849Cu: goto label_7F2F849C;
    case 0x7F2F84A0u: goto label_7F2F84A0;
    case 0x7F2F84A4u: goto label_7F2F84A4;
    case 0x7F2F84A8u: goto label_7F2F84A8;
    case 0x7F2F84ACu: goto label_7F2F84AC;
    case 0x7F2F84B0u: goto label_7F2F84B0;
    case 0x7F2F84B4u: goto label_7F2F84B4;
    case 0x7F2F84B8u: goto label_7F2F84B8;
    case 0x7F2F84BCu: goto label_7F2F84BC;
    case 0x7F2F84C0u: goto label_7F2F84C0;
    case 0x7F2F84C4u: goto label_7F2F84C4;
    case 0x7F2F84C8u: goto label_7F2F84C8;
    case 0x7F2F84CCu: goto label_7F2F84CC;
    case 0x7F2F84D0u: goto label_7F2F84D0;
    case 0x7F2F84D4u: goto label_7F2F84D4;
    case 0x7F2F84D8u: goto label_7F2F84D8;
    case 0x7F2F84DCu: goto label_7F2F84DC;
    case 0x7F2F84E0u: goto label_7F2F84E0;
    case 0x7F2F84E4u: goto label_7F2F84E4;
    case 0x7F2F84E8u: goto label_7F2F84E8;
    case 0x7F2F84ECu: goto label_7F2F84EC;
    case 0x7F2F84F0u: goto label_7F2F84F0;
    case 0x7F2F84F4u: goto label_7F2F84F4;
    case 0x7F2F84F8u: goto label_7F2F84F8;
    case 0x7F2F84FCu: goto label_7F2F84FC;
    case 0x7F2F8500u: goto label_7F2F8500;
    case 0x7F2F8504u: goto label_7F2F8504;
    case 0x7F2F8508u: goto label_7F2F8508;
    case 0x7F2F850Cu: goto label_7F2F850C;
    case 0x7F2F8510u: goto label_7F2F8510;
    case 0x7F2F8514u: goto label_7F2F8514;
    case 0x7F2F8518u: goto label_7F2F8518;
    case 0x7F2F851Cu: goto label_7F2F851C;
    case 0x7F2F8520u: goto label_7F2F8520;
    case 0x7F2F8524u: goto label_7F2F8524;
    case 0x7F2F8528u: goto label_7F2F8528;
    case 0x7F2F852Cu: goto label_7F2F852C;
    case 0x7F2F8530u: goto label_7F2F8530;
    case 0x7F2F8534u: goto label_7F2F8534;
    case 0x7F2F8538u: goto label_7F2F8538;
    case 0x7F2F853Cu: goto label_7F2F853C;
    case 0x7F2F8540u: goto label_7F2F8540;
    case 0x7F2F8544u: goto label_7F2F8544;
    case 0x7F2F8548u: goto label_7F2F8548;
    case 0x7F2F854Cu: goto label_7F2F854C;
    case 0x7F2F8550u: goto label_7F2F8550;
    case 0x7F2F8554u: goto label_7F2F8554;
    case 0x7F2F8558u: goto label_7F2F8558;
    case 0x7F2F855Cu: goto label_7F2F855C;
    case 0x7F2F8560u: goto label_7F2F8560;
    case 0x7F2F8564u: goto label_7F2F8564;
    case 0x7F2F8568u: goto label_7F2F8568;
    case 0x7F2F856Cu: goto label_7F2F856C;
    case 0x7F2F8570u: goto label_7F2F8570;
    case 0x7F2F8574u: goto label_7F2F8574;
    case 0x7F2F8578u: goto label_7F2F8578;
    case 0x7F2F857Cu: goto label_7F2F857C;
    case 0x7F2F8580u: goto label_7F2F8580;
    case 0x7F2F8584u: goto label_7F2F8584;
    case 0x7F2F8588u: goto label_7F2F8588;
    case 0x7F2F858Cu: goto label_7F2F858C;
    case 0x7F2F8590u: goto label_7F2F8590;
    case 0x7F2F8594u: goto label_7F2F8594;
    case 0x7F2F8598u: goto label_7F2F8598;
    case 0x7F2F859Cu: goto label_7F2F859C;
    case 0x7F2F85A0u: goto label_7F2F85A0;
    case 0x7F2F85A4u: goto label_7F2F85A4;
    case 0x7F2F85A8u: goto label_7F2F85A8;
    case 0x7F2F85ACu: goto label_7F2F85AC;
    case 0x7F2F85B0u: goto label_7F2F85B0;
    case 0x7F2F85B4u: goto label_7F2F85B4;
    case 0x7F2F85B8u: goto label_7F2F85B8;
    case 0x7F2F85BCu: goto label_7F2F85BC;
    case 0x7F2F85C0u: goto label_7F2F85C0;
    case 0x7F2F85C4u: goto label_7F2F85C4;
    case 0x7F2F85C8u: goto label_7F2F85C8;
    case 0x7F2F85CCu: goto label_7F2F85CC;
    case 0x7F2F85D0u: goto label_7F2F85D0;
    case 0x7F2F85D4u: goto label_7F2F85D4;
    case 0x7F2F85D8u: goto label_7F2F85D8;
    case 0x7F2F85DCu: goto label_7F2F85DC;
    case 0x7F2F85E0u: goto label_7F2F85E0;
    case 0x7F2F85E4u: goto label_7F2F85E4;
    case 0x7F2F85E8u: goto label_7F2F85E8;
    case 0x7F2F85ECu: goto label_7F2F85EC;
    case 0x7F2F85F0u: goto label_7F2F85F0;
    case 0x7F2F85F4u: goto label_7F2F85F4;
    case 0x7F2F85F8u: goto label_7F2F85F8;
    case 0x7F2F85FCu: goto label_7F2F85FC;
    case 0x7F2F8600u: goto label_7F2F8600;
    case 0x7F2F8604u: goto label_7F2F8604;
    case 0x7F2F8608u: goto label_7F2F8608;
    case 0x7F2F860Cu: goto label_7F2F860C;
    case 0x7F2F8610u: goto label_7F2F8610;
    case 0x7F2F8614u: goto label_7F2F8614;
    case 0x7F2F8618u: goto label_7F2F8618;
    case 0x7F2F861Cu: goto label_7F2F861C;
    case 0x7F2F8620u: goto label_7F2F8620;
    case 0x7F2F8624u: goto label_7F2F8624;
    case 0x7F2F8628u: goto label_7F2F8628;
    case 0x7F2F862Cu: goto label_7F2F862C;
    case 0x7F2F8630u: goto label_7F2F8630;
    case 0x7F2F8634u: goto label_7F2F8634;
    case 0x7F2F8638u: goto label_7F2F8638;
    case 0x7F2F863Cu: goto label_7F2F863C;
    case 0x7F2F8640u: goto label_7F2F8640;
    case 0x7F2F8644u: goto label_7F2F8644;
    case 0x7F2F8648u: goto label_7F2F8648;
    case 0x7F2F864Cu: goto label_7F2F864C;
    case 0x7F2F8650u: goto label_7F2F8650;
    case 0x7F2F8654u: goto label_7F2F8654;
    case 0x7F2F8658u: goto label_7F2F8658;
    case 0x7F2F865Cu: goto label_7F2F865C;
    case 0x7F2F8660u: goto label_7F2F8660;
    case 0x7F2F8664u: goto label_7F2F8664;
    case 0x7F2F8668u: goto label_7F2F8668;
    case 0x7F2F866Cu: goto label_7F2F866C;
    case 0x7F2F8670u: goto label_7F2F8670;
    case 0x7F2F8674u: goto label_7F2F8674;
    case 0x7F2F8678u: goto label_7F2F8678;
    case 0x7F2F867Cu: goto label_7F2F867C;
    case 0x7F2F8680u: goto label_7F2F8680;
    case 0x7F2F8684u: goto label_7F2F8684;
    case 0x7F2F8688u: goto label_7F2F8688;
    case 0x7F2F868Cu: goto label_7F2F868C;
    case 0x7F2F8690u: goto label_7F2F8690;
    case 0x7F2F8694u: goto label_7F2F8694;
    case 0x7F2F8698u: goto label_7F2F8698;
    case 0x7F2F869Cu: goto label_7F2F869C;
    case 0x7F2F86A0u: goto label_7F2F86A0;
    case 0x7F2F86A4u: goto label_7F2F86A4;
    case 0x7F2F86A8u: goto label_7F2F86A8;
    case 0x7F2F86ACu: goto label_7F2F86AC;
    case 0x7F2F86B0u: goto label_7F2F86B0;
    case 0x7F2F86B4u: goto label_7F2F86B4;
    case 0x7F2F86B8u: goto label_7F2F86B8;
    case 0x7F2F86BCu: goto label_7F2F86BC;
    case 0x7F2F86C0u: goto label_7F2F86C0;
    case 0x7F2F86C4u: goto label_7F2F86C4;
    case 0x7F2F86C8u: goto label_7F2F86C8;
    case 0x7F2F86CCu: goto label_7F2F86CC;
    case 0x7F2F86D0u: goto label_7F2F86D0;
    case 0x7F2F86D4u: goto label_7F2F86D4;
    case 0x7F2F86D8u: goto label_7F2F86D8;
    case 0x7F2F86DCu: goto label_7F2F86DC;
    case 0x7F2F86E0u: goto label_7F2F86E0;
    case 0x7F2F86E4u: goto label_7F2F86E4;
    case 0x7F2F86E8u: goto label_7F2F86E8;
    case 0x7F2F86ECu: goto label_7F2F86EC;
    case 0x7F2F86F0u: goto label_7F2F86F0;
    case 0x7F2F86F4u: goto label_7F2F86F4;
    case 0x7F2F86F8u: goto label_7F2F86F8;
    case 0x7F2F86FCu: goto label_7F2F86FC;
    case 0x7F2F8700u: goto label_7F2F8700;
    case 0x7F2F8704u: goto label_7F2F8704;
    case 0x7F2F8708u: goto label_7F2F8708;
    case 0x7F2F870Cu: goto label_7F2F870C;
    case 0x7F2F8710u: goto label_7F2F8710;
    case 0x7F2F8714u: goto label_7F2F8714;
    case 0x7F2F8718u: goto label_7F2F8718;
    case 0x7F2F871Cu: goto label_7F2F871C;
    case 0x7F2F8720u: goto label_7F2F8720;
    case 0x7F2F8724u: goto label_7F2F8724;
    case 0x7F2F8728u: goto label_7F2F8728;
    case 0x7F2F872Cu: goto label_7F2F872C;
    case 0x7F2F8730u: goto label_7F2F8730;
    case 0x7F2F8734u: goto label_7F2F8734;
    case 0x7F2F8738u: goto label_7F2F8738;
    case 0x7F2F873Cu: goto label_7F2F873C;
    case 0x7F2F8740u: goto label_7F2F8740;
    case 0x7F2F8744u: goto label_7F2F8744;
    case 0x7F2F8748u: goto label_7F2F8748;
    case 0x7F2F874Cu: goto label_7F2F874C;
    case 0x7F2F8750u: goto label_7F2F8750;
    case 0x7F2F8754u: goto label_7F2F8754;
    case 0x7F2F8758u: goto label_7F2F8758;
    case 0x7F2F875Cu: goto label_7F2F875C;
    case 0x7F2F8760u: goto label_7F2F8760;
    case 0x7F2F8764u: goto label_7F2F8764;
    case 0x7F2F8768u: goto label_7F2F8768;
    case 0x7F2F876Cu: goto label_7F2F876C;
    case 0x7F2F8770u: goto label_7F2F8770;
    case 0x7F2F8774u: goto label_7F2F8774;
    case 0x7F2F8778u: goto label_7F2F8778;
    case 0x7F2F877Cu: goto label_7F2F877C;
    case 0x7F2F8780u: goto label_7F2F8780;
    case 0x7F2F8784u: goto label_7F2F8784;
    case 0x7F2F8788u: goto label_7F2F8788;
    case 0x7F2F878Cu: goto label_7F2F878C;
    case 0x7F2F8790u: goto label_7F2F8790;
    case 0x7F2F8794u: goto label_7F2F8794;
    case 0x7F2F8798u: goto label_7F2F8798;
    case 0x7F2F879Cu: goto label_7F2F879C;
    case 0x7F2F87A0u: goto label_7F2F87A0;
    case 0x7F2F87A4u: goto label_7F2F87A4;
    case 0x7F2F87A8u: goto label_7F2F87A8;
    case 0x7F2F87ACu: goto label_7F2F87AC;
    case 0x7F2F87B0u: goto label_7F2F87B0;
    case 0x7F2F87B4u: goto label_7F2F87B4;
    case 0x7F2F87B8u: goto label_7F2F87B8;
    case 0x7F2F87BCu: goto label_7F2F87BC;
    case 0x7F2F87C0u: goto label_7F2F87C0;
    case 0x7F2F87C4u: goto label_7F2F87C4;
    case 0x7F2F87C8u: goto label_7F2F87C8;
    case 0x7F2F87CCu: goto label_7F2F87CC;
    case 0x7F2F87D0u: goto label_7F2F87D0;
    case 0x7F2F87D4u: goto label_7F2F87D4;
    case 0x7F2F87D8u: goto label_7F2F87D8;
    case 0x7F2F87DCu: goto label_7F2F87DC;
    case 0x7F2F87E0u: goto label_7F2F87E0;
    case 0x7F2F87E4u: goto label_7F2F87E4;
    case 0x7F2F87E8u: goto label_7F2F87E8;
    case 0x7F2F87ECu: goto label_7F2F87EC;
    case 0x7F2F87F0u: goto label_7F2F87F0;
    case 0x7F2F87F4u: goto label_7F2F87F4;
    case 0x7F2F87F8u: goto label_7F2F87F8;
    case 0x7F2F87FCu: goto label_7F2F87FC;
    case 0x7F2F8800u: goto label_7F2F8800;
    case 0x7F2F8804u: goto label_7F2F8804;
    case 0x7F2F8808u: goto label_7F2F8808;
    case 0x7F2F880Cu: goto label_7F2F880C;
    case 0x7F2F8810u: goto label_7F2F8810;
    case 0x7F2F8814u: goto label_7F2F8814;
    case 0x7F2F8818u: goto label_7F2F8818;
    case 0x7F2F881Cu: goto label_7F2F881C;
    case 0x7F2F8820u: goto label_7F2F8820;
    case 0x7F2F8824u: goto label_7F2F8824;
    case 0x7F2F8828u: goto label_7F2F8828;
    case 0x7F2F882Cu: goto label_7F2F882C;
    case 0x7F2F8830u: goto label_7F2F8830;
    case 0x7F2F8834u: goto label_7F2F8834;
    case 0x7F2F8838u: goto label_7F2F8838;
    case 0x7F2F883Cu: goto label_7F2F883C;
    case 0x7F2F8840u: goto label_7F2F8840;
    case 0x7F2F8844u: goto label_7F2F8844;
    case 0x7F2F8848u: goto label_7F2F8848;
    case 0x7F2F884Cu: goto label_7F2F884C;
    case 0x7F2F8850u: goto label_7F2F8850;
    case 0x7F2F8854u: goto label_7F2F8854;
    case 0x7F2F8858u: goto label_7F2F8858;
    case 0x7F2F885Cu: goto label_7F2F885C;
    case 0x7F2F8860u: goto label_7F2F8860;
    case 0x7F2F8864u: goto label_7F2F8864;
    case 0x7F2F8868u: goto label_7F2F8868;
    case 0x7F2F886Cu: goto label_7F2F886C;
    case 0x7F2F8870u: goto label_7F2F8870;
    case 0x7F2F8874u: goto label_7F2F8874;
    case 0x7F2F8878u: goto label_7F2F8878;
    case 0x7F2F887Cu: goto label_7F2F887C;
    case 0x7F2F8880u: goto label_7F2F8880;
    case 0x7F2F8884u: goto label_7F2F8884;
    case 0x7F2F8888u: goto label_7F2F8888;
    case 0x7F2F888Cu: goto label_7F2F888C;
    case 0x7F2F8890u: goto label_7F2F8890;
    case 0x7F2F8894u: goto label_7F2F8894;
    case 0x7F2F8898u: goto label_7F2F8898;
    case 0x7F2F889Cu: goto label_7F2F889C;
    case 0x7F2F88A0u: goto label_7F2F88A0;
    case 0x7F2F88A4u: goto label_7F2F88A4;
    case 0x7F2F88A8u: goto label_7F2F88A8;
    case 0x7F2F88ACu: goto label_7F2F88AC;
    case 0x7F2F88B0u: goto label_7F2F88B0;
    case 0x7F2F88B4u: goto label_7F2F88B4;
    case 0x7F2F88B8u: goto label_7F2F88B8;
    case 0x7F2F88BCu: goto label_7F2F88BC;
    case 0x7F2F88C0u: goto label_7F2F88C0;
    case 0x7F2F88C4u: goto label_7F2F88C4;
    case 0x7F2F88C8u: goto label_7F2F88C8;
    case 0x7F2F88CCu: goto label_7F2F88CC;
    case 0x7F2F88D0u: goto label_7F2F88D0;
    case 0x7F2F88D4u: goto label_7F2F88D4;
    case 0x7F2F88D8u: goto label_7F2F88D8;
    case 0x7F2F88DCu: goto label_7F2F88DC;
    case 0x7F2F88E0u: goto label_7F2F88E0;
    case 0x7F2F88E4u: goto label_7F2F88E4;
    case 0x7F2F88E8u: goto label_7F2F88E8;
    case 0x7F2F88ECu: goto label_7F2F88EC;
    case 0x7F2F88F0u: goto label_7F2F88F0;
    case 0x7F2F88F4u: goto label_7F2F88F4;
    case 0x7F2F88F8u: goto label_7F2F88F8;
    case 0x7F2F88FCu: goto label_7F2F88FC;
    case 0x7F2F8900u: goto label_7F2F8900;
    case 0x7F2F8904u: goto label_7F2F8904;
    case 0x7F2F8908u: goto label_7F2F8908;
    case 0x7F2F890Cu: goto label_7F2F890C;
    case 0x7F2F8910u: goto label_7F2F8910;
    case 0x7F2F8914u: goto label_7F2F8914;
    case 0x7F2F8918u: goto label_7F2F8918;
    case 0x7F2F891Cu: goto label_7F2F891C;
    case 0x7F2F8920u: goto label_7F2F8920;
    case 0x7F2F8924u: goto label_7F2F8924;
    case 0x7F2F8928u: goto label_7F2F8928;
    case 0x7F2F892Cu: goto label_7F2F892C;
    case 0x7F2F8930u: goto label_7F2F8930;
    case 0x7F2F8934u: goto label_7F2F8934;
    case 0x7F2F8938u: goto label_7F2F8938;
    case 0x7F2F893Cu: goto label_7F2F893C;
    case 0x7F2F8940u: goto label_7F2F8940;
    case 0x7F2F8944u: goto label_7F2F8944;
    case 0x7F2F8948u: goto label_7F2F8948;
    case 0x7F2F894Cu: goto label_7F2F894C;
    case 0x7F2F8950u: goto label_7F2F8950;
    case 0x7F2F8954u: goto label_7F2F8954;
    case 0x7F2F8958u: goto label_7F2F8958;
    case 0x7F2F895Cu: goto label_7F2F895C;
    case 0x7F2F8960u: goto label_7F2F8960;
    case 0x7F2F8964u: goto label_7F2F8964;
    case 0x7F2F8968u: goto label_7F2F8968;
    case 0x7F2F896Cu: goto label_7F2F896C;
    case 0x7F2F8970u: goto label_7F2F8970;
    case 0x7F2F8974u: goto label_7F2F8974;
    case 0x7F2F8978u: goto label_7F2F8978;
    case 0x7F2F897Cu: goto label_7F2F897C;
    case 0x7F2F8980u: goto label_7F2F8980;
    case 0x7F2F8984u: goto label_7F2F8984;
    case 0x7F2F8988u: goto label_7F2F8988;
    case 0x7F2F898Cu: goto label_7F2F898C;
    case 0x7F2F8990u: goto label_7F2F8990;
    case 0x7F2F8994u: goto label_7F2F8994;
    case 0x7F2F8998u: goto label_7F2F8998;
    case 0x7F2F899Cu: goto label_7F2F899C;
    case 0x7F2F89A0u: goto label_7F2F89A0;
    case 0x7F2F89A4u: goto label_7F2F89A4;
    case 0x7F2F89A8u: goto label_7F2F89A8;
    case 0x7F2F89ACu: goto label_7F2F89AC;
    case 0x7F2F89B0u: goto label_7F2F89B0;
    case 0x7F2F89B4u: goto label_7F2F89B4;
    case 0x7F2F89B8u: goto label_7F2F89B8;
    case 0x7F2F89BCu: goto label_7F2F89BC;
    case 0x7F2F89C0u: goto label_7F2F89C0;
    case 0x7F2F89C4u: goto label_7F2F89C4;
    case 0x7F2F89C8u: goto label_7F2F89C8;
    case 0x7F2F89CCu: goto label_7F2F89CC;
    case 0x7F2F89D0u: goto label_7F2F89D0;
    case 0x7F2F89D4u: goto label_7F2F89D4;
    case 0x7F2F89D8u: goto label_7F2F89D8;
    case 0x7F2F89DCu: goto label_7F2F89DC;
    case 0x7F2F89E0u: goto label_7F2F89E0;
    case 0x7F2F89E4u: goto label_7F2F89E4;
    case 0x7F2F89E8u: goto label_7F2F89E8;
    case 0x7F2F89ECu: goto label_7F2F89EC;
    case 0x7F2F89F0u: goto label_7F2F89F0;
    case 0x7F2F89F4u: goto label_7F2F89F4;
    case 0x7F2F89F8u: goto label_7F2F89F8;
    case 0x7F2F89FCu: goto label_7F2F89FC;
    case 0x7F2F8A00u: goto label_7F2F8A00;
    case 0x7F2F8A04u: goto label_7F2F8A04;
    case 0x7F2F8A08u: goto label_7F2F8A08;
    case 0x7F2F8A0Cu: goto label_7F2F8A0C;
    case 0x7F2F8A10u: goto label_7F2F8A10;
    case 0x7F2F8A14u: goto label_7F2F8A14;
    case 0x7F2F8A18u: goto label_7F2F8A18;
    case 0x7F2F8A1Cu: goto label_7F2F8A1C;
    case 0x7F2F8A20u: goto label_7F2F8A20;
    case 0x7F2F8A24u: goto label_7F2F8A24;
    case 0x7F2F8A28u: goto label_7F2F8A28;
    case 0x7F2F8A2Cu: goto label_7F2F8A2C;
    case 0x7F2F8A30u: goto label_7F2F8A30;
    case 0x7F2F8A34u: goto label_7F2F8A34;
    case 0x7F2F8A38u: goto label_7F2F8A38;
    case 0x7F2F8A3Cu: goto label_7F2F8A3C;
    case 0x7F2F8A40u: goto label_7F2F8A40;
    case 0x7F2F8A44u: goto label_7F2F8A44;
    case 0x7F2F8A48u: goto label_7F2F8A48;
    case 0x7F2F8A4Cu: goto label_7F2F8A4C;
    case 0x7F2F8A50u: goto label_7F2F8A50;
    case 0x7F2F8A54u: goto label_7F2F8A54;
    case 0x7F2F8A58u: goto label_7F2F8A58;
    case 0x7F2F8A5Cu: goto label_7F2F8A5C;
    case 0x7F2F8A60u: goto label_7F2F8A60;
    case 0x7F2F8A64u: goto label_7F2F8A64;
    case 0x7F2F8A68u: goto label_7F2F8A68;
    case 0x7F2F8A6Cu: goto label_7F2F8A6C;
    case 0x7F2F8A70u: goto label_7F2F8A70;
    case 0x7F2F8A74u: goto label_7F2F8A74;
    case 0x7F2F8A78u: goto label_7F2F8A78;
    case 0x7F2F8A7Cu: goto label_7F2F8A7C;
    case 0x7F2F8A80u: goto label_7F2F8A80;
    case 0x7F2F8A84u: goto label_7F2F8A84;
    case 0x7F2F8A88u: goto label_7F2F8A88;
    case 0x7F2F8A8Cu: goto label_7F2F8A8C;
    case 0x7F2F8A90u: goto label_7F2F8A90;
    case 0x7F2F8A94u: goto label_7F2F8A94;
    case 0x7F2F8A98u: goto label_7F2F8A98;
    case 0x7F2F8A9Cu: goto label_7F2F8A9C;
    case 0x7F2F8AA0u: goto label_7F2F8AA0;
    case 0x7F2F8AA4u: goto label_7F2F8AA4;
    case 0x7F2F8AA8u: goto label_7F2F8AA8;
    case 0x7F2F8AACu: goto label_7F2F8AAC;
    case 0x7F2F8AB0u: goto label_7F2F8AB0;
    case 0x7F2F8AB4u: goto label_7F2F8AB4;
    case 0x7F2F8AB8u: goto label_7F2F8AB8;
    case 0x7F2F8ABCu: goto label_7F2F8ABC;
    case 0x7F2F8AC0u: goto label_7F2F8AC0;
    case 0x7F2F8AC4u: goto label_7F2F8AC4;
    case 0x7F2F8AC8u: goto label_7F2F8AC8;
    case 0x7F2F8ACCu: goto label_7F2F8ACC;
    case 0x7F2F8AD0u: goto label_7F2F8AD0;
    case 0x7F2F8AD4u: goto label_7F2F8AD4;
    case 0x7F2F8AD8u: goto label_7F2F8AD8;
    case 0x7F2F8ADCu: goto label_7F2F8ADC;
    case 0x7F2F8AE0u: goto label_7F2F8AE0;
    case 0x7F2F8AE4u: goto label_7F2F8AE4;
    case 0x7F2F8AE8u: goto label_7F2F8AE8;
    case 0x7F2F8AECu: goto label_7F2F8AEC;
    case 0x7F2F8AF0u: goto label_7F2F8AF0;
    case 0x7F2F8AF4u: goto label_7F2F8AF4;
    case 0x7F2F8AF8u: goto label_7F2F8AF8;
    case 0x7F2F8AFCu: goto label_7F2F8AFC;
    case 0x7F2F8B00u: goto label_7F2F8B00;
    case 0x7F2F8B04u: goto label_7F2F8B04;
    case 0x7F2F8B08u: goto label_7F2F8B08;
    case 0x7F2F8B0Cu: goto label_7F2F8B0C;
    case 0x7F2F8B10u: goto label_7F2F8B10;
    case 0x7F2F8B14u: goto label_7F2F8B14;
    case 0x7F2F8B18u: goto label_7F2F8B18;
    case 0x7F2F8B1Cu: goto label_7F2F8B1C;
    case 0x7F2F8B20u: goto label_7F2F8B20;
    case 0x7F2F8B24u: goto label_7F2F8B24;
    case 0x7F2F8B28u: goto label_7F2F8B28;
    case 0x7F2F8B2Cu: goto label_7F2F8B2C;
    case 0x7F2F8B30u: goto label_7F2F8B30;
    case 0x7F2F8B34u: goto label_7F2F8B34;
    case 0x7F2F8B38u: goto label_7F2F8B38;
    case 0x7F2F8B3Cu: goto label_7F2F8B3C;
    case 0x7F2F8B40u: goto label_7F2F8B40;
    case 0x7F2F8B44u: goto label_7F2F8B44;
    case 0x7F2F8B48u: goto label_7F2F8B48;
    case 0x7F2F8B4Cu: goto label_7F2F8B4C;
    case 0x7F2F8B50u: goto label_7F2F8B50;
    case 0x7F2F8B54u: goto label_7F2F8B54;
    case 0x7F2F8B58u: goto label_7F2F8B58;
    case 0x7F2F8B5Cu: goto label_7F2F8B5C;
    case 0x7F2F8B60u: goto label_7F2F8B60;
    case 0x7F2F8B64u: goto label_7F2F8B64;
    case 0x7F2F8B68u: goto label_7F2F8B68;
    case 0x7F2F8B6Cu: goto label_7F2F8B6C;
    case 0x7F2F8B70u: goto label_7F2F8B70;
    case 0x7F2F8B74u: goto label_7F2F8B74;
    case 0x7F2F8B78u: goto label_7F2F8B78;
    case 0x7F2F8B7Cu: goto label_7F2F8B7C;
    case 0x7F2F8B80u: goto label_7F2F8B80;
    case 0x7F2F8B84u: goto label_7F2F8B84;
    case 0x7F2F8B88u: goto label_7F2F8B88;
    case 0x7F2F8B8Cu: goto label_7F2F8B8C;
    case 0x7F2F8B90u: goto label_7F2F8B90;
    case 0x7F2F8B94u: goto label_7F2F8B94;
    case 0x7F2F8B98u: goto label_7F2F8B98;
    case 0x7F2F8B9Cu: goto label_7F2F8B9C;
    case 0x7F2F8BA0u: goto label_7F2F8BA0;
    case 0x7F2F8BA4u: goto label_7F2F8BA4;
    case 0x7F2F8BA8u: goto label_7F2F8BA8;
    case 0x7F2F8BACu: goto label_7F2F8BAC;
    case 0x7F2F8BB0u: goto label_7F2F8BB0;
    case 0x7F2F8BB4u: goto label_7F2F8BB4;
    case 0x7F2F8BB8u: goto label_7F2F8BB8;
    case 0x7F2F8BBCu: goto label_7F2F8BBC;
    case 0x7F2F8BC0u: goto label_7F2F8BC0;
    case 0x7F2F8BC4u: goto label_7F2F8BC4;
    case 0x7F2F8BC8u: goto label_7F2F8BC8;
    case 0x7F2F8BCCu: goto label_7F2F8BCC;
    case 0x7F2F8BD0u: goto label_7F2F8BD0;
    case 0x7F2F8BD4u: goto label_7F2F8BD4;
    case 0x7F2F8BD8u: goto label_7F2F8BD8;
    case 0x7F2F8BDCu: goto label_7F2F8BDC;
    case 0x7F2F8BE0u: goto label_7F2F8BE0;
    case 0x7F2F8BE4u: goto label_7F2F8BE4;
    case 0x7F2F8BE8u: goto label_7F2F8BE8;
    case 0x7F2F8BECu: goto label_7F2F8BEC;
    case 0x7F2F8BF0u: goto label_7F2F8BF0;
    case 0x7F2F8BF4u: goto label_7F2F8BF4;
    case 0x7F2F8BF8u: goto label_7F2F8BF8;
    case 0x7F2F8BFCu: goto label_7F2F8BFC;
    case 0x7F2F8C00u: goto label_7F2F8C00;
    case 0x7F2F8C04u: goto label_7F2F8C04;
    case 0x7F2F8C08u: goto label_7F2F8C08;
    case 0x7F2F8C0Cu: goto label_7F2F8C0C;
    case 0x7F2F8C10u: goto label_7F2F8C10;
    case 0x7F2F8C14u: goto label_7F2F8C14;
    case 0x7F2F8C18u: goto label_7F2F8C18;
    case 0x7F2F8C1Cu: goto label_7F2F8C1C;
    case 0x7F2F8C20u: goto label_7F2F8C20;
    case 0x7F2F8C24u: goto label_7F2F8C24;
    case 0x7F2F8C28u: goto label_7F2F8C28;
    case 0x7F2F8C2Cu: goto label_7F2F8C2C;
    case 0x7F2F8C30u: goto label_7F2F8C30;
    case 0x7F2F8C34u: goto label_7F2F8C34;
    case 0x7F2F8C38u: goto label_7F2F8C38;
    case 0x7F2F8C3Cu: goto label_7F2F8C3C;
    case 0x7F2F8C40u: goto label_7F2F8C40;
    case 0x7F2F8C44u: goto label_7F2F8C44;
    case 0x7F2F8C48u: goto label_7F2F8C48;
    case 0x7F2F8C4Cu: goto label_7F2F8C4C;
    case 0x7F2F8C50u: goto label_7F2F8C50;
    case 0x7F2F8C54u: goto label_7F2F8C54;
    case 0x7F2F8C58u: goto label_7F2F8C58;
    case 0x7F2F8C5Cu: goto label_7F2F8C5C;
    case 0x7F2F8C60u: goto label_7F2F8C60;
    case 0x7F2F8C64u: goto label_7F2F8C64;
    case 0x7F2F8C68u: goto label_7F2F8C68;
    case 0x7F2F8C6Cu: goto label_7F2F8C6C;
    case 0x7F2F8C70u: goto label_7F2F8C70;
    case 0x7F2F8C74u: goto label_7F2F8C74;
    case 0x7F2F8C78u: goto label_7F2F8C78;
    case 0x7F2F8C7Cu: goto label_7F2F8C7C;
    case 0x7F2F8C80u: goto label_7F2F8C80;
    case 0x7F2F8C84u: goto label_7F2F8C84;
    case 0x7F2F8C88u: goto label_7F2F8C88;
    case 0x7F2F8C8Cu: goto label_7F2F8C8C;
    case 0x7F2F8C90u: goto label_7F2F8C90;
    case 0x7F2F8C94u: goto label_7F2F8C94;
    case 0x7F2F8C98u: goto label_7F2F8C98;
    case 0x7F2F8C9Cu: goto label_7F2F8C9C;
    case 0x7F2F8CA0u: goto label_7F2F8CA0;
    case 0x7F2F8CA4u: goto label_7F2F8CA4;
    case 0x7F2F8CA8u: goto label_7F2F8CA8;
    case 0x7F2F8CACu: goto label_7F2F8CAC;
    case 0x7F2F8CB0u: goto label_7F2F8CB0;
    case 0x7F2F8CB4u: goto label_7F2F8CB4;
    case 0x7F2F8CB8u: goto label_7F2F8CB8;
    case 0x7F2F8CBCu: goto label_7F2F8CBC;
    case 0x7F2F8CC0u: goto label_7F2F8CC0;
    case 0x7F2F8CC4u: goto label_7F2F8CC4;
    case 0x7F2F8CC8u: goto label_7F2F8CC8;
    case 0x7F2F8CCCu: goto label_7F2F8CCC;
    case 0x7F2F8CD0u: goto label_7F2F8CD0;
    case 0x7F2F8CD4u: goto label_7F2F8CD4;
    case 0x7F2F8CD8u: goto label_7F2F8CD8;
    case 0x7F2F8CDCu: goto label_7F2F8CDC;
    case 0x7F2F8CE0u: goto label_7F2F8CE0;
    case 0x7F2F8CE4u: goto label_7F2F8CE4;
    case 0x7F2F8CE8u: goto label_7F2F8CE8;
    case 0x7F2F8CECu: goto label_7F2F8CEC;
    case 0x7F2F8CF0u: goto label_7F2F8CF0;
    case 0x7F2F8CF4u: goto label_7F2F8CF4;
    case 0x7F2F8CF8u: goto label_7F2F8CF8;
    case 0x7F2F8CFCu: goto label_7F2F8CFC;
    case 0x7F2F8D00u: goto label_7F2F8D00;
    case 0x7F2F8D04u: goto label_7F2F8D04;
    case 0x7F2F8D08u: goto label_7F2F8D08;
    case 0x7F2F8D0Cu: goto label_7F2F8D0C;
    case 0x7F2F8D10u: goto label_7F2F8D10;
    case 0x7F2F8D14u: goto label_7F2F8D14;
    case 0x7F2F8D18u: goto label_7F2F8D18;
    case 0x7F2F8D1Cu: goto label_7F2F8D1C;
    case 0x7F2F8D20u: goto label_7F2F8D20;
    case 0x7F2F8D24u: goto label_7F2F8D24;
    case 0x7F2F8D28u: goto label_7F2F8D28;
    case 0x7F2F8D2Cu: goto label_7F2F8D2C;
    case 0x7F2F8D30u: goto label_7F2F8D30;
    case 0x7F2F8D34u: goto label_7F2F8D34;
    case 0x7F2F8D38u: goto label_7F2F8D38;
    case 0x7F2F8D3Cu: goto label_7F2F8D3C;
    case 0x7F2F8D40u: goto label_7F2F8D40;
    case 0x7F2F8D44u: goto label_7F2F8D44;
    case 0x7F2F8D48u: goto label_7F2F8D48;
    case 0x7F2F8D4Cu: goto label_7F2F8D4C;
    case 0x7F2F8D50u: goto label_7F2F8D50;
    case 0x7F2F8D54u: goto label_7F2F8D54;
    case 0x7F2F8D58u: goto label_7F2F8D58;
    case 0x7F2F8D5Cu: goto label_7F2F8D5C;
    case 0x7F2F8D60u: goto label_7F2F8D60;
    case 0x7F2F8D64u: goto label_7F2F8D64;
    case 0x7F2F8D68u: goto label_7F2F8D68;
    case 0x7F2F8D6Cu: goto label_7F2F8D6C;
    case 0x7F2F8D70u: goto label_7F2F8D70;
    case 0x7F2F8D74u: goto label_7F2F8D74;
    case 0x7F2F8D78u: goto label_7F2F8D78;
    case 0x7F2F8D7Cu: goto label_7F2F8D7C;
    case 0x7F2F8D80u: goto label_7F2F8D80;
    case 0x7F2F8D84u: goto label_7F2F8D84;
    case 0x7F2F8D88u: goto label_7F2F8D88;
    case 0x7F2F8D8Cu: goto label_7F2F8D8C;
    case 0x7F2F8D90u: goto label_7F2F8D90;
    case 0x7F2F8D94u: goto label_7F2F8D94;
    case 0x7F2F8D98u: goto label_7F2F8D98;
    case 0x7F2F8D9Cu: goto label_7F2F8D9C;
    case 0x7F2F8DA0u: goto label_7F2F8DA0;
    case 0x7F2F8DA4u: goto label_7F2F8DA4;
    case 0x7F2F8DA8u: goto label_7F2F8DA8;
    case 0x7F2F8DACu: goto label_7F2F8DAC;
    case 0x7F2F8DB0u: goto label_7F2F8DB0;
    case 0x7F2F8DB4u: goto label_7F2F8DB4;
    case 0x7F2F8DB8u: goto label_7F2F8DB8;
    case 0x7F2F8DBCu: goto label_7F2F8DBC;
    case 0x7F2F8DC0u: goto label_7F2F8DC0;
    case 0x7F2F8DC4u: goto label_7F2F8DC4;
    case 0x7F2F8DC8u: goto label_7F2F8DC8;
    case 0x7F2F8DCCu: goto label_7F2F8DCC;
    case 0x7F2F8DD0u: goto label_7F2F8DD0;
    case 0x7F2F8DD4u: goto label_7F2F8DD4;
    case 0x7F2F8DD8u: goto label_7F2F8DD8;
    case 0x7F2F8DDCu: goto label_7F2F8DDC;
    case 0x7F2F8DE0u: goto label_7F2F8DE0;
    case 0x7F2F8DE4u: goto label_7F2F8DE4;
    case 0x7F2F8DE8u: goto label_7F2F8DE8;
    case 0x7F2F8DECu: goto label_7F2F8DEC;
    case 0x7F2F8DF0u: goto label_7F2F8DF0;
    case 0x7F2F8DF4u: goto label_7F2F8DF4;
    case 0x7F2F8DF8u: goto label_7F2F8DF8;
    case 0x7F2F8DFCu: goto label_7F2F8DFC;
    case 0x7F2F8E00u: goto label_7F2F8E00;
    case 0x7F2F8E04u: goto label_7F2F8E04;
    case 0x7F2F8E08u: goto label_7F2F8E08;
    case 0x7F2F8E0Cu: goto label_7F2F8E0C;
    case 0x7F2F8E10u: goto label_7F2F8E10;
    case 0x7F2F8E14u: goto label_7F2F8E14;
    case 0x7F2F8E18u: goto label_7F2F8E18;
    case 0x7F2F8E1Cu: goto label_7F2F8E1C;
    case 0x7F2F8E20u: goto label_7F2F8E20;
    case 0x7F2F8E24u: goto label_7F2F8E24;
    case 0x7F2F8E28u: goto label_7F2F8E28;
    case 0x7F2F8E2Cu: goto label_7F2F8E2C;
    case 0x7F2F8E30u: goto label_7F2F8E30;
    case 0x7F2F8E34u: goto label_7F2F8E34;
    case 0x7F2F8E38u: goto label_7F2F8E38;
    case 0x7F2F8E3Cu: goto label_7F2F8E3C;
    case 0x7F2F8E40u: goto label_7F2F8E40;
    case 0x7F2F8E44u: goto label_7F2F8E44;
    case 0x7F2F8E48u: goto label_7F2F8E48;
    case 0x7F2F8E4Cu: goto label_7F2F8E4C;
    case 0x7F2F8E50u: goto label_7F2F8E50;
    case 0x7F2F8E54u: goto label_7F2F8E54;
    case 0x7F2F8E58u: goto label_7F2F8E58;
    case 0x7F2F8E5Cu: goto label_7F2F8E5C;
    case 0x7F2F8E60u: goto label_7F2F8E60;
    case 0x7F2F8E64u: goto label_7F2F8E64;
    case 0x7F2F8E68u: goto label_7F2F8E68;
    case 0x7F2F8E6Cu: goto label_7F2F8E6C;
    case 0x7F2F8E70u: goto label_7F2F8E70;
    case 0x7F2F8E74u: goto label_7F2F8E74;
    case 0x7F2F8E78u: goto label_7F2F8E78;
    case 0x7F2F8E7Cu: goto label_7F2F8E7C;
    case 0x7F2F8E80u: goto label_7F2F8E80;
    case 0x7F2F8E84u: goto label_7F2F8E84;
    case 0x7F2F8E88u: goto label_7F2F8E88;
    case 0x7F2F8E8Cu: goto label_7F2F8E8C;
    case 0x7F2F8E90u: goto label_7F2F8E90;
    case 0x7F2F8E94u: goto label_7F2F8E94;
    case 0x7F2F8E98u: goto label_7F2F8E98;
    case 0x7F2F8E9Cu: goto label_7F2F8E9C;
    case 0x7F2F8EA0u: goto label_7F2F8EA0;
    case 0x7F2F8EA4u: goto label_7F2F8EA4;
    case 0x7F2F8EA8u: goto label_7F2F8EA8;
    case 0x7F2F8EACu: goto label_7F2F8EAC;
    case 0x7F2F8EB0u: goto label_7F2F8EB0;
    case 0x7F2F8EB4u: goto label_7F2F8EB4;
    case 0x7F2F8EB8u: goto label_7F2F8EB8;
    case 0x7F2F8EBCu: goto label_7F2F8EBC;
    case 0x7F2F8EC0u: goto label_7F2F8EC0;
    case 0x7F2F8EC4u: goto label_7F2F8EC4;
    case 0x7F2F8EC8u: goto label_7F2F8EC8;
    case 0x7F2F8ECCu: goto label_7F2F8ECC;
    case 0x7F2F8ED0u: goto label_7F2F8ED0;
    case 0x7F2F8ED4u: goto label_7F2F8ED4;
    case 0x7F2F8ED8u: goto label_7F2F8ED8;
    case 0x7F2F8EDCu: goto label_7F2F8EDC;
    case 0x7F2F8EE0u: goto label_7F2F8EE0;
    case 0x7F2F8EE4u: goto label_7F2F8EE4;
    case 0x7F2F8EE8u: goto label_7F2F8EE8;
    case 0x7F2F8EECu: goto label_7F2F8EEC;
    case 0x7F2F8EF0u: goto label_7F2F8EF0;
    case 0x7F2F8EF4u: goto label_7F2F8EF4;
    case 0x7F2F8EF8u: goto label_7F2F8EF8;
    case 0x7F2F8EFCu: goto label_7F2F8EFC;
    case 0x7F2F8F00u: goto label_7F2F8F00;
    case 0x7F2F8F04u: goto label_7F2F8F04;
    case 0x7F2F8F08u: goto label_7F2F8F08;
    case 0x7F2F8F0Cu: goto label_7F2F8F0C;
    case 0x7F2F8F10u: goto label_7F2F8F10;
    case 0x7F2F8F14u: goto label_7F2F8F14;
    case 0x7F2F8F18u: goto label_7F2F8F18;
    case 0x7F2F8F1Cu: goto label_7F2F8F1C;
    case 0x7F2F8F20u: goto label_7F2F8F20;
    case 0x7F2F8F24u: goto label_7F2F8F24;
    case 0x7F2F8F28u: goto label_7F2F8F28;
    case 0x7F2F8F2Cu: goto label_7F2F8F2C;
    case 0x7F2F8F30u: goto label_7F2F8F30;
    case 0x7F2F8F34u: goto label_7F2F8F34;
    case 0x7F2F8F38u: goto label_7F2F8F38;
    case 0x7F2F8F3Cu: goto label_7F2F8F3C;
    case 0x7F2F8F40u: goto label_7F2F8F40;
    case 0x7F2F8F44u: goto label_7F2F8F44;
    case 0x7F2F8F48u: goto label_7F2F8F48;
    case 0x7F2F8F4Cu: goto label_7F2F8F4C;
    case 0x7F2F8F50u: goto label_7F2F8F50;
    case 0x7F2F8F54u: goto label_7F2F8F54;
    case 0x7F2F8F58u: goto label_7F2F8F58;
    case 0x7F2F8F5Cu: goto label_7F2F8F5C;
    case 0x7F2F8F60u: goto label_7F2F8F60;
    case 0x7F2F8F64u: goto label_7F2F8F64;
    case 0x7F2F8F68u: goto label_7F2F8F68;
    case 0x7F2F8F6Cu: goto label_7F2F8F6C;
    case 0x7F2F8F70u: goto label_7F2F8F70;
    case 0x7F2F8F74u: goto label_7F2F8F74;
    case 0x7F2F8F78u: goto label_7F2F8F78;
    case 0x7F2F8F7Cu: goto label_7F2F8F7C;
    case 0x7F2F8F80u: goto label_7F2F8F80;
    case 0x7F2F8F84u: goto label_7F2F8F84;
    case 0x7F2F8F88u: goto label_7F2F8F88;
    case 0x7F2F8F8Cu: goto label_7F2F8F8C;
    case 0x7F2F8F90u: goto label_7F2F8F90;
    case 0x7F2F8F94u: goto label_7F2F8F94;
    case 0x7F2F8F98u: goto label_7F2F8F98;
    case 0x7F2F8F9Cu: goto label_7F2F8F9C;
    case 0x7F2F8FA0u: goto label_7F2F8FA0;
    case 0x7F2F8FA4u: goto label_7F2F8FA4;
    case 0x7F2F8FA8u: goto label_7F2F8FA8;
    case 0x7F2F8FACu: goto label_7F2F8FAC;
    case 0x7F2F8FB0u: goto label_7F2F8FB0;
    case 0x7F2F8FB4u: goto label_7F2F8FB4;
    case 0x7F2F8FB8u: goto label_7F2F8FB8;
    case 0x7F2F8FBCu: goto label_7F2F8FBC;
    case 0x7F2F8FC0u: goto label_7F2F8FC0;
    case 0x7F2F8FC4u: goto label_7F2F8FC4;
    case 0x7F2F8FC8u: goto label_7F2F8FC8;
    case 0x7F2F8FCCu: goto label_7F2F8FCC;
    case 0x7F2F8FD0u: goto label_7F2F8FD0;
    case 0x7F2F8FD4u: goto label_7F2F8FD4;
    case 0x7F2F8FD8u: goto label_7F2F8FD8;
    case 0x7F2F8FDCu: goto label_7F2F8FDC;
    case 0x7F2F8FE0u: goto label_7F2F8FE0;
    case 0x7F2F8FE4u: goto label_7F2F8FE4;
    case 0x7F2F8FE8u: goto label_7F2F8FE8;
    case 0x7F2F8FECu: goto label_7F2F8FEC;
    case 0x7F2F8FF0u: goto label_7F2F8FF0;
    case 0x7F2F8FF4u: goto label_7F2F8FF4;
    case 0x7F2F8FF8u: goto label_7F2F8FF8;
    case 0x7F2F8FFCu: goto label_7F2F8FFC;
    case 0x7F2F9000u: goto label_7F2F9000;
    case 0x7F2F9004u: goto label_7F2F9004;
    case 0x7F2F9008u: goto label_7F2F9008;
    case 0x7F2F900Cu: goto label_7F2F900C;
    case 0x7F2F9010u: goto label_7F2F9010;
    case 0x7F2F9014u: goto label_7F2F9014;
    case 0x7F2F9018u: goto label_7F2F9018;
    case 0x7F2F901Cu: goto label_7F2F901C;
    case 0x7F2F9020u: goto label_7F2F9020;
    case 0x7F2F9024u: goto label_7F2F9024;
    case 0x7F2F9028u: goto label_7F2F9028;
    case 0x7F2F902Cu: goto label_7F2F902C;
    case 0x7F2F9030u: goto label_7F2F9030;
    case 0x7F2F9034u: goto label_7F2F9034;
    case 0x7F2F9038u: goto label_7F2F9038;
    case 0x7F2F903Cu: goto label_7F2F903C;
    case 0x7F2F9040u: goto label_7F2F9040;
    case 0x7F2F9044u: goto label_7F2F9044;
    case 0x7F2F9048u: goto label_7F2F9048;
    case 0x7F2F904Cu: goto label_7F2F904C;
    case 0x7F2F9050u: goto label_7F2F9050;
    case 0x7F2F9054u: goto label_7F2F9054;
    case 0x7F2F9058u: goto label_7F2F9058;
    case 0x7F2F905Cu: goto label_7F2F905C;
    case 0x7F2F9060u: goto label_7F2F9060;
    case 0x7F2F9064u: goto label_7F2F9064;
    case 0x7F2F9068u: goto label_7F2F9068;
    case 0x7F2F906Cu: goto label_7F2F906C;
    case 0x7F2F9070u: goto label_7F2F9070;
    case 0x7F2F9074u: goto label_7F2F9074;
    case 0x7F2F9078u: goto label_7F2F9078;
    case 0x7F2F907Cu: goto label_7F2F907C;
    case 0x7F2F9080u: goto label_7F2F9080;
    case 0x7F2F9084u: goto label_7F2F9084;
    case 0x7F2F9088u: goto label_7F2F9088;
    case 0x7F2F908Cu: goto label_7F2F908C;
    case 0x7F2F9090u: goto label_7F2F9090;
    case 0x7F2F9094u: goto label_7F2F9094;
    case 0x7F2F9098u: goto label_7F2F9098;
    case 0x7F2F909Cu: goto label_7F2F909C;
    case 0x7F2F90A0u: goto label_7F2F90A0;
    case 0x7F2F90A4u: goto label_7F2F90A4;
    case 0x7F2F90A8u: goto label_7F2F90A8;
    case 0x7F2F90ACu: goto label_7F2F90AC;
    case 0x7F2F90B0u: goto label_7F2F90B0;
    case 0x7F2F90B4u: goto label_7F2F90B4;
    case 0x7F2F90B8u: goto label_7F2F90B8;
    case 0x7F2F90BCu: goto label_7F2F90BC;
    case 0x7F2F90C0u: goto label_7F2F90C0;
    case 0x7F2F90C4u: goto label_7F2F90C4;
    case 0x7F2F90C8u: goto label_7F2F90C8;
    case 0x7F2F90CCu: goto label_7F2F90CC;
    case 0x7F2F90D0u: goto label_7F2F90D0;
    case 0x7F2F90D4u: goto label_7F2F90D4;
    case 0x7F2F90D8u: goto label_7F2F90D8;
    case 0x7F2F90DCu: goto label_7F2F90DC;
    case 0x7F2F90E0u: goto label_7F2F90E0;
    case 0x7F2F90E4u: goto label_7F2F90E4;
    case 0x7F2F90E8u: goto label_7F2F90E8;
    case 0x7F2F90ECu: goto label_7F2F90EC;
    case 0x7F2F90F0u: goto label_7F2F90F0;
    case 0x7F2F90F4u: goto label_7F2F90F4;
    case 0x7F2F90F8u: goto label_7F2F90F8;
    case 0x7F2F90FCu: goto label_7F2F90FC;
    case 0x7F2F9100u: goto label_7F2F9100;
    case 0x7F2F9104u: goto label_7F2F9104;
    case 0x7F2F9108u: goto label_7F2F9108;
    case 0x7F2F910Cu: goto label_7F2F910C;
    case 0x7F2F9110u: goto label_7F2F9110;
    case 0x7F2F9114u: goto label_7F2F9114;
    case 0x7F2F9118u: goto label_7F2F9118;
    case 0x7F2F911Cu: goto label_7F2F911C;
    case 0x7F2F9120u: goto label_7F2F9120;
    case 0x7F2F9124u: goto label_7F2F9124;
    case 0x7F2F9128u: goto label_7F2F9128;
    case 0x7F2F912Cu: goto label_7F2F912C;
    case 0x7F2F9130u: goto label_7F2F9130;
    case 0x7F2F9134u: goto label_7F2F9134;
    case 0x7F2F9138u: goto label_7F2F9138;
    case 0x7F2F913Cu: goto label_7F2F913C;
    case 0x7F2F9140u: goto label_7F2F9140;
    case 0x7F2F9144u: goto label_7F2F9144;
    case 0x7F2F9148u: goto label_7F2F9148;
    case 0x7F2F914Cu: goto label_7F2F914C;
    case 0x7F2F9150u: goto label_7F2F9150;
    case 0x7F2F9154u: goto label_7F2F9154;
    case 0x7F2F9158u: goto label_7F2F9158;
    case 0x7F2F915Cu: goto label_7F2F915C;
    case 0x7F2F9160u: goto label_7F2F9160;
    case 0x7F2F9164u: goto label_7F2F9164;
    case 0x7F2F9168u: goto label_7F2F9168;
    case 0x7F2F916Cu: goto label_7F2F916C;
    case 0x7F2F9170u: goto label_7F2F9170;
    case 0x7F2F9174u: goto label_7F2F9174;
    case 0x7F2F9178u: goto label_7F2F9178;
    case 0x7F2F917Cu: goto label_7F2F917C;
    case 0x7F2F9180u: goto label_7F2F9180;
    case 0x7F2F9184u: goto label_7F2F9184;
    case 0x7F2F9188u: goto label_7F2F9188;
    case 0x7F2F918Cu: goto label_7F2F918C;
    case 0x7F2F9190u: goto label_7F2F9190;
    case 0x7F2F9194u: goto label_7F2F9194;
    case 0x7F2F9198u: goto label_7F2F9198;
    case 0x7F2F919Cu: goto label_7F2F919C;
    case 0x7F2F91A0u: goto label_7F2F91A0;
    case 0x7F2F91A4u: goto label_7F2F91A4;
    case 0x7F2F91A8u: goto label_7F2F91A8;
    case 0x7F2F91ACu: goto label_7F2F91AC;
    case 0x7F2F91B0u: goto label_7F2F91B0;
    case 0x7F2F91B4u: goto label_7F2F91B4;
    case 0x7F2F91B8u: goto label_7F2F91B8;
    case 0x7F2F91BCu: goto label_7F2F91BC;
    case 0x7F2F91C0u: goto label_7F2F91C0;
    case 0x7F2F91C4u: goto label_7F2F91C4;
    case 0x7F2F91C8u: goto label_7F2F91C8;
    case 0x7F2F91CCu: goto label_7F2F91CC;
    case 0x7F2F91D0u: goto label_7F2F91D0;
    case 0x7F2F91D4u: goto label_7F2F91D4;
    case 0x7F2F91D8u: goto label_7F2F91D8;
    case 0x7F2F91DCu: goto label_7F2F91DC;
    case 0x7F2F91E0u: goto label_7F2F91E0;
    case 0x7F2F91E4u: goto label_7F2F91E4;
    case 0x7F2F91E8u: goto label_7F2F91E8;
    case 0x7F2F91ECu: goto label_7F2F91EC;
    case 0x7F2F91F0u: goto label_7F2F91F0;
    case 0x7F2F91F4u: goto label_7F2F91F4;
    case 0x7F2F91F8u: goto label_7F2F91F8;
    case 0x7F2F91FCu: goto label_7F2F91FC;
    case 0x7F2F9200u: goto label_7F2F9200;
    case 0x7F2F9204u: goto label_7F2F9204;
    case 0x7F2F9208u: goto label_7F2F9208;
    case 0x7F2F920Cu: goto label_7F2F920C;
    case 0x7F2F9210u: goto label_7F2F9210;
    case 0x7F2F9214u: goto label_7F2F9214;
    case 0x7F2F9218u: goto label_7F2F9218;
    case 0x7F2F921Cu: goto label_7F2F921C;
    case 0x7F2F9220u: goto label_7F2F9220;
    case 0x7F2F9224u: goto label_7F2F9224;
    case 0x7F2F9228u: goto label_7F2F9228;
    case 0x7F2F922Cu: goto label_7F2F922C;
    case 0x7F2F9230u: goto label_7F2F9230;
    case 0x7F2F9234u: goto label_7F2F9234;
    case 0x7F2F9238u: goto label_7F2F9238;
    case 0x7F2F923Cu: goto label_7F2F923C;
    case 0x7F2F9240u: goto label_7F2F9240;
    case 0x7F2F9244u: goto label_7F2F9244;
    case 0x7F2F9248u: goto label_7F2F9248;
    case 0x7F2F924Cu: goto label_7F2F924C;
    case 0x7F2F9250u: goto label_7F2F9250;
    case 0x7F2F9254u: goto label_7F2F9254;
    case 0x7F2F9258u: goto label_7F2F9258;
    case 0x7F2F925Cu: goto label_7F2F925C;
    case 0x7F2F9260u: goto label_7F2F9260;
    case 0x7F2F9264u: goto label_7F2F9264;
    case 0x7F2F9268u: goto label_7F2F9268;
    case 0x7F2F926Cu: goto label_7F2F926C;
    case 0x7F2F9270u: goto label_7F2F9270;
    case 0x7F2F9274u: goto label_7F2F9274;
    case 0x7F2F9278u: goto label_7F2F9278;
    case 0x7F2F927Cu: goto label_7F2F927C;
    case 0x7F2F9280u: goto label_7F2F9280;
    case 0x7F2F9284u: goto label_7F2F9284;
    case 0x7F2F9288u: goto label_7F2F9288;
    case 0x7F2F928Cu: goto label_7F2F928C;
    case 0x7F2F9290u: goto label_7F2F9290;
    case 0x7F2F9294u: goto label_7F2F9294;
    case 0x7F2F9298u: goto label_7F2F9298;
    case 0x7F2F929Cu: goto label_7F2F929C;
    case 0x7F2F92A0u: goto label_7F2F92A0;
    case 0x7F2F92A4u: goto label_7F2F92A4;
    case 0x7F2F92A8u: goto label_7F2F92A8;
    case 0x7F2F92ACu: goto label_7F2F92AC;
    case 0x7F2F92B0u: goto label_7F2F92B0;
    case 0x7F2F92B4u: goto label_7F2F92B4;
    case 0x7F2F92B8u: goto label_7F2F92B8;
    case 0x7F2F92BCu: goto label_7F2F92BC;
    case 0x7F2F92C0u: goto label_7F2F92C0;
    case 0x7F2F92C4u: goto label_7F2F92C4;
    case 0x7F2F92C8u: goto label_7F2F92C8;
    case 0x7F2F92CCu: goto label_7F2F92CC;
    case 0x7F2F92D0u: goto label_7F2F92D0;
    case 0x7F2F92D4u: goto label_7F2F92D4;
    case 0x7F2F92D8u: goto label_7F2F92D8;
    case 0x7F2F92DCu: goto label_7F2F92DC;
    case 0x7F2F92E0u: goto label_7F2F92E0;
    case 0x7F2F92E4u: goto label_7F2F92E4;
    case 0x7F2F92E8u: goto label_7F2F92E8;
    case 0x7F2F92ECu: goto label_7F2F92EC;
    case 0x7F2F92F0u: goto label_7F2F92F0;
    case 0x7F2F92F4u: goto label_7F2F92F4;
    case 0x7F2F92F8u: goto label_7F2F92F8;
    case 0x7F2F92FCu: goto label_7F2F92FC;
    case 0x7F2F9300u: goto label_7F2F9300;
    case 0x7F2F9304u: goto label_7F2F9304;
    case 0x7F2F9308u: goto label_7F2F9308;
    case 0x7F2F930Cu: goto label_7F2F930C;
    case 0x7F2F9310u: goto label_7F2F9310;
    case 0x7F2F9314u: goto label_7F2F9314;
    case 0x7F2F9318u: goto label_7F2F9318;
    case 0x7F2F931Cu: goto label_7F2F931C;
    case 0x7F2F9320u: goto label_7F2F9320;
    case 0x7F2F9324u: goto label_7F2F9324;
    case 0x7F2F9328u: goto label_7F2F9328;
    case 0x7F2F932Cu: goto label_7F2F932C;
    case 0x7F2F9330u: goto label_7F2F9330;
    case 0x7F2F9334u: goto label_7F2F9334;
    case 0x7F2F9338u: goto label_7F2F9338;
    case 0x7F2F933Cu: goto label_7F2F933C;
    case 0x7F2F9340u: goto label_7F2F9340;
    case 0x7F2F9344u: goto label_7F2F9344;
    case 0x7F2F9348u: goto label_7F2F9348;
    case 0x7F2F934Cu: goto label_7F2F934C;
    case 0x7F2F9350u: goto label_7F2F9350;
    case 0x7F2F9354u: goto label_7F2F9354;
    case 0x7F2F9358u: goto label_7F2F9358;
    case 0x7F2F935Cu: goto label_7F2F935C;
    case 0x7F2F9360u: goto label_7F2F9360;
    case 0x7F2F9364u: goto label_7F2F9364;
    case 0x7F2F9368u: goto label_7F2F9368;
    case 0x7F2F936Cu: goto label_7F2F936C;
    case 0x7F2F9370u: goto label_7F2F9370;
    case 0x7F2F9374u: goto label_7F2F9374;
    case 0x7F2F9378u: goto label_7F2F9378;
    case 0x7F2F937Cu: goto label_7F2F937C;
    case 0x7F2F9380u: goto label_7F2F9380;
    case 0x7F2F9384u: goto label_7F2F9384;
    case 0x7F2F9388u: goto label_7F2F9388;
    case 0x7F2F938Cu: goto label_7F2F938C;
    case 0x7F2F9390u: goto label_7F2F9390;
    case 0x7F2F9394u: goto label_7F2F9394;
    case 0x7F2F9398u: goto label_7F2F9398;
    case 0x7F2F939Cu: goto label_7F2F939C;
    case 0x7F2F93A0u: goto label_7F2F93A0;
    case 0x7F2F93A4u: goto label_7F2F93A4;
    case 0x7F2F93A8u: goto label_7F2F93A8;
    case 0x7F2F93ACu: goto label_7F2F93AC;
    case 0x7F2F93B0u: goto label_7F2F93B0;
    case 0x7F2F93B4u: goto label_7F2F93B4;
    case 0x7F2F93B8u: goto label_7F2F93B8;
    case 0x7F2F93BCu: goto label_7F2F93BC;
    case 0x7F2F93C0u: goto label_7F2F93C0;
    case 0x7F2F93C4u: goto label_7F2F93C4;
    case 0x7F2F93C8u: goto label_7F2F93C8;
    case 0x7F2F93CCu: goto label_7F2F93CC;
    case 0x7F2F93D0u: goto label_7F2F93D0;
    case 0x7F2F93D4u: goto label_7F2F93D4;
    case 0x7F2F93D8u: goto label_7F2F93D8;
    case 0x7F2F93DCu: goto label_7F2F93DC;
    case 0x7F2F93E0u: goto label_7F2F93E0;
    case 0x7F2F93E4u: goto label_7F2F93E4;
    case 0x7F2F93E8u: goto label_7F2F93E8;
    case 0x7F2F93ECu: goto label_7F2F93EC;
    case 0x7F2F93F0u: goto label_7F2F93F0;
    case 0x7F2F93F4u: goto label_7F2F93F4;
    case 0x7F2F93F8u: goto label_7F2F93F8;
    case 0x7F2F93FCu: goto label_7F2F93FC;
    case 0x7F2F9400u: goto label_7F2F9400;
    case 0x7F2F9404u: goto label_7F2F9404;
    case 0x7F2F9408u: goto label_7F2F9408;
    case 0x7F2F940Cu: goto label_7F2F940C;
    case 0x7F2F9410u: goto label_7F2F9410;
    case 0x7F2F9414u: goto label_7F2F9414;
    case 0x7F2F9418u: goto label_7F2F9418;
    case 0x7F2F941Cu: goto label_7F2F941C;
    case 0x7F2F9420u: goto label_7F2F9420;
    case 0x7F2F9424u: goto label_7F2F9424;
    case 0x7F2F9428u: goto label_7F2F9428;
    case 0x7F2F942Cu: goto label_7F2F942C;
    case 0x7F2F9430u: goto label_7F2F9430;
    case 0x7F2F9434u: goto label_7F2F9434;
    case 0x7F2F9438u: goto label_7F2F9438;
    case 0x7F2F943Cu: goto label_7F2F943C;
    case 0x7F2F9440u: goto label_7F2F9440;
    case 0x7F2F9444u: goto label_7F2F9444;
    case 0x7F2F9448u: goto label_7F2F9448;
    case 0x7F2F944Cu: goto label_7F2F944C;
    case 0x7F2F9450u: goto label_7F2F9450;
    case 0x7F2F9454u: goto label_7F2F9454;
    case 0x7F2F9458u: goto label_7F2F9458;
    case 0x7F2F945Cu: goto label_7F2F945C;
    case 0x7F2F9460u: goto label_7F2F9460;
    case 0x7F2F9464u: goto label_7F2F9464;
    case 0x7F2F9468u: goto label_7F2F9468;
    case 0x7F2F946Cu: goto label_7F2F946C;
    case 0x7F2F9470u: goto label_7F2F9470;
    case 0x7F2F9474u: goto label_7F2F9474;
    case 0x7F2F9478u: goto label_7F2F9478;
    case 0x7F2F947Cu: goto label_7F2F947C;
    case 0x7F2F9480u: goto label_7F2F9480;
    case 0x7F2F9484u: goto label_7F2F9484;
    case 0x7F2F9488u: goto label_7F2F9488;
    case 0x7F2F948Cu: goto label_7F2F948C;
    case 0x7F2F9490u: goto label_7F2F9490;
    case 0x7F2F9494u: goto label_7F2F9494;
    case 0x7F2F9498u: goto label_7F2F9498;
    case 0x7F2F949Cu: goto label_7F2F949C;
    case 0x7F2F94A0u: goto label_7F2F94A0;
    case 0x7F2F94A4u: goto label_7F2F94A4;
    case 0x7F2F94A8u: goto label_7F2F94A8;
    case 0x7F2F94ACu: goto label_7F2F94AC;
    case 0x7F2F94B0u: goto label_7F2F94B0;
    case 0x7F2F94B4u: goto label_7F2F94B4;
    case 0x7F2F94B8u: goto label_7F2F94B8;
    case 0x7F2F94BCu: goto label_7F2F94BC;
    case 0x7F2F94C0u: goto label_7F2F94C0;
    case 0x7F2F94C4u: goto label_7F2F94C4;
    case 0x7F2F94C8u: goto label_7F2F94C8;
    case 0x7F2F94CCu: goto label_7F2F94CC;
    case 0x7F2F94D0u: goto label_7F2F94D0;
    case 0x7F2F94D4u: goto label_7F2F94D4;
    case 0x7F2F94D8u: goto label_7F2F94D8;
    case 0x7F2F94DCu: goto label_7F2F94DC;
    case 0x7F2F94E0u: goto label_7F2F94E0;
    case 0x7F2F94E4u: goto label_7F2F94E4;
    case 0x7F2F94E8u: goto label_7F2F94E8;
    case 0x7F2F94ECu: goto label_7F2F94EC;
    case 0x7F2F94F0u: goto label_7F2F94F0;
    case 0x7F2F94F4u: goto label_7F2F94F4;
    case 0x7F2F94F8u: goto label_7F2F94F8;
    case 0x7F2F94FCu: goto label_7F2F94FC;
    case 0x7F2F9500u: goto label_7F2F9500;
    case 0x7F2F9504u: goto label_7F2F9504;
    case 0x7F2F9508u: goto label_7F2F9508;
    case 0x7F2F950Cu: goto label_7F2F950C;
    case 0x7F2F9510u: goto label_7F2F9510;
    case 0x7F2F9514u: goto label_7F2F9514;
    case 0x7F2F9518u: goto label_7F2F9518;
    case 0x7F2F951Cu: goto label_7F2F951C;
    case 0x7F2F9520u: goto label_7F2F9520;
    case 0x7F2F9524u: goto label_7F2F9524;
    case 0x7F2F9528u: goto label_7F2F9528;
    case 0x7F2F952Cu: goto label_7F2F952C;
    case 0x7F2F9530u: goto label_7F2F9530;
    case 0x7F2F9534u: goto label_7F2F9534;
    case 0x7F2F9538u: goto label_7F2F9538;
    case 0x7F2F953Cu: goto label_7F2F953C;
    case 0x7F2F9540u: goto label_7F2F9540;
    case 0x7F2F9544u: goto label_7F2F9544;
    case 0x7F2F9548u: goto label_7F2F9548;
    case 0x7F2F954Cu: goto label_7F2F954C;
    case 0x7F2F9550u: goto label_7F2F9550;
    case 0x7F2F9554u: goto label_7F2F9554;
    case 0x7F2F9558u: goto label_7F2F9558;
    case 0x7F2F955Cu: goto label_7F2F955C;
    case 0x7F2F9560u: goto label_7F2F9560;
    case 0x7F2F9564u: goto label_7F2F9564;
    case 0x7F2F9568u: goto label_7F2F9568;
    case 0x7F2F956Cu: goto label_7F2F956C;
    case 0x7F2F9570u: goto label_7F2F9570;
    case 0x7F2F9574u: goto label_7F2F9574;
    case 0x7F2F9578u: goto label_7F2F9578;
    case 0x7F2F957Cu: goto label_7F2F957C;
    case 0x7F2F9580u: goto label_7F2F9580;
    case 0x7F2F9584u: goto label_7F2F9584;
    case 0x7F2F9588u: goto label_7F2F9588;
    case 0x7F2F958Cu: goto label_7F2F958C;
    case 0x7F2F9590u: goto label_7F2F9590;
    case 0x7F2F9594u: goto label_7F2F9594;
    case 0x7F2F9598u: goto label_7F2F9598;
    case 0x7F2F959Cu: goto label_7F2F959C;
    case 0x7F2F95A0u: goto label_7F2F95A0;
    case 0x7F2F95A4u: goto label_7F2F95A4;
    case 0x7F2F95A8u: goto label_7F2F95A8;
    case 0x7F2F95ACu: goto label_7F2F95AC;
    case 0x7F2F95B0u: goto label_7F2F95B0;
    case 0x7F2F95B4u: goto label_7F2F95B4;
    case 0x7F2F95B8u: goto label_7F2F95B8;
    case 0x7F2F95BCu: goto label_7F2F95BC;
    case 0x7F2F95C0u: goto label_7F2F95C0;
    case 0x7F2F95C4u: goto label_7F2F95C4;
    case 0x7F2F95C8u: goto label_7F2F95C8;
    case 0x7F2F95CCu: goto label_7F2F95CC;
    case 0x7F2F95D0u: goto label_7F2F95D0;
    case 0x7F2F95D4u: goto label_7F2F95D4;
    case 0x7F2F95D8u: goto label_7F2F95D8;
    case 0x7F2F95DCu: goto label_7F2F95DC;
    case 0x7F2F95E0u: goto label_7F2F95E0;
    case 0x7F2F95E4u: goto label_7F2F95E4;
    case 0x7F2F95E8u: goto label_7F2F95E8;
    case 0x7F2F95ECu: goto label_7F2F95EC;
    case 0x7F2F95F0u: goto label_7F2F95F0;
    case 0x7F2F95F4u: goto label_7F2F95F4;
    case 0x7F2F95F8u: goto label_7F2F95F8;
    case 0x7F2F95FCu: goto label_7F2F95FC;
    case 0x7F2F9600u: goto label_7F2F9600;
    case 0x7F2F9604u: goto label_7F2F9604;
    case 0x7F2F9608u: goto label_7F2F9608;
    case 0x7F2F960Cu: goto label_7F2F960C;
    case 0x7F2F9610u: goto label_7F2F9610;
    case 0x7F2F9614u: goto label_7F2F9614;
    case 0x7F2F9618u: goto label_7F2F9618;
    case 0x7F2F961Cu: goto label_7F2F961C;
    case 0x7F2F9620u: goto label_7F2F9620;
    case 0x7F2F9624u: goto label_7F2F9624;
    case 0x7F2F9628u: goto label_7F2F9628;
    case 0x7F2F962Cu: goto label_7F2F962C;
    case 0x7F2F9630u: goto label_7F2F9630;
    case 0x7F2F9634u: goto label_7F2F9634;
    case 0x7F2F9638u: goto label_7F2F9638;
    case 0x7F2F963Cu: goto label_7F2F963C;
    case 0x7F2F9640u: goto label_7F2F9640;
    case 0x7F2F9644u: goto label_7F2F9644;
    case 0x7F2F9648u: goto label_7F2F9648;
    case 0x7F2F964Cu: goto label_7F2F964C;
    case 0x7F2F9650u: goto label_7F2F9650;
    case 0x7F2F9654u: goto label_7F2F9654;
    case 0x7F2F9658u: goto label_7F2F9658;
    case 0x7F2F965Cu: goto label_7F2F965C;
    case 0x7F2F9660u: goto label_7F2F9660;
    case 0x7F2F9664u: goto label_7F2F9664;
    case 0x7F2F9668u: goto label_7F2F9668;
    case 0x7F2F966Cu: goto label_7F2F966C;
    case 0x7F2F9670u: goto label_7F2F9670;
    case 0x7F2F9674u: goto label_7F2F9674;
    case 0x7F2F9678u: goto label_7F2F9678;
    case 0x7F2F967Cu: goto label_7F2F967C;
    case 0x7F2F9680u: goto label_7F2F9680;
    case 0x7F2F9684u: goto label_7F2F9684;
    case 0x7F2F9688u: goto label_7F2F9688;
    case 0x7F2F968Cu: goto label_7F2F968C;
    case 0x7F2F9690u: goto label_7F2F9690;
    case 0x7F2F9694u: goto label_7F2F9694;
    case 0x7F2F9698u: goto label_7F2F9698;
    case 0x7F2F969Cu: goto label_7F2F969C;
    case 0x7F2F96A0u: goto label_7F2F96A0;
    case 0x7F2F96A4u: goto label_7F2F96A4;
    case 0x7F2F96A8u: goto label_7F2F96A8;
    case 0x7F2F96ACu: goto label_7F2F96AC;
    case 0x7F2F96B0u: goto label_7F2F96B0;
    case 0x7F2F96B4u: goto label_7F2F96B4;
    case 0x7F2F96B8u: goto label_7F2F96B8;
    case 0x7F2F96BCu: goto label_7F2F96BC;
    case 0x7F2F96C0u: goto label_7F2F96C0;
    case 0x7F2F96C4u: goto label_7F2F96C4;
    case 0x7F2F96C8u: goto label_7F2F96C8;
    case 0x7F2F96CCu: goto label_7F2F96CC;
    case 0x7F2F96D0u: goto label_7F2F96D0;
    case 0x7F2F96D4u: goto label_7F2F96D4;
    case 0x7F2F96D8u: goto label_7F2F96D8;
    case 0x7F2F96DCu: goto label_7F2F96DC;
    case 0x7F2F96E0u: goto label_7F2F96E0;
    case 0x7F2F96E4u: goto label_7F2F96E4;
    case 0x7F2F96E8u: goto label_7F2F96E8;
    case 0x7F2F96ECu: goto label_7F2F96EC;
    case 0x7F2F96F0u: goto label_7F2F96F0;
    case 0x7F2F96F4u: goto label_7F2F96F4;
    case 0x7F2F96F8u: goto label_7F2F96F8;
    case 0x7F2F96FCu: goto label_7F2F96FC;
    case 0x7F2F9700u: goto label_7F2F9700;
    case 0x7F2F9704u: goto label_7F2F9704;
    case 0x7F2F9708u: goto label_7F2F9708;
    case 0x7F2F970Cu: goto label_7F2F970C;
    case 0x7F2F9710u: goto label_7F2F9710;
    case 0x7F2F9714u: goto label_7F2F9714;
    case 0x7F2F9718u: goto label_7F2F9718;
    case 0x7F2F971Cu: goto label_7F2F971C;
    case 0x7F2F9720u: goto label_7F2F9720;
    case 0x7F2F9724u: goto label_7F2F9724;
    case 0x7F2F9728u: goto label_7F2F9728;
    case 0x7F2F972Cu: goto label_7F2F972C;
    case 0x7F2F9730u: goto label_7F2F9730;
    case 0x7F2F9734u: goto label_7F2F9734;
    case 0x7F2F9738u: goto label_7F2F9738;
    case 0x7F2F973Cu: goto label_7F2F973C;
    case 0x7F2F9740u: goto label_7F2F9740;
    case 0x7F2F9744u: goto label_7F2F9744;
    case 0x7F2F9748u: goto label_7F2F9748;
    case 0x7F2F974Cu: goto label_7F2F974C;
    case 0x7F2F9750u: goto label_7F2F9750;
    case 0x7F2F9754u: goto label_7F2F9754;
    case 0x7F2F9758u: goto label_7F2F9758;
    case 0x7F2F975Cu: goto label_7F2F975C;
    case 0x7F2F9760u: goto label_7F2F9760;
    case 0x7F2F9764u: goto label_7F2F9764;
    case 0x7F2F9768u: goto label_7F2F9768;
    case 0x7F2F976Cu: goto label_7F2F976C;
    case 0x7F2F9770u: goto label_7F2F9770;
    case 0x7F2F9774u: goto label_7F2F9774;
    case 0x7F2F9778u: goto label_7F2F9778;
    case 0x7F2F977Cu: goto label_7F2F977C;
    case 0x7F2F9780u: goto label_7F2F9780;
    case 0x7F2F9784u: goto label_7F2F9784;
    case 0x7F2F9788u: goto label_7F2F9788;
    case 0x7F2F978Cu: goto label_7F2F978C;
    case 0x7F2F9790u: goto label_7F2F9790;
    case 0x7F2F9794u: goto label_7F2F9794;
    case 0x7F2F9798u: goto label_7F2F9798;
    case 0x7F2F979Cu: goto label_7F2F979C;
    case 0x7F2F97A0u: goto label_7F2F97A0;
    case 0x7F2F97A4u: goto label_7F2F97A4;
    case 0x7F2F97A8u: goto label_7F2F97A8;
    case 0x7F2F97ACu: goto label_7F2F97AC;
    case 0x7F2F97B0u: goto label_7F2F97B0;
    case 0x7F2F97B4u: goto label_7F2F97B4;
    case 0x7F2F97B8u: goto label_7F2F97B8;
    case 0x7F2F97BCu: goto label_7F2F97BC;
    case 0x7F2F97C0u: goto label_7F2F97C0;
    case 0x7F2F97C4u: goto label_7F2F97C4;
    case 0x7F2F97C8u: goto label_7F2F97C8;
    case 0x7F2F97CCu: goto label_7F2F97CC;
    case 0x7F2F97D0u: goto label_7F2F97D0;
    case 0x7F2F97D4u: goto label_7F2F97D4;
    case 0x7F2F97D8u: goto label_7F2F97D8;
    case 0x7F2F97DCu: goto label_7F2F97DC;
    case 0x7F2F97E0u: goto label_7F2F97E0;
    case 0x7F2F97E4u: goto label_7F2F97E4;
    case 0x7F2F97E8u: goto label_7F2F97E8;
    case 0x7F2F97ECu: goto label_7F2F97EC;
    case 0x7F2F97F0u: goto label_7F2F97F0;
    case 0x7F2F97F4u: goto label_7F2F97F4;
    case 0x7F2F97F8u: goto label_7F2F97F8;
    case 0x7F2F97FCu: goto label_7F2F97FC;
    case 0x7F2F9800u: goto label_7F2F9800;
    case 0x7F2F9804u: goto label_7F2F9804;
    case 0x7F2F9808u: goto label_7F2F9808;
    case 0x7F2F980Cu: goto label_7F2F980C;
    case 0x7F2F9810u: goto label_7F2F9810;
    case 0x7F2F9814u: goto label_7F2F9814;
    case 0x7F2F9818u: goto label_7F2F9818;
    case 0x7F2F981Cu: goto label_7F2F981C;
    case 0x7F2F9820u: goto label_7F2F9820;
    case 0x7F2F9824u: goto label_7F2F9824;
    case 0x7F2F9828u: goto label_7F2F9828;
    case 0x7F2F982Cu: goto label_7F2F982C;
    case 0x7F2F9830u: goto label_7F2F9830;
    case 0x7F2F9834u: goto label_7F2F9834;
    case 0x7F2F9838u: goto label_7F2F9838;
    case 0x7F2F983Cu: goto label_7F2F983C;
    case 0x7F2F9840u: goto label_7F2F9840;
    case 0x7F2F9844u: goto label_7F2F9844;
    case 0x7F2F9848u: goto label_7F2F9848;
    case 0x7F2F984Cu: goto label_7F2F984C;
    case 0x7F2F9850u: goto label_7F2F9850;
    case 0x7F2F9854u: goto label_7F2F9854;
    case 0x7F2F9858u: goto label_7F2F9858;
    case 0x7F2F985Cu: goto label_7F2F985C;
    case 0x7F2F9860u: goto label_7F2F9860;
    case 0x7F2F9864u: goto label_7F2F9864;
    case 0x7F2F9868u: goto label_7F2F9868;
    case 0x7F2F986Cu: goto label_7F2F986C;
    case 0x7F2F9870u: goto label_7F2F9870;
    case 0x7F2F9874u: goto label_7F2F9874;
    case 0x7F2F9878u: goto label_7F2F9878;
    case 0x7F2F987Cu: goto label_7F2F987C;
    case 0x7F2F9880u: goto label_7F2F9880;
    case 0x7F2F9884u: goto label_7F2F9884;
    case 0x7F2F9888u: goto label_7F2F9888;
    case 0x7F2F988Cu: goto label_7F2F988C;
    case 0x7F2F9890u: goto label_7F2F9890;
    case 0x7F2F9894u: goto label_7F2F9894;
    case 0x7F2F9898u: goto label_7F2F9898;
    case 0x7F2F989Cu: goto label_7F2F989C;
    case 0x7F2F98A0u: goto label_7F2F98A0;
    case 0x7F2F98A4u: goto label_7F2F98A4;
    case 0x7F2F98A8u: goto label_7F2F98A8;
    case 0x7F2F98ACu: goto label_7F2F98AC;
    case 0x7F2F98B0u: goto label_7F2F98B0;
    case 0x7F2F98B4u: goto label_7F2F98B4;
    case 0x7F2F98B8u: goto label_7F2F98B8;
    case 0x7F2F98BCu: goto label_7F2F98BC;
    case 0x7F2F98C0u: goto label_7F2F98C0;
    case 0x7F2F98C4u: goto label_7F2F98C4;
    case 0x7F2F98C8u: goto label_7F2F98C8;
    case 0x7F2F98CCu: goto label_7F2F98CC;
    case 0x7F2F98D0u: goto label_7F2F98D0;
    case 0x7F2F98D4u: goto label_7F2F98D4;
    case 0x7F2F98D8u: goto label_7F2F98D8;
    case 0x7F2F98DCu: goto label_7F2F98DC;
    case 0x7F2F98E0u: goto label_7F2F98E0;
    case 0x7F2F98E4u: goto label_7F2F98E4;
    case 0x7F2F98E8u: goto label_7F2F98E8;
    case 0x7F2F98ECu: goto label_7F2F98EC;
    case 0x7F2F98F0u: goto label_7F2F98F0;
    case 0x7F2F98F4u: goto label_7F2F98F4;
    case 0x7F2F98F8u: goto label_7F2F98F8;
    case 0x7F2F98FCu: goto label_7F2F98FC;
    case 0x7F2F9900u: goto label_7F2F9900;
    case 0x7F2F9904u: goto label_7F2F9904;
    case 0x7F2F9908u: goto label_7F2F9908;
    case 0x7F2F990Cu: goto label_7F2F990C;
    case 0x7F2F9910u: goto label_7F2F9910;
    case 0x7F2F9914u: goto label_7F2F9914;
    case 0x7F2F9918u: goto label_7F2F9918;
    case 0x7F2F991Cu: goto label_7F2F991C;
    case 0x7F2F9920u: goto label_7F2F9920;
    case 0x7F2F9924u: goto label_7F2F9924;
    case 0x7F2F9928u: goto label_7F2F9928;
    case 0x7F2F992Cu: goto label_7F2F992C;
    case 0x7F2F9930u: goto label_7F2F9930;
    case 0x7F2F9934u: goto label_7F2F9934;
    case 0x7F2F9938u: goto label_7F2F9938;
    case 0x7F2F993Cu: goto label_7F2F993C;
    case 0x7F2F9940u: goto label_7F2F9940;
    case 0x7F2F9944u: goto label_7F2F9944;
    case 0x7F2F9948u: goto label_7F2F9948;
    case 0x7F2F994Cu: goto label_7F2F994C;
    case 0x7F2F9950u: goto label_7F2F9950;
    case 0x7F2F9954u: goto label_7F2F9954;
    case 0x7F2F9958u: goto label_7F2F9958;
    case 0x7F2F995Cu: goto label_7F2F995C;
    case 0x7F2F9960u: goto label_7F2F9960;
    case 0x7F2F9964u: goto label_7F2F9964;
    case 0x7F2F9968u: goto label_7F2F9968;
    case 0x7F2F996Cu: goto label_7F2F996C;
    case 0x7F2F9970u: goto label_7F2F9970;
    case 0x7F2F9974u: goto label_7F2F9974;
    case 0x7F2F9978u: goto label_7F2F9978;
    case 0x7F2F997Cu: goto label_7F2F997C;
    case 0x7F2F9980u: goto label_7F2F9980;
    case 0x7F2F9984u: goto label_7F2F9984;
    case 0x7F2F9988u: goto label_7F2F9988;
    case 0x7F2F998Cu: goto label_7F2F998C;
    case 0x7F2F9990u: goto label_7F2F9990;
    case 0x7F2F9994u: goto label_7F2F9994;
    case 0x7F2F9998u: goto label_7F2F9998;
    case 0x7F2F999Cu: goto label_7F2F999C;
    case 0x7F2F99A0u: goto label_7F2F99A0;
    case 0x7F2F99A4u: goto label_7F2F99A4;
    case 0x7F2F99A8u: goto label_7F2F99A8;
    case 0x7F2F99ACu: goto label_7F2F99AC;
    case 0x7F2F99B0u: goto label_7F2F99B0;
    case 0x7F2F99B4u: goto label_7F2F99B4;
    case 0x7F2F99B8u: goto label_7F2F99B8;
    case 0x7F2F99BCu: goto label_7F2F99BC;
    case 0x7F2F99C0u: goto label_7F2F99C0;
    case 0x7F2F99C4u: goto label_7F2F99C4;
    case 0x7F2F99C8u: goto label_7F2F99C8;
    case 0x7F2F99CCu: goto label_7F2F99CC;
    case 0x7F2F99D0u: goto label_7F2F99D0;
    case 0x7F2F99D4u: goto label_7F2F99D4;
    case 0x7F2F99D8u: goto label_7F2F99D8;
    case 0x7F2F99DCu: goto label_7F2F99DC;
    case 0x7F2F99E0u: goto label_7F2F99E0;
    case 0x7F2F99E4u: goto label_7F2F99E4;
    case 0x7F2F99E8u: goto label_7F2F99E8;
    case 0x7F2F99ECu: goto label_7F2F99EC;
    case 0x7F2F99F0u: goto label_7F2F99F0;
    case 0x7F2F99F4u: goto label_7F2F99F4;
    case 0x7F2F99F8u: goto label_7F2F99F8;
    case 0x7F2F99FCu: goto label_7F2F99FC;
    case 0x7F2F9A00u: goto label_7F2F9A00;
    case 0x7F2F9A04u: goto label_7F2F9A04;
    case 0x7F2F9A08u: goto label_7F2F9A08;
    case 0x7F2F9A0Cu: goto label_7F2F9A0C;
    case 0x7F2F9A10u: goto label_7F2F9A10;
    case 0x7F2F9A14u: goto label_7F2F9A14;
    case 0x7F2F9A18u: goto label_7F2F9A18;
    case 0x7F2F9A1Cu: goto label_7F2F9A1C;
    case 0x7F2F9A20u: goto label_7F2F9A20;
    case 0x7F2F9A24u: goto label_7F2F9A24;
    case 0x7F2F9A28u: goto label_7F2F9A28;
    case 0x7F2F9A2Cu: goto label_7F2F9A2C;
    case 0x7F2F9A30u: goto label_7F2F9A30;
    case 0x7F2F9A34u: goto label_7F2F9A34;
    case 0x7F2F9A38u: goto label_7F2F9A38;
    case 0x7F2F9A3Cu: goto label_7F2F9A3C;
    case 0x7F2F9A40u: goto label_7F2F9A40;
    case 0x7F2F9A44u: goto label_7F2F9A44;
    case 0x7F2F9A48u: goto label_7F2F9A48;
    case 0x7F2F9A4Cu: goto label_7F2F9A4C;
    case 0x7F2F9A50u: goto label_7F2F9A50;
    case 0x7F2F9A54u: goto label_7F2F9A54;
    case 0x7F2F9A58u: goto label_7F2F9A58;
    case 0x7F2F9A5Cu: goto label_7F2F9A5C;
    case 0x7F2F9A60u: goto label_7F2F9A60;
    case 0x7F2F9A64u: goto label_7F2F9A64;
    case 0x7F2F9A68u: goto label_7F2F9A68;
    case 0x7F2F9A6Cu: goto label_7F2F9A6C;
    case 0x7F2F9A70u: goto label_7F2F9A70;
    case 0x7F2F9A74u: goto label_7F2F9A74;
    case 0x7F2F9A78u: goto label_7F2F9A78;
    case 0x7F2F9A7Cu: goto label_7F2F9A7C;
    case 0x7F2F9A80u: goto label_7F2F9A80;
    case 0x7F2F9A84u: goto label_7F2F9A84;
    case 0x7F2F9A88u: goto label_7F2F9A88;
    case 0x7F2F9A8Cu: goto label_7F2F9A8C;
    case 0x7F2F9A90u: goto label_7F2F9A90;
    case 0x7F2F9A94u: goto label_7F2F9A94;
    case 0x7F2F9A98u: goto label_7F2F9A98;
    case 0x7F2F9A9Cu: goto label_7F2F9A9C;
    case 0x7F2F9AA0u: goto label_7F2F9AA0;
    case 0x7F2F9AA4u: goto label_7F2F9AA4;
    case 0x7F2F9AA8u: goto label_7F2F9AA8;
    case 0x7F2F9AACu: goto label_7F2F9AAC;
    case 0x7F2F9AB0u: goto label_7F2F9AB0;
    case 0x7F2F9AB4u: goto label_7F2F9AB4;
    case 0x7F2F9AB8u: goto label_7F2F9AB8;
    case 0x7F2F9ABCu: goto label_7F2F9ABC;
    case 0x7F2F9AC0u: goto label_7F2F9AC0;
    case 0x7F2F9AC4u: goto label_7F2F9AC4;
    case 0x7F2F9AC8u: goto label_7F2F9AC8;
    case 0x7F2F9ACCu: goto label_7F2F9ACC;
    case 0x7F2F9AD0u: goto label_7F2F9AD0;
    case 0x7F2F9AD4u: goto label_7F2F9AD4;
    case 0x7F2F9AD8u: goto label_7F2F9AD8;
    case 0x7F2F9ADCu: goto label_7F2F9ADC;
    case 0x7F2F9AE0u: goto label_7F2F9AE0;
    case 0x7F2F9AE4u: goto label_7F2F9AE4;
    case 0x7F2F9AE8u: goto label_7F2F9AE8;
    case 0x7F2F9AECu: goto label_7F2F9AEC;
    case 0x7F2F9AF0u: goto label_7F2F9AF0;
    case 0x7F2F9AF4u: goto label_7F2F9AF4;
    case 0x7F2F9AF8u: goto label_7F2F9AF8;
    case 0x7F2F9AFCu: goto label_7F2F9AFC;
    case 0x7F2F9B00u: goto label_7F2F9B00;
    case 0x7F2F9B04u: goto label_7F2F9B04;
    case 0x7F2F9B08u: goto label_7F2F9B08;
    case 0x7F2F9B0Cu: goto label_7F2F9B0C;
    case 0x7F2F9B10u: goto label_7F2F9B10;
    case 0x7F2F9B14u: goto label_7F2F9B14;
    case 0x7F2F9B18u: goto label_7F2F9B18;
    case 0x7F2F9B1Cu: goto label_7F2F9B1C;
    case 0x7F2F9B20u: goto label_7F2F9B20;
    case 0x7F2F9B24u: goto label_7F2F9B24;
    case 0x7F2F9B28u: goto label_7F2F9B28;
    case 0x7F2F9B2Cu: goto label_7F2F9B2C;
    case 0x7F2F9B30u: goto label_7F2F9B30;
    case 0x7F2F9B34u: goto label_7F2F9B34;
    case 0x7F2F9B38u: goto label_7F2F9B38;
    case 0x7F2F9B3Cu: goto label_7F2F9B3C;
    case 0x7F2F9B40u: goto label_7F2F9B40;
    case 0x7F2F9B44u: goto label_7F2F9B44;
    case 0x7F2F9B48u: goto label_7F2F9B48;
    case 0x7F2F9B4Cu: goto label_7F2F9B4C;
    case 0x7F2F9B50u: goto label_7F2F9B50;
    case 0x7F2F9B54u: goto label_7F2F9B54;
    case 0x7F2F9B58u: goto label_7F2F9B58;
    case 0x7F2F9B5Cu: goto label_7F2F9B5C;
    case 0x7F2F9B60u: goto label_7F2F9B60;
    case 0x7F2F9B64u: goto label_7F2F9B64;
    case 0x7F2F9B68u: goto label_7F2F9B68;
    case 0x7F2F9B6Cu: goto label_7F2F9B6C;
    case 0x7F2F9B70u: goto label_7F2F9B70;
    case 0x7F2F9B74u: goto label_7F2F9B74;
    case 0x7F2F9B78u: goto label_7F2F9B78;
    case 0x7F2F9B7Cu: goto label_7F2F9B7C;
    case 0x7F2F9B80u: goto label_7F2F9B80;
    case 0x7F2F9B84u: goto label_7F2F9B84;
    case 0x7F2F9B88u: goto label_7F2F9B88;
    case 0x7F2F9B8Cu: goto label_7F2F9B8C;
    case 0x7F2F9B90u: goto label_7F2F9B90;
    case 0x7F2F9B94u: goto label_7F2F9B94;
    case 0x7F2F9B98u: goto label_7F2F9B98;
    case 0x7F2F9B9Cu: goto label_7F2F9B9C;
    case 0x7F2F9BA0u: goto label_7F2F9BA0;
    case 0x7F2F9BA4u: goto label_7F2F9BA4;
    case 0x7F2F9BA8u: goto label_7F2F9BA8;
    case 0x7F2F9BACu: goto label_7F2F9BAC;
    case 0x7F2F9BB0u: goto label_7F2F9BB0;
    case 0x7F2F9BB4u: goto label_7F2F9BB4;
    case 0x7F2F9BB8u: goto label_7F2F9BB8;
    case 0x7F2F9BBCu: goto label_7F2F9BBC;
    case 0x7F2F9BC0u: goto label_7F2F9BC0;
    case 0x7F2F9BC4u: goto label_7F2F9BC4;
    case 0x7F2F9BC8u: goto label_7F2F9BC8;
    case 0x7F2F9BCCu: goto label_7F2F9BCC;
    case 0x7F2F9BD0u: goto label_7F2F9BD0;
    case 0x7F2F9BD4u: goto label_7F2F9BD4;
    case 0x7F2F9BD8u: goto label_7F2F9BD8;
    case 0x7F2F9BDCu: goto label_7F2F9BDC;
    case 0x7F2F9BE0u: goto label_7F2F9BE0;
    case 0x7F2F9BE4u: goto label_7F2F9BE4;
    case 0x7F2F9BE8u: goto label_7F2F9BE8;
    case 0x7F2F9BECu: goto label_7F2F9BEC;
    case 0x7F2F9BF0u: goto label_7F2F9BF0;
    case 0x7F2F9BF4u: goto label_7F2F9BF4;
    case 0x7F2F9BF8u: goto label_7F2F9BF8;
    case 0x7F2F9BFCu: goto label_7F2F9BFC;
    case 0x7F2F9C00u: goto label_7F2F9C00;
    case 0x7F2F9C04u: goto label_7F2F9C04;
    case 0x7F2F9C08u: goto label_7F2F9C08;
    case 0x7F2F9C0Cu: goto label_7F2F9C0C;
    case 0x7F2F9C10u: goto label_7F2F9C10;
    case 0x7F2F9C14u: goto label_7F2F9C14;
    case 0x7F2F9C18u: goto label_7F2F9C18;
    case 0x7F2F9C1Cu: goto label_7F2F9C1C;
    case 0x7F2F9C20u: goto label_7F2F9C20;
    case 0x7F2F9C24u: goto label_7F2F9C24;
    case 0x7F2F9C28u: goto label_7F2F9C28;
    case 0x7F2F9C2Cu: goto label_7F2F9C2C;
    case 0x7F2F9C30u: goto label_7F2F9C30;
    case 0x7F2F9C34u: goto label_7F2F9C34;
    case 0x7F2F9C38u: goto label_7F2F9C38;
    case 0x7F2F9C3Cu: goto label_7F2F9C3C;
    case 0x7F2F9C40u: goto label_7F2F9C40;
    case 0x7F2F9C44u: goto label_7F2F9C44;
    case 0x7F2F9C48u: goto label_7F2F9C48;
    case 0x7F2F9C4Cu: goto label_7F2F9C4C;
    case 0x7F2F9C50u: goto label_7F2F9C50;
    case 0x7F2F9C54u: goto label_7F2F9C54;
    case 0x7F2F9C58u: goto label_7F2F9C58;
    case 0x7F2F9C5Cu: goto label_7F2F9C5C;
    case 0x7F2F9C60u: goto label_7F2F9C60;
    case 0x7F2F9C64u: goto label_7F2F9C64;
    case 0x7F2F9C68u: goto label_7F2F9C68;
    case 0x7F2F9C6Cu: goto label_7F2F9C6C;
    case 0x7F2F9C70u: goto label_7F2F9C70;
    case 0x7F2F9C74u: goto label_7F2F9C74;
    case 0x7F2F9C78u: goto label_7F2F9C78;
    case 0x7F2F9C7Cu: goto label_7F2F9C7C;
    case 0x7F2F9C80u: goto label_7F2F9C80;
    case 0x7F2F9C84u: goto label_7F2F9C84;
    case 0x7F2F9C88u: goto label_7F2F9C88;
    case 0x7F2F9C8Cu: goto label_7F2F9C8C;
    case 0x7F2F9C90u: goto label_7F2F9C90;
    case 0x7F2F9C94u: goto label_7F2F9C94;
    case 0x7F2F9C98u: goto label_7F2F9C98;
    case 0x7F2F9C9Cu: goto label_7F2F9C9C;
    case 0x7F2F9CA0u: goto label_7F2F9CA0;
    case 0x7F2F9CA4u: goto label_7F2F9CA4;
    case 0x7F2F9CA8u: goto label_7F2F9CA8;
    case 0x7F2F9CACu: goto label_7F2F9CAC;
    case 0x7F2F9CB0u: goto label_7F2F9CB0;
    case 0x7F2F9CB4u: goto label_7F2F9CB4;
    case 0x7F2F9CB8u: goto label_7F2F9CB8;
    case 0x7F2F9CBCu: goto label_7F2F9CBC;
    case 0x7F2F9CC0u: goto label_7F2F9CC0;
    case 0x7F2F9CC4u: goto label_7F2F9CC4;
    case 0x7F2F9CC8u: goto label_7F2F9CC8;
    case 0x7F2F9CCCu: goto label_7F2F9CCC;
    case 0x7F2F9CD0u: goto label_7F2F9CD0;
    case 0x7F2F9CD4u: goto label_7F2F9CD4;
    case 0x7F2F9CD8u: goto label_7F2F9CD8;
    case 0x7F2F9CDCu: goto label_7F2F9CDC;
    case 0x7F2F9CE0u: goto label_7F2F9CE0;
    case 0x7F2F9CE4u: goto label_7F2F9CE4;
    case 0x7F2F9CE8u: goto label_7F2F9CE8;
    case 0x7F2F9CECu: goto label_7F2F9CEC;
    case 0x7F2F9CF0u: goto label_7F2F9CF0;
    case 0x7F2F9CF4u: goto label_7F2F9CF4;
    case 0x7F2F9CF8u: goto label_7F2F9CF8;
    case 0x7F2F9CFCu: goto label_7F2F9CFC;
    case 0x7F2F9D00u: goto label_7F2F9D00;
    case 0x7F2F9D04u: goto label_7F2F9D04;
    case 0x7F2F9D08u: goto label_7F2F9D08;
    case 0x7F2F9D0Cu: goto label_7F2F9D0C;
    case 0x7F2F9D10u: goto label_7F2F9D10;
    case 0x7F2F9D14u: goto label_7F2F9D14;
    case 0x7F2F9D18u: goto label_7F2F9D18;
    case 0x7F2F9D1Cu: goto label_7F2F9D1C;
    case 0x7F2F9D20u: goto label_7F2F9D20;
    case 0x7F2F9D24u: goto label_7F2F9D24;
    case 0x7F2F9D28u: goto label_7F2F9D28;
    case 0x7F2F9D2Cu: goto label_7F2F9D2C;
    case 0x7F2F9D30u: goto label_7F2F9D30;
    case 0x7F2F9D34u: goto label_7F2F9D34;
    case 0x7F2F9D38u: goto label_7F2F9D38;
    case 0x7F2F9D3Cu: goto label_7F2F9D3C;
    case 0x7F2F9D40u: goto label_7F2F9D40;
    case 0x7F2F9D44u: goto label_7F2F9D44;
    case 0x7F2F9D48u: goto label_7F2F9D48;
    case 0x7F2F9D4Cu: goto label_7F2F9D4C;
    case 0x7F2F9D50u: goto label_7F2F9D50;
    case 0x7F2F9D54u: goto label_7F2F9D54;
    case 0x7F2F9D58u: goto label_7F2F9D58;
    case 0x7F2F9D5Cu: goto label_7F2F9D5C;
    case 0x7F2F9D60u: goto label_7F2F9D60;
    case 0x7F2F9D64u: goto label_7F2F9D64;
    case 0x7F2F9D68u: goto label_7F2F9D68;
    case 0x7F2F9D6Cu: goto label_7F2F9D6C;
    case 0x7F2F9D70u: goto label_7F2F9D70;
    case 0x7F2F9D74u: goto label_7F2F9D74;
    case 0x7F2F9D78u: goto label_7F2F9D78;
    case 0x7F2F9D7Cu: goto label_7F2F9D7C;
    case 0x7F2F9D80u: goto label_7F2F9D80;
    case 0x7F2F9D84u: goto label_7F2F9D84;
    case 0x7F2F9D88u: goto label_7F2F9D88;
    case 0x7F2F9D8Cu: goto label_7F2F9D8C;
    case 0x7F2F9D90u: goto label_7F2F9D90;
    case 0x7F2F9D94u: goto label_7F2F9D94;
    case 0x7F2F9D98u: goto label_7F2F9D98;
    case 0x7F2F9D9Cu: goto label_7F2F9D9C;
    case 0x7F2F9DA0u: goto label_7F2F9DA0;
    case 0x7F2F9DA4u: goto label_7F2F9DA4;
    case 0x7F2F9DA8u: goto label_7F2F9DA8;
    case 0x7F2F9DACu: goto label_7F2F9DAC;
    case 0x7F2F9DB0u: goto label_7F2F9DB0;
    case 0x7F2F9DB4u: goto label_7F2F9DB4;
    case 0x7F2F9DB8u: goto label_7F2F9DB8;
    case 0x7F2F9DBCu: goto label_7F2F9DBC;
    case 0x7F2F9DC0u: goto label_7F2F9DC0;
    case 0x7F2F9DC4u: goto label_7F2F9DC4;
    case 0x7F2F9DC8u: goto label_7F2F9DC8;
    case 0x7F2F9DCCu: goto label_7F2F9DCC;
    case 0x7F2F9DD0u: goto label_7F2F9DD0;
    case 0x7F2F9DD4u: goto label_7F2F9DD4;
    case 0x7F2F9DD8u: goto label_7F2F9DD8;
    case 0x7F2F9DDCu: goto label_7F2F9DDC;
    case 0x7F2F9DE0u: goto label_7F2F9DE0;
    case 0x7F2F9DE4u: goto label_7F2F9DE4;
    case 0x7F2F9DE8u: goto label_7F2F9DE8;
    case 0x7F2F9DECu: goto label_7F2F9DEC;
    case 0x7F2F9DF0u: goto label_7F2F9DF0;
    case 0x7F2F9DF4u: goto label_7F2F9DF4;
    case 0x7F2F9DF8u: goto label_7F2F9DF8;
    case 0x7F2F9DFCu: goto label_7F2F9DFC;
    case 0x7F2F9E00u: goto label_7F2F9E00;
    case 0x7F2F9E04u: goto label_7F2F9E04;
    case 0x7F2F9E08u: goto label_7F2F9E08;
    case 0x7F2F9E0Cu: goto label_7F2F9E0C;
    case 0x7F2F9E10u: goto label_7F2F9E10;
    case 0x7F2F9E14u: goto label_7F2F9E14;
    case 0x7F2F9E18u: goto label_7F2F9E18;
    case 0x7F2F9E1Cu: goto label_7F2F9E1C;
    case 0x7F2F9E20u: goto label_7F2F9E20;
    case 0x7F2F9E24u: goto label_7F2F9E24;
    case 0x7F2F9E28u: goto label_7F2F9E28;
    case 0x7F2F9E2Cu: goto label_7F2F9E2C;
    case 0x7F2F9E30u: goto label_7F2F9E30;
    case 0x7F2F9E34u: goto label_7F2F9E34;
    case 0x7F2F9E38u: goto label_7F2F9E38;
    case 0x7F2F9E3Cu: goto label_7F2F9E3C;
    case 0x7F2F9E40u: goto label_7F2F9E40;
    case 0x7F2F9E44u: goto label_7F2F9E44;
    case 0x7F2F9E48u: goto label_7F2F9E48;
    case 0x7F2F9E4Cu: goto label_7F2F9E4C;
    case 0x7F2F9E50u: goto label_7F2F9E50;
    case 0x7F2F9E54u: goto label_7F2F9E54;
    case 0x7F2F9E58u: goto label_7F2F9E58;
    case 0x7F2F9E5Cu: goto label_7F2F9E5C;
    case 0x7F2F9E60u: goto label_7F2F9E60;
    case 0x7F2F9E64u: goto label_7F2F9E64;
    case 0x7F2F9E68u: goto label_7F2F9E68;
    case 0x7F2F9E6Cu: goto label_7F2F9E6C;
    case 0x7F2F9E70u: goto label_7F2F9E70;
    case 0x7F2F9E74u: goto label_7F2F9E74;
    case 0x7F2F9E78u: goto label_7F2F9E78;
    case 0x7F2F9E7Cu: goto label_7F2F9E7C;
    case 0x7F2F9E80u: goto label_7F2F9E80;
    case 0x7F2F9E84u: goto label_7F2F9E84;
    case 0x7F2F9E88u: goto label_7F2F9E88;
    case 0x7F2F9E8Cu: goto label_7F2F9E8C;
    case 0x7F2F9E90u: goto label_7F2F9E90;
    case 0x7F2F9E94u: goto label_7F2F9E94;
    case 0x7F2F9E98u: goto label_7F2F9E98;
    case 0x7F2F9E9Cu: goto label_7F2F9E9C;
    case 0x7F2F9EA0u: goto label_7F2F9EA0;
    case 0x7F2F9EA4u: goto label_7F2F9EA4;
    case 0x7F2F9EA8u: goto label_7F2F9EA8;
    case 0x7F2F9EACu: goto label_7F2F9EAC;
    case 0x7F2F9EB0u: goto label_7F2F9EB0;
    case 0x7F2F9EB4u: goto label_7F2F9EB4;
    case 0x7F2F9EB8u: goto label_7F2F9EB8;
    case 0x7F2F9EBCu: goto label_7F2F9EBC;
    case 0x7F2F9EC0u: goto label_7F2F9EC0;
    case 0x7F2F9EC4u: goto label_7F2F9EC4;
    case 0x7F2F9EC8u: goto label_7F2F9EC8;
    case 0x7F2F9ECCu: goto label_7F2F9ECC;
    case 0x7F2F9ED0u: goto label_7F2F9ED0;
    case 0x7F2F9ED4u: goto label_7F2F9ED4;
    case 0x7F2F9ED8u: goto label_7F2F9ED8;
    case 0x7F2F9EDCu: goto label_7F2F9EDC;
    case 0x7F2F9EE0u: goto label_7F2F9EE0;
    case 0x7F2F9EE4u: goto label_7F2F9EE4;
    case 0x7F2F9EE8u: goto label_7F2F9EE8;
    case 0x7F2F9EECu: goto label_7F2F9EEC;
    case 0x7F2F9EF0u: goto label_7F2F9EF0;
    case 0x7F2F9EF4u: goto label_7F2F9EF4;
    case 0x7F2F9EF8u: goto label_7F2F9EF8;
    case 0x7F2F9EFCu: goto label_7F2F9EFC;
    case 0x7F2F9F00u: goto label_7F2F9F00;
    case 0x7F2F9F04u: goto label_7F2F9F04;
    case 0x7F2F9F08u: goto label_7F2F9F08;
    case 0x7F2F9F0Cu: goto label_7F2F9F0C;
    case 0x7F2F9F10u: goto label_7F2F9F10;
    case 0x7F2F9F14u: goto label_7F2F9F14;
    case 0x7F2F9F18u: goto label_7F2F9F18;
    case 0x7F2F9F1Cu: goto label_7F2F9F1C;
    case 0x7F2F9F20u: goto label_7F2F9F20;
    case 0x7F2F9F24u: goto label_7F2F9F24;
    case 0x7F2F9F28u: goto label_7F2F9F28;
    case 0x7F2F9F2Cu: goto label_7F2F9F2C;
    case 0x7F2F9F30u: goto label_7F2F9F30;
    case 0x7F2F9F34u: goto label_7F2F9F34;
    case 0x7F2F9F38u: goto label_7F2F9F38;
    case 0x7F2F9F3Cu: goto label_7F2F9F3C;
    case 0x7F2F9F40u: goto label_7F2F9F40;
    case 0x7F2F9F44u: goto label_7F2F9F44;
    case 0x7F2F9F48u: goto label_7F2F9F48;
    case 0x7F2F9F4Cu: goto label_7F2F9F4C;
    case 0x7F2F9F50u: goto label_7F2F9F50;
    case 0x7F2F9F54u: goto label_7F2F9F54;
    case 0x7F2F9F58u: goto label_7F2F9F58;
    case 0x7F2F9F5Cu: goto label_7F2F9F5C;
    case 0x7F2F9F60u: goto label_7F2F9F60;
    case 0x7F2F9F64u: goto label_7F2F9F64;
    case 0x7F2F9F68u: goto label_7F2F9F68;
    case 0x7F2F9F6Cu: goto label_7F2F9F6C;
    case 0x7F2F9F70u: goto label_7F2F9F70;
    case 0x7F2F9F74u: goto label_7F2F9F74;
    case 0x7F2F9F78u: goto label_7F2F9F78;
    case 0x7F2F9F7Cu: goto label_7F2F9F7C;
    case 0x7F2F9F80u: goto label_7F2F9F80;
    case 0x7F2F9F84u: goto label_7F2F9F84;
    case 0x7F2F9F88u: goto label_7F2F9F88;
    case 0x7F2F9F8Cu: goto label_7F2F9F8C;
    case 0x7F2F9F90u: goto label_7F2F9F90;
    case 0x7F2F9F94u: goto label_7F2F9F94;
    case 0x7F2F9F98u: goto label_7F2F9F98;
    case 0x7F2F9F9Cu: goto label_7F2F9F9C;
    case 0x7F2F9FA0u: goto label_7F2F9FA0;
    case 0x7F2F9FA4u: goto label_7F2F9FA4;
    case 0x7F2F9FA8u: goto label_7F2F9FA8;
    case 0x7F2F9FACu: goto label_7F2F9FAC;
    case 0x7F2F9FB0u: goto label_7F2F9FB0;
    case 0x7F2F9FB4u: goto label_7F2F9FB4;
    case 0x7F2F9FB8u: goto label_7F2F9FB8;
    case 0x7F2F9FBCu: goto label_7F2F9FBC;
    case 0x7F2F9FC0u: goto label_7F2F9FC0;
    case 0x7F2F9FC4u: goto label_7F2F9FC4;
    case 0x7F2F9FC8u: goto label_7F2F9FC8;
    case 0x7F2F9FCCu: goto label_7F2F9FCC;
    case 0x7F2F9FD0u: goto label_7F2F9FD0;
    case 0x7F2F9FD4u: goto label_7F2F9FD4;
    case 0x7F2F9FD8u: goto label_7F2F9FD8;
    case 0x7F2F9FDCu: goto label_7F2F9FDC;
    case 0x7F2F9FE0u: goto label_7F2F9FE0;
    case 0x7F2F9FE4u: goto label_7F2F9FE4;
    case 0x7F2F9FE8u: goto label_7F2F9FE8;
    case 0x7F2F9FECu: goto label_7F2F9FEC;
    case 0x7F2F9FF0u: goto label_7F2F9FF0;
    case 0x7F2F9FF4u: goto label_7F2F9FF4;
    case 0x7F2F9FF8u: goto label_7F2F9FF8;
    case 0x7F2F9FFCu: goto label_7F2F9FFC;
    case 0x7F2FA000u: goto label_7F2FA000;
    case 0x7F2FA004u: goto label_7F2FA004;
    case 0x7F2FA008u: goto label_7F2FA008;
    case 0x7F2FA00Cu: goto label_7F2FA00C;
    case 0x7F2FA010u: goto label_7F2FA010;
    case 0x7F2FA014u: goto label_7F2FA014;
    case 0x7F2FA018u: goto label_7F2FA018;
    case 0x7F2FA01Cu: goto label_7F2FA01C;
    case 0x7F2FA020u: goto label_7F2FA020;
    case 0x7F2FA024u: goto label_7F2FA024;
    case 0x7F2FA028u: goto label_7F2FA028;
    case 0x7F2FA02Cu: goto label_7F2FA02C;
    case 0x7F2FA030u: goto label_7F2FA030;
    case 0x7F2FA034u: goto label_7F2FA034;
    case 0x7F2FA038u: goto label_7F2FA038;
    case 0x7F2FA03Cu: goto label_7F2FA03C;
    case 0x7F2FA040u: goto label_7F2FA040;
    case 0x7F2FA044u: goto label_7F2FA044;
    case 0x7F2FA048u: goto label_7F2FA048;
    case 0x7F2FA04Cu: goto label_7F2FA04C;
    case 0x7F2FA050u: goto label_7F2FA050;
    case 0x7F2FA054u: goto label_7F2FA054;
    case 0x7F2FA058u: goto label_7F2FA058;
    case 0x7F2FA05Cu: goto label_7F2FA05C;
    case 0x7F2FA060u: goto label_7F2FA060;
    case 0x7F2FA064u: goto label_7F2FA064;
    case 0x7F2FA068u: goto label_7F2FA068;
    case 0x7F2FA06Cu: goto label_7F2FA06C;
    case 0x7F2FA070u: goto label_7F2FA070;
    case 0x7F2FA074u: goto label_7F2FA074;
    case 0x7F2FA078u: goto label_7F2FA078;
    case 0x7F2FA07Cu: goto label_7F2FA07C;
    case 0x7F2FA080u: goto label_7F2FA080;
    case 0x7F2FA084u: goto label_7F2FA084;
    case 0x7F2FA088u: goto label_7F2FA088;
    case 0x7F2FA08Cu: goto label_7F2FA08C;
    case 0x7F2FA090u: goto label_7F2FA090;
    case 0x7F2FA094u: goto label_7F2FA094;
    case 0x7F2FA098u: goto label_7F2FA098;
    case 0x7F2FA09Cu: goto label_7F2FA09C;
    case 0x7F2FA0A0u: goto label_7F2FA0A0;
    case 0x7F2FA0A4u: goto label_7F2FA0A4;
    case 0x7F2FA0A8u: goto label_7F2FA0A8;
    case 0x7F2FA0ACu: goto label_7F2FA0AC;
    case 0x7F2FA0B0u: goto label_7F2FA0B0;
    case 0x7F2FA0B4u: goto label_7F2FA0B4;
    case 0x7F2FA0B8u: goto label_7F2FA0B8;
    case 0x7F2FA0BCu: goto label_7F2FA0BC;
    case 0x7F2FA0C0u: goto label_7F2FA0C0;
    case 0x7F2FA0C4u: goto label_7F2FA0C4;
    case 0x7F2FA0C8u: goto label_7F2FA0C8;
    case 0x7F2FA0CCu: goto label_7F2FA0CC;
    case 0x7F2FA0D0u: goto label_7F2FA0D0;
    case 0x7F2FA0D4u: goto label_7F2FA0D4;
    case 0x7F2FA0D8u: goto label_7F2FA0D8;
    case 0x7F2FA0DCu: goto label_7F2FA0DC;
    case 0x7F2FA0E0u: goto label_7F2FA0E0;
    case 0x7F2FA0E4u: goto label_7F2FA0E4;
    case 0x7F2FA0E8u: goto label_7F2FA0E8;
    case 0x7F2FA0ECu: goto label_7F2FA0EC;
    case 0x7F2FA0F0u: goto label_7F2FA0F0;
    case 0x7F2FA0F4u: goto label_7F2FA0F4;
    case 0x7F2FA0F8u: goto label_7F2FA0F8;
    case 0x7F2FA0FCu: goto label_7F2FA0FC;
    case 0x7F2FA100u: goto label_7F2FA100;
    case 0x7F2FA104u: goto label_7F2FA104;
    case 0x7F2FA108u: goto label_7F2FA108;
    case 0x7F2FA10Cu: goto label_7F2FA10C;
    case 0x7F2FA110u: goto label_7F2FA110;
    case 0x7F2FA114u: goto label_7F2FA114;
    case 0x7F2FA118u: goto label_7F2FA118;
    case 0x7F2FA11Cu: goto label_7F2FA11C;
    case 0x7F2FA120u: goto label_7F2FA120;
    case 0x7F2FA124u: goto label_7F2FA124;
    case 0x7F2FA128u: goto label_7F2FA128;
    case 0x7F2FA12Cu: goto label_7F2FA12C;
    case 0x7F2FA130u: goto label_7F2FA130;
    case 0x7F2FA134u: goto label_7F2FA134;
    case 0x7F2FA138u: goto label_7F2FA138;
    case 0x7F2FA13Cu: goto label_7F2FA13C;
    case 0x7F2FA140u: goto label_7F2FA140;
    case 0x7F2FA144u: goto label_7F2FA144;
    case 0x7F2FA148u: goto label_7F2FA148;
    case 0x7F2FA14Cu: goto label_7F2FA14C;
    case 0x7F2FA150u: goto label_7F2FA150;
    case 0x7F2FA154u: goto label_7F2FA154;
    case 0x7F2FA158u: goto label_7F2FA158;
    case 0x7F2FA15Cu: goto label_7F2FA15C;
    case 0x7F2FA160u: goto label_7F2FA160;
    case 0x7F2FA164u: goto label_7F2FA164;
    case 0x7F2FA168u: goto label_7F2FA168;
    case 0x7F2FA16Cu: goto label_7F2FA16C;
    case 0x7F2FA170u: goto label_7F2FA170;
    case 0x7F2FA174u: goto label_7F2FA174;
    case 0x7F2FA178u: goto label_7F2FA178;
    case 0x7F2FA17Cu: goto label_7F2FA17C;
    case 0x7F2FA180u: goto label_7F2FA180;
    case 0x7F2FA184u: goto label_7F2FA184;
    case 0x7F2FA188u: goto label_7F2FA188;
    case 0x7F2FA18Cu: goto label_7F2FA18C;
    case 0x7F2FA190u: goto label_7F2FA190;
    case 0x7F2FA194u: goto label_7F2FA194;
    case 0x7F2FA198u: goto label_7F2FA198;
    case 0x7F2FA19Cu: goto label_7F2FA19C;
    case 0x7F2FA1A0u: goto label_7F2FA1A0;
    case 0x7F2FA1A4u: goto label_7F2FA1A4;
    case 0x7F2FA1A8u: goto label_7F2FA1A8;
    case 0x7F2FA1ACu: goto label_7F2FA1AC;
    case 0x7F2FA1B0u: goto label_7F2FA1B0;
    case 0x7F2FA1B4u: goto label_7F2FA1B4;
    case 0x7F2FA1B8u: goto label_7F2FA1B8;
    case 0x7F2FA1BCu: goto label_7F2FA1BC;
    case 0x7F2FA1C0u: goto label_7F2FA1C0;
    case 0x7F2FA1C4u: goto label_7F2FA1C4;
    case 0x7F2FA1C8u: goto label_7F2FA1C8;
    case 0x7F2FA1CCu: goto label_7F2FA1CC;
    case 0x7F2FA1D0u: goto label_7F2FA1D0;
    case 0x7F2FA1D4u: goto label_7F2FA1D4;
    case 0x7F2FA1D8u: goto label_7F2FA1D8;
    case 0x7F2FA1DCu: goto label_7F2FA1DC;
    case 0x7F2FA1E0u: goto label_7F2FA1E0;
    case 0x7F2FA1E4u: goto label_7F2FA1E4;
    case 0x7F2FA1E8u: goto label_7F2FA1E8;
    case 0x7F2FA1ECu: goto label_7F2FA1EC;
    case 0x7F2FA1F0u: goto label_7F2FA1F0;
    case 0x7F2FA1F4u: goto label_7F2FA1F4;
    case 0x7F2FA1F8u: goto label_7F2FA1F8;
    case 0x7F2FA1FCu: goto label_7F2FA1FC;
    case 0x7F2FA200u: goto label_7F2FA200;
    case 0x7F2FA204u: goto label_7F2FA204;
    case 0x7F2FA208u: goto label_7F2FA208;
    case 0x7F2FA20Cu: goto label_7F2FA20C;
    case 0x7F2FA210u: goto label_7F2FA210;
    case 0x7F2FA214u: goto label_7F2FA214;
    case 0x7F2FA218u: goto label_7F2FA218;
    case 0x7F2FA21Cu: goto label_7F2FA21C;
    case 0x7F2FA220u: goto label_7F2FA220;
    case 0x7F2FA224u: goto label_7F2FA224;
    case 0x7F2FA228u: goto label_7F2FA228;
    case 0x7F2FA22Cu: goto label_7F2FA22C;
    case 0x7F2FA230u: goto label_7F2FA230;
    case 0x7F2FA234u: goto label_7F2FA234;
    case 0x7F2FA238u: goto label_7F2FA238;
    case 0x7F2FA23Cu: goto label_7F2FA23C;
    case 0x7F2FA240u: goto label_7F2FA240;
    case 0x7F2FA244u: goto label_7F2FA244;
    case 0x7F2FA248u: goto label_7F2FA248;
    case 0x7F2FA24Cu: goto label_7F2FA24C;
    case 0x7F2FA250u: goto label_7F2FA250;
    case 0x7F2FA254u: goto label_7F2FA254;
    case 0x7F2FA258u: goto label_7F2FA258;
    case 0x7F2FA25Cu: goto label_7F2FA25C;
    case 0x7F2FA260u: goto label_7F2FA260;
    case 0x7F2FA264u: goto label_7F2FA264;
    case 0x7F2FA268u: goto label_7F2FA268;
    case 0x7F2FA26Cu: goto label_7F2FA26C;
    case 0x7F2FA270u: goto label_7F2FA270;
    case 0x7F2FA274u: goto label_7F2FA274;
    case 0x7F2FA278u: goto label_7F2FA278;
    case 0x7F2FA27Cu: goto label_7F2FA27C;
    case 0x7F2FA280u: goto label_7F2FA280;
    case 0x7F2FA284u: goto label_7F2FA284;
    case 0x7F2FA288u: goto label_7F2FA288;
    case 0x7F2FA28Cu: goto label_7F2FA28C;
    case 0x7F2FA290u: goto label_7F2FA290;
    case 0x7F2FA294u: goto label_7F2FA294;
    case 0x7F2FA298u: goto label_7F2FA298;
    case 0x7F2FA29Cu: goto label_7F2FA29C;
    case 0x7F2FA2A0u: goto label_7F2FA2A0;
    case 0x7F2FA2A4u: goto label_7F2FA2A4;
    case 0x7F2FA2A8u: goto label_7F2FA2A8;
    case 0x7F2FA2ACu: goto label_7F2FA2AC;
    case 0x7F2FA2B0u: goto label_7F2FA2B0;
    case 0x7F2FA2B4u: goto label_7F2FA2B4;
    case 0x7F2FA2B8u: goto label_7F2FA2B8;
    case 0x7F2FA2BCu: goto label_7F2FA2BC;
    case 0x7F2FA2C0u: goto label_7F2FA2C0;
    case 0x7F2FA2C4u: goto label_7F2FA2C4;
    case 0x7F2FA2C8u: goto label_7F2FA2C8;
    case 0x7F2FA2CCu: goto label_7F2FA2CC;
    case 0x7F2FA2D0u: goto label_7F2FA2D0;
    case 0x7F2FA2D4u: goto label_7F2FA2D4;
    case 0x7F2FA2D8u: goto label_7F2FA2D8;
    case 0x7F2FA2DCu: goto label_7F2FA2DC;
    case 0x7F2FA2E0u: goto label_7F2FA2E0;
    case 0x7F2FA2E4u: goto label_7F2FA2E4;
    case 0x7F2FA2E8u: goto label_7F2FA2E8;
    case 0x7F2FA2ECu: goto label_7F2FA2EC;
    case 0x7F2FA2F0u: goto label_7F2FA2F0;
    case 0x7F2FA2F4u: goto label_7F2FA2F4;
    case 0x7F2FA2F8u: goto label_7F2FA2F8;
    case 0x7F2FA2FCu: goto label_7F2FA2FC;
    case 0x7F2FA300u: goto label_7F2FA300;
    case 0x7F2FA304u: goto label_7F2FA304;
    case 0x7F2FA308u: goto label_7F2FA308;
    case 0x7F2FA30Cu: goto label_7F2FA30C;
    case 0x7F2FA310u: goto label_7F2FA310;
    case 0x7F2FA314u: goto label_7F2FA314;
    case 0x7F2FA318u: goto label_7F2FA318;
    case 0x7F2FA31Cu: goto label_7F2FA31C;
    case 0x7F2FA320u: goto label_7F2FA320;
    case 0x7F2FA324u: goto label_7F2FA324;
    case 0x7F2FA328u: goto label_7F2FA328;
    case 0x7F2FA32Cu: goto label_7F2FA32C;
    case 0x7F2FA330u: goto label_7F2FA330;
    case 0x7F2FA334u: goto label_7F2FA334;
    case 0x7F2FA338u: goto label_7F2FA338;
    case 0x7F2FA33Cu: goto label_7F2FA33C;
    case 0x7F2FA340u: goto label_7F2FA340;
    case 0x7F2FA344u: goto label_7F2FA344;
    case 0x7F2FA348u: goto label_7F2FA348;
    case 0x7F2FA34Cu: goto label_7F2FA34C;
    case 0x7F2FA350u: goto label_7F2FA350;
    case 0x7F2FA354u: goto label_7F2FA354;
    case 0x7F2FA358u: goto label_7F2FA358;
    case 0x7F2FA35Cu: goto label_7F2FA35C;
    case 0x7F2FA360u: goto label_7F2FA360;
    case 0x7F2FA364u: goto label_7F2FA364;
    case 0x7F2FA368u: goto label_7F2FA368;
    case 0x7F2FA36Cu: goto label_7F2FA36C;
    case 0x7F2FA370u: goto label_7F2FA370;
    case 0x7F2FA374u: goto label_7F2FA374;
    case 0x7F2FA378u: goto label_7F2FA378;
    case 0x7F2FA37Cu: goto label_7F2FA37C;
    case 0x7F2FA380u: goto label_7F2FA380;
    case 0x7F2FA384u: goto label_7F2FA384;
    case 0x7F2FA388u: goto label_7F2FA388;
    case 0x7F2FA38Cu: goto label_7F2FA38C;
    case 0x7F2FA390u: goto label_7F2FA390;
    case 0x7F2FA394u: goto label_7F2FA394;
    case 0x7F2FA398u: goto label_7F2FA398;
    case 0x7F2FA39Cu: goto label_7F2FA39C;
    case 0x7F2FA3A0u: goto label_7F2FA3A0;
    case 0x7F2FA3A4u: goto label_7F2FA3A4;
    case 0x7F2FA3A8u: goto label_7F2FA3A8;
    case 0x7F2FA3ACu: goto label_7F2FA3AC;
    case 0x7F2FA3B0u: goto label_7F2FA3B0;
    case 0x7F2FA3B4u: goto label_7F2FA3B4;
    case 0x7F2FA3B8u: goto label_7F2FA3B8;
    case 0x7F2FA3BCu: goto label_7F2FA3BC;
    case 0x7F2FA3C0u: goto label_7F2FA3C0;
    case 0x7F2FA3C4u: goto label_7F2FA3C4;
    case 0x7F2FA3C8u: goto label_7F2FA3C8;
    case 0x7F2FA3CCu: goto label_7F2FA3CC;
    case 0x7F2FA3D0u: goto label_7F2FA3D0;
    case 0x7F2FA3D4u: goto label_7F2FA3D4;
    case 0x7F2FA3D8u: goto label_7F2FA3D8;
    case 0x7F2FA3DCu: goto label_7F2FA3DC;
    case 0x7F2FA3E0u: goto label_7F2FA3E0;
    case 0x7F2FA3E4u: goto label_7F2FA3E4;
    case 0x7F2FA3E8u: goto label_7F2FA3E8;
    case 0x7F2FA3ECu: goto label_7F2FA3EC;
    case 0x7F2FA3F0u: goto label_7F2FA3F0;
    case 0x7F2FA3F4u: goto label_7F2FA3F4;
    case 0x7F2FA3F8u: goto label_7F2FA3F8;
    case 0x7F2FA3FCu: goto label_7F2FA3FC;
    case 0x7F2FA400u: goto label_7F2FA400;
    case 0x7F2FA404u: goto label_7F2FA404;
    case 0x7F2FA408u: goto label_7F2FA408;
    case 0x7F2FA40Cu: goto label_7F2FA40C;
    case 0x7F2FA410u: goto label_7F2FA410;
    case 0x7F2FA414u: goto label_7F2FA414;
    case 0x7F2FA418u: goto label_7F2FA418;
    case 0x7F2FA41Cu: goto label_7F2FA41C;
    case 0x7F2FA420u: goto label_7F2FA420;
    case 0x7F2FA424u: goto label_7F2FA424;
    case 0x7F2FA428u: goto label_7F2FA428;
    case 0x7F2FA42Cu: goto label_7F2FA42C;
    case 0x7F2FA430u: goto label_7F2FA430;
    case 0x7F2FA434u: goto label_7F2FA434;
    case 0x7F2FA438u: goto label_7F2FA438;
    case 0x7F2FA43Cu: goto label_7F2FA43C;
    case 0x7F2FA440u: goto label_7F2FA440;
    case 0x7F2FA444u: goto label_7F2FA444;
    case 0x7F2FA448u: goto label_7F2FA448;
    case 0x7F2FA44Cu: goto label_7F2FA44C;
    case 0x7F2FA450u: goto label_7F2FA450;
    case 0x7F2FA454u: goto label_7F2FA454;
    case 0x7F2FA458u: goto label_7F2FA458;
    case 0x7F2FA45Cu: goto label_7F2FA45C;
    case 0x7F2FA460u: goto label_7F2FA460;
    case 0x7F2FA464u: goto label_7F2FA464;
    case 0x7F2FA468u: goto label_7F2FA468;
    case 0x7F2FA46Cu: goto label_7F2FA46C;
    case 0x7F2FA470u: goto label_7F2FA470;
    case 0x7F2FA474u: goto label_7F2FA474;
    case 0x7F2FA478u: goto label_7F2FA478;
    case 0x7F2FA47Cu: goto label_7F2FA47C;
    case 0x7F2FA480u: goto label_7F2FA480;
    case 0x7F2FA484u: goto label_7F2FA484;
    case 0x7F2FA488u: goto label_7F2FA488;
    case 0x7F2FA48Cu: goto label_7F2FA48C;
    case 0x7F2FA490u: goto label_7F2FA490;
    case 0x7F2FA494u: goto label_7F2FA494;
    case 0x7F2FA498u: goto label_7F2FA498;
    case 0x7F2FA49Cu: goto label_7F2FA49C;
    case 0x7F2FA4A0u: goto label_7F2FA4A0;
    case 0x7F2FA4A4u: goto label_7F2FA4A4;
    case 0x7F2FA4A8u: goto label_7F2FA4A8;
    case 0x7F2FA4ACu: goto label_7F2FA4AC;
    case 0x7F2FA4B0u: goto label_7F2FA4B0;
    case 0x7F2FA4B4u: goto label_7F2FA4B4;
    case 0x7F2FA4B8u: goto label_7F2FA4B8;
    case 0x7F2FA4BCu: goto label_7F2FA4BC;
    case 0x7F2FA4C0u: goto label_7F2FA4C0;
    case 0x7F2FA4C4u: goto label_7F2FA4C4;
    case 0x7F2FA4C8u: goto label_7F2FA4C8;
    case 0x7F2FA4CCu: goto label_7F2FA4CC;
    case 0x7F2FA4D0u: goto label_7F2FA4D0;
    case 0x7F2FA4D4u: goto label_7F2FA4D4;
    case 0x7F2FA4D8u: goto label_7F2FA4D8;
    case 0x7F2FA4DCu: goto label_7F2FA4DC;
    case 0x7F2FA4E0u: goto label_7F2FA4E0;
    case 0x7F2FA4E4u: goto label_7F2FA4E4;
    case 0x7F2FA4E8u: goto label_7F2FA4E8;
    case 0x7F2FA4ECu: goto label_7F2FA4EC;
    case 0x7F2FA4F0u: goto label_7F2FA4F0;
    case 0x7F2FA4F4u: goto label_7F2FA4F4;
    case 0x7F2FA4F8u: goto label_7F2FA4F8;
    case 0x7F2FA4FCu: goto label_7F2FA4FC;
    case 0x7F2FA500u: goto label_7F2FA500;
    case 0x7F2FA504u: goto label_7F2FA504;
    case 0x7F2FA508u: goto label_7F2FA508;
    case 0x7F2FA50Cu: goto label_7F2FA50C;
    case 0x7F2FA510u: goto label_7F2FA510;
    case 0x7F2FA514u: goto label_7F2FA514;
    case 0x7F2FA518u: goto label_7F2FA518;
    case 0x7F2FA51Cu: goto label_7F2FA51C;
    case 0x7F2FA520u: goto label_7F2FA520;
    case 0x7F2FA524u: goto label_7F2FA524;
    case 0x7F2FA528u: goto label_7F2FA528;
    case 0x7F2FA52Cu: goto label_7F2FA52C;
    case 0x7F2FA530u: goto label_7F2FA530;
    case 0x7F2FA534u: goto label_7F2FA534;
    case 0x7F2FA538u: goto label_7F2FA538;
    case 0x7F2FA53Cu: goto label_7F2FA53C;
    case 0x7F2FA540u: goto label_7F2FA540;
    case 0x7F2FA544u: goto label_7F2FA544;
    case 0x7F2FA548u: goto label_7F2FA548;
    case 0x7F2FA54Cu: goto label_7F2FA54C;
    case 0x7F2FA550u: goto label_7F2FA550;
    case 0x7F2FA554u: goto label_7F2FA554;
    case 0x7F2FA558u: goto label_7F2FA558;
    case 0x7F2FA55Cu: goto label_7F2FA55C;
    case 0x7F2FA560u: goto label_7F2FA560;
    case 0x7F2FA564u: goto label_7F2FA564;
    case 0x7F2FA568u: goto label_7F2FA568;
    case 0x7F2FA56Cu: goto label_7F2FA56C;
    case 0x7F2FA570u: goto label_7F2FA570;
    case 0x7F2FA574u: goto label_7F2FA574;
    case 0x7F2FA578u: goto label_7F2FA578;
    case 0x7F2FA57Cu: goto label_7F2FA57C;
    case 0x7F2FA580u: goto label_7F2FA580;
    case 0x7F2FA584u: goto label_7F2FA584;
    case 0x7F2FA588u: goto label_7F2FA588;
    case 0x7F2FA58Cu: goto label_7F2FA58C;
    case 0x7F2FA590u: goto label_7F2FA590;
    case 0x7F2FA594u: goto label_7F2FA594;
    case 0x7F2FA598u: goto label_7F2FA598;
    case 0x7F2FA59Cu: goto label_7F2FA59C;
    case 0x7F2FA5A0u: goto label_7F2FA5A0;
    case 0x7F2FA5A4u: goto label_7F2FA5A4;
    case 0x7F2FA5A8u: goto label_7F2FA5A8;
    case 0x7F2FA5ACu: goto label_7F2FA5AC;
    case 0x7F2FA5B0u: goto label_7F2FA5B0;
    case 0x7F2FA5B4u: goto label_7F2FA5B4;
    case 0x7F2FA5B8u: goto label_7F2FA5B8;
    case 0x7F2FA5BCu: goto label_7F2FA5BC;
    case 0x7F2FA5C0u: goto label_7F2FA5C0;
    case 0x7F2FA5C4u: goto label_7F2FA5C4;
    case 0x7F2FA5C8u: goto label_7F2FA5C8;
    case 0x7F2FA5CCu: goto label_7F2FA5CC;
    case 0x7F2FA5D0u: goto label_7F2FA5D0;
    case 0x7F2FA5D4u: goto label_7F2FA5D4;
    case 0x7F2FA5D8u: goto label_7F2FA5D8;
    case 0x7F2FA5DCu: goto label_7F2FA5DC;
    case 0x7F2FA5E0u: goto label_7F2FA5E0;
    case 0x7F2FA5E4u: goto label_7F2FA5E4;
    case 0x7F2FA5E8u: goto label_7F2FA5E8;
    case 0x7F2FA5ECu: goto label_7F2FA5EC;
    case 0x7F2FA5F0u: goto label_7F2FA5F0;
    case 0x7F2FA5F4u: goto label_7F2FA5F4;
    case 0x7F2FA5F8u: goto label_7F2FA5F8;
    case 0x7F2FA5FCu: goto label_7F2FA5FC;
    case 0x7F2FA600u: goto label_7F2FA600;
    case 0x7F2FA604u: goto label_7F2FA604;
    case 0x7F2FA608u: goto label_7F2FA608;
    case 0x7F2FA60Cu: goto label_7F2FA60C;
    case 0x7F2FA610u: goto label_7F2FA610;
    case 0x7F2FA614u: goto label_7F2FA614;
    case 0x7F2FA618u: goto label_7F2FA618;
    case 0x7F2FA61Cu: goto label_7F2FA61C;
    case 0x7F2FA620u: goto label_7F2FA620;
    case 0x7F2FA624u: goto label_7F2FA624;
    case 0x7F2FA628u: goto label_7F2FA628;
    case 0x7F2FA62Cu: goto label_7F2FA62C;
    case 0x7F2FA630u: goto label_7F2FA630;
    case 0x7F2FA634u: goto label_7F2FA634;
    case 0x7F2FA638u: goto label_7F2FA638;
    case 0x7F2FA63Cu: goto label_7F2FA63C;
    case 0x7F2FA640u: goto label_7F2FA640;
    case 0x7F2FA644u: goto label_7F2FA644;
    case 0x7F2FA648u: goto label_7F2FA648;
    case 0x7F2FA64Cu: goto label_7F2FA64C;
    case 0x7F2FA650u: goto label_7F2FA650;
    case 0x7F2FA654u: goto label_7F2FA654;
    case 0x7F2FA658u: goto label_7F2FA658;
    case 0x7F2FA65Cu: goto label_7F2FA65C;
    case 0x7F2FA660u: goto label_7F2FA660;
    case 0x7F2FA664u: goto label_7F2FA664;
    case 0x7F2FA668u: goto label_7F2FA668;
    case 0x7F2FA66Cu: goto label_7F2FA66C;
    case 0x7F2FA670u: goto label_7F2FA670;
    case 0x7F2FA674u: goto label_7F2FA674;
    case 0x7F2FA678u: goto label_7F2FA678;
    case 0x7F2FA67Cu: goto label_7F2FA67C;
    case 0x7F2FA680u: goto label_7F2FA680;
    case 0x7F2FA684u: goto label_7F2FA684;
    case 0x7F2FA688u: goto label_7F2FA688;
    case 0x7F2FA68Cu: goto label_7F2FA68C;
    case 0x7F2FA690u: goto label_7F2FA690;
    case 0x7F2FA694u: goto label_7F2FA694;
    case 0x7F2FA698u: goto label_7F2FA698;
    case 0x7F2FA69Cu: goto label_7F2FA69C;
    case 0x7F2FA6A0u: goto label_7F2FA6A0;
    case 0x7F2FA6A4u: goto label_7F2FA6A4;
    case 0x7F2FA6A8u: goto label_7F2FA6A8;
    case 0x7F2FA6ACu: goto label_7F2FA6AC;
    case 0x7F2FA6B0u: goto label_7F2FA6B0;
    case 0x7F2FA6B4u: goto label_7F2FA6B4;
    case 0x7F2FA6B8u: goto label_7F2FA6B8;
    case 0x7F2FA6BCu: goto label_7F2FA6BC;
    case 0x7F2FA6C0u: goto label_7F2FA6C0;
    case 0x7F2FA6C4u: goto label_7F2FA6C4;
    case 0x7F2FA6C8u: goto label_7F2FA6C8;
    case 0x7F2FA6CCu: goto label_7F2FA6CC;
    case 0x7F2FA6D0u: goto label_7F2FA6D0;
    case 0x7F2FA6D4u: goto label_7F2FA6D4;
    case 0x7F2FA6D8u: goto label_7F2FA6D8;
    case 0x7F2FA6DCu: goto label_7F2FA6DC;
    case 0x7F2FA6E0u: goto label_7F2FA6E0;
    case 0x7F2FA6E4u: goto label_7F2FA6E4;
    case 0x7F2FA6E8u: goto label_7F2FA6E8;
    case 0x7F2FA6ECu: goto label_7F2FA6EC;
    case 0x7F2FA6F0u: goto label_7F2FA6F0;
    case 0x7F2FA6F4u: goto label_7F2FA6F4;
    case 0x7F2FA6F8u: goto label_7F2FA6F8;
    case 0x7F2FA6FCu: goto label_7F2FA6FC;
    case 0x7F2FA700u: goto label_7F2FA700;
    case 0x7F2FA704u: goto label_7F2FA704;
    case 0x7F2FA708u: goto label_7F2FA708;
    case 0x7F2FA70Cu: goto label_7F2FA70C;
    case 0x7F2FA710u: goto label_7F2FA710;
    case 0x7F2FA714u: goto label_7F2FA714;
    case 0x7F2FA718u: goto label_7F2FA718;
    case 0x7F2FA71Cu: goto label_7F2FA71C;
    case 0x7F2FA720u: goto label_7F2FA720;
    case 0x7F2FA724u: goto label_7F2FA724;
    case 0x7F2FA728u: goto label_7F2FA728;
    case 0x7F2FA72Cu: goto label_7F2FA72C;
    case 0x7F2FA730u: goto label_7F2FA730;
    case 0x7F2FA734u: goto label_7F2FA734;
    case 0x7F2FA738u: goto label_7F2FA738;
    case 0x7F2FA73Cu: goto label_7F2FA73C;
    case 0x7F2FA740u: goto label_7F2FA740;
    case 0x7F2FA744u: goto label_7F2FA744;
    case 0x7F2FA748u: goto label_7F2FA748;
    case 0x7F2FA74Cu: goto label_7F2FA74C;
    case 0x7F2FA750u: goto label_7F2FA750;
    case 0x7F2FA754u: goto label_7F2FA754;
    case 0x7F2FA758u: goto label_7F2FA758;
    case 0x7F2FA75Cu: goto label_7F2FA75C;
    case 0x7F2FA760u: goto label_7F2FA760;
    case 0x7F2FA764u: goto label_7F2FA764;
    case 0x7F2FA768u: goto label_7F2FA768;
    case 0x7F2FA76Cu: goto label_7F2FA76C;
    case 0x7F2FA770u: goto label_7F2FA770;
    case 0x7F2FA774u: goto label_7F2FA774;
    case 0x7F2FA778u: goto label_7F2FA778;
    case 0x7F2FA77Cu: goto label_7F2FA77C;
    case 0x7F2FA780u: goto label_7F2FA780;
    case 0x7F2FA784u: goto label_7F2FA784;
    case 0x7F2FA788u: goto label_7F2FA788;
    case 0x7F2FA78Cu: goto label_7F2FA78C;
    case 0x7F2FA790u: goto label_7F2FA790;
    case 0x7F2FA794u: goto label_7F2FA794;
    case 0x7F2FA798u: goto label_7F2FA798;
    case 0x7F2FA79Cu: goto label_7F2FA79C;
    case 0x7F2FA7A0u: goto label_7F2FA7A0;
    case 0x7F2FA7A4u: goto label_7F2FA7A4;
    case 0x7F2FA7A8u: goto label_7F2FA7A8;
    case 0x7F2FA7ACu: goto label_7F2FA7AC;
    case 0x7F2FA7B0u: goto label_7F2FA7B0;
    case 0x7F2FA7B4u: goto label_7F2FA7B4;
    case 0x7F2FA7B8u: goto label_7F2FA7B8;
    case 0x7F2FA7BCu: goto label_7F2FA7BC;
    case 0x7F2FA7C0u: goto label_7F2FA7C0;
    case 0x7F2FA7C4u: goto label_7F2FA7C4;
    case 0x7F2FA7C8u: goto label_7F2FA7C8;
    case 0x7F2FA7CCu: goto label_7F2FA7CC;
    case 0x7F2FA7D0u: goto label_7F2FA7D0;
    case 0x7F2FA7D4u: goto label_7F2FA7D4;
    case 0x7F2FA7D8u: goto label_7F2FA7D8;
    case 0x7F2FA7DCu: goto label_7F2FA7DC;
    case 0x7F2FA7E0u: goto label_7F2FA7E0;
    case 0x7F2FA7E4u: goto label_7F2FA7E4;
    case 0x7F2FA7E8u: goto label_7F2FA7E8;
    case 0x7F2FA7ECu: goto label_7F2FA7EC;
    case 0x7F2FA7F0u: goto label_7F2FA7F0;
    case 0x7F2FA7F4u: goto label_7F2FA7F4;
    case 0x7F2FA7F8u: goto label_7F2FA7F8;
    case 0x7F2FA7FCu: goto label_7F2FA7FC;
    case 0x7F2FA800u: goto label_7F2FA800;
    case 0x7F2FA804u: goto label_7F2FA804;
    case 0x7F2FA808u: goto label_7F2FA808;
    case 0x7F2FA80Cu: goto label_7F2FA80C;
    case 0x7F2FA810u: goto label_7F2FA810;
    case 0x7F2FA814u: goto label_7F2FA814;
    case 0x7F2FA818u: goto label_7F2FA818;
    case 0x7F2FA81Cu: goto label_7F2FA81C;
    case 0x7F2FA820u: goto label_7F2FA820;
    case 0x7F2FA824u: goto label_7F2FA824;
    case 0x7F2FA828u: goto label_7F2FA828;
    case 0x7F2FA82Cu: goto label_7F2FA82C;
    case 0x7F2FA830u: goto label_7F2FA830;
    case 0x7F2FA834u: goto label_7F2FA834;
    case 0x7F2FA838u: goto label_7F2FA838;
    case 0x7F2FA83Cu: goto label_7F2FA83C;
    case 0x7F2FA840u: goto label_7F2FA840;
    case 0x7F2FA844u: goto label_7F2FA844;
    case 0x7F2FA848u: goto label_7F2FA848;
    case 0x7F2FA84Cu: goto label_7F2FA84C;
    case 0x7F2FA850u: goto label_7F2FA850;
    case 0x7F2FA854u: goto label_7F2FA854;
    case 0x7F2FA858u: goto label_7F2FA858;
    case 0x7F2FA85Cu: goto label_7F2FA85C;
    case 0x7F2FA860u: goto label_7F2FA860;
    case 0x7F2FA864u: goto label_7F2FA864;
    case 0x7F2FA868u: goto label_7F2FA868;
    case 0x7F2FA86Cu: goto label_7F2FA86C;
    case 0x7F2FA870u: goto label_7F2FA870;
    case 0x7F2FA874u: goto label_7F2FA874;
    case 0x7F2FA878u: goto label_7F2FA878;
    case 0x7F2FA87Cu: goto label_7F2FA87C;
    case 0x7F2FA880u: goto label_7F2FA880;
    case 0x7F2FA884u: goto label_7F2FA884;
    case 0x7F2FA888u: goto label_7F2FA888;
    case 0x7F2FA88Cu: goto label_7F2FA88C;
    case 0x7F2FA890u: goto label_7F2FA890;
    case 0x7F2FA894u: goto label_7F2FA894;
    case 0x7F2FA898u: goto label_7F2FA898;
    case 0x7F2FA89Cu: goto label_7F2FA89C;
    case 0x7F2FA8A0u: goto label_7F2FA8A0;
    case 0x7F2FA8A4u: goto label_7F2FA8A4;
    case 0x7F2FA8A8u: goto label_7F2FA8A8;
    case 0x7F2FA8ACu: goto label_7F2FA8AC;
    case 0x7F2FA8B0u: goto label_7F2FA8B0;
    case 0x7F2FA8B4u: goto label_7F2FA8B4;
    case 0x7F2FA8B8u: goto label_7F2FA8B8;
    case 0x7F2FA8BCu: goto label_7F2FA8BC;
    case 0x7F2FA8C0u: goto label_7F2FA8C0;
    case 0x7F2FA8C4u: goto label_7F2FA8C4;
    case 0x7F2FA8C8u: goto label_7F2FA8C8;
    case 0x7F2FA8CCu: goto label_7F2FA8CC;
    case 0x7F2FA8D0u: goto label_7F2FA8D0;
    case 0x7F2FA8D4u: goto label_7F2FA8D4;
    case 0x7F2FA8D8u: goto label_7F2FA8D8;
    case 0x7F2FA8DCu: goto label_7F2FA8DC;
    case 0x7F2FA8E0u: goto label_7F2FA8E0;
    case 0x7F2FA8E4u: goto label_7F2FA8E4;
    case 0x7F2FA8E8u: goto label_7F2FA8E8;
    case 0x7F2FA8ECu: goto label_7F2FA8EC;
    case 0x7F2FA8F0u: goto label_7F2FA8F0;
    case 0x7F2FA8F4u: goto label_7F2FA8F4;
    case 0x7F2FA8F8u: goto label_7F2FA8F8;
    case 0x7F2FA8FCu: goto label_7F2FA8FC;
    case 0x7F2FA900u: goto label_7F2FA900;
    case 0x7F2FA904u: goto label_7F2FA904;
    case 0x7F2FA908u: goto label_7F2FA908;
    case 0x7F2FA90Cu: goto label_7F2FA90C;
    case 0x7F2FA910u: goto label_7F2FA910;
    case 0x7F2FA914u: goto label_7F2FA914;
    case 0x7F2FA918u: goto label_7F2FA918;
    case 0x7F2FA91Cu: goto label_7F2FA91C;
    case 0x7F2FA920u: goto label_7F2FA920;
    case 0x7F2FA924u: goto label_7F2FA924;
    case 0x7F2FA928u: goto label_7F2FA928;
    case 0x7F2FA92Cu: goto label_7F2FA92C;
    case 0x7F2FA930u: goto label_7F2FA930;
    case 0x7F2FA934u: goto label_7F2FA934;
    case 0x7F2FA938u: goto label_7F2FA938;
    case 0x7F2FA93Cu: goto label_7F2FA93C;
    case 0x7F2FA940u: goto label_7F2FA940;
    case 0x7F2FA944u: goto label_7F2FA944;
    case 0x7F2FA948u: goto label_7F2FA948;
    case 0x7F2FA94Cu: goto label_7F2FA94C;
    case 0x7F2FA950u: goto label_7F2FA950;
    case 0x7F2FA954u: goto label_7F2FA954;
    case 0x7F2FA958u: goto label_7F2FA958;
    case 0x7F2FA95Cu: goto label_7F2FA95C;
    case 0x7F2FA960u: goto label_7F2FA960;
    case 0x7F2FA964u: goto label_7F2FA964;
    case 0x7F2FA968u: goto label_7F2FA968;
    case 0x7F2FA96Cu: goto label_7F2FA96C;
    case 0x7F2FA970u: goto label_7F2FA970;
    case 0x7F2FA974u: goto label_7F2FA974;
    case 0x7F2FA978u: goto label_7F2FA978;
    case 0x7F2FA97Cu: goto label_7F2FA97C;
    case 0x7F2FA980u: goto label_7F2FA980;
    case 0x7F2FA984u: goto label_7F2FA984;
    case 0x7F2FA988u: goto label_7F2FA988;
    case 0x7F2FA98Cu: goto label_7F2FA98C;
    case 0x7F2FA990u: goto label_7F2FA990;
    case 0x7F2FA994u: goto label_7F2FA994;
    case 0x7F2FA998u: goto label_7F2FA998;
    case 0x7F2FA99Cu: goto label_7F2FA99C;
    case 0x7F2FA9A0u: goto label_7F2FA9A0;
    case 0x7F2FA9A4u: goto label_7F2FA9A4;
    case 0x7F2FA9A8u: goto label_7F2FA9A8;
    case 0x7F2FA9ACu: goto label_7F2FA9AC;
    case 0x7F2FA9B0u: goto label_7F2FA9B0;
    case 0x7F2FA9B4u: goto label_7F2FA9B4;
    case 0x7F2FA9B8u: goto label_7F2FA9B8;
    case 0x7F2FA9BCu: goto label_7F2FA9BC;
    case 0x7F2FA9C0u: goto label_7F2FA9C0;
    case 0x7F2FA9C4u: goto label_7F2FA9C4;
    case 0x7F2FA9C8u: goto label_7F2FA9C8;
    case 0x7F2FA9CCu: goto label_7F2FA9CC;
    case 0x7F2FA9D0u: goto label_7F2FA9D0;
    case 0x7F2FA9D4u: goto label_7F2FA9D4;
    case 0x7F2FA9D8u: goto label_7F2FA9D8;
    case 0x7F2FA9DCu: goto label_7F2FA9DC;
    case 0x7F2FA9E0u: goto label_7F2FA9E0;
    case 0x7F2FA9E4u: goto label_7F2FA9E4;
    case 0x7F2FA9E8u: goto label_7F2FA9E8;
    case 0x7F2FA9ECu: goto label_7F2FA9EC;
    case 0x7F2FA9F0u: goto label_7F2FA9F0;
    case 0x7F2FA9F4u: goto label_7F2FA9F4;
    case 0x7F2FA9F8u: goto label_7F2FA9F8;
    case 0x7F2FA9FCu: goto label_7F2FA9FC;
    case 0x7F2FAA00u: goto label_7F2FAA00;
    case 0x7F2FAA04u: goto label_7F2FAA04;
    case 0x7F2FAA08u: goto label_7F2FAA08;
    case 0x7F2FAA0Cu: goto label_7F2FAA0C;
    case 0x7F2FAA10u: goto label_7F2FAA10;
    case 0x7F2FAA14u: goto label_7F2FAA14;
    case 0x7F2FAA18u: goto label_7F2FAA18;
    case 0x7F2FAA1Cu: goto label_7F2FAA1C;
    case 0x7F2FAA20u: goto label_7F2FAA20;
    case 0x7F2FAA24u: goto label_7F2FAA24;
    case 0x7F2FAA28u: goto label_7F2FAA28;
    case 0x7F2FAA2Cu: goto label_7F2FAA2C;
    case 0x7F2FAA30u: goto label_7F2FAA30;
    case 0x7F2FAA34u: goto label_7F2FAA34;
    case 0x7F2FAA38u: goto label_7F2FAA38;
    case 0x7F2FAA3Cu: goto label_7F2FAA3C;
    case 0x7F2FAA40u: goto label_7F2FAA40;
    case 0x7F2FAA44u: goto label_7F2FAA44;
    case 0x7F2FAA48u: goto label_7F2FAA48;
    case 0x7F2FAA4Cu: goto label_7F2FAA4C;
    case 0x7F2FAA50u: goto label_7F2FAA50;
    case 0x7F2FAA54u: goto label_7F2FAA54;
    case 0x7F2FAA58u: goto label_7F2FAA58;
    case 0x7F2FAA5Cu: goto label_7F2FAA5C;
    case 0x7F2FAA60u: goto label_7F2FAA60;
    case 0x7F2FAA64u: goto label_7F2FAA64;
    case 0x7F2FAA68u: goto label_7F2FAA68;
    case 0x7F2FAA6Cu: goto label_7F2FAA6C;
    case 0x7F2FAA70u: goto label_7F2FAA70;
    case 0x7F2FAA74u: goto label_7F2FAA74;
    case 0x7F2FAA78u: goto label_7F2FAA78;
    case 0x7F2FAA7Cu: goto label_7F2FAA7C;
    case 0x7F2FAA80u: goto label_7F2FAA80;
    case 0x7F2FAA84u: goto label_7F2FAA84;
    case 0x7F2FAA88u: goto label_7F2FAA88;
    case 0x7F2FAA8Cu: goto label_7F2FAA8C;
    case 0x7F2FAA90u: goto label_7F2FAA90;
    case 0x7F2FAA94u: goto label_7F2FAA94;
    case 0x7F2FAA98u: goto label_7F2FAA98;
    case 0x7F2FAA9Cu: goto label_7F2FAA9C;
    case 0x7F2FAAA0u: goto label_7F2FAAA0;
    case 0x7F2FAAA4u: goto label_7F2FAAA4;
    case 0x7F2FAAA8u: goto label_7F2FAAA8;
    case 0x7F2FAAACu: goto label_7F2FAAAC;
    case 0x7F2FAAB0u: goto label_7F2FAAB0;
    case 0x7F2FAAB4u: goto label_7F2FAAB4;
    case 0x7F2FAAB8u: goto label_7F2FAAB8;
    case 0x7F2FAABCu: goto label_7F2FAABC;
    case 0x7F2FAAC0u: goto label_7F2FAAC0;
    case 0x7F2FAAC4u: goto label_7F2FAAC4;
    case 0x7F2FAAC8u: goto label_7F2FAAC8;
    case 0x7F2FAACCu: goto label_7F2FAACC;
    case 0x7F2FAAD0u: goto label_7F2FAAD0;
    case 0x7F2FAAD4u: goto label_7F2FAAD4;
    case 0x7F2FAAD8u: goto label_7F2FAAD8;
    case 0x7F2FAADCu: goto label_7F2FAADC;
    case 0x7F2FAAE0u: goto label_7F2FAAE0;
    case 0x7F2FAAE4u: goto label_7F2FAAE4;
    case 0x7F2FAAE8u: goto label_7F2FAAE8;
    case 0x7F2FAAECu: goto label_7F2FAAEC;
    case 0x7F2FAAF0u: goto label_7F2FAAF0;
    case 0x7F2FAAF4u: goto label_7F2FAAF4;
    case 0x7F2FAAF8u: goto label_7F2FAAF8;
    case 0x7F2FAAFCu: goto label_7F2FAAFC;
    case 0x7F2FAB00u: goto label_7F2FAB00;
    case 0x7F2FAB04u: goto label_7F2FAB04;
    case 0x7F2FAB08u: goto label_7F2FAB08;
    case 0x7F2FAB0Cu: goto label_7F2FAB0C;
    case 0x7F2FAB10u: goto label_7F2FAB10;
    case 0x7F2FAB14u: goto label_7F2FAB14;
    case 0x7F2FAB18u: goto label_7F2FAB18;
    case 0x7F2FAB1Cu: goto label_7F2FAB1C;
    case 0x7F2FAB20u: goto label_7F2FAB20;
    case 0x7F2FAB24u: goto label_7F2FAB24;
    case 0x7F2FAB28u: goto label_7F2FAB28;
    case 0x7F2FAB2Cu: goto label_7F2FAB2C;
    case 0x7F2FAB30u: goto label_7F2FAB30;
    case 0x7F2FAB34u: goto label_7F2FAB34;
    case 0x7F2FAB38u: goto label_7F2FAB38;
    case 0x7F2FAB3Cu: goto label_7F2FAB3C;
    case 0x7F2FAB40u: goto label_7F2FAB40;
    case 0x7F2FAB44u: goto label_7F2FAB44;
    case 0x7F2FAB48u: goto label_7F2FAB48;
    case 0x7F2FAB4Cu: goto label_7F2FAB4C;
    case 0x7F2FAB50u: goto label_7F2FAB50;
    case 0x7F2FAB54u: goto label_7F2FAB54;
    case 0x7F2FAB58u: goto label_7F2FAB58;
    case 0x7F2FAB5Cu: goto label_7F2FAB5C;
    case 0x7F2FAB60u: goto label_7F2FAB60;
    case 0x7F2FAB64u: goto label_7F2FAB64;
    case 0x7F2FAB68u: goto label_7F2FAB68;
    case 0x7F2FAB6Cu: goto label_7F2FAB6C;
    case 0x7F2FAB70u: goto label_7F2FAB70;
    case 0x7F2FAB74u: goto label_7F2FAB74;
    case 0x7F2FAB78u: goto label_7F2FAB78;
    case 0x7F2FAB7Cu: goto label_7F2FAB7C;
    case 0x7F2FAB80u: goto label_7F2FAB80;
    case 0x7F2FAB84u: goto label_7F2FAB84;
    case 0x7F2FAB88u: goto label_7F2FAB88;
    case 0x7F2FAB8Cu: goto label_7F2FAB8C;
    case 0x7F2FAB90u: goto label_7F2FAB90;
    case 0x7F2FAB94u: goto label_7F2FAB94;
    case 0x7F2FAB98u: goto label_7F2FAB98;
    case 0x7F2FAB9Cu: goto label_7F2FAB9C;
    case 0x7F2FABA0u: goto label_7F2FABA0;
    case 0x7F2FABA4u: goto label_7F2FABA4;
    case 0x7F2FABA8u: goto label_7F2FABA8;
    case 0x7F2FABACu: goto label_7F2FABAC;
    case 0x7F2FABB0u: goto label_7F2FABB0;
    case 0x7F2FABB4u: goto label_7F2FABB4;
    case 0x7F2FABB8u: goto label_7F2FABB8;
    case 0x7F2FABBCu: goto label_7F2FABBC;
    case 0x7F2FABC0u: goto label_7F2FABC0;
    case 0x7F2FABC4u: goto label_7F2FABC4;
    case 0x7F2FABC8u: goto label_7F2FABC8;
    case 0x7F2FABCCu: goto label_7F2FABCC;
    case 0x7F2FABD0u: goto label_7F2FABD0;
    case 0x7F2FABD4u: goto label_7F2FABD4;
    case 0x7F2FABD8u: goto label_7F2FABD8;
    case 0x7F2FABDCu: goto label_7F2FABDC;
    case 0x7F2FABE0u: goto label_7F2FABE0;
    case 0x7F2FABE4u: goto label_7F2FABE4;
    case 0x7F2FABE8u: goto label_7F2FABE8;
    case 0x7F2FABECu: goto label_7F2FABEC;
    case 0x7F2FABF0u: goto label_7F2FABF0;
    case 0x7F2FABF4u: goto label_7F2FABF4;
    case 0x7F2FABF8u: goto label_7F2FABF8;
    case 0x7F2FABFCu: goto label_7F2FABFC;
    case 0x7F2FAC00u: goto label_7F2FAC00;
    case 0x7F2FAC04u: goto label_7F2FAC04;
    case 0x7F2FAC08u: goto label_7F2FAC08;
    case 0x7F2FAC0Cu: goto label_7F2FAC0C;
    case 0x7F2FAC10u: goto label_7F2FAC10;
    case 0x7F2FAC14u: goto label_7F2FAC14;
    case 0x7F2FAC18u: goto label_7F2FAC18;
    case 0x7F2FAC1Cu: goto label_7F2FAC1C;
    case 0x7F2FAC20u: goto label_7F2FAC20;
    case 0x7F2FAC24u: goto label_7F2FAC24;
    case 0x7F2FAC28u: goto label_7F2FAC28;
    case 0x7F2FAC2Cu: goto label_7F2FAC2C;
    case 0x7F2FAC30u: goto label_7F2FAC30;
    case 0x7F2FAC34u: goto label_7F2FAC34;
    case 0x7F2FAC38u: goto label_7F2FAC38;
    case 0x7F2FAC3Cu: goto label_7F2FAC3C;
    case 0x7F2FAC40u: goto label_7F2FAC40;
    case 0x7F2FAC44u: goto label_7F2FAC44;
    case 0x7F2FAC48u: goto label_7F2FAC48;
    case 0x7F2FAC4Cu: goto label_7F2FAC4C;
    case 0x7F2FAC50u: goto label_7F2FAC50;
    case 0x7F2FAC54u: goto label_7F2FAC54;
    case 0x7F2FAC58u: goto label_7F2FAC58;
    case 0x7F2FAC5Cu: goto label_7F2FAC5C;
    case 0x7F2FAC60u: goto label_7F2FAC60;
    case 0x7F2FAC64u: goto label_7F2FAC64;
    case 0x7F2FAC68u: goto label_7F2FAC68;
    case 0x7F2FAC6Cu: goto label_7F2FAC6C;
    case 0x7F2FAC70u: goto label_7F2FAC70;
    case 0x7F2FAC74u: goto label_7F2FAC74;
    case 0x7F2FAC78u: goto label_7F2FAC78;
    case 0x7F2FAC7Cu: goto label_7F2FAC7C;
    case 0x7F2FAC80u: goto label_7F2FAC80;
    case 0x7F2FAC84u: goto label_7F2FAC84;
    case 0x7F2FAC88u: goto label_7F2FAC88;
    case 0x7F2FAC8Cu: goto label_7F2FAC8C;
    case 0x7F2FAC90u: goto label_7F2FAC90;
    case 0x7F2FAC94u: goto label_7F2FAC94;
    case 0x7F2FAC98u: goto label_7F2FAC98;
    case 0x7F2FAC9Cu: goto label_7F2FAC9C;
    case 0x7F2FACA0u: goto label_7F2FACA0;
    case 0x7F2FACA4u: goto label_7F2FACA4;
    case 0x7F2FACA8u: goto label_7F2FACA8;
    case 0x7F2FACACu: goto label_7F2FACAC;
    case 0x7F2FACB0u: goto label_7F2FACB0;
    case 0x7F2FACB4u: goto label_7F2FACB4;
    case 0x7F2FACB8u: goto label_7F2FACB8;
    case 0x7F2FACBCu: goto label_7F2FACBC;
    case 0x7F2FACC0u: goto label_7F2FACC0;
    case 0x7F2FACC4u: goto label_7F2FACC4;
    case 0x7F2FACC8u: goto label_7F2FACC8;
    case 0x7F2FACCCu: goto label_7F2FACCC;
    case 0x7F2FACD0u: goto label_7F2FACD0;
    case 0x7F2FACD4u: goto label_7F2FACD4;
    case 0x7F2FACD8u: goto label_7F2FACD8;
    case 0x7F2FACDCu: goto label_7F2FACDC;
    case 0x7F2FACE0u: goto label_7F2FACE0;
    case 0x7F2FACE4u: goto label_7F2FACE4;
    case 0x7F2FACE8u: goto label_7F2FACE8;
    case 0x7F2FACECu: goto label_7F2FACEC;
    case 0x7F2FACF0u: goto label_7F2FACF0;
    case 0x7F2FACF4u: goto label_7F2FACF4;
    case 0x7F2FACF8u: goto label_7F2FACF8;
    case 0x7F2FACFCu: goto label_7F2FACFC;
    case 0x7F2FAD00u: goto label_7F2FAD00;
    case 0x7F2FAD04u: goto label_7F2FAD04;
    case 0x7F2FAD08u: goto label_7F2FAD08;
    case 0x7F2FAD0Cu: goto label_7F2FAD0C;
    case 0x7F2FAD10u: goto label_7F2FAD10;
    case 0x7F2FAD14u: goto label_7F2FAD14;
    case 0x7F2FAD18u: goto label_7F2FAD18;
    case 0x7F2FAD1Cu: goto label_7F2FAD1C;
    case 0x7F2FAD20u: goto label_7F2FAD20;
    case 0x7F2FAD24u: goto label_7F2FAD24;
    case 0x7F2FAD28u: goto label_7F2FAD28;
    case 0x7F2FAD2Cu: goto label_7F2FAD2C;
    case 0x7F2FAD30u: goto label_7F2FAD30;
    case 0x7F2FAD34u: goto label_7F2FAD34;
    case 0x7F2FAD38u: goto label_7F2FAD38;
    case 0x7F2FAD3Cu: goto label_7F2FAD3C;
    case 0x7F2FAD40u: goto label_7F2FAD40;
    case 0x7F2FAD44u: goto label_7F2FAD44;
    case 0x7F2FAD48u: goto label_7F2FAD48;
    case 0x7F2FAD4Cu: goto label_7F2FAD4C;
    case 0x7F2FAD50u: goto label_7F2FAD50;
    case 0x7F2FAD54u: goto label_7F2FAD54;
    case 0x7F2FAD58u: goto label_7F2FAD58;
    case 0x7F2FAD5Cu: goto label_7F2FAD5C;
    case 0x7F2FAD60u: goto label_7F2FAD60;
    case 0x7F2FAD64u: goto label_7F2FAD64;
    case 0x7F2FAD68u: goto label_7F2FAD68;
    case 0x7F2FAD6Cu: goto label_7F2FAD6C;
    case 0x7F2FAD70u: goto label_7F2FAD70;
    case 0x7F2FAD74u: goto label_7F2FAD74;
    case 0x7F2FAD78u: goto label_7F2FAD78;
    case 0x7F2FAD7Cu: goto label_7F2FAD7C;
    case 0x7F2FAD80u: goto label_7F2FAD80;
    case 0x7F2FAD84u: goto label_7F2FAD84;
    case 0x7F2FAD88u: goto label_7F2FAD88;
    case 0x7F2FAD8Cu: goto label_7F2FAD8C;
    case 0x7F2FAD90u: goto label_7F2FAD90;
    case 0x7F2FAD94u: goto label_7F2FAD94;
    case 0x7F2FAD98u: goto label_7F2FAD98;
    case 0x7F2FAD9Cu: goto label_7F2FAD9C;
    case 0x7F2FADA0u: goto label_7F2FADA0;
    case 0x7F2FADA4u: goto label_7F2FADA4;
    case 0x7F2FADA8u: goto label_7F2FADA8;
    case 0x7F2FADACu: goto label_7F2FADAC;
    case 0x7F2FADB0u: goto label_7F2FADB0;
    case 0x7F2FADB4u: goto label_7F2FADB4;
    case 0x7F2FADB8u: goto label_7F2FADB8;
    case 0x7F2FADBCu: goto label_7F2FADBC;
    case 0x7F2FADC0u: goto label_7F2FADC0;
    case 0x7F2FADC4u: goto label_7F2FADC4;
    case 0x7F2FADC8u: goto label_7F2FADC8;
    case 0x7F2FADCCu: goto label_7F2FADCC;
    case 0x7F2FADD0u: goto label_7F2FADD0;
    case 0x7F2FADD4u: goto label_7F2FADD4;
    case 0x7F2FADD8u: goto label_7F2FADD8;
    case 0x7F2FADDCu: goto label_7F2FADDC;
    case 0x7F2FADE0u: goto label_7F2FADE0;
    case 0x7F2FADE4u: goto label_7F2FADE4;
    case 0x7F2FADE8u: goto label_7F2FADE8;
    case 0x7F2FADECu: goto label_7F2FADEC;
    case 0x7F2FADF0u: goto label_7F2FADF0;
    case 0x7F2FADF4u: goto label_7F2FADF4;
    case 0x7F2FADF8u: goto label_7F2FADF8;
    case 0x7F2FADFCu: goto label_7F2FADFC;
    case 0x7F2FAE00u: goto label_7F2FAE00;
    case 0x7F2FAE04u: goto label_7F2FAE04;
    case 0x7F2FAE08u: goto label_7F2FAE08;
    case 0x7F2FAE0Cu: goto label_7F2FAE0C;
    case 0x7F2FAE10u: goto label_7F2FAE10;
    case 0x7F2FAE14u: goto label_7F2FAE14;
    case 0x7F2FAE18u: goto label_7F2FAE18;
    case 0x7F2FAE1Cu: goto label_7F2FAE1C;
    case 0x7F2FAE20u: goto label_7F2FAE20;
    case 0x7F2FAE24u: goto label_7F2FAE24;
    case 0x7F2FAE28u: goto label_7F2FAE28;
    case 0x7F2FAE2Cu: goto label_7F2FAE2C;
    case 0x7F2FAE30u: goto label_7F2FAE30;
    case 0x7F2FAE34u: goto label_7F2FAE34;
    case 0x7F2FAE38u: goto label_7F2FAE38;
    case 0x7F2FAE3Cu: goto label_7F2FAE3C;
    case 0x7F2FAE40u: goto label_7F2FAE40;
    case 0x7F2FAE44u: goto label_7F2FAE44;
    case 0x7F2FAE48u: goto label_7F2FAE48;
    case 0x7F2FAE4Cu: goto label_7F2FAE4C;
    case 0x7F2FAE50u: goto label_7F2FAE50;
    case 0x7F2FAE54u: goto label_7F2FAE54;
    case 0x7F2FAE58u: goto label_7F2FAE58;
    case 0x7F2FAE5Cu: goto label_7F2FAE5C;
    case 0x7F2FAE60u: goto label_7F2FAE60;
    case 0x7F2FAE64u: goto label_7F2FAE64;
    case 0x7F2FAE68u: goto label_7F2FAE68;
    case 0x7F2FAE6Cu: goto label_7F2FAE6C;
    case 0x7F2FAE70u: goto label_7F2FAE70;
    case 0x7F2FAE74u: goto label_7F2FAE74;
    case 0x7F2FAE78u: goto label_7F2FAE78;
    case 0x7F2FAE7Cu: goto label_7F2FAE7C;
    case 0x7F2FAE80u: goto label_7F2FAE80;
    case 0x7F2FAE84u: goto label_7F2FAE84;
    case 0x7F2FAE88u: goto label_7F2FAE88;
    case 0x7F2FAE8Cu: goto label_7F2FAE8C;
    case 0x7F2FAE90u: goto label_7F2FAE90;
    case 0x7F2FAE94u: goto label_7F2FAE94;
    case 0x7F2FAE98u: goto label_7F2FAE98;
    case 0x7F2FAE9Cu: goto label_7F2FAE9C;
    case 0x7F2FAEA0u: goto label_7F2FAEA0;
    case 0x7F2FAEA4u: goto label_7F2FAEA4;
    case 0x7F2FAEA8u: goto label_7F2FAEA8;
    case 0x7F2FAEACu: goto label_7F2FAEAC;
    case 0x7F2FAEB0u: goto label_7F2FAEB0;
    case 0x7F2FAEB4u: goto label_7F2FAEB4;
    case 0x7F2FAEB8u: goto label_7F2FAEB8;
    case 0x7F2FAEBCu: goto label_7F2FAEBC;
    case 0x7F2FAEC0u: goto label_7F2FAEC0;
    case 0x7F2FAEC4u: goto label_7F2FAEC4;
    case 0x7F2FAEC8u: goto label_7F2FAEC8;
    case 0x7F2FAECCu: goto label_7F2FAECC;
    case 0x7F2FAED0u: goto label_7F2FAED0;
    case 0x7F2FAED4u: goto label_7F2FAED4;
    case 0x7F2FAED8u: goto label_7F2FAED8;
    case 0x7F2FAEDCu: goto label_7F2FAEDC;
    case 0x7F2FAEE0u: goto label_7F2FAEE0;
    case 0x7F2FAEE4u: goto label_7F2FAEE4;
    case 0x7F2FAEE8u: goto label_7F2FAEE8;
    case 0x7F2FAEECu: goto label_7F2FAEEC;
    case 0x7F2FAEF0u: goto label_7F2FAEF0;
    case 0x7F2FAEF4u: goto label_7F2FAEF4;
    case 0x7F2FAEF8u: goto label_7F2FAEF8;
    case 0x7F2FAEFCu: goto label_7F2FAEFC;
    case 0x7F2FAF00u: goto label_7F2FAF00;
    case 0x7F2FAF04u: goto label_7F2FAF04;
    case 0x7F2FAF08u: goto label_7F2FAF08;
    case 0x7F2FAF0Cu: goto label_7F2FAF0C;
    case 0x7F2FAF10u: goto label_7F2FAF10;
    case 0x7F2FAF14u: goto label_7F2FAF14;
    case 0x7F2FAF18u: goto label_7F2FAF18;
    case 0x7F2FAF1Cu: goto label_7F2FAF1C;
    case 0x7F2FAF20u: goto label_7F2FAF20;
    case 0x7F2FAF24u: goto label_7F2FAF24;
    case 0x7F2FAF28u: goto label_7F2FAF28;
    case 0x7F2FAF2Cu: goto label_7F2FAF2C;
    case 0x7F2FAF30u: goto label_7F2FAF30;
    case 0x7F2FAF34u: goto label_7F2FAF34;
    case 0x7F2FAF38u: goto label_7F2FAF38;
    case 0x7F2FAF3Cu: goto label_7F2FAF3C;
    case 0x7F2FAF40u: goto label_7F2FAF40;
    case 0x7F2FAF44u: goto label_7F2FAF44;
    case 0x7F2FAF48u: goto label_7F2FAF48;
    case 0x7F2FAF4Cu: goto label_7F2FAF4C;
    case 0x7F2FAF50u: goto label_7F2FAF50;
    case 0x7F2FAF54u: goto label_7F2FAF54;
    case 0x7F2FAF58u: goto label_7F2FAF58;
    case 0x7F2FAF5Cu: goto label_7F2FAF5C;
    case 0x7F2FAF60u: goto label_7F2FAF60;
    case 0x7F2FAF64u: goto label_7F2FAF64;
    case 0x7F2FAF68u: goto label_7F2FAF68;
    case 0x7F2FAF6Cu: goto label_7F2FAF6C;
    case 0x7F2FAF70u: goto label_7F2FAF70;
    case 0x7F2FAF74u: goto label_7F2FAF74;
    case 0x7F2FAF78u: goto label_7F2FAF78;
    case 0x7F2FAF7Cu: goto label_7F2FAF7C;
    case 0x7F2FAF80u: goto label_7F2FAF80;
    case 0x7F2FAF84u: goto label_7F2FAF84;
    case 0x7F2FAF88u: goto label_7F2FAF88;
    case 0x7F2FAF8Cu: goto label_7F2FAF8C;
    case 0x7F2FAF90u: goto label_7F2FAF90;
    case 0x7F2FAF94u: goto label_7F2FAF94;
    case 0x7F2FAF98u: goto label_7F2FAF98;
    case 0x7F2FAF9Cu: goto label_7F2FAF9C;
    case 0x7F2FAFA0u: goto label_7F2FAFA0;
    case 0x7F2FAFA4u: goto label_7F2FAFA4;
    case 0x7F2FAFA8u: goto label_7F2FAFA8;
    case 0x7F2FAFACu: goto label_7F2FAFAC;
    case 0x7F2FAFB0u: goto label_7F2FAFB0;
    case 0x7F2FAFB4u: goto label_7F2FAFB4;
    case 0x7F2FAFB8u: goto label_7F2FAFB8;
    case 0x7F2FAFBCu: goto label_7F2FAFBC;
    case 0x7F2FAFC0u: goto label_7F2FAFC0;
    case 0x7F2FAFC4u: goto label_7F2FAFC4;
    case 0x7F2FAFC8u: goto label_7F2FAFC8;
    case 0x7F2FAFCCu: goto label_7F2FAFCC;
    case 0x7F2FAFD0u: goto label_7F2FAFD0;
    case 0x7F2FAFD4u: goto label_7F2FAFD4;
    case 0x7F2FAFD8u: goto label_7F2FAFD8;
    case 0x7F2FAFDCu: goto label_7F2FAFDC;
    case 0x7F2FAFE0u: goto label_7F2FAFE0;
    case 0x7F2FAFE4u: goto label_7F2FAFE4;
    case 0x7F2FAFE8u: goto label_7F2FAFE8;
    case 0x7F2FAFECu: goto label_7F2FAFEC;
    case 0x7F2FAFF0u: goto label_7F2FAFF0;
    case 0x7F2FAFF4u: goto label_7F2FAFF4;
    case 0x7F2FAFF8u: goto label_7F2FAFF8;
    case 0x7F2FAFFCu: goto label_7F2FAFFC;
    case 0x7F2FB000u: goto label_7F2FB000;
    case 0x7F2FB004u: goto label_7F2FB004;
    case 0x7F2FB008u: goto label_7F2FB008;
    case 0x7F2FB00Cu: goto label_7F2FB00C;
    case 0x7F2FB010u: goto label_7F2FB010;
    case 0x7F2FB014u: goto label_7F2FB014;
    case 0x7F2FB018u: goto label_7F2FB018;
    case 0x7F2FB01Cu: goto label_7F2FB01C;
    case 0x7F2FB020u: goto label_7F2FB020;
    case 0x7F2FB024u: goto label_7F2FB024;
    case 0x7F2FB028u: goto label_7F2FB028;
    case 0x7F2FB02Cu: goto label_7F2FB02C;
    case 0x7F2FB030u: goto label_7F2FB030;
    case 0x7F2FB034u: goto label_7F2FB034;
    case 0x7F2FB038u: goto label_7F2FB038;
    case 0x7F2FB03Cu: goto label_7F2FB03C;
    case 0x7F2FB040u: goto label_7F2FB040;
    case 0x7F2FB044u: goto label_7F2FB044;
    case 0x7F2FB048u: goto label_7F2FB048;
    case 0x7F2FB04Cu: goto label_7F2FB04C;
    case 0x7F2FB050u: goto label_7F2FB050;
    case 0x7F2FB054u: goto label_7F2FB054;
    case 0x7F2FB058u: goto label_7F2FB058;
    case 0x7F2FB05Cu: goto label_7F2FB05C;
    case 0x7F2FB060u: goto label_7F2FB060;
    case 0x7F2FB064u: goto label_7F2FB064;
    case 0x7F2FB068u: goto label_7F2FB068;
    case 0x7F2FB06Cu: goto label_7F2FB06C;
    case 0x7F2FB070u: goto label_7F2FB070;
    case 0x7F2FB074u: goto label_7F2FB074;
    case 0x7F2FB078u: goto label_7F2FB078;
    case 0x7F2FB07Cu: goto label_7F2FB07C;
    case 0x7F2FB080u: goto label_7F2FB080;
    case 0x7F2FB084u: goto label_7F2FB084;
    case 0x7F2FB088u: goto label_7F2FB088;
    case 0x7F2FB08Cu: goto label_7F2FB08C;
    case 0x7F2FB090u: goto label_7F2FB090;
    case 0x7F2FB094u: goto label_7F2FB094;
    case 0x7F2FB098u: goto label_7F2FB098;
    case 0x7F2FB09Cu: goto label_7F2FB09C;
    case 0x7F2FB0A0u: goto label_7F2FB0A0;
    case 0x7F2FB0A4u: goto label_7F2FB0A4;
    case 0x7F2FB0A8u: goto label_7F2FB0A8;
    case 0x7F2FB0ACu: goto label_7F2FB0AC;
    case 0x7F2FB0B0u: goto label_7F2FB0B0;
    case 0x7F2FB0B4u: goto label_7F2FB0B4;
    case 0x7F2FB0B8u: goto label_7F2FB0B8;
    case 0x7F2FB0BCu: goto label_7F2FB0BC;
    case 0x7F2FB0C0u: goto label_7F2FB0C0;
    case 0x7F2FB0C4u: goto label_7F2FB0C4;
    case 0x7F2FB0C8u: goto label_7F2FB0C8;
    case 0x7F2FB0CCu: goto label_7F2FB0CC;
    case 0x7F2FB0D0u: goto label_7F2FB0D0;
    case 0x7F2FB0D4u: goto label_7F2FB0D4;
    case 0x7F2FB0D8u: goto label_7F2FB0D8;
    case 0x7F2FB0DCu: goto label_7F2FB0DC;
    case 0x7F2FB0E0u: goto label_7F2FB0E0;
    case 0x7F2FB0E4u: goto label_7F2FB0E4;
    case 0x7F2FB0E8u: goto label_7F2FB0E8;
    case 0x7F2FB0ECu: goto label_7F2FB0EC;
    case 0x7F2FB0F0u: goto label_7F2FB0F0;
    case 0x7F2FB0F4u: goto label_7F2FB0F4;
    case 0x7F2FB0F8u: goto label_7F2FB0F8;
    case 0x7F2FB0FCu: goto label_7F2FB0FC;
    case 0x7F2FB100u: goto label_7F2FB100;
    case 0x7F2FB104u: goto label_7F2FB104;
    case 0x7F2FB108u: goto label_7F2FB108;
    case 0x7F2FB10Cu: goto label_7F2FB10C;
    case 0x7F2FB110u: goto label_7F2FB110;
    case 0x7F2FB114u: goto label_7F2FB114;
    case 0x7F2FB118u: goto label_7F2FB118;
    case 0x7F2FB11Cu: goto label_7F2FB11C;
    case 0x7F2FB120u: goto label_7F2FB120;
    case 0x7F2FB124u: goto label_7F2FB124;
    case 0x7F2FB128u: goto label_7F2FB128;
    case 0x7F2FB12Cu: goto label_7F2FB12C;
    case 0x7F2FB130u: goto label_7F2FB130;
    case 0x7F2FB134u: goto label_7F2FB134;
    case 0x7F2FB138u: goto label_7F2FB138;
    case 0x7F2FB13Cu: goto label_7F2FB13C;
    case 0x7F2FB140u: goto label_7F2FB140;
    case 0x7F2FB144u: goto label_7F2FB144;
    case 0x7F2FB148u: goto label_7F2FB148;
    case 0x7F2FB14Cu: goto label_7F2FB14C;
    case 0x7F2FB150u: goto label_7F2FB150;
    case 0x7F2FB154u: goto label_7F2FB154;
    case 0x7F2FB158u: goto label_7F2FB158;
    case 0x7F2FB15Cu: goto label_7F2FB15C;
    case 0x7F2FB160u: goto label_7F2FB160;
    case 0x7F2FB164u: goto label_7F2FB164;
    case 0x7F2FB168u: goto label_7F2FB168;
    case 0x7F2FB16Cu: goto label_7F2FB16C;
    case 0x7F2FB170u: goto label_7F2FB170;
    case 0x7F2FB174u: goto label_7F2FB174;
    case 0x7F2FB178u: goto label_7F2FB178;
    case 0x7F2FB17Cu: goto label_7F2FB17C;
    case 0x7F2FB180u: goto label_7F2FB180;
    case 0x7F2FB184u: goto label_7F2FB184;
    case 0x7F2FB188u: goto label_7F2FB188;
    case 0x7F2FB18Cu: goto label_7F2FB18C;
    case 0x7F2FB190u: goto label_7F2FB190;
    case 0x7F2FB194u: goto label_7F2FB194;
    case 0x7F2FB198u: goto label_7F2FB198;
    case 0x7F2FB19Cu: goto label_7F2FB19C;
    case 0x7F2FB1A0u: goto label_7F2FB1A0;
    case 0x7F2FB1A4u: goto label_7F2FB1A4;
    case 0x7F2FB1A8u: goto label_7F2FB1A8;
    case 0x7F2FB1ACu: goto label_7F2FB1AC;
    case 0x7F2FB1B0u: goto label_7F2FB1B0;
    case 0x7F2FB1B4u: goto label_7F2FB1B4;
    case 0x7F2FB1B8u: goto label_7F2FB1B8;
    case 0x7F2FB1BCu: goto label_7F2FB1BC;
    case 0x7F2FB1C0u: goto label_7F2FB1C0;
    case 0x7F2FB1C4u: goto label_7F2FB1C4;
    case 0x7F2FB1C8u: goto label_7F2FB1C8;
    case 0x7F2FB1CCu: goto label_7F2FB1CC;
    case 0x7F2FB1D0u: goto label_7F2FB1D0;
    case 0x7F2FB1D4u: goto label_7F2FB1D4;
    case 0x7F2FB1D8u: goto label_7F2FB1D8;
    case 0x7F2FB1DCu: goto label_7F2FB1DC;
    case 0x7F2FB1E0u: goto label_7F2FB1E0;
    case 0x7F2FB1E4u: goto label_7F2FB1E4;
    case 0x7F2FB1E8u: goto label_7F2FB1E8;
    case 0x7F2FB1ECu: goto label_7F2FB1EC;
    case 0x7F2FB1F0u: goto label_7F2FB1F0;
    case 0x7F2FB1F4u: goto label_7F2FB1F4;
    case 0x7F2FB1F8u: goto label_7F2FB1F8;
    case 0x7F2FB1FCu: goto label_7F2FB1FC;
    case 0x7F2FB200u: goto label_7F2FB200;
    case 0x7F2FB204u: goto label_7F2FB204;
    case 0x7F2FB208u: goto label_7F2FB208;
    case 0x7F2FB20Cu: goto label_7F2FB20C;
    case 0x7F2FB210u: goto label_7F2FB210;
    case 0x7F2FB214u: goto label_7F2FB214;
    case 0x7F2FB218u: goto label_7F2FB218;
    case 0x7F2FB21Cu: goto label_7F2FB21C;
    case 0x7F2FB220u: goto label_7F2FB220;
    case 0x7F2FB224u: goto label_7F2FB224;
    case 0x7F2FB228u: goto label_7F2FB228;
    case 0x7F2FB22Cu: goto label_7F2FB22C;
    case 0x7F2FB230u: goto label_7F2FB230;
    case 0x7F2FB234u: goto label_7F2FB234;
    case 0x7F2FB238u: goto label_7F2FB238;
    case 0x7F2FB23Cu: goto label_7F2FB23C;
    case 0x7F2FB240u: goto label_7F2FB240;
    case 0x7F2FB244u: goto label_7F2FB244;
    case 0x7F2FB248u: goto label_7F2FB248;
    case 0x7F2FB24Cu: goto label_7F2FB24C;
    case 0x7F2FB250u: goto label_7F2FB250;
    case 0x7F2FB254u: goto label_7F2FB254;
    case 0x7F2FB258u: goto label_7F2FB258;
    case 0x7F2FB25Cu: goto label_7F2FB25C;
    case 0x7F2FB260u: goto label_7F2FB260;
    case 0x7F2FB264u: goto label_7F2FB264;
    case 0x7F2FB268u: goto label_7F2FB268;
    case 0x7F2FB26Cu: goto label_7F2FB26C;
    case 0x7F2FB270u: goto label_7F2FB270;
    case 0x7F2FB274u: goto label_7F2FB274;
    case 0x7F2FB278u: goto label_7F2FB278;
    case 0x7F2FB27Cu: goto label_7F2FB27C;
    case 0x7F2FB280u: goto label_7F2FB280;
    case 0x7F2FB284u: goto label_7F2FB284;
    case 0x7F2FB288u: goto label_7F2FB288;
    case 0x7F2FB28Cu: goto label_7F2FB28C;
    case 0x7F2FB290u: goto label_7F2FB290;
    case 0x7F2FB294u: goto label_7F2FB294;
    case 0x7F2FB298u: goto label_7F2FB298;
    case 0x7F2FB29Cu: goto label_7F2FB29C;
    case 0x7F2FB2A0u: goto label_7F2FB2A0;
    case 0x7F2FB2A4u: goto label_7F2FB2A4;
    case 0x7F2FB2A8u: goto label_7F2FB2A8;
    case 0x7F2FB2ACu: goto label_7F2FB2AC;
    case 0x7F2FB2B0u: goto label_7F2FB2B0;
    case 0x7F2FB2B4u: goto label_7F2FB2B4;
    case 0x7F2FB2B8u: goto label_7F2FB2B8;
    case 0x7F2FB2BCu: goto label_7F2FB2BC;
    case 0x7F2FB2C0u: goto label_7F2FB2C0;
    case 0x7F2FB2C4u: goto label_7F2FB2C4;
    case 0x7F2FB2C8u: goto label_7F2FB2C8;
    case 0x7F2FB2CCu: goto label_7F2FB2CC;
    case 0x7F2FB2D0u: goto label_7F2FB2D0;
    case 0x7F2FB2D4u: goto label_7F2FB2D4;
    case 0x7F2FB2D8u: goto label_7F2FB2D8;
    case 0x7F2FB2DCu: goto label_7F2FB2DC;
    case 0x7F2FB2E0u: goto label_7F2FB2E0;
    case 0x7F2FB2E4u: goto label_7F2FB2E4;
    case 0x7F2FB2E8u: goto label_7F2FB2E8;
    case 0x7F2FB2ECu: goto label_7F2FB2EC;
    case 0x7F2FB2F0u: goto label_7F2FB2F0;
    case 0x7F2FB2F4u: goto label_7F2FB2F4;
    case 0x7F2FB2F8u: goto label_7F2FB2F8;
    case 0x7F2FB2FCu: goto label_7F2FB2FC;
    case 0x7F2FB300u: goto label_7F2FB300;
    case 0x7F2FB304u: goto label_7F2FB304;
    case 0x7F2FB308u: goto label_7F2FB308;
    case 0x7F2FB30Cu: goto label_7F2FB30C;
    case 0x7F2FB310u: goto label_7F2FB310;
    case 0x7F2FB314u: goto label_7F2FB314;
    case 0x7F2FB318u: goto label_7F2FB318;
    case 0x7F2FB31Cu: goto label_7F2FB31C;
    case 0x7F2FB320u: goto label_7F2FB320;
    case 0x7F2FB324u: goto label_7F2FB324;
    case 0x7F2FB328u: goto label_7F2FB328;
    case 0x7F2FB32Cu: goto label_7F2FB32C;
    case 0x7F2FB330u: goto label_7F2FB330;
    case 0x7F2FB334u: goto label_7F2FB334;
    case 0x7F2FB338u: goto label_7F2FB338;
    case 0x7F2FB33Cu: goto label_7F2FB33C;
    case 0x7F2FB340u: goto label_7F2FB340;
    case 0x7F2FB344u: goto label_7F2FB344;
    case 0x7F2FB348u: goto label_7F2FB348;
    case 0x7F2FB34Cu: goto label_7F2FB34C;
    case 0x7F2FB350u: goto label_7F2FB350;
    case 0x7F2FB354u: goto label_7F2FB354;
    case 0x7F2FB358u: goto label_7F2FB358;
    case 0x7F2FB35Cu: goto label_7F2FB35C;
    case 0x7F2FB360u: goto label_7F2FB360;
    case 0x7F2FB364u: goto label_7F2FB364;
    case 0x7F2FB368u: goto label_7F2FB368;
    case 0x7F2FB36Cu: goto label_7F2FB36C;
    case 0x7F2FB370u: goto label_7F2FB370;
    case 0x7F2FB374u: goto label_7F2FB374;
    case 0x7F2FB378u: goto label_7F2FB378;
    case 0x7F2FB37Cu: goto label_7F2FB37C;
    case 0x7F2FB380u: goto label_7F2FB380;
    case 0x7F2FB384u: goto label_7F2FB384;
    case 0x7F2FB388u: goto label_7F2FB388;
    case 0x7F2FB38Cu: goto label_7F2FB38C;
    case 0x7F2FB390u: goto label_7F2FB390;
    case 0x7F2FB394u: goto label_7F2FB394;
    case 0x7F2FB398u: goto label_7F2FB398;
    case 0x7F2FB39Cu: goto label_7F2FB39C;
    case 0x7F2FB3A0u: goto label_7F2FB3A0;
    case 0x7F2FB3A4u: goto label_7F2FB3A4;
    case 0x7F2FB3A8u: goto label_7F2FB3A8;
    case 0x7F2FB3ACu: goto label_7F2FB3AC;
    case 0x7F2FB3B0u: goto label_7F2FB3B0;
    case 0x7F2FB3B4u: goto label_7F2FB3B4;
    case 0x7F2FB3B8u: goto label_7F2FB3B8;
    case 0x7F2FB3BCu: goto label_7F2FB3BC;
    case 0x7F2FB3C0u: goto label_7F2FB3C0;
    case 0x7F2FB3C4u: goto label_7F2FB3C4;
    case 0x7F2FB3C8u: goto label_7F2FB3C8;
    case 0x7F2FB3CCu: goto label_7F2FB3CC;
    case 0x7F2FB3D0u: goto label_7F2FB3D0;
    case 0x7F2FB3D4u: goto label_7F2FB3D4;
    case 0x7F2FB3D8u: goto label_7F2FB3D8;
    case 0x7F2FB3DCu: goto label_7F2FB3DC;
    case 0x7F2FB3E0u: goto label_7F2FB3E0;
    case 0x7F2FB3E4u: goto label_7F2FB3E4;
    case 0x7F2FB3E8u: goto label_7F2FB3E8;
    case 0x7F2FB3ECu: goto label_7F2FB3EC;
    case 0x7F2FB3F0u: goto label_7F2FB3F0;
    case 0x7F2FB3F4u: goto label_7F2FB3F4;
    case 0x7F2FB3F8u: goto label_7F2FB3F8;
    case 0x7F2FB3FCu: goto label_7F2FB3FC;
    case 0x7F2FB400u: goto label_7F2FB400;
    case 0x7F2FB404u: goto label_7F2FB404;
    case 0x7F2FB408u: goto label_7F2FB408;
    case 0x7F2FB40Cu: goto label_7F2FB40C;
    case 0x7F2FB410u: goto label_7F2FB410;
    case 0x7F2FB414u: goto label_7F2FB414;
    case 0x7F2FB418u: goto label_7F2FB418;
    case 0x7F2FB41Cu: goto label_7F2FB41C;
    case 0x7F2FB420u: goto label_7F2FB420;
    case 0x7F2FB424u: goto label_7F2FB424;
    case 0x7F2FB428u: goto label_7F2FB428;
    case 0x7F2FB42Cu: goto label_7F2FB42C;
    case 0x7F2FB430u: goto label_7F2FB430;
    case 0x7F2FB434u: goto label_7F2FB434;
    case 0x7F2FB438u: goto label_7F2FB438;
    case 0x7F2FB43Cu: goto label_7F2FB43C;
    case 0x7F2FB440u: goto label_7F2FB440;
    case 0x7F2FB444u: goto label_7F2FB444;
    case 0x7F2FB448u: goto label_7F2FB448;
    case 0x7F2FB44Cu: goto label_7F2FB44C;
    case 0x7F2FB450u: goto label_7F2FB450;
    case 0x7F2FB454u: goto label_7F2FB454;
    case 0x7F2FB458u: goto label_7F2FB458;
    case 0x7F2FB45Cu: goto label_7F2FB45C;
    case 0x7F2FB460u: goto label_7F2FB460;
    case 0x7F2FB464u: goto label_7F2FB464;
    case 0x7F2FB468u: goto label_7F2FB468;
    case 0x7F2FB46Cu: goto label_7F2FB46C;
    case 0x7F2FB470u: goto label_7F2FB470;
    case 0x7F2FB474u: goto label_7F2FB474;
    case 0x7F2FB478u: goto label_7F2FB478;
    case 0x7F2FB47Cu: goto label_7F2FB47C;
    case 0x7F2FB480u: goto label_7F2FB480;
    case 0x7F2FB484u: goto label_7F2FB484;
    case 0x7F2FB488u: goto label_7F2FB488;
    case 0x7F2FB48Cu: goto label_7F2FB48C;
    case 0x7F2FB490u: goto label_7F2FB490;
    case 0x7F2FB494u: goto label_7F2FB494;
    case 0x7F2FB498u: goto label_7F2FB498;
    case 0x7F2FB49Cu: goto label_7F2FB49C;
    case 0x7F2FB4A0u: goto label_7F2FB4A0;
    case 0x7F2FB4A4u: goto label_7F2FB4A4;
    case 0x7F2FB4A8u: goto label_7F2FB4A8;
    case 0x7F2FB4ACu: goto label_7F2FB4AC;
    case 0x7F2FB4B0u: goto label_7F2FB4B0;
    case 0x7F2FB4B4u: goto label_7F2FB4B4;
    case 0x7F2FB4B8u: goto label_7F2FB4B8;
    case 0x7F2FB4BCu: goto label_7F2FB4BC;
    case 0x7F2FB4C0u: goto label_7F2FB4C0;
    case 0x7F2FB4C4u: goto label_7F2FB4C4;
    case 0x7F2FB4C8u: goto label_7F2FB4C8;
    case 0x7F2FB4CCu: goto label_7F2FB4CC;
    case 0x7F2FB4D0u: goto label_7F2FB4D0;
    case 0x7F2FB4D4u: goto label_7F2FB4D4;
    case 0x7F2FB4D8u: goto label_7F2FB4D8;
    case 0x7F2FB4DCu: goto label_7F2FB4DC;
    case 0x7F2FB4E0u: goto label_7F2FB4E0;
    case 0x7F2FB4E4u: goto label_7F2FB4E4;
    case 0x7F2FB4E8u: goto label_7F2FB4E8;
    case 0x7F2FB4ECu: goto label_7F2FB4EC;
    case 0x7F2FB4F0u: goto label_7F2FB4F0;
    case 0x7F2FB4F4u: goto label_7F2FB4F4;
    case 0x7F2FB4F8u: goto label_7F2FB4F8;
    case 0x7F2FB4FCu: goto label_7F2FB4FC;
    case 0x7F2FB500u: goto label_7F2FB500;
    case 0x7F2FB504u: goto label_7F2FB504;
    case 0x7F2FB508u: goto label_7F2FB508;
    case 0x7F2FB50Cu: goto label_7F2FB50C;
    case 0x7F2FB510u: goto label_7F2FB510;
    case 0x7F2FB514u: goto label_7F2FB514;
    case 0x7F2FB518u: goto label_7F2FB518;
    case 0x7F2FB51Cu: goto label_7F2FB51C;
    case 0x7F2FB520u: goto label_7F2FB520;
    case 0x7F2FB524u: goto label_7F2FB524;
    case 0x7F2FB528u: goto label_7F2FB528;
    case 0x7F2FB52Cu: goto label_7F2FB52C;
    case 0x7F2FB530u: goto label_7F2FB530;
    case 0x7F2FB534u: goto label_7F2FB534;
    case 0x7F2FB538u: goto label_7F2FB538;
    case 0x7F2FB53Cu: goto label_7F2FB53C;
    case 0x7F2FB540u: goto label_7F2FB540;
    case 0x7F2FB544u: goto label_7F2FB544;
    case 0x7F2FB548u: goto label_7F2FB548;
    case 0x7F2FB54Cu: goto label_7F2FB54C;
    case 0x7F2FB550u: goto label_7F2FB550;
    case 0x7F2FB554u: goto label_7F2FB554;
    case 0x7F2FB558u: goto label_7F2FB558;
    case 0x7F2FB55Cu: goto label_7F2FB55C;
    case 0x7F2FB560u: goto label_7F2FB560;
    case 0x7F2FB564u: goto label_7F2FB564;
    case 0x7F2FB568u: goto label_7F2FB568;
    case 0x7F2FB56Cu: goto label_7F2FB56C;
    case 0x7F2FB570u: goto label_7F2FB570;
    case 0x7F2FB574u: goto label_7F2FB574;
    case 0x7F2FB578u: goto label_7F2FB578;
    case 0x7F2FB57Cu: goto label_7F2FB57C;
    case 0x7F2FB580u: goto label_7F2FB580;
    case 0x7F2FB584u: goto label_7F2FB584;
    case 0x7F2FB588u: goto label_7F2FB588;
    case 0x7F2FB58Cu: goto label_7F2FB58C;
    case 0x7F2FB590u: goto label_7F2FB590;
    case 0x7F2FB594u: goto label_7F2FB594;
    case 0x7F2FB598u: goto label_7F2FB598;
    case 0x7F2FB59Cu: goto label_7F2FB59C;
    case 0x7F2FB5A0u: goto label_7F2FB5A0;
    case 0x7F2FB5A4u: goto label_7F2FB5A4;
    case 0x7F2FB5A8u: goto label_7F2FB5A8;
    case 0x7F2FB5ACu: goto label_7F2FB5AC;
    case 0x7F2FB5B0u: goto label_7F2FB5B0;
    case 0x7F2FB5B4u: goto label_7F2FB5B4;
    case 0x7F2FB5B8u: goto label_7F2FB5B8;
    case 0x7F2FB5BCu: goto label_7F2FB5BC;
    case 0x7F2FB5C0u: goto label_7F2FB5C0;
    case 0x7F2FB5C4u: goto label_7F2FB5C4;
    case 0x7F2FB5C8u: goto label_7F2FB5C8;
    case 0x7F2FB5CCu: goto label_7F2FB5CC;
    case 0x7F2FB5D0u: goto label_7F2FB5D0;
    case 0x7F2FB5D4u: goto label_7F2FB5D4;
    case 0x7F2FB5D8u: goto label_7F2FB5D8;
    case 0x7F2FB5DCu: goto label_7F2FB5DC;
    case 0x7F2FB5E0u: goto label_7F2FB5E0;
    case 0x7F2FB5E4u: goto label_7F2FB5E4;
    case 0x7F2FB5E8u: goto label_7F2FB5E8;
    case 0x7F2FB5ECu: goto label_7F2FB5EC;
    case 0x7F2FB5F0u: goto label_7F2FB5F0;
    case 0x7F2FB5F4u: goto label_7F2FB5F4;
    case 0x7F2FB5F8u: goto label_7F2FB5F8;
    case 0x7F2FB5FCu: goto label_7F2FB5FC;
    case 0x7F2FB600u: goto label_7F2FB600;
    case 0x7F2FB604u: goto label_7F2FB604;
    case 0x7F2FB608u: goto label_7F2FB608;
    case 0x7F2FB60Cu: goto label_7F2FB60C;
    case 0x7F2FB610u: goto label_7F2FB610;
    case 0x7F2FB614u: goto label_7F2FB614;
    case 0x7F2FB618u: goto label_7F2FB618;
    case 0x7F2FB61Cu: goto label_7F2FB61C;
    case 0x7F2FB620u: goto label_7F2FB620;
    case 0x7F2FB624u: goto label_7F2FB624;
    case 0x7F2FB628u: goto label_7F2FB628;
    case 0x7F2FB62Cu: goto label_7F2FB62C;
    case 0x7F2FB630u: goto label_7F2FB630;
    case 0x7F2FB634u: goto label_7F2FB634;
    case 0x7F2FB638u: goto label_7F2FB638;
    case 0x7F2FB63Cu: goto label_7F2FB63C;
    case 0x7F2FB640u: goto label_7F2FB640;
    case 0x7F2FB644u: goto label_7F2FB644;
    case 0x7F2FB648u: goto label_7F2FB648;
    case 0x7F2FB64Cu: goto label_7F2FB64C;
    case 0x7F2FB650u: goto label_7F2FB650;
    case 0x7F2FB654u: goto label_7F2FB654;
    case 0x7F2FB658u: goto label_7F2FB658;
    case 0x7F2FB65Cu: goto label_7F2FB65C;
    case 0x7F2FB660u: goto label_7F2FB660;
    case 0x7F2FB664u: goto label_7F2FB664;
    case 0x7F2FB668u: goto label_7F2FB668;
    case 0x7F2FB66Cu: goto label_7F2FB66C;
    case 0x7F2FB670u: goto label_7F2FB670;
    case 0x7F2FB674u: goto label_7F2FB674;
    case 0x7F2FB678u: goto label_7F2FB678;
    case 0x7F2FB67Cu: goto label_7F2FB67C;
    case 0x7F2FB680u: goto label_7F2FB680;
    case 0x7F2FB684u: goto label_7F2FB684;
    case 0x7F2FB688u: goto label_7F2FB688;
    case 0x7F2FB68Cu: goto label_7F2FB68C;
    case 0x7F2FB690u: goto label_7F2FB690;
    case 0x7F2FB694u: goto label_7F2FB694;
    case 0x7F2FB698u: goto label_7F2FB698;
    case 0x7F2FB69Cu: goto label_7F2FB69C;
    case 0x7F2FB6A0u: goto label_7F2FB6A0;
    case 0x7F2FB6A4u: goto label_7F2FB6A4;
    case 0x7F2FB6A8u: goto label_7F2FB6A8;
    case 0x7F2FB6ACu: goto label_7F2FB6AC;
    case 0x7F2FB6B0u: goto label_7F2FB6B0;
    case 0x7F2FB6B4u: goto label_7F2FB6B4;
    case 0x7F2FB6B8u: goto label_7F2FB6B8;
    case 0x7F2FB6BCu: goto label_7F2FB6BC;
    case 0x7F2FB6C0u: goto label_7F2FB6C0;
    case 0x7F2FB6C4u: goto label_7F2FB6C4;
    case 0x7F2FB6C8u: goto label_7F2FB6C8;
    case 0x7F2FB6CCu: goto label_7F2FB6CC;
    case 0x7F2FB6D0u: goto label_7F2FB6D0;
    case 0x7F2FB6D4u: goto label_7F2FB6D4;
    case 0x7F2FB6D8u: goto label_7F2FB6D8;
    case 0x7F2FB6DCu: goto label_7F2FB6DC;
    case 0x7F2FB6E0u: goto label_7F2FB6E0;
    case 0x7F2FB6E4u: goto label_7F2FB6E4;
    case 0x7F2FB6E8u: goto label_7F2FB6E8;
    case 0x7F2FB6ECu: goto label_7F2FB6EC;
    case 0x7F2FB6F0u: goto label_7F2FB6F0;
    case 0x7F2FB6F4u: goto label_7F2FB6F4;
    case 0x7F2FB6F8u: goto label_7F2FB6F8;
    case 0x7F2FB6FCu: goto label_7F2FB6FC;
    case 0x7F2FB700u: goto label_7F2FB700;
    case 0x7F2FB704u: goto label_7F2FB704;
    case 0x7F2FB708u: goto label_7F2FB708;
    case 0x7F2FB70Cu: goto label_7F2FB70C;
    case 0x7F2FB710u: goto label_7F2FB710;
    case 0x7F2FB714u: goto label_7F2FB714;
    case 0x7F2FB718u: goto label_7F2FB718;
    case 0x7F2FB71Cu: goto label_7F2FB71C;
    case 0x7F2FB720u: goto label_7F2FB720;
    case 0x7F2FB724u: goto label_7F2FB724;
    case 0x7F2FB728u: goto label_7F2FB728;
    case 0x7F2FB72Cu: goto label_7F2FB72C;
    case 0x7F2FB730u: goto label_7F2FB730;
    case 0x7F2FB734u: goto label_7F2FB734;
    case 0x7F2FB738u: goto label_7F2FB738;
    case 0x7F2FB73Cu: goto label_7F2FB73C;
    case 0x7F2FB740u: goto label_7F2FB740;
    case 0x7F2FB744u: goto label_7F2FB744;
    case 0x7F2FB748u: goto label_7F2FB748;
    case 0x7F2FB74Cu: goto label_7F2FB74C;
    case 0x7F2FB750u: goto label_7F2FB750;
    case 0x7F2FB754u: goto label_7F2FB754;
    case 0x7F2FB758u: goto label_7F2FB758;
    case 0x7F2FB75Cu: goto label_7F2FB75C;
    case 0x7F2FB760u: goto label_7F2FB760;
    case 0x7F2FB764u: goto label_7F2FB764;
    case 0x7F2FB768u: goto label_7F2FB768;
    case 0x7F2FB76Cu: goto label_7F2FB76C;
    case 0x7F2FB770u: goto label_7F2FB770;
    case 0x7F2FB774u: goto label_7F2FB774;
    case 0x7F2FB778u: goto label_7F2FB778;
    case 0x7F2FB77Cu: goto label_7F2FB77C;
    case 0x7F2FB780u: goto label_7F2FB780;
    case 0x7F2FB784u: goto label_7F2FB784;
    case 0x7F2FB788u: goto label_7F2FB788;
    case 0x7F2FB78Cu: goto label_7F2FB78C;
    case 0x7F2FB790u: goto label_7F2FB790;
    case 0x7F2FB794u: goto label_7F2FB794;
    case 0x7F2FB798u: goto label_7F2FB798;
    case 0x7F2FB79Cu: goto label_7F2FB79C;
    case 0x7F2FB7A0u: goto label_7F2FB7A0;
    case 0x7F2FB7A4u: goto label_7F2FB7A4;
    case 0x7F2FB7A8u: goto label_7F2FB7A8;
    case 0x7F2FB7ACu: goto label_7F2FB7AC;
    case 0x7F2FB7B0u: goto label_7F2FB7B0;
    case 0x7F2FB7B4u: goto label_7F2FB7B4;
    case 0x7F2FB7B8u: goto label_7F2FB7B8;
    case 0x7F2FB7BCu: goto label_7F2FB7BC;
    case 0x7F2FB7C0u: goto label_7F2FB7C0;
    case 0x7F2FB7C4u: goto label_7F2FB7C4;
    case 0x7F2FB7C8u: goto label_7F2FB7C8;
    case 0x7F2FB7CCu: goto label_7F2FB7CC;
    case 0x7F2FB7D0u: goto label_7F2FB7D0;
    case 0x7F2FB7D4u: goto label_7F2FB7D4;
    case 0x7F2FB7D8u: goto label_7F2FB7D8;
    case 0x7F2FB7DCu: goto label_7F2FB7DC;
    case 0x7F2FB7E0u: goto label_7F2FB7E0;
    case 0x7F2FB7E4u: goto label_7F2FB7E4;
    case 0x7F2FB7E8u: goto label_7F2FB7E8;
    case 0x7F2FB7ECu: goto label_7F2FB7EC;
    case 0x7F2FB7F0u: goto label_7F2FB7F0;
    case 0x7F2FB7F4u: goto label_7F2FB7F4;
    case 0x7F2FB7F8u: goto label_7F2FB7F8;
    case 0x7F2FB7FCu: goto label_7F2FB7FC;
    case 0x7F2FB800u: goto label_7F2FB800;
    case 0x7F2FB804u: goto label_7F2FB804;
    case 0x7F2FB808u: goto label_7F2FB808;
    case 0x7F2FB80Cu: goto label_7F2FB80C;
    case 0x7F2FB810u: goto label_7F2FB810;
    case 0x7F2FB814u: goto label_7F2FB814;
    case 0x7F2FB818u: goto label_7F2FB818;
    case 0x7F2FB81Cu: goto label_7F2FB81C;
    case 0x7F2FB820u: goto label_7F2FB820;
    case 0x7F2FB824u: goto label_7F2FB824;
    case 0x7F2FB828u: goto label_7F2FB828;
    case 0x7F2FB82Cu: goto label_7F2FB82C;
    case 0x7F2FB830u: goto label_7F2FB830;
    case 0x7F2FB834u: goto label_7F2FB834;
    case 0x7F2FB838u: goto label_7F2FB838;
    case 0x7F2FB83Cu: goto label_7F2FB83C;
    case 0x7F2FB840u: goto label_7F2FB840;
    case 0x7F2FB844u: goto label_7F2FB844;
    case 0x7F2FB848u: goto label_7F2FB848;
    case 0x7F2FB84Cu: goto label_7F2FB84C;
    case 0x7F2FB850u: goto label_7F2FB850;
    case 0x7F2FB854u: goto label_7F2FB854;
    case 0x7F2FB858u: goto label_7F2FB858;
    case 0x7F2FB85Cu: goto label_7F2FB85C;
    case 0x7F2FB860u: goto label_7F2FB860;
    case 0x7F2FB864u: goto label_7F2FB864;
    case 0x7F2FB868u: goto label_7F2FB868;
    case 0x7F2FB86Cu: goto label_7F2FB86C;
    case 0x7F2FB870u: goto label_7F2FB870;
    case 0x7F2FB874u: goto label_7F2FB874;
    case 0x7F2FB878u: goto label_7F2FB878;
    case 0x7F2FB87Cu: goto label_7F2FB87C;
    case 0x7F2FB880u: goto label_7F2FB880;
    case 0x7F2FB884u: goto label_7F2FB884;
    case 0x7F2FB888u: goto label_7F2FB888;
    case 0x7F2FB88Cu: goto label_7F2FB88C;
    case 0x7F2FB890u: goto label_7F2FB890;
    case 0x7F2FB894u: goto label_7F2FB894;
    case 0x7F2FB898u: goto label_7F2FB898;
    case 0x7F2FB89Cu: goto label_7F2FB89C;
    case 0x7F2FB8A0u: goto label_7F2FB8A0;
    case 0x7F2FB8A4u: goto label_7F2FB8A4;
    case 0x7F2FB8A8u: goto label_7F2FB8A8;
    case 0x7F2FB8ACu: goto label_7F2FB8AC;
    case 0x7F2FB8B0u: goto label_7F2FB8B0;
    case 0x7F2FB8B4u: goto label_7F2FB8B4;
    case 0x7F2FB8B8u: goto label_7F2FB8B8;
    case 0x7F2FB8BCu: goto label_7F2FB8BC;
    case 0x7F2FB8C0u: goto label_7F2FB8C0;
    case 0x7F2FB8C4u: goto label_7F2FB8C4;
    case 0x7F2FB8C8u: goto label_7F2FB8C8;
    case 0x7F2FB8CCu: goto label_7F2FB8CC;
    case 0x7F2FB8D0u: goto label_7F2FB8D0;
    case 0x7F2FB8D4u: goto label_7F2FB8D4;
    case 0x7F2FB8D8u: goto label_7F2FB8D8;
    case 0x7F2FB8DCu: goto label_7F2FB8DC;
    case 0x7F2FB8E0u: goto label_7F2FB8E0;
    case 0x7F2FB8E4u: goto label_7F2FB8E4;
    case 0x7F2FB8E8u: goto label_7F2FB8E8;
    case 0x7F2FB8ECu: goto label_7F2FB8EC;
    case 0x7F2FB8F0u: goto label_7F2FB8F0;
    case 0x7F2FB8F4u: goto label_7F2FB8F4;
    case 0x7F2FB8F8u: goto label_7F2FB8F8;
    case 0x7F2FB8FCu: goto label_7F2FB8FC;
    case 0x7F2FB900u: goto label_7F2FB900;
    case 0x7F2FB904u: goto label_7F2FB904;
    case 0x7F2FB908u: goto label_7F2FB908;
    case 0x7F2FB90Cu: goto label_7F2FB90C;
    case 0x7F2FB910u: goto label_7F2FB910;
    case 0x7F2FB914u: goto label_7F2FB914;
    case 0x7F2FB918u: goto label_7F2FB918;
    case 0x7F2FB91Cu: goto label_7F2FB91C;
    case 0x7F2FB920u: goto label_7F2FB920;
    case 0x7F2FB924u: goto label_7F2FB924;
    case 0x7F2FB928u: goto label_7F2FB928;
    case 0x7F2FB92Cu: goto label_7F2FB92C;
    case 0x7F2FB930u: goto label_7F2FB930;
    case 0x7F2FB934u: goto label_7F2FB934;
    case 0x7F2FB938u: goto label_7F2FB938;
    case 0x7F2FB93Cu: goto label_7F2FB93C;
    case 0x7F2FB940u: goto label_7F2FB940;
    case 0x7F2FB944u: goto label_7F2FB944;
    case 0x7F2FB948u: goto label_7F2FB948;
    case 0x7F2FB94Cu: goto label_7F2FB94C;
    case 0x7F2FB950u: goto label_7F2FB950;
    case 0x7F2FB954u: goto label_7F2FB954;
    case 0x7F2FB958u: goto label_7F2FB958;
    case 0x7F2FB95Cu: goto label_7F2FB95C;
    case 0x7F2FB960u: goto label_7F2FB960;
    case 0x7F2FB964u: goto label_7F2FB964;
    case 0x7F2FB968u: goto label_7F2FB968;
    case 0x7F2FB96Cu: goto label_7F2FB96C;
    case 0x7F2FB970u: goto label_7F2FB970;
    case 0x7F2FB974u: goto label_7F2FB974;
    case 0x7F2FB978u: goto label_7F2FB978;
    case 0x7F2FB97Cu: goto label_7F2FB97C;
    case 0x7F2FB980u: goto label_7F2FB980;
    case 0x7F2FB984u: goto label_7F2FB984;
    case 0x7F2FB988u: goto label_7F2FB988;
    case 0x7F2FB98Cu: goto label_7F2FB98C;
    case 0x7F2FB990u: goto label_7F2FB990;
    case 0x7F2FB994u: goto label_7F2FB994;
    case 0x7F2FB998u: goto label_7F2FB998;
    case 0x7F2FB99Cu: goto label_7F2FB99C;
    case 0x7F2FB9A0u: goto label_7F2FB9A0;
    case 0x7F2FB9A4u: goto label_7F2FB9A4;
    case 0x7F2FB9A8u: goto label_7F2FB9A8;
    case 0x7F2FB9ACu: goto label_7F2FB9AC;
    case 0x7F2FB9B0u: goto label_7F2FB9B0;
    case 0x7F2FB9B4u: goto label_7F2FB9B4;
    case 0x7F2FB9B8u: goto label_7F2FB9B8;
    case 0x7F2FB9BCu: goto label_7F2FB9BC;
    case 0x7F2FB9C0u: goto label_7F2FB9C0;
    case 0x7F2FB9C4u: goto label_7F2FB9C4;
    case 0x7F2FB9C8u: goto label_7F2FB9C8;
    case 0x7F2FB9CCu: goto label_7F2FB9CC;
    case 0x7F2FB9D0u: goto label_7F2FB9D0;
    case 0x7F2FB9D4u: goto label_7F2FB9D4;
    case 0x7F2FB9D8u: goto label_7F2FB9D8;
    case 0x7F2FB9DCu: goto label_7F2FB9DC;
    case 0x7F2FB9E0u: goto label_7F2FB9E0;
    case 0x7F2FB9E4u: goto label_7F2FB9E4;
    case 0x7F2FB9E8u: goto label_7F2FB9E8;
    case 0x7F2FB9ECu: goto label_7F2FB9EC;
    case 0x7F2FB9F0u: goto label_7F2FB9F0;
    case 0x7F2FB9F4u: goto label_7F2FB9F4;
    case 0x7F2FB9F8u: goto label_7F2FB9F8;
    case 0x7F2FB9FCu: goto label_7F2FB9FC;
    case 0x7F2FBA00u: goto label_7F2FBA00;
    case 0x7F2FBA04u: goto label_7F2FBA04;
    case 0x7F2FBA08u: goto label_7F2FBA08;
    case 0x7F2FBA0Cu: goto label_7F2FBA0C;
    case 0x7F2FBA10u: goto label_7F2FBA10;
    case 0x7F2FBA14u: goto label_7F2FBA14;
    case 0x7F2FBA18u: goto label_7F2FBA18;
    case 0x7F2FBA1Cu: goto label_7F2FBA1C;
    case 0x7F2FBA20u: goto label_7F2FBA20;
    case 0x7F2FBA24u: goto label_7F2FBA24;
    case 0x7F2FBA28u: goto label_7F2FBA28;
    case 0x7F2FBA2Cu: goto label_7F2FBA2C;
    case 0x7F2FBA30u: goto label_7F2FBA30;
    case 0x7F2FBA34u: goto label_7F2FBA34;
    case 0x7F2FBA38u: goto label_7F2FBA38;
    case 0x7F2FBA3Cu: goto label_7F2FBA3C;
    case 0x7F2FBA40u: goto label_7F2FBA40;
    case 0x7F2FBA44u: goto label_7F2FBA44;
    case 0x7F2FBA48u: goto label_7F2FBA48;
    case 0x7F2FBA4Cu: goto label_7F2FBA4C;
    case 0x7F2FBA50u: goto label_7F2FBA50;
    case 0x7F2FBA54u: goto label_7F2FBA54;
    case 0x7F2FBA58u: goto label_7F2FBA58;
    case 0x7F2FBA5Cu: goto label_7F2FBA5C;
    case 0x7F2FBA60u: goto label_7F2FBA60;
    case 0x7F2FBA64u: goto label_7F2FBA64;
    case 0x7F2FBA68u: goto label_7F2FBA68;
    case 0x7F2FBA6Cu: goto label_7F2FBA6C;
    case 0x7F2FBA70u: goto label_7F2FBA70;
    case 0x7F2FBA74u: goto label_7F2FBA74;
    case 0x7F2FBA78u: goto label_7F2FBA78;
    case 0x7F2FBA7Cu: goto label_7F2FBA7C;
    case 0x7F2FBA80u: goto label_7F2FBA80;
    case 0x7F2FBA84u: goto label_7F2FBA84;
    case 0x7F2FBA88u: goto label_7F2FBA88;
    case 0x7F2FBA8Cu: goto label_7F2FBA8C;
    case 0x7F2FBA90u: goto label_7F2FBA90;
    case 0x7F2FBA94u: goto label_7F2FBA94;
    case 0x7F2FBA98u: goto label_7F2FBA98;
    case 0x7F2FBA9Cu: goto label_7F2FBA9C;
    case 0x7F2FBAA0u: goto label_7F2FBAA0;
    case 0x7F2FBAA4u: goto label_7F2FBAA4;
    case 0x7F2FBAA8u: goto label_7F2FBAA8;
    case 0x7F2FBAACu: goto label_7F2FBAAC;
    case 0x7F2FBAB0u: goto label_7F2FBAB0;
    case 0x7F2FBAB4u: goto label_7F2FBAB4;
    case 0x7F2FBAB8u: goto label_7F2FBAB8;
    case 0x7F2FBABCu: goto label_7F2FBABC;
    case 0x7F2FBAC0u: goto label_7F2FBAC0;
    case 0x7F2FBAC4u: goto label_7F2FBAC4;
    case 0x7F2FBAC8u: goto label_7F2FBAC8;
    case 0x7F2FBACCu: goto label_7F2FBACC;
    case 0x7F2FBAD0u: goto label_7F2FBAD0;
    case 0x7F2FBAD4u: goto label_7F2FBAD4;
    case 0x7F2FBAD8u: goto label_7F2FBAD8;
    case 0x7F2FBADCu: goto label_7F2FBADC;
    case 0x7F2FBAE0u: goto label_7F2FBAE0;
    case 0x7F2FBAE4u: goto label_7F2FBAE4;
    case 0x7F2FBAE8u: goto label_7F2FBAE8;
    case 0x7F2FBAECu: goto label_7F2FBAEC;
    case 0x7F2FBAF0u: goto label_7F2FBAF0;
    case 0x7F2FBAF4u: goto label_7F2FBAF4;
    case 0x7F2FBAF8u: goto label_7F2FBAF8;
    case 0x7F2FBAFCu: goto label_7F2FBAFC;
    case 0x7F2FBB00u: goto label_7F2FBB00;
    case 0x7F2FBB04u: goto label_7F2FBB04;
    case 0x7F2FBB08u: goto label_7F2FBB08;
    case 0x7F2FBB0Cu: goto label_7F2FBB0C;
    case 0x7F2FBB10u: goto label_7F2FBB10;
    case 0x7F2FBB14u: goto label_7F2FBB14;
    case 0x7F2FBB18u: goto label_7F2FBB18;
    case 0x7F2FBB1Cu: goto label_7F2FBB1C;
    case 0x7F2FBB20u: goto label_7F2FBB20;
    case 0x7F2FBB24u: goto label_7F2FBB24;
    case 0x7F2FBB28u: goto label_7F2FBB28;
    case 0x7F2FBB2Cu: goto label_7F2FBB2C;
    case 0x7F2FBB30u: goto label_7F2FBB30;
    case 0x7F2FBB34u: goto label_7F2FBB34;
    case 0x7F2FBB38u: goto label_7F2FBB38;
    case 0x7F2FBB3Cu: goto label_7F2FBB3C;
    case 0x7F2FBB40u: goto label_7F2FBB40;
    case 0x7F2FBB44u: goto label_7F2FBB44;
    case 0x7F2FBB48u: goto label_7F2FBB48;
    case 0x7F2FBB4Cu: goto label_7F2FBB4C;
    case 0x7F2FBB50u: goto label_7F2FBB50;
    case 0x7F2FBB54u: goto label_7F2FBB54;
    case 0x7F2FBB58u: goto label_7F2FBB58;
    case 0x7F2FBB5Cu: goto label_7F2FBB5C;
    case 0x7F2FBB60u: goto label_7F2FBB60;
    case 0x7F2FBB64u: goto label_7F2FBB64;
    case 0x7F2FBB68u: goto label_7F2FBB68;
    case 0x7F2FBB6Cu: goto label_7F2FBB6C;
    case 0x7F2FBB70u: goto label_7F2FBB70;
    case 0x7F2FBB74u: goto label_7F2FBB74;
    case 0x7F2FBB78u: goto label_7F2FBB78;
    case 0x7F2FBB7Cu: goto label_7F2FBB7C;
    case 0x7F2FBB80u: goto label_7F2FBB80;
    case 0x7F2FBB84u: goto label_7F2FBB84;
    case 0x7F2FBB88u: goto label_7F2FBB88;
    case 0x7F2FBB8Cu: goto label_7F2FBB8C;
    case 0x7F2FBB90u: goto label_7F2FBB90;
    case 0x7F2FBB94u: goto label_7F2FBB94;
    case 0x7F2FBB98u: goto label_7F2FBB98;
    case 0x7F2FBB9Cu: goto label_7F2FBB9C;
    case 0x7F2FBBA0u: goto label_7F2FBBA0;
    case 0x7F2FBBA4u: goto label_7F2FBBA4;
    case 0x7F2FBBA8u: goto label_7F2FBBA8;
    case 0x7F2FBBACu: goto label_7F2FBBAC;
    case 0x7F2FBBB0u: goto label_7F2FBBB0;
    case 0x7F2FBBB4u: goto label_7F2FBBB4;
    case 0x7F2FBBB8u: goto label_7F2FBBB8;
    case 0x7F2FBBBCu: goto label_7F2FBBBC;
    case 0x7F2FBBC0u: goto label_7F2FBBC0;
    case 0x7F2FBBC4u: goto label_7F2FBBC4;
    case 0x7F2FBBC8u: goto label_7F2FBBC8;
    case 0x7F2FBBCCu: goto label_7F2FBBCC;
    case 0x7F2FBBD0u: goto label_7F2FBBD0;
    case 0x7F2FBBD4u: goto label_7F2FBBD4;
    case 0x7F2FBBD8u: goto label_7F2FBBD8;
    case 0x7F2FBBDCu: goto label_7F2FBBDC;
    case 0x7F2FBBE0u: goto label_7F2FBBE0;
    case 0x7F2FBBE4u: goto label_7F2FBBE4;
    case 0x7F2FBBE8u: goto label_7F2FBBE8;
    case 0x7F2FBBECu: goto label_7F2FBBEC;
    case 0x7F2FBBF0u: goto label_7F2FBBF0;
    case 0x7F2FBBF4u: goto label_7F2FBBF4;
    case 0x7F2FBBF8u: goto label_7F2FBBF8;
    case 0x7F2FBBFCu: goto label_7F2FBBFC;
    case 0x7F2FBC00u: goto label_7F2FBC00;
    case 0x7F2FBC04u: goto label_7F2FBC04;
    case 0x7F2FBC08u: goto label_7F2FBC08;
    case 0x7F2FBC0Cu: goto label_7F2FBC0C;
    case 0x7F2FBC10u: goto label_7F2FBC10;
    case 0x7F2FBC14u: goto label_7F2FBC14;
    case 0x7F2FBC18u: goto label_7F2FBC18;
    case 0x7F2FBC1Cu: goto label_7F2FBC1C;
    case 0x7F2FBC20u: goto label_7F2FBC20;
    case 0x7F2FBC24u: goto label_7F2FBC24;
    case 0x7F2FBC28u: goto label_7F2FBC28;
    case 0x7F2FBC2Cu: goto label_7F2FBC2C;
    case 0x7F2FBC30u: goto label_7F2FBC30;
    case 0x7F2FBC34u: goto label_7F2FBC34;
    case 0x7F2FBC38u: goto label_7F2FBC38;
    case 0x7F2FBC3Cu: goto label_7F2FBC3C;
    case 0x7F2FBC40u: goto label_7F2FBC40;
    case 0x7F2FBC44u: goto label_7F2FBC44;
    case 0x7F2FBC48u: goto label_7F2FBC48;
    case 0x7F2FBC4Cu: goto label_7F2FBC4C;
    case 0x7F2FBC50u: goto label_7F2FBC50;
    case 0x7F2FBC54u: goto label_7F2FBC54;
    case 0x7F2FBC58u: goto label_7F2FBC58;
    case 0x7F2FBC5Cu: goto label_7F2FBC5C;
    case 0x7F2FBC60u: goto label_7F2FBC60;
    case 0x7F2FBC64u: goto label_7F2FBC64;
    case 0x7F2FBC68u: goto label_7F2FBC68;
    case 0x7F2FBC6Cu: goto label_7F2FBC6C;
    case 0x7F2FBC70u: goto label_7F2FBC70;
    case 0x7F2FBC74u: goto label_7F2FBC74;
    case 0x7F2FBC78u: goto label_7F2FBC78;
    case 0x7F2FBC7Cu: goto label_7F2FBC7C;
    case 0x7F2FBC80u: goto label_7F2FBC80;
    case 0x7F2FBC84u: goto label_7F2FBC84;
    case 0x7F2FBC88u: goto label_7F2FBC88;
    case 0x7F2FBC8Cu: goto label_7F2FBC8C;
    case 0x7F2FBC90u: goto label_7F2FBC90;
    case 0x7F2FBC94u: goto label_7F2FBC94;
    case 0x7F2FBC98u: goto label_7F2FBC98;
    case 0x7F2FBC9Cu: goto label_7F2FBC9C;
    case 0x7F2FBCA0u: goto label_7F2FBCA0;
    case 0x7F2FBCA4u: goto label_7F2FBCA4;
    case 0x7F2FBCA8u: goto label_7F2FBCA8;
    case 0x7F2FBCACu: goto label_7F2FBCAC;
    case 0x7F2FBCB0u: goto label_7F2FBCB0;
    case 0x7F2FBCB4u: goto label_7F2FBCB4;
    case 0x7F2FBCB8u: goto label_7F2FBCB8;
    case 0x7F2FBCBCu: goto label_7F2FBCBC;
    case 0x7F2FBCC0u: goto label_7F2FBCC0;
    case 0x7F2FBCC4u: goto label_7F2FBCC4;
    case 0x7F2FBCC8u: goto label_7F2FBCC8;
    case 0x7F2FBCCCu: goto label_7F2FBCCC;
    case 0x7F2FBCD0u: goto label_7F2FBCD0;
    case 0x7F2FBCD4u: goto label_7F2FBCD4;
    case 0x7F2FBCD8u: goto label_7F2FBCD8;
    case 0x7F2FBCDCu: goto label_7F2FBCDC;
    case 0x7F2FBCE0u: goto label_7F2FBCE0;
    case 0x7F2FBCE4u: goto label_7F2FBCE4;
    case 0x7F2FBCE8u: goto label_7F2FBCE8;
    case 0x7F2FBCECu: goto label_7F2FBCEC;
    case 0x7F2FBCF0u: goto label_7F2FBCF0;
    case 0x7F2FBCF4u: goto label_7F2FBCF4;
    case 0x7F2FBCF8u: goto label_7F2FBCF8;
    case 0x7F2FBCFCu: goto label_7F2FBCFC;
    case 0x7F2FBD00u: goto label_7F2FBD00;
    case 0x7F2FBD04u: goto label_7F2FBD04;
    case 0x7F2FBD08u: goto label_7F2FBD08;
    case 0x7F2FBD0Cu: goto label_7F2FBD0C;
    case 0x7F2FBD10u: goto label_7F2FBD10;
    case 0x7F2FBD14u: goto label_7F2FBD14;
    case 0x7F2FBD18u: goto label_7F2FBD18;
    case 0x7F2FBD1Cu: goto label_7F2FBD1C;
    case 0x7F2FBD20u: goto label_7F2FBD20;
    case 0x7F2FBD24u: goto label_7F2FBD24;
    case 0x7F2FBD28u: goto label_7F2FBD28;
    case 0x7F2FBD2Cu: goto label_7F2FBD2C;
    case 0x7F2FBD30u: goto label_7F2FBD30;
    case 0x7F2FBD34u: goto label_7F2FBD34;
    case 0x7F2FBD38u: goto label_7F2FBD38;
    case 0x7F2FBD3Cu: goto label_7F2FBD3C;
    case 0x7F2FBD40u: goto label_7F2FBD40;
    case 0x7F2FBD44u: goto label_7F2FBD44;
    case 0x7F2FBD48u: goto label_7F2FBD48;
    case 0x7F2FBD4Cu: goto label_7F2FBD4C;
    case 0x7F2FBD50u: goto label_7F2FBD50;
    case 0x7F2FBD54u: goto label_7F2FBD54;
    case 0x7F2FBD58u: goto label_7F2FBD58;
    case 0x7F2FBD5Cu: goto label_7F2FBD5C;
    case 0x7F2FBD60u: goto label_7F2FBD60;
    case 0x7F2FBD64u: goto label_7F2FBD64;
    case 0x7F2FBD68u: goto label_7F2FBD68;
    case 0x7F2FBD6Cu: goto label_7F2FBD6C;
    case 0x7F2FBD70u: goto label_7F2FBD70;
    case 0x7F2FBD74u: goto label_7F2FBD74;
    case 0x7F2FBD78u: goto label_7F2FBD78;
    case 0x7F2FBD7Cu: goto label_7F2FBD7C;
    case 0x7F2FBD80u: goto label_7F2FBD80;
    case 0x7F2FBD84u: goto label_7F2FBD84;
    case 0x7F2FBD88u: goto label_7F2FBD88;
    case 0x7F2FBD8Cu: goto label_7F2FBD8C;
    case 0x7F2FBD90u: goto label_7F2FBD90;
    case 0x7F2FBD94u: goto label_7F2FBD94;
    case 0x7F2FBD98u: goto label_7F2FBD98;
    case 0x7F2FBD9Cu: goto label_7F2FBD9C;
    case 0x7F2FBDA0u: goto label_7F2FBDA0;
    case 0x7F2FBDA4u: goto label_7F2FBDA4;
    case 0x7F2FBDA8u: goto label_7F2FBDA8;
    case 0x7F2FBDACu: goto label_7F2FBDAC;
    case 0x7F2FBDB0u: goto label_7F2FBDB0;
    case 0x7F2FBDB4u: goto label_7F2FBDB4;
    case 0x7F2FBDB8u: goto label_7F2FBDB8;
    case 0x7F2FBDBCu: goto label_7F2FBDBC;
    case 0x7F2FBDC0u: goto label_7F2FBDC0;
    case 0x7F2FBDC4u: goto label_7F2FBDC4;
    case 0x7F2FBDC8u: goto label_7F2FBDC8;
    case 0x7F2FBDCCu: goto label_7F2FBDCC;
    case 0x7F2FBDD0u: goto label_7F2FBDD0;
    case 0x7F2FBDD4u: goto label_7F2FBDD4;
    case 0x7F2FBDD8u: goto label_7F2FBDD8;
    case 0x7F2FBDDCu: goto label_7F2FBDDC;
    case 0x7F2FBDE0u: goto label_7F2FBDE0;
    case 0x7F2FBDE4u: goto label_7F2FBDE4;
    case 0x7F2FBDE8u: goto label_7F2FBDE8;
    case 0x7F2FBDECu: goto label_7F2FBDEC;
    case 0x7F2FBDF0u: goto label_7F2FBDF0;
    case 0x7F2FBDF4u: goto label_7F2FBDF4;
    case 0x7F2FBDF8u: goto label_7F2FBDF8;
    case 0x7F2FBDFCu: goto label_7F2FBDFC;
    case 0x7F2FBE00u: goto label_7F2FBE00;
    case 0x7F2FBE04u: goto label_7F2FBE04;
    case 0x7F2FBE08u: goto label_7F2FBE08;
    case 0x7F2FBE0Cu: goto label_7F2FBE0C;
    case 0x7F2FBE10u: goto label_7F2FBE10;
    case 0x7F2FBE14u: goto label_7F2FBE14;
    case 0x7F2FBE18u: goto label_7F2FBE18;
    case 0x7F2FBE1Cu: goto label_7F2FBE1C;
    case 0x7F2FBE20u: goto label_7F2FBE20;
    case 0x7F2FBE24u: goto label_7F2FBE24;
    case 0x7F2FBE28u: goto label_7F2FBE28;
    case 0x7F2FBE2Cu: goto label_7F2FBE2C;
    case 0x7F2FBE30u: goto label_7F2FBE30;
    case 0x7F2FBE34u: goto label_7F2FBE34;
    case 0x7F2FBE38u: goto label_7F2FBE38;
    case 0x7F2FBE3Cu: goto label_7F2FBE3C;
    case 0x7F2FBE40u: goto label_7F2FBE40;
    case 0x7F2FBE44u: goto label_7F2FBE44;
    case 0x7F2FBE48u: goto label_7F2FBE48;
    case 0x7F2FBE4Cu: goto label_7F2FBE4C;
    case 0x7F2FBE50u: goto label_7F2FBE50;
    case 0x7F2FBE54u: goto label_7F2FBE54;
    case 0x7F2FBE58u: goto label_7F2FBE58;
    case 0x7F2FBE5Cu: goto label_7F2FBE5C;
    case 0x7F2FBE60u: goto label_7F2FBE60;
    case 0x7F2FBE64u: goto label_7F2FBE64;
    case 0x7F2FBE68u: goto label_7F2FBE68;
    case 0x7F2FBE6Cu: goto label_7F2FBE6C;
    case 0x7F2FBE70u: goto label_7F2FBE70;
    case 0x7F2FBE74u: goto label_7F2FBE74;
    case 0x7F2FBE78u: goto label_7F2FBE78;
    case 0x7F2FBE7Cu: goto label_7F2FBE7C;
    case 0x7F2FBE80u: goto label_7F2FBE80;
    case 0x7F2FBE84u: goto label_7F2FBE84;
    case 0x7F2FBE88u: goto label_7F2FBE88;
    case 0x7F2FBE8Cu: goto label_7F2FBE8C;
    case 0x7F2FBE90u: goto label_7F2FBE90;
    case 0x7F2FBE94u: goto label_7F2FBE94;
    case 0x7F2FBE98u: goto label_7F2FBE98;
    case 0x7F2FBE9Cu: goto label_7F2FBE9C;
    case 0x7F2FBEA0u: goto label_7F2FBEA0;
    case 0x7F2FBEA4u: goto label_7F2FBEA4;
    case 0x7F2FBEA8u: goto label_7F2FBEA8;
    case 0x7F2FBEACu: goto label_7F2FBEAC;
    case 0x7F2FBEB0u: goto label_7F2FBEB0;
    case 0x7F2FBEB4u: goto label_7F2FBEB4;
    case 0x7F2FBEB8u: goto label_7F2FBEB8;
    case 0x7F2FBEBCu: goto label_7F2FBEBC;
    case 0x7F2FBEC0u: goto label_7F2FBEC0;
    case 0x7F2FBEC4u: goto label_7F2FBEC4;
    case 0x7F2FBEC8u: goto label_7F2FBEC8;
    case 0x7F2FBECCu: goto label_7F2FBECC;
    case 0x7F2FBED0u: goto label_7F2FBED0;
    case 0x7F2FBED4u: goto label_7F2FBED4;
    case 0x7F2FBED8u: goto label_7F2FBED8;
    case 0x7F2FBEDCu: goto label_7F2FBEDC;
    case 0x7F2FBEE0u: goto label_7F2FBEE0;
    case 0x7F2FBEE4u: goto label_7F2FBEE4;
    case 0x7F2FBEE8u: goto label_7F2FBEE8;
    case 0x7F2FBEECu: goto label_7F2FBEEC;
    case 0x7F2FBEF0u: goto label_7F2FBEF0;
    case 0x7F2FBEF4u: goto label_7F2FBEF4;
    case 0x7F2FBEF8u: goto label_7F2FBEF8;
    case 0x7F2FBEFCu: goto label_7F2FBEFC;
    case 0x7F2FBF00u: goto label_7F2FBF00;
    case 0x7F2FBF04u: goto label_7F2FBF04;
    case 0x7F2FBF08u: goto label_7F2FBF08;
    case 0x7F2FBF0Cu: goto label_7F2FBF0C;
    case 0x7F2FBF10u: goto label_7F2FBF10;
    case 0x7F2FBF14u: goto label_7F2FBF14;
    case 0x7F2FBF18u: goto label_7F2FBF18;
    case 0x7F2FBF1Cu: goto label_7F2FBF1C;
    case 0x7F2FBF20u: goto label_7F2FBF20;
    case 0x7F2FBF24u: goto label_7F2FBF24;
    case 0x7F2FBF28u: goto label_7F2FBF28;
    case 0x7F2FBF2Cu: goto label_7F2FBF2C;
    case 0x7F2FBF30u: goto label_7F2FBF30;
    case 0x7F2FBF34u: goto label_7F2FBF34;
    case 0x7F2FBF38u: goto label_7F2FBF38;
    case 0x7F2FBF3Cu: goto label_7F2FBF3C;
    case 0x7F2FBF40u: goto label_7F2FBF40;
    case 0x7F2FBF44u: goto label_7F2FBF44;
    case 0x7F2FBF48u: goto label_7F2FBF48;
    case 0x7F2FBF4Cu: goto label_7F2FBF4C;
    case 0x7F2FBF50u: goto label_7F2FBF50;
    case 0x7F2FBF54u: goto label_7F2FBF54;
    case 0x7F2FBF58u: goto label_7F2FBF58;
    case 0x7F2FBF5Cu: goto label_7F2FBF5C;
    case 0x7F2FBF60u: goto label_7F2FBF60;
    case 0x7F2FBF64u: goto label_7F2FBF64;
    case 0x7F2FBF68u: goto label_7F2FBF68;
    case 0x7F2FBF6Cu: goto label_7F2FBF6C;
    case 0x7F2FBF70u: goto label_7F2FBF70;
    case 0x7F2FBF74u: goto label_7F2FBF74;
    case 0x7F2FBF78u: goto label_7F2FBF78;
    case 0x7F2FBF7Cu: goto label_7F2FBF7C;
    case 0x7F2FBF80u: goto label_7F2FBF80;
    case 0x7F2FBF84u: goto label_7F2FBF84;
    case 0x7F2FBF88u: goto label_7F2FBF88;
    case 0x7F2FBF8Cu: goto label_7F2FBF8C;
    case 0x7F2FBF90u: goto label_7F2FBF90;
    case 0x7F2FBF94u: goto label_7F2FBF94;
    case 0x7F2FBF98u: goto label_7F2FBF98;
    case 0x7F2FBF9Cu: goto label_7F2FBF9C;
    case 0x7F2FBFA0u: goto label_7F2FBFA0;
    case 0x7F2FBFA4u: goto label_7F2FBFA4;
    case 0x7F2FBFA8u: goto label_7F2FBFA8;
    case 0x7F2FBFACu: goto label_7F2FBFAC;
    case 0x7F2FBFB0u: goto label_7F2FBFB0;
    case 0x7F2FBFB4u: goto label_7F2FBFB4;
    case 0x7F2FBFB8u: goto label_7F2FBFB8;
    case 0x7F2FBFBCu: goto label_7F2FBFBC;
    case 0x7F2FBFC0u: goto label_7F2FBFC0;
    case 0x7F2FBFC4u: goto label_7F2FBFC4;
    case 0x7F2FBFC8u: goto label_7F2FBFC8;
    case 0x7F2FBFCCu: goto label_7F2FBFCC;
    case 0x7F2FBFD0u: goto label_7F2FBFD0;
    case 0x7F2FBFD4u: goto label_7F2FBFD4;
    case 0x7F2FBFD8u: goto label_7F2FBFD8;
    case 0x7F2FBFDCu: goto label_7F2FBFDC;
    case 0x7F2FBFE0u: goto label_7F2FBFE0;
    case 0x7F2FBFE4u: goto label_7F2FBFE4;
    case 0x7F2FBFE8u: goto label_7F2FBFE8;
    case 0x7F2FBFECu: goto label_7F2FBFEC;
    case 0x7F2FBFF0u: goto label_7F2FBFF0;
    case 0x7F2FBFF4u: goto label_7F2FBFF4;
    case 0x7F2FBFF8u: goto label_7F2FBFF8;
    case 0x7F2FBFFCu: goto label_7F2FBFFC;
    case 0x7F2FC000u: goto label_7F2FC000;
    case 0x7F2FC004u: goto label_7F2FC004;
    case 0x7F2FC008u: goto label_7F2FC008;
    case 0x7F2FC00Cu: goto label_7F2FC00C;
    case 0x7F2FC010u: goto label_7F2FC010;
    case 0x7F2FC014u: goto label_7F2FC014;
    case 0x7F2FC018u: goto label_7F2FC018;
    case 0x7F2FC01Cu: goto label_7F2FC01C;
    case 0x7F2FC020u: goto label_7F2FC020;
    case 0x7F2FC024u: goto label_7F2FC024;
    case 0x7F2FC028u: goto label_7F2FC028;
    case 0x7F2FC02Cu: goto label_7F2FC02C;
    case 0x7F2FC030u: goto label_7F2FC030;
    case 0x7F2FC034u: goto label_7F2FC034;
    case 0x7F2FC038u: goto label_7F2FC038;
    case 0x7F2FC03Cu: goto label_7F2FC03C;
    case 0x7F2FC040u: goto label_7F2FC040;
    case 0x7F2FC044u: goto label_7F2FC044;
    case 0x7F2FC048u: goto label_7F2FC048;
    case 0x7F2FC04Cu: goto label_7F2FC04C;
    case 0x7F2FC050u: goto label_7F2FC050;
    case 0x7F2FC054u: goto label_7F2FC054;
    case 0x7F2FC058u: goto label_7F2FC058;
    case 0x7F2FC05Cu: goto label_7F2FC05C;
    case 0x7F2FC060u: goto label_7F2FC060;
    case 0x7F2FC064u: goto label_7F2FC064;
    case 0x7F2FC068u: goto label_7F2FC068;
    case 0x7F2FC06Cu: goto label_7F2FC06C;
    case 0x7F2FC070u: goto label_7F2FC070;
    case 0x7F2FC074u: goto label_7F2FC074;
    case 0x7F2FC078u: goto label_7F2FC078;
    case 0x7F2FC07Cu: goto label_7F2FC07C;
    case 0x7F2FC080u: goto label_7F2FC080;
    case 0x7F2FC084u: goto label_7F2FC084;
    case 0x7F2FC088u: goto label_7F2FC088;
    case 0x7F2FC08Cu: goto label_7F2FC08C;
    case 0x7F2FC090u: goto label_7F2FC090;
    case 0x7F2FC094u: goto label_7F2FC094;
    case 0x7F2FC098u: goto label_7F2FC098;
    case 0x7F2FC09Cu: goto label_7F2FC09C;
    case 0x7F2FC0A0u: goto label_7F2FC0A0;
    case 0x7F2FC0A4u: goto label_7F2FC0A4;
    case 0x7F2FC0A8u: goto label_7F2FC0A8;
    case 0x7F2FC0ACu: goto label_7F2FC0AC;
    case 0x7F2FC0B0u: goto label_7F2FC0B0;
    case 0x7F2FC0B4u: goto label_7F2FC0B4;
    case 0x7F2FC0B8u: goto label_7F2FC0B8;
    case 0x7F2FC0BCu: goto label_7F2FC0BC;
    case 0x7F2FC0C0u: goto label_7F2FC0C0;
    case 0x7F2FC0C4u: goto label_7F2FC0C4;
    case 0x7F2FC0C8u: goto label_7F2FC0C8;
    case 0x7F2FC0CCu: goto label_7F2FC0CC;
    case 0x7F2FC0D0u: goto label_7F2FC0D0;
    case 0x7F2FC0D4u: goto label_7F2FC0D4;
    case 0x7F2FC0D8u: goto label_7F2FC0D8;
    case 0x7F2FC0DCu: goto label_7F2FC0DC;
    case 0x7F2FC0E0u: goto label_7F2FC0E0;
    case 0x7F2FC0E4u: goto label_7F2FC0E4;
    case 0x7F2FC0E8u: goto label_7F2FC0E8;
    default: return;
    }
label_7F2F80EC:
    ctx->pc = 0x7F2F80ECu;
    ctx->downcount -= 9;
    // 7F2F80EC: or   r8, r28, r28
    {
        ctx->gpr[8] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2F80F0:
    ctx->pc = 0x7F2F80F0u;
    // 7F2F80F0: or   r9, r29, r29
    {
        ctx->gpr[9] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2F80F4:
    ctx->pc = 0x7F2F80F4u;
    // 7F2F80F4: stw     r11, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2F80F8:
    ctx->pc = 0x7F2F80F8u;
    // 7F2F80F8: or   r10, r30, r30
    {
        ctx->gpr[10] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2F80FC:
    ctx->pc = 0x7F2F80FCu;
    // 7F2F80FC: stw     r11, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2F8100:
    ctx->pc = 0x7F2F8100u;
    // 7F2F8100: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8104:
    ctx->pc = 0x7F2F8104u;
    // 7F2F8104: stw     r11, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2F8108:
    ctx->pc = 0x7F2F8108u;
    // 7F2F8108: stw     r11, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2F810C:
    ctx->pc = 0x7F2F810Cu;
    // 7F2F810C: bl      0x7F2F7D98
    {
            ctx->lr = 0x7F2F8110u;
            ctx->pc = 0x7F2F7D98u;
            return;
    }

label_7F2F8110:
    ctx->pc = 0x7F2F8110u;
    ctx->downcount -= 2;
    // 7F2F8110: cmpwi   r3, 0
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

label_7F2F8114:
    ctx->pc = 0x7F2F8114u;
    // 7F2F8114: bc    4, 2, 0x7F2F8128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8128;
        }
    }

label_7F2F8118:
    ctx->pc = 0x7F2F8118u;
    ctx->downcount -= 2;
    // 7F2F8118: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F811C:
    ctx->pc = 0x7F2F811Cu;
    // 7F2F811C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2F8120u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2F8120:
    ctx->pc = 0x7F2F8120u;
    ctx->downcount -= 2;
    // 7F2F8120: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F8124:
    ctx->pc = 0x7F2F8124u;
    // 7F2F8124: b       0x7F2F812C
    {
            goto label_7F2F812C;
    }

label_7F2F8128:
    ctx->pc = 0x7F2F8128u;
    ctx->downcount -= 1;
    // 7F2F8128: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F812C:
    ctx->pc = 0x7F2F812Cu;
    ctx->downcount -= 16;
    // 7F2F812C: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F8130:
    ctx->pc = 0x7F2F8130u;
    // 7F2F8130: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8134:
    ctx->pc = 0x7F2F8134u;
    // 7F2F8134: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8138:
    ctx->pc = 0x7F2F8138u;
    // 7F2F8138: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2F813C:
    ctx->pc = 0x7F2F813Cu;
    // 7F2F813C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8140:
    ctx->pc = 0x7F2F8140u;
    ctx->downcount -= 2;
    // 7F2F8140: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2F8144:
    ctx->pc = 0x7F2F8144u;
    // 7F2F8144: b       0x7F2F8198
    {
            goto label_7F2F8198;
    }

label_7F2F8148:
    ctx->pc = 0x7F2F8148u;
    ctx->downcount -= 7;
    // 7F2F8148: lbz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2F814C:
    // 7F2F814C: cmpwi   r4, 8
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8150:
    // 7F2F8150: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F8154:
    // 7F2F8154: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2F8158:
    // 7F2F8158: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F2F815C:
    // 7F2F815C: xor   r7, r7, r5
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[5];
    }

label_7F2F8160:
    // 7F2F8160: bc    4, 0, 0x7F2F8168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8168;
        }
    }

label_7F2F8164:
    ctx->downcount -= 1;
    // 7F2F8164: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2F8168:
    ctx->downcount -= 5;
    // 7F2F8168: or   r6, r0, r0
    {
        ctx->gpr[6] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2F816C:
    ctx->pc = 0x7F2F816Cu;
    // 7F2F816C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F8170:
    // 7F2F8170: cmpwi   r0, 0
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

label_7F2F8174:
    // 7F2F8174: bc    4, 1, 0x7F2F8194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8194;
        }
    }

label_7F2F8178:
    ctx->downcount -= 3;
    // 7F2F8178: rlwinm. r0, r7, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2F817C:
    // 7F2F817C: rlwinm r5, r7, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x7FFFFFFFu;
    }

label_7F2F8180:
    // 7F2F8180: bc    12, 2, 0x7F2F8188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8188;
        }
    }

label_7F2F8184:
    ctx->downcount -= 1;
    // 7F2F8184: xori    r5, r5, 0x0074
    ctx->gpr[5] = ctx->gpr[5] ^ 0x0074u;

label_7F2F8188:
    ctx->downcount -= 3;
    // 7F2F8188: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2F818C:
    // 7F2F818C: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F2F8190:
    // 7F2F8190: bc    16, 0, 0x7F2F8178
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8178u;
                return;
            }
            goto label_7F2F8178;
        }
    }

label_7F2F8194:
    ctx->downcount -= 1;
    // 7F2F8194: addi    r4, r4, -8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8);

label_7F2F8198:
    ctx->downcount -= 2;
    // 7F2F8198: cmpwi   r4, 0
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

label_7F2F819C:
    // 7F2F819C: bc    12, 1, 0x7F2F8148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8148u;
                return;
            }
            goto label_7F2F8148;
        }
    }

label_7F2F81A0:
    ctx->pc = 0x7F2F81A0u;
    ctx->downcount -= 2;
    // 7F2F81A0: rlwinm r3, r7, 0, 25, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x0000007Fu;
    }

label_7F2F81A4:
    ctx->pc = 0x7F2F81A4u;
    // 7F2F81A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F81A8:
    ctx->pc = 0x7F2F81A8u;
    ctx->downcount -= 14;
    // 7F2F81A8: srawi r8, r6, 5
    {
        u32 sh = 5u;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[8] = value;
        } else if (sh > 31) {
            ctx->gpr[8] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[8] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2F81AC:
    ctx->pc = 0x7F2F81ACu;
    // 7F2F81AC: rlwinm r7, r5, 0, 27, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000001Fu;
    }

label_7F2F81B0:
    ctx->pc = 0x7F2F81B0u;
    // 7F2F81B0: srawi r5, r5, 5
    {
        u32 sh = 5u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2F81B4:
    ctx->pc = 0x7F2F81B4u;
    // 7F2F81B4: rlwinm r0, r6, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000001Fu;
    }

label_7F2F81B8:
    ctx->pc = 0x7F2F81B8u;
    // 7F2F81B8: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F2F81BC:
    ctx->pc = 0x7F2F81BCu;
    // 7F2F81BC: rlwinm r6, r8, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_7F2F81C0:
    ctx->pc = 0x7F2F81C0u;
    // 7F2F81C0: lwzx    r4, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F81C4:
    ctx->pc = 0x7F2F81C4u;
    // 7F2F81C4: lwzx    r5, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F81C8:
    ctx->pc = 0x7F2F81C8u;
    // 7F2F81C8: srw   r4, r4, r7
    {
        u32 sh = ctx->gpr[7] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[4] >> sh);
    }

label_7F2F81CC:
    ctx->pc = 0x7F2F81CCu;
    // 7F2F81CC: rlwinm r4, r4, 0, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000001u;
    }

label_7F2F81D0:
    ctx->pc = 0x7F2F81D0u;
    // 7F2F81D0: slw   r0, r4, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

label_7F2F81D4:
    ctx->pc = 0x7F2F81D4u;
    // 7F2F81D4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F2F81D8:
    ctx->pc = 0x7F2F81D8u;
    // 7F2F81D8: stwx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F81DC:
    ctx->pc = 0x7F2F81DCu;
    // 7F2F81DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F81E0:
    ctx->pc = 0x7F2F81E0u;
    ctx->downcount -= 13;
    // 7F2F81E0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2F81E4:
    ctx->pc = 0x7F2F81E4u;
    // 7F2F81E4: lis     r3, 32044
    ctx->gpr[3] = ((u32)(s32)(32044) << 16);

label_7F2F81E8:
    ctx->pc = 0x7F2F81E8u;
    // 7F2F81E8: addi    r5, r4, -3592
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3592);

label_7F2F81EC:
    ctx->pc = 0x7F2F81ECu;
    // 7F2F81EC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F81F0:
    ctx->pc = 0x7F2F81F0u;
    // 7F2F81F0: addi    r0, r3, -30243
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30243);

label_7F2F81F4:
    ctx->pc = 0x7F2F81F4u;
    // 7F2F81F4: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F2F81F8:
    ctx->pc = 0x7F2F81F8u;
    // 7F2F81F8: addi    r3, r3, 3321
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3321);

label_7F2F81FC:
    ctx->pc = 0x7F2F81FCu;
    // 7F2F81FC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8200:
    ctx->pc = 0x7F2F8200u;
    // 7F2F8200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8204:
    ctx->pc = 0x7F2F8204u;
    ctx->downcount -= 32;
    // 7F2F8204: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8208:
    ctx->pc = 0x7F2F8208u;
    // 7F2F8208: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F820C:
    ctx->pc = 0x7F2F820Cu;
    // 7F2F820C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8210:
    ctx->pc = 0x7F2F8210u;
    // 7F2F8210: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2F8214:
    ctx->pc = 0x7F2F8214u;
    // 7F2F8214: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F8218:
    ctx->pc = 0x7F2F8218u;
    // 7F2F8218: or   r28, r9, r9
    {
        ctx->gpr[28] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2F821C:
    ctx->pc = 0x7F2F821Cu;
    // 7F2F821C: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2F8220:
    ctx->pc = 0x7F2F8220u;
    // 7F2F8220: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8224:
    ctx->pc = 0x7F2F8224u;
    // 7F2F8224: rlwinm r31, r8, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_7F2F8228:
    ctx->pc = 0x7F2F8228u;
    // 7F2F8228: or.   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2F822C:
    ctx->pc = 0x7F2F822Cu;
    // 7F2F822C: slw   r0, r0, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2F8230:
    ctx->pc = 0x7F2F8230u;
    // 7F2F8230: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2F8234:
    ctx->pc = 0x7F2F8234u;
    // 7F2F8234: or   r29, r10, r10
    {
        ctx->gpr[29] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F2F8238:
    ctx->pc = 0x7F2F8238u;
    // 7F2F8238: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2F823C:
    ctx->pc = 0x7F2F823Cu;
    // 7F2F823C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F8240:
    ctx->pc = 0x7F2F8240u;
    // 7F2F8240: lwzx    r3, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8244:
    ctx->pc = 0x7F2F8244u;
    // 7F2F8244: andc   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ~ctx->gpr[0];
    }

label_7F2F8248:
    ctx->pc = 0x7F2F8248u;
    // 7F2F8248: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F824C:
    ctx->pc = 0x7F2F824Cu;
    // 7F2F824C: stwx    r0, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8250:
    ctx->pc = 0x7F2F8250u;
    // 7F2F8250: mtctr    r27
    ctx->ctr = ctx->gpr[27];

label_7F2F8254:
    ctx->pc = 0x7F2F8254u;
    // 7F2F8254: bc    4, 1, 0x7F2F8278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8278;
        }
    }

label_7F2F8258:
    loop_7F2F8258(ctx);
    if (ctx->pc == 0x7F2F8278u) goto label_7F2F8278;
    return;
label_7F2F825C:
    // 7F2F825C: rlwinm r0, r6, 3, 27, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 3u) & 0x00000018u;
    }

label_7F2F8260:
    ctx->pc = 0x7F2F8260u;
    // 7F2F8260: lwzx    r5, r24, r5
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F8264:
    // 7F2F8264: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F2F8268:
    // 7F2F8268: srw   r0, r5, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] >> sh);
    }

label_7F2F826C:
    ctx->pc = 0x7F2F826Cu;
    // 7F2F826C: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F8270:
    // 7F2F8270: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2F8274:
    // 7F2F8274: bc    16, 0, 0x7F2F8258
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8258u;
                return;
            }
            goto label_7F2F8258;
        }
    }

label_7F2F8278:
    ctx->pc = 0x7F2F8278u;
    ctx->downcount -= 2;
    // 7F2F8278: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F827C:
    ctx->pc = 0x7F2F827Cu;
    // 7F2F827C: bl      0x7F2F8140
    {
            ctx->lr = 0x7F2F8280u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8140u;
                return;
            }
            goto label_7F2F8140;
    }

label_7F2F8280:
    ctx->pc = 0x7F2F8280u;
    ctx->downcount -= 7;
    // 7F2F8280: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F8284:
    ctx->pc = 0x7F2F8284u;
    // 7F2F8284: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2F8288:
    ctx->pc = 0x7F2F8288u;
    // 7F2F8288: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F2F828C:
    ctx->pc = 0x7F2F828Cu;
    // 7F2F828C: mtctr    r27
    ctx->ctr = ctx->gpr[27];

label_7F2F8290:
    ctx->pc = 0x7F2F8290u;
    // 7F2F8290: cmpwi   r27, 0
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

label_7F2F8294:
    ctx->pc = 0x7F2F8294u;
    // 7F2F8294: bc    4, 1, 0x7F2F82D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F82D0;
        }
    }

label_7F2F8298:
    loop_7F2F8298(ctx);
    if (ctx->pc == 0x7F2F82D0u) goto label_7F2F82D0;
    return;
label_7F2F829C:
    // 7F2F829C: rlwinm r9, r8, 3, 27, 28
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[8], 3u) & 0x00000018u;
    }

label_7F2F82A0:
    ctx->pc = 0x7F2F82A0u;
    // 7F2F82A0: lwzx    r5, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F82A4:
    // 7F2F82A4: slw   r0, r6, r9
    {
        u32 sh = ctx->gpr[9] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_7F2F82A8:
    // 7F2F82A8: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F2F82AC:
    // 7F2F82AC: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_7F2F82B0:
    ctx->pc = 0x7F2F82B0u;
    // 7F2F82B0: stwx    r0, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F82B4:
    ctx->pc = 0x7F2F82B4u;
    // 7F2F82B4: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2F82B8:
    // 7F2F82B8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2F82BC:
    ctx->pc = 0x7F2F82BCu;
    // 7F2F82BC: lwzx    r5, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F82C0:
    // 7F2F82C0: slw   r0, r0, r9
    {
        u32 sh = ctx->gpr[9] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2F82C4:
    // 7F2F82C4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F2F82C8:
    ctx->pc = 0x7F2F82C8u;
    // 7F2F82C8: stwx    r0, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F82CC:
    // 7F2F82CC: bc    16, 0, 0x7F2F8298
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8298u;
                return;
            }
            goto label_7F2F8298;
        }
    }

label_7F2F82D0:
    ctx->pc = 0x7F2F82D0u;
    ctx->downcount -= 10;
    // 7F2F82D0: li      r0, 127
    ctx->gpr[0] = (u32)(s32)(127);

label_7F2F82D4:
    ctx->pc = 0x7F2F82D4u;
    // 7F2F82D4: lwzx    r5, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F82D8:
    ctx->pc = 0x7F2F82D8u;
    // 7F2F82D8: slw   r4, r0, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2F82DC:
    ctx->pc = 0x7F2F82DCu;
    // 7F2F82DC: slw   r0, r3, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F2F82E0:
    ctx->pc = 0x7F2F82E0u;
    // 7F2F82E0: andc   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ~ctx->gpr[4];
    }

label_7F2F82E4:
    ctx->pc = 0x7F2F82E4u;
    // 7F2F82E4: stwx    r3, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F82E8:
    ctx->pc = 0x7F2F82E8u;
    // 7F2F82E8: lwzx    r3, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F82EC:
    ctx->pc = 0x7F2F82ECu;
    // 7F2F82EC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F2F82F0:
    ctx->pc = 0x7F2F82F0u;
    // 7F2F82F0: stwx    r0, r24, r31
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F82F4:
    ctx->pc = 0x7F2F82F4u;
    // 7F2F82F4: bl      0x7F2F83F8
    {
            ctx->lr = 0x7F2F82F8u;
            goto label_7F2F83F8;
    }

label_7F2F82F8:
    ctx->pc = 0x7F2F82F8u;
    ctx->downcount -= 9;
    // 7F2F82F8: rlwinm r31, r3, 16, 27, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000001Fu;
    }

label_7F2F82FC:
    ctx->pc = 0x7F2F82FCu;
    // 7F2F82FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2F8300:
    ctx->pc = 0x7F2F8300u;
    // 7F2F8300: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2F8304:
    ctx->pc = 0x7F2F8304u;
    // 7F2F8304: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2F8308:
    ctx->pc = 0x7F2F8308u;
    // 7F2F8308: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F2F830C:
    ctx->pc = 0x7F2F830Cu;
    // 7F2F830C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2F8310:
    ctx->pc = 0x7F2F8310u;
    // 7F2F8310: stw     r0, -3592(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8314:
    ctx->pc = 0x7F2F8314u;
    // 7F2F8314: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2F8318:
    ctx->pc = 0x7F2F8318u;
    // 7F2F8318: b       0x7F2F8334
    {
            goto label_7F2F8334;
    }

label_7F2F831C:
    ctx->downcount -= 1;
    // 7F2F831C: bl      0x7F2F81E0
    {
            ctx->lr = 0x7F2F8320u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F81E0u;
                return;
            }
            goto label_7F2F81E0;
    }

label_7F2F8320:
    ctx->pc = 0x7F2F8320u;
    ctx->downcount -= 5;
    // 7F2F8320: lwzx    r0, r24, r27
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8324:
    // 7F2F8324: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2F8328:
    // 7F2F8328: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F2F832C:
    ctx->pc = 0x7F2F832Cu;
    // 7F2F832C: stwx    r0, r24, r27
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[27];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8330:
    // 7F2F8330: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F2F8334:
    ctx->downcount -= 2;
    // 7F2F8334: cmpw    r28, r26
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8338:
    // 7F2F8338: bc    12, 0, 0x7F2F831C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F831Cu;
                return;
            }
            goto label_7F2F831C;
        }
    }

label_7F2F833C:
    ctx->pc = 0x7F2F833Cu;
    ctx->downcount -= 17;
    // 7F2F833C: rlwinm r7, r29, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F2F8340:
    ctx->pc = 0x7F2F8340u;
    // 7F2F8340: li      r0, 31
    ctx->gpr[0] = (u32)(s32)(31);

label_7F2F8344:
    ctx->pc = 0x7F2F8344u;
    // 7F2F8344: lwzx    r3, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8348:
    ctx->pc = 0x7F2F8348u;
    // 7F2F8348: slw   r0, r0, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2F834C:
    ctx->pc = 0x7F2F834Cu;
    // 7F2F834C: slw   r5, r31, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[31] << sh);
    }

label_7F2F8350:
    ctx->pc = 0x7F2F8350u;
    // 7F2F8350: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F2F8354:
    ctx->pc = 0x7F2F8354u;
    // 7F2F8354: andc   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ~ctx->gpr[0];
    }

label_7F2F8358:
    ctx->pc = 0x7F2F8358u;
    // 7F2F8358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F835C:
    ctx->pc = 0x7F2F835Cu;
    // 7F2F835C: stwx    r0, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8360:
    ctx->pc = 0x7F2F8360u;
    // 7F2F8360: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F8364:
    ctx->pc = 0x7F2F8364u;
    // 7F2F8364: lwzx    r6, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F8368:
    ctx->pc = 0x7F2F8368u;
    // 7F2F8368: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F2F836C:
    ctx->pc = 0x7F2F836Cu;
    // 7F2F836C: stwx    r5, r24, r7
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F8370:
    ctx->pc = 0x7F2F8370u;
    // 7F2F8370: mtctr    r26
    ctx->ctr = ctx->gpr[26];

label_7F2F8374:
    ctx->pc = 0x7F2F8374u;
    // 7F2F8374: cmpwi   r26, 0
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

label_7F2F8378:
    ctx->pc = 0x7F2F8378u;
    // 7F2F8378: bc    4, 1, 0x7F2F8388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8388;
        }
    }

label_7F2F837C:
    loop_7F2F837C(ctx);
    if (ctx->pc == 0x7F2F8388u) goto label_7F2F8388;
    return;
label_7F2F8380:
    // 7F2F8380: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2F8384:
    // 7F2F8384: bc    16, 0, 0x7F2F837C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F837Cu;
                return;
            }
            goto label_7F2F837C;
        }
    }

label_7F2F8388:
    ctx->pc = 0x7F2F8388u;
    ctx->downcount -= 5;
    // 7F2F8388: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F838C:
    ctx->pc = 0x7F2F838Cu;
    // 7F2F838C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2F8390:
    ctx->pc = 0x7F2F8390u;
    // 7F2F8390: addi    r0, r3, 31192
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31192);

label_7F2F8394:
    ctx->pc = 0x7F2F8394u;
    // 7F2F8394: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2F8398:
    ctx->pc = 0x7F2F8398u;
    // 7F2F8398: b       0x7F2F83B8
    {
            goto label_7F2F83B8;
    }

label_7F2F839C:
    ctx->pc = 0x7F2F839Cu;
    ctx->downcount -= 5;
    // 7F2F839C: lbz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F2F83A0:
    // 7F2F83A0: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2F83A4:
    // 7F2F83A4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2F83A8:
    // 7F2F83A8: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F2F83AC:
    // 7F2F83AC: bl      0x7F2F81A8
    {
            ctx->lr = 0x7F2F83B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F81A8u;
                return;
            }
            goto label_7F2F81A8;
    }

label_7F2F83B0:
    ctx->downcount -= 2;
    // 7F2F83B0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2F83B4:
    // 7F2F83B4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2F83B8:
    ctx->downcount -= 2;
    // 7F2F83B8: cmpw    r28, r25
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F83BC:
    // 7F2F83BC: bc    12, 0, 0x7F2F839C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F839Cu;
                return;
            }
            goto label_7F2F839C;
        }
    }

label_7F2F83C0:
    ctx->pc = 0x7F2F83C0u;
    ctx->downcount -= 6;
    // 7F2F83C0: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F2F83C4:
    ctx->pc = 0x7F2F83C4u;
    // 7F2F83C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F83C8:
    ctx->pc = 0x7F2F83C8u;
    // 7F2F83C8: mtctr    r26
    ctx->ctr = ctx->gpr[26];

label_7F2F83CC:
    ctx->pc = 0x7F2F83CCu;
    // 7F2F83CC: cmpwi   r26, 0
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

label_7F2F83D0:
    ctx->pc = 0x7F2F83D0u;
    // 7F2F83D0: bc    4, 1, 0x7F2F83E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F83E4;
        }
    }

label_7F2F83D4:
    loop_7F2F83D4(ctx);
    if (ctx->pc == 0x7F2F83E4u) goto label_7F2F83E4;
    return;
label_7F2F83D8:
    ctx->pc = 0x7F2F83D8u;
    // 7F2F83D8: stwx    r0, r24, r3
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F83DC:
    // 7F2F83DC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2F83E0:
    // 7F2F83E0: bc    16, 0, 0x7F2F83D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F83D4u;
                return;
            }
            goto label_7F2F83D4;
        }
    }

label_7F2F83E4:
    ctx->pc = 0x7F2F83E4u;
    ctx->downcount -= 16;
    // 7F2F83E4: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F83E8:
    ctx->pc = 0x7F2F83E8u;
    // 7F2F83E8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F83EC:
    ctx->pc = 0x7F2F83ECu;
    // 7F2F83EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F83F0:
    ctx->pc = 0x7F2F83F0u;
    // 7F2F83F0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2F83F4:
    ctx->pc = 0x7F2F83F4u;
    // 7F2F83F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F83F8:
    ctx->pc = 0x7F2F83F8u;
    ctx->downcount -= 13;
    // 7F2F83F8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2F83FC:
    ctx->pc = 0x7F2F83FCu;
    // 7F2F83FC: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F2F8400:
    ctx->pc = 0x7F2F8400u;
    // 7F2F8400: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F2F8404:
    ctx->pc = 0x7F2F8404u;
    // 7F2F8404: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8408:
    ctx->pc = 0x7F2F8408u;
    // 7F2F8408: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F2F840C:
    ctx->pc = 0x7F2F840Cu;
    // 7F2F840C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F2F8410:
    ctx->pc = 0x7F2F8410u;
    // 7F2F8410: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2F8414:
    ctx->pc = 0x7F2F8414u;
    // 7F2F8414: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8418:
    ctx->pc = 0x7F2F8418u;
    // 7F2F8418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F841C:
    ctx->pc = 0x7F2F841Cu;
    ctx->downcount -= 15;
    // 7F2F841C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8420:
    ctx->pc = 0x7F2F8420u;
    // 7F2F8420: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8424:
    ctx->pc = 0x7F2F8424u;
    // 7F2F8424: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_7F2F8428:
    ctx->pc = 0x7F2F8428u;
    // 7F2F8428: li      r5, 122
    ctx->gpr[5] = (u32)(s32)(122);

label_7F2F842C:
    ctx->pc = 0x7F2F842Cu;
    // 7F2F842C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8430:
    ctx->pc = 0x7F2F8430u;
    // 7F2F8430: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F2F8434:
    ctx->pc = 0x7F2F8434u;
    // 7F2F8434: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F2F8438:
    ctx->pc = 0x7F2F8438u;
    // 7F2F8438: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F2F843C:
    ctx->pc = 0x7F2F843Cu;
    // 7F2F843C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F8440:
    ctx->pc = 0x7F2F8440u;
    // 7F2F8440: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8444:
    ctx->pc = 0x7F2F8444u;
    // 7F2F8444: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F2F8448:
    ctx->pc = 0x7F2F8448u;
    // 7F2F8448: li      r9, 14
    ctx->gpr[9] = (u32)(s32)(14);

label_7F2F844C:
    ctx->pc = 0x7F2F844Cu;
    // 7F2F844C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8450:
    ctx->pc = 0x7F2F8450u;
    // 7F2F8450: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F2F8454:
    ctx->pc = 0x7F2F8454u;
    // 7F2F8454: bl      0x7F2F8204
    {
            ctx->lr = 0x7F2F8458u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8204u;
                return;
            }
            goto label_7F2F8204;
    }

label_7F2F8458:
    ctx->pc = 0x7F2F8458u;
    ctx->downcount -= 25;
    // 7F2F8458: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F845C:
    ctx->pc = 0x7F2F845Cu;
    // 7F2F845C: xoris   r0, r0, 0x8634
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8634u << 16);

label_7F2F8460:
    ctx->pc = 0x7F2F8460u;
    // 7F2F8460: xori    r0, r0, 0xF7AD
    ctx->gpr[0] = ctx->gpr[0] ^ 0xF7ADu;

label_7F2F8464:
    ctx->pc = 0x7F2F8464u;
    // 7F2F8464: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8468:
    ctx->pc = 0x7F2F8468u;
    // 7F2F8468: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F846C:
    ctx->pc = 0x7F2F846Cu;
    // 7F2F846C: xoris   r0, r0, 0x19E5
    ctx->gpr[0] = ctx->gpr[0] ^ (0x19E5u << 16);

label_7F2F8470:
    ctx->pc = 0x7F2F8470u;
    // 7F2F8470: xori    r0, r0, 0xCB02
    ctx->gpr[0] = ctx->gpr[0] ^ 0xCB02u;

label_7F2F8474:
    ctx->pc = 0x7F2F8474u;
    // 7F2F8474: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8478:
    ctx->pc = 0x7F2F8478u;
    // 7F2F8478: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F847C:
    ctx->pc = 0x7F2F847Cu;
    // 7F2F847C: xoris   r0, r0, 0x7ED1
    ctx->gpr[0] = ctx->gpr[0] ^ (0x7ED1u << 16);

label_7F2F8480:
    ctx->pc = 0x7F2F8480u;
    // 7F2F8480: xori    r0, r0, 0x0F24
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0F24u;

label_7F2F8484:
    ctx->pc = 0x7F2F8484u;
    // 7F2F8484: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8488:
    ctx->pc = 0x7F2F8488u;
    // 7F2F8488: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F848C:
    ctx->pc = 0x7F2F848Cu;
    // 7F2F848C: xoris   r0, r0, 0x9A36
    ctx->gpr[0] = ctx->gpr[0] ^ (0x9A36u << 16);

label_7F2F8490:
    ctx->pc = 0x7F2F8490u;
    // 7F2F8490: xori    r0, r0, 0xB8C5
    ctx->gpr[0] = ctx->gpr[0] ^ 0xB8C5u;

label_7F2F8494:
    ctx->pc = 0x7F2F8494u;
    // 7F2F8494: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8498:
    ctx->pc = 0x7F2F8498u;
    // 7F2F8498: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F849C:
    ctx->pc = 0x7F2F849Cu;
    // 7F2F849C: rlwinm r0, r0, 0, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x03FFFFFFu;
    }

label_7F2F84A0:
    ctx->pc = 0x7F2F84A0u;
    // 7F2F84A0: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F84A4:
    ctx->pc = 0x7F2F84A4u;
    // 7F2F84A4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F84A8:
    ctx->pc = 0x7F2F84A8u;
    // 7F2F84A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F84AC:
    ctx->pc = 0x7F2F84ACu;
    // 7F2F84AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F84B0:
    ctx->pc = 0x7F2F84B0u;
    // 7F2F84B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F84B4:
    ctx->pc = 0x7F2F84B4u;
    // 7F2F84B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F84B8:
    ctx->pc = 0x7F2F84B8u;
    ctx->downcount -= 15;
    // 7F2F84B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F84BC:
    ctx->pc = 0x7F2F84BCu;
    // 7F2F84BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F84C0:
    ctx->pc = 0x7F2F84C0u;
    // 7F2F84C0: li      r4, 185
    ctx->gpr[4] = (u32)(s32)(185);

label_7F2F84C4:
    ctx->pc = 0x7F2F84C4u;
    // 7F2F84C4: li      r5, 197
    ctx->gpr[5] = (u32)(s32)(197);

label_7F2F84C8:
    ctx->pc = 0x7F2F84C8u;
    // 7F2F84C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F84CC:
    ctx->pc = 0x7F2F84CCu;
    // 7F2F84CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F84D0:
    ctx->pc = 0x7F2F84D0u;
    // 7F2F84D0: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F2F84D4:
    ctx->pc = 0x7F2F84D4u;
    // 7F2F84D4: li      r7, 25
    ctx->gpr[7] = (u32)(s32)(25);

label_7F2F84D8:
    ctx->pc = 0x7F2F84D8u;
    // 7F2F84D8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F84DC:
    ctx->pc = 0x7F2F84DCu;
    // 7F2F84DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F84E0:
    ctx->pc = 0x7F2F84E0u;
    // 7F2F84E0: li      r8, 5
    ctx->gpr[8] = (u32)(s32)(5);

label_7F2F84E4:
    ctx->pc = 0x7F2F84E4u;
    // 7F2F84E4: li      r9, 25
    ctx->gpr[9] = (u32)(s32)(25);

label_7F2F84E8:
    ctx->pc = 0x7F2F84E8u;
    // 7F2F84E8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F84EC:
    ctx->pc = 0x7F2F84ECu;
    // 7F2F84EC: li      r10, 6
    ctx->gpr[10] = (u32)(s32)(6);

label_7F2F84F0:
    ctx->pc = 0x7F2F84F0u;
    // 7F2F84F0: bl      0x7F2F8204
    {
            ctx->lr = 0x7F2F84F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8204u;
                return;
            }
            goto label_7F2F8204;
    }

label_7F2F84F4:
    ctx->pc = 0x7F2F84F4u;
    ctx->downcount -= 37;
    // 7F2F84F4: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F84F8:
    ctx->pc = 0x7F2F84F8u;
    // 7F2F84F8: xoris   r0, r0, 0xB8C5
    ctx->gpr[0] = ctx->gpr[0] ^ (0xB8C5u << 16);

label_7F2F84FC:
    ctx->pc = 0x7F2F84FCu;
    // 7F2F84FC: xori    r0, r0, 0x9A36
    ctx->gpr[0] = ctx->gpr[0] ^ 0x9A36u;

label_7F2F8500:
    ctx->pc = 0x7F2F8500u;
    // 7F2F8500: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8504:
    ctx->pc = 0x7F2F8504u;
    // 7F2F8504: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8508:
    ctx->pc = 0x7F2F8508u;
    // 7F2F8508: xoris   r0, r0, 0x0F24
    ctx->gpr[0] = ctx->gpr[0] ^ (0x0F24u << 16);

label_7F2F850C:
    ctx->pc = 0x7F2F850Cu;
    // 7F2F850C: xori    r0, r0, 0x7ED1
    ctx->gpr[0] = ctx->gpr[0] ^ 0x7ED1u;

label_7F2F8510:
    ctx->pc = 0x7F2F8510u;
    // 7F2F8510: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8514:
    ctx->pc = 0x7F2F8514u;
    // 7F2F8514: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8518:
    ctx->pc = 0x7F2F8518u;
    // 7F2F8518: xoris   r0, r0, 0xCB02
    ctx->gpr[0] = ctx->gpr[0] ^ (0xCB02u << 16);

label_7F2F851C:
    ctx->pc = 0x7F2F851Cu;
    // 7F2F851C: xori    r0, r0, 0x19E5
    ctx->gpr[0] = ctx->gpr[0] ^ 0x19E5u;

label_7F2F8520:
    ctx->pc = 0x7F2F8520u;
    // 7F2F8520: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8524:
    ctx->pc = 0x7F2F8524u;
    // 7F2F8524: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8528:
    ctx->pc = 0x7F2F8528u;
    // 7F2F8528: xoris   r0, r0, 0xF7AD
    ctx->gpr[0] = ctx->gpr[0] ^ (0xF7ADu << 16);

label_7F2F852C:
    ctx->pc = 0x7F2F852Cu;
    // 7F2F852C: xori    r0, r0, 0x8634
    ctx->gpr[0] = ctx->gpr[0] ^ 0x8634u;

label_7F2F8530:
    ctx->pc = 0x7F2F8530u;
    // 7F2F8530: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8534:
    ctx->pc = 0x7F2F8534u;
    // 7F2F8534: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8538:
    ctx->pc = 0x7F2F8538u;
    // 7F2F8538: xoris   r0, r0, 0x2A2E
    ctx->gpr[0] = ctx->gpr[0] ^ (0x2A2Eu << 16);

label_7F2F853C:
    ctx->pc = 0x7F2F853Cu;
    // 7F2F853C: xori    r0, r0, 0x7693
    ctx->gpr[0] = ctx->gpr[0] ^ 0x7693u;

label_7F2F8540:
    ctx->pc = 0x7F2F8540u;
    // 7F2F8540: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8544:
    ctx->pc = 0x7F2F8544u;
    // 7F2F8544: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8548:
    ctx->pc = 0x7F2F8548u;
    // 7F2F8548: xoris   r0, r0, 0xE13A
    ctx->gpr[0] = ctx->gpr[0] ^ (0xE13Au << 16);

label_7F2F854C:
    ctx->pc = 0x7F2F854Cu;
    // 7F2F854C: xori    r0, r0, 0x2A31
    ctx->gpr[0] = ctx->gpr[0] ^ 0x2A31u;

label_7F2F8550:
    ctx->pc = 0x7F2F8550u;
    // 7F2F8550: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8554:
    ctx->pc = 0x7F2F8554u;
    // 7F2F8554: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8558:
    ctx->pc = 0x7F2F8558u;
    // 7F2F8558: xoris   r0, r0, 0xB361
    ctx->gpr[0] = ctx->gpr[0] ^ (0xB361u << 16);

label_7F2F855C:
    ctx->pc = 0x7F2F855Cu;
    // 7F2F855C: xori    r0, r0, 0x3CB0
    ctx->gpr[0] = ctx->gpr[0] ^ 0x3CB0u;

label_7F2F8560:
    ctx->pc = 0x7F2F8560u;
    // 7F2F8560: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8564:
    ctx->pc = 0x7F2F8564u;
    // 7F2F8564: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8568:
    ctx->pc = 0x7F2F8568u;
    // 7F2F8568: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_7F2F856C:
    ctx->pc = 0x7F2F856Cu;
    // 7F2F856C: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8570:
    ctx->pc = 0x7F2F8570u;
    // 7F2F8570: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F8574:
    ctx->pc = 0x7F2F8574u;
    // 7F2F8574: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8578:
    ctx->pc = 0x7F2F8578u;
    // 7F2F8578: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F857C:
    ctx->pc = 0x7F2F857Cu;
    // 7F2F857C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F8580:
    ctx->pc = 0x7F2F8580u;
    // 7F2F8580: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8584:
    ctx->pc = 0x7F2F8584u;
    ctx->downcount -= 8;
    // 7F2F8584: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8588:
    ctx->pc = 0x7F2F8588u;
    // 7F2F8588: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2F858C:
    ctx->pc = 0x7F2F858Cu;
    // 7F2F858C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2F8590:
    ctx->pc = 0x7F2F8590u;
    // 7F2F8590: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F8594:
    ctx->pc = 0x7F2F8594u;
    // 7F2F8594: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F2F8598:
    ctx->pc = 0x7F2F8598u;
    // 7F2F8598: cmpwi   r5, 0
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

label_7F2F859C:
    ctx->pc = 0x7F2F859Cu;
    // 7F2F859C: bc    4, 1, 0x7F2F85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F85D8;
        }
    }

label_7F2F85A0:
    ctx->downcount -= 3;
    // 7F2F85A0: rlwinm. r0, r9, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2F85A4:
    // 7F2F85A4: srawi r10, r9, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[9];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[10] = value;
        } else if (sh > 31) {
            ctx->gpr[10] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[10] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2F85A8:
    // 7F2F85A8: bc    12, 2, 0x7F2F85C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F85C0;
        }
    }

label_7F2F85AC:
    ctx->downcount -= 5;
    // 7F2F85AC: rlwinm r0, r10, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F2F85B0:
    ctx->pc = 0x7F2F85B0u;
    // 7F2F85B0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F85B4:
    // 7F2F85B4: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_7F2F85B8:
    ctx->pc = 0x7F2F85B8u;
    // 7F2F85B8: sthx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2F85BC:
    // 7F2F85BC: b       0x7F2F85CC
    {
            goto label_7F2F85CC;
    }

label_7F2F85C0:
    ctx->downcount -= 3;
    // 7F2F85C0: rlwinm r0, r10, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 2u) & 0xFFFFFFFCu;
    }

label_7F2F85C4:
    ctx->pc = 0x7F2F85C4u;
    // 7F2F85C4: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F85C8:
    ctx->pc = 0x7F2F85C8u;
    // 7F2F85C8: sthx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2F85CC:
    ctx->downcount -= 3;
    // 7F2F85CC: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F2F85D0:
    // 7F2F85D0: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_7F2F85D4:
    // 7F2F85D4: bc    16, 0, 0x7F2F85A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F85A0u;
                return;
            }
            goto label_7F2F85A0;
        }
    }

label_7F2F85D8:
    ctx->pc = 0x7F2F85D8u;
    ctx->downcount -= 4;
    // 7F2F85D8: addi    r9, r1, 8
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F85DC:
    ctx->pc = 0x7F2F85DCu;
    // 7F2F85DC: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F2F85E0:
    ctx->pc = 0x7F2F85E0u;
    // 7F2F85E0: li      r8, 26
    ctx->gpr[8] = (u32)(s32)(26);

label_7F2F85E4:
    ctx->pc = 0x7F2F85E4u;
    // 7F2F85E4: b       0x7F2F8638
    {
            goto label_7F2F8638;
    }

label_7F2F85E8:
    ctx->downcount -= 7;
    // 7F2F85E8: addic.  r10, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[10] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2F85EC:
    // 7F2F85EC: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F2F85F0:
    // 7F2F85F0: addi    r0, r10, 1
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(1);

label_7F2F85F4:
    // 7F2F85F4: rlwinm r3, r10, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[10], 1u) & 0xFFFFFFFEu;
    }

label_7F2F85F8:
    ctx->pc = 0x7F2F85F8u;
    // 7F2F85F8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F85FC:
    // 7F2F85FC: bc    12, 0, 0x7F2F8628
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8628;
        }
    }

label_7F2F8600:
    loop_7F2F8600(ctx);
    if (ctx->pc == 0x7F2F8628u) goto label_7F2F8628;
    return;
label_7F2F8604:
    // 7F2F8604: rlwinm r7, r12, 16, 0, 15
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[12], 16u) & 0xFFFF0000u;
    }

label_7F2F8608:
    // 7F2F8608: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

label_7F2F860C:
    // 7F2F860C: or   r12, r7, r0
    {
        ctx->gpr[12] = ctx->gpr[7] | ctx->gpr[0];
    }

label_7F2F8610:
    // 7F2F8610: divwu   r7, r12, r8
    {
        u32 divisor = ctx->gpr[8];
        ctx->gpr[7] = divisor == 0 ? 0u : ctx->gpr[12] / divisor;
    }

label_7F2F8614:
    // 7F2F8614: mullw   r0, r7, r8
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8618:
    ctx->pc = 0x7F2F8618u;
    // 7F2F8618: sthx    r7, r9, r3
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[3];
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2F861C:
    // 7F2F861C: addi    r3, r3, -2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F2F8620:
    // 7F2F8620: subf   r12, r0, r12
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[12];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_7F2F8624:
    // 7F2F8624: bc    16, 0, 0x7F2F8600
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8600u;
                return;
            }
            goto label_7F2F8600;
        }
    }

label_7F2F8628:
    ctx->downcount -= 4;
    // 7F2F8628: addi    r0, r12, 65
    ctx->gpr[0] = ctx->gpr[12] + (u32)(s32)(65);

label_7F2F862C:
    // 7F2F862C: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_7F2F8630:
    ctx->pc = 0x7F2F8630u;
    // 7F2F8630: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F8634:
    // 7F2F8634: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2F8638:
    ctx->downcount -= 2;
    // 7F2F8638: cmpw    r11, r6
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F863C:
    // 7F2F863C: bc    12, 0, 0x7F2F85E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F85E8u;
                return;
            }
            goto label_7F2F85E8;
        }
    }

label_7F2F8640:
    ctx->pc = 0x7F2F8640u;
    ctx->downcount -= 2;
    // 7F2F8640: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2F8644:
    ctx->pc = 0x7F2F8644u;
    // 7F2F8644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8648:
    ctx->pc = 0x7F2F8648u;
    ctx->downcount -= 2;
    // 7F2F8648: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F864C:
    ctx->pc = 0x7F2F864Cu;
    // 7F2F864C: b       0x7F2F86C0
    {
            goto label_7F2F86C0;
    }

label_7F2F8650:
    ctx->pc = 0x7F2F8650u;
    ctx->downcount -= 4;
    // 7F2F8650: lbzx    r5, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2F8654:
    // 7F2F8654: addi    r0, r5, -65
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-65);

label_7F2F8658:
    // 7F2F8658: cmplwi  r0, 0x0018
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0018u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F865C:
    // 7F2F865C: bc    12, 1, 0x7F2F86BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F86BC;
        }
    }

label_7F2F8660:
    ctx->downcount -= 7;
    // 7F2F8660: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2F8664:
    // 7F2F8664: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2F8668:
    // 7F2F8668: addi    r5, r5, 31944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31944);

label_7F2F866C:
    ctx->pc = 0x7F2F866Cu;
    // 7F2F866C: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8670:
    ctx->pc = 0x7F2F8670u;
    // 7F2F8670: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F8674:
    ctx->pc = 0x7F2F8674u;
    // 7F2F8674: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F2F8678:
    ctx->downcount -= 3;
    // 7F2F8678: li      r0, 56
    ctx->gpr[0] = (u32)(s32)(56);

label_7F2F867C:
    ctx->pc = 0x7F2F867Cu;
    // 7F2F867C: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F8680:
    // 7F2F8680: b       0x7F2F86BC
    {
            goto label_7F2F86BC;
    }

label_7F2F8684:
    ctx->downcount -= 3;
    // 7F2F8684: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_7F2F8688:
    ctx->pc = 0x7F2F8688u;
    // 7F2F8688: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F868C:
    // 7F2F868C: b       0x7F2F86BC
    {
            goto label_7F2F86BC;
    }

label_7F2F8690:
    ctx->downcount -= 3;
    // 7F2F8690: li      r0, 53
    ctx->gpr[0] = (u32)(s32)(53);

label_7F2F8694:
    ctx->pc = 0x7F2F8694u;
    // 7F2F8694: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F8698:
    // 7F2F8698: b       0x7F2F86BC
    {
            goto label_7F2F86BC;
    }

label_7F2F869C:
    ctx->downcount -= 3;
    // 7F2F869C: li      r0, 51
    ctx->gpr[0] = (u32)(s32)(51);

label_7F2F86A0:
    ctx->pc = 0x7F2F86A0u;
    // 7F2F86A0: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F86A4:
    // 7F2F86A4: b       0x7F2F86BC
    {
            goto label_7F2F86BC;
    }

label_7F2F86A8:
    ctx->downcount -= 3;
    // 7F2F86A8: li      r0, 50
    ctx->gpr[0] = (u32)(s32)(50);

label_7F2F86AC:
    ctx->pc = 0x7F2F86ACu;
    // 7F2F86AC: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F86B0:
    // 7F2F86B0: b       0x7F2F86BC
    {
            goto label_7F2F86BC;
    }

label_7F2F86B4:
    ctx->downcount -= 2;
    // 7F2F86B4: li      r0, 57
    ctx->gpr[0] = (u32)(s32)(57);

label_7F2F86B8:
    ctx->pc = 0x7F2F86B8u;
    // 7F2F86B8: stbx    r0, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F86BC:
    ctx->downcount -= 1;
    // 7F2F86BC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F2F86C0:
    ctx->downcount -= 2;
    // 7F2F86C0: cmpw    r6, r4
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F86C4:
    // 7F2F86C4: bc    12, 0, 0x7F2F8650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8650u;
                return;
            }
            goto label_7F2F8650;
        }
    }

label_7F2F86C8:
    ctx->pc = 0x7F2F86C8u;
    ctx->downcount -= 1;
    // 7F2F86C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F86CC:
    ctx->pc = 0x7F2F86CCu;
    ctx->downcount -= 4;
    // 7F2F86CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F86D0:
    ctx->pc = 0x7F2F86D0u;
    // 7F2F86D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F86D4:
    ctx->pc = 0x7F2F86D4u;
    // 7F2F86D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F86D8:
    ctx->pc = 0x7F2F86D8u;
    // 7F2F86D8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2F86DCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2F86DC:
    ctx->pc = 0x7F2F86DCu;
    ctx->downcount -= 46;
    // 7F2F86DC: li      r0, 900
    ctx->gpr[0] = (u32)(s32)(900);

label_7F2F86E0:
    ctx->pc = 0x7F2F86E0u;
    // 7F2F86E0: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F86E4:
    ctx->pc = 0x7F2F86E4u;
    // 7F2F86E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F86E8:
    ctx->pc = 0x7F2F86E8u;
    // 7F2F86E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F86EC:
    ctx->pc = 0x7F2F86ECu;
    // 7F2F86EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F86F0:
    ctx->pc = 0x7F2F86F0u;
    // 7F2F86F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F86F4:
    ctx->pc = 0x7F2F86F4u;
    ctx->downcount -= 3;
    // 7F2F86F4: lwz     r5, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F86F8:
    ctx->pc = 0x7F2F86F8u;
    // 7F2F86F8: cmpwi   r5, 2
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

label_7F2F86FC:
    ctx->pc = 0x7F2F86FCu;
    // 7F2F86FC: bc    12, 1, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F8700:
    ctx->pc = 0x7F2F8700u;
    ctx->downcount -= 3;
    // 7F2F8700: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8704:
    ctx->pc = 0x7F2F8704u;
    // 7F2F8704: cmpwi   r0, 0
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

label_7F2F8708:
    ctx->pc = 0x7F2F8708u;
    // 7F2F8708: bc    4, 2, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F870C:
    ctx->pc = 0x7F2F870Cu;
    ctx->downcount -= 6;
    // 7F2F870C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2F8710:
    ctx->pc = 0x7F2F8710u;
    // 7F2F8710: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F2F8714:
    ctx->pc = 0x7F2F8714u;
    // 7F2F8714: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8718:
    ctx->pc = 0x7F2F8718u;
    // 7F2F8718: lha     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F871C:
    ctx->pc = 0x7F2F871Cu;
    // 7F2F871C: rlwinm. r0, r0, 0, 20, 20
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

label_7F2F8720:
    ctx->pc = 0x7F2F8720u;
    // 7F2F8720: bc    12, 2, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F8724:
    ctx->pc = 0x7F2F8724u;
    ctx->downcount -= 3;
    // 7F2F8724: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8728:
    ctx->pc = 0x7F2F8728u;
    // 7F2F8728: cmpwi   r0, 0
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

label_7F2F872C:
    ctx->pc = 0x7F2F872Cu;
    // 7F2F872C: bc    12, 1, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F8730:
    ctx->pc = 0x7F2F8730u;
    ctx->downcount -= 3;
    // 7F2F8730: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8734:
    ctx->pc = 0x7F2F8734u;
    // 7F2F8734: cmpwi   r0, 1
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

label_7F2F8738:
    ctx->pc = 0x7F2F8738u;
    // 7F2F8738: bc    12, 1, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F873C:
    ctx->pc = 0x7F2F873Cu;
    ctx->downcount -= 3;
    // 7F2F873C: lha     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F8740:
    ctx->pc = 0x7F2F8740u;
    // 7F2F8740: cmpwi   r0, 50
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8744:
    ctx->pc = 0x7F2F8744u;
    // 7F2F8744: bc    4, 2, 0x7F2F8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8750;
        }
    }

label_7F2F8748:
    ctx->pc = 0x7F2F8748u;
    ctx->downcount -= 2;
    // 7F2F8748: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2F874C:
    ctx->pc = 0x7F2F874Cu;
    // 7F2F874C: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8750:
    ctx->pc = 0x7F2F8750u;
    ctx->downcount -= 2;
    // 7F2F8750: cmpwi   r5, 2
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

label_7F2F8754:
    ctx->pc = 0x7F2F8754u;
    // 7F2F8754: bc    12, 1, 0x7F2F8790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8790;
        }
    }

label_7F2F8758:
    ctx->pc = 0x7F2F8758u;
    ctx->downcount -= 3;
    // 7F2F8758: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F875C:
    ctx->pc = 0x7F2F875Cu;
    // 7F2F875C: cmpwi   r0, 0
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

label_7F2F8760:
    ctx->pc = 0x7F2F8760u;
    // 7F2F8760: bc    4, 2, 0x7F2F8790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8790;
        }
    }

label_7F2F8764:
    ctx->pc = 0x7F2F8764u;
    ctx->downcount -= 3;
    // 7F2F8764: lwz     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8768:
    ctx->pc = 0x7F2F8768u;
    // 7F2F8768: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F876C:
    ctx->pc = 0x7F2F876Cu;
    // 7F2F876C: bc    12, 1, 0x7F2F8790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8790;
        }
    }

label_7F2F8770:
    ctx->pc = 0x7F2F8770u;
    ctx->downcount -= 3;
    // 7F2F8770: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8774:
    ctx->pc = 0x7F2F8774u;
    // 7F2F8774: cmpwi   r0, 0
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

label_7F2F8778:
    ctx->pc = 0x7F2F8778u;
    // 7F2F8778: bc    12, 1, 0x7F2F8790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8790;
        }
    }

label_7F2F877C:
    ctx->pc = 0x7F2F877Cu;
    ctx->downcount -= 3;
    // 7F2F877C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8780:
    ctx->pc = 0x7F2F8780u;
    // 7F2F8780: cmpwi   r0, 1
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

label_7F2F8784:
    ctx->pc = 0x7F2F8784u;
    // 7F2F8784: bc    12, 1, 0x7F2F8790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8790;
        }
    }

label_7F2F8788:
    ctx->pc = 0x7F2F8788u;
    ctx->downcount -= 2;
    // 7F2F8788: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2F878C:
    ctx->pc = 0x7F2F878Cu;
    // 7F2F878C: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8790:
    ctx->pc = 0x7F2F8790u;
    ctx->downcount -= 2;
    // 7F2F8790: cmpwi   r5, 2
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

label_7F2F8794:
    ctx->pc = 0x7F2F8794u;
    // 7F2F8794: bc    4, 2, 0x7F2F87A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87A4;
        }
    }

label_7F2F8798:
    ctx->pc = 0x7F2F8798u;
    ctx->downcount -= 3;
    // 7F2F8798: lwz     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F879C:
    ctx->pc = 0x7F2F879Cu;
    // 7F2F879C: cmpwi   r0, 29
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(29);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87A0:
    ctx->pc = 0x7F2F87A0u;
    // 7F2F87A0: bc    4, 1, 0x7F2F87AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87AC;
        }
    }

label_7F2F87A4:
    ctx->pc = 0x7F2F87A4u;
    ctx->downcount -= 2;
    // 7F2F87A4: cmpwi   r5, 1
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

label_7F2F87A8:
    ctx->pc = 0x7F2F87A8u;
    // 7F2F87A8: bc    12, 1, 0x7F2F87B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87B4;
        }
    }

label_7F2F87AC:
    ctx->pc = 0x7F2F87ACu;
    ctx->downcount -= 2;
    // 7F2F87AC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F2F87B0:
    ctx->pc = 0x7F2F87B0u;
    // 7F2F87B0: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F87B4:
    ctx->pc = 0x7F2F87B4u;
    ctx->downcount -= 3;
    // 7F2F87B4: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F87B8:
    ctx->pc = 0x7F2F87B8u;
    // 7F2F87B8: cmpwi   r4, 250
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(250);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87BC:
    ctx->pc = 0x7F2F87BCu;
    // 7F2F87BC: bc    12, 0, 0x7F2F87F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87F0;
        }
    }

label_7F2F87C0:
    ctx->pc = 0x7F2F87C0u;
    ctx->downcount -= 2;
    // 7F2F87C0: cmpwi   r5, 18
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87C4:
    ctx->pc = 0x7F2F87C4u;
    // 7F2F87C4: bc    12, 0, 0x7F2F87E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87E8;
        }
    }

label_7F2F87C8:
    ctx->pc = 0x7F2F87C8u;
    ctx->downcount -= 3;
    // 7F2F87C8: lwz     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F87CC:
    ctx->pc = 0x7F2F87CCu;
    // 7F2F87CC: cmpwi   r0, 80
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87D0:
    ctx->pc = 0x7F2F87D0u;
    // 7F2F87D0: bc    12, 0, 0x7F2F87E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87E8;
        }
    }

label_7F2F87D4:
    ctx->pc = 0x7F2F87D4u;
    ctx->downcount -= 3;
    // 7F2F87D4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F87D8:
    ctx->pc = 0x7F2F87D8u;
    // 7F2F87D8: cmpwi   r0, 130
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(130);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87DC:
    ctx->pc = 0x7F2F87DCu;
    // 7F2F87DC: bc    12, 0, 0x7F2F87E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F87E8;
        }
    }

label_7F2F87E0:
    ctx->pc = 0x7F2F87E0u;
    ctx->downcount -= 2;
    // 7F2F87E0: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F2F87E4:
    ctx->pc = 0x7F2F87E4u;
    // 7F2F87E4: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F87E8:
    ctx->pc = 0x7F2F87E8u;
    ctx->downcount -= 2;
    // 7F2F87E8: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F2F87EC:
    ctx->pc = 0x7F2F87ECu;
    // 7F2F87EC: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F87F0:
    ctx->pc = 0x7F2F87F0u;
    ctx->downcount -= 3;
    // 7F2F87F0: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F87F4:
    ctx->pc = 0x7F2F87F4u;
    // 7F2F87F4: cmpwi   r0, 130
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(130);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F87F8:
    ctx->pc = 0x7F2F87F8u;
    // 7F2F87F8: bc    12, 0, 0x7F2F8804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8804;
        }
    }

label_7F2F87FC:
    ctx->pc = 0x7F2F87FCu;
    ctx->downcount -= 2;
    // 7F2F87FC: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F2F8800:
    ctx->pc = 0x7F2F8800u;
    // 7F2F8800: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8804:
    ctx->pc = 0x7F2F8804u;
    ctx->downcount -= 3;
    // 7F2F8804: lwz     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8808:
    ctx->pc = 0x7F2F8808u;
    // 7F2F8808: cmpwi   r0, 80
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F880C:
    ctx->pc = 0x7F2F880Cu;
    // 7F2F880C: bc    12, 0, 0x7F2F8818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8818;
        }
    }

label_7F2F8810:
    ctx->pc = 0x7F2F8810u;
    ctx->downcount -= 2;
    // 7F2F8810: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F2F8814:
    ctx->pc = 0x7F2F8814u;
    // 7F2F8814: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8818:
    ctx->pc = 0x7F2F8818u;
    ctx->downcount -= 2;
    // 7F2F8818: cmpwi   r5, 18
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F881C:
    ctx->pc = 0x7F2F881Cu;
    // 7F2F881C: bc    12, 0, 0x7F2F8828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8828;
        }
    }

label_7F2F8820:
    ctx->pc = 0x7F2F8820u;
    ctx->downcount -= 2;
    // 7F2F8820: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F2F8824:
    ctx->pc = 0x7F2F8824u;
    // 7F2F8824: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8828:
    ctx->pc = 0x7F2F8828u;
    ctx->downcount -= 3;
    // 7F2F8828: lwz     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F882C:
    ctx->pc = 0x7F2F882Cu;
    // 7F2F882C: cmpwi   r0, 30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8830:
    ctx->pc = 0x7F2F8830u;
    // 7F2F8830: bc    12, 1, 0x7F2F885C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F885C;
        }
    }

label_7F2F8834:
    ctx->pc = 0x7F2F8834u;
    ctx->downcount -= 2;
    // 7F2F8834: cmpwi   r4, 62
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(62);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8838:
    ctx->pc = 0x7F2F8838u;
    // 7F2F8838: bc    12, 0, 0x7F2F8844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8844;
        }
    }

label_7F2F883C:
    ctx->pc = 0x7F2F883Cu;
    ctx->downcount -= 2;
    // 7F2F883C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F2F8840:
    ctx->pc = 0x7F2F8840u;
    // 7F2F8840: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8844:
    ctx->pc = 0x7F2F8844u;
    ctx->downcount -= 2;
    // 7F2F8844: cmpwi   r4, 18
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8848:
    ctx->pc = 0x7F2F8848u;
    // 7F2F8848: bc    12, 0, 0x7F2F8854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8854;
        }
    }

label_7F2F884C:
    ctx->pc = 0x7F2F884Cu;
    ctx->downcount -= 2;
    // 7F2F884C: li      r7, 9
    ctx->gpr[7] = (u32)(s32)(9);

label_7F2F8850:
    ctx->pc = 0x7F2F8850u;
    // 7F2F8850: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8854:
    ctx->pc = 0x7F2F8854u;
    ctx->downcount -= 2;
    // 7F2F8854: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_7F2F8858:
    ctx->pc = 0x7F2F8858u;
    // 7F2F8858: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F885C:
    ctx->pc = 0x7F2F885Cu;
    ctx->downcount -= 2;
    // 7F2F885C: cmpwi   r0, 55
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(55);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8860:
    ctx->pc = 0x7F2F8860u;
    // 7F2F8860: bc    12, 1, 0x7F2F888C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F888C;
        }
    }

label_7F2F8864:
    ctx->pc = 0x7F2F8864u;
    ctx->downcount -= 2;
    // 7F2F8864: cmpwi   r4, 162
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(162);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8868:
    ctx->pc = 0x7F2F8868u;
    // 7F2F8868: bc    12, 0, 0x7F2F8874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8874;
        }
    }

label_7F2F886C:
    ctx->pc = 0x7F2F886Cu;
    ctx->downcount -= 2;
    // 7F2F886C: li      r7, 11
    ctx->gpr[7] = (u32)(s32)(11);

label_7F2F8870:
    ctx->pc = 0x7F2F8870u;
    // 7F2F8870: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8874:
    ctx->pc = 0x7F2F8874u;
    ctx->downcount -= 2;
    // 7F2F8874: cmpwi   r4, 52
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(52);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8878:
    ctx->pc = 0x7F2F8878u;
    // 7F2F8878: bc    12, 0, 0x7F2F8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8884;
        }
    }

label_7F2F887C:
    ctx->pc = 0x7F2F887Cu;
    ctx->downcount -= 2;
    // 7F2F887C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F2F8880:
    ctx->pc = 0x7F2F8880u;
    // 7F2F8880: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F8884:
    ctx->pc = 0x7F2F8884u;
    ctx->downcount -= 2;
    // 7F2F8884: li      r7, 13
    ctx->gpr[7] = (u32)(s32)(13);

label_7F2F8888:
    ctx->pc = 0x7F2F8888u;
    // 7F2F8888: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F888C:
    ctx->pc = 0x7F2F888Cu;
    ctx->downcount -= 2;
    // 7F2F888C: cmpwi   r4, 93
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(93);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8890:
    ctx->pc = 0x7F2F8890u;
    // 7F2F8890: bc    12, 0, 0x7F2F889C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F889C;
        }
    }

label_7F2F8894:
    ctx->pc = 0x7F2F8894u;
    ctx->downcount -= 2;
    // 7F2F8894: li      r7, 14
    ctx->gpr[7] = (u32)(s32)(14);

label_7F2F8898:
    ctx->pc = 0x7F2F8898u;
    // 7F2F8898: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F889C:
    ctx->pc = 0x7F2F889Cu;
    ctx->downcount -= 2;
    // 7F2F889C: cmpwi   r4, 59
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(59);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F88A0:
    ctx->pc = 0x7F2F88A0u;
    // 7F2F88A0: bc    12, 0, 0x7F2F88AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F88AC;
        }
    }

label_7F2F88A4:
    ctx->pc = 0x7F2F88A4u;
    ctx->downcount -= 2;
    // 7F2F88A4: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F2F88A8:
    ctx->pc = 0x7F2F88A8u;
    // 7F2F88A8: b       0x7F2F88B0
    {
            goto label_7F2F88B0;
    }

label_7F2F88AC:
    ctx->pc = 0x7F2F88ACu;
    ctx->downcount -= 1;
    // 7F2F88AC: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F2F88B0:
    ctx->pc = 0x7F2F88B0u;
    ctx->downcount -= 16;
    // 7F2F88B0: lwz     r6, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F88B4:
    ctx->pc = 0x7F2F88B4u;
    // 7F2F88B4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2F88B8:
    ctx->pc = 0x7F2F88B8u;
    // 7F2F88B8: addi    r0, r4, 32048
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32048);

label_7F2F88BC:
    ctx->pc = 0x7F2F88BCu;
    // 7F2F88BC: neg  r5, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[5] = (~a) + 1u;
    }

label_7F2F88C0:
    ctx->pc = 0x7F2F88C0u;
    // 7F2F88C0: addi    r4, r6, -1
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F2F88C4:
    ctx->pc = 0x7F2F88C4u;
    // 7F2F88C4: andc   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] & ~ctx->gpr[6];
    }

label_7F2F88C8:
    ctx->pc = 0x7F2F88C8u;
    // 7F2F88C8: srawi r5, r5, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2F88CC:
    ctx->pc = 0x7F2F88CCu;
    // 7F2F88CC: and   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F2F88D0:
    ctx->pc = 0x7F2F88D0u;
    // 7F2F88D0: mulli   r4, r4, 17
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)17);

label_7F2F88D4:
    ctx->pc = 0x7F2F88D4u;
    // 7F2F88D4: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F88D8:
    ctx->pc = 0x7F2F88D8u;
    // 7F2F88D8: lbzx    r0, r4, r7
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[7];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2F88DC:
    ctx->pc = 0x7F2F88DCu;
    // 7F2F88DC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F2F88E0:
    ctx->pc = 0x7F2F88E0u;
    // 7F2F88E0: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F88E4:
    ctx->pc = 0x7F2F88E4u;
    // 7F2F88E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F88E8:
    ctx->pc = 0x7F2F88E8u;
    ctx->downcount -= 5;
    // 7F2F88E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F88EC:
    ctx->pc = 0x7F2F88ECu;
    // 7F2F88EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F88F0:
    ctx->pc = 0x7F2F88F0u;
    // 7F2F88F0: cmpwi   r3, 0
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

label_7F2F88F4:
    ctx->pc = 0x7F2F88F4u;
    // 7F2F88F4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F88F8:
    ctx->pc = 0x7F2F88F8u;
    // 7F2F88F8: bc    12, 2, 0x7F2F8920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8920;
        }
    }

label_7F2F88FC:
    ctx->pc = 0x7F2F88FCu;
    ctx->downcount -= 2;
    // 7F2F88FC: cmpwi   r3, 1
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

label_7F2F8900:
    ctx->pc = 0x7F2F8900u;
    // 7F2F8900: bc    12, 2, 0x7F2F8920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8920;
        }
    }

label_7F2F8904:
    ctx->pc = 0x7F2F8904u;
    ctx->downcount -= 7;
    // 7F2F8904: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F8908:
    ctx->pc = 0x7F2F8908u;
    // 7F2F8908: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2F890C:
    ctx->pc = 0x7F2F890Cu;
    // 7F2F890C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F8910:
    ctx->pc = 0x7F2F8910u;
    // 7F2F8910: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2F8914:
    ctx->pc = 0x7F2F8914u;
    // 7F2F8914: sth     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2F8918:
    ctx->pc = 0x7F2F8918u;
    // 7F2F8918: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F891C:
    ctx->pc = 0x7F2F891Cu;
    // 7F2F891C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2F8920u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2F8920:
    ctx->pc = 0x7F2F8920u;
    ctx->downcount -= 5;
    // 7F2F8920: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8924:
    ctx->pc = 0x7F2F8924u;
    // 7F2F8924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8928:
    ctx->pc = 0x7F2F8928u;
    // 7F2F8928: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F892C:
    ctx->pc = 0x7F2F892Cu;
    // 7F2F892C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8930:
    ctx->pc = 0x7F2F8930u;
    ctx->downcount -= 8;
    // 7F2F8930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8934:
    ctx->pc = 0x7F2F8934u;
    // 7F2F8934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8938:
    ctx->pc = 0x7F2F8938u;
    // 7F2F8938: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F893C:
    ctx->pc = 0x7F2F893Cu;
    // 7F2F893C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F8940:
    ctx->pc = 0x7F2F8940u;
    // 7F2F8940: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8944:
    ctx->pc = 0x7F2F8944u;
    // 7F2F8944: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8948:
    ctx->pc = 0x7F2F8948u;
    // 7F2F8948: cmpwi   r0, 3
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

label_7F2F894C:
    ctx->pc = 0x7F2F894Cu;
    // 7F2F894C: bc    12, 2, 0x7F2F8A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8A14;
        }
    }

label_7F2F8950:
    ctx->pc = 0x7F2F8950u;
    ctx->downcount -= 1;
    // 7F2F8950: bc    4, 0, 0x7F2F896C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F896C;
        }
    }

label_7F2F8954:
    ctx->pc = 0x7F2F8954u;
    ctx->downcount -= 2;
    // 7F2F8954: cmpwi   r0, 1
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

label_7F2F8958:
    ctx->pc = 0x7F2F8958u;
    // 7F2F8958: bc    12, 2, 0x7F2F89C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F89C8;
        }
    }

label_7F2F895C:
    ctx->pc = 0x7F2F895Cu;
    ctx->downcount -= 1;
    // 7F2F895C: bc    4, 0, 0x7F2F89E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F89E0;
        }
    }

label_7F2F8960:
    ctx->pc = 0x7F2F8960u;
    ctx->downcount -= 2;
    // 7F2F8960: cmpwi   r0, 0
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

label_7F2F8964:
    ctx->pc = 0x7F2F8964u;
    // 7F2F8964: bc    4, 0, 0x7F2F897C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F897C;
        }
    }

label_7F2F8968:
    ctx->pc = 0x7F2F8968u;
    ctx->downcount -= 1;
    // 7F2F8968: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F896C:
    ctx->pc = 0x7F2F896Cu;
    ctx->downcount -= 2;
    // 7F2F896C: cmpwi   r0, 5
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

label_7F2F8970:
    ctx->pc = 0x7F2F8970u;
    // 7F2F8970: bc    12, 2, 0x7F2F8B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B10;
        }
    }

label_7F2F8974:
    ctx->pc = 0x7F2F8974u;
    ctx->downcount -= 1;
    // 7F2F8974: bc    4, 0, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F8978:
    ctx->pc = 0x7F2F8978u;
    ctx->downcount -= 1;
    // 7F2F8978: b       0x7F2F8A2C
    {
            goto label_7F2F8A2C;
    }

label_7F2F897C:
    ctx->pc = 0x7F2F897Cu;
    ctx->downcount -= 7;
    // 7F2F897C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2F8980:
    ctx->pc = 0x7F2F8980u;
    // 7F2F8980: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F2F8984:
    ctx->pc = 0x7F2F8984u;
    // 7F2F8984: addi    r4, r4, 14256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F2F8988:
    ctx->pc = 0x7F2F8988u;
    // 7F2F8988: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F898C:
    ctx->pc = 0x7F2F898Cu;
    // 7F2F898C: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_7F2F8990:
    ctx->pc = 0x7F2F8990u;
    // 7F2F8990: and.   r0, r4, r0
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

label_7F2F8994:
    ctx->pc = 0x7F2F8994u;
    // 7F2F8994: bc    12, 2, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F8998:
    ctx->pc = 0x7F2F8998u;
    ctx->downcount -= 6;
    // 7F2F8998: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F2F899C:
    ctx->pc = 0x7F2F899Cu;
    // 7F2F899C: addi    r0, r3, -444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-444);

label_7F2F89A0:
    ctx->pc = 0x7F2F89A0u;
    // 7F2F89A0: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F89A4:
    ctx->pc = 0x7F2F89A4u;
    // 7F2F89A4: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F89A8:
    ctx->pc = 0x7F2F89A8u;
    // 7F2F89A8: cmpwi   r0, 0
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

label_7F2F89AC:
    ctx->pc = 0x7F2F89ACu;
    // 7F2F89AC: bc    12, 2, 0x7F2F89BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F89BC;
        }
    }

label_7F2F89B0:
    ctx->pc = 0x7F2F89B0u;
    ctx->downcount -= 3;
    // 7F2F89B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2F89B4:
    ctx->pc = 0x7F2F89B4u;
    // 7F2F89B4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F89B8:
    ctx->pc = 0x7F2F89B8u;
    // 7F2F89B8: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F89BC:
    ctx->pc = 0x7F2F89BCu;
    ctx->downcount -= 3;
    // 7F2F89BC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F2F89C0:
    ctx->pc = 0x7F2F89C0u;
    // 7F2F89C0: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F89C4:
    ctx->pc = 0x7F2F89C4u;
    // 7F2F89C4: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F89C8:
    ctx->pc = 0x7F2F89C8u;
    ctx->downcount -= 6;
    // 7F2F89C8: lis     r3, 98
    ctx->gpr[3] = ((u32)(s32)(98) << 16);

label_7F2F89CC:
    ctx->pc = 0x7F2F89CCu;
    // 7F2F89CC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2F89D0:
    ctx->pc = 0x7F2F89D0u;
    // 7F2F89D0: addi    r3, r3, 11102
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11102);

label_7F2F89D4:
    ctx->pc = 0x7F2F89D4u;
    // 7F2F89D4: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F89D8:
    ctx->pc = 0x7F2F89D8u;
    // 7F2F89D8: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F89DC:
    ctx->pc = 0x7F2F89DCu;
    // 7F2F89DC: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F89E0:
    ctx->pc = 0x7F2F89E0u;
    ctx->downcount -= 7;
    // 7F2F89E0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2F89E4:
    ctx->pc = 0x7F2F89E4u;
    // 7F2F89E4: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F2F89E8:
    ctx->pc = 0x7F2F89E8u;
    // 7F2F89E8: addi    r4, r4, 14256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F2F89EC:
    ctx->pc = 0x7F2F89ECu;
    // 7F2F89EC: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F89F0:
    ctx->pc = 0x7F2F89F0u;
    // 7F2F89F0: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_7F2F89F4:
    ctx->pc = 0x7F2F89F4u;
    // 7F2F89F4: and.   r0, r4, r0
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

label_7F2F89F8:
    ctx->pc = 0x7F2F89F8u;
    // 7F2F89F8: bc    12, 2, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F89FC:
    ctx->pc = 0x7F2F89FCu;
    ctx->downcount -= 6;
    // 7F2F89FC: lis     r3, 28
    ctx->gpr[3] = ((u32)(s32)(28) << 16);

label_7F2F8A00:
    ctx->pc = 0x7F2F8A00u;
    // 7F2F8A00: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2F8A04:
    ctx->pc = 0x7F2F8A04u;
    // 7F2F8A04: addi    r3, r3, 8787
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8787);

label_7F2F8A08:
    ctx->pc = 0x7F2F8A08u;
    // 7F2F8A08: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8A0C:
    ctx->pc = 0x7F2F8A0Cu;
    // 7F2F8A0C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8A10:
    ctx->pc = 0x7F2F8A10u;
    // 7F2F8A10: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8A14:
    ctx->pc = 0x7F2F8A14u;
    ctx->downcount -= 6;
    // 7F2F8A14: lis     r3, 158
    ctx->gpr[3] = ((u32)(s32)(158) << 16);

label_7F2F8A18:
    ctx->pc = 0x7F2F8A18u;
    // 7F2F8A18: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F2F8A1C:
    ctx->pc = 0x7F2F8A1Cu;
    // 7F2F8A1C: addi    r3, r3, -21177
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21177);

label_7F2F8A20:
    ctx->pc = 0x7F2F8A20u;
    // 7F2F8A20: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8A24:
    ctx->pc = 0x7F2F8A24u;
    // 7F2F8A24: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8A28:
    ctx->pc = 0x7F2F8A28u;
    // 7F2F8A28: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8A2C:
    ctx->pc = 0x7F2F8A2Cu;
    ctx->downcount -= 10;
    // 7F2F8A2C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F8A30:
    ctx->pc = 0x7F2F8A30u;
    // 7F2F8A30: lis     r4, 17
    ctx->gpr[4] = ((u32)(s32)(17) << 16);

label_7F2F8A34:
    ctx->pc = 0x7F2F8A34u;
    // 7F2F8A34: addi    r5, r3, 14256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F2F8A38:
    ctx->pc = 0x7F2F8A38u;
    // 7F2F8A38: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2F8A3C:
    ctx->pc = 0x7F2F8A3Cu;
    // 7F2F8A3C: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F8A40:
    ctx->pc = 0x7F2F8A40u;
    // 7F2F8A40: addi    r4, r4, -24448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24448);

label_7F2F8A44:
    ctx->pc = 0x7F2F8A44u;
    // 7F2F8A44: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F2F8A48:
    ctx->pc = 0x7F2F8A48u;
    // 7F2F8A48: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F2F8A4C:
    ctx->pc = 0x7F2F8A4Cu;
    // 7F2F8A4C: cmpw    r3, r0
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

label_7F2F8A50:
    ctx->pc = 0x7F2F8A50u;
    // 7F2F8A50: bc    12, 2, 0x7F2F8AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8AA8;
        }
    }

label_7F2F8A54:
    ctx->pc = 0x7F2F8A54u;
    ctx->downcount -= 1;
    // 7F2F8A54: bc    4, 0, 0x7F2F8A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8A70;
        }
    }

label_7F2F8A58:
    ctx->pc = 0x7F2F8A58u;
    ctx->downcount -= 2;
    // 7F2F8A58: cmpwi   r3, 8192
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8A5C:
    ctx->pc = 0x7F2F8A5Cu;
    // 7F2F8A5C: bc    12, 2, 0x7F2F8ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8ADC;
        }
    }

label_7F2F8A60:
    ctx->pc = 0x7F2F8A60u;
    ctx->downcount -= 1;
    // 7F2F8A60: bc    4, 0, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F8A64:
    ctx->pc = 0x7F2F8A64u;
    ctx->downcount -= 2;
    // 7F2F8A64: cmpwi   r3, 128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8A68:
    ctx->pc = 0x7F2F8A68u;
    // 7F2F8A68: bc    12, 2, 0x7F2F8A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8A80;
        }
    }

label_7F2F8A6C:
    ctx->pc = 0x7F2F8A6Cu;
    ctx->downcount -= 1;
    // 7F2F8A6C: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8A70:
    ctx->pc = 0x7F2F8A70u;
    ctx->downcount -= 3;
    // 7F2F8A70: lis     r0, 16
    ctx->gpr[0] = ((u32)(s32)(16) << 16);

label_7F2F8A74:
    ctx->pc = 0x7F2F8A74u;
    // 7F2F8A74: cmpw    r3, r0
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

label_7F2F8A78:
    ctx->pc = 0x7F2F8A78u;
    // 7F2F8A78: bc    12, 2, 0x7F2F8A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8A80;
        }
    }

label_7F2F8A7C:
    ctx->pc = 0x7F2F8A7Cu;
    ctx->downcount -= 1;
    // 7F2F8A7C: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8A80:
    ctx->pc = 0x7F2F8A80u;
    ctx->downcount -= 4;
    // 7F2F8A80: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2F8A84:
    ctx->pc = 0x7F2F8A84u;
    // 7F2F8A84: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2F8A88:
    ctx->pc = 0x7F2F8A88u;
    // 7F2F8A88: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F2F8A8C:
    ctx->pc = 0x7F2F8A8Cu;
    // 7F2F8A8C: bl      0x7F011698
    {
            ctx->lr = 0x7F2F8A90u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2F8A90:
    ctx->pc = 0x7F2F8A90u;
    ctx->downcount -= 6;
    // 7F2F8A90: lis     r3, 251
    ctx->gpr[3] = ((u32)(s32)(251) << 16);

label_7F2F8A94:
    ctx->pc = 0x7F2F8A94u;
    // 7F2F8A94: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F2F8A98:
    ctx->pc = 0x7F2F8A98u;
    // 7F2F8A98: addi    r3, r3, -22335
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22335);

label_7F2F8A9C:
    ctx->pc = 0x7F2F8A9Cu;
    // 7F2F8A9C: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8AA0:
    ctx->pc = 0x7F2F8AA0u;
    // 7F2F8AA0: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8AA4:
    ctx->pc = 0x7F2F8AA4u;
    // 7F2F8AA4: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8AA8:
    ctx->pc = 0x7F2F8AA8u;
    ctx->downcount -= 4;
    // 7F2F8AA8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2F8AAC:
    ctx->pc = 0x7F2F8AACu;
    // 7F2F8AAC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2F8AB0:
    ctx->pc = 0x7F2F8AB0u;
    // 7F2F8AB0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F2F8AB4:
    ctx->pc = 0x7F2F8AB4u;
    // 7F2F8AB4: bl      0x7F011698
    {
            ctx->lr = 0x7F2F8AB8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2F8AB8:
    ctx->pc = 0x7F2F8AB8u;
    ctx->downcount -= 3;
    // 7F2F8AB8: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8ABC:
    ctx->pc = 0x7F2F8ABCu;
    // 7F2F8ABC: cmpwi   r0, 0
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

label_7F2F8AC0:
    ctx->pc = 0x7F2F8AC0u;
    // 7F2F8AC0: bc    12, 2, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F8AC4:
    ctx->pc = 0x7F2F8AC4u;
    ctx->downcount -= 6;
    // 7F2F8AC4: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F2F8AC8:
    ctx->pc = 0x7F2F8AC8u;
    // 7F2F8AC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F8ACC:
    ctx->pc = 0x7F2F8ACCu;
    // 7F2F8ACC: addi    r3, r3, 22149
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22149);

label_7F2F8AD0:
    ctx->pc = 0x7F2F8AD0u;
    // 7F2F8AD0: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8AD4:
    ctx->pc = 0x7F2F8AD4u;
    // 7F2F8AD4: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8AD8:
    ctx->pc = 0x7F2F8AD8u;
    // 7F2F8AD8: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8ADC:
    ctx->pc = 0x7F2F8ADCu;
    ctx->downcount -= 4;
    // 7F2F8ADC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2F8AE0:
    ctx->pc = 0x7F2F8AE0u;
    // 7F2F8AE0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2F8AE4:
    ctx->pc = 0x7F2F8AE4u;
    // 7F2F8AE4: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F2F8AE8:
    ctx->pc = 0x7F2F8AE8u;
    // 7F2F8AE8: bl      0x7F011698
    {
            ctx->lr = 0x7F2F8AECu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2F8AEC:
    ctx->pc = 0x7F2F8AECu;
    ctx->downcount -= 3;
    // 7F2F8AEC: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8AF0:
    ctx->pc = 0x7F2F8AF0u;
    // 7F2F8AF0: cmpwi   r0, 1
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

label_7F2F8AF4:
    ctx->pc = 0x7F2F8AF4u;
    // 7F2F8AF4: bc    12, 2, 0x7F2F8B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B20;
        }
    }

label_7F2F8AF8:
    ctx->pc = 0x7F2F8AF8u;
    ctx->downcount -= 6;
    // 7F2F8AF8: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F2F8AFC:
    ctx->pc = 0x7F2F8AFCu;
    // 7F2F8AFC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2F8B00:
    ctx->pc = 0x7F2F8B00u;
    // 7F2F8B00: addi    r3, r3, -1992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1992);

label_7F2F8B04:
    ctx->pc = 0x7F2F8B04u;
    // 7F2F8B04: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8B08:
    ctx->pc = 0x7F2F8B08u;
    // 7F2F8B08: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8B0C:
    ctx->pc = 0x7F2F8B0Cu;
    // 7F2F8B0C: b       0x7F2F8B20
    {
            goto label_7F2F8B20;
    }

label_7F2F8B10:
    ctx->pc = 0x7F2F8B10u;
    ctx->downcount -= 1;
    // 7F2F8B10: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2F8B14u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2F8B14:
    ctx->pc = 0x7F2F8B14u;
    ctx->downcount -= 3;
    // 7F2F8B14: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8B18:
    ctx->pc = 0x7F2F8B18u;
    // 7F2F8B18: lwz     r4, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8B1C:
    ctx->pc = 0x7F2F8B1Cu;
    // 7F2F8B1C: bl      0x7F2F88E8
    {
            ctx->lr = 0x7F2F8B20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F88E8u;
                return;
            }
            goto label_7F2F88E8;
    }

label_7F2F8B20:
    ctx->pc = 0x7F2F8B20u;
    ctx->downcount -= 6;
    // 7F2F8B20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8B24:
    ctx->pc = 0x7F2F8B24u;
    // 7F2F8B24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F8B28:
    ctx->pc = 0x7F2F8B28u;
    // 7F2F8B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8B2C:
    ctx->pc = 0x7F2F8B2Cu;
    // 7F2F8B2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F8B30:
    ctx->pc = 0x7F2F8B30u;
    // 7F2F8B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8B34:
    ctx->pc = 0x7F2F8B34u;
    ctx->downcount -= 8;
    // 7F2F8B34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8B38:
    ctx->pc = 0x7F2F8B38u;
    // 7F2F8B38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8B3C:
    ctx->pc = 0x7F2F8B3Cu;
    // 7F2F8B3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8B40:
    ctx->pc = 0x7F2F8B40u;
    // 7F2F8B40: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F8B44:
    ctx->pc = 0x7F2F8B44u;
    // 7F2F8B44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8B48:
    ctx->pc = 0x7F2F8B48u;
    // 7F2F8B48: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8B4C:
    ctx->pc = 0x7F2F8B4Cu;
    // 7F2F8B4C: cmpwi   r3, 0
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

label_7F2F8B50:
    ctx->pc = 0x7F2F8B50u;
    // 7F2F8B50: bc    12, 0, 0x7F2F8B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B9C;
        }
    }

label_7F2F8B54:
    ctx->pc = 0x7F2F8B54u;
    ctx->downcount -= 1;
    // 7F2F8B54: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F2F8B58u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F2F8B58:
    ctx->pc = 0x7F2F8B58u;
    ctx->downcount -= 2;
    // 7F2F8B58: cmpwi   r3, 0
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

label_7F2F8B5C:
    ctx->pc = 0x7F2F8B5Cu;
    // 7F2F8B5C: bc    4, 2, 0x7F2F8B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8B90;
        }
    }

label_7F2F8B60:
    ctx->pc = 0x7F2F8B60u;
    ctx->downcount -= 5;
    // 7F2F8B60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F8B64:
    ctx->pc = 0x7F2F8B64u;
    // 7F2F8B64: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8B68:
    ctx->pc = 0x7F2F8B68u;
    // 7F2F8B68: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8B6C:
    ctx->pc = 0x7F2F8B6Cu;
    // 7F2F8B6C: cmpwi   r4, 0
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

label_7F2F8B70:
    ctx->pc = 0x7F2F8B70u;
    // 7F2F8B70: bc    12, 2, 0x7F2F8BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8BA4;
        }
    }

label_7F2F8B74:
    ctx->pc = 0x7F2F8B74u;
    ctx->downcount -= 2;
    // 7F2F8B74: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8B78:
    ctx->pc = 0x7F2F8B78u;
    // 7F2F8B78: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F2F8B7Cu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F2F8B7C:
    ctx->pc = 0x7F2F8B7Cu;
    ctx->downcount -= 5;
    // 7F2F8B7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F8B80:
    ctx->pc = 0x7F2F8B80u;
    // 7F2F8B80: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2F8B84:
    ctx->pc = 0x7F2F8B84u;
    // 7F2F8B84: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8B88:
    ctx->pc = 0x7F2F8B88u;
    // 7F2F8B88: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8B8C:
    ctx->pc = 0x7F2F8B8Cu;
    // 7F2F8B8C: b       0x7F2F8BA4
    {
            goto label_7F2F8BA4;
    }

label_7F2F8B90:
    ctx->pc = 0x7F2F8B90u;
    ctx->downcount -= 3;
    // 7F2F8B90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2F8B94:
    ctx->pc = 0x7F2F8B94u;
    // 7F2F8B94: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8B98:
    ctx->pc = 0x7F2F8B98u;
    // 7F2F8B98: b       0x7F2F8BA4
    {
            goto label_7F2F8BA4;
    }

label_7F2F8B9C:
    ctx->pc = 0x7F2F8B9Cu;
    ctx->downcount -= 2;
    // 7F2F8B9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F8BA0:
    ctx->pc = 0x7F2F8BA0u;
    // 7F2F8BA0: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8BA4:
    ctx->pc = 0x7F2F8BA4u;
    ctx->downcount -= 3;
    // 7F2F8BA4: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8BA8:
    ctx->pc = 0x7F2F8BA8u;
    // 7F2F8BA8: cmpwi   r0, 0
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

label_7F2F8BAC:
    ctx->pc = 0x7F2F8BACu;
    // 7F2F8BAC: bc    4, 2, 0x7F2F8BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8BB8;
        }
    }

label_7F2F8BB0:
    ctx->pc = 0x7F2F8BB0u;
    ctx->downcount -= 2;
    // 7F2F8BB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F8BB4:
    ctx->pc = 0x7F2F8BB4u;
    // 7F2F8BB4: bl      0x7F2F8930
    {
            ctx->lr = 0x7F2F8BB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8930u;
                return;
            }
            goto label_7F2F8930;
    }

label_7F2F8BB8:
    ctx->pc = 0x7F2F8BB8u;
    ctx->downcount -= 6;
    // 7F2F8BB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8BBC:
    ctx->pc = 0x7F2F8BBCu;
    // 7F2F8BBC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F8BC0:
    ctx->pc = 0x7F2F8BC0u;
    // 7F2F8BC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8BC4:
    ctx->pc = 0x7F2F8BC4u;
    // 7F2F8BC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F8BC8:
    ctx->pc = 0x7F2F8BC8u;
    // 7F2F8BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8BCC:
    ctx->pc = 0x7F2F8BCCu;
    ctx->downcount -= 19;
    // 7F2F8BCC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8BD0:
    ctx->pc = 0x7F2F8BD0u;
    // 7F2F8BD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8BD4:
    ctx->pc = 0x7F2F8BD4u;
    // 7F2F8BD4: lis     r4, 125
    ctx->gpr[4] = ((u32)(s32)(125) << 16);

label_7F2F8BD8:
    ctx->pc = 0x7F2F8BD8u;
    // 7F2F8BD8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8BDC:
    ctx->pc = 0x7F2F8BDCu;
    // 7F2F8BDC: addi    r4, r4, 12669
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12669);

label_7F2F8BE0:
    ctx->pc = 0x7F2F8BE0u;
    // 7F2F8BE0: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F8BE4:
    ctx->pc = 0x7F2F8BE4u;
    // 7F2F8BE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8BE8:
    ctx->pc = 0x7F2F8BE8u;
    // 7F2F8BE8: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8BEC:
    ctx->pc = 0x7F2F8BECu;
    // 7F2F8BEC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8BF0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8BF0:
    ctx->pc = 0x7F2F8BF0u;
    ctx->downcount -= 6;
    // 7F2F8BF0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F2F8BF4:
    ctx->pc = 0x7F2F8BF4u;
    // 7F2F8BF4: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8BF8:
    ctx->pc = 0x7F2F8BF8u;
    // 7F2F8BF8: addi    r5, r4, -31648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31648);

label_7F2F8BFC:
    ctx->pc = 0x7F2F8BFCu;
    // 7F2F8BFC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8C00:
    ctx->pc = 0x7F2F8C00u;
    // 7F2F8C00: addi    r4, r30, 92
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(92);

label_7F2F8C04:
    ctx->pc = 0x7F2F8C04u;
    // 7F2F8C04: bl      0x7F2E2758
    {
            ctx->lr = 0x7F2F8C08u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F2F8C08:
    ctx->pc = 0x7F2F8C08u;
    ctx->downcount -= 2;
    // 7F2F8C08: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2F8C0C:
    ctx->pc = 0x7F2F8C0Cu;
    // 7F2F8C0C: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F2F8C10u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F2F8C10:
    ctx->pc = 0x7F2F8C10u;
    ctx->downcount -= 4;
    // 7F2F8C10: lis     r4, 27
    ctx->gpr[4] = ((u32)(s32)(27) << 16);

label_7F2F8C14:
    ctx->pc = 0x7F2F8C14u;
    // 7F2F8C14: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8C18:
    ctx->pc = 0x7F2F8C18u;
    // 7F2F8C18: addi    r4, r4, 8526
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8526);

label_7F2F8C1C:
    ctx->pc = 0x7F2F8C1Cu;
    // 7F2F8C1C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8C20u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8C20:
    ctx->pc = 0x7F2F8C20u;
    ctx->downcount -= 2;
    // 7F2F8C20: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8C24:
    ctx->pc = 0x7F2F8C24u;
    // 7F2F8C24: bl      0x8004DB8C
    {
            ctx->lr = 0x7F2F8C28u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F2F8C28:
    ctx->pc = 0x7F2F8C28u;
    ctx->downcount -= 20;
    // 7F2F8C28: lbz     r4, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2F8C2C:
    ctx->pc = 0x7F2F8C2Cu;
    // 7F2F8C2C: lis     r3, 200
    ctx->gpr[3] = ((u32)(s32)(200) << 16);

label_7F2F8C30:
    ctx->pc = 0x7F2F8C30u;
    // 7F2F8C30: lwz     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8C34:
    ctx->pc = 0x7F2F8C34u;
    // 7F2F8C34: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F2F8C38:
    ctx->pc = 0x7F2F8C38u;
    // 7F2F8C38: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2F8C3C:
    ctx->pc = 0x7F2F8C3Cu;
    // 7F2F8C3C: lwz     r5, 100(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F8C40:
    ctx->pc = 0x7F2F8C40u;
    // 7F2F8C40: addi    r7, r4, -74
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-74);

label_7F2F8C44:
    ctx->pc = 0x7F2F8C44u;
    // 7F2F8C44: addi    r4, r3, 6943
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6943);

label_7F2F8C48:
    ctx->pc = 0x7F2F8C48u;
    // 7F2F8C48: addic   r3, r7, -1
    {
        u64 a = ctx->gpr[7];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2F8C4C:
    ctx->pc = 0x7F2F8C4Cu;
    // 7F2F8C4C: subfe   r3, r3, r3
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2F8C50:
    ctx->pc = 0x7F2F8C50u;
    // 7F2F8C50: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F2F8C54:
    ctx->pc = 0x7F2F8C54u;
    // 7F2F8C54: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F8C58:
    ctx->pc = 0x7F2F8C58u;
    // 7F2F8C58: mullw   r0, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8C5C:
    ctx->pc = 0x7F2F8C5Cu;
    // 7F2F8C5C: stw     r0, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8C60:
    ctx->pc = 0x7F2F8C60u;
    // 7F2F8C60: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8C64:
    ctx->pc = 0x7F2F8C64u;
    // 7F2F8C64: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8C68u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8C68:
    ctx->pc = 0x7F2F8C68u;
    ctx->downcount -= 5;
    // 7F2F8C68: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8C6C:
    ctx->pc = 0x7F2F8C6Cu;
    // 7F2F8C6C: lwz     r4, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8C70:
    ctx->pc = 0x7F2F8C70u;
    // 7F2F8C70: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8C74:
    ctx->pc = 0x7F2F8C74u;
    // 7F2F8C74: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8C78:
    ctx->pc = 0x7F2F8C78u;
    // 7F2F8C78: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8C7Cu;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8C7C:
    ctx->pc = 0x7F2F8C7Cu;
    ctx->downcount -= 4;
    // 7F2F8C7C: lis     r4, 200
    ctx->gpr[4] = ((u32)(s32)(200) << 16);

label_7F2F8C80:
    ctx->pc = 0x7F2F8C80u;
    // 7F2F8C80: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8C84:
    ctx->pc = 0x7F2F8C84u;
    // 7F2F8C84: addi    r4, r4, 6945
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6945);

label_7F2F8C88:
    ctx->pc = 0x7F2F8C88u;
    // 7F2F8C88: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8C8Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8C8C:
    ctx->pc = 0x7F2F8C8Cu;
    ctx->downcount -= 5;
    // 7F2F8C8C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8C90:
    ctx->pc = 0x7F2F8C90u;
    // 7F2F8C90: lwz     r4, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8C94:
    ctx->pc = 0x7F2F8C94u;
    // 7F2F8C94: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8C98:
    ctx->pc = 0x7F2F8C98u;
    // 7F2F8C98: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8C9C:
    ctx->pc = 0x7F2F8C9Cu;
    // 7F2F8C9C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8CA0u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8CA0:
    ctx->pc = 0x7F2F8CA0u;
    ctx->downcount -= 4;
    // 7F2F8CA0: lis     r4, 200
    ctx->gpr[4] = ((u32)(s32)(200) << 16);

label_7F2F8CA4:
    ctx->pc = 0x7F2F8CA4u;
    // 7F2F8CA4: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8CA8:
    ctx->pc = 0x7F2F8CA8u;
    // 7F2F8CA8: addi    r4, r4, 6947
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6947);

label_7F2F8CAC:
    ctx->pc = 0x7F2F8CACu;
    // 7F2F8CAC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8CB0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8CB0:
    ctx->pc = 0x7F2F8CB0u;
    ctx->downcount -= 5;
    // 7F2F8CB0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8CB4:
    ctx->pc = 0x7F2F8CB4u;
    // 7F2F8CB4: lwz     r4, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8CB8:
    ctx->pc = 0x7F2F8CB8u;
    // 7F2F8CB8: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8CBC:
    ctx->pc = 0x7F2F8CBCu;
    // 7F2F8CBC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8CC0:
    ctx->pc = 0x7F2F8CC0u;
    // 7F2F8CC0: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8CC4u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8CC4:
    ctx->pc = 0x7F2F8CC4u;
    ctx->downcount -= 4;
    // 7F2F8CC4: lis     r4, 225
    ctx->gpr[4] = ((u32)(s32)(225) << 16);

label_7F2F8CC8:
    ctx->pc = 0x7F2F8CC8u;
    // 7F2F8CC8: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8CCC:
    ctx->pc = 0x7F2F8CCCu;
    // 7F2F8CCC: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F2F8CD0:
    ctx->pc = 0x7F2F8CD0u;
    // 7F2F8CD0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8CD4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8CD4:
    ctx->pc = 0x7F2F8CD4u;
    ctx->downcount -= 5;
    // 7F2F8CD4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8CD8:
    ctx->pc = 0x7F2F8CD8u;
    // 7F2F8CD8: lwz     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8CDC:
    ctx->pc = 0x7F2F8CDCu;
    // 7F2F8CDC: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8CE0:
    ctx->pc = 0x7F2F8CE0u;
    // 7F2F8CE0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8CE4:
    ctx->pc = 0x7F2F8CE4u;
    // 7F2F8CE4: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8CE8u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8CE8:
    ctx->pc = 0x7F2F8CE8u;
    ctx->downcount -= 4;
    // 7F2F8CE8: lis     r4, 123
    ctx->gpr[4] = ((u32)(s32)(123) << 16);

label_7F2F8CEC:
    ctx->pc = 0x7F2F8CECu;
    // 7F2F8CEC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8CF0:
    ctx->pc = 0x7F2F8CF0u;
    // 7F2F8CF0: addi    r4, r4, 9492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9492);

label_7F2F8CF4:
    ctx->pc = 0x7F2F8CF4u;
    // 7F2F8CF4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8CF8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8CF8:
    ctx->pc = 0x7F2F8CF8u;
    ctx->downcount -= 5;
    // 7F2F8CF8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8CFC:
    ctx->pc = 0x7F2F8CFCu;
    // 7F2F8CFC: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8D00:
    ctx->pc = 0x7F2F8D00u;
    // 7F2F8D00: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8D04:
    ctx->pc = 0x7F2F8D04u;
    // 7F2F8D04: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8D08:
    ctx->pc = 0x7F2F8D08u;
    // 7F2F8D08: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8D0Cu;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8D0C:
    ctx->pc = 0x7F2F8D0Cu;
    ctx->downcount -= 4;
    // 7F2F8D0C: lis     r4, 5
    ctx->gpr[4] = ((u32)(s32)(5) << 16);

label_7F2F8D10:
    ctx->pc = 0x7F2F8D10u;
    // 7F2F8D10: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8D14:
    ctx->pc = 0x7F2F8D14u;
    // 7F2F8D14: addi    r4, r4, -5752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5752);

label_7F2F8D18:
    ctx->pc = 0x7F2F8D18u;
    // 7F2F8D18: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8D1Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8D1C:
    ctx->pc = 0x7F2F8D1Cu;
    ctx->downcount -= 5;
    // 7F2F8D1C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8D20:
    ctx->pc = 0x7F2F8D20u;
    // 7F2F8D20: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8D24:
    ctx->pc = 0x7F2F8D24u;
    // 7F2F8D24: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8D28:
    ctx->pc = 0x7F2F8D28u;
    // 7F2F8D28: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8D2C:
    ctx->pc = 0x7F2F8D2Cu;
    // 7F2F8D2C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8D30u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8D30:
    ctx->pc = 0x7F2F8D30u;
    ctx->downcount -= 4;
    // 7F2F8D30: lis     r4, 45
    ctx->gpr[4] = ((u32)(s32)(45) << 16);

label_7F2F8D34:
    ctx->pc = 0x7F2F8D34u;
    // 7F2F8D34: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8D38:
    ctx->pc = 0x7F2F8D38u;
    // 7F2F8D38: addi    r4, r4, -12165
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12165);

label_7F2F8D3C:
    ctx->pc = 0x7F2F8D3Cu;
    // 7F2F8D3C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8D40u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8D40:
    ctx->pc = 0x7F2F8D40u;
    ctx->downcount -= 5;
    // 7F2F8D40: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8D44:
    ctx->pc = 0x7F2F8D44u;
    // 7F2F8D44: lwz     r4, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8D48:
    ctx->pc = 0x7F2F8D48u;
    // 7F2F8D48: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8D4C:
    ctx->pc = 0x7F2F8D4Cu;
    // 7F2F8D4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8D50:
    ctx->pc = 0x7F2F8D50u;
    // 7F2F8D50: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8D54u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8D54:
    ctx->pc = 0x7F2F8D54u;
    ctx->downcount -= 4;
    // 7F2F8D54: lis     r4, 182
    ctx->gpr[4] = ((u32)(s32)(182) << 16);

label_7F2F8D58:
    ctx->pc = 0x7F2F8D58u;
    // 7F2F8D58: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8D5C:
    ctx->pc = 0x7F2F8D5Cu;
    // 7F2F8D5C: addi    r4, r4, 6675
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6675);

label_7F2F8D60:
    ctx->pc = 0x7F2F8D60u;
    // 7F2F8D60: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8D64u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8D64:
    ctx->pc = 0x7F2F8D64u;
    ctx->downcount -= 5;
    // 7F2F8D64: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F2F8D68:
    ctx->pc = 0x7F2F8D68u;
    // 7F2F8D68: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8D6C:
    ctx->pc = 0x7F2F8D6Cu;
    // 7F2F8D6C: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F2F8D70:
    ctx->pc = 0x7F2F8D70u;
    // 7F2F8D70: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2F8D74:
    ctx->pc = 0x7F2F8D74u;
    // 7F2F8D74: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F2F8D78u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F2F8D78:
    ctx->pc = 0x7F2F8D78u;
    ctx->downcount -= 4;
    // 7F2F8D78: lis     r3, 44
    ctx->gpr[3] = ((u32)(s32)(44) << 16);

label_7F2F8D7C:
    ctx->pc = 0x7F2F8D7Cu;
    // 7F2F8D7C: addi    r25, r3, 20315
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(20315);

label_7F2F8D80:
    ctx->pc = 0x7F2F8D80u;
    // 7F2F8D80: addi    r26, r3, 20318
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(20318);

label_7F2F8D84:
    ctx->pc = 0x7F2F8D84u;
    // 7F2F8D84: b       0x7F2F8DA8
    {
            goto label_7F2F8DA8;
    }

label_7F2F8D88:
    ctx->pc = 0x7F2F8D88u;
    ctx->downcount -= 3;
    // 7F2F8D88: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8D8C:
    // 7F2F8D8C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2F8D90:
    // 7F2F8D90: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8D94u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8D94:
    ctx->pc = 0x7F2F8D94u;
    ctx->downcount -= 9;
    // 7F2F8D94: lwz     r4, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8D98:
    // 7F2F8D98: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F2F8D9C:
    ctx->pc = 0x7F2F8D9Cu;
    // 7F2F8D9C: lwz     r0, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8DA0:
    // 7F2F8DA0: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8DA4:
    ctx->pc = 0x7F2F8DA4u;
    // 7F2F8DA4: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8DA8:
    ctx->downcount -= 2;
    // 7F2F8DA8: cmpw    r25, r26
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8DAC:
    // 7F2F8DAC: bc    4, 1, 0x7F2F8D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8D88u;
                return;
            }
            goto label_7F2F8D88;
        }
    }

label_7F2F8DB0:
    ctx->pc = 0x7F2F8DB0u;
    ctx->downcount -= 1;
    // 7F2F8DB0: bl      0x7F30B6A4
    {
            ctx->lr = 0x7F2F8DB4u;
            ctx->pc = 0x7F30B6A4u;
            return;
    }

label_7F2F8DB4:
    ctx->pc = 0x7F2F8DB4u;
    ctx->downcount -= 5;
    // 7F2F8DB4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8DB8:
    ctx->pc = 0x7F2F8DB8u;
    // 7F2F8DB8: lis     r4, 133
    ctx->gpr[4] = ((u32)(s32)(133) << 16);

label_7F2F8DBC:
    ctx->pc = 0x7F2F8DBCu;
    // 7F2F8DBC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8DC0:
    ctx->pc = 0x7F2F8DC0u;
    // 7F2F8DC0: addi    r4, r4, -15363
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15363);

label_7F2F8DC4:
    ctx->pc = 0x7F2F8DC4u;
    // 7F2F8DC4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8DC8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8DC8:
    ctx->pc = 0x7F2F8DC8u;
    ctx->downcount -= 11;
    // 7F2F8DC8: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8DCC:
    ctx->pc = 0x7F2F8DCCu;
    // 7F2F8DCC: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F2F8DD0:
    ctx->pc = 0x7F2F8DD0u;
    // 7F2F8DD0: addi    r4, r4, 12764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12764);

label_7F2F8DD4:
    ctx->pc = 0x7F2F8DD4u;
    // 7F2F8DD4: mullw   r0, r0, r26
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[26];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8DD8:
    ctx->pc = 0x7F2F8DD8u;
    // 7F2F8DD8: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8DDC:
    ctx->pc = 0x7F2F8DDCu;
    // 7F2F8DDC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8DE0:
    ctx->pc = 0x7F2F8DE0u;
    // 7F2F8DE0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8DE4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8DE4:
    ctx->pc = 0x7F2F8DE4u;
    ctx->downcount -= 11;
    // 7F2F8DE4: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8DE8:
    ctx->pc = 0x7F2F8DE8u;
    // 7F2F8DE8: lis     r4, 33
    ctx->gpr[4] = ((u32)(s32)(33) << 16);

label_7F2F8DEC:
    ctx->pc = 0x7F2F8DECu;
    // 7F2F8DEC: addi    r4, r4, 5038
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5038);

label_7F2F8DF0:
    ctx->pc = 0x7F2F8DF0u;
    // 7F2F8DF0: mullw   r0, r0, r26
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[26];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8DF4:
    ctx->pc = 0x7F2F8DF4u;
    // 7F2F8DF4: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8DF8:
    ctx->pc = 0x7F2F8DF8u;
    // 7F2F8DF8: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8DFC:
    ctx->pc = 0x7F2F8DFCu;
    // 7F2F8DFC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8E00u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8E00:
    ctx->pc = 0x7F2F8E00u;
    ctx->downcount -= 16;
    // 7F2F8E00: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8E04:
    ctx->pc = 0x7F2F8E04u;
    // 7F2F8E04: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2F8E08:
    ctx->pc = 0x7F2F8E08u;
    // 7F2F8E08: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F8E0C:
    ctx->pc = 0x7F2F8E0Cu;
    // 7F2F8E0C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2F8E10:
    ctx->pc = 0x7F2F8E10u;
    // 7F2F8E10: mullw   r0, r0, r26
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[26];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8E14:
    ctx->pc = 0x7F2F8E14u;
    // 7F2F8E14: or   r29, r25, r25
    {
        ctx->gpr[29] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2F8E18:
    ctx->pc = 0x7F2F8E18u;
    // 7F2F8E18: addi    r28, r4, 31392
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(31392);

label_7F2F8E1C:
    ctx->pc = 0x7F2F8E1Cu;
    // 7F2F8E1C: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_7F2F8E20:
    ctx->pc = 0x7F2F8E20u;
    // 7F2F8E20: mulli   r26, r26, 3
    ctx->gpr[26] = (u32)((s64)(s32)ctx->gpr[26] * (s64)(s32)3);

label_7F2F8E24:
    ctx->pc = 0x7F2F8E24u;
    // 7F2F8E24: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8E28:
    ctx->pc = 0x7F2F8E28u;
    ctx->downcount -= 4;
    // 7F2F8E28: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8E2C:
    // 7F2F8E2C: slw   r0, r27, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[27] << sh);
    }

label_7F2F8E30:
    // 7F2F8E30: and.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2F8E34:
    // 7F2F8E34: bc    12, 2, 0x7F2F8E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8E64;
        }
    }

label_7F2F8E38:
    ctx->pc = 0x7F2F8E38u;
    ctx->downcount -= 3;
    // 7F2F8E38: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8E3C:
    ctx->pc = 0x7F2F8E3Cu;
    // 7F2F8E3C: lwzx    r4, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8E40:
    // 7F2F8E40: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8E44u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8E44:
    ctx->pc = 0x7F2F8E44u;
    ctx->downcount -= 12;
    // 7F2F8E44: lwz     r5, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F8E48:
    // 7F2F8E48: add   r0, r25, r26
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F8E4C:
    ctx->pc = 0x7F2F8E4Cu;
    // 7F2F8E4C: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8E50:
    // 7F2F8E50: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F2F8E54:
    // 7F2F8E54: mullw   r0, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F2F8E58:
    // 7F2F8E58: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2F8E5C:
    ctx->pc = 0x7F2F8E5Cu;
    // 7F2F8E5C: stw     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8E60:
    ctx->pc = 0x7F2F8E60u;
    // 7F2F8E60: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8E64:
    ctx->downcount -= 3;
    // 7F2F8E64: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F2F8E68:
    // 7F2F8E68: cmpwi   r25, 3
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8E6C:
    // 7F2F8E6C: bc    12, 0, 0x7F2F8E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8E28u;
                return;
            }
            goto label_7F2F8E28;
        }
    }

label_7F2F8E70:
    ctx->pc = 0x7F2F8E70u;
    ctx->downcount -= 4;
    // 7F2F8E70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F8E74:
    ctx->pc = 0x7F2F8E74u;
    // 7F2F8E74: rlwinm r29, r31, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F2F8E78:
    ctx->pc = 0x7F2F8E78u;
    // 7F2F8E78: addi    r28, r3, 31392
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(31392);

label_7F2F8E7C:
    ctx->pc = 0x7F2F8E7Cu;
    // 7F2F8E7C: b       0x7F2F8EA0
    {
            goto label_7F2F8EA0;
    }

label_7F2F8E80:
    ctx->pc = 0x7F2F8E80u;
    ctx->downcount -= 3;
    // 7F2F8E80: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8E84:
    ctx->pc = 0x7F2F8E84u;
    // 7F2F8E84: lwzx    r4, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F8E88:
    // 7F2F8E88: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2F8E8Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2F8E8C:
    ctx->pc = 0x7F2F8E8Cu;
    ctx->downcount -= 5;
    // 7F2F8E8C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8E90:
    // 7F2F8E90: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F2F8E94:
    // 7F2F8E94: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2F8E98:
    // 7F2F8E98: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F2F8E9C:
    ctx->pc = 0x7F2F8E9Cu;
    // 7F2F8E9C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8EA0:
    ctx->downcount -= 2;
    // 7F2F8EA0: cmpwi   r31, 3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8EA4:
    // 7F2F8EA4: bc    12, 0, 0x7F2F8E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8E80u;
                return;
            }
            goto label_7F2F8E80;
        }
    }

label_7F2F8EA8:
    ctx->pc = 0x7F2F8EA8u;
    ctx->downcount -= 16;
    // 7F2F8EA8: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F8EAC:
    ctx->pc = 0x7F2F8EACu;
    // 7F2F8EAC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8EB0:
    ctx->pc = 0x7F2F8EB0u;
    // 7F2F8EB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8EB4:
    ctx->pc = 0x7F2F8EB4u;
    // 7F2F8EB4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2F8EB8:
    ctx->pc = 0x7F2F8EB8u;
    // 7F2F8EB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8EBC:
    ctx->pc = 0x7F2F8EBCu;
    ctx->downcount -= 6;
    // 7F2F8EBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8EC0:
    ctx->pc = 0x7F2F8EC0u;
    // 7F2F8EC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8EC4:
    ctx->pc = 0x7F2F8EC4u;
    // 7F2F8EC4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8EC8:
    ctx->pc = 0x7F2F8EC8u;
    // 7F2F8EC8: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8ECC:
    ctx->pc = 0x7F2F8ECCu;
    // 7F2F8ECC: cmpwi   r3, 0
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

label_7F2F8ED0:
    ctx->pc = 0x7F2F8ED0u;
    // 7F2F8ED0: bc    12, 0, 0x7F2F8ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8ED8;
        }
    }

label_7F2F8ED4:
    ctx->pc = 0x7F2F8ED4u;
    ctx->downcount -= 1;
    // 7F2F8ED4: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F2F8ED8u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F2F8ED8:
    ctx->pc = 0x7F2F8ED8u;
    ctx->downcount -= 5;
    // 7F2F8ED8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F8EDC:
    ctx->pc = 0x7F2F8EDCu;
    // 7F2F8EDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F8EE0:
    ctx->pc = 0x7F2F8EE0u;
    // 7F2F8EE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F8EE4:
    ctx->pc = 0x7F2F8EE4u;
    // 7F2F8EE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F8EE8:
    ctx->pc = 0x7F2F8EE8u;
    ctx->downcount -= 64;
    // 7F2F8EE8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F8EEC:
    ctx->pc = 0x7F2F8EECu;
    // 7F2F8EEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F8EF0:
    ctx->pc = 0x7F2F8EF0u;
    // 7F2F8EF0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F2F8EF4:
    ctx->pc = 0x7F2F8EF4u;
    // 7F2F8EF4: lis     r4, 5
    ctx->gpr[4] = ((u32)(s32)(5) << 16);

label_7F2F8EF8:
    ctx->pc = 0x7F2F8EF8u;
    // 7F2F8EF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8EFC:
    ctx->pc = 0x7F2F8EFCu;
    // 7F2F8EFC: addi    r5, r5, 13880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13880);

label_7F2F8F00:
    ctx->pc = 0x7F2F8F00u;
    // 7F2F8F00: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F2F8F04:
    ctx->pc = 0x7F2F8F04u;
    // 7F2F8F04: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F8F08:
    ctx->pc = 0x7F2F8F08u;
    // 7F2F8F08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F8F0C:
    ctx->pc = 0x7F2F8F0Cu;
    // 7F2F8F0C: addi    r31, r4, 32319
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(32319);

label_7F2F8F10:
    ctx->pc = 0x7F2F8F10u;
    // 7F2F8F10: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F8F14:
    ctx->pc = 0x7F2F8F14u;
    // 7F2F8F14: lwz     r3, 352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8F18:
    ctx->pc = 0x7F2F8F18u;
    // 7F2F8F18: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F8F1C:
    ctx->pc = 0x7F2F8F1Cu;
    // 7F2F8F1C: cmpw    r0, r31
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

label_7F2F8F20:
    ctx->pc = 0x7F2F8F20u;
    // 7F2F8F20: bc    4, 0, 0x7F2F8F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8F28;
        }
    }

label_7F2F8F24:
    ctx->pc = 0x7F2F8F24u;
    ctx->downcount -= 1;
    // 7F2F8F24: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2F8F28:
    ctx->pc = 0x7F2F8F28u;
    ctx->downcount -= 3;
    // 7F2F8F28: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2F8F2C:
    ctx->pc = 0x7F2F8F2Cu;
    // 7F2F8F2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2F8F30:
    ctx->pc = 0x7F2F8F30u;
    // 7F2F8F30: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2F8F34u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2F8F34:
    ctx->pc = 0x7F2F8F34u;
    ctx->downcount -= 3;
    // 7F2F8F34: stw     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8F38:
    ctx->pc = 0x7F2F8F38u;
    // 7F2F8F38: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F2F8F3C:
    ctx->pc = 0x7F2F8F3Cu;
    // 7F2F8F3C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2F8F40u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2F8F40:
    ctx->pc = 0x7F2F8F40u;
    ctx->downcount -= 2;
    // 7F2F8F40: cmplwi  r3, 0x0000
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

label_7F2F8F44:
    ctx->pc = 0x7F2F8F44u;
    // 7F2F8F44: bc    12, 2, 0x7F2F8F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8F6C;
        }
    }

label_7F2F8F48:
    ctx->pc = 0x7F2F8F48u;
    ctx->downcount -= 2;
    // 7F2F8F48: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2F8F4C:
    ctx->pc = 0x7F2F8F4Cu;
    // 7F2F8F4C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2F8F50:
    ctx->downcount -= 1;
    // 7F2F8F50: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2F8F54u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2F8F54:
    ctx->downcount -= 6;
    // 7F2F8F54: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2F8F58:
    // 7F2F8F58: addi    r0, r29, 76
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(76);

label_7F2F8F5C:
    // 7F2F8F5C: cmpwi   r28, 4
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8F60:
    ctx->pc = 0x7F2F8F60u;
    // 7F2F8F60: stwx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8F64:
    // 7F2F8F64: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2F8F68:
    // 7F2F8F68: bc    12, 0, 0x7F2F8F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8F50u;
                return;
            }
            goto label_7F2F8F50;
        }
    }

label_7F2F8F6C:
    ctx->pc = 0x7F2F8F6Cu;
    ctx->downcount -= 2;
    // 7F2F8F6C: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F2F8F70:
    ctx->pc = 0x7F2F8F70u;
    // 7F2F8F70: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2F8F74u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2F8F74:
    ctx->pc = 0x7F2F8F74u;
    ctx->downcount -= 2;
    // 7F2F8F74: cmplwi  r3, 0x0000
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

label_7F2F8F78:
    ctx->pc = 0x7F2F8F78u;
    // 7F2F8F78: bc    12, 2, 0x7F2F8FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8FAC;
        }
    }

label_7F2F8F7C:
    ctx->pc = 0x7F2F8F7Cu;
    ctx->downcount -= 2;
    // 7F2F8F7C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2F8F80:
    ctx->pc = 0x7F2F8F80u;
    // 7F2F8F80: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F2F8F84:
    ctx->downcount -= 1;
    // 7F2F8F84: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2F8F88u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2F8F88:
    ctx->downcount -= 2;
    // 7F2F8F88: cmpwi   r3, 0
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

label_7F2F8F8C:
    // 7F2F8F8C: bc    12, 2, 0x7F2F8FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F8FA0;
        }
    }

label_7F2F8F90:
    ctx->pc = 0x7F2F8F90u;
    ctx->downcount -= 4;
    // 7F2F8F90: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8F94:
    // 7F2F8F94: slw   r0, r29, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[29] << sh);
    }

label_7F2F8F98:
    // 7F2F8F98: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F2F8F9C:
    ctx->pc = 0x7F2F8F9Cu;
    // 7F2F8F9C: stw     r0, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F8FA0:
    ctx->downcount -= 3;
    // 7F2F8FA0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2F8FA4:
    // 7F2F8FA4: cmpwi   r28, 3
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F8FA8:
    // 7F2F8FA8: bc    12, 0, 0x7F2F8F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8F84u;
                return;
            }
            goto label_7F2F8F84;
        }
    }

label_7F2F8FAC:
    ctx->pc = 0x7F2F8FACu;
    ctx->downcount -= 6;
    // 7F2F8FAC: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F2F8FB0:
    ctx->pc = 0x7F2F8FB0u;
    // 7F2F8FB0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2F8FB4:
    ctx->pc = 0x7F2F8FB4u;
    // 7F2F8FB4: addi    r3, r3, -17435
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17435);

label_7F2F8FB8:
    ctx->pc = 0x7F2F8FB8u;
    // 7F2F8FB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2F8FBC:
    ctx->pc = 0x7F2F8FBCu;
    // 7F2F8FBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F8FC0:
    ctx->pc = 0x7F2F8FC0u;
    // 7F2F8FC0: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F2F8FC4u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F2F8FC4:
    ctx->pc = 0x7F2F8FC4u;
    ctx->downcount -= 6;
    // 7F2F8FC4: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F8FC8:
    ctx->pc = 0x7F2F8FC8u;
    // 7F2F8FC8: lis     r3, 32560
    ctx->gpr[3] = ((u32)(s32)(32560) << 16);

label_7F2F8FCC:
    ctx->pc = 0x7F2F8FCCu;
    // 7F2F8FCC: addi    r5, r3, -29748
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29748);

label_7F2F8FD0:
    ctx->pc = 0x7F2F8FD0u;
    // 7F2F8FD0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2F8FD4:
    ctx->pc = 0x7F2F8FD4u;
    // 7F2F8FD4: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8FD8:
    ctx->pc = 0x7F2F8FD8u;
    // 7F2F8FD8: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F2F8FDCu;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F2F8FDC:
    ctx->pc = 0x7F2F8FDCu;
    ctx->downcount -= 2;
    // 7F2F8FDC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F8FE0:
    ctx->pc = 0x7F2F8FE0u;
    // 7F2F8FE0: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F2F8FE4u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F2F8FE4:
    ctx->pc = 0x7F2F8FE4u;
    ctx->downcount -= 192;
    // 7F2F8FE4: li      r7, 60
    ctx->gpr[7] = (u32)(s32)(60);

label_7F2F8FE8:
    ctx->pc = 0x7F2F8FE8u;
    // 7F2F8FE8: lis     r3, 183
    ctx->gpr[3] = ((u32)(s32)(183) << 16);

label_7F2F8FEC:
    ctx->pc = 0x7F2F8FECu;
    // 7F2F8FEC: divw   r6, r31, r7
    {
        s32 dividend = (s32)ctx->gpr[31];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F8FF0:
    ctx->pc = 0x7F2F8FF0u;
    // 7F2F8FF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2F8FF4:
    ctx->pc = 0x7F2F8FF4u;
    // 7F2F8FF4: addi    r0, r3, -28936
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28936);

label_7F2F8FF8:
    ctx->pc = 0x7F2F8FF8u;
    // 7F2F8FF8: li      r3, 3600
    ctx->gpr[3] = (u32)(s32)(3600);

label_7F2F8FFC:
    ctx->pc = 0x7F2F8FFCu;
    // 7F2F8FFC: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9000:
    ctx->pc = 0x7F2F9000u;
    // 7F2F9000: addi    r9, r4, 13880
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F2F9004:
    ctx->pc = 0x7F2F9004u;
    // 7F2F9004: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2F9008:
    ctx->pc = 0x7F2F9008u;
    // 7F2F9008: divw   r4, r6, r7
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F900C:
    ctx->pc = 0x7F2F900Cu;
    // 7F2F900C: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F2F9010:
    ctx->pc = 0x7F2F9010u;
    // 7F2F9010: lha     r8, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F9014:
    ctx->pc = 0x7F2F9014u;
    // 7F2F9014: li      r0, 99
    ctx->gpr[0] = (u32)(s32)(99);

label_7F2F9018:
    ctx->pc = 0x7F2F9018u;
    // 7F2F9018: divw   r8, r8, r5
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F901C:
    ctx->pc = 0x7F2F901Cu;
    // 7F2F901C: mullw   r5, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[5] = (u32)product;
    }

label_7F2F9020:
    ctx->pc = 0x7F2F9020u;
    // 7F2F9020: addi    r8, r8, -1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1);

label_7F2F9024:
    ctx->pc = 0x7F2F9024u;
    // 7F2F9024: stw     r8, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F9028:
    ctx->pc = 0x7F2F9028u;
    // 7F2F9028: mullw   r4, r4, r7
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[4] = (u32)product;
    }

label_7F2F902C:
    ctx->pc = 0x7F2F902Cu;
    // 7F2F902C: subf   r5, r5, r31
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F2F9030:
    ctx->pc = 0x7F2F9030u;
    // 7F2F9030: stw     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F9034:
    ctx->pc = 0x7F2F9034u;
    // 7F2F9034: subf   r4, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F2F9038:
    ctx->pc = 0x7F2F9038u;
    // 7F2F9038: divw   r3, r31, r3
    {
        s32 dividend = (s32)ctx->gpr[31];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2F903C:
    ctx->pc = 0x7F2F903Cu;
    // 7F2F903C: stw     r4, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9040:
    ctx->pc = 0x7F2F9040u;
    // 7F2F9040: stw     r3, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9044:
    ctx->pc = 0x7F2F9044u;
    // 7F2F9044: lwz     r3, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9048:
    ctx->pc = 0x7F2F9048u;
    // 7F2F9048: lha     r3, 350(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(350);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F904C:
    ctx->pc = 0x7F2F904Cu;
    // 7F2F904C: cmpwi   r3, 99
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(99);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9050:
    ctx->pc = 0x7F2F9050u;
    // 7F2F9050: bc    12, 1, 0x7F2F9058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9058;
        }
    }

label_7F2F9054:
    ctx->pc = 0x7F2F9054u;
    ctx->downcount -= 1;
    // 7F2F9054: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9058:
    ctx->pc = 0x7F2F9058u;
    ctx->downcount -= 8;
    // 7F2F9058: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F905C:
    ctx->pc = 0x7F2F905Cu;
    // 7F2F905C: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9060:
    ctx->pc = 0x7F2F9060u;
    // 7F2F9060: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2F9064:
    ctx->pc = 0x7F2F9064u;
    // 7F2F9064: li      r0, 99
    ctx->gpr[0] = (u32)(s32)(99);

label_7F2F9068:
    ctx->pc = 0x7F2F9068u;
    // 7F2F9068: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F906C:
    ctx->pc = 0x7F2F906Cu;
    // 7F2F906C: lha     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F9070:
    ctx->pc = 0x7F2F9070u;
    // 7F2F9070: cmpwi   r3, 99
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(99);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9074:
    ctx->pc = 0x7F2F9074u;
    // 7F2F9074: bc    12, 1, 0x7F2F907C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F907C;
        }
    }

label_7F2F9078:
    ctx->pc = 0x7F2F9078u;
    ctx->downcount -= 1;
    // 7F2F9078: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F907C:
    ctx->pc = 0x7F2F907Cu;
    ctx->downcount -= 8;
    // 7F2F907C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F9080:
    ctx->pc = 0x7F2F9080u;
    // 7F2F9080: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9084:
    ctx->pc = 0x7F2F9084u;
    // 7F2F9084: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2F9088:
    ctx->pc = 0x7F2F9088u;
    // 7F2F9088: li      r0, 99
    ctx->gpr[0] = (u32)(s32)(99);

label_7F2F908C:
    ctx->pc = 0x7F2F908Cu;
    // 7F2F908C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9090:
    ctx->pc = 0x7F2F9090u;
    // 7F2F9090: lha     r3, 362(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(362);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F9094:
    ctx->pc = 0x7F2F9094u;
    // 7F2F9094: cmpwi   r3, 99
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(99);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9098:
    ctx->pc = 0x7F2F9098u;
    // 7F2F9098: bc    12, 1, 0x7F2F90A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F90A0;
        }
    }

label_7F2F909C:
    ctx->pc = 0x7F2F909Cu;
    ctx->downcount -= 1;
    // 7F2F909C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F90A0:
    ctx->pc = 0x7F2F90A0u;
    ctx->downcount -= 8;
    // 7F2F90A0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F90A4:
    ctx->pc = 0x7F2F90A4u;
    // 7F2F90A4: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F90A8:
    ctx->pc = 0x7F2F90A8u;
    // 7F2F90A8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2F90AC:
    ctx->pc = 0x7F2F90ACu;
    // 7F2F90AC: li      r0, 999
    ctx->gpr[0] = (u32)(s32)(999);

label_7F2F90B0:
    ctx->pc = 0x7F2F90B0u;
    // 7F2F90B0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F90B4:
    ctx->pc = 0x7F2F90B4u;
    // 7F2F90B4: lha     r3, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F90B8:
    ctx->pc = 0x7F2F90B8u;
    // 7F2F90B8: cmpwi   r3, 999
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(999);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F90BC:
    ctx->pc = 0x7F2F90BCu;
    // 7F2F90BC: bc    12, 1, 0x7F2F90C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F90C4;
        }
    }

label_7F2F90C0:
    ctx->pc = 0x7F2F90C0u;
    ctx->downcount -= 1;
    // 7F2F90C0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F90C4:
    ctx->pc = 0x7F2F90C4u;
    ctx->downcount -= 8;
    // 7F2F90C4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F90C8:
    ctx->pc = 0x7F2F90C8u;
    // 7F2F90C8: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F90CC:
    ctx->pc = 0x7F2F90CCu;
    // 7F2F90CC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2F90D0:
    ctx->pc = 0x7F2F90D0u;
    // 7F2F90D0: li      r0, 999
    ctx->gpr[0] = (u32)(s32)(999);

label_7F2F90D4:
    ctx->pc = 0x7F2F90D4u;
    // 7F2F90D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F90D8:
    ctx->pc = 0x7F2F90D8u;
    // 7F2F90D8: lha     r3, 5560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5560);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F90DC:
    ctx->pc = 0x7F2F90DCu;
    // 7F2F90DC: cmpwi   r3, 999
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(999);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F90E0:
    ctx->pc = 0x7F2F90E0u;
    // 7F2F90E0: bc    12, 1, 0x7F2F90E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F90E8;
        }
    }

label_7F2F90E4:
    ctx->pc = 0x7F2F90E4u;
    ctx->downcount -= 1;
    // 7F2F90E4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F90E8:
    ctx->pc = 0x7F2F90E8u;
    ctx->downcount -= 3;
    // 7F2F90E8: stw     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F90EC:
    ctx->pc = 0x7F2F90ECu;
    // 7F2F90EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2F90F0:
    ctx->pc = 0x7F2F90F0u;
    // 7F2F90F0: bl      0x7F2F86F4
    {
            ctx->lr = 0x7F2F90F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F86F4u;
                return;
            }
            goto label_7F2F86F4;
    }

label_7F2F90F4:
    ctx->pc = 0x7F2F90F4u;
    ctx->downcount -= 16;
    // 7F2F90F4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F90F8:
    ctx->pc = 0x7F2F90F8u;
    // 7F2F90F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F90FC:
    ctx->pc = 0x7F2F90FCu;
    // 7F2F90FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F9100:
    ctx->pc = 0x7F2F9100u;
    // 7F2F9100: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F9104:
    ctx->pc = 0x7F2F9104u;
    // 7F2F9104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F9108:
    ctx->pc = 0x7F2F9108u;
    ctx->downcount -= 20;
    // 7F2F9108: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F910C:
    ctx->pc = 0x7F2F910Cu;
    // 7F2F910C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F9110:
    ctx->pc = 0x7F2F9110u;
    // 7F2F9110: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2F9114:
    ctx->pc = 0x7F2F9114u;
    // 7F2F9114: li      r5, 168
    ctx->gpr[5] = (u32)(s32)(168);

label_7F2F9118:
    ctx->pc = 0x7F2F9118u;
    // 7F2F9118: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F911C:
    ctx->pc = 0x7F2F911Cu;
    // 7F2F911C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F9120:
    ctx->pc = 0x7F2F9120u;
    // 7F2F9120: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F9124:
    ctx->pc = 0x7F2F9124u;
    // 7F2F9124: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9128:
    ctx->pc = 0x7F2F9128u;
    // 7F2F9128: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2F912C:
    ctx->pc = 0x7F2F912Cu;
    // 7F2F912C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2F9130u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2F9130:
    ctx->pc = 0x7F2F9130u;
    ctx->downcount -= 2;
    // 7F2F9130: or.   r31, r3, r3
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

label_7F2F9134:
    ctx->pc = 0x7F2F9134u;
    // 7F2F9134: bc    12, 2, 0x7F2F91C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F91C4;
        }
    }

label_7F2F9138:
    ctx->pc = 0x7F2F9138u;
    ctx->downcount -= 6;
    // 7F2F9138: lis     r4, 32560
    ctx->gpr[4] = ((u32)(s32)(32560) << 16);

label_7F2F913C:
    ctx->pc = 0x7F2F913Cu;
    // 7F2F913C: lis     r5, 32560
    ctx->gpr[5] = ((u32)(s32)(32560) << 16);

label_7F2F9140:
    ctx->pc = 0x7F2F9140u;
    // 7F2F9140: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2F9144:
    ctx->pc = 0x7F2F9144u;
    // 7F2F9144: addi    r4, r4, -29900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29900);

label_7F2F9148:
    ctx->pc = 0x7F2F9148u;
    // 7F2F9148: addi    r5, r5, -28996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28996);

label_7F2F914C:
    ctx->pc = 0x7F2F914Cu;
    // 7F2F914C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2F9150u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2F9150:
    ctx->pc = 0x7F2F9150u;
    ctx->downcount -= 13;
    // 7F2F9150: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9154:
    ctx->pc = 0x7F2F9154u;
    // 7F2F9154: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2F9158:
    ctx->pc = 0x7F2F9158u;
    // 7F2F9158: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2F915C:
    ctx->pc = 0x7F2F915Cu;
    // 7F2F915C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F9160:
    ctx->pc = 0x7F2F9160u;
    // 7F2F9160: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F2F9164:
    ctx->pc = 0x7F2F9164u;
    // 7F2F9164: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2F9168:
    ctx->pc = 0x7F2F9168u;
    // 7F2F9168: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F916C:
    ctx->pc = 0x7F2F916Cu;
    // 7F2F916C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2F9170:
    ctx->pc = 0x7F2F9170u;
    // 7F2F9170: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F9174:
    ctx->pc = 0x7F2F9174u;
    // 7F2F9174: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F9178:
    ctx->pc = 0x7F2F9178u;
    // 7F2F9178: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F917C:
    ctx->pc = 0x7F2F917Cu;
    // 7F2F917C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9180:
    ctx->pc = 0x7F2F9180u;
    // 7F2F9180: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F2F9184u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F2F9184:
    ctx->pc = 0x7F2F9184u;
    ctx->downcount -= 2;
    // 7F2F9184: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F9188:
    ctx->pc = 0x7F2F9188u;
    // 7F2F9188: bl      0x7F2F8EE8
    {
            ctx->lr = 0x7F2F918Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8EE8u;
                return;
            }
            goto label_7F2F8EE8;
    }

label_7F2F918C:
    ctx->pc = 0x7F2F918Cu;
    ctx->downcount -= 2;
    // 7F2F918C: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F2F9190:
    ctx->pc = 0x7F2F9190u;
    // 7F2F9190: bl      0x7F2F841C
    {
            ctx->lr = 0x7F2F9194u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F841Cu;
                return;
            }
            goto label_7F2F841C;
    }

label_7F2F9194:
    ctx->pc = 0x7F2F9194u;
    ctx->downcount -= 5;
    // 7F2F9194: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F2F9198:
    ctx->pc = 0x7F2F9198u;
    // 7F2F9198: addi    r4, r31, 92
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(92);

label_7F2F919C:
    ctx->pc = 0x7F2F919Cu;
    // 7F2F919C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2F91A0:
    ctx->pc = 0x7F2F91A0u;
    // 7F2F91A0: li      r6, 27
    ctx->gpr[6] = (u32)(s32)(27);

label_7F2F91A4:
    ctx->pc = 0x7F2F91A4u;
    // 7F2F91A4: bl      0x7F2F8584
    {
            ctx->lr = 0x7F2F91A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8584u;
                return;
            }
            goto label_7F2F8584;
    }

label_7F2F91A8:
    ctx->pc = 0x7F2F91A8u;
    ctx->downcount -= 5;
    // 7F2F91A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F91AC:
    ctx->pc = 0x7F2F91ACu;
    // 7F2F91AC: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F2F91B0:
    ctx->pc = 0x7F2F91B0u;
    // 7F2F91B0: stb     r0, 119(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(119);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2F91B4:
    ctx->pc = 0x7F2F91B4u;
    // 7F2F91B4: li      r4, 27
    ctx->gpr[4] = (u32)(s32)(27);

label_7F2F91B8:
    ctx->pc = 0x7F2F91B8u;
    // 7F2F91B8: bl      0x7F2F8648
    {
            ctx->lr = 0x7F2F91BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F8648u;
                return;
            }
            goto label_7F2F8648;
    }

label_7F2F91BC:
    ctx->pc = 0x7F2F91BCu;
    ctx->downcount -= 2;
    // 7F2F91BC: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F2F91C0:
    ctx->pc = 0x7F2F91C0u;
    // 7F2F91C0: bl      0x7F0208E4
    {
            ctx->lr = 0x7F2F91C4u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F2F91C4:
    ctx->pc = 0x7F2F91C4u;
    ctx->downcount -= 17;
    // 7F2F91C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F91C8:
    ctx->pc = 0x7F2F91C8u;
    // 7F2F91C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F91CC:
    ctx->pc = 0x7F2F91CCu;
    // 7F2F91CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F91D0:
    ctx->pc = 0x7F2F91D0u;
    // 7F2F91D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F91D4:
    ctx->pc = 0x7F2F91D4u;
    // 7F2F91D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F91D8:
    ctx->pc = 0x7F2F91D8u;
    // 7F2F91D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F91DC:
    ctx->pc = 0x7F2F91DCu;
    ctx->downcount -= 38;
    // 7F2F91DC: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F91E0:
    ctx->pc = 0x7F2F91E0u;
    // 7F2F91E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F91E4:
    ctx->pc = 0x7F2F91E4u;
    // 7F2F91E4: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F91E8:
    ctx->pc = 0x7F2F91E8u;
    // 7F2F91E8: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F91E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2F91EC:
    ctx->pc = 0x7F2F91ECu;
    // 7F2F91EC: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F91ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2F91ECu);
        if (ctx->exception) return;
    }

label_7F2F91F0:
    ctx->pc = 0x7F2F91F0u;
    // 7F2F91F0: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F91F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2F91F4:
    ctx->pc = 0x7F2F91F4u;
    // 7F2F91F4: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F91F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2F91F4u);
        if (ctx->exception) return;
    }

label_7F2F91F8:
    ctx->pc = 0x7F2F91F8u;
    // 7F2F91F8: stmw     r17, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F91FC:
    ctx->pc = 0x7F2F91FCu;
    // 7F2F91FC: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9200:
    ctx->pc = 0x7F2F9200u;
    // 7F2F9200: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F9204:
    ctx->pc = 0x7F2F9204u;
    // 7F2F9204: lwz     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9208:
    ctx->pc = 0x7F2F9208u;
    // 7F2F9208: addi    r4, r3, 31424
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2F920C:
    ctx->pc = 0x7F2F920Cu;
    // 7F2F920C: lwz     r29, 348(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(348);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2F9210:
    ctx->pc = 0x7F2F9210u;
    // 7F2F9210: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F9214:
    ctx->pc = 0x7F2F9214u;
    // 7F2F9214: lwz     r5, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9218:
    ctx->pc = 0x7F2F9218u;
    // 7F2F9218: addi    r17, r3, 12860
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F2F921C:
    ctx->pc = 0x7F2F921Cu;
    // 7F2F921C: lwz     r25, 344(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(344);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F2F9220:
    ctx->pc = 0x7F2F9220u;
    // 7F2F9220: or   r27, r29, r29
    {
        ctx->gpr[27] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2F9224:
    ctx->pc = 0x7F2F9224u;
    // 7F2F9224: lfs     f30, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9224u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2F9228:
    ctx->pc = 0x7F2F9228u;
    // 7F2F9228: addi    r26, r5, 96
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(96);

label_7F2F922C:
    ctx->pc = 0x7F2F922Cu;
    // 7F2F922C: rlwinm r21, r29, 4, 0, 27
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[29], 4u) & 0xFFFFFFF0u;
    }

label_7F2F9230:
    ctx->pc = 0x7F2F9230u;
    // 7F2F9230: rlwinm r22, r29, 6, 0, 25
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[29], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9234:
    ctx->pc = 0x7F2F9234u;
    // 7F2F9234: rlwinm r23, r29, 2, 0, 29
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F2F9238:
    ctx->pc = 0x7F2F9238u;
    // 7F2F9238: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2F923C:
    ctx->pc = 0x7F2F923Cu;
    // 7F2F923C: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2F9240:
    ctx->pc = 0x7F2F9240u;
    // 7F2F9240: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2F9244:
    ctx->pc = 0x7F2F9244u;
    // 7F2F9244: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2F9248:
    ctx->pc = 0x7F2F9248u;
    // 7F2F9248: b       0x7F2F9598
    {
            goto label_7F2F9598;
    }

label_7F2F924C:
    ctx->downcount -= 5;
    // 7F2F924C: add   r30, r26, r18
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F2F9250:
    // 7F2F9250: addi    r31, r28, -1
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(-1);

label_7F2F9254:
    ctx->pc = 0x7F2F9254u;
    // 7F2F9254: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9258:
    // 7F2F9258: cmpw    r31, r0
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

label_7F2F925C:
    // 7F2F925C: bc    12, 2, 0x7F2F93CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F93CC;
        }
    }

label_7F2F9260:
    ctx->pc = 0x7F2F9260u;
    ctx->downcount -= 38;
    // 7F2F9260: lwz     r6, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9264:
    // 7F2F9264: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2F9268:
    // 7F2F9268: addi    r3, r21, 12
    ctx->gpr[3] = ctx->gpr[21] + (u32)(s32)(12);

label_7F2F926C:
    // 7F2F926C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2F9270:
    ctx->pc = 0x7F2F9270u;
    // 7F2F9270: stwx    r4, r6, r3
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9274:
    // 7F2F9274: addi    r8, r5, 31424
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(31424);

label_7F2F9278:
    // 7F2F9278: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2F927C:
    // 7F2F927C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2F9280:
    ctx->pc = 0x7F2F9280u;
    // 7F2F9280: lwz     r9, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2F9284:
    // 7F2F9284: addi    r0, r21, 8
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(8);

label_7F2F9288:
    // 7F2F9288: addi    r7, r6, 31408
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(31408);

label_7F2F928C:
    // 7F2F928C: addi    r6, r5, 31428
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(31428);

label_7F2F9290:
    ctx->pc = 0x7F2F9290u;
    // 7F2F9290: stwx    r4, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9294:
    // 7F2F9294: addi    r9, r21, 4
    ctx->gpr[9] = ctx->gpr[21] + (u32)(s32)(4);

label_7F2F9298:
    ctx->pc = 0x7F2F9298u;
    // 7F2F9298: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9298u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2F929C:
    // 7F2F929C: rlwinm r5, r31, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F2F92A0:
    ctx->pc = 0x7F2F92A0u;
    // 7F2F92A0: lwz     r8, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2F92A4:
    ctx->pc = 0x7F2F92A4u;
    // 7F2F92A4: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2F92A4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F92A8:
    ctx->pc = 0x7F2F92A8u;
    // 7F2F92A8: stwx    r4, r8, r9
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F92AC:
    ctx->pc = 0x7F2F92ACu;
    // 7F2F92AC: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2F92ACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F92B0:
    ctx->pc = 0x7F2F92B0u;
    // 7F2F92B0: lwz     r6, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F92B4:
    ctx->pc = 0x7F2F92B4u;
    // 7F2F92B4: stwx    r4, r6, r21
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[21];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F92B8:
    ctx->pc = 0x7F2F92B8u;
    // 7F2F92B8: lwz     r4, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92BC:
    ctx->pc = 0x7F2F92BCu;
    // 7F2F92BC: stfsx    f2, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2F92BCu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2F92C0:
    ctx->pc = 0x7F2F92C0u;
    // 7F2F92C0: lwz     r4, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92C4:
    ctx->pc = 0x7F2F92C4u;
    // 7F2F92C4: stfsx    f1, r4, r21
    if (!ppc_fp_available_inline(ctx, 0x7F2F92C4u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[21];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F92C8:
    ctx->pc = 0x7F2F92C8u;
    // 7F2F92C8: lwz     r4, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92CC:
    ctx->pc = 0x7F2F92CCu;
    // 7F2F92CC: stfsx    f0, r4, r9
    if (!ppc_fp_available_inline(ctx, 0x7F2F92CCu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[9];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F92D0:
    ctx->pc = 0x7F2F92D0u;
    // 7F2F92D0: lwz     r4, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92D4:
    ctx->pc = 0x7F2F92D4u;
    // 7F2F92D4: stfsx    f1, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2F92D4u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F92D8:
    ctx->pc = 0x7F2F92D8u;
    // 7F2F92D8: lwz     r4, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92DC:
    ctx->pc = 0x7F2F92DCu;
    // 7F2F92DC: stfsx    f2, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2F92DCu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2F92E0:
    ctx->pc = 0x7F2F92E0u;
    // 7F2F92E0: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F92E4:
    ctx->pc = 0x7F2F92E4u;
    // 7F2F92E4: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F92E8:
    // 7F2F92E8: add   r3, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F92EC:
    // 7F2F92EC: add   r5, r4, r21
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F92F0:
    // 7F2F92F0: add   r4, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F92F4:
    // 7F2F92F4: bl      0x80025FD8
    {
            ctx->lr = 0x7F2F92F8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2F92F8:
    ctx->downcount -= 26;
    // 7F2F92F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F92FC:
    // 7F2F92FC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F9300:
    // 7F2F9300: addi    r5, r4, 31424
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(31424);

label_7F2F9304:
    ctx->pc = 0x7F2F9304u;
    // 7F2F9304: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9308:
    ctx->pc = 0x7F2F9308u;
    // 7F2F9308: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9308u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F930C:
    // 7F2F930C: addi    r9, r21, 12
    ctx->gpr[9] = ctx->gpr[21] + (u32)(s32)(12);

label_7F2F9310:
    // 7F2F9310: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F2F9314:
    // 7F2F9314: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2F9318:
    ctx->pc = 0x7F2F9318u;
    // 7F2F9318: stfsx    f0, r4, r9
    if (!ppc_fp_available_inline(ctx, 0x7F2F9318u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[9];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F931C:
    // 7F2F931C: addi    r6, r21, 8
    ctx->gpr[6] = ctx->gpr[21] + (u32)(s32)(8);

label_7F2F9320:
    // 7F2F9320: addi    r5, r21, 4
    ctx->gpr[5] = ctx->gpr[21] + (u32)(s32)(4);

label_7F2F9324:
    // 7F2F9324: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9328:
    ctx->pc = 0x7F2F9328u;
    // 7F2F9328: lwz     r7, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2F932C:
    // 7F2F932C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9330:
    ctx->pc = 0x7F2F9330u;
    // 7F2F9330: stwx    r8, r7, r9
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F9334:
    ctx->pc = 0x7F2F9334u;
    // 7F2F9334: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9338:
    ctx->pc = 0x7F2F9338u;
    // 7F2F9338: stwx    r8, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F933C:
    ctx->pc = 0x7F2F933Cu;
    // 7F2F933C: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9340:
    ctx->pc = 0x7F2F9340u;
    // 7F2F9340: stwx    r8, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F9344:
    ctx->pc = 0x7F2F9344u;
    // 7F2F9344: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9348:
    ctx->pc = 0x7F2F9348u;
    // 7F2F9348: stwx    r8, r3, r21
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[21];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F934C:
    ctx->pc = 0x7F2F934Cu;
    // 7F2F934C: lwz     r3, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9350:
    // 7F2F9350: add   r5, r3, r22
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9354:
    ctx->pc = 0x7F2F9354u;
    // 7F2F9354: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9358:
    // 7F2F9358: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F2F935C:
    loop_7F2F935C(ctx);
    if (ctx->pc == 0x7F2F9370u) goto label_7F2F9370;
    return;
label_7F2F9360:
    ctx->pc = 0x7F2F9360u;
    // 7F2F9360: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9364:
    ctx->pc = 0x7F2F9364u;
    // 7F2F9364: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9368:
    ctx->pc = 0x7F2F9368u;
    // 7F2F9368: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F936C:
    // 7F2F936C: bc    16, 0, 0x7F2F935C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F935Cu;
                return;
            }
            goto label_7F2F935C;
        }
    }

label_7F2F9370:
    ctx->pc = 0x7F2F9370u;
    ctx->downcount -= 23;
    // 7F2F9370: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9374:
    // 7F2F9374: addi    r3, r22, 48
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(48);

label_7F2F9378:
    ctx->pc = 0x7F2F9378u;
    // 7F2F9378: lwz     r6, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F937C:
    // 7F2F937C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F2F9380:
    // 7F2F9380: add   r5, r4, r21
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9384:
    // 7F2F9384: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2F9388:
    // 7F2F9388: add   r6, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F938C:
    ctx->pc = 0x7F2F938Cu;
    // 7F2F938C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9390:
    ctx->pc = 0x7F2F9390u;
    // 7F2F9390: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9394:
    // 7F2F9394: addi    r22, r22, 64
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(64);

label_7F2F9398:
    // 7F2F9398: addi    r21, r21, 16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(16);

label_7F2F939C:
    ctx->pc = 0x7F2F939Cu;
    // 7F2F939C: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F93A0:
    ctx->pc = 0x7F2F93A0u;
    // 7F2F93A0: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F93A4:
    ctx->pc = 0x7F2F93A4u;
    // 7F2F93A4: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F93A8:
    ctx->pc = 0x7F2F93A8u;
    // 7F2F93A8: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93AC:
    ctx->pc = 0x7F2F93ACu;
    // 7F2F93AC: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F93B0:
    ctx->pc = 0x7F2F93B0u;
    // 7F2F93B0: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F93B4:
    ctx->pc = 0x7F2F93B4u;
    // 7F2F93B4: lwz     r3, 380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93B8:
    ctx->pc = 0x7F2F93B8u;
    // 7F2F93B8: stwx    r31, r3, r23
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[23];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F93BC:
    ctx->pc = 0x7F2F93BCu;
    // 7F2F93BC: lwz     r3, 384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93C0:
    ctx->pc = 0x7F2F93C0u;
    // 7F2F93C0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F93C4:
    ctx->pc = 0x7F2F93C4u;
    // 7F2F93C4: stwx    r0, r3, r23
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[23];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F93C8:
    // 7F2F93C8: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F2F93CC:
    ctx->pc = 0x7F2F93CCu;
    ctx->downcount -= 28;
    // 7F2F93CC: lwz     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F93D0:
    // 7F2F93D0: addi    r5, r19, 12
    ctx->gpr[5] = ctx->gpr[19] + (u32)(s32)(12);

label_7F2F93D4:
    ctx->pc = 0x7F2F93D4u;
    // 7F2F93D4: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93D8:
    // 7F2F93D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F93DC:
    // 7F2F93DC: addi    r4, r19, 8
    ctx->gpr[4] = ctx->gpr[19] + (u32)(s32)(8);

label_7F2F93E0:
    // 7F2F93E0: addi    r0, r19, 4
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(4);

label_7F2F93E4:
    ctx->pc = 0x7F2F93E4u;
    // 7F2F93E4: stwx    r6, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F93E8:
    // 7F2F93E8: cmpw    r28, r25
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F93EC:
    ctx->pc = 0x7F2F93ECu;
    // 7F2F93EC: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93F0:
    ctx->pc = 0x7F2F93F0u;
    // 7F2F93F0: stwx    r6, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F93F4:
    ctx->pc = 0x7F2F93F4u;
    // 7F2F93F4: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F93F8:
    ctx->pc = 0x7F2F93F8u;
    // 7F2F93F8: stwx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F93FC:
    ctx->pc = 0x7F2F93FCu;
    // 7F2F93FC: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9400:
    ctx->pc = 0x7F2F9400u;
    // 7F2F9400: stwx    r6, r3, r19
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9404:
    ctx->pc = 0x7F2F9404u;
    // 7F2F9404: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9408:
    ctx->pc = 0x7F2F9408u;
    // 7F2F9408: stfsx    f30, r3, r5
    if (!ppc_fp_available_inline(ctx, 0x7F2F9408u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2F940C:
    ctx->pc = 0x7F2F940Cu;
    // 7F2F940C: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2F940Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9410:
    ctx->pc = 0x7F2F9410u;
    // 7F2F9410: lwz     r3, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9414:
    ctx->pc = 0x7F2F9414u;
    // 7F2F9414: stfsx    f0, r3, r19
    if (!ppc_fp_available_inline(ctx, 0x7F2F9414u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[19];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9418:
    ctx->pc = 0x7F2F9418u;
    // 7F2F9418: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9418u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F941C:
    ctx->pc = 0x7F2F941Cu;
    // 7F2F941C: lwz     r3, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9420:
    ctx->pc = 0x7F2F9420u;
    // 7F2F9420: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9420u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9424:
    ctx->pc = 0x7F2F9424u;
    // 7F2F9424: lfs     f0, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9424u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9428:
    ctx->pc = 0x7F2F9428u;
    // 7F2F9428: lwz     r3, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F942C:
    ctx->pc = 0x7F2F942Cu;
    // 7F2F942C: stfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x7F2F942Cu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9430:
    ctx->pc = 0x7F2F9430u;
    // 7F2F9430: lwz     r3, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9434:
    ctx->pc = 0x7F2F9434u;
    // 7F2F9434: stfsx    f30, r3, r5
    if (!ppc_fp_available_inline(ctx, 0x7F2F9434u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2F9438:
    // 7F2F9438: bc    4, 0, 0x7F2F94AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F94AC;
        }
    }

label_7F2F943C:
    ctx->downcount -= 4;
    // 7F2F943C: addi    r0, r20, 212
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(212);

label_7F2F9440:
    ctx->pc = 0x7F2F9440u;
    // 7F2F9440: lwzx    r5, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9444:
    // 7F2F9444: cmplwi  r5, 0x0000
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

label_7F2F9448:
    // 7F2F9448: bc    12, 2, 0x7F2F9478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9478;
        }
    }

label_7F2F944C:
    ctx->pc = 0x7F2F944Cu;
    ctx->downcount -= 11;
    // 7F2F944C: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9450:
    ctx->pc = 0x7F2F9450u;
    // 7F2F9450: lwz     r3, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9454:
    ctx->pc = 0x7F2F9454u;
    // 7F2F9454: lwz     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9458:
    // 7F2F9458: add   r4, r4, r19
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F945C:
    ctx->pc = 0x7F2F945Cu;
    // 7F2F945C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9460:
    ctx->pc = 0x7F2F9460u;
    // 7F2F9460: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9464:
    ctx->pc = 0x7F2F9464u;
    // 7F2F9464: lwz     r3, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9468:
    ctx->pc = 0x7F2F9468u;
    // 7F2F9468: lwz     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F946C:
    ctx->pc = 0x7F2F946Cu;
    // 7F2F946C: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9470:
    ctx->pc = 0x7F2F9470u;
    // 7F2F9470: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9474:
    // 7F2F9474: b       0x7F2F94A0
    {
            goto label_7F2F94A0;
    }

label_7F2F9478:
    ctx->pc = 0x7F2F9478u;
    ctx->downcount -= 10;
    // 7F2F9478: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F947C:
    ctx->pc = 0x7F2F947Cu;
    // 7F2F947C: lwz     r3, 196(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9480:
    ctx->pc = 0x7F2F9480u;
    // 7F2F9480: lwz     r0, 200(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9484:
    // 7F2F9484: add   r4, r4, r19
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9488:
    ctx->pc = 0x7F2F9488u;
    // 7F2F9488: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F948C:
    ctx->pc = 0x7F2F948Cu;
    // 7F2F948C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9490:
    ctx->pc = 0x7F2F9490u;
    // 7F2F9490: lwz     r3, 204(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9494:
    ctx->pc = 0x7F2F9494u;
    // 7F2F9494: lwz     r0, 208(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9498:
    ctx->pc = 0x7F2F9498u;
    // 7F2F9498: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F949C:
    ctx->pc = 0x7F2F949Cu;
    // 7F2F949C: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F94A0:
    ctx->pc = 0x7F2F94A0u;
    ctx->downcount -= 3;
    // 7F2F94A0: lwz     r3, 384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F94A4:
    ctx->pc = 0x7F2F94A4u;
    // 7F2F94A4: stwx    r28, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2F94A8:
    // 7F2F94A8: b       0x7F2F94F0
    {
            goto label_7F2F94F0;
    }

label_7F2F94AC:
    ctx->pc = 0x7F2F94ACu;
    ctx->downcount -= 7;
    // 7F2F94AC: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F94B0:
    // 7F2F94B0: rlwinm r3, r31, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F2F94B4:
    ctx->pc = 0x7F2F94B4u;
    // 7F2F94B4: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F94B8:
    // 7F2F94B8: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F94BC:
    // 7F2F94BC: add   r5, r4, r19
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F94C0:
    // 7F2F94C0: add   r4, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F94C4:
    // 7F2F94C4: bl      0x80025FD8
    {
            ctx->lr = 0x7F2F94C8u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2F94C8:
    ctx->downcount -= 10;
    // 7F2F94C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F94CC:
    ctx->pc = 0x7F2F94CCu;
    // 7F2F94CC: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F94D0:
    // 7F2F94D0: addi    r5, r3, 31424
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2F94D4:
    // 7F2F94D4: addi    r3, r19, 12
    ctx->gpr[3] = ctx->gpr[19] + (u32)(s32)(12);

label_7F2F94D8:
    ctx->pc = 0x7F2F94D8u;
    // 7F2F94D8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2F94D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F94DC:
    // 7F2F94DC: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F2F94E0:
    ctx->pc = 0x7F2F94E0u;
    // 7F2F94E0: stfsx    f0, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2F94E0u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F94E4:
    ctx->pc = 0x7F2F94E4u;
    // 7F2F94E4: lwz     r3, 384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F94E8:
    ctx->pc = 0x7F2F94E8u;
    // 7F2F94E8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F94EC:
    ctx->pc = 0x7F2F94ECu;
    // 7F2F94EC: stwx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F94F0:
    ctx->pc = 0x7F2F94F0u;
    ctx->downcount -= 19;
    // 7F2F94F0: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F94F4:
    // 7F2F94F4: addi    r0, r19, 12
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(12);

label_7F2F94F8:
    // 7F2F94F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2F94FC:
    // 7F2F94FC: addi    r5, r19, 8
    ctx->gpr[5] = ctx->gpr[19] + (u32)(s32)(8);

label_7F2F9500:
    ctx->pc = 0x7F2F9500u;
    // 7F2F9500: stwx    r7, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2F9504:
    // 7F2F9504: addi    r3, r19, 4
    ctx->gpr[3] = ctx->gpr[19] + (u32)(s32)(4);

label_7F2F9508:
    // 7F2F9508: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F950C:
    // 7F2F950C: addi    r4, r17, -4
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(-4);

label_7F2F9510:
    ctx->pc = 0x7F2F9510u;
    // 7F2F9510: lwz     r6, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9514:
    ctx->pc = 0x7F2F9514u;
    // 7F2F9514: stwx    r7, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2F9518:
    ctx->pc = 0x7F2F9518u;
    // 7F2F9518: lwz     r5, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F951C:
    ctx->pc = 0x7F2F951Cu;
    // 7F2F951C: stwx    r7, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2F9520:
    ctx->pc = 0x7F2F9520u;
    // 7F2F9520: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9524:
    ctx->pc = 0x7F2F9524u;
    // 7F2F9524: stwx    r7, r3, r19
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2F9528:
    ctx->pc = 0x7F2F9528u;
    // 7F2F9528: lwz     r3, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F952C:
    // 7F2F952C: add   r5, r3, r18
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9530:
    ctx->pc = 0x7F2F9530u;
    // 7F2F9530: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9534:
    // 7F2F9534: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F2F9538:
    loop_7F2F9538(ctx);
    if (ctx->pc == 0x7F2F954Cu) goto label_7F2F954C;
    return;
label_7F2F953C:
    ctx->pc = 0x7F2F953Cu;
    // 7F2F953C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9540:
    ctx->pc = 0x7F2F9540u;
    // 7F2F9540: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9544:
    ctx->pc = 0x7F2F9544u;
    // 7F2F9544: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9548:
    // 7F2F9548: bc    16, 0, 0x7F2F9538
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9538u;
                return;
            }
            goto label_7F2F9538;
        }
    }

label_7F2F954C:
    ctx->pc = 0x7F2F954Cu;
    ctx->downcount -= 19;
    // 7F2F954C: lwz     r3, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9550:
    // 7F2F9550: addi    r0, r18, 48
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(48);

label_7F2F9554:
    ctx->pc = 0x7F2F9554u;
    // 7F2F9554: lwz     r5, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9558:
    // 7F2F9558: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2F955C:
    // 7F2F955C: add   r4, r3, r19
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9560:
    // 7F2F9560: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F2F9564:
    // 7F2F9564: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9568:
    ctx->pc = 0x7F2F9568u;
    // 7F2F9568: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F956C:
    ctx->pc = 0x7F2F956Cu;
    // 7F2F956C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9570:
    // 7F2F9570: addi    r18, r18, 64
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(64);

label_7F2F9574:
    ctx->pc = 0x7F2F9574u;
    // 7F2F9574: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9578:
    ctx->pc = 0x7F2F9578u;
    // 7F2F9578: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F957C:
    ctx->pc = 0x7F2F957Cu;
    // 7F2F957C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9580:
    ctx->pc = 0x7F2F9580u;
    // 7F2F9580: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9584:
    ctx->pc = 0x7F2F9584u;
    // 7F2F9584: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9588:
    ctx->pc = 0x7F2F9588u;
    // 7F2F9588: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F958C:
    ctx->pc = 0x7F2F958Cu;
    // 7F2F958C: lwz     r3, 380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9590:
    ctx->pc = 0x7F2F9590u;
    // 7F2F9590: stwx    r31, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F9594:
    // 7F2F9594: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_7F2F9598:
    ctx->downcount -= 2;
    // 7F2F9598: cmpw    r28, r29
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F959C:
    // 7F2F959C: bc    12, 0, 0x7F2F924C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F924Cu;
                return;
            }
            goto label_7F2F924C;
        }
    }

label_7F2F95A0:
    ctx->pc = 0x7F2F95A0u;
    ctx->downcount -= 44;
    // 7F2F95A0: rlwinm r17, r27, 4, 0, 27
    {
        ctx->gpr[17] = dolrecomp_rotl32(ctx->gpr[27], 4u) & 0xFFFFFFF0u;
    }

label_7F2F95A4:
    ctx->pc = 0x7F2F95A4u;
    // 7F2F95A4: lwz     r3, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F95A8:
    ctx->pc = 0x7F2F95A8u;
    // 7F2F95A8: addi    r0, r17, 12
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(12);

label_7F2F95AC:
    ctx->pc = 0x7F2F95ACu;
    // 7F2F95AC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2F95B0:
    ctx->pc = 0x7F2F95B0u;
    // 7F2F95B0: stwx    r8, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F95B4:
    ctx->pc = 0x7F2F95B4u;
    // 7F2F95B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F95B8:
    ctx->pc = 0x7F2F95B8u;
    // 7F2F95B8: addi    r6, r3, 31424
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2F95BC:
    ctx->pc = 0x7F2F95BCu;
    // 7F2F95BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F95C0:
    ctx->pc = 0x7F2F95C0u;
    // 7F2F95C0: lwz     r4, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F95C4:
    ctx->pc = 0x7F2F95C4u;
    // 7F2F95C4: addi    r0, r17, 8
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(8);

label_7F2F95C8:
    ctx->pc = 0x7F2F95C8u;
    // 7F2F95C8: addi    r5, r3, 31408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31408);

label_7F2F95CC:
    ctx->pc = 0x7F2F95CCu;
    // 7F2F95CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F95D0:
    ctx->pc = 0x7F2F95D0u;
    // 7F2F95D0: stwx    r8, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F95D4:
    ctx->pc = 0x7F2F95D4u;
    // 7F2F95D4: addi    r4, r3, 31428
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31428);

label_7F2F95D8:
    ctx->pc = 0x7F2F95D8u;
    // 7F2F95D8: addi    r18, r28, -1
    ctx->gpr[18] = ctx->gpr[28] + (u32)(s32)(-1);

label_7F2F95DC:
    ctx->pc = 0x7F2F95DCu;
    // 7F2F95DC: addi    r0, r17, 4
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(4);

label_7F2F95E0:
    ctx->pc = 0x7F2F95E0u;
    // 7F2F95E0: lwz     r7, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2F95E4:
    ctx->pc = 0x7F2F95E4u;
    // 7F2F95E4: rlwinm r3, r18, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[18], 4u) & 0xFFFFFFF0u;
    }

label_7F2F95E8:
    ctx->pc = 0x7F2F95E8u;
    // 7F2F95E8: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2F95E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2F95EC:
    ctx->pc = 0x7F2F95ECu;
    // 7F2F95EC: stwx    r8, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F95F0:
    ctx->pc = 0x7F2F95F0u;
    // 7F2F95F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2F95F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F95F4:
    ctx->pc = 0x7F2F95F4u;
    // 7F2F95F4: lwz     r5, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F95F8:
    ctx->pc = 0x7F2F95F8u;
    // 7F2F95F8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F95F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F95FC:
    ctx->pc = 0x7F2F95FCu;
    // 7F2F95FC: stwx    r8, r5, r17
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[17];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2F9600:
    ctx->pc = 0x7F2F9600u;
    // 7F2F9600: lwz     r0, 368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9604:
    ctx->pc = 0x7F2F9604u;
    // 7F2F9604: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9608:
    ctx->pc = 0x7F2F9608u;
    // 7F2F9608: stfs     f2, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9608u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2F960C:
    ctx->pc = 0x7F2F960Cu;
    // 7F2F960C: lwz     r4, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9610:
    ctx->pc = 0x7F2F9610u;
    // 7F2F9610: stfsx    f1, r4, r17
    if (!ppc_fp_available_inline(ctx, 0x7F2F9610u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[17];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F9614:
    ctx->pc = 0x7F2F9614u;
    // 7F2F9614: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9618:
    ctx->pc = 0x7F2F9618u;
    // 7F2F9618: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F961C:
    ctx->pc = 0x7F2F961Cu;
    // 7F2F961C: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F961Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9620:
    ctx->pc = 0x7F2F9620u;
    // 7F2F9620: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9624:
    ctx->pc = 0x7F2F9624u;
    // 7F2F9624: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9628:
    ctx->pc = 0x7F2F9628u;
    // 7F2F9628: stfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9628u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F962C:
    ctx->pc = 0x7F2F962Cu;
    // 7F2F962C: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9630:
    ctx->pc = 0x7F2F9630u;
    // 7F2F9630: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9634:
    ctx->pc = 0x7F2F9634u;
    // 7F2F9634: stfs     f2, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9634u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2F9638:
    ctx->pc = 0x7F2F9638u;
    // 7F2F9638: lwz     r4, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F963C:
    ctx->pc = 0x7F2F963Cu;
    // 7F2F963C: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9640:
    ctx->pc = 0x7F2F9640u;
    // 7F2F9640: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F9644:
    ctx->pc = 0x7F2F9644u;
    // 7F2F9644: add   r5, r4, r17
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9648:
    ctx->pc = 0x7F2F9648u;
    // 7F2F9648: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F964C:
    ctx->pc = 0x7F2F964Cu;
    // 7F2F964C: bl      0x80025FD8
    {
            ctx->lr = 0x7F2F9650u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2F9650:
    ctx->pc = 0x7F2F9650u;
    ctx->downcount -= 28;
    // 7F2F9650: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F9654:
    ctx->pc = 0x7F2F9654u;
    // 7F2F9654: lwz     r0, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9658:
    ctx->pc = 0x7F2F9658u;
    // 7F2F9658: addi    r4, r3, 31424
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2F965C:
    ctx->pc = 0x7F2F965Cu;
    // 7F2F965C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2F9660:
    ctx->pc = 0x7F2F9660u;
    // 7F2F9660: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9660u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9664:
    ctx->pc = 0x7F2F9664u;
    // 7F2F9664: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9668:
    ctx->pc = 0x7F2F9668u;
    // 7F2F9668: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F2F966C:
    ctx->pc = 0x7F2F966Cu;
    // 7F2F966C: addi    r7, r17, 12
    ctx->gpr[7] = ctx->gpr[17] + (u32)(s32)(12);

label_7F2F9670:
    ctx->pc = 0x7F2F9670u;
    // 7F2F9670: stfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9670u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9674:
    ctx->pc = 0x7F2F9674u;
    // 7F2F9674: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2F9678:
    ctx->pc = 0x7F2F9678u;
    // 7F2F9678: addi    r6, r17, 8
    ctx->gpr[6] = ctx->gpr[17] + (u32)(s32)(8);

label_7F2F967C:
    ctx->pc = 0x7F2F967Cu;
    // 7F2F967C: addi    r5, r17, 4
    ctx->gpr[5] = ctx->gpr[17] + (u32)(s32)(4);

label_7F2F9680:
    ctx->pc = 0x7F2F9680u;
    // 7F2F9680: lwz     r8, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2F9684:
    ctx->pc = 0x7F2F9684u;
    // 7F2F9684: rlwinm r10, r27, 6, 0, 25
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[27], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9688:
    ctx->pc = 0x7F2F9688u;
    // 7F2F9688: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F968C:
    ctx->pc = 0x7F2F968Cu;
    // 7F2F968C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9690:
    ctx->pc = 0x7F2F9690u;
    // 7F2F9690: stwx    r9, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2F9694:
    ctx->pc = 0x7F2F9694u;
    // 7F2F9694: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9698:
    ctx->pc = 0x7F2F9698u;
    // 7F2F9698: stwx    r9, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2F969C:
    ctx->pc = 0x7F2F969Cu;
    // 7F2F969C: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F96A0:
    ctx->pc = 0x7F2F96A0u;
    // 7F2F96A0: stwx    r9, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2F96A4:
    ctx->pc = 0x7F2F96A4u;
    // 7F2F96A4: lwz     r3, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F96A8:
    ctx->pc = 0x7F2F96A8u;
    // 7F2F96A8: stwx    r9, r3, r17
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[17];
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2F96AC:
    ctx->pc = 0x7F2F96ACu;
    // 7F2F96AC: lwz     r3, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F96B0:
    ctx->pc = 0x7F2F96B0u;
    // 7F2F96B0: add   r5, r3, r10
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F96B4:
    ctx->pc = 0x7F2F96B4u;
    // 7F2F96B4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F96B8:
    ctx->pc = 0x7F2F96B8u;
    // 7F2F96B8: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F2F96BC:
    loop_7F2F96BC(ctx);
    if (ctx->pc == 0x7F2F96D0u) goto label_7F2F96D0;
    return;
label_7F2F96C0:
    ctx->pc = 0x7F2F96C0u;
    // 7F2F96C0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F96C4:
    ctx->pc = 0x7F2F96C4u;
    // 7F2F96C4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F96C8:
    ctx->pc = 0x7F2F96C8u;
    // 7F2F96C8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F96CC:
    // 7F2F96CC: bc    16, 0, 0x7F2F96BC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F96BCu;
                return;
            }
            goto label_7F2F96BC;
        }
    }

label_7F2F96D0:
    ctx->pc = 0x7F2F96D0u;
    ctx->downcount -= 26;
    // 7F2F96D0: lwz     r0, 356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F96D4:
    ctx->pc = 0x7F2F96D4u;
    // 7F2F96D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F96D8:
    ctx->pc = 0x7F2F96D8u;
    // 7F2F96D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F96DC:
    ctx->pc = 0x7F2F96DCu;
    // 7F2F96DC: lwz     r8, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2F96E0:
    ctx->pc = 0x7F2F96E0u;
    // 7F2F96E0: add   r6, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F96E4:
    ctx->pc = 0x7F2F96E4u;
    // 7F2F96E4: addi    r7, r10, 48
    ctx->gpr[7] = ctx->gpr[10] + (u32)(s32)(48);

label_7F2F96E8:
    ctx->pc = 0x7F2F96E8u;
    // 7F2F96E8: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F96EC:
    ctx->pc = 0x7F2F96ECu;
    // 7F2F96EC: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2F96F0:
    ctx->pc = 0x7F2F96F0u;
    // 7F2F96F0: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F96F4:
    ctx->pc = 0x7F2F96F4u;
    // 7F2F96F4: rlwinm r8, r27, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_7F2F96F8:
    ctx->pc = 0x7F2F96F8u;
    // 7F2F96F8: lfs     f30, 31432(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F96F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2F96FC:
    ctx->pc = 0x7F2F96FCu;
    // 7F2F96FC: or   r19, r29, r29
    {
        ctx->gpr[19] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2F9700:
    ctx->pc = 0x7F2F9700u;
    // 7F2F9700: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9704:
    ctx->pc = 0x7F2F9704u;
    // 7F2F9704: rlwinm r0, r18, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[18], 2u) & 0xFFFFFFFCu;
    }

label_7F2F9708:
    ctx->pc = 0x7F2F9708u;
    // 7F2F9708: lfs     f31, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9708u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2F970C:
    ctx->pc = 0x7F2F970Cu;
    // 7F2F970C: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F9710:
    ctx->pc = 0x7F2F9710u;
    // 7F2F9710: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9714:
    ctx->pc = 0x7F2F9714u;
    // 7F2F9714: lwz     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9718:
    ctx->pc = 0x7F2F9718u;
    // 7F2F9718: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F971C:
    ctx->pc = 0x7F2F971Cu;
    // 7F2F971C: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9720:
    ctx->pc = 0x7F2F9720u;
    // 7F2F9720: lwz     r3, 380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9724:
    ctx->pc = 0x7F2F9724u;
    // 7F2F9724: stwx    r18, r3, r8
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F2F9728:
    ctx->pc = 0x7F2F9728u;
    // 7F2F9728: lwz     r3, 384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F972C:
    ctx->pc = 0x7F2F972Cu;
    // 7F2F972C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9730:
    ctx->pc = 0x7F2F9730u;
    // 7F2F9730: stwx    r0, r3, r8
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9734:
    ctx->pc = 0x7F2F9734u;
    // 7F2F9734: b       0x7F2F9834
    {
            goto label_7F2F9834;
    }

label_7F2F9738:
    ctx->pc = 0x7F2F9738u;
    ctx->downcount -= 5;
    // 7F2F9738: stfs     f31, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9738u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2F973C:
    // 7F2F973C: or   r6, r19, r19
    {
        ctx->gpr[6] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F2F9740:
    ctx->pc = 0x7F2F9740u;
    // 7F2F9740: stfs     f31, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9740u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2F9744:
    ctx->pc = 0x7F2F9744u;
    // 7F2F9744: stfs     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2F9748:
    // 7F2F9748: b       0x7F2F9828
    {
            goto label_7F2F9828;
    }

label_7F2F974C:
    ctx->pc = 0x7F2F974Cu;
    ctx->downcount -= 20;
    // 7F2F974C: lwz     r0, 376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9750:
    // 7F2F9750: rlwinm r17, r6, 4, 0, 27
    {
        ctx->gpr[17] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F2F9754:
    ctx->pc = 0x7F2F9754u;
    // 7F2F9754: lwz     r5, 380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(380);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9758:
    // 7F2F9758: rlwinm r3, r6, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F2F975C:
    // 7F2F975C: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9760:
    ctx->pc = 0x7F2F9760u;
    // 7F2F9760: lfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9764:
    ctx->pc = 0x7F2F9764u;
    // 7F2F9764: lwzx    r18, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2F9768:
    ctx->pc = 0x7F2F9768u;
    // 7F2F9768: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F976C:
    ctx->pc = 0x7F2F976Cu;
    // 7F2F976C: fadds   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2F976Cu)) return;
    ppc_fadds(ctx, 1, 0, 30);

label_7F2F9770:
    ctx->pc = 0x7F2F9770u;
    // 7F2F9770: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9774:
    ctx->pc = 0x7F2F9774u;
    // 7F2F9774: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9778:
    ctx->pc = 0x7F2F9778u;
    // 7F2F9778: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F977C:
    ctx->pc = 0x7F2F977Cu;
    // 7F2F977C: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F977Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9780:
    ctx->pc = 0x7F2F9780u;
    // 7F2F9780: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9784:
    ctx->pc = 0x7F2F9784u;
    // 7F2F9784: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9788:
    ctx->pc = 0x7F2F9788u;
    // 7F2F9788: fcmpu   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9788u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], false);

label_7F2F978C:
    ctx->pc = 0x7F2F978Cu;
    // 7F2F978C: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F978Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F9790:
    ctx->pc = 0x7F2F9790u;
    // 7F2F9790: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9794:
    ctx->pc = 0x7F2F9794u;
    // 7F2F9794: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9798:
    // 7F2F9798: bc    4, 2, 0x7F2F97A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F97A8;
        }
    }

label_7F2F979C:
    ctx->downcount -= 3;
    // 7F2F979C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F97A0:
    ctx->pc = 0x7F2F97A0u;
    // 7F2F97A0: lfs     f0, 31436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F97A4:
    ctx->pc = 0x7F2F97A4u;
    // 7F2F97A4: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F97A8:
    ctx->pc = 0x7F2F97A8u;
    ctx->downcount -= 22;
    // 7F2F97A8: lfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F97AC:
    // 7F2F97AC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2F97B0:
    ctx->pc = 0x7F2F97B0u;
    // 7F2F97B0: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F97B4:
    // 7F2F97B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F97B8:
    ctx->pc = 0x7F2F97B8u;
    // 7F2F97B8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F97B8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2F97BC:
    // 7F2F97BC: bl      0x80026020
    {
            ctx->lr = 0x7F2F97C0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2F97C0:
    ctx->pc = 0x7F2F97C0u;
    ctx->downcount -= 26;
    // 7F2F97C0: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F97C4:
    // 7F2F97C4: addi    r4, r17, 4
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(4);

label_7F2F97C8:
    ctx->pc = 0x7F2F97C8u;
    // 7F2F97C8: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F97CC:
    // 7F2F97CC: addi    r3, r17, 8
    ctx->gpr[3] = ctx->gpr[17] + (u32)(s32)(8);

label_7F2F97D0:
    ctx->pc = 0x7F2F97D0u;
    // 7F2F97D0: lwz     r5, 364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(364);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F97D4:
    // 7F2F97D4: addi    r0, r17, 12
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(12);

label_7F2F97D8:
    ctx->pc = 0x7F2F97D8u;
    // 7F2F97D8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F97D8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F2F97DC:
    ctx->pc = 0x7F2F97DCu;
    // 7F2F97DC: lfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F97E0:
    // 7F2F97E0: or   r6, r18, r18
    {
        ctx->gpr[6] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F2F97E4:
    ctx->pc = 0x7F2F97E4u;
    // 7F2F97E4: stfsx    f1, r5, r17
    if (!ppc_fp_available_inline(ctx, 0x7F2F97E4u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[17];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F97E8:
    ctx->pc = 0x7F2F97E8u;
    // 7F2F97E8: lwz     r5, 364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(364);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F97EC:
    ctx->pc = 0x7F2F97ECu;
    // 7F2F97EC: stfsx    f31, r5, r4
    if (!ppc_fp_available_inline(ctx, 0x7F2F97ECu)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2F97F0:
    ctx->pc = 0x7F2F97F0u;
    // 7F2F97F0: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F97F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F97F4:
    ctx->pc = 0x7F2F97F4u;
    // 7F2F97F4: lwz     r4, 364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F97F8:
    ctx->pc = 0x7F2F97F8u;
    // 7F2F97F8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F97F8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2F97FC:
    ctx->pc = 0x7F2F97FCu;
    // 7F2F97FC: stfsx    f0, r4, r3
    if (!ppc_fp_available_inline(ctx, 0x7F2F97FCu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9800:
    ctx->pc = 0x7F2F9800u;
    // 7F2F9800: lwz     r3, 364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9804:
    ctx->pc = 0x7F2F9804u;
    // 7F2F9804: stfsx    f31, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9804u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2F9808:
    ctx->pc = 0x7F2F9808u;
    // 7F2F9808: lwz     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F980C:
    ctx->pc = 0x7F2F980Cu;
    // 7F2F980C: lwz     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9810:
    ctx->pc = 0x7F2F9810u;
    // 7F2F9810: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9814:
    ctx->pc = 0x7F2F9814u;
    // 7F2F9814: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9818:
    ctx->pc = 0x7F2F9818u;
    // 7F2F9818: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F981C:
    ctx->pc = 0x7F2F981Cu;
    // 7F2F981C: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9820:
    ctx->pc = 0x7F2F9820u;
    // 7F2F9820: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9824:
    ctx->pc = 0x7F2F9824u;
    // 7F2F9824: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9828:
    ctx->downcount -= 2;
    // 7F2F9828: cmpwi   r6, 0
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

label_7F2F982C:
    // 7F2F982C: bc    4, 0, 0x7F2F974C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F974Cu;
                return;
            }
            goto label_7F2F974C;
        }
    }

label_7F2F9830:
    ctx->downcount -= 1;
    // 7F2F9830: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F2F9834:
    ctx->pc = 0x7F2F9834u;
    ctx->downcount -= 3;
    // 7F2F9834: lwz     r0, 352(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9838:
    // 7F2F9838: cmpw    r19, r0
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

label_7F2F983C:
    // 7F2F983C: bc    12, 0, 0x7F2F9738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9738u;
                return;
            }
            goto label_7F2F9738;
        }
    }

label_7F2F9840:
    ctx->pc = 0x7F2F9840u;
    ctx->downcount -= 3;
    // 7F2F9840: lwz     r0, 276(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9844:
    ctx->pc = 0x7F2F9844u;
    // 7F2F9844: cmplwi  r0, 0x0000
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

label_7F2F9848:
    ctx->pc = 0x7F2F9848u;
    // 7F2F9848: bc    4, 2, 0x7F2F9A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9A28;
        }
    }

label_7F2F984C:
    ctx->pc = 0x7F2F984Cu;
    ctx->downcount -= 6;
    // 7F2F984C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2F9850:
    ctx->pc = 0x7F2F9850u;
    // 7F2F9850: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2F9854:
    ctx->pc = 0x7F2F9854u;
    // 7F2F9854: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2F9858:
    ctx->pc = 0x7F2F9858u;
    // 7F2F9858: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2F985C:
    ctx->pc = 0x7F2F985Cu;
    // 7F2F985C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F2F9860:
    ctx->pc = 0x7F2F9860u;
    // 7F2F9860: b       0x7F2F9A1C
    {
            goto label_7F2F9A1C;
    }

label_7F2F9864:
    ctx->pc = 0x7F2F9864u;
    ctx->downcount -= 4;
    // 7F2F9864: lwz     r3, 380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9868:
    ctx->pc = 0x7F2F9868u;
    // 7F2F9868: lwzx    r18, r3, r22
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[22];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2F986C:
    // 7F2F986C: cmpwi   r18, -1
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9870:
    // 7F2F9870: bc    12, 2, 0x7F2F9A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9A08;
        }
    }

label_7F2F9874:
    ctx->downcount -= 7;
    // 7F2F9874: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F9878:
    // 7F2F9878: add   r23, r26, r21
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F2F987C:
    ctx->pc = 0x7F2F987Cu;
    // 7F2F987C: lfs     f1, 8(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F2F987Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F9880:
    ctx->pc = 0x7F2F9880u;
    // 7F2F9880: lfs     f0, 31440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9880u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9884:
    ctx->pc = 0x7F2F9884u;
    // 7F2F9884: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9884u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F2F9888:
    ctx->pc = 0x7F2F9888u;
    // 7F2F9888: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F988C:
    // 7F2F988C: bl      0x7F2F9A4C
    {
            ctx->lr = 0x7F2F9890u;
            goto label_7F2F9A4C;
    }

label_7F2F9890:
    ctx->pc = 0x7F2F9890u;
    ctx->downcount -= 7;
    // 7F2F9890: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F9894:
    // 7F2F9894: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F9898:
    ctx->pc = 0x7F2F9898u;
    // 7F2F9898: lfs     f0, 31440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F989C:
    ctx->pc = 0x7F2F989Cu;
    // 7F2F989C: lfs     f1, 12(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F2F989Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F98A0:
    ctx->pc = 0x7F2F98A0u;
    // 7F2F98A0: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F98A0u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F2F98A4:
    ctx->pc = 0x7F2F98A4u;
    // 7F2F98A4: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F98A8:
    // 7F2F98A8: bl      0x7F2F9A4C
    {
            ctx->lr = 0x7F2F98ACu;
            goto label_7F2F9A4C;
    }

label_7F2F98AC:
    ctx->pc = 0x7F2F98ACu;
    ctx->downcount -= 7;
    // 7F2F98AC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F98B0:
    // 7F2F98B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F98B4:
    ctx->pc = 0x7F2F98B4u;
    // 7F2F98B4: lfs     f0, 31440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F98B8:
    ctx->pc = 0x7F2F98B8u;
    // 7F2F98B8: lfs     f1, 16(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98B8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F98BC:
    ctx->pc = 0x7F2F98BCu;
    // 7F2F98BC: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F98BCu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F2F98C0:
    ctx->pc = 0x7F2F98C0u;
    // 7F2F98C0: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F98C4:
    // 7F2F98C4: bl      0x7F2F9A4C
    {
            ctx->lr = 0x7F2F98C8u;
            goto label_7F2F9A4C;
    }

label_7F2F98C8:
    ctx->pc = 0x7F2F98C8u;
    ctx->downcount -= 14;
    // 7F2F98C8: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F98CC:
    // 7F2F98CC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2F98D0:
    // 7F2F98D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F98D4:
    ctx->pc = 0x7F2F98D4u;
    // 7F2F98D4: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2F98D8:
    ctx->pc = 0x7F2F98D8u;
    // 7F2F98D8: lwz     r5, 408(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(408);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F98DC:
    // 7F2F98DC: addi    r4, r3, 31416
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31416);

label_7F2F98E0:
    ctx->pc = 0x7F2F98E0u;
    // 7F2F98E0: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F98E4:
    // 7F2F98E4: xoris   r3, r5, 0x8000
    ctx->gpr[3] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F2F98E8:
    ctx->pc = 0x7F2F98E8u;
    // 7F2F98E8: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F98EC:
    ctx->pc = 0x7F2F98ECu;
    // 7F2F98EC: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F98F0:
    ctx->pc = 0x7F2F98F0u;
    // 7F2F98F0: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F98F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F98F4:
    ctx->pc = 0x7F2F98F4u;
    // 7F2F98F4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F98F4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F98F8:
    ctx->pc = 0x7F2F98F8u;
    // 7F2F98F8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F98F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2F98FC:
    // 7F2F98FC: bc    4, 0, 0x7F2F9914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9914;
        }
    }

label_7F2F9900:
    ctx->pc = 0x7F2F9900u;
    ctx->downcount -= 5;
    // 7F2F9900: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9904:
    ctx->pc = 0x7F2F9904u;
    // 7F2F9904: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9908:
    ctx->pc = 0x7F2F9908u;
    // 7F2F9908: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F990C:
    ctx->pc = 0x7F2F990Cu;
    // 7F2F990C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F990Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F9910:
    ctx->pc = 0x7F2F9910u;
    // 7F2F9910: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9914:
    ctx->pc = 0x7F2F9914u;
    ctx->downcount -= 12;
    // 7F2F9914: lwz     r3, 408(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9918:
    // 7F2F9918: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2F991C:
    // 7F2F991C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F9920:
    ctx->pc = 0x7F2F9920u;
    // 7F2F9920: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9924:
    // 7F2F9924: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2F9928:
    ctx->pc = 0x7F2F9928u;
    // 7F2F9928: lfd     f1, 31416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9928u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31416);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F992C:
    ctx->pc = 0x7F2F992Cu;
    // 7F2F992C: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9930:
    ctx->pc = 0x7F2F9930u;
    // 7F2F9930: lfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2F9934:
    ctx->pc = 0x7F2F9934u;
    // 7F2F9934: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9934u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9938:
    ctx->pc = 0x7F2F9938u;
    // 7F2F9938: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F9938u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F993C:
    ctx->pc = 0x7F2F993Cu;
    // 7F2F993C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F993Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2F9940:
    // 7F2F9940: bc    4, 0, 0x7F2F9958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9958;
        }
    }

label_7F2F9944:
    ctx->pc = 0x7F2F9944u;
    ctx->downcount -= 5;
    // 7F2F9944: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9948:
    ctx->pc = 0x7F2F9948u;
    // 7F2F9948: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F994C:
    ctx->pc = 0x7F2F994Cu;
    // 7F2F994C: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F994Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9950:
    ctx->pc = 0x7F2F9950u;
    // 7F2F9950: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F9950u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F9954:
    ctx->pc = 0x7F2F9954u;
    // 7F2F9954: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9954u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9958:
    ctx->pc = 0x7F2F9958u;
    ctx->downcount -= 12;
    // 7F2F9958: lwz     r3, 408(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F995C:
    // 7F2F995C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2F9960:
    // 7F2F9960: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F9964:
    ctx->pc = 0x7F2F9964u;
    // 7F2F9964: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9968:
    // 7F2F9968: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2F996C:
    ctx->pc = 0x7F2F996Cu;
    // 7F2F996C: lfd     f1, 31416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F996Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31416);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9970:
    ctx->pc = 0x7F2F9970u;
    // 7F2F9970: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9974:
    ctx->pc = 0x7F2F9974u;
    // 7F2F9974: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2F9978:
    ctx->pc = 0x7F2F9978u;
    // 7F2F9978: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F997C:
    ctx->pc = 0x7F2F997Cu;
    // 7F2F997C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F997Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F9980:
    ctx->pc = 0x7F2F9980u;
    // 7F2F9980: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9980u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2F9984:
    // 7F2F9984: bc    4, 0, 0x7F2F999C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F999C;
        }
    }

label_7F2F9988:
    ctx->pc = 0x7F2F9988u;
    ctx->downcount -= 5;
    // 7F2F9988: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F998C:
    ctx->pc = 0x7F2F998Cu;
    // 7F2F998C: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9990:
    ctx->pc = 0x7F2F9990u;
    // 7F2F9990: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9994:
    ctx->pc = 0x7F2F9994u;
    // 7F2F9994: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2F9994u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2F9998:
    ctx->pc = 0x7F2F9998u;
    // 7F2F9998: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F999C:
    ctx->pc = 0x7F2F999Cu;
    ctx->downcount -= 9;
    // 7F2F999C: lwz     r0, 500(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F99A0:
    // 7F2F99A0: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_7F2F99A4:
    // 7F2F99A4: addi    r4, r3, 20485
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20485);

label_7F2F99A8:
    // 7F2F99A8: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2F99AC:
    // 7F2F99AC: add   r3, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F99B0:
    // 7F2F99B0: addi    r8, r1, 24
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2F99B4:
    // 7F2F99B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2F99B8:
    // 7F2F99B8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F2F99BC:
    // 7F2F99BC: bl      0x7F014788
    {
            ctx->lr = 0x7F2F99C0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2F99C0:
    ctx->downcount -= 8;
    // 7F2F99C0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2F99C4:
    ctx->pc = 0x7F2F99C4u;
    // 7F2F99C4: lwz     r6, 500(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(500);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F99C8:
    ctx->pc = 0x7F2F99C8u;
    // 7F2F99C8: lwz     r5, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F99CC:
    // 7F2F99CC: rlwinm r0, r18, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[18], 6u) & 0xFFFFFFC0u;
    }

label_7F2F99D0:
    ctx->pc = 0x7F2F99D0u;
    // 7F2F99D0: lwz     r4, 372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F99D4:
    // 7F2F99D4: add   r3, r6, r20
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F99D8:
    // 7F2F99D8: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F99DC:
    // 7F2F99DC: bl      0x7F014964
    {
            ctx->lr = 0x7F2F99E0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F2F99E0:
    ctx->pc = 0x7F2F99E0u;
    ctx->downcount -= 7;
    // 7F2F99E0: lwz     r5, 500(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(500);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F99E4:
    // 7F2F99E4: lis     r3, 32560
    ctx->gpr[3] = ((u32)(s32)(32560) << 16);

label_7F2F99E8:
    ctx->pc = 0x7F2F99E8u;
    // 7F2F99E8: lwz     r0, 360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F99EC:
    // 7F2F99EC: addi    r4, r3, 24292
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24292);

label_7F2F99F0:
    // 7F2F99F0: add   r3, r5, r20
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F99F4:
    // 7F2F99F4: add   r5, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F99F8:
    // 7F2F99F8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2F99FCu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2F99FC:
    ctx->pc = 0x7F2F99FCu;
    ctx->downcount -= 3;
    // 7F2F99FC: lwz     r0, 500(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9A00:
    // 7F2F9A00: add   r3, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F9A04:
    // 7F2F9A04: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2F9A08u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2F9A08:
    ctx->downcount -= 5;
    // 7F2F9A08: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2F9A0C:
    // 7F2F9A0C: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F2F9A10:
    // 7F2F9A10: addi    r20, r20, 192
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(192);

label_7F2F9A14:
    // 7F2F9A14: addi    r21, r21, 64
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(64);

label_7F2F9A18:
    // 7F2F9A18: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F2F9A1C:
    ctx->pc = 0x7F2F9A1Cu;
    ctx->downcount -= 3;
    // 7F2F9A1C: lwz     r0, 352(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9A20:
    // 7F2F9A20: cmpw    r17, r0
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9A24:
    // 7F2F9A24: bc    12, 0, 0x7F2F9864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9864u;
                return;
            }
            goto label_7F2F9864;
        }
    }

label_7F2F9A28:
    ctx->pc = 0x7F2F9A28u;
    ctx->downcount -= 20;
    // 7F2F9A28: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2F9A28u);
        if (ctx->exception) return;
    }

label_7F2F9A2C:
    ctx->pc = 0x7F2F9A2Cu;
    // 7F2F9A2C: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9A30:
    ctx->pc = 0x7F2F9A30u;
    // 7F2F9A30: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2F9A30u);
        if (ctx->exception) return;
    }

label_7F2F9A34:
    ctx->pc = 0x7F2F9A34u;
    // 7F2F9A34: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2F9A38:
    ctx->pc = 0x7F2F9A38u;
    // 7F2F9A38: lmw     r17, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F9A3C:
    ctx->pc = 0x7F2F9A3Cu;
    // 7F2F9A3C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9A40:
    ctx->pc = 0x7F2F9A40u;
    // 7F2F9A40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F9A44:
    ctx->pc = 0x7F2F9A44u;
    // 7F2F9A44: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F2F9A48:
    ctx->pc = 0x7F2F9A48u;
    // 7F2F9A48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F9A4C:
    ctx->pc = 0x7F2F9A4Cu;
    ctx->downcount -= 8;
    // 7F2F9A4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F9A50:
    ctx->pc = 0x7F2F9A50u;
    // 7F2F9A50: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2F9A54:
    ctx->pc = 0x7F2F9A54u;
    // 7F2F9A54: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9A58:
    ctx->pc = 0x7F2F9A58u;
    // 7F2F9A58: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F2F9A5C:
    ctx->pc = 0x7F2F9A5Cu;
    // 7F2F9A5C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9A60:
    ctx->pc = 0x7F2F9A60u;
    // 7F2F9A60: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2F9A64:
    ctx->pc = 0x7F2F9A64u;
    // 7F2F9A64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2F9A68:
    ctx->pc = 0x7F2F9A68u;
    // 7F2F9A68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F9A6C:
    ctx->pc = 0x7F2F9A6Cu;
    ctx->downcount -= 18;
    // 7F2F9A6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F9A70:
    ctx->pc = 0x7F2F9A70u;
    // 7F2F9A70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F9A74:
    ctx->pc = 0x7F2F9A74u;
    // 7F2F9A74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9A78:
    ctx->pc = 0x7F2F9A78u;
    // 7F2F9A78: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F9A7C:
    ctx->pc = 0x7F2F9A7Cu;
    // 7F2F9A7C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9A80:
    ctx->pc = 0x7F2F9A80u;
    // 7F2F9A80: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2F9A84:
    ctx->pc = 0x7F2F9A84u;
    // 7F2F9A84: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2F9A88:
    ctx->pc = 0x7F2F9A88u;
    // 7F2F9A88: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2F9A8Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2F9A8C:
    ctx->pc = 0x7F2F9A8Cu;
    ctx->downcount -= 1;
    // 7F2F9A8C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2F9A90u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2F9A90:
    ctx->pc = 0x7F2F9A90u;
    ctx->downcount -= 2;
    // 7F2F9A90: cmplwi  r3, 0x0000
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

label_7F2F9A94:
    ctx->pc = 0x7F2F9A94u;
    // 7F2F9A94: bc    4, 2, 0x7F2F9AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9AA0;
        }
    }

label_7F2F9A98:
    ctx->pc = 0x7F2F9A98u;
    ctx->downcount -= 2;
    // 7F2F9A98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F9A9C:
    ctx->pc = 0x7F2F9A9Cu;
    // 7F2F9A9C: b       0x7F2F9C14
    {
            goto label_7F2F9C14;
    }

label_7F2F9AA0:
    ctx->pc = 0x7F2F9AA0u;
    ctx->downcount -= 8;
    // 7F2F9AA0: lha     r31, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[31] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F9AA4:
    ctx->pc = 0x7F2F9AA4u;
    // 7F2F9AA4: addi    r5, r3, 96
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(96);

label_7F2F9AA8:
    ctx->pc = 0x7F2F9AA8u;
    // 7F2F9AA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2F9AAC:
    ctx->pc = 0x7F2F9AACu;
    // 7F2F9AAC: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2F9AB0:
    ctx->pc = 0x7F2F9AB0u;
    // 7F2F9AB0: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_7F2F9AB4:
    ctx->pc = 0x7F2F9AB4u;
    // 7F2F9AB4: cmpwi   r31, 0
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

label_7F2F9AB8:
    ctx->pc = 0x7F2F9AB8u;
    // 7F2F9AB8: bc    4, 1, 0x7F2F9ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9ADC;
        }
    }

label_7F2F9ABC:
    ctx->pc = 0x7F2F9ABCu;
    ctx->downcount -= 4;
    // 7F2F9ABC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9AC0:
    // 7F2F9AC0: addi    r4, r6, -1
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F2F9AC4:
    // 7F2F9AC4: cmpw    r4, r0
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

label_7F2F9AC8:
    // 7F2F9AC8: bc    12, 2, 0x7F2F9AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9AD0;
        }
    }

label_7F2F9ACC:
    ctx->downcount -= 1;
    // 7F2F9ACC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9AD0:
    ctx->downcount -= 3;
    // 7F2F9AD0: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F2F9AD4:
    // 7F2F9AD4: addi    r5, r5, 64
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(64);

label_7F2F9AD8:
    // 7F2F9AD8: bc    16, 0, 0x7F2F9ABC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9ABCu;
                return;
            }
            goto label_7F2F9ABC;
        }
    }

label_7F2F9ADC:
    ctx->pc = 0x7F2F9ADCu;
    ctx->downcount -= 3;
    // 7F2F9ADC: li      r4, 2338
    ctx->gpr[4] = (u32)(s32)(2338);

label_7F2F9AE0:
    ctx->pc = 0x7F2F9AE0u;
    // 7F2F9AE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2F9AE4:
    ctx->pc = 0x7F2F9AE4u;
    // 7F2F9AE4: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F2F9AE8u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F2F9AE8:
    ctx->pc = 0x7F2F9AE8u;
    ctx->downcount -= 3;
    // 7F2F9AE8: cmplwi  r3, 0x0000
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

label_7F2F9AEC:
    ctx->pc = 0x7F2F9AECu;
    // 7F2F9AEC: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9AF0:
    ctx->pc = 0x7F2F9AF0u;
    // 7F2F9AF0: bc    4, 2, 0x7F2F9AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9AFC;
        }
    }

label_7F2F9AF4:
    ctx->pc = 0x7F2F9AF4u;
    ctx->downcount -= 2;
    // 7F2F9AF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F9AF8:
    ctx->pc = 0x7F2F9AF8u;
    // 7F2F9AF8: b       0x7F2F9C14
    {
            goto label_7F2F9C14;
    }

label_7F2F9AFC:
    ctx->pc = 0x7F2F9AFCu;
    ctx->downcount -= 2;
    // 7F2F9AFC: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9B00:
    ctx->pc = 0x7F2F9B00u;
    // 7F2F9B00: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F2F9B04u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F2F9B04:
    ctx->pc = 0x7F2F9B04u;
    ctx->downcount -= 3;
    // 7F2F9B04: lwz     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B08:
    ctx->pc = 0x7F2F9B08u;
    // 7F2F9B08: cmplwi  r0, 0x0000
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

label_7F2F9B0C:
    ctx->pc = 0x7F2F9B0Cu;
    // 7F2F9B0C: bc    4, 2, 0x7F2F9B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9B30;
        }
    }

label_7F2F9B10:
    ctx->pc = 0x7F2F9B10u;
    ctx->downcount -= 5;
    // 7F2F9B10: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9B14:
    ctx->pc = 0x7F2F9B14u;
    // 7F2F9B14: mulli   r3, r0, 344
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)344);

label_7F2F9B18:
    ctx->pc = 0x7F2F9B18u;
    // 7F2F9B18: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2F9B1Cu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2F9B1C:
    ctx->pc = 0x7F2F9B1Cu;
    ctx->downcount -= 3;
    // 7F2F9B1C: cmplwi  r3, 0x0000
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

label_7F2F9B20:
    ctx->pc = 0x7F2F9B20u;
    // 7F2F9B20: stw     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9B24:
    ctx->pc = 0x7F2F9B24u;
    // 7F2F9B24: bc    4, 2, 0x7F2F9B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9B50;
        }
    }

label_7F2F9B28:
    ctx->pc = 0x7F2F9B28u;
    ctx->downcount -= 2;
    // 7F2F9B28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F9B2C:
    ctx->pc = 0x7F2F9B2Cu;
    // 7F2F9B2C: b       0x7F2F9C14
    {
            goto label_7F2F9C14;
    }

label_7F2F9B30:
    ctx->pc = 0x7F2F9B30u;
    ctx->downcount -= 5;
    // 7F2F9B30: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9B34:
    ctx->pc = 0x7F2F9B34u;
    // 7F2F9B34: mulli   r3, r0, 152
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)152);

label_7F2F9B38:
    ctx->pc = 0x7F2F9B38u;
    // 7F2F9B38: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2F9B3Cu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2F9B3C:
    ctx->pc = 0x7F2F9B3Cu;
    ctx->downcount -= 3;
    // 7F2F9B3C: cmplwi  r3, 0x0000
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

label_7F2F9B40:
    ctx->pc = 0x7F2F9B40u;
    // 7F2F9B40: stw     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9B44:
    ctx->pc = 0x7F2F9B44u;
    // 7F2F9B44: bc    4, 2, 0x7F2F9B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9B50;
        }
    }

label_7F2F9B48:
    ctx->pc = 0x7F2F9B48u;
    ctx->downcount -= 2;
    // 7F2F9B48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2F9B4C:
    ctx->pc = 0x7F2F9B4Cu;
    // 7F2F9B4C: b       0x7F2F9C14
    {
            goto label_7F2F9C14;
    }

label_7F2F9B50:
    ctx->pc = 0x7F2F9B50u;
    ctx->downcount -= 20;
    // 7F2F9B50: addi    r6, r30, 1
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9B54:
    ctx->pc = 0x7F2F9B54u;
    // 7F2F9B54: lwz     r0, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B58:
    ctx->pc = 0x7F2F9B58u;
    // 7F2F9B58: rlwinm r3, r6, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F2F9B5C:
    ctx->pc = 0x7F2F9B5Cu;
    // 7F2F9B5C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9B60:
    ctx->pc = 0x7F2F9B60u;
    // 7F2F9B60: stw     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9B64:
    ctx->pc = 0x7F2F9B64u;
    // 7F2F9B64: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B68:
    ctx->pc = 0x7F2F9B68u;
    // 7F2F9B68: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9B6C:
    ctx->pc = 0x7F2F9B6Cu;
    // 7F2F9B6C: stw     r0, 364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9B70:
    ctx->pc = 0x7F2F9B70u;
    // 7F2F9B70: lwz     r0, 364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B74:
    ctx->pc = 0x7F2F9B74u;
    // 7F2F9B74: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9B78:
    ctx->pc = 0x7F2F9B78u;
    // 7F2F9B78: stw     r0, 376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9B7C:
    ctx->pc = 0x7F2F9B7Cu;
    // 7F2F9B7C: lwz     r0, 376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B80:
    ctx->pc = 0x7F2F9B80u;
    // 7F2F9B80: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9B84:
    ctx->pc = 0x7F2F9B84u;
    // 7F2F9B84: stw     r0, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9B88:
    ctx->pc = 0x7F2F9B88u;
    // 7F2F9B88: lwz     r0, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B8C:
    ctx->pc = 0x7F2F9B8Cu;
    // 7F2F9B8C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9B90:
    ctx->pc = 0x7F2F9B90u;
    // 7F2F9B90: stw     r0, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9B94:
    ctx->pc = 0x7F2F9B94u;
    // 7F2F9B94: lwz     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9B98:
    ctx->pc = 0x7F2F9B98u;
    // 7F2F9B98: cmplwi  r0, 0x0000
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

label_7F2F9B9C:
    ctx->pc = 0x7F2F9B9Cu;
    // 7F2F9B9C: bc    4, 2, 0x7F2F9BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9BD4;
        }
    }

label_7F2F9BA0:
    ctx->pc = 0x7F2F9BA0u;
    ctx->downcount -= 15;
    // 7F2F9BA0: lwz     r5, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9BA4:
    ctx->pc = 0x7F2F9BA4u;
    // 7F2F9BA4: rlwinm r4, r6, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9BA8:
    ctx->pc = 0x7F2F9BA8u;
    // 7F2F9BA8: mulli   r3, r6, 192
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)192);

label_7F2F9BAC:
    ctx->pc = 0x7F2F9BACu;
    // 7F2F9BAC: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F2F9BB0:
    ctx->pc = 0x7F2F9BB0u;
    // 7F2F9BB0: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9BB4:
    ctx->pc = 0x7F2F9BB4u;
    // 7F2F9BB4: stw     r4, 500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9BB8:
    ctx->pc = 0x7F2F9BB8u;
    // 7F2F9BB8: lwz     r4, 500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(500);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9BBC:
    ctx->pc = 0x7F2F9BBCu;
    // 7F2F9BBC: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F9BC0:
    ctx->pc = 0x7F2F9BC0u;
    // 7F2F9BC0: stw     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9BC4:
    ctx->pc = 0x7F2F9BC4u;
    // 7F2F9BC4: lwz     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9BC8:
    ctx->pc = 0x7F2F9BC8u;
    // 7F2F9BC8: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9BCC:
    ctx->pc = 0x7F2F9BCCu;
    // 7F2F9BCC: stw     r0, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9BD0:
    ctx->pc = 0x7F2F9BD0u;
    // 7F2F9BD0: b       0x7F2F9BFC
    {
            goto label_7F2F9BFC;
    }

label_7F2F9BD4:
    ctx->pc = 0x7F2F9BD4u;
    ctx->downcount -= 10;
    // 7F2F9BD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2F9BD8:
    ctx->pc = 0x7F2F9BD8u;
    // 7F2F9BD8: rlwinm r3, r6, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9BDC:
    ctx->pc = 0x7F2F9BDCu;
    // 7F2F9BDC: stw     r0, 500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9BE0:
    ctx->pc = 0x7F2F9BE0u;
    // 7F2F9BE0: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F2F9BE4:
    ctx->pc = 0x7F2F9BE4u;
    // 7F2F9BE4: lwz     r4, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9BE8:
    ctx->pc = 0x7F2F9BE8u;
    // 7F2F9BE8: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F9BEC:
    ctx->pc = 0x7F2F9BECu;
    // 7F2F9BEC: stw     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9BF0:
    ctx->pc = 0x7F2F9BF0u;
    // 7F2F9BF0: lwz     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9BF4:
    ctx->pc = 0x7F2F9BF4u;
    // 7F2F9BF4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9BF8:
    ctx->pc = 0x7F2F9BF8u;
    // 7F2F9BF8: stw     r0, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9BFC:
    ctx->pc = 0x7F2F9BFCu;
    ctx->downcount -= 6;
    // 7F2F9BFC: stw     r31, 348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2F9C00:
    ctx->pc = 0x7F2F9C00u;
    // 7F2F9C00: addi    r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9C04:
    ctx->pc = 0x7F2F9C04u;
    // 7F2F9C04: li      r0, 12288
    ctx->gpr[0] = (u32)(s32)(12288);

label_7F2F9C08:
    ctx->pc = 0x7F2F9C08u;
    // 7F2F9C08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2F9C0C:
    ctx->pc = 0x7F2F9C0Cu;
    // 7F2F9C0C: stw     r4, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9C10:
    ctx->pc = 0x7F2F9C10u;
    // 7F2F9C10: stw     r0, 480(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9C14:
    ctx->pc = 0x7F2F9C14u;
    ctx->downcount -= 16;
    // 7F2F9C14: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F9C18:
    ctx->pc = 0x7F2F9C18u;
    // 7F2F9C18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9C1C:
    ctx->pc = 0x7F2F9C1Cu;
    // 7F2F9C1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F9C20:
    ctx->pc = 0x7F2F9C20u;
    // 7F2F9C20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F9C24:
    ctx->pc = 0x7F2F9C24u;
    // 7F2F9C24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F9C28:
    ctx->pc = 0x7F2F9C28u;
    ctx->downcount -= 18;
    // 7F2F9C28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F9C2C:
    ctx->pc = 0x7F2F9C2Cu;
    // 7F2F9C2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F9C30:
    ctx->pc = 0x7F2F9C30u;
    // 7F2F9C30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9C34:
    ctx->pc = 0x7F2F9C34u;
    // 7F2F9C34: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F9C38:
    ctx->pc = 0x7F2F9C38u;
    // 7F2F9C38: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9C3C:
    ctx->pc = 0x7F2F9C3Cu;
    // 7F2F9C3C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9C40:
    ctx->pc = 0x7F2F9C40u;
    // 7F2F9C40: cmplwi  r3, 0x0000
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

label_7F2F9C44:
    ctx->pc = 0x7F2F9C44u;
    // 7F2F9C44: bc    12, 2, 0x7F2F9C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9C70;
        }
    }

label_7F2F9C48:
    ctx->pc = 0x7F2F9C48u;
    ctx->downcount -= 5;
    // 7F2F9C48: lis     r4, 1024
    ctx->gpr[4] = ((u32)(s32)(1024) << 16);

label_7F2F9C4C:
    ctx->pc = 0x7F2F9C4Cu;
    // 7F2F9C4C: lwz     r5, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9C50:
    ctx->pc = 0x7F2F9C50u;
    // 7F2F9C50: addi    r0, r4, 128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(128);

label_7F2F9C54:
    ctx->pc = 0x7F2F9C54u;
    // 7F2F9C54: and.   r0, r5, r0
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

label_7F2F9C58:
    ctx->pc = 0x7F2F9C58u;
    // 7F2F9C58: bc    12, 2, 0x7F2F9C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9C60;
        }
    }

label_7F2F9C5C:
    ctx->pc = 0x7F2F9C5Cu;
    ctx->downcount -= 1;
    // 7F2F9C5C: bl      0x7F3B1F94
    {
            ctx->lr = 0x7F2F9C60u;
            ctx->pc = 0x7F3B1F94u;
            return;
    }

label_7F2F9C60:
    ctx->pc = 0x7F2F9C60u;
    ctx->downcount -= 2;
    // 7F2F9C60: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9C64:
    ctx->pc = 0x7F2F9C64u;
    // 7F2F9C64: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F2F9C68u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F2F9C68:
    ctx->pc = 0x7F2F9C68u;
    ctx->downcount -= 2;
    // 7F2F9C68: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9C6C:
    ctx->pc = 0x7F2F9C6Cu;
    // 7F2F9C6C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F2F9C70u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F2F9C70:
    ctx->pc = 0x7F2F9C70u;
    ctx->downcount -= 3;
    // 7F2F9C70: lwz     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9C74:
    ctx->pc = 0x7F2F9C74u;
    // 7F2F9C74: cmplwi  r0, 0x0000
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

label_7F2F9C78:
    ctx->pc = 0x7F2F9C78u;
    // 7F2F9C78: bc    4, 2, 0x7F2F9CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9CA8;
        }
    }

label_7F2F9C7C:
    ctx->pc = 0x7F2F9C7Cu;
    ctx->downcount -= 3;
    // 7F2F9C7C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2F9C80:
    ctx->pc = 0x7F2F9C80u;
    // 7F2F9C80: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2F9C84:
    ctx->pc = 0x7F2F9C84u;
    // 7F2F9C84: b       0x7F2F9C9C
    {
            goto label_7F2F9C9C;
    }

label_7F2F9C88:
    ctx->pc = 0x7F2F9C88u;
    ctx->downcount -= 3;
    // 7F2F9C88: lwz     r0, 500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9C8C:
    // 7F2F9C8C: add   r3, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2F9C90:
    // 7F2F9C90: bl      0x7F0146B0
    {
            ctx->lr = 0x7F2F9C94u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F2F9C94:
    ctx->downcount -= 2;
    // 7F2F9C94: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2F9C98:
    // 7F2F9C98: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F2F9C9C:
    ctx->pc = 0x7F2F9C9Cu;
    ctx->downcount -= 3;
    // 7F2F9C9C: lwz     r0, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9CA0:
    // 7F2F9CA0: cmpw    r30, r0
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

label_7F2F9CA4:
    // 7F2F9CA4: bc    12, 0, 0x7F2F9C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9C88u;
                return;
            }
            goto label_7F2F9C88;
        }
    }

label_7F2F9CA8:
    ctx->pc = 0x7F2F9CA8u;
    ctx->downcount -= 3;
    // 7F2F9CA8: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9CAC:
    ctx->pc = 0x7F2F9CACu;
    // 7F2F9CAC: cmplwi  r3, 0x0000
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

label_7F2F9CB0:
    ctx->pc = 0x7F2F9CB0u;
    // 7F2F9CB0: bc    12, 2, 0x7F2F9CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9CB8;
        }
    }

label_7F2F9CB4:
    ctx->pc = 0x7F2F9CB4u;
    ctx->downcount -= 1;
    // 7F2F9CB4: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F2F9CB8u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F2F9CB8:
    ctx->pc = 0x7F2F9CB8u;
    ctx->downcount -= 16;
    // 7F2F9CB8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2F9CBC:
    ctx->pc = 0x7F2F9CBCu;
    // 7F2F9CBC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9CC0:
    ctx->pc = 0x7F2F9CC0u;
    // 7F2F9CC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2F9CC4:
    ctx->pc = 0x7F2F9CC4u;
    // 7F2F9CC4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2F9CC8:
    ctx->pc = 0x7F2F9CC8u;
    // 7F2F9CC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2F9CCC:
    ctx->pc = 0x7F2F9CCCu;
    ctx->downcount -= 32;
    // 7F2F9CCC: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2F9CD0:
    ctx->pc = 0x7F2F9CD0u;
    // 7F2F9CD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2F9CD4:
    ctx->pc = 0x7F2F9CD4u;
    // 7F2F9CD4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9CD8:
    ctx->pc = 0x7F2F9CD8u;
    // 7F2F9CD8: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2F9CDC:
    ctx->pc = 0x7F2F9CDCu;
    // 7F2F9CDC: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2F9CDCu);
        if (ctx->exception) return;
    }

label_7F2F9CE0:
    ctx->pc = 0x7F2F9CE0u;
    // 7F2F9CE0: stfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2F9CE4:
    ctx->pc = 0x7F2F9CE4u;
    // 7F2F9CE4: psq_st   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2F9CE4u);
        if (ctx->exception) return;
    }

label_7F2F9CE8:
    ctx->pc = 0x7F2F9CE8u;
    // 7F2F9CE8: stfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F2F9CEC:
    ctx->pc = 0x7F2F9CECu;
    // 7F2F9CEC: psq_st   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F2F9CECu);
        if (ctx->exception) return;
    }

label_7F2F9CF0:
    ctx->pc = 0x7F2F9CF0u;
    // 7F2F9CF0: stfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F2F9CF4:
    ctx->pc = 0x7F2F9CF4u;
    // 7F2F9CF4: psq_st   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F2F9CF4u);
        if (ctx->exception) return;
    }

label_7F2F9CF8:
    ctx->pc = 0x7F2F9CF8u;
    // 7F2F9CF8: stmw     r16, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2F9CFC:
    ctx->pc = 0x7F2F9CFCu;
    // 7F2F9CFC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9D00:
    ctx->pc = 0x7F2F9D00u;
    // 7F2F9D00: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9D04:
    ctx->pc = 0x7F2F9D04u;
    // 7F2F9D04: lwz     r31, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2F9D08:
    ctx->pc = 0x7F2F9D08u;
    // 7F2F9D08: or   r21, r4, r4
    {
        ctx->gpr[21] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2F9D0C:
    ctx->pc = 0x7F2F9D0Cu;
    // 7F2F9D0C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9D10:
    ctx->pc = 0x7F2F9D10u;
    // 7F2F9D10: lwz     r0, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9D14:
    ctx->pc = 0x7F2F9D14u;
    // 7F2F9D14: lwz     r30, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2F9D18:
    ctx->pc = 0x7F2F9D18u;
    // 7F2F9D18: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9D1C:
    ctx->pc = 0x7F2F9D1Cu;
    // 7F2F9D1C: lwz     r16, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F2F9D20:
    ctx->pc = 0x7F2F9D20u;
    // 7F2F9D20: bl      0x7F0FB8B8
    {
            ctx->lr = 0x7F2F9D24u;
            ctx->pc = 0x7F0FB8B8u;
            return;
    }

label_7F2F9D24:
    ctx->pc = 0x7F2F9D24u;
    ctx->downcount -= 2;
    // 7F2F9D24: li      r3, 1564
    ctx->gpr[3] = (u32)(s32)(1564);

label_7F2F9D28:
    ctx->pc = 0x7F2F9D28u;
    // 7F2F9D28: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F2F9D2Cu;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F2F9D2C:
    ctx->pc = 0x7F2F9D2Cu;
    ctx->downcount -= 4;
    // 7F2F9D2C: lwz     r4, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9D30:
    ctx->pc = 0x7F2F9D30u;
    // 7F2F9D30: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9D34:
    ctx->pc = 0x7F2F9D34u;
    // 7F2F9D34: cmplwi  r4, 0x0000
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

label_7F2F9D38:
    ctx->pc = 0x7F2F9D38u;
    // 7F2F9D38: bc    12, 2, 0x7F2F9D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9D50;
        }
    }

label_7F2F9D3C:
    ctx->pc = 0x7F2F9D3Cu;
    ctx->downcount -= 4;
    // 7F2F9D3C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9D40:
    ctx->pc = 0x7F2F9D40u;
    // 7F2F9D40: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2F9D44:
    ctx->pc = 0x7F2F9D44u;
    // 7F2F9D44: rlwinm r3, r0, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9D48:
    ctx->pc = 0x7F2F9D48u;
    // 7F2F9D48: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F2F9D4Cu;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F2F9D4C:
    ctx->pc = 0x7F2F9D4Cu;
    ctx->downcount -= 1;
    // 7F2F9D4C: stw     r3, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9D50:
    ctx->pc = 0x7F2F9D50u;
    ctx->downcount -= 4;
    // 7F2F9D50: mulli   r3, r31, 144
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)144);

label_7F2F9D54:
    ctx->pc = 0x7F2F9D54u;
    // 7F2F9D54: bl      0x7F0FB8F0
    {
            ctx->lr = 0x7F2F9D58u;
            ctx->pc = 0x7F0FB8F0u;
            return;
    }

label_7F2F9D58:
    ctx->pc = 0x7F2F9D58u;
    ctx->downcount -= 32;
    // 7F2F9D58: stw     r3, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9D5C:
    ctx->pc = 0x7F2F9D5Cu;
    // 7F2F9D5C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2F9D60:
    ctx->pc = 0x7F2F9D60u;
    // 7F2F9D60: addi    r6, r3, 31444
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(31444);

label_7F2F9D64:
    ctx->pc = 0x7F2F9D64u;
    // 7F2F9D64: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9D68:
    ctx->pc = 0x7F2F9D68u;
    // 7F2F9D68: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9D6C:
    ctx->pc = 0x7F2F9D6Cu;
    // 7F2F9D6C: rlwinm r9, r31, 4, 0, 27
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F2F9D70:
    ctx->pc = 0x7F2F9D70u;
    // 7F2F9D70: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9D74:
    ctx->pc = 0x7F2F9D74u;
    // 7F2F9D74: addi    r7, r3, -1052
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2F9D78:
    ctx->pc = 0x7F2F9D78u;
    // 7F2F9D78: add   r0, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2F9D7C:
    ctx->pc = 0x7F2F9D7Cu;
    // 7F2F9D7C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9D80:
    ctx->pc = 0x7F2F9D80u;
    // 7F2F9D80: stw     r0, 1368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9D84:
    ctx->pc = 0x7F2F9D84u;
    // 7F2F9D84: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9D88:
    ctx->pc = 0x7F2F9D88u;
    // 7F2F9D88: lwz     r8, 1368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1368);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2F9D8C:
    ctx->pc = 0x7F2F9D8Cu;
    // 7F2F9D8C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9D90:
    ctx->pc = 0x7F2F9D90u;
    // 7F2F9D90: add   r6, r8, r9
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F9D94:
    ctx->pc = 0x7F2F9D94u;
    // 7F2F9D94: stw     r6, 1372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1372);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9D98:
    ctx->pc = 0x7F2F9D98u;
    // 7F2F9D98: lwz     r6, 1372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1372);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9D9C:
    ctx->pc = 0x7F2F9D9Cu;
    // 7F2F9D9C: add   r6, r6, r9
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F9DA0:
    ctx->pc = 0x7F2F9DA0u;
    // 7F2F9DA0: stw     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9DA4:
    ctx->pc = 0x7F2F9DA4u;
    // 7F2F9DA4: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9DA8:
    ctx->pc = 0x7F2F9DA8u;
    // 7F2F9DA8: add   r6, r6, r9
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F9DAC:
    ctx->pc = 0x7F2F9DACu;
    // 7F2F9DAC: stw     r6, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9DB0:
    ctx->pc = 0x7F2F9DB0u;
    // 7F2F9DB0: lwz     r6, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9DB4:
    ctx->pc = 0x7F2F9DB4u;
    // 7F2F9DB4: add   r6, r6, r9
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2F9DB8:
    ctx->pc = 0x7F2F9DB8u;
    // 7F2F9DB8: stw     r6, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9DBC:
    ctx->pc = 0x7F2F9DBCu;
    // 7F2F9DBC: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2F9DC0:
    ctx->pc = 0x7F2F9DC0u;
    // 7F2F9DC0: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9DC4:
    ctx->pc = 0x7F2F9DC4u;
    // 7F2F9DC4: stw     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9DC8:
    ctx->pc = 0x7F2F9DC8u;
    // 7F2F9DC8: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9DCC:
    ctx->pc = 0x7F2F9DCCu;
    // 7F2F9DCC: lwz     r0, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9DD0:
    ctx->pc = 0x7F2F9DD0u;
    // 7F2F9DD0: cmpwi   r0, 0
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

label_7F2F9DD4:
    ctx->pc = 0x7F2F9DD4u;
    // 7F2F9DD4: bc    4, 2, 0x7F2F9DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9DE4;
        }
    }

label_7F2F9DD8:
    ctx->pc = 0x7F2F9DD8u;
    ctx->downcount -= 3;
    // 7F2F9DD8: lwz     r0, 496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(496);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9DDC:
    ctx->pc = 0x7F2F9DDCu;
    // 7F2F9DDC: cmpwi   r0, 0
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

label_7F2F9DE0:
    ctx->pc = 0x7F2F9DE0u;
    // 7F2F9DE0: bc    12, 2, 0x7F2F9DFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9DFC;
        }
    }

label_7F2F9DE4:
    ctx->pc = 0x7F2F9DE4u;
    ctx->downcount -= 6;
    // 7F2F9DE4: lfs     f0, 488(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9DE4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9DE8:
    ctx->pc = 0x7F2F9DE8u;
    // 7F2F9DE8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9DEC:
    ctx->pc = 0x7F2F9DECu;
    // 7F2F9DEC: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2F9DF0:
    ctx->pc = 0x7F2F9DF0u;
    // 7F2F9DF0: fneg    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2F9DF0u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2F9DF4:
    ctx->pc = 0x7F2F9DF4u;
    // 7F2F9DF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2F9DF8:
    ctx->pc = 0x7F2F9DF8u;
    // 7F2F9DF8: bl      0x80026020
    {
            ctx->lr = 0x7F2F9DFCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2F9DFC:
    ctx->pc = 0x7F2F9DFCu;
    ctx->downcount -= 12;
    // 7F2F9DFC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9E00:
    ctx->pc = 0x7F2F9E00u;
    // 7F2F9E00: cmplwi  r16, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[16]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2F9E04:
    ctx->pc = 0x7F2F9E04u;
    // 7F2F9E04: addi    r16, r3, -1052
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2F9E08:
    ctx->pc = 0x7F2F9E08u;
    // 7F2F9E08: lwz     r3, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9E0C:
    ctx->pc = 0x7F2F9E0Cu;
    // 7F2F9E0C: lwz     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9E10:
    ctx->pc = 0x7F2F9E10u;
    // 7F2F9E10: stw     r3, 1344(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9E14:
    ctx->pc = 0x7F2F9E14u;
    // 7F2F9E14: stw     r0, 1348(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9E18:
    ctx->pc = 0x7F2F9E18u;
    // 7F2F9E18: lwz     r3, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9E1C:
    ctx->pc = 0x7F2F9E1Cu;
    // 7F2F9E1C: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9E20:
    ctx->pc = 0x7F2F9E20u;
    // 7F2F9E20: stw     r3, 1352(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9E24:
    ctx->pc = 0x7F2F9E24u;
    // 7F2F9E24: stw     r0, 1356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9E28:
    ctx->pc = 0x7F2F9E28u;
    // 7F2F9E28: bc    12, 2, 0x7F2F9FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9FFC;
        }
    }

label_7F2F9E2C:
    ctx->pc = 0x7F2F9E2Cu;
    ctx->downcount -= 5;
    // 7F2F9E2C: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2F9E30:
    ctx->pc = 0x7F2F9E30u;
    // 7F2F9E30: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2F9E34:
    ctx->pc = 0x7F2F9E34u;
    // 7F2F9E34: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2F9E38:
    ctx->pc = 0x7F2F9E38u;
    // 7F2F9E38: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F2F9E3C:
    ctx->pc = 0x7F2F9E3Cu;
    // 7F2F9E3C: b       0x7F2F9FF0
    {
            goto label_7F2F9FF0;
    }

label_7F2F9E40:
    ctx->downcount -= 4;
    // 7F2F9E40: addi    r0, r22, 212
    ctx->gpr[0] = ctx->gpr[22] + (u32)(s32)(212);

label_7F2F9E44:
    ctx->pc = 0x7F2F9E44u;
    // 7F2F9E44: lwzx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9E48:
    // 7F2F9E48: cmplwi  r4, 0x0000
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

label_7F2F9E4C:
    // 7F2F9E4C: bc    4, 2, 0x7F2F9F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2F9F3C;
        }
    }

label_7F2F9E50:
    ctx->pc = 0x7F2F9E50u;
    ctx->downcount -= 23;
    // 7F2F9E50: lwz     r5, 376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(376);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2F9E54:
    // 7F2F9E54: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2F9E58:
    // 7F2F9E58: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9E5C:
    // 7F2F9E5C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9E60:
    // 7F2F9E60: add   r7, r5, r20
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2F9E64:
    // 7F2F9E64: addi    r8, r4, -1052
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2F9E68:
    ctx->pc = 0x7F2F9E68u;
    // 7F2F9E68: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2F9E6C:
    // 7F2F9E6C: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2F9E70:
    ctx->pc = 0x7F2F9E70u;
    // 7F2F9E70: lwz     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9E74:
    // 7F2F9E74: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9E78:
    ctx->pc = 0x7F2F9E78u;
    // 7F2F9E78: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2F9E7C:
    ctx->pc = 0x7F2F9E7Cu;
    // 7F2F9E7C: stw     r4, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9E80:
    ctx->pc = 0x7F2F9E80u;
    // 7F2F9E80: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2F9E84:
    ctx->pc = 0x7F2F9E84u;
    // 7F2F9E84: lwz     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9E88:
    ctx->pc = 0x7F2F9E88u;
    // 7F2F9E88: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2F9E8C:
    ctx->pc = 0x7F2F9E8Cu;
    // 7F2F9E8C: stw     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9E90:
    ctx->pc = 0x7F2F9E90u;
    // 7F2F9E90: lwz     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9E94:
    ctx->pc = 0x7F2F9E94u;
    // 7F2F9E94: lwzx    r3, r3, r22
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[22];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9E98:
    // 7F2F9E98: rlwinm r3, r3, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_7F2F9E9C:
    // 7F2F9E9C: add   r4, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2F9EA0:
    ctx->pc = 0x7F2F9EA0u;
    // 7F2F9EA0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9EA4:
    // 7F2F9EA4: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2F9EA8:
    loop_7F2F9EA8(ctx);
    if (ctx->pc == 0x7F2F9EBCu) goto label_7F2F9EBC;
    return;
label_7F2F9EAC:
    ctx->pc = 0x7F2F9EACu;
    // 7F2F9EAC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9EB0:
    ctx->pc = 0x7F2F9EB0u;
    // 7F2F9EB0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9EB4:
    ctx->pc = 0x7F2F9EB4u;
    // 7F2F9EB4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9EB8:
    // 7F2F9EB8: bc    16, 0, 0x7F2F9EA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9EA8u;
                return;
            }
            goto label_7F2F9EA8;
        }
    }

label_7F2F9EBC:
    ctx->downcount -= 11;
    // 7F2F9EBC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2F9EC0:
    // 7F2F9EC0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9EC4:
    ctx->pc = 0x7F2F9EC4u;
    // 7F2F9EC4: lfs     f0, 31424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9EC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2F9EC8:
    // 7F2F9EC8: add   r17, r24, r19
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[17] = res;
    }

label_7F2F9ECC:
    // 7F2F9ECC: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2F9ED0:
    // 7F2F9ED0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9ED4:
    // 7F2F9ED4: addi    r5, r17, -4
    ctx->gpr[5] = ctx->gpr[17] + (u32)(s32)(-4);

label_7F2F9ED8:
    ctx->pc = 0x7F2F9ED8u;
    // 7F2F9ED8: stfs     f0, 12(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F2F9ED8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2F9EDC:
    // 7F2F9EDC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9EE0:
    ctx->pc = 0x7F2F9EE0u;
    // 7F2F9EE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9EE4:
    loop_7F2F9EE4(ctx);
    if (ctx->pc == 0x7F2F9EF8u) goto label_7F2F9EF8;
    return;
label_7F2F9EE8:
    ctx->pc = 0x7F2F9EE8u;
    // 7F2F9EE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9EEC:
    ctx->pc = 0x7F2F9EECu;
    // 7F2F9EEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9EF0:
    ctx->pc = 0x7F2F9EF0u;
    // 7F2F9EF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9EF4:
    // 7F2F9EF4: bc    16, 0, 0x7F2F9EE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9EE4u;
                return;
            }
            goto label_7F2F9EE4;
        }
    }

label_7F2F9EF8:
    ctx->downcount -= 6;
    // 7F2F9EF8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9EFC:
    // 7F2F9EFC: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2F9F00:
    // 7F2F9F00: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2F9F04:
    // 7F2F9F04: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F2F9F08:
    // 7F2F9F08: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2F9F0C:
    // 7F2F9F0C: bl      0x7F114508
    {
            ctx->lr = 0x7F2F9F10u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2F9F10:
    ctx->downcount -= 11;
    // 7F2F9F10: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9F14:
    // 7F2F9F14: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2F9F18:
    ctx->pc = 0x7F2F9F18u;
    // 7F2F9F18: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9F1C:
    ctx->pc = 0x7F2F9F1Cu;
    // 7F2F9F1C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9F20:
    ctx->pc = 0x7F2F9F20u;
    // 7F2F9F20: stw     r3, 48(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9F24:
    ctx->pc = 0x7F2F9F24u;
    // 7F2F9F24: stw     r0, 52(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9F28:
    ctx->pc = 0x7F2F9F28u;
    // 7F2F9F28: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2F9F2C:
    ctx->pc = 0x7F2F9F2Cu;
    // 7F2F9F2C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2F9F30:
    ctx->pc = 0x7F2F9F30u;
    // 7F2F9F30: stw     r3, 56(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9F34:
    ctx->pc = 0x7F2F9F34u;
    // 7F2F9F34: stw     r0, 60(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2F9F38:
    // 7F2F9F38: b       0x7F2F9FE0
    {
            goto label_7F2F9FE0;
    }

label_7F2F9F3C:
    ctx->downcount -= 7;
    // 7F2F9F3C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9F40:
    // 7F2F9F40: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9F44:
    // 7F2F9F44: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2F9F48:
    // 7F2F9F48: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2F9F4C:
    // 7F2F9F4C: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9F50:
    ctx->pc = 0x7F2F9F50u;
    // 7F2F9F50: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9F54:
    loop_7F2F9F54(ctx);
    if (ctx->pc == 0x7F2F9F68u) goto label_7F2F9F68;
    return;
label_7F2F9F58:
    ctx->pc = 0x7F2F9F58u;
    // 7F2F9F58: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9F5C:
    ctx->pc = 0x7F2F9F5Cu;
    // 7F2F9F5C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9F60:
    ctx->pc = 0x7F2F9F60u;
    // 7F2F9F60: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9F64:
    // 7F2F9F64: bc    16, 0, 0x7F2F9F54
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9F54u;
                return;
            }
            goto label_7F2F9F54;
        }
    }

label_7F2F9F68:
    ctx->downcount -= 7;
    // 7F2F9F68: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9F6C:
    // 7F2F9F6C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9F70:
    // 7F2F9F70: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F2F9F74:
    // 7F2F9F74: addi    r4, r29, 144
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(144);

label_7F2F9F78:
    // 7F2F9F78: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9F7C:
    ctx->pc = 0x7F2F9F7Cu;
    // 7F2F9F7C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9F80:
    loop_7F2F9F80(ctx);
    if (ctx->pc == 0x7F2F9F94u) goto label_7F2F9F94;
    return;
label_7F2F9F84:
    ctx->pc = 0x7F2F9F84u;
    // 7F2F9F84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9F88:
    ctx->pc = 0x7F2F9F88u;
    // 7F2F9F88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9F8C:
    ctx->pc = 0x7F2F9F8Cu;
    // 7F2F9F8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9F90:
    // 7F2F9F90: bc    16, 0, 0x7F2F9F80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9F80u;
                return;
            }
            goto label_7F2F9F80;
        }
    }

label_7F2F9F94:
    ctx->downcount -= 7;
    // 7F2F9F94: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9F98:
    // 7F2F9F98: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2F9F9C:
    // 7F2F9F9C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2F9FA0:
    // 7F2F9FA0: addi    r3, r3, -1212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1212);

label_7F2F9FA4:
    // 7F2F9FA4: addi    r4, r4, -1148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F2F9FA8:
    // 7F2F9FA8: addi    r5, r5, -1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1276);

label_7F2F9FAC:
    // 7F2F9FAC: bl      0x80025A80
    {
            ctx->lr = 0x7F2F9FB0u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F2F9FB0:
    ctx->downcount -= 8;
    // 7F2F9FB0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2F9FB4:
    // 7F2F9FB4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2F9FB8:
    // 7F2F9FB8: addi    r3, r3, -1276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1276);

label_7F2F9FBC:
    // 7F2F9FBC: add   r5, r24, r19
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2F9FC0:
    // 7F2F9FC0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2F9FC4:
    ctx->pc = 0x7F2F9FC4u;
    // 7F2F9FC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2F9FC8:
    // 7F2F9FC8: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F2F9FCC:
    loop_7F2F9FCC(ctx);
    if (ctx->pc == 0x7F2F9FE0u) goto label_7F2F9FE0;
    return;
label_7F2F9FD0:
    ctx->pc = 0x7F2F9FD0u;
    // 7F2F9FD0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2F9FD4:
    ctx->pc = 0x7F2F9FD4u;
    // 7F2F9FD4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2F9FD8:
    ctx->pc = 0x7F2F9FD8u;
    // 7F2F9FD8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2F9FDC:
    // 7F2F9FDC: bc    16, 0, 0x7F2F9FCC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9FCCu;
                return;
            }
            goto label_7F2F9FCC;
        }
    }

label_7F2F9FE0:
    ctx->downcount -= 4;
    // 7F2F9FE0: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F2F9FE4:
    // 7F2F9FE4: addi    r19, r19, 64
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(64);

label_7F2F9FE8:
    // 7F2F9FE8: addi    r20, r20, 16
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(16);

label_7F2F9FEC:
    // 7F2F9FEC: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F2F9FF0:
    ctx->downcount -= 2;
    // 7F2F9FF0: cmpw    r18, r30
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

label_7F2F9FF4:
    // 7F2F9FF4: bc    12, 0, 0x7F2F9E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2F9E40u;
                return;
            }
            goto label_7F2F9E40;
        }
    }

label_7F2F9FF8:
    ctx->pc = 0x7F2F9FF8u;
    ctx->downcount -= 1;
    // 7F2F9FF8: b       0x7F2FA020
    {
            goto label_7F2FA020;
    }

label_7F2F9FFC:
    ctx->pc = 0x7F2F9FFCu;
    ctx->downcount -= 5;
    // 7F2F9FFC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FA000:
    ctx->pc = 0x7F2FA000u;
    // 7F2FA000: addi    r5, r24, -4
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(-4);

label_7F2FA004:
    ctx->pc = 0x7F2FA004u;
    // 7F2FA004: addi    r4, r29, 144
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(144);

label_7F2FA008:
    ctx->pc = 0x7F2FA008u;
    // 7F2FA008: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FA00C:
    loop_7F2FA00C(ctx);
    if (ctx->pc == 0x7F2FA020u) goto label_7F2FA020;
    return;
label_7F2FA010:
    ctx->pc = 0x7F2FA010u;
    // 7F2FA010: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FA014:
    ctx->pc = 0x7F2FA014u;
    // 7F2FA014: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA018:
    ctx->pc = 0x7F2FA018u;
    // 7F2FA018: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FA01C:
    // 7F2FA01C: bc    16, 0, 0x7F2FA00C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA00Cu;
                return;
            }
            goto label_7F2FA00C;
        }
    }

label_7F2FA020:
    ctx->pc = 0x7F2FA020u;
    ctx->downcount -= 4;
    // 7F2FA020: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2FA024:
    ctx->pc = 0x7F2FA024u;
    // 7F2FA024: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2FA028:
    ctx->pc = 0x7F2FA028u;
    // 7F2FA028: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FA02C:
    ctx->pc = 0x7F2FA02Cu;
    // 7F2FA02C: b       0x7F2FA04C
    {
            goto label_7F2FA04C;
    }

label_7F2FA030:
    ctx->downcount -= 4;
    // 7F2FA030: addi    r3, r17, 1088
    ctx->gpr[3] = ctx->gpr[17] + (u32)(s32)(1088);

label_7F2FA034:
    // 7F2FA034: add   r4, r24, r16
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA038:
    // 7F2FA038: add   r3, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FA03C:
    // 7F2FA03C: bl      0x7F11365C
    {
            ctx->lr = 0x7F2FA040u;
            ctx->pc = 0x7F11365Cu;
            return;
    }

label_7F2FA040:
    ctx->downcount -= 3;
    // 7F2FA040: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F2FA044:
    // 7F2FA044: addi    r16, r16, 64
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(64);

label_7F2FA048:
    // 7F2FA048: addi    r17, r17, 16
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(16);

label_7F2FA04C:
    ctx->downcount -= 2;
    // 7F2FA04C: cmpw    r18, r30
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

label_7F2FA050:
    // 7F2FA050: bc    12, 0, 0x7F2FA030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA030u;
                return;
            }
            goto label_7F2FA030;
        }
    }

label_7F2FA054:
    ctx->pc = 0x7F2FA054u;
    ctx->downcount -= 5;
    // 7F2FA054: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2FA058:
    ctx->pc = 0x7F2FA058u;
    // 7F2FA058: stw     r0, 1560(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA05C:
    ctx->pc = 0x7F2FA05Cu;
    // 7F2FA05C: lwz     r0, 428(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(428);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA060:
    ctx->pc = 0x7F2FA060u;
    // 7F2FA060: cmpwi   r0, 0
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

label_7F2FA064:
    ctx->pc = 0x7F2FA064u;
    // 7F2FA064: bc    12, 2, 0x7F2FA0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA0E0;
        }
    }

label_7F2FA068:
    ctx->pc = 0x7F2FA068u;
    ctx->downcount -= 5;
    // 7F2FA068: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2FA06C:
    ctx->pc = 0x7F2FA06Cu;
    // 7F2FA06C: addi    r4, r24, 48
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(48);

label_7F2FA070:
    ctx->pc = 0x7F2FA070u;
    // 7F2FA070: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2FA074:
    ctx->pc = 0x7F2FA074u;
    // 7F2FA074: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2FA078:
    ctx->pc = 0x7F2FA078u;
    // 7F2FA078: bl      0x7F106A30
    {
            ctx->lr = 0x7F2FA07Cu;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F2FA07C:
    ctx->pc = 0x7F2FA07Cu;
    ctx->downcount -= 3;
    // 7F2FA07C: cmpwi   r3, 0
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

label_7F2FA080:
    ctx->pc = 0x7F2FA080u;
    // 7F2FA080: stw     r3, 1560(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA084:
    ctx->pc = 0x7F2FA084u;
    // 7F2FA084: bc    12, 2, 0x7F2FA094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA094;
        }
    }

label_7F2FA088:
    ctx->pc = 0x7F2FA088u;
    ctx->downcount -= 3;
    // 7F2FA088: addi    r3, r24, 1388
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1388);

label_7F2FA08C:
    ctx->pc = 0x7F2FA08Cu;
    // 7F2FA08C: addi    r4, r24, 1548
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(1548);

label_7F2FA090:
    ctx->pc = 0x7F2FA090u;
    // 7F2FA090: bl      0x7F106DDC
    {
            ctx->lr = 0x7F2FA094u;
            ctx->pc = 0x7F106DDCu;
            return;
    }

label_7F2FA094:
    ctx->pc = 0x7F2FA094u;
    ctx->downcount -= 3;
    // 7F2FA094: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA098:
    ctx->pc = 0x7F2FA098u;
    // 7F2FA098: cmplwi  r3, 0x0000
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

label_7F2FA09C:
    ctx->pc = 0x7F2FA09Cu;
    // 7F2FA09C: bc    12, 2, 0x7F2FA0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA0E0;
        }
    }

label_7F2FA0A0:
    ctx->pc = 0x7F2FA0A0u;
    ctx->downcount -= 6;
    // 7F2FA0A0: lwz     r18, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2FA0A4:
    ctx->pc = 0x7F2FA0A4u;
    // 7F2FA0A4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2FA0A8:
    ctx->pc = 0x7F2FA0A8u;
    // 7F2FA0A8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2FA0AC:
    ctx->pc = 0x7F2FA0ACu;
    // 7F2FA0AC: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FA0B0:
    ctx->pc = 0x7F2FA0B0u;
    // 7F2FA0B0: lha     r20, 92(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(92);
        ctx->gpr[20] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2FA0B4:
    ctx->pc = 0x7F2FA0B4u;
    // 7F2FA0B4: b       0x7F2FA0D8
    {
            goto label_7F2FA0D8;
    }

label_7F2FA0B8:
    ctx->pc = 0x7F2FA0B8u;
    ctx->downcount -= 5;
    // 7F2FA0B8: lwz     r0, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA0BC:
    // 7F2FA0BC: addi    r4, r16, 444
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(444);

label_7F2FA0C0:
    // 7F2FA0C0: add   r4, r18, r4
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA0C4:
    // 7F2FA0C4: add   r3, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FA0C8:
    // 7F2FA0C8: bl      0x7F2FBC4C
    {
            ctx->lr = 0x7F2FA0CCu;
            goto label_7F2FBC4C;
    }

label_7F2FA0CC:
    ctx->downcount -= 3;
    // 7F2FA0CC: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F2FA0D0:
    // 7F2FA0D0: addi    r16, r16, 324
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(324);

label_7F2FA0D4:
    // 7F2FA0D4: addi    r17, r17, 64
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(64);

label_7F2FA0D8:
    ctx->downcount -= 2;
    // 7F2FA0D8: cmpw    r19, r20
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(ctx->gpr[20]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA0DC:
    // 7F2FA0DC: bc    12, 0, 0x7F2FA0B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA0B8u;
                return;
            }
            goto label_7F2FA0B8;
        }
    }

label_7F2FA0E0:
    ctx->pc = 0x7F2FA0E0u;
    ctx->downcount -= 5;
    // 7F2FA0E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FA0E4:
    ctx->pc = 0x7F2FA0E4u;
    // 7F2FA0E4: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_7F2FA0E8:
    ctx->pc = 0x7F2FA0E8u;
    // 7F2FA0E8: cmpwi   r31, 0
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

label_7F2FA0EC:
    ctx->pc = 0x7F2FA0ECu;
    // 7F2FA0EC: bc    4, 1, 0x7F2FA128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA128;
        }
    }

label_7F2FA0F0:
    loop_7F2FA0F0(ctx);
    if (ctx->pc == 0x7F2FA128u) goto label_7F2FA128;
    return;
label_7F2FA0F4:
    ctx->pc = 0x7F2FA0F4u;
    // 7F2FA0F4: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA0F8:
    // 7F2FA0F8: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FA0FC:
    // 7F2FA0FC: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FA100:
    ctx->pc = 0x7F2FA100u;
    // 7F2FA100: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA104:
    ctx->pc = 0x7F2FA104u;
    // 7F2FA104: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA108:
    // 7F2FA108: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2FA10C:
    ctx->pc = 0x7F2FA10Cu;
    // 7F2FA10C: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA110:
    ctx->pc = 0x7F2FA110u;
    // 7F2FA110: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA114:
    ctx->pc = 0x7F2FA114u;
    // 7F2FA114: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA118:
    ctx->pc = 0x7F2FA118u;
    // 7F2FA118: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA11C:
    ctx->pc = 0x7F2FA11Cu;
    // 7F2FA11C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA120:
    ctx->pc = 0x7F2FA120u;
    // 7F2FA120: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA124:
    // 7F2FA124: bc    16, 0, 0x7F2FA0F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA0F0u;
                return;
            }
            goto label_7F2FA0F0;
        }
    }

label_7F2FA128:
    ctx->pc = 0x7F2FA128u;
    ctx->downcount -= 3;
    // 7F2FA128: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA12C:
    ctx->pc = 0x7F2FA12Cu;
    // 7F2FA12C: cmplwi  r3, 0x0000
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

label_7F2FA130:
    ctx->pc = 0x7F2FA130u;
    // 7F2FA130: bc    12, 2, 0x7F2FA2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA2D0;
        }
    }

label_7F2FA134:
    ctx->pc = 0x7F2FA134u;
    ctx->downcount -= 22;
    // 7F2FA134: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA138:
    ctx->pc = 0x7F2FA138u;
    // 7F2FA138: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA13C:
    ctx->pc = 0x7F2FA13Cu;
    // 7F2FA13C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA140:
    ctx->pc = 0x7F2FA140u;
    // 7F2FA140: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA144:
    ctx->pc = 0x7F2FA144u;
    // 7F2FA144: lwz     r6, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA148:
    ctx->pc = 0x7F2FA148u;
    // 7F2FA148: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA14C:
    ctx->pc = 0x7F2FA14Cu;
    // 7F2FA14C: lwz     r0, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA150:
    ctx->pc = 0x7F2FA150u;
    // 7F2FA150: stw     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA154:
    ctx->pc = 0x7F2FA154u;
    // 7F2FA154: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA158:
    ctx->pc = 0x7F2FA158u;
    // 7F2FA158: lwz     r6, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA15C:
    ctx->pc = 0x7F2FA15Cu;
    // 7F2FA15C: lwz     r0, 64(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA160:
    ctx->pc = 0x7F2FA160u;
    // 7F2FA160: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA164:
    ctx->pc = 0x7F2FA164u;
    // 7F2FA164: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA168:
    ctx->pc = 0x7F2FA168u;
    // 7F2FA168: lwz     r6, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA16C:
    ctx->pc = 0x7F2FA16Cu;
    // 7F2FA16C: lwz     r0, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA170:
    ctx->pc = 0x7F2FA170u;
    // 7F2FA170: stwu     r6, -1068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[4] = ea;
    }

label_7F2FA174:
    ctx->pc = 0x7F2FA174u;
    // 7F2FA174: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA178:
    ctx->pc = 0x7F2FA178u;
    // 7F2FA178: lwz     r6, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA17C:
    ctx->pc = 0x7F2FA17Cu;
    // 7F2FA17C: lwz     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA180:
    ctx->pc = 0x7F2FA180u;
    // 7F2FA180: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA184:
    ctx->pc = 0x7F2FA184u;
    // 7F2FA184: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA188:
    ctx->pc = 0x7F2FA188u;
    // 7F2FA188: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FA18Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FA18C:
    ctx->pc = 0x7F2FA18Cu;
    ctx->downcount -= 42;
    // 7F2FA18C: lwz     r4, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA190:
    ctx->pc = 0x7F2FA190u;
    // 7F2FA190: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA194:
    ctx->pc = 0x7F2FA194u;
    // 7F2FA194: addi    r18, r3, -1068
    ctx->gpr[18] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FA198:
    ctx->pc = 0x7F2FA198u;
    // 7F2FA198: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2FA19C:
    ctx->pc = 0x7F2FA19Cu;
    // 7F2FA19C: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA1A0:
    ctx->pc = 0x7F2FA1A0u;
    // 7F2FA1A0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA1A4:
    ctx->pc = 0x7F2FA1A4u;
    // 7F2FA1A4: addi    r17, r3, -1052
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA1A8:
    ctx->pc = 0x7F2FA1A8u;
    // 7F2FA1A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FA1AC:
    ctx->pc = 0x7F2FA1ACu;
    // 7F2FA1AC: lwz     r5, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA1B0:
    ctx->pc = 0x7F2FA1B0u;
    // 7F2FA1B0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA1B4:
    ctx->pc = 0x7F2FA1B4u;
    // 7F2FA1B4: lwz     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA1B8:
    ctx->pc = 0x7F2FA1B8u;
    // 7F2FA1B8: addi    r16, r3, -1084
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FA1BC:
    ctx->pc = 0x7F2FA1BCu;
    // 7F2FA1BC: lfs     f0, 31424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA1BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA1C0:
    ctx->pc = 0x7F2FA1C0u;
    // 7F2FA1C0: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2FA1C4:
    ctx->pc = 0x7F2FA1C4u;
    // 7F2FA1C4: stw     r5, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FA1C8:
    ctx->pc = 0x7F2FA1C8u;
    // 7F2FA1C8: stw     r0, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA1CC:
    ctx->pc = 0x7F2FA1CCu;
    // 7F2FA1CC: lwz     r3, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA1D0:
    ctx->pc = 0x7F2FA1D0u;
    // 7F2FA1D0: lwz     r0, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA1D4:
    ctx->pc = 0x7F2FA1D4u;
    // 7F2FA1D4: stw     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA1D8:
    ctx->pc = 0x7F2FA1D8u;
    // 7F2FA1D8: stw     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA1DC:
    ctx->pc = 0x7F2FA1DCu;
    // 7F2FA1DC: lwz     r4, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA1E0:
    ctx->pc = 0x7F2FA1E0u;
    // 7F2FA1E0: lfs     f3, 0(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA1E0u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2FA1E4:
    ctx->pc = 0x7F2FA1E4u;
    // 7F2FA1E4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA1E8:
    ctx->pc = 0x7F2FA1E8u;
    // 7F2FA1E8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA1EC:
    ctx->pc = 0x7F2FA1ECu;
    // 7F2FA1EC: lfs     f1, 8(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA1ECu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA1F0:
    ctx->pc = 0x7F2FA1F0u;
    // 7F2FA1F0: stw     r3, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA1F4:
    ctx->pc = 0x7F2FA1F4u;
    // 7F2FA1F4: lfs     f2, 4(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA1F4u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FA1F8:
    ctx->pc = 0x7F2FA1F8u;
    // 7F2FA1F8: stw     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA1FC:
    ctx->pc = 0x7F2FA1FCu;
    // 7F2FA1FC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA200:
    ctx->pc = 0x7F2FA200u;
    // 7F2FA200: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA204:
    ctx->pc = 0x7F2FA204u;
    // 7F2FA204: stw     r3, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA208:
    ctx->pc = 0x7F2FA208u;
    // 7F2FA208: stw     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA20C:
    ctx->pc = 0x7F2FA20Cu;
    // 7F2FA20C: lfs     f4, 420(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA20Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2FA210:
    ctx->pc = 0x7F2FA210u;
    // 7F2FA210: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2FA210u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F2FA214:
    ctx->pc = 0x7F2FA214u;
    // 7F2FA214: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2FA214u)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_7F2FA218:
    ctx->pc = 0x7F2FA218u;
    // 7F2FA218: stfs     f3, 0(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA218u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2FA21C:
    ctx->pc = 0x7F2FA21Cu;
    // 7F2FA21C: stfs     f1, 8(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA21Cu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2FA220:
    ctx->pc = 0x7F2FA220u;
    // 7F2FA220: lfs     f1, 424(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA220u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA224:
    ctx->pc = 0x7F2FA224u;
    // 7F2FA224: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FA224u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F2FA228:
    ctx->pc = 0x7F2FA228u;
    // 7F2FA228: stfs     f0, 12(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA228u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FA22C:
    ctx->pc = 0x7F2FA22Cu;
    // 7F2FA22C: stfs     f1, 4(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA22Cu)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2FA230:
    ctx->pc = 0x7F2FA230u;
    // 7F2FA230: b       0x7F2FA2C8
    {
            goto label_7F2FA2C8;
    }

label_7F2FA234:
    ctx->downcount -= 4;
    // 7F2FA234: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F2FA238:
    // 7F2FA238: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F2FA23C:
    // 7F2FA23C: or   r5, r16, r16
    {
        ctx->gpr[5] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FA240:
    // 7F2FA240: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA244u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA244:
    ctx->pc = 0x7F2FA244u;
    ctx->downcount -= 33;
    // 7F2FA244: lwz     r5, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA248:
    // 7F2FA248: addi    r0, r20, 16
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(16);

label_7F2FA24C:
    ctx->pc = 0x7F2FA24Cu;
    // 7F2FA24C: lwz     r4, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA250:
    // 7F2FA250: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F2FA254:
    ctx->pc = 0x7F2FA254u;
    // 7F2FA254: lwz     r3, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA258:
    // 7F2FA258: add   r5, r5, r20
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FA25C:
    ctx->pc = 0x7F2FA25Cu;
    // 7F2FA25C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA260:
    ctx->pc = 0x7F2FA260u;
    // 7F2FA260: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA264:
    ctx->pc = 0x7F2FA264u;
    // 7F2FA264: lwz     r4, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA268:
    ctx->pc = 0x7F2FA268u;
    // 7F2FA268: lwz     r3, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA26C:
    ctx->pc = 0x7F2FA26Cu;
    // 7F2FA26C: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA270:
    ctx->pc = 0x7F2FA270u;
    // 7F2FA270: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA274:
    ctx->pc = 0x7F2FA274u;
    // 7F2FA274: lwz     r3, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA278:
    ctx->pc = 0x7F2FA278u;
    // 7F2FA278: lwz     r4, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA27C:
    // 7F2FA27C: add   r5, r3, r20
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FA280:
    ctx->pc = 0x7F2FA280u;
    // 7F2FA280: lwz     r3, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA284:
    // 7F2FA284: addi    r20, r20, 16
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(16);

label_7F2FA288:
    ctx->pc = 0x7F2FA288u;
    // 7F2FA288: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA28C:
    ctx->pc = 0x7F2FA28Cu;
    // 7F2FA28C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA290:
    ctx->pc = 0x7F2FA290u;
    // 7F2FA290: lwz     r4, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA294:
    ctx->pc = 0x7F2FA294u;
    // 7F2FA294: lwz     r3, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA298:
    ctx->pc = 0x7F2FA298u;
    // 7F2FA298: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA29C:
    ctx->pc = 0x7F2FA29Cu;
    // 7F2FA29C: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA2A0:
    ctx->pc = 0x7F2FA2A0u;
    // 7F2FA2A0: lwz     r3, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA2A4:
    // 7F2FA2A4: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA2A8:
    ctx->pc = 0x7F2FA2A8u;
    // 7F2FA2A8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA2AC:
    ctx->pc = 0x7F2FA2ACu;
    // 7F2FA2AC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA2B0:
    ctx->pc = 0x7F2FA2B0u;
    // 7F2FA2B0: stw     r3, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA2B4:
    ctx->pc = 0x7F2FA2B4u;
    // 7F2FA2B4: stw     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA2B8:
    ctx->pc = 0x7F2FA2B8u;
    // 7F2FA2B8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA2BC:
    ctx->pc = 0x7F2FA2BCu;
    // 7F2FA2BC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA2C0:
    ctx->pc = 0x7F2FA2C0u;
    // 7F2FA2C0: stw     r3, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA2C4:
    ctx->pc = 0x7F2FA2C4u;
    // 7F2FA2C4: stw     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA2C8:
    ctx->downcount -= 2;
    // 7F2FA2C8: cmpw    r19, r31
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA2CC:
    // 7F2FA2CC: bc    12, 0, 0x7F2FA234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA234u;
                return;
            }
            goto label_7F2FA234;
        }
    }

label_7F2FA2D0:
    ctx->pc = 0x7F2FA2D0u;
    ctx->downcount -= 7;
    // 7F2FA2D0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2FA2D4:
    ctx->pc = 0x7F2FA2D4u;
    // 7F2FA2D4: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2FA2D8:
    ctx->pc = 0x7F2FA2D8u;
    // 7F2FA2D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FA2DC:
    ctx->pc = 0x7F2FA2DCu;
    // 7F2FA2DC: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_7F2FA2E0:
    ctx->pc = 0x7F2FA2E0u;
    // 7F2FA2E0: cmpwi   r30, 0
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

label_7F2FA2E4:
    ctx->pc = 0x7F2FA2E4u;
    // 7F2FA2E4: bc    4, 1, 0x7F2FA318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA318;
        }
    }

label_7F2FA2E8:
    loop_7F2FA2E8(ctx);
    if (ctx->pc == 0x7F2FA318u) goto label_7F2FA318;
    return;
label_7F2FA2EC:
    ctx->pc = 0x7F2FA2ECu;
    // 7F2FA2EC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA2F0:
    // 7F2FA2F0: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FA2F4:
    ctx->pc = 0x7F2FA2F4u;
    // 7F2FA2F4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA2F8:
    // 7F2FA2F8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2FA2FC:
    ctx->pc = 0x7F2FA2FCu;
    // 7F2FA2FC: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA300:
    ctx->pc = 0x7F2FA300u;
    // 7F2FA300: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA304:
    ctx->pc = 0x7F2FA304u;
    // 7F2FA304: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA308:
    ctx->pc = 0x7F2FA308u;
    // 7F2FA308: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA30C:
    ctx->pc = 0x7F2FA30Cu;
    // 7F2FA30C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA310:
    ctx->pc = 0x7F2FA310u;
    // 7F2FA310: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA314:
    // 7F2FA314: bc    16, 0, 0x7F2FA2E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA2E8u;
                return;
            }
            goto label_7F2FA2E8;
        }
    }

label_7F2FA318:
    ctx->pc = 0x7F2FA318u;
    ctx->downcount -= 32;
    // 7F2FA318: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FA31C:
    ctx->pc = 0x7F2FA31Cu;
    // 7F2FA31C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA320:
    ctx->pc = 0x7F2FA320u;
    // 7F2FA320: addi    r5, r3, 31408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31408);

label_7F2FA324:
    ctx->pc = 0x7F2FA324u;
    // 7F2FA324: or   r23, r30, r30
    {
        ctx->gpr[23] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2FA328:
    ctx->pc = 0x7F2FA328u;
    // 7F2FA328: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA32C:
    ctx->pc = 0x7F2FA32Cu;
    // 7F2FA32C: addi    r25, r4, -1068
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FA330:
    ctx->pc = 0x7F2FA330u;
    // 7F2FA330: addi    r26, r3, -1084
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FA334:
    ctx->pc = 0x7F2FA334u;
    // 7F2FA334: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA338:
    ctx->pc = 0x7F2FA338u;
    // 7F2FA338: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA33C:
    ctx->pc = 0x7F2FA33Cu;
    // 7F2FA33C: lfs     f31, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA33Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2FA340:
    ctx->pc = 0x7F2FA340u;
    // 7F2FA340: addi    r28, r3, -1052
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA344:
    ctx->pc = 0x7F2FA344u;
    // 7F2FA344: stw     r25, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA348:
    ctx->pc = 0x7F2FA348u;
    // 7F2FA348: addi    r27, r4, -1148
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-1148);

label_7F2FA34C:
    ctx->pc = 0x7F2FA34Cu;
    // 7F2FA34C: rlwinm r19, r30, 2, 0, 29
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F2FA350:
    ctx->pc = 0x7F2FA350u;
    // 7F2FA350: stw     r25, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA354:
    ctx->pc = 0x7F2FA354u;
    // 7F2FA354: rlwinm r20, r30, 4, 0, 27
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[30], 4u) & 0xFFFFFFF0u;
    }

label_7F2FA358:
    ctx->pc = 0x7F2FA358u;
    // 7F2FA358: stw     r25, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA35C:
    ctx->pc = 0x7F2FA35Cu;
    // 7F2FA35C: stw     r28, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2FA360:
    ctx->pc = 0x7F2FA360u;
    // 7F2FA360: stw     r25, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA364:
    ctx->pc = 0x7F2FA364u;
    // 7F2FA364: stw     r26, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F2FA368:
    ctx->pc = 0x7F2FA368u;
    // 7F2FA368: stw     r25, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA36C:
    ctx->pc = 0x7F2FA36Cu;
    // 7F2FA36C: stw     r26, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F2FA370:
    ctx->pc = 0x7F2FA370u;
    // 7F2FA370: stw     r25, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA374:
    ctx->pc = 0x7F2FA374u;
    // 7F2FA374: stw     r28, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2FA378:
    ctx->pc = 0x7F2FA378u;
    // 7F2FA378: stw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2FA37C:
    ctx->pc = 0x7F2FA37Cu;
    // 7F2FA37C: stw     r25, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA380:
    ctx->pc = 0x7F2FA380u;
    // 7F2FA380: stw     r28, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2FA384:
    ctx->pc = 0x7F2FA384u;
    // 7F2FA384: stw     r25, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA388:
    ctx->pc = 0x7F2FA388u;
    // 7F2FA388: stw     r25, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA38C:
    ctx->pc = 0x7F2FA38Cu;
    // 7F2FA38C: stw     r28, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2FA390:
    ctx->pc = 0x7F2FA390u;
    // 7F2FA390: stw     r25, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2FA394:
    ctx->pc = 0x7F2FA394u;
    // 7F2FA394: b       0x7F2FAE68
    {
            goto label_7F2FAE68;
    }

label_7F2FA398:
    ctx->pc = 0x7F2FA398u;
    ctx->downcount -= 9;
    // 7F2FA398: lwz     r5, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA39C:
    // 7F2FA39C: addi    r16, r1, 24
    ctx->gpr[16] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2FA3A0:
    ctx->pc = 0x7F2FA3A0u;
    // 7F2FA3A0: lwz     r3, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA3A4:
    // 7F2FA3A4: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FA3A8:
    ctx->pc = 0x7F2FA3A8u;
    // 7F2FA3A8: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA3AC:
    ctx->pc = 0x7F2FA3ACu;
    // 7F2FA3AC: lwzx    r17, r5, r19
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[19];
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F2FA3B0:
    ctx->pc = 0x7F2FA3B0u;
    // 7F2FA3B0: lwzx    r18, r3, r19
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[19];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2FA3B4:
    // 7F2FA3B4: add   r3, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FA3B8:
    // 7F2FA3B8: bl      0x7F1FF888
    {
            ctx->lr = 0x7F2FA3BCu;
            ctx->pc = 0x7F1FF888u;
            return;
    }

label_7F2FA3BC:
    ctx->downcount -= 2;
    // 7F2FA3BC: cmpwi   r3, 0
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

label_7F2FA3C0:
    // 7F2FA3C0: bc    4, 2, 0x7F2FA3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA3D0;
        }
    }

label_7F2FA3C4:
    ctx->downcount -= 3;
    // 7F2FA3C4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2FA3C8:
    // 7F2FA3C8: addi    r0, r3, -4824
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2FA3CC:
    // 7F2FA3CC: or   r16, r0, r0
    {
        ctx->gpr[16] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2FA3D0:
    ctx->downcount -= 11;
    // 7F2FA3D0: rlwinm r3, r18, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[18], 6u) & 0xFFFFFFC0u;
    }

label_7F2FA3D4:
    // 7F2FA3D4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FA3D8:
    ctx->pc = 0x7F2FA3D8u;
    // 7F2FA3D8: stfs     f31, 12(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA3D8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2FA3DC:
    // 7F2FA3DC: addi    r5, r27, -4
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(-4);

label_7F2FA3E0:
    // 7F2FA3E0: add   r4, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA3E4:
    ctx->pc = 0x7F2FA3E4u;
    // 7F2FA3E4: stfs     f31, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA3E4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2FA3E8:
    ctx->pc = 0x7F2FA3E8u;
    // 7F2FA3E8: stfs     f31, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA3E8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2FA3EC:
    ctx->pc = 0x7F2FA3ECu;
    // 7F2FA3EC: stfs     f31, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA3ECu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2FA3F0:
    ctx->pc = 0x7F2FA3F0u;
    // 7F2FA3F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FA3F4:
    // 7F2FA3F4: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FA3F8:
    loop_7F2FA3F8(ctx);
    if (ctx->pc == 0x7F2FA40Cu) goto label_7F2FA40C;
    return;
label_7F2FA3FC:
    ctx->pc = 0x7F2FA3FCu;
    // 7F2FA3FC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FA400:
    ctx->pc = 0x7F2FA400u;
    // 7F2FA400: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA404:
    ctx->pc = 0x7F2FA404u;
    // 7F2FA404: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FA408:
    // 7F2FA408: bc    16, 0, 0x7F2FA3F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA3F8u;
                return;
            }
            goto label_7F2FA3F8;
        }
    }

label_7F2FA40C:
    ctx->pc = 0x7F2FA40Cu;
    ctx->downcount -= 22;
    // 7F2FA40C: lwz     r0, 364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA410:
    // 7F2FA410: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2FA414:
    // 7F2FA414: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2FA418:
    // 7F2FA418: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2FA41C:
    // 7F2FA41C: add   r7, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FA420:
    ctx->pc = 0x7F2FA420u;
    // 7F2FA420: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA424:
    ctx->pc = 0x7F2FA424u;
    // 7F2FA424: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA428:
    ctx->pc = 0x7F2FA428u;
    // 7F2FA428: stw     r6, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA42C:
    ctx->pc = 0x7F2FA42Cu;
    // 7F2FA42C: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA430:
    ctx->pc = 0x7F2FA430u;
    // 7F2FA430: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA434:
    ctx->pc = 0x7F2FA434u;
    // 7F2FA434: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA438:
    ctx->pc = 0x7F2FA438u;
    // 7F2FA438: stw     r6, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA43C:
    ctx->pc = 0x7F2FA43Cu;
    // 7F2FA43C: stw     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA440:
    ctx->pc = 0x7F2FA440u;
    // 7F2FA440: lwz     r6, 1344(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1344);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA444:
    ctx->pc = 0x7F2FA444u;
    // 7F2FA444: lwz     r0, 1348(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA448:
    ctx->pc = 0x7F2FA448u;
    // 7F2FA448: stw     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA44C:
    ctx->pc = 0x7F2FA44Cu;
    // 7F2FA44C: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA450:
    ctx->pc = 0x7F2FA450u;
    // 7F2FA450: lwz     r6, 1352(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1352);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA454:
    ctx->pc = 0x7F2FA454u;
    // 7F2FA454: lwz     r0, 1356(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA458:
    ctx->pc = 0x7F2FA458u;
    // 7F2FA458: stw     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA45C:
    ctx->pc = 0x7F2FA45Cu;
    // 7F2FA45C: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA460:
    // 7F2FA460: bl      0x7F114508
    {
            ctx->lr = 0x7F2FA464u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2FA464:
    ctx->pc = 0x7F2FA464u;
    ctx->downcount -= 4;
    // 7F2FA464: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA464u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA468:
    // 7F2FA468: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2FA46C:
    // 7F2FA46C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2FA470:
    // 7F2FA470: bl      0x80026020
    {
            ctx->lr = 0x7F2FA474u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA474:
    ctx->pc = 0x7F2FA474u;
    ctx->downcount -= 4;
    // 7F2FA474: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA474u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA478:
    ctx->pc = 0x7F2FA478u;
    // 7F2FA478: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA47C:
    ctx->pc = 0x7F2FA47Cu;
    // 7F2FA47C: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA480:
    // 7F2FA480: bl      0x80026020
    {
            ctx->lr = 0x7F2FA484u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA484:
    ctx->pc = 0x7F2FA484u;
    ctx->downcount -= 12;
    // 7F2FA484: lwz     r6, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA488:
    ctx->pc = 0x7F2FA488u;
    // 7F2FA488: lwz     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA48C:
    ctx->pc = 0x7F2FA48Cu;
    // 7F2FA48C: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA490:
    ctx->pc = 0x7F2FA490u;
    // 7F2FA490: stw     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA494:
    ctx->pc = 0x7F2FA494u;
    // 7F2FA494: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA498:
    ctx->pc = 0x7F2FA498u;
    // 7F2FA498: stw     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA49C:
    ctx->pc = 0x7F2FA49Cu;
    // 7F2FA49C: lwz     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA4A0:
    ctx->pc = 0x7F2FA4A0u;
    // 7F2FA4A0: lwz     r6, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA4A4:
    ctx->pc = 0x7F2FA4A4u;
    // 7F2FA4A4: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA4A8:
    ctx->pc = 0x7F2FA4A8u;
    // 7F2FA4A8: stw     r6, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA4AC:
    ctx->pc = 0x7F2FA4ACu;
    // 7F2FA4AC: stw     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA4B0:
    // 7F2FA4B0: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA4B4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA4B4:
    ctx->pc = 0x7F2FA4B4u;
    ctx->downcount -= 4;
    // 7F2FA4B4: lfs     f1, 392(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA4B4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA4B8:
    // 7F2FA4B8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2FA4BC:
    ctx->pc = 0x7F2FA4BCu;
    // 7F2FA4BC: lwz     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA4C0:
    // 7F2FA4C0: bl      0x80026020
    {
            ctx->lr = 0x7F2FA4C4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA4C4:
    ctx->pc = 0x7F2FA4C4u;
    ctx->downcount -= 14;
    // 7F2FA4C4: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA4C8:
    ctx->pc = 0x7F2FA4C8u;
    // 7F2FA4C8: lwz     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA4CC:
    // 7F2FA4CC: add   r7, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FA4D0:
    ctx->pc = 0x7F2FA4D0u;
    // 7F2FA4D0: lwz     r4, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA4D4:
    ctx->pc = 0x7F2FA4D4u;
    // 7F2FA4D4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA4D8:
    ctx->pc = 0x7F2FA4D8u;
    // 7F2FA4D8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA4DC:
    ctx->pc = 0x7F2FA4DCu;
    // 7F2FA4DC: lwz     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA4E0:
    ctx->pc = 0x7F2FA4E0u;
    // 7F2FA4E0: stw     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA4E4:
    ctx->pc = 0x7F2FA4E4u;
    // 7F2FA4E4: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA4E8:
    ctx->pc = 0x7F2FA4E8u;
    // 7F2FA4E8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA4EC:
    ctx->pc = 0x7F2FA4ECu;
    // 7F2FA4EC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA4F0:
    ctx->pc = 0x7F2FA4F0u;
    // 7F2FA4F0: stw     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA4F4:
    ctx->pc = 0x7F2FA4F4u;
    // 7F2FA4F4: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA4F8:
    // 7F2FA4F8: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA4FCu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA4FC:
    ctx->pc = 0x7F2FA4FCu;
    ctx->downcount -= 4;
    // 7F2FA4FC: lfs     f1, 400(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA4FCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA500:
    ctx->pc = 0x7F2FA500u;
    // 7F2FA500: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA504:
    ctx->pc = 0x7F2FA504u;
    // 7F2FA504: lwz     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA508:
    // 7F2FA508: bl      0x80026020
    {
            ctx->lr = 0x7F2FA50Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA50C:
    ctx->pc = 0x7F2FA50Cu;
    ctx->downcount -= 4;
    // 7F2FA50C: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA510:
    ctx->pc = 0x7F2FA510u;
    // 7F2FA510: lwz     r4, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA514:
    ctx->pc = 0x7F2FA514u;
    // 7F2FA514: lwz     r5, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA518:
    // 7F2FA518: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA51Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA51C:
    ctx->downcount -= 2;
    // 7F2FA51C: cmpw    r17, r30
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA520:
    // 7F2FA520: bc    12, 0, 0x7F2FA680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA680;
        }
    }

label_7F2FA524:
    ctx->pc = 0x7F2FA524u;
    ctx->downcount -= 27;
    // 7F2FA524: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA528:
    // 7F2FA528: rlwinm r0, r17, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[17], 2u) & 0xFFFFFFFCu;
    }

label_7F2FA52C:
    ctx->pc = 0x7F2FA52Cu;
    // 7F2FA52C: lwz     r4, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA530:
    // 7F2FA530: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA534:
    // 7F2FA534: add   r8, r6, r20
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FA538:
    // 7F2FA538: rlwinm r16, r17, 4, 0, 27
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[17], 4u) & 0xFFFFFFF0u;
    }

label_7F2FA53C:
    ctx->pc = 0x7F2FA53Cu;
    // 7F2FA53C: lwzx    r18, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2FA540:
    // 7F2FA540: add   r6, r6, r16
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FA544:
    ctx->pc = 0x7F2FA544u;
    // 7F2FA544: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA548:
    // 7F2FA548: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA54C:
    ctx->pc = 0x7F2FA54Cu;
    // 7F2FA54C: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA550:
    ctx->pc = 0x7F2FA550u;
    // 7F2FA550: stwu     r5, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[3] = ea;
    }

label_7F2FA554:
    ctx->pc = 0x7F2FA554u;
    // 7F2FA554: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA558:
    // 7F2FA558: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA55C:
    ctx->pc = 0x7F2FA55Cu;
    // 7F2FA55C: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA560:
    ctx->pc = 0x7F2FA560u;
    // 7F2FA560: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA564:
    ctx->pc = 0x7F2FA564u;
    // 7F2FA564: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FA568:
    ctx->pc = 0x7F2FA568u;
    // 7F2FA568: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA56C:
    ctx->pc = 0x7F2FA56Cu;
    // 7F2FA56C: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA570:
    ctx->pc = 0x7F2FA570u;
    // 7F2FA570: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA574:
    ctx->pc = 0x7F2FA574u;
    // 7F2FA574: stwu     r7, -1084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1084);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

label_7F2FA578:
    ctx->pc = 0x7F2FA578u;
    // 7F2FA578: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA57C:
    ctx->pc = 0x7F2FA57Cu;
    // 7F2FA57C: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA580:
    ctx->pc = 0x7F2FA580u;
    // 7F2FA580: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA584:
    ctx->pc = 0x7F2FA584u;
    // 7F2FA584: stw     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FA588:
    ctx->pc = 0x7F2FA588u;
    // 7F2FA588: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA58C:
    // 7F2FA58C: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FA590u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FA590:
    ctx->pc = 0x7F2FA590u;
    ctx->downcount -= 22;
    // 7F2FA590: lwz     r0, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA594:
    // 7F2FA594: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FA598:
    // 7F2FA598: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA59C:
    // 7F2FA59C: rlwinm r4, r18, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[18], 6u) & 0xFFFFFFC0u;
    }

label_7F2FA5A0:
    // 7F2FA5A0: add   r8, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FA5A4:
    // 7F2FA5A4: addi    r9, r5, -1084
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F2FA5A8:
    ctx->pc = 0x7F2FA5A8u;
    // 7F2FA5A8: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA5AC:
    // 7F2FA5AC: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2FA5B0:
    ctx->pc = 0x7F2FA5B0u;
    // 7F2FA5B0: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA5B4:
    // 7F2FA5B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FA5B8:
    // 7F2FA5B8: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2FA5BC:
    ctx->pc = 0x7F2FA5BCu;
    // 7F2FA5BC: stw     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FA5C0:
    ctx->pc = 0x7F2FA5C0u;
    // 7F2FA5C0: stw     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA5C4:
    ctx->pc = 0x7F2FA5C4u;
    // 7F2FA5C4: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA5C8:
    ctx->pc = 0x7F2FA5C8u;
    // 7F2FA5C8: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA5CC:
    ctx->pc = 0x7F2FA5CCu;
    // 7F2FA5CC: stw     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA5D0:
    ctx->pc = 0x7F2FA5D0u;
    // 7F2FA5D0: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA5D4:
    ctx->pc = 0x7F2FA5D4u;
    // 7F2FA5D4: lwz     r3, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA5D8:
    // 7F2FA5D8: add   r4, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA5DC:
    ctx->pc = 0x7F2FA5DCu;
    // 7F2FA5DC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FA5E0:
    // 7F2FA5E0: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FA5E4:
    loop_7F2FA5E4(ctx);
    if (ctx->pc == 0x7F2FA5F8u) goto label_7F2FA5F8;
    return;
label_7F2FA5E8:
    ctx->pc = 0x7F2FA5E8u;
    // 7F2FA5E8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FA5EC:
    ctx->pc = 0x7F2FA5ECu;
    // 7F2FA5EC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA5F0:
    ctx->pc = 0x7F2FA5F0u;
    // 7F2FA5F0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FA5F4:
    // 7F2FA5F4: bc    16, 0, 0x7F2FA5E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA5E4u;
                return;
            }
            goto label_7F2FA5E4;
        }
    }

label_7F2FA5F8:
    ctx->downcount -= 17;
    // 7F2FA5F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FA5FC:
    // 7F2FA5FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FA600:
    // 7F2FA600: addi    r5, r3, 31408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31408);

label_7F2FA604:
    // 7F2FA604: addi    r0, r16, 12
    ctx->gpr[0] = ctx->gpr[16] + (u32)(s32)(12);

label_7F2FA608:
    ctx->pc = 0x7F2FA608u;
    // 7F2FA608: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA608u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA60C:
    // 7F2FA60C: addi    r5, r4, 31424
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(31424);

label_7F2FA610:
    // 7F2FA610: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA614:
    // 7F2FA614: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA618:
    ctx->pc = 0x7F2FA618u;
    // 7F2FA618: stfs     f0, 12(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA618u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FA61C:
    // 7F2FA61C: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FA620:
    ctx->pc = 0x7F2FA620u;
    // 7F2FA620: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA620u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA624:
    // 7F2FA624: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2FA628:
    ctx->pc = 0x7F2FA628u;
    // 7F2FA628: lwz     r6, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA62C:
    // 7F2FA62C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FA630:
    ctx->pc = 0x7F2FA630u;
    // 7F2FA630: lfsx    f1, r6, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA630u)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA634:
    ctx->pc = 0x7F2FA634u;
    // 7F2FA634: fnmsubs f30, f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA634u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_7F2FA638:
    // 7F2FA638: bl      0x7F114508
    {
            ctx->lr = 0x7F2FA63Cu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2FA63C:
    ctx->pc = 0x7F2FA63Cu;
    ctx->downcount -= 8;
    // 7F2FA63C: lfs     f0, 412(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA63Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA640:
    // 7F2FA640: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA644:
    // 7F2FA644: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA648:
    // 7F2FA648: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA64C:
    ctx->pc = 0x7F2FA64Cu;
    // 7F2FA64C: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA64Cu)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_7F2FA650:
    // 7F2FA650: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FA654:
    // 7F2FA654: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA658:
    // 7F2FA658: bl      0x800260FC
    {
            ctx->lr = 0x7F2FA65Cu;
            ctx->pc = 0x800260FCu;
            return;
    }

label_7F2FA65C:
    ctx->downcount -= 3;
    // 7F2FA65C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA660:
    // 7F2FA660: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA664:
    // 7F2FA664: bl      0x80026080
    {
            ctx->lr = 0x7F2FA668u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FA668:
    ctx->pc = 0x7F2FA668u;
    ctx->downcount -= 2;
    // 7F2FA668: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FA668u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_7F2FA66C:
    // 7F2FA66C: bl      0x7F2FBBF8
    {
            ctx->lr = 0x7F2FA670u;
            goto label_7F2FBBF8;
    }

label_7F2FA670:
    ctx->downcount -= 4;
    // 7F2FA670: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA674:
    // 7F2FA674: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA678:
    // 7F2FA678: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA67C:
    // 7F2FA67C: bl      0x80026020
    {
            ctx->lr = 0x7F2FA680u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA680:
    ctx->pc = 0x7F2FA680u;
    ctx->downcount -= 4;
    // 7F2FA680: lwz     r3, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA684:
    ctx->pc = 0x7F2FA684u;
    // 7F2FA684: lwz     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA688:
    ctx->pc = 0x7F2FA688u;
    // 7F2FA688: lwz     r5, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA68C:
    // 7F2FA68C: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA690u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA690:
    ctx->pc = 0x7F2FA690u;
    ctx->downcount -= 13;
    // 7F2FA690: lwz     r4, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA694:
    ctx->pc = 0x7F2FA694u;
    // 7F2FA694: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA698:
    ctx->pc = 0x7F2FA698u;
    // 7F2FA698: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA69C:
    // 7F2FA69C: add   r4, r4, r20
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA6A0:
    ctx->pc = 0x7F2FA6A0u;
    // 7F2FA6A0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA6A4:
    ctx->pc = 0x7F2FA6A4u;
    // 7F2FA6A4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA6A8:
    ctx->pc = 0x7F2FA6A8u;
    // 7F2FA6A8: lwz     r3, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA6AC:
    ctx->pc = 0x7F2FA6ACu;
    // 7F2FA6AC: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA6B0:
    ctx->pc = 0x7F2FA6B0u;
    // 7F2FA6B0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA6B4:
    ctx->pc = 0x7F2FA6B4u;
    // 7F2FA6B4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA6B8:
    ctx->pc = 0x7F2FA6B8u;
    // 7F2FA6B8: lwz     r16, 428(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(428);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F2FA6BC:
    // 7F2FA6BC: cmpwi   r16, 0
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

label_7F2FA6C0:
    // 7F2FA6C0: bc    12, 2, 0x7F2FAE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE5C;
        }
    }

label_7F2FA6C4:
    ctx->pc = 0x7F2FA6C4u;
    ctx->downcount -= 3;
    // 7F2FA6C4: lwz     r4, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA6C8:
    // 7F2FA6C8: cmplwi  r4, 0x0000
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

label_7F2FA6CC:
    // 7F2FA6CC: bc    12, 2, 0x7F2FAABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAABC;
        }
    }

label_7F2FA6D0:
    ctx->downcount -= 2;
    // 7F2FA6D0: cmpwi   r16, 0
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

label_7F2FA6D4:
    // 7F2FA6D4: bc    4, 0, 0x7F2FA734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA734;
        }
    }

label_7F2FA6D8:
    ctx->pc = 0x7F2FA6D8u;
    ctx->downcount -= 3;
    // 7F2FA6D8: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA6DC:
    // 7F2FA6DC: cmplwi  r5, 0x0000
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

label_7F2FA6E0:
    // 7F2FA6E0: bc    12, 2, 0x7F2FA70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA70C;
        }
    }

label_7F2FA6E4:
    ctx->pc = 0x7F2FA6E4u;
    ctx->downcount -= 7;
    // 7F2FA6E4: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA6E8:
    // 7F2FA6E8: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FA6EC:
    ctx->pc = 0x7F2FA6ECu;
    // 7F2FA6EC: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA6F0:
    ctx->pc = 0x7F2FA6F0u;
    // 7F2FA6F0: lfs     f1, 416(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA6F0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA6F4:
    // 7F2FA6F4: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA6F8:
    ctx->pc = 0x7F2FA6F8u;
    // 7F2FA6F8: lwz     r7, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA6FC:
    // 7F2FA6FC: bl      0x7F0FCDEC
    {
            ctx->lr = 0x7F2FA700u;
            ctx->pc = 0x7F0FCDECu;
            return;
    }

label_7F2FA700:
    ctx->downcount -= 2;
    // 7F2FA700: cmpwi   r3, 0
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

label_7F2FA704:
    // 7F2FA704: bc    12, 2, 0x7F2FA978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA978;
        }
    }

label_7F2FA708:
    ctx->downcount -= 1;
    // 7F2FA708: b       0x7F2FA804
    {
            goto label_7F2FA804;
    }

label_7F2FA70C:
    ctx->pc = 0x7F2FA70Cu;
    ctx->downcount -= 7;
    // 7F2FA70C: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA710:
    // 7F2FA710: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FA714:
    ctx->pc = 0x7F2FA714u;
    // 7F2FA714: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA718:
    ctx->pc = 0x7F2FA718u;
    // 7F2FA718: lfs     f1, 416(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA718u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA71C:
    // 7F2FA71C: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA720:
    ctx->pc = 0x7F2FA720u;
    // 7F2FA720: lwz     r6, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA724:
    // 7F2FA724: bl      0x7F0FCD2C
    {
            ctx->lr = 0x7F2FA728u;
            ctx->pc = 0x7F0FCD2Cu;
            return;
    }

label_7F2FA728:
    ctx->downcount -= 2;
    // 7F2FA728: cmpwi   r3, 0
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

label_7F2FA72C:
    // 7F2FA72C: bc    12, 2, 0x7F2FA978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA978;
        }
    }

label_7F2FA730:
    ctx->downcount -= 1;
    // 7F2FA730: b       0x7F2FA804
    {
            goto label_7F2FA804;
    }

label_7F2FA734:
    ctx->pc = 0x7F2FA734u;
    ctx->downcount -= 14;
    // 7F2FA734: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA738:
    // 7F2FA738: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F2FA73C:
    // 7F2FA73C: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA740:
    ctx->pc = 0x7F2FA740u;
    // 7F2FA740: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA744:
    ctx->pc = 0x7F2FA744u;
    // 7F2FA744: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA748:
    ctx->pc = 0x7F2FA748u;
    // 7F2FA748: stw     r3, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA74C:
    ctx->pc = 0x7F2FA74Cu;
    // 7F2FA74C: stw     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA750:
    ctx->pc = 0x7F2FA750u;
    // 7F2FA750: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA754:
    ctx->pc = 0x7F2FA754u;
    // 7F2FA754: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA758:
    ctx->pc = 0x7F2FA758u;
    // 7F2FA758: stw     r3, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA75C:
    ctx->pc = 0x7F2FA75Cu;
    // 7F2FA75C: stw     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA760:
    ctx->pc = 0x7F2FA760u;
    // 7F2FA760: lwz     r0, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA764:
    // 7F2FA764: cmplwi  r0, 0x0000
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

label_7F2FA768:
    // 7F2FA768: bc    12, 2, 0x7F2FA7B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA7B8;
        }
    }

label_7F2FA76C:
    ctx->downcount -= 2;
    // 7F2FA76C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FA770:
    // 7F2FA770: b       0x7F2FA7AC
    {
            goto label_7F2FA7AC;
    }

label_7F2FA774:
    ctx->downcount -= 12;
    // 7F2FA774: addi    r0, r17, 432
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(432);

label_7F2FA778:
    ctx->pc = 0x7F2FA778u;
    // 7F2FA778: lwz     r6, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA77C:
    ctx->pc = 0x7F2FA77Cu;
    // 7F2FA77C: lbzx    r7, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F2FA780:
    // 7F2FA780: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FA784:
    ctx->pc = 0x7F2FA784u;
    // 7F2FA784: lwz     r8, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2FA788:
    // 7F2FA788: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA78C:
    // 7F2FA78C: rlwinm r0, r7, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 6u) & 0xFFFFFFC0u;
    }

label_7F2FA790:
    ctx->pc = 0x7F2FA790u;
    // 7F2FA790: lwz     r5, 476(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA794:
    ctx->pc = 0x7F2FA794u;
    // 7F2FA794: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA798:
    // 7F2FA798: add   r8, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FA79C:
    ctx->pc = 0x7F2FA79Cu;
    // 7F2FA79C: lfs     f1, 416(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA79Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA7A0:
    // 7F2FA7A0: bl      0x7F0FCF10
    {
            ctx->lr = 0x7F2FA7A4u;
            ctx->pc = 0x7F0FCF10u;
            return;
    }

label_7F2FA7A4:
    ctx->downcount -= 2;
    // 7F2FA7A4: or   r22, r22, r3
    {
        ctx->gpr[22] = ctx->gpr[22] | ctx->gpr[3];
    }

label_7F2FA7A8:
    // 7F2FA7A8: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2FA7AC:
    ctx->downcount -= 2;
    // 7F2FA7AC: cmpw    r17, r16
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[16]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA7B0:
    // 7F2FA7B0: bc    12, 0, 0x7F2FA774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA774u;
                return;
            }
            goto label_7F2FA774;
        }
    }

label_7F2FA7B4:
    ctx->downcount -= 1;
    // 7F2FA7B4: b       0x7F2FA7FC
    {
            goto label_7F2FA7FC;
    }

label_7F2FA7B8:
    ctx->downcount -= 2;
    // 7F2FA7B8: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FA7BC:
    // 7F2FA7BC: b       0x7F2FA7F4
    {
            goto label_7F2FA7F4;
    }

label_7F2FA7C0:
    ctx->downcount -= 11;
    // 7F2FA7C0: addi    r0, r17, 432
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(432);

label_7F2FA7C4:
    ctx->pc = 0x7F2FA7C4u;
    // 7F2FA7C4: lwz     r5, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA7C8:
    ctx->pc = 0x7F2FA7C8u;
    // 7F2FA7C8: lbzx    r6, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F2FA7CC:
    // 7F2FA7CC: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FA7D0:
    ctx->pc = 0x7F2FA7D0u;
    // 7F2FA7D0: lwz     r7, 1360(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1360);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA7D4:
    // 7F2FA7D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA7D8:
    // 7F2FA7D8: rlwinm r0, r6, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_7F2FA7DC:
    ctx->pc = 0x7F2FA7DCu;
    // 7F2FA7DC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA7E0:
    ctx->pc = 0x7F2FA7E0u;
    // 7F2FA7E0: lfs     f1, 416(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA7E0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA7E4:
    // 7F2FA7E4: add   r7, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FA7E8:
    // 7F2FA7E8: bl      0x7F0FCEA8
    {
            ctx->lr = 0x7F2FA7ECu;
            ctx->pc = 0x7F0FCEA8u;
            return;
    }

label_7F2FA7EC:
    ctx->downcount -= 2;
    // 7F2FA7EC: or   r22, r22, r3
    {
        ctx->gpr[22] = ctx->gpr[22] | ctx->gpr[3];
    }

label_7F2FA7F0:
    // 7F2FA7F0: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2FA7F4:
    ctx->downcount -= 2;
    // 7F2FA7F4: cmpw    r17, r16
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[16]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA7F8:
    // 7F2FA7F8: bc    12, 0, 0x7F2FA7C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA7C0u;
                return;
            }
            goto label_7F2FA7C0;
        }
    }

label_7F2FA7FC:
    ctx->downcount -= 2;
    // 7F2FA7FC: cmpwi   r22, 0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA800:
    // 7F2FA800: bc    12, 2, 0x7F2FA978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FA978;
        }
    }

label_7F2FA804:
    ctx->pc = 0x7F2FA804u;
    ctx->downcount -= 28;
    // 7F2FA804: lwz     r9, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FA808:
    // 7F2FA808: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA80C:
    ctx->pc = 0x7F2FA80Cu;
    // 7F2FA80C: lwz     r8, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2FA810:
    // 7F2FA810: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA814:
    ctx->pc = 0x7F2FA814u;
    // 7F2FA814: stwu     r9, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
        ctx->gpr[3] = ea;
    }

label_7F2FA818:
    ctx->pc = 0x7F2FA818u;
    // 7F2FA818: stw     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2FA81C:
    // 7F2FA81C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA820:
    ctx->pc = 0x7F2FA820u;
    // 7F2FA820: lwz     r6, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA824:
    ctx->pc = 0x7F2FA824u;
    // 7F2FA824: lwz     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA828:
    ctx->pc = 0x7F2FA828u;
    // 7F2FA828: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA82C:
    ctx->pc = 0x7F2FA82Cu;
    // 7F2FA82C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA830:
    ctx->pc = 0x7F2FA830u;
    // 7F2FA830: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA834:
    // 7F2FA834: add   r7, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FA838:
    ctx->pc = 0x7F2FA838u;
    // 7F2FA838: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA83C:
    ctx->pc = 0x7F2FA83Cu;
    // 7F2FA83C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA840:
    ctx->pc = 0x7F2FA840u;
    // 7F2FA840: stwu     r6, -1068(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[4] = ea;
    }

label_7F2FA844:
    ctx->pc = 0x7F2FA844u;
    // 7F2FA844: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA848:
    ctx->pc = 0x7F2FA848u;
    // 7F2FA848: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA84C:
    ctx->pc = 0x7F2FA84Cu;
    // 7F2FA84C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA850:
    ctx->pc = 0x7F2FA850u;
    // 7F2FA850: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA854:
    ctx->pc = 0x7F2FA854u;
    // 7F2FA854: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA858:
    ctx->pc = 0x7F2FA858u;
    // 7F2FA858: stw     r9, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2FA85C:
    ctx->pc = 0x7F2FA85Cu;
    // 7F2FA85C: stw     r8, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2FA860:
    ctx->pc = 0x7F2FA860u;
    // 7F2FA860: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FA864:
    ctx->pc = 0x7F2FA864u;
    // 7F2FA864: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA868:
    ctx->pc = 0x7F2FA868u;
    // 7F2FA868: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FA86C:
    ctx->pc = 0x7F2FA86Cu;
    // 7F2FA86C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA870:
    // 7F2FA870: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FA874u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FA874:
    ctx->pc = 0x7F2FA874u;
    ctx->downcount -= 15;
    // 7F2FA874: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA878:
    // 7F2FA878: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA87C:
    // 7F2FA87C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA880:
    // 7F2FA880: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FA884:
    // 7F2FA884: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FA888:
    ctx->pc = 0x7F2FA888u;
    // 7F2FA888: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA88C:
    // 7F2FA88C: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA890:
    ctx->pc = 0x7F2FA890u;
    // 7F2FA890: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA894:
    ctx->pc = 0x7F2FA894u;
    // 7F2FA894: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA898:
    ctx->pc = 0x7F2FA898u;
    // 7F2FA898: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA89C:
    ctx->pc = 0x7F2FA89Cu;
    // 7F2FA89C: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA8A0:
    ctx->pc = 0x7F2FA8A0u;
    // 7F2FA8A0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA8A4:
    ctx->pc = 0x7F2FA8A4u;
    // 7F2FA8A4: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FA8A8:
    ctx->pc = 0x7F2FA8A8u;
    // 7F2FA8A8: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA8AC:
    // 7F2FA8AC: bl      0x80026080
    {
            ctx->lr = 0x7F2FA8B0u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FA8B0:
    ctx->downcount -= 3;
    // 7F2FA8B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FA8B4:
    ctx->pc = 0x7F2FA8B4u;
    // 7F2FA8B4: lfs     f2, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA8B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FA8B8:
    // 7F2FA8B8: bl      0x7F2FBBF8
    {
            ctx->lr = 0x7F2FA8BCu;
            goto label_7F2FBBF8;
    }

label_7F2FA8BC:
    ctx->downcount -= 4;
    // 7F2FA8BC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA8C0:
    // 7F2FA8C0: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA8C4:
    // 7F2FA8C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA8C8:
    // 7F2FA8C8: bl      0x80026020
    {
            ctx->lr = 0x7F2FA8CCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA8CC:
    ctx->downcount -= 5;
    // 7F2FA8CC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA8D0:
    // 7F2FA8D0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA8D4:
    // 7F2FA8D4: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA8D8:
    // 7F2FA8D8: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FA8DC:
    // 7F2FA8DC: bl      0x800260DC
    {
            ctx->lr = 0x7F2FA8E0u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2FA8E0:
    ctx->pc = 0x7F2FA8E0u;
    ctx->downcount -= 20;
    // 7F2FA8E0: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA8E4:
    // 7F2FA8E4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA8E8:
    // 7F2FA8E8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA8EC:
    // 7F2FA8EC: add   r6, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FA8F0:
    // 7F2FA8F0: addi    r7, r4, -1068
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FA8F4:
    ctx->pc = 0x7F2FA8F4u;
    // 7F2FA8F4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA8F8:
    // 7F2FA8F8: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FA8FC:
    ctx->pc = 0x7F2FA8FCu;
    // 7F2FA8FC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA900:
    // 7F2FA900: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA904:
    ctx->pc = 0x7F2FA904u;
    // 7F2FA904: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FA908:
    ctx->pc = 0x7F2FA908u;
    // 7F2FA908: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA90C:
    ctx->pc = 0x7F2FA90Cu;
    // 7F2FA90C: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FA910:
    ctx->pc = 0x7F2FA910u;
    // 7F2FA910: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA914:
    ctx->pc = 0x7F2FA914u;
    // 7F2FA914: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FA918:
    ctx->pc = 0x7F2FA918u;
    // 7F2FA918: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA91C:
    ctx->pc = 0x7F2FA91Cu;
    // 7F2FA91C: lfs     f0, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA91Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA920:
    ctx->pc = 0x7F2FA920u;
    // 7F2FA920: lfs     f2, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA920u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FA924:
    ctx->pc = 0x7F2FA924u;
    // 7F2FA924: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA924u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2FA928:
    ctx->pc = 0x7F2FA928u;
    // 7F2FA928: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA928u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F2FA92C:
    // 7F2FA92C: bl      0x80026020
    {
            ctx->lr = 0x7F2FA930u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FA930:
    ctx->downcount -= 6;
    // 7F2FA930: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA934:
    // 7F2FA934: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FA938:
    // 7F2FA938: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FA93C:
    // 7F2FA93C: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2FA940:
    // 7F2FA940: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FA944:
    // 7F2FA944: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FA948u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FA948:
    ctx->downcount -= 12;
    // 7F2FA948: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FA94C:
    ctx->pc = 0x7F2FA94Cu;
    // 7F2FA94C: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA950:
    // 7F2FA950: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FA954:
    ctx->pc = 0x7F2FA954u;
    // 7F2FA954: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA958:
    // 7F2FA958: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FA95C:
    ctx->pc = 0x7F2FA95Cu;
    // 7F2FA95C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA960:
    ctx->pc = 0x7F2FA960u;
    // 7F2FA960: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA964:
    ctx->pc = 0x7F2FA964u;
    // 7F2FA964: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA968:
    ctx->pc = 0x7F2FA968u;
    // 7F2FA968: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FA96C:
    ctx->pc = 0x7F2FA96Cu;
    // 7F2FA96C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA970:
    ctx->pc = 0x7F2FA970u;
    // 7F2FA970: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FA974:
    ctx->pc = 0x7F2FA974u;
    // 7F2FA974: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA978:
    ctx->pc = 0x7F2FA978u;
    ctx->downcount -= 3;
    // 7F2FA978: lwz     r0, 1560(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA97C:
    // 7F2FA97C: rlwinm. r0, r0, 0, 31, 31
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

label_7F2FA980:
    // 7F2FA980: bc    12, 2, 0x7F2FAE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE5C;
        }
    }

label_7F2FA984:
    ctx->pc = 0x7F2FA984u;
    ctx->downcount -= 3;
    // 7F2FA984: lwz     r0, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA988:
    // 7F2FA988: cmpwi   r0, -2000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-2000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FA98C:
    // 7F2FA98C: bc    4, 1, 0x7F2FAE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE5C;
        }
    }

label_7F2FA990:
    ctx->pc = 0x7F2FA990u;
    ctx->downcount -= 5;
    // 7F2FA990: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FA994:
    // 7F2FA994: addi    r3, r24, 1556
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1556);

label_7F2FA998:
    // 7F2FA998: addi    r5, r24, 1388
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(1388);

label_7F2FA99C:
    // 7F2FA99C: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FA9A0:
    // 7F2FA9A0: bl      0x7F1070C0
    {
            ctx->lr = 0x7F2FA9A4u;
            ctx->pc = 0x7F1070C0u;
            return;
    }

label_7F2FA9A4:
    ctx->pc = 0x7F2FA9A4u;
    ctx->downcount -= 18;
    // 7F2FA9A4: lwz     r4, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA9A8:
    // 7F2FA9A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2FA9AC:
    ctx->pc = 0x7F2FA9ACu;
    // 7F2FA9AC: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA9B0:
    // 7F2FA9B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FA9B4:
    // 7F2FA9B4: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2FA9B8:
    ctx->pc = 0x7F2FA9B8u;
    // 7F2FA9B8: lfd     f1, 31416(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31416);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FA9BC:
    ctx->pc = 0x7F2FA9BCu;
    // 7F2FA9BC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FA9C0:
    // 7F2FA9C0: addi    r0, r20, 4
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(4);

label_7F2FA9C4:
    ctx->pc = 0x7F2FA9C4u;
    // 7F2FA9C4: lfs     f2, 1556(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9C4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FA9C8:
    ctx->pc = 0x7F2FA9C8u;
    // 7F2FA9C8: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FA9CC:
    ctx->pc = 0x7F2FA9CCu;
    // 7F2FA9CC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9CCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2FA9D0:
    ctx->pc = 0x7F2FA9D0u;
    // 7F2FA9D0: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9D0u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2FA9D4:
    ctx->pc = 0x7F2FA9D4u;
    // 7F2FA9D4: stfs     f0, 1556(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9D4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1556);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FA9D8:
    ctx->pc = 0x7F2FA9D8u;
    // 7F2FA9D8: lwz     r7, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FA9DC:
    ctx->pc = 0x7F2FA9DCu;
    // 7F2FA9DC: lfs     f0, 1556(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9DCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FA9E0:
    ctx->pc = 0x7F2FA9E0u;
    // 7F2FA9E0: lfsx    f1, r7, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9E0u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FA9E4:
    ctx->pc = 0x7F2FA9E4u;
    // 7F2FA9E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FA9E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2FA9E8:
    // 7F2FA9E8: bc    4, 0, 0x7F2FAE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE5C;
        }
    }

label_7F2FA9EC:
    ctx->pc = 0x7F2FA9ECu;
    ctx->downcount -= 33;
    // 7F2FA9EC: lwz     r4, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FA9F0:
    // 7F2FA9F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FA9F4:
    // 7F2FA9F4: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F2FA9F8:
    // 7F2FA9F8: lis     r8, 32587
    ctx->gpr[8] = ((u32)(s32)(32587) << 16);

label_7F2FA9FC:
    // 7F2FA9FC: add   r5, r4, r20
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FAA00:
    // 7F2FAA00: addi    r11, r3, 31460
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(31460);

label_7F2FAA04:
    ctx->pc = 0x7F2FAA04u;
    // 7F2FAA04: lwz     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FAA08:
    // 7F2FAA08: addi    r3, r8, -1052
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(-1052);

label_7F2FAA0C:
    ctx->pc = 0x7F2FAA0Cu;
    // 7F2FAA0C: lwz     r9, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FAA10:
    // 7F2FAA10: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAA14:
    ctx->pc = 0x7F2FAA14u;
    // 7F2FAA14: lwz     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2FAA18:
    // 7F2FAA18: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAA1C:
    ctx->pc = 0x7F2FAA1Cu;
    // 7F2FAA1C: stwu     r10, -1068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
        ctx->gpr[6] = ea;
    }

label_7F2FAA20:
    ctx->pc = 0x7F2FAA20u;
    // 7F2FAA20: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FAA24:
    ctx->pc = 0x7F2FAA24u;
    // 7F2FAA24: stw     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2FAA28:
    ctx->pc = 0x7F2FAA28u;
    // 7F2FAA28: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FAA2C:
    ctx->pc = 0x7F2FAA2Cu;
    // 7F2FAA2C: lwz     r16, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F2FAA30:
    ctx->pc = 0x7F2FAA30u;
    // 7F2FAA30: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2FAA34:
    ctx->pc = 0x7F2FAA34u;
    // 7F2FAA34: lwz     r5, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAA38:
    ctx->pc = 0x7F2FAA38u;
    // 7F2FAA38: stw     r16, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2FAA3C:
    ctx->pc = 0x7F2FAA3Cu;
    // 7F2FAA3C: stw     r12, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2FAA40:
    ctx->pc = 0x7F2FAA40u;
    // 7F2FAA40: stfsx    f0, r7, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA40u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FAA44:
    ctx->pc = 0x7F2FAA44u;
    // 7F2FAA44: stw     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2FAA48:
    ctx->pc = 0x7F2FAA48u;
    // 7F2FAA48: stw     r9, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2FAA4C:
    ctx->pc = 0x7F2FAA4Cu;
    // 7F2FAA4C: stw     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2FAA50:
    ctx->pc = 0x7F2FAA50u;
    // 7F2FAA50: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAA54:
    ctx->pc = 0x7F2FAA54u;
    // 7F2FAA54: lwz     r5, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAA58:
    ctx->pc = 0x7F2FAA58u;
    // 7F2FAA58: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA58u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FAA5C:
    ctx->pc = 0x7F2FAA5Cu;
    // 7F2FAA5C: lfsx    f0, r5, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FAA60:
    ctx->pc = 0x7F2FAA60u;
    // 7F2FAA60: lfs     f2, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA60u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FAA64:
    ctx->pc = 0x7F2FAA64u;
    // 7F2FAA64: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA64u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2FAA68:
    ctx->pc = 0x7F2FAA68u;
    // 7F2FAA68: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAA68u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F2FAA6C:
    // 7F2FAA6C: bl      0x80026020
    {
            ctx->lr = 0x7F2FAA70u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FAA70:
    ctx->downcount -= 6;
    // 7F2FAA70: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAA74:
    // 7F2FAA74: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAA78:
    // 7F2FAA78: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAA7C:
    // 7F2FAA7C: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAA80:
    // 7F2FAA80: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FAA84:
    // 7F2FAA84: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FAA88u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FAA88:
    ctx->downcount -= 13;
    // 7F2FAA88: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAA8C:
    ctx->pc = 0x7F2FAA8Cu;
    // 7F2FAA8C: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAA90:
    // 7F2FAA90: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAA94:
    ctx->pc = 0x7F2FAA94u;
    // 7F2FAA94: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAA98:
    // 7F2FAA98: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FAA9C:
    ctx->pc = 0x7F2FAA9Cu;
    // 7F2FAA9C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAAA0:
    ctx->pc = 0x7F2FAAA0u;
    // 7F2FAAA0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAAA4:
    ctx->pc = 0x7F2FAAA4u;
    // 7F2FAAA4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAAA8:
    ctx->pc = 0x7F2FAAA8u;
    // 7F2FAAA8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAAAC:
    ctx->pc = 0x7F2FAAACu;
    // 7F2FAAAC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAAB0:
    ctx->pc = 0x7F2FAAB0u;
    // 7F2FAAB0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAAB4:
    ctx->pc = 0x7F2FAAB4u;
    // 7F2FAAB4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAAB8:
    // 7F2FAAB8: b       0x7F2FAE5C
    {
            goto label_7F2FAE5C;
    }

label_7F2FAABC:
    ctx->pc = 0x7F2FAABCu;
    ctx->downcount -= 8;
    // 7F2FAABC: lwz     r5, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAAC0:
    // 7F2FAAC0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2FAAC4:
    ctx->pc = 0x7F2FAAC4u;
    // 7F2FAAC4: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAAC8:
    // 7F2FAAC8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2FAACC:
    // 7F2FAACC: or   r8, r5, r5
    {
        ctx->gpr[8] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2FAAD0:
    // 7F2FAAD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2FAAD4:
    // 7F2FAAD4: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FAAD8:
    // 7F2FAAD8: bl      0x7F1081A8
    {
            ctx->lr = 0x7F2FAADCu;
            ctx->pc = 0x7F1081A8u;
            return;
    }

label_7F2FAADC:
    ctx->downcount -= 2;
    // 7F2FAADC: cmpwi   r3, 0
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

label_7F2FAAE0:
    // 7F2FAAE0: bc    12, 2, 0x7F2FAC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAC7C;
        }
    }

label_7F2FAAE4:
    ctx->downcount -= 2;
    // 7F2FAAE4: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FAAE8:
    // 7F2FAAE8: bl      0x7F108740
    {
            ctx->lr = 0x7F2FAAECu;
            ctx->pc = 0x7F108740u;
            return;
    }

label_7F2FAAEC:
    ctx->pc = 0x7F2FAAECu;
    ctx->downcount -= 34;
    // 7F2FAAEC: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAAF0:
    // 7F2FAAF0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FAAF4:
    // 7F2FAAF4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAAF8:
    // 7F2FAAF8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAAFC:
    // 7F2FAAFC: add   r7, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FAB00:
    // 7F2FAB00: addi    r8, r5, -1068
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-1068);

label_7F2FAB04:
    ctx->pc = 0x7F2FAB04u;
    // 7F2FAB04: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAB08:
    // 7F2FAB08: addi    r6, r4, -1084
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAB0C:
    ctx->pc = 0x7F2FAB0Cu;
    // 7F2FAB0C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB10:
    ctx->pc = 0x7F2FAB10u;
    // 7F2FAB10: stw     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAB14:
    ctx->pc = 0x7F2FAB14u;
    // 7F2FAB14: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB18:
    ctx->pc = 0x7F2FAB18u;
    // 7F2FAB18: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAB1C:
    ctx->pc = 0x7F2FAB1Cu;
    // 7F2FAB1C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB20:
    ctx->pc = 0x7F2FAB20u;
    // 7F2FAB20: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FAB24:
    ctx->pc = 0x7F2FAB24u;
    // 7F2FAB24: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB28:
    ctx->pc = 0x7F2FAB28u;
    // 7F2FAB28: lwz     r4, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAB2C:
    ctx->pc = 0x7F2FAB2Cu;
    // 7F2FAB2C: lwz     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB30:
    ctx->pc = 0x7F2FAB30u;
    // 7F2FAB30: stwu     r4, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[3] = ea;
    }

label_7F2FAB34:
    ctx->pc = 0x7F2FAB34u;
    // 7F2FAB34: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB38:
    ctx->pc = 0x7F2FAB38u;
    // 7F2FAB38: lwz     r4, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAB3C:
    ctx->pc = 0x7F2FAB3Cu;
    // 7F2FAB3C: lwz     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB40:
    ctx->pc = 0x7F2FAB40u;
    // 7F2FAB40: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FAB44:
    ctx->pc = 0x7F2FAB44u;
    // 7F2FAB44: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB48:
    ctx->pc = 0x7F2FAB48u;
    // 7F2FAB48: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB4C:
    // 7F2FAB4C: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FAB50:
    ctx->pc = 0x7F2FAB50u;
    // 7F2FAB50: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAB54:
    ctx->pc = 0x7F2FAB54u;
    // 7F2FAB54: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB58:
    ctx->pc = 0x7F2FAB58u;
    // 7F2FAB58: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FAB5C:
    ctx->pc = 0x7F2FAB5Cu;
    // 7F2FAB5C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB60:
    ctx->pc = 0x7F2FAB60u;
    // 7F2FAB60: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAB64:
    ctx->pc = 0x7F2FAB64u;
    // 7F2FAB64: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAB68:
    ctx->pc = 0x7F2FAB68u;
    // 7F2FAB68: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FAB6C:
    ctx->pc = 0x7F2FAB6Cu;
    // 7F2FAB6C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAB70:
    // 7F2FAB70: bl      0x80026080
    {
            ctx->lr = 0x7F2FAB74u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FAB74:
    ctx->downcount -= 7;
    // 7F2FAB74: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAB78:
    ctx->pc = 0x7F2FAB78u;
    // 7F2FAB78: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FAB78u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F2FAB7C:
    // 7F2FAB7C: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FAB80:
    // 7F2FAB80: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAB84:
    // 7F2FAB84: addi    r4, r4, -1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2FAB88:
    // 7F2FAB88: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FAB8C:
    // 7F2FAB8C: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FAB90u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FAB90:
    ctx->downcount -= 25;
    // 7F2FAB90: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAB94:
    ctx->pc = 0x7F2FAB94u;
    // 7F2FAB94: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAB98:
    // 7F2FAB98: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FAB9C:
    ctx->pc = 0x7F2FAB9Cu;
    // 7F2FAB9C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FABA0:
    // 7F2FABA0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FABA4:
    ctx->pc = 0x7F2FABA4u;
    // 7F2FABA4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FABA8:
    // 7F2FABA8: add   r6, r6, r20
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FABAC:
    // 7F2FABAC: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FABB0:
    ctx->pc = 0x7F2FABB0u;
    // 7F2FABB0: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FABB4:
    ctx->pc = 0x7F2FABB4u;
    // 7F2FABB4: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FABB8:
    ctx->pc = 0x7F2FABB8u;
    // 7F2FABB8: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FABBC:
    ctx->pc = 0x7F2FABBCu;
    // 7F2FABBC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FABC0:
    ctx->pc = 0x7F2FABC0u;
    // 7F2FABC0: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FABC4:
    ctx->pc = 0x7F2FABC4u;
    // 7F2FABC4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FABC8:
    ctx->pc = 0x7F2FABC8u;
    // 7F2FABC8: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FABCC:
    // 7F2FABCC: add   r6, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FABD0:
    ctx->pc = 0x7F2FABD0u;
    // 7F2FABD0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FABD4:
    ctx->pc = 0x7F2FABD4u;
    // 7F2FABD4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FABD8:
    ctx->pc = 0x7F2FABD8u;
    // 7F2FABD8: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FABDC:
    ctx->pc = 0x7F2FABDCu;
    // 7F2FABDC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FABE0:
    ctx->pc = 0x7F2FABE0u;
    // 7F2FABE0: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FABE4:
    ctx->pc = 0x7F2FABE4u;
    // 7F2FABE4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FABE8:
    ctx->pc = 0x7F2FABE8u;
    // 7F2FABE8: stw     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FABEC:
    ctx->pc = 0x7F2FABECu;
    // 7F2FABEC: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FABF0:
    // 7F2FABF0: bl      0x800260DC
    {
            ctx->lr = 0x7F2FABF4u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2FABF4:
    ctx->downcount -= 4;
    // 7F2FABF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FABF8:
    ctx->pc = 0x7F2FABF8u;
    // 7F2FABF8: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FABF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FABFC:
    ctx->pc = 0x7F2FABFCu;
    // 7F2FABFC: fcmpu   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FABFCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], false);

label_7F2FAC00:
    // 7F2FAC00: bc    4, 2, 0x7F2FAC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAC0C;
        }
    }

label_7F2FAC04:
    ctx->downcount -= 2;
    // 7F2FAC04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FAC08:
    ctx->pc = 0x7F2FAC08u;
    // 7F2FAC08: lfs     f30, 31436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FAC0C:
    ctx->pc = 0x7F2FAC0Cu;
    ctx->downcount -= 26;
    // 7F2FAC0C: fdivs   f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC0Cu)) return;
    ppc_fdivs(ctx, 0, 1, 30);

label_7F2FAC10:
    ctx->pc = 0x7F2FAC10u;
    // 7F2FAC10: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC10u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FAC14:
    // 7F2FAC14: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAC18:
    // 7F2FAC18: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAC1C:
    ctx->pc = 0x7F2FAC1Cu;
    // 7F2FAC1C: lfs     f2, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC1Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FAC20:
    // 7F2FAC20: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FAC24:
    ctx->pc = 0x7F2FAC24u;
    // 7F2FAC24: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC24u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2FAC28:
    // 7F2FAC28: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAC2C:
    ctx->pc = 0x7F2FAC2Cu;
    // 7F2FAC2C: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAC2Cu)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F2FAC30:
    // 7F2FAC30: bl      0x80026020
    {
            ctx->lr = 0x7F2FAC34u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FAC34:
    ctx->downcount -= 6;
    // 7F2FAC34: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAC38:
    // 7F2FAC38: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAC3C:
    // 7F2FAC3C: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAC40:
    // 7F2FAC40: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAC44:
    // 7F2FAC44: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FAC48:
    // 7F2FAC48: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FAC4Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FAC4C:
    ctx->downcount -= 12;
    // 7F2FAC4C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAC50:
    ctx->pc = 0x7F2FAC50u;
    // 7F2FAC50: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAC54:
    // 7F2FAC54: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAC58:
    ctx->pc = 0x7F2FAC58u;
    // 7F2FAC58: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAC5C:
    // 7F2FAC5C: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FAC60:
    ctx->pc = 0x7F2FAC60u;
    // 7F2FAC60: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAC64:
    ctx->pc = 0x7F2FAC64u;
    // 7F2FAC64: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAC68:
    ctx->pc = 0x7F2FAC68u;
    // 7F2FAC68: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAC6C:
    ctx->pc = 0x7F2FAC6Cu;
    // 7F2FAC6C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAC70:
    ctx->pc = 0x7F2FAC70u;
    // 7F2FAC70: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAC74:
    ctx->pc = 0x7F2FAC74u;
    // 7F2FAC74: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAC78:
    ctx->pc = 0x7F2FAC78u;
    // 7F2FAC78: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAC7C:
    ctx->pc = 0x7F2FAC7Cu;
    ctx->downcount -= 6;
    // 7F2FAC7C: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAC80:
    // 7F2FAC80: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2FAC84:
    // 7F2FAC84: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2FAC88:
    // 7F2FAC88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2FAC8C:
    // 7F2FAC8C: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FAC90:
    // 7F2FAC90: bl      0x7F106A30
    {
            ctx->lr = 0x7F2FAC94u;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F2FAC94:
    ctx->downcount -= 2;
    // 7F2FAC94: cmpwi   r3, 0
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

label_7F2FAC98:
    // 7F2FAC98: bc    12, 2, 0x7F2FADB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FADB0;
        }
    }

label_7F2FAC9C:
    ctx->downcount -= 1;
    // 7F2FAC9C: bl      0x7F106FDC
    {
            ctx->lr = 0x7F2FACA0u;
            ctx->pc = 0x7F106FDCu;
            return;
    }

label_7F2FACA0:
    ctx->pc = 0x7F2FACA0u;
    ctx->downcount -= 17;
    // 7F2FACA0: lwz     r3, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FACA4:
    // 7F2FACA4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2FACA8:
    ctx->pc = 0x7F2FACA8u;
    // 7F2FACA8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FACAC:
    // 7F2FACAC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FACB0:
    // 7F2FACB0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2FACB4:
    ctx->pc = 0x7F2FACB4u;
    // 7F2FACB4: lfd     f2, 31416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FACB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31416);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FACB8:
    ctx->pc = 0x7F2FACB8u;
    // 7F2FACB8: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FACBC:
    // 7F2FACBC: addi    r0, r20, 4
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(4);

label_7F2FACC0:
    ctx->pc = 0x7F2FACC0u;
    // 7F2FACC0: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FACC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FACC4:
    ctx->pc = 0x7F2FACC4u;
    // 7F2FACC4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FACC4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2FACC8:
    ctx->pc = 0x7F2FACC8u;
    // 7F2FACC8: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FACC8u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F2FACCC:
    ctx->pc = 0x7F2FACCCu;
    // 7F2FACCC: stfs     f0, 1556(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FACCCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1556);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FACD0:
    ctx->pc = 0x7F2FACD0u;
    // 7F2FACD0: lwz     r7, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FACD4:
    ctx->pc = 0x7F2FACD4u;
    // 7F2FACD4: lfs     f0, 1556(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FACD4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FACD8:
    ctx->pc = 0x7F2FACD8u;
    // 7F2FACD8: lfsx    f1, r7, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FACD8u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FACDC:
    ctx->pc = 0x7F2FACDCu;
    // 7F2FACDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FACDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2FACE0:
    // 7F2FACE0: bc    4, 0, 0x7F2FADB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FADB0;
        }
    }

label_7F2FACE4:
    ctx->pc = 0x7F2FACE4u;
    ctx->downcount -= 33;
    // 7F2FACE4: lwz     r4, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FACE8:
    // 7F2FACE8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FACEC:
    // 7F2FACEC: lis     r6, 32587
    ctx->gpr[6] = ((u32)(s32)(32587) << 16);

label_7F2FACF0:
    // 7F2FACF0: lis     r8, 32587
    ctx->gpr[8] = ((u32)(s32)(32587) << 16);

label_7F2FACF4:
    // 7F2FACF4: add   r5, r4, r20
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FACF8:
    // 7F2FACF8: addi    r11, r3, 31476
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(31476);

label_7F2FACFC:
    ctx->pc = 0x7F2FACFCu;
    // 7F2FACFC: lwz     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FAD00:
    // 7F2FAD00: addi    r3, r8, -1052
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(-1052);

label_7F2FAD04:
    ctx->pc = 0x7F2FAD04u;
    // 7F2FAD04: lwz     r9, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FAD08:
    // 7F2FAD08: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAD0C:
    ctx->pc = 0x7F2FAD0Cu;
    // 7F2FAD0C: lwz     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2FAD10:
    // 7F2FAD10: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAD14:
    ctx->pc = 0x7F2FAD14u;
    // 7F2FAD14: stwu     r10, -1068(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
        ctx->gpr[6] = ea;
    }

label_7F2FAD18:
    ctx->pc = 0x7F2FAD18u;
    // 7F2FAD18: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FAD1C:
    ctx->pc = 0x7F2FAD1Cu;
    // 7F2FAD1C: stw     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2FAD20:
    ctx->pc = 0x7F2FAD20u;
    // 7F2FAD20: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FAD24:
    ctx->pc = 0x7F2FAD24u;
    // 7F2FAD24: lwz     r16, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F2FAD28:
    ctx->pc = 0x7F2FAD28u;
    // 7F2FAD28: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2FAD2C:
    ctx->pc = 0x7F2FAD2Cu;
    // 7F2FAD2C: lwz     r5, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAD30:
    ctx->pc = 0x7F2FAD30u;
    // 7F2FAD30: stw     r16, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2FAD34:
    ctx->pc = 0x7F2FAD34u;
    // 7F2FAD34: stw     r12, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2FAD38:
    ctx->pc = 0x7F2FAD38u;
    // 7F2FAD38: stfsx    f0, r7, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD38u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FAD3C:
    ctx->pc = 0x7F2FAD3Cu;
    // 7F2FAD3C: stw     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2FAD40:
    ctx->pc = 0x7F2FAD40u;
    // 7F2FAD40: stw     r9, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2FAD44:
    ctx->pc = 0x7F2FAD44u;
    // 7F2FAD44: stw     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2FAD48:
    ctx->pc = 0x7F2FAD48u;
    // 7F2FAD48: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAD4C:
    ctx->pc = 0x7F2FAD4Cu;
    // 7F2FAD4C: lwz     r5, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAD50:
    ctx->pc = 0x7F2FAD50u;
    // 7F2FAD50: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD50u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FAD54:
    ctx->pc = 0x7F2FAD54u;
    // 7F2FAD54: lfsx    f0, r5, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD54u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FAD58:
    ctx->pc = 0x7F2FAD58u;
    // 7F2FAD58: lfs     f2, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD58u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FAD5C:
    ctx->pc = 0x7F2FAD5Cu;
    // 7F2FAD5C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD5Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2FAD60:
    ctx->pc = 0x7F2FAD60u;
    // 7F2FAD60: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAD60u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F2FAD64:
    // 7F2FAD64: bl      0x80026020
    {
            ctx->lr = 0x7F2FAD68u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FAD68:
    ctx->downcount -= 6;
    // 7F2FAD68: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAD6C:
    // 7F2FAD6C: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAD70:
    // 7F2FAD70: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAD74:
    // 7F2FAD74: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAD78:
    // 7F2FAD78: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FAD7C:
    // 7F2FAD7C: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FAD80u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FAD80:
    ctx->downcount -= 12;
    // 7F2FAD80: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FAD84:
    ctx->pc = 0x7F2FAD84u;
    // 7F2FAD84: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAD88:
    // 7F2FAD88: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FAD8C:
    ctx->pc = 0x7F2FAD8Cu;
    // 7F2FAD8C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAD90:
    // 7F2FAD90: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FAD94:
    ctx->pc = 0x7F2FAD94u;
    // 7F2FAD94: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAD98:
    ctx->pc = 0x7F2FAD98u;
    // 7F2FAD98: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAD9C:
    ctx->pc = 0x7F2FAD9Cu;
    // 7F2FAD9C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FADA0:
    ctx->pc = 0x7F2FADA0u;
    // 7F2FADA0: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FADA4:
    ctx->pc = 0x7F2FADA4u;
    // 7F2FADA4: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FADA8:
    ctx->pc = 0x7F2FADA8u;
    // 7F2FADA8: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FADAC:
    ctx->pc = 0x7F2FADACu;
    // 7F2FADAC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FADB0:
    ctx->pc = 0x7F2FADB0u;
    ctx->downcount -= 14;
    // 7F2FADB0: lwz     r4, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FADB4:
    // 7F2FADB4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2FADB8:
    // 7F2FADB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FADBC:
    ctx->pc = 0x7F2FADBCu;
    // 7F2FADBC: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FADC0:
    // 7F2FADC0: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2FADC4:
    ctx->pc = 0x7F2FADC4u;
    // 7F2FADC4: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FADC8:
    // 7F2FADC8: addi    r5, r3, 31416
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31416);

label_7F2FADCC:
    // 7F2FADCC: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FADD0:
    ctx->pc = 0x7F2FADD0u;
    // 7F2FADD0: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FADD4:
    // 7F2FADD4: add   r4, r6, r20
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FADD8:
    ctx->pc = 0x7F2FADD8u;
    // 7F2FADD8: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2FADD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FADDC:
    ctx->pc = 0x7F2FADDCu;
    // 7F2FADDC: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FADDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FADE0:
    ctx->pc = 0x7F2FADE0u;
    // 7F2FADE0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FADE0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F2FADE4:
    // 7F2FADE4: bl      0x7F0F99F0
    {
            ctx->lr = 0x7F2FADE8u;
            ctx->pc = 0x7F0F99F0u;
            return;
    }

label_7F2FADE8:
    ctx->downcount -= 2;
    // 7F2FADE8: cmpwi   r3, 0
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

label_7F2FADEC:
    // 7F2FADEC: bc    12, 2, 0x7F2FAE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE5C;
        }
    }

label_7F2FADF0:
    ctx->pc = 0x7F2FADF0u;
    ctx->downcount -= 5;
    // 7F2FADF0: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FADF4:
    // 7F2FADF4: addi    r3, r24, 1024
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1024);

label_7F2FADF8:
    // 7F2FADF8: addi    r5, r24, 1040
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(1040);

label_7F2FADFC:
    // 7F2FADFC: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FAE00:
    // 7F2FAE00: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FAE04u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FAE04:
    ctx->downcount -= 2;
    // 7F2FAE04: addi    r3, r24, 1040
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1040);

label_7F2FAE08:
    // 7F2FAE08: bl      0x80026080
    {
            ctx->lr = 0x7F2FAE0Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FAE0C:
    ctx->downcount -= 5;
    // 7F2FAE0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FAE10:
    ctx->pc = 0x7F2FAE10u;
    // 7F2FAE10: lfs     f0, 31492(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAE10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FAE14:
    ctx->pc = 0x7F2FAE14u;
    // 7F2FAE14: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FAE14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2FAE18:
    // 7F2FAE18: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2FAE1C:
    // 7F2FAE1C: bc    4, 2, 0x7F2FAE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAE34;
        }
    }

label_7F2FAE20:
    ctx->pc = 0x7F2FAE20u;
    ctx->downcount -= 5;
    // 7F2FAE20: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAE24:
    // 7F2FAE24: li      r3, 1313
    ctx->gpr[3] = (u32)(s32)(1313);

label_7F2FAE28:
    // 7F2FAE28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2FAE2C:
    // 7F2FAE2C: add   r4, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FAE30:
    // 7F2FAE30: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2FAE34u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2FAE34:
    ctx->pc = 0x7F2FAE34u;
    ctx->downcount -= 10;
    // 7F2FAE34: lwz     r4, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FAE38:
    ctx->pc = 0x7F2FAE38u;
    // 7F2FAE38: lwz     r3, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAE3C:
    ctx->pc = 0x7F2FAE3Cu;
    // 7F2FAE3C: lwz     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAE40:
    // 7F2FAE40: add   r4, r4, r20
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FAE44:
    ctx->pc = 0x7F2FAE44u;
    // 7F2FAE44: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAE48:
    ctx->pc = 0x7F2FAE48u;
    // 7F2FAE48: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAE4C:
    ctx->pc = 0x7F2FAE4Cu;
    // 7F2FAE4C: lwz     r3, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FAE50:
    ctx->pc = 0x7F2FAE50u;
    // 7F2FAE50: lwz     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAE54:
    ctx->pc = 0x7F2FAE54u;
    // 7F2FAE54: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FAE58:
    ctx->pc = 0x7F2FAE58u;
    // 7F2FAE58: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAE5C:
    ctx->downcount -= 3;
    // 7F2FAE5C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F2FAE60:
    // 7F2FAE60: addi    r20, r20, 16
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(16);

label_7F2FAE64:
    // 7F2FAE64: addi    r19, r19, 4
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(4);

label_7F2FAE68:
    ctx->downcount -= 2;
    // 7F2FAE68: cmpw    r23, r31
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FAE6C:
    // 7F2FAE6C: bc    12, 0, 0x7F2FA398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FA398u;
                return;
            }
            goto label_7F2FA398;
        }
    }

label_7F2FAE70:
    ctx->pc = 0x7F2FAE70u;
    ctx->downcount -= 6;
    // 7F2FAE70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FAE74:
    ctx->pc = 0x7F2FAE74u;
    // 7F2FAE74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2FAE78:
    ctx->pc = 0x7F2FAE78u;
    // 7F2FAE78: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_7F2FAE7C:
    ctx->pc = 0x7F2FAE7Cu;
    // 7F2FAE7C: cmpwi   r30, 0
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

label_7F2FAE80:
    ctx->pc = 0x7F2FAE80u;
    // 7F2FAE80: bc    4, 1, 0x7F2FAEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAEE8;
        }
    }

label_7F2FAE84:
    loop_7F2FAE84(ctx);
    if (ctx->pc == 0x7F2FAEE8u) goto label_7F2FAEE8;
    return;
label_7F2FAE88:
    ctx->pc = 0x7F2FAE88u;
    // 7F2FAE88: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAE8C:
    // 7F2FAE8C: add   r7, r24, r7
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FAE90:
    // 7F2FAE90: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

label_7F2FAE94:
    // 7F2FAE94: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FAE98:
    ctx->pc = 0x7F2FAE98u;
    // 7F2FAE98: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAE9C:
    ctx->pc = 0x7F2FAE9Cu;
    // 7F2FAE9C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAEA0:
    ctx->pc = 0x7F2FAEA0u;
    // 7F2FAEA0: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAEA4:
    ctx->pc = 0x7F2FAEA4u;
    // 7F2FAEA4: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAEA8:
    ctx->pc = 0x7F2FAEA8u;
    // 7F2FAEA8: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAEAC:
    ctx->pc = 0x7F2FAEACu;
    // 7F2FAEAC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAEB0:
    ctx->pc = 0x7F2FAEB0u;
    // 7F2FAEB0: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAEB4:
    ctx->pc = 0x7F2FAEB4u;
    // 7F2FAEB4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAEB8:
    ctx->pc = 0x7F2FAEB8u;
    // 7F2FAEB8: lwz     r0, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAEBC:
    ctx->pc = 0x7F2FAEBCu;
    // 7F2FAEBC: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAEC0:
    // 7F2FAEC0: add   r6, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FAEC4:
    ctx->pc = 0x7F2FAEC4u;
    // 7F2FAEC4: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAEC8:
    // 7F2FAEC8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2FAECC:
    ctx->pc = 0x7F2FAECCu;
    // 7F2FAECC: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAED0:
    ctx->pc = 0x7F2FAED0u;
    // 7F2FAED0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAED4:
    ctx->pc = 0x7F2FAED4u;
    // 7F2FAED4: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FAED8:
    ctx->pc = 0x7F2FAED8u;
    // 7F2FAED8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAEDC:
    ctx->pc = 0x7F2FAEDCu;
    // 7F2FAEDC: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FAEE0:
    ctx->pc = 0x7F2FAEE0u;
    // 7F2FAEE0: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAEE4:
    // 7F2FAEE4: bc    16, 0, 0x7F2FAE84
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FAE84u;
                return;
            }
            goto label_7F2FAE84;
        }
    }

label_7F2FAEE8:
    ctx->pc = 0x7F2FAEE8u;
    ctx->downcount -= 21;
    // 7F2FAEE8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAEEC:
    ctx->pc = 0x7F2FAEECu;
    // 7F2FAEEC: addi    r26, r31, -1
    ctx->gpr[26] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F2FAEF0:
    ctx->pc = 0x7F2FAEF0u;
    // 7F2FAEF0: addi    r16, r4, -1052
    ctx->gpr[16] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2FAEF4:
    ctx->pc = 0x7F2FAEF4u;
    // 7F2FAEF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FAEF8:
    ctx->pc = 0x7F2FAEF8u;
    // 7F2FAEF8: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAEFC:
    ctx->pc = 0x7F2FAEFCu;
    // 7F2FAEFC: lfs     f30, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAEFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FAF00:
    ctx->pc = 0x7F2FAF00u;
    // 7F2FAF00: addi    r17, r4, -1068
    ctx->gpr[17] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FAF04:
    ctx->pc = 0x7F2FAF04u;
    // 7F2FAF04: stw     r16, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2FAF08:
    ctx->pc = 0x7F2FAF08u;
    // 7F2FAF08: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FAF0C:
    ctx->pc = 0x7F2FAF0Cu;
    // 7F2FAF0C: or   r28, r16, r16
    {
        ctx->gpr[28] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF10:
    ctx->pc = 0x7F2FAF10u;
    // 7F2FAF10: addi    r18, r4, -1084
    ctx->gpr[18] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FAF14:
    ctx->pc = 0x7F2FAF14u;
    // 7F2FAF14: stw     r17, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F2FAF18:
    ctx->pc = 0x7F2FAF18u;
    // 7F2FAF18: or   r27, r16, r16
    {
        ctx->gpr[27] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF1C:
    ctx->pc = 0x7F2FAF1Cu;
    // 7F2FAF1C: or   r23, r16, r16
    {
        ctx->gpr[23] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF20:
    ctx->pc = 0x7F2FAF20u;
    // 7F2FAF20: stw     r18, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F2FAF24:
    ctx->pc = 0x7F2FAF24u;
    // 7F2FAF24: or   r20, r16, r16
    {
        ctx->gpr[20] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF28:
    ctx->pc = 0x7F2FAF28u;
    // 7F2FAF28: or   r19, r16, r16
    {
        ctx->gpr[19] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF2C:
    ctx->pc = 0x7F2FAF2Cu;
    // 7F2FAF2C: rlwinm r22, r26, 2, 0, 29
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_7F2FAF30:
    ctx->pc = 0x7F2FAF30u;
    // 7F2FAF30: stw     r17, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F2FAF34:
    ctx->pc = 0x7F2FAF34u;
    // 7F2FAF34: rlwinm r21, r26, 4, 0, 27
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[26], 4u) & 0xFFFFFFF0u;
    }

label_7F2FAF38:
    ctx->pc = 0x7F2FAF38u;
    // 7F2FAF38: b       0x7F2FB0D0
    {
            goto label_7F2FB0D0;
    }

label_7F2FAF3C:
    ctx->pc = 0x7F2FAF3Cu;
    ctx->downcount -= 36;
    // 7F2FAF3C: lwz     r7, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FAF40:
    // 7F2FAF40: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF44:
    ctx->pc = 0x7F2FAF44u;
    // 7F2FAF44: lwz     r6, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAF48:
    // 7F2FAF48: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F2FAF4C:
    // 7F2FAF4C: add   r8, r7, r21
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FAF50:
    // 7F2FAF50: or   r5, r16, r16
    {
        ctx->gpr[5] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2FAF54:
    ctx->pc = 0x7F2FAF54u;
    // 7F2FAF54: lwzx    r9, r6, r22
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[22];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2FAF58:
    ctx->pc = 0x7F2FAF58u;
    // 7F2FAF58: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAF5C:
    ctx->pc = 0x7F2FAF5Cu;
    // 7F2FAF5C: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAF60:
    // 7F2FAF60: rlwinm r25, r9, 4, 0, 27
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[9], 4u) & 0xFFFFFFF0u;
    }

label_7F2FAF64:
    // 7F2FAF64: add   r7, r7, r25
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FAF68:
    ctx->pc = 0x7F2FAF68u;
    // 7F2FAF68: stw     r6, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAF6C:
    ctx->pc = 0x7F2FAF6Cu;
    // 7F2FAF6C: stw     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAF70:
    ctx->pc = 0x7F2FAF70u;
    // 7F2FAF70: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAF74:
    ctx->pc = 0x7F2FAF74u;
    // 7F2FAF74: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAF78:
    ctx->pc = 0x7F2FAF78u;
    // 7F2FAF78: stw     r6, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAF7C:
    ctx->pc = 0x7F2FAF7Cu;
    // 7F2FAF7C: stw     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAF80:
    ctx->pc = 0x7F2FAF80u;
    // 7F2FAF80: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAF84:
    ctx->pc = 0x7F2FAF84u;
    // 7F2FAF84: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAF88:
    ctx->pc = 0x7F2FAF88u;
    // 7F2FAF88: stw     r6, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAF8C:
    ctx->pc = 0x7F2FAF8Cu;
    // 7F2FAF8C: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAF90:
    ctx->pc = 0x7F2FAF90u;
    // 7F2FAF90: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAF94:
    ctx->pc = 0x7F2FAF94u;
    // 7F2FAF94: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAF98:
    ctx->pc = 0x7F2FAF98u;
    // 7F2FAF98: stw     r6, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAF9C:
    ctx->pc = 0x7F2FAF9Cu;
    // 7F2FAF9C: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAFA0:
    ctx->pc = 0x7F2FAFA0u;
    // 7F2FAFA0: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAFA4:
    // 7F2FAFA4: add   r7, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FAFA8:
    ctx->pc = 0x7F2FAFA8u;
    // 7F2FAFA8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAFAC:
    ctx->pc = 0x7F2FAFACu;
    // 7F2FAFAC: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAFB0:
    ctx->pc = 0x7F2FAFB0u;
    // 7F2FAFB0: stw     r6, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAFB4:
    ctx->pc = 0x7F2FAFB4u;
    // 7F2FAFB4: stw     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAFB8:
    ctx->pc = 0x7F2FAFB8u;
    // 7F2FAFB8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FAFBC:
    ctx->pc = 0x7F2FAFBCu;
    // 7F2FAFBC: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FAFC0:
    ctx->pc = 0x7F2FAFC0u;
    // 7F2FAFC0: stw     r6, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FAFC4:
    ctx->pc = 0x7F2FAFC4u;
    // 7F2FAFC4: stw     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FAFC8:
    // 7F2FAFC8: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FAFCCu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FAFCC:
    ctx->downcount -= 2;
    // 7F2FAFCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2FAFD0:
    // 7F2FAFD0: bl      0x80026080
    {
            ctx->lr = 0x7F2FAFD4u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FAFD4:
    ctx->pc = 0x7F2FAFD4u;
    ctx->downcount -= 4;
    // 7F2FAFD4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FAFD4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2FAFD8:
    // 7F2FAFD8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2FAFDC:
    // 7F2FAFDC: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F2FAFE0:
    // 7F2FAFE0: bl      0x800260DC
    {
            ctx->lr = 0x7F2FAFE4u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2FAFE4:
    ctx->pc = 0x7F2FAFE4u;
    ctx->downcount -= 2;
    // 7F2FAFE4: fcmpu   cr0, f30, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2FAFE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[31], false);

label_7F2FAFE8:
    // 7F2FAFE8: bc    4, 2, 0x7F2FAFF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FAFF4;
        }
    }

label_7F2FAFEC:
    ctx->downcount -= 2;
    // 7F2FAFEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FAFF0:
    ctx->pc = 0x7F2FAFF0u;
    // 7F2FAFF0: lfs     f31, 31436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FAFF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2FAFF4:
    ctx->pc = 0x7F2FAFF4u;
    ctx->downcount -= 20;
    // 7F2FAFF4: fdivs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2FAFF4u)) return;
    ppc_fdivs(ctx, 1, 1, 31);

label_7F2FAFF8:
    // 7F2FAFF8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2FAFFC:
    // 7F2FAFFC: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2FB000:
    // 7F2FB000: bl      0x80026020
    {
            ctx->lr = 0x7F2FB004u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB004:
    ctx->pc = 0x7F2FB004u;
    ctx->downcount -= 14;
    // 7F2FB004: lwz     r0, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB008:
    // 7F2FB008: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F2FB00C:
    ctx->pc = 0x7F2FB00Cu;
    // 7F2FB00C: lwz     r5, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB010:
    // 7F2FB010: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F2FB014:
    // 7F2FB014: add   r7, r0, r25
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB018:
    ctx->pc = 0x7F2FB018u;
    // 7F2FB018: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB01C:
    ctx->pc = 0x7F2FB01Cu;
    // 7F2FB01C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB020:
    ctx->pc = 0x7F2FB020u;
    // 7F2FB020: stw     r6, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB024:
    ctx->pc = 0x7F2FB024u;
    // 7F2FB024: stw     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB028:
    ctx->pc = 0x7F2FB028u;
    // 7F2FB028: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB02C:
    ctx->pc = 0x7F2FB02Cu;
    // 7F2FB02C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB030:
    ctx->pc = 0x7F2FB030u;
    // 7F2FB030: stw     r6, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB034:
    ctx->pc = 0x7F2FB034u;
    // 7F2FB034: stw     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB038:
    // 7F2FB038: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FB03Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FB03C:
    ctx->pc = 0x7F2FB03Cu;
    ctx->downcount -= 14;
    // 7F2FB03C: lwz     r5, 1368(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1368);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB040:
    ctx->pc = 0x7F2FB040u;
    // 7F2FB040: lwz     r6, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB044:
    // 7F2FB044: add   r7, r5, r25
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB048:
    ctx->pc = 0x7F2FB048u;
    // 7F2FB048: lwz     r0, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB04C:
    ctx->pc = 0x7F2FB04Cu;
    // 7F2FB04C: lwz     r3, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB050:
    ctx->pc = 0x7F2FB050u;
    // 7F2FB050: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB054:
    ctx->pc = 0x7F2FB054u;
    // 7F2FB054: lwz     r4, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB058:
    ctx->pc = 0x7F2FB058u;
    // 7F2FB058: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB05C:
    ctx->pc = 0x7F2FB05Cu;
    // 7F2FB05C: lwz     r5, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB060:
    ctx->pc = 0x7F2FB060u;
    // 7F2FB060: lwz     r6, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB064:
    ctx->pc = 0x7F2FB064u;
    // 7F2FB064: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB068:
    ctx->pc = 0x7F2FB068u;
    // 7F2FB068: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB06C:
    ctx->pc = 0x7F2FB06Cu;
    // 7F2FB06C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB070:
    // 7F2FB070: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FB074u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FB074:
    ctx->pc = 0x7F2FB074u;
    ctx->downcount -= 23;
    // 7F2FB074: lwz     r0, 1372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB078:
    // 7F2FB078: addi    r26, r26, -1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-1);

label_7F2FB07C:
    ctx->pc = 0x7F2FB07Cu;
    // 7F2FB07C: lwz     r3, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB080:
    // 7F2FB080: addi    r22, r22, -4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(-4);

label_7F2FB084:
    // 7F2FB084: add   r4, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB088:
    ctx->pc = 0x7F2FB088u;
    // 7F2FB088: lwz     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB08C:
    // 7F2FB08C: addi    r21, r21, -16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(-16);

label_7F2FB090:
    ctx->pc = 0x7F2FB090u;
    // 7F2FB090: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB094:
    ctx->pc = 0x7F2FB094u;
    // 7F2FB094: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB098:
    ctx->pc = 0x7F2FB098u;
    // 7F2FB098: lwz     r3, 8(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB09C:
    ctx->pc = 0x7F2FB09Cu;
    // 7F2FB09C: lwz     r0, 12(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB0A0:
    ctx->pc = 0x7F2FB0A0u;
    // 7F2FB0A0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB0A4:
    ctx->pc = 0x7F2FB0A4u;
    // 7F2FB0A4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB0A8:
    ctx->pc = 0x7F2FB0A8u;
    // 7F2FB0A8: lwz     r4, 1364(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB0AC:
    ctx->pc = 0x7F2FB0ACu;
    // 7F2FB0AC: lwz     r3, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB0B0:
    ctx->pc = 0x7F2FB0B0u;
    // 7F2FB0B0: lwz     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB0B4:
    // 7F2FB0B4: add   r4, r4, r25
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB0B8:
    ctx->pc = 0x7F2FB0B8u;
    // 7F2FB0B8: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB0BC:
    ctx->pc = 0x7F2FB0BCu;
    // 7F2FB0BC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB0C0:
    ctx->pc = 0x7F2FB0C0u;
    // 7F2FB0C0: lwz     r3, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB0C4:
    ctx->pc = 0x7F2FB0C4u;
    // 7F2FB0C4: lwz     r0, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB0C8:
    ctx->pc = 0x7F2FB0C8u;
    // 7F2FB0C8: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB0CC:
    ctx->pc = 0x7F2FB0CCu;
    // 7F2FB0CC: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB0D0:
    ctx->downcount -= 2;
    // 7F2FB0D0: cmpw    r26, r30
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FB0D4:
    // 7F2FB0D4: bc    4, 0, 0x7F2FAF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FAF3Cu;
                return;
            }
            goto label_7F2FAF3C;
        }
    }

label_7F2FB0D8:
    ctx->pc = 0x7F2FB0D8u;
    ctx->downcount -= 11;
    // 7F2FB0D8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB0DC:
    ctx->pc = 0x7F2FB0DCu;
    // 7F2FB0DC: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB0E0:
    ctx->pc = 0x7F2FB0E0u;
    // 7F2FB0E0: addi    r23, r3, -1084
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB0E4:
    ctx->pc = 0x7F2FB0E4u;
    // 7F2FB0E4: addi    r16, r31, -1
    ctx->gpr[16] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F2FB0E8:
    ctx->pc = 0x7F2FB0E8u;
    // 7F2FB0E8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB0EC:
    ctx->pc = 0x7F2FB0ECu;
    // 7F2FB0EC: addi    r22, r4, -1068
    ctx->gpr[22] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FB0F0:
    ctx->pc = 0x7F2FB0F0u;
    // 7F2FB0F0: addi    r21, r3, -1052
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB0F4:
    ctx->pc = 0x7F2FB0F4u;
    // 7F2FB0F4: or   r20, r23, r23
    {
        ctx->gpr[20] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2FB0F8:
    ctx->pc = 0x7F2FB0F8u;
    // 7F2FB0F8: or   r19, r22, r22
    {
        ctx->gpr[19] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2FB0FC:
    ctx->pc = 0x7F2FB0FCu;
    // 7F2FB0FC: rlwinm r17, r16, 4, 0, 27
    {
        ctx->gpr[17] = dolrecomp_rotl32(ctx->gpr[16], 4u) & 0xFFFFFFF0u;
    }

label_7F2FB100:
    ctx->pc = 0x7F2FB100u;
    // 7F2FB100: b       0x7F2FB1DC
    {
            goto label_7F2FB1DC;
    }

label_7F2FB104:
    ctx->pc = 0x7F2FB104u;
    ctx->downcount -= 24;
    // 7F2FB104: lwz     r0, 1372(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB108:
    // 7F2FB108: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2FB10C:
    // 7F2FB10C: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2FB110:
    // 7F2FB110: add   r6, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB114:
    ctx->pc = 0x7F2FB114u;
    // 7F2FB114: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB118:
    ctx->pc = 0x7F2FB118u;
    // 7F2FB118: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB11C:
    ctx->pc = 0x7F2FB11Cu;
    // 7F2FB11C: stw     r5, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB120:
    ctx->pc = 0x7F2FB120u;
    // 7F2FB120: stw     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB124:
    ctx->pc = 0x7F2FB124u;
    // 7F2FB124: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB128:
    ctx->pc = 0x7F2FB128u;
    // 7F2FB128: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB12C:
    ctx->pc = 0x7F2FB12Cu;
    // 7F2FB12C: stw     r5, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB130:
    ctx->pc = 0x7F2FB130u;
    // 7F2FB130: stw     r0, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB134:
    ctx->pc = 0x7F2FB134u;
    // 7F2FB134: lwz     r0, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB138:
    // 7F2FB138: add   r6, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB13C:
    ctx->pc = 0x7F2FB13Cu;
    // 7F2FB13C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB140:
    ctx->pc = 0x7F2FB140u;
    // 7F2FB140: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB144:
    ctx->pc = 0x7F2FB144u;
    // 7F2FB144: stw     r5, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB148:
    ctx->pc = 0x7F2FB148u;
    // 7F2FB148: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB14C:
    ctx->pc = 0x7F2FB14Cu;
    // 7F2FB14C: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB150:
    ctx->pc = 0x7F2FB150u;
    // 7F2FB150: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB154:
    ctx->pc = 0x7F2FB154u;
    // 7F2FB154: stw     r5, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB158:
    ctx->pc = 0x7F2FB158u;
    // 7F2FB158: stw     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB15C:
    ctx->pc = 0x7F2FB15Cu;
    // 7F2FB15C: lfs     f1, 396(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB15Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FB160:
    // 7F2FB160: bl      0x80026020
    {
            ctx->lr = 0x7F2FB164u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB164:
    ctx->pc = 0x7F2FB164u;
    ctx->downcount -= 14;
    // 7F2FB164: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB168:
    // 7F2FB168: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2FB16C:
    // 7F2FB16C: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2FB170:
    // 7F2FB170: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2FB174:
    // 7F2FB174: add   r7, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB178:
    ctx->pc = 0x7F2FB178u;
    // 7F2FB178: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB17C:
    ctx->pc = 0x7F2FB17Cu;
    // 7F2FB17C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB180:
    ctx->pc = 0x7F2FB180u;
    // 7F2FB180: stw     r6, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB184:
    ctx->pc = 0x7F2FB184u;
    // 7F2FB184: stw     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB188:
    ctx->pc = 0x7F2FB188u;
    // 7F2FB188: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB18C:
    ctx->pc = 0x7F2FB18Cu;
    // 7F2FB18C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB190:
    ctx->pc = 0x7F2FB190u;
    // 7F2FB190: stw     r6, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB194:
    ctx->pc = 0x7F2FB194u;
    // 7F2FB194: stw     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB198:
    // 7F2FB198: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FB19Cu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FB19C:
    ctx->downcount -= 4;
    // 7F2FB19C: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2FB1A0:
    // 7F2FB1A0: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F2FB1A4:
    // 7F2FB1A4: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2FB1A8:
    // 7F2FB1A8: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FB1ACu;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FB1AC:
    ctx->pc = 0x7F2FB1ACu;
    ctx->downcount -= 12;
    // 7F2FB1AC: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB1B0:
    // 7F2FB1B0: addi    r16, r16, -1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(-1);

label_7F2FB1B4:
    ctx->pc = 0x7F2FB1B4u;
    // 7F2FB1B4: lwz     r3, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB1B8:
    // 7F2FB1B8: add   r4, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB1BC:
    ctx->pc = 0x7F2FB1BCu;
    // 7F2FB1BC: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB1C0:
    // 7F2FB1C0: addi    r17, r17, -16
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(-16);

label_7F2FB1C4:
    ctx->pc = 0x7F2FB1C4u;
    // 7F2FB1C4: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB1C8:
    ctx->pc = 0x7F2FB1C8u;
    // 7F2FB1C8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB1CC:
    ctx->pc = 0x7F2FB1CCu;
    // 7F2FB1CC: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB1D0:
    ctx->pc = 0x7F2FB1D0u;
    // 7F2FB1D0: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB1D4:
    ctx->pc = 0x7F2FB1D4u;
    // 7F2FB1D4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB1D8:
    ctx->pc = 0x7F2FB1D8u;
    // 7F2FB1D8: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB1DC:
    ctx->downcount -= 2;
    // 7F2FB1DC: cmpw    r16, r30
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FB1E0:
    // 7F2FB1E0: bc    4, 0, 0x7F2FB104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB104u;
                return;
            }
            goto label_7F2FB104;
        }
    }

label_7F2FB1E4:
    ctx->pc = 0x7F2FB1E4u;
    ctx->downcount -= 5;
    // 7F2FB1E4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2FB1E8:
    ctx->pc = 0x7F2FB1E8u;
    // 7F2FB1E8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2FB1EC:
    ctx->pc = 0x7F2FB1ECu;
    // 7F2FB1EC: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FB1F0:
    ctx->pc = 0x7F2FB1F0u;
    // 7F2FB1F0: li      r18, 8
    ctx->gpr[18] = (u32)(s32)(8);

label_7F2FB1F4:
    ctx->pc = 0x7F2FB1F4u;
    // 7F2FB1F4: b       0x7F2FB23C
    {
            goto label_7F2FB23C;
    }

label_7F2FB1F8:
    ctx->pc = 0x7F2FB1F8u;
    ctx->downcount -= 7;
    // 7F2FB1F8: lwz     r0, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB1FC:
    // 7F2FB1FC: add   r4, r24, r17
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB200:
    // 7F2FB200: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FB204:
    // 7F2FB204: add   r6, r0, r17
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB208:
    ctx->pc = 0x7F2FB208u;
    // 7F2FB208: mtctr    r18
    ctx->ctr = ctx->gpr[18];

label_7F2FB20C:
    // 7F2FB20C: addi    r6, r6, -4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4);

label_7F2FB210:
    loop_7F2FB210(ctx);
    if (ctx->pc == 0x7F2FB224u) goto label_7F2FB224;
    return;
label_7F2FB214:
    ctx->pc = 0x7F2FB214u;
    // 7F2FB214: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F2FB218:
    ctx->pc = 0x7F2FB218u;
    // 7F2FB218: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB21C:
    ctx->pc = 0x7F2FB21Cu;
    // 7F2FB21C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F2FB220:
    // 7F2FB220: bc    16, 0, 0x7F2FB210
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB210u;
                return;
            }
            goto label_7F2FB210;
        }
    }

label_7F2FB224:
    ctx->pc = 0x7F2FB224u;
    ctx->downcount -= 3;
    // 7F2FB224: lwz     r0, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB228:
    // 7F2FB228: add   r3, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FB22C:
    // 7F2FB22C: bl      0x7F11365C
    {
            ctx->lr = 0x7F2FB230u;
            ctx->pc = 0x7F11365Cu;
            return;
    }

label_7F2FB230:
    ctx->downcount -= 3;
    // 7F2FB230: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F2FB234:
    // 7F2FB234: addi    r16, r16, 16
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(16);

label_7F2FB238:
    // 7F2FB238: addi    r17, r17, 64
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(64);

label_7F2FB23C:
    ctx->downcount -= 2;
    // 7F2FB23C: cmpw    r19, r30
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FB240:
    // 7F2FB240: bc    12, 0, 0x7F2FB1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB1F8u;
                return;
            }
            goto label_7F2FB1F8;
        }
    }

label_7F2FB244:
    ctx->pc = 0x7F2FB244u;
    ctx->downcount -= 6;
    // 7F2FB244: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB248:
    ctx->pc = 0x7F2FB248u;
    // 7F2FB248: or   r17, r30, r30
    {
        ctx->gpr[17] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2FB24C:
    ctx->pc = 0x7F2FB24Cu;
    // 7F2FB24C: addi    r19, r3, -1052
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB250:
    ctx->pc = 0x7F2FB250u;
    // 7F2FB250: rlwinm r23, r30, 2, 0, 29
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F2FB254:
    ctx->pc = 0x7F2FB254u;
    // 7F2FB254: rlwinm r22, r30, 4, 0, 27
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[30], 4u) & 0xFFFFFFF0u;
    }

label_7F2FB258:
    ctx->pc = 0x7F2FB258u;
    // 7F2FB258: b       0x7F2FBA14
    {
            goto label_7F2FBA14;
    }

label_7F2FB25C:
    ctx->pc = 0x7F2FB25Cu;
    ctx->downcount -= 16;
    // 7F2FB25C: lwz     r0, 376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB260:
    ctx->pc = 0x7F2FB260u;
    // 7F2FB260: lwz     r5, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB264:
    // 7F2FB264: add   r4, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB268:
    ctx->pc = 0x7F2FB268u;
    // 7F2FB268: lwz     r3, 384(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB26C:
    ctx->pc = 0x7F2FB26Cu;
    // 7F2FB26C: lwzx    r18, r5, r23
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[23];
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2FB270:
    ctx->pc = 0x7F2FB270u;
    // 7F2FB270: lwzx    r21, r3, r23
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[23];
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F2FB274:
    ctx->pc = 0x7F2FB274u;
    // 7F2FB274: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB278:
    // 7F2FB278: cmpw    r18, r30
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

label_7F2FB27C:
    ctx->pc = 0x7F2FB27Cu;
    // 7F2FB27C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB280:
    ctx->pc = 0x7F2FB280u;
    // 7F2FB280: stw     r3, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB284:
    ctx->pc = 0x7F2FB284u;
    // 7F2FB284: stw     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB288:
    ctx->pc = 0x7F2FB288u;
    // 7F2FB288: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB28C:
    ctx->pc = 0x7F2FB28Cu;
    // 7F2FB28C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB290:
    ctx->pc = 0x7F2FB290u;
    // 7F2FB290: stw     r3, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB294:
    ctx->pc = 0x7F2FB294u;
    // 7F2FB294: stw     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB298:
    // 7F2FB298: bc    4, 0, 0x7F2FB3FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB3FC;
        }
    }

label_7F2FB29C:
    ctx->downcount -= 23;
    // 7F2FB29C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB2A0:
    // 7F2FB2A0: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FB2A4:
    // 7F2FB2A4: addi    r4, r3, 31424
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2FB2A8:
    // 7F2FB2A8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB2AC:
    ctx->pc = 0x7F2FB2ACu;
    // 7F2FB2AC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB2ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB2B0:
    // 7F2FB2B0: rlwinm r4, r21, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[21], 6u) & 0xFFFFFFC0u;
    }

label_7F2FB2B4:
    // 7F2FB2B4: addi    r3, r3, -1148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2FB2B8:
    // 7F2FB2B8: addi    r7, r5, -1052
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1052);

label_7F2FB2BC:
    ctx->pc = 0x7F2FB2BCu;
    // 7F2FB2BC: stfs     f0, 1036(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB2BCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB2C0:
    // 7F2FB2C0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FB2C4:
    // 7F2FB2C4: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2FB2C8:
    // 7F2FB2C8: add   r4, r24, r4
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB2CC:
    ctx->pc = 0x7F2FB2CCu;
    // 7F2FB2CC: lwz     r6, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB2D0:
    ctx->pc = 0x7F2FB2D0u;
    // 7F2FB2D0: lwz     r3, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB2D4:
    ctx->pc = 0x7F2FB2D4u;
    // 7F2FB2D4: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB2D8:
    ctx->pc = 0x7F2FB2D8u;
    // 7F2FB2D8: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB2DC:
    ctx->pc = 0x7F2FB2DCu;
    // 7F2FB2DC: lwz     r6, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB2E0:
    ctx->pc = 0x7F2FB2E0u;
    // 7F2FB2E0: lwz     r3, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB2E4:
    ctx->pc = 0x7F2FB2E4u;
    // 7F2FB2E4: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB2E8:
    ctx->pc = 0x7F2FB2E8u;
    // 7F2FB2E8: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB2EC:
    ctx->pc = 0x7F2FB2ECu;
    // 7F2FB2EC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FB2F0:
    // 7F2FB2F0: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FB2F4:
    loop_7F2FB2F4(ctx);
    if (ctx->pc == 0x7F2FB308u) goto label_7F2FB308;
    return;
label_7F2FB2F8:
    ctx->pc = 0x7F2FB2F8u;
    // 7F2FB2F8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FB2FC:
    ctx->pc = 0x7F2FB2FCu;
    // 7F2FB2FC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB300:
    ctx->pc = 0x7F2FB300u;
    // 7F2FB300: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FB304:
    // 7F2FB304: bc    16, 0, 0x7F2FB2F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB2F4u;
                return;
            }
            goto label_7F2FB2F4;
        }
    }

label_7F2FB308:
    ctx->downcount -= 6;
    // 7F2FB308: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB30C:
    // 7F2FB30C: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FB310:
    // 7F2FB310: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB314:
    // 7F2FB314: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F2FB318:
    // 7F2FB318: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FB31C:
    // 7F2FB31C: bl      0x7F114508
    {
            ctx->lr = 0x7F2FB320u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2FB320:
    ctx->pc = 0x7F2FB320u;
    ctx->downcount -= 16;
    // 7F2FB320: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB324:
    // 7F2FB324: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB328:
    // 7F2FB328: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB32C:
    // 7F2FB32C: add   r7, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB330:
    // 7F2FB330: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB334:
    ctx->pc = 0x7F2FB334u;
    // 7F2FB334: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB338:
    // 7F2FB338: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB33C:
    ctx->pc = 0x7F2FB33Cu;
    // 7F2FB33C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB340:
    // 7F2FB340: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FB344:
    ctx->pc = 0x7F2FB344u;
    // 7F2FB344: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB348:
    ctx->pc = 0x7F2FB348u;
    // 7F2FB348: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB34C:
    ctx->pc = 0x7F2FB34Cu;
    // 7F2FB34C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB350:
    ctx->pc = 0x7F2FB350u;
    // 7F2FB350: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB354:
    ctx->pc = 0x7F2FB354u;
    // 7F2FB354: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB358:
    ctx->pc = 0x7F2FB358u;
    // 7F2FB358: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB35C:
    // 7F2FB35C: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FB360u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FB360:
    ctx->downcount -= 39;
    // 7F2FB360: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB364:
    // 7F2FB364: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB368:
    // 7F2FB368: addi    r5, r3, 31424
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31424);

label_7F2FB36C:
    // 7F2FB36C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB370:
    ctx->pc = 0x7F2FB370u;
    // 7F2FB370: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB370u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB374:
    // 7F2FB374: addi    r6, r4, -1052
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2FB378:
    ctx->pc = 0x7F2FB378u;
    // 7F2FB378: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB37C:
    // 7F2FB37C: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB380:
    ctx->pc = 0x7F2FB380u;
    // 7F2FB380: stfs     f0, 12(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB380u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB384:
    ctx->pc = 0x7F2FB384u;
    // 7F2FB384: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB388:
    ctx->pc = 0x7F2FB388u;
    // 7F2FB388: lwz     r3, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB38C:
    // 7F2FB38C: add   r7, r3, r22
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB390:
    ctx->pc = 0x7F2FB390u;
    // 7F2FB390: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB394:
    ctx->pc = 0x7F2FB394u;
    // 7F2FB394: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB398:
    ctx->pc = 0x7F2FB398u;
    // 7F2FB398: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB39C:
    ctx->pc = 0x7F2FB39Cu;
    // 7F2FB39C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB3A0:
    ctx->pc = 0x7F2FB3A0u;
    // 7F2FB3A0: stw     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB3A4:
    ctx->pc = 0x7F2FB3A4u;
    // 7F2FB3A4: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB3A8:
    ctx->pc = 0x7F2FB3A8u;
    // 7F2FB3A8: lwz     r5, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB3AC:
    ctx->pc = 0x7F2FB3ACu;
    // 7F2FB3AC: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB3B0:
    ctx->pc = 0x7F2FB3B0u;
    // 7F2FB3B0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB3B4:
    // 7F2FB3B4: add   r5, r5, r22
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB3B8:
    ctx->pc = 0x7F2FB3B8u;
    // 7F2FB3B8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB3BC:
    ctx->pc = 0x7F2FB3BCu;
    // 7F2FB3BC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB3C0:
    ctx->pc = 0x7F2FB3C0u;
    // 7F2FB3C0: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB3C4:
    ctx->pc = 0x7F2FB3C4u;
    // 7F2FB3C4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB3C8:
    ctx->pc = 0x7F2FB3C8u;
    // 7F2FB3C8: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB3CC:
    ctx->pc = 0x7F2FB3CCu;
    // 7F2FB3CC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB3D0:
    ctx->pc = 0x7F2FB3D0u;
    // 7F2FB3D0: lwz     r5, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB3D4:
    ctx->pc = 0x7F2FB3D4u;
    // 7F2FB3D4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB3D8:
    ctx->pc = 0x7F2FB3D8u;
    // 7F2FB3D8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB3DC:
    // 7F2FB3DC: add   r5, r5, r22
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB3E0:
    ctx->pc = 0x7F2FB3E0u;
    // 7F2FB3E0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB3E4:
    ctx->pc = 0x7F2FB3E4u;
    // 7F2FB3E4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB3E8:
    ctx->pc = 0x7F2FB3E8u;
    // 7F2FB3E8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB3EC:
    ctx->pc = 0x7F2FB3ECu;
    // 7F2FB3EC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB3F0:
    ctx->pc = 0x7F2FB3F0u;
    // 7F2FB3F0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB3F4:
    ctx->pc = 0x7F2FB3F4u;
    // 7F2FB3F4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB3F8:
    // 7F2FB3F8: b       0x7F2FBA08
    {
            goto label_7F2FBA08;
    }

label_7F2FB3FC:
    ctx->downcount -= 49;
    // 7F2FB3FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB400:
    // 7F2FB400: lis     r7, 32587
    ctx->gpr[7] = ((u32)(s32)(32587) << 16);

label_7F2FB404:
    ctx->pc = 0x7F2FB404u;
    // 7F2FB404: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB408:
    // 7F2FB408: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB40C:
    // 7F2FB40C: rlwinm r10, r18, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[18], 2u) & 0xFFFFFFFCu;
    }

label_7F2FB410:
    // 7F2FB410: lis     r8, 32587
    ctx->gpr[8] = ((u32)(s32)(32587) << 16);

label_7F2FB414:
    ctx->pc = 0x7F2FB414u;
    // 7F2FB414: stfs     f0, 1036(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB414u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB418:
    // 7F2FB418: addi    r4, r3, -1148
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1148);

label_7F2FB41C:
    // 7F2FB41C: addi    r3, r8, -1052
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(-1052);

label_7F2FB420:
    // 7F2FB420: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FB424:
    ctx->pc = 0x7F2FB424u;
    // 7F2FB424: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB428:
    // 7F2FB428: addi    r9, r7, -1068
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-1068);

label_7F2FB42C:
    ctx->pc = 0x7F2FB42Cu;
    // 7F2FB42C: lwz     r11, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2FB430:
    // 7F2FB430: addi    r7, r5, -1084
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-1084);

label_7F2FB434:
    // 7F2FB434: add   r12, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_7F2FB438:
    // 7F2FB438: rlwinm r16, r18, 4, 0, 27
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[18], 4u) & 0xFFFFFFF0u;
    }

label_7F2FB43C:
    ctx->pc = 0x7F2FB43Cu;
    // 7F2FB43C: lwzx    r20, r11, r10
    {
        u32 ea = ctx->gpr[11] + ctx->gpr[10];
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F2FB440:
    // 7F2FB440: add   r8, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FB444:
    ctx->pc = 0x7F2FB444u;
    // 7F2FB444: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2FB448:
    // 7F2FB448: rlwinm r6, r21, 6, 0, 25
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[21], 6u) & 0xFFFFFFC0u;
    }

label_7F2FB44C:
    ctx->pc = 0x7F2FB44Cu;
    // 7F2FB44C: lwz     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FB450:
    // 7F2FB450: addi    r5, r4, -4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FB454:
    // 7F2FB454: add   r4, r24, r6
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB458:
    // 7F2FB458: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FB45C:
    ctx->pc = 0x7F2FB45Cu;
    // 7F2FB45C: stw     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2FB460:
    ctx->pc = 0x7F2FB460u;
    // 7F2FB460: stw     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2FB464:
    ctx->pc = 0x7F2FB464u;
    // 7F2FB464: lwz     r10, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2FB468:
    ctx->pc = 0x7F2FB468u;
    // 7F2FB468: lwz     r6, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB46C:
    ctx->pc = 0x7F2FB46Cu;
    // 7F2FB46C: stw     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2FB470:
    ctx->pc = 0x7F2FB470u;
    // 7F2FB470: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB474:
    ctx->pc = 0x7F2FB474u;
    // 7F2FB474: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB478:
    ctx->pc = 0x7F2FB478u;
    // 7F2FB478: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB47C:
    ctx->pc = 0x7F2FB47Cu;
    // 7F2FB47C: stw     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB480:
    ctx->pc = 0x7F2FB480u;
    // 7F2FB480: stw     r3, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB484:
    ctx->pc = 0x7F2FB484u;
    // 7F2FB484: lwz     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB488:
    ctx->pc = 0x7F2FB488u;
    // 7F2FB488: lwz     r3, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB48C:
    ctx->pc = 0x7F2FB48Cu;
    // 7F2FB48C: stw     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB490:
    ctx->pc = 0x7F2FB490u;
    // 7F2FB490: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB494:
    ctx->pc = 0x7F2FB494u;
    // 7F2FB494: lwz     r6, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB498:
    ctx->pc = 0x7F2FB498u;
    // 7F2FB498: lwz     r3, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB49C:
    ctx->pc = 0x7F2FB49Cu;
    // 7F2FB49C: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB4A0:
    ctx->pc = 0x7F2FB4A0u;
    // 7F2FB4A0: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB4A4:
    ctx->pc = 0x7F2FB4A4u;
    // 7F2FB4A4: lwz     r6, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB4A8:
    ctx->pc = 0x7F2FB4A8u;
    // 7F2FB4A8: lwz     r3, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB4AC:
    ctx->pc = 0x7F2FB4ACu;
    // 7F2FB4AC: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB4B0:
    ctx->pc = 0x7F2FB4B0u;
    // 7F2FB4B0: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB4B4:
    ctx->pc = 0x7F2FB4B4u;
    // 7F2FB4B4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FB4B8:
    // 7F2FB4B8: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F2FB4BC:
    loop_7F2FB4BC(ctx);
    if (ctx->pc == 0x7F2FB4D0u) goto label_7F2FB4D0;
    return;
label_7F2FB4C0:
    ctx->pc = 0x7F2FB4C0u;
    // 7F2FB4C0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FB4C4:
    ctx->pc = 0x7F2FB4C4u;
    // 7F2FB4C4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB4C8:
    ctx->pc = 0x7F2FB4C8u;
    // 7F2FB4C8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FB4CC:
    // 7F2FB4CC: bc    16, 0, 0x7F2FB4BC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB4BCu;
                return;
            }
            goto label_7F2FB4BC;
        }
    }

label_7F2FB4D0:
    ctx->downcount -= 6;
    // 7F2FB4D0: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB4D4:
    // 7F2FB4D4: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB4D8:
    // 7F2FB4D8: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB4DC:
    // 7F2FB4DC: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FB4E0:
    // 7F2FB4E0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB4E4:
    // 7F2FB4E4: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FB4E8u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FB4E8:
    ctx->downcount -= 6;
    // 7F2FB4E8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB4EC:
    // 7F2FB4EC: lis     r5, 32587
    ctx->gpr[5] = ((u32)(s32)(32587) << 16);

label_7F2FB4F0:
    // 7F2FB4F0: addi    r4, r3, -1084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB4F4:
    // 7F2FB4F4: addi    r3, r5, -1148
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1148);

label_7F2FB4F8:
    // 7F2FB4F8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FB4FC:
    // 7F2FB4FC: bl      0x7F114508
    {
            ctx->lr = 0x7F2FB500u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2FB500:
    ctx->downcount -= 3;
    // 7F2FB500: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB504:
    // 7F2FB504: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB508:
    // 7F2FB508: bl      0x80026080
    {
            ctx->lr = 0x7F2FB50Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FB50C:
    ctx->pc = 0x7F2FB50Cu;
    ctx->downcount -= 4;
    // 7F2FB50C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB50Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2FB510:
    // 7F2FB510: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB514:
    // 7F2FB514: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB518:
    // 7F2FB518: bl      0x80026080
    {
            ctx->lr = 0x7F2FB51Cu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FB51C:
    ctx->pc = 0x7F2FB51Cu;
    ctx->downcount -= 7;
    // 7F2FB51C: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB51Cu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F2FB520:
    // 7F2FB520: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB524:
    // 7F2FB524: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB528:
    // 7F2FB528: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB52C:
    ctx->pc = 0x7F2FB52Cu;
    // 7F2FB52C: fmuls   f30, f31, f28
    if (!ppc_fp_available_inline(ctx, 0x7F2FB52Cu)) return;
    ppc_fmuls(ctx, 30, 31, 28);

label_7F2FB530:
    // 7F2FB530: addi    r4, r4, -1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1084);

label_7F2FB534:
    // 7F2FB534: bl      0x800260DC
    {
            ctx->lr = 0x7F2FB538u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2FB538:
    ctx->downcount -= 15;
    // 7F2FB538: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB53C:
    ctx->pc = 0x7F2FB53Cu;
    // 7F2FB53C: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB53Cu)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F2FB540:
    // 7F2FB540: addi    r4, r3, -1052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB544:
    ctx->pc = 0x7F2FB544u;
    // 7F2FB544: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB548:
    // 7F2FB548: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB54C:
    ctx->pc = 0x7F2FB54Cu;
    // 7F2FB54C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB550:
    // 7F2FB550: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB554:
    ctx->pc = 0x7F2FB554u;
    // 7F2FB554: stw     r5, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB558:
    // 7F2FB558: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB55C:
    ctx->pc = 0x7F2FB55Cu;
    // 7F2FB55C: stw     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB560:
    ctx->pc = 0x7F2FB560u;
    // 7F2FB560: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB564:
    ctx->pc = 0x7F2FB564u;
    // 7F2FB564: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB568:
    ctx->pc = 0x7F2FB568u;
    // 7F2FB568: stw     r6, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB56C:
    ctx->pc = 0x7F2FB56Cu;
    // 7F2FB56C: stw     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB570:
    // 7F2FB570: bl      0x800260FC
    {
            ctx->lr = 0x7F2FB574u;
            ctx->pc = 0x800260FCu;
            return;
    }

label_7F2FB574:
    ctx->pc = 0x7F2FB574u;
    ctx->downcount -= 3;
    // 7F2FB574: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FB574u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F2FB578:
    ctx->pc = 0x7F2FB578u;
    // 7F2FB578: fmr    f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2FB578u)) return;
    ctx->fpr[2] = ctx->fpr[29];

label_7F2FB57C:
    // 7F2FB57C: bl      0x7F2FBBF8
    {
            ctx->lr = 0x7F2FB580u;
            goto label_7F2FBBF8;
    }

label_7F2FB580:
    ctx->pc = 0x7F2FB580u;
    ctx->downcount -= 4;
    // 7F2FB580: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB580u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F2FB584:
    // 7F2FB584: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB588:
    // 7F2FB588: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB58C:
    // 7F2FB58C: bl      0x80026080
    {
            ctx->lr = 0x7F2FB590u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F2FB590:
    ctx->downcount -= 4;
    // 7F2FB590: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB594:
    ctx->pc = 0x7F2FB594u;
    // 7F2FB594: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB594u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB598:
    ctx->pc = 0x7F2FB598u;
    // 7F2FB598: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB598u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F2FB59C:
    // 7F2FB59C: bc    4, 2, 0x7F2FB5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB5A8;
        }
    }

label_7F2FB5A0:
    ctx->downcount -= 2;
    // 7F2FB5A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB5A4:
    ctx->pc = 0x7F2FB5A4u;
    // 7F2FB5A4: lfs     f1, 31436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FB5A8:
    ctx->downcount -= 24;
    // 7F2FB5A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB5AC:
    // 7F2FB5AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FB5B0:
    ctx->pc = 0x7F2FB5B0u;
    // 7F2FB5B0: lfs     f0, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB5B4:
    ctx->pc = 0x7F2FB5B4u;
    // 7F2FB5B4: lfs     f2, 31440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FB5B8:
    ctx->pc = 0x7F2FB5B8u;
    // 7F2FB5B8: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5B8u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F2FB5BC:
    ctx->pc = 0x7F2FB5BCu;
    // 7F2FB5BC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5BCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F2FB5C0:
    ctx->pc = 0x7F2FB5C0u;
    // 7F2FB5C0: fdivs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5C0u)) return;
    ppc_fdivs(ctx, 1, 0, 1);

label_7F2FB5C4:
    // 7F2FB5C4: bl      0x80006668
    {
            ctx->lr = 0x7F2FB5C8u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F2FB5C8:
    ctx->downcount -= 4;
    // 7F2FB5C8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB5CC:
    // 7F2FB5CC: addi    r3, r3, -1084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB5D0:
    // 7F2FB5D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB5D4:
    // 7F2FB5D4: bl      0x80026020
    {
            ctx->lr = 0x7F2FB5D8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB5D8:
    ctx->downcount -= 7;
    // 7F2FB5D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB5DC:
    // 7F2FB5DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FB5E0:
    ctx->pc = 0x7F2FB5E0u;
    // 7F2FB5E0: lfs     f0, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB5E4:
    ctx->pc = 0x7F2FB5E4u;
    // 7F2FB5E4: lfs     f1, 31440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FB5E8:
    ctx->pc = 0x7F2FB5E8u;
    // 7F2FB5E8: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5E8u)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F2FB5EC:
    ctx->pc = 0x7F2FB5ECu;
    // 7F2FB5EC: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5ECu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F2FB5F0:
    // 7F2FB5F0: bl      0x80006668
    {
            ctx->lr = 0x7F2FB5F4u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F2FB5F4:
    ctx->downcount -= 4;
    // 7F2FB5F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB5F8:
    ctx->pc = 0x7F2FB5F8u;
    // 7F2FB5F8: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB5FC:
    ctx->pc = 0x7F2FB5FCu;
    // 7F2FB5FC: fcmpu   cr0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F2FB5FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[28], false);

label_7F2FB600:
    // 7F2FB600: bc    4, 2, 0x7F2FB60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB60C;
        }
    }

label_7F2FB604:
    ctx->downcount -= 2;
    // 7F2FB604: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB608:
    ctx->pc = 0x7F2FB608u;
    // 7F2FB608: lfs     f28, 31436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F2FB60C:
    ctx->pc = 0x7F2FB60Cu;
    ctx->downcount -= 34;
    // 7F2FB60C: fdivs   f29, f31, f28
    if (!ppc_fp_available_inline(ctx, 0x7F2FB60Cu)) return;
    ppc_fdivs(ctx, 29, 31, 28);

label_7F2FB610:
    // 7F2FB610: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB614:
    // 7F2FB614: addi    r7, r3, -1084
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-1084);

label_7F2FB618:
    // 7F2FB618: rlwinm r4, r21, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[21], 4u) & 0xFFFFFFF0u;
    }

label_7F2FB61C:
    // 7F2FB61C: addi    r3, r24, 1040
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1040);

label_7F2FB620:
    ctx->pc = 0x7F2FB620u;
    // 7F2FB620: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB624:
    ctx->pc = 0x7F2FB624u;
    // 7F2FB624: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB628:
    // 7F2FB628: addi    r5, r4, 1088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(1088);

label_7F2FB62C:
    // 7F2FB62C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB630:
    ctx->pc = 0x7F2FB630u;
    // 7F2FB630: stw     r6, 1040(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1040);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB634:
    // 7F2FB634: add   r5, r24, r5
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB638:
    ctx->pc = 0x7F2FB638u;
    // 7F2FB638: stw     r0, 1044(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB63C:
    ctx->pc = 0x7F2FB63Cu;
    // 7F2FB63C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB640:
    ctx->pc = 0x7F2FB640u;
    // 7F2FB640: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB644:
    ctx->pc = 0x7F2FB644u;
    // 7F2FB644: stw     r6, 1048(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1048);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB648:
    ctx->pc = 0x7F2FB648u;
    // 7F2FB648: stw     r0, 1052(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB64C:
    ctx->pc = 0x7F2FB64Cu;
    // 7F2FB64C: stfs     f1, 1052(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB64Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1052);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2FB650:
    // 7F2FB650: bl      0x7F113AB0
    {
            ctx->lr = 0x7F2FB654u;
            ctx->pc = 0x7F113AB0u;
            return;
    }

label_7F2FB654:
    ctx->pc = 0x7F2FB654u;
    ctx->downcount -= 15;
    // 7F2FB654: lwz     r6, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB658:
    // 7F2FB658: rlwinm r0, r20, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 4u) & 0xFFFFFFF0u;
    }

label_7F2FB65C:
    ctx->pc = 0x7F2FB65Cu;
    // 7F2FB65C: lwz     r5, 1040(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1040);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB660:
    // 7F2FB660: addi    r3, r24, 1056
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1056);

label_7F2FB664:
    ctx->pc = 0x7F2FB664u;
    // 7F2FB664: lwz     r4, 1044(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1044);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB668:
    // 7F2FB668: add   r6, r6, r16
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB66C:
    ctx->pc = 0x7F2FB66Cu;
    // 7F2FB66C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB670:
    ctx->pc = 0x7F2FB670u;
    // 7F2FB670: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FB674:
    ctx->pc = 0x7F2FB674u;
    // 7F2FB674: lwz     r5, 1048(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1048);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB678:
    ctx->pc = 0x7F2FB678u;
    // 7F2FB678: lwz     r4, 1052(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1052);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB67C:
    ctx->pc = 0x7F2FB67Cu;
    // 7F2FB67C: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB680:
    ctx->pc = 0x7F2FB680u;
    // 7F2FB680: stw     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FB684:
    ctx->pc = 0x7F2FB684u;
    // 7F2FB684: lwz     r4, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB688:
    // 7F2FB688: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB68C:
    // 7F2FB68C: bl      0x7F113B68
    {
            ctx->lr = 0x7F2FB690u;
            ctx->pc = 0x7F113B68u;
            return;
    }

label_7F2FB690:
    ctx->pc = 0x7F2FB690u;
    ctx->downcount -= 6;
    // 7F2FB690: lwz     r3, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB694:
    // 7F2FB694: addi    r4, r24, 1056
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(1056);

label_7F2FB698:
    ctx->pc = 0x7F2FB698u;
    // 7F2FB698: lwz     r0, 1380(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB69C:
    // 7F2FB69C: add   r3, r3, r16
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FB6A0:
    // 7F2FB6A0: add   r5, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB6A4:
    // 7F2FB6A4: bl      0x7F113AB0
    {
            ctx->lr = 0x7F2FB6A8u;
            ctx->pc = 0x7F113AB0u;
            return;
    }

label_7F2FB6A8:
    ctx->pc = 0x7F2FB6A8u;
    ctx->downcount -= 5;
    // 7F2FB6A8: lwz     r0, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB6AC:
    // 7F2FB6AC: rlwinm r18, r18, 6, 0, 25
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[18], 6u) & 0xFFFFFFC0u;
    }

label_7F2FB6B0:
    // 7F2FB6B0: addi    r4, r24, 1040
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(1040);

label_7F2FB6B4:
    // 7F2FB6B4: add   r3, r0, r18
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FB6B8:
    // 7F2FB6B8: bl      0x7F113430
    {
            ctx->lr = 0x7F2FB6BCu;
            ctx->pc = 0x7F113430u;
            return;
    }

label_7F2FB6BC:
    ctx->pc = 0x7F2FB6BCu;
    ctx->downcount -= 20;
    // 7F2FB6BC: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB6C0:
    // 7F2FB6C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB6C4:
    ctx->pc = 0x7F2FB6C4u;
    // 7F2FB6C4: lwz     r6, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB6C8:
    // 7F2FB6C8: add   r5, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB6CC:
    // 7F2FB6CC: addi    r0, r18, 48
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(48);

label_7F2FB6D0:
    // 7F2FB6D0: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB6D4:
    ctx->pc = 0x7F2FB6D4u;
    // 7F2FB6D4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB6D8:
    ctx->pc = 0x7F2FB6D8u;
    // 7F2FB6D8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB6DC:
    ctx->pc = 0x7F2FB6DCu;
    // 7F2FB6DC: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB6DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB6E0:
    ctx->pc = 0x7F2FB6E0u;
    // 7F2FB6E0: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FB6E4:
    ctx->pc = 0x7F2FB6E4u;
    // 7F2FB6E4: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB6E8:
    ctx->pc = 0x7F2FB6E8u;
    // 7F2FB6E8: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB6EC:
    ctx->pc = 0x7F2FB6ECu;
    // 7F2FB6EC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB6F0:
    ctx->pc = 0x7F2FB6F0u;
    // 7F2FB6F0: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB6F4:
    ctx->pc = 0x7F2FB6F4u;
    // 7F2FB6F4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB6F8:
    ctx->pc = 0x7F2FB6F8u;
    // 7F2FB6F8: lwz     r0, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB6FC:
    // 7F2FB6FC: add   r3, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FB700:
    ctx->pc = 0x7F2FB700u;
    // 7F2FB700: lfs     f1, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB700u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FB704:
    ctx->pc = 0x7F2FB704u;
    // 7F2FB704: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB704u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2FB708:
    // 7F2FB708: bc    4, 0, 0x7F2FB754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB754;
        }
    }

label_7F2FB70C:
    ctx->pc = 0x7F2FB70Cu;
    ctx->downcount -= 18;
    // 7F2FB70C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB70Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB710:
    // 7F2FB710: addi    r0, r16, 4
    ctx->gpr[0] = ctx->gpr[16] + (u32)(s32)(4);

label_7F2FB714:
    // 7F2FB714: addi    r4, r16, 8
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(8);

label_7F2FB718:
    // 7F2FB718: addi    r5, r16, 12
    ctx->gpr[5] = ctx->gpr[16] + (u32)(s32)(12);

label_7F2FB71C:
    ctx->pc = 0x7F2FB71Cu;
    // 7F2FB71C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB71Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2FB720:
    ctx->pc = 0x7F2FB720u;
    // 7F2FB720: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB720u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB724:
    ctx->pc = 0x7F2FB724u;
    // 7F2FB724: lwz     r3, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB728:
    ctx->pc = 0x7F2FB728u;
    // 7F2FB728: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB728u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB72C:
    ctx->pc = 0x7F2FB72Cu;
    // 7F2FB72C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB72Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2FB730:
    ctx->pc = 0x7F2FB730u;
    // 7F2FB730: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB730u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB734:
    ctx->pc = 0x7F2FB734u;
    // 7F2FB734: lwz     r3, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB738:
    ctx->pc = 0x7F2FB738u;
    // 7F2FB738: lfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x7F2FB738u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB73C:
    ctx->pc = 0x7F2FB73Cu;
    // 7F2FB73C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB73Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2FB740:
    ctx->pc = 0x7F2FB740u;
    // 7F2FB740: stfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x7F2FB740u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB744:
    ctx->pc = 0x7F2FB744u;
    // 7F2FB744: lwz     r3, 368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB748:
    ctx->pc = 0x7F2FB748u;
    // 7F2FB748: lfsx    f0, r3, r5
    if (!ppc_fp_available_inline(ctx, 0x7F2FB748u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB74C:
    ctx->pc = 0x7F2FB74Cu;
    // 7F2FB74C: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB74Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2FB750:
    ctx->pc = 0x7F2FB750u;
    // 7F2FB750: stfsx    f0, r3, r5
    if (!ppc_fp_available_inline(ctx, 0x7F2FB750u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB754:
    ctx->downcount -= 26;
    // 7F2FB754: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB758:
    ctx->pc = 0x7F2FB758u;
    // 7F2FB758: lwz     r5, 1024(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1024);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB75C:
    // 7F2FB75C: addi    r6, r3, -1068
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB760:
    ctx->pc = 0x7F2FB760u;
    // 7F2FB760: lwz     r0, 1028(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB764:
    // 7F2FB764: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB768:
    // 7F2FB768: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB76C:
    ctx->pc = 0x7F2FB76Cu;
    // 7F2FB76C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB770:
    // 7F2FB770: addi    r5, r4, -1052
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1052);

label_7F2FB774:
    ctx->pc = 0x7F2FB774u;
    // 7F2FB774: lfs     f0, 31496(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB778:
    ctx->pc = 0x7F2FB778u;
    // 7F2FB778: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB77C:
    ctx->pc = 0x7F2FB77Cu;
    // 7F2FB77C: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB77Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_7F2FB780:
    ctx->pc = 0x7F2FB780u;
    // 7F2FB780: lwz     r3, 1032(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1032);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB784:
    ctx->pc = 0x7F2FB784u;
    // 7F2FB784: lwz     r0, 1036(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1036);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB788:
    ctx->pc = 0x7F2FB788u;
    // 7F2FB788: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB78C:
    ctx->pc = 0x7F2FB78Cu;
    // 7F2FB78C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB790:
    ctx->pc = 0x7F2FB790u;
    // 7F2FB790: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB794:
    // 7F2FB794: add   r4, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FB798:
    ctx->pc = 0x7F2FB798u;
    // 7F2FB798: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB79C:
    ctx->pc = 0x7F2FB79Cu;
    // 7F2FB79C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB7A0:
    ctx->pc = 0x7F2FB7A0u;
    // 7F2FB7A0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB7A4:
    ctx->pc = 0x7F2FB7A4u;
    // 7F2FB7A4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB7A8:
    ctx->pc = 0x7F2FB7A8u;
    // 7F2FB7A8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB7AC:
    ctx->pc = 0x7F2FB7ACu;
    // 7F2FB7AC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB7B0:
    ctx->pc = 0x7F2FB7B0u;
    // 7F2FB7B0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB7B4:
    ctx->pc = 0x7F2FB7B4u;
    // 7F2FB7B4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB7B8:
    // 7F2FB7B8: bc    4, 1, 0x7F2FB830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB830;
        }
    }

label_7F2FB7BC:
    ctx->downcount -= 4;
    // 7F2FB7BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB7C0:
    ctx->pc = 0x7F2FB7C0u;
    // 7F2FB7C0: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2FB7C0u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F2FB7C4:
    ctx->pc = 0x7F2FB7C4u;
    // 7F2FB7C4: lfs     f2, 31500(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB7C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FB7C8:
    // 7F2FB7C8: bl      0x7F2FBBF8
    {
            ctx->lr = 0x7F2FB7CCu;
            goto label_7F2FBBF8;
    }

label_7F2FB7CC:
    ctx->downcount -= 4;
    // 7F2FB7CC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB7D0:
    // 7F2FB7D0: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB7D4:
    // 7F2FB7D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB7D8:
    // 7F2FB7D8: bl      0x80026020
    {
            ctx->lr = 0x7F2FB7DCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB7DC:
    ctx->downcount -= 6;
    // 7F2FB7DC: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB7E0:
    // 7F2FB7E0: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB7E4:
    // 7F2FB7E4: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB7E8:
    // 7F2FB7E8: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FB7EC:
    // 7F2FB7EC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB7F0:
    // 7F2FB7F0: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FB7F4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FB7F4:
    ctx->downcount -= 15;
    // 7F2FB7F4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB7F8:
    ctx->pc = 0x7F2FB7F8u;
    // 7F2FB7F8: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB7FC:
    // 7F2FB7FC: addi    r5, r3, -1052
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB800:
    ctx->pc = 0x7F2FB800u;
    // 7F2FB800: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB804:
    // 7F2FB804: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB808:
    ctx->pc = 0x7F2FB808u;
    // 7F2FB808: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB80C:
    // 7F2FB80C: add   r6, r6, r22
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB810:
    ctx->pc = 0x7F2FB810u;
    // 7F2FB810: lfs     f30, 31504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB810u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FB814:
    ctx->pc = 0x7F2FB814u;
    // 7F2FB814: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FB818:
    ctx->pc = 0x7F2FB818u;
    // 7F2FB818: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB81C:
    ctx->pc = 0x7F2FB81Cu;
    // 7F2FB81C: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB820:
    ctx->pc = 0x7F2FB820u;
    // 7F2FB820: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB824:
    ctx->pc = 0x7F2FB824u;
    // 7F2FB824: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB828:
    ctx->pc = 0x7F2FB828u;
    // 7F2FB828: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB82C:
    // 7F2FB82C: b       0x7F2FB924
    {
            goto label_7F2FB924;
    }

label_7F2FB830:
    ctx->downcount -= 4;
    // 7F2FB830: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB834:
    ctx->pc = 0x7F2FB834u;
    // 7F2FB834: lfs     f0, 31508(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB834u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31508);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB838:
    ctx->pc = 0x7F2FB838u;
    // 7F2FB838: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB838u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_7F2FB83C:
    // 7F2FB83C: bc    4, 0, 0x7F2FB8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB8B4;
        }
    }

label_7F2FB840:
    ctx->downcount -= 4;
    // 7F2FB840: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB844:
    ctx->pc = 0x7F2FB844u;
    // 7F2FB844: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2FB844u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F2FB848:
    ctx->pc = 0x7F2FB848u;
    // 7F2FB848: lfs     f2, 31512(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31512);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FB84C:
    // 7F2FB84C: bl      0x7F2FBBF8
    {
            ctx->lr = 0x7F2FB850u;
            goto label_7F2FBBF8;
    }

label_7F2FB850:
    ctx->downcount -= 4;
    // 7F2FB850: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB854:
    // 7F2FB854: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB858:
    // 7F2FB858: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB85C:
    // 7F2FB85C: bl      0x80026020
    {
            ctx->lr = 0x7F2FB860u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB860:
    ctx->downcount -= 6;
    // 7F2FB860: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB864:
    // 7F2FB864: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB868:
    // 7F2FB868: addi    r3, r3, -1052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB86C:
    // 7F2FB86C: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FB870:
    // 7F2FB870: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB874:
    // 7F2FB874: bl      0x80025FD8
    {
            ctx->lr = 0x7F2FB878u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2FB878:
    ctx->downcount -= 15;
    // 7F2FB878: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB87C:
    ctx->pc = 0x7F2FB87Cu;
    // 7F2FB87C: lwz     r6, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB880:
    // 7F2FB880: addi    r5, r3, -1052
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB884:
    ctx->pc = 0x7F2FB884u;
    // 7F2FB884: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FB888:
    // 7F2FB888: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB88C:
    ctx->pc = 0x7F2FB88Cu;
    // 7F2FB88C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB890:
    // 7F2FB890: add   r6, r6, r22
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FB894:
    ctx->pc = 0x7F2FB894u;
    // 7F2FB894: lfs     f30, 31504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB894u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FB898:
    ctx->pc = 0x7F2FB898u;
    // 7F2FB898: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FB89C:
    ctx->pc = 0x7F2FB89Cu;
    // 7F2FB89C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB8A0:
    ctx->pc = 0x7F2FB8A0u;
    // 7F2FB8A0: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB8A4:
    ctx->pc = 0x7F2FB8A4u;
    // 7F2FB8A4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB8A8:
    ctx->pc = 0x7F2FB8A8u;
    // 7F2FB8A8: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB8AC:
    ctx->pc = 0x7F2FB8ACu;
    // 7F2FB8AC: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB8B0:
    // 7F2FB8B0: b       0x7F2FB924
    {
            goto label_7F2FB924;
    }

label_7F2FB8B4:
    ctx->downcount -= 4;
    // 7F2FB8B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB8B8:
    ctx->pc = 0x7F2FB8B8u;
    // 7F2FB8B8: lfs     f0, 31516(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB8BC:
    ctx->pc = 0x7F2FB8BCu;
    // 7F2FB8BC: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_7F2FB8C0:
    // 7F2FB8C0: bc    4, 1, 0x7F2FB8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB8E8;
        }
    }

label_7F2FB8C4:
    ctx->pc = 0x7F2FB8C4u;
    ctx->downcount -= 2;
    // 7F2FB8C4: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8C4u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F2FB8C8:
    // 7F2FB8C8: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F2FB8CCu;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F2FB8CC:
    ctx->downcount -= 23;
    // 7F2FB8CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FB8D0:
    // 7F2FB8D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB8D4:
    ctx->pc = 0x7F2FB8D4u;
    // 7F2FB8D4: lfs     f2, 31520(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FB8D8:
    ctx->pc = 0x7F2FB8D8u;
    // 7F2FB8D8: lfs     f0, 31524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB8DC:
    ctx->pc = 0x7F2FB8DCu;
    // 7F2FB8DC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8DCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F2FB8E0:
    ctx->pc = 0x7F2FB8E0u;
    // 7F2FB8E0: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8E0u)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F2FB8E4:
    // 7F2FB8E4: b       0x7F2FB924
    {
            goto label_7F2FB924;
    }

label_7F2FB8E8:
    ctx->downcount -= 4;
    // 7F2FB8E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB8EC:
    ctx->pc = 0x7F2FB8ECu;
    // 7F2FB8EC: lfs     f0, 31528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB8F0:
    ctx->pc = 0x7F2FB8F0u;
    // 7F2FB8F0: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_7F2FB8F4:
    // 7F2FB8F4: bc    4, 0, 0x7F2FB91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FB91C;
        }
    }

label_7F2FB8F8:
    ctx->pc = 0x7F2FB8F8u;
    ctx->downcount -= 2;
    // 7F2FB8F8: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2FB8F8u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F2FB8FC:
    // 7F2FB8FC: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F2FB900u;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F2FB900:
    ctx->downcount -= 23;
    // 7F2FB900: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FB904:
    // 7F2FB904: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB908:
    ctx->pc = 0x7F2FB908u;
    // 7F2FB908: lfs     f2, 31532(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB908u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FB90C:
    ctx->pc = 0x7F2FB90Cu;
    // 7F2FB90C: lfs     f0, 31524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB90Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB910:
    ctx->pc = 0x7F2FB910u;
    // 7F2FB910: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FB910u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2FB914:
    ctx->pc = 0x7F2FB914u;
    // 7F2FB914: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FB914u)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F2FB918:
    // 7F2FB918: b       0x7F2FB924
    {
            goto label_7F2FB924;
    }

label_7F2FB91C:
    ctx->downcount -= 2;
    // 7F2FB91C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FB920:
    ctx->pc = 0x7F2FB920u;
    // 7F2FB920: lfs     f30, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB920u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FB924:
    ctx->pc = 0x7F2FB924u;
    ctx->downcount -= 25;
    // 7F2FB924: lwz     r0, 1376(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1376);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB928:
    // 7F2FB928: lis     r4, 32587
    ctx->gpr[4] = ((u32)(s32)(32587) << 16);

label_7F2FB92C:
    // 7F2FB92C: addi    r4, r4, -1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1068);

label_7F2FB930:
    // 7F2FB930: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB934:
    // 7F2FB934: add   r7, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB938:
    ctx->pc = 0x7F2FB938u;
    // 7F2FB938: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB93C:
    // 7F2FB93C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FB940:
    ctx->pc = 0x7F2FB940u;
    // 7F2FB940: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB944:
    ctx->pc = 0x7F2FB944u;
    // 7F2FB944: stwu     r6, -1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1052);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[3] = ea;
    }

label_7F2FB948:
    ctx->pc = 0x7F2FB948u;
    // 7F2FB948: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB94C:
    ctx->pc = 0x7F2FB94Cu;
    // 7F2FB94C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB950:
    ctx->pc = 0x7F2FB950u;
    // 7F2FB950: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB954:
    ctx->pc = 0x7F2FB954u;
    // 7F2FB954: stw     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB958:
    ctx->pc = 0x7F2FB958u;
    // 7F2FB958: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB95C:
    ctx->pc = 0x7F2FB95Cu;
    // 7F2FB95C: lwz     r0, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB960:
    // 7F2FB960: add   r7, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB964:
    ctx->pc = 0x7F2FB964u;
    // 7F2FB964: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB968:
    ctx->pc = 0x7F2FB968u;
    // 7F2FB968: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB96C:
    ctx->pc = 0x7F2FB96Cu;
    // 7F2FB96C: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB970:
    ctx->pc = 0x7F2FB970u;
    // 7F2FB970: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB974:
    ctx->pc = 0x7F2FB974u;
    // 7F2FB974: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FB978:
    ctx->pc = 0x7F2FB978u;
    // 7F2FB978: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB97C:
    ctx->pc = 0x7F2FB97Cu;
    // 7F2FB97C: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FB980:
    ctx->pc = 0x7F2FB980u;
    // 7F2FB980: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB984:
    // 7F2FB984: bl      0x80025FFC
    {
            ctx->lr = 0x7F2FB988u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F2FB988:
    ctx->downcount -= 8;
    // 7F2FB988: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FB98C:
    // 7F2FB98C: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB990:
    ctx->pc = 0x7F2FB990u;
    // 7F2FB990: lfs     f0, 31424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB990u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FB994:
    // 7F2FB994: addi    r3, r3, -1068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB998:
    ctx->pc = 0x7F2FB998u;
    // 7F2FB998: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2FB998u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F2FB99C:
    // 7F2FB99C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FB9A0:
    ctx->pc = 0x7F2FB9A0u;
    // 7F2FB9A0: stfs     f0, 12(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2FB9A0u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FB9A4:
    // 7F2FB9A4: bl      0x80026020
    {
            ctx->lr = 0x7F2FB9A8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2FB9A8:
    ctx->downcount -= 24;
    // 7F2FB9A8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB9AC:
    ctx->pc = 0x7F2FB9ACu;
    // 7F2FB9AC: lwz     r0, 356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB9B0:
    // 7F2FB9B0: addi    r6, r3, -1052
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1052);

label_7F2FB9B4:
    // 7F2FB9B4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F2FB9B8:
    ctx->pc = 0x7F2FB9B8u;
    // 7F2FB9B8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB9BC:
    // 7F2FB9BC: add   r7, r0, r22
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FB9C0:
    ctx->pc = 0x7F2FB9C0u;
    // 7F2FB9C0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB9C4:
    // 7F2FB9C4: addi    r4, r3, -1068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-1068);

label_7F2FB9C8:
    ctx->pc = 0x7F2FB9C8u;
    // 7F2FB9C8: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FB9CC:
    ctx->pc = 0x7F2FB9CCu;
    // 7F2FB9CC: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB9D0:
    ctx->pc = 0x7F2FB9D0u;
    // 7F2FB9D0: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB9D4:
    ctx->pc = 0x7F2FB9D4u;
    // 7F2FB9D4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB9D8:
    ctx->pc = 0x7F2FB9D8u;
    // 7F2FB9D8: stw     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB9DC:
    ctx->pc = 0x7F2FB9DCu;
    // 7F2FB9DC: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB9E0:
    ctx->pc = 0x7F2FB9E0u;
    // 7F2FB9E0: lwz     r5, 360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FB9E4:
    ctx->pc = 0x7F2FB9E4u;
    // 7F2FB9E4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB9E8:
    ctx->pc = 0x7F2FB9E8u;
    // 7F2FB9E8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FB9EC:
    // 7F2FB9EC: add   r5, r5, r22
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2FB9F0:
    ctx->pc = 0x7F2FB9F0u;
    // 7F2FB9F0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FB9F4:
    ctx->pc = 0x7F2FB9F4u;
    // 7F2FB9F4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FB9F8:
    ctx->pc = 0x7F2FB9F8u;
    // 7F2FB9F8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FB9FC:
    ctx->pc = 0x7F2FB9FCu;
    // 7F2FB9FC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBA00:
    ctx->pc = 0x7F2FBA00u;
    // 7F2FBA00: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBA04:
    ctx->pc = 0x7F2FBA04u;
    // 7F2FBA04: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBA08:
    ctx->downcount -= 3;
    // 7F2FBA08: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2FBA0C:
    // 7F2FBA0C: addi    r22, r22, 16
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(16);

label_7F2FBA10:
    // 7F2FBA10: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F2FBA14:
    ctx->downcount -= 2;
    // 7F2FBA14: cmpw    r17, r31
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBA18:
    // 7F2FBA18: bc    12, 0, 0x7F2FB25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FB25Cu;
                return;
            }
            goto label_7F2FB25C;
        }
    }

label_7F2FBA1C:
    ctx->pc = 0x7F2FBA1Cu;
    ctx->downcount -= 4;
    // 7F2FBA1C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2FBA20:
    ctx->pc = 0x7F2FBA20u;
    // 7F2FBA20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FBA24:
    ctx->pc = 0x7F2FBA24u;
    // 7F2FBA24: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2FBA28:
    ctx->pc = 0x7F2FBA28u;
    // 7F2FBA28: b       0x7F2FBA64
    {
            goto label_7F2FBA64;
    }

label_7F2FBA2C:
    ctx->pc = 0x7F2FBA2Cu;
    ctx->downcount -= 8;
    // 7F2FBA2C: lwz     r4, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FBA30:
    ctx->pc = 0x7F2FBA30u;
    // 7F2FBA30: lwz     r0, 372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBA34:
    // 7F2FBA34: add   r6, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2FBA38:
    // 7F2FBA38: add   r7, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FBA3C:
    ctx->pc = 0x7F2FBA3Cu;
    // 7F2FBA3C: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F2FBA40:
    // 7F2FBA40: addi    r7, r7, -4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-4);

label_7F2FBA44:
    // 7F2FBA44: addi    r6, r6, -4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4);

label_7F2FBA48:
    loop_7F2FBA48(ctx);
    if (ctx->pc == 0x7F2FBA5Cu) goto label_7F2FBA5C;
    return;
label_7F2FBA4C:
    ctx->pc = 0x7F2FBA4Cu;
    // 7F2FBA4C: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F2FBA50:
    ctx->pc = 0x7F2FBA50u;
    // 7F2FBA50: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FBA54:
    ctx->pc = 0x7F2FBA54u;
    // 7F2FBA54: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F2FBA58:
    // 7F2FBA58: bc    16, 0, 0x7F2FBA48
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBA48u;
                return;
            }
            goto label_7F2FBA48;
        }
    }

label_7F2FBA5C:
    ctx->downcount -= 2;
    // 7F2FBA5C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F2FBA60:
    // 7F2FBA60: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2FBA64:
    ctx->pc = 0x7F2FBA64u;
    ctx->downcount -= 3;
    // 7F2FBA64: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBA68:
    // 7F2FBA68: cmpw    r8, r0
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

label_7F2FBA6C:
    // 7F2FBA6C: bc    12, 0, 0x7F2FBA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBA2Cu;
                return;
            }
            goto label_7F2FBA2C;
        }
    }

label_7F2FBA70:
    ctx->pc = 0x7F2FBA70u;
    ctx->downcount -= 3;
    // 7F2FBA70: lwz     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBA74:
    ctx->pc = 0x7F2FBA74u;
    // 7F2FBA74: cmplwi  r0, 0x0000
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

label_7F2FBA78:
    ctx->pc = 0x7F2FBA78u;
    // 7F2FBA78: bc    4, 2, 0x7F2FBAD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBAD0;
        }
    }

label_7F2FBA7C:
    ctx->pc = 0x7F2FBA7Cu;
    ctx->downcount -= 6;
    // 7F2FBA7C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2FBA80:
    ctx->pc = 0x7F2FBA80u;
    // 7F2FBA80: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2FBA84:
    ctx->pc = 0x7F2FBA84u;
    // 7F2FBA84: addi    r18, r3, 18312
    ctx->gpr[18] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F2FBA88:
    ctx->pc = 0x7F2FBA88u;
    // 7F2FBA88: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2FBA8C:
    ctx->pc = 0x7F2FBA8Cu;
    // 7F2FBA8C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2FBA90:
    ctx->pc = 0x7F2FBA90u;
    // 7F2FBA90: b       0x7F2FBAC4
    {
            goto label_7F2FBAC4;
    }

label_7F2FBA94:
    ctx->pc = 0x7F2FBA94u;
    ctx->downcount -= 9;
    // 7F2FBA94: lwz     r3, 380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBA98:
    ctx->pc = 0x7F2FBA98u;
    // 7F2FBA98: lwz     r5, 500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(500);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FBA9C:
    ctx->pc = 0x7F2FBA9Cu;
    // 7F2FBA9C: lwzx    r0, r3, r16
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[16];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBAA0:
    ctx->pc = 0x7F2FBAA0u;
    // 7F2FBAA0: lwz     r4, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FBAA4:
    // 7F2FBAA4: add   r3, r5, r17
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FBAA8:
    // 7F2FBAA8: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_7F2FBAAC:
    ctx->pc = 0x7F2FBAACu;
    // 7F2FBAAC: lwz     r5, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FBAB0:
    // 7F2FBAB0: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FBAB4:
    // 7F2FBAB4: bl      0x7F014964
    {
            ctx->lr = 0x7F2FBAB8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F2FBAB8:
    ctx->downcount -= 3;
    // 7F2FBAB8: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F2FBABC:
    // 7F2FBABC: addi    r16, r16, 4
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(4);

label_7F2FBAC0:
    // 7F2FBAC0: addi    r17, r17, 192
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(192);

label_7F2FBAC4:
    ctx->pc = 0x7F2FBAC4u;
    ctx->downcount -= 3;
    // 7F2FBAC4: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBAC8:
    // 7F2FBAC8: cmpw    r19, r0
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

label_7F2FBACC:
    // 7F2FBACC: bc    12, 0, 0x7F2FBA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBA94u;
                return;
            }
            goto label_7F2FBA94;
        }
    }

label_7F2FBAD0:
    ctx->pc = 0x7F2FBAD0u;
    ctx->downcount -= 6;
    // 7F2FBAD0: lwz     r3, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBAD4:
    ctx->pc = 0x7F2FBAD4u;
    // 7F2FBAD4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2FBAD8:
    ctx->pc = 0x7F2FBAD8u;
    // 7F2FBAD8: lwz     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FBADC:
    ctx->pc = 0x7F2FBADCu;
    // 7F2FBADC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2FBAE0:
    ctx->pc = 0x7F2FBAE0u;
    // 7F2FBAE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FBAE4:
    loop_7F2FBAE4(ctx);
    if (ctx->pc == 0x7F2FBAF8u) goto label_7F2FBAF8;
    return;
label_7F2FBAE8:
    ctx->pc = 0x7F2FBAE8u;
    // 7F2FBAE8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2FBAEC:
    ctx->pc = 0x7F2FBAECu;
    // 7F2FBAEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBAF0:
    ctx->pc = 0x7F2FBAF0u;
    // 7F2FBAF0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2FBAF4:
    // 7F2FBAF4: bc    16, 0, 0x7F2FBAE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBAE4u;
                return;
            }
            goto label_7F2FBAE4;
        }
    }

label_7F2FBAF8:
    ctx->pc = 0x7F2FBAF8u;
    ctx->downcount -= 7;
    // 7F2FBAF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FBAFC:
    ctx->pc = 0x7F2FBAFCu;
    // 7F2FBAFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBB00:
    ctx->pc = 0x7F2FBB00u;
    // 7F2FBB00: lfs     f30, 31408(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2FBB04:
    ctx->pc = 0x7F2FBB04u;
    // 7F2FBB04: li      r17, 1
    ctx->gpr[17] = (u32)(s32)(1);

label_7F2FBB08:
    ctx->pc = 0x7F2FBB08u;
    // 7F2FBB08: lfs     f31, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2FBB0C:
    ctx->pc = 0x7F2FBB0Cu;
    // 7F2FBB0C: li      r16, 64
    ctx->gpr[16] = (u32)(s32)(64);

label_7F2FBB10:
    ctx->pc = 0x7F2FBB10u;
    // 7F2FBB10: b       0x7F2FBB40
    {
            goto label_7F2FBB40;
    }

label_7F2FBB14:
    ctx->pc = 0x7F2FBB14u;
    ctx->downcount -= 9;
    // 7F2FBB14: stfs     f30, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2FBB18:
    // 7F2FBB18: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2FBB1C:
    ctx->pc = 0x7F2FBB1Cu;
    // 7F2FBB1C: stfs     f30, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2FBB20:
    ctx->pc = 0x7F2FBB20u;
    // 7F2FBB20: stfs     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2FBB24:
    ctx->pc = 0x7F2FBB24u;
    // 7F2FBB24: stfs     f31, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBB24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2FBB28:
    ctx->pc = 0x7F2FBB28u;
    // 7F2FBB28: lwz     r0, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBB2C:
    // 7F2FBB2C: add   r3, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2FBB30:
    // 7F2FBB30: addi    r5, r3, 48
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(48);

label_7F2FBB34:
    // 7F2FBB34: bl      0x7F114508
    {
            ctx->lr = 0x7F2FBB38u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F2FBB38:
    ctx->downcount -= 2;
    // 7F2FBB38: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2FBB3C:
    // 7F2FBB3C: addi    r16, r16, 64
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(64);

label_7F2FBB40:
    ctx->pc = 0x7F2FBB40u;
    ctx->downcount -= 3;
    // 7F2FBB40: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBB44:
    // 7F2FBB44: cmpw    r17, r0
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBB48:
    // 7F2FBB48: bc    12, 0, 0x7F2FBB14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBB14u;
                return;
            }
            goto label_7F2FBB14;
        }
    }

label_7F2FBB4C:
    ctx->pc = 0x7F2FBB4Cu;
    ctx->downcount -= 5;
    // 7F2FBB4C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2FBB50:
    ctx->pc = 0x7F2FBB50u;
    // 7F2FBB50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FBB54:
    ctx->pc = 0x7F2FBB54u;
    // 7F2FBB54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2FBB58:
    ctx->pc = 0x7F2FBB58u;
    // 7F2FBB58: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F2FBB5C:
    ctx->pc = 0x7F2FBB5Cu;
    // 7F2FBB5C: b       0x7F2FBBA0
    {
            goto label_7F2FBBA0;
    }

label_7F2FBB60:
    ctx->pc = 0x7F2FBB60u;
    ctx->downcount -= 9;
    // 7F2FBB60: lwz     r7, 1384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1384);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FBB64:
    // 7F2FBB64: addi    r5, r3, 444
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(444);

label_7F2FBB68:
    ctx->pc = 0x7F2FBB68u;
    // 7F2FBB68: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBB6C:
    // 7F2FBB6C: add   r7, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2FBB70:
    // 7F2FBB70: add   r8, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2FBB74:
    ctx->pc = 0x7F2FBB74u;
    // 7F2FBB74: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F2FBB78:
    // 7F2FBB78: addi    r8, r8, -4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-4);

label_7F2FBB7C:
    // 7F2FBB7C: addi    r7, r7, -4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-4);

label_7F2FBB80:
    loop_7F2FBB80(ctx);
    if (ctx->pc == 0x7F2FBB94u) goto label_7F2FBB94;
    return;
label_7F2FBB84:
    ctx->pc = 0x7F2FBB84u;
    // 7F2FBB84: lwzu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

label_7F2FBB88:
    ctx->pc = 0x7F2FBB88u;
    // 7F2FBB88: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBB8C:
    ctx->pc = 0x7F2FBB8Cu;
    // 7F2FBB8C: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

label_7F2FBB90:
    // 7F2FBB90: bc    16, 0, 0x7F2FBB80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBB80u;
                return;
            }
            goto label_7F2FBB80;
        }
    }

label_7F2FBB94:
    ctx->downcount -= 3;
    // 7F2FBB94: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F2FBB98:
    // 7F2FBB98: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

label_7F2FBB9C:
    // 7F2FBB9C: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

label_7F2FBBA0:
    ctx->pc = 0x7F2FBBA0u;
    ctx->downcount -= 3;
    // 7F2FBBA0: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBBA4:
    // 7F2FBBA4: cmpw    r9, r0
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

label_7F2FBBA8:
    // 7F2FBBA8: bc    12, 0, 0x7F2FBB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2FBB60u;
                return;
            }
            goto label_7F2FBB60;
        }
    }

label_7F2FBBAC:
    ctx->pc = 0x7F2FBBACu;
    ctx->downcount -= 1;
    // 7F2FBBAC: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F2FBBB0u;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F2FBBB0:
    ctx->pc = 0x7F2FBBB0u;
    ctx->downcount -= 3;
    // 7F2FBBB0: lwz     r0, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBBB4:
    ctx->pc = 0x7F2FBBB4u;
    // 7F2FBBB4: cmplwi  r0, 0x0000
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

label_7F2FBBB8:
    ctx->pc = 0x7F2FBBB8u;
    // 7F2FBBB8: bc    12, 2, 0x7F2FBBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBBC0;
        }
    }

label_7F2FBBBC:
    ctx->pc = 0x7F2FBBBCu;
    ctx->downcount -= 1;
    // 7F2FBBBC: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F2FBBC0u;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F2FBBC0:
    ctx->pc = 0x7F2FBBC0u;
    ctx->downcount -= 1;
    // 7F2FBBC0: bl      0x7F0FB95C
    {
            ctx->lr = 0x7F2FBBC4u;
            ctx->pc = 0x7F0FB95Cu;
            return;
    }

label_7F2FBBC4:
    ctx->pc = 0x7F2FBBC4u;
    ctx->downcount -= 24;
    // 7F2FBBC4: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2FBBC4u);
        if (ctx->exception) return;
    }

label_7F2FBBC8:
    ctx->pc = 0x7F2FBBC8u;
    // 7F2FBBC8: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBBCC:
    ctx->pc = 0x7F2FBBCCu;
    // 7F2FBBCC: psq_l   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2FBBCCu);
        if (ctx->exception) return;
    }

label_7F2FBBD0:
    ctx->pc = 0x7F2FBBD0u;
    // 7F2FBBD0: lfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBBD4:
    ctx->pc = 0x7F2FBBD4u;
    // 7F2FBBD4: psq_l   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2FBBD4u);
        if (ctx->exception) return;
    }

label_7F2FBBD8:
    ctx->pc = 0x7F2FBBD8u;
    // 7F2FBBD8: lfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBBDC:
    ctx->pc = 0x7F2FBBDCu;
    // 7F2FBBDC: psq_l   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F2FBBDCu);
        if (ctx->exception) return;
    }

label_7F2FBBE0:
    ctx->pc = 0x7F2FBBE0u;
    // 7F2FBBE0: lfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBBE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBBE4:
    ctx->pc = 0x7F2FBBE4u;
    // 7F2FBBE4: lmw     r16, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2FBBE8:
    ctx->pc = 0x7F2FBBE8u;
    // 7F2FBBE8: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBBEC:
    ctx->pc = 0x7F2FBBECu;
    // 7F2FBBEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2FBBF0:
    ctx->pc = 0x7F2FBBF0u;
    // 7F2FBBF0: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F2FBBF4:
    ctx->pc = 0x7F2FBBF4u;
    // 7F2FBBF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2FBBF8:
    ctx->pc = 0x7F2FBBF8u;
    ctx->downcount -= 7;
    // 7F2FBBF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2FBBFC:
    ctx->pc = 0x7F2FBBFCu;
    // 7F2FBBFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2FBC00:
    ctx->pc = 0x7F2FBC00u;
    // 7F2FBC00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBC04:
    ctx->pc = 0x7F2FBC04u;
    // 7F2FBC04: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2FBC08:
    ctx->pc = 0x7F2FBC08u;
    // 7F2FBC08: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2FBC08u);
        if (ctx->exception) return;
    }

label_7F2FBC0C:
    ctx->pc = 0x7F2FBC0Cu;
    // 7F2FBC0C: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC0Cu)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F2FBC10:
    ctx->pc = 0x7F2FBC10u;
    // 7F2FBC10: bl      0x80006668
    {
            ctx->lr = 0x7F2FBC14u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F2FBC14:
    ctx->pc = 0x7F2FBC14u;
    ctx->downcount -= 4;
    // 7F2FBC14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBC18:
    ctx->pc = 0x7F2FBC18u;
    // 7F2FBC18: lfs     f0, 31408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBC1C:
    ctx->pc = 0x7F2FBC1Cu;
    // 7F2FBC1C: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F2FBC20:
    ctx->pc = 0x7F2FBC20u;
    // 7F2FBC20: bc    12, 2, 0x7F2FBC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBC2C;
        }
    }

label_7F2FBC24:
    ctx->pc = 0x7F2FBC24u;
    ctx->downcount -= 18;
    // 7F2FBC24: fdivs   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC24u)) return;
    ppc_fdivs(ctx, 1, 31, 1);

label_7F2FBC28:
    ctx->pc = 0x7F2FBC28u;
    // 7F2FBC28: b       0x7F2FBC34
    {
            goto label_7F2FBC34;
    }

label_7F2FBC2C:
    ctx->pc = 0x7F2FBC2Cu;
    ctx->downcount -= 2;
    // 7F2FBC2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBC30:
    ctx->pc = 0x7F2FBC30u;
    // 7F2FBC30: lfs     f1, 31536(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FBC34:
    ctx->pc = 0x7F2FBC34u;
    ctx->downcount -= 7;
    // 7F2FBC34: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2FBC34u);
        if (ctx->exception) return;
    }

label_7F2FBC38:
    ctx->pc = 0x7F2FBC38u;
    // 7F2FBC38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBC3C:
    ctx->pc = 0x7F2FBC3Cu;
    // 7F2FBC3C: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBC3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBC40:
    ctx->pc = 0x7F2FBC40u;
    // 7F2FBC40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2FBC44:
    ctx->pc = 0x7F2FBC44u;
    // 7F2FBC44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2FBC48:
    ctx->pc = 0x7F2FBC48u;
    // 7F2FBC48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2FBC4C:
    ctx->pc = 0x7F2FBC4Cu;
    ctx->downcount -= 7;
    // 7F2FBC4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2FBC50:
    ctx->pc = 0x7F2FBC50u;
    // 7F2FBC50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2FBC54:
    ctx->pc = 0x7F2FBC54u;
    // 7F2FBC54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBC58:
    ctx->pc = 0x7F2FBC58u;
    // 7F2FBC58: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FBC5C:
    ctx->pc = 0x7F2FBC5Cu;
    // 7F2FBC5C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2FBC60:
    ctx->pc = 0x7F2FBC60u;
    // 7F2FBC60: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2FBC64:
    ctx->pc = 0x7F2FBC64u;
    // 7F2FBC64: bl      0x7F1146A0
    {
            ctx->lr = 0x7F2FBC68u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F2FBC68:
    ctx->pc = 0x7F2FBC68u;
    ctx->downcount -= 5;
    // 7F2FBC68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBC6C:
    ctx->pc = 0x7F2FBC6Cu;
    // 7F2FBC6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2FBC70:
    ctx->pc = 0x7F2FBC70u;
    // 7F2FBC70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2FBC74:
    ctx->pc = 0x7F2FBC74u;
    // 7F2FBC74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2FBC78:
    ctx->pc = 0x7F2FBC78u;
    ctx->downcount -= 5;
    // 7F2FBC78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2FBC7C:
    ctx->pc = 0x7F2FBC7Cu;
    // 7F2FBC7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2FBC80:
    ctx->pc = 0x7F2FBC80u;
    // 7F2FBC80: cmpwi   r4, 16385
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16385);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBC84:
    ctx->pc = 0x7F2FBC84u;
    // 7F2FBC84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBC88:
    ctx->pc = 0x7F2FBC88u;
    // 7F2FBC88: bc    12, 2, 0x7F2FBC90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBC90;
        }
    }

label_7F2FBC8C:
    ctx->pc = 0x7F2FBC8Cu;
    ctx->downcount -= 1;
    // 7F2FBC8C: b       0x7F2FBCB8
    {
            goto label_7F2FBCB8;
    }

label_7F2FBC90:
    ctx->pc = 0x7F2FBC90u;
    ctx->downcount -= 3;
    // 7F2FBC90: lwz     r0, 532(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBC94:
    ctx->pc = 0x7F2FBC94u;
    // 7F2FBC94: cmpwi   r0, 0
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

label_7F2FBC98:
    ctx->pc = 0x7F2FBC98u;
    // 7F2FBC98: bc    4, 2, 0x7F2FBCB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBCB0;
        }
    }

label_7F2FBC9C:
    ctx->pc = 0x7F2FBC9Cu;
    ctx->downcount -= 2;
    // 7F2FBC9C: cmpwi   r5, 0
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

label_7F2FBCA0:
    ctx->pc = 0x7F2FBCA0u;
    // 7F2FBCA0: bc    12, 2, 0x7F2FBCB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBCB0;
        }
    }

label_7F2FBCA4:
    ctx->pc = 0x7F2FBCA4u;
    ctx->downcount -= 3;
    // 7F2FBCA4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2FBCA8:
    ctx->pc = 0x7F2FBCA8u;
    // 7F2FBCA8: stw     r0, 532(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBCAC:
    ctx->pc = 0x7F2FBCACu;
    // 7F2FBCAC: b       0x7F2FBCC0
    {
            goto label_7F2FBCC0;
    }

label_7F2FBCB0:
    ctx->pc = 0x7F2FBCB0u;
    ctx->downcount -= 2;
    // 7F2FBCB0: stw     r5, 532(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBCB4:
    ctx->pc = 0x7F2FBCB4u;
    // 7F2FBCB4: b       0x7F2FBCC0
    {
            goto label_7F2FBCC0;
    }

label_7F2FBCB8:
    ctx->pc = 0x7F2FBCB8u;
    ctx->downcount -= 1;
    // 7F2FBCB8: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F2FBCBCu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F2FBCBC:
    ctx->pc = 0x7F2FBCBCu;
    ctx->downcount -= 1;
    // 7F2FBCBC: b       0x7F2FBCC4
    {
            goto label_7F2FBCC4;
    }

label_7F2FBCC0:
    ctx->pc = 0x7F2FBCC0u;
    ctx->downcount -= 1;
    // 7F2FBCC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FBCC4:
    ctx->pc = 0x7F2FBCC4u;
    ctx->downcount -= 5;
    // 7F2FBCC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBCC8:
    ctx->pc = 0x7F2FBCC8u;
    // 7F2FBCC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2FBCCC:
    ctx->pc = 0x7F2FBCCCu;
    // 7F2FBCCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2FBCD0:
    ctx->pc = 0x7F2FBCD0u;
    // 7F2FBCD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2F80EC;
        }
    }

label_7F2FBCD4:
    ctx->pc = 0x7F2FBCD4u;
    ctx->downcount -= 22;
    // 7F2FBCD4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2FBCD8:
    ctx->pc = 0x7F2FBCD8u;
    // 7F2FBCD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2FBCDC:
    ctx->pc = 0x7F2FBCDCu;
    // 7F2FBCDC: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBCE0:
    ctx->pc = 0x7F2FBCE0u;
    // 7F2FBCE0: stmw     r26, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2FBCE4:
    ctx->pc = 0x7F2FBCE4u;
    // 7F2FBCE4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FBCE8:
    ctx->pc = 0x7F2FBCE8u;
    // 7F2FBCE8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F2FBCEC:
    ctx->pc = 0x7F2FBCECu;
    // 7F2FBCEC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2FBCF0:
    ctx->pc = 0x7F2FBCF0u;
    // 7F2FBCF0: addi    r29, r26, 48
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(48);

label_7F2FBCF4:
    ctx->pc = 0x7F2FBCF4u;
    // 7F2FBCF4: lwz     r31, 532(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(532);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2FBCF8:
    ctx->pc = 0x7F2FBCF8u;
    // 7F2FBCF8: lwz     r30, -27956(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-27956);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2FBCFC:
    ctx->pc = 0x7F2FBCFCu;
    // 7F2FBCFC: cmpwi   r31, 2
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBD00:
    ctx->pc = 0x7F2FBD00u;
    // 7F2FBD00: bc    4, 2, 0x7F2FBD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBD14;
        }
    }

label_7F2FBD04:
    ctx->pc = 0x7F2FBD04u;
    ctx->downcount -= 4;
    // 7F2FBD04: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2FBD08:
    ctx->pc = 0x7F2FBD08u;
    // 7F2FBD08: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F2FBD0C:
    ctx->pc = 0x7F2FBD0Cu;
    // 7F2FBD0C: stw     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBD10:
    ctx->pc = 0x7F2FBD10u;
    // 7F2FBD10: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2FBD14:
    ctx->pc = 0x7F2FBD14u;
    ctx->downcount -= 4;
    // 7F2FBD14: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F2FBD18:
    ctx->pc = 0x7F2FBD18u;
    // 7F2FBD18: lbz     r0, 4448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4448);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2FBD1C:
    ctx->pc = 0x7F2FBD1Cu;
    // 7F2FBD1C: rlwinm. r0, r0, 0, 31, 31
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

label_7F2FBD20:
    ctx->pc = 0x7F2FBD20u;
    // 7F2FBD20: bc    12, 2, 0x7F2FBD48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBD48;
        }
    }

label_7F2FBD24:
    ctx->pc = 0x7F2FBD24u;
    ctx->downcount -= 3;
    // 7F2FBD24: lbz     r0, 560(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2FBD28:
    ctx->pc = 0x7F2FBD28u;
    // 7F2FBD28: cmplwi  r0, 0x0000
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

label_7F2FBD2C:
    ctx->pc = 0x7F2FBD2Cu;
    // 7F2FBD2C: bc    4, 2, 0x7F2FBD48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBD48;
        }
    }

label_7F2FBD30:
    ctx->pc = 0x7F2FBD30u;
    ctx->downcount -= 6;
    // 7F2FBD30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2FBD34:
    ctx->pc = 0x7F2FBD34u;
    // 7F2FBD34: lis     r3, 32560
    ctx->gpr[3] = ((u32)(s32)(32560) << 16);

label_7F2FBD38:
    ctx->pc = 0x7F2FBD38u;
    // 7F2FBD38: stb     r0, 560(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(560);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2FBD3C:
    ctx->pc = 0x7F2FBD3Cu;
    // 7F2FBD3C: addi    r4, r3, -15236
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15236);

label_7F2FBD40:
    ctx->pc = 0x7F2FBD40u;
    // 7F2FBD40: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2FBD44:
    ctx->pc = 0x7F2FBD44u;
    // 7F2FBD44: bl      0x7F3C8A30
    {
            ctx->lr = 0x7F2FBD48u;
            ctx->pc = 0x7F3C8A30u;
            return;
    }

label_7F2FBD48:
    ctx->pc = 0x7F2FBD48u;
    ctx->downcount -= 3;
    // 7F2FBD48: lwz     r3, 552(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBD4C:
    ctx->pc = 0x7F2FBD4Cu;
    // 7F2FBD4C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2FBD50:
    ctx->pc = 0x7F2FBD50u;
    // 7F2FBD50: bl      0x7F3C9624
    {
            ctx->lr = 0x7F2FBD54u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F2FBD54:
    ctx->pc = 0x7F2FBD54u;
    ctx->downcount -= 4;
    // 7F2FBD54: lwz     r4, 324(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FBD58:
    ctx->pc = 0x7F2FBD58u;
    // 7F2FBD58: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2FBD5C:
    ctx->pc = 0x7F2FBD5Cu;
    // 7F2FBD5C: cmplwi  r4, 0x0000
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

label_7F2FBD60:
    ctx->pc = 0x7F2FBD60u;
    // 7F2FBD60: bc    12, 2, 0x7F2FBD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBD74;
        }
    }

label_7F2FBD64:
    ctx->pc = 0x7F2FBD64u;
    ctx->downcount -= 4;
    // 7F2FBD64: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FBD68:
    ctx->pc = 0x7F2FBD68u;
    // 7F2FBD68: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBD6C:
    ctx->pc = 0x7F2FBD6Cu;
    // 7F2FBD6C: lbz     r0, 119(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(119);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2FBD70:
    ctx->pc = 0x7F2FBD70u;
    // 7F2FBD70: stb     r0, 119(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(119);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2FBD74:
    ctx->pc = 0x7F2FBD74u;
    ctx->downcount -= 3;
    // 7F2FBD74: cntlzw r0, r31
    {
        u32 v = ctx->gpr[31];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F2FBD78:
    ctx->pc = 0x7F2FBD78u;
    // 7F2FBD78: rlwinm r31, r0, 27, 5, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F2FBD7C:
    ctx->pc = 0x7F2FBD7Cu;
    // 7F2FBD7C: b       0x7F2FC198
    {
            ctx->pc = 0x7F2FC198u;
            return;
    }

label_7F2FBD80:
    ctx->pc = 0x7F2FBD80u;
    ctx->downcount -= 6;
    // 7F2FBD80: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBD84:
    ctx->pc = 0x7F2FBD84u;
    // 7F2FBD84: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2FBD88:
    ctx->pc = 0x7F2FBD88u;
    // 7F2FBD88: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBD8C:
    ctx->pc = 0x7F2FBD8Cu;
    // 7F2FBD8C: lwz     r7, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2FBD90:
    ctx->pc = 0x7F2FBD90u;
    // 7F2FBD90: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBD94:
    ctx->pc = 0x7F2FBD94u;
    // 7F2FBD94: bc    12, 1, 0x7F2FC188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F2FC188u;
            return;
        }
    }

label_7F2FBD98:
    ctx->pc = 0x7F2FBD98u;
    ctx->downcount -= 7;
    // 7F2FBD98: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2FBD9C:
    ctx->pc = 0x7F2FBD9Cu;
    // 7F2FBD9C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2FBDA0:
    ctx->pc = 0x7F2FBDA0u;
    // 7F2FBDA0: addi    r3, r3, 32120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32120);

label_7F2FBDA4:
    ctx->pc = 0x7F2FBDA4u;
    // 7F2FBDA4: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBDA8:
    ctx->pc = 0x7F2FBDA8u;
    // 7F2FBDA8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2FBDAC:
    ctx->pc = 0x7F2FBDACu;
    // 7F2FBDAC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F2FBDB0:
    ctx->pc = 0x7F2FBDB0u;
    ctx->downcount -= 2;
    // 7F2FBDB0: cmpwi   r7, -1
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBDB4:
    ctx->pc = 0x7F2FBDB4u;
    // 7F2FBDB4: bc    12, 2, 0x7F2FBDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBDCC;
        }
    }

label_7F2FBDB8:
    ctx->pc = 0x7F2FBDB8u;
    ctx->downcount -= 1;
    // 7F2FBDB8: bc    12, 0, 0x7F2FC188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F2FC188u;
            return;
        }
    }

label_7F2FBDBC:
    ctx->pc = 0x7F2FBDBCu;
    ctx->downcount -= 2;
    // 7F2FBDBC: cmpwi   r7, 2
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBDC0:
    ctx->pc = 0x7F2FBDC0u;
    // 7F2FBDC0: bc    4, 0, 0x7F2FC188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F2FC188u;
            return;
        }
    }

label_7F2FBDC4:
    ctx->pc = 0x7F2FBDC4u;
    ctx->downcount -= 2;
    // 7F2FBDC4: stw     r7, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FBDC8:
    ctx->pc = 0x7F2FBDC8u;
    // 7F2FBDC8: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBDCC:
    ctx->pc = 0x7F2FBDCCu;
    ctx->downcount -= 4;
    // 7F2FBDCC: lwz     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBDD0:
    ctx->pc = 0x7F2FBDD0u;
    // 7F2FBDD0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2FBDD4:
    ctx->pc = 0x7F2FBDD4u;
    // 7F2FBDD4: stw     r0, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBDD8:
    ctx->pc = 0x7F2FBDD8u;
    // 7F2FBDD8: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBDDC:
    ctx->pc = 0x7F2FBDDCu;
    ctx->downcount -= 45;
    // 7F2FBDDC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FBDE0:
    ctx->pc = 0x7F2FBDE0u;
    // 7F2FBDE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBDE4:
    ctx->pc = 0x7F2FBDE4u;
    // 7F2FBDE4: rlwinm r5, r7, 5, 0, 26
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 5u) & 0xFFFFFFE0u;
    }

label_7F2FBDE8:
    ctx->pc = 0x7F2FBDE8u;
    // 7F2FBDE8: lfs     f3, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBDE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2FBDEC:
    ctx->pc = 0x7F2FBDECu;
    // 7F2FBDEC: addi    r0, r4, 32396
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32396);

label_7F2FBDF0:
    ctx->pc = 0x7F2FBDF0u;
    // 7F2FBDF0: add   r4, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2FBDF4:
    ctx->pc = 0x7F2FBDF4u;
    // 7F2FBDF4: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBDF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBDF8:
    ctx->pc = 0x7F2FBDF8u;
    // 7F2FBDF8: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBDF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FBDFC:
    ctx->pc = 0x7F2FBDFCu;
    // 7F2FBDFC: stfs     f0, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBDFCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBE00:
    ctx->pc = 0x7F2FBE00u;
    // 7F2FBE00: fneg    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE00u)) return;
    ctx->fpr[4] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F2FBE04:
    ctx->pc = 0x7F2FBE04u;
    // 7F2FBE04: lfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBE08:
    ctx->pc = 0x7F2FBE08u;
    // 7F2FBE08: lfs     f1, 388(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE08u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FBE0C:
    ctx->pc = 0x7F2FBE0Cu;
    // 7F2FBE0C: fneg    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE0Cu)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F2FBE10:
    ctx->pc = 0x7F2FBE10u;
    // 7F2FBE10: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F2FBE14:
    ctx->pc = 0x7F2FBE14u;
    // 7F2FBE14: fdivs   f6, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE14u)) return;
    ppc_fdivs(ctx, 6, 3, 1);

label_7F2FBE18:
    ctx->pc = 0x7F2FBE18u;
    // 7F2FBE18: lfs     f3, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2FBE1C:
    ctx->pc = 0x7F2FBE1Cu;
    // 7F2FBE1C: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBE20:
    ctx->pc = 0x7F2FBE20u;
    // 7F2FBE20: lfs     f1, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FBE24:
    ctx->pc = 0x7F2FBE24u;
    // 7F2FBE24: lfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBE28:
    ctx->pc = 0x7F2FBE28u;
    // 7F2FBE28: stfs     f6, 396(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE28u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(396);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F2FBE2C:
    ctx->pc = 0x7F2FBE2Cu;
    // 7F2FBE2C: stfs     f5, 392(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE2Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(392);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F2FBE30:
    ctx->pc = 0x7F2FBE30u;
    // 7F2FBE30: stfs     f4, 400(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE30u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F2FBE34:
    ctx->pc = 0x7F2FBE34u;
    // 7F2FBE34: stfs     f3, 412(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE34u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2FBE38:
    ctx->pc = 0x7F2FBE38u;
    // 7F2FBE38: stfs     f2, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2FBE3C:
    ctx->pc = 0x7F2FBE3Cu;
    // 7F2FBE3C: stw     r0, 408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBE40:
    ctx->pc = 0x7F2FBE40u;
    // 7F2FBE40: stfs     f1, 420(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE40u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(420);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2FBE44:
    ctx->pc = 0x7F2FBE44u;
    // 7F2FBE44: stfs     f0, 424(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBE44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(424);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBE48:
    ctx->pc = 0x7F2FBE48u;
    // 7F2FBE48: stw     r7, 556(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FBE4C:
    ctx->pc = 0x7F2FBE4Cu;
    // 7F2FBE4C: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBE50:
    ctx->pc = 0x7F2FBE50u;
    ctx->downcount -= 2;
    // 7F2FBE50: stw     r7, 472(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FBE54:
    ctx->pc = 0x7F2FBE54u;
    // 7F2FBE54: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBE58:
    ctx->pc = 0x7F2FBE58u;
    ctx->downcount -= 2;
    // 7F2FBE58: cmpwi   r7, -1
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBE5C:
    ctx->pc = 0x7F2FBE5Cu;
    // 7F2FBE5C: bc    12, 2, 0x7F2FBE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBE80;
        }
    }

label_7F2FBE60:
    ctx->pc = 0x7F2FBE60u;
    ctx->downcount -= 1;
    // 7F2FBE60: bc    4, 0, 0x7F2FBE70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBE70;
        }
    }

label_7F2FBE64:
    ctx->pc = 0x7F2FBE64u;
    ctx->downcount -= 2;
    // 7F2FBE64: cmpwi   r7, -2
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBE68:
    ctx->pc = 0x7F2FBE68u;
    // 7F2FBE68: bc    4, 0, 0x7F2FBE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBE90;
        }
    }

label_7F2FBE6C:
    ctx->pc = 0x7F2FBE6Cu;
    ctx->downcount -= 1;
    // 7F2FBE6C: b       0x7F2FBE94
    {
            goto label_7F2FBE94;
    }

label_7F2FBE70:
    ctx->pc = 0x7F2FBE70u;
    ctx->downcount -= 2;
    // 7F2FBE70: cmpwi   r7, 2
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2FBE74:
    ctx->pc = 0x7F2FBE74u;
    // 7F2FBE74: bc    4, 0, 0x7F2FBE94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBE94;
        }
    }

label_7F2FBE78:
    ctx->pc = 0x7F2FBE78u;
    ctx->downcount -= 2;
    // 7F2FBE78: stw     r7, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2FBE7C:
    ctx->pc = 0x7F2FBE7Cu;
    // 7F2FBE7C: b       0x7F2FBE94
    {
            goto label_7F2FBE94;
    }

label_7F2FBE80:
    ctx->pc = 0x7F2FBE80u;
    ctx->downcount -= 4;
    // 7F2FBE80: lwz     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBE84:
    ctx->pc = 0x7F2FBE84u;
    // 7F2FBE84: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2FBE88:
    ctx->pc = 0x7F2FBE88u;
    // 7F2FBE88: stw     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBE8C:
    ctx->pc = 0x7F2FBE8Cu;
    // 7F2FBE8C: b       0x7F2FBE94
    {
            goto label_7F2FBE94;
    }

label_7F2FBE90:
    ctx->pc = 0x7F2FBE90u;
    ctx->downcount -= 1;
    // 7F2FBE90: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F2FBE94:
    ctx->pc = 0x7F2FBE94u;
    ctx->downcount -= 3;
    // 7F2FBE94: cmpwi   r31, 0
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

label_7F2FBE98:
    ctx->pc = 0x7F2FBE98u;
    // 7F2FBE98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2FBE9C:
    ctx->pc = 0x7F2FBE9Cu;
    // 7F2FBE9C: bc    12, 2, 0x7F2FBEB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBEB0;
        }
    }

label_7F2FBEA0:
    ctx->pc = 0x7F2FBEA0u;
    ctx->downcount -= 3;
    // 7F2FBEA0: lwz     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBEA4:
    ctx->pc = 0x7F2FBEA4u;
    // 7F2FBEA4: cmpwi   r0, 0
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

label_7F2FBEA8:
    ctx->pc = 0x7F2FBEA8u;
    // 7F2FBEA8: bc    12, 2, 0x7F2FBEB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBEB0;
        }
    }

label_7F2FBEAC:
    ctx->pc = 0x7F2FBEACu;
    ctx->downcount -= 1;
    // 7F2FBEAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2FBEB0:
    ctx->pc = 0x7F2FBEB0u;
    ctx->downcount -= 2;
    // 7F2FBEB0: or   r28, r28, r3
    {
        ctx->gpr[28] = ctx->gpr[28] | ctx->gpr[3];
    }

label_7F2FBEB4:
    ctx->pc = 0x7F2FBEB4u;
    // 7F2FBEB4: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBEB8:
    ctx->pc = 0x7F2FBEB8u;
    ctx->downcount -= 4;
    // 7F2FBEB8: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FBEBC:
    ctx->pc = 0x7F2FBEBCu;
    // 7F2FBEBC: lwz     r6, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FBEC0:
    ctx->pc = 0x7F2FBEC0u;
    // 7F2FBEC0: cmpwi   r5, 0
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

label_7F2FBEC4:
    ctx->pc = 0x7F2FBEC4u;
    // 7F2FBEC4: bc    12, 2, 0x7F2FBECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBECC;
        }
    }

label_7F2FBEC8:
    ctx->pc = 0x7F2FBEC8u;
    ctx->downcount -= 1;
    // 7F2FBEC8: b       0x7F2FBEE0
    {
            goto label_7F2FBEE0;
    }

label_7F2FBECC:
    ctx->pc = 0x7F2FBECCu;
    ctx->downcount -= 3;
    // 7F2FBECC: cmpwi   r6, 0
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

label_7F2FBED0:
    ctx->pc = 0x7F2FBED0u;
    // 7F2FBED0: stw     r5, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBED4:
    ctx->pc = 0x7F2FBED4u;
    // 7F2FBED4: bc    4, 1, 0x7F2FC188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F2FC188u;
            return;
        }
    }

label_7F2FBED8:
    ctx->pc = 0x7F2FBED8u;
    ctx->downcount -= 2;
    // 7F2FBED8: stw     r6, 496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FBEDC:
    ctx->pc = 0x7F2FBEDCu;
    // 7F2FBEDC: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBEE0:
    ctx->pc = 0x7F2FBEE0u;
    ctx->downcount -= 2;
    // 7F2FBEE0: cmpwi   r7, 0
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

label_7F2FBEE4:
    ctx->pc = 0x7F2FBEE4u;
    // 7F2FBEE4: bc    4, 1, 0x7F2FBF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBF20;
        }
    }

label_7F2FBEE8:
    ctx->pc = 0x7F2FBEE8u;
    ctx->downcount -= 14;
    // 7F2FBEE8: xoris   r3, r7, 0x8000
    ctx->gpr[3] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F2FBEEC:
    ctx->pc = 0x7F2FBEECu;
    // 7F2FBEEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2FBEF0:
    ctx->pc = 0x7F2FBEF0u;
    // 7F2FBEF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FBEF4:
    ctx->pc = 0x7F2FBEF4u;
    // 7F2FBEF4: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBEF8:
    ctx->pc = 0x7F2FBEF8u;
    // 7F2FBEF8: addi    r3, r4, 31416
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(31416);

label_7F2FBEFC:
    ctx->pc = 0x7F2FBEFCu;
    // 7F2FBEFC: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBF00:
    ctx->pc = 0x7F2FBF00u;
    // 7F2FBF00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FBF04:
    ctx->pc = 0x7F2FBF04u;
    // 7F2FBF04: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBF08:
    ctx->pc = 0x7F2FBF08u;
    // 7F2FBF08: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBF0C:
    ctx->pc = 0x7F2FBF0Cu;
    // 7F2FBF0C: lfs     f2, 31540(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31540);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2FBF10:
    ctx->pc = 0x7F2FBF10u;
    // 7F2FBF10: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF10u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2FBF14:
    ctx->pc = 0x7F2FBF14u;
    // 7F2FBF14: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF14u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F2FBF18:
    ctx->pc = 0x7F2FBF18u;
    // 7F2FBF18: stfs     f0, 488(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF18u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(488);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBF1C:
    ctx->pc = 0x7F2FBF1Cu;
    // 7F2FBF1C: b       0x7F2FBF2C
    {
            goto label_7F2FBF2C;
    }

label_7F2FBF20:
    ctx->pc = 0x7F2FBF20u;
    ctx->downcount -= 3;
    // 7F2FBF20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBF24:
    ctx->pc = 0x7F2FBF24u;
    // 7F2FBF24: lfs     f0, 31544(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBF28:
    ctx->pc = 0x7F2FBF28u;
    // 7F2FBF28: stfs     f0, 488(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF28u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(488);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBF2C:
    ctx->pc = 0x7F2FBF2Cu;
    ctx->downcount -= 2;
    // 7F2FBF2C: cmpwi   r5, 0
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

label_7F2FBF30:
    ctx->pc = 0x7F2FBF30u;
    // 7F2FBF30: bc    4, 0, 0x7F2FBF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBF40;
        }
    }

label_7F2FBF34:
    ctx->pc = 0x7F2FBF34u;
    ctx->downcount -= 3;
    // 7F2FBF34: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2FBF38:
    ctx->pc = 0x7F2FBF38u;
    // 7F2FBF38: stw     r0, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBF3C:
    ctx->pc = 0x7F2FBF3Cu;
    // 7F2FBF3C: b       0x7F2FBF44
    {
            goto label_7F2FBF44;
    }

label_7F2FBF40:
    ctx->pc = 0x7F2FBF40u;
    ctx->downcount -= 1;
    // 7F2FBF40: stw     r5, 492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBF44:
    ctx->pc = 0x7F2FBF44u;
    ctx->downcount -= 2;
    // 7F2FBF44: cmpwi   r6, 0
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

label_7F2FBF48:
    ctx->pc = 0x7F2FBF48u;
    // 7F2FBF48: bc    4, 0, 0x7F2FBF58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2FBF58;
        }
    }

label_7F2FBF4C:
    ctx->pc = 0x7F2FBF4Cu;
    ctx->downcount -= 3;
    // 7F2FBF4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2FBF50:
    ctx->pc = 0x7F2FBF50u;
    // 7F2FBF50: stw     r0, 496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBF54:
    ctx->pc = 0x7F2FBF54u;
    // 7F2FBF54: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBF58:
    ctx->pc = 0x7F2FBF58u;
    ctx->downcount -= 2;
    // 7F2FBF58: stw     r6, 496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FBF5C:
    ctx->pc = 0x7F2FBF5Cu;
    // 7F2FBF5C: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBF60:
    ctx->pc = 0x7F2FBF60u;
    ctx->downcount -= 36;
    // 7F2FBF60: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F2FBF64:
    ctx->pc = 0x7F2FBF64u;
    // 7F2FBF64: xoris   r5, r7, 0x8000
    ctx->gpr[5] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F2FBF68:
    ctx->pc = 0x7F2FBF68u;
    // 7F2FBF68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FBF6C:
    ctx->pc = 0x7F2FBF6Cu;
    // 7F2FBF6C: lwz     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBF70:
    ctx->pc = 0x7F2FBF70u;
    // 7F2FBF70: addi    r7, r4, 31416
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(31416);

label_7F2FBF74:
    ctx->pc = 0x7F2FBF74u;
    // 7F2FBF74: stw     r5, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBF78:
    ctx->pc = 0x7F2FBF78u;
    // 7F2FBF78: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2FBF7C:
    ctx->pc = 0x7F2FBF7Cu;
    // 7F2FBF7C: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBF80:
    ctx->pc = 0x7F2FBF80u;
    // 7F2FBF80: stw     r6, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FBF84:
    ctx->pc = 0x7F2FBF84u;
    // 7F2FBF84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2FBF88:
    ctx->pc = 0x7F2FBF88u;
    // 7F2FBF88: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2FBF8C:
    ctx->pc = 0x7F2FBF8Cu;
    // 7F2FBF8C: lfd     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF8Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBF90:
    ctx->pc = 0x7F2FBF90u;
    // 7F2FBF90: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBF94:
    ctx->pc = 0x7F2FBF94u;
    // 7F2FBF94: stw     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FBF98:
    ctx->pc = 0x7F2FBF98u;
    // 7F2FBF98: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF98u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F2FBF9C:
    ctx->pc = 0x7F2FBF9Cu;
    // 7F2FBF9C: lfs     f0, 31424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBF9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2FBFA0:
    ctx->pc = 0x7F2FBFA0u;
    // 7F2FBFA0: stw     r6, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FBFA4:
    ctx->pc = 0x7F2FBFA4u;
    // 7F2FBFA4: lfd     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBFA8:
    ctx->pc = 0x7F2FBFA8u;
    // 7F2FBFA8: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBFAC:
    ctx->pc = 0x7F2FBFACu;
    // 7F2FBFAC: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFACu)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2FBFB0:
    ctx->pc = 0x7F2FBFB0u;
    // 7F2FBFB0: stfs     f2, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2FBFB4:
    ctx->pc = 0x7F2FBFB4u;
    // 7F2FBFB4: lwz     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FBFB8:
    ctx->pc = 0x7F2FBFB8u;
    // 7F2FBFB8: lwz     r4, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FBFBC:
    ctx->pc = 0x7F2FBFBCu;
    // 7F2FBFBC: stfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2FBFC0:
    ctx->pc = 0x7F2FBFC0u;
    // 7F2FBFC0: stw     r5, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FBFC4:
    ctx->pc = 0x7F2FBFC4u;
    // 7F2FBFC4: lwz     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBFC8:
    ctx->pc = 0x7F2FBFC8u;
    // 7F2FBFC8: stw     r6, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FBFCC:
    ctx->pc = 0x7F2FBFCCu;
    // 7F2FBFCC: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FBFD0:
    ctx->pc = 0x7F2FBFD0u;
    // 7F2FBFD0: stw     r4, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FBFD4:
    ctx->pc = 0x7F2FBFD4u;
    // 7F2FBFD4: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFD4u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2FBFD8:
    ctx->pc = 0x7F2FBFD8u;
    // 7F2FBFD8: stw     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBFDC:
    ctx->pc = 0x7F2FBFDCu;
    // 7F2FBFDC: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FBFDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FBFE0:
    ctx->pc = 0x7F2FBFE0u;
    // 7F2FBFE0: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FBFE4:
    ctx->pc = 0x7F2FBFE4u;
    // 7F2FBFE4: stw     r3, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBFE8:
    ctx->pc = 0x7F2FBFE8u;
    // 7F2FBFE8: stw     r0, 208(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FBFEC:
    ctx->pc = 0x7F2FBFECu;
    // 7F2FBFEC: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FBFF0:
    ctx->pc = 0x7F2FBFF0u;
    ctx->downcount -= 34;
    // 7F2FBFF0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2FBFF4:
    ctx->pc = 0x7F2FBFF4u;
    // 7F2FBFF4: xoris   r3, r7, 0x8000
    ctx->gpr[3] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F2FBFF8:
    ctx->pc = 0x7F2FBFF8u;
    // 7F2FBFF8: stw     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FBFFC:
    ctx->pc = 0x7F2FBFFCu;
    // 7F2FBFFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2FC000:
    ctx->pc = 0x7F2FC000u;
    // 7F2FC000: lfd     f2, 31416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC000u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31416);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FC004:
    ctx->pc = 0x7F2FC004u;
    // 7F2FC004: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC008:
    ctx->pc = 0x7F2FC008u;
    // 7F2FC008: lfs     f1, 196(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC008u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FC00C:
    ctx->pc = 0x7F2FC00Cu;
    // 7F2FC00C: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC00Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FC010:
    ctx->pc = 0x7F2FC010u;
    // 7F2FC010: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC014:
    ctx->pc = 0x7F2FC014u;
    // 7F2FC014: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FC014u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2FC018:
    ctx->pc = 0x7F2FC018u;
    // 7F2FC018: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC01C:
    ctx->pc = 0x7F2FC01Cu;
    // 7F2FC01C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FC01Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2FC020:
    ctx->pc = 0x7F2FC020u;
    // 7F2FC020: stfs     f0, 196(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC020u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FC024:
    ctx->pc = 0x7F2FC024u;
    // 7F2FC024: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC028:
    ctx->pc = 0x7F2FC028u;
    // 7F2FC028: lfs     f1, 200(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC028u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FC02C:
    ctx->pc = 0x7F2FC02Cu;
    // 7F2FC02C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC030:
    ctx->pc = 0x7F2FC030u;
    // 7F2FC030: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC034:
    ctx->pc = 0x7F2FC034u;
    // 7F2FC034: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2FC038:
    ctx->pc = 0x7F2FC038u;
    // 7F2FC038: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC03C:
    ctx->pc = 0x7F2FC03Cu;
    // 7F2FC03C: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC03Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FC040:
    ctx->pc = 0x7F2FC040u;
    // 7F2FC040: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FC040u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2FC044:
    ctx->pc = 0x7F2FC044u;
    // 7F2FC044: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FC044u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2FC048:
    ctx->pc = 0x7F2FC048u;
    // 7F2FC048: stfs     f0, 200(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC048u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FC04C:
    ctx->pc = 0x7F2FC04Cu;
    // 7F2FC04C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC050:
    ctx->pc = 0x7F2FC050u;
    // 7F2FC050: lfs     f1, 204(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC050u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2FC054:
    ctx->pc = 0x7F2FC054u;
    // 7F2FC054: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC058:
    ctx->pc = 0x7F2FC058u;
    // 7F2FC058: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC05C:
    ctx->pc = 0x7F2FC05Cu;
    // 7F2FC05C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2FC060:
    ctx->pc = 0x7F2FC060u;
    // 7F2FC060: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC064:
    ctx->pc = 0x7F2FC064u;
    // 7F2FC064: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2FC068:
    ctx->pc = 0x7F2FC068u;
    // 7F2FC068: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2FC068u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2FC06C:
    ctx->pc = 0x7F2FC06Cu;
    // 7F2FC06C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2FC06Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2FC070:
    ctx->pc = 0x7F2FC070u;
    // 7F2FC070: stfs     f0, 204(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2FC070u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2FC074:
    ctx->pc = 0x7F2FC074u;
    // 7F2FC074: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

label_7F2FC078:
    ctx->pc = 0x7F2FC078u;
    ctx->downcount -= 16;
    // 7F2FC078: sth     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2FC07C:
    ctx->pc = 0x7F2FC07Cu;
    // 7F2FC07C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2FC080:
    ctx->pc = 0x7F2FC080u;
    // 7F2FC080: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F2FC084:
    ctx->pc = 0x7F2FC084u;
    // 7F2FC084: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC088:
    ctx->pc = 0x7F2FC088u;
    // 7F2FC088: sth     r0, 30(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2FC08C:
    ctx->pc = 0x7F2FC08Cu;
    // 7F2FC08C: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC090:
    ctx->pc = 0x7F2FC090u;
    // 7F2FC090: sth     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2FC094:
    ctx->pc = 0x7F2FC094u;
    // 7F2FC094: lwz     r6, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2FC098:
    ctx->pc = 0x7F2FC098u;
    // 7F2FC098: lwz     r5, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2FC09C:
    ctx->pc = 0x7F2FC09Cu;
    // 7F2FC09C: lwz     r4, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2FC0A0:
    ctx->pc = 0x7F2FC0A0u;
    // 7F2FC0A0: lwz     r0, 208(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC0A4:
    ctx->pc = 0x7F2FC0A4u;
    // 7F2FC0A4: stw     r6, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2FC0A8:
    ctx->pc = 0x7F2FC0A8u;
    // 7F2FC0A8: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2FC0AC:
    ctx->pc = 0x7F2FC0ACu;
    // 7F2FC0AC: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2FC0B0:
    ctx->pc = 0x7F2FC0B0u;
    // 7F2FC0B0: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC0B4:
    ctx->pc = 0x7F2FC0B4u;
    // 7F2FC0B4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2FC0B8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2FC0B8:
    ctx->pc = 0x7F2FC0B8u;
    ctx->downcount -= 2;
    // 7F2FC0B8: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F2FC0BC:
    ctx->pc = 0x7F2FC0BCu;
    // 7F2FC0BC: bl      0x7F3B3370
    {
            ctx->lr = 0x7F2FC0C0u;
            ctx->pc = 0x7F3B3370u;
            return;
    }

label_7F2FC0C0:
    ctx->pc = 0x7F2FC0C0u;
    ctx->downcount -= 2;
    // 7F2FC0C0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_7F2FC0C4:
    ctx->pc = 0x7F2FC0C4u;
    // 7F2FC0C4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2FC0C8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2FC0C8:
    ctx->pc = 0x7F2FC0C8u;
    ctx->downcount -= 9;
    // 7F2FC0C8: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC0CC:
    ctx->pc = 0x7F2FC0CCu;
    // 7F2FC0CC: lwz     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC0D0:
    ctx->pc = 0x7F2FC0D0u;
    // 7F2FC0D0: stw     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FC0D4:
    ctx->pc = 0x7F2FC0D4u;
    // 7F2FC0D4: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2FC0D8:
    ctx->pc = 0x7F2FC0D8u;
    // 7F2FC0D8: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC0DC:
    ctx->pc = 0x7F2FC0DCu;
    // 7F2FC0DC: lwz     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2FC0E0:
    ctx->pc = 0x7F2FC0E0u;
    // 7F2FC0E0: stw     r3, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2FC0E4:
    ctx->pc = 0x7F2FC0E4u;
    // 7F2FC0E4: stw     r0, 208(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2FC0E8:
    ctx->pc = 0x7F2FC0E8u;
    // 7F2FC0E8: b       0x7F2FC188
    {
            ctx->pc = 0x7F2FC188u;
            return;
    }

    ctx->pc = 0x7F2FC0ECu;
    return;
return_dispatch_7F2F80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2F8110u: goto label_7F2F8110;
    case 0x7F2F8120u: goto label_7F2F8120;
    case 0x7F2F8280u: goto label_7F2F8280;
    case 0x7F2F82F8u: goto label_7F2F82F8;
    case 0x7F2F8320u: goto label_7F2F8320;
    case 0x7F2F83B0u: goto label_7F2F83B0;
    case 0x7F2F8458u: goto label_7F2F8458;
    case 0x7F2F84F4u: goto label_7F2F84F4;
    case 0x7F2F86DCu: goto label_7F2F86DC;
    case 0x7F2F8920u: goto label_7F2F8920;
    case 0x7F2F8A90u: goto label_7F2F8A90;
    case 0x7F2F8AB8u: goto label_7F2F8AB8;
    case 0x7F2F8AECu: goto label_7F2F8AEC;
    case 0x7F2F8B14u: goto label_7F2F8B14;
    case 0x7F2F8B20u: goto label_7F2F8B20;
    case 0x7F2F8B58u: goto label_7F2F8B58;
    case 0x7F2F8B7Cu: goto label_7F2F8B7C;
    case 0x7F2F8BB8u: goto label_7F2F8BB8;
    case 0x7F2F8BF0u: goto label_7F2F8BF0;
    case 0x7F2F8C08u: goto label_7F2F8C08;
    case 0x7F2F8C10u: goto label_7F2F8C10;
    case 0x7F2F8C20u: goto label_7F2F8C20;
    case 0x7F2F8C28u: goto label_7F2F8C28;
    case 0x7F2F8C68u: goto label_7F2F8C68;
    case 0x7F2F8C7Cu: goto label_7F2F8C7C;
    case 0x7F2F8C8Cu: goto label_7F2F8C8C;
    case 0x7F2F8CA0u: goto label_7F2F8CA0;
    case 0x7F2F8CB0u: goto label_7F2F8CB0;
    case 0x7F2F8CC4u: goto label_7F2F8CC4;
    case 0x7F2F8CD4u: goto label_7F2F8CD4;
    case 0x7F2F8CE8u: goto label_7F2F8CE8;
    case 0x7F2F8CF8u: goto label_7F2F8CF8;
    case 0x7F2F8D0Cu: goto label_7F2F8D0C;
    case 0x7F2F8D1Cu: goto label_7F2F8D1C;
    case 0x7F2F8D30u: goto label_7F2F8D30;
    case 0x7F2F8D40u: goto label_7F2F8D40;
    case 0x7F2F8D54u: goto label_7F2F8D54;
    case 0x7F2F8D64u: goto label_7F2F8D64;
    case 0x7F2F8D78u: goto label_7F2F8D78;
    case 0x7F2F8D94u: goto label_7F2F8D94;
    case 0x7F2F8DB4u: goto label_7F2F8DB4;
    case 0x7F2F8DC8u: goto label_7F2F8DC8;
    case 0x7F2F8DE4u: goto label_7F2F8DE4;
    case 0x7F2F8E00u: goto label_7F2F8E00;
    case 0x7F2F8E44u: goto label_7F2F8E44;
    case 0x7F2F8E8Cu: goto label_7F2F8E8C;
    case 0x7F2F8ED8u: goto label_7F2F8ED8;
    case 0x7F2F8F34u: goto label_7F2F8F34;
    case 0x7F2F8F40u: goto label_7F2F8F40;
    case 0x7F2F8F54u: goto label_7F2F8F54;
    case 0x7F2F8F74u: goto label_7F2F8F74;
    case 0x7F2F8F88u: goto label_7F2F8F88;
    case 0x7F2F8FC4u: goto label_7F2F8FC4;
    case 0x7F2F8FDCu: goto label_7F2F8FDC;
    case 0x7F2F8FE4u: goto label_7F2F8FE4;
    case 0x7F2F90F4u: goto label_7F2F90F4;
    case 0x7F2F9130u: goto label_7F2F9130;
    case 0x7F2F9150u: goto label_7F2F9150;
    case 0x7F2F9184u: goto label_7F2F9184;
    case 0x7F2F918Cu: goto label_7F2F918C;
    case 0x7F2F9194u: goto label_7F2F9194;
    case 0x7F2F91A8u: goto label_7F2F91A8;
    case 0x7F2F91BCu: goto label_7F2F91BC;
    case 0x7F2F91C4u: goto label_7F2F91C4;
    case 0x7F2F92F8u: goto label_7F2F92F8;
    case 0x7F2F94C8u: goto label_7F2F94C8;
    case 0x7F2F9650u: goto label_7F2F9650;
    case 0x7F2F97C0u: goto label_7F2F97C0;
    case 0x7F2F9890u: goto label_7F2F9890;
    case 0x7F2F98ACu: goto label_7F2F98AC;
    case 0x7F2F98C8u: goto label_7F2F98C8;
    case 0x7F2F99C0u: goto label_7F2F99C0;
    case 0x7F2F99E0u: goto label_7F2F99E0;
    case 0x7F2F99FCu: goto label_7F2F99FC;
    case 0x7F2F9A08u: goto label_7F2F9A08;
    case 0x7F2F9A8Cu: goto label_7F2F9A8C;
    case 0x7F2F9A90u: goto label_7F2F9A90;
    case 0x7F2F9AE8u: goto label_7F2F9AE8;
    case 0x7F2F9B04u: goto label_7F2F9B04;
    case 0x7F2F9B1Cu: goto label_7F2F9B1C;
    case 0x7F2F9B3Cu: goto label_7F2F9B3C;
    case 0x7F2F9C60u: goto label_7F2F9C60;
    case 0x7F2F9C68u: goto label_7F2F9C68;
    case 0x7F2F9C70u: goto label_7F2F9C70;
    case 0x7F2F9C94u: goto label_7F2F9C94;
    case 0x7F2F9CB8u: goto label_7F2F9CB8;
    case 0x7F2F9D24u: goto label_7F2F9D24;
    case 0x7F2F9D2Cu: goto label_7F2F9D2C;
    case 0x7F2F9D4Cu: goto label_7F2F9D4C;
    case 0x7F2F9D58u: goto label_7F2F9D58;
    case 0x7F2F9DFCu: goto label_7F2F9DFC;
    case 0x7F2F9F10u: goto label_7F2F9F10;
    case 0x7F2F9FB0u: goto label_7F2F9FB0;
    case 0x7F2FA040u: goto label_7F2FA040;
    case 0x7F2FA07Cu: goto label_7F2FA07C;
    case 0x7F2FA094u: goto label_7F2FA094;
    case 0x7F2FA0CCu: goto label_7F2FA0CC;
    case 0x7F2FA18Cu: goto label_7F2FA18C;
    case 0x7F2FA244u: goto label_7F2FA244;
    case 0x7F2FA3BCu: goto label_7F2FA3BC;
    case 0x7F2FA464u: goto label_7F2FA464;
    case 0x7F2FA474u: goto label_7F2FA474;
    case 0x7F2FA484u: goto label_7F2FA484;
    case 0x7F2FA4B4u: goto label_7F2FA4B4;
    case 0x7F2FA4C4u: goto label_7F2FA4C4;
    case 0x7F2FA4FCu: goto label_7F2FA4FC;
    case 0x7F2FA50Cu: goto label_7F2FA50C;
    case 0x7F2FA51Cu: goto label_7F2FA51C;
    case 0x7F2FA590u: goto label_7F2FA590;
    case 0x7F2FA63Cu: goto label_7F2FA63C;
    case 0x7F2FA65Cu: goto label_7F2FA65C;
    case 0x7F2FA668u: goto label_7F2FA668;
    case 0x7F2FA670u: goto label_7F2FA670;
    case 0x7F2FA680u: goto label_7F2FA680;
    case 0x7F2FA690u: goto label_7F2FA690;
    case 0x7F2FA700u: goto label_7F2FA700;
    case 0x7F2FA728u: goto label_7F2FA728;
    case 0x7F2FA7A4u: goto label_7F2FA7A4;
    case 0x7F2FA7ECu: goto label_7F2FA7EC;
    case 0x7F2FA874u: goto label_7F2FA874;
    case 0x7F2FA8B0u: goto label_7F2FA8B0;
    case 0x7F2FA8BCu: goto label_7F2FA8BC;
    case 0x7F2FA8CCu: goto label_7F2FA8CC;
    case 0x7F2FA8E0u: goto label_7F2FA8E0;
    case 0x7F2FA930u: goto label_7F2FA930;
    case 0x7F2FA948u: goto label_7F2FA948;
    case 0x7F2FA9A4u: goto label_7F2FA9A4;
    case 0x7F2FAA70u: goto label_7F2FAA70;
    case 0x7F2FAA88u: goto label_7F2FAA88;
    case 0x7F2FAADCu: goto label_7F2FAADC;
    case 0x7F2FAAECu: goto label_7F2FAAEC;
    case 0x7F2FAB74u: goto label_7F2FAB74;
    case 0x7F2FAB90u: goto label_7F2FAB90;
    case 0x7F2FABF4u: goto label_7F2FABF4;
    case 0x7F2FAC34u: goto label_7F2FAC34;
    case 0x7F2FAC4Cu: goto label_7F2FAC4C;
    case 0x7F2FAC94u: goto label_7F2FAC94;
    case 0x7F2FACA0u: goto label_7F2FACA0;
    case 0x7F2FAD68u: goto label_7F2FAD68;
    case 0x7F2FAD80u: goto label_7F2FAD80;
    case 0x7F2FADE8u: goto label_7F2FADE8;
    case 0x7F2FAE04u: goto label_7F2FAE04;
    case 0x7F2FAE0Cu: goto label_7F2FAE0C;
    case 0x7F2FAE34u: goto label_7F2FAE34;
    case 0x7F2FAFCCu: goto label_7F2FAFCC;
    case 0x7F2FAFD4u: goto label_7F2FAFD4;
    case 0x7F2FAFE4u: goto label_7F2FAFE4;
    case 0x7F2FB004u: goto label_7F2FB004;
    case 0x7F2FB03Cu: goto label_7F2FB03C;
    case 0x7F2FB074u: goto label_7F2FB074;
    case 0x7F2FB164u: goto label_7F2FB164;
    case 0x7F2FB19Cu: goto label_7F2FB19C;
    case 0x7F2FB1ACu: goto label_7F2FB1AC;
    case 0x7F2FB230u: goto label_7F2FB230;
    case 0x7F2FB320u: goto label_7F2FB320;
    case 0x7F2FB360u: goto label_7F2FB360;
    case 0x7F2FB4E8u: goto label_7F2FB4E8;
    case 0x7F2FB500u: goto label_7F2FB500;
    case 0x7F2FB50Cu: goto label_7F2FB50C;
    case 0x7F2FB51Cu: goto label_7F2FB51C;
    case 0x7F2FB538u: goto label_7F2FB538;
    case 0x7F2FB574u: goto label_7F2FB574;
    case 0x7F2FB580u: goto label_7F2FB580;
    case 0x7F2FB590u: goto label_7F2FB590;
    case 0x7F2FB5C8u: goto label_7F2FB5C8;
    case 0x7F2FB5D8u: goto label_7F2FB5D8;
    case 0x7F2FB5F4u: goto label_7F2FB5F4;
    case 0x7F2FB654u: goto label_7F2FB654;
    case 0x7F2FB690u: goto label_7F2FB690;
    case 0x7F2FB6A8u: goto label_7F2FB6A8;
    case 0x7F2FB6BCu: goto label_7F2FB6BC;
    case 0x7F2FB7CCu: goto label_7F2FB7CC;
    case 0x7F2FB7DCu: goto label_7F2FB7DC;
    case 0x7F2FB7F4u: goto label_7F2FB7F4;
    case 0x7F2FB850u: goto label_7F2FB850;
    case 0x7F2FB860u: goto label_7F2FB860;
    case 0x7F2FB878u: goto label_7F2FB878;
    case 0x7F2FB8CCu: goto label_7F2FB8CC;
    case 0x7F2FB900u: goto label_7F2FB900;
    case 0x7F2FB988u: goto label_7F2FB988;
    case 0x7F2FB9A8u: goto label_7F2FB9A8;
    case 0x7F2FBAB8u: goto label_7F2FBAB8;
    case 0x7F2FBB38u: goto label_7F2FBB38;
    case 0x7F2FBBB0u: goto label_7F2FBBB0;
    case 0x7F2FBBC0u: goto label_7F2FBBC0;
    case 0x7F2FBBC4u: goto label_7F2FBBC4;
    case 0x7F2FBC14u: goto label_7F2FBC14;
    case 0x7F2FBC68u: goto label_7F2FBC68;
    case 0x7F2FBCBCu: goto label_7F2FBCBC;
    case 0x7F2FBD48u: goto label_7F2FBD48;
    case 0x7F2FBD54u: goto label_7F2FBD54;
    case 0x7F2FC0B8u: goto label_7F2FC0B8;
    case 0x7F2FC0C0u: goto label_7F2FC0C0;
    case 0x7F2FC0C8u: goto label_7F2FC0C8;
    default: return;
    }
}

